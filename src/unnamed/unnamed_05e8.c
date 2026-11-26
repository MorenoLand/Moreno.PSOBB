#include "protos.h"

void f_005e8020(void) /* sub_5E8020 */
{
    FN_ENTER(0x005e8020);
    /* 005e8020: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8021: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e8023: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e8029: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e802b: je 0x5e8085 */ if (fZ) goto L_005e8085;
L_005e802d:; BB(0x005e802d);
    /* 005e802d: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e8032: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e8034: je 0x5e8042 */ if (fZ) goto L_005e8042;
L_005e8036:; BB(0x005e8036);
    /* 005e8036: mov eax, dword ptr [edx + 0x340] */ r_eax = R32((u32)(r_edx+0x340u));
    /* 005e803c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e803e: jne 0x5e8042 */ if (!fZ) goto L_005e8042;
L_005e8040:; BB(0x005e8040);
    /* 005e8040: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8041: ret  */ FN_RET(0x005e8020); r_esp += 4; return;
L_005e8042:; BB(0x005e8042);
    /* 005e8042: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005e8048: mov eax, edx */ r_eax = r_edx;
    /* 005e804a: and eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e804d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e8050: je 0x5e8054 */ if (fZ) goto L_005e8054;
L_005e8052:; BB(0x005e8052);
    /* 005e8052: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8053: ret  */ FN_RET(0x005e8020); r_esp += 4; return;
L_005e8054:; BB(0x005e8054);
    /* 005e8054: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e805a: je 0x5e805e */ if (fZ) goto L_005e805e;
L_005e805c:; BB(0x005e805c);
    /* 005e805c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e805d: ret  */ FN_RET(0x005e8020); r_esp += 4; return;
L_005e805e:; BB(0x005e805e);
    /* 005e805e: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8064: je 0x5e8074 */ if (fZ) goto L_005e8074;
L_005e8066:; BB(0x005e8066);
    /* 005e8066: push dword ptr [ebx + 0xd8] */ { u32 v = R32((u32)(r_ebx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e806c: call 0x5cb278 */ r_esp -= 4; W32(r_esp, 0x5e8071u); f_005cb278();
    /* 005e8071: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e8072: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8073: ret  */ FN_RET(0x005e8020); r_esp += 4; return;
L_005e8074:; BB(0x005e8074);
    /* 005e8074: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e8076: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8078: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x5e807eu); call_ind(t); }
    /* 005e807e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8080: call 0x5e8088 */ r_esp -= 4; W32(r_esp, 0x5e8085u); f_005e8088();
L_005e8085:; BB(0x005e8085);
    /* 005e8085: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8086: ret  */ FN_RET(0x005e8020); r_esp += 4; return;
}

void f_005e8088(void) /* sub_5E8088 */
{
    FN_ENTER(0x005e8088);
    /* 005e8088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8089: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e808a: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e808d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e808f: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 005e8095: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e809a: je 0x5e8256 */ if (fZ) goto L_005e8256;
L_005e80a0:; BB(0x005e80a0);
    /* 005e80a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e80a2: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e80a7u); f_005d2450();
    /* 005e80a7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e80a9: movsx ebp, al */ r_ebp = (u32)(i32)(i8)(u8)r_eax;
    /* 005e80ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e80ae: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e80b3u); f_005d240c();
    /* 005e80b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e80b5: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e80bau); f_005e84a8();
    /* 005e80ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e80bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e80bd: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e80c2u); f_005d240c();
    /* 005e80c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e80c4: call 0x5c51a4 */ r_esp -= 4; W32(r_esp, 0x5e80c9u); f_005c51a4();
    /* 005e80c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e80cb: je 0x5e8170 */ if (fZ) goto L_005e8170;
L_005e80d1:; BB(0x005e80d1);
    /* 005e80d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e80d3: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e80d8u); f_005c5198();
    /* 005e80d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e80da: jne 0x5e8170 */ if (!fZ) goto L_005e8170;
L_005e80e0:; BB(0x005e80e0);
    /* 005e80e0: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e80e6: mov eax, dword ptr [edx + 0x328] */ r_eax = R32((u32)(r_edx+0x328u));
    /* 005e80ec: test eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e80f1: je 0x5e8170 */ if (fZ) goto L_005e8170;
L_005e80f3:; BB(0x005e80f3);
    /* 005e80f3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e80f9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e80fb: jne 0x5e8170 */ if (!fZ) goto L_005e8170;
L_005e80fd:; BB(0x005e80fd);
    /* 005e80fd: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e8102: test al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e8104: jne 0x5e8170 */ if (!fZ) goto L_005e8170;
L_005e8106:; BB(0x005e8106);
    /* 005e8106: mov eax, dword ptr [ebx + 0x1b0] */ r_eax = R32((u32)(r_ebx+0x1b0u));
    /* 005e810c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e810e: je 0x5e8170 */ if (fZ) goto L_005e8170;
L_005e8110:; BB(0x005e8110);
    /* 005e8110: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005e8114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8115: movsx edx, byte ptr [ebx + 0x1c0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c0u));
    /* 005e811c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e811e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e811f: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e8124u); f_005e83c8();
    /* 005e8124: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005e8128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8129: movsx edx, byte ptr [ebx + 0x1c4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c4u));
    /* 005e8130: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8133: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e8138u); f_005e83c8();
    /* 005e8138: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005e813c: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005e8140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8141: mov ecx, dword ptr [ebx + 0x1b0] */ r_ecx = R32((u32)(r_ebx+0x1b0u));
    /* 005e8147: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8148: call 0x5e9cb8 */ r_esp -= 4; W32(r_esp, 0x5e814du); f_005e9cb8();
    /* 005e814d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e814f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8151: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5e8157u); call_ind(t); }
    /* 005e8157: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e815c: mov ebp, dword ptr [ebx + 0x1b0] */ r_ebp = R32((u32)(r_ebx+0x1b0u));
    /* 005e8162: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005e8165: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e816b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e816d: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
L_005e8170:; BB(0x005e8170);
    /* 005e8170: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8172: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e8177u); f_005d2450();
    /* 005e8177: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8179: movsx ebp, al */ r_ebp = (u32)(i32)(i8)(u8)r_eax;
    /* 005e817c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e817e: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e8183u); f_005d240c();
    /* 005e8183: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8185: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e818au); f_005e84a8();
    /* 005e818a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e818b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e818d: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e8192u); f_005d240c();
    /* 005e8192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8194: call 0x5c51a4 */ r_esp -= 4; W32(r_esp, 0x5e8199u); f_005c51a4();
    /* 005e8199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e819b: je 0x5e83bf */ if (fZ) goto L_005e83bf;
L_005e81a1:; BB(0x005e81a1);
    /* 005e81a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e81a3: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e81a8u); f_005c5198();
    /* 005e81a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e81aa: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e81b0:; BB(0x005e81b0);
    /* 005e81b0: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e81b6: mov eax, dword ptr [edx + 0x328] */ r_eax = R32((u32)(r_edx+0x328u));
    /* 005e81bc: test eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e81c1: je 0x5e83bf */ if (fZ) goto L_005e83bf;
L_005e81c7:; BB(0x005e81c7);
    /* 005e81c7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e81cd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e81cf: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e81d5:; BB(0x005e81d5);
    /* 005e81d5: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e81da: test al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e81dc: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e81e2:; BB(0x005e81e2);
    /* 005e81e2: mov eax, dword ptr [ebx + 0x1b4] */ r_eax = R32((u32)(r_ebx+0x1b4u));
    /* 005e81e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e81ea: je 0x5e83bf */ if (fZ) goto L_005e83bf;
L_005e81f0:; BB(0x005e81f0);
    /* 005e81f0: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 005e81f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e81f5: movsx edx, byte ptr [ebx + 0x1c1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c1u));
    /* 005e81fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e81fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e81ff: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e8204u); f_005e83c8();
    /* 005e8204: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 005e8208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8209: movsx edx, byte ptr [ebx + 0x1c5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c5u));
    /* 005e8210: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8212: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8213: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e8218u); f_005e83c8();
    /* 005e8218: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 005e821c: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 005e8220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8221: mov ecx, dword ptr [ebx + 0x1b4] */ r_ecx = R32((u32)(r_ebx+0x1b4u));
    /* 005e8227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8228: call 0x5e9cb8 */ r_esp -= 4; W32(r_esp, 0x5e822du); f_005e9cb8();
    /* 005e822d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e822f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8231: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5e8237u); call_ind(t); }
    /* 005e8237: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e823c: mov ecx, dword ptr [ebx + 0x1b4] */ r_ecx = R32((u32)(r_ebx+0x1b4u));
    /* 005e8242: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005e8245: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e824b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e824d: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 005e8250: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8253: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8254: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8255: ret  */ FN_RET(0x005e8088); r_esp += 4; return;
L_005e8256:; BB(0x005e8256);
    /* 005e8256: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e8258: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e825e:; BB(0x005e825e);
    /* 005e825e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8260: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e8265u); f_005e84a8();
    /* 005e8265: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8267: call 0x5c51a4 */ r_esp -= 4; W32(r_esp, 0x5e826cu); f_005c51a4();
    /* 005e826c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e826e: je 0x5e8311 */ if (fZ) goto L_005e8311;
L_005e8274:; BB(0x005e8274);
    /* 005e8274: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8276: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e827bu); f_005c5198();
    /* 005e827b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e827d: jne 0x5e8311 */ if (!fZ) goto L_005e8311;
L_005e8283:; BB(0x005e8283);
    /* 005e8283: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e8289: mov eax, dword ptr [edx + 0x328] */ r_eax = R32((u32)(r_edx+0x328u));
    /* 005e828f: test eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8294: je 0x5e8311 */ if (fZ) goto L_005e8311;
L_005e8296:; BB(0x005e8296);
    /* 005e8296: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e829c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e829e: jne 0x5e8311 */ if (!fZ) goto L_005e8311;
L_005e82a0:; BB(0x005e82a0);
    /* 005e82a0: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e82a5: test al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e82a7: jne 0x5e8311 */ if (!fZ) goto L_005e8311;
L_005e82a9:; BB(0x005e82a9);
    /* 005e82a9: mov eax, dword ptr [ebx + 0x1b0] */ r_eax = R32((u32)(r_ebx+0x1b0u));
    /* 005e82af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e82b1: je 0x5e8311 */ if (fZ) goto L_005e8311;
L_005e82b3:; BB(0x005e82b3);
    /* 005e82b3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e82b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e82b7: movsx edx, byte ptr [ebx + 0x1c0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c0u));
    /* 005e82be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e82c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e82c1: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e82c6u); f_005e83c8();
    /* 005e82c6: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005e82ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e82cb: movsx edx, byte ptr [ebx + 0x1c4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c4u));
    /* 005e82d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e82d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e82d5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e82dau); f_005e83c8();
    /* 005e82da: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005e82dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005e82e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e82e2: mov ecx, dword ptr [ebx + 0x1b0] */ r_ecx = R32((u32)(r_ebx+0x1b0u));
    /* 005e82e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e82e9: call 0x5e9cb8 */ r_esp -= 4; W32(r_esp, 0x5e82eeu); f_005e9cb8();
    /* 005e82ee: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e82f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e82f2: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5e82f8u); call_ind(t); }
    /* 005e82f8: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e82fd: mov ebp, dword ptr [ebx + 0x1b0] */ r_ebp = R32((u32)(r_ebx+0x1b0u));
    /* 005e8303: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005e8306: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e830c: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e830e: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
L_005e8311:; BB(0x005e8311);
    /* 005e8311: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8313: call 0x5c51a4 */ r_esp -= 4; W32(r_esp, 0x5e8318u); f_005c51a4();
    /* 005e8318: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e831a: je 0x5e83bf */ if (fZ) goto L_005e83bf;
L_005e8320:; BB(0x005e8320);
    /* 005e8320: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8322: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e8327u); f_005c5198();
    /* 005e8327: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8329: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e832f:; BB(0x005e832f);
    /* 005e832f: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e8335: mov eax, dword ptr [edx + 0x328] */ r_eax = R32((u32)(r_edx+0x328u));
    /* 005e833b: test eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8340: je 0x5e83bf */ if (fZ) goto L_005e83bf;
L_005e8342:; BB(0x005e8342);
    /* 005e8342: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e8348: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e834a: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e834c:; BB(0x005e834c);
    /* 005e834c: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e8351: test al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e8353: jne 0x5e83bf */ if (!fZ) goto L_005e83bf;
L_005e8355:; BB(0x005e8355);
    /* 005e8355: mov eax, dword ptr [ebx + 0x1b4] */ r_eax = R32((u32)(r_ebx+0x1b4u));
    /* 005e835b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e835d: je 0x5e83bf */ if (fZ) goto L_005e83bf;
L_005e835f:; BB(0x005e835f);
    /* 005e835f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005e8363: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8364: movsx edx, byte ptr [ebx + 0x1c1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c1u));
    /* 005e836b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e836d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e836e: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e8373u); f_005e83c8();
    /* 005e8373: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005e8377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8378: movsx edx, byte ptr [ebx + 0x1c5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1c5u));
    /* 005e837f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e8381: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8382: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e8387u); f_005e83c8();
    /* 005e8387: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005e838b: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005e838f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8390: mov ecx, dword ptr [ebx + 0x1b4] */ r_ecx = R32((u32)(r_ebx+0x1b4u));
    /* 005e8396: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8397: call 0x5e9cb8 */ r_esp -= 4; W32(r_esp, 0x5e839cu); f_005e9cb8();
    /* 005e839c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e839e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e83a0: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5e83a6u); call_ind(t); }
    /* 005e83a6: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e83ab: mov ecx, dword ptr [ebx + 0x1b4] */ r_ecx = R32((u32)(r_ebx+0x1b4u));
    /* 005e83b1: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005e83b4: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e83ba: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e83bc: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
L_005e83bf:; BB(0x005e83bf);
    /* 005e83bf: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e83c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e83c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e83c4: ret  */ FN_RET(0x005e8088); r_esp += 4; return;
}

void f_005e83c8(void) /* sub_5E83C8 */
{
    FN_ENTER(0x005e83c8);
    /* 005e83c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e83c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e83ca: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e83cd: mov esi, ecx */ r_esi = r_ecx;
    /* 005e83cf: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005e83d3: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e83d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83db: je 0x5e849e */ if (fZ) goto L_005e849e;
L_005e83e1:; BB(0x005e83e1);
    /* 005e83e1: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83e4: je 0x5e848d */ if (fZ) goto L_005e848d;
L_005e83ea:; BB(0x005e83ea);
    /* 005e83ea: cmp ebp, -2 */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83ed: je 0x5e847c */ if (fZ) goto L_005e847c;
L_005e83f3:; BB(0x005e83f3);
    /* 005e83f3: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 005e83f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83fb: je 0x5e846b */ if (fZ) goto L_005e846b;
L_005e83fd:; BB(0x005e83fd);
    /* 005e83fd: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005e8405: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005e840d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005e8414: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5e8419u); f_0082d7b0();
    /* 005e8419: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005e841f: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005e8423: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8425: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8427: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8429: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e842b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e842d: add edx, dword ptr [eax + 0xebc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xebcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8433: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8435: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x5e843au); f_0083b410();
    /* 005e843a: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x5e843fu); f_004d455c();
    /* 005e843f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8440: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8442: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x5e8447u); f_0083a668();
    /* 005e8447: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005e844b: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005e844f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8451: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e8456u); f_00835c3c();
    /* 005e8456: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8459: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e845eu); f_0082da80();
L_005e845e:; BB(0x005e845e);
    /* 005e845e: mov eax, 1 */ r_eax = 0x1u;
    /* 005e8463: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8467: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8468: ret 8 */ FN_RET(0x005e83c8); r_esp += 12; return;
L_005e846b:; BB(0x005e846b);
    /* 005e846b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005e846f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8470: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8472: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8474: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5e847au); call_ind(t); }
    /* 005e847a: jmp 0x5e845e */ goto L_005e845e;
L_005e847c:; BB(0x005e847c);
    /* 005e847c: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005e8480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8481: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8483: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8485: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5e848bu); call_ind(t); }
    /* 005e848b: jmp 0x5e845e */ goto L_005e845e;
L_005e848d:; BB(0x005e848d);
    /* 005e848d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005e8491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8492: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8494: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8496: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5e849cu); call_ind(t); }
    /* 005e849c: jmp 0x5e845e */ goto L_005e845e;
L_005e849e:; BB(0x005e849e);
    /* 005e849e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e84a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e84a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e84a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e84a5: ret 8 */ FN_RET(0x005e83c8); r_esp += 12; return;
}

void f_005e84a8(void) /* sub_5E84A8 */
{
    FN_ENTER(0x005e84a8);
    /* 005e84a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e84a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e84aa: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e84ad: mov edi, ecx */ r_edi = r_ecx;
    /* 005e84af: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e84b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84b7: je 0x5e87e3 */ if (fZ) goto L_005e87e3;
L_005e84bd:; BB(0x005e84bd);
    /* 005e84bd: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 005e84c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84c5: je 0x5e87e3 */ if (fZ) goto L_005e87e3;
L_005e84cb:; BB(0x005e84cb);
    /* 005e84cb: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e84d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005e84d7: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e84dcu); f_005c5198();
    /* 005e84dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84de: je 0x5e84e7 */ if (fZ) goto L_005e84e7;
L_005e84e0:; BB(0x005e84e0);
    /* 005e84e0: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005e84e5: jmp 0x5e84fa */ goto L_005e84fa;
L_005e84e7:; BB(0x005e84e7);
    /* 005e84e7: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e84ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005e84ee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005e84f0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e84f5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5e84f8u); call_ind(t); }
    /* 005e84f8: mov ebp, eax */ r_ebp = r_eax;
L_005e84fa:; BB(0x005e84fa);
    /* 005e84fa: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e84fd: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e8502u); f_0081a9b8();
    /* 005e8502: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e8503: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8505: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e850au); f_005d2450();
    /* 005e850a: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005e8510: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 005e8513: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8515: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8517: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8519: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e851b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e851d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e851f: add ecx, dword ptr [edx + 0xe0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8525: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e852au); f_0082d990();
    /* 005e852a: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005e852e: mov edx, edi */ r_edx = r_edi;
    /* 005e8530: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005e8534: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005e8538: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005e853c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e853e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8540: mov ebx, eax */ r_ebx = r_eax;
    /* 005e8542: mov ebp, edx */ r_ebp = r_edx;
    /* 005e8544: mov esi, ecx */ r_esi = r_ecx;
L_005e8546:; BB(0x005e8546);
    /* 005e8546: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005e854a: movsx edi, byte ptr [esi + edi + 0x210] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi+0x210u));
    /* 005e8552: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8555: je 0x5e858b */ if (fZ) goto L_005e858b;
L_005e8557:; BB(0x005e8557);
    /* 005e8557: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005e855b: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e8560u); f_005d2450();
    /* 005e8560: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005e8563: cmp al, byte ptr [ebp + 0x210] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0x210u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e8569: jne 0x5e858b */ if (!fZ) goto L_005e858b;
L_005e856b:; BB(0x005e856b);
    /* 005e856b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005e856f: push dword ptr [ebx + edi + 0x21c] */ { u32 v = R32((u32)(r_ebx+r_edi+0x21cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8576: push dword ptr [ebx + edi + 0x218] */ { u32 v = R32((u32)(r_ebx+r_edi+0x218u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e857d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e857f: push dword ptr [ebx + edi + 0x214] */ { u32 v = R32((u32)(r_ebx+r_edi+0x214u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8586: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5e858bu); f_0082fa0c();
L_005e858b:; BB(0x005e858b);
    /* 005e858b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e858e: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e8591: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e8594: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8597: jl 0x5e8546 */ if ((fS!=fO)) goto L_005e8546;
L_005e8599:; BB(0x005e8599);
    /* 005e8599: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 005e859d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005e85a1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005e85a5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005e85a9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e85ab: je 0x5e875b */ if (fZ) goto L_005e875b;
L_005e85b1:; BB(0x005e85b1);
    /* 005e85b1: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005e85b7: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e85b9: jne 0x5e875b */ if (!fZ) goto L_005e875b;
L_005e85bf:; BB(0x005e85bf);
    /* 005e85bf: movzx eax, word ptr [edi + 0x1f0] */ r_eax = (u32)R16((u32)(r_edi+0x1f0u));
    /* 005e85c6: mov dword ptr [0xa8dcd0], edi */ W32((u32)(0xa8dcd0u), r_edi);
    /* 005e85cc: mov word ptr [0xa8dcd4], ax */ W16((u32)(0xa8dcd4u), (u16)r_eax);
    /* 005e85d2: mov eax, dword ptr [edi + 0x200] */ r_eax = R32((u32)(r_edi+0x200u));
    /* 005e85d8: movzx edx, byte ptr [eax + 0x25] */ r_edx = (u32)R8((u32)(r_eax+0x25u));
    /* 005e85dc: mov word ptr [0xa8dcd8], dx */ W16((u32)(0xa8dcd8u), (u16)r_edx);
    /* 005e85e3: movzx ebp, byte ptr [eax + 0x26] */ r_ebp = (u32)R8((u32)(r_eax+0x26u));
    /* 005e85e7: mov word ptr [0xa8dcda], bp */ W16((u32)(0xa8dcdau), (u16)r_ebp);
    /* 005e85ee: movzx eax, byte ptr [eax + 0x27] */ r_eax = (u32)R8((u32)(r_eax+0x27u));
    /* 005e85f2: mov word ptr [0xa8dcdc], ax */ W16((u32)(0xa8dcdcu), (u16)r_eax);
    /* 005e85f8: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e85fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8600: je 0x5e87d4 */ if (fZ) goto L_005e87d4;
L_005e8606:; BB(0x005e8606);
    /* 005e8606: mov ecx, 0x5e6364 */ r_ecx = 0x5e6364u;
    /* 005e860b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e8610u); f_0082fac4();
L_005e8610:; BB(0x005e8610);
    /* 005e8610: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5e8615u); f_005cb0c8();
    /* 005e8615: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8617: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e861cu); f_005c5198();
    /* 005e861c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e861e: je 0x5e8657 */ if (fZ) goto L_005e8657;
L_005e8620:; BB(0x005e8620);
    /* 005e8620: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e8626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8628: je 0x5e8783 */ if (fZ) goto L_005e8783;
L_005e862e:; BB(0x005e862e);
    /* 005e862e: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e8633u); f_0082fa9c();
    /* 005e8633: push dword ptr [edi + 0x1fc] */ { u32 v = R32((u32)(r_edi+0x1fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8639: push dword ptr [edi + 0x194] */ { u32 v = R32((u32)(r_edi+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e863f: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8645: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e864au); f_0083046c();
    /* 005e864a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e864d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e8652u); f_0082faac();
    /* 005e8652: jmp 0x5e8721 */ goto L_005e8721;
L_005e8657:; BB(0x005e8657);
    /* 005e8657: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e865c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e865f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e8664: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8666: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5e866bu); f_005c3538();
    /* 005e866b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e866e: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5e8673u); f_005cb158();
    /* 005e8673: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005e8679: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e867e: je 0x5e86b6 */ if (fZ) goto L_005e86b6;
L_005e8680:; BB(0x005e8680);
    /* 005e8680: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8685: je 0x5e8690 */ if (fZ) goto L_005e8690;
L_005e8687:; BB(0x005e8687);
    /* 005e8687: movzx ebp, byte ptr [edi + 0x20f] */ r_ebp = (u32)R8((u32)(r_edi+0x20fu));
    /* 005e868e: jmp 0x5e8692 */ goto L_005e8692;
L_005e8690:; BB(0x005e8690);
    /* 005e8690: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005e8692:; BB(0x005e8692);
    /* 005e8692: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8697: je 0x5e86a2 */ if (fZ) goto L_005e86a2;
L_005e8699:; BB(0x005e8699);
    /* 005e8699: movzx edx, byte ptr [edi + 0x20f] */ r_edx = (u32)R8((u32)(r_edi+0x20fu));
    /* 005e86a0: jmp 0x5e86a4 */ goto L_005e86a4;
L_005e86a2:; BB(0x005e86a2);
    /* 005e86a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005e86a4:; BB(0x005e86a4);
    /* 005e86a4: movsx eax, byte ptr [edi + 0x20e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x20eu));
    /* 005e86ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e86ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e86ae: call 0x5cb350 */ r_esp -= 4; W32(r_esp, 0x5e86b3u); f_005cb350();
    /* 005e86b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e86b6:; BB(0x005e86b6);
    /* 005e86b6: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e86bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86be: je 0x5e879a */ if (fZ) goto L_005e879a;
L_005e86c4:; BB(0x005e86c4);
    /* 005e86c4: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e86c9: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86ce: je 0x5e86dc */ if (fZ) goto L_005e86dc;
L_005e86d0:; BB(0x005e86d0);
    /* 005e86d0: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e86d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86d8: jne 0x5e870a */ if (!fZ) goto L_005e870a;
L_005e86da:; BB(0x005e86da);
    /* 005e86da: jmp 0x5e86e6 */ goto L_005e86e6;
L_005e86dc:; BB(0x005e86dc);
    /* 005e86dc: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e86e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86e4: je 0x5e870a */ if (fZ) goto L_005e870a;
L_005e86e6:; BB(0x005e86e6);
    /* 005e86e6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e86ebu); f_0082fa9c();
    /* 005e86eb: push dword ptr [edi + 0x1fc] */ { u32 v = R32((u32)(r_edi+0x1fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e86f1: push dword ptr [edi + 0x194] */ { u32 v = R32((u32)(r_edi+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e86f7: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e86fd: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e8702u); f_0083046c();
    /* 005e8702: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8705: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e870au); f_0082faac();
L_005e870a:; BB(0x005e870a);
    /* 005e870a: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005e8710: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8715: je 0x5e871c */ if (fZ) goto L_005e871c;
L_005e8717:; BB(0x005e8717);
    /* 005e8717: call 0x66fab8 */ r_esp -= 4; W32(r_esp, 0x5e871cu); f_0066fab8();
L_005e871c:; BB(0x005e871c);
    /* 005e871c: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5e8721u); f_005cb228();
L_005e8721:; BB(0x005e8721);
    /* 005e8721: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e8726u); f_005c3400();
    /* 005e8726: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e872bu); f_005c3450();
    /* 005e872b: mov ecx, edi */ r_ecx = r_edi;
    /* 005e872d: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e8732u); f_005c34bc();
    /* 005e8732: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8734: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e8739u); f_005c3504();
    /* 005e8739: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5e873eu); f_005cb114();
    /* 005e873e: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e8744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8746: je 0x5e878e */ if (fZ) goto L_005e878e;
L_005e8748:; BB(0x005e8748);
    /* 005e8748: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e874a: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e874fu); f_0082fac4();
L_005e874f:; BB(0x005e874f);
    /* 005e874f: mov dword ptr [0xa8d848], 0 */ W32((u32)(0xa8d848u), 0x0u);
    /* 005e8759: jmp 0x5e876e */ goto L_005e876e;
L_005e875b:; BB(0x005e875b);
    /* 005e875b: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e8761: push dword ptr [eax + 0xebc] */ { u32 v = R32((u32)(r_eax+0xebcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8767: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8769: call 0x5c3568 */ r_esp -= 4; W32(r_esp, 0x5e876eu); f_005c3568();
L_005e876e:; BB(0x005e876e);
    /* 005e876e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e8773u); f_0082da80();
    /* 005e8773: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e877d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8781: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e8782: ret  */ FN_RET(0x005e84a8); r_esp += 4; return;
L_005e8783:; BB(0x005e8783);
    /* 005e8783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8785: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8787: call 0x5c2f88 */ r_esp -= 4; W32(r_esp, 0x5e878cu); f_005c2f88();
    /* 005e878c: jmp 0x5e8721 */ goto L_005e8721;
L_005e878e:; BB(0x005e878e);
    /* 005e878e: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 005e8798: jmp 0x5e874f */ goto L_005e874f;
L_005e879a:; BB(0x005e879a);
    /* 005e879a: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005e87a0: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e87a2: je 0x5e87bc */ if (fZ) goto L_005e87bc;
L_005e87a4:; BB(0x005e87a4);
    /* 005e87a4: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e87aa: push dword ptr [eax + 0xebc] */ { u32 v = R32((u32)(r_eax+0xebcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e87b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005e87b2: call 0x5c3220 */ r_esp -= 4; W32(r_esp, 0x5e87b7u); f_005c3220();
    /* 005e87b7: jmp 0x5e870a */ goto L_005e870a;
L_005e87bc:; BB(0x005e87bc);
    /* 005e87bc: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e87c2: push dword ptr [eax + 0xebc] */ { u32 v = R32((u32)(r_eax+0xebcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e87c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005e87ca: call 0x5c2f88 */ r_esp -= 4; W32(r_esp, 0x5e87cfu); f_005c2f88();
    /* 005e87cf: jmp 0x5e870a */ goto L_005e870a;
L_005e87d4:; BB(0x005e87d4);
    /* 005e87d4: mov dword ptr [edi + 0xe0], 0x5e6364 */ W32((u32)(r_edi+0xe0u), 0x5e6364u);
    /* 005e87de: jmp 0x5e8610 */ goto L_005e8610;
L_005e87e3:; BB(0x005e87e3);
    /* 005e87e3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e87e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e87e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e87e8: ret  */ FN_RET(0x005e84a8); r_esp += 4; return;
}

void f_005e8520(void)
{
    FN_ENTER(0x005e8520);
    /* 005e8520: mov ah, al */ r_eax = (r_eax & 0xffff00ffu) | ((((u8)r_eax) & 0xffu) << 8);
    /* 005e8522: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005e8524: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e8526: push sp */ { u32 v = (u16)r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8528: and al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e852a: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005e852e: mov edx, edi */ r_edx = r_edi;
    /* 005e8530: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005e8534: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005e8538: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005e853c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e853e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8540: mov ebx, eax */ r_ebx = r_eax;
    /* 005e8542: mov ebp, edx */ r_ebp = r_edx;
    /* 005e8544: mov esi, ecx */ r_esi = r_ecx;
L_005e8546:; BB(0x005e8546);
    /* 005e8546: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005e854a: movsx edi, byte ptr [esi + edi + 0x210] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi+0x210u));
    /* 005e8552: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8555: je 0x5e858b */ if (fZ) goto L_005e858b;
L_005e8557:; BB(0x005e8557);
    /* 005e8557: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005e855b: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e8560u); f_005d2450();
    /* 005e8560: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005e8563: cmp al, byte ptr [ebp + 0x210] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0x210u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e8569: jne 0x5e858b */ if (!fZ) goto L_005e858b;
L_005e856b:; BB(0x005e856b);
    /* 005e856b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005e856f: push dword ptr [ebx + edi + 0x21c] */ { u32 v = R32((u32)(r_ebx+r_edi+0x21cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8576: push dword ptr [ebx + edi + 0x218] */ { u32 v = R32((u32)(r_ebx+r_edi+0x218u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e857d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e857f: push dword ptr [ebx + edi + 0x214] */ { u32 v = R32((u32)(r_ebx+r_edi+0x214u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8586: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5e858bu); f_0082fa0c();
L_005e858b:; BB(0x005e858b);
    /* 005e858b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e858e: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e8591: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e8594: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8597: jl 0x5e8546 */ if ((fS!=fO)) goto L_005e8546;
L_005e8599:; BB(0x005e8599);
    /* 005e8599: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 005e859d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005e85a1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005e85a5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005e85a9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e85ab: je 0x5e875b */ if (fZ) goto L_005e875b;
L_005e85b1:; BB(0x005e85b1);
    /* 005e85b1: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005e85b7: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e85b9: jne 0x5e875b */ if (!fZ) goto L_005e875b;
L_005e85bf:; BB(0x005e85bf);
    /* 005e85bf: movzx eax, word ptr [edi + 0x1f0] */ r_eax = (u32)R16((u32)(r_edi+0x1f0u));
    /* 005e85c6: mov dword ptr [0xa8dcd0], edi */ W32((u32)(0xa8dcd0u), r_edi);
    /* 005e85cc: mov word ptr [0xa8dcd4], ax */ W16((u32)(0xa8dcd4u), (u16)r_eax);
    /* 005e85d2: mov eax, dword ptr [edi + 0x200] */ r_eax = R32((u32)(r_edi+0x200u));
    /* 005e85d8: movzx edx, byte ptr [eax + 0x25] */ r_edx = (u32)R8((u32)(r_eax+0x25u));
    /* 005e85dc: mov word ptr [0xa8dcd8], dx */ W16((u32)(0xa8dcd8u), (u16)r_edx);
    /* 005e85e3: movzx ebp, byte ptr [eax + 0x26] */ r_ebp = (u32)R8((u32)(r_eax+0x26u));
    /* 005e85e7: mov word ptr [0xa8dcda], bp */ W16((u32)(0xa8dcdau), (u16)r_ebp);
    /* 005e85ee: movzx eax, byte ptr [eax + 0x27] */ r_eax = (u32)R8((u32)(r_eax+0x27u));
    /* 005e85f2: mov word ptr [0xa8dcdc], ax */ W16((u32)(0xa8dcdcu), (u16)r_eax);
    /* 005e85f8: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e85fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8600: je 0x5e87d4 */ if (fZ) goto L_005e87d4;
L_005e8606:; BB(0x005e8606);
    /* 005e8606: mov ecx, 0x5e6364 */ r_ecx = 0x5e6364u;
    /* 005e860b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e8610u); f_0082fac4();
L_005e8610:; BB(0x005e8610);
    /* 005e8610: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5e8615u); f_005cb0c8();
    /* 005e8615: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8617: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e861cu); f_005c5198();
    /* 005e861c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e861e: je 0x5e8657 */ if (fZ) goto L_005e8657;
L_005e8620:; BB(0x005e8620);
    /* 005e8620: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e8626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8628: je 0x5e8783 */ if (fZ) goto L_005e8783;
L_005e862e:; BB(0x005e862e);
    /* 005e862e: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e8633u); f_0082fa9c();
    /* 005e8633: push dword ptr [edi + 0x1fc] */ { u32 v = R32((u32)(r_edi+0x1fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8639: push dword ptr [edi + 0x194] */ { u32 v = R32((u32)(r_edi+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e863f: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8645: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e864au); f_0083046c();
    /* 005e864a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e864d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e8652u); f_0082faac();
    /* 005e8652: jmp 0x5e8721 */ goto L_005e8721;
L_005e8657:; BB(0x005e8657);
    /* 005e8657: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e865c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e865f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e8664: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8666: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5e866bu); f_005c3538();
    /* 005e866b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e866e: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5e8673u); f_005cb158();
    /* 005e8673: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005e8679: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e867e: je 0x5e86b6 */ if (fZ) goto L_005e86b6;
L_005e8680:; BB(0x005e8680);
    /* 005e8680: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8685: je 0x5e8690 */ if (fZ) goto L_005e8690;
L_005e8687:; BB(0x005e8687);
    /* 005e8687: movzx ebp, byte ptr [edi + 0x20f] */ r_ebp = (u32)R8((u32)(r_edi+0x20fu));
    /* 005e868e: jmp 0x5e8692 */ goto L_005e8692;
L_005e8690:; BB(0x005e8690);
    /* 005e8690: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005e8692:; BB(0x005e8692);
    /* 005e8692: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8697: je 0x5e86a2 */ if (fZ) goto L_005e86a2;
L_005e8699:; BB(0x005e8699);
    /* 005e8699: movzx edx, byte ptr [edi + 0x20f] */ r_edx = (u32)R8((u32)(r_edi+0x20fu));
    /* 005e86a0: jmp 0x5e86a4 */ goto L_005e86a4;
L_005e86a2:; BB(0x005e86a2);
    /* 005e86a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005e86a4:; BB(0x005e86a4);
    /* 005e86a4: movsx eax, byte ptr [edi + 0x20e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x20eu));
    /* 005e86ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e86ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e86ae: call 0x5cb350 */ r_esp -= 4; W32(r_esp, 0x5e86b3u); f_005cb350();
    /* 005e86b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e86b6:; BB(0x005e86b6);
    /* 005e86b6: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e86bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86be: je 0x5e879a */ if (fZ) goto L_005e879a;
L_005e86c4:; BB(0x005e86c4);
    /* 005e86c4: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e86c9: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86ce: je 0x5e86dc */ if (fZ) goto L_005e86dc;
L_005e86d0:; BB(0x005e86d0);
    /* 005e86d0: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e86d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86d8: jne 0x5e870a */ if (!fZ) goto L_005e870a;
L_005e86da:; BB(0x005e86da);
    /* 005e86da: jmp 0x5e86e6 */ goto L_005e86e6;
L_005e86dc:; BB(0x005e86dc);
    /* 005e86dc: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e86e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86e4: je 0x5e870a */ if (fZ) goto L_005e870a;
L_005e86e6:; BB(0x005e86e6);
    /* 005e86e6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e86ebu); f_0082fa9c();
    /* 005e86eb: push dword ptr [edi + 0x1fc] */ { u32 v = R32((u32)(r_edi+0x1fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e86f1: push dword ptr [edi + 0x194] */ { u32 v = R32((u32)(r_edi+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e86f7: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e86fd: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e8702u); f_0083046c();
    /* 005e8702: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8705: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e870au); f_0082faac();
L_005e870a:; BB(0x005e870a);
    /* 005e870a: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005e8710: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8715: je 0x5e871c */ if (fZ) goto L_005e871c;
L_005e8717:; BB(0x005e8717);
    /* 005e8717: call 0x66fab8 */ r_esp -= 4; W32(r_esp, 0x5e871cu); f_0066fab8();
L_005e871c:; BB(0x005e871c);
    /* 005e871c: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5e8721u); f_005cb228();
L_005e8721:; BB(0x005e8721);
    /* 005e8721: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e8726u); f_005c3400();
    /* 005e8726: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e872bu); f_005c3450();
    /* 005e872b: mov ecx, edi */ r_ecx = r_edi;
    /* 005e872d: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e8732u); f_005c34bc();
    /* 005e8732: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8734: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e8739u); f_005c3504();
    /* 005e8739: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5e873eu); f_005cb114();
    /* 005e873e: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e8744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8746: je 0x5e878e */ if (fZ) goto L_005e878e;
L_005e8748:; BB(0x005e8748);
    /* 005e8748: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e874a: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e874fu); f_0082fac4();
L_005e874f:; BB(0x005e874f);
    /* 005e874f: mov dword ptr [0xa8d848], 0 */ W32((u32)(0xa8d848u), 0x0u);
    /* 005e8759: jmp 0x5e876e */ goto L_005e876e;
L_005e875b:; BB(0x005e875b);
    /* 005e875b: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e8761: push dword ptr [eax + 0xebc] */ { u32 v = R32((u32)(r_eax+0xebcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8767: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8769: call 0x5c3568 */ r_esp -= 4; W32(r_esp, 0x5e876eu); f_005c3568();
L_005e876e:; BB(0x005e876e);
    /* 005e876e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e8773u); f_0082da80();
    /* 005e8773: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e877d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8781: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e8782: ret  */ FN_RET(0x005e8520); r_esp += 4; return;
L_005e8783:; BB(0x005e8783);
    /* 005e8783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8785: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8787: call 0x5c2f88 */ r_esp -= 4; W32(r_esp, 0x5e878cu); f_005c2f88();
    /* 005e878c: jmp 0x5e8721 */ goto L_005e8721;
L_005e878e:; BB(0x005e878e);
    /* 005e878e: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 005e8798: jmp 0x5e874f */ goto L_005e874f;
L_005e879a:; BB(0x005e879a);
    /* 005e879a: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005e87a0: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e87a2: je 0x5e87bc */ if (fZ) goto L_005e87bc;
L_005e87a4:; BB(0x005e87a4);
    /* 005e87a4: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e87aa: push dword ptr [eax + 0xebc] */ { u32 v = R32((u32)(r_eax+0xebcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e87b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005e87b2: call 0x5c3220 */ r_esp -= 4; W32(r_esp, 0x5e87b7u); f_005c3220();
    /* 005e87b7: jmp 0x5e870a */ goto L_005e870a;
L_005e87bc:; BB(0x005e87bc);
    /* 005e87bc: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e87c2: push dword ptr [eax + 0xebc] */ { u32 v = R32((u32)(r_eax+0xebcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e87c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005e87ca: call 0x5c2f88 */ r_esp -= 4; W32(r_esp, 0x5e87cfu); f_005c2f88();
    /* 005e87cf: jmp 0x5e870a */ goto L_005e870a;
L_005e87d4:; BB(0x005e87d4);
    /* 005e87d4: mov dword ptr [edi + 0xe0], 0x5e6364 */ W32((u32)(r_edi+0xe0u), 0x5e6364u);
    /* 005e87de: jmp 0x5e8610 */ goto L_005e8610;
}

void f_005e87ec(void) /* sub_5E87EC */
{
    FN_ENTER(0x005e87ec);
    /* 005e87ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e87ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e87ee: mov edx, ecx */ r_edx = r_ecx;
    /* 005e87f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e87f2: mov ebx, eax */ r_ebx = r_eax;
    /* 005e87f4: mov esi, edx */ r_esi = r_edx;
L_005e87f6:; BB(0x005e87f6);
    /* 005e87f6: mov ecx, dword ptr [esi + ebx*4 + 0x1b0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x1b0u));
    /* 005e87fd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e8800: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8802: je 0x5e8809 */ if (fZ) goto L_005e8809;
L_005e8804:; BB(0x005e8804);
    /* 005e8804: call 0x5e9b9c */ r_esp -= 4; W32(r_esp, 0x5e8809u); f_005e9b9c();
L_005e8809:; BB(0x005e8809);
    /* 005e8809: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e880c: jl 0x5e87f6 */ if ((fS!=fO)) goto L_005e87f6;
L_005e880e:; BB(0x005e880e);
    /* 005e880e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e880f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8810: ret  */ FN_RET(0x005e87ec); r_esp += 4; return;
}

void f_005e8814(void) /* sub_5E8814 */
{
    FN_ENTER(0x005e8814);
    /* 005e8814: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8815: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8816: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e8818: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005e881e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e8820: je 0x5e88c7 */ if (fZ) goto L_005e88c7;
L_005e8826:; BB(0x005e8826);
    /* 005e8826: mov eax, dword ptr [eax + 0x340] */ r_eax = R32((u32)(r_eax+0x340u));
    /* 005e882c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e882e: je 0x5e88c7 */ if (fZ) goto L_005e88c7;
L_005e8834:; BB(0x005e8834);
    /* 005e8834: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005e883a: mov eax, edx */ r_eax = r_edx;
    /* 005e883c: and eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e883f: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e8842: je 0x5e8847 */ if (fZ) goto L_005e8847;
L_005e8844:; BB(0x005e8844);
    /* 005e8844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8845: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8846: ret  */ FN_RET(0x005e8814); r_esp += 4; return;
L_005e8847:; BB(0x005e8847);
    /* 005e8847: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e884d: je 0x5e8852 */ if (fZ) goto L_005e8852;
L_005e884f:; BB(0x005e884f);
    /* 005e884f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8850: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8851: ret  */ FN_RET(0x005e8814); r_esp += 4; return;
L_005e8852:; BB(0x005e8852);
    /* 005e8852: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e8858: je 0x5e885d */ if (fZ) goto L_005e885d;
L_005e885a:; BB(0x005e885a);
    /* 005e885a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e885b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e885c: ret  */ FN_RET(0x005e8814); r_esp += 4; return;
L_005e885d:; BB(0x005e885d);
    /* 005e885d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e8860: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e8862: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x5e8868u); call_ind(t); }
    /* 005e8868: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005e886e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8873: je 0x5e88bc */ if (fZ) goto L_005e88bc;
L_005e8875:; BB(0x005e8875);
    /* 005e8875: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e8877: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e887cu); f_005d2450();
    /* 005e887c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e887e: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 005e8881: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e8883: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e8888u); f_005d240c();
    /* 005e8888: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e888a: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e888fu); f_005e84a8();
    /* 005e888f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e8892: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e8897u); f_005d240c();
    /* 005e8897: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e8899: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e889eu); f_005d2450();
    /* 005e889e: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e88a0: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 005e88a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e88a5: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e88aau); f_005d240c();
    /* 005e88aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e88ac: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e88b1u); f_005e84a8();
    /* 005e88b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e88b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e88b4: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e88b9u); f_005d240c();
    /* 005e88b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e88ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e88bb: ret  */ FN_RET(0x005e8814); r_esp += 4; return;
L_005e88bc:; BB(0x005e88bc);
    /* 005e88bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e88be: jne 0x5e88c7 */ if (!fZ) goto L_005e88c7;
L_005e88c0:; BB(0x005e88c0);
    /* 005e88c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e88c2: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e88c7u); f_005e84a8();
L_005e88c7:; BB(0x005e88c7);
    /* 005e88c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e88c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e88c9: ret  */ FN_RET(0x005e8814); r_esp += 4; return;
}

void f_005e88cc(void) /* sub_5E88CC */
{
    FN_ENTER(0x005e88cc);
    /* 005e88cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e88cd: mov esi, ecx */ r_esi = r_ecx;
    /* 005e88cf: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005e88d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e88d7: je 0x5e8906 */ if (fZ) goto L_005e8906;
L_005e88d9:; BB(0x005e88d9);
    /* 005e88d9: mov edx, dword ptr [esi + 0x1dc] */ r_edx = R32((u32)(r_esi+0x1dcu));
    /* 005e88df: mov eax, edx */ r_eax = r_edx;
    /* 005e88e1: and eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e88e4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e88e7: je 0x5e88eb */ if (fZ) goto L_005e88eb;
L_005e88e9:; BB(0x005e88e9);
    /* 005e88e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e88ea: ret  */ FN_RET(0x005e88cc); r_esp += 4; return;
L_005e88eb:; BB(0x005e88eb);
    /* 005e88eb: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e88f1: je 0x5e88f5 */ if (fZ) goto L_005e88f5;
L_005e88f3:; BB(0x005e88f3);
    /* 005e88f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e88f4: ret  */ FN_RET(0x005e88cc); r_esp += 4; return;
L_005e88f5:; BB(0x005e88f5);
    /* 005e88f5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e88f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005e88f9: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x5e88ffu); call_ind(t); }
    /* 005e88ff: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8901: call 0x5e8088 */ r_esp -= 4; W32(r_esp, 0x5e8906u); f_005e8088();
L_005e8906:; BB(0x005e8906);
    /* 005e8906: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8907: ret  */ FN_RET(0x005e88cc); r_esp += 4; return;
}

void f_005e8908(void) /* sub_5E8908 */
{
    FN_ENTER(0x005e8908);
    /* 005e8908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8909: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e890a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e890b: sub esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8911: mov esi, ecx */ r_esi = r_ecx;
    /* 005e8913: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8915: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e891au); f_005e908c();
    /* 005e891a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e891c: je 0x5e8cd4 */ if (fZ) goto L_005e8cd4;
L_005e8922:; BB(0x005e8922);
    /* 005e8922: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 005e8928: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e892a: jne 0x5e8cd4 */ if (!fZ) goto L_005e8cd4;
L_005e8930:; BB(0x005e8930);
    /* 005e8930: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5e8935u); f_00807d60();
    /* 005e8935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8937: je 0x5e8cd4 */ if (fZ) goto L_005e8cd4;
L_005e893d:; BB(0x005e893d);
    /* 005e893d: mov edi, dword ptr [esi + 0xf8] */ r_edi = R32((u32)(r_esi+0xf8u));
    /* 005e8943: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005e8946: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005e8949: mov ecx, esi */ r_ecx = r_esi;
    /* 005e894b: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5e8950u); f_005e7f6c();
    /* 005e8950: mov dword ptr [esi + 0x1f8], eax */ W32((u32)(r_esi+0x1f8u), r_eax);
    /* 005e8956: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e8958: add edi, 0x8a4 */ {  u32 a = r_edi; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e895e: mov ecx, edi */ r_ecx = r_edi;
    /* 005e8960: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e8965u); f_006a2e8c();
    /* 005e8965: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e8968: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e896a: je 0x5e8984 */ if (fZ) goto L_005e8984;
L_005e896c:; BB(0x005e896c);
    /* 005e896c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e896f: jne 0x5e8978 */ if (!fZ) goto L_005e8978;
L_005e8971:; BB(0x005e8971);
    /* 005e8971: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005e8976: jmp 0x5e8986 */ goto L_005e8986;
L_005e8978:; BB(0x005e8978);
    /* 005e8978: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e897b: jne 0x5e8986 */ if (!fZ) goto L_005e8986;
L_005e897d:; BB(0x005e897d);
    /* 005e897d: mov ebx, 2 */ r_ebx = 0x2u;
    /* 005e8982: jmp 0x5e8986 */ goto L_005e8986;
L_005e8984:; BB(0x005e8984);
    /* 005e8984: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005e8986:; BB(0x005e8986);
    /* 005e8986: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e8989: call 0x5e4aac */ r_esp -= 4; W32(r_esp, 0x5e898eu); f_005e4aac();
    /* 005e898e: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005e8995: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005e899c: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005e899f: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005e89a3: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 005e89a7: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005e89aa: mov ebx, dword ptr [esi + 0xf8] */ r_ebx = R32((u32)(r_esi+0xf8u));
    /* 005e89b0: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005e89b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e89b5: call 0x5e4e98 */ r_esp -= 4; W32(r_esp, 0x5e89bau); f_005e4e98();
    /* 005e89ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e89bb: mov eax, dword ptr [esi + 0x1dc] */ r_eax = R32((u32)(r_esi+0x1dcu));
    /* 005e89c1: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89c6: je 0x5e89e4 */ if (fZ) goto L_005e89e4;
L_005e89c8:; BB(0x005e89c8);
    /* 005e89c8: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005e89ce: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 005e89d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e89d3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e89d5: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005e89da: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x5e89dfu); f_006ff4ac();
    /* 005e89df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e89e2: jmp 0x5e8a10 */ goto L_005e8a10;
L_005e89e4:; BB(0x005e89e4);
    /* 005e89e4: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89e9: je 0x5e8a10 */ if (fZ) goto L_005e8a10;
L_005e89eb:; BB(0x005e89eb);
    /* 005e89eb: mov ecx, esi */ r_ecx = r_esi;
    /* 005e89ed: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5e89f2u); f_005e90b0();
    /* 005e89f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89f4: je 0x5e8a10 */ if (fZ) goto L_005e8a10;
L_005e89f6:; BB(0x005e89f6);
    /* 005e89f6: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005e89fc: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 005e8a00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a01: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a03: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a08: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x5e8a0du); f_006ff4ac();
    /* 005e8a0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8a10:; BB(0x005e8a10);
    /* 005e8a10: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e8a12: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8a14: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5e8a1au); call_ind(t); }
    /* 005e8a1a: mov eax, dword ptr [esi + 0x1dc] */ r_eax = R32((u32)(r_esi+0x1dcu));
    /* 005e8a20: or eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e8a25: mov dword ptr [esi + 0x1dc], eax */ W32((u32)(r_esi+0x1dcu), r_eax);
    /* 005e8a2b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e8a2d: jne 0x5e8cd4 */ if (!fZ) goto L_005e8cd4;
L_005e8a33:; BB(0x005e8a33);
    /* 005e8a33: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a38: je 0x5e8c9b */ if (fZ) goto L_005e8c9b;
L_005e8a3e:; BB(0x005e8a3e);
    /* 005e8a3e: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005e8a42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a43: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8a45: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5e8a4au); f_005e7534();
    /* 005e8a4a: mov eax, dword ptr [esi + 0x1dc] */ r_eax = R32((u32)(r_esi+0x1dcu));
    /* 005e8a50: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a55: je 0x5e8b95 */ if (fZ) goto L_005e8b95;
L_005e8a5b:; BB(0x005e8a5b);
    /* 005e8a5b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8a5d: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e8a62u); f_005e908c();
    /* 005e8a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a64: je 0x5e8cd4 */ if (fZ) goto L_005e8cd4;
L_005e8a6a:; BB(0x005e8a6a);
    /* 005e8a6a: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e8a70: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8a76: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e8a7bu); f_006a2e8c();
    /* 005e8a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a7d: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e8a82u); f_005e4ba8();
    /* 005e8a82: mov ebx, eax */ r_ebx = r_eax;
    /* 005e8a84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8a87: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 005e8a8e: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5e8a93u); f_005c5ae4();
    /* 005e8a93: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 005e8a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a9b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8a9d: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5e8aa2u); f_005e8f04();
    /* 005e8aa2: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005e8aa6: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005e8aaa: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 005e8ab1: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005e8ab5: mov dword ptr [esp + 0xbc], edi */ W32((u32)(r_esp+0xbcu), r_edi);
    /* 005e8abc: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8abe: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 005e8ac5: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005e8acb: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 005e8ace: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 005e8ad5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e8ad7: mov ebx, dword ptr [esi + 0x208] */ r_ebx = R32((u32)(r_esi+0x208u));
    /* 005e8add: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005e8adf: mov dword ptr [esp + 0xf4], eax */ W32((u32)(r_esp+0xf4u), r_eax);
    /* 005e8ae6: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e8ae9: mov dword ptr [esp + 0xf0], ebx */ W32((u32)(r_esp+0xf0u), r_ebx);
    /* 005e8af0: mov dword ptr [esp + 0x100], eax */ W32((u32)(r_esp+0x100u), r_eax);
    /* 005e8af7: mov dword ptr [esp + 0xfc], 0 */ W32((u32)(r_esp+0xfcu), 0x0u);
    /* 005e8b02: lea eax, [esp + 0xb8] */ r_eax = (u32)(r_esp+0xb8u);
    /* 005e8b09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b0a: call dword ptr [edx + 0xe8] */ { u32 t = R32((u32)(r_edx+0xe8u)); r_esp -= 4; W32(r_esp, 0x5e8b10u); call_ind(t); }
    /* 005e8b10: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8b12: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e8b17u); f_005e8fa4();
    /* 005e8b17: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005e8b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b1c: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8b1e: call 0x5e9010 */ r_esp -= 4; W32(r_esp, 0x5e8b23u); f_005e9010();
    /* 005e8b23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8b25: je 0x5e8d09 */ if (fZ) goto L_005e8d09;
L_005e8b2b:; BB(0x005e8b2b);
    /* 005e8b2b: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 005e8b2e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e8b30: mov dword ptr [esp + 0xb8], eax */ W32((u32)(r_esp+0xb8u), r_eax);
    /* 005e8b37: mov eax, dword ptr [esp + 0xf8] */ r_eax = R32((u32)(r_esp+0xf8u));
    /* 005e8b3e: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005e8b41: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 005e8b48: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 005e8b4b: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e8b50: mov dword ptr [esp + 0xc0], edi */ W32((u32)(r_esp+0xc0u), r_edi);
    /* 005e8b57: mov dword ptr [esp + 0xf8], eax */ W32((u32)(r_esp+0xf8u), r_eax);
L_005e8b5e:; BB(0x005e8b5e);
    /* 005e8b5e: mov eax, dword ptr [esp + 0xdc] */ r_eax = R32((u32)(r_esp+0xdcu));
    /* 005e8b65: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8b68: je 0x5e8cde */ if (fZ) goto L_005e8cde;
L_005e8b6e:; BB(0x005e8b6e);
    /* 005e8b6e: lea eax, [esp + 0xb8] */ r_eax = (u32)(r_esp+0xb8u);
    /* 005e8b75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b76: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8b7c: call 0x5c60f0 */ r_esp -= 4; W32(r_esp, 0x5e8b81u); f_005c60f0();
    /* 005e8b81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8b84: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8b86: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e8b8bu); f_005e9058();
    /* 005e8b8b: add esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8b91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8b92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8b93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e8b94: ret  */ FN_RET(0x005e8908); r_esp += 4; return;
L_005e8b95:; BB(0x005e8b95);
    /* 005e8b95: mov edi, dword ptr [esi + 0x1ac] */ r_edi = R32((u32)(r_esi+0x1acu));
    /* 005e8b9b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8b9d: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e8ba2u); f_005e908c();
    /* 005e8ba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ba4: je 0x5e8cd4 */ if (fZ) goto L_005e8cd4;
L_005e8baa:; BB(0x005e8baa);
    /* 005e8baa: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e8bb0: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8bb6: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e8bbbu); f_006a2e8c();
    /* 005e8bbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bbd: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e8bc2u); f_005e4ba8();
    /* 005e8bc2: mov ebx, eax */ r_ebx = r_eax;
    /* 005e8bc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8bc7: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 005e8bcb: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5e8bd0u); f_005c5ae4();
    /* 005e8bd0: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 005e8bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bd5: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8bd7: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5e8bdcu); f_005e8f04();
    /* 005e8bdc: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005e8be0: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005e8be4: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005e8be8: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005e8bec: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005e8bf0: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005e8bf4: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005e8bfa: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 005e8bfd: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 005e8c01: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e8c03: mov ebx, dword ptr [esi + 0x208] */ r_ebx = R32((u32)(r_esi+0x208u));
    /* 005e8c09: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005e8c0b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8c0d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 005e8c11: mov dword ptr [esp + 0x64], ebx */ W32((u32)(r_esp+0x64u), r_ebx);
    /* 005e8c15: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 005e8c19: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 005e8c1d: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 005e8c20: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 005e8c24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c25: call dword ptr [edx + 0xe8] */ { u32 t = R32((u32)(r_edx+0xe8u)); r_esp -= 4; W32(r_esp, 0x5e8c2bu); call_ind(t); }
    /* 005e8c2b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8c2d: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e8c32u); f_005e8fa4();
    /* 005e8c32: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005e8c36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c37: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8c39: call 0x5e9010 */ r_esp -= 4; W32(r_esp, 0x5e8c3eu); f_005e9010();
    /* 005e8c3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8c40: je 0x5e8e1c */ if (fZ) goto L_005e8e1c;
L_005e8c46:; BB(0x005e8c46);
    /* 005e8c46: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 005e8c49: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e8c4b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005e8c4f: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 005e8c53: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005e8c56: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005e8c5a: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 005e8c5d: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e8c62: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 005e8c66: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
L_005e8c6a:; BB(0x005e8c6a);
    /* 005e8c6a: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 005e8c6e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8c71: je 0x5e8df7 */ if (fZ) goto L_005e8df7;
L_005e8c77:; BB(0x005e8c77);
    /* 005e8c77: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 005e8c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8c7c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e8c82: call 0x5c60f0 */ r_esp -= 4; W32(r_esp, 0x5e8c87u); f_005c60f0();
    /* 005e8c87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8c8a: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8c8c: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e8c91u); f_005e9058();
    /* 005e8c91: add esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8c97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8c98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8c99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e8c9a: ret  */ FN_RET(0x005e8908); r_esp += 4; return;
L_005e8c9b:; BB(0x005e8c9b);
    /* 005e8c9b: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ca0: je 0x5e8cb3 */ if (fZ) goto L_005e8cb3;
L_005e8ca2:; BB(0x005e8ca2);
    /* 005e8ca2: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8ca4: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5e8ca9u); f_005e90e8();
    /* 005e8ca9: add esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8caf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8cb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8cb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e8cb2: ret  */ FN_RET(0x005e8908); r_esp += 4; return;
L_005e8cb3:; BB(0x005e8cb3);
    /* 005e8cb3: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005e8cb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cb8: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8cba: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5e8cbfu); f_005e7534();
    /* 005e8cbf: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 005e8cc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cc5: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 005e8cc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8cc9: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8ccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8cce: call dword ptr [ebx + 0xc8] */ { u32 t = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5e8cd4u); call_ind(t); }
L_005e8cd4:; BB(0x005e8cd4);
    /* 005e8cd4: add esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e8cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8cdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e8cdd: ret  */ FN_RET(0x005e8908); r_esp += 4; return;
L_005e8cde:; BB(0x005e8cde);
    /* 005e8cde: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e8ce0: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8ce2: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e8ce8u); call_ind(t); }
    /* 005e8ce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8cea: jne 0x5e8b6e */ if (!fZ) goto L_005e8b6e;
L_005e8cf0:; BB(0x005e8cf0);
    /* 005e8cf0: fld dword ptr [esp + 0xd4] */ FPUSH(R_F32((u32)(r_esp+0xd4u)));
    /* 005e8cf7: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e8cfd: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 005e8d04: jmp 0x5e8b6e */ goto L_005e8b6e;
L_005e8d09:; BB(0x005e8d09);
    /* 005e8d09: mov ebx, dword ptr [esi + 0xf8] */ r_ebx = R32((u32)(r_esi+0xf8u));
    /* 005e8d0f: mov eax, ebx */ r_eax = r_ebx;
    /* 005e8d11: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e8d16: je 0x5e8b5e */ if (fZ) goto L_005e8b5e;
L_005e8d1c:; BB(0x005e8d1c);
    /* 005e8d1c: mov eax, dword ptr [ebx + 0x8d0] */ r_eax = R32((u32)(r_ebx+0x8d0u));
    /* 005e8d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e8d24: jl 0x5e8b5e */ if ((fS!=fO)) goto L_005e8b5e;
L_005e8d2a:; BB(0x005e8d2a);
    /* 005e8d2a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8d2d: jg 0x5e8b5e */ if ((!fZ&&fS==fO)) goto L_005e8b5e;
L_005e8d33:; BB(0x005e8d33);
    /* 005e8d33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e8d35: jle 0x5e8b5e */ if ((fZ||fS!=fO)) goto L_005e8b5e;
L_005e8d3b:; BB(0x005e8d3b);
    /* 005e8d3b: mov eax, ebx */ r_eax = r_ebx;
    /* 005e8d3d: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e8d42: je 0x5e8b5e */ if (fZ) goto L_005e8b5e;
L_005e8d48:; BB(0x005e8d48);
    /* 005e8d48: movzx eax, word ptr [ebx + 0x8d4] */ r_eax = (u32)R16((u32)(r_ebx+0x8d4u));
    /* 005e8d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d50: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5e8d55u); f_007b4d18();
    /* 005e8d55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e8d56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8d58: je 0x5e8b5e */ if (fZ) goto L_005e8b5e;
L_005e8d5e:; BB(0x005e8d5e);
    /* 005e8d5e: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 005e8d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8d66: je 0x5e8b5e */ if (fZ) goto L_005e8b5e;
L_005e8d6c:; BB(0x005e8d6c);
    /* 005e8d6c: movsx ebx, word ptr [ebx + 0x8d6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8d6u));
    /* 005e8d73: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 005e8d76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8d78: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8d7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8d7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8d7e: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8d80: mov edi, dword ptr [eax + ecx*4 + 0x1c] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x1cu));
    /* 005e8d84: mov edx, dword ptr [eax + ecx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 005e8d88: mov eax, dword ptr [eax + ecx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x24u));
    /* 005e8d8c: mov dword ptr [esp + 0x138], edi */ W32((u32)(r_esp+0x138u), r_edi);
    /* 005e8d93: mov dword ptr [esp + 0x13c], edx */ W32((u32)(r_esp+0x13cu), r_edx);
    /* 005e8d9a: mov dword ptr [esp + 0x140], eax */ W32((u32)(r_esp+0x140u), r_eax);
    /* 005e8da1: lea ecx, [esp + 0x138] */ r_ecx = (u32)(r_esp+0x138u);
    /* 005e8da8: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005e8dac: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5e8db1u); f_0082f9c4();
    /* 005e8db1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e8db6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e8dbbu); f_0082d990();
    /* 005e8dbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8dbd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8dbf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e8dc4u); f_0082d8bc();
    /* 005e8dc4: lea edx, [esp + 0x138] */ r_edx = (u32)(r_esp+0x138u);
    /* 005e8dcb: lea eax, [esp + 0xe4] */ r_eax = (u32)(r_esp+0xe4u);
    /* 005e8dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8dd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8dd4: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e8dd9u); f_00835c3c();
    /* 005e8dd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8ddc: mov eax, dword ptr [esp + 0xf8] */ r_eax = R32((u32)(r_esp+0xf8u));
    /* 005e8de3: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e8de6: mov dword ptr [esp + 0xf8], eax */ W32((u32)(r_esp+0xf8u), r_eax);
    /* 005e8ded: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e8df2u); f_0082da80();
    /* 005e8df2: jmp 0x5e8b5e */ goto L_005e8b5e;
L_005e8df7:; BB(0x005e8df7);
    /* 005e8df7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e8df9: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8dfb: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e8e01u); call_ind(t); }
    /* 005e8e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8e03: jne 0x5e8c77 */ if (!fZ) goto L_005e8c77;
L_005e8e09:; BB(0x005e8e09);
    /* 005e8e09: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005e8e0d: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e8e13: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 005e8e17: jmp 0x5e8c77 */ goto L_005e8c77;
L_005e8e1c:; BB(0x005e8e1c);
    /* 005e8e1c: mov ebx, dword ptr [esi + 0xf8] */ r_ebx = R32((u32)(r_esi+0xf8u));
    /* 005e8e22: mov eax, ebx */ r_eax = r_ebx;
    /* 005e8e24: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e8e29: je 0x5e8c6a */ if (fZ) goto L_005e8c6a;
L_005e8e2f:; BB(0x005e8e2f);
    /* 005e8e2f: mov eax, dword ptr [ebx + 0x8d0] */ r_eax = R32((u32)(r_ebx+0x8d0u));
    /* 005e8e35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e8e37: jl 0x5e8c6a */ if ((fS!=fO)) goto L_005e8c6a;
L_005e8e3d:; BB(0x005e8e3d);
    /* 005e8e3d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8e40: jg 0x5e8c6a */ if ((!fZ&&fS==fO)) goto L_005e8c6a;
L_005e8e46:; BB(0x005e8e46);
    /* 005e8e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e8e48: jle 0x5e8c6a */ if ((fZ||fS!=fO)) goto L_005e8c6a;
L_005e8e4e:; BB(0x005e8e4e);
    /* 005e8e4e: mov eax, ebx */ r_eax = r_ebx;
    /* 005e8e50: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e8e55: je 0x5e8c6a */ if (fZ) goto L_005e8c6a;
L_005e8e5b:; BB(0x005e8e5b);
    /* 005e8e5b: movzx eax, word ptr [ebx + 0x8d4] */ r_eax = (u32)R16((u32)(r_ebx+0x8d4u));
    /* 005e8e62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8e63: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5e8e68u); f_007b4d18();
    /* 005e8e68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e8e69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8e6b: je 0x5e8c6a */ if (fZ) goto L_005e8c6a;
L_005e8e71:; BB(0x005e8e71);
    /* 005e8e71: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 005e8e77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8e79: je 0x5e8c6a */ if (fZ) goto L_005e8c6a;
L_005e8e7f:; BB(0x005e8e7f);
    /* 005e8e7f: movsx ebx, word ptr [ebx + 0x8d6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8d6u));
    /* 005e8e86: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 005e8e89: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e8b: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e8f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e91: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e93: mov edi, dword ptr [eax + ecx*4 + 0x1c] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x1cu));
    /* 005e8e97: mov edx, dword ptr [eax + ecx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 005e8e9b: mov eax, dword ptr [eax + ecx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x24u));
    /* 005e8e9f: mov dword ptr [esp + 0xac], edi */ W32((u32)(r_esp+0xacu), r_edi);
    /* 005e8ea6: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 005e8ead: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 005e8eb4: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 005e8ebb: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005e8ebf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5e8ec4u); f_0082f9c4();
    /* 005e8ec4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e8ec9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e8eceu); f_0082d990();
    /* 005e8ece: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8ed0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8ed2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e8ed7u); f_0082d8bc();
    /* 005e8ed7: lea edx, [esp + 0xac] */ r_edx = (u32)(r_esp+0xacu);
    /* 005e8ede: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 005e8ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ee3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ee4: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e8ee9u); f_00835c3c();
    /* 005e8ee9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8eec: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 005e8ef0: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e8ef3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 005e8ef7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e8efcu); f_0082da80();
    /* 005e8efc: jmp 0x5e8c6a */ goto L_005e8c6a;
}

void f_005e8f04(void) /* sub_5E8F04 */
{
    FN_ENTER(0x005e8f04);
    /* 005e8f04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f07: mov esi, ecx */ r_esi = r_ecx;
    /* 005e8f09: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 005e8f0d: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8f0f: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e8f14u); f_005e8fa4();
    /* 005e8f14: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005e8f1a: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005e8f1e: mov word ptr [ebp + 0x14], dx */ W16((u32)(r_ebp+0x14u), (u16)r_edx);
    /* 005e8f22: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e8f28: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5e8f2du); f_007ba980();
    /* 005e8f2d: mov word ptr [ebp + 0x16], ax */ W16((u32)(r_ebp+0x16u), (u16)r_eax);
    /* 005e8f31: mov ebx, dword ptr [esi + 0xd8] */ r_ebx = R32((u32)(r_esi+0xd8u));
    /* 005e8f37: mov dword ptr [ebp + 0x18], ebx */ W32((u32)(r_ebp+0x18u), r_ebx);
    /* 005e8f3a: mov ebx, dword ptr [esi + 0xf8] */ r_ebx = R32((u32)(r_esi+0xf8u));
    /* 005e8f40: lea ecx, [ebx + 0x8a4] */ r_ecx = (u32)(r_ebx+0x8a4u);
    /* 005e8f46: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5e8f4bu); f_006a3250();
    /* 005e8f4b: movzx edx, word ptr [ebx + 0x8a4] */ r_edx = (u32)R16((u32)(r_ebx+0x8a4u));
    /* 005e8f52: fld dword ptr [edx*4 + 0x9cb9dc] */ FPUSH(R_F32((u32)(r_edx*4+0x9cb9dcu)));
    /* 005e8f59: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005e8f5c: fmul dword ptr [eax*4 + 0x9cb9e8] */ ST(0) = ST(0) * R_F32((u32)(r_eax*4+0x9cb9e8u));
    /* 005e8f63: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 005e8f66: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e8f6c: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8f72: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e8f77u); f_006a2e8c();
    /* 005e8f77: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e8f7a: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 005e8f7d: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005e8f83: movzx ebx, word ptr [edx + 0x8a4] */ r_ebx = (u32)R16((u32)(r_edx+0x8a4u));
    /* 005e8f8a: mov ecx, esi */ r_ecx = r_esi;
    /* 005e8f8c: mov eax, dword ptr [ebx*4 + 0x9cb9d0] */ r_eax = R32((u32)(r_ebx*4+0x9cb9d0u));
    /* 005e8f93: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 005e8f96: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e8f9bu); f_005e9058();
    /* 005e8f9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8f9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8f9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8f9e: ret 4 */ FN_RET(0x005e8f04); r_esp += 8; return;
}

void f_005e8f9e(void)
{
    FN_ENTER(0x005e8f9e);
    /* 005e8f9e: ret 4 */ FN_RET(0x005e8f9e); r_esp += 8; return;
}

void f_005e8fa4(void) /* sub_5E8FA4 */
{
    FN_ENTER(0x005e8fa4);
    /* 005e8fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8fa5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e8fa7: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005e8fad: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e8faf: je 0x5e8fca */ if (fZ) goto L_005e8fca;
L_005e8fb1:; BB(0x005e8fb1);
    /* 005e8fb1: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e8fb7: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8fbd: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e8fc2u); f_006a2e8c();
    /* 005e8fc2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e8fc5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e8fc8: je 0x5e8fcc */ if (fZ) goto L_005e8fcc;
L_005e8fca:; BB(0x005e8fca);
    /* 005e8fca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8fcb: ret  */ FN_RET(0x005e8fa4); r_esp += 4; return;
L_005e8fcc:; BB(0x005e8fcc);
    /* 005e8fcc: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005e8fd2: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8fd7: je 0x5e8fea */ if (fZ) goto L_005e8fea;
L_005e8fd9:; BB(0x005e8fd9);
    /* 005e8fd9: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005e8fdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8fe1: mov word ptr [edx + 0x8a4], ax */ W16((u32)(r_edx+0x8a4u), (u16)r_eax);
    /* 005e8fe8: jmp 0x5e8ffc */ goto L_005e8ffc;
L_005e8fea:; BB(0x005e8fea);
    /* 005e8fea: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005e8ff0: mov eax, 1 */ r_eax = 0x1u;
    /* 005e8ff5: mov word ptr [edx + 0x8a4], ax */ W16((u32)(r_edx+0x8a4u), (u16)r_eax);
L_005e8ffc:; BB(0x005e8ffc);
    /* 005e8ffc: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005e9002: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9007: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 005e900d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e900e: ret  */ FN_RET(0x005e8fa4); r_esp += 4; return;
}

