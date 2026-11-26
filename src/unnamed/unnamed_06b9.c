#include "protos.h"

void f_006b9018(void) /* sub_6B9018 */
{
    FN_ENTER(0x006b9018);
    /* 006b9018: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9019: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b901c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006b9020: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9022: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006b9026: mov byte ptr [esp], 0xd9 */ W8((u32)(r_esp), 0xd9u);
    /* 006b902a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006b902e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b9033u); f_005d6a3c();
    /* 006b9033: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006b9037: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b903cu); f_005d6a3c();
    /* 006b903c: mov ebx, dword ptr [0xa9c4f4] */ r_ebx = R32((u32)(0xa9c4f4u));
    /* 006b9042: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b9047: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b904d: mov word ptr [esp + 2], bx */ W16((u32)(r_esp+0x2u), (u16)r_ebx);
    /* 006b9052: mov ecx, eax */ r_ecx = r_eax;
    /* 006b9054: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006b9057: mov byte ptr [esp + 4], cl */ W8((u32)(r_esp+0x4u), (u8)r_ecx);
    /* 006b905b: mov ecx, eax */ r_ecx = r_eax;
    /* 006b905d: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b9061: mov byte ptr [esp + 0x1a], dl */ W8((u32)(r_esp+0x1au), (u8)r_edx);
    /* 006b9065: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006b9068: mov eax, edx */ r_eax = r_edx;
    /* 006b906a: mov byte ptr [esp + 5], cl */ W8((u32)(r_esp+0x5u), (u8)r_ecx);
    /* 006b906e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9071: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006b9074: mov byte ptr [esp + 0x18], al */ W8((u32)(r_esp+0x18u), (u8)r_eax);
    /* 006b9078: mov eax, edx */ r_eax = r_edx;
    /* 006b907a: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006b907d: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 006b9081: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b9086: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9088: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006b908c: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b9091: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9093: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006b9097: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b909c: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 006b90a1: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b90a6: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 006b90ab: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b90b0u); f_008003e0();
    /* 006b90b0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b90b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b90b4: ret  */ FN_RET(0x006b9018); r_esp += 4; return;
}

void f_006b90b8(void) /* sub_6B90B8 */
{
    FN_ENTER(0x006b90b8);
    /* 006b90b8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b90bb: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b90c0: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b90c6: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b90cc: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b90d1: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b90d6: mov byte ptr [esp], 0xde */ W8((u32)(r_esp), 0xdeu);
    /* 006b90da: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006b90df: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b90e3: mov byte ptr [esp + 5], cl */ W8((u32)(r_esp+0x5u), (u8)r_ecx);
    /* 006b90e7: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006b90ec: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b90f1: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 006b90f6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b90f9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b90feu); f_008003e0();
    /* 006b90fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9101: ret  */ FN_RET(0x006b90b8); r_esp += 4; return;
}

void f_006b9104(void) /* sub_6B9104 */
{
    FN_ENTER(0x006b9104);
    /* 006b9104: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9107: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b910c: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b9112: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b9118: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b911d: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b9122: mov byte ptr [esp], 0xe1 */ W8((u32)(r_esp), 0xe1u);
    /* 006b9126: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b912b: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b912f: mov byte ptr [esp + 5], cl */ W8((u32)(r_esp+0x5u), (u8)r_ecx);
    /* 006b9133: mov byte ptr [esp + 7], 0 */ W8((u32)(r_esp+0x7u), 0x0u);
    /* 006b9138: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b913c: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b9141: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 006b9146: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b914b: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 006b9150: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9153: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b9158u); f_008003e0();
    /* 006b9158: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b915b: ret  */ FN_RET(0x006b9104); r_esp += 4; return;
}

void f_006b915c(void) /* sub_6B915C */
{
    FN_ENTER(0x006b915c);
    /* 006b915c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b915d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9160: mov ecx, 0xa95598 */ r_ecx = 0xa95598u;
    /* 006b9165: mov dword ptr [0xa955ac], 0 */ W32((u32)(0xa955acu), 0x0u);
    /* 006b916f: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b9174u); f_005d6a3c();
    /* 006b9174: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b917a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b917fu); f_0068d5a8();
    /* 006b917f: mov esi, eax */ r_esi = r_eax;
    /* 006b9181: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9184: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9186: je 0x6b91f0 */ if (fZ) goto L_006b91f0;
L_006b9188:; BB(0x006b9188);
    /* 006b9188: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 006b918e: mov byte ptr [esp], 0xe2 */ W8((u32)(r_esp), 0xe2u);
    /* 006b9192: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9194: mov byte ptr [esp + 6], dl */ W8((u32)(r_esp+0x6u), (u8)r_edx);
    /* 006b9198: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006b91a0: mov byte ptr [esp + 7], dl */ W8((u32)(r_esp+0x7u), (u8)r_edx);
    /* 006b91a4: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b91aa: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b91af: mov ecx, esi */ r_ecx = r_esi;
    /* 006b91b1: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006b91b9: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b91bd: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 006b91c3: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006b91c8: mov byte ptr [esp + 5], dl */ W8((u32)(r_esp+0x5u), (u8)r_edx);
    /* 006b91cc: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6b91d1u); f_007ba980();
    /* 006b91d1: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 006b91d4: mov byte ptr [esp + 7], 0 */ W8((u32)(r_esp+0x7u), 0x0u);
    /* 006b91d9: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b91dd: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006b91e0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b91e4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006b91e8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b91eb: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b91f0u); f_00800518();
L_006b91f0:; BB(0x006b91f0);
    /* 006b91f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b91f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b91f4: ret  */ FN_RET(0x006b915c); r_esp += 4; return;
}

void f_006b91f8(void)
{
    FN_ENTER(0x006b91f8);
    /* 006b91f8: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b91fd: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b9203: mov eax, dword ptr [0xa955ac] */ r_eax = R32((u32)(0xa955acu));
    /* 006b9208: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b920b: ret  */ FN_RET(0x006b91f8); r_esp += 4; return;
}

void f_006b920c(void) /* sub_6B920C */
{
    FN_ENTER(0x006b920c);
    /* 006b920c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b920f: mov byte ptr [esp], 0xd8 */ W8((u32)(r_esp), 0xd8u);
    /* 006b9213: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9215: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b921a: mov byte ptr [esp + 1], 9 */ W8((u32)(r_esp+0x1u), 0x9u);
    /* 006b921f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b9224: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b9228: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b922c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b9230: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b9234: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b9238: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b923d: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b9243: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b9249: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b924e: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b9253: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b9257: mov byte ptr [esp + 4], cl */ W8((u32)(r_esp+0x4u), (u8)r_ecx);
    /* 006b925b: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b925f: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b9264: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b9268: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b926d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006b9271: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b9276: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 006b927b: mov eax, dword ptr [0xa954e4] */ r_eax = R32((u32)(0xa954e4u));
    /* 006b9280: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 006b9285: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9288: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b928du); f_008003e0();
    /* 006b928d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9290: ret  */ FN_RET(0x006b920c); r_esp += 4; return;
}

void f_006b9294(void) /* sub_6B9294 */
{
    FN_ENTER(0x006b9294);
    /* 006b9294: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9297: mov byte ptr [esp], 0xda */ W8((u32)(r_esp), 0xdau);
    /* 006b929b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b929d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b92a2: mov byte ptr [esp + 1], 0xb */ W8((u32)(r_esp+0x1u), 0xbu);
    /* 006b92a7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b92ac: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b92b0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b92b4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b92b8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b92bc: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b92c0: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b92c5: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b92cb: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b92d1: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b92d6: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b92db: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 006b92e3: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b92e7: mov byte ptr [esp + 4], cl */ W8((u32)(r_esp+0x4u), (u8)r_ecx);
    /* 006b92eb: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b92ef: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b92f4: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b92f8: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b92fd: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006b9301: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b9306: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006b930a: mov eax, dword ptr [0xa954e4] */ r_eax = R32((u32)(0xa954e4u));
    /* 006b930f: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 006b9314: mov eax, dword ptr [0xa954e8] */ r_eax = R32((u32)(0xa954e8u));
    /* 006b9319: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 006b931e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9321: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b9326u); f_008003e0();
    /* 006b9326: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9329: ret  */ FN_RET(0x006b9294); r_esp += 4; return;
}

void f_006b932c(void) /* sub_6B932C */
{
    FN_ENTER(0x006b932c);
    /* 006b932c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b932f: mov byte ptr [esp], 0xda */ W8((u32)(r_esp), 0xdau);
    /* 006b9333: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9335: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b933a: mov byte ptr [esp + 1], 0xb */ W8((u32)(r_esp+0x1u), 0xbu);
    /* 006b933f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b9344: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b9348: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b934c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b9350: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b9354: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b9358: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b935d: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b9363: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b9369: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b936e: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b9373: mov dword ptr [esp + 0x24], 1 */ W32((u32)(r_esp+0x24u), 0x1u);
    /* 006b937b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b937f: mov byte ptr [esp + 4], cl */ W8((u32)(r_esp+0x4u), (u8)r_ecx);
    /* 006b9383: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b9387: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b938c: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b9390: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b9395: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006b9399: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b939e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006b93a2: mov eax, dword ptr [0xa954e4] */ r_eax = R32((u32)(0xa954e4u));
    /* 006b93a7: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 006b93ac: mov eax, dword ptr [0xa954e8] */ r_eax = R32((u32)(0xa954e8u));
    /* 006b93b1: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 006b93b6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b93b9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b93beu); f_008003e0();
    /* 006b93be: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b93c1: ret  */ FN_RET(0x006b932c); r_esp += 4; return;
}

void f_006b93c4(void) /* sub_6B93C4 */
{
    FN_ENTER(0x006b93c4);
    /* 006b93c4: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b93c9: mov dword ptr [0x9f766c], eax */ W32((u32)(0x9f766cu), r_eax);
    /* 006b93ce: ret  */ FN_RET(0x006b93c4); r_esp += 4; return;
}

void f_006b93d0(void)
{
    FN_ENTER(0x006b93d0);
    /* 006b93d0: call 0x767748 */ r_esp -= 4; W32(r_esp, 0x6b93d5u); f_00767748();
    /* 006b93d5: mov edx, eax */ r_edx = r_eax;
    /* 006b93d7: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b93dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b93de: je 0x6b93ed */ if (fZ) goto L_006b93ed;
L_006b93e0:; BB(0x006b93e0);
    /* 006b93e0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b93e5: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b93ec: ret  */ FN_RET(0x006b93d0); r_esp += 4; return;
L_006b93ed:; BB(0x006b93ed);
    /* 006b93ed: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b93f2: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b93f9: ret  */ FN_RET(0x006b93d0); r_esp += 4; return;
}

void f_006b93fc(void)
{
    FN_ENTER(0x006b93fc);
    /* 006b93fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b93fd: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b9402: mov byte ptr [esp], 0xdf */ W8((u32)(r_esp), 0xdfu);
    /* 006b9406: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006b940b: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b9410: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9413: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b9418u); f_00800518();
    /* 006b9418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9419: ret  */ FN_RET(0x006b93fc); r_esp += 4; return;
}

void f_006b941c(void) /* sub_6B941C */
{
    FN_ENTER(0x006b941c);
    /* 006b941c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b941f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b9425: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b942au); f_0068d5a8();
    /* 006b942a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b942b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b942d: je 0x6b949b */ if (fZ) goto L_006b949b;
L_006b942f:; BB(0x006b942f);
    /* 006b942f: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 006b9435: mov byte ptr [esp], 0xe0 */ W8((u32)(r_esp), 0xe0u);
    /* 006b9439: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b943b: mov byte ptr [esp + 5], dl */ W8((u32)(r_esp+0x5u), (u8)r_edx);
    /* 006b943f: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006b9447: mov byte ptr [esp + 6], dl */ W8((u32)(r_esp+0x6u), (u8)r_edx);
    /* 006b944b: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006b9453: mov byte ptr [esp + 7], dl */ W8((u32)(r_esp+0x7u), (u8)r_edx);
    /* 006b9457: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 006b945d: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b9462: mov ecx, eax */ r_ecx = r_eax;
    /* 006b9464: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006b9469: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b946d: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6b9472u); f_007ba980();
    /* 006b9472: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b9478: mov ecx, dword ptr [0xa954d4] */ r_ecx = R32((u32)(0xa954d4u));
    /* 006b947e: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b9482: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b9487: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b948b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b948f: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b9493: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9496: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b949bu); f_00800518();
L_006b949b:; BB(0x006b949b);
    /* 006b949b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b949e: ret  */ FN_RET(0x006b941c); r_esp += 4; return;
}

void f_006b94a0(void) /* sub_6B94A0 */
{
    FN_ENTER(0x006b94a0);
    /* 006b94a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b94a1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b94a7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b94acu); f_0068d5a8();
    /* 006b94ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b94ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b94af: je 0x6b94bf */ if (fZ) goto L_006b94bf;
L_006b94b1:; BB(0x006b94b1);
    /* 006b94b1: mov ecx, eax */ r_ecx = r_eax;
    /* 006b94b3: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x6b94b8u); f_006936b4();
    /* 006b94b8: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b94bdu); f_006b94cc();
    /* 006b94bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b94be: ret  */ FN_RET(0x006b94a0); r_esp += 4; return;
L_006b94bf:; BB(0x006b94bf);
    /* 006b94bf: mov eax, 0x9699bc */ r_eax = 0x9699bcu;
    /* 006b94c4: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b94c9u); f_006b94cc();
    /* 006b94c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b94ca: ret  */ FN_RET(0x006b94a0); r_esp += 4; return;
}

void f_006b94cc(void) /* sub_6B94CC */
{
    FN_ENTER(0x006b94cc);
    /* 006b94cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b94cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b94ce: mov ebp, eax */ r_ebp = r_eax;
    /* 006b94d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b94d1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x6b94d6u); f_00858009();
    /* 006b94d6: mov esi, eax */ r_esi = r_eax;
    /* 006b94d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b94d9: push dword ptr [0xa95510] */ { u32 v = R32((u32)(0xa95510u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b94df: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x6b94e4u); f_00857fed();
    /* 006b94e4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b94e6: add dword ptr [0xa95510], esi */ { u32 ad = (u32)(0xa95510u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006b94ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b94ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b94f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b94f1: ret  */ FN_RET(0x006b94cc); r_esp += 4; return;
}

void f_006b94f4(void) /* sub_6B94F4 */
{
    FN_ENTER(0x006b94f4);
    /* 006b94f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b94f5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b94fb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b9500u); f_0068d5a8();
    /* 006b9500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9503: je 0x6b9518 */ if (fZ) goto L_006b9518;
L_006b9505:; BB(0x006b9505);
    /* 006b9505: push dword ptr [eax + 0x964] */ { u32 v = R32((u32)(r_eax+0x964u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b950b: call 0x7930fc */ r_esp -= 4; W32(r_esp, 0x6b9510u); f_007930fc();
    /* 006b9510: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9511: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9516u); f_006b94cc();
    /* 006b9516: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9517: ret  */ FN_RET(0x006b94f4); r_esp += 4; return;
L_006b9518:; BB(0x006b9518);
    /* 006b9518: mov eax, 0x9699d4 */ r_eax = 0x9699d4u;
    /* 006b951d: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9522u); f_006b94cc();
    /* 006b9522: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9523: ret  */ FN_RET(0x006b94f4); r_esp += 4; return;
}

void f_006b9524(void) /* sub_6B9524 */
{
    FN_ENTER(0x006b9524);
    /* 006b9524: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b952a: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b952e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006b9530: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9532: push 0x9699e8 */ { u32 v = 0x9699e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9538: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6b953du); f_00857e29();
    /* 006b953d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9540: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b9544: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9549u); f_006b94cc();
    /* 006b9549: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b954f: ret  */ FN_RET(0x006b9524); r_esp += 4; return;
}

void f_006b9550(void) /* sub_6B9550 */
{
    FN_ENTER(0x006b9550);
    /* 006b9550: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9556: call 0x6bd4d4 */ r_esp -= 4; W32(r_esp, 0x6b955bu); f_006bd4d4();
    /* 006b955b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b955f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9560: push 0xa95a8c */ { u32 v = 0xa95a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b9565: push 0x92c4f8 */ { u32 v = 0x92c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b956a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b956b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6b9570u); f_00857e29();
    /* 006b9570: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9573: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b9577: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9579: mov word ptr [esp + 0x82], dx */ W16((u32)(r_esp+0x82u), (u16)r_edx);
    /* 006b9581: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9586u); f_006b94cc();
    /* 006b9586: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b958c: ret  */ FN_RET(0x006b9550); r_esp += 4; return;
}

void f_006b9590(void) /* sub_6B9590 */
{
    FN_ENTER(0x006b9590);
    /* 006b9590: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9596: call 0x4da868 */ r_esp -= 4; W32(r_esp, 0x6b959bu); f_004da868();
    /* 006b959b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b959f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b95a0: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006b95a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b95a6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6b95abu); f_00857e29();
    /* 006b95ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b95ae: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b95b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b95b4: mov word ptr [esp + 0x82], dx */ W16((u32)(r_esp+0x82u), (u16)r_edx);
    /* 006b95bc: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b95c1u); f_006b94cc();
    /* 006b95c1: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b95c7: ret  */ FN_RET(0x006b9590); r_esp += 4; return;
}

void f_006b95c8(void) /* sub_6B95C8 */
{
    FN_ENTER(0x006b95c8);
    /* 006b95c8: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b95ce: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b95d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b95d3: mov ecx, 0xa95598 */ r_ecx = 0xa95598u;
    /* 006b95d8: call 0x5d2aac */ r_esp -= 4; W32(r_esp, 0x6b95ddu); f_005d2aac();
    /* 006b95dd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b95e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b95e3: mov word ptr [esp + 0x82], dx */ W16((u32)(r_esp+0x82u), (u16)r_edx);
    /* 006b95eb: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b95f0u); f_006b94cc();
    /* 006b95f0: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b95f6: ret  */ FN_RET(0x006b95c8); r_esp += 4; return;
}

void f_006b95f8(void) /* sub_6B95F8 */
{
    FN_ENTER(0x006b95f8);
    /* 006b95f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b95f9: mov eax, 0xa95540 */ r_eax = 0xa95540u;
    /* 006b95fe: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9603u); f_006b94cc();
    /* 006b9603: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9604: ret  */ FN_RET(0x006b95f8); r_esp += 4; return;
}

void f_006b9608(void) /* sub_6B9608 */
{
    FN_ENTER(0x006b9608);
    /* 006b9608: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9609: mov eax, 0xa95560 */ r_eax = 0xa95560u;
    /* 006b960e: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9613u); f_006b94cc();
    /* 006b9613: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9614: ret  */ FN_RET(0x006b9608); r_esp += 4; return;
}

void f_006b9618(void) /* sub_6B9618 */
{
    FN_ENTER(0x006b9618);
    /* 006b9618: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9619: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b961e: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b9623u); f_006c1bd4();
    /* 006b9623: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9626: je 0x6b9634 */ if (fZ) goto L_006b9634;
L_006b9628:; BB(0x006b9628);
    /* 006b9628: add eax, 0x2880 */ {  u32 a = r_eax; u32 b = 0x2880u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b962d: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9632u); f_006b94cc();
    /* 006b9632: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9633: ret  */ FN_RET(0x006b9618); r_esp += 4; return;
L_006b9634:; BB(0x006b9634);
    /* 006b9634: mov eax, 0x969a3c */ r_eax = 0x969a3cu;
    /* 006b9639: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b963eu); f_006b94cc();
    /* 006b963e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b963f: ret  */ FN_RET(0x006b9618); r_esp += 4; return;
}

void f_006b9640(void) /* sub_6B9640 */
{
    FN_ENTER(0x006b9640);
    /* 006b9640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9641: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9646: push 0xa49870 */ { u32 v = 0xa49870u; r_esp -= 4; W32(r_esp, v); }
    /* 006b964b: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6b9650u); f_00858c4d();
    /* 006b9650: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9653: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9655: jne 0x6b9663 */ if (!fZ) goto L_006b9663;
L_006b9657:; BB(0x006b9657);
    /* 006b9657: mov eax, 0x969a48 */ r_eax = 0x969a48u;
    /* 006b965c: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9661u); f_006b94cc();
    /* 006b9661: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9662: ret  */ FN_RET(0x006b9640); r_esp += 4; return;
L_006b9663:; BB(0x006b9663);
    /* 006b9663: mov eax, 0xa49870 */ r_eax = 0xa49870u;
    /* 006b9668: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b966du); f_006b94cc();
    /* 006b966d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b966e: ret  */ FN_RET(0x006b9640); r_esp += 4; return;
}

void f_006b9670(void) /* sub_6B9670 */
{
    FN_ENTER(0x006b9670);
    /* 006b9670: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9671: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9672: mov ebx, dword ptr [0xa9a9a4] */ r_ebx = R32((u32)(0xa9a9a4u));
    /* 006b9678: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006b967d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b967e: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6b9683u); f_00858c4d();
    /* 006b9683: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9688: jne 0x6b9697 */ if (!fZ) goto L_006b9697;
L_006b968a:; BB(0x006b968a);
    /* 006b968a: mov eax, 0x969a48 */ r_eax = 0x969a48u;
    /* 006b968f: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b9694u); f_006b94cc();
    /* 006b9694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9695: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b9696: ret  */ FN_RET(0x006b9670); r_esp += 4; return;
L_006b9697:; BB(0x006b9697);
    /* 006b9697: mov eax, ebx */ r_eax = r_ebx;
    /* 006b9699: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b969eu); f_006b94cc();
    /* 006b969e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b969f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b96a0: ret  */ FN_RET(0x006b9670); r_esp += 4; return;
}

void f_006b96a4(void) /* sub_6B96A4 */
{
    FN_ENTER(0x006b96a4);
    /* 006b96a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b96a5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006b96a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b96aa: call 0x6163a0 */ r_esp -= 4; W32(r_esp, 0x6b96afu); f_006163a0();
    /* 006b96af: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006b96b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b96b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b96b8: call 0x616a2c */ r_esp -= 4; W32(r_esp, 0x6b96bdu); f_00616a2c();
    /* 006b96bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b96c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b96c1: ret  */ FN_RET(0x006b96a4); r_esp += 4; return;
}

void f_006b96c4(void) /* sub_6B96C4 */
{
    FN_ENTER(0x006b96c4);
    /* 006b96c4: mov dword ptr [0xa9558c], 0x3f800000 */ W32((u32)(0xa9558cu), 0x3f800000u);
    /* 006b96ce: mov dword ptr [0xa95590], 0x41000000 */ W32((u32)(0xa95590u), 0x41000000u);
    /* 006b96d8: mov dword ptr [0xa95594], 0x3fc00000 */ W32((u32)(0xa95594u), 0x3fc00000u);
    /* 006b96e2: ret  */ FN_RET(0x006b96c4); r_esp += 4; return;
}

void f_006b96e4(void) /* sub_6B96E4 */
{
    FN_ENTER(0x006b96e4);
    /* 006b96e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b96e8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006b96ec: mov dword ptr [0xa9550c], eax */ W32((u32)(0xa9550cu), r_eax);
    /* 006b96f1: mov dword ptr [0xa95510], edx */ W32((u32)(0xa95510u), r_edx);
    /* 006b96f7: ret  */ FN_RET(0x006b96e4); r_esp += 4; return;
}

void f_006b96f8(void) /* sub_6B96F8 */
{
    FN_ENTER(0x006b96f8);
    /* 006b96f8: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b96fd: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b9703: mov ecx, dword ptr [0xa954d4] */ r_ecx = R32((u32)(0xa954d4u));
    /* 006b9709: mov word ptr [0xa95588], ax */ W16((u32)(0xa95588u), (u16)r_eax);
    /* 006b970f: mov word ptr [0xa954fc], dx */ W16((u32)(0xa954fcu), (u16)r_edx);
    /* 006b9716: mov word ptr [0xa95500], cx */ W16((u32)(0xa95500u), (u16)r_ecx);
    /* 006b971d: ret  */ FN_RET(0x006b96f8); r_esp += 4; return;
}

void f_006b9720(void) /* sub_6B9720 */
{
    FN_ENTER(0x006b9720);
    /* 006b9720: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9721: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9722: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9723: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9726: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b972b: movzx ecx, byte ptr [esp + 0x24] */ r_ecx = (u32)R8((u32)(r_esp+0x24u));
    /* 006b9730: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b9735: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b9738: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b973b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006b9743: lea ebx, [edx + 1] */ r_ebx = (u32)(r_edx+0x1u);
    /* 006b9746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b9749: fild dword ptr [eax + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebx*4)));
    /* 006b974c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b9750: lea edx, [edx + 2] */ r_edx = (u32)(r_edx+0x2u);
    /* 006b9753: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b9756: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b9759: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b975d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006b975f: mov esi, ecx */ r_esi = r_ecx;
    /* 006b9761: jmp 0x6b9768 */ goto L_006b9768;
L_006b9763:; BB(0x006b9763);
    /* 006b9763: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
L_006b9768:; BB(0x006b9768);
    /* 006b9768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9769: mov edi, esi */ r_edi = r_esi;
    /* 006b976b: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b9771: mov dword ptr [eax + edi*4], 0 */ W32((u32)(r_eax+r_edi*4), 0x0u);
    /* 006b9778: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b977du); f_0068d5a8();
    /* 006b977d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b977e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9780: je 0x6b97ab */ if (fZ) goto L_006b97ab;
L_006b9782:; BB(0x006b9782);
    /* 006b9782: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b9785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9786: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b9789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b978a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6b978fu); f_0078ea50();
    /* 006b978f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9792: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006b9796: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006b9798: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006b979a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b979c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b979d: jbe 0x6b97ab */ if ((fC||fZ)) goto L_006b97ab;
L_006b979f:; BB(0x006b979f);
    /* 006b979f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b97a4: mov dword ptr [eax + edi*4], 1 */ W32((u32)(r_eax+r_edi*4), 0x1u);
L_006b97ab:; BB(0x006b97ab);
    /* 006b97ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b97ae: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b97b1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b97b4: jl 0x6b9763 */ if ((fS!=fO)) goto L_006b9763;
L_006b97b6:; BB(0x006b97b6);
    /* 006b97b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b97b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b97ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b97bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b97bc: ret  */ FN_RET(0x006b9720); r_esp += 4; return;
}

void f_006b97c0(void)
{
    FN_ENTER(0x006b97c0);
    /* 006b97c0: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 006b97c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b97c8: je 0x6b97d7 */ if (fZ) goto L_006b97d7;
L_006b97ca:; BB(0x006b97ca);
    /* 006b97ca: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b97ce: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b97d3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b97d7:; BB(0x006b97d7);
    /* 006b97d7: ret  */ FN_RET(0x006b97c0); r_esp += 4; return;
}

void f_006b97d8(void)
{
    FN_ENTER(0x006b97d8);
    /* 006b97d8: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 006b97de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b97e0: je 0x6b97ed */ if (fZ) goto L_006b97ed;
L_006b97e2:; BB(0x006b97e2);
    /* 006b97e2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b97e6: xor eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b97e9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b97ed:; BB(0x006b97ed);
    /* 006b97ed: ret  */ FN_RET(0x006b97d8); r_esp += 4; return;
}

void f_006b97f0(void)
{
    FN_ENTER(0x006b97f0);
    /* 006b97f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b97f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006b97f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b97f5: push 0x8ebfc0 */ { u32 v = 0x8ebfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b97fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b9800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9801: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b9808: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b980b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b980e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b9811: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b9814: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b9817: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006b981c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b981f: je 0x6b982f */ if (fZ) goto L_006b982f;
L_006b9821:; BB(0x006b9821);
    /* 006b9821: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b9824: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b982b: mov esp, ebp */ r_esp = r_ebp;
    /* 006b982d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b982e: ret  */ FN_RET(0x006b97f0); r_esp += 4; return;
L_006b982f:; BB(0x006b982f);
    /* 006b982f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006b9836: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9838: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b983du); f_005caba4();
    /* 006b983d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b983e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006b9841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b9843: je 0x6b9821 */ if (fZ) goto L_006b9821;
L_006b9845:; BB(0x006b9845);
    /* 006b9845: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006b984c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b9853: push 0x6cc2b0 */ { u32 v = 0x6cc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9858: mov ecx, eax */ r_ecx = r_eax;
    /* 006b985a: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b9860: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6b9865u); f_00788938();
    /* 006b9865: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006b986c: jmp 0x6b9821 */ goto L_006b9821;
}

void f_006b9870(void) /* sub_6B9870 */
{
    FN_ENTER(0x006b9870);
    /* 006b9870: mov dword ptr [0x9c6094], 0 */ W32((u32)(0x9c6094u), 0x0u);
    /* 006b987a: ret  */ FN_RET(0x006b9870); r_esp += 4; return;
}

void f_006b987c(void) /* sub_6B987C */
{
    FN_ENTER(0x006b987c);
    /* 006b987c: mov dword ptr [0x9c6094], 1 */ W32((u32)(0x9c6094u), 0x1u);
    /* 006b9886: ret  */ FN_RET(0x006b987c); r_esp += 4; return;
}

void f_006b9888(void)
{
    FN_ENTER(0x006b9888);
    /* 006b9888: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b988d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b9892: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006b9895: lea ecx, [ecx + 1] */ r_ecx = (u32)(r_ecx+0x1u);
    /* 006b9898: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b989b: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006b989e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b98a0: jl 0x6b98b4 */ if ((fS!=fO)) goto L_006b98b4;
L_006b98a2:; BB(0x006b98a2);
    /* 006b98a2: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b98a5: jg 0x6b98b4 */ if ((!fZ&&fS==fO)) goto L_006b98b4;
L_006b98a7:; BB(0x006b98a7);
    /* 006b98a7: mov edx, dword ptr [edx*4 + 0x969868] */ r_edx = R32((u32)(r_edx*4+0x969868u));
    /* 006b98ae: mov byte ptr [edx + 0xa95521], al */ W8((u32)(r_edx+0xa95521u), (u8)r_eax);
L_006b98b4:; BB(0x006b98b4);
    /* 006b98b4: ret  */ FN_RET(0x006b9888); r_esp += 4; return;
}

void f_006b98b8(void)
{
    FN_ENTER(0x006b98b8);
    /* 006b98b8: call 0x7b34dc */ r_esp -= 4; W32(r_esp, 0x6b98bdu); f_007b34dc();
    /* 006b98bd: ret  */ FN_RET(0x006b98b8); r_esp += 4; return;
}

void f_006b98c0(void)
{
    FN_ENTER(0x006b98c0);
    /* 006b98c0: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b98c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b98c7: jb 0x6b98db */ if (fC) goto L_006b98db;
L_006b98c9:; BB(0x006b98c9);
    /* 006b98c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b98cc: ja 0x6b98db */ if ((!fC&&!fZ)) goto L_006b98db;
L_006b98ce:; BB(0x006b98ce);
    /* 006b98ce: mov eax, dword ptr [eax*4 + 0x969878] */ r_eax = R32((u32)(r_eax*4+0x969878u));
    /* 006b98d5: mov byte ptr [0xa95518], al */ W8((u32)(0xa95518u), (u8)r_eax);
    /* 006b98da: ret  */ FN_RET(0x006b98c0); r_esp += 4; return;
L_006b98db:; BB(0x006b98db);
    /* 006b98db: mov byte ptr [0xa95518], 0 */ W8((u32)(0xa95518u), 0x0u);
    /* 006b98e2: ret  */ FN_RET(0x006b98c0); r_esp += 4; return;
}

void f_006b98e4(void) /* sub_6B98E4 */
{
    FN_ENTER(0x006b98e4);
    /* 006b98e4: mov edx, 0xa95514 */ r_edx = 0xa95514u;
    /* 006b98e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b98eb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006b98ed: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006b98f0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006b98f3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006b98f6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006b98f9: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006b98fc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006b98ff: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006b9902: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006b9905: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006b9908: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006b990b: ret  */ FN_RET(0x006b98e4); r_esp += 4; return;
}

void f_006b990c(void) /* sub_6B990C */
{
    FN_ENTER(0x006b990c);
    /* 006b990c: mov dword ptr [0xa95f70], 0xffffffff */ W32((u32)(0xa95f70u), 0xffffffffu);
    /* 006b9916: ret  */ FN_RET(0x006b990c); r_esp += 4; return;
}

void f_006b9918(void)
{
    FN_ENTER(0x006b9918);
    /* 006b9918: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b991d: mov dword ptr [0xa95f70], eax */ W32((u32)(0xa95f70u), r_eax);
    /* 006b9922: ret  */ FN_RET(0x006b9918); r_esp += 4; return;
}

void f_006b9924(void) /* sub_6B9924 */
{
    FN_ENTER(0x006b9924);
    /* 006b9924: mov dword ptr [0xa95f64], 0xffffffff */ W32((u32)(0xa95f64u), 0xffffffffu);
    /* 006b992e: ret  */ FN_RET(0x006b9924); r_esp += 4; return;
}

void f_006b9930(void)
{
    FN_ENTER(0x006b9930);
    /* 006b9930: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b9935: mov dword ptr [0xa95f64], eax */ W32((u32)(0xa95f64u), r_eax);
    /* 006b993a: ret  */ FN_RET(0x006b9930); r_esp += 4; return;
}

void f_006b993c(void) /* sub_6B993C */
{
    FN_ENTER(0x006b993c);
    /* 006b993c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b993d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b9943: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b9948u); f_0068d5a8();
    /* 006b9948: mov ebx, eax */ r_ebx = r_eax;
    /* 006b994a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b994d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b994f: je 0x6b995f */ if (fZ) goto L_006b995f;
L_006b9951:; BB(0x006b9951);
    /* 006b9951: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b9953: call 0x693660 */ r_esp -= 4; W32(r_esp, 0x6b9958u); f_00693660();
    /* 006b9958: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b995a: call 0x68cda4 */ r_esp -= 4; W32(r_esp, 0x6b995fu); f_0068cda4();
L_006b995f:; BB(0x006b995f);
    /* 006b995f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b9960: ret  */ FN_RET(0x006b993c); r_esp += 4; return;
}

void f_006b9964(void)
{
    FN_ENTER(0x006b9964);
    /* 006b9964: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b996b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b996c: call 0x7b4a9c */ r_esp -= 4; W32(r_esp, 0x6b9971u); f_007b4a9c();
    /* 006b9971: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9972: ret  */ FN_RET(0x006b9964); r_esp += 4; return;
}

void f_006b9974(void) /* sub_6B9974 */
{
    FN_ENTER(0x006b9974);
    /* 006b9974: mov dword ptr [0xa954a0], 3 */ W32((u32)(0xa954a0u), 0x3u);
    /* 006b997e: ret  */ FN_RET(0x006b9974); r_esp += 4; return;
}

void f_006b9980(void) /* sub_6B9980 */
{
    FN_ENTER(0x006b9980);
    /* 006b9980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9981: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b9985: movzx edx, word ptr [eax + 0x10] */ r_edx = (u32)R16((u32)(r_eax+0x10u));
    /* 006b9989: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006b998b: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 006b998f: mov word ptr [0xa95588], dx */ W16((u32)(0xa95588u), (u16)r_edx);
    /* 006b9996: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b9998: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 006b999a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006b999d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b999f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006b99a2: add eax, dword ptr [eax + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b99a5: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006b99a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b99aa: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006b99ad: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006b99b0: mov byte ptr [edi + 0x14], al */ W8((u32)(r_edi+0x14u), (u8)r_eax);
    /* 006b99b3: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006b99b6: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006b99b9: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006b99bc: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006b99bf: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006b99c2: lea edx, [edi + 0x34] */ r_edx = (u32)(r_edi+0x34u);
    /* 006b99c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b99c7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006b99c9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006b99cc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006b99cf: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006b99d2: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006b99d5: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006b99d8: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006b99db: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006b99de: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006b99e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b99e5: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b99e8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6b99edu); f_0086b688();
    /* 006b99ed: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006b99f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b99f4: lea eax, [edi + 0x54] */ r_eax = (u32)(r_edi+0x54u);
    /* 006b99f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b99f8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6b99fdu); f_0086b688();
    /* 006b99fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b99ff: mov byte ptr [0xa954ec], al */ W8((u32)(0xa954ecu), (u8)r_eax);
    /* 006b9a04: mov byte ptr [0xa954f0], al */ W8((u32)(0xa954f0u), (u8)r_eax);
    /* 006b9a09: mov dword ptr [edi + 0x15c], eax */ W32((u32)(r_edi+0x15cu), r_eax);
    /* 006b9a0f: mov word ptr [0xa954f4], ax */ W16((u32)(0xa954f4u), (u16)r_eax);
    /* 006b9a15: mov word ptr [0xa954f8], ax */ W16((u32)(0xa954f8u), (u16)r_eax);
    /* 006b9a1b: mov dword ptr [edi + 0x160], eax */ W32((u32)(r_edi+0x160u), r_eax);
    /* 006b9a21: mov dword ptr [edi + 0x164], eax */ W32((u32)(r_edi+0x164u), r_eax);
    /* 006b9a27: mov dword ptr [edi + 0x168], eax */ W32((u32)(r_edi+0x168u), r_eax);
    /* 006b9a2d: mov dword ptr [edi + 0x16c], eax */ W32((u32)(r_edi+0x16cu), r_eax);
    /* 006b9a33: mov word ptr [edi + 0x170], ax */ W16((u32)(r_edi+0x170u), (u16)r_eax);
    /* 006b9a3a: mov word ptr [edi + 0x172], ax */ W16((u32)(r_edi+0x172u), (u16)r_eax);
    /* 006b9a41: mov word ptr [edi + 0x174], ax */ W16((u32)(r_edi+0x174u), (u16)r_eax);
    /* 006b9a48: mov word ptr [edi + 0x176], ax */ W16((u32)(r_edi+0x176u), (u16)r_eax);
    /* 006b9a4f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9a52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b9a53: ret  */ FN_RET(0x006b9980); r_esp += 4; return;
}

void f_006b9a54(void) /* sub_6B9A54 */
{
    FN_ENTER(0x006b9a54);
    /* 006b9a54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a55: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 006b9a59: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006b9a5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9a60: je 0x6b9af6 */ if (fZ) goto L_006b9af6;
L_006b9a66:; BB(0x006b9a66);
    /* 006b9a66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9a69: je 0x6b9ae1 */ if (fZ) goto L_006b9ae1;
L_006b9a6b:; BB(0x006b9a6b);
    /* 006b9a6b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9a6e: je 0x6b9ab9 */ if (fZ) goto L_006b9ab9;
L_006b9a70:; BB(0x006b9a70);
    /* 006b9a70: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9a73: jne 0x6b9a8a */ if (!fZ) goto L_006b9a8a;
L_006b9a75:; BB(0x006b9a75);
    /* 006b9a75: push 0x969b80 */ { u32 v = 0x969b80u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a7b: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a80: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9a85u); f_0078e574();
    /* 006b9a85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9a88: jmp 0x6b9acc */ goto L_006b9acc;
L_006b9a8a:; BB(0x006b9a8a);
    /* 006b9a8a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9a8d: jne 0x6b9aa4 */ if (!fZ) goto L_006b9aa4;
L_006b9a8f:; BB(0x006b9a8f);
    /* 006b9a8f: push 0x969b88 */ { u32 v = 0x969b88u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a95: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9a9a: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9a9fu); f_0078e574();
    /* 006b9a9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9aa2: jmp 0x6b9acc */ goto L_006b9acc;
L_006b9aa4:; BB(0x006b9aa4);
    /* 006b9aa4: push 0x969b70 */ { u32 v = 0x969b70u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9aa9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9aaa: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9aaf: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9ab4u); f_0078e574();
    /* 006b9ab4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9ab7: jmp 0x6b9acc */ goto L_006b9acc;
L_006b9ab9:; BB(0x006b9ab9);
    /* 006b9ab9: push 0x969b78 */ { u32 v = 0x969b78u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9abe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9abf: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ac4: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9ac9u); f_0078e574();
    /* 006b9ac9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006b9acc:; BB(0x006b9acc);
    /* 006b9acc: push 0x969b90 */ { u32 v = 0x969b90u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ad1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ad2: push 0xa955e4 */ { u32 v = 0xa955e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ad7: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9adcu); f_0078e574();
    /* 006b9adc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9adf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b9ae0: ret  */ FN_RET(0x006b9a54); r_esp += 4; return;
L_006b9ae1:; BB(0x006b9ae1);
    /* 006b9ae1: push 0x969b70 */ { u32 v = 0x969b70u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ae6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ae7: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9aec: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9af1u); f_0078e574();
    /* 006b9af1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9af4: jmp 0x6b9acc */ goto L_006b9acc;
L_006b9af6:; BB(0x006b9af6);
    /* 006b9af6: push 0x969b68 */ { u32 v = 0x969b68u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9afb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9afc: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006b9b01: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x6b9b06u); f_0078e574();
    /* 006b9b06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9b09: jmp 0x6b9acc */ goto L_006b9acc;
}

void f_006b9b0c(void)
{
    FN_ENTER(0x006b9b0c);
    /* 006b9b0c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b9b10: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 006b9b14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9b16: je 0x6b9b30 */ if (fZ) goto L_006b9b30;
L_006b9b18:; BB(0x006b9b18);
    /* 006b9b18: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b9b1b: jne 0x6b9b42 */ if (!fZ) goto L_006b9b42;
L_006b9b1d:; BB(0x006b9b1d);
    /* 006b9b1d: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 006b9b21: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 006b9b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9b26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9b27: call 0x6bb3d0 */ r_esp -= 4; W32(r_esp, 0x6b9b2cu); f_006bb3d0();
    /* 006b9b2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9b2f: ret  */ FN_RET(0x006b9b0c); r_esp += 4; return;
L_006b9b30:; BB(0x006b9b30);
    /* 006b9b30: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 006b9b34: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 006b9b38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9b39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9b3a: call 0x6bb318 */ r_esp -= 4; W32(r_esp, 0x6b9b3fu); f_006bb318();
    /* 006b9b3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006b9b42:; BB(0x006b9b42);
    /* 006b9b42: ret  */ FN_RET(0x006b9b0c); r_esp += 4; return;
}

void f_006b9b44(void) /* sub_6B9B44 */
{
    FN_ENTER(0x006b9b44);
    /* 006b9b44: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9b47: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006b9b4c: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 006b9b51: mov ecx, dword ptr [0xa9cd68] */ r_ecx = R32((u32)(0xa9cd68u));
    /* 006b9b57: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006b9b5c: mov byte ptr [esp], 0x75 */ W8((u32)(r_esp), 0x75u);
    /* 006b9b60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9b62: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b9b67: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006b9b6c: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 006b9b71: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 006b9b76: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9b79: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b9b7eu); f_008003e0();
    /* 006b9b7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9b81: ret  */ FN_RET(0x006b9b44); r_esp += 4; return;
}

void f_006b9b84(void) /* sub_6B9B84 */
{
    FN_ENTER(0x006b9b84);
    /* 006b9b84: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9b87: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006b9b8c: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 006b9b91: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006b9b95: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006b9b9a: mov byte ptr [esp], 0x75 */ W8((u32)(r_esp), 0x75u);
    /* 006b9b9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9ba0: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b9ba5: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006b9baa: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 006b9baf: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 006b9bb4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b9bb7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b9bbcu); f_008003e0();
    /* 006b9bbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9bbf: ret  */ FN_RET(0x006b9b84); r_esp += 4; return;
}

void f_006b9bc0(void) /* sub_6B9BC0 */
{
    FN_ENTER(0x006b9bc0);
    /* 006b9bc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9bc2: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 006b9bc7: mov dword ptr [0xa955e0], eax */ W32((u32)(0xa955e0u), r_eax);
    /* 006b9bcc: mov ecx, 0xa95604 */ r_ecx = 0xa95604u;
    /* 006b9bd1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9bd3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006b9bd5: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006b9bd8: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006b9bdb: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006b9bde: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006b9be1: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006b9be4: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006b9be7: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006b9bea: mov edx, 0xa955e4 */ r_edx = 0xa955e4u;
    /* 006b9bef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b9bf1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006b9bf3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006b9bf6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006b9bf9: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006b9bfc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006b9bff: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006b9c02: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006b9c05: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006b9c08: ret  */ FN_RET(0x006b9bc0); r_esp += 4; return;
}

void f_006b9bcf(void)
{
    FN_ENTER(0x006b9bcf);
    /* 006b9bcf: test eax, 0x89d23300 */ {  u32 a = r_eax; u32 b = 0x89d23300u; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006b9bd4: adc dword ptr [ecx + 0x51890451], ecx */ { u32 ad = (u32)(r_ecx+0x51890451u); u32 c = fC; u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006b9bda: or byte ptr [ecx + 0x51890c51], cl */ { u32 ad = (u32)(r_ecx+0x51890c51u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fC = 0; }
    /* 006b9be0: adc byte ptr [ecx + 0x51891451], cl */ { u32 ad = (u32)(r_ecx+0x51891451u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 006b9be6: sbb byte ptr [ecx - 0x1b45e3af], cl */ { u32 ad = (u32)(r_ecx+0xe4ba1c51u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 006b9bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b9bed: test eax, 0x89c03300 */ {  u32 a = r_eax; u32 b = 0x89c03300u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006b9bf2: add cl, byte ptr [ecx + 0x42890442] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_ecx+0x42890442u)); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006b9bf8: or byte ptr [ecx + 0x42890c42], cl */ { u32 ad = (u32)(r_ecx+0x42890c42u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fC = 0; }
    /* 006b9bfe: adc byte ptr [ecx + 0x42891442], cl */ { u32 ad = (u32)(r_ecx+0x42891442u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 006b9c04: sbb byte ptr [ecx - 0x6f3ce3be], cl */ { u32 ad = (u32)(r_ecx+0x90c31c42u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 006b9c0a: nop  */ ;
    /* 006b9c0b: nop  */ ;
    /* 006b9c0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9c0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9c0f: mov dword ptr [0xaafee8], eax */ W32((u32)(0xaafee8u), r_eax);
    /* 006b9c14: mov dword ptr [0xaafee4], eax */ W32((u32)(0xaafee4u), r_eax);
    /* 006b9c19: mov dword ptr [0xaafee0], eax */ W32((u32)(0xaafee0u), r_eax);
    /* 006b9c1e: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
    /* 006b9c23: mov eax, dword ptr [0xa955e0] */ r_eax = R32((u32)(0xa955e0u));
    /* 006b9c28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c2b: je 0x6b9cb2 */ if (fZ) goto L_006b9cb2;
L_006b9c31:; BB(0x006b9c31);
    /* 006b9c31: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c34: je 0x6b9ca6 */ if (fZ) goto L_006b9ca6;
L_006b9c36:; BB(0x006b9c36);
    /* 006b9c36: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c39: je 0x6b9c5d */ if (fZ) goto L_006b9c5d;
L_006b9c3b:; BB(0x006b9c3b);
    /* 006b9c3b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c3e: jne 0x6b9c4c */ if (!fZ) goto L_006b9c4c;
L_006b9c40:; BB(0x006b9c40);
    /* 006b9c40: mov eax, dword ptr [0xa96174] */ r_eax = R32((u32)(0xa96174u));
    /* 006b9c45: call 0x6b9d04 */ r_esp -= 4; W32(r_esp, 0x6b9c4au); f_006b9d04();
    /* 006b9c4a: jmp 0x6b9c67 */ goto L_006b9c67;
L_006b9c4c:; BB(0x006b9c4c);
    /* 006b9c4c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c4f: jne 0x6b9c67 */ if (!fZ) goto L_006b9c67;
L_006b9c51:; BB(0x006b9c51);
    /* 006b9c51: mov eax, 0xa955e4 */ r_eax = 0xa955e4u;
    /* 006b9c56: call 0x6b9cc4 */ r_esp -= 4; W32(r_esp, 0x6b9c5bu); f_006b9cc4();
    /* 006b9c5b: jmp 0x6b9c67 */ goto L_006b9c67;
L_006b9c5d:; BB(0x006b9c5d);
    /* 006b9c5d: call 0x6cf5c0 */ r_esp -= 4; W32(r_esp, 0x6b9c62u); f_006cf5c0();
    /* 006b9c62: call 0x6b9fc8 */ r_esp -= 4; W32(r_esp, 0x6b9c67u); f_006b9fc8();
L_006b9c67:; BB(0x006b9c67);
    /* 006b9c67: movzx eax, word ptr [0xaafee0] */ r_eax = (u32)R16((u32)(0xaafee0u));
    /* 006b9c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9c6f: call 0x7ba3cc */ r_esp -= 4; W32(r_esp, 0x6b9c74u); f_007ba3cc();
    /* 006b9c74: movzx eax, word ptr [0xaafedc] */ r_eax = (u32)R16((u32)(0xaafedcu));
    /* 006b9c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9c7c: call 0x7ba3ec */ r_esp -= 4; W32(r_esp, 0x6b9c81u); f_007ba3ec();
    /* 006b9c81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9c84: mov eax, dword ptr [0xaafee8] */ r_eax = R32((u32)(0xaafee8u));
    /* 006b9c89: mov edx, dword ptr [0xaafee4] */ r_edx = R32((u32)(0xaafee4u));
    /* 006b9c8f: mov dword ptr [0xab02b4], eax */ W32((u32)(0xab02b4u), r_eax);
    /* 006b9c94: mov dword ptr [0xab02b0], edx */ W32((u32)(0xab02b0u), r_edx);
    /* 006b9c9a: call 0x810238 */ r_esp -= 4; W32(r_esp, 0x6b9c9fu); f_00810238();
    /* 006b9c9f: call 0x8102a4 */ r_esp -= 4; W32(r_esp, 0x6b9ca4u); f_008102a4();
    /* 006b9ca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9ca5: ret  */ FN_RET(0x006b9bcf); r_esp += 4; return;
L_006b9ca6:; BB(0x006b9ca6);
    /* 006b9ca6: mov eax, dword ptr [0xa96174] */ r_eax = R32((u32)(0xa96174u));
    /* 006b9cab: call 0x6b9fc8 */ r_esp -= 4; W32(r_esp, 0x6b9cb0u); f_006b9fc8();
    /* 006b9cb0: jmp 0x6b9c67 */ goto L_006b9c67;
L_006b9cb2:; BB(0x006b9cb2);
    /* 006b9cb2: mov eax, 0xa955e4 */ r_eax = 0xa955e4u;
    /* 006b9cb7: call 0x6ba2f8 */ r_esp -= 4; W32(r_esp, 0x6b9cbcu); f_006ba2f8();
    /* 006b9cbc: jmp 0x6b9c67 */ goto L_006b9c67;
}

void f_006b9c0c(void) /* sub_6B9C0C */
{
    FN_ENTER(0x006b9c0c);
    /* 006b9c0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9c0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9c0f: mov dword ptr [0xaafee8], eax */ W32((u32)(0xaafee8u), r_eax);
    /* 006b9c14: mov dword ptr [0xaafee4], eax */ W32((u32)(0xaafee4u), r_eax);
    /* 006b9c19: mov dword ptr [0xaafee0], eax */ W32((u32)(0xaafee0u), r_eax);
    /* 006b9c1e: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
    /* 006b9c23: mov eax, dword ptr [0xa955e0] */ r_eax = R32((u32)(0xa955e0u));
    /* 006b9c28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c2b: je 0x6b9cb2 */ if (fZ) goto L_006b9cb2;
L_006b9c31:; BB(0x006b9c31);
    /* 006b9c31: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c34: je 0x6b9ca6 */ if (fZ) goto L_006b9ca6;
L_006b9c36:; BB(0x006b9c36);
    /* 006b9c36: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c39: je 0x6b9c5d */ if (fZ) goto L_006b9c5d;
L_006b9c3b:; BB(0x006b9c3b);
    /* 006b9c3b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c3e: jne 0x6b9c4c */ if (!fZ) goto L_006b9c4c;
L_006b9c40:; BB(0x006b9c40);
    /* 006b9c40: mov eax, dword ptr [0xa96174] */ r_eax = R32((u32)(0xa96174u));
    /* 006b9c45: call 0x6b9d04 */ r_esp -= 4; W32(r_esp, 0x6b9c4au); f_006b9d04();
    /* 006b9c4a: jmp 0x6b9c67 */ goto L_006b9c67;
L_006b9c4c:; BB(0x006b9c4c);
    /* 006b9c4c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9c4f: jne 0x6b9c67 */ if (!fZ) goto L_006b9c67;
L_006b9c51:; BB(0x006b9c51);
    /* 006b9c51: mov eax, 0xa955e4 */ r_eax = 0xa955e4u;
    /* 006b9c56: call 0x6b9cc4 */ r_esp -= 4; W32(r_esp, 0x6b9c5bu); f_006b9cc4();
    /* 006b9c5b: jmp 0x6b9c67 */ goto L_006b9c67;
L_006b9c5d:; BB(0x006b9c5d);
    /* 006b9c5d: call 0x6cf5c0 */ r_esp -= 4; W32(r_esp, 0x6b9c62u); f_006cf5c0();
    /* 006b9c62: call 0x6b9fc8 */ r_esp -= 4; W32(r_esp, 0x6b9c67u); f_006b9fc8();
L_006b9c67:; BB(0x006b9c67);
    /* 006b9c67: movzx eax, word ptr [0xaafee0] */ r_eax = (u32)R16((u32)(0xaafee0u));
    /* 006b9c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9c6f: call 0x7ba3cc */ r_esp -= 4; W32(r_esp, 0x6b9c74u); f_007ba3cc();
    /* 006b9c74: movzx eax, word ptr [0xaafedc] */ r_eax = (u32)R16((u32)(0xaafedcu));
    /* 006b9c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9c7c: call 0x7ba3ec */ r_esp -= 4; W32(r_esp, 0x6b9c81u); f_007ba3ec();
    /* 006b9c81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9c84: mov eax, dword ptr [0xaafee8] */ r_eax = R32((u32)(0xaafee8u));
    /* 006b9c89: mov edx, dword ptr [0xaafee4] */ r_edx = R32((u32)(0xaafee4u));
    /* 006b9c8f: mov dword ptr [0xab02b4], eax */ W32((u32)(0xab02b4u), r_eax);
    /* 006b9c94: mov dword ptr [0xab02b0], edx */ W32((u32)(0xab02b0u), r_edx);
    /* 006b9c9a: call 0x810238 */ r_esp -= 4; W32(r_esp, 0x6b9c9fu); f_00810238();
    /* 006b9c9f: call 0x8102a4 */ r_esp -= 4; W32(r_esp, 0x6b9ca4u); f_008102a4();
    /* 006b9ca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9ca5: ret  */ FN_RET(0x006b9c0c); r_esp += 4; return;
L_006b9ca6:; BB(0x006b9ca6);
    /* 006b9ca6: mov eax, dword ptr [0xa96174] */ r_eax = R32((u32)(0xa96174u));
    /* 006b9cab: call 0x6b9fc8 */ r_esp -= 4; W32(r_esp, 0x6b9cb0u); f_006b9fc8();
    /* 006b9cb0: jmp 0x6b9c67 */ goto L_006b9c67;
L_006b9cb2:; BB(0x006b9cb2);
    /* 006b9cb2: mov eax, 0xa955e4 */ r_eax = 0xa955e4u;
    /* 006b9cb7: call 0x6ba2f8 */ r_esp -= 4; W32(r_esp, 0x6b9cbcu); f_006ba2f8();
    /* 006b9cbc: jmp 0x6b9c67 */ goto L_006b9c67;
}

void f_006b9cc4(void) /* sub_6B9CC4 */
{
    FN_ENTER(0x006b9cc4);
    /* 006b9cc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9cc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9cc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9cc7: mov ebx, eax */ r_ebx = r_eax;
    /* 006b9cc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9cca: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6b9ccfu); f_005b9328();
    /* 006b9ccf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9cd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b9cd2: jl 0x6b9cfb */ if ((fS!=fO)) goto L_006b9cfb;
L_006b9cd4:; BB(0x006b9cd4);
    /* 006b9cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9cd5: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6b9cdau); f_0082e940();
    /* 006b9cda: mov edi, eax */ r_edi = r_eax;
    /* 006b9cdc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9cdf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b9ce1: je 0x6b9cfb */ if (fZ) goto L_006b9cfb;
L_006b9ce3:; BB(0x006b9ce3);
    /* 006b9ce3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ce4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ce5: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6b9ceau); f_005b9910();
    /* 006b9cea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9ced: mov eax, edi */ r_eax = r_edi;
    /* 006b9cef: call 0x6b9d04 */ r_esp -= 4; W32(r_esp, 0x6b9cf4u); f_006b9d04();
    /* 006b9cf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9cf5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6b9cfau); f_0082e960();
    /* 006b9cfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b9cfb:; BB(0x006b9cfb);
    /* 006b9cfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b9cfc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b9cfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b9cfe: ret  */ FN_RET(0x006b9cc4); r_esp += 4; return;
}

void f_006b9d04(void) /* sub_6B9D04 */
{
    FN_ENTER(0x006b9d04);
    /* 006b9d04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9d06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b9d07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9d08: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b9d0b: mov dword ptr [0xa9564c], eax */ W32((u32)(0xa9564cu), r_eax);
    /* 006b9d10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9d12: mov esi, eax */ r_esi = r_eax;
L_006b9d14:; BB(0x006b9d14);
    /* 006b9d14: movsx edx, word ptr [esi*2 + 0xa95628] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi*2+0xa95628u));
    /* 006b9d1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d1e: jne 0x6b9d46 */ if (!fZ) goto L_006b9d46;
L_006b9d20:; BB(0x006b9d20);
    /* 006b9d20: mov edi, dword ptr [0xa9564c] */ r_edi = R32((u32)(0xa9564cu));
    /* 006b9d26: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d28: jne 0x6b9d2e */ if (!fZ) goto L_006b9d2e;
L_006b9d2a:; BB(0x006b9d2a);
    /* 006b9d2a: jmp 0x6b9d46 */ goto L_006b9d46;
L_006b9d2c:; BB(0x006b9d2c);
    /* 006b9d2c: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_006b9d2e:; BB(0x006b9d2e);
    /* 006b9d2e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006b9d30: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006b9d33: mov ebp, dword ptr [edi + 8] */ r_ebp = R32((u32)(r_edi+0x8u));
    /* 006b9d36: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 006b9d39: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d3c: je 0x6b9e6e */ if (fZ) goto L_006b9e6e;
L_006b9d42:; BB(0x006b9d42);
    /* 006b9d42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d44: jne 0x6b9d2c */ if (!fZ) goto L_006b9d2c;
L_006b9d46:; BB(0x006b9d46);
    /* 006b9d46: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b9d49: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b9d4c: jl 0x6b9d14 */ if ((fS!=fO)) goto L_006b9d14;
L_006b9d4e:; BB(0x006b9d4e);
    /* 006b9d4e: call 0x80ed90 */ r_esp -= 4; W32(r_esp, 0x6b9d53u); f_0080ed90();
    /* 006b9d53: call 0x80ebb8 */ r_esp -= 4; W32(r_esp, 0x6b9d58u); f_0080ebb8();
    /* 006b9d58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9d5a: mov ebx, eax */ r_ebx = r_eax;
L_006b9d5c:; BB(0x006b9d5c);
    /* 006b9d5c: movsx edx, word ptr [ebx*2 + 0xa95628] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx*2+0xa95628u));
    /* 006b9d64: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006b9d66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d68: jne 0x6b9d9a */ if (!fZ) goto L_006b9d9a;
L_006b9d6a:; BB(0x006b9d6a);
    /* 006b9d6a: mov ebp, dword ptr [0xa9564c] */ r_ebp = R32((u32)(0xa9564cu));
    /* 006b9d70: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d72: jne 0x6b9d7b */ if (!fZ) goto L_006b9d7b;
L_006b9d74:; BB(0x006b9d74);
    /* 006b9d74: jmp 0x6b9eea */ goto L_006b9eea;
L_006b9d79:; BB(0x006b9d79);
    /* 006b9d79: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006b9d7b:; BB(0x006b9d7b);
    /* 006b9d7b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006b9d7e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006b9d81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006b9d84: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 006b9d87: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d8a: je 0x6b9ef7 */ if (fZ) goto L_006b9ef7;
L_006b9d90:; BB(0x006b9d90);
    /* 006b9d90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9d92: je 0x6b9eea */ if (fZ) goto L_006b9eea;
L_006b9d98:; BB(0x006b9d98);
    /* 006b9d98: jmp 0x6b9d79 */ goto L_006b9d79;
L_006b9d9a:; BB(0x006b9d9a);
    /* 006b9d9a: push dword ptr [0xa9564c] */ { u32 v = R32((u32)(0xa9564cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b9da0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9da1: call 0x80de90 */ r_esp -= 4; W32(r_esp, 0x6b9da6u); f_0080de90();
    /* 006b9da6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006b9da9:; BB(0x006b9da9);
    /* 006b9da9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b9dac: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b9daf: jl 0x6b9d5c */ if ((fS!=fO)) goto L_006b9d5c;
L_006b9db1:; BB(0x006b9db1);
    /* 006b9db1: call 0x80de5c */ r_esp -= 4; W32(r_esp, 0x6b9db6u); f_0080de5c();
    /* 006b9db6: call 0x80ed98 */ r_esp -= 4; W32(r_esp, 0x6b9dbbu); f_0080ed98();
    /* 006b9dbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9dbd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b9dbf:; BB(0x006b9dbf);
    /* 006b9dbf: mov ebp, dword ptr [0xab02bc] */ r_ebp = R32((u32)(0xab02bcu));
    /* 006b9dc5: lea ecx, [eax + 0x100] */ r_ecx = (u32)(r_eax+0x100u);
    /* 006b9dcb: mov word ptr [ebp + edx*4 + 2], cx */ W16((u32)(r_ebp+r_edx*4+0x2u), (u16)r_ecx);
    /* 006b9dd0: lea ecx, [eax + 0x101] */ r_ecx = (u32)(r_eax+0x101u);
    /* 006b9dd6: mov ebp, dword ptr [0xab02bc] */ r_ebp = R32((u32)(0xab02bcu));
    /* 006b9ddc: mov word ptr [ebp + edx*4 + 6], cx */ W16((u32)(r_ebp+r_edx*4+0x6u), (u16)r_ecx);
    /* 006b9de1: mov ebp, dword ptr [0xab02bc] */ r_ebp = R32((u32)(0xab02bcu));
    /* 006b9de7: lea ecx, [eax + 0x102] */ r_ecx = (u32)(r_eax+0x102u);
    /* 006b9ded: mov word ptr [ebp + edx*4 + 0xa], cx */ W16((u32)(r_ebp+r_edx*4+0xau), (u16)r_ecx);
    /* 006b9df2: mov ebp, dword ptr [0xab02bc] */ r_ebp = R32((u32)(0xab02bcu));
    /* 006b9df8: lea ecx, [eax + 0x103] */ r_ecx = (u32)(r_eax+0x103u);
    /* 006b9dfe: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b9e01: mov word ptr [ebp + edx*4 + 0xe], cx */ W16((u32)(r_ebp+r_edx*4+0xeu), (u16)r_ecx);
    /* 006b9e06: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b9e09: cmp edx, 0xba0 */ {  u32 a = r_edx; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b9e0f: jl 0x6b9dbf */ if ((fS!=fO)) goto L_006b9dbf;
L_006b9e11:; BB(0x006b9e11);
    /* 006b9e11: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 006b9e17: lea ecx, [edx + 4] */ r_ecx = (u32)(r_edx+0x4u);
    /* 006b9e1a: add edx, 0x87c4 */ {  u32 a = r_edx; u32 b = 0x87c4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006b9e20:; BB(0x006b9e20);
    /* 006b9e20: lea ebp, [eax + 0x100] */ r_ebp = (u32)(r_eax+0x100u);
    /* 006b9e26: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 006b9e29: lea ebp, [eax + 0x101] */ r_ebp = (u32)(r_eax+0x101u);
    /* 006b9e2f: mov word ptr [ecx + 0xc], bp */ W16((u32)(r_ecx+0xcu), (u16)r_ebp);
    /* 006b9e33: lea ebp, [eax + 0x102] */ r_ebp = (u32)(r_eax+0x102u);
    /* 006b9e39: mov word ptr [ecx + 0x18], bp */ W16((u32)(r_ecx+0x18u), (u16)r_ebp);
    /* 006b9e3d: lea ebp, [eax + 0x103] */ r_ebp = (u32)(r_eax+0x103u);
    /* 006b9e43: mov word ptr [ecx + 0x24], bp */ W16((u32)(r_ecx+0x24u), (u16)r_ebp);
    /* 006b9e47: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b9e4a: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b9e4d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006b9e4f: ja 0x6b9e20 */ if ((!fC&&!fZ)) goto L_006b9e20;
L_006b9e51:; BB(0x006b9e51);
    /* 006b9e51: mov dword ptr [0xa9564c], 0 */ W32((u32)(0xa9564cu), 0x0u);
    /* 006b9e5b: mov eax, 1 */ r_eax = 0x1u;
    /* 006b9e60: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 006b9e66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9e69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b9e6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b9e6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b9e6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b9e6d: ret  */ FN_RET(0x006b9d04); r_esp += 4; return;
L_006b9e6e:; BB(0x006b9e6e);
    /* 006b9e6e: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9e70: jne 0x6b9d2c */ if (!fZ) goto L_006b9d2c;
L_006b9e76:; BB(0x006b9e76);
    /* 006b9e76: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b9e79: mov ecx, edi */ r_ecx = r_edi;
    /* 006b9e7b: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 006b9e80: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006b9e82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9e84: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006b9e87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006b9e89: ja 0x6b9e90 */ if ((!fC&&!fZ)) goto L_006b9e90;
L_006b9e8b:; BB(0x006b9e8b);
    /* 006b9e8b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b9e8e: jmp 0x6b9ec8 */ goto L_006b9ec8;
L_006b9e90:; BB(0x006b9e90);
    /* 006b9e90: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b9e93: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006b9e97: mov ebx, eax */ r_ebx = r_eax;
    /* 006b9e99: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006b9e9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006b9e9f: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006b9ea3: mov esi, edx */ r_esi = r_edx;
L_006b9ea5:; BB(0x006b9ea5);
    /* 006b9ea5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b9ea7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6b9eacu); f_0061cdb0();
    /* 006b9eac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9eae: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 006b9eb2: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b9eb5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b9eb8: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006b9eba: jb 0x6b9ea5 */ if (fC) goto L_006b9ea5;
L_006b9ebc:; BB(0x006b9ebc);
    /* 006b9ebc: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006b9ec0: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006b9ec4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_006b9ec8:; BB(0x006b9ec8);
    /* 006b9ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ec9: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x6b9eceu); f_0080c2dc();
    /* 006b9ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ecf: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006b9ed3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ed4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9ed5: call 0x80eda0 */ r_esp -= 4; W32(r_esp, 0x6b9edau); f_0080eda0();
    /* 006b9eda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9edb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9edc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b9edd: call 0x80fef8 */ r_esp -= 4; W32(r_esp, 0x6b9ee2u); f_0080fef8();
    /* 006b9ee2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9ee5: jmp 0x6b9d46 */ goto L_006b9d46;
L_006b9eea:; BB(0x006b9eea);
    /* 006b9eea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9eec: je 0x6b9d9a */ if (fZ) goto L_006b9d9a;
L_006b9ef2:; BB(0x006b9ef2);
    /* 006b9ef2: jmp 0x6b9da9 */ goto L_006b9da9;
L_006b9ef7:; BB(0x006b9ef7);
    /* 006b9ef7: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9ef9: jne 0x6b9d79 */ if (!fZ) goto L_006b9d79;
L_006b9eff:; BB(0x006b9eff);
    /* 006b9eff: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 006b9f04: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b9f07: mov edi, ebp */ r_edi = r_ebp;
    /* 006b9f09: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006b9f0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9f0d: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006b9f10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006b9f12: ja 0x6b9f1c */ if ((!fC&&!fZ)) goto L_006b9f1c;
L_006b9f14:; BB(0x006b9f14);
    /* 006b9f14: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b9f18: mov edi, ecx */ r_edi = r_ecx;
    /* 006b9f1a: jmp 0x6b9f5d */ goto L_006b9f5d;
L_006b9f1c:; BB(0x006b9f1c);
    /* 006b9f1c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b9f20: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b9f24: mov ecx, edi */ r_ecx = r_edi;
    /* 006b9f26: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006b9f2a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006b9f2e: mov esi, edx */ r_esi = r_edx;
    /* 006b9f30: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b9f34: mov edi, ecx */ r_edi = r_ecx;
    /* 006b9f36: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006b9f39: mov ebx, eax */ r_ebx = r_eax;
L_006b9f3b:; BB(0x006b9f3b);
    /* 006b9f3b: mov ecx, edi */ r_ecx = r_edi;
    /* 006b9f3d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6b9f42u); f_0061cdb0();
    /* 006b9f42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b9f44: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 006b9f48: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b9f4b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b9f4e: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006b9f50: jb 0x6b9f3b */ if (fC) goto L_006b9f3b;
L_006b9f52:; BB(0x006b9f52);
    /* 006b9f52: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006b9f56: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006b9f5a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006b9f5d:; BB(0x006b9f5d);
    /* 006b9f5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f5e: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x6b9f63u); f_0080c2dc();
    /* 006b9f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f64: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006b9f68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f6a: call 0x80ee4c */ r_esp -= 4; W32(r_esp, 0x6b9f6fu); f_0080ee4c();
    /* 006b9f6f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b9f72: call 0x810030 */ r_esp -= 4; W32(r_esp, 0x6b9f77u); f_00810030();
    /* 006b9f77: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9f7a: mov ecx, dword ptr [0xa9564c] */ r_ecx = R32((u32)(0xa9564cu));
    /* 006b9f80: mov edi, 1 */ r_edi = 0x1u;
    /* 006b9f85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9f87: jne 0x6b9f90 */ if (!fZ) goto L_006b9f90;
L_006b9f89:; BB(0x006b9f89);
    /* 006b9f89: jmp 0x6b9eea */ goto L_006b9eea;
L_006b9f8e:; BB(0x006b9f8e);
    /* 006b9f8e: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006b9f90:; BB(0x006b9f90);
    /* 006b9f90: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 006b9f92: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 006b9f95: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006b9f98: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006b9f9b: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9f9e: je 0x6b9faa */ if (fZ) goto L_006b9faa;
L_006b9fa0:; BB(0x006b9fa0);
    /* 006b9fa0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9fa2: je 0x6b9eea */ if (fZ) goto L_006b9eea;
L_006b9fa8:; BB(0x006b9fa8);
    /* 006b9fa8: jmp 0x6b9f8e */ goto L_006b9f8e;
L_006b9faa:; BB(0x006b9faa);
    /* 006b9faa: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b9fac: jne 0x6b9f8e */ if (!fZ) goto L_006b9f8e;
L_006b9fae:; BB(0x006b9fae);
    /* 006b9fae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b9faf: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b9fb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9fb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9fb4: call 0x80d1e8 */ r_esp -= 4; W32(r_esp, 0x6b9fb9u); f_0080d1e8();
    /* 006b9fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b9fbc: jmp 0x6b9eea */ goto L_006b9eea;
}

void f_006b9fc8(void) /* sub_6B9FC8 */
{
    FN_ENTER(0x006b9fc8);
    /* 006b9fc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b9fc9: mov dword ptr [0xa9564c], eax */ W32((u32)(0xa9564cu), r_eax);
    /* 006b9fce: call 0x6ba080 */ r_esp -= 4; W32(r_esp, 0x6b9fd3u); f_006ba080();
    /* 006b9fd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b9fd5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b9fd7:; BB(0x006b9fd7);
    /* 006b9fd7: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006b9fdd: lea ecx, [eax + 0x100] */ r_ecx = (u32)(r_eax+0x100u);
    /* 006b9fe3: mov word ptr [ebx + edx*4 + 2], cx */ W16((u32)(r_ebx+r_edx*4+0x2u), (u16)r_ecx);
    /* 006b9fe8: lea ecx, [eax + 0x101] */ r_ecx = (u32)(r_eax+0x101u);
    /* 006b9fee: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006b9ff4: mov word ptr [ebx + edx*4 + 6], cx */ W16((u32)(r_ebx+r_edx*4+0x6u), (u16)r_ecx);
    /* 006b9ff9: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006b9fff: lea ecx, [eax + 0x102] */ r_ecx = (u32)(r_eax+0x102u);
    /* 006ba005: mov word ptr [ebx + edx*4 + 0xa], cx */ W16((u32)(r_ebx+r_edx*4+0xau), (u16)r_ecx);
    /* 006ba00a: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006ba010: lea ecx, [eax + 0x103] */ r_ecx = (u32)(r_eax+0x103u);
    /* 006ba016: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba019: mov word ptr [ebx + edx*4 + 0xe], cx */ W16((u32)(r_ebx+r_edx*4+0xeu), (u16)r_ecx);
    /* 006ba01e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba021: cmp edx, 0xba0 */ {  u32 a = r_edx; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ba027: jl 0x6b9fd7 */ if ((fS!=fO)) goto L_006b9fd7;
L_006ba029:; BB(0x006ba029);
    /* 006ba029: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 006ba02f: lea ecx, [edx + 4] */ r_ecx = (u32)(r_edx+0x4u);
    /* 006ba032: add edx, 0x87c4 */ {  u32 a = r_edx; u32 b = 0x87c4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006ba038:; BB(0x006ba038);
    /* 006ba038: lea ebx, [eax + 0x100] */ r_ebx = (u32)(r_eax+0x100u);
    /* 006ba03e: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 006ba041: lea ebx, [eax + 0x101] */ r_ebx = (u32)(r_eax+0x101u);
    /* 006ba047: mov word ptr [ecx + 0xc], bx */ W16((u32)(r_ecx+0xcu), (u16)r_ebx);
    /* 006ba04b: lea ebx, [eax + 0x102] */ r_ebx = (u32)(r_eax+0x102u);
    /* 006ba051: mov word ptr [ecx + 0x18], bx */ W16((u32)(r_ecx+0x18u), (u16)r_ebx);
    /* 006ba055: lea ebx, [eax + 0x103] */ r_ebx = (u32)(r_eax+0x103u);
    /* 006ba05b: mov word ptr [ecx + 0x24], bx */ W16((u32)(r_ecx+0x24u), (u16)r_ebx);
    /* 006ba05f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba062: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba065: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba067: ja 0x6ba038 */ if ((!fC&&!fZ)) goto L_006ba038;
L_006ba069:; BB(0x006ba069);
    /* 006ba069: mov dword ptr [0xa9564c], 0 */ W32((u32)(0xa9564cu), 0x0u);
    /* 006ba073: mov eax, 1 */ r_eax = 0x1u;
    /* 006ba078: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 006ba07e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba07f: ret  */ FN_RET(0x006b9fc8); r_esp += 4; return;
}

