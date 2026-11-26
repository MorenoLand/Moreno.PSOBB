#include "protos.h"

void f_006b4120(void) /* sub_6B4120 */
{
    FN_ENTER(0x006b4120);
    /* 006b4120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b4121: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b4124: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b412a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b412fu); f_0068d5a8();
    /* 006b412f: mov ebp, eax */ r_ebp = r_eax;
    /* 006b4131: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b4134: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b4136: jne 0x6b414e */ if (!fZ) goto L_006b414e;
L_006b4138:; BB(0x006b4138);
    /* 006b4138: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b413d: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b4142: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b4149: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b414c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b414d: ret  */ FN_RET(0x006b4120); r_esp += 4; return;
L_006b414e:; BB(0x006b414e);
    /* 006b414e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4151: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b4156u); f_005d6a3c();
    /* 006b4156: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b415b: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b4160: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b4163: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b4168: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 006b416b: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b416e: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 006b4171: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b4174: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 006b417a: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b417e: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b4183: lea edx, [edx + 2] */ r_edx = (u32)(r_edx+0x2u);
    /* 006b4186: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b4189: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b418c: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b4190: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b4193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4194: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6b4199u); f_006a4e50();
    /* 006b4199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b419b: je 0x6b41d3 */ if (fZ) goto L_006b41d3;
L_006b419d:; BB(0x006b419d);
    /* 006b419d: mov ecx, eax */ r_ecx = r_eax;
    /* 006b419f: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6b41a4u); f_006a60dc();
    /* 006b41a4: mov edx, eax */ r_edx = r_eax;
    /* 006b41a6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b41ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b41ad: je 0x6b41c2 */ if (fZ) goto L_006b41c2;
L_006b41af:; BB(0x006b41af);
    /* 006b41af: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b41b4: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 006b41ba: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 006b41bd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b41c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b41c1: ret  */ FN_RET(0x006b4120); r_esp += 4; return;
L_006b41c2:; BB(0x006b41c2);
    /* 006b41c2: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b41c7: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b41ce: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b41d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b41d2: ret  */ FN_RET(0x006b4120); r_esp += 4; return;
L_006b41d3:; BB(0x006b41d3);
    /* 006b41d3: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b41d8: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b41dd: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b41e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b41e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b41e8: ret  */ FN_RET(0x006b4120); r_esp += 4; return;
}

void f_006b41ec(void) /* sub_6B41EC */
{
    FN_ENTER(0x006b41ec);
    /* 006b41ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b41ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b41ee: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b41f1: movzx ebx, byte ptr [esp + 0x20] */ r_ebx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b41f6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b41fc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4201u); f_0068d5a8();
    /* 006b4201: mov edi, eax */ r_edi = r_eax;
    /* 006b4203: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b4206: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b4208: jne 0x6b4221 */ if (!fZ) goto L_006b4221;
L_006b420a:; BB(0x006b420a);
    /* 006b420a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b420f: movzx edx, byte ptr [esp + 0x24] */ r_edx = (u32)R8((u32)(r_esp+0x24u));
    /* 006b4214: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b421b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b421e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b421f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b4220: ret  */ FN_RET(0x006b41ec); r_esp += 4; return;
L_006b4221:; BB(0x006b4221);
    /* 006b4221: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4224: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b4229u); f_005d6a3c();
    /* 006b4229: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b422f: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 006b4232: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 006b4235: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 006b4238: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b423b: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b423e: mov byte ptr [esp + 1], cl */ W8((u32)(r_esp+0x1u), (u8)r_ecx);
    /* 006b4242: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b4245: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4248: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b424b: mov byte ptr [esp + 2], cl */ W8((u32)(r_esp+0x2u), (u8)r_ecx);
    /* 006b424f: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 006b4255: lea ebx, [ebx + 3] */ r_ebx = (u32)(r_ebx+0x3u);
    /* 006b4258: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b425b: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 006b425e: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b4262: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b4265: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4266: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6b426bu); f_006a4e50();
    /* 006b426b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b426d: je 0x6b42a6 */ if (fZ) goto L_006b42a6;
L_006b426f:; BB(0x006b426f);
    /* 006b426f: mov ecx, eax */ r_ecx = r_eax;
    /* 006b4271: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6b4276u); f_006a60dc();
    /* 006b4276: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b427c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b427e: je 0x6b4294 */ if (fZ) goto L_006b4294;
L_006b4280:; BB(0x006b4280);
    /* 006b4280: movzx edx, byte ptr [esp + 0x24] */ r_edx = (u32)R8((u32)(r_esp+0x24u));
    /* 006b4285: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 006b428b: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 006b428e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4291: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4292: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b4293: ret  */ FN_RET(0x006b41ec); r_esp += 4; return;
L_006b4294:; BB(0x006b4294);
    /* 006b4294: movzx eax, byte ptr [esp + 0x24] */ r_eax = (u32)R8((u32)(r_esp+0x24u));
    /* 006b4299: mov dword ptr [ecx + eax*4], 0xffffffff */ W32((u32)(r_ecx+r_eax*4), 0xffffffffu);
    /* 006b42a0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b42a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b42a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b42a5: ret  */ FN_RET(0x006b41ec); r_esp += 4; return;
L_006b42a6:; BB(0x006b42a6);
    /* 006b42a6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b42ab: movzx edx, byte ptr [esp + 0x24] */ r_edx = (u32)R8((u32)(r_esp+0x24u));
    /* 006b42b0: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b42b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b42ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b42bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b42bc: ret  */ FN_RET(0x006b41ec); r_esp += 4; return;
}

void f_006b42c0(void)
{
    FN_ENTER(0x006b42c0);
    /* 006b42c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b42c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b42c2: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b42c7: mov ebp, dword ptr [0xa954b0] */ r_ebp = R32((u32)(0xa954b0u));
    /* 006b42cd: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006b42d0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b42d3: movsx edx, word ptr [ebp + eax*4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*4));
    /* 006b42d8: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 006b42db: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b42de: lea ebx, [ecx + 3] */ r_ebx = (u32)(r_ecx+0x3u);
    /* 006b42e1: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b42e4: push dword ptr [ebp + ebx*4] */ { u32 v = R32((u32)(r_ebp+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b42e8: push dword ptr [ebp + eax*4] */ { u32 v = R32((u32)(r_ebp+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b42ec: push dword ptr [ebp + ecx*4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b42f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b42f1: call 0x6ba40c */ r_esp -= 4; W32(r_esp, 0x6b42f6u); f_006ba40c();
    /* 006b42f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b42f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b42fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b42fb: ret  */ FN_RET(0x006b42c0); r_esp += 4; return;
}

void f_006b42fc(void) /* sub_6B42FC */
{
    FN_ENTER(0x006b42fc);
    /* 006b42fc: mov eax, 1 */ r_eax = 0x1u;
    /* 006b4301: mov dword ptr [0xa8eba4], eax */ W32((u32)(0xa8eba4u), r_eax);
    /* 006b4306: mov dword ptr [0xa8f744], eax */ W32((u32)(0xa8f744u), r_eax);
    /* 006b430b: ret  */ FN_RET(0x006b42fc); r_esp += 4; return;
}

void f_006b430c(void) /* sub_6B430C */
{
    FN_ENTER(0x006b430c);
    /* 006b430c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b430e: mov dword ptr [0xa8eba4], eax */ W32((u32)(0xa8eba4u), r_eax);
    /* 006b4313: mov dword ptr [0xa8f744], eax */ W32((u32)(0xa8f744u), r_eax);
    /* 006b4318: ret  */ FN_RET(0x006b430c); r_esp += 4; return;
}

void f_006b431c(void)
{
    FN_ENTER(0x006b431c);
    /* 006b431c: call 0x717de4 */ r_esp -= 4; W32(r_esp, 0x6b4321u); f_00717de4();
    /* 006b4321: ret  */ FN_RET(0x006b431c); r_esp += 4; return;
}

void f_006b4324(void)
{
    FN_ENTER(0x006b4324);
    /* 006b4324: call 0x717e04 */ r_esp -= 4; W32(r_esp, 0x6b4329u); f_00717e04();
    /* 006b4329: ret  */ FN_RET(0x006b4324); r_esp += 4; return;
}

void f_006b432c(void)
{
    FN_ENTER(0x006b432c);
    /* 006b432c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4331: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4336: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4339: call 0x717e28 */ r_esp -= 4; W32(r_esp, 0x6b433eu); f_00717e28();
    /* 006b433e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b433f: ret  */ FN_RET(0x006b432c); r_esp += 4; return;
}

void f_006b4340(void)
{
    FN_ENTER(0x006b4340);
    /* 006b4340: call 0x83dd74 */ r_esp -= 4; W32(r_esp, 0x6b4345u); f_0083dd74();
    /* 006b4345: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b434b: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4350: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b4353: ret  */ FN_RET(0x006b4340); r_esp += 4; return;
}

void f_006b4354(void)
{
    FN_ENTER(0x006b4354);
    /* 006b4354: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4355: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b435b: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b435e: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b4363: mov edx, dword ptr [0xa954d4] */ r_edx = R32((u32)(0xa954d4u));
    /* 006b4369: jle 0x6b436d */ if ((fZ||fS!=fO)) goto L_006b436d;
L_006b436b:; BB(0x006b436b);
    /* 006b436b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b436c: ret  */ FN_RET(0x006b4354); r_esp += 4; return;
L_006b436d:; BB(0x006b436d);
    /* 006b436d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006b436f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4370: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b4372: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b4374: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006b4377: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b4379: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b437b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b437d: lea ecx, [ecx + esi + 0xa958e0] */ r_ecx = (u32)(r_ecx+r_esi+0xa958e0u);
    /* 006b4384: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4385: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 006b4388: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b438du); f_00857dec();
    /* 006b438d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4390: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4391: ret  */ FN_RET(0x006b4354); r_esp += 4; return;
}

void f_006b4394(void)
{
    FN_ENTER(0x006b4394);
    /* 006b4394: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4399: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b439c: jbe 0x6b439f */ if ((fC||fZ)) goto L_006b439f;
L_006b439e:; BB(0x006b439e);
    /* 006b439e: ret  */ FN_RET(0x006b4394); r_esp += 4; return;
L_006b439f:; BB(0x006b439f);
    /* 006b439f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b43a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b43a3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006b43a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b43a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b43aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b43ac: lea ecx, [eax + edx + 0xa958e0] */ r_ecx = (u32)(r_eax+r_edx+0xa958e0u);
    /* 006b43b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b43b5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006b43b7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006b43ba: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006b43bd: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006b43c0: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006b43c3: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006b43c6: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 006b43c9: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006b43cc: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006b43cf: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006b43d2: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006b43d5: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006b43d8: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006b43db: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006b43de: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006b43e1: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 006b43e4: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 006b43e7: ret  */ FN_RET(0x006b4394); r_esp += 4; return;
}

void f_006b43e8(void) /* sub_6B43E8 */
{
    FN_ENTER(0x006b43e8);
    /* 006b43e8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b43eb: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b43f1: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 006b43f6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006b43fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b43fc: mov byte ptr [esp], 0x67 */ W8((u32)(r_esp), 0x67u);
    /* 006b4400: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b4405: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b4409: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006b440e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b4412: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4415: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b441au); f_008003e0();
    /* 006b441a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b441d: ret  */ FN_RET(0x006b43e8); r_esp += 4; return;
}

void f_006b4420(void)
{
    FN_ENTER(0x006b4420);
    /* 006b4420: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4425: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 006b442a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b442c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006b442e: jge 0x6b4432 */ if ((fS==fO)) goto L_006b4432;
L_006b4430:; BB(0x006b4430);
    /* 006b4430: mov eax, ecx */ r_eax = r_ecx;
L_006b4432:; BB(0x006b4432);
    /* 006b4432: mov ecx, 2 */ r_ecx = 0x2u;
    /* 006b4437: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b443a: jle 0x6b443e */ if ((fZ||fS!=fO)) goto L_006b443e;
L_006b443c:; BB(0x006b443c);
    /* 006b443c: mov eax, ecx */ r_eax = r_ecx;
L_006b443e:; BB(0x006b443e);
    /* 006b443e: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b4444: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 006b4447: ret  */ FN_RET(0x006b4420); r_esp += 4; return;
}

void f_006b4448(void)
{
    FN_ENTER(0x006b4448);
    /* 006b4448: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b444e: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6b4453u); f_00718108();
    /* 006b4453: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4454: ret  */ FN_RET(0x006b4448); r_esp += 4; return;
}

void f_006b4458(void)
{
    FN_ENTER(0x006b4458);
    /* 006b4458: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b445e: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x6b4463u); f_007181b8();
    /* 006b4463: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4464: ret  */ FN_RET(0x006b4458); r_esp += 4; return;
}

void f_006b4468(void) /* sub_6B4468 */
{
    FN_ENTER(0x006b4468);
    /* 006b4468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4469: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b446f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4474u); f_0068d5a8();
    /* 006b4474: mov ebx, eax */ r_ebx = r_eax;
    /* 006b4476: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b4479: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b447b: je 0x6b448b */ if (fZ) goto L_006b448b;
L_006b447d:; BB(0x006b447d);
    /* 006b447d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b447f: call 0x6904f4 */ r_esp -= 4; W32(r_esp, 0x6b4484u); f_006904f4();
    /* 006b4484: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b4486: call 0x690514 */ r_esp -= 4; W32(r_esp, 0x6b448bu); f_00690514();
L_006b448b:; BB(0x006b448b);
    /* 006b448b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b448c: ret  */ FN_RET(0x006b4468); r_esp += 4; return;
}

void f_006b4490(void) /* sub_6B4490 */
{
    FN_ENTER(0x006b4490);
    /* 006b4490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4491: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4497: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b449cu); f_0068d5a8();
    /* 006b449c: mov ebx, eax */ r_ebx = r_eax;
    /* 006b449e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b44a1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b44a3: je 0x6b44b3 */ if (fZ) goto L_006b44b3;
L_006b44a5:; BB(0x006b44a5);
    /* 006b44a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b44a7: call 0x690520 */ r_esp -= 4; W32(r_esp, 0x6b44acu); f_00690520();
    /* 006b44ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b44ae: call 0x690504 */ r_esp -= 4; W32(r_esp, 0x6b44b3u); f_00690504();
L_006b44b3:; BB(0x006b44b3);
    /* 006b44b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b44b4: ret  */ FN_RET(0x006b4490); r_esp += 4; return;
}

void f_006b44b8(void)
{
    FN_ENTER(0x006b44b8);
    /* 006b44b8: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b44be: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b44c3: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006b44c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b44cb: je 0x6b44dd */ if (fZ) goto L_006b44dd;
L_006b44cd:; BB(0x006b44cd);
    /* 006b44cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b44cf: jb 0x6b44dd */ if (fC) goto L_006b44dd;
L_006b44d1:; BB(0x006b44d1);
    /* 006b44d1: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b44d7: jae 0x6b44dd */ if (!fC) goto L_006b44dd;
L_006b44d9:; BB(0x006b44d9);
    /* 006b44d9: mov byte ptr [edx + ecx + 0x10], al */ W8((u32)(r_edx+r_ecx+0x10u), (u8)r_eax);
L_006b44dd:; BB(0x006b44dd);
    /* 006b44dd: ret  */ FN_RET(0x006b44b8); r_esp += 4; return;
}

void f_006b44e0(void) /* sub_6B44E0 */
{
    FN_ENTER(0x006b44e0);
    /* 006b44e0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b44e3: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b44e8: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b44ee: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006b44f3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b44f7: mov byte ptr [esp], 0x77 */ W8((u32)(r_esp), 0x77u);
    /* 006b44fb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b44fe: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b4503: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b4508u); f_008003e0();
    /* 006b4508: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b450b: ret  */ FN_RET(0x006b44e0); r_esp += 4; return;
}

void f_006b450c(void) /* sub_6B450C */
{
    FN_ENTER(0x006b450c);
    /* 006b450c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b450f: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b4514: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b451a: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b451d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b4520: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b4523: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4526: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4529: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b452d: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 006b4530: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4533: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4536: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b453a: lea ecx, [eax + 3] */ r_ecx = (u32)(r_eax+0x3u);
    /* 006b453d: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4540: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4543: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b4547: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 006b454a: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b454d: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4550: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b4554: lea eax, [eax + 5] */ r_eax = (u32)(r_eax+0x5u);
    /* 006b4557: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b455a: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b455d: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b4561: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b4564: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006b4568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b4569: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b456a: call 0x4d5d48 */ r_esp -= 4; W32(r_esp, 0x6b456fu); f_004d5d48();
    /* 006b456f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4572: ret  */ FN_RET(0x006b450c); r_esp += 4; return;
}

void f_006b4574(void)
{
    FN_ENTER(0x006b4574);
    /* 006b4574: call 0x6b7290 */ r_esp -= 4; W32(r_esp, 0x6b4579u); f_006b7290();
    /* 006b4579: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b457f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4584u); f_0068d5a8();
    /* 006b4584: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4587: je 0x6b4594 */ if (fZ) goto L_006b4594;
L_006b4589:; BB(0x006b4589);
    /* 006b4589: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b458b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b458c: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x6b4591u); f_004d2fb4();
    /* 006b4591: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006b4594:; BB(0x006b4594);
    /* 006b4594: ret  */ FN_RET(0x006b4574); r_esp += 4; return;
}

void f_006b4598(void)
{
    FN_ENTER(0x006b4598);
    /* 006b4598: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b459e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b45a3u); f_0068d5a8();
    /* 006b45a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b45a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b45a6: je 0x6b45af */ if (fZ) goto L_006b45af;
L_006b45a8:; BB(0x006b45a8);
    /* 006b45a8: mov ecx, eax */ r_ecx = r_eax;
    /* 006b45aa: call 0x6926dc */ r_esp -= 4; W32(r_esp, 0x6b45afu); f_006926dc();
L_006b45af:; BB(0x006b45af);
    /* 006b45af: ret  */ FN_RET(0x006b4598); r_esp += 4; return;
}

void f_006b45b0(void)
{
    FN_ENTER(0x006b45b0);
    /* 006b45b0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b45b6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b45bbu); f_0068d5a8();
    /* 006b45bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b45bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b45be: je 0x6b45c7 */ if (fZ) goto L_006b45c7;
L_006b45c0:; BB(0x006b45c0);
    /* 006b45c0: mov ecx, eax */ r_ecx = r_eax;
    /* 006b45c2: call 0x6926d0 */ r_esp -= 4; W32(r_esp, 0x6b45c7u); f_006926d0();
L_006b45c7:; BB(0x006b45c7);
    /* 006b45c7: ret  */ FN_RET(0x006b45b0); r_esp += 4; return;
}

void f_006b45c8(void) /* sub_6B45C8 */
{
    FN_ENTER(0x006b45c8);
    /* 006b45c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b45c9: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b45cc: movzx esi, byte ptr [esp + 0x1c] */ r_esi = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b45d1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b45d4: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b45d9u); f_005d6a3c();
    /* 006b45d9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b45de: mov edx, dword ptr [eax + esi*4] */ r_edx = R32((u32)(r_eax+r_esi*4));
    /* 006b45e1: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006b45e4: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 006b45e7: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b45ea: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006b45ed: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b45f1: lea edx, [esi + 2] */ r_edx = (u32)(r_esi+0x2u);
    /* 006b45f4: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b45f7: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b45fa: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b45fe: lea edx, [esi + 3] */ r_edx = (u32)(r_esi+0x3u);
    /* 006b4601: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b4604: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b4607: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 006b460b: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 006b460e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b4611: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b4614: lea esi, [esi + 5] */ r_esi = (u32)(r_esi+0x5u);
    /* 006b4617: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b461b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b4621: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 006b4624: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b4628: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b462b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b462c: call 0x6c9294 */ r_esp -= 4; W32(r_esp, 0x6b4631u); f_006c9294();
    /* 006b4631: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4632: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b463a: je 0x6b464d */ if (fZ) goto L_006b464d;
L_006b463c:; BB(0x006b463c);
    /* 006b463c: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 006b4641: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 006b4648: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b464b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b464c: ret  */ FN_RET(0x006b45c8); r_esp += 4; return;
L_006b464d:; BB(0x006b464d);
    /* 006b464d: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 006b4652: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 006b4659: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b465c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b465d: ret  */ FN_RET(0x006b45c8); r_esp += 4; return;
}

void f_006b4660(void)
{
    FN_ENTER(0x006b4660);
    /* 006b4660: call 0x4250d4 */ r_esp -= 4; W32(r_esp, 0x6b4665u); f_004250d4();
    /* 006b4665: ret  */ FN_RET(0x006b4660); r_esp += 4; return;
}

void f_006b4668(void) /* sub_6B4668 */
{
    FN_ENTER(0x006b4668);
    /* 006b4668: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b466b: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4670: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b4676: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006b467a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b467c: mov byte ptr [esp], 0x67 */ W8((u32)(r_esp), 0x67u);
    /* 006b4680: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b4685: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b4689: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006b468e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b4692: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4695: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b469au); f_008003e0();
    /* 006b469a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b469d: ret  */ FN_RET(0x006b4668); r_esp += 4; return;
}

void f_006b46a0(void) /* sub_6B46A0 */
{
    FN_ENTER(0x006b46a0);
    /* 006b46a0: mov dword ptr [0x9c9558], 1 */ W32((u32)(0x9c9558u), 0x1u);
    /* 006b46aa: ret  */ FN_RET(0x006b46a0); r_esp += 4; return;
}

void f_006b46ac(void) /* sub_6B46AC */
{
    FN_ENTER(0x006b46ac);
    /* 006b46ac: mov dword ptr [0x9c9558], 0 */ W32((u32)(0x9c9558u), 0x0u);
    /* 006b46b6: ret  */ FN_RET(0x006b46ac); r_esp += 4; return;
}

void f_006b46b8(void)
{
    FN_ENTER(0x006b46b8);
    /* 006b46b8: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b46bd: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b46c3: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b46c8: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b46cb: ret  */ FN_RET(0x006b46b8); r_esp += 4; return;
}

void f_006b46cc(void)
{
    FN_ENTER(0x006b46cc);
    /* 006b46cc: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b46d1: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b46d7: mov eax, dword ptr [0xa9c4dc] */ r_eax = R32((u32)(0xa9c4dcu));
    /* 006b46dc: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b46df: ret  */ FN_RET(0x006b46cc); r_esp += 4; return;
}

void f_006b46e0(void) /* sub_6B46E0 */
{
    FN_ENTER(0x006b46e0);
    /* 006b46e0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b46e3: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b46e8: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 006b46ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b46ee: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b46f3: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006b46f8: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006b46fd: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b4702: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006b4707: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b470c: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b470f: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 006b4714: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 006b4717: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b471a: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b471d: mov byte ptr [esp + 0xa], cl */ W8((u32)(r_esp+0xau), (u8)r_ecx);
    /* 006b4721: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4724: lea edx, [edx + 2] */ r_edx = (u32)(r_edx+0x2u);
    /* 006b4727: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b472a: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006b472d: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 006b4731: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b4736u); f_008003e0();
    /* 006b4736: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4739: ret  */ FN_RET(0x006b46e0); r_esp += 4; return;
}

void f_006b473c(void)
{
    FN_ENTER(0x006b473c);
    /* 006b473c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b473d: mov ebp, esp */ r_ebp = r_esp;
    /* 006b473f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b4741: push 0x8ebec8 */ { u32 v = 0x8ebec8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b4746: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b474c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b474d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b4754: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b4757: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b475a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b475d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b4760: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b4763: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b4765: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006b476c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b4771u); f_005caba4();
    /* 006b4771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4772: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006b4775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4777: je 0x6b479c */ if (fZ) goto L_006b479c;
L_006b4779:; BB(0x006b4779);
    /* 006b4779: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006b4780: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b4787: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b478d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b4790: call 0x6b0abc */ r_esp -= 4; W32(r_esp, 0x6b4795u); f_006b0abc();
    /* 006b4795: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006b479c:; BB(0x006b479c);
    /* 006b479c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b479f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b47a6: mov esp, ebp */ r_esp = r_ebp;
    /* 006b47a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b47a9: ret  */ FN_RET(0x006b473c); r_esp += 4; return;
}

void f_006b47ac(void)
{
    FN_ENTER(0x006b47ac);
    /* 006b47ac: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b47b1: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 006b47b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b47b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006b47ba: jge 0x6b47be */ if ((fS==fO)) goto L_006b47be;
L_006b47bc:; BB(0x006b47bc);
    /* 006b47bc: mov eax, ecx */ r_eax = r_ecx;
L_006b47be:; BB(0x006b47be);
    /* 006b47be: mov ecx, 3 */ r_ecx = 0x3u;
    /* 006b47c3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b47c6: jle 0x6b47ca */ if ((fZ||fS!=fO)) goto L_006b47ca;
L_006b47c8:; BB(0x006b47c8);
    /* 006b47c8: mov eax, ecx */ r_eax = r_ecx;
L_006b47ca:; BB(0x006b47ca);
    /* 006b47ca: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b47d0: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 006b47d3: ret  */ FN_RET(0x006b47ac); r_esp += 4; return;
}

void f_006b47d4(void)
{
    FN_ENTER(0x006b47d4);
    /* 006b47d4: call 0x691f70 */ r_esp -= 4; W32(r_esp, 0x6b47d9u); f_00691f70();
    /* 006b47d9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b47df: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b47e4: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b47e7: ret  */ FN_RET(0x006b47d4); r_esp += 4; return;
}

void f_006b47e8(void) /* sub_6B47E8 */
{
    FN_ENTER(0x006b47e8);
    /* 006b47e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b47e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b47ea: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b47ed: movzx ebp, byte ptr [esp + 0x24] */ r_ebp = (u32)R8((u32)(r_esp+0x24u));
    /* 006b47f2: movzx edx, byte ptr [esp + 0x28] */ r_edx = (u32)R8((u32)(r_esp+0x28u));
    /* 006b47f7: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b47fc: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b47ff: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4804u); f_0068d5a8();
    /* 006b4804: mov esi, eax */ r_esi = r_eax;
    /* 006b4806: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b4809: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b480b: je 0x6b48a0 */ if (fZ) goto L_006b48a0;
L_006b4811:; BB(0x006b4811);
    /* 006b4811: mov edx, esi */ r_edx = r_esi;
    /* 006b4813: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006b4816: je 0x6b48a0 */ if (fZ) goto L_006b48a0;
L_006b481c:; BB(0x006b481c);
    /* 006b481c: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b4822: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 006b4825: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006b4828: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b482c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b4831: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b4835: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006b4839: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b483d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006b4840: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006b4844: mov dword ptr [ecx + ebp*4], edx */ W32((u32)(r_ecx+r_ebp*4), r_edx);
    /* 006b4847: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 006b484a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006b484d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b4851: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b4856: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b485a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006b485e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b4862: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006b4865: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 006b4868: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b486b: lea ebp, [ebp + 2] */ r_ebp = (u32)(r_ebp+0x2u);
    /* 006b486e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006b4872: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 006b4875: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 006b4878: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006b487b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b487f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b4884: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b4888: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006b488c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b4890: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006b4893: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b4899: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006b489d: mov dword ptr [ecx + ebp*4], esi */ W32((u32)(r_ecx+r_ebp*4), r_esi);
L_006b48a0:; BB(0x006b48a0);
    /* 006b48a0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b48a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b48a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b48a5: ret  */ FN_RET(0x006b47e8); r_esp += 4; return;
}

void f_006b48a8(void) /* sub_6B48A8 */
{
    FN_ENTER(0x006b48a8);
    /* 006b48a8: mov dword ptr [0xaafbd0], 1 */ W32((u32)(0xaafbd0u), 0x1u);
    /* 006b48b2: ret  */ FN_RET(0x006b48a8); r_esp += 4; return;
}

void f_006b48b4(void) /* sub_6B48B4 */
{
    FN_ENTER(0x006b48b4);
    /* 006b48b4: mov dword ptr [0xaafbd0], 0 */ W32((u32)(0xaafbd0u), 0x0u);
    /* 006b48be: ret  */ FN_RET(0x006b48b4); r_esp += 4; return;
}

void f_006b48c0(void) /* sub_6B48C0 */
{
    FN_ENTER(0x006b48c0);
    /* 006b48c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b48c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b48c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b48c3: movzx esi, byte ptr [esp + 0x10] */ r_esi = (u32)R8((u32)(r_esp+0x10u));
    /* 006b48c8: mov ebp, dword ptr [0xa954b0] */ r_ebp = R32((u32)(0xa954b0u));
    /* 006b48ce: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 006b48d1: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b48d4: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 006b48d7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b48da: movsx edx, word ptr [ebp + eax*4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*4));
    /* 006b48df: lea eax, [esi + 3] */ r_eax = (u32)(r_esi+0x3u);
    /* 006b48e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b48e5: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 006b48e8: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b48eb: push dword ptr [ebp + ebx*4] */ { u32 v = R32((u32)(r_ebp+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b48ef: push dword ptr [ebp + eax*4] */ { u32 v = R32((u32)(r_ebp+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b48f3: push dword ptr [ebp + ecx*4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b48f7: push dword ptr [ebp + esi*4] */ { u32 v = R32((u32)(r_ebp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b48fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b48fc: call 0x6ba474 */ r_esp -= 4; W32(r_esp, 0x6b4901u); f_006ba474();
    /* 006b4901: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4904: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b4906: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4907: ret  */ FN_RET(0x006b48c0); r_esp += 4; return;
}

void f_006b4908(void) /* sub_6B4908 */
{
    FN_ENTER(0x006b4908);
    /* 006b4908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4909: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b490a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b490b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b490c: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b4911u); f_006b4948();
    /* 006b4911: movzx edi, al */ r_edi = (u32)(u8)r_eax;
    /* 006b4914: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b4919u); f_006b4948();
    /* 006b4919: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 006b491c: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b4921u); f_006b4948();
    /* 006b4921: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
    /* 006b4924: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b4929u); f_006b4948();
    /* 006b4929: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 006b492c: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b4931u); f_006b4948();
    /* 006b4931: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b4935: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4936: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4937: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b4939: call 0x6ba474 */ r_esp -= 4; W32(r_esp, 0x6b493eu); f_006ba474();
    /* 006b493e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4941: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b4943: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4944: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b4945: ret  */ FN_RET(0x006b4908); r_esp += 4; return;
}

void f_006b4948(void) /* sub_6B4948 */
{
    FN_ENTER(0x006b4948);
    /* 006b4948: mov ecx, dword ptr [0xa954a4] */ r_ecx = R32((u32)(0xa954a4u));
    /* 006b494e: mov eax, dword ptr [0xa954a8] */ r_eax = R32((u32)(0xa954a8u));
    /* 006b4953: movzx eax, byte ptr [ecx + eax] */ r_eax = (u32)R8((u32)(r_ecx+r_eax));
    /* 006b4957: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 006b495a: mov dword ptr [0xa954a4], edx */ W32((u32)(0xa954a4u), r_edx);
    /* 006b4960: ret  */ FN_RET(0x006b4948); r_esp += 4; return;
}

void f_006b4964(void)
{
    FN_ENTER(0x006b4964);
    /* 006b4964: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b496a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b496fu); f_0068d5a8();
    /* 006b496f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4972: je 0x6b497b */ if (fZ) goto L_006b497b;
L_006b4974:; BB(0x006b4974);
    /* 006b4974: mov ecx, eax */ r_ecx = r_eax;
    /* 006b4976: call 0x691a28 */ r_esp -= 4; W32(r_esp, 0x6b497bu); f_00691a28();
L_006b497b:; BB(0x006b497b);
    /* 006b497b: ret  */ FN_RET(0x006b4964); r_esp += 4; return;
}

void f_006b497c(void)
{
    FN_ENTER(0x006b497c);
    /* 006b497c: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4982: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4987u); f_0068d5a8();
    /* 006b4987: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4988: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b498a: je 0x6b4993 */ if (fZ) goto L_006b4993;
L_006b498c:; BB(0x006b498c);
    /* 006b498c: mov ecx, eax */ r_ecx = r_eax;
    /* 006b498e: call 0x691aac */ r_esp -= 4; W32(r_esp, 0x6b4993u); f_00691aac();
L_006b4993:; BB(0x006b4993);
    /* 006b4993: ret  */ FN_RET(0x006b497c); r_esp += 4; return;
}

void f_006b4994(void) /* sub_6B4994 */
{
    FN_ENTER(0x006b4994);
    /* 006b4994: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b4997: mov eax, 0x969740 */ r_eax = 0x969740u;
    /* 006b499c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b499e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006b49a1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b49a4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006b49a7: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b49ab: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b49af: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006b49b2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b49b6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006b49b9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b49bd: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006b49c0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b49c4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006b49c7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b49cb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006b49ce: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006b49d2: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006b49d5: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006b49d9: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006b49dc: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006b49e0: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006b49e3: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006b49e7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006b49ea: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006b49ee: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006b49f1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006b49f5: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006b49f8: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b49fc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006b49ff: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006b4a03: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006b4a06: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006b4a0a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006b4a0d: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 006b4a10: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006b4a14: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006b4a18: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4a1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006b4a1f: jb 0x6b4a26 */ if (fC) goto L_006b4a26;
L_006b4a21:; BB(0x006b4a21);
    /* 006b4a21: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006b4a24: jbe 0x6b4a2a */ if ((fC||fZ)) goto L_006b4a2a;
L_006b4a26:; BB(0x006b4a26);
    /* 006b4a26: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4a29: ret  */ FN_RET(0x006b4994); r_esp += 4; return;
L_006b4a2a:; BB(0x006b4a2a);
    /* 006b4a2a: mov eax, dword ptr [esp + eax*4] */ r_eax = R32((u32)(r_esp+r_eax*4));
    /* 006b4a2d: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 006b4a37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b4a39: mov dword ptr [0xac9d50], eax */ W32((u32)(0xac9d50u), r_eax);
    /* 006b4a3e: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 006b4a44: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 006b4a4a: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 006b4a50: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 006b4a56: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b4a59: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 006b4a5e: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 006b4a63: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 006b4a69: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4a6c: ret  */ FN_RET(0x006b4994); r_esp += 4; return;
}

void f_006b4a70(void)
{
    FN_ENTER(0x006b4a70);
    /* 006b4a70: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4a75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4a77: jb 0x6b4a8b */ if (fC) goto L_006b4a8b;
L_006b4a79:; BB(0x006b4a79);
    /* 006b4a79: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4a7c: ja 0x6b4a8b */ if ((!fC&&!fZ)) goto L_006b4a8b;
L_006b4a7e:; BB(0x006b4a7e);
    /* 006b4a7e: mov eax, dword ptr [eax*4 + 0x969788] */ r_eax = R32((u32)(r_eax*4+0x969788u));
    /* 006b4a85: mov byte ptr [0xa95514], al */ W8((u32)(0xa95514u), (u8)r_eax);
    /* 006b4a8a: ret  */ FN_RET(0x006b4a70); r_esp += 4; return;
L_006b4a8b:; BB(0x006b4a8b);
    /* 006b4a8b: mov byte ptr [0xa95514], 2 */ W8((u32)(0xa95514u), 0x2u);
    /* 006b4a92: ret  */ FN_RET(0x006b4a70); r_esp += 4; return;
}

void f_006b4a94(void)
{
    FN_ENTER(0x006b4a94);
    /* 006b4a94: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4a9b: jb 0x6b4aaf */ if (fC) goto L_006b4aaf;
L_006b4a9d:; BB(0x006b4a9d);
    /* 006b4a9d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4aa0: ja 0x6b4aaf */ if ((!fC&&!fZ)) goto L_006b4aaf;
L_006b4aa2:; BB(0x006b4aa2);
    /* 006b4aa2: mov eax, dword ptr [eax*4 + 0x969794] */ r_eax = R32((u32)(r_eax*4+0x969794u));
    /* 006b4aa9: mov byte ptr [0xa95515], al */ W8((u32)(0xa95515u), (u8)r_eax);
    /* 006b4aae: ret  */ FN_RET(0x006b4a94); r_esp += 4; return;
L_006b4aaf:; BB(0x006b4aaf);
    /* 006b4aaf: mov byte ptr [0xa95515], 2 */ W8((u32)(0xa95515u), 0x2u);
    /* 006b4ab6: ret  */ FN_RET(0x006b4a94); r_esp += 4; return;
}

void f_006b4ab8(void)
{
    FN_ENTER(0x006b4ab8);
    /* 006b4ab8: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4abd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4abf: jb 0x6b4ad3 */ if (fC) goto L_006b4ad3;
L_006b4ac1:; BB(0x006b4ac1);
    /* 006b4ac1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4ac4: ja 0x6b4ad3 */ if ((!fC&&!fZ)) goto L_006b4ad3;
L_006b4ac6:; BB(0x006b4ac6);
    /* 006b4ac6: mov eax, dword ptr [eax*4 + 0x9697a4] */ r_eax = R32((u32)(r_eax*4+0x9697a4u));
    /* 006b4acd: mov byte ptr [0xa95516], al */ W8((u32)(0xa95516u), (u8)r_eax);
    /* 006b4ad2: ret  */ FN_RET(0x006b4ab8); r_esp += 4; return;
L_006b4ad3:; BB(0x006b4ad3);
    /* 006b4ad3: mov byte ptr [0xa95516], 1 */ W8((u32)(0xa95516u), 0x1u);
    /* 006b4ada: ret  */ FN_RET(0x006b4ab8); r_esp += 4; return;
}

void f_006b4adc(void)
{
    FN_ENTER(0x006b4adc);
    /* 006b4adc: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4ae1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4ae3: jb 0x6b4af7 */ if (fC) goto L_006b4af7;
L_006b4ae5:; BB(0x006b4ae5);
    /* 006b4ae5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4ae8: ja 0x6b4af7 */ if ((!fC&&!fZ)) goto L_006b4af7;
L_006b4aea:; BB(0x006b4aea);
    /* 006b4aea: mov eax, dword ptr [eax*4 + 0x9697ac] */ r_eax = R32((u32)(r_eax*4+0x9697acu));
    /* 006b4af1: mov byte ptr [0xa95517], al */ W8((u32)(0xa95517u), (u8)r_eax);
    /* 006b4af6: ret  */ FN_RET(0x006b4adc); r_esp += 4; return;
L_006b4af7:; BB(0x006b4af7);
    /* 006b4af7: mov byte ptr [0xa95517], 2 */ W8((u32)(0xa95517u), 0x2u);
    /* 006b4afe: ret  */ FN_RET(0x006b4adc); r_esp += 4; return;
}

void f_006b4b00(void)
{
    FN_ENTER(0x006b4b00);
    /* 006b4b00: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4b05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4b07: jb 0x6b4b1b */ if (fC) goto L_006b4b1b;
L_006b4b09:; BB(0x006b4b09);
    /* 006b4b09: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4b0c: ja 0x6b4b1b */ if ((!fC&&!fZ)) goto L_006b4b1b;
L_006b4b0e:; BB(0x006b4b0e);
    /* 006b4b0e: mov eax, dword ptr [eax*4 + 0x9697b8] */ r_eax = R32((u32)(r_eax*4+0x9697b8u));
    /* 006b4b15: mov byte ptr [0xa95519], al */ W8((u32)(0xa95519u), (u8)r_eax);
    /* 006b4b1a: ret  */ FN_RET(0x006b4b00); r_esp += 4; return;
L_006b4b1b:; BB(0x006b4b1b);
    /* 006b4b1b: mov byte ptr [0xa95519], 0 */ W8((u32)(0xa95519u), 0x0u);
    /* 006b4b22: ret  */ FN_RET(0x006b4b00); r_esp += 4; return;
}

void f_006b4b24(void)
{
    FN_ENTER(0x006b4b24);
    /* 006b4b24: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4b2b: jb 0x6b4b3f */ if (fC) goto L_006b4b3f;
L_006b4b2d:; BB(0x006b4b2d);
    /* 006b4b2d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4b30: ja 0x6b4b3f */ if ((!fC&&!fZ)) goto L_006b4b3f;
L_006b4b32:; BB(0x006b4b32);
    /* 006b4b32: mov eax, dword ptr [eax*4 + 0x9697c0] */ r_eax = R32((u32)(r_eax*4+0x9697c0u));
    /* 006b4b39: mov byte ptr [0xa9551a], al */ W8((u32)(0xa9551au), (u8)r_eax);
    /* 006b4b3e: ret  */ FN_RET(0x006b4b24); r_esp += 4; return;
L_006b4b3f:; BB(0x006b4b3f);
    /* 006b4b3f: mov byte ptr [0xa9551a], 2 */ W8((u32)(0xa9551au), 0x2u);
    /* 006b4b46: ret  */ FN_RET(0x006b4b24); r_esp += 4; return;
}

void f_006b4b48(void)
{
    FN_ENTER(0x006b4b48);
    /* 006b4b48: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4b4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4b4f: jb 0x6b4b63 */ if (fC) goto L_006b4b63;
L_006b4b51:; BB(0x006b4b51);
    /* 006b4b51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4b54: ja 0x6b4b63 */ if ((!fC&&!fZ)) goto L_006b4b63;
L_006b4b56:; BB(0x006b4b56);
    /* 006b4b56: mov eax, dword ptr [eax*4 + 0x9697cc] */ r_eax = R32((u32)(r_eax*4+0x9697ccu));
    /* 006b4b5d: mov byte ptr [0xa9551b], al */ W8((u32)(0xa9551bu), (u8)r_eax);
    /* 006b4b62: ret  */ FN_RET(0x006b4b48); r_esp += 4; return;
L_006b4b63:; BB(0x006b4b63);
    /* 006b4b63: mov byte ptr [0xa9551b], 1 */ W8((u32)(0xa9551bu), 0x1u);
    /* 006b4b6a: ret  */ FN_RET(0x006b4b48); r_esp += 4; return;
}

void f_006b4b6c(void)
{
    FN_ENTER(0x006b4b6c);
    /* 006b4b6c: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4b71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4b73: jb 0x6b4b87 */ if (fC) goto L_006b4b87;
L_006b4b75:; BB(0x006b4b75);
    /* 006b4b75: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4b78: ja 0x6b4b87 */ if ((!fC&&!fZ)) goto L_006b4b87;
L_006b4b7a:; BB(0x006b4b7a);
    /* 006b4b7a: mov eax, dword ptr [eax*4 + 0x9697d4] */ r_eax = R32((u32)(r_eax*4+0x9697d4u));
    /* 006b4b81: mov byte ptr [0xa9551c], al */ W8((u32)(0xa9551cu), (u8)r_eax);
    /* 006b4b86: ret  */ FN_RET(0x006b4b6c); r_esp += 4; return;
L_006b4b87:; BB(0x006b4b87);
    /* 006b4b87: mov byte ptr [0xa9551c], 1 */ W8((u32)(0xa9551cu), 0x1u);
    /* 006b4b8e: ret  */ FN_RET(0x006b4b6c); r_esp += 4; return;
}

void f_006b4b90(void)
{
    FN_ENTER(0x006b4b90);
    /* 006b4b90: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b4b95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4b97: jb 0x6b4bab */ if (fC) goto L_006b4bab;
L_006b4b99:; BB(0x006b4b99);
    /* 006b4b99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4b9c: ja 0x6b4bab */ if ((!fC&&!fZ)) goto L_006b4bab;
L_006b4b9e:; BB(0x006b4b9e);
    /* 006b4b9e: mov eax, dword ptr [eax*4 + 0x9697dc] */ r_eax = R32((u32)(r_eax*4+0x9697dcu));
    /* 006b4ba5: mov byte ptr [0xa9551d], al */ W8((u32)(0xa9551du), (u8)r_eax);
    /* 006b4baa: ret  */ FN_RET(0x006b4b90); r_esp += 4; return;
L_006b4bab:; BB(0x006b4bab);
    /* 006b4bab: mov byte ptr [0xa9551d], 0 */ W8((u32)(0xa9551du), 0x0u);
    /* 006b4bb2: ret  */ FN_RET(0x006b4b90); r_esp += 4; return;
}

void f_006b4bb4(void)
{
    FN_ENTER(0x006b4bb4);
    /* 006b4bb4: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4bba: push 0xa95514 */ { u32 v = 0xa95514u; r_esp -= 4; W32(r_esp, v); }
    /* 006b4bbf: call 0x6afb20 */ r_esp -= 4; W32(r_esp, 0x6b4bc4u); f_006afb20();
    /* 006b4bc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4bc7: ret  */ FN_RET(0x006b4bb4); r_esp += 4; return;
}

void f_006b4bc8(void)
{
    FN_ENTER(0x006b4bc8);
    /* 006b4bc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4bc9: mov esi, dword ptr [0xa954cc] */ r_esi = R32((u32)(0xa954ccu));
    /* 006b4bcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b4bd1: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x6b4bd6u); f_004da158();
    /* 006b4bd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4bd7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006b4bd9: jb 0x6b4be8 */ if (fC) goto L_006b4be8;
L_006b4bdb:; BB(0x006b4bdb);
    /* 006b4bdb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006b4bdd: jae 0x6b4be8 */ if (!fC) goto L_006b4be8;
L_006b4bdf:; BB(0x006b4bdf);
    /* 006b4bdf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4be0: call 0x4da704 */ r_esp -= 4; W32(r_esp, 0x6b4be5u); f_004da704();
    /* 006b4be5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4be6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4be7: ret  */ FN_RET(0x006b4bc8); r_esp += 4; return;
L_006b4be8:; BB(0x006b4be8);
    /* 006b4be8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b4bea: call 0x4da704 */ r_esp -= 4; W32(r_esp, 0x6b4befu); f_004da704();
    /* 006b4bef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4bf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4bf1: ret  */ FN_RET(0x006b4bc8); r_esp += 4; return;
}

void f_006b4bf4(void) /* sub_6B4BF4 */
{
    FN_ENTER(0x006b4bf4);
    /* 006b4bf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b4bf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4bf6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b4bf9: movzx ebp, byte ptr [esp + 0x20] */ r_ebp = (u32)R8((u32)(r_esp+0x20u));
    /* 006b4bfe: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4c01: lea ebx, [ebp + 3] */ r_ebx = (u32)(r_ebp+0x3u);
    /* 006b4c04: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b4c09u); f_005d6a3c();
    /* 006b4c09: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4c0e: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b4c11: mov edx, dword ptr [eax + ebx*4] */ r_edx = R32((u32)(r_eax+r_ebx*4));
    /* 006b4c14: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006b4c17: lea ecx, [ebp + 4] */ r_ecx = (u32)(r_ebp+0x4u);
    /* 006b4c1a: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4c1d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006b4c20: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b4c24: lea edx, [ebp + 5] */ r_edx = (u32)(r_ebp+0x5u);
    /* 006b4c27: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b4c2a: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b4c2d: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b4c31: lea edx, [ebp + 6] */ r_edx = (u32)(r_ebp+0x6u);
    /* 006b4c34: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b4c37: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b4c3a: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 006b4c3e: lea edx, [ebp + 7] */ r_edx = (u32)(r_ebp+0x7u);
    /* 006b4c41: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b4c44: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b4c47: lea ebp, [ebp + 8] */ r_ebp = (u32)(r_ebp+0x8u);
    /* 006b4c4a: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b4c4e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b4c54: mov eax, dword ptr [eax + ebp*4] */ r_eax = R32((u32)(r_eax+r_ebp*4));
    /* 006b4c57: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b4c5b: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006b4c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b4c63: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6b4c68u); f_005e3aac();
    /* 006b4c68: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4c6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b4c6d: ret  */ FN_RET(0x006b4bf4); r_esp += 4; return;
}

void f_006b4c70(void)
{
    FN_ENTER(0x006b4c70);
    /* 006b4c70: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4c76: call 0x4dabe8 */ r_esp -= 4; W32(r_esp, 0x6b4c7bu); f_004dabe8();
    /* 006b4c7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4c7c: ret  */ FN_RET(0x006b4c70); r_esp += 4; return;
}

void f_006b4c80(void)
{
    FN_ENTER(0x006b4c80);
    /* 006b4c80: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4c86: call 0x4db4e4 */ r_esp -= 4; W32(r_esp, 0x6b4c8bu); f_004db4e4();
    /* 006b4c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4c8c: ret  */ FN_RET(0x006b4c80); r_esp += 4; return;
}

void f_006b4c90(void)
{
    FN_ENTER(0x006b4c90);
    /* 006b4c90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4c91: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4c96: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4c9c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b4c9f: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b4ca2: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4ca5: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4ca8: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b4cab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4cae: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b4cb1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b4cb3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b4cb5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b4cb8: call 0x4db54c */ r_esp -= 4; W32(r_esp, 0x6b4cbdu); f_004db54c();
    /* 006b4cbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4cbe: ret  */ FN_RET(0x006b4c90); r_esp += 4; return;
}

void f_006b4cc0(void)
{
    FN_ENTER(0x006b4cc0);
    /* 006b4cc0: call 0x4db5d0 */ r_esp -= 4; W32(r_esp, 0x6b4cc5u); f_004db5d0();
    /* 006b4cc5: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4ccb: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4cd0: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b4cd3: ret  */ FN_RET(0x006b4cc0); r_esp += 4; return;
}

void f_006b4cd4(void)
{
    FN_ENTER(0x006b4cd4);
    /* 006b4cd4: call 0x4db628 */ r_esp -= 4; W32(r_esp, 0x6b4cd9u); f_004db628();
    /* 006b4cd9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4cdf: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4ce4: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b4ce7: ret  */ FN_RET(0x006b4cd4); r_esp += 4; return;
}

void f_006b4ce8(void)
{
    FN_ENTER(0x006b4ce8);
    /* 006b4ce8: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4ced: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4cf2: movzx ecx, word ptr [eax + edx*4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4));
    /* 006b4cf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4cf7: call 0x4250e0 */ r_esp -= 4; W32(r_esp, 0x6b4cfcu); f_004250e0();
    /* 006b4cfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4cfd: ret  */ FN_RET(0x006b4ce8); r_esp += 4; return;
}

void f_006b4d00(void)
{
    FN_ENTER(0x006b4d00);
    /* 006b4d00: call 0x425100 */ r_esp -= 4; W32(r_esp, 0x6b4d05u); f_00425100();
    /* 006b4d05: ret  */ FN_RET(0x006b4d00); r_esp += 4; return;
}

void f_006b4d08(void)
{
    FN_ENTER(0x006b4d08);
    /* 006b4d08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4d09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b4d0a: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b4d0f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4d14: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4d17: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4d1cu); f_0068d5a8();
    /* 006b4d1c: mov ebp, eax */ r_ebp = r_eax;
    /* 006b4d1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b4d21: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4d23: je 0x6b4d7b */ if (fZ) goto L_006b4d7b;
L_006b4d25:; BB(0x006b4d25);
    /* 006b4d25: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b4d2b: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 006b4d31: cmp edx, dword ptr [ecx + esi*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4d34: jne 0x6b4d7b */ if (!fZ) goto L_006b4d7b;
L_006b4d36:; BB(0x006b4d36);
    /* 006b4d36: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b4d3b: push dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4d3e: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x6b4d43u); f_0080c2a4();
    /* 006b4d43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4d44: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b4d4b: movzx esi, byte ptr [esp + 0x14] */ r_esi = (u32)R8((u32)(r_esp+0x14u));
    /* 006b4d50: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 006b4d55: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4d58: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x6b4d5du); f_00815590();
    /* 006b4d5d: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x6b4d62u); f_007a6114();
    /* 006b4d62: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4d68: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x6b4d6du); f_007b41f4();
    /* 006b4d6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4d6e: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4d74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b4d76: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6b4d7bu); f_00692398();
L_006b4d7b:; BB(0x006b4d7b);
    /* 006b4d7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b4d7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4d7d: ret  */ FN_RET(0x006b4d08); r_esp += 4; return;
}

void f_006b4d80(void)
{
    FN_ENTER(0x006b4d80);
    /* 006b4d80: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4d85: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4d8a: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4d8d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4d92u); f_0068d5a8();
    /* 006b4d92: mov edx, eax */ r_edx = r_eax;
    /* 006b4d94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b4d97: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4d9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4d9e: je 0x6b4db0 */ if (fZ) goto L_006b4db0;
L_006b4da0:; BB(0x006b4da0);
    /* 006b4da0: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4da5: movsx edx, word ptr [edx + 0x11a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x11au));
    /* 006b4dac: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 006b4daf: ret  */ FN_RET(0x006b4d80); r_esp += 4; return;
L_006b4db0:; BB(0x006b4db0);
    /* 006b4db0: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4db5: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b4dbc: ret  */ FN_RET(0x006b4d80); r_esp += 4; return;
}

void f_006b4dc0(void)
{
    FN_ENTER(0x006b4dc0);
    /* 006b4dc0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4dc5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4dca: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4dcd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4dd2u); f_0068d5a8();
    /* 006b4dd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4dd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4dd5: je 0x6b4de0 */ if (fZ) goto L_006b4de0;
L_006b4dd7:; BB(0x006b4dd7);
    /* 006b4dd7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4dd9: mov word ptr [eax + 0x11a], dx */ W16((u32)(r_eax+0x11au), (u16)r_edx);
L_006b4de0:; BB(0x006b4de0);
    /* 006b4de0: ret  */ FN_RET(0x006b4dc0); r_esp += 4; return;
}

void f_006b4de4(void) /* sub_6B4DE4 */
{
    FN_ENTER(0x006b4de4);
    /* 006b4de4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4de5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b4de8: mov ebx, dword ptr [0xa954cc] */ r_ebx = R32((u32)(0xa954ccu));
    /* 006b4dee: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b4df4: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 006b4df8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b4dfd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b4dff: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b4e04: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006b4e09: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b4e0e: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
    /* 006b4e13: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 006b4e18: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 006b4e1d: mov byte ptr [esp + 0xa], bl */ W8((u32)(r_esp+0xau), (u8)r_ebx);
    /* 006b4e21: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4e24: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b4e29u); f_008003e0();
    /* 006b4e29: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4e2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4e2d: ret  */ FN_RET(0x006b4de4); r_esp += 4; return;
}

void f_006b4e30(void) /* sub_6B4E30 */
{
    FN_ENTER(0x006b4e30);
    /* 006b4e30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4e31: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b4e34: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b4e3a: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b4e40: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 006b4e44: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b4e49: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006b4e4b: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b4e50: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 006b4e55: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b4e5a: mov word ptr [esp + 4], bx */ W16((u32)(r_esp+0x4u), (u16)r_ebx);
    /* 006b4e5f: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 006b4e64: mov byte ptr [esp + 0xa], cl */ W8((u32)(r_esp+0xau), (u8)r_ecx);
    /* 006b4e68: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 006b4e6c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b4e6f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b4e74u); f_008003e0();
    /* 006b4e74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4e77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4e78: ret  */ FN_RET(0x006b4e30); r_esp += 4; return;
}

void f_006b4e7c(void)
{
    FN_ENTER(0x006b4e7c);
    /* 006b4e7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4e7d: movzx edi, byte ptr [esp + 8] */ r_edi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4e82: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4e87: movzx edx, word ptr [eax + edi*4] */ r_edx = (u32)R16((u32)(r_eax+r_edi*4));
    /* 006b4e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4e8c: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x6b4e91u); f_00816eec();
    /* 006b4e91: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4e97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4e9a: mov dword ptr [edx + edi*4 + 4], eax */ W32((u32)(r_edx+r_edi*4+0x4u), r_eax);
    /* 006b4e9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4e9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b4ea0: ret  */ FN_RET(0x006b4e7c); r_esp += 4; return;
}

void f_006b4ea4(void)
{
    FN_ENTER(0x006b4ea4);
    /* 006b4ea4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b4ea5: movzx esi, byte ptr [esp + 8] */ r_esi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4eaa: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4eaf: movzx ecx, word ptr [eax + esi*4 + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_esi*4+0x4u));
    /* 006b4eb4: movsx edx, word ptr [eax + esi*4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+r_esi*4));
    /* 006b4eb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4eb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4eba: call 0x816f04 */ r_esp -= 4; W32(r_esp, 0x6b4ebfu); f_00816f04();
    /* 006b4ebf: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4ec5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4ec8: mov dword ptr [edx + esi*4 + 8], eax */ W32((u32)(r_edx+r_esi*4+0x8u), r_eax);
    /* 006b4ecc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4ecf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b4ed0: ret  */ FN_RET(0x006b4ea4); r_esp += 4; return;
}

void f_006b4ed4(void)
{
    FN_ENTER(0x006b4ed4);
    /* 006b4ed4: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4ed9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4ede: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4ee1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4ee6u); f_0068d5a8();
    /* 006b4ee6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4ee9: je 0x6b4f03 */ if (fZ) goto L_006b4f03;
L_006b4eeb:; BB(0x006b4eeb);
    /* 006b4eeb: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006b4ef2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4ef5: je 0x6b4f03 */ if (fZ) goto L_006b4f03;
L_006b4ef7:; BB(0x006b4ef7);
    /* 006b4ef7: add eax, 0x688 */ {  u32 a = r_eax; u32 b = 0x688u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b4efc: mov ecx, eax */ r_ecx = r_eax;
    /* 006b4efe: call 0x6976b8 */ r_esp -= 4; W32(r_esp, 0x6b4f03u); f_006976b8();
L_006b4f03:; BB(0x006b4f03);
    /* 006b4f03: ret  */ FN_RET(0x006b4ed4); r_esp += 4; return;
}

void f_006b4f04(void)
{
    FN_ENTER(0x006b4f04);
    /* 006b4f04: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b4f09: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4f0e: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4f11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4f16u); f_0068d5a8();
    /* 006b4f16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4f17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4f19: je 0x6b4f33 */ if (fZ) goto L_006b4f33;
L_006b4f1b:; BB(0x006b4f1b);
    /* 006b4f1b: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006b4f22: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b4f25: je 0x6b4f33 */ if (fZ) goto L_006b4f33;
L_006b4f27:; BB(0x006b4f27);
    /* 006b4f27: add eax, 0x688 */ {  u32 a = r_eax; u32 b = 0x688u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b4f2c: mov ecx, eax */ r_ecx = r_eax;
    /* 006b4f2e: call 0x697770 */ r_esp -= 4; W32(r_esp, 0x6b4f33u); f_00697770();
L_006b4f33:; BB(0x006b4f33);
    /* 006b4f33: ret  */ FN_RET(0x006b4f04); r_esp += 4; return;
}

void f_006b4f34(void) /* sub_6B4F34 */
{
    FN_ENTER(0x006b4f34);
    /* 006b4f34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4f35: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4f3a: lea ebx, [edx + 1] */ r_ebx = (u32)(r_edx+0x1u);
    /* 006b4f3d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4f42: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4f45: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4f4au); f_0068d5a8();
    /* 006b4f4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4f4d: je 0x6b4fa2 */ if (fZ) goto L_006b4fa2;
L_006b4f4f:; BB(0x006b4f4f);
    /* 006b4f4f: mov edx, eax */ r_edx = r_eax;
    /* 006b4f51: add edx, 0x6a0 */ {  u32 a = r_edx; u32 b = 0x6a0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4f57: je 0x6b4fa2 */ if (fZ) goto L_006b4fa2;
L_006b4f59:; BB(0x006b4f59);
    /* 006b4f59: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4f5f: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b4f62: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b4f65: fadd dword ptr [eax + 0x6a0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6a0u));
    /* 006b4f6b: movzx ebx, byte ptr [esp + 8] */ r_ebx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4f70: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b4f73: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4f76: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4f79: lea ecx, [ebx + 3] */ r_ecx = (u32)(r_ebx+0x3u);
    /* 006b4f7c: fadd dword ptr [eax + 0x6a4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6a4u));
    /* 006b4f82: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4f85: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4f88: fadd dword ptr [eax + 0x6a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6a8u));
    /* 006b4f8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b4f90: fstp dword ptr [eax + 0x6a0] */ W_F32((u32)(r_eax+0x6a0u), ST(0)); FPOP();
    /* 006b4f96: fstp dword ptr [eax + 0x6a4] */ W_F32((u32)(r_eax+0x6a4u), ST(0)); FPOP();
    /* 006b4f9c: fstp dword ptr [eax + 0x6a8] */ W_F32((u32)(r_eax+0x6a8u), ST(0)); FPOP();
L_006b4fa2:; BB(0x006b4fa2);
    /* 006b4fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b4fa3: ret  */ FN_RET(0x006b4f34); r_esp += 4; return;
}

void f_006b4fa4(void) /* sub_6B4FA4 */
{
    FN_ENTER(0x006b4fa4);
    /* 006b4fa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4fa5: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4faa: lea ebx, [edx + 1] */ r_ebx = (u32)(r_edx+0x1u);
    /* 006b4fad: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4fb2: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b4fb5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b4fbau); f_0068d5a8();
    /* 006b4fba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b4fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b4fbd: je 0x6b5012 */ if (fZ) goto L_006b5012;
L_006b4fbf:; BB(0x006b4fbf);
    /* 006b4fbf: mov edx, eax */ r_edx = r_eax;
    /* 006b4fc1: add edx, 0x6ac */ {  u32 a = r_edx; u32 b = 0x6acu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4fc7: je 0x6b5012 */ if (fZ) goto L_006b5012;
L_006b4fc9:; BB(0x006b4fc9);
    /* 006b4fc9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b4fcf: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b4fd2: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b4fd5: fadd dword ptr [eax + 0x6ac] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6acu));
    /* 006b4fdb: movzx ebx, byte ptr [esp + 8] */ r_ebx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b4fe0: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b4fe3: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4fe6: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4fe9: lea ecx, [ebx + 3] */ r_ecx = (u32)(r_ebx+0x3u);
    /* 006b4fec: fadd dword ptr [eax + 0x6b0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6b0u));
    /* 006b4ff2: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4ff5: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b4ff8: fadd dword ptr [eax + 0x6b4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6b4u));
    /* 006b4ffe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b5000: fstp dword ptr [eax + 0x6ac] */ W_F32((u32)(r_eax+0x6acu), ST(0)); FPOP();
    /* 006b5006: fstp dword ptr [eax + 0x6b0] */ W_F32((u32)(r_eax+0x6b0u), ST(0)); FPOP();
    /* 006b500c: fstp dword ptr [eax + 0x6b4] */ W_F32((u32)(r_eax+0x6b4u), ST(0)); FPOP();
L_006b5012:; BB(0x006b5012);
    /* 006b5012: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b5013: ret  */ FN_RET(0x006b4fa4); r_esp += 4; return;
}

