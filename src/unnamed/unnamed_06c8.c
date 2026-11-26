#include "protos.h"

void f_006c8024(void) /* sub_6C8024 */
{
    FN_ENTER(0x006c8024);
    /* 006c8024: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8025: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c8027: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c802a: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c802fu); f_0082c204();
    /* 006c802f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8030: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8032: jne 0x6c8044 */ if (!fZ) goto L_006c8044;
L_006c8034:; BB(0x006c8034);
    /* 006c8034: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006c803b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c803d: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c8042u); f_006c7cac();
    /* 006c8042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8043: ret  */ FN_RET(0x006c8024); r_esp += 4; return;
L_006c8044:; BB(0x006c8044);
    /* 006c8044: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c8049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c804b: jne 0x6c809e */ if (!fZ) goto L_006c809e;
L_006c804d:; BB(0x006c804d);
    /* 006c804d: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c8050: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c8055u); f_006dc358();
    /* 006c8055: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8058: jne 0x6c809e */ if (!fZ) goto L_006c809e;
L_006c805a:; BB(0x006c805a);
    /* 006c805a: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c805d: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x6c8062u); f_0082c3a8();
    /* 006c8062: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8065: jne 0x6c8070 */ if (!fZ) goto L_006c8070;
L_006c8067:; BB(0x006c8067);
    /* 006c8067: mov dword ptr [ebp + 0x2c], 9 */ W32((u32)(r_ebp+0x2cu), 0x9u);
    /* 006c806e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c806f: ret  */ FN_RET(0x006c8024); r_esp += 4; return;
L_006c8070:; BB(0x006c8070);
    /* 006c8070: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c8075: mov dword ptr [ebp + 0x2c], 0x10 */ W32((u32)(r_ebp+0x2cu), 0x10u);
    /* 006c807c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c807f: mov dword ptr [0xa95e88], eax */ W32((u32)(0xa95e88u), r_eax);
    /* 006c8084: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006c8086: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c808bu); f_007930dc();
    /* 006c808b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c808c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c808e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c808f: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006c8092: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c8097u); f_0073ae38();
    /* 006c8097: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c8099: call 0x6c7c34 */ r_esp -= 4; W32(r_esp, 0x6c809eu); f_006c7c34();
L_006c809e:; BB(0x006c809e);
    /* 006c809e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c809f: ret  */ FN_RET(0x006c8024); r_esp += 4; return;
}

void f_006c80a0(void) /* sub_6C80A0 */
{
    FN_ENTER(0x006c80a0);
    /* 006c80a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c80a1: mov edi, ecx */ r_edi = r_ecx;
    /* 006c80a3: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x6c80a8u); f_006c44bc();
    /* 006c80a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c80aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c80ab: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c80ae: call 0x82c2d8 */ r_esp -= 4; W32(r_esp, 0x6c80b3u); f_0082c2d8();
    /* 006c80b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c80b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c80b8: jne 0x6c80c3 */ if (!fZ) goto L_006c80c3;
L_006c80ba:; BB(0x006c80ba);
    /* 006c80ba: mov dword ptr [edi + 0x2c], 0xa */ W32((u32)(r_edi+0x2cu), 0xau);
    /* 006c80c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c80c2: ret  */ FN_RET(0x006c80a0); r_esp += 4; return;
L_006c80c3:; BB(0x006c80c3);
    /* 006c80c3: mov dword ptr [edi + 0x2c], 0x11 */ W32((u32)(r_edi+0x2cu), 0x11u);
    /* 006c80ca: mov ecx, edi */ r_ecx = r_edi;
    /* 006c80cc: call 0x6c7c88 */ r_esp -= 4; W32(r_esp, 0x6c80d1u); f_006c7c88();
    /* 006c80d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c80d2: ret  */ FN_RET(0x006c80a0); r_esp += 4; return;
}

void f_006c80d4(void) /* sub_6C80D4 */
{
    FN_ENTER(0x006c80d4);
    /* 006c80d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c80d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c80d7: call 0x6c2944 */ r_esp -= 4; W32(r_esp, 0x6c80dcu); f_006c2944();
    /* 006c80dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c80de: jne 0x6c80e9 */ if (!fZ) goto L_006c80e9;
L_006c80e0:; BB(0x006c80e0);
    /* 006c80e0: mov dword ptr [ebx + 0x2c], 0xb */ W32((u32)(r_ebx+0x2cu), 0xbu);
    /* 006c80e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c80e8: ret  */ FN_RET(0x006c80d4); r_esp += 4; return;
L_006c80e9:; BB(0x006c80e9);
    /* 006c80e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c80eb: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c80f0u); f_006c7cac();
    /* 006c80f0: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006c80f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c80f8: ret  */ FN_RET(0x006c80d4); r_esp += 4; return;
}

void f_006c80fc(void) /* sub_6C80FC */
{
    FN_ENTER(0x006c80fc);
    /* 006c80fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c80fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c80ff: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c8102: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c8107u); f_0082c204();
    /* 006c8107: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c810a: jne 0x6c811c */ if (!fZ) goto L_006c811c;
L_006c810c:; BB(0x006c810c);
    /* 006c810c: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006c8113: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c8115: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c811au); f_006c7cac();
    /* 006c811a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c811b: ret  */ FN_RET(0x006c80fc); r_esp += 4; return;
L_006c811c:; BB(0x006c811c);
    /* 006c811c: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c8121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8123: jne 0x6c817d */ if (!fZ) goto L_006c817d;
L_006c8125:; BB(0x006c8125);
    /* 006c8125: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c8128: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c812du); f_006dc358();
    /* 006c812d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c812e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8130: jne 0x6c817d */ if (!fZ) goto L_006c817d;
L_006c8132:; BB(0x006c8132);
    /* 006c8132: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c8135: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x6c813au); f_0082c3a8();
    /* 006c813a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c813b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c813d: jne 0x6c814f */ if (!fZ) goto L_006c814f;
L_006c813f:; BB(0x006c813f);
    /* 006c813f: mov dword ptr [ebx + 0x2c], 0x11 */ W32((u32)(r_ebx+0x2cu), 0x11u);
    /* 006c8146: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c8148: call 0x6c7c88 */ r_esp -= 4; W32(r_esp, 0x6c814du); f_006c7c88();
    /* 006c814d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c814e: ret  */ FN_RET(0x006c80fc); r_esp += 4; return;
L_006c814f:; BB(0x006c814f);
    /* 006c814f: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c8154: mov dword ptr [ebx + 0x2c], 0x10 */ W32((u32)(r_ebx+0x2cu), 0x10u);
    /* 006c815b: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c815e: mov dword ptr [0xa95e88], eax */ W32((u32)(0xa95e88u), r_eax);
    /* 006c8163: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006c8165: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c816au); f_007930dc();
    /* 006c816a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c816b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c816d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c816e: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006c8171: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c8176u); f_0073ae38();
    /* 006c8176: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c8178: call 0x6c7c34 */ r_esp -= 4; W32(r_esp, 0x6c817du); f_006c7c34();
L_006c817d:; BB(0x006c817d);
    /* 006c817d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c817e: ret  */ FN_RET(0x006c80fc); r_esp += 4; return;
}

void f_006c8180(void) /* sub_6C8180 */
{
    FN_ENTER(0x006c8180);
    /* 006c8180: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8181: mov edi, ecx */ r_edi = r_ecx;
    /* 006c8183: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006c8186: mov ecx, edi */ r_ecx = r_edi;
    /* 006c8188: call dword ptr [eax*4 + 0x9cebe0] */ { u32 t = R32((u32)(r_eax*4+0x9cebe0u)); r_esp -= 4; W32(r_esp, 0x6c818fu); call_ind(t); }
    /* 006c818f: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006c8192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8194: jbe 0x6c819c */ if ((fC||fZ)) goto L_006c819c;
L_006c8196:; BB(0x006c8196);
    /* 006c8196: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8199: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
L_006c819c:; BB(0x006c819c);
    /* 006c819c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c819d: ret  */ FN_RET(0x006c8180); r_esp += 4; return;
}

void f_006c81a0(void) /* sub_6C81A0 */
{
    FN_ENTER(0x006c81a0);
    /* 006c81a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c81a3: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x6c81a8u); f_0083adbc();
    /* 006c81a8: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c81adu); f_007becd4();
    /* 006c81ad: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x6c81b2u); f_007bfba0();
    /* 006c81b2: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006c81b9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006c81c1: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006c81c9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006c81d1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 006c81d9: mov dword ptr [esp + 0x14], 0xc2c80000 */ W32((u32)(r_esp+0x14u), 0xc2c80000u);
    /* 006c81e1: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006c81e3: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x6c81e8u); f_004d31f4();
    /* 006c81e8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006c81ec: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006c81f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c81f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c81f2: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x6c81f7u); f_004d33c0();
    /* 006c81f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c81fa: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c81ff: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c8204u); f_0061cdb0();
    /* 006c8204: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c8209: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x6c820eu); f_0081745c();
    /* 006c820e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c8213: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c8218u); f_00817604();
    /* 006c8218: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c821d: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c8222u); f_00818f80();
    /* 006c8222: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x6c8227u); f_005ba748();
    /* 006c8227: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x6c822cu); f_00814168();
    /* 006c822c: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x6c8231u); f_006c38bc();
    /* 006c8231: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c8236: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c8238: jne 0x6c825c */ if (!fZ) goto L_006c825c;
L_006c823a:; BB(0x006c823a);
    /* 006c823a: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x6c823fu); f_007bfedc();
    /* 006c823f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c8242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8244: je 0x6c824b */ if (fZ) goto L_006c824b;
L_006c8246:; BB(0x006c8246);
    /* 006c8246: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x6c824bu); f_007a6174();
L_006c824b:; BB(0x006c824b);
    /* 006c824b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c8250u); f_006dc358();
    /* 006c8250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8252: je 0x6c825c */ if (fZ) goto L_006c825c;
L_006c8254:; BB(0x006c8254);
    /* 006c8254: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8256: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x6c825bu); f_007a60dc();
    /* 006c825b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c825c:; BB(0x006c825c);
    /* 006c825c: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c8261u); f_0080030c();
    /* 006c8261: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8264: ret  */ FN_RET(0x006c81a0); r_esp += 4; return;
}

void f_006c8268(void) /* sub_6C8268 */
{
    FN_ENTER(0x006c8268);
    /* 006c8268: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c826d: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x6c8272u); f_00818560();
    /* 006c8272: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x6c8277u); f_00815434();
    /* 006c8277: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8279: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x6c827eu); f_00814888();
    /* 006c827e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8280: push 0x9cec28 */ { u32 v = 0x9cec28u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8285: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x6c828au); f_0078b0a0();
    /* 006c828a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c828d: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c8292u); f_0080030c();
    /* 006c8292: ret  */ FN_RET(0x006c8268); r_esp += 4; return;
}

void f_006c8294(void)
{
    FN_ENTER(0x006c8294);
    /* 006c8294: call 0x7a60f0 */ r_esp -= 4; W32(r_esp, 0x6c8299u); f_007a60f0();
    /* 006c8299: ret  */ FN_RET(0x006c8294); r_esp += 4; return;
}

void f_006c829c(void) /* sub_6C829C */
{
    FN_ENTER(0x006c829c);
    /* 006c829c: mov dword ptr [0xa95e7c], 0x3f800000 */ W32((u32)(0xa95e7cu), 0x3f800000u);
    /* 006c82a6: mov dword ptr [0xa95e80], 0x41000000 */ W32((u32)(0xa95e80u), 0x41000000u);
    /* 006c82b0: mov dword ptr [0xa95e84], 0x3fc00000 */ W32((u32)(0xa95e84u), 0x3fc00000u);
    /* 006c82ba: ret  */ FN_RET(0x006c829c); r_esp += 4; return;
}

void f_006c82bc(void) /* sub_6C82BC */
{
    FN_ENTER(0x006c82bc);
    /* 006c82bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c82bd: mov esi, ecx */ r_esi = r_ecx;
    /* 006c82bf: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006c82c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c82c4: je 0x6c82c8 */ if (fZ) goto L_006c82c8;
L_006c82c6:; BB(0x006c82c6);
    /* 006c82c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c82c7: ret  */ FN_RET(0x006c82bc); r_esp += 4; return;
L_006c82c8:; BB(0x006c82c8);
    /* 006c82c8: mov eax, 0x14000 */ r_eax = 0x14000u;
    /* 006c82cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c82ce: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 006c82d1: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c82d6u); f_0082e940();
    /* 006c82d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c82d7: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006c82da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c82db: ret  */ FN_RET(0x006c82bc); r_esp += 4; return;
}

void f_006c82dc(void) /* sub_6C82DC */
{
    FN_ENTER(0x006c82dc);
    /* 006c82dc: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006c82df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c82e1: je 0x6c82f1 */ if (fZ) goto L_006c82f1;
L_006c82e3:; BB(0x006c82e3);
    /* 006c82e3: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c82e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c82e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c82e9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c82eeu); f_0086b688();
    /* 006c82ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c82f1:; BB(0x006c82f1);
    /* 006c82f1: ret  */ FN_RET(0x006c82dc); r_esp += 4; return;
}

void f_006c82f4(void) /* sub_6C82F4 */
{
    FN_ENTER(0x006c82f4);
    /* 006c82f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c82f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006c82f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c82f9: push 0x8ed576 */ { u32 v = 0x8ed576u; r_esp -= 4; W32(r_esp, v); }
    /* 006c82fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c8304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8305: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c830c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c830f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c8312: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c8315: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c8318: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c831b: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c8321: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c8324: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6c8329u); f_008193cc();
    /* 006c8329: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c8330: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c8333: mov dword ptr [edx], 0xb3b708 */ W32((u32)(r_edx), 0xb3b708u);
    /* 006c8339: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c833b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006c833e: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006c8341: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006c8344: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c8349u); f_00415cec();
    /* 006c8349: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c834c: mov edx, dword ptr [0xa95dd4] */ r_edx = R32((u32)(0xa95dd4u));
    /* 006c8352: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8354: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c8357: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006c835a: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006c835d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c835f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 006c8362: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006c8365: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006c8368: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 006c836b: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006c836e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c8373u); f_005caba4();
    /* 006c8373: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8374: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c8377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8379: je 0x6c839a */ if (fZ) goto L_006c839a;
L_006c837b:; BB(0x006c837b);
    /* 006c837b: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006c8382: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006c8389: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c838c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c838e: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x6c8393u); f_004010b0();
    /* 006c8393: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006c839a:; BB(0x006c839a);
    /* 006c839a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c83a1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006c83a8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006c83aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c83afu); f_005caba4();
    /* 006c83af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c83b0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006c83b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c83b5: je 0x6c83d6 */ if (fZ) goto L_006c83d6;
L_006c83b7:; BB(0x006c83b7);
    /* 006c83b7: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006c83be: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c83c5: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c83c8: mov ecx, eax */ r_ecx = r_eax;
    /* 006c83ca: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x6c83cfu); f_004012cc();
    /* 006c83cf: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006c83d6:; BB(0x006c83d6);
    /* 006c83d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c83dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c83e0: call 0x6c82bc */ r_esp -= 4; W32(r_esp, 0x6c83e5u); f_006c82bc();
    /* 006c83e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c83e8: call 0x6c82dc */ r_esp -= 4; W32(r_esp, 0x6c83edu); f_006c82dc();
    /* 006c83ed: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c83f2u); f_006ffa24();
    /* 006c83f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c83f5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c83f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c83fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c8402: mov esp, ebp */ r_esp = r_ebp;
    /* 006c8404: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8405: ret  */ FN_RET(0x006c82f4); r_esp += 4; return;
}

void f_006c8408(void) /* sub_6C8408 */
{
    FN_ENTER(0x006c8408);
    /* 006c8408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8409: mov ebp, esp */ r_ebp = r_esp;
    /* 006c840b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c840d: push 0x8ed5d2 */ { u32 v = 0x8ed5d2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c8418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c8420: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c8423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c8426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c8429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c842c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c842f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8434: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x6c8439u); f_0082acd8();
    /* 006c8439: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c843c: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6c8441u); f_007bebe8();
    /* 006c8441: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8443: push 0x9cec28 */ { u32 v = 0x9cec28u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8448: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x6c844du); f_0078b184();
    /* 006c844d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c844f: push 0x9ff420 */ { u32 v = 0x9ff420u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8454: call 0x793cf0 */ r_esp -= 4; W32(r_esp, 0x6c8459u); f_00793cf0();
    /* 006c8459: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006c8460: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8465: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c846au); f_005caba4();
    /* 006c846a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c846d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006c8470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8472: je 0x6c8497 */ if (fZ) goto L_006c8497;
L_006c8474:; BB(0x006c8474);
    /* 006c8474: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006c847b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c8482: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c8488: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006c848b: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x6c8490u); f_004d3408();
    /* 006c8490: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006c8497:; BB(0x006c8497);
    /* 006c8497: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c849e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006c84a5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006c84a7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006c84ae: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006c84b5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006c84bc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006c84c3: mov dword ptr [ebp - 0x30], 0xc2c80000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc2c80000u);
    /* 006c84ca: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x6c84cfu); f_004d30fc();
    /* 006c84cf: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 006c84d2: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006c84d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c84d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c84d7: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x6c84dcu); f_004d33c0();
    /* 006c84dc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c84e3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c84e5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c84eau); f_005caba4();
    /* 006c84ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c84ed: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c84f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c84f2: je 0x6c8511 */ if (fZ) goto L_006c8511;
L_006c84f4:; BB(0x006c84f4);
    /* 006c84f4: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006c84fb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006c8502: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006c8505: call 0x7195c8 */ r_esp -= 4; W32(r_esp, 0x6c850au); f_007195c8();
    /* 006c850a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006c8511:; BB(0x006c8511);
    /* 006c8511: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c8518: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006c851f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8521: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c8526u); f_005caba4();
    /* 006c8526: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8527: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006c852a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c852c: je 0x6c854b */ if (fZ) goto L_006c854b;
L_006c852e:; BB(0x006c852e);
    /* 006c852e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006c8535: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c853c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c853f: call 0x6c82f4 */ r_esp -= 4; W32(r_esp, 0x6c8544u); f_006c82f4();
    /* 006c8544: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006c854b:; BB(0x006c854b);
    /* 006c854b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c8552: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8554: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x6c8559u); f_007a6198();
    /* 006c8559: mov dword ptr [0xa95e88], 0 */ W32((u32)(0xa95e88u), 0x0u);
    /* 006c8563: push 0x96b8fc */ { u32 v = 0x96b8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c8568: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x6c856du); f_00814afc();
    /* 006c856d: push 0xfffffc7c */ { u32 v = 0xfffffc7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c8572: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x6c8577u); f_00814888();
    /* 006c8577: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c857a: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006c857f: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x6c8584u); f_006a92e8();
    /* 006c8584: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c8589u); f_0080030c();
    /* 006c8589: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c858c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c8593: mov esp, ebp */ r_esp = r_ebp;
    /* 006c8595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8596: ret  */ FN_RET(0x006c8408); r_esp += 4; return;
}

void f_006c8598(void) /* sub_6C8598 */
{
    FN_ENTER(0x006c8598);
    /* 006c8598: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8599: mov ebp, esp */ r_ebp = r_esp;
    /* 006c859b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c859d: push 0x8ed5f8 */ { u32 v = 0x8ed5f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c85a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c85a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c85a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c85b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c85b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c85b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c85b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c85bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c85bf: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 006c85c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c85c4: jne 0x6c8604 */ if (!fZ) goto L_006c8604;
L_006c85c6:; BB(0x006c85c6);
    /* 006c85c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006c85cd: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006c85cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c85d4u); f_005caba4();
    /* 006c85d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c85d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006c85d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c85da: je 0x6c8604 */ if (fZ) goto L_006c8604;
L_006c85dc:; BB(0x006c85dc);
    /* 006c85dc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006c85e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c85ea: push 0x6c8294 */ { u32 v = 0x6c8294u; r_esp -= 4; W32(r_esp, v); }
    /* 006c85ef: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c85f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c85f8: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6c85fdu); f_00788938();
    /* 006c85fd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006c8604:; BB(0x006c8604);
    /* 006c8604: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c8607: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c860e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c8610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8611: ret  */ FN_RET(0x006c8598); r_esp += 4; return;
}

void f_006c8614(void) /* sub_6C8614 */
{
    FN_ENTER(0x006c8614);
    /* 006c8614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8615: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c8617: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 006c861a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c8621: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8623: je 0x6c8653 */ if (fZ) goto L_006c8653;
L_006c8625:; BB(0x006c8625);
    /* 006c8625: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6c862au); f_007365f4();
    /* 006c862a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c862c: jne 0x6c8645 */ if (!fZ) goto L_006c8645;
L_006c862e:; BB(0x006c862e);
    /* 006c862e: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006c8635: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c8637: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c863cu); f_006c7cac();
    /* 006c863c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c863e: call 0x6c7c88 */ r_esp -= 4; W32(r_esp, 0x6c8643u); f_006c7c88();
    /* 006c8643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8644: ret  */ FN_RET(0x006c8614); r_esp += 4; return;
L_006c8645:; BB(0x006c8645);
    /* 006c8645: mov dword ptr [ebp + 0x2c], 0x11 */ W32((u32)(r_ebp+0x2cu), 0x11u);
    /* 006c864c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c864e: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c8653u); f_006c7cac();
L_006c8653:; BB(0x006c8653);
    /* 006c8653: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8654: ret  */ FN_RET(0x006c8614); r_esp += 4; return;
}

void f_006c8658(void) /* sub_6C8658 */
{
    FN_ENTER(0x006c8658);
    /* 006c8658: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8659: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c865b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c865d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c865e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c865f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8660: call 0x77eaec */ r_esp -= 4; W32(r_esp, 0x6c8665u); f_0077eaec();
    /* 006c8665: mov dword ptr [ebx + 0x2c], 1 */ W32((u32)(r_ebx+0x2cu), 0x1u);
    /* 006c866c: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 006c866f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8672: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8673: ret  */ FN_RET(0x006c8658); r_esp += 4; return;
}

void f_006c8674(void) /* sub_6C8674 */
{
    FN_ENTER(0x006c8674);
    /* 006c8674: mov eax, dword ptr [0xa95e9c] */ r_eax = R32((u32)(0xa95e9cu));
    /* 006c8679: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c867b: je 0x6c868e */ if (fZ) goto L_006c868e;
L_006c867d:; BB(0x006c867d);
    /* 006c867d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c867e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c8683u); f_00857e98();
    /* 006c8683: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8684: mov dword ptr [0xa95e9c], 0 */ W32((u32)(0xa95e9cu), 0x0u);
L_006c868e:; BB(0x006c868e);
    /* 006c868e: ret  */ FN_RET(0x006c8674); r_esp += 4; return;
}

void f_006c8690(void) /* sub_6C8690 */
{
    FN_ENTER(0x006c8690);
    /* 006c8690: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c8694: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006c8698: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 006c869b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c869d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c869f: add edx, dword ptr [0xa95e9c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa95e9cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c86a5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006c86a7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006c86a9: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006c86ac: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006c86af: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006c86b2: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 006c86b5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006c86b8: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006c86bb: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006c86be: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006c86c1: ret  */ FN_RET(0x006c8690); r_esp += 4; return;
}

void f_006c86c4(void) /* sub_6C86C4 */
{
    FN_ENTER(0x006c86c4);
    /* 006c86c4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006c86c8: mov eax, dword ptr [0xa95e9c] */ r_eax = R32((u32)(0xa95e9cu));
    /* 006c86cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c86cf: jl 0x6c86ea */ if ((fS!=fO)) goto L_006c86ea;
L_006c86d1:; BB(0x006c86d1);
    /* 006c86d1: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c86d4: jg 0x6c86ea */ if ((!fZ&&fS==fO)) goto L_006c86ea;
L_006c86d6:; BB(0x006c86d6);
    /* 006c86d6: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 006c86d9: mov edx, dword ptr [eax + ecx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x10u));
    /* 006c86dd: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c86e0: je 0x6c86ea */ if (fZ) goto L_006c86ea;
L_006c86e2:; BB(0x006c86e2);
    /* 006c86e2: mov dword ptr [eax + ecx*4 + 0x10], 0xffffffff */ W32((u32)(r_eax+r_ecx*4+0x10u), 0xffffffffu);
L_006c86ea:; BB(0x006c86ea);
    /* 006c86ea: ret  */ FN_RET(0x006c86c4); r_esp += 4; return;
}

void f_006c86ec(void) /* sub_6C86EC */
{
    FN_ENTER(0x006c86ec);
    /* 006c86ec: mov dword ptr [0xa95ea4], 0 */ W32((u32)(0xa95ea4u), 0x0u);
    /* 006c86f6: ret  */ FN_RET(0x006c86ec); r_esp += 4; return;
}

void f_006c86f8(void) /* sub_6C86F8 */
{
    FN_ENTER(0x006c86f8);
    /* 006c86f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c86f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c86fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c86fb: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006c86ff: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006c8703: cmp ebx, 0x15 */ {  u32 a = r_ebx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c8706: jg 0x6c87c2 */ if ((!fZ&&fS==fO)) goto L_006c87c2;
L_006c870c:; BB(0x006c870c);
    /* 006c870c: mov ecx, dword ptr [0xa95e9c] */ r_ecx = R32((u32)(0xa95e9cu));
    /* 006c8712: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c8714: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8716: jle 0x6c87b8 */ if ((fZ||fS!=fO)) goto L_006c87b8;
L_006c871c:; BB(0x006c871c);
    /* 006c871c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c871f: jl 0x6c878f */ if ((fS!=fO)) goto L_006c878f;
L_006c8721:; BB(0x006c8721);
    /* 006c8721: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006c8724: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
L_006c8727:; BB(0x006c8727);
    /* 006c8727: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 006c8729: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 006c872b: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 006c872e: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 006c8731: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 006c8734: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 006c8737: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 006c873a: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 006c873d: mov ebp, dword ptr [esi + 0x10] */ r_ebp = R32((u32)(r_esi+0x10u));
    /* 006c8740: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 006c8743: mov ebp, dword ptr [esi + 0x14] */ r_ebp = R32((u32)(r_esi+0x14u));
    /* 006c8746: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 006c8749: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 006c874c: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 006c874f: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 006c8752: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 006c8755: mov ebp, dword ptr [esi + 0x20] */ r_ebp = R32((u32)(r_esi+0x20u));
    /* 006c8758: mov dword ptr [ecx + 0x20], ebp */ W32((u32)(r_ecx+0x20u), r_ebp);
    /* 006c875b: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 006c875e: mov dword ptr [ecx + 0x24], ebp */ W32((u32)(r_ecx+0x24u), r_ebp);
    /* 006c8761: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 006c8764: mov dword ptr [ecx + 0x28], ebp */ W32((u32)(r_ecx+0x28u), r_ebp);
    /* 006c8767: mov ebp, dword ptr [esi + 0x2c] */ r_ebp = R32((u32)(r_esi+0x2cu));
    /* 006c876a: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 006c876d: mov ebp, dword ptr [esi + 0x30] */ r_ebp = R32((u32)(r_esi+0x30u));
    /* 006c8770: mov dword ptr [ecx + 0x30], ebp */ W32((u32)(r_ecx+0x30u), r_ebp);
    /* 006c8773: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 006c8776: mov dword ptr [ecx + 0x34], ebp */ W32((u32)(r_ecx+0x34u), r_ebp);
    /* 006c8779: mov ebp, dword ptr [esi + 0x38] */ r_ebp = R32((u32)(r_esi+0x38u));
    /* 006c877c: mov dword ptr [ecx + 0x38], ebp */ W32((u32)(r_ecx+0x38u), r_ebp);
    /* 006c877f: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8782: add esi, 0x3c */ {  u32 a = r_esi; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c8785: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8788: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c878a: jle 0x6c8727 */ if ((fZ||fS!=fO)) goto L_006c8727;
L_006c878c:; BB(0x006c878c);
    /* 006c878c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006c878f:; BB(0x006c878f);
    /* 006c878f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c8791: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006c8793: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006c8796: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c8799: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006c879c: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006c879f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006c87a2: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006c87a5: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006c87a8: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006c87ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c87ae: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c87b1: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c87b4: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c87b6: jl 0x6c878f */ if ((fS!=fO)) goto L_006c878f;
L_006c87b8:; BB(0x006c87b8);
    /* 006c87b8: mov dword ptr [0xa95ea0], ebx */ W32((u32)(0xa95ea0u), r_ebx);
    /* 006c87be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c87bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c87c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c87c1: ret  */ FN_RET(0x006c86f8); r_esp += 4; return;
L_006c87c2:; BB(0x006c87c2);
    /* 006c87c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c87c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c87c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c87c5: ret  */ FN_RET(0x006c86f8); r_esp += 4; return;
}

void f_006c87c8(void) /* sub_6C87C8 */
{
    FN_ENTER(0x006c87c8);
    /* 006c87c8: mov dword ptr [0xa95e8c], 0x3f800000 */ W32((u32)(0xa95e8cu), 0x3f800000u);
    /* 006c87d2: mov dword ptr [0xa95e90], 0x41000000 */ W32((u32)(0xa95e90u), 0x41000000u);
    /* 006c87dc: mov dword ptr [0xa95e94], 0x3fc00000 */ W32((u32)(0xa95e94u), 0x3fc00000u);
    /* 006c87e6: ret  */ FN_RET(0x006c87c8); r_esp += 4; return;
}

void f_006c87e8(void) /* sub_6C87E8 */
{
    FN_ENTER(0x006c87e8);
    /* 006c87e8: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c87ed: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c87f2u); f_008581c5();
    /* 006c87f2: mov dword ptr [0xa95e9c], eax */ W32((u32)(0xa95e9cu), r_eax);
    /* 006c87f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c87f9: mov dword ptr [0xa95e98], eax */ W32((u32)(0xa95e98u), r_eax);
    /* 006c87fe: mov dword ptr [0xa95ea0], eax */ W32((u32)(0xa95ea0u), r_eax);
    /* 006c8803: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8804: ret  */ FN_RET(0x006c87e8); r_esp += 4; return;
}

void f_006c8808(void) /* sub_6C8808 */
{
    FN_ENTER(0x006c8808);
    /* 006c8808: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8809: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c880b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c880d: call 0x6c882c */ r_esp -= 4; W32(r_esp, 0x6c8812u); f_006c882c();
    /* 006c8812: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006c8816: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8818: jne 0x6c881e */ if (!fZ) goto L_006c881e;
L_006c881a:; BB(0x006c881a);
    /* 006c881a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c881b: ret 4 */ FN_RET(0x006c8808); r_esp += 8; return;
L_006c881e:; BB(0x006c881e);
    /* 006c881e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c881f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6c8824u); f_005c2f74();
    /* 006c8824: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8825: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8826: ret 4 */ FN_RET(0x006c8808); r_esp += 8; return;
}

void f_006c882c(void) /* sub_6C882C */
{
    FN_ENTER(0x006c882c);
    /* 006c882c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c882d: mov ebp, esp */ r_ebp = r_esp;
    /* 006c882f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c8831: push 0x8ed614 */ { u32 v = 0x8ed614u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8836: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c883c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c883d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c8844: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c8847: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c884a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c884d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c8850: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c8853: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c8856: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c885d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c8860: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 006c8863: mov dword ptr [ecx], 0xb3b880 */ W32((u32)(r_ecx), 0xb3b880u);
    /* 006c8869: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c886b: je 0x6c8884 */ if (fZ) goto L_006c8884;
L_006c886d:; BB(0x006c886d);
    /* 006c886d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c8870: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006c8874: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c8879: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006c887d: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_006c8884:; BB(0x006c8884);
    /* 006c8884: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6c8889u); f_006dc514();
    /* 006c8889: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c888c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006c888f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8891: je 0x6c88a2 */ if (fZ) goto L_006c88a2;
L_006c8893:; BB(0x006c8893);
    /* 006c8893: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c8898u); f_007127b0();
    /* 006c8898: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c889b: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006c88a2:; BB(0x006c88a2);
    /* 006c88a2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006c88a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c88a7: je 0x6c88b8 */ if (fZ) goto L_006c88b8;
L_006c88a9:; BB(0x006c88a9);
    /* 006c88a9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c88aeu); f_007127b0();
    /* 006c88ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c88b1: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_006c88b8:; BB(0x006c88b8);
    /* 006c88b8: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006c88bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c88bd: je 0x6c88ce */ if (fZ) goto L_006c88ce;
L_006c88bf:; BB(0x006c88bf);
    /* 006c88bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c88c4u); f_007127b0();
    /* 006c88c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c88c7: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006c88ce:; BB(0x006c88ce);
    /* 006c88ce: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006c88d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c88d3: je 0x6c88e4 */ if (fZ) goto L_006c88e4;
L_006c88d5:; BB(0x006c88d5);
    /* 006c88d5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c88dau); f_007127b0();
    /* 006c88da: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c88dd: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006c88e4:; BB(0x006c88e4);
    /* 006c88e4: mov ecx, eax */ r_ecx = r_eax;
    /* 006c88e6: call 0x6c8938 */ r_esp -= 4; W32(r_esp, 0x6c88ebu); f_006c8938();
    /* 006c88eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c88ee: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006c88f1: mov dword ptr [0xa95edc], 0 */ W32((u32)(0xa95edcu), 0x0u);
    /* 006c88fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c88fd: je 0x6c8910 */ if (fZ) goto L_006c8910;
L_006c88ff:; BB(0x006c88ff);
    /* 006c88ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8900: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c8905u); f_0082e960();
    /* 006c8905: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8906: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c8909: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006c8910:; BB(0x006c8910);
    /* 006c8910: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c8912: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6c8917u); f_00791748();
    /* 006c8917: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8918: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c891f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c8922: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6c8927u); f_006dc3a0();
    /* 006c8927: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c892a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c8931: mov esp, ebp */ r_esp = r_ebp;
    /* 006c8933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8934: ret  */ FN_RET(0x006c882c); r_esp += 4; return;
}

void f_006c8938(void) /* sub_6C8938 */
{
    FN_ENTER(0x006c8938);
    /* 006c8938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8939: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c893b: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006c893e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8940: je 0x6c894e */ if (fZ) goto L_006c894e;
L_006c8942:; BB(0x006c8942);
    /* 006c8942: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c8947u); f_007127b0();
    /* 006c8947: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
L_006c894e:; BB(0x006c894e);
    /* 006c894e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c894f: ret  */ FN_RET(0x006c8938); r_esp += 4; return;
}

void f_006c8950(void) /* sub_6C8950 */
{
    FN_ENTER(0x006c8950);
    /* 006c8950: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c8952: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006c8955: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_006c8958(void) /* sub_6C8958 */
{
    FN_ENTER(0x006c8958);
    /* 006c8958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c895a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006c895d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_006c8960(void) /* sub_6C8960 */
{
    FN_ENTER(0x006c8960);
    /* 006c8960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8961: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c8963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c8965: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6c896au); f_006ca398();
    /* 006c896a: mov eax, ebp */ r_eax = r_ebp;
    /* 006c896c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c896d: ret  */ FN_RET(0x006c8960); r_esp += 4; return;
}

void f_006c8970(void) /* sub_6C8970 */
{
    FN_ENTER(0x006c8970);
    /* 006c8970: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8971: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8972: mov edx, ecx */ r_edx = r_ecx;
    /* 006c8974: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8977: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8979: mov ebx, eax */ r_ebx = r_eax;
    /* 006c897b: mov esi, edx */ r_esi = r_edx;
L_006c897d:; BB(0x006c897d);
    /* 006c897d: movsx ecx, word ptr [esi + 0x16] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 006c8981: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8983: je 0x6c8996 */ if (fZ) goto L_006c8996;
L_006c8985:; BB(0x006c8985);
    /* 006c8985: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8986: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c898a: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6c898fu); f_005ca70c();
    /* 006c898f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c8992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8994: jne 0x6c89ab */ if (!fZ) goto L_006c89ab;
L_006c8996:; BB(0x006c8996);
    /* 006c8996: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c8999: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c899c: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c89a2: jl 0x6c897d */ if ((fS!=fO)) goto L_006c897d;
L_006c89a4:; BB(0x006c89a4);
    /* 006c89a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c89a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c89a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c89a8: ret 4 */ FN_RET(0x006c8970); r_esp += 8; return;
L_006c89ab:; BB(0x006c89ab);
    /* 006c89ab: mov eax, 1 */ r_eax = 0x1u;
    /* 006c89b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c89b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c89b2: ret 4 */ FN_RET(0x006c8970); r_esp += 8; return;
}

void f_006c89b8(void) /* sub_6C89B8 */
{
    FN_ENTER(0x006c89b8);
    /* 006c89b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c89ba: mov dword ptr [0xa95ee4], eax */ W32((u32)(0xa95ee4u), r_eax);
    /* 006c89bf: mov dword ptr [0xa95ee8], eax */ W32((u32)(0xa95ee8u), r_eax);
    /* 006c89c4: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c89c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c89cb: je 0x6c89de */ if (fZ) goto L_006c89de;
L_006c89cd:; BB(0x006c89cd);
    /* 006c89cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c89ce: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c89d3u); f_00857e98();
    /* 006c89d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c89d4: mov dword ptr [0xa95ee0], 0 */ W32((u32)(0xa95ee0u), 0x0u);
L_006c89de:; BB(0x006c89de);
    /* 006c89de: ret  */ FN_RET(0x006c89b8); r_esp += 4; return;
}

void f_006c89e0(void) /* sub_6C89E0 */
{
    FN_ENTER(0x006c89e0);
    /* 006c89e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c89e1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c89e4: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 006c89e8: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006c89ec: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c89ef: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c89f2: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c89f5: push 0x96b944 */ { u32 v = 0x96b944u; r_esp -= 4; W32(r_esp, v); }
    /* 006c89fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c89fb: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6c8a00u); f_00858bf5();
    /* 006c8a00: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c8a03: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006c8a06: cmp eax, dword ptr [0xa95ee4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa95ee4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8a0c: jne 0x6c8a1d */ if (!fZ) goto L_006c8a1d;
L_006c8a0e:; BB(0x006c8a0e);
    /* 006c8a0e: mov dword ptr [0xa95ee8], 0 */ W32((u32)(0xa95ee8u), 0x0u);
    /* 006c8a18: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8a1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8a1c: ret  */ FN_RET(0x006c89e0); r_esp += 4; return;
L_006c8a1d:; BB(0x006c8a1d);
    /* 006c8a1d: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c8a23: call 0x6ca370 */ r_esp -= 4; W32(r_esp, 0x6c8a28u); f_006ca370();
    /* 006c8a28: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c8a2e: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 006c8a31: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006c8a33: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c8a39: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006c8a3c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c8a3f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006c8a42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c8a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c8a46: jle 0x6c8aa4 */ if ((fZ||fS!=fO)) goto L_006c8aa4;
L_006c8a48:; BB(0x006c8a48);
    /* 006c8a48: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006c8a4b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006c8a4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a50: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a58: jmp 0x6c8a60 */ goto L_006c8a60;
L_006c8a5a:; BB(0x006c8a5a);
    /* 006c8a5a: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
L_006c8a60:; BB(0x006c8a60);
    /* 006c8a60: mov ebx, dword ptr [eax + esi + 0x14] */ r_ebx = R32((u32)(r_eax+r_esi+0x14u));
    /* 006c8a64: mov dword ptr [ecx + eax + 8], ebx */ W32((u32)(r_ecx+r_eax+0x8u), r_ebx);
    /* 006c8a68: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 006c8a6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8a6f: mov dword ptr [ecx + eax + 0xc], ebx */ W32((u32)(r_ecx+r_eax+0xcu), r_ebx);
    /* 006c8a73: mov ebx, dword ptr [eax + esi + 0x1c] */ r_ebx = R32((u32)(r_eax+r_esi+0x1cu));
    /* 006c8a77: mov dword ptr [ecx + eax + 0x10], ebx */ W32((u32)(r_ecx+r_eax+0x10u), r_ebx);
    /* 006c8a7b: mov ebx, dword ptr [eax + esi + 0x20] */ r_ebx = R32((u32)(r_eax+r_esi+0x20u));
    /* 006c8a7f: mov dword ptr [ecx + eax + 0x14], ebx */ W32((u32)(r_ecx+r_eax+0x14u), r_ebx);
    /* 006c8a83: mov ebx, dword ptr [eax + esi + 0x24] */ r_ebx = R32((u32)(r_eax+r_esi+0x24u));
    /* 006c8a87: mov dword ptr [ecx + eax + 0x18], ebx */ W32((u32)(r_ecx+r_eax+0x18u), r_ebx);
    /* 006c8a8b: mov ebx, dword ptr [eax + esi + 0x28] */ r_ebx = R32((u32)(r_eax+r_esi+0x28u));
    /* 006c8a8f: mov dword ptr [ecx + eax + 0x1c], ebx */ W32((u32)(r_ecx+r_eax+0x1cu), r_ebx);
    /* 006c8a93: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a96: cmp edx, dword ptr [esi + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8a99: jl 0x6c8a5a */ if ((fS!=fO)) goto L_006c8a5a;
L_006c8a9b:; BB(0x006c8a9b);
    /* 006c8a9b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006c8a9e: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
L_006c8aa4:; BB(0x006c8aa4);
    /* 006c8aa4: call 0x6c8ab4 */ r_esp -= 4; W32(r_esp, 0x6c8aa9u); f_006c8ab4();
    /* 006c8aa9: mov dword ptr [0xa95ee4], eax */ W32((u32)(0xa95ee4u), r_eax);
    /* 006c8aae: jmp 0x6c8a0e */ goto L_006c8a0e;
}

void f_006c89ee(void)
{
    FN_ENTER(0x006c89ee);
    /* 006c89ee: adc bh, bh */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b + c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 006c89f0: jbe 0x6c89fe */ if ((fC||fZ)) goto L_006c89fe;
L_006c89f2:; BB(0x006c89f2);
    /* 006c89f2: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c89f5: push 0x96b944 */ { u32 v = 0x96b944u; r_esp -= 4; W32(r_esp, v); }
    /* 006c89fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c89fb: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6c8a00u); f_00858bf5();
L_006c89fe:; BB(0x006c89fe);
    /* 006c89fe: sbb dword ptr [eax], eax */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 006c8a00: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c8a03: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006c8a06: cmp eax, dword ptr [0xa95ee4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa95ee4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8a0c: jne 0x6c8a1d */ if (!fZ) goto L_006c8a1d;
L_006c8a0e:; BB(0x006c8a0e);
    /* 006c8a0e: mov dword ptr [0xa95ee8], 0 */ W32((u32)(0xa95ee8u), 0x0u);
    /* 006c8a18: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8a1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8a1c: ret  */ FN_RET(0x006c89ee); r_esp += 4; return;
L_006c8a1d:; BB(0x006c8a1d);
    /* 006c8a1d: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c8a23: call 0x6ca370 */ r_esp -= 4; W32(r_esp, 0x6c8a28u); f_006ca370();
    /* 006c8a28: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c8a2e: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 006c8a31: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006c8a33: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c8a39: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006c8a3c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c8a3f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006c8a42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c8a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c8a46: jle 0x6c8aa4 */ if ((fZ||fS!=fO)) goto L_006c8aa4;
L_006c8a48:; BB(0x006c8a48);
    /* 006c8a48: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006c8a4b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006c8a4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a50: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a58: jmp 0x6c8a60 */ goto L_006c8a60;
L_006c8a5a:; BB(0x006c8a5a);
    /* 006c8a5a: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
L_006c8a60:; BB(0x006c8a60);
    /* 006c8a60: mov ebx, dword ptr [eax + esi + 0x14] */ r_ebx = R32((u32)(r_eax+r_esi+0x14u));
    /* 006c8a64: mov dword ptr [ecx + eax + 8], ebx */ W32((u32)(r_ecx+r_eax+0x8u), r_ebx);
    /* 006c8a68: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 006c8a6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8a6f: mov dword ptr [ecx + eax + 0xc], ebx */ W32((u32)(r_ecx+r_eax+0xcu), r_ebx);
    /* 006c8a73: mov ebx, dword ptr [eax + esi + 0x1c] */ r_ebx = R32((u32)(r_eax+r_esi+0x1cu));
    /* 006c8a77: mov dword ptr [ecx + eax + 0x10], ebx */ W32((u32)(r_ecx+r_eax+0x10u), r_ebx);
    /* 006c8a7b: mov ebx, dword ptr [eax + esi + 0x20] */ r_ebx = R32((u32)(r_eax+r_esi+0x20u));
    /* 006c8a7f: mov dword ptr [ecx + eax + 0x14], ebx */ W32((u32)(r_ecx+r_eax+0x14u), r_ebx);
    /* 006c8a83: mov ebx, dword ptr [eax + esi + 0x24] */ r_ebx = R32((u32)(r_eax+r_esi+0x24u));
    /* 006c8a87: mov dword ptr [ecx + eax + 0x18], ebx */ W32((u32)(r_ecx+r_eax+0x18u), r_ebx);
    /* 006c8a8b: mov ebx, dword ptr [eax + esi + 0x28] */ r_ebx = R32((u32)(r_eax+r_esi+0x28u));
    /* 006c8a8f: mov dword ptr [ecx + eax + 0x1c], ebx */ W32((u32)(r_ecx+r_eax+0x1cu), r_ebx);
    /* 006c8a93: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8a96: cmp edx, dword ptr [esi + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8a99: jl 0x6c8a5a */ if ((fS!=fO)) goto L_006c8a5a;
L_006c8a9b:; BB(0x006c8a9b);
    /* 006c8a9b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006c8a9e: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
L_006c8aa4:; BB(0x006c8aa4);
    /* 006c8aa4: call 0x6c8ab4 */ r_esp -= 4; W32(r_esp, 0x6c8aa9u); f_006c8ab4();
    /* 006c8aa9: mov dword ptr [0xa95ee4], eax */ W32((u32)(0xa95ee4u), r_eax);
    /* 006c8aae: jmp 0x6c8a0e */ goto L_006c8a0e;
}

void f_006c8ab4(void) /* sub_6C8AB4 */
{
    FN_ENTER(0x006c8ab4);
    /* 006c8ab4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c8ab6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c8ab8: imul edx, eax, -0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffe8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c8abb: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8abe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8abf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ac0: call 0x7a61b4 */ r_esp -= 4; W32(r_esp, 0x6c8ac5u); f_007a61b4();
    /* 006c8ac5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8ac8: ret  */ FN_RET(0x006c8ab4); r_esp += 4; return;
}

void f_006c8acc(void) /* sub_6C8ACC */
{
    FN_ENTER(0x006c8acc);
    /* 006c8acc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8acd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ace: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8acf: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c8ad2: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 006c8ad6: mov ebp, dword ptr [0xa95ee0] */ r_ebp = R32((u32)(0xa95ee0u));
    /* 006c8adc: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 006c8adf: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 006c8ae2: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 006c8ae6: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006c8aea: movzx ecx, byte ptr [esi + 2] */ r_ecx = (u32)R8((u32)(r_esi+0x2u));
    /* 006c8aee: mov byte ptr [esp + 2], cl */ W8((u32)(r_esp+0x2u), (u8)r_ecx);
    /* 006c8af2: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x6c8af7u); f_0077e4ec();
    /* 006c8af7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006c8afa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8afb: mov ecx, eax */ r_ecx = r_eax;
    /* 006c8afd: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x6c8b02u); f_0077e57c();
    /* 006c8b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8b04: je 0x6c8b40 */ if (fZ) goto L_006c8b40;
L_006c8b06:; BB(0x006c8b06);
    /* 006c8b06: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006c8b0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8b0c: call 0x5c9b04 */ r_esp -= 4; W32(r_esp, 0x6c8b11u); f_005c9b04();
    /* 006c8b11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c8b14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c8b18: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006c8b1c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006c8b20: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006c8b24: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006c8b28: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006c8b2c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006c8b30: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006c8b34: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 006c8b38: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 006c8b3c: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
L_006c8b40:; BB(0x006c8b40);
    /* 006c8b40: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c8b46: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 006c8b49: lea edi, [edx + 8] */ r_edi = (u32)(r_edx+0x8u);
    /* 006c8b4c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8b4f: je 0x6c8ba3 */ if (fZ) goto L_006c8ba3;
L_006c8b51:; BB(0x006c8b51);
    /* 006c8b51: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006c8b53: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8b58: jle 0x6c8b63 */ if ((fZ||fS!=fO)) goto L_006c8b63;
L_006c8b5a:; BB(0x006c8b5a);
    /* 006c8b5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8b5c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8b5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8b60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8b61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8b62: ret  */ FN_RET(0x006c8acc); r_esp += 4; return;
L_006c8b63:; BB(0x006c8b63);
    /* 006c8b63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c8b65:; BB(0x006c8b65);
    /* 006c8b65: lea ecx, [eax + ebp + 8] */ r_ecx = (u32)(r_eax+r_ebp+0x8u);
    /* 006c8b69: movsx edx, word ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x16u));
    /* 006c8b6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8b6f: jne 0x6c8b90 */ if (!fZ) goto L_006c8b90;
L_006c8b71:; BB(0x006c8b71);
    /* 006c8b71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8b72: call 0x6c8ca8 */ r_esp -= 4; W32(r_esp, 0x6c8b77u); f_006c8ca8();
    /* 006c8b77: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c8b7c: add dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c8b7f: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c8b84u); f_006c8db4();
    /* 006c8b84: mov eax, 1 */ r_eax = 0x1u;
    /* 006c8b89: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8b8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8b8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8b8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8b8f: ret  */ FN_RET(0x006c8acc); r_esp += 4; return;
L_006c8b90:; BB(0x006c8b90);
    /* 006c8b90: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8b93: cmp eax, 0x12c0 */ {  u32 a = r_eax; u32 b = 0x12c0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8b98: jl 0x6c8b65 */ if ((fS!=fO)) goto L_006c8b65;
L_006c8b9a:; BB(0x006c8b9a);
    /* 006c8b9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8b9c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8b9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8ba0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8ba1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8ba2: ret  */ FN_RET(0x006c8acc); r_esp += 4; return;
L_006c8ba3:; BB(0x006c8ba3);
    /* 006c8ba3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ba4: call 0x6dc1e4 */ r_esp -= 4; W32(r_esp, 0x6c8ba9u); f_006dc1e4();
    /* 006c8ba9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8baa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8bac: jne 0x6c8bb6 */ if (!fZ) goto L_006c8bb6;
L_006c8bae:; BB(0x006c8bae);
    /* 006c8bae: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c8bb4: jmp 0x6c8b51 */ goto L_006c8b51;
L_006c8bb6:; BB(0x006c8bb6);
    /* 006c8bb6: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 006c8bba: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 006c8bbe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c8bc0:; BB(0x006c8bc0);
    /* 006c8bc0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006c8bc3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8bc5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c8bc7: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006c8bca: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8bcc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8bce: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8bd0: movsx ebx, word ptr [ecx + 0x16] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x16u));
    /* 006c8bd4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8bd6: jne 0x6c8bdf */ if (!fZ) goto L_006c8bdf;
L_006c8bd8:; BB(0x006c8bd8);
    /* 006c8bd8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006c8bdd: jmp 0x6c8be1 */ goto L_006c8be1;
L_006c8bdf:; BB(0x006c8bdf);
    /* 006c8bdf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c8be1:; BB(0x006c8be1);
    /* 006c8be1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8be3: jne 0x6c8c0a */ if (!fZ) goto L_006c8c0a;
L_006c8be5:; BB(0x006c8be5);
    /* 006c8be5: movzx ebx, byte ptr [esi] */ r_ebx = (u32)R8((u32)(r_esi));
    /* 006c8be8: movzx ebp, byte ptr [edi + eax*8] */ r_ebp = (u32)R8((u32)(r_edi+r_eax*8));
    /* 006c8bec: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8bee: jne 0x6c8c0a */ if (!fZ) goto L_006c8c0a;
L_006c8bf0:; BB(0x006c8bf0);
    /* 006c8bf0: movzx ebx, byte ptr [esi + 1] */ r_ebx = (u32)R8((u32)(r_esi+0x1u));
    /* 006c8bf4: movzx ebp, byte ptr [edi + eax*8 + 1] */ r_ebp = (u32)R8((u32)(r_edi+r_eax*8+0x1u));
    /* 006c8bf9: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8bfb: jne 0x6c8c0a */ if (!fZ) goto L_006c8c0a;
L_006c8bfd:; BB(0x006c8bfd);
    /* 006c8bfd: movzx ebx, byte ptr [esi + 2] */ r_ebx = (u32)R8((u32)(r_esi+0x2u));
    /* 006c8c01: movzx ebp, byte ptr [edi + eax*8 + 2] */ r_ebp = (u32)R8((u32)(r_edi+r_eax*8+0x2u));
    /* 006c8c06: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8c08: je 0x6c8c62 */ if (fZ) goto L_006c8c62;
L_006c8c0a:; BB(0x006c8c0a);
    /* 006c8c0a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8c0d: cmp edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8c13: jl 0x6c8bc0 */ if ((fS!=fO)) goto L_006c8bc0;
L_006c8c15:; BB(0x006c8c15);
    /* 006c8c15: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 006c8c19: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 006c8c1d: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 006c8c21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c8c23:; BB(0x006c8c23);
    /* 006c8c23: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006c8c26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8c28: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c8c2a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006c8c2d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8c2f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8c31: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8c33: movsx ebx, word ptr [ecx + 0x16] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x16u));
    /* 006c8c37: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8c39: jne 0x6c8c42 */ if (!fZ) goto L_006c8c42;
L_006c8c3b:; BB(0x006c8c3b);
    /* 006c8c3b: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006c8c40: jmp 0x6c8c44 */ goto L_006c8c44;
L_006c8c42:; BB(0x006c8c42);
    /* 006c8c42: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c8c44:; BB(0x006c8c44);
    /* 006c8c44: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8c46: jne 0x6c8c80 */ if (!fZ) goto L_006c8c80;
L_006c8c48:; BB(0x006c8c48);
    /* 006c8c48: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8c4b: cmp edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8c51: jl 0x6c8c23 */ if ((fS!=fO)) goto L_006c8c23;
L_006c8c53:; BB(0x006c8c53);
    /* 006c8c53: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 006c8c57: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c8c5d: jmp 0x6c8b51 */ goto L_006c8b51;
L_006c8c62:; BB(0x006c8c62);
    /* 006c8c62: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 006c8c66: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 006c8c6a: add word ptr [edi + eax*8 + 0x14], dx */ { u32 ad = (u32)(r_edi+r_eax*8+0x14u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006c8c6f: call 0x5d6430 */ r_esp -= 4; W32(r_esp, 0x6c8c74u); f_005d6430();
L_006c8c74:; BB(0x006c8c74);
    /* 006c8c74: mov eax, 1 */ r_eax = 0x1u;
    /* 006c8c79: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8c7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8c7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8c7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8c7f: ret  */ FN_RET(0x006c8acc); r_esp += 4; return;
L_006c8c80:; BB(0x006c8c80);
    /* 006c8c80: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 006c8c84: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c8c88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8c89: call 0x6c8ca8 */ r_esp -= 4; W32(r_esp, 0x6c8c8eu); f_006c8ca8();
    /* 006c8c8e: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 006c8c92: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 006c8c96: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c8c9c: mov word ptr [edi + edx*8 + 0x14], ax */ W16((u32)(r_edi+r_edx*8+0x14u), (u16)r_eax);
    /* 006c8ca1: add dword ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c8ca4: jmp 0x6c8c74 */ goto L_006c8c74;
}

void f_006c8b80(void)
{
    FN_ENTER(0x006c8b80);
    /* 006c8b80: xor byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 006c8b82: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c8b84: mov eax, 1 */ r_eax = 0x1u;
    /* 006c8b89: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8b8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8b8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8b8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8b8f: ret  */ FN_RET(0x006c8b80); r_esp += 4; return;
}

void f_006c8ca8(void) /* sub_6C8CA8 */
{
    FN_ENTER(0x006c8ca8);
    /* 006c8ca8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c8cac: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 006c8caf: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 006c8cb1: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 006c8cb5: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 006c8cb8: movzx edx, byte ptr [eax + 2] */ r_edx = (u32)R8((u32)(r_eax+0x2u));
    /* 006c8cbc: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 006c8cbf: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 006c8cc3: mov byte ptr [ecx + 3], dl */ W8((u32)(r_ecx+0x3u), (u8)r_edx);
    /* 006c8cc6: movzx edx, byte ptr [eax + 4] */ r_edx = (u32)R8((u32)(r_eax+0x4u));
    /* 006c8cca: mov byte ptr [ecx + 4], dl */ W8((u32)(r_ecx+0x4u), (u8)r_edx);
    /* 006c8ccd: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 006c8cd1: mov byte ptr [ecx + 5], dl */ W8((u32)(r_ecx+0x5u), (u8)r_edx);
    /* 006c8cd4: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 006c8cd8: mov word ptr [ecx + 6], dx */ W16((u32)(r_ecx+0x6u), (u16)r_edx);
    /* 006c8cdc: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006c8ce0: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006c8ce4: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 006c8ce8: mov word ptr [ecx + 0xa], dx */ W16((u32)(r_ecx+0xau), (u16)r_edx);
    /* 006c8cec: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006c8cef: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006c8cf2: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006c8cf5: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006c8cf8: mov eax, 1 */ r_eax = 0x1u;
    /* 006c8cfd: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 006c8d01: mov word ptr [ecx + 0x16], ax */ W16((u32)(r_ecx+0x16u), (u16)r_eax);
    /* 006c8d05: ret 4 */ FN_RET(0x006c8ca8); r_esp += 8; return;
}

void f_006c8d08(void) /* sub_6C8D08 */
{
    FN_ENTER(0x006c8d08);
    /* 006c8d08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8d09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c8d0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8d0b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006c8d0f: mov ebp, dword ptr [0xa95ee0] */ r_ebp = R32((u32)(0xa95ee0u));
    /* 006c8d15: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c8d1a: jg 0x6c8d6f */ if ((!fZ&&fS==fO)) goto L_006c8d6f;
L_006c8d1c:; BB(0x006c8d1c);
    /* 006c8d1c: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006c8d1f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c8d21: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c8d23: movzx eax, byte ptr [ebp + esi*8 + 8] */ r_eax = (u32)R8((u32)(r_ebp+r_esi*8+0x8u));
    /* 006c8d28: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006c8d2b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c8d2d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c8d2f: lea ebx, [ebx + ebp + 8] */ r_ebx = (u32)(r_ebx+r_ebp+0x8u);
    /* 006c8d33: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8d36: je 0x6c8d50 */ if (fZ) goto L_006c8d50;
L_006c8d38:; BB(0x006c8d38);
    /* 006c8d38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c8d3a: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6c8d3fu); f_006ca398();
    /* 006c8d3f: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c8d44: add dword ptr [eax], -1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c8d47: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c8d4cu); f_006c8db4();
    /* 006c8d4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8d4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8d4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8d4f: ret  */ FN_RET(0x006c8d08); r_esp += 4; return;
L_006c8d50:; BB(0x006c8d50);
    /* 006c8d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8d51: call 0x6dc1e4 */ r_esp -= 4; W32(r_esp, 0x6c8d56u); f_006dc1e4();
    /* 006c8d56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8d57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8d59: jne 0x6c8d73 */ if (!fZ) goto L_006c8d73;
L_006c8d5b:; BB(0x006c8d5b);
    /* 006c8d5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c8d5d: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6c8d62u); f_006ca398();
    /* 006c8d62: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c8d67: add dword ptr [eax], -1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c8d6a: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c8d6fu); f_006c8db4();
L_006c8d6f:; BB(0x006c8d6f);
    /* 006c8d6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8d71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8d72: ret  */ FN_RET(0x006c8d08); r_esp += 4; return;
L_006c8d73:; BB(0x006c8d73);
    /* 006c8d73: movsx eax, word ptr [ebp + esi*8 + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_esi*8+0x1eu));
    /* 006c8d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8d7a: je 0x6c8dad */ if (fZ) goto L_006c8dad;
L_006c8d7c:; BB(0x006c8d7c);
    /* 006c8d7c: movsx eax, word ptr [ebp + esi*8 + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_esi*8+0x1cu));
    /* 006c8d81: sub eax, dword ptr [esp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c8d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8d87: jl 0x6c8dad */ if ((fS!=fO)) goto L_006c8dad;
L_006c8d89:; BB(0x006c8d89);
    /* 006c8d89: jne 0x6c8da3 */ if (!fZ) goto L_006c8da3;
L_006c8d8b:; BB(0x006c8d8b);
    /* 006c8d8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c8d8d: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6c8d92u); f_006ca398();
    /* 006c8d92: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c8d97: add dword ptr [eax], -1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c8d9a: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c8d9fu); f_006c8db4();
    /* 006c8d9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8da0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8da1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8da2: ret  */ FN_RET(0x006c8d08); r_esp += 4; return;
L_006c8da3:; BB(0x006c8da3);
    /* 006c8da3: mov word ptr [ebp + esi*8 + 0x1c], ax */ W16((u32)(r_ebp+r_esi*8+0x1cu), (u16)r_eax);
    /* 006c8da8: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c8dadu); f_006c8db4();
L_006c8dad:; BB(0x006c8dad);
    /* 006c8dad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8dae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c8daf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8db0: ret  */ FN_RET(0x006c8d08); r_esp += 4; return;
}

void f_006c8db4(void) /* sub_6C8DB4 */
{
    FN_ENTER(0x006c8db4);
    /* 006c8db4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8db5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8db6: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c8dbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c8dbd: je 0x6c8df8 */ if (fZ) goto L_006c8df8;
L_006c8dbf:; BB(0x006c8dbf);
    /* 006c8dbf: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c8dc4: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6c8dc9u); f_006c1bd4();
    /* 006c8dc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8dca: mov esi, dword ptr [0xa95ee0] */ r_esi = R32((u32)(0xa95ee0u));
    /* 006c8dd0: add eax, 0x21c */ {  u32 a = r_eax; u32 b = 0x21cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8dd5: mov edi, eax */ r_edi = r_eax;
    /* 006c8dd7: mov ecx, 0x12c8 */ r_ecx = 0x12c8u;
    /* 006c8ddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ddd: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006c8de0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006c8de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c8de3: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8de6: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006c8de8: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c8dee: call 0x6c8ab4 */ r_esp -= 4; W32(r_esp, 0x6c8df3u); f_006c8ab4();
    /* 006c8df3: mov dword ptr [0xa95ee4], eax */ W32((u32)(0xa95ee4u), r_eax);
L_006c8df8:; BB(0x006c8df8);
    /* 006c8df8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c8df9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8dfa: ret  */ FN_RET(0x006c8db4); r_esp += 4; return;
}

void f_006c8dfc(void) /* sub_6C8DFC */
{
    FN_ENTER(0x006c8dfc);
    /* 006c8dfc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c8e00: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 006c8e03: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 006c8e05: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 006c8e09: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 006c8e0c: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 006c8e10: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 006c8e13: movzx edx, byte ptr [ecx + 3] */ r_edx = (u32)R8((u32)(r_ecx+0x3u));
    /* 006c8e17: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 006c8e1a: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 006c8e1e: mov byte ptr [eax + 4], dl */ W8((u32)(r_eax+0x4u), (u8)r_edx);
    /* 006c8e21: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 006c8e25: mov byte ptr [eax + 5], dl */ W8((u32)(r_eax+0x5u), (u8)r_edx);
    /* 006c8e28: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 006c8e2c: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 006c8e30: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006c8e34: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006c8e38: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 006c8e3c: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 006c8e40: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006c8e43: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006c8e46: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 006c8e49: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006c8e4c: ret 4 */ FN_RET(0x006c8dfc); r_esp += 8; return;
}

void f_006c8e50(void) /* sub_6C8E50 */
{
    FN_ENTER(0x006c8e50);
    /* 006c8e50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c8e53: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006c8e57: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c8e5c: cmp ecx, 0xc7 */ {  u32 a = r_ecx; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8e62: jle 0x6c8e6a */ if ((fZ||fS!=fO)) goto L_006c8e6a;
L_006c8e64:; BB(0x006c8e64);
    /* 006c8e64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8e66: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8e69: ret  */ FN_RET(0x006c8e50); r_esp += 4; return;
L_006c8e6a:; BB(0x006c8e6a);
    /* 006c8e6a: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006c8e6d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c8e6f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006c8e71: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006c8e74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8e76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c8e78: lea ecx, [ecx + eax + 8] */ r_ecx = (u32)(r_ecx+r_eax+0x8u);
    /* 006c8e7c: movsx eax, word ptr [eax + edx*8 + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*8+0x1eu));
    /* 006c8e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8e83: jne 0x6c8e8b */ if (!fZ) goto L_006c8e8b;
L_006c8e85:; BB(0x006c8e85);
    /* 006c8e85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8e87: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8e8a: ret  */ FN_RET(0x006c8e50); r_esp += 4; return;
L_006c8e8b:; BB(0x006c8e8b);
    /* 006c8e8b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006c8e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8e90: call 0x6c8dfc */ r_esp -= 4; W32(r_esp, 0x6c8e95u); f_006c8dfc();
    /* 006c8e95: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006c8e99: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006c8e9d: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 006c8ea0: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006c8ea3: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 006c8ea7: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 006c8eab: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006c8eaf: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006c8eb3: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 006c8eb7: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x6c8ebcu); f_0077e4ec();
    /* 006c8ebc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006c8ebf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ec0: mov ecx, eax */ r_ecx = r_eax;
    /* 006c8ec2: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x6c8ec7u); f_0077e57c();
    /* 006c8ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8ec9: je 0x6c8f13 */ if (fZ) goto L_006c8f13;
L_006c8ecb:; BB(0x006c8ecb);
    /* 006c8ecb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006c8ecf: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006c8ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ed4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8ed5: call 0x5c9b04 */ r_esp -= 4; W32(r_esp, 0x6c8edau); f_005c9b04();
    /* 006c8eda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c8edd: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c8ee1: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006c8ee5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006c8ee7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006c8eeb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006c8eef: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006c8ef3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006c8ef6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006c8efa: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c8efd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006c8f01: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006c8f05: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006c8f08: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006c8f0c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006c8f10: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
L_006c8f13:; BB(0x006c8f13);
    /* 006c8f13: mov eax, 1 */ r_eax = 0x1u;
    /* 006c8f18: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8f1b: ret  */ FN_RET(0x006c8e50); r_esp += 4; return;
}

void f_006c8f1c(void) /* sub_6C8F1C */
{
    FN_ENTER(0x006c8f1c);
    /* 006c8f1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c8f1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8f1e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c8f21: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006c8f25: mov ebx, dword ptr [0xa95ee0] */ r_ebx = R32((u32)(0xa95ee0u));
    /* 006c8f2b: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c8f30: jle 0x6c8f3a */ if ((fZ||fS!=fO)) goto L_006c8f3a;
L_006c8f32:; BB(0x006c8f32);
    /* 006c8f32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8f34: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8f37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8f38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8f39: ret  */ FN_RET(0x006c8f1c); r_esp += 4; return;
L_006c8f3a:; BB(0x006c8f3a);
    /* 006c8f3a: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 006c8f3d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c8f3f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006c8f41: movsx edx, word ptr [ebx + edi*8 + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_edi*8+0x1eu));
    /* 006c8f46: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006c8f49: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8f4b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c8f4d: lea ecx, [eax + ebx + 8] */ r_ecx = (u32)(r_eax+r_ebx+0x8u);
    /* 006c8f51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8f53: jne 0x6c8f5d */ if (!fZ) goto L_006c8f5d;
L_006c8f55:; BB(0x006c8f55);
    /* 006c8f55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c8f57: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c8f5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8f5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c8f5c: ret  */ FN_RET(0x006c8f1c); r_esp += 4; return;
L_006c8f5d:; BB(0x006c8f5d);
    /* 006c8f5d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006c8f61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8f62: call 0x6c8dfc */ r_esp -= 4; W32(r_esp, 0x6c8f67u); f_006c8dfc();
    /* 006c8f67: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006c8f6b: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006c8f6f: movsx edi, word ptr [ebx + edi*8 + 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_edi*8+0x1cu));
    /* 006c8f74: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006c8f78: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 006c8f7a: movzx ecx, byte ptr [edx] */ r_ecx = (u32)R8((u32)(r_edx));
    /* 006c8f7d: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 006c8f80: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 006c8f84: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 006c8f88: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006c8f8c: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006c8f90: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 006c8f94: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x6c8f99u); f_0077e4ec();
    /* 006c8f99: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006c8f9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8f9d: mov ecx, eax */ r_ecx = r_eax;
    /* 006c8f9f: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x6c8fa4u); f_0077e57c();
    /* 006c8fa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c8fa6: je 0x6c8ffa */ if (fZ) goto L_006c8ffa;
L_006c8fa8:; BB(0x006c8fa8);
    /* 006c8fa8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006c8fac: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006c8fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c8fb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c8fb2: call 0x5c9b04 */ r_esp -= 4; W32(r_esp, 0x6c8fb7u); f_005c9b04();
    /* 006c8fb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c8fba: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c8fbe: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006c8fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006c8fc6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006c8fc8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006c8fcc: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006c8fd0: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006c8fd4: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006c8fd7: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 006c8fdb: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 006c8fde: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006c8fe2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006c8fe5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006c8fe9: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006c8fed: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006c8ff0: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006c8ff4: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
L_006c8ffa:; BB(0x006c8ffa);
    /* 006c8ffa: mov eax, 1 */ r_eax = 0x1u;
    /* 006c8fff: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c9002: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c9003: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c9004: ret  */ FN_RET(0x006c8f1c); r_esp += 4; return;
}

