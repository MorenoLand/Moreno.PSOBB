#include "protos.h"

void f_0068304c(void) /* sub_68304C */
{
    FN_ENTER(0x0068304c);
    /* 0068304c: mov dword ptr [0xa90520], 0x3f800000 */ W32((u32)(0xa90520u), 0x3f800000u);
    /* 00683056: mov dword ptr [0xa90524], 0x41000000 */ W32((u32)(0xa90524u), 0x41000000u);
    /* 00683060: mov dword ptr [0xa90528], 0x3fc00000 */ W32((u32)(0xa90528u), 0x3fc00000u);
    /* 0068306a: ret  */ FN_RET(0x0068304c); r_esp += 4; return;
}

void f_0068306c(void) /* sub_68306C */
{
    FN_ENTER(0x0068306c);
    /* 0068306c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068306d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068306f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00683071: call 0x683090 */ r_esp -= 4; W32(r_esp, 0x683076u); f_00683090();
    /* 00683076: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068307a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068307c: jne 0x683082 */ if (!fZ) goto L_00683082;
L_0068307e:; BB(0x0068307e);
    /* 0068307e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068307f: ret 4 */ FN_RET(0x0068306c); r_esp += 8; return;
L_00683082:; BB(0x00683082);
    /* 00683082: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683083: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x683088u); f_005c2f74();
    /* 00683088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683089: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068308a: ret 4 */ FN_RET(0x0068306c); r_esp += 8; return;
}

void f_00683090(void) /* sub_683090 */
{
    FN_ENTER(0x00683090);
    /* 00683090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00683091: mov ebp, esp */ r_ebp = r_esp;
    /* 00683093: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00683095: push 0x8ea8ec */ { u32 v = 0x8ea8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0068309a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006830a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006830a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006830a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006830ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006830ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006830b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006830b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006830b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006830ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006830bd: mov dword ptr [ecx], 0xb38b10 */ W32((u32)(r_ecx), 0xb38b10u);
    /* 006830c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006830ca: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6830cfu); f_007ba1f0();
    /* 006830cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006830d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006830d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006830db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006830dc: ret  */ FN_RET(0x00683090); r_esp += 4; return;
}

void f_006830e0(void) /* sub_6830E0 */
{
    FN_ENTER(0x006830e0);
    /* 006830e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006830e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006830e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006830e5: push 0x8ea908 */ { u32 v = 0x8ea908u; r_esp -= 4; W32(r_esp, v); }
    /* 006830ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006830f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006830f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006830f8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006830fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006830fe: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00683101: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00683104: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00683107: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068310a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068310d: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00683111: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00683114: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00683117: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068311a: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x68311fu); f_007ba278();
    /* 0068311f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683126: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00683129: mov dword ptr [edx], 0xb38b10 */ W32((u32)(r_edx), 0xb38b10u);
    /* 0068312f: mov ecx, dword ptr [0x9cb880] */ r_ecx = R32((u32)(0x9cb880u));
    /* 00683135: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 0068313a: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068313d: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00683143: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 00683146: mov dword ptr [edx + 0x34], esi */ W32((u32)(r_edx+0x34u), r_esi);
    /* 00683149: mov edi, dword ptr [eax + 0x430] */ r_edi = R32((u32)(r_eax+0x430u));
    /* 0068314f: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 00683152: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 0068315c: mov dword ptr [edx + 0x90], ecx */ W32((u32)(r_edx+0x90u), r_ecx);
    /* 00683162: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 00683165: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 00683168: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068316b: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068316e: fadd dword ptr [ebx*4 + 0x93c318] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x93c318u));
    /* 00683175: fadd dword ptr [0x93c388] */ ST(0) = ST(0) + R_F32((u32)(0x93c388u));
    /* 0068317b: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00683181: mov dword ptr [edx + 0x98], 0x3dcccccd */ W32((u32)(r_edx+0x98u), 0x3dcccccdu);
    /* 0068318b: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00683191: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00683194: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00683197: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 0068319e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006831a0: mov eax, dword ptr [ecx*8 + 0x9cb820] */ r_eax = R32((u32)(r_ecx*8+0x9cb820u));
    /* 006831a7: mov dword ptr [edx + 0x6c], 0x3f800000 */ W32((u32)(r_edx+0x6cu), 0x3f800000u);
    /* 006831ae: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 006831b4: mov eax, dword ptr [ecx*8 + 0x9cb824] */ r_eax = R32((u32)(r_ecx*8+0x9cb824u));
    /* 006831bb: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 006831c2: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 006831c8: mov eax, dword ptr [ecx*8 + 0x9cb828] */ r_eax = R32((u32)(r_ecx*8+0x9cb828u));
    /* 006831cf: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 006831d5: mov eax, dword ptr [ecx*8 + 0x9cb82c] */ r_eax = R32((u32)(r_ecx*8+0x9cb82cu));
    /* 006831dc: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 006831e2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006831e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006831e6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6831ebu); f_007b4d18();
    /* 006831eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006831ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006831ee: je 0x68320e */ if (fZ) goto L_0068320e;
L_006831f0:; BB(0x006831f0);
    /* 006831f0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006831f3: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006831f6: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 006831fc: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006831ff: mov dword ptr [ebx + 0xbc], ecx */ W32((u32)(r_ebx+0xbcu), r_ecx);
    /* 00683205: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683208: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
L_0068320e:; BB(0x0068320e);
    /* 0068320e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00683211: fld dword ptr [0x93c37c] */ FPUSH(R_F32((u32)(0x93c37cu)));
    /* 00683217: fadd dword ptr [eax + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xbcu));
    /* 0068321d: fstp dword ptr [eax + 0xbc] */ W_F32((u32)(r_eax+0xbcu), ST(0)); FPOP();
    /* 00683223: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683225: mov dword ptr [eax + 0xc4], 0x37 */ W32((u32)(r_eax+0xc4u), 0x37u);
    /* 0068322f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683230: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 00683236: mov dword ptr [eax + 0xc8], 0x3dcccccd */ W32((u32)(r_eax+0xc8u), 0x3dcccccdu);
    /* 00683240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683241: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 00683247: mov dword ptr [eax + 0xcc], 2 */ W32((u32)(r_eax+0xccu), 0x2u);
    /* 00683251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683252: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683257: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68325cu); f_00814298();
    /* 0068325c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068325f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00683262: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683265: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683268: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068326b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068326e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00683275: mov esp, ebp */ r_esp = r_ebp;
    /* 00683277: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683278: ret 0xc */ FN_RET(0x006830e0); r_esp += 16; return;
}

void f_0068327c(void) /* sub_68327C */
{
    FN_ENTER(0x0068327c);
    /* 0068327c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068327d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068327e: mov edi, ecx */ r_edi = r_ecx;
    /* 00683280: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00683284: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00683288: mov ecx, edi */ r_ecx = r_edi;
    /* 0068328a: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x68328fu); f_007ba278();
    /* 0068328f: mov dword ptr [edi], 0xb38b10 */ W32((u32)(r_edi), 0xb38b10u);
    /* 00683295: mov eax, dword ptr [0x9cb880] */ r_eax = R32((u32)(0x9cb880u));
    /* 0068329a: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0068329d: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 006832a2: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006832a8: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 006832ab: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 006832ae: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 006832b4: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 006832b7: mov dword ptr [edi + 0x9c], 0 */ W32((u32)(r_edi+0x9cu), 0x0u);
    /* 006832c1: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006832c7: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 006832ca: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006832cd: mov dword ptr [edi + 0x98], 0x3dcccccd */ W32((u32)(r_edi+0x98u), 0x3dcccccdu);
    /* 006832d7: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006832da: fadd dword ptr [ecx*4 + 0x93c308] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x93c308u));
    /* 006832e1: fadd dword ptr [0x93c360] */ ST(0) = ST(0) + R_F32((u32)(0x93c360u));
    /* 006832e7: fstp dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0)); FPOP();
    /* 006832ed: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 006832f3: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006832f6: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 006832fd: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00683300: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00683304: mov dword ptr [edi + 0x6c], 0x3f800000 */ W32((u32)(r_edi+0x6cu), 0x3f800000u);
    /* 0068330b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0068330e: mov eax, dword ptr [edx*8 + 0x9cb820] */ r_eax = R32((u32)(r_edx*8+0x9cb820u));
    /* 00683315: mov dword ptr [edi + 0x70], 0 */ W32((u32)(r_edi+0x70u), 0x0u);
    /* 0068331c: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 00683322: mov eax, dword ptr [edx*8 + 0x9cb824] */ r_eax = R32((u32)(r_edx*8+0x9cb824u));
    /* 00683329: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 0068332f: mov eax, dword ptr [edx*8 + 0x9cb828] */ r_eax = R32((u32)(r_edx*8+0x9cb828u));
    /* 00683336: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 0068333c: mov eax, dword ptr [edx*8 + 0x9cb82c] */ r_eax = R32((u32)(r_edx*8+0x9cb82cu));
    /* 00683343: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00683349: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068334c: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00683352: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00683355: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0068335b: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0068335e: mov dword ptr [edi + 0xc8], 0x3d23d70a */ W32((u32)(r_edi+0xc8u), 0x3d23d70au);
    /* 00683368: mov dword ptr [edi + 0xc0], ebp */ W32((u32)(r_edi+0xc0u), r_ebp);
    /* 0068336e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00683370: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 00683376: mov dword ptr [edi + 0xcc], 0xffffff */ W32((u32)(r_edi+0xccu), 0xffffffu);
    /* 00683380: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 00683386: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068338a: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 00683390: mov eax, edi */ r_eax = r_edi;
    /* 00683392: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683393: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683394: ret 0x10 */ FN_RET(0x0068327c); r_esp += 20; return;
}

void f_00683338(void)
{
    FN_ENTER(0x00683338);
    /* 00683338: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 0068333a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0068333c: mov eax, dword ptr [edx*8 + 0x9cb82c] */ r_eax = R32((u32)(r_edx*8+0x9cb82cu));
    /* 00683343: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00683349: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068334c: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00683352: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00683355: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0068335b: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0068335e: mov dword ptr [edi + 0xc8], 0x3d23d70a */ W32((u32)(r_edi+0xc8u), 0x3d23d70au);
    /* 00683368: mov dword ptr [edi + 0xc0], ebp */ W32((u32)(r_edi+0xc0u), r_ebp);
    /* 0068336e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00683370: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 00683376: mov dword ptr [edi + 0xcc], 0xffffff */ W32((u32)(r_edi+0xccu), 0xffffffu);
    /* 00683380: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 00683386: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068338a: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 00683390: mov eax, edi */ r_eax = r_edi;
    /* 00683392: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683393: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683394: ret 0x10 */ FN_RET(0x00683338); r_esp += 20; return;
}

void f_00683398(void) /* sub_683398 */
{
    FN_ENTER(0x00683398);
    /* 00683398: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068339a: mov edi, ecx */ r_edi = r_ecx;
    /* 0068339c: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 006833a0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006833a4: mov ecx, edi */ r_ecx = r_edi;
    /* 006833a6: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6833abu); f_007ba278();
    /* 006833ab: mov dword ptr [edi], 0xb38b10 */ W32((u32)(r_edi), 0xb38b10u);
    /* 006833b1: mov eax, dword ptr [0x9cb880] */ r_eax = R32((u32)(0x9cb880u));
    /* 006833b6: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006833b9: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 006833be: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006833c4: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 006833c7: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 006833ca: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 006833d0: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 006833d3: mov dword ptr [edi + 0x9c], 0 */ W32((u32)(r_edi+0x9cu), 0x0u);
    /* 006833dd: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006833e3: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 006833e6: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006833e9: mov dword ptr [edi + 0x98], 0x3dcccccd */ W32((u32)(r_edi+0x98u), 0x3dcccccdu);
    /* 006833f3: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006833f6: fadd dword ptr [ecx*4 + 0x93c300] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x93c300u));
    /* 006833fd: fadd dword ptr [0x93c34c] */ ST(0) = ST(0) + R_F32((u32)(0x93c34cu));
    /* 00683403: fstp dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0)); FPOP();
    /* 00683409: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0068340f: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00683412: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 00683419: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0068341c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00683420: mov dword ptr [edi + 0x6c], 0x3f800000 */ W32((u32)(r_edi+0x6cu), 0x3f800000u);
    /* 00683427: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0068342a: mov eax, dword ptr [edx*8 + 0x9cb820] */ r_eax = R32((u32)(r_edx*8+0x9cb820u));
    /* 00683431: mov dword ptr [edi + 0x70], 0 */ W32((u32)(r_edi+0x70u), 0x0u);
    /* 00683438: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 0068343e: mov eax, dword ptr [edx*8 + 0x9cb824] */ r_eax = R32((u32)(r_edx*8+0x9cb824u));
    /* 00683445: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 0068344b: mov eax, dword ptr [edx*8 + 0x9cb828] */ r_eax = R32((u32)(r_edx*8+0x9cb828u));
    /* 00683452: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 00683458: mov eax, dword ptr [edx*8 + 0x9cb82c] */ r_eax = R32((u32)(r_edx*8+0x9cb82cu));
    /* 0068345f: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00683465: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00683468: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 0068346e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00683471: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00683477: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0068347a: mov dword ptr [edi + 0xcc], 0xffffff */ W32((u32)(r_edi+0xccu), 0xffffffu);
    /* 00683484: mov dword ptr [edi + 0xc0], ebp */ W32((u32)(r_edi+0xc0u), r_ebp);
    /* 0068348a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068348c: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 00683492: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 00683498: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068349c: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 006834a2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006834a6: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 006834ac: mov eax, edi */ r_eax = r_edi;
    /* 006834ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006834af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006834b0: ret 0x14 */ FN_RET(0x00683398); r_esp += 24; return;
}

void f_006834b4(void) /* sub_6834B4 */
{
    FN_ENTER(0x006834b4);
    /* 006834b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006834b5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006834b8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006834ba: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 006834c0: mov edx, dword ptr [ebx + 0xc4] */ r_edx = R32((u32)(r_ebx+0xc4u));
    /* 006834c6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006834c8: jbe 0x6834db */ if ((fC||fZ)) goto L_006834db;
L_006834ca:; BB(0x006834ca);
    /* 006834ca: mov dword ptr [ebx + 0xb4], 1 */ W32((u32)(r_ebx+0xb4u), 0x1u);
    /* 006834d4: mov eax, 1 */ r_eax = 0x1u;
    /* 006834d9: jmp 0x6834e1 */ goto L_006834e1;
L_006834db:; BB(0x006834db);
    /* 006834db: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
L_006834e1:; BB(0x006834e1);
    /* 006834e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006834e3: jne 0x683553 */ if (!fZ) goto L_00683553;
L_006834e5:; BB(0x006834e5);
    /* 006834e5: fld dword ptr [0x93c33c] */ FPUSH(R_F32((u32)(0x93c33cu)));
    /* 006834eb: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 006834f1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006834f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006834f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006834f6: jae 0x68350c */ if (!fC) goto L_0068350c;
L_006834f8:; BB(0x006834f8);
    /* 006834f8: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 006834fe: fmul dword ptr [0x93c338] */ ST(0) = ST(0) * R_F32((u32)(0x93c338u));
    /* 00683504: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00683506: fst dword ptr [ebx + 0xa0] */ W_F32((u32)(r_ebx+0xa0u), ST(0));
L_0068350c:; BB(0x0068350c);
    /* 0068350c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068350e: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00683511: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00683513: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00683515: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683517: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683519: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068351a: jae 0x68353c */ if (!fC) goto L_0068353c;
L_0068351c:; BB(0x0068351c);
    /* 0068351c: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 00683522: fmul dword ptr [0x93c338] */ ST(0) = ST(0) * R_F32((u32)(0x93c338u));
    /* 00683528: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0068352a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0068352c: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 0068352f: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 00683532: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00683534: fstp dword ptr [ebx + 0x70] */ W_F32((u32)(r_ebx+0x70u), ST(0)); FPOP();
    /* 00683537: jmp 0x6835fb */ goto L_006835fb;
L_0068353c:; BB(0x0068353c);
    /* 0068353c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068353e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00683543: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00683548: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 0068354b: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 0068354e: jmp 0x6835fb */ goto L_006835fb;
L_00683553:; BB(0x00683553);
    /* 00683553: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683556: jne 0x6835fb */ if (!fZ) goto L_006835fb;
L_0068355c:; BB(0x0068355c);
    /* 0068355c: fld dword ptr [0x93c340] */ FPUSH(R_F32((u32)(0x93c340u)));
    /* 00683562: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 00683568: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0068356a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068356c: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 00683572: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683573: jbe 0x683581 */ if ((fC||fZ)) goto L_00683581;
L_00683575:; BB(0x00683575);
    /* 00683575: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00683577: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00683579: fst dword ptr [ebx + 0xa0] */ W_F32((u32)(r_ebx+0xa0u), ST(0));
    /* 0068357f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00683581:; BB(0x00683581);
    /* 00683581: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00683583: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00683586: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00683588: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0068358a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068358c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068358e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068358f: jbe 0x6835a4 */ if ((fC||fZ)) goto L_006835a4;
L_00683591:; BB(0x00683591);
    /* 00683591: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00683593: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 00683596: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00683598: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 0068359b: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0068359d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0068359f: fstp dword ptr [ebx + 0x70] */ W_F32((u32)(r_ebx+0x70u), ST(0)); FPOP();
    /* 006835a2: jmp 0x6835b0 */ goto L_006835b0;
L_006835a4:; BB(0x006835a4);
    /* 006835a4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006835a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006835a8: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 006835ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006835ad: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
L_006835b0:; BB(0x006835b0);
    /* 006835b0: fld dword ptr [0x93c33c] */ FPUSH(R_F32((u32)(0x93c33cu)));
    /* 006835b6: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006835b8: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006835bb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006835be: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006835c2: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006835c6: mov eax, ecx */ r_eax = r_ecx;
    /* 006835c8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006835cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006835cd: fadd dword ptr [eax*4 + 0x93c2f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x93c2f8u));
    /* 006835d4: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006835d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006835d9: fadd dword ptr [edx*4 + 0x93c2f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93c2f8u));
    /* 006835e0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006835e2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006835e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006835e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006835e7: jbe 0x6835fb */ if ((fC||fZ)) goto L_006835fb;
L_006835e9:; BB(0x006835e9);
    /* 006835e9: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006835ed: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006835f2: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006835f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006835f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006835fa: ret  */ FN_RET(0x006834b4); r_esp += 4; return;
L_006835fb:; BB(0x006835fb);
    /* 006835fb: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 00683601: fcom dword ptr [ebx + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x94u))); 
    /* 00683607: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683609: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068360c: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 00683612: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683613: jae 0x683628 */ if (!fC) goto L_00683628;
L_00683615:; BB(0x00683615);
    /* 00683615: fld dword ptr [ebx + 0x98] */ FPUSH(R_F32((u32)(r_ebx+0x98u)));
    /* 0068361b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068361d: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 00683623: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00683626: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683627: ret  */ FN_RET(0x006834b4); r_esp += 4; return;
L_00683628:; BB(0x00683628);
    /* 00683628: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068362a: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 00683634: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00683637: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683638: ret  */ FN_RET(0x006834b4); r_esp += 4; return;
}

void f_0068363c(void) /* sub_68363C */
{
    FN_ENTER(0x0068363c);
    /* 0068363c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068363d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068363e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068363f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683641: mov edi, ecx */ r_edi = r_ecx;
    /* 00683643: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x683648u); f_0082dbac();
    /* 00683648: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x68364du); f_0082d7b0();
    /* 0068364d: lea ecx, [edi + 0xb8] */ r_ecx = (u32)(r_edi+0xb8u);
    /* 00683653: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x683658u); f_0082d838();
    /* 00683658: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0068365b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068365d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x683662u); f_0082d8bc();
    /* 00683662: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00683665: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x68366au); f_00829cc8();
    /* 0068366a: lea ecx, [edi + 0x68] */ r_ecx = (u32)(r_edi+0x68u);
    /* 0068366d: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x683672u); f_00831290();
    /* 00683672: fld dword ptr [0x93c334] */ FPUSH(R_F32((u32)(0x93c334u)));
    /* 00683678: fcom dword ptr [edi + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x68u))); 
    /* 0068367b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068367d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068367e: je 0x68377c */ if (fZ) goto L_0068377c;
L_00683684:; BB(0x00683684);
    /* 00683684: fcomp dword ptr [edi + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x70u))); FPOP();
    /* 00683687: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683689: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068368a: je 0x68376c */ if (fZ) goto L_0068376c;
L_00683690:; BB(0x00683690);
    /* 00683690: fld dword ptr [edi + 0xa0] */ FPUSH(R_F32((u32)(r_edi+0xa0u)));
    /* 00683696: mov esi, dword ptr [edi + 0xa0] */ r_esi = R32((u32)(r_edi+0xa0u));
    /* 0068369c: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 006836a2: mov ebx, dword ptr [edi + 0xa8] */ r_ebx = R32((u32)(r_edi+0xa8u));
    /* 006836a8: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 006836ae: mov ecx, dword ptr [edi + 0xcc] */ r_ecx = R32((u32)(r_edi+0xccu));
    /* 006836b4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006836b7: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006836bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006836bf: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006836bf, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006836bf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006836c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006836c3: jne 0x6836e3 */ if (!fZ) goto L_006836e3;
L_006836c5:; BB(0x006836c5);
    /* 006836c5: mov dword ptr [edi + 0xa4], 0x3f000000 */ W32((u32)(r_edi+0xa4u), 0x3f000000u);
    /* 006836cf: mov dword ptr [edi + 0xa8], 0x3f000000 */ W32((u32)(r_edi+0xa8u), 0x3f000000u);
    /* 006836d9: mov dword ptr [edi + 0xac], 0x3f000000 */ W32((u32)(r_edi+0xacu), 0x3f000000u);
L_006836e3:; BB(0x006836e3);
    /* 006836e3: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 006836e9: fld dword ptr [0x93c32c] */ FPUSH(R_F32((u32)(0x93c32cu)));
    /* 006836ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006836f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006836f3: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 006836f9: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006836fc: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00683702: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683703: ja 0x683707 */ if ((!fC&&!fZ)) goto L_00683707;
L_00683705:; BB(0x00683705);
    /* 00683705: fst st(1) */ ST(1) = ST(0);
L_00683707:; BB(0x00683707);
    /* 00683707: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683709: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 0068370f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x683714u); f_0082fa9c();
    /* 00683714: lea eax, [edi + 0xa0] */ r_eax = (u32)(r_edi+0xa0u);
    /* 0068371a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068371b: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x683720u); f_0082d710();
    /* 00683720: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00683726: push dword ptr [edi + 0x90] */ { u32 v = R32((u32)(r_edi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068372c: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068372f: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x683734u); f_0083046c();
    /* 00683734: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683737: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x68373cu); f_0082faac();
    /* 0068373c: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683741: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x683746u); f_0082d710();
    /* 00683746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683747: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0068374c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0068374f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00683754: mov dword ptr [edi + 0xa0], esi */ W32((u32)(r_edi+0xa0u), r_esi);
    /* 0068375a: mov dword ptr [edi + 0xa4], ebp */ W32((u32)(r_edi+0xa4u), r_ebp);
    /* 00683760: mov dword ptr [edi + 0xa8], ebx */ W32((u32)(r_edi+0xa8u), r_ebx);
    /* 00683766: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
L_0068376c:; BB(0x0068376c);
    /* 0068376c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x683771u); f_0082da80();
    /* 00683771: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x683776u); f_0082dab0();
    /* 00683776: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683777: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683779: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068377a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068377b: ret  */ FN_RET(0x0068363c); r_esp += 4; return;
L_0068377c:; BB(0x0068377c);
    /* 0068377c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068377e: jmp 0x68376c */ goto L_0068376c;
}

void f_00683780(void) /* sub_683780 */
{
    FN_ENTER(0x00683780);
    /* 00683780: mov dword ptr [0xa90530], 0x3f800000 */ W32((u32)(0xa90530u), 0x3f800000u);
    /* 0068378a: mov dword ptr [0xa90534], 0x41000000 */ W32((u32)(0xa90534u), 0x41000000u);
    /* 00683794: mov dword ptr [0xa90538], 0x3fc00000 */ W32((u32)(0xa90538u), 0x3fc00000u);
    /* 0068379e: ret  */ FN_RET(0x00683780); r_esp += 4; return;
}

void f_006837a0(void) /* sub_6837A0 */
{
    FN_ENTER(0x006837a0);
    /* 006837a0: mov dword ptr [0xa90540], 0x3f800000 */ W32((u32)(0xa90540u), 0x3f800000u);
    /* 006837aa: mov dword ptr [0xa90544], 0x41000000 */ W32((u32)(0xa90544u), 0x41000000u);
    /* 006837b4: mov dword ptr [0xa90548], 0x3fc00000 */ W32((u32)(0xa90548u), 0x3fc00000u);
    /* 006837be: ret  */ FN_RET(0x006837a0); r_esp += 4; return;
}

void f_006837c0(void) /* sub_6837C0 */
{
    FN_ENTER(0x006837c0);
    /* 006837c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006837c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006837c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006837c5: call 0x6837e4 */ r_esp -= 4; W32(r_esp, 0x6837cau); f_006837e4();
    /* 006837ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006837ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006837d0: jne 0x6837d6 */ if (!fZ) goto L_006837d6;
L_006837d2:; BB(0x006837d2);
    /* 006837d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006837d3: ret 4 */ FN_RET(0x006837c0); r_esp += 8; return;
L_006837d6:; BB(0x006837d6);
    /* 006837d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006837d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6837dcu); f_005c2f74();
    /* 006837dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006837dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006837de: ret 4 */ FN_RET(0x006837c0); r_esp += 8; return;
}

void f_006837e4(void) /* sub_6837E4 */
{
    FN_ENTER(0x006837e4);
    /* 006837e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006837e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006837e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006837e9: push 0x8ea924 */ { u32 v = 0x8ea924u; r_esp -= 4; W32(r_esp, v); }
    /* 006837ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006837f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006837f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006837fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006837ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00683802: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00683805: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00683808: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0068380b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0068380e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683815: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683818: mov dword ptr [ecx], 0xb38bd8 */ W32((u32)(r_ecx), 0xb38bd8u);
    /* 0068381e: call dword ptr [0xb38c0c] */ { u32 t = R32((u32)(0xb38c0cu)); r_esp -= 4; W32(r_esp, 0x683824u); call_ind(t); }
    /* 00683824: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683827: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x68382cu); f_0067cc20();
    /* 0068382c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00683833: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683836: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x68383bu); f_0067c61c();
    /* 0068383b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068383e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00683845: mov esp, ebp */ r_esp = r_ebp;
    /* 00683847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683848: ret  */ FN_RET(0x006837e4); r_esp += 4; return;
}

void f_0068384c(void) /* sub_68384C */
{
    FN_ENTER(0x0068384c);
    /* 0068384c: mov dword ptr [0xa90558], 0 */ W32((u32)(0xa90558u), 0x0u);
    /* 00683856: ret  */ FN_RET(0x0068384c); r_esp += 4; return;
}

void f_00683858(void) /* sub_683858 */
{
    FN_ENTER(0x00683858);
    /* 00683858: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00683859: mov ebp, esp */ r_ebp = r_esp;
    /* 0068385b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068385d: push 0x8ea9ac */ { u32 v = 0x8ea9acu; r_esp -= 4; W32(r_esp, v); }
    /* 00683862: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00683868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683869: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00683870: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00683873: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00683876: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00683879: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0068387c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0068387f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00683882: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00683885: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00683888: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x68388du); f_0067c674();
    /* 0068388d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683894: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683897: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0068389a: mov dword ptr [eax], 0xb38bd8 */ W32((u32)(r_eax), 0xb38bd8u);
    /* 006838a0: mov edx, dword ptr [0x9cb8a0] */ r_edx = R32((u32)(0x9cb8a0u));
    /* 006838a6: mov dword ptr [eax + 0x138], 5 */ W32((u32)(r_eax+0x138u), 0x5u);
    /* 006838b0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006838b3: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 006838b5: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 006838b8: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 006838bb: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 006838be: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 006838c1: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 006838c4: movzx edx, word ptr [edi + 0xc] */ r_edx = (u32)R16((u32)(r_edi+0xcu));
    /* 006838c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006838c9: mov word ptr [eax + 0x17c], dx */ W16((u32)(r_eax+0x17cu), (u16)r_edx);
    /* 006838d0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6838d5u); f_007b4d18();
    /* 006838d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006838d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006838d9: mov dword ptr [ecx + 0x180], eax */ W32((u32)(r_ecx+0x180u), r_eax);
    /* 006838df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006838e1: je 0x6838e9 */ if (fZ) goto L_006838e9;
L_006838e3:; BB(0x006838e3);
    /* 006838e3: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 006838e6: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_006838e9:; BB(0x006838e9);
    /* 006838e9: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 006838ef: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 006838f5: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 006838fb: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006838fe: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 00683904: mov esi, dword ptr [ebx + 0xac] */ r_esi = R32((u32)(r_ebx+0xacu));
    /* 0068390a: mov dword ptr [ecx + 0xd8], 0x9cb8a4 */ W32((u32)(r_ecx+0xd8u), 0x9cb8a4u);
    /* 00683914: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00683917: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0068391d: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00683923: mov eax, 1 */ r_eax = 0x1u;
    /* 00683928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683929: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00683930: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x683935u); f_007aa4c8();
    /* 00683935: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683938: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068393b: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00683940: movzx esi, word ptr [ebx + 0xb8] */ r_esi = (u32)R16((u32)(r_ebx+0xb8u));
    /* 00683947: mov word ptr [ebx + 0xb8], si */ W16((u32)(r_ebx+0xb8u), (u16)r_esi);
    /* 0068394e: mov esi, dword ptr [0x93c408] */ r_esi = R32((u32)(0x93c408u));
    /* 00683954: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 00683957: mov esi, dword ptr [0x93c414] */ r_esi = R32((u32)(0x93c414u));
    /* 0068395d: mov edi, 1 */ r_edi = 0x1u;
    /* 00683962: mov word ptr [ebx + 0x194], di */ W16((u32)(r_ebx+0x194u), (u16)r_edi);
    /* 00683969: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0068396c: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 0068396f: mov esi, dword ptr [0x93c418] */ r_esi = R32((u32)(0x93c418u));
    /* 00683975: mov dword ptr [ebx + 0x198], ecx */ W32((u32)(r_ebx+0x198u), r_ecx);
    /* 0068397b: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0068397e: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00683981: mov esi, dword ptr [0x93c41c] */ r_esi = R32((u32)(0x93c41cu));
    /* 00683987: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 0068398a: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0068398d: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 00683990: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00683993: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00683996: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00683999: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 0068399c: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0068399f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006839a2: mov dword ptr [ebx + 0x19c], eax */ W32((u32)(r_ebx+0x19cu), r_eax);
    /* 006839a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006839aa: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006839ad: mov dword ptr [ebx + 0x1a0], edx */ W32((u32)(r_ebx+0x1a0u), r_edx);
    /* 006839b3: movzx ebx, word ptr [ebx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ebx+0x17cu));
    /* 006839ba: mov word ptr [ebp - 0x64], bx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_ebx);
    /* 006839be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6839c3u); f_005caba4();
    /* 006839c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006839c4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006839c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006839c9: je 0x6839eb */ if (fZ) goto L_006839eb;
L_006839cb:; BB(0x006839cb);
    /* 006839cb: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006839d2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006839d9: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 006839dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006839dd: mov ecx, eax */ r_ecx = r_eax;
    /* 006839df: call 0x684d10 */ r_esp -= 4; W32(r_esp, 0x6839e4u); f_00684d10();
    /* 006839e4: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006839eb:; BB(0x006839eb);
    /* 006839eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006839f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006839f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006839f8: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 006839fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006839fd: call 0x680ed0 */ r_esp -= 4; W32(r_esp, 0x683a02u); f_00680ed0();
    /* 00683a02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683a05: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00683a07: mov dword ptr [ecx + 0x134], 3 */ W32((u32)(r_ecx+0x134u), 0x3u);
    /* 00683a11: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x683a14u); call_ind(t); }
    /* 00683a14: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683a17: mov dword ptr [eax + 0x1a4], 0 */ W32((u32)(r_eax+0x1a4u), 0x0u);
    /* 00683a21: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x683a26u); f_00807ac0();
    /* 00683a26: lea edx, [eax - 0xb] */ r_edx = (u32)(r_eax+0xfffffff5u);
    /* 00683a29: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00683a2c: ja 0x683a80 */ if ((!fC&&!fZ)) goto L_00683a80;
L_00683a2e:; BB(0x00683a2e);
    /* 00683a2e: mov eax, dword ptr [eax*4 + 0x93c374] */ r_eax = R32((u32)(r_eax*4+0x93c374u));
    /* 00683a35: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00683a80:; BB(0x00683a80);
    /* 00683a80: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00683a87: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00683a8c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683a91u); f_005caba4();
    /* 00683a91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683a92: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00683a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a97: je 0x683ac0 */ if (fZ) goto L_00683ac0;
L_00683a99:; BB(0x00683a99);
    /* 00683a99: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00683aa0: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00683aa7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683aaa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00683aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683aaf: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00683ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683ab3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683ab4: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x683ab9u); f_00684ab0();
    /* 00683ab9: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00683ac0:; BB(0x00683ac0);
    /* 00683ac0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683ac7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683aca: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00683ad0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683ad3: jne 0x683ae4 */ if (!fZ) goto L_00683ae4;
L_00683ad5:; BB(0x00683ad5);
    /* 00683ad5: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00683adb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683ade: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00683ae4:; BB(0x00683ae4);
    /* 00683ae4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683ae7: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00683aea: mov ebx, dword ptr [ecx + 0x198] */ r_ebx = R32((u32)(r_ecx+0x198u));
    /* 00683af0: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00683af6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683af8: jne 0x683bc1 */ if (!fZ) goto L_00683bc1;
L_00683afe:; BB(0x00683afe);
    /* 00683afe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683b02: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00683b09: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x683b0eu); f_0067c75c();
    /* 00683b0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683b11: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00683b18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683b19: mov edx, 1 */ r_edx = 0x1u;
    /* 00683b1e: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00683b24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683b26: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00683b2d: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00683b33: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683b38u); f_007b4d18();
    /* 00683b38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683b3b: je 0x683b4f */ if (fZ) goto L_00683b4f;
L_00683b3d:; BB(0x00683b3d);
    /* 00683b3d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00683b40: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00683b43: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683b46: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00683b49: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00683b4c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00683b4f:; BB(0x00683b4f);
    /* 00683b4f: fld dword ptr [0x93c45c] */ FPUSH(R_F32((u32)(0x93c45cu)));
    /* 00683b55: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 00683b58: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00683b5b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00683b62: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b67: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683b6cu); f_005caba4();
    /* 00683b6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683b6d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00683b70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683b72: je 0x683ba3 */ if (fZ) goto L_00683ba3;
L_00683b74:; BB(0x00683b74);
    /* 00683b74: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00683b7b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00683b82: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b87: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00683b8a: mov ecx, eax */ r_ecx = r_eax;
    /* 00683b8c: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00683b91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683b92: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b94: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00683b97: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x683b9cu); f_00683398();
    /* 00683b9c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00683ba3:; BB(0x00683ba3);
    /* 00683ba3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683baa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683bad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683baf: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x683bb4u); f_0067d660();
    /* 00683bb4: push 0x93c460 */ { u32 v = 0x93c460u; r_esp -= 4; W32(r_esp, v); }
    /* 00683bb9: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x683bbeu); f_00814f0c();
    /* 00683bbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683bbf: jmp 0x683bdd */ goto L_00683bdd;
L_00683bc1:; BB(0x00683bc1);
    /* 00683bc1: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00683bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683bc9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683bcb: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x683bd0u); f_0067cd64();
    /* 00683bd0: push 0x93c46c */ { u32 v = 0x93c46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00683bd5: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x683bdau); f_00814f0c();
    /* 00683bda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00683bdd:; BB(0x00683bdd);
    /* 00683bdd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683be0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683be3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00683be6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00683be9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00683bec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00683bf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00683bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683bf6: ret 4 */ FN_RET(0x00683858); r_esp += 8; return;
}

void f_00683a37(void)
{
    FN_ENTER(0x00683a37);
    /* 00683a37: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00683a3e: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00683a43: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683a48u); f_005caba4();
    /* 00683a48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683a49: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00683a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a4e: je 0x683a77 */ if (fZ) goto L_00683a77;
L_00683a50:; BB(0x00683a50);
    /* 00683a50: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00683a57: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00683a5e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683a61: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00683a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00683a66: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00683a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683a6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683a6b: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x683a70u); f_00684ab0();
    /* 00683a70: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00683a77:; BB(0x00683a77);
    /* 00683a77: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683a7e: jmp 0x683ac7 */ goto L_00683ac7;
L_00683ac7:; BB(0x00683ac7);
    /* 00683ac7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683aca: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00683ad0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683ad3: jne 0x683ae4 */ if (!fZ) goto L_00683ae4;
L_00683ad5:; BB(0x00683ad5);
    /* 00683ad5: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00683adb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683ade: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00683ae4:; BB(0x00683ae4);
    /* 00683ae4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683ae7: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00683aea: mov ebx, dword ptr [ecx + 0x198] */ r_ebx = R32((u32)(r_ecx+0x198u));
    /* 00683af0: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00683af6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683af8: jne 0x683bc1 */ if (!fZ) goto L_00683bc1;
L_00683afe:; BB(0x00683afe);
    /* 00683afe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683b02: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00683b09: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x683b0eu); f_0067c75c();
    /* 00683b0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683b11: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00683b18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683b19: mov edx, 1 */ r_edx = 0x1u;
    /* 00683b1e: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00683b24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683b26: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00683b2d: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00683b33: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683b38u); f_007b4d18();
    /* 00683b38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683b3b: je 0x683b4f */ if (fZ) goto L_00683b4f;
L_00683b3d:; BB(0x00683b3d);
    /* 00683b3d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00683b40: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00683b43: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683b46: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00683b49: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00683b4c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00683b4f:; BB(0x00683b4f);
    /* 00683b4f: fld dword ptr [0x93c45c] */ FPUSH(R_F32((u32)(0x93c45cu)));
    /* 00683b55: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 00683b58: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00683b5b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00683b62: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b67: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683b6cu); f_005caba4();
    /* 00683b6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683b6d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00683b70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683b72: je 0x683ba3 */ if (fZ) goto L_00683ba3;
L_00683b74:; BB(0x00683b74);
    /* 00683b74: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00683b7b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00683b82: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b87: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00683b8a: mov ecx, eax */ r_ecx = r_eax;
    /* 00683b8c: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00683b91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683b92: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b94: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00683b97: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x683b9cu); f_00683398();
    /* 00683b9c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00683ba3:; BB(0x00683ba3);
    /* 00683ba3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683baa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683bad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683baf: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x683bb4u); f_0067d660();
    /* 00683bb4: push 0x93c460 */ { u32 v = 0x93c460u; r_esp -= 4; W32(r_esp, v); }
    /* 00683bb9: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x683bbeu); f_00814f0c();
    /* 00683bbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683bbf: jmp 0x683bdd */ goto L_00683bdd;
L_00683bc1:; BB(0x00683bc1);
    /* 00683bc1: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00683bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683bc9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683bcb: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x683bd0u); f_0067cd64();
    /* 00683bd0: push 0x93c46c */ { u32 v = 0x93c46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00683bd5: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x683bdau); f_00814f0c();
    /* 00683bda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00683bdd:; BB(0x00683bdd);
    /* 00683bdd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683be0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683be3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00683be6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00683be9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00683bec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00683bf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00683bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683bf6: ret 4 */ FN_RET(0x00683a37); r_esp += 8; return;
}

void f_00683a80(void)
{
    FN_ENTER(0x00683a80);
    /* 00683a80: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00683a87: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00683a8c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683a91u); f_005caba4();
    /* 00683a91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683a92: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00683a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a97: je 0x683ac0 */ if (fZ) goto L_00683ac0;
L_00683a99:; BB(0x00683a99);
    /* 00683a99: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00683aa0: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00683aa7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683aaa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00683aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683aaf: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00683ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683ab3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683ab4: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x683ab9u); f_00684ab0();
    /* 00683ab9: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00683ac0:; BB(0x00683ac0);
    /* 00683ac0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683ac7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683aca: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00683ad0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683ad3: jne 0x683ae4 */ if (!fZ) goto L_00683ae4;
L_00683ad5:; BB(0x00683ad5);
    /* 00683ad5: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00683adb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683ade: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00683ae4:; BB(0x00683ae4);
    /* 00683ae4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683ae7: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00683aea: mov ebx, dword ptr [ecx + 0x198] */ r_ebx = R32((u32)(r_ecx+0x198u));
    /* 00683af0: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00683af6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683af8: jne 0x683bc1 */ if (!fZ) goto L_00683bc1;
L_00683afe:; BB(0x00683afe);
    /* 00683afe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683b02: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00683b09: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x683b0eu); f_0067c75c();
    /* 00683b0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683b11: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00683b18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683b19: mov edx, 1 */ r_edx = 0x1u;
    /* 00683b1e: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00683b24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683b26: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00683b2d: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00683b33: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683b38u); f_007b4d18();
    /* 00683b38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683b3b: je 0x683b4f */ if (fZ) goto L_00683b4f;
L_00683b3d:; BB(0x00683b3d);
    /* 00683b3d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00683b40: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00683b43: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683b46: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00683b49: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00683b4c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00683b4f:; BB(0x00683b4f);
    /* 00683b4f: fld dword ptr [0x93c45c] */ FPUSH(R_F32((u32)(0x93c45cu)));
    /* 00683b55: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 00683b58: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00683b5b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00683b62: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b67: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683b6cu); f_005caba4();
    /* 00683b6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683b6d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00683b70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683b72: je 0x683ba3 */ if (fZ) goto L_00683ba3;
L_00683b74:; BB(0x00683b74);
    /* 00683b74: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00683b7b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00683b82: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b87: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00683b8a: mov ecx, eax */ r_ecx = r_eax;
    /* 00683b8c: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00683b91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683b92: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683b94: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00683b97: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x683b9cu); f_00683398();
    /* 00683b9c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00683ba3:; BB(0x00683ba3);
    /* 00683ba3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683baa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683bad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683baf: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x683bb4u); f_0067d660();
    /* 00683bb4: push 0x93c460 */ { u32 v = 0x93c460u; r_esp -= 4; W32(r_esp, v); }
    /* 00683bb9: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x683bbeu); f_00814f0c();
    /* 00683bbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683bbf: jmp 0x683bdd */ goto L_00683bdd;
L_00683bc1:; BB(0x00683bc1);
    /* 00683bc1: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00683bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683bc9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683bcb: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x683bd0u); f_0067cd64();
    /* 00683bd0: push 0x93c46c */ { u32 v = 0x93c46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00683bd5: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x683bdau); f_00814f0c();
    /* 00683bda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00683bdd:; BB(0x00683bdd);
    /* 00683bdd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00683be0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00683be3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00683be6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00683be9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00683bec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00683bf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00683bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683bf6: ret 4 */ FN_RET(0x00683a80); r_esp += 8; return;
}

void f_00683bfc(void) /* sub_683BFC */
{
    FN_ENTER(0x00683bfc);
    /* 00683bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00683bfd: mov ebp, esp */ r_ebp = r_esp;
    /* 00683bff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00683c01: push 0x8ea9d4 */ { u32 v = 0x8ea9d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00683c06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00683c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683c0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00683c14: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00683c17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00683c1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00683c1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00683c20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00683c23: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00683c26: mov ecx, dword ptr [ecx + 0x1a4] */ r_ecx = R32((u32)(r_ecx+0x1a4u));
    /* 00683c2c: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683c2f: je 0x683ead */ if (fZ) goto L_00683ead;
L_00683c35:; BB(0x00683c35);
    /* 00683c35: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00683c38: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00683c3b: fcomp dword ptr [0x93c448] */ fx_compare(ST(0), R_F32((u32)(0x93c448u))); FPOP();
    /* 00683c41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683c43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683c44: je 0x683e68 */ if (fZ) goto L_00683e68;
L_00683c4a:; BB(0x00683c4a);
    /* 00683c4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683c4d: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
L_00683c54:; BB(0x00683c54);
    /* 00683c54: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683c57: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00683c5e: call 0x67c7d8 */ r_esp -= 4; W32(r_esp, 0x683c63u); f_0067c7d8();
    /* 00683c63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683c66: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x683c6bu); f_007aa094();
    /* 00683c6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683c6e: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x683c73u); f_0067cc34();
    /* 00683c73: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683c76: movzx edx, word ptr [ecx + 0x14c] */ r_edx = (u32)R16((u32)(r_ecx+0x14cu));
    /* 00683c7d: mov ebx, dword ptr [ecx + 0x1a4] */ r_ebx = R32((u32)(r_ecx+0x1a4u));
    /* 00683c83: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00683c86: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00683c89: mov word ptr [ecx + 0x14c], dx */ W16((u32)(r_ecx+0x14cu), (u16)r_edx);
    /* 00683c90: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00683c93: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00683c96: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00683c99: fcom dword ptr [0x93c430] */ fx_compare(ST(0), R_F32((u32)(0x93c430u))); 
    /* 00683c9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683ca1: mov dword ptr [ecx + 0x1a4], ebx */ W32((u32)(r_ecx+0x1a4u), r_ebx);
    /* 00683ca7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683ca8: je 0x683e07 */ if (fZ) goto L_00683e07;
L_00683cae:; BB(0x00683cae);
    /* 00683cae: fcom dword ptr [0x93c440] */ fx_compare(ST(0), R_F32((u32)(0x93c440u))); 
    /* 00683cb4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683cb6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683cb7: je 0x683db3 */ if (fZ) goto L_00683db3;
L_00683cbd:; BB(0x00683cbd);
    /* 00683cbd: fcom dword ptr [0x93c43c] */ fx_compare(ST(0), R_F32((u32)(0x93c43cu))); 
    /* 00683cc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683cc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683cc6: je 0x683d2f */ if (fZ) goto L_00683d2f;
L_00683cc8:; BB(0x00683cc8);
    /* 00683cc8: fcom dword ptr [0x93c42c] */ fx_compare(ST(0), R_F32((u32)(0x93c42cu))); 
    /* 00683cce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683cd0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683cd1: jbe 0x683cf7 */ if ((fC||fZ)) goto L_00683cf7;
L_00683cd3:; BB(0x00683cd3);
    /* 00683cd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683cd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683cd8: fld dword ptr [edx + 0x184] */ FPUSH(R_F32((u32)(r_edx+0x184u)));
    /* 00683cde: fcom dword ptr [0x93c438] */ fx_compare(ST(0), R_F32((u32)(0x93c438u))); 
    /* 00683ce4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00683ce6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00683ce7: jbe 0x683cf7 */ if ((fC||fZ)) goto L_00683cf7;
L_00683ce9:; BB(0x00683ce9);
    /* 00683ce9: fadd dword ptr [0x93c434] */ ST(0) = ST(0) + R_F32((u32)(0x93c434u));
    /* 00683cef: mov eax, edx */ r_eax = r_edx;
    /* 00683cf1: fst dword ptr [eax + 0x184] */ W_F32((u32)(r_eax+0x184u), ST(0));
L_00683cf7:; BB(0x00683cf7);
    /* 00683cf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683cf9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683cfc: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 00683d02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00683d04: je 0x683d1b */ if (fZ) goto L_00683d1b;
L_00683d06:; BB(0x00683d06);
    /* 00683d06: mov edx, eax */ r_edx = r_eax;
    /* 00683d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683d0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683d0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683d0e: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 00683d13: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x683d18u); f_008144b0();
    /* 00683d18: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00683d1b:; BB(0x00683d1b);
    /* 00683d1b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00683d1e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00683d21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00683d24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00683d2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00683d2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683d2e: ret  */ FN_RET(0x00683bfc); r_esp += 4; return;
L_00683d2f:; BB(0x00683d2f);
    /* 00683d2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683d31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683d34: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00683d3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683d3c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683d41u); f_007b4d18();
    /* 00683d41: mov ebx, eax */ r_ebx = r_eax;
    /* 00683d43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683d46: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683d48: je 0x683d5c */ if (fZ) goto L_00683d5c;
L_00683d4a:; BB(0x00683d4a);
    /* 00683d4a: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00683d4d: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00683d50: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00683d53: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00683d56: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00683d59: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
L_00683d5c:; BB(0x00683d5c);
    /* 00683d5c: fld dword ptr [0x93c444] */ FPUSH(R_F32((u32)(0x93c444u)));
    /* 00683d62: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00683d65: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00683d68: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00683d6b: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 00683d70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683d71: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x683d76u); f_0050b510();
    /* 00683d76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683d79: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683d7b: je 0x683da5 */ if (fZ) goto L_00683da5;
L_00683d7d:; BB(0x00683d7d);
    /* 00683d7d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683d80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683d82: push dword ptr [eax + 0x150] */ { u32 v = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 00683d88: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00683d8c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683d8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683d8f: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x683d94u); f_0067d488();
    /* 00683d94: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683d97: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683d9a: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 00683da0: jmp 0x683cc8 */ goto L_00683cc8;
L_00683da5:; BB(0x00683da5);
    /* 00683da5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683da8: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 00683dae: jmp 0x683cc8 */ goto L_00683cc8;
L_00683db3:; BB(0x00683db3);
    /* 00683db3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683db5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683db8: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00683dbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683dc0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683dc5u); f_007b4d18();
    /* 00683dc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683dc8: je 0x683ddc */ if (fZ) goto L_00683ddc;
L_00683dca:; BB(0x00683dca);
    /* 00683dca: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00683dcd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00683dd0: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683dd3: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00683dd6: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00683dd9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00683ddc:; BB(0x00683ddc);
    /* 00683ddc: fld dword ptr [0x93c444] */ FPUSH(R_F32((u32)(0x93c444u)));
    /* 00683de2: fadd dword ptr [ebp - 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffbcu));
    /* 00683de5: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00683de8: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00683deb: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 00683df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683df1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x683df6u); f_0050b510();
    /* 00683df6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683df9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683dfc: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 00683e02: jmp 0x683cbd */ goto L_00683cbd;
L_00683e07:; BB(0x00683e07);
    /* 00683e07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00683e09: mov eax, ecx */ r_eax = r_ecx;
    /* 00683e0b: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00683e12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683e13: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683e18u); f_007b4d18();
    /* 00683e18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683e19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683e1b: je 0x683e2f */ if (fZ) goto L_00683e2f;
L_00683e1d:; BB(0x00683e1d);
    /* 00683e1d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00683e20: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00683e23: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683e26: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00683e29: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00683e2c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_00683e2f:; BB(0x00683e2f);
    /* 00683e2f: fld dword ptr [0x93c444] */ FPUSH(R_F32((u32)(0x93c444u)));
    /* 00683e35: fadd dword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb0u));
    /* 00683e38: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00683e3b: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 00683e3e: push 0x174 */ { u32 v = 0x174u; r_esp -= 4; W32(r_esp, v); }
    /* 00683e43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683e44: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x683e49u); f_0050b510();
    /* 00683e49: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 00683e4c: push 0x175 */ { u32 v = 0x175u; r_esp -= 4; W32(r_esp, v); }
    /* 00683e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683e52: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x683e57u); f_0050b510();
    /* 00683e57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683e5a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683e5d: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 00683e63: jmp 0x683cae */ goto L_00683cae;
L_00683e68:; BB(0x00683e68);
    /* 00683e68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683e6b: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00683e72: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683e75: jne 0x683c54 */ if (!fZ) goto L_00683c54;
L_00683e7b:; BB(0x00683e7b);
    /* 00683e7b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683e7e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00683e80: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x683e85u); f_0067c75c();
    /* 00683e85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683e88: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683e8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683e8c: mov dword ptr [ecx + 0x1a4], eax */ W32((u32)(r_ecx+0x1a4u), r_eax);
    /* 00683e92: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00683e99: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x683e9eu); f_0067d660();
    /* 00683e9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683ea1: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00683ea8: jmp 0x683c54 */ goto L_00683c54;
L_00683ead:; BB(0x00683ead);
    /* 00683ead: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683eb0: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 00683eb6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683eb8: jne 0x683c35 */ if (!fZ) goto L_00683c35;
L_00683ebe:; BB(0x00683ebe);
    /* 00683ebe: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00683ec5: mov dword ptr [eax + 0x1a0], 1 */ W32((u32)(r_eax+0x1a0u), 0x1u);
    /* 00683ecf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683ed0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x683ed5u); f_007b4d18();
    /* 00683ed5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683ed8: je 0x683eec */ if (fZ) goto L_00683eec;
L_00683eda:; BB(0x00683eda);
    /* 00683eda: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00683edd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00683ee0: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00683ee3: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00683ee6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00683ee9: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_00683eec:; BB(0x00683eec);
    /* 00683eec: fld dword ptr [0x93c450] */ FPUSH(R_F32((u32)(0x93c450u)));
    /* 00683ef2: fadd dword ptr [ebp - 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff9cu));
    /* 00683ef5: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00683ef8: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00683eff: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683f04: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x683f09u); f_005caba4();
    /* 00683f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00683f0a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00683f0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683f0f: je 0x683f41 */ if (fZ) goto L_00683f41;
L_00683f11:; BB(0x00683f11);
    /* 00683f11: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00683f18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00683f1f: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00683f24: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00683f27: mov ecx, eax */ r_ecx = r_eax;
    /* 00683f29: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00683f2c: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00683f31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683f32: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00683f34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683f35: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x683f3au); f_00683398();
    /* 00683f3a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00683f41:; BB(0x00683f41);
    /* 00683f41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00683f48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00683f4b: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 00683f51: jmp 0x683c35 */ goto L_00683c35;
}

void f_00683f58(void) /* sub_683F58 */
{
    FN_ENTER(0x00683f58);
    /* 00683f58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683f59: mov edi, ecx */ r_edi = r_ecx;
    /* 00683f5b: mov eax, dword ptr [edi + 0x1a0] */ r_eax = R32((u32)(r_edi+0x1a0u));
    /* 00683f61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00683f63: jne 0x683f67 */ if (!fZ) goto L_00683f67;
L_00683f65:; BB(0x00683f65);
    /* 00683f65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683f66: ret  */ FN_RET(0x00683f58); r_esp += 4; return;
L_00683f67:; BB(0x00683f67);
    /* 00683f67: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x683f6cu); f_0082dbac();
    /* 00683f6c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00683f6f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x683f74u); f_00829cc8();
    /* 00683f74: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x683f79u); f_0082d7b0();
    /* 00683f79: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00683f7c: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00683f7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00683f81: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00683f84: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x683f89u); f_00830b74();
    /* 00683f89: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00683f8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00683f8e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x683f93u); f_0082d8bc();
    /* 00683f93: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00683f98: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00683f9e: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00683fa3: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00683fa9: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00683faf: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00683fb5: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00683fbb: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00683fc1: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00683fc7: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00683fcd: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00683fd3: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00683fd9: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00683fdf: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00683fe5: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683fea: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00683fef: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x683ff4u); f_0082fa9c();
    /* 00683ff4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683ff6: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x683ffbu); f_00830b08();
    /* 00683ffb: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00684000: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684002: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x684007u); f_0082d6fc();
    /* 00684007: lea eax, [edi + 0x184] */ r_eax = (u32)(r_edi+0x184u);
    /* 0068400d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068400e: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x684013u); f_0082d710();
    /* 00684013: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684016: mov ecx, edi */ r_ecx = r_edi;
    /* 00684018: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x68401du); f_0067d5e0();
    /* 0068401d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068401f: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x684024u); f_007aa668();
    /* 00684024: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x684029u); f_0082faac();
    /* 00684029: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 0068402e: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x684033u); f_00830b08();
    /* 00684033: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684034: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00684039: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0068403f: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00684044: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00684049: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0068404f: mov ecx, edi */ r_ecx = r_edi;
    /* 00684051: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 00684056: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 0068405b: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00684060: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00684065: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 0068406a: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 0068406f: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 00684074: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00684079: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0068407e: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x684083u); f_0067ccc8();
    /* 00684083: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x684088u); f_0082da80();
    /* 00684088: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x68408du); f_0082dab0();
    /* 0068408d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068408e: ret  */ FN_RET(0x00683f58); r_esp += 4; return;
}

