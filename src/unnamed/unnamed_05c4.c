#include "protos.h"

void f_005c4010(void) /* sub_5C4010 */
{
    FN_ENTER(0x005c4010);
    /* 005c4010: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 005c4013: movzx edx, word ptr [ecx + 0x94] */ r_edx = (u32)R16((u32)(r_ecx+0x94u));
    /* 005c401a: add eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c401f: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005c4022: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4028: je 0x5c4042 */ if (fZ) goto L_005c4042;
L_005c402a:; BB(0x005c402a);
    /* 005c402a: movsx eax, word ptr [ecx + 0xe6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xe6u));
    /* 005c4031: cmp eax, 0x384 */ {  u32 a = r_eax; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4036: je 0x5c404e */ if (fZ) goto L_005c404e;
L_005c4038:; BB(0x005c4038);
    /* 005c4038: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c403b: mov word ptr [ecx + 0xe6], ax */ W16((u32)(r_ecx+0xe6u), (u16)r_eax);
L_005c4042:; BB(0x005c4042);
    /* 005c4042: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4044: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4045: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5c404au); f_006946a8();
    /* 005c404a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c404d: ret  */ FN_RET(0x005c4010); r_esp += 4; return;
L_005c404e:; BB(0x005c404e);
    /* 005c404e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005c4053: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
    /* 005c405a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c405c: mov word ptr [ecx + 0xe6], dx */ W16((u32)(r_ecx+0xe6u), (u16)r_edx);
    /* 005c4063: jmp 0x5c4042 */ goto L_005c4042;
}

void f_005c4068(void) /* sub_5C4068 */
{
    FN_ENTER(0x005c4068);
    /* 005c4068: movsx eax, byte ptr [ecx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0xf1u));
    /* 005c406f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4071: jne 0x5c4078 */ if (!fZ) goto L_005c4078;
L_005c4073:; BB(0x005c4073);
    /* 005c4073: call 0x5c407c */ r_esp -= 4; W32(r_esp, 0x5c4078u); f_005c407c();
L_005c4078:; BB(0x005c4078);
    /* 005c4078: ret  */ FN_RET(0x005c4068); r_esp += 4; return;
}

void f_005c407c(void) /* sub_5C407C */
{
    FN_ENTER(0x005c407c);
    /* 005c407c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c407d: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4080: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c4082: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 005c4087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4089: jne 0x5c411d */ if (!fZ) goto L_005c411d;
L_005c408f:; BB(0x005c408f);
    /* 005c408f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4094: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c4096: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c4098: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c409d: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5c40a0u); call_ind(t); }
    /* 005c40a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c40a2: je 0x5c411d */ if (fZ) goto L_005c411d;
L_005c40a4:; BB(0x005c40a4);
    /* 005c40a4: mov eax, 0x92bac0 */ r_eax = 0x92bac0u;
    /* 005c40a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c40ab: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005c40ae: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c40b1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005c40b5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c40b8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005c40bc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005c40bf: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c40c3: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005c40c6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005c40ca: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005c40cd: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005c40d1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005c40d4: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005c40d8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005c40db: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005c40df: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005c40e2: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005c40e6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c40e9: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 005c40ec: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005c40f0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005c40f4: movzx edx, byte ptr [ebx + 0xf5] */ r_edx = (u32)R8((u32)(r_ebx+0xf5u));
    /* 005c40fb: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c40fe: jge 0x5c411d */ if ((fS==fO)) goto L_005c411d;
L_005c4100:; BB(0x005c4100);
    /* 005c4100: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 005c4106: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c410b: je 0x5c4118 */ if (fZ) goto L_005c4118;
L_005c410d:; BB(0x005c410d);
    /* 005c410d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c410f: call dword ptr [esp + 0x18] */ { u32 t = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, 0x5c4113u); call_ind(t); }
    /* 005c4113: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4116: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4117: ret  */ FN_RET(0x005c407c); r_esp += 4; return;
L_005c4118:; BB(0x005c4118);
    /* 005c4118: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c411a: call dword ptr [esp + edx*4] */ { u32 t = R32((u32)(r_esp+r_edx*4)); r_esp -= 4; W32(r_esp, 0x5c411du); call_ind(t); }
L_005c411d:; BB(0x005c411d);
    /* 005c411d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4120: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4121: ret  */ FN_RET(0x005c407c); r_esp += 4; return;
}

void f_005c4124(void) /* sub_5C4124 */
{
    FN_ENTER(0x005c4124);
    /* 005c4124: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4125: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c4127: movsx eax, byte ptr [ebp + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xf1u));
    /* 005c412e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c4131: je 0x5c4135 */ if (fZ) goto L_005c4135;
L_005c4133:; BB(0x005c4133);
    /* 005c4133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4134: ret  */ FN_RET(0x005c4124); r_esp += 4; return;
L_005c4135:; BB(0x005c4135);
    /* 005c4135: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c4137: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5c413cu); f_008173b4();
    /* 005c413c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c413e: jne 0x5c4142 */ if (!fZ) goto L_005c4142;
L_005c4140:; BB(0x005c4140);
    /* 005c4140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4141: ret  */ FN_RET(0x005c4124); r_esp += 4; return;
L_005c4142:; BB(0x005c4142);
    /* 005c4142: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5c4147u); f_00807d60();
    /* 005c4147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4149: je 0x5c4133 */ if (fZ) goto L_005c4133;
L_005c414b:; BB(0x005c414b);
    /* 005c414b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c414d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c4151: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c4156: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c415a: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5c415fu); f_007a94a0();
    /* 005c415f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4160: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005c4165: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005c416b: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005c4170: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 005c4175: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005c417b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c417d: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 005c4182: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 005c4187: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 005c418c: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 005c4191: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 005c4196: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 005c419b: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 005c41a0: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 005c41a5: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 005c41aa: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005c41ad: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c41b0u); call_ind(t); }
    /* 005c41b0: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005c41b5: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005c41bb: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005c41c0: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 005c41c5: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005c41cb: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 005c41d0: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 005c41d5: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 005c41da: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005c41df: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005c41e4: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 005c41e9: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 005c41ee: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005c41f3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005c41f8: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c41fdu); f_007a9044();
    /* 005c41fd: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x5c4202u); f_007a94b0();
    /* 005c4202: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c4206: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c420b: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c420f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4210: ret  */ FN_RET(0x005c4124); r_esp += 4; return;
}

void f_005c4214(void) /* sub_5C4214 */
{
    FN_ENTER(0x005c4214);
    /* 005c4214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4215: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4216: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4219: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c421b: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 005c421f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c4222: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c4227u); f_005d6a3c();
    /* 005c4227: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c422a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c422b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c422d: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c4232u); f_005c425c();
    /* 005c4232: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005c4235: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005c4239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c423a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c423b: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c423f: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x5c4244u); f_005c9e40();
    /* 005c4244: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4247: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4249: je 0x5c4252 */ if (fZ) goto L_005c4252;
L_005c424b:; BB(0x005c424b);
    /* 005c424b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c424f: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
L_005c4252:; BB(0x005c4252);
    /* 005c4252: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4256: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4257: ret 8 */ FN_RET(0x005c4214); r_esp += 12; return;
}

void f_005c425c(void) /* sub_5C425C */
{
    FN_ENTER(0x005c425c);
    /* 005c425c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c425d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c425e: mov edi, ecx */ r_edi = r_ecx;
    /* 005c4260: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005c4264: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4266: je 0x5c42ea */ if (fZ) goto L_005c42ea;
L_005c426c:; BB(0x005c426c);
    /* 005c426c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c426e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c4273u); f_005d6a3c();
    /* 005c4273: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4274: movzx eax, byte ptr [edi + 0xf2] */ r_eax = (u32)R8((u32)(r_edi+0xf2u));
    /* 005c427b: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 005c427d: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005c4284: mov byte ptr [ebx + 1], dl */ W8((u32)(r_ebx+0x1u), (u8)r_edx);
    /* 005c4287: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005c428e: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 005c4291: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 005c4297: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 005c429a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005c429c: mov ecx, edi */ r_ecx = r_edi;
    /* 005c429e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x5c42a1u); call_ind(t); }
    /* 005c42a1: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005c42a7: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c42ac: je 0x5c42c3 */ if (fZ) goto L_005c42c3;
L_005c42ae:; BB(0x005c42ae);
    /* 005c42ae: movzx eax, word ptr [edi + 0xe8] */ r_eax = (u32)R16((u32)(r_edi+0xe8u));
    /* 005c42b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c42b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c42b8: call 0x5d689c */ r_esp -= 4; W32(r_esp, 0x5c42bdu); f_005d689c();
    /* 005c42bd: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
L_005c42c3:; BB(0x005c42c3);
    /* 005c42c3: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c42c8: je 0x5c42e0 */ if (fZ) goto L_005c42e0;
L_005c42ca:; BB(0x005c42ca);
    /* 005c42ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c42cc: call 0x5d2a5c */ r_esp -= 4; W32(r_esp, 0x5c42d1u); f_005d2a5c();
    /* 005c42d1: movsx eax, byte ptr [edi + 0xf0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xf0u));
    /* 005c42d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c42d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c42db: call 0x5d68e0 */ r_esp -= 4; W32(r_esp, 0x5c42e0u); f_005d68e0();
L_005c42e0:; BB(0x005c42e0);
    /* 005c42e0: mov eax, 1 */ r_eax = 0x1u;
    /* 005c42e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c42e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c42e7: ret 4 */ FN_RET(0x005c425c); r_esp += 8; return;
L_005c42ea:; BB(0x005c42ea);
    /* 005c42ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c42ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c42ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c42ee: ret 4 */ FN_RET(0x005c425c); r_esp += 8; return;
}

void f_005c42f4(void) /* sub_5C42F4 */
{
    FN_ENTER(0x005c42f4);
    /* 005c42f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c42f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c42f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c42f7: mov esi, ecx */ r_esi = r_ecx;
    /* 005c42f9: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005c42ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4301: je 0x5c4360 */ if (fZ) goto L_005c4360;
L_005c4303:; BB(0x005c4303);
    /* 005c4303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4305: movsx edi, word ptr [eax + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 005c430c: movzx ebp, word ptr [eax + 0x336] */ r_ebp = (u32)R16((u32)(r_eax+0x336u));
    /* 005c4313: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005c4315: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4317: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x5c431au); call_ind(t); }
    /* 005c431a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c431c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005c431e: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4320: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4323u); call_ind(t); }
    /* 005c4323: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005c4329: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005c432b: call dword ptr [eax + 0x12c] */ { u32 t = R32((u32)(r_eax+0x12cu)); r_esp -= 4; W32(r_esp, 0x5c4331u); call_ind(t); }
    /* 005c4331: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4332: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005c4338: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x5c433du); f_00770b58();
    /* 005c433d: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005c4343: mov word ptr [eax + 0x336], bp */ W16((u32)(r_eax+0x336u), (u16)r_ebp);
    /* 005c434a: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005c4350: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x5c4355u); f_00775270();
    /* 005c4355: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005c435b: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x5c4360u); f_007776f8();
L_005c4360:; BB(0x005c4360);
    /* 005c4360: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4362: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4363: ret  */ FN_RET(0x005c42f4); r_esp += 4; return;
}

void f_005c4364(void) /* sub_5C4364 */
{
    FN_ENTER(0x005c4364);
    /* 005c4364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4365: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4366: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4367: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c436a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c436c: mov edx, dword ptr [0xa8d820] */ r_edx = R32((u32)(0xa8d820u));
    /* 005c4372: mov esi, dword ptr [ebp + 0xd8] */ r_esi = R32((u32)(r_ebp+0xd8u));
    /* 005c4378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c437a: lea edi, [edx - 1] */ r_edi = (u32)(r_edx+0xffffffffu);
    /* 005c437d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c437f: jle 0x5c4412 */ if ((fZ||fS!=fO)) goto L_005c4412;
L_005c4385:; BB(0x005c4385);
    /* 005c4385: mov eax, dword ptr [0xa8d81c] */ r_eax = R32((u32)(0xa8d81cu));
    /* 005c438a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005c438d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_005c4391:; BB(0x005c4391);
    /* 005c4391: lea ebp, [ecx + edi] */ r_ebp = (u32)(r_ecx+r_edi);
    /* 005c4394: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005c4396: mov ebx, dword ptr [eax + ebp*4] */ r_ebx = R32((u32)(r_eax+r_ebp*4));
    /* 005c4399: cmp esi, dword ptr [ebx + 0xd8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c439f: jle 0x5c43a6 */ if ((fZ||fS!=fO)) goto L_005c43a6;
L_005c43a1:; BB(0x005c43a1);
    /* 005c43a1: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 005c43a4: jmp 0x5c43a8 */ goto L_005c43a8;
L_005c43a6:; BB(0x005c43a6);
    /* 005c43a6: mov edi, ebp */ r_edi = r_ebp;
L_005c43a8:; BB(0x005c43a8);
    /* 005c43a8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c43aa: jl 0x5c4391 */ if ((fS!=fO)) goto L_005c4391;
L_005c43ac:; BB(0x005c43ac);
    /* 005c43ac: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005c43af: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_005c43b3:; BB(0x005c43b3);
    /* 005c43b3: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 005c43b6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c43b8: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c43ba: cmp ebp, dword ptr [edi] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c43bc: je 0x5c43d2 */ if (fZ) goto L_005c43d2;
L_005c43be:; BB(0x005c43be);
    /* 005c43be: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c43c2: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c43c7: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c43cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c43ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c43cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c43d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c43d1: ret  */ FN_RET(0x005c4364); r_esp += 4; return;
L_005c43d2:; BB(0x005c43d2);
    /* 005c43d2: lea esi, [ecx + 1] */ r_esi = (u32)(r_ecx+0x1u);
    /* 005c43d5: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 005c43d9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c43db: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c43dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c43df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c43e1: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005c43e3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c43e5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c43e7: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c43e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c43ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c43eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c43ec: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c43f1u); f_00858c80();
    /* 005c43f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c43f4: mov esi, dword ptr [0xa8d820] */ r_esi = R32((u32)(0xa8d820u));
    /* 005c43fa: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c4400: mov dword ptr [edx + esi*4 - 4], 0 */ W32((u32)(r_edx+r_esi*4+0xfffffffcu), 0x0u);
    /* 005c4408: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 005c440b: mov dword ptr [0xa8d820], eax */ W32((u32)(0xa8d820u), r_eax);
    /* 005c4410: jmp 0x5c43be */ goto L_005c43be;
L_005c4412:; BB(0x005c4412);
    /* 005c4412: mov eax, dword ptr [0xa8d81c] */ r_eax = R32((u32)(0xa8d81cu));
    /* 005c4417: jmp 0x5c43b3 */ goto L_005c43b3;
}

void f_005c441c(void) /* sub_5C441C */
{
    FN_ENTER(0x005c441c);
    /* 005c441c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c441d: mov esi, ecx */ r_esi = r_ecx;
    /* 005c441f: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4421: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x5c4426u); f_005c443c();
    /* 005c4426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4428: je 0x5c4433 */ if (fZ) goto L_005c4433;
L_005c442a:; BB(0x005c442a);
    /* 005c442a: mov ecx, esi */ r_ecx = r_esi;
    /* 005c442c: call 0x5c4860 */ r_esp -= 4; W32(r_esp, 0x5c4431u); f_005c4860();
    /* 005c4431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4432: ret  */ FN_RET(0x005c441c); r_esp += 4; return;
L_005c4433:; BB(0x005c4433);
    /* 005c4433: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4435: call 0x5c4458 */ r_esp -= 4; W32(r_esp, 0x5c443au); f_005c4458();
    /* 005c443a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c443b: ret  */ FN_RET(0x005c441c); r_esp += 4; return;
}

void f_005c443c(void) /* sub_5C443C */
{
    FN_ENTER(0x005c443c);
    /* 005c443c: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 005c4442: and edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c4448: cmp edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c444e: mov eax, 0 */ r_eax = 0x0u;
    /* 005c4453: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c4456: ret  */ FN_RET(0x005c443c); r_esp += 4; return;
}

void f_005c4458(void) /* sub_5C4458 */
{
    FN_ENTER(0x005c4458);
    /* 005c4458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4459: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c445a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c445b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c445c: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c445f: mov edi, ecx */ r_edi = r_ecx;
    /* 005c4461: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005c4467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4469: je 0x5c45e5 */ if (fZ) goto L_005c45e5;
L_005c446f:; BB(0x005c446f);
    /* 005c446f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c4473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4474: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4476: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c447bu); f_005c425c();
    /* 005c447b: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c447f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4480: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c4486: call 0x5ca44c */ r_esp -= 4; W32(r_esp, 0x5c448bu); f_005ca44c();
    /* 005c448b: mov esi, eax */ r_esi = r_eax;
    /* 005c448d: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 005c4491: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4492: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c4498: call 0x5c9cac */ r_esp -= 4; W32(r_esp, 0x5c449du); f_005c9cac();
    /* 005c449d: mov ebx, eax */ r_ebx = r_eax;
    /* 005c449f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c44a2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c44a4: je 0x5c455e */ if (fZ) goto L_005c455e;
L_005c44aa:; BB(0x005c44aa);
    /* 005c44aa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c44ac: je 0x5c455e */ if (fZ) goto L_005c455e;
L_005c44b2:; BB(0x005c44b2);
    /* 005c44b2: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 005c44b6: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c44bbu); f_005d6a3c();
    /* 005c44bb: movzx eax, byte ptr [ebx + 6] */ r_eax = (u32)R8((u32)(r_ebx+0x6u));
    /* 005c44bf: mov ebp, dword ptr [esi + 0xdc] */ r_ebp = R32((u32)(r_esi+0xdcu));
    /* 005c44c5: mov byte ptr [esp + 0x1c], al */ W8((u32)(r_esp+0x1cu), (u8)r_eax);
    /* 005c44c9: movzx eax, byte ptr [ebx + 7] */ r_eax = (u32)R8((u32)(r_ebx+0x7u));
    /* 005c44cd: and ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005c44d3: mov byte ptr [esp + 0x1d], al */ W8((u32)(r_esp+0x1du), (u8)r_eax);
    /* 005c44d7: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 005c44db: movzx ebx, byte ptr [ebx + 8] */ r_ebx = (u32)R8((u32)(r_ebx+0x8u));
    /* 005c44df: mov edx, esi */ r_edx = r_esi;
    /* 005c44e1: mov byte ptr [esp + 0x1e], bl */ W8((u32)(r_esp+0x1eu), (u8)r_ebx);
    /* 005c44e5: mov ebx, dword ptr [esi + 0xd8] */ r_ebx = R32((u32)(r_esi+0xd8u));
    /* 005c44eb: call 0x5c4608 */ r_esp -= 4; W32(r_esp, 0x5c44f0u); f_005c4608();
    /* 005c44f0: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c44f3: je 0x5c45f8 */ if (fZ) goto L_005c45f8;
L_005c44f9:; BB(0x005c44f9);
    /* 005c44f9: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c44fe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4500: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c4505: jle 0x5c45ed */ if ((fZ||fS!=fO)) goto L_005c45ed;
L_005c450b:; BB(0x005c450b);
    /* 005c450b: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c4511: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
L_005c4515:; BB(0x005c4515);
    /* 005c4515: lea edi, [ecx + eax] */ r_edi = (u32)(r_ecx+r_eax);
    /* 005c4518: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005c451a: mov esi, dword ptr [edx + edi*4] */ r_esi = R32((u32)(r_edx+r_edi*4));
    /* 005c451d: cmp ebx, dword ptr [esi + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4523: jle 0x5c452a */ if ((fZ||fS!=fO)) goto L_005c452a;
L_005c4525:; BB(0x005c4525);
    /* 005c4525: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 005c4528: jmp 0x5c452c */ goto L_005c452c;
L_005c452a:; BB(0x005c452a);
    /* 005c452a: mov eax, edi */ r_eax = r_edi;
L_005c452c:; BB(0x005c452c);
    /* 005c452c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c452e: jl 0x5c4515 */ if ((fS!=fO)) goto L_005c4515;
L_005c4530:; BB(0x005c4530);
    /* 005c4530: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_005c4534:; BB(0x005c4534);
    /* 005c4534: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005c4537: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4539: je 0x5c4543 */ if (fZ) goto L_005c4543;
L_005c453b:; BB(0x005c453b);
    /* 005c453b: cmp ebx, dword ptr [edx + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4541: je 0x5c4545 */ if (fZ) goto L_005c4545;
L_005c4543:; BB(0x005c4543);
    /* 005c4543: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c4545:; BB(0x005c4545);
    /* 005c4545: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4547: je 0x5c455e */ if (fZ) goto L_005c455e;
L_005c4549:; BB(0x005c4549);
    /* 005c4549: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c454b: je 0x5c455e */ if (fZ) goto L_005c455e;
L_005c454d:; BB(0x005c454d);
    /* 005c454d: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005c4553: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c4558: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
L_005c455e:; BB(0x005c455e);
    /* 005c455e: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005c4564: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4566: je 0x5c45b5 */ if (fZ) goto L_005c45b5;
L_005c4568:; BB(0x005c4568);
    /* 005c4568: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x5c456du); f_00689b44();
    /* 005c456d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c456f: je 0x5c4579 */ if (fZ) goto L_005c4579;
L_005c4571:; BB(0x005c4571);
    /* 005c4571: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005c4577: jmp 0x5c45b5 */ goto L_005c45b5;
L_005c4579:; BB(0x005c4579);
    /* 005c4579: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005c457b: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 005c4580: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005c4586: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c458b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c458c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x5c4591u); f_0050b7a4();
    /* 005c4591: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4596: jne 0x5c45a0 */ if (!fZ) goto L_005c45a0;
L_005c4598:; BB(0x005c4598);
    /* 005c4598: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005c459e: jmp 0x5c45b5 */ goto L_005c45b5;
L_005c45a0:; BB(0x005c45a0);
    /* 005c45a0: movzx edx, word ptr [edi + 0xe4] */ r_edx = (u32)R16((u32)(r_edi+0xe4u));
    /* 005c45a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c45a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005c45aa: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x5c45afu); f_00508f14();
    /* 005c45af: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
L_005c45b5:; BB(0x005c45b5);
    /* 005c45b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c45b7: je 0x5c45da */ if (fZ) goto L_005c45da;
L_005c45b9:; BB(0x005c45b9);
    /* 005c45b9: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x5c45beu); f_00689b44();
    /* 005c45be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c45c0: jne 0x5c45da */ if (!fZ) goto L_005c45da;
L_005c45c2:; BB(0x005c45c2);
    /* 005c45c2: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005c45c8: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c45cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c45cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c45ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c45cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c45d0: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005c45d2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5c45d7u); f_00814298();
    /* 005c45d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c45da:; BB(0x005c45da);
    /* 005c45da: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 005c45e0: call 0x5c46fc */ r_esp -= 4; W32(r_esp, 0x5c45e5u); f_005c46fc();
L_005c45e5:; BB(0x005c45e5);
    /* 005c45e5: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c45e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c45e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c45ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c45eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c45ec: ret  */ FN_RET(0x005c4458); r_esp += 4; return;
L_005c45ed:; BB(0x005c45ed);
    /* 005c45ed: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c45f3: jmp 0x5c4534 */ goto L_005c4534;
L_005c45f8:; BB(0x005c45f8);
    /* 005c45f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c45fa: jmp 0x5c4545 */ goto L_005c4545;
}

void f_005c4600(void) /* sub_5C4600 */
{
    FN_ENTER(0x005c4600);
    /* 005c4600: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c4604: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005c4608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4609: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c460a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c460d: mov ebx, edx */ r_ebx = r_edx;
    /* 005c460f: mov ebp, eax */ r_ebp = r_eax;
    /* 005c4611: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005c4615: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c461au); f_005d6a3c();
    /* 005c461a: movzx ecx, byte ptr [ebp] */ r_ecx = (u32)R8((u32)(r_ebp));
    /* 005c461e: mov byte ptr [esp + 8], cl */ W8((u32)(r_esp+0x8u), (u8)r_ecx);
    /* 005c4622: movzx ecx, byte ptr [ebp + 1] */ r_ecx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c4626: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4628: mov byte ptr [esp + 9], cl */ W8((u32)(r_esp+0x9u), (u8)r_ecx);
    /* 005c462c: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005c4630: je 0x5c46e1 */ if (fZ) goto L_005c46e1;
L_005c4636:; BB(0x005c4636);
    /* 005c4636: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 005c463a: movzx eax, byte ptr [ebx + 0xf2] */ r_eax = (u32)R8((u32)(r_ebx+0xf2u));
    /* 005c4641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4643: je 0x5c46e7 */ if (fZ) goto L_005c46e7;
L_005c4649:; BB(0x005c4649);
    /* 005c4649: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c464c: je 0x5c4678 */ if (fZ) goto L_005c4678;
L_005c464e:; BB(0x005c464e);
    /* 005c464e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4651: jne 0x5c4663 */ if (!fZ) goto L_005c4663;
L_005c4653:; BB(0x005c4653);
    /* 005c4653: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c4657: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4659: call 0x5db728 */ r_esp -= 4; W32(r_esp, 0x5c465eu); f_005db728();
    /* 005c465e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4661: jmp 0x5c46bc */ goto L_005c46bc;
L_005c4663:; BB(0x005c4663);
    /* 005c4663: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4666: jne 0x5c46bc */ if (!fZ) goto L_005c46bc;
L_005c4668:; BB(0x005c4668);
    /* 005c4668: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c466c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c466d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c466e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c4673u); f_0061cdb0();
    /* 005c4673: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4676: jmp 0x5c46bc */ goto L_005c46bc;
L_005c4678:; BB(0x005c4678);
    /* 005c4678: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005c467f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4682: je 0x5c46ae */ if (fZ) goto L_005c46ae;
L_005c4684:; BB(0x005c4684);
    /* 005c4684: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4687: jne 0x5c4699 */ if (!fZ) goto L_005c4699;
L_005c4689:; BB(0x005c4689);
    /* 005c4689: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c468d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c468e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c468f: call 0x5e26b0 */ r_esp -= 4; W32(r_esp, 0x5c4694u); f_005e26b0();
    /* 005c4694: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4697: jmp 0x5c46bc */ goto L_005c46bc;
L_005c4699:; BB(0x005c4699);
    /* 005c4699: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c469c: jne 0x5c46bc */ if (!fZ) goto L_005c46bc;
L_005c469e:; BB(0x005c469e);
    /* 005c469e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c46a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c46a4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c46a9u); f_0061cdb0();
    /* 005c46a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c46ac: jmp 0x5c46bc */ goto L_005c46bc;
L_005c46ae:; BB(0x005c46ae);
    /* 005c46ae: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c46b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c46b4: call 0x5e0b78 */ r_esp -= 4; W32(r_esp, 0x5c46b9u); f_005e0b78();
    /* 005c46b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c46bc:; BB(0x005c46bc);
    /* 005c46bc: movzx ebp, word ptr [ebx + 0xe4] */ r_ebp = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005c46c3: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 005c46c9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005c46cd: call 0x5c46fc */ r_esp -= 4; W32(r_esp, 0x5c46d2u); f_005c46fc();
    /* 005c46d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c46d4: je 0x5c46e1 */ if (fZ) goto L_005c46e1;
L_005c46d6:; BB(0x005c46d6);
    /* 005c46d6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005c46da: mov eax, ebp */ r_eax = r_ebp;
    /* 005c46dc: call 0x5c4821 */ r_esp -= 4; W32(r_esp, 0x5c46e1u); f_005c4821();
L_005c46e1:; BB(0x005c46e1);
    /* 005c46e1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c46e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c46e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c46e6: ret  */ FN_RET(0x005c4600); r_esp += 4; return;
L_005c46e7:; BB(0x005c46e7);
    /* 005c46e7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c46eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c46ed: call 0x5e950c */ r_esp -= 4; W32(r_esp, 0x5c46f2u); f_005e950c();
    /* 005c46f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c46f5: jmp 0x5c46bc */ goto L_005c46bc;
}

void f_005c4608(void) /* sub_5C4608 */
{
    FN_ENTER(0x005c4608);
    /* 005c4608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4609: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c460a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c460d: mov ebx, edx */ r_ebx = r_edx;
    /* 005c460f: mov ebp, eax */ r_ebp = r_eax;
    /* 005c4611: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005c4615: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c461au); f_005d6a3c();
    /* 005c461a: movzx ecx, byte ptr [ebp] */ r_ecx = (u32)R8((u32)(r_ebp));
    /* 005c461e: mov byte ptr [esp + 8], cl */ W8((u32)(r_esp+0x8u), (u8)r_ecx);
    /* 005c4622: movzx ecx, byte ptr [ebp + 1] */ r_ecx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c4626: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4628: mov byte ptr [esp + 9], cl */ W8((u32)(r_esp+0x9u), (u8)r_ecx);
    /* 005c462c: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005c4630: je 0x5c46e1 */ if (fZ) goto L_005c46e1;
L_005c4636:; BB(0x005c4636);
    /* 005c4636: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 005c463a: movzx eax, byte ptr [ebx + 0xf2] */ r_eax = (u32)R8((u32)(r_ebx+0xf2u));
    /* 005c4641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4643: je 0x5c46e7 */ if (fZ) goto L_005c46e7;
L_005c4649:; BB(0x005c4649);
    /* 005c4649: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c464c: je 0x5c4678 */ if (fZ) goto L_005c4678;
L_005c464e:; BB(0x005c464e);
    /* 005c464e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4651: jne 0x5c4663 */ if (!fZ) goto L_005c4663;
L_005c4653:; BB(0x005c4653);
    /* 005c4653: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c4657: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4659: call 0x5db728 */ r_esp -= 4; W32(r_esp, 0x5c465eu); f_005db728();
    /* 005c465e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4661: jmp 0x5c46bc */ goto L_005c46bc;
L_005c4663:; BB(0x005c4663);
    /* 005c4663: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4666: jne 0x5c46bc */ if (!fZ) goto L_005c46bc;
L_005c4668:; BB(0x005c4668);
    /* 005c4668: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c466c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c466d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c466e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c4673u); f_0061cdb0();
    /* 005c4673: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4676: jmp 0x5c46bc */ goto L_005c46bc;
L_005c4678:; BB(0x005c4678);
    /* 005c4678: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005c467f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4682: je 0x5c46ae */ if (fZ) goto L_005c46ae;
L_005c4684:; BB(0x005c4684);
    /* 005c4684: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4687: jne 0x5c4699 */ if (!fZ) goto L_005c4699;
L_005c4689:; BB(0x005c4689);
    /* 005c4689: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c468d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c468e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c468f: call 0x5e26b0 */ r_esp -= 4; W32(r_esp, 0x5c4694u); f_005e26b0();
    /* 005c4694: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4697: jmp 0x5c46bc */ goto L_005c46bc;
L_005c4699:; BB(0x005c4699);
    /* 005c4699: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c469c: jne 0x5c46bc */ if (!fZ) goto L_005c46bc;
L_005c469e:; BB(0x005c469e);
    /* 005c469e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c46a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c46a4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c46a9u); f_0061cdb0();
    /* 005c46a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c46ac: jmp 0x5c46bc */ goto L_005c46bc;
L_005c46ae:; BB(0x005c46ae);
    /* 005c46ae: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c46b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c46b4: call 0x5e0b78 */ r_esp -= 4; W32(r_esp, 0x5c46b9u); f_005e0b78();
    /* 005c46b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c46bc:; BB(0x005c46bc);
    /* 005c46bc: movzx ebp, word ptr [ebx + 0xe4] */ r_ebp = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005c46c3: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 005c46c9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005c46cd: call 0x5c46fc */ r_esp -= 4; W32(r_esp, 0x5c46d2u); f_005c46fc();
    /* 005c46d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c46d4: je 0x5c46e1 */ if (fZ) goto L_005c46e1;
L_005c46d6:; BB(0x005c46d6);
    /* 005c46d6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005c46da: mov eax, ebp */ r_eax = r_ebp;
    /* 005c46dc: call 0x5c4821 */ r_esp -= 4; W32(r_esp, 0x5c46e1u); f_005c4821();
L_005c46e1:; BB(0x005c46e1);
    /* 005c46e1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c46e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c46e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c46e6: ret  */ FN_RET(0x005c4608); r_esp += 4; return;
L_005c46e7:; BB(0x005c46e7);
    /* 005c46e7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005c46eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c46ed: call 0x5e950c */ r_esp -= 4; W32(r_esp, 0x5c46f2u); f_005e950c();
    /* 005c46f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c46f5: jmp 0x5c46bc */ goto L_005c46bc;
}

void f_005c46f8(void) /* sub_5C46F8 */
{
    FN_ENTER(0x005c46f8);
    /* 005c46f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c46fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c46fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c46fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c46ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4700: mov ebx, eax */ r_ebx = r_eax;
    /* 005c4702: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4705: je 0x5c4811 */ if (fZ) goto L_005c4811;
L_005c470b:; BB(0x005c470b);
    /* 005c470b: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c4710: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4712: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c4717: jle 0x5c4806 */ if ((fZ||fS!=fO)) goto L_005c4806;
L_005c471d:; BB(0x005c471d);
    /* 005c471d: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
L_005c4723:; BB(0x005c4723);
    /* 005c4723: lea esi, [ecx + eax] */ r_esi = (u32)(r_ecx+r_eax);
    /* 005c4726: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005c4728: mov ebp, dword ptr [edx + esi*4] */ r_ebp = R32((u32)(r_edx+r_esi*4));
    /* 005c472b: cmp ebx, dword ptr [ebp + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4731: jle 0x5c4738 */ if ((fZ||fS!=fO)) goto L_005c4738;
L_005c4733:; BB(0x005c4733);
    /* 005c4733: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 005c4736: jmp 0x5c473a */ goto L_005c473a;
L_005c4738:; BB(0x005c4738);
    /* 005c4738: mov eax, esi */ r_eax = r_esi;
L_005c473a:; BB(0x005c473a);
    /* 005c473a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c473c: jl 0x5c4723 */ if ((fS!=fO)) goto L_005c4723;
L_005c473e:; BB(0x005c473e);
    /* 005c473e: mov edi, dword ptr [edx + ecx*4] */ r_edi = R32((u32)(r_edx+r_ecx*4));
    /* 005c4741: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4743: je 0x5c474d */ if (fZ) goto L_005c474d;
L_005c4745:; BB(0x005c4745);
    /* 005c4745: cmp ebx, dword ptr [edi + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c474b: je 0x5c474f */ if (fZ) goto L_005c474f;
L_005c474d:; BB(0x005c474d);
    /* 005c474d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c474f:; BB(0x005c474f);
    /* 005c474f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4751: je 0x5c47ed */ if (fZ) goto L_005c47ed;
L_005c4757:; BB(0x005c4757);
    /* 005c4757: movzx edx, word ptr [edi + 0xe4] */ r_edx = (u32)R16((u32)(r_edi+0xe4u));
    /* 005c475e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c475f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4764u); f_0068d5a8();
    /* 005c4764: mov ebp, eax */ r_ebp = r_eax;
    /* 005c4766: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4769: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c476b: je 0x5c47ed */ if (fZ) goto L_005c47ed;
L_005c4771:; BB(0x005c4771);
    /* 005c4771: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005c4773: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4775: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x5c477bu); call_ind(t); }
    /* 005c477b: mov esi, eax */ r_esi = r_eax;
    /* 005c477d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c477f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4780: mov edi, dword ptr [edi + 0xd8] */ r_edi = R32((u32)(r_edi+0xd8u));
    /* 005c4786: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c4788: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x5c478du); f_0068ed94();
    /* 005c478d: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 005c4794: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4797: jne 0x5c47a0 */ if (!fZ) goto L_005c47a0;
L_005c4799:; BB(0x005c4799);
    /* 005c4799: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c479b: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x5c47a0u); f_0068dd44();
L_005c47a0:; BB(0x005c47a0);
    /* 005c47a0: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c47a3: je 0x5c47f4 */ if (fZ) goto L_005c47f4;
L_005c47a5:; BB(0x005c47a5);
    /* 005c47a5: mov edx, dword ptr [0xa8d820] */ r_edx = R32((u32)(0xa8d820u));
    /* 005c47ab: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c47ad: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c47b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c47b2: jle 0x5c47fe */ if ((fZ||fS!=fO)) goto L_005c47fe;
L_005c47b4:; BB(0x005c47b4);
    /* 005c47b4: mov ecx, dword ptr [0xa8d81c] */ r_ecx = R32((u32)(0xa8d81cu));
L_005c47ba:; BB(0x005c47ba);
    /* 005c47ba: lea eax, [ebx + edx] */ r_eax = (u32)(r_ebx+r_edx);
    /* 005c47bd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c47bf: mov ebp, dword ptr [ecx + eax*4] */ r_ebp = R32((u32)(r_ecx+r_eax*4));
    /* 005c47c2: cmp edi, dword ptr [ebp + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c47c8: jle 0x5c47cf */ if ((fZ||fS!=fO)) goto L_005c47cf;
L_005c47ca:; BB(0x005c47ca);
    /* 005c47ca: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 005c47cd: jmp 0x5c47d1 */ goto L_005c47d1;
L_005c47cf:; BB(0x005c47cf);
    /* 005c47cf: mov edx, eax */ r_edx = r_eax;
L_005c47d1:; BB(0x005c47d1);
    /* 005c47d1: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c47d3: jl 0x5c47ba */ if ((fS!=fO)) goto L_005c47ba;
L_005c47d5:; BB(0x005c47d5);
    /* 005c47d5: mov edx, dword ptr [ecx + ebx*4] */ r_edx = R32((u32)(r_ecx+r_ebx*4));
    /* 005c47d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c47da: je 0x5c47f4 */ if (fZ) goto L_005c47f4;
L_005c47dc:; BB(0x005c47dc);
    /* 005c47dc: cmp edi, dword ptr [edx + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c47e2: jne 0x5c47f4 */ if (!fZ) goto L_005c47f4;
L_005c47e4:; BB(0x005c47e4);
    /* 005c47e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c47e6: je 0x5c47f4 */ if (fZ) goto L_005c47f4;
L_005c47e8:; BB(0x005c47e8);
    /* 005c47e8: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c47eb: jge 0x5c47f4 */ if ((fS==fO)) goto L_005c47f4;
L_005c47ed:; BB(0x005c47ed);
    /* 005c47ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c47ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c47f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c47f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c47f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c47f3: ret  */ FN_RET(0x005c46f8); r_esp += 4; return;
L_005c47f4:; BB(0x005c47f4);
    /* 005c47f4: mov eax, 1 */ r_eax = 0x1u;
    /* 005c47f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c47fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c47fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c47fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c47fd: ret  */ FN_RET(0x005c46f8); r_esp += 4; return;
L_005c47fe:; BB(0x005c47fe);
    /* 005c47fe: mov ecx, dword ptr [0xa8d81c] */ r_ecx = R32((u32)(0xa8d81cu));
    /* 005c4804: jmp 0x5c47d5 */ goto L_005c47d5;
L_005c4806:; BB(0x005c4806);
    /* 005c4806: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c480c: jmp 0x5c473e */ goto L_005c473e;
L_005c4811:; BB(0x005c4811);
    /* 005c4811: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c4813: jmp 0x5c474f */ goto L_005c474f;
}

void f_005c46fc(void) /* sub_5C46FC */
{
    FN_ENTER(0x005c46fc);
    /* 005c46fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c46fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c46fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c46ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4700: mov ebx, eax */ r_ebx = r_eax;
    /* 005c4702: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4705: je 0x5c4811 */ if (fZ) goto L_005c4811;
L_005c470b:; BB(0x005c470b);
    /* 005c470b: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c4710: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4712: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c4717: jle 0x5c4806 */ if ((fZ||fS!=fO)) goto L_005c4806;
L_005c471d:; BB(0x005c471d);
    /* 005c471d: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
L_005c4723:; BB(0x005c4723);
    /* 005c4723: lea esi, [ecx + eax] */ r_esi = (u32)(r_ecx+r_eax);
    /* 005c4726: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005c4728: mov ebp, dword ptr [edx + esi*4] */ r_ebp = R32((u32)(r_edx+r_esi*4));
    /* 005c472b: cmp ebx, dword ptr [ebp + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4731: jle 0x5c4738 */ if ((fZ||fS!=fO)) goto L_005c4738;
L_005c4733:; BB(0x005c4733);
    /* 005c4733: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 005c4736: jmp 0x5c473a */ goto L_005c473a;
L_005c4738:; BB(0x005c4738);
    /* 005c4738: mov eax, esi */ r_eax = r_esi;
L_005c473a:; BB(0x005c473a);
    /* 005c473a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c473c: jl 0x5c4723 */ if ((fS!=fO)) goto L_005c4723;
L_005c473e:; BB(0x005c473e);
    /* 005c473e: mov edi, dword ptr [edx + ecx*4] */ r_edi = R32((u32)(r_edx+r_ecx*4));
    /* 005c4741: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4743: je 0x5c474d */ if (fZ) goto L_005c474d;
L_005c4745:; BB(0x005c4745);
    /* 005c4745: cmp ebx, dword ptr [edi + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c474b: je 0x5c474f */ if (fZ) goto L_005c474f;
L_005c474d:; BB(0x005c474d);
    /* 005c474d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c474f:; BB(0x005c474f);
    /* 005c474f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4751: je 0x5c47ed */ if (fZ) goto L_005c47ed;
L_005c4757:; BB(0x005c4757);
    /* 005c4757: movzx edx, word ptr [edi + 0xe4] */ r_edx = (u32)R16((u32)(r_edi+0xe4u));
    /* 005c475e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c475f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4764u); f_0068d5a8();
    /* 005c4764: mov ebp, eax */ r_ebp = r_eax;
    /* 005c4766: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4769: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c476b: je 0x5c47ed */ if (fZ) goto L_005c47ed;
L_005c4771:; BB(0x005c4771);
    /* 005c4771: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005c4773: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4775: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x5c477bu); call_ind(t); }
    /* 005c477b: mov esi, eax */ r_esi = r_eax;
    /* 005c477d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c477f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4780: mov edi, dword ptr [edi + 0xd8] */ r_edi = R32((u32)(r_edi+0xd8u));
    /* 005c4786: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c4788: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x5c478du); f_0068ed94();
    /* 005c478d: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 005c4794: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4797: jne 0x5c47a0 */ if (!fZ) goto L_005c47a0;
L_005c4799:; BB(0x005c4799);
    /* 005c4799: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c479b: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x5c47a0u); f_0068dd44();
L_005c47a0:; BB(0x005c47a0);
    /* 005c47a0: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c47a3: je 0x5c47f4 */ if (fZ) goto L_005c47f4;
L_005c47a5:; BB(0x005c47a5);
    /* 005c47a5: mov edx, dword ptr [0xa8d820] */ r_edx = R32((u32)(0xa8d820u));
    /* 005c47ab: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c47ad: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c47b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c47b2: jle 0x5c47fe */ if ((fZ||fS!=fO)) goto L_005c47fe;
L_005c47b4:; BB(0x005c47b4);
    /* 005c47b4: mov ecx, dword ptr [0xa8d81c] */ r_ecx = R32((u32)(0xa8d81cu));
L_005c47ba:; BB(0x005c47ba);
    /* 005c47ba: lea eax, [ebx + edx] */ r_eax = (u32)(r_ebx+r_edx);
    /* 005c47bd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c47bf: mov ebp, dword ptr [ecx + eax*4] */ r_ebp = R32((u32)(r_ecx+r_eax*4));
    /* 005c47c2: cmp edi, dword ptr [ebp + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c47c8: jle 0x5c47cf */ if ((fZ||fS!=fO)) goto L_005c47cf;
L_005c47ca:; BB(0x005c47ca);
    /* 005c47ca: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 005c47cd: jmp 0x5c47d1 */ goto L_005c47d1;
L_005c47cf:; BB(0x005c47cf);
    /* 005c47cf: mov edx, eax */ r_edx = r_eax;
L_005c47d1:; BB(0x005c47d1);
    /* 005c47d1: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c47d3: jl 0x5c47ba */ if ((fS!=fO)) goto L_005c47ba;
L_005c47d5:; BB(0x005c47d5);
    /* 005c47d5: mov edx, dword ptr [ecx + ebx*4] */ r_edx = R32((u32)(r_ecx+r_ebx*4));
    /* 005c47d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c47da: je 0x5c47f4 */ if (fZ) goto L_005c47f4;
L_005c47dc:; BB(0x005c47dc);
    /* 005c47dc: cmp edi, dword ptr [edx + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c47e2: jne 0x5c47f4 */ if (!fZ) goto L_005c47f4;
L_005c47e4:; BB(0x005c47e4);
    /* 005c47e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c47e6: je 0x5c47f4 */ if (fZ) goto L_005c47f4;
L_005c47e8:; BB(0x005c47e8);
    /* 005c47e8: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c47eb: jge 0x5c47f4 */ if ((fS==fO)) goto L_005c47f4;
L_005c47ed:; BB(0x005c47ed);
    /* 005c47ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c47ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c47f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c47f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c47f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c47f3: ret  */ FN_RET(0x005c46fc); r_esp += 4; return;
L_005c47f4:; BB(0x005c47f4);
    /* 005c47f4: mov eax, 1 */ r_eax = 0x1u;
    /* 005c47f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c47fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c47fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c47fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c47fd: ret  */ FN_RET(0x005c46fc); r_esp += 4; return;
L_005c47fe:; BB(0x005c47fe);
    /* 005c47fe: mov ecx, dword ptr [0xa8d81c] */ r_ecx = R32((u32)(0xa8d81cu));
    /* 005c4804: jmp 0x5c47d5 */ goto L_005c47d5;
L_005c4806:; BB(0x005c4806);
    /* 005c4806: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c480c: jmp 0x5c473e */ goto L_005c473e;
L_005c4811:; BB(0x005c4811);
    /* 005c4811: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c4813: jmp 0x5c474f */ goto L_005c474f;
}

void f_005c4821(void) /* sub_5C4821 */
{
    FN_ENTER(0x005c4821);
    /* 005c4821: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4822: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4823: mov edi, edx */ r_edi = r_edx;
    /* 005c4825: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 005c4828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4829: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c482eu); f_0068d5a8();
    /* 005c482e: mov esi, eax */ r_esi = r_eax;
    /* 005c4830: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4833: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4835: je 0x5c4852 */ if (fZ) goto L_005c4852;
L_005c4837:; BB(0x005c4837);
    /* 005c4837: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4838: call 0x5c9a40 */ r_esp -= 4; W32(r_esp, 0x5c483du); f_005c9a40();
    /* 005c483d: mov edi, eax */ r_edi = r_eax;
    /* 005c483f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4842: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4844: je 0x5c4852 */ if (fZ) goto L_005c4852;
L_005c4846:; BB(0x005c4846);
    /* 005c4846: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4847: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4849: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x5c484eu); f_00687904();
    /* 005c484e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4850: je 0x5c4855 */ if (fZ) goto L_005c4855;
L_005c4852:; BB(0x005c4852);
    /* 005c4852: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4853: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4854: ret  */ FN_RET(0x005c4821); r_esp += 4; return;
L_005c4855:; BB(0x005c4855);
    /* 005c4855: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005c4857: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4859: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5c485cu); call_ind(t); }
    /* 005c485c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c485d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c485e: ret  */ FN_RET(0x005c4821); r_esp += 4; return;
}

void f_005c4860(void) /* sub_5C4860 */
{
    FN_ENTER(0x005c4860);
    /* 005c4860: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005c4866: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c486b: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 005c4871: ret  */ FN_RET(0x005c4860); r_esp += 4; return;
}

void f_005c4874(void) /* sub_5C4874 */
{
    FN_ENTER(0x005c4874);
    /* 005c4874: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4875: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4876: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4879: mov edi, ecx */ r_edi = r_ecx;
    /* 005c487b: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 005c487f: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c4885: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4887: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5c488cu); f_008172d4();
    /* 005c488c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005c4890: mov dword ptr [edi + 0xf8], 0 */ W32((u32)(r_edi+0xf8u), 0x0u);
    /* 005c489a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c489f: je 0x5c498e */ if (fZ) goto L_005c498e;
L_005c48a5:; BB(0x005c48a5);
    /* 005c48a5: mov byte ptr [edi + 0xf1], 0 */ W8((u32)(r_edi+0xf1u), 0x0u);
    /* 005c48ac: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005c48af: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005c48b2: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005c48b5: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005c48ba: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005c48bd: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005c48c0: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 005c48c3: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
    /* 005c48ca: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005c48ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c48d0: jne 0x5c48fa */ if (!fZ) goto L_005c48fa;
L_005c48d2:; BB(0x005c48d2);
    /* 005c48d2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c48d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c48d6: mov ecx, edi */ r_ecx = r_edi;
    /* 005c48d8: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c48ddu); f_005c425c();
    /* 005c48dd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c48e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c48e1: movsx edx, word ptr [edi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 005c48e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c48e6: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c48e9: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c48ec: movsx ebp, word ptr [esp + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x44u));
    /* 005c48f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c48f2: call 0x5e3ae4 */ r_esp -= 4; W32(r_esp, 0x5c48f7u); f_005e3ae4();
    /* 005c48f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c48fa:; BB(0x005c48fa);
    /* 005c48fa: call 0x5c9a18 */ r_esp -= 4; W32(r_esp, 0x5c48ffu); f_005c9a18();
    /* 005c48ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4902: je 0x5c497f */ if (fZ) goto L_005c497f;
L_005c4904:; BB(0x005c4904);
    /* 005c4904: movsx eax, word ptr [esp + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x34u));
    /* 005c4909: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c490f: jne 0x5c497f */ if (!fZ) goto L_005c497f;
L_005c4911:; BB(0x005c4911);
    /* 005c4911: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4913: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 005c4916: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 005c4919: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5c491eu); f_008587a5();
    /* 005c491e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005c4922: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005c4926: fdiv dword ptr [0x92bb74] */ ST(0) = ST(0) / R_F32((u32)(0x92bb74u));
    /* 005c492c: fmul dword ptr [0x92bb78] */ ST(0) = ST(0) * R_F32((u32)(0x92bb78u));
    /* 005c4932: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4934: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005c4938: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005c493d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c4942: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005c4946: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005c494a: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c494d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005c4951: call 0x5c49a4 */ r_esp -= 4; W32(r_esp, 0x5c4956u); f_005c49a4();
    /* 005c4956: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4957: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5c495cu); f_007b999c();
    /* 005c495c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c495d: mov eax, dword ptr [0xa8d8c8] */ r_eax = R32((u32)(0xa8d8c8u));
    /* 005c4962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4964: je 0x5c4986 */ if (fZ) goto L_005c4986;
L_005c4966:; BB(0x005c4966);
    /* 005c4966: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c496b: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c496e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c496f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5c4974u); f_0050b510();
    /* 005c4974: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4977: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c497a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c497b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c497c: ret 0xc */ FN_RET(0x005c4874); r_esp += 16; return;
L_005c497f:; BB(0x005c497f);
    /* 005c497f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005c4981: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4983: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x5c4986u); call_ind(t); }
L_005c4986:; BB(0x005c4986);
    /* 005c4986: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c498a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c498b: ret 0xc */ FN_RET(0x005c4874); r_esp += 16; return;
L_005c498e:; BB(0x005c498e);
    /* 005c498e: call 0x5c8498 */ r_esp -= 4; W32(r_esp, 0x5c4993u); f_005c8498();
    /* 005c4993: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
    /* 005c4997: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4999: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5c499eu); f_007b4f54();
    /* 005c499e: jmp 0x5c48a5 */ goto L_005c48a5;
}

void f_005c49a4(void) /* sub_5C49A4 */
{
    FN_ENTER(0x005c49a4);
    /* 005c49a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c49a5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c49a8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c49aa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005c49ad: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 005c49b0: fld dword ptr [0x92bb70] */ FPUSH(R_F32((u32)(0x92bb70u)));
    /* 005c49b6: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 005c49b9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005c49bd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005c49c0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005c49c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c49c7: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c49ca: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x5c49cfu); f_00780630();
    /* 005c49cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c49d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c49d4: je 0x5c49e5 */ if (fZ) goto L_005c49e5;
L_005c49d6:; BB(0x005c49d6);
    /* 005c49d6: fld dword ptr [0x92bb6c] */ FPUSH(R_F32((u32)(0x92bb6cu)));
    /* 005c49dc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c49df: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 005c49e2: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
L_005c49e5:; BB(0x005c49e5);
    /* 005c49e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c49e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c49e9: ret  */ FN_RET(0x005c49a4); r_esp += 4; return;
}

void f_005c49ec(void) /* sub_5C49EC */
{
    FN_ENTER(0x005c49ec);
    /* 005c49ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c49ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c49ee: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c49f1: mov edi, ecx */ r_edi = r_ecx;
    /* 005c49f3: movzx esi, word ptr [esp + 0x18] */ r_esi = (u32)R16((u32)(r_esp+0x18u));
    /* 005c49f8: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c49fe: je 0x5c4a6b */ if (fZ) goto L_005c4a6b;
L_005c4a00:; BB(0x005c4a00);
    /* 005c4a00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a01: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4a06u); f_0068d5a8();
    /* 005c4a06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4a07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a08: mov ecx, eax */ r_ecx = r_eax;
    /* 005c4a0a: call 0x687c70 */ r_esp -= 4; W32(r_esp, 0x5c4a0fu); f_00687c70();
    /* 005c4a0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4a11: je 0x5c4a63 */ if (fZ) goto L_005c4a63;
L_005c4a13:; BB(0x005c4a13);
    /* 005c4a13: movzx eax, word ptr [edi + 0x94] */ r_eax = (u32)R16((u32)(r_edi+0x94u));
    /* 005c4a1a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4a1f: jne 0x5c4a63 */ if (!fZ) goto L_005c4a63;
L_005c4a21:; BB(0x005c4a21);
    /* 005c4a21: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 005c4a27: mov byte ptr [esp], 0x5a */ W8((u32)(r_esp), 0x5au);
    /* 005c4a2b: mov word ptr [edi + 0x94], si */ W16((u32)(r_edi+0x94u), (u16)r_esi);
    /* 005c4a32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4a34: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 005c4a39: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 005c4a3e: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
    /* 005c4a43: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 005c4a49: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005c4a4d: mov word ptr [esp + 8], si */ W16((u32)(r_esp+0x8u), (u16)r_esi);
    /* 005c4a52: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c4a55: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x5c4a5au); f_00800518();
    /* 005c4a5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4a5c: mov word ptr [edi + 0xe6], ax */ W16((u32)(r_edi+0xe6u), (u16)r_eax);
L_005c4a63:; BB(0x005c4a63);
    /* 005c4a63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4a66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4a67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4a68: ret 4 */ FN_RET(0x005c49ec); r_esp += 8; return;
L_005c4a6b:; BB(0x005c4a6b);
    /* 005c4a6b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005c4a70: mov word ptr [edi + 0x94], ax */ W16((u32)(r_edi+0x94u), (u16)r_eax);
    /* 005c4a77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4a7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4a7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4a7c: ret 4 */ FN_RET(0x005c49ec); r_esp += 8; return;
}

void f_005c4a80(void) /* sub_5C4A80 */
{
    FN_ENTER(0x005c4a80);
    /* 005c4a80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4a86: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005c4a8a: movsx ebp, word ptr [esi + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 005c4a8e: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 005c4a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a93: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4a98u); f_0068d5a8();
    /* 005c4a98: mov edi, eax */ r_edi = r_eax;
    /* 005c4a9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4a9d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4a9f: je 0x5c4b2c */ if (fZ) goto L_005c4b2c;
L_005c4aa5:; BB(0x005c4aa5);
    /* 005c4aa5: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 005c4aa8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4aab: je 0x5c4bca */ if (fZ) goto L_005c4bca;
L_005c4ab1:; BB(0x005c4ab1);
    /* 005c4ab1: mov esi, dword ptr [0xa8d820] */ r_esi = R32((u32)(0xa8d820u));
    /* 005c4ab7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4ab9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c4abc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c4abe: jle 0x5c4bc0 */ if ((fZ||fS!=fO)) goto L_005c4bc0;
L_005c4ac4:; BB(0x005c4ac4);
    /* 005c4ac4: mov eax, dword ptr [0xa8d81c] */ r_eax = R32((u32)(0xa8d81cu));
    /* 005c4ac9: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005c4acc: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_005c4ad0:; BB(0x005c4ad0);
    /* 005c4ad0: lea ebp, [ecx + esi] */ r_ebp = (u32)(r_ecx+r_esi);
    /* 005c4ad3: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005c4ad5: mov ebx, dword ptr [eax + ebp*4] */ r_ebx = R32((u32)(r_eax+r_ebp*4));
    /* 005c4ad8: cmp edx, dword ptr [ebx + 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4ade: jle 0x5c4ae5 */ if ((fZ||fS!=fO)) goto L_005c4ae5;
L_005c4ae0:; BB(0x005c4ae0);
    /* 005c4ae0: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 005c4ae3: jmp 0x5c4ae7 */ goto L_005c4ae7;
L_005c4ae5:; BB(0x005c4ae5);
    /* 005c4ae5: mov esi, ebp */ r_esi = r_ebp;
L_005c4ae7:; BB(0x005c4ae7);
    /* 005c4ae7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4ae9: jl 0x5c4ad0 */ if ((fS!=fO)) goto L_005c4ad0;
L_005c4aeb:; BB(0x005c4aeb);
    /* 005c4aeb: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005c4aee: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_005c4af2:; BB(0x005c4af2);
    /* 005c4af2: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 005c4af5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4af7: je 0x5c4b01 */ if (fZ) goto L_005c4b01;
L_005c4af9:; BB(0x005c4af9);
    /* 005c4af9: cmp edx, dword ptr [esi + 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4aff: je 0x5c4b03 */ if (fZ) goto L_005c4b03;
L_005c4b01:; BB(0x005c4b01);
    /* 005c4b01: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005c4b03:; BB(0x005c4b03);
    /* 005c4b03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b05: je 0x5c4b5b */ if (fZ) goto L_005c4b5b;
L_005c4b07:; BB(0x005c4b07);
    /* 005c4b07: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 005c4b0c: mov word ptr [esi + 0x94], dx */ W16((u32)(r_esi+0x94u), (u16)r_edx);
    /* 005c4b13: movzx edx, byte ptr [esi + 0xf2] */ r_edx = (u32)R8((u32)(r_esi+0xf2u));
    /* 005c4b1a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b1d: je 0x5c4b47 */ if (fZ) goto L_005c4b47;
L_005c4b1f:; BB(0x005c4b1f);
    /* 005c4b1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b20: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4b22: call 0x687c70 */ r_esp -= 4; W32(r_esp, 0x5c4b27u); f_00687c70();
    /* 005c4b27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b2a: je 0x5c4b33 */ if (fZ) goto L_005c4b33;
L_005c4b2c:; BB(0x005c4b2c);
    /* 005c4b2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4b2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4b30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4b31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4b32: ret  */ FN_RET(0x005c4a80); r_esp += 4; return;
L_005c4b33:; BB(0x005c4b33);
    /* 005c4b33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b35: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4b37: call 0x5c4bd4 */ r_esp -= 4; W32(r_esp, 0x5c4b3cu); f_005c4bd4();
    /* 005c4b3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b3e: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4b40: call 0x5c4c1c */ r_esp -= 4; W32(r_esp, 0x5c4b45u); f_005c4c1c();
    /* 005c4b45: jmp 0x5c4b2c */ goto L_005c4b2c;
L_005c4b47:; BB(0x005c4b47);
    /* 005c4b47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b49: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4b4b: call 0x5c4bd4 */ r_esp -= 4; W32(r_esp, 0x5c4b50u); f_005c4bd4();
    /* 005c4b50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b52: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4b54: call 0x5c4c1c */ r_esp -= 4; W32(r_esp, 0x5c4b59u); f_005c4c1c();
    /* 005c4b59: jmp 0x5c4b2c */ goto L_005c4b2c;
L_005c4b5b:; BB(0x005c4b5b);
    /* 005c4b5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b5d: call 0x5c8234 */ r_esp -= 4; W32(r_esp, 0x5c4b62u); f_005c8234();
    /* 005c4b62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4b65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b67: je 0x5c4bb1 */ if (fZ) goto L_005c4bb1;
L_005c4b69:; BB(0x005c4b69);
    /* 005c4b69: movzx edx, byte ptr [eax + 0x10] */ r_edx = (u32)R8((u32)(r_eax+0x10u));
    /* 005c4b6d: lea esi, [eax + 0x10] */ r_esi = (u32)(r_eax+0x10u);
    /* 005c4b70: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b73: je 0x5c4b98 */ if (fZ) goto L_005c4b98;
L_005c4b75:; BB(0x005c4b75);
    /* 005c4b75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b76: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4b78: call 0x687c98 */ r_esp -= 4; W32(r_esp, 0x5c4b7du); f_00687c98();
    /* 005c4b7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b80: jne 0x5c4b2c */ if (!fZ) goto L_005c4b2c;
L_005c4b82:; BB(0x005c4b82);
    /* 005c4b82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b83: call 0x5c9a40 */ r_esp -= 4; W32(r_esp, 0x5c4b88u); f_005c9a40();
    /* 005c4b88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4b89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b8b: je 0x5c4b2c */ if (fZ) goto L_005c4b2c;
L_005c4b8d:; BB(0x005c4b8d);
    /* 005c4b8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b8f: mov ecx, eax */ r_ecx = r_eax;
    /* 005c4b91: call 0x5c4bd4 */ r_esp -= 4; W32(r_esp, 0x5c4b96u); f_005c4bd4();
    /* 005c4b96: jmp 0x5c4b2c */ goto L_005c4b2c;
L_005c4b98:; BB(0x005c4b98);
    /* 005c4b98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b99: call 0x5c9a40 */ r_esp -= 4; W32(r_esp, 0x5c4b9eu); f_005c9a40();
    /* 005c4b9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4b9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4ba1: je 0x5c4b2c */ if (fZ) goto L_005c4b2c;
L_005c4ba3:; BB(0x005c4ba3);
    /* 005c4ba3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ba5: mov ecx, eax */ r_ecx = r_eax;
    /* 005c4ba7: call 0x5c4bd4 */ r_esp -= 4; W32(r_esp, 0x5c4bacu); f_005c4bd4();
    /* 005c4bac: jmp 0x5c4b2c */ goto L_005c4b2c;
L_005c4bb1:; BB(0x005c4bb1);
    /* 005c4bb1: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c4bbb: jmp 0x5c4b2c */ goto L_005c4b2c;
L_005c4bc0:; BB(0x005c4bc0);
    /* 005c4bc0: mov eax, dword ptr [0xa8d81c] */ r_eax = R32((u32)(0xa8d81cu));
    /* 005c4bc5: jmp 0x5c4af2 */ goto L_005c4af2;
L_005c4bca:; BB(0x005c4bca);
    /* 005c4bca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c4bcc: jmp 0x5c4b03 */ goto L_005c4b03;
}

void f_005c4bd4(void) /* sub_5C4BD4 */
{
    FN_ENTER(0x005c4bd4);
    /* 005c4bd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bd6: mov esi, ecx */ r_esi = r_ecx;
    /* 005c4bd8: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 005c4bdd: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005c4be1: push dword ptr [esi + 0xd8] */ { u32 v = R32((u32)(r_esi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c4be7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4be8: call 0x5e3bbc */ r_esp -= 4; W32(r_esp, 0x5c4bedu); f_005e3bbc();
    /* 005c4bed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4bf0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4bf2: je 0x5c4c15 */ if (fZ) goto L_005c4c15;
L_005c4bf4:; BB(0x005c4bf4);
    /* 005c4bf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bf5: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4bf7: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x5c4bfcu); f_00687904();
    /* 005c4bfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4bfe: je 0x5c4c15 */ if (fZ) goto L_005c4c15;
L_005c4c00:; BB(0x005c4c00);
    /* 005c4c00: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4c02: call 0x5c3db0 */ r_esp -= 4; W32(r_esp, 0x5c4c07u); f_005c3db0();
    /* 005c4c07: mov byte ptr [esi + 0xf1], 1 */ W8((u32)(r_esi+0xf1u), 0x1u);
    /* 005c4c0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c0f: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x5c4c14u); f_008113bc();
    /* 005c4c14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c4c15:; BB(0x005c4c15);
    /* 005c4c15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4c16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4c17: ret 8 */ FN_RET(0x005c4bd4); r_esp += 12; return;
}

void f_005c4c1c(void) /* sub_5C4C1C */
{
    FN_ENTER(0x005c4c1c);
    /* 005c4c1c: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 005c4c21: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c4c27: jne 0x5c4c48 */ if (!fZ) goto L_005c4c48;
L_005c4c29:; BB(0x005c4c29);
    /* 005c4c29: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c2e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4c31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c32: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5c4c37u); f_0050b510();
    /* 005c4c37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4c3a: push 0x571 */ { u32 v = 0x571u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c3f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005c4c43: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x5c4c48u); f_006904cc();
L_005c4c48:; BB(0x005c4c48);
    /* 005c4c48: ret 8 */ FN_RET(0x005c4c1c); r_esp += 12; return;
}

void f_005c4c4c(void) /* sub_5C4C4C */
{
    FN_ENTER(0x005c4c4c);
    /* 005c4c4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c4d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4c50: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005c4c54: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c4c57: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4c5a: je 0x5c4c79 */ if (fZ) goto L_005c4c79;
L_005c4c5c:; BB(0x005c4c5c);
    /* 005c4c5c: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005c4c60: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 005c4c65: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005c4c69: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005c4c6d: mov eax, ebp */ r_eax = r_ebp;
    /* 005c4c6f: call 0x5c4c99 */ r_esp -= 4; W32(r_esp, 0x5c4c74u); f_005c4c99();
    /* 005c4c74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4c77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4c78: ret  */ FN_RET(0x005c4c4c); r_esp += 4; return;
L_005c4c79:; BB(0x005c4c79);
    /* 005c4c79: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 005c4c7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c7f: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x5c4c84u); f_005e3aac();
    /* 005c4c84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4c85: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005c4c88: jmp 0x5c4c5c */ goto L_005c4c5c;
}

void f_005c4c99(void) /* sub_5C4C99 */
{
    FN_ENTER(0x005c4c99);
    /* 005c4c99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c9d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4ca0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c4ca2: mov ebx, edx */ r_ebx = r_edx;
    /* 005c4ca4: mov edi, eax */ r_edi = r_eax;
    /* 005c4ca6: movzx esi, bx */ r_esi = (u32)(u16)r_ebx;
    /* 005c4ca9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4caa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4cafu); f_0068d5a8();
    /* 005c4caf: mov esi, eax */ r_esi = r_eax;
    /* 005c4cb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4cb4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4cb6: je 0x5c4d45 */ if (fZ) goto L_005c4d45;
L_005c4cbc:; BB(0x005c4cbc);
    /* 005c4cbc: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005c4cc0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4cc3: jne 0x5c4cca */ if (!fZ) goto L_005c4cca;
L_005c4cc5:; BB(0x005c4cc5);
    /* 005c4cc5: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 005c4cc8: jmp 0x5c4cd3 */ goto L_005c4cd3;
L_005c4cca:; BB(0x005c4cca);
    /* 005c4cca: mov ecx, edi */ r_ecx = r_edi;
    /* 005c4ccc: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x5c4cd1u); f_005d29b0();
    /* 005c4cd1: mov edi, eax */ r_edi = r_eax;
L_005c4cd3:; BB(0x005c4cd3);
    /* 005c4cd3: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005c4cd9: mov word ptr [esp + 2], bx */ W16((u32)(r_esp+0x2u), (u16)r_ebx);
    /* 005c4cde: mov ecx, esi */ r_ecx = r_esi;
    /* 005c4ce0: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005c4ce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4ce7: mov byte ptr [esp], 0xc3 */ W8((u32)(r_esp), 0xc3u);
    /* 005c4ceb: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 005c4cf0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005c4cf4: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 005c4cf9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005c4d01: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005c4d09: mov dword ptr [esp + 0x10], 0xffffffff */ W32((u32)(r_esp+0x10u), 0xffffffffu);
    /* 005c4d11: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c4d16u); f_007ba980();
    /* 005c4d16: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 005c4d1b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c4d1e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005c4d21: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005c4d25: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005c4d28: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 005c4d2c: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005c4d30: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 005c4d34: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 005c4d38: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x5c4d3du); f_008003e0();
    /* 005c4d3d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4d40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4d41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4d42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4d43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4d44: ret  */ FN_RET(0x005c4c99); r_esp += 4; return;
L_005c4d45:; BB(0x005c4d45);
    /* 005c4d45: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c4d4f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4d52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4d54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4d55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4d56: ret  */ FN_RET(0x005c4c99); r_esp += 4; return;
}

void f_005c4d58(void) /* sub_5C4D58 */
{
    FN_ENTER(0x005c4d58);
    /* 005c4d58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d5a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4d5d: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 005c4d61: lea ebx, [ebp + 0x10] */ r_ebx = (u32)(r_ebp+0x10u);
    /* 005c4d64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c4d66: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c4d6bu); f_0061cdb0();
    /* 005c4d6b: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 005c4d6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d70: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x5c4d75u); f_0080c2dc();
    /* 005c4d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d76: call 0x8076d4 */ r_esp -= 4; W32(r_esp, 0x5c4d7bu); f_008076d4();
    /* 005c4d7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4d7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4d80: jne 0x5c4e35 */ if (!fZ) goto L_005c4e35;
L_005c4d86:; BB(0x005c4d86);
    /* 005c4d86: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005c4d8e: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005c4d92: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c4d94: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c4d99: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005c4da1: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005c4da5: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005c4da8: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 005c4dad: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 005c4db2: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 005c4db7: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c4dbcu); f_005d6a3c();
    /* 005c4dbc: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 005c4dc0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c4dc3: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005c4dc6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c4dc9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005c4dcd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005c4dd1: movzx eax, word ptr [ebp + 6] */ r_eax = (u32)R16((u32)(r_ebp+0x6u));
    /* 005c4dd5: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 005c4dda: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c4ddd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c4de1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c4de4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005c4de8: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005c4deb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005c4def: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005c4df2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005c4df6: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005c4df9: movzx ebp, byte ptr [ebp + 1] */ r_ebp = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c4dfd: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005c4e01: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c4e03: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c4e05: cmp ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4e08: jne 0x5c4e15 */ if (!fZ) goto L_005c4e15;
L_005c4e0a:; BB(0x005c4e0a);
    /* 005c4e0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c4e0e: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5c4e13u); f_00779df0();
    /* 005c4e13: jmp 0x5c4e1e */ goto L_005c4e1e;
L_005c4e15:; BB(0x005c4e15);
    /* 005c4e15: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c4e19: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5c4e1eu); f_00779df0();
L_005c4e1e:; BB(0x005c4e1e);
    /* 005c4e1e: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005c4e22: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c4e27u); f_0061cdb0();
    /* 005c4e27: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c4e2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e2d: call 0x5c9998 */ r_esp -= 4; W32(r_esp, 0x5c4e32u); f_005c9998();
    /* 005c4e32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c4e35:; BB(0x005c4e35);
    /* 005c4e35: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4e38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4e39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4e3a: ret  */ FN_RET(0x005c4d58); r_esp += 4; return;
}

void f_005c4e3c(void) /* sub_5C4E3C */
{
    FN_ENTER(0x005c4e3c);
    /* 005c4e3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e3f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4e42: movzx ebx, word ptr [esp + 0x28] */ r_ebx = (u32)R16((u32)(r_esp+0x28u));
    /* 005c4e47: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 005c4e4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e4c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4e51u); f_0068d5a8();
    /* 005c4e51: mov ebp, eax */ r_ebp = r_eax;
    /* 005c4e53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4e56: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4e58: je 0x5c4ec9 */ if (fZ) goto L_005c4ec9;
L_005c4e5a:; BB(0x005c4e5a);
    /* 005c4e5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e5b: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x5c4e60u); f_005e3aac();
    /* 005c4e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4e61: mov word ptr [esp + 2], bx */ W16((u32)(r_esp+0x2u), (u16)r_ebx);
    /* 005c4e66: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 005c4e6c: mov word ptr [esp + 4], bx */ W16((u32)(r_esp+0x4u), (u16)r_ebx);
    /* 005c4e71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c4e73: mov byte ptr [esp], 0xd1 */ W8((u32)(r_esp), 0xd1u);
    /* 005c4e77: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 005c4e7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c4e7e: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 005c4e83: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005c4e8b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005c4e93: mov dword ptr [esp + 0x10], 0xffffffff */ W32((u32)(r_esp+0x10u), 0xffffffffu);
    /* 005c4e9b: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c4ea0u); f_007ba980();
    /* 005c4ea0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 005c4ea4: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 005c4ea9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c4eac: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005c4eae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005c4eb2: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 005c4eb5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c4eb9: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 005c4ebd: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x5c4ec2u); f_00800518();
    /* 005c4ec2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4ec5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4ec6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4ec7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4ec8: ret  */ FN_RET(0x005c4e3c); r_esp += 4; return;
L_005c4ec9:; BB(0x005c4ec9);
    /* 005c4ec9: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c4ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4ed6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4ed7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4ed8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4ed9: ret  */ FN_RET(0x005c4e3c); r_esp += 4; return;
}

void f_005c4edc(void) /* sub_5C4EDC */
{
    FN_ENTER(0x005c4edc);
    /* 005c4edc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4edd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ede: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4ee1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005c4ee5: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 005c4ee8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c4eea: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c4eefu); f_0061cdb0();
    /* 005c4eef: mov eax, dword ptr [0xaaecf0] */ r_eax = R32((u32)(0xaaecf0u));
    /* 005c4ef4: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 005c4ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4efa: jne 0x5c4f0b */ if (!fZ) goto L_005c4f0b;
L_005c4efc:; BB(0x005c4efc);
    /* 005c4efc: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4f02: jne 0x5c4f0b */ if (!fZ) goto L_005c4f0b;
L_005c4f04:; BB(0x005c4f04);
    /* 005c4f04: mov eax, 1 */ r_eax = 0x1u;
    /* 005c4f09: jmp 0x5c4f0d */ goto L_005c4f0d;
L_005c4f0b:; BB(0x005c4f0b);
    /* 005c4f0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c4f0d:; BB(0x005c4f0d);
    /* 005c4f0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4f0f: jne 0x5c4f23 */ if (!fZ) goto L_005c4f23;
L_005c4f11:; BB(0x005c4f11);
    /* 005c4f11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c4f13: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c4f18u); f_0061cdb0();
    /* 005c4f18: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 005c4f1c: mov edx, ebx */ r_edx = r_ebx;
    /* 005c4f1e: call 0x5c4821 */ r_esp -= 4; W32(r_esp, 0x5c4f23u); f_005c4821();
L_005c4f23:; BB(0x005c4f23);
    /* 005c4f23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4f26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4f27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c4f28: ret  */ FN_RET(0x005c4edc); r_esp += 4; return;
}

void f_005c4f2c(void) /* sub_5C4F2C */
{
    FN_ENTER(0x005c4f2c);
    /* 005c4f2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c4f2f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005c4f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f35: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 005c4f3c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c4f41u); f_0068d5a8();
    /* 005c4f41: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 005c4f47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4f48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4f49: ret 4 */ FN_RET(0x005c4f2c); r_esp += 8; return;
}

void f_005c4f4c(void) /* sub_5C4F4C */
{
    FN_ENTER(0x005c4f4c);
    /* 005c4f4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f4d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4f50: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c4f53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f54: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c4f59u); f_005c425c();
    /* 005c4f59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f5b: call 0x5c74e8 */ r_esp -= 4; W32(r_esp, 0x5c4f60u); f_005c74e8();
    /* 005c4f60: mov edi, eax */ r_edi = r_eax;
    /* 005c4f62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4f65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f66: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005c4f6a: call 0x5d2aac */ r_esp -= 4; W32(r_esp, 0x5c4f6fu); f_005d2aac();
    /* 005c4f6f: mov eax, edi */ r_eax = r_edi;
    /* 005c4f71: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4f74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c4f75: ret  */ FN_RET(0x005c4f4c); r_esp += 4; return;
}

void f_005c4f78(void) /* sub_5C4F78 */
{
    FN_ENTER(0x005c4f78);
    /* 005c4f78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4f7b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c4f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f7f: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c4f84u); f_005c425c();
    /* 005c4f84: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c4f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f88: call 0x5c9b80 */ r_esp -= 4; W32(r_esp, 0x5c4f8du); f_005c9b80();
    /* 005c4f8d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c4f90: ret  */ FN_RET(0x005c4f78); r_esp += 4; return;
}

void f_005c4f94(void) /* sub_5C4F94 */
{
    FN_ENTER(0x005c4f94);
    /* 005c4f94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f96: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c4f98: movsx ebx, byte ptr [esp + 0xc] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 005c4f9d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4fa0: jne 0x5c4fac */ if (!fZ) goto L_005c4fac;
L_005c4fa2:; BB(0x005c4fa2);
    /* 005c4fa2: mov dword ptr [ebp + 0xf8], 0 */ W32((u32)(r_ebp+0xf8u), 0x0u);
L_005c4fac:; BB(0x005c4fac);
    /* 005c4fac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4fae: jne 0x5c4fc7 */ if (!fZ) goto L_005c4fc7;
L_005c4fb0:; BB(0x005c4fb0);
    /* 005c4fb0: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005c4fb4: mov dword ptr [ebp + 0xf8], 0 */ W32((u32)(r_ebp+0xf8u), 0x0u);
    /* 005c4fbe: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c4fc3: je 0x5c4fd9 */ if (fZ) goto L_005c4fd9;
L_005c4fc5:; BB(0x005c4fc5);
    /* 005c4fc5: jmp 0x5c4fce */ goto L_005c4fce;
L_005c4fc7:; BB(0x005c4fc7);
    /* 005c4fc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c4fc9: call 0x5c3db0 */ r_esp -= 4; W32(r_esp, 0x5c4fceu); f_005c3db0();
L_005c4fce:; BB(0x005c4fce);
    /* 005c4fce: mov byte ptr [ebp + 0xf1], bl */ W8((u32)(r_ebp+0xf1u), (u8)r_ebx);
    /* 005c4fd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c4fd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4fd6: ret 4 */ FN_RET(0x005c4f94); r_esp += 8; return;
L_005c4fd9:; BB(0x005c4fd9);
    /* 005c4fd9: call 0x5c8498 */ r_esp -= 4; W32(r_esp, 0x5c4fdeu); f_005c8498();
    /* 005c4fde: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 005c4fe2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c4fe4: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5c4fe9u); f_007b4f54();
    /* 005c4fe9: jmp 0x5c4fce */ goto L_005c4fce;
}

void f_005c4fec(void) /* sub_5C4FEC */
{
    FN_ENTER(0x005c4fec);
    /* 005c4fec: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005c4ff1: mov byte ptr [ecx + 0xf3], al */ W8((u32)(r_ecx+0xf3u), (u8)r_eax);
    /* 005c4ff7: ret 4 */ FN_RET(0x005c4fec); r_esp += 8; return;
}

void f_005c4ffc(void) /* sub_5C4FFC */
{
    FN_ENTER(0x005c4ffc);
    /* 005c4ffc: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005c5001: mov byte ptr [ecx + 0xf4], al */ W8((u32)(r_ecx+0xf4u), (u8)r_eax);
    /* 005c5007: ret 4 */ FN_RET(0x005c4ffc); r_esp += 8; return;
}

