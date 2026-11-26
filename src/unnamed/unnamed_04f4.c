#include "protos.h"

void f_004f4010(void) /* sub_4F4010 */
{
    FN_ENTER(0x004f4010);
    /* 004f4010: mov edx, dword ptr [0xa7261c] */ r_edx = R32((u32)(0xa7261cu));
    /* 004f4016: test dword ptr [esp + 4], edx */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f401a: mov eax, 0 */ r_eax = 0x0u;
    /* 004f401f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004f4022: ret  */ FN_RET(0x004f4010); r_esp += 4; return;
}

void f_004f4024(void) /* sub_4F4024 */
{
    FN_ENTER(0x004f4024);
    /* 004f4024: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4025: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f4027: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f4029: call 0x4f4048 */ r_esp -= 4; W32(r_esp, 0x4f402eu); f_004f4048();
    /* 004f402e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f4032: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f4034: jne 0x4f403a */ if (!fZ) goto L_004f403a;
L_004f4036:; BB(0x004f4036);
    /* 004f4036: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f4037: ret 4 */ FN_RET(0x004f4024); r_esp += 8; return;
L_004f403a:; BB(0x004f403a);
    /* 004f403a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f403b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f4040u); f_005c2f74();
    /* 004f4040: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4041: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f4042: ret 4 */ FN_RET(0x004f4024); r_esp += 8; return;
}

void f_004f4048(void) /* sub_4F4048 */
{
    FN_ENTER(0x004f4048);
    /* 004f4048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4049: mov ebp, esp */ r_ebp = r_esp;
    /* 004f404b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f404d: push 0x8d2f00 */ { u32 v = 0x8d2f00u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4052: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4059: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f4060: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4063: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f4066: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f4069: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f406c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f406f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f4072: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f4075: mov dword ptr [ecx], 0xafdc18 */ W32((u32)(r_ecx), 0xafdc18u);
    /* 004f407b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f4082: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4f4087u); f_008171e8();
    /* 004f4087: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f408a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f4091: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4094: ret  */ FN_RET(0x004f4048); r_esp += 4; return;
}

void f_004f4098(void) /* sub_4F4098 */
{
    FN_ENTER(0x004f4098);
    /* 004f4098: mov dword ptr [0xa7262c], 0 */ W32((u32)(0xa7262cu), 0x0u);
    /* 004f40a2: mov eax, 1 */ r_eax = 0x1u;
    /* 004f40a7: mov dword ptr [0xa72628], eax */ W32((u32)(0xa72628u), r_eax);
    /* 004f40ac: mov dword ptr [0xa72630], 0 */ W32((u32)(0xa72630u), 0x0u);
    /* 004f40b6: mov dword ptr [0xa72634], eax */ W32((u32)(0xa72634u), r_eax);
    /* 004f40bb: mov dword ptr [0xa72638], 0 */ W32((u32)(0xa72638u), 0x0u);
    /* 004f40c5: mov dword ptr [0xa7263c], 0 */ W32((u32)(0xa7263cu), 0x0u);
    /* 004f40cf: mov dword ptr [0xa72640], eax */ W32((u32)(0xa72640u), r_eax);
    /* 004f40d4: mov dword ptr [0xa7264c], eax */ W32((u32)(0xa7264cu), r_eax);
    /* 004f40d9: mov dword ptr [0xa72644], 0 */ W32((u32)(0xa72644u), 0x0u);
    /* 004f40e3: mov dword ptr [0xa72648], 0 */ W32((u32)(0xa72648u), 0x0u);
    /* 004f40ed: mov dword ptr [0xa72658], eax */ W32((u32)(0xa72658u), r_eax);
    /* 004f40f2: mov dword ptr [0xa72650], 0 */ W32((u32)(0xa72650u), 0x0u);
    /* 004f40fc: mov dword ptr [0xa72654], 0 */ W32((u32)(0xa72654u), 0x0u);
    /* 004f4106: mov dword ptr [0xa7265c], 0 */ W32((u32)(0xa7265cu), 0x0u);
    /* 004f4110: mov dword ptr [0xa72660], 0 */ W32((u32)(0xa72660u), 0x0u);
    /* 004f411a: mov dword ptr [0xa72624], 0 */ W32((u32)(0xa72624u), 0x0u);
    /* 004f4124: ret  */ FN_RET(0x004f4098); r_esp += 4; return;
}

void f_004f4128(void) /* sub_4F4128 */
{
    FN_ENTER(0x004f4128);
    /* 004f4128: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f412b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004f412f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f4134: mov dword ptr [0xa72628], eax */ W32((u32)(0xa72628u), r_eax);
    /* 004f4139: mov dword ptr [0xa72634], eax */ W32((u32)(0xa72634u), r_eax);
    /* 004f413e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f4140: mov dword ptr [0xa72640], eax */ W32((u32)(0xa72640u), r_eax);
    /* 004f4145: mov dword ptr [0xa7264c], eax */ W32((u32)(0xa7264cu), r_eax);
    /* 004f414a: mov dword ptr [0xa72658], eax */ W32((u32)(0xa72658u), r_eax);
    /* 004f414f: mov edx, 0 */ r_edx = 0x0u;
    /* 004f4154: jle 0x4f420f */ if ((fZ||fS!=fO)) goto L_004f420f;
L_004f415a:; BB(0x004f415a);
    /* 004f415a: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f415d: jl 0x4f41e1 */ if ((fS!=fO)) goto L_004f41e1;
L_004f4163:; BB(0x004f4163);
    /* 004f4163: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004f4167: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004f416b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f416e: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004f4172: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004f4176: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
L_004f4179:; BB(0x004f4179);
    /* 004f4179: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 004f417d: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004f4180: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f4182: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f4184: mov dword ptr [esi + edi*8 + 0xa72628], ebx */ W32((u32)(r_esi+r_edi*8+0xa72628u), r_ebx);
    /* 004f418b: mov edi, dword ptr [ebp + edx*4 + 4] */ r_edi = R32((u32)(r_ebp+r_edx*4+0x4u));
    /* 004f418f: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004f4192: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f4194: mov dword ptr [esi + edi*8 + 0xa72628], ebx */ W32((u32)(r_esi+r_edi*8+0xa72628u), r_ebx);
    /* 004f419b: mov edi, dword ptr [ebp + edx*4 + 8] */ r_edi = R32((u32)(r_ebp+r_edx*4+0x8u));
    /* 004f419f: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004f41a2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f41a4: mov dword ptr [esi + edi*8 + 0xa72628], ebx */ W32((u32)(r_esi+r_edi*8+0xa72628u), r_ebx);
    /* 004f41ab: mov edi, dword ptr [ebp + edx*4 + 0xc] */ r_edi = R32((u32)(r_ebp+r_edx*4+0xcu));
    /* 004f41af: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004f41b2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f41b4: mov dword ptr [esi + edi*8 + 0xa72628], ebx */ W32((u32)(r_esi+r_edi*8+0xa72628u), r_ebx);
    /* 004f41bb: mov edi, dword ptr [ebp + edx*4 + 0x10] */ r_edi = R32((u32)(r_ebp+r_edx*4+0x10u));
    /* 004f41bf: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004f41c2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f41c4: mov dword ptr [esi + edi*8 + 0xa72628], ebx */ W32((u32)(r_esi+r_edi*8+0xa72628u), r_ebx);
    /* 004f41cb: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f41ce: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f41d0: jle 0x4f4179 */ if ((fZ||fS!=fO)) goto L_004f4179;
L_004f41d2:; BB(0x004f41d2);
    /* 004f41d2: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004f41d6: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004f41da: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004f41dd: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_004f41e1:; BB(0x004f41e1);
    /* 004f41e1: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004f41e5: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004f41e9: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_004f41ed:; BB(0x004f41ed);
    /* 004f41ed: mov ebx, dword ptr [esi + edx*4] */ r_ebx = R32((u32)(r_esi+r_edx*4));
    /* 004f41f0: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004f41f3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f41f5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f41f8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f41fa: mov dword ptr [eax + ebx*8 + 0xa72628], 0 */ W32((u32)(r_eax+r_ebx*8+0xa72628u), 0x0u);
    /* 004f4205: jl 0x4f41ed */ if ((fS!=fO)) goto L_004f41ed;
L_004f4207:; BB(0x004f4207);
    /* 004f4207: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004f420b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_004f420f:; BB(0x004f420f);
    /* 004f420f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f4212: ret  */ FN_RET(0x004f4128); r_esp += 4; return;
}

void f_004f4214(void) /* sub_4F4214 */
{
    FN_ENTER(0x004f4214);
    /* 004f4214: mov eax, 1 */ r_eax = 0x1u;
    /* 004f4219: mov dword ptr [0xa72628], eax */ W32((u32)(0xa72628u), r_eax);
    /* 004f421e: mov dword ptr [0xa72634], eax */ W32((u32)(0xa72634u), r_eax);
    /* 004f4223: mov dword ptr [0xa72640], eax */ W32((u32)(0xa72640u), r_eax);
    /* 004f4228: mov dword ptr [0xa7264c], eax */ W32((u32)(0xa7264cu), r_eax);
    /* 004f422d: mov dword ptr [0xa72658], eax */ W32((u32)(0xa72658u), r_eax);
    /* 004f4232: ret  */ FN_RET(0x004f4214); r_esp += 4; return;
}

void f_004f4234(void) /* sub_4F4234 */
{
    FN_ENTER(0x004f4234);
    /* 004f4234: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004f4238: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004f423a: mov dword ptr [0x9b9188], eax */ W32((u32)(0x9b9188u), r_eax);
    /* 004f423f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004f4242: mov dword ptr [0x9b918c], ecx */ W32((u32)(0x9b918cu), r_ecx);
    /* 004f4248: ret  */ FN_RET(0x004f4234); r_esp += 4; return;
}

void f_004f424c(void) /* sub_4F424C */
{
    FN_ENTER(0x004f424c);
    /* 004f424c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f424f: mov eax, dword ptr [0xa72628] */ r_eax = R32((u32)(0xa72628u));
    /* 004f4254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4256: jne 0x4f4291 */ if (!fZ) goto L_004f4291;
L_004f4258:; BB(0x004f4258);
    /* 004f4258: fld dword ptr [0x91e2dc] */ FPUSH(R_F32((u32)(0x91e2dcu)));
    /* 004f425e: fadd dword ptr [0xa7262c] */ ST(0) = ST(0) + R_F32((u32)(0xa7262cu));
    /* 004f4264: fcom dword ptr [0x91e2f0] */ fx_compare(ST(0), R_F32((u32)(0x91e2f0u))); 
    /* 004f426a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f426c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f426d: jbe 0x4f4283 */ if ((fC||fZ)) goto L_004f4283;
L_004f426f:; BB(0x004f426f);
    /* 004f426f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4271: fld dword ptr [0x91e2fc] */ FPUSH(R_F32((u32)(0x91e2fcu)));
    /* 004f4277: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f427c: mov dword ptr [0xa7262c], eax */ W32((u32)(0xa7262cu), r_eax);
    /* 004f4281: jmp 0x4f42bd */ goto L_004f42bd;
L_004f4283:; BB(0x004f4283);
    /* 004f4283: fstp dword ptr [0xa7262c] */ W_F32((u32)(0xa7262cu), ST(0)); FPOP();
    /* 004f4289: fld dword ptr [0x91e2fc] */ FPUSH(R_F32((u32)(0x91e2fcu)));
    /* 004f428f: jmp 0x4f42bd */ goto L_004f42bd;
L_004f4291:; BB(0x004f4291);
    /* 004f4291: fld dword ptr [0x91e2e0] */ FPUSH(R_F32((u32)(0x91e2e0u)));
    /* 004f4297: fadd dword ptr [0xa7262c] */ ST(0) = ST(0) + R_F32((u32)(0xa7262cu));
    /* 004f429d: fld dword ptr [0x91e2fc] */ FPUSH(R_F32((u32)(0x91e2fcu)));
    /* 004f42a3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f42a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f42a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f42a8: jbe 0x4f42b5 */ if ((fC||fZ)) goto L_004f42b5;
L_004f42aa:; BB(0x004f42aa);
    /* 004f42aa: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f42ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f42ae: mov dword ptr [0xa7262c], eax */ W32((u32)(0xa7262cu), r_eax);
    /* 004f42b3: jmp 0x4f42bd */ goto L_004f42bd;
L_004f42b5:; BB(0x004f42b5);
    /* 004f42b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f42b7: fstp dword ptr [0xa7262c] */ W_F32((u32)(0xa7262cu), ST(0)); FPOP();
L_004f42bd:; BB(0x004f42bd);
    /* 004f42bd: mov eax, dword ptr [0xa72634] */ r_eax = R32((u32)(0xa72634u));
    /* 004f42c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f42c4: jne 0x4f42f3 */ if (!fZ) goto L_004f42f3;
L_004f42c6:; BB(0x004f42c6);
    /* 004f42c6: fld dword ptr [0x91e2dc] */ FPUSH(R_F32((u32)(0x91e2dcu)));
    /* 004f42cc: fadd dword ptr [0xa72638] */ ST(0) = ST(0) + R_F32((u32)(0xa72638u));
    /* 004f42d2: fcom dword ptr [0x91e2f0] */ fx_compare(ST(0), R_F32((u32)(0x91e2f0u))); 
    /* 004f42d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f42da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f42db: jbe 0x4f42eb */ if ((fC||fZ)) goto L_004f42eb;
L_004f42dd:; BB(0x004f42dd);
    /* 004f42dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f42df: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f42e4: mov dword ptr [0xa72638], eax */ W32((u32)(0xa72638u), r_eax);
    /* 004f42e9: jmp 0x4f4316 */ goto L_004f4316;
L_004f42eb:; BB(0x004f42eb);
    /* 004f42eb: fstp dword ptr [0xa72638] */ W_F32((u32)(0xa72638u), ST(0)); FPOP();
    /* 004f42f1: jmp 0x4f4316 */ goto L_004f4316;
L_004f42f3:; BB(0x004f42f3);
    /* 004f42f3: fld dword ptr [0x91e2e0] */ FPUSH(R_F32((u32)(0x91e2e0u)));
    /* 004f42f9: fadd dword ptr [0xa72638] */ ST(0) = ST(0) + R_F32((u32)(0xa72638u));
    /* 004f42ff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f4301: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4303: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4304: jae 0x4f4310 */ if (!fC) goto L_004f4310;
L_004f4306:; BB(0x004f4306);
    /* 004f4306: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4308: fst dword ptr [0xa72638] */ W_F32((u32)(0xa72638u), ST(0));
    /* 004f430e: jmp 0x4f4316 */ goto L_004f4316;
L_004f4310:; BB(0x004f4310);
    /* 004f4310: fstp dword ptr [0xa72638] */ W_F32((u32)(0xa72638u), ST(0)); FPOP();
L_004f4316:; BB(0x004f4316);
    /* 004f4316: mov eax, dword ptr [0xa72640] */ r_eax = R32((u32)(0xa72640u));
    /* 004f431b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f431d: jne 0x4f434c */ if (!fZ) goto L_004f434c;
L_004f431f:; BB(0x004f431f);
    /* 004f431f: fld dword ptr [0x91e2dc] */ FPUSH(R_F32((u32)(0x91e2dcu)));
    /* 004f4325: fadd dword ptr [0xa72644] */ ST(0) = ST(0) + R_F32((u32)(0xa72644u));
    /* 004f432b: fcom dword ptr [0x91e2f0] */ fx_compare(ST(0), R_F32((u32)(0x91e2f0u))); 
    /* 004f4331: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4333: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4334: jbe 0x4f4344 */ if ((fC||fZ)) goto L_004f4344;
L_004f4336:; BB(0x004f4336);
    /* 004f4336: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4338: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f433d: mov dword ptr [0xa72644], eax */ W32((u32)(0xa72644u), r_eax);
    /* 004f4342: jmp 0x4f436f */ goto L_004f436f;
L_004f4344:; BB(0x004f4344);
    /* 004f4344: fstp dword ptr [0xa72644] */ W_F32((u32)(0xa72644u), ST(0)); FPOP();
    /* 004f434a: jmp 0x4f436f */ goto L_004f436f;
L_004f434c:; BB(0x004f434c);
    /* 004f434c: fld dword ptr [0x91e2e0] */ FPUSH(R_F32((u32)(0x91e2e0u)));
    /* 004f4352: fadd dword ptr [0xa72644] */ ST(0) = ST(0) + R_F32((u32)(0xa72644u));
    /* 004f4358: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f435a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f435c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f435d: jae 0x4f4369 */ if (!fC) goto L_004f4369;
L_004f435f:; BB(0x004f435f);
    /* 004f435f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4361: fst dword ptr [0xa72644] */ W_F32((u32)(0xa72644u), ST(0));
    /* 004f4367: jmp 0x4f436f */ goto L_004f436f;
L_004f4369:; BB(0x004f4369);
    /* 004f4369: fstp dword ptr [0xa72644] */ W_F32((u32)(0xa72644u), ST(0)); FPOP();
L_004f436f:; BB(0x004f436f);
    /* 004f436f: mov eax, dword ptr [0xa7264c] */ r_eax = R32((u32)(0xa7264cu));
    /* 004f4374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4376: jne 0x4f43a5 */ if (!fZ) goto L_004f43a5;
L_004f4378:; BB(0x004f4378);
    /* 004f4378: fld dword ptr [0x91e2dc] */ FPUSH(R_F32((u32)(0x91e2dcu)));
    /* 004f437e: fadd dword ptr [0xa72650] */ ST(0) = ST(0) + R_F32((u32)(0xa72650u));
    /* 004f4384: fcom dword ptr [0x91e2f0] */ fx_compare(ST(0), R_F32((u32)(0x91e2f0u))); 
    /* 004f438a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f438c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f438d: jbe 0x4f439d */ if ((fC||fZ)) goto L_004f439d;
L_004f438f:; BB(0x004f438f);
    /* 004f438f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4391: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f4396: mov dword ptr [0xa72650], eax */ W32((u32)(0xa72650u), r_eax);
    /* 004f439b: jmp 0x4f43c8 */ goto L_004f43c8;
L_004f439d:; BB(0x004f439d);
    /* 004f439d: fstp dword ptr [0xa72650] */ W_F32((u32)(0xa72650u), ST(0)); FPOP();
    /* 004f43a3: jmp 0x4f43c8 */ goto L_004f43c8;
L_004f43a5:; BB(0x004f43a5);
    /* 004f43a5: fld dword ptr [0x91e2e0] */ FPUSH(R_F32((u32)(0x91e2e0u)));
    /* 004f43ab: fadd dword ptr [0xa72650] */ ST(0) = ST(0) + R_F32((u32)(0xa72650u));
    /* 004f43b1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f43b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f43b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f43b6: jae 0x4f43c2 */ if (!fC) goto L_004f43c2;
L_004f43b8:; BB(0x004f43b8);
    /* 004f43b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f43ba: fst dword ptr [0xa72650] */ W_F32((u32)(0xa72650u), ST(0));
    /* 004f43c0: jmp 0x4f43c8 */ goto L_004f43c8;
L_004f43c2:; BB(0x004f43c2);
    /* 004f43c2: fstp dword ptr [0xa72650] */ W_F32((u32)(0xa72650u), ST(0)); FPOP();
L_004f43c8:; BB(0x004f43c8);
    /* 004f43c8: mov eax, dword ptr [0xa72658] */ r_eax = R32((u32)(0xa72658u));
    /* 004f43cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f43cf: jne 0x4f43fe */ if (!fZ) goto L_004f43fe;
L_004f43d1:; BB(0x004f43d1);
    /* 004f43d1: fld dword ptr [0x91e2dc] */ FPUSH(R_F32((u32)(0x91e2dcu)));
    /* 004f43d7: fadd dword ptr [0xa7265c] */ ST(0) = ST(0) + R_F32((u32)(0xa7265cu));
    /* 004f43dd: fcom dword ptr [0x91e2f0] */ fx_compare(ST(0), R_F32((u32)(0x91e2f0u))); 
    /* 004f43e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f43e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f43e6: jbe 0x4f43f6 */ if ((fC||fZ)) goto L_004f43f6;
L_004f43e8:; BB(0x004f43e8);
    /* 004f43e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f43ea: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f43ef: mov dword ptr [0xa7265c], eax */ W32((u32)(0xa7265cu), r_eax);
    /* 004f43f4: jmp 0x4f4421 */ goto L_004f4421;
L_004f43f6:; BB(0x004f43f6);
    /* 004f43f6: fstp dword ptr [0xa7265c] */ W_F32((u32)(0xa7265cu), ST(0)); FPOP();
    /* 004f43fc: jmp 0x4f4421 */ goto L_004f4421;
L_004f43fe:; BB(0x004f43fe);
    /* 004f43fe: fld dword ptr [0x91e2e0] */ FPUSH(R_F32((u32)(0x91e2e0u)));
    /* 004f4404: fadd dword ptr [0xa7265c] */ ST(0) = ST(0) + R_F32((u32)(0xa7265cu));
    /* 004f440a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f440c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f440e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f440f: jae 0x4f441b */ if (!fC) goto L_004f441b;
L_004f4411:; BB(0x004f4411);
    /* 004f4411: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4413: fst dword ptr [0xa7265c] */ W_F32((u32)(0xa7265cu), ST(0));
    /* 004f4419: jmp 0x4f4421 */ goto L_004f4421;
L_004f441b:; BB(0x004f441b);
    /* 004f441b: fstp dword ptr [0xa7265c] */ W_F32((u32)(0xa7265cu), ST(0)); FPOP();
L_004f4421:; BB(0x004f4421);
    /* 004f4421: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004f4425: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f4429: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 004f442d: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 004f4431: mov ecx, 0x9b9120 */ r_ecx = 0x9b9120u;
    /* 004f4436: mov edx, 0xa72628 */ r_edx = 0xa72628u;
    /* 004f443b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f443d: mov ebx, eax */ r_ebx = r_eax;
    /* 004f443f: mov ebp, edx */ r_ebp = r_edx;
    /* 004f4441: mov esi, ecx */ r_esi = r_ecx;
L_004f4443:; BB(0x004f4443);
    /* 004f4443: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 004f4446: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4449: je 0x4f44d7 */ if (fZ) goto L_004f44d7;
L_004f444f:; BB(0x004f444f);
    /* 004f444f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004f4451: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 004f4454: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f4456: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4458: fmul dword ptr [0x91e2e8] */ ST(0) = ST(0) * R_F32((u32)(0x91e2e8u));
    /* 004f445e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f4460: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f4462: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 004f4465: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f4467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f4469: jle 0x4f4497 */ if ((fZ||fS!=fO)) goto L_004f4497;
L_004f446b:; BB(0x004f446b);
    /* 004f446b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_004f446f:; BB(0x004f446f);
    /* 004f446f: push dword ptr [esi + edi*4 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f4473: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f4478u); f_004ea00c();
    /* 004f4478: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4479: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004f447d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f4480: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f4483: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f4486: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f4488: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f448b: cmp edi, dword ptr [esi] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f448d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004f4491: jl 0x4f446f */ if ((fS!=fO)) goto L_004f446f;
L_004f4493:; BB(0x004f4493);
    /* 004f4493: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
L_004f4497:; BB(0x004f4497);
    /* 004f4497: fadd dword ptr [0x91e2f8] */ ST(0) = ST(0) + R_F32((u32)(0x91e2f8u));
L_004f449d:; BB(0x004f449d);
    /* 004f449d: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f44a0: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f44a3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f44a6: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f44a9: jl 0x4f4443 */ if ((fS!=fO)) goto L_004f4443;
L_004f44ab:; BB(0x004f44ab);
    /* 004f44ab: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004f44af: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004f44b3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004f44b7: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 004f44bb: fld dword ptr [0xa72624] */ FPUSH(R_F32((u32)(0xa72624u)));
    /* 004f44c1: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f44c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f44c5: fmul dword ptr [0x91e2e4] */ ST(0) = ST(0) * R_F32((u32)(0x91e2e4u));
    /* 004f44cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f44cd: fstp dword ptr [0xa72624] */ W_F32((u32)(0xa72624u), ST(0)); FPOP();
    /* 004f44d3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f44d6: ret  */ FN_RET(0x004f424c); r_esp += 4; return;
L_004f44d7:; BB(0x004f44d7);
    /* 004f44d7: fld dword ptr [0x91e2f4] */ FPUSH(R_F32((u32)(0x91e2f4u)));
    /* 004f44dd: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 004f44e0: fcom dword ptr [0x91e2fc] */ fx_compare(ST(0), R_F32((u32)(0x91e2fcu))); 
    /* 004f44e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f44e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f44e9: jae 0x4f44f4 */ if (!fC) goto L_004f44f4;
L_004f44eb:; BB(0x004f44eb);
    /* 004f44eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f44ed: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f44ef: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 004f44f2: jmp 0x4f449d */ goto L_004f449d;
L_004f44f4:; BB(0x004f44f4);
    /* 004f44f4: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 004f44f7: jmp 0x4f449d */ goto L_004f449d;
}

void f_004f44fc(void) /* sub_4F44FC */
{
    FN_ENTER(0x004f44fc);
    /* 004f44fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f44fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f44fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f44ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4500: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4503: mov ecx, 0xa72628 */ r_ecx = 0xa72628u;
    /* 004f4508: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f450a:; BB(0x004f450a);
    /* 004f450a: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 004f450d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f450f: mov edi, edx */ r_edi = r_edx;
    /* 004f4511: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004f4513: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f4515: jle 0x4f453f */ if ((fZ||fS!=fO)) goto L_004f453f;
L_004f4517:; BB(0x004f4517);
    /* 004f4517: fld dword ptr [esp + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_esp+r_ebp*4+0x10u)));
    /* 004f451b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f451d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f451f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4520: jbe 0x4f4536 */ if ((fC||fZ)) goto L_004f4536;
L_004f4522:; BB(0x004f4522);
    /* 004f4522: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4524: fstp dword ptr [esp + ebp*4 + 0x10] */ W_F32((u32)(r_esp+r_ebp*4+0x10u), ST(0)); FPOP();
    /* 004f4528: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004f452a: mov eax, edi */ r_eax = r_edi;
    /* 004f452c: mov edi, dword ptr [esp + ebp*4 + 0x24] */ r_edi = R32((u32)(r_esp+r_ebp*4+0x24u));
    /* 004f4530: mov dword ptr [esp + ebp*4 + 0x24], eax */ W32((u32)(r_esp+r_ebp*4+0x24u), r_eax);
    /* 004f4534: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004f4536:; BB(0x004f4536);
    /* 004f4536: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4538: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f453b: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f453d: jl 0x4f4517 */ if ((fS!=fO)) goto L_004f4517;
L_004f453f:; BB(0x004f453f);
    /* 004f453f: fstp dword ptr [esp + ebp*4 + 0x10] */ W_F32((u32)(r_esp+r_ebp*4+0x10u), ST(0)); FPOP();
    /* 004f4543: mov dword ptr [esp + ebp*4 + 0x24], edi */ W32((u32)(r_esp+r_ebp*4+0x24u), r_edi);
    /* 004f4547: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f454a: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f454d: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4550: jl 0x4f450a */ if ((fS!=fO)) goto L_004f450a;
L_004f4552:; BB(0x004f4552);
    /* 004f4552: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4f4557u); f_007a9380();
    /* 004f4557: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4559: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x4f455eu); f_007a94a0();
    /* 004f455e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f455f: fld dword ptr [0x9b9188] */ FPUSH(R_F32((u32)(0x9b9188u)));
    /* 004f4565: fsub dword ptr [0xa72624] */ ST(0) = ST(0) - R_F32((u32)(0xa72624u));
    /* 004f456b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004f456d:; BB(0x004f456d);
    /* 004f456d: mov eax, dword ptr [esp + ecx*4 + 0x24] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x24u));
    /* 004f4571: mov esi, dword ptr [esp + ecx*4 + 0x10] */ r_esi = R32((u32)(r_esp+r_ecx*4+0x10u));
    /* 004f4575: fld dword ptr [0x9b918c] */ FPUSH(R_F32((u32)(0x9b918cu)));
    /* 004f457b: fmul dword ptr [0xa7221c] */ ST(0) = ST(0) * R_F32((u32)(0xa7221cu));
    /* 004f4581: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f4585: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004f4588: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f458a: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 004f458d: fld dword ptr [ebx + eax*8 + 0xa72630] */ FPUSH(R_F32((u32)(r_ebx+r_eax*8+0xa72630u)));
    /* 004f4594: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f4596: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f459a: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 004f459d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f459f: mov edx, dword ptr [ebp + 0x9b9120] */ r_edx = R32((u32)(r_ebp+0x9b9120u));
    /* 004f45a5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f45a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f45a9: jle 0x4f4632 */ if ((fZ||fS!=fO)) goto L_004f4632;
L_004f45af:; BB(0x004f45af);
    /* 004f45af: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004f45b3: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004f45b8: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f45ba: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 004f45be: mov eax, ecx */ r_eax = r_ecx;
    /* 004f45c0: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 004f45c4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f45c6: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f45c9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f45cb: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004f45cf: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 004f45d3: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
L_004f45d7:; BB(0x004f45d7);
    /* 004f45d7: mov edi, dword ptr [ebp + ebx*4 + 0x9b9124] */ r_edi = R32((u32)(r_ebp+r_ebx*4+0x9b9124u));
    /* 004f45de: fld dword ptr [0x91e2ec] */ FPUSH(R_F32((u32)(0x91e2ecu)));
    /* 004f45e4: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 004f45e8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f45ec: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f45ef: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 004f45f3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f45f7: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f45fb: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4600u); f_004e9ef8();
    /* 004f4600: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f4601: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f4606u); f_004ea00c();
    /* 004f4606: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4607: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f460a: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004f460e: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004f4612: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 004f4616: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004f461a: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f461e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f4621: cmp ebx, dword ptr [eax*4 + 0x9b9120] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax*4+0x9b9120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4628: jl 0x4f45d7 */ if ((fS!=fO)) goto L_004f45d7;
L_004f462a:; BB(0x004f462a);
    /* 004f462a: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 004f462e: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_004f4632:; BB(0x004f4632);
    /* 004f4632: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4635: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4638: jl 0x4f456d */ if ((fS!=fO)) goto L_004f456d;
L_004f463e:; BB(0x004f463e);
    /* 004f463e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4640: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4f4645u); f_007a94b0();
    /* 004f4645: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4f464au); f_007a9318();
    /* 004f464a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f464d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f464e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f464f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f4650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f4651: ret  */ FN_RET(0x004f44fc); r_esp += 4; return;
}

void f_004f4654(void) /* sub_4F4654 */
{
    FN_ENTER(0x004f4654);
    /* 004f4654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4655: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4657: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4659: push 0x8d2f28 */ { u32 v = 0x8d2f28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f465e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4665: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f466c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f466f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f4672: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f4675: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f4678: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f467b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f467d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f4684: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f4689u); f_005caba4();
    /* 004f4689: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f468a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f468d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f468f: je 0x4f46c2 */ if (fZ) goto L_004f46c2;
L_004f4691:; BB(0x004f4691);
    /* 004f4691: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f4698: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f469f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f46a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f46a5: call 0x4f46c8 */ r_esp -= 4; W32(r_esp, 0x4f46aau); f_004f46c8();
    /* 004f46aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f46ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f46b4:; BB(0x004f46b4);
    /* 004f46b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f46b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f46be: mov esp, ebp */ r_esp = r_ebp;
    /* 004f46c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f46c1: ret  */ FN_RET(0x004f4654); r_esp += 4; return;
L_004f46c2:; BB(0x004f46c2);
    /* 004f46c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f46c4: jmp 0x4f46b4 */ goto L_004f46b4;
}

void f_004f46c8(void) /* sub_4F46C8 */
{
    FN_ENTER(0x004f46c8);
    /* 004f46c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f46c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f46cb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f46cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f46d1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f46d6u); f_008193cc();
    /* 004f46d6: mov dword ptr [ebx], 0xafdc18 */ W32((u32)(r_ebx), 0xafdc18u);
    /* 004f46dc: mov edx, dword ptr [0x9b9184] */ r_edx = R32((u32)(0x9b9184u));
    /* 004f46e2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004f46e5: mov eax, ebx */ r_eax = r_ebx;
    /* 004f46e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f46e8: ret 4 */ FN_RET(0x004f46c8); r_esp += 8; return;
}

void f_004f46ec(void) /* sub_4F46EC */
{
    FN_ENTER(0x004f46ec);
    /* 004f46ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f46ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f46ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f46f1: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f46f6u); f_004f4710();
    /* 004f46f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f46fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f46fc: jne 0x4f4702 */ if (!fZ) goto L_004f4702;
L_004f46fe:; BB(0x004f46fe);
    /* 004f46fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f46ff: ret 4 */ FN_RET(0x004f46ec); r_esp += 8; return;
L_004f4702:; BB(0x004f4702);
    /* 004f4702: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4703: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f4708u); f_005c2f74();
    /* 004f4708: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4709: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f470a: ret 4 */ FN_RET(0x004f46ec); r_esp += 8; return;
}

void f_004f4710(void) /* sub_4F4710 */
{
    FN_ENTER(0x004f4710);
    /* 004f4710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4711: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4713: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4715: push 0x8d2f44 */ { u32 v = 0x8d2f44u; r_esp -= 4; W32(r_esp, v); }
    /* 004f471a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4721: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f4728: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f472b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f472e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f4731: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f4734: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f4737: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f473a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f473d: mov dword ptr [ecx], 0xafdc50 */ W32((u32)(r_ecx), 0xafdc50u);
    /* 004f4743: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f474a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4f474fu); f_008171e8();
    /* 004f474f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f4752: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f4759: mov esp, ebp */ r_esp = r_ebp;
    /* 004f475b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f475c: ret  */ FN_RET(0x004f4710); r_esp += 4; return;
}

void f_004f4760(void) /* sub_4F4760 */
{
    FN_ENTER(0x004f4760);
    /* 004f4760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4761: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f4763: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f4767: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f4769: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f476eu); f_008193cc();
    /* 004f476e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f4772: mov dword ptr [ebp], 0xafdc50 */ W32((u32)(r_ebp), 0xafdc50u);
    /* 004f4779: mov edx, dword ptr [0x9b91a0] */ r_edx = R32((u32)(0x9b91a0u));
    /* 004f477f: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 004f4786: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 004f4789: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 004f478c: mov eax, ebp */ r_eax = r_ebp;
    /* 004f478e: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 004f4795: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004f479c: mov dword ptr [ebp + 0x34], 0x3e088889 */ W32((u32)(r_ebp+0x34u), 0x3e088889u);
    /* 004f47a3: mov dword ptr [ebp + 0x28], 0x3e088889 */ W32((u32)(r_ebp+0x28u), 0x3e088889u);
    /* 004f47aa: mov dword ptr [ebp + 0x38], 0xbe088889 */ W32((u32)(r_ebp+0x38u), 0xbe088889u);
    /* 004f47b1: mov dword ptr [ebp + 0x2c], 0xbe088889 */ W32((u32)(r_ebp+0x2cu), 0xbe088889u);
    /* 004f47b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f47b9: ret 8 */ FN_RET(0x004f4760); r_esp += 12; return;
}

void f_004f47bc(void) /* sub_4F47BC */
{
    FN_ENTER(0x004f47bc);
    /* 004f47bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f47bd: mov edi, ecx */ r_edi = r_ecx;
    /* 004f47bf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f47c1: mov ecx, edi */ r_ecx = r_edi;
    /* 004f47c3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f47c6u); call_ind(t); }
    /* 004f47c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f47c8: je 0x4f47f1 */ if (fZ) goto L_004f47f1;
L_004f47ca:; BB(0x004f47ca);
    /* 004f47ca: fld dword ptr [0x91e304] */ FPUSH(R_F32((u32)(0x91e304u)));
    /* 004f47d0: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004f47d3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f47d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f47d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f47d8: jae 0x4f4816 */ if (!fC) goto L_004f4816;
L_004f47da:; BB(0x004f47da);
    /* 004f47da: fld dword ptr [edi + 0x34] */ FPUSH(R_F32((u32)(r_edi+0x34u)));
    /* 004f47dd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f47df: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f47e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f47e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f47e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f47e6: jb 0x4f47ea */ if (fC) goto L_004f47ea;
L_004f47e8:; BB(0x004f47e8);
    /* 004f47e8: fst st(1) */ ST(1) = ST(0);
L_004f47ea:; BB(0x004f47ea);
    /* 004f47ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f47ec: fst dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0));
    /* 004f47ef: jmp 0x4f4816 */ goto L_004f4816;
L_004f47f1:; BB(0x004f47f1);
    /* 004f47f1: fld dword ptr [0x91e308] */ FPUSH(R_F32((u32)(0x91e308u)));
    /* 004f47f7: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004f47fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f47fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f47fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f47ff: jbe 0x4f4816 */ if ((fC||fZ)) goto L_004f4816;
L_004f4801:; BB(0x004f4801);
    /* 004f4801: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004f4804: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f4806: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f4808: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f480a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f480b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f480d: ja 0x4f4811 */ if ((!fC&&!fZ)) goto L_004f4811;
L_004f480f:; BB(0x004f480f);
    /* 004f480f: fst st(1) */ ST(1) = ST(0);
L_004f4811:; BB(0x004f4811);
    /* 004f4811: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4813: fst dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0));
L_004f4816:; BB(0x004f4816);
    /* 004f4816: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4818: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f481a: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004f481d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f481f: jne 0x4f485d */ if (!fZ) goto L_004f485d;
L_004f4821:; BB(0x004f4821);
    /* 004f4821: fld dword ptr [0x91e304] */ FPUSH(R_F32((u32)(0x91e304u)));
    /* 004f4827: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004f482a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f482c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f482e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f482f: jae 0x4f4846 */ if (!fC) goto L_004f4846;
L_004f4831:; BB(0x004f4831);
    /* 004f4831: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 004f4834: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f4836: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f4838: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f483a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f483b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f483d: jb 0x4f4841 */ if (fC) goto L_004f4841;
L_004f483f:; BB(0x004f483f);
    /* 004f483f: fst st(1) */ ST(1) = ST(0);
L_004f4841:; BB(0x004f4841);
    /* 004f4841: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4843: fst dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0));
L_004f4846:; BB(0x004f4846);
    /* 004f4846: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4848: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f484a: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f484f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f4852: jne 0x4f488d */ if (!fZ) goto L_004f488d;
L_004f4854:; BB(0x004f4854);
    /* 004f4854: mov dword ptr [edi + 0x1c], 1 */ W32((u32)(r_edi+0x1cu), 0x1u);
    /* 004f485b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f485c: ret  */ FN_RET(0x004f47bc); r_esp += 4; return;
L_004f485d:; BB(0x004f485d);
    /* 004f485d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f4860: jne 0x4f488d */ if (!fZ) goto L_004f488d;
L_004f4862:; BB(0x004f4862);
    /* 004f4862: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004f4865: fadd dword ptr [edi + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2cu));
    /* 004f4868: fcom dword ptr [0x91e308] */ fx_compare(ST(0), R_F32((u32)(0x91e308u))); 
    /* 004f486e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4870: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4871: jbe 0x4f4878 */ if ((fC||fZ)) goto L_004f4878;
L_004f4873:; BB(0x004f4873);
    /* 004f4873: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 004f4876: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f4877: ret  */ FN_RET(0x004f47bc); r_esp += 4; return;
L_004f4878:; BB(0x004f4878);
    /* 004f4878: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f487a: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 004f487e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f4880: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004f4883: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f4889: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
L_004f488d:; BB(0x004f488d);
    /* 004f488d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f488e: ret  */ FN_RET(0x004f47bc); r_esp += 4; return;
}

void f_004f4890(void) /* sub_4F4890 */
{
    FN_ENTER(0x004f4890);
    /* 004f4890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4891: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f4893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f4895: call 0x4f48b4 */ r_esp -= 4; W32(r_esp, 0x4f489au); f_004f48b4();
    /* 004f489a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f489e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f48a0: jne 0x4f48a6 */ if (!fZ) goto L_004f48a6;
L_004f48a2:; BB(0x004f48a2);
    /* 004f48a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f48a3: ret 4 */ FN_RET(0x004f4890); r_esp += 8; return;
L_004f48a6:; BB(0x004f48a6);
    /* 004f48a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f48a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f48acu); f_005c2f74();
    /* 004f48ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f48ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f48ae: ret 4 */ FN_RET(0x004f4890); r_esp += 8; return;
}

void f_004f48b4(void) /* sub_4F48B4 */
{
    FN_ENTER(0x004f48b4);
    /* 004f48b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f48b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004f48b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f48b9: push 0x8d2f60 */ { u32 v = 0x8d2f60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f48be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f48c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f48c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f48cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f48cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f48d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f48d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f48d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f48db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f48de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f48e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f48e8: mov dword ptr [eax], 0xafdce0 */ W32((u32)(r_eax), 0xafdce0u);
    /* 004f48ee: call 0x4f50c0 */ r_esp -= 4; W32(r_esp, 0x4f48f3u); f_004f50c0();
    /* 004f48f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f48fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f48fd: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f4902u); f_004f4710();
    /* 004f4902: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f4905: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f490c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f490e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f490f: ret  */ FN_RET(0x004f48b4); r_esp += 4; return;
}

void f_004f4910(void) /* sub_4F4910 */
{
    FN_ENTER(0x004f4910);
    /* 004f4910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4911: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4915: push 0x8d2f7c */ { u32 v = 0x8d2f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f491a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4921: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f4928: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f492b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f492e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f4931: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f4934: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f4937: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f493a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f493d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f4940: call 0x4f4760 */ r_esp -= 4; W32(r_esp, 0x4f4945u); f_004f4760();
    /* 004f4945: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f494c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f494f: mov dword ptr [edx], 0xafdce0 */ W32((u32)(r_edx), 0xafdce0u);
    /* 004f4955: mov eax, dword ptr [0x9b91a4] */ r_eax = R32((u32)(0x9b91a4u));
    /* 004f495a: mov dword ptr [edx + 0x28], 0x3d888889 */ W32((u32)(r_edx+0x28u), 0x3d888889u);
    /* 004f4961: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f4964: mov dword ptr [edx + 0x2c], 0xbd888889 */ W32((u32)(r_edx+0x2cu), 0xbd888889u);
    /* 004f496b: mov dword ptr [edx + 0x34], 0x3d888889 */ W32((u32)(r_edx+0x34u), 0x3d888889u);
    /* 004f4972: mov dword ptr [edx + 0x38], 0xbd888889 */ W32((u32)(r_edx+0x38u), 0xbd888889u);
    /* 004f4979: call 0x4f50c0 */ r_esp -= 4; W32(r_esp, 0x4f497eu); f_004f50c0();
    /* 004f497e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f4981: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f4984: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f498b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f498d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f498e: ret 8 */ FN_RET(0x004f4910); r_esp += 12; return;
}

void f_004f4994(void) /* sub_4F4994 */
{
    FN_ENTER(0x004f4994);
    /* 004f4994: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4995: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f4997: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f4999: call 0x4f47bc */ r_esp -= 4; W32(r_esp, 0x4f499eu); f_004f47bc();
    /* 004f499e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f49a0: call 0x4f49a8 */ r_esp -= 4; W32(r_esp, 0x4f49a5u); f_004f49a8();
    /* 004f49a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f49a6: ret  */ FN_RET(0x004f4994); r_esp += 4; return;
}

void f_004f49a8(void) /* sub_4F49A8 */
{
    FN_ENTER(0x004f49a8);
    /* 004f49a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f49a9: mov edi, ecx */ r_edi = r_ecx;
    /* 004f49ab: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004f49ae: fcomp dword ptr [0x91e394] */ fx_compare(ST(0), R_F32((u32)(0x91e394u))); FPOP();
    /* 004f49b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f49b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f49b7: jae 0x4f49c6 */ if (!fC) goto L_004f49c6;
L_004f49b9:; BB(0x004f49b9);
    /* 004f49b9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f49bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f49bc: call 0x4f50cc */ r_esp -= 4; W32(r_esp, 0x4f49c1u); f_004f50cc();
    /* 004f49c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f49c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f49c5: ret  */ FN_RET(0x004f49a8); r_esp += 4; return;
L_004f49c6:; BB(0x004f49c6);
    /* 004f49c6: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f49cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f49cd: jne 0x4f49e4 */ if (!fZ) goto L_004f49e4;
L_004f49cf:; BB(0x004f49cf);
    /* 004f49cf: mov eax, dword ptr [0x9b8d90] */ r_eax = R32((u32)(0x9b8d90u));
    /* 004f49d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f49d6: jl 0x4f49fc */ if ((fS!=fO)) goto L_004f49fc;
L_004f49d8:; BB(0x004f49d8);
    /* 004f49d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f49d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f49da: call 0x4f50cc */ r_esp -= 4; W32(r_esp, 0x4f49dfu); f_004f50cc();
    /* 004f49df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f49e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f49e3: ret  */ FN_RET(0x004f49a8); r_esp += 4; return;
L_004f49e4:; BB(0x004f49e4);
    /* 004f49e4: push dword ptr [0x9b8d94] */ { u32 v = R32((u32)(0x9b8d94u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f49ea: call 0x4eba60 */ r_esp -= 4; W32(r_esp, 0x4f49efu); f_004eba60();
    /* 004f49ef: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f49f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f49f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f49f4: call 0x4f50cc */ r_esp -= 4; W32(r_esp, 0x4f49f9u); f_004f50cc();
    /* 004f49f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004f49fc:; BB(0x004f49fc);
    /* 004f49fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f49fd: ret  */ FN_RET(0x004f49a8); r_esp += 4; return;
}

void f_004f4a00(void) /* sub_4F4A00 */
{
    FN_ENTER(0x004f4a00);
    /* 004f4a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a01: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4a03: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4a09: fld dword ptr [0x91e390] */ FPUSH(R_F32((u32)(0x91e390u)));
    /* 004f4a0f: fld dword ptr [0x91e38c] */ FPUSH(R_F32((u32)(0x91e38cu)));
    /* 004f4a15: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004f4a18: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f4a1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4a1c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f4a1e: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 004f4a21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4a22: jb 0x4f4a33 */ if (fC) goto L_004f4a33;
L_004f4a24:; BB(0x004f4a24);
    /* 004f4a24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4a26: fadd dword ptr [0x91e388] */ ST(0) = ST(0) + R_F32((u32)(0x91e388u));
    /* 004f4a2c: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 004f4a2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4a30: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
L_004f4a33:; BB(0x004f4a33);
    /* 004f4a33: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f4a35: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4a37: mov eax, dword ptr [0x9b8d90] */ r_eax = R32((u32)(0x9b8d90u));
    /* 004f4a3c: mov dword ptr [ebp - 0x6c], 0x439b0000 */ W32((u32)(r_ebp+0xffffff94u), 0x439b0000u);
    /* 004f4a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f4a45: mov dword ptr [ebp - 0x68], 0x437f0000 */ W32((u32)(r_ebp+0xffffff98u), 0x437f0000u);
    /* 004f4a4c: jl 0x4f4a71 */ if ((fS!=fO)) goto L_004f4a71;
L_004f4a4e:; BB(0x004f4a4e);
    /* 004f4a4e: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4a51: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4a55: add eax, 0x8b */ {  u32 a = r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f4a5a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f4a5d: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4a65: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 004f4a68: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4a6c: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4a71u); f_004e9ef8();
L_004f4a71:; BB(0x004f4a71);
    /* 004f4a71: movzx eax, byte ptr [0xa7266c] */ r_eax = (u32)R8((u32)(0xa7266cu));
    /* 004f4a78: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f4a7a: jne 0x4f4a8e */ if (!fZ) goto L_004f4a8e;
L_004f4a7c:; BB(0x004f4a7c);
    /* 004f4a7c: mov dword ptr [0xa72670], 0x439b0000 */ W32((u32)(0xa72670u), 0x439b0000u);
    /* 004f4a86: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4a89: mov byte ptr [0xa7266c], al */ W8((u32)(0xa7266cu), (u8)r_eax);
L_004f4a8e:; BB(0x004f4a8e);
    /* 004f4a8e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f4a90: jne 0x4f4aa4 */ if (!fZ) goto L_004f4aa4;
L_004f4a92:; BB(0x004f4a92);
    /* 004f4a92: mov dword ptr [0xa72674], 0x43890000 */ W32((u32)(0xa72674u), 0x43890000u);
    /* 004f4a9c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4a9f: mov byte ptr [0xa7266c], al */ W8((u32)(0xa7266cu), (u8)r_eax);
L_004f4aa4:; BB(0x004f4aa4);
    /* 004f4aa4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f4aa6: jne 0x4f4abd */ if (!fZ) goto L_004f4abd;
L_004f4aa8:; BB(0x004f4aa8);
    /* 004f4aa8: mov dword ptr [0xa72678], 0x43930000 */ W32((u32)(0xa72678u), 0x43930000u);
    /* 004f4ab2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f4ab5: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4ab8: mov byte ptr [0xa7266c], al */ W8((u32)(0xa7266cu), (u8)r_eax);
L_004f4abd:; BB(0x004f4abd);
    /* 004f4abd: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f4abf: jne 0x4f4ad5 */ if (!fZ) goto L_004f4ad5;
L_004f4ac1:; BB(0x004f4ac1);
    /* 004f4ac1: mov dword ptr [0xa7267c], 0x43160000 */ W32((u32)(0xa7267cu), 0x43160000u);
    /* 004f4acb: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4ad0: mov byte ptr [0xa7266c], al */ W8((u32)(0xa7266cu), (u8)r_eax);
L_004f4ad5:; BB(0x004f4ad5);
    /* 004f4ad5: mov eax, dword ptr [0xa72670] */ r_eax = R32((u32)(0xa72670u));
    /* 004f4ada: mov edx, dword ptr [0xa72674] */ r_edx = R32((u32)(0xa72674u));
    /* 004f4ae0: fld dword ptr [0x91e354] */ FPUSH(R_F32((u32)(0x91e354u)));
    /* 004f4ae6: fld dword ptr [0xa72678] */ FPUSH(R_F32((u32)(0xa72678u)));
    /* 004f4aec: fld dword ptr [0xa7267c] */ FPUSH(R_F32((u32)(0xa7267cu)));
    /* 004f4af2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4af4: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004f4af6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f4af8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f4afa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4afc: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 004f4aff: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 004f4b02: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004f4b05: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004f4b08: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4f4b0du); f_007a9380();
    /* 004f4b0d: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4b10: fmul dword ptr [0x91e350] */ ST(0) = ST(0) * R_F32((u32)(0x91e350u));
    /* 004f4b16: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4b1a: mov dword ptr [esp], 0x8e */ W32((u32)(r_esp), 0x8eu);
    /* 004f4b21: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 004f4b24: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4b28: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4b30: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 004f4b33: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4b37: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4b3cu); f_004e9d1c();
    /* 004f4b3c: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4f4b41u); f_007a9318();
    /* 004f4b41: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4b44: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4b48: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 004f4b4b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4b4f: mov dword ptr [ebp - 0x54], 0x43998000 */ W32((u32)(r_ebp+0xffffffacu), 0x43998000u);
    /* 004f4b56: mov dword ptr [ebp - 0x50], 0x43880000 */ W32((u32)(r_ebp+0xffffffb0u), 0x43880000u);
    /* 004f4b5d: mov dword ptr [esp], 0x4b */ W32((u32)(r_esp), 0x4bu);
    /* 004f4b64: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4b6c: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4b71u); f_004e9ef8();
    /* 004f4b71: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4b74: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4b78: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 004f4b7b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4b7f: mov dword ptr [ebp - 0x4c], 0x4415c000 */ W32((u32)(r_ebp+0xffffffb4u), 0x4415c000u);
    /* 004f4b86: mov dword ptr [ebp - 0x48], 0x43880000 */ W32((u32)(r_ebp+0xffffffb8u), 0x43880000u);
    /* 004f4b8d: mov dword ptr [esp], 0x4c */ W32((u32)(r_esp), 0x4cu);
    /* 004f4b94: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4b9c: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4ba1u); f_004e9ef8();
    /* 004f4ba1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4ba4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4ba8: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 004f4bab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4baf: mov dword ptr [ebp - 0x44], 0x43998000 */ W32((u32)(r_ebp+0xffffffbcu), 0x43998000u);
    /* 004f4bb6: mov dword ptr [ebp - 0x40], 0x43d20000 */ W32((u32)(r_ebp+0xffffffc0u), 0x43d20000u);
    /* 004f4bbd: mov dword ptr [esp], 0x49 */ W32((u32)(r_esp), 0x49u);
    /* 004f4bc4: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4bcc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4bd1u); f_004e9ef8();
    /* 004f4bd1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4bd4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4bd8: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 004f4bdb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4bdf: mov dword ptr [ebp - 0x3c], 0x4415c000 */ W32((u32)(r_ebp+0xffffffc4u), 0x4415c000u);
    /* 004f4be6: mov dword ptr [ebp - 0x38], 0x43d20000 */ W32((u32)(r_ebp+0xffffffc8u), 0x43d20000u);
    /* 004f4bed: mov dword ptr [esp], 0x4a */ W32((u32)(r_esp), 0x4au);
    /* 004f4bf4: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4bfc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4c01u); f_004e9ef8();
    /* 004f4c01: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4c04: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4c08: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 004f4c0b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4c0f: mov dword ptr [ebp - 0x30], 0x3f800000 */ W32((u32)(r_ebp+0xffffffd0u), 0x3f800000u);
    /* 004f4c16: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004f4c19: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4c1d: mov dword ptr [ebp - 0x34], 0x420e0000 */ W32((u32)(r_ebp+0xffffffccu), 0x420e0000u);
    /* 004f4c24: mov dword ptr [ebp - 0x2c], 0x439d8000 */ W32((u32)(r_ebp+0xffffffd4u), 0x439d8000u);
    /* 004f4c2b: mov dword ptr [ebp - 0x28], 0x43880000 */ W32((u32)(r_ebp+0xffffffd8u), 0x43880000u);
    /* 004f4c32: mov dword ptr [esp], 0x45 */ W32((u32)(r_esp), 0x45u);
    /* 004f4c39: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4c41: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4c46u); f_004e9d1c();
    /* 004f4c46: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4c49: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4c4d: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 004f4c50: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4c54: mov dword ptr [ebp - 0x24], 0x439d8000 */ W32((u32)(r_ebp+0xffffffdcu), 0x439d8000u);
    /* 004f4c5b: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004f4c5e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4c62: mov dword ptr [ebp - 0x20], 0x43d20000 */ W32((u32)(r_ebp+0xffffffe0u), 0x43d20000u);
    /* 004f4c69: mov dword ptr [esp], 0x46 */ W32((u32)(r_esp), 0x46u);
    /* 004f4c70: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4c78: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4c7du); f_004e9d1c();
    /* 004f4c7d: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4c80: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4c84: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004f4c87: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4c8b: mov dword ptr [ebp - 0x1c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffe4u), 0x3f800000u);
    /* 004f4c92: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 004f4c95: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4c99: mov dword ptr [ebp - 0x18], 0x418c0000 */ W32((u32)(r_ebp+0xffffffe8u), 0x418c0000u);
    /* 004f4ca0: mov dword ptr [ebp - 0x14], 0x43998000 */ W32((u32)(r_ebp+0xffffffecu), 0x43998000u);
    /* 004f4ca7: mov dword ptr [ebp - 0x10], 0x438c0000 */ W32((u32)(r_ebp+0xfffffff0u), 0x438c0000u);
    /* 004f4cae: mov dword ptr [esp], 0x43 */ W32((u32)(r_esp), 0x43u);
    /* 004f4cb5: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4cbd: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4cc2u); f_004e9d1c();
    /* 004f4cc2: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4cc5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4cc9: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f4ccc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4cd0: mov dword ptr [ebp - 0xc], 0x4415c000 */ W32((u32)(r_ebp+0xfffffff4u), 0x4415c000u);
    /* 004f4cd7: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 004f4cda: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4cde: mov dword ptr [ebp - 8], 0x438c0000 */ W32((u32)(r_ebp+0xfffffff8u), 0x438c0000u);
    /* 004f4ce5: mov dword ptr [esp], 0x44 */ W32((u32)(r_esp), 0x44u);
    /* 004f4cec: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4cf4: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4cf9u); f_004e9d1c();
    /* 004f4cf9: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4cfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4cfc: ret  */ FN_RET(0x004f4a00); r_esp += 4; return;
}

void f_004f4b41(void)
{
    FN_ENTER(0x004f4b41);
    /* 004f4b41: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4b44: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4b48: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 004f4b4b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4b4f: mov dword ptr [ebp - 0x54], 0x43998000 */ W32((u32)(r_ebp+0xffffffacu), 0x43998000u);
    /* 004f4b56: mov dword ptr [ebp - 0x50], 0x43880000 */ W32((u32)(r_ebp+0xffffffb0u), 0x43880000u);
    /* 004f4b5d: mov dword ptr [esp], 0x4b */ W32((u32)(r_esp), 0x4bu);
    /* 004f4b64: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4b6c: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4b71u); f_004e9ef8();
    /* 004f4b71: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4b74: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4b78: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 004f4b7b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4b7f: mov dword ptr [ebp - 0x4c], 0x4415c000 */ W32((u32)(r_ebp+0xffffffb4u), 0x4415c000u);
    /* 004f4b86: mov dword ptr [ebp - 0x48], 0x43880000 */ W32((u32)(r_ebp+0xffffffb8u), 0x43880000u);
    /* 004f4b8d: mov dword ptr [esp], 0x4c */ W32((u32)(r_esp), 0x4cu);
    /* 004f4b94: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4b9c: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4ba1u); f_004e9ef8();
    /* 004f4ba1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4ba4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4ba8: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 004f4bab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4baf: mov dword ptr [ebp - 0x44], 0x43998000 */ W32((u32)(r_ebp+0xffffffbcu), 0x43998000u);
    /* 004f4bb6: mov dword ptr [ebp - 0x40], 0x43d20000 */ W32((u32)(r_ebp+0xffffffc0u), 0x43d20000u);
    /* 004f4bbd: mov dword ptr [esp], 0x49 */ W32((u32)(r_esp), 0x49u);
    /* 004f4bc4: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4bcc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4bd1u); f_004e9ef8();
    /* 004f4bd1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4bd4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f4bd8: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 004f4bdb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4bdf: mov dword ptr [ebp - 0x3c], 0x4415c000 */ W32((u32)(r_ebp+0xffffffc4u), 0x4415c000u);
    /* 004f4be6: mov dword ptr [ebp - 0x38], 0x43d20000 */ W32((u32)(r_ebp+0xffffffc8u), 0x43d20000u);
    /* 004f4bed: mov dword ptr [esp], 0x4a */ W32((u32)(r_esp), 0x4au);
    /* 004f4bf4: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4bfc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f4c01u); f_004e9ef8();
    /* 004f4c01: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4c04: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4c08: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 004f4c0b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4c0f: mov dword ptr [ebp - 0x30], 0x3f800000 */ W32((u32)(r_ebp+0xffffffd0u), 0x3f800000u);
    /* 004f4c16: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004f4c19: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4c1d: mov dword ptr [ebp - 0x34], 0x420e0000 */ W32((u32)(r_ebp+0xffffffccu), 0x420e0000u);
    /* 004f4c24: mov dword ptr [ebp - 0x2c], 0x439d8000 */ W32((u32)(r_ebp+0xffffffd4u), 0x439d8000u);
    /* 004f4c2b: mov dword ptr [ebp - 0x28], 0x43880000 */ W32((u32)(r_ebp+0xffffffd8u), 0x43880000u);
    /* 004f4c32: mov dword ptr [esp], 0x45 */ W32((u32)(r_esp), 0x45u);
    /* 004f4c39: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4c41: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4c46u); f_004e9d1c();
    /* 004f4c46: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4c49: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4c4d: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 004f4c50: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4c54: mov dword ptr [ebp - 0x24], 0x439d8000 */ W32((u32)(r_ebp+0xffffffdcu), 0x439d8000u);
    /* 004f4c5b: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004f4c5e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4c62: mov dword ptr [ebp - 0x20], 0x43d20000 */ W32((u32)(r_ebp+0xffffffe0u), 0x43d20000u);
    /* 004f4c69: mov dword ptr [esp], 0x46 */ W32((u32)(r_esp), 0x46u);
    /* 004f4c70: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4c78: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4c7du); f_004e9d1c();
    /* 004f4c7d: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4c80: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4c84: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004f4c87: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4c8b: mov dword ptr [ebp - 0x1c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffe4u), 0x3f800000u);
    /* 004f4c92: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 004f4c95: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4c99: mov dword ptr [ebp - 0x18], 0x418c0000 */ W32((u32)(r_ebp+0xffffffe8u), 0x418c0000u);
    /* 004f4ca0: mov dword ptr [ebp - 0x14], 0x43998000 */ W32((u32)(r_ebp+0xffffffecu), 0x43998000u);
    /* 004f4ca7: mov dword ptr [ebp - 0x10], 0x438c0000 */ W32((u32)(r_ebp+0xfffffff0u), 0x438c0000u);
    /* 004f4cae: mov dword ptr [esp], 0x43 */ W32((u32)(r_esp), 0x43u);
    /* 004f4cb5: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4cbd: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4cc2u); f_004e9d1c();
    /* 004f4cc2: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 004f4cc5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f4cc9: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f4ccc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f4cd0: mov dword ptr [ebp - 0xc], 0x4415c000 */ W32((u32)(r_ebp+0xfffffff4u), 0x4415c000u);
    /* 004f4cd7: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 004f4cda: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f4cde: mov dword ptr [ebp - 8], 0x438c0000 */ W32((u32)(r_ebp+0xfffffff8u), 0x438c0000u);
    /* 004f4ce5: mov dword ptr [esp], 0x44 */ W32((u32)(r_esp), 0x44u);
    /* 004f4cec: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f4cf4: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f4cf9u); f_004e9d1c();
    /* 004f4cf9: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4cfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4cfc: ret  */ FN_RET(0x004f4b41); r_esp += 4; return;
}

void f_004f4d00(void) /* sub_4F4D00 */
{
    FN_ENTER(0x004f4d00);
    /* 004f4d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d01: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4d03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d05: push 0x8d2fa4 */ { u32 v = 0x8d2fa4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f4d18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4d1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f4d1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f4d21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f4d24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f4d27: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d29: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f4d30: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f4d35u); f_005caba4();
    /* 004f4d35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4d36: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f4d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f4d3b: je 0x4f4d61 */ if (fZ) goto L_004f4d61;
L_004f4d3d:; BB(0x004f4d3d);
    /* 004f4d3d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f4d44: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f4d4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d4d: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f4d53: mov ecx, eax */ r_ecx = r_eax;
    /* 004f4d55: call 0x4f4910 */ r_esp -= 4; W32(r_esp, 0x4f4d5au); f_004f4910();
    /* 004f4d5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f4d61:; BB(0x004f4d61);
    /* 004f4d61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f4d64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f4d6b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4d6e: ret  */ FN_RET(0x004f4d00); r_esp += 4; return;
}

void f_004f4d70(void) /* sub_4F4D70 */
{
    FN_ENTER(0x004f4d70);
    /* 004f4d70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f4d73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f4d75: call 0x4f4d94 */ r_esp -= 4; W32(r_esp, 0x4f4d7au); f_004f4d94();
    /* 004f4d7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f4d7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f4d80: jne 0x4f4d86 */ if (!fZ) goto L_004f4d86;
L_004f4d82:; BB(0x004f4d82);
    /* 004f4d82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f4d83: ret 4 */ FN_RET(0x004f4d70); r_esp += 8; return;
L_004f4d86:; BB(0x004f4d86);
    /* 004f4d86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f4d8cu); f_005c2f74();
    /* 004f4d8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4d8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f4d8e: ret 4 */ FN_RET(0x004f4d70); r_esp += 8; return;
}

void f_004f4d94(void) /* sub_4F4D94 */
{
    FN_ENTER(0x004f4d94);
    /* 004f4d94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d95: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d99: push 0x8d2fc0 */ { u32 v = 0x8d2fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4da5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f4dac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4daf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f4db2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f4db5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f4db8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f4dbb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f4dbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f4dc1: mov dword ptr [ecx], 0xafdd48 */ W32((u32)(r_ecx), 0xafdd48u);
    /* 004f4dc7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f4dce: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4f4dd3u); f_008171e8();
    /* 004f4dd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f4dd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f4ddd: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4ddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4de0: ret  */ FN_RET(0x004f4d94); r_esp += 4; return;
}

void f_004f4de4(void) /* sub_4F4DE4 */
{
    FN_ENTER(0x004f4de4);
    /* 004f4de4: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004f4de7: add dword ptr [ecx + 0x34], 1 */ { u32 ad = (u32)(r_ecx+0x34u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f4deb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4dee: je 0x4f4e07 */ if (fZ) goto L_004f4e07;
L_004f4df0:; BB(0x004f4df0);
    /* 004f4df0: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f4df3: cmp eax, dword ptr [0x9b91ac] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b91acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4df9: je 0x4f4e07 */ if (fZ) goto L_004f4e07;
L_004f4dfb:; BB(0x004f4dfb);
    /* 004f4dfb: mov dword ptr [ecx + 0x1c], 2 */ W32((u32)(r_ecx+0x1cu), 0x2u);
    /* 004f4e02: mov edx, 2 */ r_edx = 0x2u;
L_004f4e07:; BB(0x004f4e07);
    /* 004f4e07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4e09: je 0x4f4e6c */ if (fZ) goto L_004f4e6c;
L_004f4e0b:; BB(0x004f4e0b);
    /* 004f4e0b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4e0e: jne 0x4f4e2e */ if (!fZ) goto L_004f4e2e;
L_004f4e10:; BB(0x004f4e10);
    /* 004f4e10: fld dword ptr [0x91e3dc] */ FPUSH(R_F32((u32)(0x91e3dcu)));
    /* 004f4e16: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 004f4e19: fld dword ptr [0x91e410] */ FPUSH(R_F32((u32)(0x91e410u)));
    /* 004f4e1f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f4e21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4e23: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4e24: ja 0x4f4e28 */ if ((!fC&&!fZ)) goto L_004f4e28;
L_004f4e26:; BB(0x004f4e26);
    /* 004f4e26: fst st(1) */ ST(1) = ST(0);
L_004f4e28:; BB(0x004f4e28);
    /* 004f4e28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4e2a: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 004f4e2d: ret  */ FN_RET(0x004f4de4); r_esp += 4; return;
L_004f4e2e:; BB(0x004f4e2e);
    /* 004f4e2e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f4e31: jne 0x4f4e6b */ if (!fZ) goto L_004f4e6b;
L_004f4e33:; BB(0x004f4e33);
    /* 004f4e33: mov eax, dword ptr [0x9b91ac] */ r_eax = R32((u32)(0x9b91acu));
    /* 004f4e38: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4e3b: je 0x4f4e7a */ if (fZ) goto L_004f4e7a;
L_004f4e3d:; BB(0x004f4e3d);
    /* 004f4e3d: fld dword ptr [0x91e3e4] */ FPUSH(R_F32((u32)(0x91e3e4u)));
    /* 004f4e43: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
L_004f4e46:; BB(0x004f4e46);
    /* 004f4e46: fcom dword ptr [0x91e414] */ fx_compare(ST(0), R_F32((u32)(0x91e414u))); 
    /* 004f4e4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4e4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4e4f: ja 0x4f4e67 */ if ((!fC&&!fZ)) goto L_004f4e67;
L_004f4e51:; BB(0x004f4e51);
    /* 004f4e51: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4e53: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004f4e57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f4e59: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004f4e5c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f4e62: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 004f4e66: ret  */ FN_RET(0x004f4de4); r_esp += 4; return;
L_004f4e67:; BB(0x004f4e67);
    /* 004f4e67: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 004f4e6a: ret  */ FN_RET(0x004f4de4); r_esp += 4; return;
L_004f4e6b:; BB(0x004f4e6b);
    /* 004f4e6b: ret  */ FN_RET(0x004f4de4); r_esp += 4; return;
L_004f4e6c:; BB(0x004f4e6c);
    /* 004f4e6c: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 004f4e6f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f4e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f4e74: jle 0x4f4e85 */ if ((fZ||fS!=fO)) goto L_004f4e85;
L_004f4e76:; BB(0x004f4e76);
    /* 004f4e76: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004f4e79: ret  */ FN_RET(0x004f4de4); r_esp += 4; return;
L_004f4e7a:; BB(0x004f4e7a);
    /* 004f4e7a: fld dword ptr [0x91e3e0] */ FPUSH(R_F32((u32)(0x91e3e0u)));
    /* 004f4e80: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 004f4e83: jmp 0x4f4e46 */ goto L_004f4e46;
L_004f4e85:; BB(0x004f4e85);
    /* 004f4e85: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 004f4e8c: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 004f4e93: ret  */ FN_RET(0x004f4de4); r_esp += 4; return;
}

void f_004f4e20(void)
{
    FN_ENTER(0x004f4e20);
    goto L_004f4e20;
L_004f4dc2:; BB(0x004f4dc2);
    /* 004f4dc2: add dword ptr [eax - 0x23], ecx */ { u32 ad = (u32)(r_eax+0xffffffddu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f4dc5: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 004f4dc6: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004f4dc8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f4dc9: cld  */ rt_df = 0;
    UNSUP(0x004f4dca, "falls out of decoded code");
L_004f4e20:; BB(0x004f4e20);
    /* 004f4e20: rcr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_edi = a; }
    /* 004f4e22: loopne 0x4f4dc2 */ r_ecx--; if (r_ecx && !fZ) goto L_004f4dc2;
    /* 004f4e24: ja 0x4f4e28 */ if ((!fC&&!fZ)) goto L_004f4e28;
L_004f4e26:; BB(0x004f4e26);
    /* 004f4e26: fst st(1) */ ST(1) = ST(0);
L_004f4e28:; BB(0x004f4e28);
    /* 004f4e28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4e2a: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 004f4e2d: ret  */ FN_RET(0x004f4e20); r_esp += 4; return;
}

void f_004f4e94(void) /* sub_4F4E94 */
{
    FN_ENTER(0x004f4e94);
    /* 004f4e94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e96: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4e99: mov edi, ecx */ r_edi = r_ecx;
    /* 004f4e9b: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004f4e9e: fcomp dword ptr [0x91e40c] */ fx_compare(ST(0), R_F32((u32)(0x91e40cu))); FPOP();
    /* 004f4ea4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4ea6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4ea7: je 0x4f50b7 */ if (fZ) goto L_004f50b7;
L_004f4ead:; BB(0x004f4ead);
    /* 004f4ead: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f4eb2u); f_004d28a4();
    /* 004f4eb2: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4f4eb7u); f_007a9380();
    /* 004f4eb7: fld dword ptr [0x91e408] */ FPUSH(R_F32((u32)(0x91e408u)));
    /* 004f4ebd: fld dword ptr [0x91e404] */ FPUSH(R_F32((u32)(0x91e404u)));
    /* 004f4ec3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4ec5: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f4ec9: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004f4ecc: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004f4ecf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4ed1: fmul dword ptr [0x91e3fc] */ ST(0) = ST(0) * R_F32((u32)(0x91e3fcu));
    /* 004f4ed7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4ed9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f4edb: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004f4edd: fsubr dword ptr [0x91e400] */ ST(0) = R_F32((u32)(0x91e400u)) - ST(0);
    /* 004f4ee3: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004f4ee7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f4ee9: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f4eed: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f4ef2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4ef7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f4efb: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f4eff: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f4f03: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f4f07: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004f4f0b: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f4f0f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f4f14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4f19: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f4f1d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f4f21: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f4f25: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f4f29: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004f4f2d: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 004f4f30: or ebp, 0xffffff */ {  u32 a = r_ebp; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f4f36: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f4f3bu); f_0082dcbc();
    /* 004f4f3b: fld dword ptr [0x91e3f8] */ FPUSH(R_F32((u32)(0x91e3f8u)));
    /* 004f4f41: fmul dword ptr [edi + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x30u));
    /* 004f4f44: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f4f46: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f4f4a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f4f4f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4f54: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f4f58: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f4f5c: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f4f60: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f4f64: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004f4f68: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f4f6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f4f6d: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f4f73: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 004f4f77: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 004f4f7b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f4f7d: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 004f4f81: mov esi, edi */ r_esi = r_edi;
L_004f4f83:; BB(0x004f4f83);
    /* 004f4f83: mov edx, ebx */ r_edx = r_ebx;
    /* 004f4f85: add edx, dword ptr [esi + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f4f88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4f89: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f4f8c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4f4f91u); f_00792fe8();
    /* 004f4f91: mov edi, eax */ r_edi = r_eax;
    /* 004f4f93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4f96: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f4f9a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f4f9e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004f4fa2: mov dword ptr [esp], 0x439d8000 */ W32((u32)(r_esp), 0x439d8000u);
    /* 004f4fa9: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 004f4fad: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f4fb2u); f_007ac12c();
    /* 004f4fb2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f4fb6: fcomp dword ptr [0x91e40c] */ fx_compare(ST(0), R_F32((u32)(0x91e40cu))); FPOP();
    /* 004f4fbc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f4fbe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f4fbf: jbe 0x4f508b */ if ((fC||fZ)) goto L_004f508b;
L_004f4fc5:; BB(0x004f4fc5);
    /* 004f4fc5: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f4fc9: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 004f4fcd: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 004f4fd1: mov eax, 1 */ r_eax = 0x1u;
    /* 004f4fd6: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004f4fdb: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004f4fdf: mov ebp, eax */ r_ebp = r_eax;
    /* 004f4fe1: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_004f4fe5:; BB(0x004f4fe5);
    /* 004f4fe5: fld dword ptr [0x91e3ec] */ FPUSH(R_F32((u32)(0x91e3ecu)));
    /* 004f4feb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004f4fed: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004f4ff1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f4ff5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f4ff7: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004f4ffb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f4ffd: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 004f5002: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f5004: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f5006: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f5006, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f5006, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f5008: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 004f500c: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004f5010: mov ebp, eax */ r_ebp = r_eax;
L_004f5012:; BB(0x004f5012);
    /* 004f5012: mov ecx, esi */ r_ecx = r_esi;
    /* 004f5014: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f5019u); f_0082dcbc();
    /* 004f5019: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004f501d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004f5021: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 004f5025: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004f5029: mov ecx, esi */ r_ecx = r_esi;
    /* 004f502b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f5030u); f_0082ddd8();
    /* 004f5030: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 004f5034: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 004f5038: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004f503c: fadd dword ptr [0x91e3f4] */ ST(0) = ST(0) + R_F32((u32)(0x91e3f4u));
    /* 004f5042: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5044: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5048: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f504b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004f504f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004f5053: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f5058u); f_007ac12c();
    /* 004f5058: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f505a: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5060: jl 0x4f5012 */ if ((fS!=fO)) goto L_004f5012;
L_004f5062:; BB(0x004f5062);
    /* 004f5062: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 004f5066: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 004f506a: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f506e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f5071: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f5074: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5077: jl 0x4f4fe5 */ if ((fS!=fO)) goto L_004f4fe5;
L_004f507d:; BB(0x004f507d);
    /* 004f507d: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 004f5081: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004f5085: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004f5089: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f508b:; BB(0x004f508b);
    /* 004f508b: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f508f: fadd dword ptr [0x91e3e8] */ ST(0) = ST(0) + R_F32((u32)(0x91e3e8u));
    /* 004f5095: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f5099: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f509c: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f509f: jl 0x4f4f83 */ if ((fS!=fO)) goto L_004f4f83;
L_004f50a5:; BB(0x004f50a5);
    /* 004f50a5: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004f50a9: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 004f50ad: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4f50b2u); f_007a9318();
    /* 004f50b2: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f50b7u); f_004d2968();
L_004f50b7:; BB(0x004f50b7);
    /* 004f50b7: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f50ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f50bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f50bc: ret  */ FN_RET(0x004f4e94); r_esp += 4; return;
}

