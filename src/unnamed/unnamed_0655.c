#include "protos.h"

void f_006550b4(void) /* sub_6550B4 */
{
    FN_ENTER(0x006550b4);
    /* 006550b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006550b5: mov ebx, esp */ r_ebx = r_esp;
    /* 006550b7: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 006550ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006550bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006550bc: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006550bf: mov edi, ecx */ r_edi = r_ecx;
    /* 006550c1: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 006550c7: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 006550cd: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006550d0: fadd dword ptr [edx*4 + 0x9374d0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9374d0u));
    /* 006550d7: fstp dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0)); FPOP();
    /* 006550dd: mov ecx, edi */ r_ecx = r_edi;
    /* 006550df: call 0x655214 */ r_esp -= 4; W32(r_esp, 0x6550e4u); f_00655214();
    /* 006550e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006550e6: jne 0x6550f2 */ if (!fZ) goto L_006550f2;
L_006550e8:; BB(0x006550e8);
    /* 006550e8: mov dword ptr [edi + 0xa4], 0 */ W32((u32)(r_edi+0xa4u), 0x0u);
L_006550f2:; BB(0x006550f2);
    /* 006550f2: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 006550f8: fld dword ptr [edi + 0xa8] */ FPUSH(R_F32((u32)(r_edi+0xa8u)));
    /* 006550fe: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00655104: lea ebp, [edx + edx*4] */ r_ebp = (u32)(r_edx+r_edx*4);
    /* 00655107: fadd dword ptr [ebp*4 + 0x9374d4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x9374d4u));
    /* 0065510e: fst dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0));
    /* 00655114: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00655117: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065511a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0065511e: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 00655122: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00655125: fadd dword ptr [eax*4 + 0x937418] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937418u));
    /* 0065512c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065512e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655130: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655131: jae 0x65513d */ if (!fC) goto L_0065513d;
L_00655133:; BB(0x00655133);
    /* 00655133: mov dword ptr [edi + 0xa8], 0 */ W32((u32)(r_edi+0xa8u), 0x0u);
L_0065513d:; BB(0x0065513d);
    /* 0065513d: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 00655143: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00655146: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 0065514c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0065514e: jl 0x655159 */ if ((fS!=fO)) goto L_00655159;
L_00655150:; BB(0x00655150);
    /* 00655150: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00655153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00655154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00655155: mov esp, ebx */ r_esp = r_ebx;
    /* 00655157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655158: ret  */ FN_RET(0x006550b4); r_esp += 4; return;
L_00655159:; BB(0x00655159);
    /* 00655159: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00655161: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00655164: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 0065516c: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00655174: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x655179u); f_00830cd8();
    /* 00655179: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0065517c: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0065517f: mov edx, ebp */ r_edx = r_ebp;
    /* 00655181: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x655186u); f_008316b4();
    /* 00655186: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00655189: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065518c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x655191u); f_0082d8bc();
    /* 00655191: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00655194: lea edx, [edi + 0xac] */ r_edx = (u32)(r_edi+0xacu);
    /* 0065519a: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x65519fu); f_008316b4();
    /* 0065519f: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 006551a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006551a4: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006551a8: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 006551ac: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6551b1u); f_00830aa0();
    /* 006551b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006551b3: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 006551b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006551b6: push 0x4c0 */ { u32 v = 0x4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006551bb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6551c0u); f_00814298();
    /* 006551c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006551c3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6551c8u); f_008587a5();
    /* 006551c8: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006551cc: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 006551d0: fdiv dword ptr [0x9375bc] */ ST(0) = ST(0) / R_F32((u32)(0x9375bcu));
    /* 006551d6: fmul dword ptr [0x9375b8] */ ST(0) = ST(0) * R_F32((u32)(0x9375b8u));
    /* 006551dc: fmul dword ptr [0x9375b4] */ ST(0) = ST(0) * R_F32((u32)(0x9375b4u));
    /* 006551e2: fadd dword ptr [0x9375c0] */ ST(0) = ST(0) + R_F32((u32)(0x9375c0u));
    /* 006551e8: fnstcw word ptr [esp + 0x60] */ W16((u32)(r_esp+0x60u), fcw);
    /* 006551ec: movzx eax, word ptr [esp + 0x60] */ r_eax = (u32)R16((u32)(r_esp+0x60u));
    /* 006551f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006551f6: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006551fa: fldcw word ptr [esp + 0x68] */ fcw = R16((u32)(r_esp+0x68u));
    /* 006551fe: fistp dword ptr [edi + 0xcc] */ W32((u32)(r_edi+0xccu), (u32)fx_int32(ST(0))); FPOP();
    /* 00655204: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 00655208: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065520b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065520c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065520d: mov esp, ebx */ r_esp = r_ebx;
    /* 0065520f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655210: ret  */ FN_RET(0x006550b4); r_esp += 4; return;
}

void f_00655214(void) /* sub_655214 */
{
    FN_ENTER(0x00655214);
    /* 00655214: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655215: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00655216: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655217: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065521a: mov edi, ecx */ r_edi = r_ecx;
    /* 0065521c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0065521f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655220: mov ecx, edi */ r_ecx = r_edi;
    /* 00655222: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655228: push dword ptr [edi + 0xa0] */ { u32 v = R32((u32)(r_edi+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065522e: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655234: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x655239u); f_00653fc4();
    /* 00655239: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0065523c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00655240: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00655244: mov esi, dword ptr [edi + 0x98] */ r_esi = R32((u32)(r_edi+0x98u));
    /* 0065524a: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 00655250: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00655256: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 0065525c: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 00655262: mov dword ptr [edi + 0xb4], ebx */ W32((u32)(r_edi+0xb4u), r_ebx);
    /* 00655268: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065526b: mov ecx, edi */ r_ecx = r_edi;
    /* 0065526d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00655270: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00655274: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 0065527a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0065527d: fadd dword ptr [eax*4 + 0x9374d8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9374d8u));
    /* 00655284: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00655288: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0065528c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00655290: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x655295u); f_00653fc4();
    /* 00655295: mov esi, eax */ r_esi = r_eax;
    /* 00655297: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0065529b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0065529f: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006552a3: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006552a7: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006552ab: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006552af: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006552b3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006552b6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x6552bbu); f_0082f9c4();
    /* 006552bb: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006552bf: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 006552c3: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006552c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006552c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006552c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006552ca: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x6552cfu); f_007a8d98();
    /* 006552cf: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 006552d5: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 006552d8: push dword ptr [ebx*4 + 0x9374dc] */ { u32 v = R32((u32)(r_ebx*4+0x9374dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006552df: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006552e3: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006552e9: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x6552eeu); f_007a8c74();
    /* 006552ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006552f1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006552f5: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 006552f8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006552fc: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00655300: mov ebx, dword ptr [edi + 0xb8] */ r_ebx = R32((u32)(r_edi+0xb8u));
    /* 00655306: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0065530c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065530e: fmul qword ptr [0x937410] */ ST(0) = ST(0) * R_F64((u32)(0x937410u));
    /* 00655314: fdiv qword ptr [0x937408] */ ST(0) = ST(0) / R_F64((u32)(0x937408u));
    /* 0065531a: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00655320: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00655324: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00655329: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065532e: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00655332: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00655336: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0065533a: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0065533e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00655342: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00655345: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00655349: push dword ptr [edx*4 + 0x9374dc] */ { u32 v = R32((u32)(r_edx*4+0x9374dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00655350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655351: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655352: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x655357u); f_007a8c74();
    /* 00655357: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065535b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065535c: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00655362: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x655367u); f_007a900c();
    /* 00655367: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065536a: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065536d: jle 0x6553be */ if ((fZ||fS!=fO)) goto L_006553be;
L_0065536f:; BB(0x0065536f);
    /* 0065536f: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 00655375: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00655377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00655379: mov ebx, 0xfffffe00 */ r_ebx = 0xfffffe00u;
    /* 0065537e: jl 0x655382 */ if ((fS!=fO)) goto L_00655382;
L_00655380:; BB(0x00655380);
    /* 00655380: mov eax, edx */ r_eax = r_edx;
L_00655382:; BB(0x00655382);
    /* 00655382: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 00655388: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065538b: cmp eax, 0xfffffe00 */ {  u32 a = r_eax; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655390: jg 0x655394 */ if ((!fZ&&fS==fO)) goto L_00655394;
L_00655392:; BB(0x00655392);
    /* 00655392: mov eax, ebx */ r_eax = r_ebx;
L_00655394:; BB(0x00655394);
    /* 00655394: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 0065539a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065539c: cmp edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006553a2: jl 0x6553af */ if ((fS!=fO)) goto L_006553af;
L_006553a4:; BB(0x006553a4);
    /* 006553a4: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 006553aa: jmp 0x65544d */ goto L_0065544d;
L_006553af:; BB(0x006553af);
    /* 006553af: mov dword ptr [edi + 0xc0], 0xffffe000 */ W32((u32)(r_edi+0xc0u), 0xffffe000u);
    /* 006553b9: jmp 0x65544d */ goto L_0065544d;
L_006553be:; BB(0x006553be);
    /* 006553be: cmp eax, -0x30 */ {  u32 a = r_eax; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006553c1: jge 0x65540c */ if ((fS==fO)) goto L_0065540c;
L_006553c3:; BB(0x006553c3);
    /* 006553c3: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 006553c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006553cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006553cd: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 006553d2: jg 0x6553d6 */ if ((!fZ&&fS==fO)) goto L_006553d6;
L_006553d4:; BB(0x006553d4);
    /* 006553d4: mov eax, edx */ r_eax = r_edx;
L_006553d6:; BB(0x006553d6);
    /* 006553d6: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 006553dc: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006553df: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006553e4: jl 0x6553e8 */ if ((fS!=fO)) goto L_006553e8;
L_006553e6:; BB(0x006553e6);
    /* 006553e6: mov eax, ebx */ r_eax = r_ebx;
L_006553e8:; BB(0x006553e8);
    /* 006553e8: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 006553ee: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006553f0: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006553f6: jg 0x655400 */ if ((!fZ&&fS==fO)) goto L_00655400;
L_006553f8:; BB(0x006553f8);
    /* 006553f8: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 006553fe: jmp 0x65544d */ goto L_0065544d;
L_00655400:; BB(0x00655400);
    /* 00655400: mov dword ptr [edi + 0xc0], 0x2000 */ W32((u32)(r_edi+0xc0u), 0x2000u);
    /* 0065540a: jmp 0x65544d */ goto L_0065544d;
L_0065540c:; BB(0x0065540c);
    /* 0065540c: mov ebx, dword ptr [edi + 0xc0] */ r_ebx = R32((u32)(r_edi+0xc0u));
    /* 00655412: mov dword ptr [edi + 0xc4], 0 */ W32((u32)(r_edi+0xc4u), 0x0u);
    /* 0065541c: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655422: jle 0x655432 */ if ((fZ||fS!=fO)) goto L_00655432;
L_00655424:; BB(0x00655424);
    /* 00655424: add ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065542a: mov dword ptr [edi + 0xc0], ebx */ W32((u32)(r_edi+0xc0u), r_ebx);
    /* 00655430: jmp 0x65544d */ goto L_0065544d;
L_00655432:; BB(0x00655432);
    /* 00655432: mov edx, 0xffffff00 */ r_edx = 0xffffff00u;
    /* 00655437: cmp ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065543d: jl 0x655441 */ if ((fS!=fO)) goto L_00655441;
L_0065543f:; BB(0x0065543f);
    /* 0065543f: mov ebx, edx */ r_ebx = r_edx;
L_00655441:; BB(0x00655441);
    /* 00655441: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00655447: mov dword ptr [edi + 0xc0], ebx */ W32((u32)(r_edi+0xc0u), r_ebx);
L_0065544d:; BB(0x0065544d);
    /* 0065544d: mov eax, esi */ r_eax = r_esi;
    /* 0065544f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00655452: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655453: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00655454: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00655455: ret  */ FN_RET(0x00655214); r_esp += 4; return;
}

void f_00655458(void) /* sub_655458 */
{
    FN_ENTER(0x00655458);
    /* 00655458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655459: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065545a: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065545d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065545f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x655464u); f_004f7c84();
    /* 00655464: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655467: je 0x6554d7 */ if (fZ) goto L_006554d7;
L_00655469:; BB(0x00655469);
    /* 00655469: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_0065546c:; BB(0x0065546c);
    /* 0065546c: mov ecx, dword ptr [0xa8f714] */ r_ecx = R32((u32)(0xa8f714u));
    /* 00655472: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x655477u); f_00829cc8();
    /* 00655477: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65547cu); f_0082d7b0();
    /* 0065547c: mov ecx, edi */ r_ecx = r_edi;
    /* 0065547e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x655483u); f_0082d838();
    /* 00655483: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00655486: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655488: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65548du); f_0082d8bc();
    /* 0065548d: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 00655493: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x655498u); f_0082d838();
    /* 00655498: mov edx, dword ptr [ebp + 0xb8] */ r_edx = R32((u32)(r_ebp+0xb8u));
    /* 0065549e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006554a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6554a5u); f_0082d8bc();
    /* 006554a5: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 006554ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006554ad: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6554b2u); f_00830c04();
    /* 006554b2: push dword ptr [ebp + 0xa8] */ { u32 v = R32((u32)(r_ebp+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006554b8: push dword ptr [ebp + 0x9c] */ { u32 v = R32((u32)(r_ebp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006554be: push dword ptr [ebp + 0x98] */ { u32 v = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006554c4: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x6554c9u); f_0083046c();
    /* 006554c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006554cc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6554d1u); f_0082da80();
    /* 006554d1: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006554d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006554d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006554d6: ret  */ FN_RET(0x00655458); r_esp += 4; return;
L_006554d7:; BB(0x006554d7);
    /* 006554d7: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 006554dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006554de: je 0x6554e5 */ if (fZ) goto L_006554e5;
L_006554e0:; BB(0x006554e0);
    /* 006554e0: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 006554e3: jmp 0x65546c */ goto L_0065546c;
L_006554e5:; BB(0x006554e5);
    /* 006554e5: fld dword ptr [0x9375b0] */ FPUSH(R_F32((u32)(0x9375b0u)));
    /* 006554eb: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 006554f1: mov ecx, dword ptr [ebp + 0xa0] */ r_ecx = R32((u32)(r_ebp+0xa0u));
    /* 006554f7: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006554fb: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006554ff: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00655503: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00655506: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0065550a: mov edi, eax */ r_edi = r_eax;
    /* 0065550c: mov esi, ecx */ r_esi = r_ecx;
L_0065550e:; BB(0x0065550e);
    /* 0065550e: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00655512: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00655515: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00655518: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0065551b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065551e: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00655521: fadd dword ptr [edx*4 + 0x937400] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937400u));
    /* 00655528: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065552a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065552c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065552d: jae 0x655531 */ if (!fC) goto L_00655531;
L_0065552f:; BB(0x0065552f);
    /* 0065552f: fst st(1) */ ST(1) = ST(0);
L_00655531:; BB(0x00655531);
    /* 00655531: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00655533: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655534: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00655537: mov ecx, esi */ r_ecx = r_esi;
    /* 00655539: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x65553eu); f_008304c8();
    /* 0065553e: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 00655542: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00655546: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 0065554a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065554b: mov ecx, edi */ r_ecx = r_edi;
    /* 0065554d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065554e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065554f: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00655553: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x655558u); f_0082facc();
    /* 00655558: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0065555c: fadd dword ptr [0x9375ac] */ ST(0) = ST(0) + R_F32((u32)(0x9375acu));
    /* 00655562: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00655565: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00655569: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0065556e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00655571: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00655575: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00655579: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0065557c: fadd dword ptr [edx*4 + 0x937400] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937400u));
    /* 00655583: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00655585: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655587: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655588: jae 0x65558e */ if (!fC) goto L_0065558e;
L_0065558a:; BB(0x0065558a);
    /* 0065558a: fst st(1) */ ST(1) = ST(0);
    /* 0065558c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0065558e:; BB(0x0065558e);
    /* 0065558e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00655590: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655591: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00655594: mov ecx, esi */ r_ecx = r_esi;
    /* 00655596: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x65559bu); f_008304c8();
    /* 0065559b: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0065559f: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006555a3: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 006555a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006555a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006555a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006555aa: mov ecx, edi */ r_ecx = r_edi;
    /* 006555ac: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 006555b0: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x6555b5u); f_0082facc();
    /* 006555b5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6555bau); f_0082d7b0();
    /* 006555ba: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006555be: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6555c3u); f_0082d838();
    /* 006555c3: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006555c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006555c8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6555cdu); f_0082d8bc();
    /* 006555cd: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 006555d1: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 006555d5: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 006555da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006555db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006555dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006555dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006555de: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6555e3u); f_0061cdb0();
    /* 006555e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006555e6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6555ebu); f_0082da80();
    /* 006555eb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006555ed: jne 0x65550e */ if (!fZ) goto L_0065550e;
L_006555f3:; BB(0x006555f3);
    /* 006555f3: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006555f7: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006555fb: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006555ff: jmp 0x65546c */ goto L_0065546c;
}

void f_00655604(void) /* sub_655604 */
{
    FN_ENTER(0x00655604);
    /* 00655604: mov ecx, dword ptr [0xa8f710] */ r_ecx = R32((u32)(0xa8f710u));
    /* 0065560a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065560c: je 0x655621 */ if (fZ) goto L_00655621;
L_0065560e:; BB(0x0065560e);
    /* 0065560e: je 0x655617 */ if (fZ) goto L_00655617;
L_00655610:; BB(0x00655610);
    /* 00655610: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655612: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x655617u); f_004066a8();
L_00655617:; BB(0x00655617);
    /* 00655617: mov dword ptr [0xa8f710], 0 */ W32((u32)(0xa8f710u), 0x0u);
L_00655621:; BB(0x00655621);
    /* 00655621: ret  */ FN_RET(0x00655604); r_esp += 4; return;
}

void f_00655624(void)
{
    FN_ENTER(0x00655624);
    /* 00655624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655625: mov ebp, esp */ r_ebp = r_esp;
    /* 00655627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655629: push 0x8e6dd4 */ { u32 v = 0x8e6dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065562e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00655634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065563c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065563f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00655642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00655645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00655648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065564b: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655650: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00655657: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65565cu); f_005caba4();
    /* 0065565c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065565d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00655660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655662: je 0x65569b */ if (fZ) goto L_0065569b;
L_00655664:; BB(0x00655664);
    /* 00655664: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065566b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00655672: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655675: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065567b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065567e: call 0x6556a0 */ r_esp -= 4; W32(r_esp, 0x655683u); f_006556a0();
    /* 00655683: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655686: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065568d:; BB(0x0065568d);
    /* 0065568d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00655690: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00655697: mov esp, ebp */ r_esp = r_ebp;
    /* 00655699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065569a: ret  */ FN_RET(0x00655624); r_esp += 4; return;
L_0065569b:; BB(0x0065569b);
    /* 0065569b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065569d: jmp 0x65568d */ goto L_0065568d;
}

void f_006556a0(void) /* sub_6556A0 */
{
    FN_ENTER(0x006556a0);
    /* 006556a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006556a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006556a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006556a5: push 0x8e6df0 */ { u32 v = 0x8e6df0u; r_esp -= 4; W32(r_esp, v); }
    /* 006556aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006556b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006556b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006556b8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006556bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006556be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006556c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006556c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006556c7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006556ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006556cd: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006556d0: call 0x653c74 */ r_esp -= 4; W32(r_esp, 0x6556d5u); f_00653c74();
    /* 006556d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006556dc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006556df: mov dword ptr [ecx], 0xb32094 */ W32((u32)(r_ecx), 0xb32094u);
    /* 006556e5: call 0x6557ec */ r_esp -= 4; W32(r_esp, 0x6556eau); f_006557ec();
    /* 006556ea: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006556ed: push dword ptr [eax + 0xa0] */ { u32 v = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006556f3: mov ecx, dword ptr [0xa8f710] */ r_ecx = R32((u32)(0xa8f710u));
    /* 006556f9: mov dword ptr [eax + 0x9c], 0x3f800000 */ W32((u32)(r_eax+0x9cu), 0x3f800000u);
    /* 00655703: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x655708u); f_005b8610();
    /* 00655708: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065570b: mov ecx, dword ptr [0xa8f710] */ r_ecx = R32((u32)(0xa8f710u));
    /* 00655711: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655713: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 00655719: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65571eu); f_005b8638();
    /* 0065571e: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 00655721: mov ecx, dword ptr [0xa8f710] */ r_ecx = R32((u32)(0xa8f710u));
    /* 00655727: mov esi, dword ptr [ebx + 0x84] */ r_esi = R32((u32)(r_ebx+0x84u));
    /* 0065572d: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 00655733: mov eax, 2 */ r_eax = 0x2u;
    /* 00655738: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065573b: mov edx, 0 */ r_edx = 0x0u;
    /* 00655740: jl 0x655744 */ if ((fS!=fO)) goto L_00655744;
L_00655742:; BB(0x00655742);
    /* 00655742: mov esi, eax */ r_esi = r_eax;
L_00655744:; BB(0x00655744);
    /* 00655744: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00655746: jg 0x65574a */ if ((!fZ&&fS==fO)) goto L_0065574a;
L_00655748:; BB(0x00655748);
    /* 00655748: mov esi, edx */ r_esi = r_edx;
L_0065574a:; BB(0x0065574a);
    /* 0065574a: mov dword ptr [ebx + 0xd8], esi */ W32((u32)(r_ebx+0xd8u), r_esi);
    /* 00655750: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 00655753: push dword ptr [edi*4 + 0x937508] */ { u32 v = R32((u32)(r_edi*4+0x937508u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065575a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65575fu); f_005b8638();
    /* 0065575f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00655762: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0065576c: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00655772: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 0065577c: call 0x655ec8 */ r_esp -= 4; W32(r_esp, 0x655781u); f_00655ec8();
    /* 00655781: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00655784: mov dword ptr [eax + 0x90], 0x447a0000 */ W32((u32)(r_eax+0x90u), 0x447a0000u);
    /* 0065578e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x655793u); f_008587a5();
    /* 00655793: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00655796: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655799: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065579c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065579f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006557a2: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 006557a5: fdiv dword ptr [0x937598] */ ST(0) = ST(0) / R_F32((u32)(0x937598u));
    /* 006557ab: fmul dword ptr [0x937594] */ ST(0) = ST(0) * R_F32((u32)(0x937594u));
    /* 006557b1: fmul dword ptr [0x937590] */ ST(0) = ST(0) * R_F32((u32)(0x937590u));
    /* 006557b7: fadd dword ptr [0x93759c] */ ST(0) = ST(0) + R_F32((u32)(0x93759cu));
    /* 006557bd: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 006557c0: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 006557c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006557c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006557cc: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 006557cf: fistp dword ptr [edx + 0xdc] */ W32((u32)(r_edx+0xdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 006557d5: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 006557d8: mov eax, edx */ r_eax = r_edx;
    /* 006557da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006557dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006557e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006557e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006557e7: ret 8 */ FN_RET(0x006556a0); r_esp += 12; return;
}

void f_006557ec(void) /* sub_6557EC */
{
    FN_ENTER(0x006557ec);
    /* 006557ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006557ed: mov esi, ecx */ r_esi = r_ecx;
    /* 006557ef: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 006557f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006557f7: jg 0x655807 */ if ((!fZ&&fS==fO)) goto L_00655807;
L_006557f9:; BB(0x006557f9);
    /* 006557f9: mov dword ptr [esi + 0xa0], 0 */ W32((u32)(r_esi+0xa0u), 0x0u);
    /* 00655803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00655805: jmp 0x655816 */ goto L_00655816;
L_00655807:; BB(0x00655807);
    /* 00655807: mov dword ptr [esi + 0xa0], 1 */ W32((u32)(r_esi+0xa0u), 0x1u);
    /* 00655811: mov eax, 1 */ r_eax = 0x1u;
L_00655816:; BB(0x00655816);
    /* 00655816: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 0065581c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065581e: jg 0x65582c */ if ((!fZ&&fS==fO)) goto L_0065582c;
L_00655820:; BB(0x00655820);
    /* 00655820: mov dword ptr [esi + 0xa4], 0 */ W32((u32)(r_esi+0xa4u), 0x0u);
    /* 0065582a: jmp 0x655857 */ goto L_00655857;
L_0065582c:; BB(0x0065582c);
    /* 0065582c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065582e: jne 0x65584d */ if (!fZ) goto L_0065584d;
L_00655830:; BB(0x00655830);
    /* 00655830: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655833: jle 0x655841 */ if ((fZ||fS!=fO)) goto L_00655841;
L_00655835:; BB(0x00655835);
    /* 00655835: mov dword ptr [esi + 0xa4], 3 */ W32((u32)(r_esi+0xa4u), 0x3u);
    /* 0065583f: jmp 0x655857 */ goto L_00655857;
L_00655841:; BB(0x00655841);
    /* 00655841: mov dword ptr [esi + 0xa4], 0xa */ W32((u32)(r_esi+0xa4u), 0xau);
    /* 0065584b: jmp 0x655857 */ goto L_00655857;
L_0065584d:; BB(0x0065584d);
    /* 0065584d: mov dword ptr [esi + 0xa4], 5 */ W32((u32)(r_esi+0xa4u), 0x5u);
L_00655857:; BB(0x00655857);
    /* 00655857: mov ecx, esi */ r_ecx = r_esi;
    /* 00655859: call 0x655a90 */ r_esp -= 4; W32(r_esp, 0x65585eu); f_00655a90();
    /* 0065585e: cmp eax, dword ptr [esi + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xa4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00655864: jne 0x655872 */ if (!fZ) goto L_00655872;
L_00655866:; BB(0x00655866);
    /* 00655866: mov dword ptr [esi + 0x98], 3 */ W32((u32)(r_esi+0x98u), 0x3u);
    /* 00655870: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00655871: ret  */ FN_RET(0x006557ec); r_esp += 4; return;
L_00655872:; BB(0x00655872);
    /* 00655872: mov dword ptr [esi + 0x98], 0 */ W32((u32)(r_esi+0x98u), 0x0u);
    /* 0065587c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065587d: ret  */ FN_RET(0x006557ec); r_esp += 4; return;
}

void f_00655880(void) /* sub_655880 */
{
    FN_ENTER(0x00655880);
    /* 00655880: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655881: mov ebx, esp */ r_ebx = r_esp;
    /* 00655883: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00655886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00655887: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065588a: mov esi, ecx */ r_esi = r_ecx;
    /* 0065588c: mov ecx, esi */ r_ecx = r_esi;
    /* 0065588e: call 0x6559d0 */ r_esp -= 4; W32(r_esp, 0x655893u); f_006559d0();
    /* 00655893: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 00655899: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 0065589f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006558a2: fadd dword ptr [edx*4 + 0x93750c] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93750cu));
    /* 006558a9: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 006558af: mov ecx, esi */ r_ecx = r_esi;
    /* 006558b1: call 0x655aa8 */ r_esp -= 4; W32(r_esp, 0x6558b6u); f_00655aa8();
    /* 006558b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006558b8: jne 0x6558c4 */ if (!fZ) goto L_006558c4;
L_006558ba:; BB(0x006558ba);
    /* 006558ba: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
L_006558c4:; BB(0x006558c4);
    /* 006558c4: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 006558ca: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 006558d0: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 006558d3: fadd dword ptr [eax*4 + 0x937510] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937510u));
    /* 006558da: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 006558e0: fst dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0));
    /* 006558e6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006558e9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006558ec: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006558f0: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 006558f4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006558f7: fadd dword ptr [eax*4 + 0x9373f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9373f8u));
    /* 006558fe: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00655900: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655902: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655903: jae 0x65590f */ if (!fC) goto L_0065590f;
L_00655905:; BB(0x00655905);
    /* 00655905: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
L_0065590f:; BB(0x0065590f);
    /* 0065590f: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 00655915: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00655918: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 0065591e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00655920: jl 0x65592a */ if ((fS!=fO)) goto L_0065592a;
L_00655922:; BB(0x00655922);
    /* 00655922: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00655925: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00655926: mov esp, ebx */ r_esp = r_ebx;
    /* 00655928: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655929: ret  */ FN_RET(0x00655880); r_esp += 4; return;
L_0065592a:; BB(0x0065592a);
    /* 0065592a: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00655932: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00655935: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 0065593d: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00655945: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x65594au); f_00830cd8();
    /* 0065594a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0065594d: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00655950: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x655955u); f_008316b4();
    /* 00655955: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00655958: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0065595b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x655960u); f_0082d8bc();
    /* 00655960: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00655963: lea edx, [esi + 0xbc] */ r_edx = (u32)(r_esi+0xbcu);
    /* 00655969: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x65596eu); f_008316b4();
    /* 0065596e: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00655972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655973: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00655977: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0065597b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x655980u); f_00830aa0();
    /* 00655980: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x655985u); f_008587a5();
    /* 00655985: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00655989: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 0065598d: fdiv dword ptr [0x937580] */ ST(0) = ST(0) / R_F32((u32)(0x937580u));
    /* 00655993: fmul dword ptr [0x93757c] */ ST(0) = ST(0) * R_F32((u32)(0x93757cu));
    /* 00655999: fmul dword ptr [0x937578] */ ST(0) = ST(0) * R_F32((u32)(0x937578u));
    /* 0065599f: fadd dword ptr [0x937584] */ ST(0) = ST(0) + R_F32((u32)(0x937584u));
    /* 006559a5: fnstcw word ptr [esp + 0x60] */ W16((u32)(r_esp+0x60u), fcw);
    /* 006559a9: movzx eax, word ptr [esp + 0x60] */ r_eax = (u32)R16((u32)(r_esp+0x60u));
    /* 006559ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006559b3: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006559b7: fldcw word ptr [esp + 0x68] */ fcw = R16((u32)(r_esp+0x68u));
    /* 006559bb: fistp dword ptr [esi + 0xdc] */ W32((u32)(r_esi+0xdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 006559c1: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 006559c5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006559c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006559c9: mov esp, ebx */ r_esp = r_ebx;
    /* 006559cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006559cc: ret  */ FN_RET(0x00655880); r_esp += 4; return;
}

void f_006559d0(void) /* sub_6559D0 */
{
    FN_ENTER(0x006559d0);
    /* 006559d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006559d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006559d3: mov eax, dword ptr [ebx + 0x98] */ r_eax = R32((u32)(r_ebx+0x98u));
    /* 006559d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006559db: je 0x655a73 */ if (fZ) goto L_00655a73;
L_006559e1:; BB(0x006559e1);
    /* 006559e1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006559e4: jne 0x655a1e */ if (!fZ) goto L_00655a1e;
L_006559e6:; BB(0x006559e6);
    /* 006559e6: fld dword ptr [0x93756c] */ FPUSH(R_F32((u32)(0x93756cu)));
    /* 006559ec: fadd dword ptr [ebx + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x9cu));
    /* 006559f2: fcom dword ptr [0x937568] */ fx_compare(ST(0), R_F32((u32)(0x937568u))); 
    /* 006559f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006559fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006559fb: jb 0x655a16 */ if (fC) goto L_00655a16;
L_006559fd:; BB(0x006559fd);
    /* 006559fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006559ff: mov dword ptr [ebx + 0x98], 3 */ W32((u32)(r_ebx+0x98u), 0x3u);
    /* 00655a09: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00655a0e: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 00655a14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655a15: ret  */ FN_RET(0x006559d0); r_esp += 4; return;
L_00655a16:; BB(0x00655a16);
    /* 00655a16: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 00655a1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655a1d: ret  */ FN_RET(0x006559d0); r_esp += 4; return;
L_00655a1e:; BB(0x00655a1e);
    /* 00655a1e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655a21: jne 0x655a58 */ if (!fZ) goto L_00655a58;
L_00655a23:; BB(0x00655a23);
    /* 00655a23: fld dword ptr [0x937574] */ FPUSH(R_F32((u32)(0x937574u)));
    /* 00655a29: fadd dword ptr [ebx + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x9cu));
    /* 00655a2f: fcom dword ptr [0x937570] */ fx_compare(ST(0), R_F32((u32)(0x937570u))); 
    /* 00655a35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655a37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655a38: ja 0x655a50 */ if ((!fC&&!fZ)) goto L_00655a50;
L_00655a3a:; BB(0x00655a3a);
    /* 00655a3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00655a3c: mov dword ptr [ebx + 0x98], 0 */ W32((u32)(r_ebx+0x98u), 0x0u);
    /* 00655a46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00655a48: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 00655a4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655a4f: ret  */ FN_RET(0x006559d0); r_esp += 4; return;
L_00655a50:; BB(0x00655a50);
    /* 00655a50: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 00655a56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655a57: ret  */ FN_RET(0x006559d0); r_esp += 4; return;
L_00655a58:; BB(0x00655a58);
    /* 00655a58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00655a5a: call 0x655a90 */ r_esp -= 4; W32(r_esp, 0x655a5fu); f_00655a90();
    /* 00655a5f: cmp eax, dword ptr [ebx + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00655a65: je 0x655a8c */ if (fZ) goto L_00655a8c;
L_00655a67:; BB(0x00655a67);
    /* 00655a67: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
    /* 00655a71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655a72: ret  */ FN_RET(0x006559d0); r_esp += 4; return;
L_00655a73:; BB(0x00655a73);
    /* 00655a73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00655a75: call 0x655a90 */ r_esp -= 4; W32(r_esp, 0x655a7au); f_00655a90();
    /* 00655a7a: cmp eax, dword ptr [ebx + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00655a80: jne 0x655a8c */ if (!fZ) goto L_00655a8c;
L_00655a82:; BB(0x00655a82);
    /* 00655a82: mov dword ptr [ebx + 0x98], 2 */ W32((u32)(r_ebx+0x98u), 0x2u);
L_00655a8c:; BB(0x00655a8c);
    /* 00655a8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655a8d: ret  */ FN_RET(0x006559d0); r_esp += 4; return;
}

void f_00655a90(void) /* sub_655A90 */
{
    FN_ENTER(0x00655a90);
    /* 00655a90: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x655a95u); f_00670fb8();
    /* 00655a95: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00655a98: je 0x655aa0 */ if (fZ) goto L_00655aa0;
L_00655a9a:; BB(0x00655a9a);
    /* 00655a9a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00655a9d: je 0x655aa0 */ if (fZ) goto L_00655aa0;
L_00655a9f:; BB(0x00655a9f);
    /* 00655a9f: ret  */ FN_RET(0x00655a90); r_esp += 4; return;
L_00655aa0:; BB(0x00655aa0);
    /* 00655aa0: mov eax, 3 */ r_eax = 0x3u;
    /* 00655aa5: ret  */ FN_RET(0x00655a90); r_esp += 4; return;
}

void f_00655aa8(void) /* sub_655AA8 */
{
    FN_ENTER(0x00655aa8);
    /* 00655aa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655aa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00655aaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655aab: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655aae: mov edi, ecx */ r_edi = r_ecx;
    /* 00655ab0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00655ab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655ab4: mov ecx, edi */ r_ecx = r_edi;
    /* 00655ab6: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655abc: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655ac2: push dword ptr [edi + 0xa8] */ { u32 v = R32((u32)(r_edi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655ac8: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x655acdu); f_00653fc4();
    /* 00655acd: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00655ad0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00655ad4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00655ad8: mov esi, dword ptr [edi + 0xa8] */ r_esi = R32((u32)(r_edi+0xa8u));
    /* 00655ade: fld dword ptr [edi + 0xb4] */ FPUSH(R_F32((u32)(r_edi+0xb4u)));
    /* 00655ae4: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00655aea: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00655af0: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00655af6: mov dword ptr [edi + 0xc4], ebx */ W32((u32)(r_edi+0xc4u), r_ebx);
    /* 00655afc: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655aff: mov ecx, edi */ r_ecx = r_edi;
    /* 00655b01: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00655b04: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00655b08: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 00655b0e: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00655b11: fadd dword ptr [eax*4 + 0x937514] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937514u));
    /* 00655b18: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00655b1c: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00655b20: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00655b24: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x655b29u); f_00653fc4();
    /* 00655b29: mov esi, eax */ r_esi = r_eax;
    /* 00655b2b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00655b2f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00655b33: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00655b37: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00655b3b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00655b3f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00655b43: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00655b47: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00655b4a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x655b4fu); f_0082f9c4();
    /* 00655b4f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00655b53: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 00655b57: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00655b5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655b5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655b5e: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x655b63u); f_007a8d98();
    /* 00655b63: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 00655b69: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 00655b6c: push dword ptr [ebx*4 + 0x937518] */ { u32 v = R32((u32)(r_ebx*4+0x937518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655b73: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655b77: push dword ptr [edi + 0xcc] */ { u32 v = R32((u32)(r_edi+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00655b7d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x655b82u); f_007a8c74();
    /* 00655b82: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655b85: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00655b89: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00655b8c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00655b90: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00655b94: mov ebx, dword ptr [edi + 0xc8] */ r_ebx = R32((u32)(r_edi+0xc8u));
    /* 00655b9a: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 00655ba0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00655ba2: fmul qword ptr [0x9373f0] */ ST(0) = ST(0) * R_F64((u32)(0x9373f0u));
    /* 00655ba8: fdiv qword ptr [0x9373e8] */ ST(0) = ST(0) / R_F64((u32)(0x9373e8u));
    /* 00655bae: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 00655bb4: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00655bb8: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00655bbd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00655bc2: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00655bc6: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00655bca: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00655bce: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00655bd2: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00655bd6: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00655bd9: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00655bdd: push dword ptr [edx*4 + 0x937518] */ { u32 v = R32((u32)(r_edx*4+0x937518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655be4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655be5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655be6: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x655bebu); f_007a8c74();
    /* 00655beb: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655bef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655bf0: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 00655bf6: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x655bfbu); f_007a900c();
    /* 00655bfb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655bfe: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c01: jle 0x655c52 */ if ((fZ||fS!=fO)) goto L_00655c52;
L_00655c03:; BB(0x00655c03);
    /* 00655c03: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 00655c09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00655c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00655c0d: mov ebx, 0xfffffe00 */ r_ebx = 0xfffffe00u;
    /* 00655c12: jl 0x655c16 */ if ((fS!=fO)) goto L_00655c16;
L_00655c14:; BB(0x00655c14);
    /* 00655c14: mov eax, edx */ r_eax = r_edx;
L_00655c16:; BB(0x00655c16);
    /* 00655c16: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 00655c1c: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00655c1f: cmp eax, 0xfffffe00 */ {  u32 a = r_eax; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c24: jg 0x655c28 */ if ((!fZ&&fS==fO)) goto L_00655c28;
L_00655c26:; BB(0x00655c26);
    /* 00655c26: mov eax, ebx */ r_eax = r_ebx;
L_00655c28:; BB(0x00655c28);
    /* 00655c28: mov dword ptr [edi + 0xd4], eax */ W32((u32)(r_edi+0xd4u), r_eax);
    /* 00655c2e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00655c30: cmp edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c36: jl 0x655c43 */ if ((fS!=fO)) goto L_00655c43;
L_00655c38:; BB(0x00655c38);
    /* 00655c38: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 00655c3e: jmp 0x655ce1 */ goto L_00655ce1;
L_00655c43:; BB(0x00655c43);
    /* 00655c43: mov dword ptr [edi + 0xd0], 0xffffe000 */ W32((u32)(r_edi+0xd0u), 0xffffe000u);
    /* 00655c4d: jmp 0x655ce1 */ goto L_00655ce1;
L_00655c52:; BB(0x00655c52);
    /* 00655c52: cmp eax, -0x30 */ {  u32 a = r_eax; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c55: jge 0x655ca0 */ if ((fS==fO)) goto L_00655ca0;
L_00655c57:; BB(0x00655c57);
    /* 00655c57: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 00655c5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00655c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00655c61: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 00655c66: jg 0x655c6a */ if ((!fZ&&fS==fO)) goto L_00655c6a;
L_00655c68:; BB(0x00655c68);
    /* 00655c68: mov eax, edx */ r_eax = r_edx;
L_00655c6a:; BB(0x00655c6a);
    /* 00655c6a: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 00655c70: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00655c73: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c78: jl 0x655c7c */ if ((fS!=fO)) goto L_00655c7c;
L_00655c7a:; BB(0x00655c7a);
    /* 00655c7a: mov eax, ebx */ r_eax = r_ebx;
L_00655c7c:; BB(0x00655c7c);
    /* 00655c7c: mov dword ptr [edi + 0xd4], eax */ W32((u32)(r_edi+0xd4u), r_eax);
    /* 00655c82: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00655c84: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c8a: jg 0x655c94 */ if ((!fZ&&fS==fO)) goto L_00655c94;
L_00655c8c:; BB(0x00655c8c);
    /* 00655c8c: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 00655c92: jmp 0x655ce1 */ goto L_00655ce1;
L_00655c94:; BB(0x00655c94);
    /* 00655c94: mov dword ptr [edi + 0xd0], 0x2000 */ W32((u32)(r_edi+0xd0u), 0x2000u);
    /* 00655c9e: jmp 0x655ce1 */ goto L_00655ce1;
L_00655ca0:; BB(0x00655ca0);
    /* 00655ca0: mov ebx, dword ptr [edi + 0xd0] */ r_ebx = R32((u32)(r_edi+0xd0u));
    /* 00655ca6: mov dword ptr [edi + 0xd4], 0 */ W32((u32)(r_edi+0xd4u), 0x0u);
    /* 00655cb0: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655cb6: jle 0x655cc6 */ if ((fZ||fS!=fO)) goto L_00655cc6;
L_00655cb8:; BB(0x00655cb8);
    /* 00655cb8: add ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00655cbe: mov dword ptr [edi + 0xd0], ebx */ W32((u32)(r_edi+0xd0u), r_ebx);
    /* 00655cc4: jmp 0x655ce1 */ goto L_00655ce1;
L_00655cc6:; BB(0x00655cc6);
    /* 00655cc6: mov edx, 0xffffff00 */ r_edx = 0xffffff00u;
    /* 00655ccb: cmp ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655cd1: jl 0x655cd5 */ if ((fS!=fO)) goto L_00655cd5;
L_00655cd3:; BB(0x00655cd3);
    /* 00655cd3: mov ebx, edx */ r_ebx = r_edx;
L_00655cd5:; BB(0x00655cd5);
    /* 00655cd5: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00655cdb: mov dword ptr [edi + 0xd0], ebx */ W32((u32)(r_edi+0xd0u), r_ebx);
L_00655ce1:; BB(0x00655ce1);
    /* 00655ce1: mov eax, esi */ r_eax = r_esi;
    /* 00655ce3: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00655ce6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00655ce7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00655ce8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00655ce9: ret  */ FN_RET(0x00655aa8); r_esp += 4; return;
}

void f_00655cec(void) /* sub_655CEC */
{
    FN_ENTER(0x00655cec);
    /* 00655cec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00655ced: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655cf0: mov esi, ecx */ r_esi = r_ecx;
    /* 00655cf2: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x655cf7u); f_004f7c84();
    /* 00655cf7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655cfa: je 0x655d98 */ if (fZ) goto L_00655d98;
L_00655d00:; BB(0x00655d00);
    /* 00655d00: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00655d06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655d08: je 0x655d93 */ if (fZ) goto L_00655d93;
L_00655d0e:; BB(0x00655d0e);
    /* 00655d0e: mov ecx, dword ptr [0xa8f70c] */ r_ecx = R32((u32)(0xa8f70cu));
    /* 00655d14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655d16: je 0x655d93 */ if (fZ) goto L_00655d93;
L_00655d18:; BB(0x00655d18);
    /* 00655d18: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x655d1du); f_00829cc8();
    /* 00655d1d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x655d22u); f_0082d7b0();
    /* 00655d22: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00655d25: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x655d2au); f_0082d838();
    /* 00655d2a: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00655d2d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655d2f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x655d34u); f_0082d8bc();
    /* 00655d34: lea ecx, [esi + 0xbc] */ r_ecx = (u32)(r_esi+0xbcu);
    /* 00655d3a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x655d3fu); f_0082d838();
    /* 00655d3f: mov edx, dword ptr [esi + 0xc8] */ r_edx = R32((u32)(r_esi+0xc8u));
    /* 00655d45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655d47: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x655d4cu); f_0082d8bc();
    /* 00655d4c: mov edx, dword ptr [esi + 0xd0] */ r_edx = R32((u32)(r_esi+0xd0u));
    /* 00655d52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655d54: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x655d59u); f_00830c04();
    /* 00655d59: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00655d5f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655d62: je 0x655d74 */ if (fZ) goto L_00655d74;
L_00655d64:; BB(0x00655d64);
    /* 00655d64: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 00655d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655d6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655d6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655d6f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x655d74u); f_0082fa0c();
L_00655d74:; BB(0x00655d74);
    /* 00655d74: push dword ptr [esi + 0xb8] */ { u32 v = R32((u32)(r_esi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655d7a: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00655d80: push dword ptr [esi + 0xa8] */ { u32 v = R32((u32)(r_esi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655d86: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x655d8bu); f_0083046c();
    /* 00655d8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655d8e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x655d93u); f_0082da80();
L_00655d93:; BB(0x00655d93);
    /* 00655d93: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00655d96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00655d97: ret  */ FN_RET(0x00655cec); r_esp += 4; return;
L_00655d98:; BB(0x00655d98);
    /* 00655d98: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00655d9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655d9f: jne 0x655d00 */ if (!fZ) goto L_00655d00;
L_00655da5:; BB(0x00655da5);
    /* 00655da5: fld dword ptr [0x937564] */ FPUSH(R_F32((u32)(0x937564u)));
    /* 00655dab: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00655db1: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 00655db7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00655dbb: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00655dbf: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00655dc3: mov edi, eax */ r_edi = r_eax;
    /* 00655dc5: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00655dc8: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00655dcc: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00655dd0: mov ebp, ecx */ r_ebp = r_ecx;
L_00655dd2:; BB(0x00655dd2);
    /* 00655dd2: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00655dd6: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00655dd9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00655ddc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00655ddf: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00655de2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00655de5: fadd dword ptr [edx*4 + 0x9373e0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9373e0u));
    /* 00655dec: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00655dee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655df0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655df1: jae 0x655df5 */ if (!fC) goto L_00655df5;
L_00655df3:; BB(0x00655df3);
    /* 00655df3: fst st(1) */ ST(1) = ST(0);
L_00655df5:; BB(0x00655df5);
    /* 00655df5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00655df7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655df8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00655dfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00655dfd: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x655e02u); f_008304c8();
    /* 00655e02: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00655e06: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00655e0a: lea ebx, [esp + 0x24] */ r_ebx = (u32)(r_esp+0x24u);
    /* 00655e0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00655e11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655e13: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00655e17: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x655e1cu); f_0082facc();
    /* 00655e1c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00655e20: fadd dword ptr [0x937560] */ ST(0) = ST(0) + R_F32((u32)(0x937560u));
    /* 00655e26: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00655e29: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00655e2d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00655e32: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00655e35: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00655e39: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00655e3d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00655e40: fadd dword ptr [edx*4 + 0x9373e0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9373e0u));
    /* 00655e47: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00655e49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655e4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655e4c: jae 0x655e52 */ if (!fC) goto L_00655e52;
L_00655e4e:; BB(0x00655e4e);
    /* 00655e4e: fst st(1) */ ST(1) = ST(0);
    /* 00655e50: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00655e52:; BB(0x00655e52);
    /* 00655e52: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00655e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655e55: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00655e58: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00655e5a: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x655e5fu); f_008304c8();
    /* 00655e5f: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00655e63: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00655e67: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00655e6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655e6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e6e: mov ecx, edi */ r_ecx = r_edi;
    /* 00655e70: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 00655e74: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x655e79u); f_0082facc();
    /* 00655e79: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x655e7eu); f_0082d7b0();
    /* 00655e7e: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00655e82: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x655e87u); f_0082d838();
    /* 00655e87: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00655e8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655e8c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x655e91u); f_0082d8bc();
    /* 00655e91: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 00655e95: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 00655e99: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 00655e9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655e9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655ea1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655ea2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x655ea7u); f_0061cdb0();
    /* 00655ea7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655eaa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x655eafu); f_0082da80();
    /* 00655eaf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655eb1: jne 0x655dd2 */ if (!fZ) goto L_00655dd2;
L_00655eb7:; BB(0x00655eb7);
    /* 00655eb7: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00655ebb: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00655ebf: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00655ec3: jmp 0x655d00 */ goto L_00655d00;
}

void f_00655ec8(void) /* sub_655EC8 */
{
    FN_ENTER(0x00655ec8);
    /* 00655ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655ec9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00655eca: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655ecd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00655ecf: fld dword ptr [0x93755c] */ FPUSH(R_F32((u32)(0x93755cu)));
    /* 00655ed5: mov ebp, dword ptr [ebx + 0xa8] */ r_ebp = R32((u32)(r_ebx+0xa8u));
    /* 00655edb: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 00655ee1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00655ee3: mov dword ptr [ebx + 0xc8], edx */ W32((u32)(r_ebx+0xc8u), r_edx);
    /* 00655ee9: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 00655eef: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 00655ef5: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 00655efb: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00655efe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00655f01: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00655f04: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00655f07: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00655f0a: fadd dword ptr [eax*4 + 0x9373c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9373c8u));
    /* 00655f11: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00655f13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00655f15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00655f16: jae 0x655f1a */ if (!fC) goto L_00655f1a;
L_00655f18:; BB(0x00655f18);
    /* 00655f18: fst st(1) */ ST(1) = ST(0);
L_00655f1a:; BB(0x00655f1a);
    /* 00655f1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00655f1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00655f1d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00655f20: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x655f25u); f_008304c8();
    /* 00655f25: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00655f29: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00655f2d: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00655f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655f32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655f34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00655f36: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00655f3a: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x655f3fu); f_0082facc();
    /* 00655f3f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00655f43: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00655f47: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00655f4b: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 00655f51: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 00655f57: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 00655f5d: mov dword ptr [ebx + 0xc4], ebp */ W32((u32)(r_ebx+0xc4u), r_ebp);
    /* 00655f63: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00655f66: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00655f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655f6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00655f6d: push dword ptr [edx*4 + 0x937514] */ { u32 v = R32((u32)(r_edx*4+0x937514u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655f74: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655f7a: push dword ptr [ebx + 0xa8] */ { u32 v = R32((u32)(r_ebx+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00655f80: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x655f85u); f_00653fc4();
    /* 00655f85: mov ebp, eax */ r_ebp = r_eax;
    /* 00655f87: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00655f8b: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00655f8f: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00655f93: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00655f97: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00655f9b: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00655f9f: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00655fa3: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00655fa7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x655facu); f_0082f9c4();
    /* 00655fac: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00655fb0: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00655fb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00655fb5: lea eax, [ebx + 0xcc] */ r_eax = (u32)(r_ebx+0xccu);
    /* 00655fbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655fbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655fbd: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x655fc2u); f_007a8d98();
    /* 00655fc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655fc5: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00655fc9: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00655fcd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00655fd1: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 00655fd5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00655fd7: fmul qword ptr [0x9373d8] */ ST(0) = ST(0) * R_F64((u32)(0x9373d8u));
    /* 00655fdd: fdiv qword ptr [0x9373d0] */ ST(0) = ST(0) / R_F64((u32)(0x9373d0u));
    /* 00655fe3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00655fe7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00655fec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00655ff1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00655ff5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00655ff9: fistp dword ptr [ebx + 0xc8] */ W32((u32)(r_ebx+0xc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00655fff: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00656003: mov eax, ebp */ r_eax = r_ebp;
    /* 00656005: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656008: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656009: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065600a: ret  */ FN_RET(0x00655ec8); r_esp += 4; return;
}

