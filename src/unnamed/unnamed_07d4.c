#include "protos.h"

void f_007d4068(void) /* sub_7D4068 */
{
    FN_ENTER(0x007d4068);
    /* 007d4068: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d406b: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d4071: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d4073: je 0x7d40bc */ if (fZ) goto L_007d40bc;
L_007d4075:; BB(0x007d4075);
    /* 007d4075: mov byte ptr [esp + 2], 0x84 */ W8((u32)(r_esp+0x2u), 0x84u);
    /* 007d407a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d407c: mov eax, 0x10 */ r_eax = 0x10u;
    /* 007d4081: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d4085: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d4089: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d408d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007d4091: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007d4094: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d4096: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007d4099: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d409b: mov edx, dword ptr [eax + ecx + 0x13cb8] */ r_edx = R32((u32)(r_eax+r_ecx+0x13cb8u));
    /* 007d40a2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d40a6: mov eax, dword ptr [eax + ecx + 0x13cbc] */ r_eax = R32((u32)(r_eax+r_ecx+0x13cbcu));
    /* 007d40ad: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d40b1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d40b4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d40b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d40b7: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d40bcu); f_0077fd10();
L_007d40bc:; BB(0x007d40bc);
    /* 007d40bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d40bf: ret 4 */ FN_RET(0x007d4068); r_esp += 8; return;
}

void f_007d40c4(void) /* sub_7D40C4 */
{
    FN_ENTER(0x007d40c4);
    /* 007d40c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d40c7: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d40cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d40cf: je 0x7d4121 */ if (fZ) goto L_007d4121;
L_007d40d1:; BB(0x007d40d1);
    /* 007d40d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d40d3: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 007d40d7: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007d40db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d40dd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007d40e0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d40e4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d40e8: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d40ec: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d40f0: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007d40f4: mov byte ptr [esp + 2], 0x40 */ W8((u32)(r_esp+0x2u), 0x40u);
    /* 007d40f9: mov eax, 0x14 */ r_eax = 0x14u;
    /* 007d40fe: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d4102: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007d4106: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d410a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d410e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007d4112: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007d4116: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d4119: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 007d411b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d411c: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d4121u); f_0077fd10();
L_007d4121:; BB(0x007d4121);
    /* 007d4121: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d4124: ret 0xc */ FN_RET(0x007d40c4); r_esp += 16; return;
}

void f_007d4128(void) /* sub_7D4128 */
{
    FN_ENTER(0x007d4128);
    /* 007d4128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d4129: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d412c: mov edi, ecx */ r_edi = r_ecx;
    /* 007d412e: mov eax, dword ptr [edi + 0x12130] */ r_eax = R32((u32)(r_edi+0x12130u));
    /* 007d4134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d4136: je 0x7d41bb */ if (fZ) goto L_007d41bb;
L_007d413c:; BB(0x007d413c);
    /* 007d413c: mov byte ptr [esp + 2], 0xc1 */ W8((u32)(r_esp+0x2u), 0xc1u);
    /* 007d4141: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d4143: mov eax, 0x58 */ r_eax = 0x58u;
    /* 007d4148: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d414c: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 007d4154: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d4158: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007d415c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d4160: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d4164: mov byte ptr [esp + 0x50], al */ W8((u32)(r_esp+0x50u), (u8)r_eax);
    /* 007d4168: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 007d416c: mov byte ptr [esp + 0x51], al */ W8((u32)(r_esp+0x51u), (u8)r_eax);
    /* 007d4170: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007d4174: mov byte ptr [esp + 0x52], al */ W8((u32)(r_esp+0x52u), (u8)r_eax);
    /* 007d4178: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 007d417c: mov byte ptr [esp + 0x53], al */ W8((u32)(r_esp+0x53u), (u8)r_eax);
    /* 007d4180: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 007d4184: mov byte ptr [esp + 0x54], al */ W8((u32)(r_esp+0x54u), (u8)r_eax);
    /* 007d4188: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007d418c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d418e: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d4192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d4193: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d4198u); f_00857dec();
    /* 007d4198: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 007d419c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d419e: push dword ptr [esp + 0x74] */ { u32 v = R32((u32)(r_esp+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d41a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d41a3: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d41a8u); f_00857dec();
    /* 007d41a8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d41ab: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007d41af: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d41b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d41b3: mov ecx, edi */ r_ecx = r_edi;
    /* 007d41b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d41b6: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d41bbu); f_0077fd10();
L_007d41bb:; BB(0x007d41bb);
    /* 007d41bb: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d41be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d41bf: ret 0x1c */ FN_RET(0x007d4128); r_esp += 32; return;
}

void f_007d41c4(void) /* sub_7D41C4 */
{
    FN_ENTER(0x007d41c4);
    /* 007d41c4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d41c7: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d41cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d41cf: je 0x7d41f4 */ if (fZ) goto L_007d41f4;
L_007d41d1:; BB(0x007d41d1);
    /* 007d41d1: mov byte ptr [esp + 2], 0x6f */ W8((u32)(r_esp+0x2u), 0x6fu);
    /* 007d41d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d41d8: mov edx, 8 */ r_edx = 0x8u;
    /* 007d41dd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007d41e1: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007d41e5: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007d41e9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d41ec: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d41ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d41ef: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d41f4u); f_0077fd10();
L_007d41f4:; BB(0x007d41f4);
    /* 007d41f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d41f7: ret  */ FN_RET(0x007d41c4); r_esp += 4; return;
}

void f_007d41f8(void) /* sub_7D41F8 */
{
    FN_ENTER(0x007d41f8);
    /* 007d41f8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d41fb: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d4201: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d4203: je 0x7d4228 */ if (fZ) goto L_007d4228;
L_007d4205:; BB(0x007d4205);
    /* 007d4205: mov byte ptr [esp + 2], 0x99 */ W8((u32)(r_esp+0x2u), 0x99u);
    /* 007d420a: mov eax, 8 */ r_eax = 0x8u;
    /* 007d420f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d4211: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d4215: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d4219: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d421d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d4220: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d4222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d4223: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d4228u); f_0077fd10();
L_007d4228:; BB(0x007d4228);
    /* 007d4228: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d422b: ret  */ FN_RET(0x007d41f8); r_esp += 4; return;
}

void f_007d422c(void) /* sub_7D422C */
{
    FN_ENTER(0x007d422c);
    /* 007d422c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d422d: mov ebp, esp */ r_ebp = r_esp;
    /* 007d422f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d4231: push 0x8f6afc */ { u32 v = 0x8f6afcu; r_esp -= 4; W32(r_esp, v); }
    /* 007d4236: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007d423c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d423d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007d4244: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d4247: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007d424a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 007d424d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 007d4250: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 007d4253: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d4259: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007d425c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007d425e: je 0x7d433e */ if (fZ) goto L_007d433e;
L_007d4264:; BB(0x007d4264);
    /* 007d4264: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007d426b: push 0x8008 */ { u32 v = 0x8008u; r_esp -= 4; W32(r_esp, v); }
    /* 007d4270: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007d4272: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x7d4277u); f_008587c7();
    /* 007d4277: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007d427a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d427d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007d4280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d4282: je 0x7d4379 */ if (fZ) goto L_007d4379;
L_007d4288:; BB(0x007d4288);
    /* 007d4288: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007d428f: mov edi, eax */ r_edi = r_eax;
    /* 007d4291: mov esi, 8 */ r_esi = 0x8u;
    /* 007d4296: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 007d4299: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d429b: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 007d429e: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 007d42a1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007d42a4: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
L_007d42a7:; BB(0x007d42a7);
    /* 007d42a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007d42ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007d42b1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 007d42b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d42b5: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 007d42b8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007d42bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d42bc: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7d42c1u); f_0086b6b8();
    /* 007d42c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d42c4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007d42c7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007d42ca: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 007d42cd: mov eax, 0x60606061 */ r_eax = 0x60606061u;
    /* 007d42d2: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 007d42d5: mov byte ptr [ebx + 2], 0x6d */ W8((u32)(r_ebx+0x2u), 0x6du);
    /* 007d42d9: lea edi, [ecx + 8] */ r_edi = (u32)(r_ecx+0x8u);
    /* 007d42dc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 007d42df: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007d42e1: mov word ptr [ebx], di */ W16((u32)(r_ebx), (u16)r_edi);
    /* 007d42e4: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 007d42e7: mov esi, edx */ r_esi = r_edx;
    /* 007d42e9: sar esi, 9 */ { u32 c = (9u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 007d42ec: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007d42ee: imul eax, esi, 0xfffffab0 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xfffffab0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007d42f4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007d42f6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007d42f8: lea eax, [eax + ecx + 8] */ r_eax = (u32)(r_eax+r_ecx+0x8u);
    /* 007d42fc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007d42ff: jle 0x7d4357 */ if ((fZ||fS!=fO)) goto L_007d4357;
L_007d4301:; BB(0x007d4301);
    /* 007d4301: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d4304: call 0x77fe84 */ r_esp -= 4; W32(r_esp, 0x7d4309u); f_0077fe84();
    /* 007d4309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d430b: jne 0x7d4330 */ if (!fZ) goto L_007d4330;
L_007d430d:; BB(0x007d430d);
    /* 007d430d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d4310: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007d4313: push 0x550 */ { u32 v = 0x550u; r_esp -= 4; W32(r_esp, v); }
    /* 007d4318: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007d431a: lea edi, [edi + ebx] */ r_edi = (u32)(r_edi+r_ebx);
    /* 007d431d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d431e: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x7d4321u); call_ind(t); }
    /* 007d4321: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007d4324: add ebx, 0x550 */ {  u32 a = r_ebx; u32 b = 0x550u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007d432a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007d432c: jg 0x7d4301 */ if ((!fZ&&fS==fO)) goto L_007d4301;
L_007d432e:; BB(0x007d432e);
    /* 007d432e: jmp 0x7d4357 */ goto L_007d4357;
L_007d4330:; BB(0x007d4330);
    /* 007d4330: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007d4333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007d4335: je 0x7d433e */ if (fZ) goto L_007d433e;
L_007d4337:; BB(0x007d4337);
    /* 007d4337: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d4338: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7d433du); f_00858882();
    /* 007d433d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007d433e:; BB(0x007d433e);
    /* 007d433e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007d4341: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007d4344: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007d4347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007d434a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007d4351: mov esp, ebp */ r_esp = r_ebp;
    /* 007d4353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d4354: ret 0xc */ FN_RET(0x007d422c); r_esp += 16; return;
L_007d4357:; BB(0x007d4357);
    /* 007d4357: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d435a: call 0x77fe84 */ r_esp -= 4; W32(r_esp, 0x7d435fu); f_0077fe84();
    /* 007d435f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d4361: jne 0x7d4330 */ if (!fZ) goto L_007d4330;
L_007d4363:; BB(0x007d4363);
    /* 007d4363: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007d4366: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007d4368: jle 0x7d4330 */ if ((fZ||fS!=fO)) goto L_007d4330;
L_007d436a:; BB(0x007d436a);
    /* 007d436a: add ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007d436d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d4370: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007d4372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d4373: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d4374: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x7d4377u); call_ind(t); }
    /* 007d4377: jmp 0x7d4330 */ goto L_007d4330;
L_007d4379:; BB(0x007d4379);
    /* 007d4379: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d437b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007d437e: jmp 0x7d42a7 */ goto L_007d42a7;
}

void f_007d4384(void) /* sub_7D4384 */
{
    FN_ENTER(0x007d4384);
    /* 007d4384: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d4385: mov ebp, esp */ r_ebp = r_esp;
    /* 007d4387: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d438a: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 007d438d: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 007d4390: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 007d4393: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007d4396: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007d4397: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007d4399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d439b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d439d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d439f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7d43a5u); call_ind(t); }
    /* 007d43a5: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007d43a6: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007d43a7: jmp 0x7d75c8 */ goto L_007d75c8;
L_007d75c8:; BB(0x007d75c8);
    /* 007d75c8: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007d75c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007d75cc: mov edx, dword ptr [eax + 0x12130] */ r_edx = R32((u32)(r_eax+0x12130u));
    /* 007d75d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d75d4: je 0x7d75fe */ if (fZ) goto L_007d75fe;
L_007d75d6:; BB(0x007d75d6);
    /* 007d75d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007d75d9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007d75dc: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007d75df: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 007d75e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007d75e5: mov byte ptr [eax + 2], 0x81 */ W8((u32)(r_eax+0x2u), 0x81u);
    /* 007d75e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d75ea: mov ebx, 0x45c */ r_ebx = 0x45cu;
    /* 007d75ef: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 007d75f6: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 007d75f9: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7d75feu); f_007c4fb4();
L_007d75fe:; BB(0x007d75fe);
    /* 007d75fe: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007d75ff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7601: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7603: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7605: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d7607: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7d760du); call_ind(t); }
    /* 007d760d: jmp 0x7d762d */ goto L_007d762d;
L_007d762d:; BB(0x007d762d);
    /* 007d762d: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007d762e: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007d7631: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007d7634: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007d7637: mov esp, ebp */ r_esp = r_ebp;
    /* 007d7639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d763a: ret 4 */ FN_RET(0x007d4384); r_esp += 8; return;
}

