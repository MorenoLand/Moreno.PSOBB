#include "protos.h"

void f_0082b0b1(void)
{
    FN_ENTER(0x0082b0b1);
    /* 0082b0b1: call 0x82d7a4 */ r_esp -= 4; W32(r_esp, 0x82b0b6u); f_0082d7a4();
    /* 0082b0b6: mov edx, dword ptr [0xaf02e8] */ r_edx = R32((u32)(0xaf02e8u));
    /* 0082b0bc: mov ecx, dword ptr [0xaf02ec] */ r_ecx = R32((u32)(0xaf02ecu));
    /* 0082b0c2: mov dword ptr [0xacb9fc], 0xacba0c */ W32((u32)(0xacb9fcu), 0xacba0cu);
    /* 0082b0cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082b0ce: mov dword ptr [0xacba00], 0xacb9e0 */ W32((u32)(0xacba00u), 0xacb9e0u);
    /* 0082b0d8: mov dword ptr [0xacb9e0], eax */ W32((u32)(0xacb9e0u), r_eax);
    /* 0082b0dd: mov dword ptr [0xacb9e4], eax */ W32((u32)(0xacb9e4u), r_eax);
    /* 0082b0e2: mov dword ptr [0xacba08], 4 */ W32((u32)(0xacba08u), 0x4u);
    /* 0082b0ec: mov dword ptr [0xacb9e8], eax */ W32((u32)(0xacb9e8u), r_eax);
    /* 0082b0f1: mov dword ptr [0xacba0c], 0 */ W32((u32)(0xacba0cu), 0x0u);
    /* 0082b0fb: mov dword ptr [0xacb9ec], eax */ W32((u32)(0xacb9ecu), r_eax);
    /* 0082b100: mov dword ptr [0xacba10], 0 */ W32((u32)(0xacba10u), 0x0u);
    /* 0082b10a: mov dword ptr [0xacba14], edx */ W32((u32)(0xacba14u), r_edx);
    /* 0082b110: mov dword ptr [0xacba18], 0 */ W32((u32)(0xacba18u), 0x0u);
    /* 0082b11a: mov dword ptr [0xacba1c], edx */ W32((u32)(0xacba1cu), r_edx);
    /* 0082b120: mov dword ptr [0xacba24], 0 */ W32((u32)(0xacba24u), 0x0u);
    /* 0082b12a: mov dword ptr [0xacba20], ecx */ W32((u32)(0xacba20u), r_ecx);
    /* 0082b130: mov dword ptr [0xacba28], ecx */ W32((u32)(0xacba28u), r_ecx);
    /* 0082b136: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082b139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b13a: ret  */ FN_RET(0x0082b0b1); r_esp += 4; return;
}

void f_0082b13c(void) /* sub_82B13C */
{
    FN_ENTER(0x0082b13c);
    /* 0082b13c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0082b140: call 0x83628c */ r_esp -= 4; W32(r_esp, 0x82b145u); f_0083628c();
    /* 0082b145: ret  */ FN_RET(0x0082b13c); r_esp += 4; return;
}

void f_0082b148(void) /* sub_82B148 */
{
    FN_ENTER(0x0082b148);
    /* 0082b148: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0082b14c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082b150: call 0x836d04 */ r_esp -= 4; W32(r_esp, 0x82b155u); f_00836d04();
    /* 0082b155: ret  */ FN_RET(0x0082b148); r_esp += 4; return;
}

void f_0082b158(void) /* sub_82B158 */
{
    FN_ENTER(0x0082b158);
    /* 0082b158: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0082b15c: call 0x829da8 */ r_esp -= 4; W32(r_esp, 0x82b161u); f_00829da8();
    /* 0082b161: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0082b165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b167: jne 0x82b172 */ if (!fZ) goto L_0082b172;
L_0082b169:; BB(0x0082b169);
    /* 0082b169: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b16b: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b170u); f_008363ec();
    /* 0082b170: jmp 0x82b17c */ goto L_0082b17c;
L_0082b172:; BB(0x0082b172);
    /* 0082b172: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082b177: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b17cu); f_008363ec();
L_0082b17c:; BB(0x0082b17c);
    /* 0082b17c: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b183: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b188: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b18b: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82b191u); call_ind(t); }
    /* 0082b191: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0082b195: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082b199: call 0x836d04 */ r_esp -= 4; W32(r_esp, 0x82b19eu); f_00836d04();
    /* 0082b19e: ret  */ FN_RET(0x0082b158); r_esp += 4; return;
}

void f_0082b1a0(void) /* sub_82B1A0 */
{
    FN_ENTER(0x0082b1a0);
    /* 0082b1a0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0082b1a4: call 0x83628c */ r_esp -= 4; W32(r_esp, 0x82b1a9u); f_0083628c();
    /* 0082b1a9: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82b1aeu); f_00835ca0();
    /* 0082b1ae: call 0x83aefc */ r_esp -= 4; W32(r_esp, 0x82b1b3u); f_0083aefc();
    /* 0082b1b3: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0082b1b7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082b1bb: call 0x836c58 */ r_esp -= 4; W32(r_esp, 0x82b1c0u); f_00836c58();
    /* 0082b1c0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x82b1c5u); f_0061cdb0();
    /* 0082b1c5: ret  */ FN_RET(0x0082b1a0); r_esp += 4; return;
}

void f_0082b1c8(void) /* sub_82B1C8 */
{
    FN_ENTER(0x0082b1c8);
    /* 0082b1c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b1c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b1ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b1cb: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0082b1cf: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0082b1d3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082b1d7: call 0x82b240 */ r_esp -= 4; W32(r_esp, 0x82b1dcu); f_0082b240();
    /* 0082b1dc: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082b1df: jle 0x82b232 */ if ((fZ||fS!=fO)) goto L_0082b232;
L_0082b1e1:; BB(0x0082b1e1);
    /* 0082b1e1: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82b1e6u); f_00844ad0();
    /* 0082b1e6: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x82b1ebu); f_00844b38();
    /* 0082b1eb: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0082b1f1: mov eax, ebp */ r_eax = r_ebp;
L_0082b1f3:; BB(0x0082b1f3);
    /* 0082b1f3: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082b1f5: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082b1f7: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082b1fa: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0082b1fd: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0082b200: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0082b203: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0082b206: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082b209: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082b20c: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082b20f: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082b212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b214: jne 0x82b1f3 */ if (!fZ) goto L_0082b1f3;
L_0082b216:; BB(0x0082b216);
    /* 0082b216: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b21b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b21d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b21f: lea ebp, [ebp - 2] */ r_ebp = (u32)(r_ebp+0xfffffffeu);
    /* 0082b222: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082b228: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b229: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b22c: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x82b232u); call_ind(t); }
L_0082b232:; BB(0x0082b232);
    /* 0082b232: call 0x844b54 */ r_esp -= 4; W32(r_esp, 0x82b237u); f_00844b54();
    /* 0082b237: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082b238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b239: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082b23a: ret  */ FN_RET(0x0082b1c8); r_esp += 4; return;
}

void f_0082b23c(void) /* sub_82B23C */
{
    FN_ENTER(0x0082b23c);
    /* 0082b23c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082b240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b242: jne 0x82b24d */ if (!fZ) goto L_0082b24d;
L_0082b244:; BB(0x0082b244);
    /* 0082b244: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b246: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b24bu); f_008363ec();
    /* 0082b24b: jmp 0x82b257 */ goto L_0082b257;
L_0082b24d:; BB(0x0082b24d);
    /* 0082b24d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082b252: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b257u); f_008363ec();
L_0082b257:; BB(0x0082b257);
    /* 0082b257: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b25c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b25e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b25f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b261: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x82b267u); call_ind(t); }
    /* 0082b267: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b26c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b26e: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b273: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b276: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82b27cu); call_ind(t); }
    /* 0082b27c: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82b281u); f_00835ca0();
    /* 0082b281: ret  */ FN_RET(0x0082b23c); r_esp += 4; return;
}

void f_0082b240(void) /* sub_82B240 */
{
    FN_ENTER(0x0082b240);
    /* 0082b240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b242: jne 0x82b24d */ if (!fZ) goto L_0082b24d;
L_0082b244:; BB(0x0082b244);
    /* 0082b244: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b246: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b24bu); f_008363ec();
    /* 0082b24b: jmp 0x82b257 */ goto L_0082b257;
L_0082b24d:; BB(0x0082b24d);
    /* 0082b24d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082b252: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b257u); f_008363ec();
L_0082b257:; BB(0x0082b257);
    /* 0082b257: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b25c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b25e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b25f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b261: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x82b267u); call_ind(t); }
    /* 0082b267: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b26c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b26e: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b273: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b276: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82b27cu); call_ind(t); }
    /* 0082b27c: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82b281u); f_00835ca0();
    /* 0082b281: ret  */ FN_RET(0x0082b240); r_esp += 4; return;
}

void f_0082b284(void) /* sub_82B284 */
{
    FN_ENTER(0x0082b284);
    /* 0082b284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b285: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b286: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0082b28a: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082b28e: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082b291: jle 0x82b2e4 */ if ((fZ||fS!=fO)) goto L_0082b2e4;
L_0082b293:; BB(0x0082b293);
    /* 0082b293: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82b298u); f_00844ad0();
    /* 0082b298: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x82b29du); f_00844b38();
    /* 0082b29d: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0082b2a3: mov eax, ebp */ r_eax = r_ebp;
L_0082b2a5:; BB(0x0082b2a5);
    /* 0082b2a5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082b2a7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082b2a9: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082b2ac: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0082b2af: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0082b2b2: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0082b2b5: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0082b2b8: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082b2bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082b2be: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082b2c1: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082b2c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b2c6: jne 0x82b2a5 */ if (!fZ) goto L_0082b2a5;
L_0082b2c8:; BB(0x0082b2c8);
    /* 0082b2c8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b2cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b2d1: lea ebp, [ebp - 2] */ r_ebp = (u32)(r_ebp+0xfffffffeu);
    /* 0082b2d4: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082b2da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2de: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x82b2e4u); call_ind(t); }
L_0082b2e4:; BB(0x0082b2e4);
    /* 0082b2e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b2e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082b2e6: ret  */ FN_RET(0x0082b284); r_esp += 4; return;
}

void f_0082b2e8(void) /* sub_82B2E8 */
{
    FN_ENTER(0x0082b2e8);
    /* 0082b2e8: call 0x844b54 */ r_esp -= 4; W32(r_esp, 0x82b2edu); f_00844b54();
    /* 0082b2ed: ret  */ FN_RET(0x0082b2e8); r_esp += 4; return;
}

void f_0082b2f0(void) /* sub_82B2F0 */
{
    FN_ENTER(0x0082b2f0);
    /* 0082b2f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b2f3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0082b2f7: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0082b2fb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082b2ff: call 0x82b378 */ r_esp -= 4; W32(r_esp, 0x82b304u); f_0082b378();
    /* 0082b304: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82b309u); f_00844ad0();
    /* 0082b309: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x82b30eu); f_00844b38();
    /* 0082b30e: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082b311: jle 0x82b36b */ if ((fZ||fS!=fO)) goto L_0082b36b;
L_0082b313:; BB(0x0082b313);
    /* 0082b313: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0082b319: mov eax, ebp */ r_eax = r_ebp;
    /* 0082b31b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b31d: je 0x82b354 */ if (fZ) goto L_0082b354;
L_0082b31f:; BB(0x0082b31f);
    /* 0082b31f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082b321: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082b323: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082b326: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0082b329: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0082b32c: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0082b32f: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0082b332: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082b335: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 0082b338: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0082b33b: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0082b33e: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082b341: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082b344: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082b347: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082b34a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b34c: jne 0x82b31f */ if (!fZ) goto L_0082b31f;
L_0082b34e:; BB(0x0082b34e);
    /* 0082b34e: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
L_0082b354:; BB(0x0082b354);
    /* 0082b354: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b359: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b35b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082b35c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082b35e: lea ebp, [ebp - 2] */ r_ebp = (u32)(r_ebp+0xfffffffeu);
    /* 0082b361: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b362: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b365: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x82b36bu); call_ind(t); }
L_0082b36b:; BB(0x0082b36b);
    /* 0082b36b: call 0x844b54 */ r_esp -= 4; W32(r_esp, 0x82b370u); f_00844b54();
    /* 0082b370: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082b371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082b373: ret  */ FN_RET(0x0082b2f0); r_esp += 4; return;
}

void f_0082b374(void) /* sub_82B374 */
{
    FN_ENTER(0x0082b374);
    /* 0082b374: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082b378: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b37a: jne 0x82b385 */ if (!fZ) goto L_0082b385;
L_0082b37c:; BB(0x0082b37c);
    /* 0082b37c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b37e: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b383u); f_008363ec();
    /* 0082b383: jmp 0x82b38f */ goto L_0082b38f;
L_0082b385:; BB(0x0082b385);
    /* 0082b385: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082b38a: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b38fu); f_008363ec();
L_0082b38f:; BB(0x0082b38f);
    /* 0082b38f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b396: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b39b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b39e: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82b3a4u); call_ind(t); }
    /* 0082b3a4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b3a9: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b3af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b3b1: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x82b3b7u); call_ind(t); }
    /* 0082b3b7: mov ecx, 0x3000 */ r_ecx = 0x3000u;
    /* 0082b3bc: call 0x839a60 */ r_esp -= 4; W32(r_esp, 0x82b3c1u); f_00839a60();
    /* 0082b3c1: ret  */ FN_RET(0x0082b374); r_esp += 4; return;
}

void f_0082b378(void) /* sub_82B378 */
{
    FN_ENTER(0x0082b378);
    /* 0082b378: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b37a: jne 0x82b385 */ if (!fZ) goto L_0082b385;
L_0082b37c:; BB(0x0082b37c);
    /* 0082b37c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b37e: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b383u); f_008363ec();
    /* 0082b383: jmp 0x82b38f */ goto L_0082b38f;
L_0082b385:; BB(0x0082b385);
    /* 0082b385: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082b38a: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82b38fu); f_008363ec();
L_0082b38f:; BB(0x0082b38f);
    /* 0082b38f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b396: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b39b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b39e: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82b3a4u); call_ind(t); }
    /* 0082b3a4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b3a9: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b3af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b3b1: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x82b3b7u); call_ind(t); }
    /* 0082b3b7: mov ecx, 0x3000 */ r_ecx = 0x3000u;
    /* 0082b3bc: call 0x839a60 */ r_esp -= 4; W32(r_esp, 0x82b3c1u); f_00839a60();
    /* 0082b3c1: ret  */ FN_RET(0x0082b378); r_esp += 4; return;
}

void f_0082b3c4(void) /* sub_82B3C4 */
{
    FN_ENTER(0x0082b3c4);
    /* 0082b3c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b3c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b3c6: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0082b3ca: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082b3ce: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82b3d3u); f_00844ad0();
    /* 0082b3d3: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x82b3d8u); f_00844b38();
    /* 0082b3d8: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082b3db: jle 0x82b435 */ if ((fZ||fS!=fO)) goto L_0082b435;
L_0082b3dd:; BB(0x0082b3dd);
    /* 0082b3dd: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0082b3e3: mov eax, ebp */ r_eax = r_ebp;
    /* 0082b3e5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b3e7: je 0x82b41e */ if (fZ) goto L_0082b41e;
L_0082b3e9:; BB(0x0082b3e9);
    /* 0082b3e9: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082b3eb: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082b3ed: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082b3f0: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0082b3f3: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0082b3f6: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0082b3f9: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0082b3fc: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082b3ff: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 0082b402: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0082b405: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0082b408: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082b40b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082b40e: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082b411: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082b414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b416: jne 0x82b3e9 */ if (!fZ) goto L_0082b3e9;
L_0082b418:; BB(0x0082b418);
    /* 0082b418: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
L_0082b41e:; BB(0x0082b41e);
    /* 0082b41e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b423: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082b426: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082b428: lea ebp, [ebp - 2] */ r_ebp = (u32)(r_ebp+0xfffffffeu);
    /* 0082b42b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b42c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b42e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b42f: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x82b435u); call_ind(t); }
L_0082b435:; BB(0x0082b435);
    /* 0082b435: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b436: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082b437: ret  */ FN_RET(0x0082b3c4); r_esp += 4; return;
}

void f_0082b438(void) /* sub_82B438 */
{
    FN_ENTER(0x0082b438);
    /* 0082b438: mov dword ptr [0xacba2c], ecx */ W32((u32)(0xacba2cu), r_ecx);
    /* 0082b43e: ret  */ FN_RET(0x0082b438); r_esp += 4; return;
}

void f_0082b440(void) /* sub_82B440 */
{
    FN_ENTER(0x0082b440);
    /* 0082b440: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082b443: fld dword ptr [0xacc0f0] */ FPUSH(R_F32((u32)(0xacc0f0u)));
    /* 0082b449: fld dword ptr [0xacc0e8] */ FPUSH(R_F32((u32)(0xacc0e8u)));
    /* 0082b44f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082b451: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082b453: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082b455: fld dword ptr [0xacc0f4] */ FPUSH(R_F32((u32)(0xacc0f4u)));
    /* 0082b45b: fld dword ptr [0xacc0ec] */ FPUSH(R_F32((u32)(0xacc0ecu)));
    /* 0082b461: mov eax, dword ptr [0xacba2c] */ r_eax = R32((u32)(0xacba2cu));
    /* 0082b466: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082b469: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082b46b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082b46d: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082b470: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0082b472: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b474: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0082b476: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0082b479: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082b47b: fld dword ptr [0x98a274] */ FPUSH(R_F32((u32)(0x98a274u)));
    /* 0082b481: fsub dword ptr [esp + 0x74] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x74u));
    /* 0082b485: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b487: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0082b48a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b48c: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0082b490: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b492: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0082b496: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b498: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082b49a: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0082b4a2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0082b4a6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0082b4a9: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0082b4ad: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0082b4b0: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0082b4b4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b4b6: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0082b4ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b4bc: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0082b4c0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b4c2: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0082b4c6: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 0082b4ce: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0082b4d2: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0082b4d5: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0082b4d9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0082b4dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b4de: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0082b4e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b4e4: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0082b4e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b4ea: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0082b4ee: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0082b4f2: mov dword ptr [esp + 0x44], 0x3f800000 */ W32((u32)(r_esp+0x44u), 0x3f800000u);
    /* 0082b4fa: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0082b4fe: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0082b501: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0082b505: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0082b508: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b50a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0082b50e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b510: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0082b514: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0082b518: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0082b51c: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082b522: mov dword ptr [esp + 0x60], 0x3f800000 */ W32((u32)(r_esp+0x60u), 0x3f800000u);
    /* 0082b52a: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0082b52e: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0082b531: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0082b535: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0082b538: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0082b53c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082b53f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082b541: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082b543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b544: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b546: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b548: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082b549: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x82b54fu); call_ind(t); }
    /* 0082b54f: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082b552: ret 4 */ FN_RET(0x0082b440); r_esp += 8; return;
}

void f_0082b558(void) /* sub_82B558 */
{
    FN_ENTER(0x0082b558);
    /* 0082b558: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082b55b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0082b55f: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0082b563: fld dword ptr [0x98a268] */ FPUSH(R_F32((u32)(0x98a268u)));
    /* 0082b569: fdiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x20u));
    /* 0082b56d: fld dword ptr [0x98a264] */ FPUSH(R_F32((u32)(0x98a264u)));
    /* 0082b573: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0082b575: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0082b578: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0082b57b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0082b57f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0082b582: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b586: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0082b589: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082b58d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0082b58f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b591: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b592: jae 0x82b596 */ if (!fC) goto L_0082b596;
L_0082b594:; BB(0x0082b594);
    /* 0082b594: fst st(1) */ ST(1) = ST(0);
L_0082b596:; BB(0x0082b596);
    /* 0082b596: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b598: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0082b59c: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b5a2: jne 0x82b5ac */ if (!fZ) goto L_0082b5ac;
L_0082b5a4:; BB(0x0082b5a4);
    /* 0082b5a4: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
L_0082b5ac:; BB(0x0082b5ac);
    /* 0082b5ac: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b5af: call 0x83628c */ r_esp -= 4; W32(r_esp, 0x82b5b4u); f_0083628c();
    /* 0082b5b4: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82b5b9u); f_00835ca0();
    /* 0082b5b9: call 0x83aefc */ r_esp -= 4; W32(r_esp, 0x82b5beu); f_0083aefc();
    /* 0082b5be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b5bf: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0082b5c3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0082b5c6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0082b5ca: call 0x836dc8 */ r_esp -= 4; W32(r_esp, 0x82b5cfu); f_00836dc8();
    /* 0082b5cf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x82b5d4u); f_0061cdb0();
    /* 0082b5d4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082b5d7: ret  */ FN_RET(0x0082b558); r_esp += 4; return;
}

void f_0082b5d8(void) /* sub_82B5D8 */
{
    FN_ENTER(0x0082b5d8);
    /* 0082b5d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b5d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b5da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b5db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082b5dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b5dd: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0082b5e1: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082b5e4: jle 0x82b6b3 */ if ((fZ||fS!=fO)) goto L_0082b6b3;
L_0082b5ea:; BB(0x0082b5ea);
    /* 0082b5ea: fld dword ptr [0x98a258] */ FPUSH(R_F32((u32)(0x98a258u)));
    /* 0082b5f0: fdiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x20u));
    /* 0082b5f4: fld dword ptr [0x98a254] */ FPUSH(R_F32((u32)(0x98a254u)));
    /* 0082b5fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0082b5fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b5fe: mov ebx, edi */ r_ebx = r_edi;
    /* 0082b600: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b601: jae 0x82b605 */ if (!fC) goto L_0082b605;
L_0082b603:; BB(0x0082b603);
    /* 0082b603: fst st(1) */ ST(1) = ST(0);
L_0082b605:; BB(0x0082b605);
    /* 0082b605: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0082b607: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0082b60a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x82b60fu); f_0082dbac();
    /* 0082b60f: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0082b613: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b616: call 0x83628c */ r_esp -= 4; W32(r_esp, 0x82b61bu); f_0083628c();
    /* 0082b61b: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82b620u); f_00835ca0();
    /* 0082b620: call 0x83aefc */ r_esp -= 4; W32(r_esp, 0x82b625u); f_0083aefc();
    /* 0082b625: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082b629: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0082b62d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b632: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b634: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0082b636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b637: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 0082b63a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b63c: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x82b642u); call_ind(t); }
    /* 0082b642: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0082b648: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082b64b: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
L_0082b650:; BB(0x0082b650);
    /* 0082b650: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0082b652: fmul dword ptr [0xacc0e8] */ ST(0) = ST(0) * R_F32((u32)(0xacc0e8u));
    /* 0082b658: fadd dword ptr [0xacc0f0] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f0u));
    /* 0082b65e: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0082b660: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0082b663: fmul dword ptr [0xacc0ec] */ ST(0) = ST(0) * R_F32((u32)(0xacc0ecu));
    /* 0082b669: fadd dword ptr [0xacc0f4] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f4u));
    /* 0082b66f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b671: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0082b674: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b676: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0082b679: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082b67c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0082b67f: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0082b682: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082b685: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082b688: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082b68b: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0082b68e: jne 0x82b650 */ if (!fZ) goto L_0082b650;
L_0082b690:; BB(0x0082b690);
    /* 0082b690: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b692: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082b697: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b699: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082b69b: add ebx, -2 */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082b69e: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082b6a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6a5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6a8: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x82b6aeu); call_ind(t); }
    /* 0082b6ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x82b6b3u); f_0061cdb0();
L_0082b6b3:; BB(0x0082b6b3);
    /* 0082b6b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082b6b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082b6b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b6b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082b6b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082b6b8: ret  */ FN_RET(0x0082b5d8); r_esp += 4; return;
}

void f_0082b6bc(void) /* sub_82B6BC */
{
    FN_ENTER(0x0082b6bc);
    /* 0082b6bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082b6c0: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082b6c6: mov edi, dword ptr [esp + 0xb0] */ r_edi = R32((u32)(r_esp+0xb0u));
    /* 0082b6cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b6cf: mov ebp, dword ptr [esp + 0xb4] */ r_ebp = R32((u32)(r_esp+0xb4u));
    /* 0082b6d6: mov ebx, dword ptr [esp + 0xbc] */ r_ebx = R32((u32)(r_esp+0xbcu));
    /* 0082b6dd: je 0x82bb25 */ if (fZ) goto L_0082bb25;
L_0082b6e3:; BB(0x0082b6e3);
    /* 0082b6e3: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 0082b6e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082b6e8: je 0x82bb25 */ if (fZ) goto L_0082bb25;
L_0082b6ee:; BB(0x0082b6ee);
    /* 0082b6ee: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x82b6f3u); f_00829cc8();
    /* 0082b6f3: fld dword ptr [0x98a24c] */ FPUSH(R_F32((u32)(0x98a24cu)));
    /* 0082b6f9: mov esi, dword ptr [edi + 0x1c] */ r_esi = R32((u32)(r_edi+0x1cu));
    /* 0082b6fc: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0082b6ff: lea ebp, [ebp + ebp*4] */ r_ebp = (u32)(r_ebp+r_ebp*4);
    /* 0082b703: movsx edx, word ptr [esi + ebp*4 + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x8u));
    /* 0082b708: movsx ecx, word ptr [esi + ebp*4 + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0xau));
    /* 0082b70d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0082b710: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0082b713: fdiv dword ptr [0x98a250] */ ST(0) = ST(0) / R_F32((u32)(0x98a250u));
    /* 0082b719: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082b71b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b71d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0082b721: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b725: fdiv dword ptr [0x98a250] */ ST(0) = ST(0) / R_F32((u32)(0x98a250u));
    /* 0082b72b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b72c: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0082b72e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b730: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b732: jbe 0x82b736 */ if ((fC||fZ)) goto L_0082b736;
L_0082b734:; BB(0x0082b734);
    /* 0082b734: fst st(1) */ ST(1) = ST(0);
L_0082b736:; BB(0x0082b736);
    /* 0082b736: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b738: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0082b73c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b73d: movsx eax, word ptr [esi + ebp*4 + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0xcu));
    /* 0082b742: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b746: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b74a: fdiv dword ptr [0x98a250] */ ST(0) = ST(0) / R_F32((u32)(0x98a250u));
    /* 0082b750: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b752: jbe 0x82b756 */ if ((fC||fZ)) goto L_0082b756;
L_0082b754:; BB(0x0082b754);
    /* 0082b754: fst st(3) */ ST(3) = ST(0);
L_0082b756:; BB(0x0082b756);
    /* 0082b756: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b758: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0082b75c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082b75e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b760: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b761: movsx eax, word ptr [esi + ebp*4 + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0xeu));
    /* 0082b766: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b76a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b76e: fdiv dword ptr [0x98a250] */ ST(0) = ST(0) / R_F32((u32)(0x98a250u));
    /* 0082b774: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b776: jbe 0x82b77a */ if ((fC||fZ)) goto L_0082b77a;
L_0082b778:; BB(0x0082b778);
    /* 0082b778: fst st(1) */ ST(1) = ST(0);
L_0082b77a:; BB(0x0082b77a);
    /* 0082b77a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b77c: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0082b780: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082b782: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b784: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b785: movsx eax, word ptr [esi + ebp*4 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x4u));
    /* 0082b78a: jae 0x82b78e */ if (!fC) goto L_0082b78e;
L_0082b78c:; BB(0x0082b78c);
    /* 0082b78c: fst st(2) */ ST(2) = ST(0);
L_0082b78e:; BB(0x0082b78e);
    /* 0082b78e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b790: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b792: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0082b796: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082b798: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b79c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b7a0: movsx eax, word ptr [esi + ebp*4 + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x6u));
    /* 0082b7a5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082b7a7: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082b7aa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b7ae: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b7b2: movsx eax, word ptr [esi + ebp*4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4));
    /* 0082b7b6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b7ba: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b7be: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082b7c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b7c2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082b7c4: movsx eax, word ptr [esi + ebp*4 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x2u));
    /* 0082b7c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b7cb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082b7cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b7cf: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0082b7d3: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0082b7d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b7d8: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0082b7dc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082b7e0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082b7e4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082b7e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b7e8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0082b7ea: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082b7ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b7ee: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0082b7f2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0082b7f6: jne 0x82b857 */ if (!fZ) goto L_0082b857;
L_0082b7f8:; BB(0x0082b7f8);
    /* 0082b7f8: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0082b7fc: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0082b800: fld dword ptr [0x98a248] */ FPUSH(R_F32((u32)(0x98a248u)));
    /* 0082b806: fdiv dword ptr [esp + 0xb8] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xb8u));
    /* 0082b80d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0082b80f: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0082b811: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0082b815: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0082b819: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b81b: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0082b81f: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 0082b821: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0082b823: fld dword ptr [0x98a244] */ FPUSH(R_F32((u32)(0x98a244u)));
    /* 0082b829: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0082b82c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b82e: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0082b832: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b834: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0082b838: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0082b83c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082b83e: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0082b842: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 0082b84a: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 0082b852: jmp 0x82b9a3 */ goto L_0082b9a3;
L_0082b857:; BB(0x0082b857);
    /* 0082b857: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0082b85c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x82b861u); f_0082d990();
    /* 0082b861: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0082b864: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b866: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x82b86bu); f_00830c04();
    /* 0082b86b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0082b86f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0082b873: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b875: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0082b87c: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0082b883: mov dword ptr [esp + 0x98], 0 */ W32((u32)(r_esp+0x98u), 0x0u);
    /* 0082b88e: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 0082b895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b896: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 0082b89d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b89f: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x82b8a4u); f_0082eab8();
    /* 0082b8a4: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 0082b8ab: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 0082b8b2: fld dword ptr [0x98a248] */ FPUSH(R_F32((u32)(0x98a248u)));
    /* 0082b8b8: fdiv dword ptr [esp + 0xb8] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xb8u));
    /* 0082b8bf: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0082b8c1: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0082b8c5: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0082b8c9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082b8cb: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0082b8cf: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b8d1: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0082b8d5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b8d7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082b8d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b8db: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0082b8df: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 0082b8e6: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0082b8e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b8eb: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0082b8ef: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0082b8f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b8f8: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0082b8ff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082b901: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0082b905: mov dword ptr [esp + 0x98], 0 */ W32((u32)(r_esp+0x98u), 0x0u);
    /* 0082b910: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b913: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 0082b91a: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x82b91fu); f_0082eab8();
    /* 0082b91f: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 0082b926: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 0082b92a: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 0082b931: fsub dword ptr [esp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x2cu));
    /* 0082b935: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0082b939: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0082b93d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b93f: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0082b943: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b945: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0082b949: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0082b950: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0082b957: mov dword ptr [esp + 0x98], 0 */ W32((u32)(r_esp+0x98u), 0x0u);
    /* 0082b962: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b964: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 0082b96b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082b96c: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 0082b973: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x82b978u); f_0082eab8();
    /* 0082b978: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 0082b97f: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 0082b983: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 0082b98a: fsub dword ptr [esp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x2cu));
    /* 0082b98e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b990: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0082b994: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0082b998: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x82b99du); f_0082da80();
    /* 0082b99d: fld dword ptr [0x98a244] */ FPUSH(R_F32((u32)(0x98a244u)));
L_0082b9a3:; BB(0x0082b9a3);
    /* 0082b9a3: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082b9a6: je 0x82b9b8 */ if (fZ) goto L_0082b9b8;
L_0082b9a8:; BB(0x0082b9a8);
    /* 0082b9a8: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0082b9ac: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0082b9b0: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0082b9b4: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0082b9b8:; BB(0x0082b9b8);
    /* 0082b9b8: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082b9bb: je 0x82b9cd */ if (fZ) goto L_0082b9cd;
L_0082b9bd:; BB(0x0082b9bd);
    /* 0082b9bd: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0082b9c1: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0082b9c5: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0082b9c9: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_0082b9cd:; BB(0x0082b9cd);
    /* 0082b9cd: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0082b9d1: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0082b9d5: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0082b9d9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b9db: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0082b9df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b9e1: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 0082b9e5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082b9e7: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 0082b9eb: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0082b9f2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0082b9f4: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0082b9f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b9fa: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0082b9fe: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0082ba00: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0082ba07: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082ba0a: je 0x82baf3 */ if (fZ) goto L_0082baf3;
L_0082ba10:; BB(0x0082ba10);
    /* 0082ba10: fld dword ptr [0x98a240] */ FPUSH(R_F32((u32)(0x98a240u)));
    /* 0082ba16: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 0082ba1c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082ba1e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0082ba22: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0082ba27: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082ba2c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082ba30: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0082ba34: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082ba38: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082ba3c: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 0082ba42: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082ba44: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0082ba48: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0082ba4c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0082ba51: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082ba56: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082ba5a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0082ba5e: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082ba62: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082ba66: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 0082ba6c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082ba6e: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082ba72: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0082ba76: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0082ba7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082ba80: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082ba84: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0082ba88: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082ba8c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082ba90: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 0082ba96: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082ba98: or edi, 0xffffff00 */ {  u32 a = r_edi; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0082ba9e: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0082baa4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082baa8: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0082baac: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0082bab1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082bab6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082baba: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0082babe: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082bac2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082bac6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082baca: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0082bacd: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082bad3: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0082bad5: and edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0082badb: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0082bade: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082bae1: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082bae7: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0082bae9: and edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0082baef: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0082baf1: jmp 0x82baf8 */ goto L_0082baf8;
L_0082baf3:; BB(0x0082baf3);
    /* 0082baf3: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
L_0082baf8:; BB(0x0082baf8);
    /* 0082baf8: and ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0082bafb: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bafe: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0082bb03: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0082bb06: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x82bb0bu); f_0082bb30();
    /* 0082bb0b: movsx ecx, word ptr [esi + ebp*4 + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x10u));
    /* 0082bb10: mov edx, edi */ r_edx = r_edi;
    /* 0082bb12: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x82bb17u); f_0082bb60();
    /* 0082bb17: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0082bb1b: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x82bb20u); f_0082bb74();
    /* 0082bb20: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x82bb25u); f_0061cdb0();
L_0082bb25:; BB(0x0082bb25);
    /* 0082bb25: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082bb2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082bb2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082bb2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082bb2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082bb2f: ret  */ FN_RET(0x0082b6bc); r_esp += 4; return;
}

void f_0082bb30(void) /* sub_82BB30 */
{
    FN_ENTER(0x0082bb30);
    /* 0082bb30: call 0x83628c */ r_esp -= 4; W32(r_esp, 0x82bb35u); f_0083628c();
    /* 0082bb35: call 0x83aefc */ r_esp -= 4; W32(r_esp, 0x82bb3au); f_0083aefc();
    /* 0082bb3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082bb3c: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x82bb41u); f_00829d68();
    /* 0082bb41: mov ecx, 0x3000 */ r_ecx = 0x3000u;
    /* 0082bb46: call 0x839a60 */ r_esp -= 4; W32(r_esp, 0x82bb4bu); f_00839a60();
    /* 0082bb4b: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082bb50: push 0x144 */ { u32 v = 0x144u; r_esp -= 4; W32(r_esp, v); }
    /* 0082bb55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082bb56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082bb58: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x82bb5eu); call_ind(t); }
    /* 0082bb5e: ret  */ FN_RET(0x0082bb30); r_esp += 4; return;
}

void f_0082bb60(void) /* sub_82BB60 */
{
    FN_ENTER(0x0082bb60);
    /* 0082bb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082bb61: mov ebp, edx */ r_ebp = r_edx;
    /* 0082bb63: mov edx, ecx */ r_edx = r_ecx;
    /* 0082bb65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082bb67: call 0x839838 */ r_esp -= 4; W32(r_esp, 0x82bb6cu); f_00839838();
    /* 0082bb6c: mov dword ptr [0xacba2c], ebp */ W32((u32)(0xacba2cu), r_ebp);
    /* 0082bb72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082bb73: ret  */ FN_RET(0x0082bb60); r_esp += 4; return;
}

void f_0082bb74(void) /* sub_82BB74 */
{
    FN_ENTER(0x0082bb74);
    /* 0082bb74: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082bb77: fld dword ptr [0xacc0e8] */ FPUSH(R_F32((u32)(0xacc0e8u)));
    /* 0082bb7d: fld dword ptr [0xacc0ec] */ FPUSH(R_F32((u32)(0xacc0ecu)));
    /* 0082bb83: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082bb85: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082bb87: fadd dword ptr [0xacc0f0] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f0u));
    /* 0082bb8d: fld dword ptr [0x98a23c] */ FPUSH(R_F32((u32)(0x98a23cu)));
    /* 0082bb93: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0082bb96: mov eax, dword ptr [0xacba2c] */ r_eax = R32((u32)(0xacba2cu));
    /* 0082bb9b: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082bb9e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082bba0: fadd dword ptr [0xacc0f4] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f4u));
    /* 0082bba6: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0082bba9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0082bbab: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0082bbad: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0082bbb0: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0082bbb2: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0082bbb5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0082bbb7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082bbb9: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0082bbbc: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0082bbbe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082bbc0: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0082bbc3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bbc5: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0082bbc9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bbcb: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0082bbcf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bbd1: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0082bbd3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bbd5: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0082bbd7: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0082bbdf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0082bbe3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0082bbe6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0082bbea: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0082bbed: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0082bbf1: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082bbf7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bbf9: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0082bbfd: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082bbff: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0082bc03: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bc05: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0082bc09: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0082bc0b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0082bc0d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082bc0f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082bc11: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 0082bc19: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0082bc1d: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0082bc20: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0082bc23: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0082bc27: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0082bc2a: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 0082bc2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bc2f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0082bc33: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0082bc37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bc39: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0082bc3d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bc3f: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0082bc43: mov dword ptr [esp + 0x44], 0x3f800000 */ W32((u32)(r_esp+0x44u), 0x3f800000u);
    /* 0082bc4b: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0082bc4f: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0082bc52: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0082bc55: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 0082bc58: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0082bc5c: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0082bc5f: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 0082bc62: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 0082bc65: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bc67: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0082bc6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bc6d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0082bc71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bc73: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0082bc77: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0082bc7b: mov dword ptr [esp + 0x60], 0x3f800000 */ W32((u32)(r_esp+0x60u), 0x3f800000u);
    /* 0082bc83: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0082bc87: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082bc8a: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0082bc8d: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 0082bc90: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0082bc94: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0082bc97: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 0082bc9a: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0082bc9e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082bca0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082bca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082bca3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0082bca5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0082bca7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082bca8: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x82bcaeu); call_ind(t); }
    /* 0082bcae: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082bcb1: ret  */ FN_RET(0x0082bb74); r_esp += 4; return;
}

void f_0082bcb4(void) /* sub_82BCB4 */
{
    FN_ENTER(0x0082bcb4);
    /* 0082bcb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082bcb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082bcb6: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082bcbc: mov edi, dword ptr [esp + 0x9c] */ r_edi = R32((u32)(r_esp+0x9cu));
    /* 0082bcc3: mov esi, dword ptr [esp + 0xa4] */ r_esi = R32((u32)(r_esp+0xa4u));
    /* 0082bcca: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bccc: je 0x82c073 */ if (fZ) goto L_0082c073;
L_0082bcd2:; BB(0x0082bcd2);
    /* 0082bcd2: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 0082bcd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bcd7: je 0x82c073 */ if (fZ) goto L_0082c073;
L_0082bcdd:; BB(0x0082bcdd);
    /* 0082bcdd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x82bce2u); f_00829cc8();
    /* 0082bce2: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 0082bce9: fld dword ptr [0x98a234] */ FPUSH(R_F32((u32)(0x98a234u)));
    /* 0082bcef: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0082bcf2: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0082bcf5: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0082bcf8: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0082bcfb: movsx eax, word ptr [edx + ecx*4 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0x4u));
    /* 0082bd00: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082bd02: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0082bd06: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0082bd0a: movsx eax, word ptr [edx + ecx*4 + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0x6u));
    /* 0082bd0f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082bd11: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bd15: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bd19: movsx eax, word ptr [edx + ecx*4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4));
    /* 0082bd1d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bd21: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bd25: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082bd27: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bd29: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0082bd2b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082bd2d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082bd2f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bd31: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0082bd33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bd35: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0082bd37: movsx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 0082bd3c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bd40: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bd44: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0082bd46: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bd48: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0082bd4a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082bd4c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bd4e: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 0082bd51: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bd53: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 0082bd56: movsx eax, word ptr [edx + ecx*4 + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0x8u));
    /* 0082bd5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bd5d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0082bd61: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bd65: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bd69: fdiv dword ptr [0x98a238] */ ST(0) = ST(0) / R_F32((u32)(0x98a238u));
    /* 0082bd6f: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0082bd71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082bd73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082bd74: movsx eax, word ptr [edx + ecx*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0xau));
    /* 0082bd79: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bd7d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bd81: fdiv dword ptr [0x98a238] */ ST(0) = ST(0) / R_F32((u32)(0x98a238u));
    /* 0082bd87: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082bd89: jbe 0x82bd8d */ if ((fC||fZ)) goto L_0082bd8d;
L_0082bd8b:; BB(0x0082bd8b);
    /* 0082bd8b: fst st(1) */ ST(1) = ST(0);
L_0082bd8d:; BB(0x0082bd8d);
    /* 0082bd8d: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0082bd8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082bd91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082bd92: movsx eax, word ptr [edx + ecx*4 + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0xcu));
    /* 0082bd97: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bd9b: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bd9f: fdiv dword ptr [0x98a238] */ ST(0) = ST(0) / R_F32((u32)(0x98a238u));
    /* 0082bda5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bda7: jae 0x82bdab */ if (!fC) goto L_0082bdab;
L_0082bda9:; BB(0x0082bda9);
    /* 0082bda9: fst st(6) */ ST(6) = ST(0);
L_0082bdab:; BB(0x0082bdab);
    /* 0082bdab: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0082bdad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082bdaf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082bdb0: movsx eax, word ptr [edx + ecx*4 + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0xeu));
    /* 0082bdb5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082bdb9: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0082bdbd: fdiv dword ptr [0x98a238] */ ST(0) = ST(0) / R_F32((u32)(0x98a238u));
    /* 0082bdc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bdc5: jae 0x82bdc9 */ if (!fC) goto L_0082bdc9;
L_0082bdc7:; BB(0x0082bdc7);
    /* 0082bdc7: fst st(2) */ ST(2) = ST(0);
L_0082bdc9:; BB(0x0082bdc9);
    /* 0082bdc9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0082bdcb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082bdcd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082bdce: jae 0x82bdd2 */ if (!fC) goto L_0082bdd2;
L_0082bdd0:; BB(0x0082bdd0);
    /* 0082bdd0: fst st(1) */ ST(1) = ST(0);
L_0082bdd2:; BB(0x0082bdd2);
    /* 0082bdd2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082bdd4: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bdda: je 0x82becc */ if (fZ) goto L_0082becc;
L_0082bde0:; BB(0x0082bde0);
    /* 0082bde0: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 0082bde6: fmul dword ptr [0x98a230] */ ST(0) = ST(0) * R_F32((u32)(0x98a230u));
    /* 0082bdec: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0082bdf0: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0082bdf5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082bdfa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0082bdfe: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0082be02: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082be06: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0082be0a: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 0082be10: fmul dword ptr [0x98a230] */ ST(0) = ST(0) * R_F32((u32)(0x98a230u));
    /* 0082be16: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0082be1a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0082be1e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0082be23: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082be28: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0082be2c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0082be30: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082be34: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0082be38: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 0082be3e: fmul dword ptr [0x98a230] */ ST(0) = ST(0) * R_F32((u32)(0x98a230u));
    /* 0082be44: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0082be48: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0082be4c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0082be51: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082be56: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0082be5a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0082be5e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082be62: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0082be66: or edx, 0xffffff00 */ {  u32 a = r_edx; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082be6c: fld dword ptr [0x98a230] */ FPUSH(R_F32((u32)(0x98a230u)));
    /* 0082be72: fmul dword ptr [0xaf0370] */ ST(0) = ST(0) * R_F32((u32)(0xaf0370u));
    /* 0082be78: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0082be7c: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082be82: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0082be85: and ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082be8b: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082be8d: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082be93: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082be96: and eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0082be9b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082be9d: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0082bea1: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0082bea6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082beab: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0082beaf: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0082beb3: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082beb7: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0082bebb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0082bebf: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082bec5: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082bec8: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082beca: jmp 0x82bed1 */ goto L_0082bed1;
L_0082becc:; BB(0x0082becc);
    /* 0082becc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_0082bed1:; BB(0x0082bed1);
    /* 0082bed1: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bed7: je 0x82bedf */ if (fZ) goto L_0082bedf;
L_0082bed9:; BB(0x0082bed9);
    /* 0082bed9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bedb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bedd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0082bedf:; BB(0x0082bedf);
    /* 0082bedf: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bee5: je 0x82bee9 */ if (fZ) goto L_0082bee9;
L_0082bee7:; BB(0x0082bee7);
    /* 0082bee7: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
L_0082bee9:; BB(0x0082bee9);
    /* 0082bee9: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0082beed: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082beef: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0082bef3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082bef5: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0082bef9: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0082befc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082befe: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0082bf02: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0082bf04: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0082bf08: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0082bf0c: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0082bf0e: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0082bf12: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082bf14: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0082bf18: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0082bf1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bf1d: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0082bf21: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082bf23: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0082bf27: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bf29: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0082bf2d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bf2f: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0082bf33: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0082bf37: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0082bf3a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082bf3c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0082bf40: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0082bf44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082bf46: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0082bf4a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082bf4c: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0082bf50: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0082bf54: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 0082bf57: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0082bf5e: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0082bf65: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 0082bf6c: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0082bf70: and esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0082bf73: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0082bf77: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0082bf7b: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 0082bf82: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082bf85: mov eax, 0 */ r_eax = 0x0u;
    /* 0082bf8a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0082bf8d: call 0x82b378 */ r_esp -= 4; W32(r_esp, 0x82bf92u); f_0082b378();
    /* 0082bf92: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82bf97u); f_00844ad0();
    /* 0082bf97: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x82bf9cu); f_00844b38();
    /* 0082bf9c: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 0082bfa1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0082bfa5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082bfa7: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0082bfab: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0082bfae: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0082bfb2: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0082bfb5: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0082bfb9: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 0082bfbc: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0082bfc0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0082bfc3: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0082bfc7: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0082bfca: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0082bfce: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0082bfd1: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0082bfd5: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0082bfd8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0082bfdc: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0082bfdf: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0082bfe3: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0082bfe6: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0082bfea: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0082bfed: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0082bff1: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0082bff4: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0082bff8: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0082bffb: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0082bfff: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0082c002: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0082c006: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0082c009: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0082c00d: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0082c010: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0082c014: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0082c017: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0082c01b: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0082c01e: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0082c022: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0082c025: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 0082c029: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0082c02c: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 0082c033: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0082c036: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 0082c03d: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0082c040: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 0082c047: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0082c04a: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 0082c051: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c053: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c059: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c05b: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0082c05e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082c063: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c066: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082c068: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x82c06eu); call_ind(t); }
    /* 0082c06e: call 0x844b54 */ r_esp -= 4; W32(r_esp, 0x82c073u); f_00844b54();
L_0082c073:; BB(0x0082c073);
    /* 0082c073: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c079: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082c07a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c07b: ret  */ FN_RET(0x0082bcb4); r_esp += 4; return;
}

