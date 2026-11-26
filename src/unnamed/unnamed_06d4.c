#include "protos.h"

void f_006d4068(void) /* sub_6D4068 */
{
    FN_ENTER(0x006d4068);
    /* 006d4068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4069: mov ebp, esp */ r_ebp = r_esp;
    /* 006d406b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d406d: push 0x8ede44 */ { u32 v = 0x8ede44u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4072: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d4078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4079: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d4080: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d4083: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d4086: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006d4089: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006d408c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006d408f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d4092: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 006d4095: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4097: je 0x6d40e0 */ if (fZ) goto L_006d40e0;
L_006d4099:; BB(0x006d4099);
    /* 006d4099: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d409eu); f_00737d90();
    /* 006d409e: mov ebx, eax */ r_ebx = r_eax;
    /* 006d40a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d40a3: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006d40a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d40a8: je 0x6d41c9 */ if (fZ) goto L_006d41c9;
L_006d40ae:; BB(0x006d40ae);
    /* 006d40ae: cmp ebx, dword ptr [edx + 0x60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d40b1: jne 0x6d40ba */ if (!fZ) goto L_006d40ba;
L_006d40b3:; BB(0x006d40b3);
    /* 006d40b3: mov eax, edx */ r_eax = r_edx;
    /* 006d40b5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d40b8: jmp 0x6d40e0 */ goto L_006d40e0;
L_006d40ba:; BB(0x006d40ba);
    /* 006d40ba: lea esi, [edx + 0x40] */ r_esi = (u32)(r_edx+0x40u);
    /* 006d40bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d40be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d40bf: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d40c4u); f_006c8e50();
    /* 006d40c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d40c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d40c9: je 0x6d40d7 */ if (fZ) goto L_006d40d7;
L_006d40cb:; BB(0x006d40cb);
    /* 006d40cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d40ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d40cf: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006d40d2: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d40d7u); f_00725fa8();
L_006d40d7:; BB(0x006d40d7);
    /* 006d40d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d40da: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006d40dd: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
L_006d40e0:; BB(0x006d40e0);
    /* 006d40e0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d40e7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d40e9: je 0x6d4109 */ if (fZ) goto L_006d4109;
L_006d40eb:; BB(0x006d40eb);
    /* 006d40eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d40ee: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d40f1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d40f4: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006d40fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d40fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4105: mov esp, ebp */ r_esp = r_ebp;
    /* 006d4107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4108: ret  */ FN_RET(0x006d4068); r_esp += 4; return;
L_006d4109:; BB(0x006d4109);
    /* 006d4109: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d410b: je 0x6d41b5 */ if (fZ) goto L_006d41b5;
L_006d4111:; BB(0x006d4111);
    /* 006d4111: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d4116u); f_00737d90();
    /* 006d4116: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006d4119: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006d411c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d411d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d411e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d411f: call 0x6c8f1c */ r_esp -= 4; W32(r_esp, 0x6d4124u); f_006c8f1c();
    /* 006d4124: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4129: je 0x6d41b5 */ if (fZ) goto L_006d41b5;
L_006d412f:; BB(0x006d412f);
    /* 006d412f: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 006d4133: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4136: je 0x6d41d3 */ if (fZ) goto L_006d41d3;
L_006d413c:; BB(0x006d413c);
    /* 006d413c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d413e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d4143u); f_0073ec50();
    /* 006d4143: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4146: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d4149: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d414d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d414e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d414f: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d4154u); f_00735884();
    /* 006d4154: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4157: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d415a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d415c: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006d415f: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006d4166: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006d416c: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006d4173: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006d4176: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6d417bu); f_00736510();
    /* 006d417b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d417d: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d4182u); f_006dc8d8();
    /* 006d4182: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006d4185: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4187: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d418cu); f_006dc8d8();
    /* 006d418c: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006d418f: mov eax, ebx */ r_eax = r_ebx;
    /* 006d4191: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d4194: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4197: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d419a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d419e: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d41a3u); f_0070f5a4();
    /* 006d41a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d41a5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d41a7: mov dword ptr [ecx + 0x20], 3 */ W32((u32)(r_ecx+0x20u), 0x3u);
    /* 006d41ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d41b0: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 006d41b2: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d41b5u); call_ind(t); }
L_006d41b5:; BB(0x006d41b5);
    /* 006d41b5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d41b8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d41bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d41be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d41c5: mov esp, ebp */ r_esp = r_ebp;
    /* 006d41c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d41c8: ret  */ FN_RET(0x006d4068); r_esp += 4; return;
L_006d41c9:; BB(0x006d41c9);
    /* 006d41c9: mov eax, edx */ r_eax = r_edx;
    /* 006d41cb: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d41ce: jmp 0x6d40e0 */ goto L_006d40e0;
L_006d41d3:; BB(0x006d41d3);
    /* 006d41d3: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006d41d6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d41d9: jle 0x6d413c */ if ((fZ||fS!=fO)) goto L_006d413c;
L_006d41df:; BB(0x006d41df);
    /* 006d41df: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006d41e6: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d41eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d41f0u); f_005caba4();
    /* 006d41f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d41f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d41f6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006d41f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d41fb: je 0x6d4282 */ if (fZ) goto L_006d4282;
L_006d4201:; BB(0x006d4201);
    /* 006d4201: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006d4208: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d420f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d4211: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d4216u); f_0073ec50();
    /* 006d4216: mov ebx, eax */ r_ebx = r_eax;
    /* 006d4218: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d421b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d421e: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d4223u); f_006dc9ec();
    /* 006d4223: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d4226: mov esi, 1 */ r_esi = 0x1u;
    /* 006d422b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006d422e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d422f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4230: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4233: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4234: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4235: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6d423au); f_00728ac4();
    /* 006d423a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006d4241:; BB(0x006d4241);
    /* 006d4241: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d4244: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4247: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006d424a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d4251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4253: je 0x6d4273 */ if (fZ) goto L_006d4273;
L_006d4255:; BB(0x006d4255);
    /* 006d4255: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d425au); f_0078b208();
    /* 006d425a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d425d: jle 0x6d4273 */ if ((fZ||fS!=fO)) goto L_006d4273;
L_006d425f:; BB(0x006d425f);
    /* 006d425f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4262: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006d4265: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006d426c: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
L_006d4273:; BB(0x006d4273);
    /* 006d4273: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4276: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006d427d: jmp 0x6d41b5 */ goto L_006d41b5;
L_006d4282:; BB(0x006d4282);
    /* 006d4282: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d4284: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d4287: jmp 0x6d4241 */ goto L_006d4241;
}

void f_006d424c(void)
{
    FN_ENTER(0x006d424c);
    /* 006d424c: cld  */ rt_df = 0;
    UNSUP(0x006d424d, "falls out of decoded code");
}

void f_006d428c(void) /* sub_6D428C */
{
    FN_ENTER(0x006d428c);
    /* 006d428c: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 006d428f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4291: je 0x6d42a0 */ if (fZ) goto L_006d42a0;
L_006d4293:; BB(0x006d4293);
    /* 006d4293: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4297: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d429b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d429d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d42a0u); call_ind(t); }
L_006d42a0:; BB(0x006d42a0);
    /* 006d42a0: ret 8 */ FN_RET(0x006d428c); r_esp += 12; return;
}

void f_006d42a4(void) /* sub_6D42A4 */
{
    FN_ENTER(0x006d42a4);
    /* 006d42a4: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 006d42a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d42a9: je 0x6d42b8 */ if (fZ) goto L_006d42b8;
L_006d42ab:; BB(0x006d42ab);
    /* 006d42ab: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d42af: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d42b3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d42b5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d42b8u); call_ind(t); }
L_006d42b8:; BB(0x006d42b8);
    /* 006d42b8: ret 8 */ FN_RET(0x006d42a4); r_esp += 12; return;
}

void f_006d42bc(void) /* sub_6D42BC */
{
    FN_ENTER(0x006d42bc);
    /* 006d42bc: mov dword ptr [0xa961dc], 0x3f800000 */ W32((u32)(0xa961dcu), 0x3f800000u);
    /* 006d42c6: mov dword ptr [0xa961e0], 0x41000000 */ W32((u32)(0xa961e0u), 0x41000000u);
    /* 006d42d0: mov dword ptr [0xa961e4], 0x3fc00000 */ W32((u32)(0xa961e4u), 0x3fc00000u);
    /* 006d42da: ret  */ FN_RET(0x006d42bc); r_esp += 4; return;
}

void f_006d42dc(void) /* sub_6D42DC */
{
    FN_ENTER(0x006d42dc);
    /* 006d42dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d42dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006d42df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d42e1: push 0x8ede6c */ { u32 v = 0x8ede6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d42e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d42ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d42ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d42f4: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d42f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d42fa: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006d42fd: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006d4300: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006d4303: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006d4308: mov dword ptr [ecx + 0x5c], 1 */ W32((u32)(r_ecx+0x5cu), 0x1u);
    /* 006d430f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d4311: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 006d4314: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d4317: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4319: jne 0x6d4348 */ if (!fZ) goto L_006d4348;
L_006d431b:; BB(0x006d431b);
    /* 006d431b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d431d: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d431f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d4321: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4324u); call_ind(t); }
    /* 006d4324: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4327: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d432a: mov dword ptr [eax + 0x20], 6 */ W32((u32)(r_eax+0x20u), 0x6u);
    /* 006d4331: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4333: je 0x6d433a */ if (fZ) goto L_006d433a;
L_006d4335:; BB(0x006d4335);
    /* 006d4335: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d433au); f_00737d1c();
L_006d433a:; BB(0x006d433a);
    /* 006d433a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d433d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4344: mov esp, ebp */ r_esp = r_ebp;
    /* 006d4346: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4347: ret  */ FN_RET(0x006d42dc); r_esp += 4; return;
L_006d4348:; BB(0x006d4348);
    /* 006d4348: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d434a: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d434c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d434e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4351u); call_ind(t); }
    /* 006d4351: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4354: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d4357: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4359: je 0x6d452d */ if (fZ) goto L_006d452d;
L_006d435f:; BB(0x006d435f);
    /* 006d435f: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d4364u); f_00737d70();
    /* 006d4364: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4367: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d436a: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d436fu); f_00737d1c();
    /* 006d436f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006d4371:; BB(0x006d4371);
    /* 006d4371: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 006d4374: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 006d4377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4378: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4379: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d437a: call 0x6c8f1c */ r_esp -= 4; W32(r_esp, 0x6d437fu); f_006c8f1c();
    /* 006d437f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4384: je 0x6d43b3 */ if (fZ) goto L_006d43b3;
L_006d4386:; BB(0x006d4386);
    /* 006d4386: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006d4389: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d438c: jle 0x6d43a1 */ if ((fZ||fS!=fO)) goto L_006d43a1;
L_006d438e:; BB(0x006d438e);
    /* 006d438e: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 006d4391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4392: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4395: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d4398: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4399: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d439a: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d439fu); f_007375e0();
    /* 006d439f: jmp 0x6d43b3 */ goto L_006d43b3;
L_006d43a1:; BB(0x006d43a1);
    /* 006d43a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d43a4: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006d43a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d43a9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006d43ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d43ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d43ae: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d43b3u); f_007375e0();
L_006d43b3:; BB(0x006d43b3);
    /* 006d43b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d43b6: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d43bc: jl 0x6d4371 */ if ((fS!=fO)) goto L_006d4371;
L_006d43be:; BB(0x006d43be);
    /* 006d43be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d43c1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d43c4: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x6d43c9u); f_00737da4();
    /* 006d43c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d43cc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d43cf: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d43d4u); f_00737cdc();
    /* 006d43d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d43d7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d43da: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d43e1: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d43e7: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006d43ee: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006d43f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d43f3: je 0x6d43fc */ if (fZ) goto L_006d43fc;
L_006d43f5:; BB(0x006d43f5);
    /* 006d43f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d43f7: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d43fcu); f_00760acc();
L_006d43fc:; BB(0x006d43fc);
    /* 006d43fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d43ff: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006d4402: movsx ecx, word ptr [edx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 006d4409: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006d440c:; BB(0x006d440c);
    /* 006d440c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006d440f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4411: je 0x6d445c */ if (fZ) goto L_006d445c;
L_006d4413:; BB(0x006d4413);
    /* 006d4413: mov edx, ecx */ r_edx = r_ecx;
    /* 006d4415: lea ebx, [eax + 0x40] */ r_ebx = (u32)(r_eax+0x40u);
    /* 006d4418: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4419: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d441a: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d441fu); f_006c8e50();
    /* 006d441f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4424: je 0x6d443b */ if (fZ) goto L_006d443b;
L_006d4426:; BB(0x006d4426);
    /* 006d4426: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4429: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d442a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d442d: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d4432u); f_00725fa8();
    /* 006d4432: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d4435: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4438: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
L_006d443b:; BB(0x006d443b);
    /* 006d443b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d443e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d4441: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d4444: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d4447: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006d444e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d4451: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4458: mov esp, ebp */ r_esp = r_ebp;
    /* 006d445a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d445b: ret  */ FN_RET(0x006d42dc); r_esp += 4; return;
L_006d445c:; BB(0x006d445c);
    /* 006d445c: lea edx, [eax + 0x40] */ r_edx = (u32)(r_eax+0x40u);
    /* 006d445f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006d4462: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4464: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d4469u); f_006c8e50();
    /* 006d4469: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d446c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d446e: je 0x6d443b */ if (fZ) goto L_006d443b;
L_006d4470:; BB(0x006d4470);
    /* 006d4470: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006d4477: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d447c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d4481u); f_005caba4();
    /* 006d4481: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d4484: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4487: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006d448a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d448c: je 0x6d4526 */ if (fZ) goto L_006d4526;
L_006d4492:; BB(0x006d4492);
    /* 006d4492: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006d4499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d44a0: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d44a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d44a7u); f_0073ec50();
    /* 006d44a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d44a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d44ab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d44ae: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d44b1: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d44b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d44b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d44b7: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d44bcu); f_00725d18();
    /* 006d44bc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006d44c3:; BB(0x006d44c3);
    /* 006d44c3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d44c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d44c9: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006d44cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d44d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d44d5: je 0x6d450c */ if (fZ) goto L_006d450c;
L_006d44d7:; BB(0x006d44d7);
    /* 006d44d7: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d44dcu); f_0078b208();
    /* 006d44dc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d44df: jg 0x6d44ec */ if ((!fZ&&fS==fO)) goto L_006d44ec;
L_006d44e1:; BB(0x006d44e1);
    /* 006d44e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d44e4: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006d44e7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006d44ea: jmp 0x6d450c */ goto L_006d450c;
L_006d44ec:; BB(0x006d44ec);
    /* 006d44ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d44ef: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 006d44f2: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d44fc: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d4506: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006d4509: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_006d450c:; BB(0x006d450c);
    /* 006d450c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d450f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d4512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4513: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d4518u); f_00725fa8();
    /* 006d4518: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d451b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d451e: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 006d4521: jmp 0x6d443b */ goto L_006d443b;
L_006d4526:; BB(0x006d4526);
    /* 006d4526: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d4528: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d452b: jmp 0x6d44c3 */ goto L_006d44c3;
L_006d452d:; BB(0x006d452d);
    /* 006d452d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d452f: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d4534u); f_006dbdb8();
    /* 006d4534: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4537: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d453a: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d453e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d453f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4545: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d454au); f_0073ff34();
    /* 006d454a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d454d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4550: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4555: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006d4558: mov ecx, eax */ r_ecx = r_eax;
    /* 006d455a: call 0x7400c0 */ r_esp -= 4; W32(r_esp, 0x6d455fu); f_007400c0();
    /* 006d455f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006d4561:; BB(0x006d4561);
    /* 006d4561: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006d4564: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 006d4567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4569: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d456a: call 0x6c8f1c */ r_esp -= 4; W32(r_esp, 0x6d456fu); f_006c8f1c();
    /* 006d456f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4574: je 0x6d45a3 */ if (fZ) goto L_006d45a3;
L_006d4576:; BB(0x006d4576);
    /* 006d4576: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006d4579: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d457c: jle 0x6d4591 */ if ((fZ||fS!=fO)) goto L_006d4591;
L_006d457e:; BB(0x006d457e);
    /* 006d457e: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006d4581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4582: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4585: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d4588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d458a: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d458fu); f_007375e0();
    /* 006d458f: jmp 0x6d45a3 */ goto L_006d45a3;
L_006d4591:; BB(0x006d4591);
    /* 006d4591: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4594: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 006d4597: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4599: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006d459c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d459d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d459e: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d45a3u); f_007375e0();
L_006d45a3:; BB(0x006d45a3);
    /* 006d45a3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d45a6: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d45ac: jl 0x6d4561 */ if ((fS!=fO)) goto L_006d4561;
L_006d45ae:; BB(0x006d45ae);
    /* 006d45ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d45b1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d45b4: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d45b9u); f_00737cdc();
    /* 006d45b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d45bc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006d45bf: movsx ecx, word ptr [edx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 006d45c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d45c9: jmp 0x6d440c */ goto L_006d440c;
}

void f_006d45d0(void) /* sub_6D45D0 */
{
    FN_ENTER(0x006d45d0);
    /* 006d45d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d45d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d45d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d45d5: call 0x6d45f4 */ r_esp -= 4; W32(r_esp, 0x6d45dau); f_006d45f4();
    /* 006d45da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d45de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d45e0: jne 0x6d45e6 */ if (!fZ) goto L_006d45e6;
L_006d45e2:; BB(0x006d45e2);
    /* 006d45e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d45e3: ret 4 */ FN_RET(0x006d45d0); r_esp += 8; return;
L_006d45e6:; BB(0x006d45e6);
    /* 006d45e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d45e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d45ecu); f_005c2f74();
    /* 006d45ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d45ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d45ee: ret 4 */ FN_RET(0x006d45d0); r_esp += 8; return;
}

void f_006d45f4(void) /* sub_6D45F4 */
{
    FN_ENTER(0x006d45f4);
    /* 006d45f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d45f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006d45f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d45f9: push 0x8ede88 */ { u32 v = 0x8ede88u; r_esp -= 4; W32(r_esp, v); }
    /* 006d45fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d4604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4605: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d460c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d460f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d4612: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d4615: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d4618: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d461b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d461e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d4625: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4628: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d462b: mov dword ptr [eax], 0xb3c3b0 */ W32((u32)(r_eax), 0xb3c3b0u);
    /* 006d4631: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4633: je 0x6d464c */ if (fZ) goto L_006d464c;
L_006d4635:; BB(0x006d4635);
    /* 006d4635: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d4639: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d463e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d4642: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4645: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d464c:; BB(0x006d464c);
    /* 006d464c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d464f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4651: je 0x6d4662 */ if (fZ) goto L_006d4662;
L_006d4653:; BB(0x006d4653);
    /* 006d4653: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4658u); f_007127b0();
    /* 006d4658: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d465b: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d4662:; BB(0x006d4662);
    /* 006d4662: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d4665: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4667: je 0x6d4678 */ if (fZ) goto L_006d4678;
L_006d4669:; BB(0x006d4669);
    /* 006d4669: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d466eu); f_007127b0();
    /* 006d466e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4671: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d4678:; BB(0x006d4678);
    /* 006d4678: mov ecx, eax */ r_ecx = r_eax;
    /* 006d467a: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6d467fu); f_006dc514();
    /* 006d467f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4682: mov dword ptr [0xa96200], 0 */ W32((u32)(0xa96200u), 0x0u);
    /* 006d468c: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d4691u); f_006dc9fc();
    /* 006d4691: mov dword ptr [eax*4 + 0xa96204], 0 */ W32((u32)(r_eax*4+0xa96204u), 0x0u);
    /* 006d469c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d469e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d46a3u); f_00791748();
    /* 006d46a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d46a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d46ab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d46ae: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6d46b3u); f_006dc3a0();
    /* 006d46b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d46b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d46bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006d46bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d46c0: ret  */ FN_RET(0x006d45f4); r_esp += 4; return;
}

void f_006d46c4(void) /* sub_6D46C4 */
{
    FN_ENTER(0x006d46c4);
    /* 006d46c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d46c5: mov edi, ecx */ r_edi = r_ecx;
    /* 006d46c7: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006d46ca: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d46cd: ja 0x6d471c */ if ((!fC&&!fZ)) goto L_006d471c;
L_006d46cf:; BB(0x006d46cf);
    /* 006d46cf: mov eax, dword ptr [eax*4 + 0x96c1b0] */ r_eax = R32((u32)(r_eax*4+0x96c1b0u));
    /* 006d46d6: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d46c4); r_esp += 4; return;
}

void f_006d46d8(void)
{
    FN_ENTER(0x006d46d8);
    /* 006d46d8: mov ecx, edi */ r_ecx = r_edi;
    /* 006d46da: call 0x6d4ae4 */ r_esp -= 4; W32(r_esp, 0x6d46dfu); f_006d4ae4();
    /* 006d46df: jmp 0x6d471c */ goto L_006d471c;
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d46d8); r_esp += 4; return;
}

void f_006d46e1(void)
{
    FN_ENTER(0x006d46e1);
    /* 006d46e1: mov ecx, edi */ r_ecx = r_edi;
    /* 006d46e3: call 0x6d6668 */ r_esp -= 4; W32(r_esp, 0x6d46e8u); f_006d6668();
    /* 006d46e8: jmp 0x6d471c */ goto L_006d471c;
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d46e1); r_esp += 4; return;
}

void f_006d46ea(void)
{
    FN_ENTER(0x006d46ea);
    /* 006d46ea: mov ecx, edi */ r_ecx = r_edi;
    /* 006d46ec: call 0x6d4720 */ r_esp -= 4; W32(r_esp, 0x6d46f1u); f_006d4720();
    /* 006d46f1: jmp 0x6d471c */ goto L_006d471c;
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d46ea); r_esp += 4; return;
}

void f_006d46f3(void)
{
    FN_ENTER(0x006d46f3);
    /* 006d46f3: mov ecx, edi */ r_ecx = r_edi;
    /* 006d46f5: call 0x6d47d8 */ r_esp -= 4; W32(r_esp, 0x6d46fau); f_006d47d8();
    /* 006d46fa: jmp 0x6d471c */ goto L_006d471c;
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d46f3); r_esp += 4; return;
}

void f_006d46fc(void)
{
    FN_ENTER(0x006d46fc);
    /* 006d46fc: mov ecx, edi */ r_ecx = r_edi;
    /* 006d46fe: call 0x6d48a0 */ r_esp -= 4; W32(r_esp, 0x6d4703u); f_006d48a0();
    /* 006d4703: jmp 0x6d471c */ goto L_006d471c;
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d46fc); r_esp += 4; return;
}

void f_006d4705(void)
{
    FN_ENTER(0x006d4705);
    /* 006d4705: mov ecx, edi */ r_ecx = r_edi;
    /* 006d4707: call 0x6d4b18 */ r_esp -= 4; W32(r_esp, 0x6d470cu); f_006d4b18();
    /* 006d470c: jmp 0x6d471c */ goto L_006d471c;
L_006d471c:; BB(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d4705); r_esp += 4; return;
}

void f_006d470e(void)
{
    FN_ENTER(0x006d470e);
    /* 006d470e: mov ecx, edi */ r_ecx = r_edi;
    /* 006d4710: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6d4715u); f_006dc7d4();
    /* 006d4715: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d470e); r_esp += 4; return;
}

void f_006d471c(void)
{
    FN_ENTER(0x006d471c);
    /* 006d471c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d471d: ret  */ FN_RET(0x006d471c); r_esp += 4; return;
}

void f_006d4720(void) /* sub_6D4720 */
{
    FN_ENTER(0x006d4720);
    /* 006d4720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4721: mov ebp, esp */ r_ebp = r_esp;
    /* 006d4723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4725: push 0x8edeb0 */ { u32 v = 0x8edeb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d472a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d4730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4731: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d4738: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d473b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d473e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d4741: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d4744: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d4747: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d474a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d4751: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4756: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d475bu); f_005caba4();
    /* 006d475b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d475e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4761: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d4764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4766: je 0x6d47cf */ if (fZ) goto L_006d47cf;
L_006d4768:; BB(0x006d4768);
    /* 006d4768: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d476f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d4776: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d4779: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d477c: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006d477e: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4782: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4788: call 0x6d58b8 */ r_esp -= 4; W32(r_esp, 0x6d478du); f_006d58b8();
    /* 006d478d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d4794:; BB(0x006d4794);
    /* 006d4794: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d479b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d479e: mov dword ptr [eax + 0x3a4], 0x6d4a00 */ W32((u32)(r_eax+0x3a4u), 0x6d4a00u);
    /* 006d47a8: mov dword ptr [eax + 0x3a8], 0x6d4b78 */ W32((u32)(r_eax+0x3a8u), 0x6d4b78u);
    /* 006d47b2: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6d47b7u); f_007bebe8();
    /* 006d47b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d47ba: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006d47c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d47c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d47cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006d47cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d47ce: ret  */ FN_RET(0x006d4720); r_esp += 4; return;
L_006d47cf:; BB(0x006d47cf);
    /* 006d47cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d47d1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d47d4: jmp 0x6d4794 */ goto L_006d4794;
}

void f_006d47d8(void) /* sub_6D47D8 */
{
    FN_ENTER(0x006d47d8);
    /* 006d47d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d47d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006d47db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d47dd: push 0x8eded8 */ { u32 v = 0x8eded8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d47e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d47e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d47e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d47f0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d47f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d47f6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d47f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d47fc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d47ff: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d4802: mov eax, dword ptr [0xa95ea0] */ r_eax = R32((u32)(0xa95ea0u));
    /* 006d4807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4809: jle 0x6d488f */ if ((fZ||fS!=fO)) goto L_006d488f;
L_006d480f:; BB(0x006d480f);
    /* 006d480f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d4816: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d481b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d4820u); f_005caba4();
    /* 006d4820: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d4823: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4826: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d4829: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d482b: je 0x6d4888 */ if (fZ) goto L_006d4888;
L_006d482d:; BB(0x006d482d);
    /* 006d482d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d4834: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d483b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d483e: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4841: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4845: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d484b: call 0x6d31c0 */ r_esp -= 4; W32(r_esp, 0x6d4850u); f_006d31c0();
    /* 006d4850: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d4857:; BB(0x006d4857);
    /* 006d4857: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d485e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4861: mov dword ptr [eax + 0x1f4], 0x6d4a00 */ W32((u32)(r_eax+0x1f4u), 0x6d4a00u);
    /* 006d486b: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6d4870u); f_007bebe8();
    /* 006d4870: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d4873: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006d487a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d487d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4884: mov esp, ebp */ r_esp = r_ebp;
    /* 006d4886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4887: ret  */ FN_RET(0x006d47d8); r_esp += 4; return;
L_006d4888:; BB(0x006d4888);
    /* 006d4888: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d488a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d488d: jmp 0x6d4857 */ goto L_006d4857;
L_006d488f:; BB(0x006d488f);
    /* 006d488f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d4892: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4899: mov esp, ebp */ r_esp = r_ebp;
    /* 006d489b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d489c: ret  */ FN_RET(0x006d47d8); r_esp += 4; return;
}

void f_006d48a0(void) /* sub_6D48A0 */
{
    FN_ENTER(0x006d48a0);
    /* 006d48a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d48a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d48a2: mov edi, ecx */ r_edi = r_ecx;
    /* 006d48a4: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d48a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d48a9: je 0x6d494a */ if (fZ) goto L_006d494a;
L_006d48af:; BB(0x006d48af);
    /* 006d48af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d48b1: je 0x6d48f3 */ if (fZ) goto L_006d48f3;
L_006d48b3:; BB(0x006d48b3);
    /* 006d48b3: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d48ba: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d48bc: je 0x6d48f3 */ if (fZ) goto L_006d48f3;
L_006d48be:; BB(0x006d48be);
    /* 006d48be: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d48c3u); f_007365f4();
    /* 006d48c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d48c5: je 0x6d48d1 */ if (fZ) goto L_006d48d1;
L_006d48c7:; BB(0x006d48c7);
    /* 006d48c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d48ca: je 0x6d4926 */ if (fZ) goto L_006d4926;
L_006d48cc:; BB(0x006d48cc);
    /* 006d48cc: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d48cf: jmp 0x6d48f3 */ goto L_006d48f3;
L_006d48d1:; BB(0x006d48d1);
    /* 006d48d1: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d48d4: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006d48db: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d48e0u); f_007127b0();
    /* 006d48e0: mov eax, dword ptr [0xa95ea0] */ r_eax = R32((u32)(0xa95ea0u));
    /* 006d48e5: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 006d48ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d48ee: jle 0x6d493f */ if ((fZ||fS!=fO)) goto L_006d493f;
L_006d48f0:; BB(0x006d48f0);
    /* 006d48f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d48f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d48f2: ret  */ FN_RET(0x006d48a0); r_esp += 4; return;
L_006d48f3:; BB(0x006d48f3);
    /* 006d48f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d48f5: je 0x6d4923 */ if (fZ) goto L_006d4923;
L_006d48f7:; BB(0x006d48f7);
    /* 006d48f7: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d48fe: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4900: je 0x6d4923 */ if (fZ) goto L_006d4923;
L_006d4902:; BB(0x006d4902);
    /* 006d4902: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4904: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4906: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d4908: mov ecx, edi */ r_ecx = r_edi;
    /* 006d490a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d490du); call_ind(t); }
    /* 006d490d: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d4910: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
    /* 006d4917: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d491cu); f_007127b0();
    /* 006d491c: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
L_006d4923:; BB(0x006d4923);
    /* 006d4923: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d4925: ret  */ FN_RET(0x006d48a0); r_esp += 4; return;
L_006d4926:; BB(0x006d4926);
    /* 006d4926: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d4929: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d4930: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4935u); f_007127b0();
    /* 006d4935: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 006d493c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d493d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d493e: ret  */ FN_RET(0x006d48a0); r_esp += 4; return;
L_006d493f:; BB(0x006d493f);
    /* 006d493f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4941: call 0x6d7f5c */ r_esp -= 4; W32(r_esp, 0x6d4946u); f_006d7f5c();
    /* 006d4946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4947: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4948: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d4949: ret  */ FN_RET(0x006d48a0); r_esp += 4; return;
L_006d494a:; BB(0x006d494a);
    /* 006d494a: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d494c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d4951u); f_0073ec50();
    /* 006d4951: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d4954: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d4958: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4959: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d495b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d495c: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d4961u); f_007354fc();
    /* 006d4961: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4963: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d4966: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d496bu); f_006dbdb8();
    /* 006d496b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d496e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4970: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4972: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d4975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4976: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d497bu); f_00735c90();
    /* 006d497b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d497d: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d4982u); f_006dbdb8();
    /* 006d4982: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4983: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4985: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4987: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d498a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d498b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d4990u); f_00735c90();
    /* 006d4990: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d4993: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d4998u); f_0073608c();
    /* 006d4998: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d499b: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d49a0u); f_00736458();
    /* 006d49a0: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006d49a3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d49aa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d49af: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d49b6: mov ecx, edi */ r_ecx = r_edi;
    /* 006d49b8: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d49bdu); f_006dc8d8();
    /* 006d49bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d49c0: mov ecx, edi */ r_ecx = r_edi;
    /* 006d49c2: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d49c7u); f_006dc8d8();
    /* 006d49c7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d49ca: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d49cd: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d49d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d49d4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d49d8: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d49ddu); f_0070f5a4();
    /* 006d49dd: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d49e0: jmp 0x6d48af */ goto L_006d48af;
}

void f_006d49e8(void) /* sub_6D49E8 */
{
    FN_ENTER(0x006d49e8);
    /* 006d49e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d49ea: mov dword ptr [0xa96204], eax */ W32((u32)(0xa96204u), r_eax);
    /* 006d49ef: mov dword ptr [0xa96208], eax */ W32((u32)(0xa96208u), r_eax);
    /* 006d49f4: mov dword ptr [0xa9620c], eax */ W32((u32)(0xa9620cu), r_eax);
    /* 006d49f9: mov dword ptr [0xa96210], eax */ W32((u32)(0xa96210u), r_eax);
    /* 006d49fe: ret  */ FN_RET(0x006d49e8); r_esp += 4; return;
}

void f_006d4a00(void) /* sub_6D4A00 */
{
    FN_ENTER(0x006d4a00);
    /* 006d4a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a01: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006d4a05: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4a07: je 0x6d4a1c */ if (fZ) goto L_006d4a1c;
L_006d4a09:; BB(0x006d4a09);
    /* 006d4a09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a0b: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a0d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d4a10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d4a12: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4a15u); call_ind(t); }
    /* 006d4a15: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
L_006d4a1c:; BB(0x006d4a1c);
    /* 006d4a1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4a1d: ret  */ FN_RET(0x006d4a00); r_esp += 4; return;
}

void f_006d4a20(void) /* sub_6D4A20 */
{
    FN_ENTER(0x006d4a20);
    /* 006d4a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a21: mov ebp, esp */ r_ebp = r_esp;
    /* 006d4a23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a25: push 0x8edef4 */ { u32 v = 0x8edef4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d4a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4a31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d4a38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d4a3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d4a3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006d4a41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006d4a44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006d4a47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d4a4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4a4d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006d4a50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d4a53: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6d4a58u); f_006dc410();
    /* 006d4a58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d4a5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d4a62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4a65: mov dword ptr [ecx], 0xb3c3b0 */ W32((u32)(r_ecx), 0xb3c3b0u);
    /* 006d4a6b: mov eax, dword ptr [0x9cf0dc] */ r_eax = R32((u32)(0x9cf0dcu));
    /* 006d4a70: mov dword ptr [0xa96200], ecx */ W32((u32)(0xa96200u), r_ecx);
    /* 006d4a76: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006d4a79: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d4a7b: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006d4a7e: mov dword ptr [0xa961fc], ebx */ W32((u32)(0xa961fcu), r_ebx);
    /* 006d4a84: mov dword ptr [0xa961f8], ebx */ W32((u32)(0xa961f8u), r_ebx);
    /* 006d4a8a: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006d4a8d: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006d4a90: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006d4a93: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006d4a96: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d4a9bu); f_006dc9fc();
    /* 006d4a9b: mov dword ptr [eax*4 + 0xa96204], 1 */ W32((u32)(r_eax*4+0xa96204u), 0x1u);
    /* 006d4aa6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4aa8: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d4aadu); f_00791748();
    /* 006d4aad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4aae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d4ab1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d4ab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d4ab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4abe: mov esp, ebp */ r_esp = r_ebp;
    /* 006d4ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4ac1: ret 8 */ FN_RET(0x006d4a20); r_esp += 12; return;
}

void f_006d4ac4(void) /* sub_6D4AC4 */
{
    FN_ENTER(0x006d4ac4);
    /* 006d4ac4: mov dword ptr [0xa961ec], 0x3f800000 */ W32((u32)(0xa961ecu), 0x3f800000u);
    /* 006d4ace: mov dword ptr [0xa961f0], 0x41000000 */ W32((u32)(0xa961f0u), 0x41000000u);
    /* 006d4ad8: mov dword ptr [0xa961f4], 0x3fc00000 */ W32((u32)(0xa961f4u), 0x3fc00000u);
    /* 006d4ae2: ret  */ FN_RET(0x006d4ac4); r_esp += 4; return;
}

void f_006d4ae4(void) /* sub_6D4AE4 */
{
    FN_ENTER(0x006d4ae4);
    /* 006d4ae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4ae5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d4ae7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d4ae9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4aeb: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d4aeeu); call_ind(t); }
    /* 006d4aee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4af0: jne 0x6d4af4 */ if (!fZ) goto L_006d4af4;
L_006d4af2:; BB(0x006d4af2);
    /* 006d4af2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4af3: ret  */ FN_RET(0x006d4ae4); r_esp += 4; return;
L_006d4af4:; BB(0x006d4af4);
    /* 006d4af4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4af6: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d4afbu); f_006dc988();
    /* 006d4afb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4afd: je 0x6d4b16 */ if (fZ) goto L_006d4b16;
L_006d4aff:; BB(0x006d4aff);
    /* 006d4aff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b01: push dword ptr [0xa961fc] */ { u32 v = R32((u32)(0xa961fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4b07: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d4b09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4b0b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4b0eu); call_ind(t); }
    /* 006d4b0e: mov eax, dword ptr [0xa961f8] */ r_eax = R32((u32)(0xa961f8u));
    /* 006d4b13: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006d4b16:; BB(0x006d4b16);
    /* 006d4b16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4b17: ret  */ FN_RET(0x006d4ae4); r_esp += 4; return;
}

void f_006d4b18(void) /* sub_6D4B18 */
{
    FN_ENTER(0x006d4b18);
    /* 006d4b18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b19: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d4b1c: mov edi, ecx */ r_edi = r_ecx;
    /* 006d4b1e: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006d4b25: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006d4b2d: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b2f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d4b34u); f_0073ec50();
    /* 006d4b34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4b35: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d4b38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b3a: mov ecx, edi */ r_ecx = r_edi;
    /* 006d4b3c: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6d4b41u); f_006dc794();
    /* 006d4b41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b43: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b45: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d4b47: mov ecx, edi */ r_ecx = r_edi;
    /* 006d4b49: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4b4cu); call_ind(t); }
    /* 006d4b4c: mov ecx, edi */ r_ecx = r_edi;
    /* 006d4b4e: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d4b53u); f_006dc9ec();
    /* 006d4b53: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d4b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b57: call 0x73a33c */ r_esp -= 4; W32(r_esp, 0x6d4b5cu); f_0073a33c();
    /* 006d4b5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4b5d: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 006d4b64: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b66: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d4b69: mov ecx, edi */ r_ecx = r_edi;
    /* 006d4b6b: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6d4b70u); f_006dc62c();
    /* 006d4b70: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006d4b73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d4b76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d4b77: ret  */ FN_RET(0x006d4b18); r_esp += 4; return;
}

void f_006d4b78(void) /* sub_6D4B78 */
{
    FN_ENTER(0x006d4b78);
    /* 006d4b78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b79: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006d4b7d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4b7f: je 0x6d4ba8 */ if (fZ) goto L_006d4ba8;
L_006d4b81:; BB(0x006d4b81);
    /* 006d4b81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b83: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4b85: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d4b88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d4b8a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4b8du); call_ind(t); }
    /* 006d4b8d: mov dword ptr [ebp + 0x20], 7 */ W32((u32)(r_ebp+0x20u), 0x7u);
    /* 006d4b94: mov dword ptr [0xa961fc], 0x1a */ W32((u32)(0xa961fcu), 0x1au);
    /* 006d4b9e: mov dword ptr [0xa961f8], 2 */ W32((u32)(0xa961f8u), 0x2u);
L_006d4ba8:; BB(0x006d4ba8);
    /* 006d4ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4ba9: ret  */ FN_RET(0x006d4b78); r_esp += 4; return;
}

void f_006d4bac(void) /* sub_6D4BAC */
{
    FN_ENTER(0x006d4bac);
    /* 006d4bac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4bad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d4baf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4bb1: call 0x6d4bd0 */ r_esp -= 4; W32(r_esp, 0x6d4bb6u); f_006d4bd0();
    /* 006d4bb6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d4bba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4bbc: jne 0x6d4bc2 */ if (!fZ) goto L_006d4bc2;
L_006d4bbe:; BB(0x006d4bbe);
    /* 006d4bbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4bbf: ret 4 */ FN_RET(0x006d4bac); r_esp += 8; return;
L_006d4bc2:; BB(0x006d4bc2);
    /* 006d4bc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4bc3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d4bc8u); f_005c2f74();
    /* 006d4bc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4bc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4bca: ret 4 */ FN_RET(0x006d4bac); r_esp += 8; return;
}

void f_006d4bd0(void) /* sub_6D4BD0 */
{
    FN_ENTER(0x006d4bd0);
    /* 006d4bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 006d4bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4bd5: push 0x8edf10 */ { u32 v = 0x8edf10u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d4be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4be1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d4be8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d4beb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d4bee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d4bf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d4bf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d4bf7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d4bfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d4c01: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4c04: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d4c07: mov dword ptr [eax], 0xb3c458 */ W32((u32)(r_eax), 0xb3c458u);
    /* 006d4c0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4c0f: je 0x6d4c20 */ if (fZ) goto L_006d4c20;
L_006d4c11:; BB(0x006d4c11);
    /* 006d4c11: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4c16u); f_007127b0();
    /* 006d4c16: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4c19: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d4c20:; BB(0x006d4c20);
    /* 006d4c20: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d4c23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4c25: je 0x6d4c36 */ if (fZ) goto L_006d4c36;
L_006d4c27:; BB(0x006d4c27);
    /* 006d4c27: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4c2cu); f_007127b0();
    /* 006d4c2c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4c2f: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d4c36:; BB(0x006d4c36);
    /* 006d4c36: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d4c39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4c3b: je 0x6d4c4c */ if (fZ) goto L_006d4c4c;
L_006d4c3d:; BB(0x006d4c3d);
    /* 006d4c3d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4c42u); f_007127b0();
    /* 006d4c42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4c45: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d4c4c:; BB(0x006d4c4c);
    /* 006d4c4c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d4c4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4c51: je 0x6d4c62 */ if (fZ) goto L_006d4c62;
L_006d4c53:; BB(0x006d4c53);
    /* 006d4c53: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4c58u); f_007127b0();
    /* 006d4c58: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4c5b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006d4c62:; BB(0x006d4c62);
    /* 006d4c62: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d4c65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4c67: je 0x6d4c78 */ if (fZ) goto L_006d4c78;
L_006d4c69:; BB(0x006d4c69);
    /* 006d4c69: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4c6eu); f_007127b0();
    /* 006d4c6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4c71: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006d4c78:; BB(0x006d4c78);
    /* 006d4c78: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d4c7f: mov ecx, eax */ r_ecx = r_eax;
    /* 006d4c81: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d4c86u); f_006dc848();
    /* 006d4c86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d4c89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4c90: mov esp, ebp */ r_esp = r_ebp;
    /* 006d4c92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4c93: ret  */ FN_RET(0x006d4bd0); r_esp += 4; return;
}

void f_006d4c94(void) /* sub_6D4C94 */
{
    FN_ENTER(0x006d4c94);
    /* 006d4c94: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006d4c97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4c99: je 0x6d4ca8 */ if (fZ) goto L_006d4ca8;
L_006d4c9b:; BB(0x006d4c9b);
    /* 006d4c9b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4c9f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4ca3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d4ca5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d4ca8u); call_ind(t); }
L_006d4ca8:; BB(0x006d4ca8);
    /* 006d4ca8: ret 8 */ FN_RET(0x006d4c94); r_esp += 12; return;
}

void f_006d4cac(void) /* sub_6D4CAC */
{
    FN_ENTER(0x006d4cac);
    /* 006d4cac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4cad: mov ebp, esp */ r_ebp = r_esp;
    /* 006d4caf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4cb1: push 0x8edf2c */ { u32 v = 0x8edf2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d4cb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d4cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d4cbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d4cc4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d4cc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d4cca: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d4ccd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d4cd0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d4cd3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d4cd6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4cd9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d4cdc: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006d4cdf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d4ce2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006d4ce5: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d4ceau); f_006dc898();
    /* 006d4cea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d4cf1: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d4cf4: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d4cf7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d4cfa: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 006d4cfd: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 006d4d00: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 006d4d03: mov dword ptr [ebx], 0xb3c458 */ W32((u32)(r_ebx), 0xb3c458u);
    /* 006d4d09: mov eax, dword ptr [0x9cf0e0] */ r_eax = R32((u32)(0x9cf0e0u));
    /* 006d4d0e: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006d4d11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d4d13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4d14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4d15: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 006d4d18: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 006d4d1b: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 006d4d1e: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 006d4d21: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 006d4d24: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 006d4d27: mov dword ptr [ebx + 0x48], ecx */ W32((u32)(r_ebx+0x48u), r_ecx);
    /* 006d4d2a: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 006d4d2d: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 006d4d30: mov dword ptr [ebx + 0x190], ecx */ W32((u32)(r_ebx+0x190u), r_ecx);
    /* 006d4d36: call 0x6d7ef8 */ r_esp -= 4; W32(r_esp, 0x6d4d3bu); f_006d7ef8();
    /* 006d4d3b: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4d3e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6d4d43u); f_0061cdb0();
    /* 006d4d43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d4d46: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d4d49: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d4d4c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d4d4f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d4d52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d4d55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d4d5c: mov esp, ebp */ r_esp = r_ebp;
    /* 006d4d5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4d5f: ret 0xc */ FN_RET(0x006d4cac); r_esp += 16; return;
}

void f_006d4d64(void) /* sub_6D4D64 */
{
    FN_ENTER(0x006d4d64);
    /* 006d4d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4d65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d4d67: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006d4d6a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d4d6d: ja 0x6d4de4 */ if ((!fC&&!fZ)) goto L_006d4de4;
L_006d4d6f:; BB(0x006d4d6f);
    /* 006d4d6f: mov eax, dword ptr [eax*4 + 0x96c1e4] */ r_eax = R32((u32)(r_eax*4+0x96c1e4u));
    /* 006d4d76: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4d64); r_esp += 4; return;
}

void f_006d4d78(void)
{
    FN_ENTER(0x006d4d78);
    /* 006d4d78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4d7a: call 0x6d4de8 */ r_esp -= 4; W32(r_esp, 0x6d4d7fu); f_006d4de8();
    /* 006d4d7f: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4d78); r_esp += 4; return;
}

void f_006d4d81(void)
{
    FN_ENTER(0x006d4d81);
    /* 006d4d81: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4d83: call 0x6d53c8 */ r_esp -= 4; W32(r_esp, 0x6d4d88u); f_006d53c8();
    /* 006d4d88: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4d81); r_esp += 4; return;
}

void f_006d4d8a(void)
{
    FN_ENTER(0x006d4d8a);
    /* 006d4d8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4d8c: call 0x6d39b4 */ r_esp -= 4; W32(r_esp, 0x6d4d91u); f_006d39b4();
    /* 006d4d91: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4d8a); r_esp += 4; return;
}

void f_006d4d93(void)
{
    FN_ENTER(0x006d4d93);
    /* 006d4d93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4d95: call 0x6d5478 */ r_esp -= 4; W32(r_esp, 0x6d4d9au); f_006d5478();
    /* 006d4d9a: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4d93); r_esp += 4; return;
}

void f_006d4d9c(void)
{
    FN_ENTER(0x006d4d9c);
    /* 006d4d9c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4d9e: call 0x6d5478 */ r_esp -= 4; W32(r_esp, 0x6d4da3u); f_006d5478();
    /* 006d4da3: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4d9c); r_esp += 4; return;
}

void f_006d4da5(void)
{
    FN_ENTER(0x006d4da5);
    /* 006d4da5: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
    /* 006d4dab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4dad: je 0x6d4db5 */ if (fZ) goto L_006d4db5;
L_006d4daf:; BB(0x006d4daf);
    /* 006d4daf: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4db2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d4db4u); call_ind(t); }
    /* 006d4db4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d4db5:; BB(0x006d4db5);
    /* 006d4db5: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d4db9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d4dbe: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006d4dc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4dc3: ret  */ FN_RET(0x006d4da5); r_esp += 4; return;
}

void f_006d4dc4(void)
{
    FN_ENTER(0x006d4dc4);
    /* 006d4dc4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4dc6: call 0x6d5088 */ r_esp -= 4; W32(r_esp, 0x6d4dcbu); f_006d5088();
    /* 006d4dcb: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4dc4); r_esp += 4; return;
}

void f_006d4dcd(void)
{
    FN_ENTER(0x006d4dcd);
    /* 006d4dcd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4dcf: call 0x6d5200 */ r_esp -= 4; W32(r_esp, 0x6d4dd4u); f_006d5200();
    /* 006d4dd4: jmp 0x6d4de4 */ goto L_006d4de4;
L_006d4de4:; BB(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4dcd); r_esp += 4; return;
}

void f_006d4dd6(void)
{
    FN_ENTER(0x006d4dd6);
    /* 006d4dd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4dd8: call 0x6d54cc */ r_esp -= 4; W32(r_esp, 0x6d4dddu); f_006d54cc();
    /* 006d4ddd: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4dd6); r_esp += 4; return;
}

void f_006d4de4(void)
{
    FN_ENTER(0x006d4de4);
    /* 006d4de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4de5: ret  */ FN_RET(0x006d4de4); r_esp += 4; return;
}

void f_006d4de8(void) /* sub_6D4DE8 */
{
    FN_ENTER(0x006d4de8);
    /* 006d4de8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4de9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4dea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4deb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4dec: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d4def: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d4df1: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 006d4df4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4df6: je 0x6d4f1f */ if (fZ) goto L_006d4f1f;
L_006d4dfc:; BB(0x006d4dfc);
    /* 006d4dfc: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d4e03: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d4e05: je 0x6d4f1f */ if (fZ) goto L_006d4f1f;
L_006d4e0b:; BB(0x006d4e0b);
    /* 006d4e0b: mov ecx, edx */ r_ecx = r_edx;
    /* 006d4e0d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d4e12u); f_007365f4();
    /* 006d4e12: mov esi, eax */ r_esi = r_eax;
    /* 006d4e14: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4e16: jne 0x6d4f13 */ if (!fZ) goto L_006d4f13;
L_006d4e1c:; BB(0x006d4e1c);
    /* 006d4e1c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d4e1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4e21: je 0x6d4f03 */ if (fZ) goto L_006d4f03;
L_006d4e27:; BB(0x006d4e27);
    /* 006d4e27: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d4e2cu); f_00737d90();
    /* 006d4e2c: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006d4e30: mov ebp, eax */ r_ebp = r_eax;
    /* 006d4e32: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 006d4e36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d4e38: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d4e3a: lea ebp, [ebx + edx + 0x50] */ r_ebp = (u32)(r_ebx+r_edx+0x50u);
    /* 006d4e3e: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 006d4e41: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006d4e44: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006d4e47: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006d4e4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d4e4e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006d4e52: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d4e55: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006d4e59: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d4e5c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006d4e60: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d4e67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4e68: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d4e6du); f_005e3aac();
    /* 006d4e6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4e6e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006d4e72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4e74: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d4e78: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x6d4e7du); f_005d2484();
    /* 006d4e7d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006d4e81: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 006d4e84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4e85: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d4e88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4e8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4e8b: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d4e90u); f_0068f1d0();
    /* 006d4e90: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4e94: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6d4e99u); f_005c5528();
    /* 006d4e99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4e9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4e9c: je 0x6d4ecf */ if (fZ) goto L_006d4ecf;
L_006d4e9e:; BB(0x006d4e9e);
    /* 006d4e9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d4ea0: mov ecx, eax */ r_ecx = r_eax;
    /* 006d4ea2: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6d4ea5u); call_ind(t); }
    /* 006d4ea5: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006d4ea9: mov edx, eax */ r_edx = r_eax;
    /* 006d4eab: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d4eae: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 006d4eb1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4eb2: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d4eb8: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6d4ebdu); f_0069792c();
    /* 006d4ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4ebf: je 0x6d4ecf */ if (fZ) goto L_006d4ecf;
L_006d4ec1:; BB(0x006d4ec1);
    /* 006d4ec1: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4ec7: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d4eca: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x6d4ecfu); f_0068dfd8();
L_006d4ecf:; BB(0x006d4ecf);
    /* 006d4ecf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4ed1: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d4ed5: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d4ed8: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x6d4eddu); f_0068de54();
    /* 006d4edd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4ede: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4ee0: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d4ee5u); f_006d357c();
    /* 006d4ee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4ee6: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d4eebu); f_006dc1f8();
    /* 006d4eeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4eec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4eee: je 0x6d4efb */ if (fZ) goto L_006d4efb;
L_006d4ef0:; BB(0x006d4ef0);
    /* 006d4ef0: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006d4ef4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4ef5: call 0x6dcc1c */ r_esp -= 4; W32(r_esp, 0x6d4efau); f_006dcc1c();
    /* 006d4efa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d4efb:; BB(0x006d4efb);
    /* 006d4efb: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d4efe: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d4f03u); f_00737d70();
L_006d4f03:; BB(0x006d4f03);
    /* 006d4f03: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d4f06: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4f0bu); f_007127b0();
    /* 006d4f0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d4f0d: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 006d4f10: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
L_006d4f13:; BB(0x006d4f13);
    /* 006d4f13: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4f16: je 0x6d4fdf */ if (fZ) goto L_006d4fdf;
L_006d4f1c:; BB(0x006d4f1c);
    /* 006d4f1c: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
L_006d4f1f:; BB(0x006d4f1f);
    /* 006d4f1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4f21: je 0x6d4fd7 */ if (fZ) goto L_006d4fd7;
L_006d4f27:; BB(0x006d4f27);
    /* 006d4f27: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d4f2e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d4f30: je 0x6d4fd7 */ if (fZ) goto L_006d4fd7;
L_006d4f36:; BB(0x006d4f36);
    /* 006d4f36: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d4f39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4f3b: je 0x6d4fc8 */ if (fZ) goto L_006d4fc8;
L_006d4f41:; BB(0x006d4f41);
    /* 006d4f41: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d4f46u); f_00737d90();
    /* 006d4f46: mov esi, eax */ r_esi = r_eax;
    /* 006d4f48: lea ebp, [esi + esi*4] */ r_ebp = (u32)(r_esi+r_esi*4);
    /* 006d4f4b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d4f4d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d4f4f: lea ebp, [ebx + ebp + 0x50] */ r_ebp = (u32)(r_ebx+r_ebp+0x50u);
    /* 006d4f53: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d4f56: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006d4f5a: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 006d4f5d: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 006d4f61: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d4f64: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006d4f68: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d4f6b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006d4f6f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d4f72: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006d4f76: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d4f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4f7e: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d4f83u); f_005e3aac();
    /* 006d4f83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4f84: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006d4f88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4f8a: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 006d4f8e: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x6d4f93u); f_005d2484();
    /* 006d4f93: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006d4f97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4f98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4f9a: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d4f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d4f9e: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d4fa3u); f_0068f1d0();
    /* 006d4fa3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4fa4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4fa6: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d4fabu); f_006d357c();
    /* 006d4fab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d4fac: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d4fb1u); f_006dc1f8();
    /* 006d4fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d4fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4fb4: je 0x6d4fbd */ if (fZ) goto L_006d4fbd;
L_006d4fb6:; BB(0x006d4fb6);
    /* 006d4fb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d4fb7: call 0x6dcc1c */ r_esp -= 4; W32(r_esp, 0x6d4fbcu); f_006dcc1c();
    /* 006d4fbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d4fbd:; BB(0x006d4fbd);
    /* 006d4fbd: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d4fc0: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d4fc5u); f_00737d70();
    /* 006d4fc5: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
L_006d4fc8:; BB(0x006d4fc8);
    /* 006d4fc8: mov ecx, edx */ r_ecx = r_edx;
    /* 006d4fca: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d4fcfu); f_007127b0();
    /* 006d4fcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d4fd1: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 006d4fd4: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006d4fd7:; BB(0x006d4fd7);
    /* 006d4fd7: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d4fda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d4fdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d4fdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d4fdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d4fde: ret  */ FN_RET(0x006d4de8); r_esp += 4; return;
L_006d4fdf:; BB(0x006d4fdf);
    /* 006d4fdf: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d4fe2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d4fe4: je 0x6d506e */ if (fZ) goto L_006d506e;
L_006d4fea:; BB(0x006d4fea);
    /* 006d4fea: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d4fefu); f_00737d90();
    /* 006d4fef: mov esi, eax */ r_esi = r_eax;
    /* 006d4ff1: lea ebp, [esi + esi*4] */ r_ebp = (u32)(r_esi+r_esi*4);
    /* 006d4ff4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d4ff6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d4ff8: lea ebp, [ebx + ebp + 0x50] */ r_ebp = (u32)(r_ebx+r_ebp+0x50u);
    /* 006d4ffc: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d4fff: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006d5003: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 006d5006: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006d500a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d500d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006d5011: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d5014: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006d5018: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d501b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006d501f: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d5026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5027: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d502cu); f_005e3aac();
    /* 006d502c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d502d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006d5031: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5033: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006d5037: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x6d503cu); f_005d2484();
    /* 006d503c: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 006d5040: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5041: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5043: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d5046: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5047: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d504cu); f_0068f1d0();
    /* 006d504c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d504d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d504f: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d5054u); f_006d357c();
    /* 006d5054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d5055: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d505au); f_006dc1f8();
    /* 006d505a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d505b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d505d: je 0x6d5066 */ if (fZ) goto L_006d5066;
L_006d505f:; BB(0x006d505f);
    /* 006d505f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5060: call 0x6dcc1c */ r_esp -= 4; W32(r_esp, 0x6d5065u); f_006dcc1c();
    /* 006d5065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d5066:; BB(0x006d5066);
    /* 006d5066: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d5069: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d506eu); f_00737d70();
L_006d506e:; BB(0x006d506e);
    /* 006d506e: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d5071: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5076u); f_007127b0();
    /* 006d5076: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d5078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d507a: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 006d507d: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006d5080: jmp 0x6d4f1f */ goto L_006d4f1f;
}

