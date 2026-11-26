#include "protos.h"

void f_0082f09c(void) /* sub_82F09C */
{
    FN_ENTER(0x0082f09c);
    /* 0082f09c: mov ecx, edx */ r_ecx = r_edx;
    /* 0082f09e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082f0a2: call 0x82f0ac */ r_esp -= 4; W32(r_esp, 0x82f0a7u); f_0082f0ac();
    /* 0082f0a7: ret 4 */ FN_RET(0x0082f09c); r_esp += 8; return;
}

void f_0082f0ac(void) /* sub_82F0AC */
{
    FN_ENTER(0x0082f0ac);
    /* 0082f0ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0ad: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082f0b0: mov ebx, edx */ r_ebx = r_edx;
    /* 0082f0b2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082f0b4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0082f0b7: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0082f0ba: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0082f0be: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0082f0c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082f0c5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0082f0c9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082f0cc: push 0xacc000 */ { u32 v = 0xacc000u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0d1: push 0xacbf80 */ { u32 v = 0xacbf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0d6: push 0xacbf40 */ { u32 v = 0xacbf40u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0db: push 0xacc0a8 */ { u32 v = 0xacc0a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f0e2: call 0x890fc7 */ r_esp -= 4; W32(r_esp, 0x82f0e7u); f_00890fc7();
    /* 0082f0e7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0082f0eb: fsub dword ptr [0xacc0f0] */ ST(0) = ST(0) - R_F32((u32)(0xacc0f0u));
    /* 0082f0f1: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0082f0f3: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0082f0f7: fsub dword ptr [0xacc0f4] */ ST(0) = ST(0) - R_F32((u32)(0xacc0f4u));
    /* 0082f0fd: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0082f100: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082f103: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082f104: ret  */ FN_RET(0x0082f0ac); r_esp += 4; return;
}

void f_0082f108(void) /* sub_82F108 */
{
    FN_ENTER(0x0082f108);
    /* 0082f108: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f109: mov ebx, esp */ r_ebx = r_esp;
    /* 0082f10b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0082f10e: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082f111: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082f114: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082f117: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f11a: call 0x89241d */ r_esp -= 4; W32(r_esp, 0x82f11fu); f_0089241d();
    /* 0082f11f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0082f122: call 0x82f130 */ r_esp -= 4; W32(r_esp, 0x82f127u); f_0082f130();
    /* 0082f127: mov esp, ebx */ r_esp = r_ebx;
    /* 0082f129: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082f12a: ret 4 */ FN_RET(0x0082f108); r_esp += 8; return;
}

void f_0082f130(void) /* sub_82F130 */
{
    FN_ENTER(0x0082f130);
    /* 0082f130: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0082f132: mov eax, 0xacbf80 */ r_eax = 0xacbf80u;
    /* 0082f137: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082f139: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0082f13c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0082f13f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0082f142: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0082f145: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0082f148: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0082f14b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0082f14e: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0082f151: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0082f154: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0082f157: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0082f15a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0082f15d: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0082f160: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0082f163: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0082f166: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0082f169: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0082f16c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0082f16f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0082f172: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0082f175: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0082f178: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0082f17b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0082f17e: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0082f181: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0082f184: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0082f187: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0082f18a: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0082f18d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0082f190: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0082f193: push 0xacbf80 */ { u32 v = 0xacbf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f198: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082f19d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082f19f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1a2: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x82f1a8u); call_ind(t); }
    /* 0082f1a8: push 0xacbf80 */ { u32 v = 0xacbf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1af: push 0xacbfc0 */ { u32 v = 0xacbfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1b4: call 0x891a42 */ r_esp -= 4; W32(r_esp, 0x82f1b9u); f_00891a42();
    /* 0082f1b9: mov ecx, 0xacbf80 */ r_ecx = 0xacbf80u;
    /* 0082f1be: call 0x837688 */ r_esp -= 4; W32(r_esp, 0x82f1c3u); f_00837688();
    /* 0082f1c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082f1c5: mov edx, 0xacbf80 */ r_edx = 0xacbf80u;
    /* 0082f1ca: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x82f1cfu); f_0083b410();
    /* 0082f1cf: ret  */ FN_RET(0x0082f130); r_esp += 4; return;
}

void f_0082f1d0(void) /* sub_82F1D0 */
{
    FN_ENTER(0x0082f1d0);
    /* 0082f1d0: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082f1d3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082f1d6: push 0xacbfc0 */ { u32 v = 0xacbfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1db: push dword ptr [0xaf0328] */ { u32 v = R32((u32)(0xaf0328u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082f1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1e2: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x82f1e7u); f_00891536();
    /* 0082f1e7: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082f1ed: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082f1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1f1: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082f1f3: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f1f9: call dword ptr [ecx + 0x94] */ { u32 t = R32((u32)(r_ecx+0x94u)); r_esp -= 4; W32(r_esp, 0x82f1ffu); call_ind(t); }
    /* 0082f1ff: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082f202: ret  */ FN_RET(0x0082f1d0); r_esp += 4; return;
}

void f_0082f204(void) /* sub_82F204 */
{
    FN_ENTER(0x0082f204);
    /* 0082f204: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082f206: jne 0x82f20e */ if (!fZ) goto L_0082f20e;
L_0082f208:; BB(0x0082f208);
    /* 0082f208: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
L_0082f20e:; BB(0x0082f20e);
    /* 0082f20e: mov eax, 0xacbfc0 */ r_eax = 0xacbfc0u;
    /* 0082f213: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082f215: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082f217: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0082f21a: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0082f21d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082f220: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0082f223: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0082f226: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0082f229: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0082f22c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0082f22f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0082f232: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0082f235: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0082f238: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0082f23b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0082f23e: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0082f241: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0082f244: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0082f247: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0082f24a: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0082f24d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0082f250: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0082f253: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0082f256: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0082f259: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0082f25c: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0082f25f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0082f262: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0082f265: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0082f268: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0082f26b: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0082f26e: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0082f271: ret  */ FN_RET(0x0082f204); r_esp += 4; return;
}

void f_0082f274(void) /* sub_82F274 */
{
    FN_ENTER(0x0082f274);
    /* 0082f274: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082f276: jne 0x82f27e */ if (!fZ) goto L_0082f27e;
L_0082f278:; BB(0x0082f278);
    /* 0082f278: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
L_0082f27e:; BB(0x0082f27e);
    /* 0082f27e: mov eax, 0xacbf80 */ r_eax = 0xacbf80u;
    /* 0082f283: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082f285: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082f287: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0082f28a: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0082f28d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082f290: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0082f293: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0082f296: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0082f299: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0082f29c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0082f29f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0082f2a2: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0082f2a5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0082f2a8: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0082f2ab: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0082f2ae: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0082f2b1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0082f2b4: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0082f2b7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0082f2ba: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0082f2bd: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0082f2c0: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0082f2c3: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0082f2c6: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0082f2c9: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0082f2cc: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0082f2cf: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0082f2d2: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0082f2d5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0082f2d8: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0082f2db: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0082f2de: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0082f2e1: ret  */ FN_RET(0x0082f274); r_esp += 4; return;
}

void f_0082f2e4(void) /* sub_82F2E4 */
{
    FN_ENTER(0x0082f2e4);
    /* 0082f2e4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082f2e6: mov dword ptr [0xacc0c0], eax */ W32((u32)(0xacc0c0u), r_eax);
    /* 0082f2eb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0082f2ee: mov dword ptr [0xacc0c4], edx */ W32((u32)(0xacc0c4u), r_edx);
    /* 0082f2f4: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0082f2f7: mov dword ptr [0xacc0c8], eax */ W32((u32)(0xacc0c8u), r_eax);
    /* 0082f2fc: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0082f2ff: mov dword ptr [0xacc0cc], eax */ W32((u32)(0xacc0ccu), r_eax);
    /* 0082f304: ret  */ FN_RET(0x0082f2e4); r_esp += 4; return;
}

void f_0082f308(void) /* sub_82F308 */
{
    FN_ENTER(0x0082f308);
    /* 0082f308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082f309: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082f30a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082f30b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f30c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082f30f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0082f311: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0082f314: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0082f317: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082f319: jg 0x82f327 */ if ((!fZ&&fS==fO)) goto L_0082f327;
L_0082f31b:; BB(0x0082f31b);
    /* 0082f31b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082f31d: mov dword ptr [0xacc0a8], edx */ W32((u32)(0xacc0a8u), r_edx);
    /* 0082f323: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082f325: jmp 0x82f339 */ goto L_0082f339;
L_0082f327:; BB(0x0082f327);
    /* 0082f327: mov dword ptr [0xacc0a8], 0 */ W32((u32)(0xacc0a8u), 0x0u);
    /* 0082f331: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 0082f334: sub esi, dword ptr [ebp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0082f337: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0082f339:; BB(0x0082f339);
    /* 0082f339: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0082f33c: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0082f33f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082f341: jg 0x82f356 */ if ((!fZ&&fS==fO)) goto L_0082f356;
L_0082f343:; BB(0x0082f343);
    /* 0082f343: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082f345: mov dword ptr [0xacc0ac], edx */ W32((u32)(0xacc0acu), r_edx);
    /* 0082f34b: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0082f34e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082f350: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0082f354: jmp 0x82f36e */ goto L_0082f36e;
L_0082f356:; BB(0x0082f356);
    /* 0082f356: mov dword ptr [0xacc0ac], 0 */ W32((u32)(0xacc0acu), 0x0u);
    /* 0082f360: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0082f363: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0082f366: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082f368: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082f36a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_0082f36e:; BB(0x0082f36e);
    /* 0082f36e: fld dword ptr [0xacc0c0] */ FPUSH(R_F32((u32)(0xacc0c0u)));
    /* 0082f374: fadd dword ptr [0xacc0c8] */ ST(0) = ST(0) + R_F32((u32)(0xacc0c8u));
    /* 0082f37a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0082f37d: mov eax, edx */ r_eax = r_edx;
    /* 0082f37f: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0082f383: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082f385: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0082f388: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0082f38b: fadd dword ptr [0xacc0c0] */ ST(0) = ST(0) + R_F32((u32)(0xacc0c0u));
    /* 0082f391: mov eax, ebx */ r_eax = r_ebx;
    /* 0082f393: fstp dword ptr [0xacc0f0] */ W_F32((u32)(0xacc0f0u), ST(0)); FPOP();
    /* 0082f399: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082f39b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082f39f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082f3a3: fadd dword ptr [0xacc0c4] */ ST(0) = ST(0) + R_F32((u32)(0xacc0c4u));
    /* 0082f3a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f3ab: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0082f3af: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0082f3b4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082f3b9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082f3bd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0082f3c1: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0082f3c5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082f3c9: fld dword ptr [0xacc0c4] */ FPUSH(R_F32((u32)(0xacc0c4u)));
    /* 0082f3cf: fadd dword ptr [0xacc0cc] */ ST(0) = ST(0) + R_F32((u32)(0xacc0ccu));
    /* 0082f3d5: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082f3d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f3db: fstp dword ptr [0xacc0f4] */ W_F32((u32)(0xacc0f4u), ST(0)); FPOP();
    /* 0082f3e1: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0082f3e4: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0082f3e8: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0082f3ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082f3f2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082f3f6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0082f3fa: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0082f3fe: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082f402: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0082f405: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082f407: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0082f409: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0082f40c: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 0082f40f: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082f411: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0082f413: sub ebp, dword ptr [esp + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0082f417: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0082f419: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0082f41b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0082f41d: jge 0x82f421 */ if ((fS==fO)) goto L_0082f421;
L_0082f41f:; BB(0x0082f41f);
    /* 0082f41f: mov edi, ebx */ r_edi = r_ebx;
L_0082f421:; BB(0x0082f421);
    /* 0082f421: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082f423: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0082f425: jge 0x82f429 */ if ((fS==fO)) goto L_0082f429;
L_0082f427:; BB(0x0082f427);
    /* 0082f427: mov ebp, ecx */ r_ebp = r_ecx;
L_0082f429:; BB(0x0082f429);
    /* 0082f429: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082f42b: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082f42d: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0082f431: mov dword ptr [0xacc0b0], eax */ W32((u32)(0xacc0b0u), r_eax);
    /* 0082f436: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082f438: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082f43c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082f440: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082f442: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f445: fadd dword ptr [eax*4 + 0x98a458] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a458u));
    /* 0082f44c: fdivr dword ptr [0xacc0c8] */ ST(0) = R_F32((u32)(0xacc0c8u)) / ST(0);
    /* 0082f452: fstp dword ptr [0xacc0a0] */ W_F32((u32)(0xacc0a0u), ST(0)); FPOP();
    /* 0082f458: mov dword ptr [0xacc0b4], edx */ W32((u32)(0xacc0b4u), r_edx);
    /* 0082f45e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0082f462: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082f466: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082f469: fadd dword ptr [edx*4 + 0x98a458] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a458u));
    /* 0082f470: fdivr dword ptr [0xacc0cc] */ ST(0) = R_F32((u32)(0xacc0ccu)) / ST(0);
    /* 0082f476: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082f47a: fild dword ptr [edx + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x8u)));
    /* 0082f47d: fild dword ptr [edx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edx+0xcu)));
    /* 0082f480: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0082f483: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082f485: fstp dword ptr [0xacc0a4] */ W_F32((u32)(0xacc0a4u), ST(0)); FPOP();
    /* 0082f48b: push 0xacc0a8 */ { u32 v = 0xacc0a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f490: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f493: fadd dword ptr [eax*4 + 0x98a458] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a458u));
    /* 0082f49a: fdiv dword ptr [0x98a4b8] */ ST(0) = ST(0) / R_F32((u32)(0x98a4b8u));
    /* 0082f4a0: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0082f4a3: fstp dword ptr [0xacc0e8] */ W_F32((u32)(0xacc0e8u), ST(0)); FPOP();
    /* 0082f4a9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f4ac: fadd dword ptr [eax*4 + 0x98a458] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a458u));
    /* 0082f4b3: fdiv dword ptr [0x98a4b4] */ ST(0) = ST(0) / R_F32((u32)(0x98a4b4u));
    /* 0082f4b9: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082f4be: fstp dword ptr [0xacc0ec] */ W_F32((u32)(0xacc0ecu), ST(0)); FPOP();
    /* 0082f4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f4c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082f4c7: call dword ptr [edx + 0xa0] */ { u32 t = R32((u32)(r_edx+0xa0u)); r_esp -= 4; W32(r_esp, 0x82f4cdu); call_ind(t); }
    /* 0082f4cd: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082f4d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082f4d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082f4d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082f4d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082f4d4: ret  */ FN_RET(0x0082f308); r_esp += 4; return;
}

void f_0082f4d8(void) /* sub_82F4D8 */
{
    FN_ENTER(0x0082f4d8);
    /* 0082f4d8: fld dword ptr [0xacc0c8] */ FPUSH(R_F32((u32)(0xacc0c8u)));
    /* 0082f4de: fdiv dword ptr [0x98a4a8] */ ST(0) = ST(0) / R_F32((u32)(0x98a4a8u));
    /* 0082f4e4: fld dword ptr [0xacc0cc] */ FPUSH(R_F32((u32)(0xacc0ccu)));
    /* 0082f4ea: fdiv dword ptr [0x98a4a4] */ ST(0) = ST(0) / R_F32((u32)(0x98a4a4u));
    /* 0082f4f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f4f2: fstp dword ptr [0xacc0e8] */ W_F32((u32)(0xacc0e8u), ST(0)); FPOP();
    /* 0082f4f8: fstp dword ptr [0xacc0ec] */ W_F32((u32)(0xacc0ecu), ST(0)); FPOP();
    /* 0082f4fe: ret  */ FN_RET(0x0082f4d8); r_esp += 4; return;
}

void f_0082f500(void) /* sub_82F500 */
{
    FN_ENTER(0x0082f500);
    /* 0082f500: fild dword ptr [0xacc0d8] */ FPUSH((long double)(i32)R32((u32)(0xacc0d8u)));
    /* 0082f506: fild dword ptr [0xacc0dc] */ FPUSH((long double)(i32)R32((u32)(0xacc0dcu)));
    /* 0082f50c: mov eax, dword ptr [0xacc0d8] */ r_eax = R32((u32)(0xacc0d8u));
    /* 0082f511: mov edx, dword ptr [0xacc0dc] */ r_edx = R32((u32)(0xacc0dcu));
    /* 0082f517: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f51a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f51c: fadd dword ptr [eax*4 + 0x98a450] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a450u));
    /* 0082f523: fdivr dword ptr [0xacc0c8] */ ST(0) = R_F32((u32)(0xacc0c8u)) / ST(0);
    /* 0082f529: fstp dword ptr [0xacc0e8] */ W_F32((u32)(0xacc0e8u), ST(0)); FPOP();
    /* 0082f52f: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0082f532: fadd dword ptr [edx*4 + 0x98a450] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a450u));
    /* 0082f539: fdivr dword ptr [0xacc0cc] */ ST(0) = R_F32((u32)(0xacc0ccu)) / ST(0);
    /* 0082f53f: fstp dword ptr [0xacc0ec] */ W_F32((u32)(0xacc0ecu), ST(0)); FPOP();
    /* 0082f545: ret  */ FN_RET(0x0082f500); r_esp += 4; return;
}

void f_0082f548(void) /* sub_82F548 */
{
    FN_ENTER(0x0082f548);
    /* 0082f548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f549: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082f54c: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0082f550: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082f556: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082f559: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f55a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f55b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082f55d: call dword ptr [ecx + 0xa4] */ { u32 t = R32((u32)(r_ecx+0xa4u)); r_esp -= 4; W32(r_esp, 0x82f563u); call_ind(t); }
    /* 0082f563: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0082f566: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0082f569: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f56c: fadd dword ptr [eax*4 + 0x98a448] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a448u));
    /* 0082f573: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0082f575: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0082f579: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082f57d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082f580: fadd dword ptr [edx*4 + 0x98a448] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a448u));
    /* 0082f587: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0082f58a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082f58e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0082f592: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082f595: fadd dword ptr [ecx*4 + 0x98a448] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a448u));
    /* 0082f59c: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0082f59f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082f5a3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082f5a7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f5aa: fadd dword ptr [eax*4 + 0x98a448] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a448u));
    /* 0082f5b1: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0082f5b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082f5b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082f5b8: ret  */ FN_RET(0x0082f548); r_esp += 4; return;
}

void f_0082f5bc(void) /* sub_82F5BC */
{
    FN_ENTER(0x0082f5bc);
    /* 0082f5bc: push 0xacc000 */ { u32 v = 0xacc000u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f5c1: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082f5c6: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f5cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082f5cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082f5ce: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x82f5d4u); call_ind(t); }
    /* 0082f5d4: ret  */ FN_RET(0x0082f5bc); r_esp += 4; return;
}

void f_0082f5d8(void) /* sub_82F5D8 */
{
    FN_ENTER(0x0082f5d8);
    /* 0082f5d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082f5d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082f5da: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082f5dd: mov ecx, 0x1221 */ r_ecx = 0x1221u;
    /* 0082f5e2: mov dword ptr [0xacc038], 0 */ W32((u32)(0xacc038u), 0x0u);
    /* 0082f5ec: mov dword ptr [0xacc034], 0 */ W32((u32)(0xacc034u), 0x0u);
    /* 0082f5f6: mov dword ptr [0xacc030], 0 */ W32((u32)(0xacc030u), 0x0u);
    /* 0082f600: mov dword ptr [0xacc02c], 0 */ W32((u32)(0xacc02cu), 0x0u);
    /* 0082f60a: mov dword ptr [0xacc024], 0 */ W32((u32)(0xacc024u), 0x0u);
    /* 0082f614: mov dword ptr [0xacc020], 0 */ W32((u32)(0xacc020u), 0x0u);
    /* 0082f61e: mov dword ptr [0xacc01c], 0 */ W32((u32)(0xacc01cu), 0x0u);
    /* 0082f628: mov dword ptr [0xacc018], 0 */ W32((u32)(0xacc018u), 0x0u);
    /* 0082f632: mov dword ptr [0xacc010], 0 */ W32((u32)(0xacc010u), 0x0u);
    /* 0082f63c: mov dword ptr [0xacc00c], 0 */ W32((u32)(0xacc00cu), 0x0u);
    /* 0082f646: mov dword ptr [0xacc008], 0 */ W32((u32)(0xacc008u), 0x0u);
    /* 0082f650: mov dword ptr [0xacc004], 0 */ W32((u32)(0xacc004u), 0x0u);
    /* 0082f65a: mov dword ptr [0xacc03c], 0x3f800000 */ W32((u32)(0xacc03cu), 0x3f800000u);
    /* 0082f664: mov dword ptr [0xacc028], 0x3f800000 */ W32((u32)(0xacc028u), 0x3f800000u);
    /* 0082f66e: mov dword ptr [0xacc014], 0x3f800000 */ W32((u32)(0xacc014u), 0x3f800000u);
    /* 0082f678: mov dword ptr [0xacc000], 0x3f800000 */ W32((u32)(0xacc000u), 0x3f800000u);
    /* 0082f682: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x82f687u); f_0082dcbc();
    /* 0082f687: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0082f68b: mov ecx, 0x1221 */ r_ecx = 0x1221u;
    /* 0082f690: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x82f695u); f_0082ddd8();
    /* 0082f695: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0082f699: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0082f69b: fdiv dword ptr [0x98a49c] */ ST(0) = ST(0) / R_F32((u32)(0x98a49cu));
    /* 0082f6a1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0082f6a4: mov ebp, 0x3f800000 */ r_ebp = 0x3f800000u;
    /* 0082f6a9: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x82f6aeu); f_0084d1fc();
    /* 0082f6ae: fmul qword ptr [0x98a440] */ ST(0) = ST(0) * R_F64((u32)(0x98a440u));
    /* 0082f6b4: fdiv qword ptr [0x98a438] */ ST(0) = ST(0) / R_F64((u32)(0x98a438u));
    /* 0082f6ba: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0082f6be: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0082f6c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082f6c8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0082f6cc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082f6d0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0082f6d4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082f6d8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082f6dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082f6de: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082f6e1: mov dword ptr [esp], 0xacbf40 */ W32((u32)(r_esp), 0xacbf40u);
    /* 0082f6e8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0082f6ec: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0082f6f0: fmul dword ptr [0x98a490] */ ST(0) = ST(0) * R_F32((u32)(0x98a490u));
    /* 0082f6f6: fdiv dword ptr [0x98a48c] */ ST(0) = ST(0) / R_F32((u32)(0x98a48cu));
    /* 0082f6fc: mov dword ptr [esp + 8], 0x3faaaaab */ W32((u32)(r_esp+0x8u), 0x3faaaaabu);
    /* 0082f704: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0082f708: mov dword ptr [esp + 0x10], 0x477fff00 */ W32((u32)(r_esp+0x10u), 0x477fff00u);
    /* 0082f710: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0082f714: call 0x892565 */ r_esp -= 4; W32(r_esp, 0x82f719u); f_00892565();
    /* 0082f719: fld dword ptr [0xacbf54] */ FPUSH(R_F32((u32)(0xacbf54u)));
    /* 0082f71f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0082f723: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082f728: call 0x82edc8 */ r_esp -= 4; W32(r_esp, 0x82f72du); f_0082edc8();
    /* 0082f72d: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 0082f732: mov eax, 0xacbf40 */ r_eax = 0xacbf40u;
    /* 0082f737: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082f739: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0082f73c: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0082f73f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082f741: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0082f744: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 0082f747: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 0082f74a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082f74d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0082f750: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082f753: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0082f756: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0082f759: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0082f75c: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082f75f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0082f762: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0082f765: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0082f768: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0082f76b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0082f76e: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0082f771: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0082f774: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0082f777: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0082f77a: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0082f77d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0082f780: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0082f783: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0082f786: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0082f789: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0082f78c: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0082f78f: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0082f792: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0082f795: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0082f79b: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0082f79f: fmul dword ptr [0x98a488] */ ST(0) = ST(0) * R_F32((u32)(0x98a488u));
    /* 0082f7a5: fst dword ptr [0xacc090] */ W_F32((u32)(0xacc090u), ST(0));
    /* 0082f7ab: fdivr dword ptr [0x98a49c] */ ST(0) = R_F32((u32)(0x98a49cu)) / ST(0);
    /* 0082f7b1: fstp dword ptr [0xacc094] */ W_F32((u32)(0xacc094u), ST(0)); FPOP();
    /* 0082f7b7: mov dword ptr [0xacc080], 0 */ W32((u32)(0xacc080u), 0x0u);
    /* 0082f7c1: mov dword ptr [0xacc084], 0x3f800000 */ W32((u32)(0xacc084u), 0x3f800000u);
    /* 0082f7cb: mov dword ptr [0xacc088], 0x477fff00 */ W32((u32)(0xacc088u), 0x477fff00u);
    /* 0082f7d5: mov dword ptr [0xacc08c], 0x3faaaaab */ W32((u32)(0xacc08cu), 0x3faaaaabu);
    /* 0082f7df: call 0x836100 */ r_esp -= 4; W32(r_esp, 0x82f7e4u); f_00836100();
    /* 0082f7e4: fld dword ptr [0xacc090] */ FPUSH(R_F32((u32)(0xacc090u)));
    /* 0082f7ea: mov eax, dword ptr [0xacc090] */ r_eax = R32((u32)(0xacc090u));
    /* 0082f7ef: fld dword ptr [0x98a49c] */ FPUSH(R_F32((u32)(0x98a49cu)));
    /* 0082f7f5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082f7fb: mov dword ptr [0xaf02d8], eax */ W32((u32)(0xaf02d8u), r_eax);
    /* 0082f800: mov dword ptr [0xaf02dc], 0x3f800000 */ W32((u32)(0xaf02dcu), 0x3f800000u);
    /* 0082f80a: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 0082f810: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082f812: fst dword ptr [0xaf02c0] */ W_F32((u32)(0xaf02c0u), ST(0));
    /* 0082f818: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 0082f81a: fstp dword ptr [0xaf02d0] */ W_F32((u32)(0xaf02d0u), ST(0)); FPOP();
    /* 0082f820: mov dword ptr [0xaf02e0], 0x3f800000 */ W32((u32)(0xaf02e0u), 0x3f800000u);
    /* 0082f82a: fld dword ptr [0xaf02e0] */ FPUSH(R_F32((u32)(0xaf02e0u)));
    /* 0082f830: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082f832: push 0xacc0a8 */ { u32 v = 0xacc0a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0082f837: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f839: fchs  */ ST(0) = -ST(0);
    /* 0082f83b: fst dword ptr [0xaf02c4] */ W_F32((u32)(0xaf02c4u), ST(0));
    /* 0082f841: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0082f843: fstp dword ptr [0xaf02d4] */ W_F32((u32)(0xaf02d4u), ST(0)); FPOP();
    /* 0082f849: mov dword ptr [0xaf02e4], 0x3f400000 */ W32((u32)(0xaf02e4u), 0x3f400000u);
    /* 0082f853: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f854: mov dword ptr [0xaf0300], 0x477fff00 */ W32((u32)(0xaf0300u), 0x477fff00u);
    /* 0082f85e: mov dword ptr [0xaf0304], 0x3f800000 */ W32((u32)(0xaf0304u), 0x3f800000u);
    /* 0082f868: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082f86a: call dword ptr [ecx + 0xa4] */ { u32 t = R32((u32)(r_ecx+0xa4u)); r_esp -= 4; W32(r_esp, 0x82f870u); call_ind(t); }
    /* 0082f870: fild dword ptr [0xacc0a8] */ FPUSH((long double)(i32)R32((u32)(0xacc0a8u)));
    /* 0082f876: fild dword ptr [0xacc0ac] */ FPUSH((long double)(i32)R32((u32)(0xacc0acu)));
    /* 0082f87c: fild dword ptr [0xacc0b0] */ FPUSH((long double)(i32)R32((u32)(0xacc0b0u)));
    /* 0082f882: fild dword ptr [0xacc0b4] */ FPUSH((long double)(i32)R32((u32)(0xacc0b4u)));
    /* 0082f888: mov eax, dword ptr [0xacc0a8] */ r_eax = R32((u32)(0xacc0a8u));
    /* 0082f88d: mov edx, dword ptr [0xacc0ac] */ r_edx = R32((u32)(0xacc0acu));
    /* 0082f893: mov ecx, dword ptr [0xacc0b0] */ r_ecx = R32((u32)(0xacc0b0u));
    /* 0082f899: mov ebp, dword ptr [0xacc0b4] */ r_ebp = R32((u32)(0xacc0b4u));
    /* 0082f89f: mov esi, dword ptr [0xacc0b8] */ r_esi = R32((u32)(0xacc0b8u));
    /* 0082f8a5: mov dword ptr [0xacc0d0], eax */ W32((u32)(0xacc0d0u), r_eax);
    /* 0082f8aa: mov dword ptr [0xacc0f0], 0xbf000000 */ W32((u32)(0xacc0f0u), 0xbf000000u);
    /* 0082f8b4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082f8b7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082f8b9: fadd dword ptr [eax*4 + 0x98a430] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a430u));
    /* 0082f8c0: fstp dword ptr [0xacc0c0] */ W_F32((u32)(0xacc0c0u), ST(0)); FPOP();
    /* 0082f8c6: mov dword ptr [0xacc0d4], edx */ W32((u32)(0xacc0d4u), r_edx);
    /* 0082f8cc: mov dword ptr [0xacc0f4], 0xbf000000 */ W32((u32)(0xacc0f4u), 0xbf000000u);
    /* 0082f8d6: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082f8d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f8db: fadd dword ptr [edx*4 + 0x98a430] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a430u));
    /* 0082f8e2: fstp dword ptr [0xacc0c4] */ W_F32((u32)(0xacc0c4u), ST(0)); FPOP();
    /* 0082f8e8: mov dword ptr [0xacc0d8], ecx */ W32((u32)(0xacc0d8u), r_ecx);
    /* 0082f8ee: mov dword ptr [0xacc0e8], 0x3f800000 */ W32((u32)(0xacc0e8u), 0x3f800000u);
    /* 0082f8f8: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082f8fb: fadd dword ptr [ecx*4 + 0x98a430] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a430u));
    /* 0082f902: fstp dword ptr [0xacc0c8] */ W_F32((u32)(0xacc0c8u), ST(0)); FPOP();
    /* 0082f908: mov dword ptr [0xacc0dc], ebp */ W32((u32)(0xacc0dcu), r_ebp);
    /* 0082f90e: mov dword ptr [0xacc0ec], 0x3f800000 */ W32((u32)(0xacc0ecu), 0x3f800000u);
    /* 0082f918: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0082f91b: fadd dword ptr [ebp*4 + 0x98a430] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98a430u));
    /* 0082f922: fstp dword ptr [0xacc0cc] */ W_F32((u32)(0xacc0ccu), ST(0)); FPOP();
    /* 0082f928: mov dword ptr [0xacc0e0], esi */ W32((u32)(0xacc0e0u), r_esi);
    /* 0082f92e: mov esi, dword ptr [0xacc0bc] */ r_esi = R32((u32)(0xacc0bcu));
    /* 0082f934: mov dword ptr [0xacc0e4], esi */ W32((u32)(0xacc0e4u), r_esi);
    /* 0082f93a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082f93d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082f93e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082f93f: ret  */ FN_RET(0x0082f5d8); r_esp += 4; return;
}

void f_0082f940(void) /* sub_82F940 */
{
    FN_ENTER(0x0082f940);
    /* 0082f940: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082f941: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082f943: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0082f947: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082f94b: je 0x82f9ba */ if (fZ) goto L_0082f9ba;
L_0082f94d:; BB(0x0082f94d);
    /* 0082f94d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082f94f: je 0x82f9b6 */ if (fZ) goto L_0082f9b6;
L_0082f951:; BB(0x0082f951);
    /* 0082f951: jmp 0x82f956 */ goto L_0082f956;
L_0082f953:; BB(0x0082f953);
    /* 0082f953: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
L_0082f956:; BB(0x0082f956);
    /* 0082f956: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0082f958: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0082f95b: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0082f95e: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082f960: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082f962: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 0082f965: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0082f968: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082f96a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f96c: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0082f96f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082f971: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f973: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0082f975: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082f978: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082f97b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082f97d: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 0082f980: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0082f983: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082f985: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f987: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0082f98a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082f98c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f98e: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0082f991: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082f994: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082f997: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082f999: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082f99b: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 0082f99e: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0082f9a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082f9a3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f9a5: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0082f9a8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082f9aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f9ac: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082f9af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082f9b1: jne 0x82f953 */ if (!fZ) goto L_0082f953;
L_0082f9b3:; BB(0x0082f9b3);
    /* 0082f9b3: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
L_0082f9b6:; BB(0x0082f9b6);
    /* 0082f9b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082f9b7: ret 8 */ FN_RET(0x0082f940); r_esp += 12; return;
L_0082f9ba:; BB(0x0082f9ba);
    /* 0082f9ba: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0082f9c0: jmp 0x82f94d */ goto L_0082f94d;
}

void f_0082f9c4(void) /* sub_82F9C4 */
{
    FN_ENTER(0x0082f9c4);
    /* 0082f9c4: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082f9c6: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 0082f9c8: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082f9cb: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082f9ce: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082f9d0: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0082f9d2: fsub dword ptr [edx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4u));
    /* 0082f9d5: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0082f9d8: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 0082f9db: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0082f9de: ret  */ FN_RET(0x0082f9c4); r_esp += 4; return;
}

void f_0082f9e0(void) /* sub_82F9E0 */
{
    FN_ENTER(0x0082f9e0);
    /* 0082f9e0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082f9e2: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0082f9e4: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082f9e7: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0082f9ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f9ec: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082f9ef: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 0082f9f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082f9f4: ret  */ FN_RET(0x0082f9e0); r_esp += 4; return;
}

void f_0082f9f8(void) /* sub_82F9F8 */
{
    FN_ENTER(0x0082f9f8);
    /* 0082f9f8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082f9fc: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x82fa01u); f_0082dc9c();
    /* 0082fa01: fld dword ptr [0x98a510] */ FPUSH(R_F32((u32)(0x98a510u)));
    /* 0082fa07: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0082fa09: ret 4 */ FN_RET(0x0082f9f8); r_esp += 8; return;
}

void f_0082fa0c(void) /* sub_82FA0C */
{
    FN_ENTER(0x0082fa0c);
    /* 0082fa0c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082fa10: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0082fa14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082fa16: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0082fa1a: je 0x82fa91 */ if (fZ) goto L_0082fa91;
L_0082fa1c:; BB(0x0082fa1c);
    /* 0082fa1c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082fa1e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082fa20: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082fa23: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082fa26: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0082fa29: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0082fa2c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082fa2e: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0082fa30: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082fa32: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0082fa34: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0082fa36: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082fa38: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0082fa3b: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082fa3d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082fa3f: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082fa41: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082fa43: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0082fa45: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0082fa48: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082fa4a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082fa4c: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0082fa4f: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0082fa51: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0082fa54: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082fa56: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0082fa59: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 0082fa5c: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0082fa5f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082fa61: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0082fa64: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0082fa67: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082fa69: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0082fa6c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082fa6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082fa70: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0082fa73: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 0082fa76: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0082fa79: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082fa7b: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0082fa7e: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0082fa81: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082fa83: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0082fa86: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0082fa89: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082fa8b: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 0082fa8e: ret 0xc */ FN_RET(0x0082fa0c); r_esp += 16; return;
L_0082fa91:; BB(0x0082fa91);
    /* 0082fa91: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0082fa97: jmp 0x82fa1c */ goto L_0082fa1c;
}

void f_0082fa9c(void) /* sub_82FA9C */
{
    FN_ENTER(0x0082fa9c);
    /* 0082fa9c: mov eax, dword ptr [0xae6dc8] */ r_eax = R32((u32)(0xae6dc8u));
    /* 0082faa1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082faa4: mov dword ptr [0xae6dc8], eax */ W32((u32)(0xae6dc8u), r_eax);
    /* 0082faa9: ret  */ FN_RET(0x0082fa9c); r_esp += 4; return;
}

void f_0082faac(void) /* sub_82FAAC */
{
    FN_ENTER(0x0082faac);
    /* 0082faac: mov eax, dword ptr [0xae6dc8] */ r_eax = R32((u32)(0xae6dc8u));
    /* 0082fab1: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082fab4: mov dword ptr [0xae6dc8], eax */ W32((u32)(0xae6dc8u), r_eax);
    /* 0082fab9: ret  */ FN_RET(0x0082faac); r_esp += 4; return;
}

void f_0082fabc(void) /* sub_82FABC */
{
    FN_ENTER(0x0082fabc);
    /* 0082fabc: mov dword ptr [0xae6dc4], ecx */ W32((u32)(0xae6dc4u), r_ecx);
    /* 0082fac2: ret  */ FN_RET(0x0082fabc); r_esp += 4; return;
}

void f_0082fac4(void) /* sub_82FAC4 */
{
    FN_ENTER(0x0082fac4);
    /* 0082fac4: mov dword ptr [0xae6dc0], ecx */ W32((u32)(0xae6dc0u), r_ecx);
    /* 0082faca: ret  */ FN_RET(0x0082fac4); r_esp += 4; return;
}

void f_0082facc(void) /* sub_82FACC */
{
    FN_ENTER(0x0082facc);
    /* 0082facc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082facd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082face: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082facf: mov edi, edx */ r_edi = r_edx;
    /* 0082fad1: mov esi, ecx */ r_esi = r_ecx;
    /* 0082fad3: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0082fad7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fad9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fadb: je 0x82fb60 */ if (fZ) goto L_0082fb60;
L_0082fae1:; BB(0x0082fae1);
    /* 0082fae1: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082fae4: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0082fae6: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082fae9: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0082faec: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0082faef: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0082faf2: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0082faf5: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0082faf8: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 0082fafb: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 0082fafe: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0082fb01: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0082fb04: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0082fb06: test ebp, 0x400 */ {  u32 a = r_ebp; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082fb0c: je 0x82fb33 */ if (fZ) goto L_0082fb33;
L_0082fb0e:; BB(0x0082fb0e);
    /* 0082fb0e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0082fb12: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0082fb15: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0082fb17: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 0082fb1a: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0082fb1d: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 0082fb20: mov dword ptr [edi + 8], ebp */ W32((u32)(r_edi+0x8u), r_ebp);
    /* 0082fb23: mov esi, dword ptr [esi + 0x1c] */ r_esi = R32((u32)(r_esi+0x1cu));
    /* 0082fb26: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 0082fb29: mov edi, 2 */ r_edi = 0x2u;
    /* 0082fb2e: jmp 0x82fc21 */ goto L_0082fc21;
L_0082fb33:; BB(0x0082fb33);
    /* 0082fb33: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0082fb37: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0082fb3a: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0082fb3c: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0082fb3f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0082fb42: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 0082fb45: mov dword ptr [edi + 8], ebp */ W32((u32)(r_edi+0x8u), r_ebp);
    /* 0082fb48: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0082fb4a: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082fb4d: je 0x82fb59 */ if (fZ) goto L_0082fb59;
L_0082fb4f:; BB(0x0082fb4f);
    /* 0082fb4f: mov edi, 1 */ r_edi = 0x1u;
    /* 0082fb54: jmp 0x82fc21 */ goto L_0082fc21;
L_0082fb59:; BB(0x0082fb59);
    /* 0082fb59: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082fb5b: jmp 0x82fc21 */ goto L_0082fc21;
L_0082fb60:; BB(0x0082fb60);
    /* 0082fb60: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 0082fb65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082fb66: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x82fb69u); call_ind(t); }
    /* 0082fb69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082fb6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fb6c: jne 0x82fb7f */ if (!fZ) goto L_0082fb7f;
L_0082fb6e:; BB(0x0082fb6e);
    /* 0082fb6e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082fb71: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0082fb73: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082fb76: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0082fb79: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0082fb7c: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
L_0082fb7f:; BB(0x0082fb7f);
    /* 0082fb7f: mov edi, dword ptr [0xaeb520] */ r_edi = R32((u32)(0xaeb520u));
    /* 0082fb85: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0082fb88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fb8a: je 0x82fc29 */ if (fZ) goto L_0082fc29;
L_0082fb90:; BB(0x0082fb90);
    /* 0082fb90: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0082fb94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082fb95: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x82fb97u); call_ind(t); }
    /* 0082fb97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082fb98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fb9a: je 0x82fbad */ if (fZ) goto L_0082fbad;
L_0082fb9c:; BB(0x0082fb9c);
    /* 0082fb9c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fb9e: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fba0: je 0x82fba9 */ if (fZ) goto L_0082fba9;
L_0082fba2:; BB(0x0082fba2);
    /* 0082fba2: mov edi, 1 */ r_edi = 0x1u;
    /* 0082fba7: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fba9:; BB(0x0082fba9);
    /* 0082fba9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0082fbab: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fbad:; BB(0x0082fbad);
    /* 0082fbad: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fbaf: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fbb4: je 0x82fbd8 */ if (fZ) goto L_0082fbd8;
L_0082fbb6:; BB(0x0082fbb6);
    /* 0082fbb6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082fbba: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0082fbbd: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082fbbf: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0082fbc2: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0082fbc5: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0082fbc8: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0082fbcb: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0082fbce: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0082fbd1: mov edi, 2 */ r_edi = 0x2u;
    /* 0082fbd6: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fbd8:; BB(0x0082fbd8);
    /* 0082fbd8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0082fbdc: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0082fbdf: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0082fbe1: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0082fbe4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0082fbe7: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 0082fbea: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0082fbed: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fbef: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fbf1: je 0x82fbfa */ if (fZ) goto L_0082fbfa;
L_0082fbf3:; BB(0x0082fbf3);
    /* 0082fbf3: mov edi, 1 */ r_edi = 0x1u;
    /* 0082fbf8: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fbfa:; BB(0x0082fbfa);
    /* 0082fbfa: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0082fbfc:; BB(0x0082fbfc);
    /* 0082fbfc: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 0082fc01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082fc02: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x82fc05u); call_ind(t); }
    /* 0082fc05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082fc06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fc08: jne 0x82fc1c */ if (!fZ) goto L_0082fc1c;
L_0082fc0a:; BB(0x0082fc0a);
    /* 0082fc0a: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0082fc0d: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0082fc10: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0082fc13: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0082fc16: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0082fc19: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0082fc1c:; BB(0x0082fc1c);
    /* 0082fc1c: call 0x82fc94 */ r_esp -= 4; W32(r_esp, 0x82fc21u); f_0082fc94();
L_0082fc21:; BB(0x0082fc21);
    /* 0082fc21: mov eax, edi */ r_eax = r_edi;
    /* 0082fc23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082fc24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082fc25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082fc26: ret 0xc */ FN_RET(0x0082facc); r_esp += 16; return;
L_0082fc29:; BB(0x0082fc29);
    /* 0082fc29: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082fc2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082fc2e: call dword ptr [edi + 0x3c] */ { u32 t = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, 0x82fc31u); call_ind(t); }
    /* 0082fc31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082fc32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fc34: je 0x82fc3d */ if (fZ) goto L_0082fc3d;
L_0082fc36:; BB(0x0082fc36);
    /* 0082fc36: mov edi, 2 */ r_edi = 0x2u;
    /* 0082fc3b: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fc3d:; BB(0x0082fc3d);
    /* 0082fc3d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fc3f: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fc44: je 0x82fc68 */ if (fZ) goto L_0082fc68;
L_0082fc46:; BB(0x0082fc46);
    /* 0082fc46: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082fc4a: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0082fc4d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082fc4f: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0082fc52: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0082fc55: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0082fc58: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0082fc5b: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0082fc5e: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0082fc61: mov edi, 2 */ r_edi = 0x2u;
    /* 0082fc66: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fc68:; BB(0x0082fc68);
    /* 0082fc68: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0082fc6c: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0082fc6f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0082fc71: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0082fc74: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0082fc77: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 0082fc7a: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0082fc7d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fc7f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fc81: je 0x82fc8d */ if (fZ) goto L_0082fc8d;
L_0082fc83:; BB(0x0082fc83);
    /* 0082fc83: mov edi, 1 */ r_edi = 0x1u;
    /* 0082fc88: jmp 0x82fbfc */ goto L_0082fbfc;
L_0082fc8d:; BB(0x0082fc8d);
    /* 0082fc8d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0082fc8f: jmp 0x82fbfc */ goto L_0082fbfc;
}

void f_0082fc94(void) /* sub_82FC94 */
{
    FN_ENTER(0x0082fc94);
    /* 0082fc94: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 0082fc9a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0082fc9d: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082fc9f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0082fca1: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 0082fca7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0082fcaa: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0082fcb1: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0082fcb4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082fcb6: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082fcb9: ret  */ FN_RET(0x0082fc94); r_esp += 4; return;
}

void f_0082fcbc(void) /* sub_82FCBC */
{
    FN_ENTER(0x0082fcbc);
    /* 0082fcbc: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082fcbf: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0082fcc3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082fcc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082fcc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082fcc8: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0082fccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082fccd: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0082fcd1: call 0x82fcf4 */ r_esp -= 4; W32(r_esp, 0x82fcd6u); f_0082fcf4();
    /* 0082fcd6: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0082fcda: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x82fcdfu); f_0082d838();
    /* 0082fcdf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0082fce2: call 0x8431a4 */ r_esp -= 4; W32(r_esp, 0x82fce7u); f_008431a4();
    /* 0082fce7: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0082fceb: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x82fcf0u); f_00831290();
    /* 0082fcf0: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082fcf3: ret  */ FN_RET(0x0082fcbc); r_esp += 4; return;
}

void f_0082fcf4(void) /* sub_82FCF4 */
{
    FN_ENTER(0x0082fcf4);
    /* 0082fcf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082fcf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082fcf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082fcf7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082fcf8: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082fcfe: mov edi, edx */ r_edi = r_edx;
    /* 0082fd00: mov esi, ecx */ r_esi = r_ecx;
    /* 0082fd02: fld dword ptr [0xaeb524] */ FPUSH(R_F32((u32)(0xaeb524u)));
    /* 0082fd08: mov eax, dword ptr [0xaeb524] */ r_eax = R32((u32)(0xaeb524u));
    /* 0082fd0d: fld dword ptr [0x98a520] */ FPUSH(R_F32((u32)(0x98a520u)));
    /* 0082fd13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082fd15: fst dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0));
    /* 0082fd1c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0082fd1e: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0082fd25: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0082fd29: mov dword ptr [0xaeb520], 0xaeb4e0 */ W32((u32)(0xaeb520u), 0xaeb4e0u);
    /* 0082fd33: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fd35: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fd37: je 0x82fdde */ if (fZ) goto L_0082fdde;
L_0082fd3d:; BB(0x0082fd3d);
    /* 0082fd3d: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 0082fd41: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082fd44: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082fd48: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0082fd4b: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 0082fd4e: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0082fd51: mov dword ptr [esp + 0x84], ebp */ W32((u32)(r_esp+0x84u), r_ebp);
    /* 0082fd58: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 0082fd5c: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 0082fd60: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082fd62: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0082fd65: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082fd69: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 0082fd6d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0082fd70: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 0082fd74: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082fd76: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 0082fd7a: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0082fd7d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 0082fd81: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082fd83: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fd85: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fd8a: je 0x82fdb2 */ if (fZ) goto L_0082fdb2;
L_0082fd8c:; BB(0x0082fd8c);
    /* 0082fd8c: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0082fd8f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0082fd93: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0082fd96: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0082fd9a: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 0082fd9d: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0082fda1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0082fda4: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0082fda9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0082fdad: jmp 0x82fef1 */ goto L_0082fef1;
L_0082fdb2:; BB(0x0082fdb2);
    /* 0082fdb2: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0082fdb5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0082fdb9: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 0082fdbc: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0082fdc0: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 0082fdc3: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0082fdc7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fdc9: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fdcb: je 0x82fdd7 */ if (fZ) goto L_0082fdd7;
L_0082fdcd:; BB(0x0082fdcd);
    /* 0082fdcd: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0082fdd2: jmp 0x82fef1 */ goto L_0082fef1;
L_0082fdd7:; BB(0x0082fdd7);
    /* 0082fdd7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0082fdd9: jmp 0x82fef1 */ goto L_0082fef1;
L_0082fdde:; BB(0x0082fdde);
    /* 0082fdde: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0082fde2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082fde3: call dword ptr [0xaeb510] */ { u32 t = R32((u32)(0xaeb510u)); r_esp -= 4; W32(r_esp, 0x82fde9u); call_ind(t); }
    /* 0082fde9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082fdea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fdec: jne 0x82fe15 */ if (!fZ) goto L_0082fe15;
L_0082fdee:; BB(0x0082fdee);
    /* 0082fdee: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 0082fdf2: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082fdf5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082fdf9: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0082fdfc: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 0082fdff: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0082fe02: mov dword ptr [esp + 0x84], ebp */ W32((u32)(r_esp+0x84u), r_ebp);
    /* 0082fe09: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 0082fe0d: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 0082fe11: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082fe13: jmp 0x82fe28 */ goto L_0082fe28;
L_0082fe15:; BB(0x0082fe15);
    /* 0082fe15: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0082fe19: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0082fe20: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 0082fe24: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
L_0082fe28:; BB(0x0082fe28);
    /* 0082fe28: mov ebp, dword ptr [0xaeb520] */ r_ebp = R32((u32)(0xaeb520u));
    /* 0082fe2e: mov ebx, dword ptr [ebp + 0x34] */ r_ebx = R32((u32)(r_ebp+0x34u));
    /* 0082fe31: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fe33: je 0x830251 */ if (fZ) goto L_00830251;
L_0082fe39:; BB(0x0082fe39);
    /* 0082fe39: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0082fe3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082fe3e: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x82fe40u); call_ind(t); }
    /* 0082fe40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082fe41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fe43: je 0x82fe56 */ if (fZ) goto L_0082fe56;
L_0082fe45:; BB(0x0082fe45);
    /* 0082fe45: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fe47: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fe49: je 0x82fe52 */ if (fZ) goto L_0082fe52;
L_0082fe4b:; BB(0x0082fe4b);
    /* 0082fe4b: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0082fe50: jmp 0x82fea6 */ goto L_0082fea6;
L_0082fe52:; BB(0x0082fe52);
    /* 0082fe52: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0082fe54: jmp 0x82fea6 */ goto L_0082fea6;
L_0082fe56:; BB(0x0082fe56);
    /* 0082fe56: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fe58: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fe5d: je 0x82fe82 */ if (fZ) goto L_0082fe82;
L_0082fe5f:; BB(0x0082fe5f);
    /* 0082fe5f: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0082fe62: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0082fe66: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0082fe69: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0082fe6d: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 0082fe70: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0082fe74: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0082fe77: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0082fe7c: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0082fe80: jmp 0x82fea6 */ goto L_0082fea6;
L_0082fe82:; BB(0x0082fe82);
    /* 0082fe82: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0082fe85: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0082fe89: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 0082fe8c: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0082fe90: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 0082fe93: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0082fe97: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fe99: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082fe9b: je 0x82fea4 */ if (fZ) goto L_0082fea4;
L_0082fe9d:; BB(0x0082fe9d);
    /* 0082fe9d: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0082fea2: jmp 0x82fea6 */ goto L_0082fea6;
L_0082fea4:; BB(0x0082fea4);
    /* 0082fea4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0082fea6:; BB(0x0082fea6);
    /* 0082fea6: mov ebx, dword ptr [0xaeb520] */ r_ebx = R32((u32)(0xaeb520u));
    /* 0082feac: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0082feb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082feb1: call dword ptr [ebx + 0x38] */ { u32 t = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, 0x82feb4u); call_ind(t); }
    /* 0082feb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082feb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082feb7: jne 0x82fedc */ if (!fZ) goto L_0082fedc;
L_0082feb9:; BB(0x0082feb9);
    /* 0082feb9: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0082febc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082fec0: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0082fec4: mov ebx, dword ptr [esi + 0x24] */ r_ebx = R32((u32)(r_esi+0x24u));
    /* 0082fec7: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0082fec9: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0082fecd: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 0082fed1: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0082fed4: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 0082fed8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082feda: jmp 0x82feec */ goto L_0082feec;
L_0082fedc:; BB(0x0082fedc);
    /* 0082fedc: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0082fee0: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0082fee4: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 0082fee8: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
L_0082feec:; BB(0x0082feec);
    /* 0082feec: call 0x82fc94 */ r_esp -= 4; W32(r_esp, 0x82fef1u); f_0082fc94();
L_0082fef1:; BB(0x0082fef1);
    /* 0082fef1: mov dword ptr [0xaeb520], 0xaeb4a0 */ W32((u32)(0xaeb520u), 0xaeb4a0u);
    /* 0082fefb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082fefd: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082feff: je 0x82ffa8 */ if (fZ) goto L_0082ffa8;
L_0082ff05:; BB(0x0082ff05);
    /* 0082ff05: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082ff08: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0082ff0c: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0082ff10: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0082ff13: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0082ff15: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0082ff19: lea ebx, [esp + 0x48] */ r_ebx = (u32)(r_esp+0x48u);
    /* 0082ff1d: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0082ff20: mov dword ptr [esp + 0x7c], ebx */ W32((u32)(r_esp+0x7cu), r_ebx);
    /* 0082ff24: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082ff26: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0082ff29: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0082ff2c: lea ebx, [esp + 4] */ r_ebx = (u32)(r_esp+0x4u);
    /* 0082ff30: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0082ff33: mov dword ptr [esp + 0x80], ebx */ W32((u32)(r_esp+0x80u), r_ebx);
    /* 0082ff3a: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082ff3c: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 0082ff40: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0082ff43: mov dword ptr [esp + 0x88], ebx */ W32((u32)(r_esp+0x88u), r_ebx);
    /* 0082ff4a: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082ff4c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0082ff4e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ff53: je 0x82ff7b */ if (fZ) goto L_0082ff7b;
L_0082ff55:; BB(0x0082ff55);
    /* 0082ff55: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0082ff58: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0082ff5c: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0082ff5f: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 0082ff63: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0082ff66: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0082ff6a: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0082ff6d: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0082ff72: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0082ff76: jmp 0x8300be */ goto L_008300be;
L_0082ff7b:; BB(0x0082ff7b);
    /* 0082ff7b: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0082ff7e: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0082ff82: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 0082ff85: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0082ff89: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0082ff8c: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0082ff90: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0082ff92: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082ff95: je 0x82ffa1 */ if (fZ) goto L_0082ffa1;
L_0082ff97:; BB(0x0082ff97);
    /* 0082ff97: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0082ff9c: jmp 0x8300be */ goto L_008300be;
L_0082ffa1:; BB(0x0082ffa1);
    /* 0082ffa1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0082ffa3: jmp 0x8300be */ goto L_008300be;
L_0082ffa8:; BB(0x0082ffa8);
    /* 0082ffa8: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0082ffac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ffad: call dword ptr [0xaeb4d0] */ { u32 t = R32((u32)(0xaeb4d0u)); r_esp -= 4; W32(r_esp, 0x82ffb3u); call_ind(t); }
    /* 0082ffb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082ffb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ffb6: jne 0x82ffdb */ if (!fZ) goto L_0082ffdb;
L_0082ffb8:; BB(0x0082ffb8);
    /* 0082ffb8: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082ffbb: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0082ffbf: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0082ffc3: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0082ffc6: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0082ffc8: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0082ffcc: lea ebx, [esp + 0x48] */ r_ebx = (u32)(r_esp+0x48u);
    /* 0082ffd0: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0082ffd3: mov dword ptr [esp + 0x7c], ebx */ W32((u32)(r_esp+0x7cu), r_ebx);
    /* 0082ffd7: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0082ffd9: jmp 0x82ffeb */ goto L_0082ffeb;
L_0082ffdb:; BB(0x0082ffdb);
    /* 0082ffdb: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0082ffdf: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0082ffe3: lea ebx, [esp + 0x48] */ r_ebx = (u32)(r_esp+0x48u);
    /* 0082ffe7: mov dword ptr [esp + 0x7c], ebx */ W32((u32)(r_esp+0x7cu), r_ebx);
L_0082ffeb:; BB(0x0082ffeb);
    /* 0082ffeb: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 0082fff1: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 0082fff4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082fff6: je 0x8301df */ if (fZ) goto L_008301df;
L_0082fffc:; BB(0x0082fffc);
    /* 0082fffc: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 00830000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830001: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x830003u); call_ind(t); }
    /* 00830003: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830006: je 0x830019 */ if (fZ) goto L_00830019;
L_00830008:; BB(0x00830008);
    /* 00830008: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0083000a: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083000c: je 0x830015 */ if (fZ) goto L_00830015;
L_0083000e:; BB(0x0083000e);
    /* 0083000e: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00830013: jmp 0x830069 */ goto L_00830069;
L_00830015:; BB(0x00830015);
    /* 00830015: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00830017: jmp 0x830069 */ goto L_00830069;
L_00830019:; BB(0x00830019);
    /* 00830019: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0083001b: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830020: je 0x830045 */ if (fZ) goto L_00830045;
L_00830022:; BB(0x00830022);
    /* 00830022: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00830025: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00830029: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0083002c: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 00830030: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00830033: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00830037: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0083003a: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0083003f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00830043: jmp 0x830069 */ goto L_00830069;
L_00830045:; BB(0x00830045);
    /* 00830045: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00830048: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0083004c: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 0083004f: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 00830053: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00830056: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0083005a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0083005c: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083005e: je 0x830067 */ if (fZ) goto L_00830067;
L_00830060:; BB(0x00830060);
    /* 00830060: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00830065: jmp 0x830069 */ goto L_00830069;
L_00830067:; BB(0x00830067);
    /* 00830067: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00830069:; BB(0x00830069);
    /* 00830069: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 0083006f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00830072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830073: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x830076u); call_ind(t); }
    /* 00830076: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830077: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830079: jne 0x8300a3 */ if (!fZ) goto L_008300a3;
L_0083007b:; BB(0x0083007b);
    /* 0083007b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0083007f: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00830082: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00830085: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00830088: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0083008a: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 0083008d: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00830094: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00830098: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0083009f: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008300a1: jmp 0x8300b9 */ goto L_008300b9;
L_008300a3:; BB(0x008300a3);
    /* 008300a3: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 008300a7: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 008300ae: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 008300b2: mov dword ptr [esp + 0x88], ecx */ W32((u32)(r_esp+0x88u), r_ecx);
L_008300b9:; BB(0x008300b9);
    /* 008300b9: call 0x82fc94 */ r_esp -= 4; W32(r_esp, 0x8300beu); f_0082fc94();
L_008300be:; BB(0x008300be);
    /* 008300be: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300c1: je 0x8300ed */ if (fZ) goto L_008300ed;
L_008300c3:; BB(0x008300c3);
    /* 008300c3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300c5: jne 0x8300db */ if (!fZ) goto L_008300db;
L_008300c7:; BB(0x008300c7);
    /* 008300c7: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 008300cb: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008300cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008300d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008300d1: call 0x846fac */ r_esp -= 4; W32(r_esp, 0x8300d6u); f_00846fac();
    /* 008300d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008300d9: jmp 0x8300ed */ goto L_008300ed;
L_008300db:; BB(0x008300db);
    /* 008300db: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 008300df: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008300e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008300e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008300e5: call 0x847074 */ r_esp -= 4; W32(r_esp, 0x8300eau); f_00847074();
    /* 008300ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008300ed:; BB(0x008300ed);
    /* 008300ed: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300f0: je 0x83011c */ if (fZ) goto L_0083011c;
L_008300f2:; BB(0x008300f2);
    /* 008300f2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300f4: jne 0x83010a */ if (!fZ) goto L_0083010a;
L_008300f6:; BB(0x008300f6);
    /* 008300f6: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008300fa: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 008300fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008300ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00830100: call 0x846fac */ r_esp -= 4; W32(r_esp, 0x830105u); f_00846fac();
    /* 00830105: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00830108: jmp 0x83011c */ goto L_0083011c;
L_0083010a:; BB(0x0083010a);
    /* 0083010a: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0083010e: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00830112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00830114: call 0x847074 */ r_esp -= 4; W32(r_esp, 0x830119u); f_00847074();
    /* 00830119: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083011c:; BB(0x0083011c);
    /* 0083011c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00830120: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 00830127: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830129: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083012d: fld dword ptr [esp + 0x8c] */ FPUSH(R_F32((u32)(r_esp+0x8cu)));
    /* 00830134: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830136: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830138: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083013a: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00830141: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00830145: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 00830149: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 0083014d: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00830151: mov esi, dword ptr [esp + 0x80] */ r_esi = R32((u32)(r_esp+0x80u));
    /* 00830158: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083015a: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0083015c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083015e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00830160: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 00830167: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00830169: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083016b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083016d: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 00830174: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00830177: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00830179: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083017b: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0083017e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830180: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830182: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00830185: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00830189: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083018d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083018f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830192: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830194: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830196: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00830198: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083019a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083019c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0083019e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008301a0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008301a2: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008301a5: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 008301a9: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008301ab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008301ad: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008301af: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008301b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008301b3: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008301b6: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 008301ba: push dword ptr [esp + 0xb0] */ { u32 v = R32((u32)(r_esp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008301c1: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 008301c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008301c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008301c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008301c8: call 0x84713c */ r_esp -= 4; W32(r_esp, 0x8301cdu); f_0084713c();
    /* 008301cd: mov eax, 2 */ r_eax = 0x2u;
    /* 008301d2: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008301d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008301d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008301da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008301db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008301dc: ret 0xc */ FN_RET(0x0082fcf4); r_esp += 16; return;
L_008301df:; BB(0x008301df);
    /* 008301df: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008301e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008301e4: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8301e7u); call_ind(t); }
    /* 008301e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008301e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008301ea: je 0x8301f6 */ if (fZ) goto L_008301f6;
L_008301ec:; BB(0x008301ec);
    /* 008301ec: mov ebx, 2 */ r_ebx = 0x2u;
    /* 008301f1: jmp 0x830069 */ goto L_00830069;
L_008301f6:; BB(0x008301f6);
    /* 008301f6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008301f8: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008301fd: je 0x830225 */ if (fZ) goto L_00830225;
L_008301ff:; BB(0x008301ff);
    /* 008301ff: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00830202: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00830206: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 00830209: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 0083020d: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00830210: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00830214: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00830217: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0083021c: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00830220: jmp 0x830069 */ goto L_00830069;
L_00830225:; BB(0x00830225);
    /* 00830225: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00830228: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0083022c: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 0083022f: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 00830233: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00830236: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0083023a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0083023c: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083023e: je 0x83024a */ if (fZ) goto L_0083024a;
L_00830240:; BB(0x00830240);
    /* 00830240: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00830245: jmp 0x830069 */ goto L_00830069;
L_0083024a:; BB(0x0083024a);
    /* 0083024a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083024c: jmp 0x830069 */ goto L_00830069;
L_00830251:; BB(0x00830251);
    /* 00830251: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00830255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830256: call dword ptr [ebp + 0x3c] */ { u32 t = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, 0x830259u); call_ind(t); }
    /* 00830259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083025a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083025c: je 0x830268 */ if (fZ) goto L_00830268;
L_0083025e:; BB(0x0083025e);
    /* 0083025e: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00830263: jmp 0x82fea6 */ goto L_0082fea6;
L_00830268:; BB(0x00830268);
    /* 00830268: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0083026a: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083026f: je 0x830297 */ if (fZ) goto L_00830297;
L_00830271:; BB(0x00830271);
    /* 00830271: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00830274: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00830278: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0083027b: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0083027f: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 00830282: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00830286: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00830289: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0083028e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00830292: jmp 0x82fea6 */ goto L_0082fea6;
L_00830297:; BB(0x00830297);
    /* 00830297: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0083029a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0083029e: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 008302a1: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 008302a5: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 008302a8: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 008302ac: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008302ae: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008302b0: je 0x8302bc */ if (fZ) goto L_008302bc;
L_008302b2:; BB(0x008302b2);
    /* 008302b2: mov ebp, 1 */ r_ebp = 0x1u;
    /* 008302b7: jmp 0x82fea6 */ goto L_0082fea6;
L_008302bc:; BB(0x008302bc);
    /* 008302bc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008302be: jmp 0x82fea6 */ goto L_0082fea6;
}

