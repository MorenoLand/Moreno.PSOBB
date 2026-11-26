#include "protos.h"

void f_006a70d4(void) /* sub_6A70D4 */
{
    FN_ENTER(0x006a70d4);
    /* 006a70d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a70d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a70d7: lea ecx, [ebp + 4] */ r_ecx = (u32)(r_ebp+0x4u);
    /* 006a70da: mov dword ptr [ebp], 0xb39d40 */ W32((u32)(r_ebp), 0xb39d40u);
    /* 006a70e1: call 0x6a9ed4 */ r_esp -= 4; W32(r_esp, 0x6a70e6u); f_006a9ed4();
    /* 006a70e6: mov eax, ebp */ r_eax = r_ebp;
    /* 006a70e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a70e9: ret  */ FN_RET(0x006a70d4); r_esp += 4; return;
}

void f_006a70ec(void) /* sub_6A70EC */
{
    FN_ENTER(0x006a70ec);
    /* 006a70ec: mov eax, dword ptr [0xa943cc] */ r_eax = R32((u32)(0xa943ccu));
    /* 006a70f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a70f3: jne 0x6a70fb */ if (!fZ) goto L_006a70fb;
L_006a70f5:; BB(0x006a70f5);
    /* 006a70f5: mov eax, 0x38 */ r_eax = 0x38u;
    /* 006a70fa: ret  */ FN_RET(0x006a70ec); r_esp += 4; return;
L_006a70fb:; BB(0x006a70fb);
    /* 006a70fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a70fe: jne 0x6a7106 */ if (!fZ) goto L_006a7106;
L_006a7100:; BB(0x006a7100);
    /* 006a7100: mov eax, 0x48 */ r_eax = 0x48u;
    /* 006a7105: ret  */ FN_RET(0x006a70ec); r_esp += 4; return;
L_006a7106:; BB(0x006a7106);
    /* 006a7106: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7108: ret  */ FN_RET(0x006a70ec); r_esp += 4; return;
}

void f_006a710c(void) /* sub_6A710C */
{
    FN_ENTER(0x006a710c);
    /* 006a710c: mov dword ptr [0xa943c0], 0x3f800000 */ W32((u32)(0xa943c0u), 0x3f800000u);
    /* 006a7116: mov dword ptr [0xa943c4], 0x41000000 */ W32((u32)(0xa943c4u), 0x41000000u);
    /* 006a7120: mov dword ptr [0xa943c8], 0x3fc00000 */ W32((u32)(0xa943c8u), 0x3fc00000u);
    /* 006a712a: ret  */ FN_RET(0x006a710c); r_esp += 4; return;
}

void f_006a712c(void) /* sub_6A712C */
{
    FN_ENTER(0x006a712c);
    /* 006a712c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a712d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a712f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a7131: call 0x6a7150 */ r_esp -= 4; W32(r_esp, 0x6a7136u); f_006a7150();
    /* 006a7136: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a713a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a713c: jne 0x6a7142 */ if (!fZ) goto L_006a7142;
L_006a713e:; BB(0x006a713e);
    /* 006a713e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a713f: ret 4 */ FN_RET(0x006a712c); r_esp += 8; return;
L_006a7142:; BB(0x006a7142);
    /* 006a7142: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7143: call 0x797e64 */ r_esp -= 4; W32(r_esp, 0x6a7148u); f_00797e64();
    /* 006a7148: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7149: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a714a: ret 4 */ FN_RET(0x006a712c); r_esp += 8; return;
}

void f_006a7150(void) /* sub_6A7150 */
{
    FN_ENTER(0x006a7150);
    /* 006a7150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7151: mov ebp, esp */ r_ebp = r_esp;
    /* 006a7153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a7155: push 0x8eb93c */ { u32 v = 0x8eb93cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a715a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a7160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7161: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a7168: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a716b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a716e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a7171: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a7174: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a7177: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a717a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a717d: mov dword ptr [ecx], 0xb39ec0 */ W32((u32)(r_ecx), 0xb39ec0u);
    /* 006a7183: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a718a: call 0x6a6f60 */ r_esp -= 4; W32(r_esp, 0x6a718fu); f_006a6f60();
    /* 006a718f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a7192: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a7199: mov esp, ebp */ r_esp = r_ebp;
    /* 006a719b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a719c: ret  */ FN_RET(0x006a7150); r_esp += 4; return;
}

void f_006a71a0(void) /* sub_6A71A0 */
{
    FN_ENTER(0x006a71a0);
    /* 006a71a0: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a71a3: mov eax, ecx */ r_eax = r_ecx;
    /* 006a71a5: ret  */ FN_RET(0x006a71a0); r_esp += 4; return;
}

void f_006a71a8(void) /* sub_6A71A8 */
{
    FN_ENTER(0x006a71a8);
    /* 006a71a8: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a71ab: mov eax, ecx */ r_eax = r_ecx;
    /* 006a71ad: ret 4 */ FN_RET(0x006a71a8); r_esp += 8; return;
}

void f_006a71b0(void) /* sub_6A71B0 */
{
    FN_ENTER(0x006a71b0);
    /* 006a71b0: mov eax, dword ptr [0xa943dc] */ r_eax = R32((u32)(0xa943dcu));
    /* 006a71b5: ret  */ FN_RET(0x006a71b0); r_esp += 4; return;
}

void f_006a71b8(void) /* sub_6A71B8 */
{
    FN_ENTER(0x006a71b8);
    /* 006a71b8: mov eax, 2 */ r_eax = 0x2u;
    /* 006a71bd: ret  */ FN_RET(0x006a71b8); r_esp += 4; return;
}

void f_006a71c0(void) /* sub_6A71C0 */
{
    FN_ENTER(0x006a71c0);
    /* 006a71c0: mov eax, 3 */ r_eax = 0x3u;
    /* 006a71c5: ret  */ FN_RET(0x006a71c0); r_esp += 4; return;
}

void f_006a71d8(void) /* sub_6A71D8 */
{
    FN_ENTER(0x006a71d8);
    /* 006a71d8: mov eax, 0x36 */ r_eax = 0x36u;
    /* 006a71dd: ret  */ FN_RET(0x006a71d8); r_esp += 4; return;
}

void f_006a71e0(void) /* sub_6A71E0 */
{
    FN_ENTER(0x006a71e0);
    /* 006a71e0: mov eax, 0x37 */ r_eax = 0x37u;
    /* 006a71e5: ret  */ FN_RET(0x006a71e0); r_esp += 4; return;
}

void f_006a71e8(void) /* sub_6A71E8 */
{
    FN_ENTER(0x006a71e8);
    /* 006a71e8: mov eax, 0x39 */ r_eax = 0x39u;
    /* 006a71ed: ret  */ FN_RET(0x006a71e8); r_esp += 4; return;
}

void f_006a71f0(void) /* sub_6A71F0 */
{
    FN_ENTER(0x006a71f0);
    /* 006a71f0: mov eax, 0x3a */ r_eax = 0x3au;
    /* 006a71f5: ret  */ FN_RET(0x006a71f0); r_esp += 4; return;
}

void f_006a71f8(void) /* sub_6A71F8 */
{
    FN_ENTER(0x006a71f8);
    /* 006a71f8: mov eax, 0x3b */ r_eax = 0x3bu;
    /* 006a71fd: ret  */ FN_RET(0x006a71f8); r_esp += 4; return;
}

void f_006a7200(void) /* sub_6A7200 */
{
    FN_ENTER(0x006a7200);
    /* 006a7200: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 006a7205: ret  */ FN_RET(0x006a7200); r_esp += 4; return;
}

void f_006a7208(void) /* sub_6A7208 */
{
    FN_ENTER(0x006a7208);
    /* 006a7208: mov eax, 0x3d */ r_eax = 0x3du;
    /* 006a720d: ret  */ FN_RET(0x006a7208); r_esp += 4; return;
}

void f_006a7210(void) /* sub_6A7210 */
{
    FN_ENTER(0x006a7210);
    /* 006a7210: mov eax, 0x3e */ r_eax = 0x3eu;
    /* 006a7215: ret  */ FN_RET(0x006a7210); r_esp += 4; return;
}

void f_006a7218(void) /* sub_6A7218 */
{
    FN_ENTER(0x006a7218);
    /* 006a7218: mov eax, 0x3f */ r_eax = 0x3fu;
    /* 006a721d: ret  */ FN_RET(0x006a7218); r_esp += 4; return;
}

void f_006a7220(void) /* sub_6A7220 */
{
    FN_ENTER(0x006a7220);
    /* 006a7220: mov eax, 0x42 */ r_eax = 0x42u;
    /* 006a7225: ret  */ FN_RET(0x006a7220); r_esp += 4; return;
}

void f_006a7228(void) /* sub_6A7228 */
{
    FN_ENTER(0x006a7228);
    /* 006a7228: mov eax, 0x43 */ r_eax = 0x43u;
    /* 006a722d: ret  */ FN_RET(0x006a7228); r_esp += 4; return;
}

void f_006a7230(void) /* sub_6A7230 */
{
    FN_ENTER(0x006a7230);
    /* 006a7230: mov eax, 0x44 */ r_eax = 0x44u;
    /* 006a7235: ret  */ FN_RET(0x006a7230); r_esp += 4; return;
}

void f_006a7238(void) /* sub_6A7238 */
{
    FN_ENTER(0x006a7238);
    /* 006a7238: mov eax, 0x45 */ r_eax = 0x45u;
    /* 006a723d: ret  */ FN_RET(0x006a7238); r_esp += 4; return;
}

void f_006a7240(void) /* sub_6A7240 */
{
    FN_ENTER(0x006a7240);
    /* 006a7240: mov eax, 0x48 */ r_eax = 0x48u;
    /* 006a7245: ret  */ FN_RET(0x006a7240); r_esp += 4; return;
}

void f_006a7248(void)
{
    FN_ENTER(0x006a7248);
    /* 006a7248: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a724a: call dword ptr [eax + 0x128] */ { u32 t = R32((u32)(r_eax+0x128u)); r_esp -= 4; W32(r_esp, 0x6a7250u); call_ind(t); }
    /* 006a7250: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a7254: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006a7257: imul eax, dword ptr [esp + 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006a725c: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006a725f: add eax, dword ptr [0xa943dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa943dcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a7265: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a7267: ret 8 */ FN_RET(0x006a7248); r_esp += 12; return;
}

void f_006a726c(void) /* sub_6A726C */
{
    FN_ENTER(0x006a726c);
    /* 006a726c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a726d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a726f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a7271: call 0x6a70d4 */ r_esp -= 4; W32(r_esp, 0x6a7276u); f_006a70d4();
    /* 006a7276: mov dword ptr [ebp], 0xb39ec0 */ W32((u32)(r_ebp), 0xb39ec0u);
    /* 006a727d: mov eax, ebp */ r_eax = r_ebp;
    /* 006a727f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7280: ret  */ FN_RET(0x006a726c); r_esp += 4; return;
}

void f_006a7284(void) /* sub_6A7284 */
{
    FN_ENTER(0x006a7284);
    /* 006a7284: call 0x6a7294 */ r_esp -= 4; W32(r_esp, 0x6a7289u); f_006a7294();
    /* 006a7289: mov dword ptr [0xa943cc], 0 */ W32((u32)(0xa943ccu), 0x0u);
    /* 006a7293: ret  */ FN_RET(0x006a7284); r_esp += 4; return;
}

void f_006a7294(void) /* sub_6A7294 */
{
    FN_ENTER(0x006a7294);
    /* 006a7294: mov eax, dword ptr [0xa943dc] */ r_eax = R32((u32)(0xa943dcu));
    /* 006a7299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a729b: je 0x6a72ae */ if (fZ) goto L_006a72ae;
L_006a729d:; BB(0x006a729d);
    /* 006a729d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a729e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a72a3u); f_00857e98();
    /* 006a72a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a72a4: mov dword ptr [0xa943dc], 0 */ W32((u32)(0xa943dcu), 0x0u);
L_006a72ae:; BB(0x006a72ae);
    /* 006a72ae: ret  */ FN_RET(0x006a7294); r_esp += 4; return;
}

void f_006a72b0(void) /* sub_6A72B0 */
{
    FN_ENTER(0x006a72b0);
    /* 006a72b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a72b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a72b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a72b3: mov esi, ecx */ r_esi = r_ecx;
    /* 006a72b5: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 006a72b8: mov ecx, edi */ r_ecx = r_edi;
    /* 006a72ba: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x6a72bfu); f_006a7b64();
    /* 006a72bf: mov ebx, eax */ r_ebx = r_eax;
    /* 006a72c1: mov ecx, edi */ r_ecx = r_edi;
    /* 006a72c3: call 0x6a7b80 */ r_esp -= 4; W32(r_esp, 0x6a72c8u); f_006a7b80();
    /* 006a72c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a72c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a72ca: mov ecx, esi */ r_ecx = r_esi;
    /* 006a72cc: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a72d0: call 0x6a6f80 */ r_esp -= 4; W32(r_esp, 0x6a72d5u); f_006a6f80();
    /* 006a72d5: mov ebx, eax */ r_ebx = r_eax;
    /* 006a72d7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a72d9: je 0x6a72e2 */ if (fZ) goto L_006a72e2;
L_006a72db:; BB(0x006a72db);
    /* 006a72db: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006a72dd: mov ecx, esi */ r_ecx = r_esi;
    /* 006a72df: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x6a72e2u); call_ind(t); }
L_006a72e2:; BB(0x006a72e2);
    /* 006a72e2: mov eax, ebx */ r_eax = r_ebx;
    /* 006a72e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a72e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a72e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a72e7: ret 4 */ FN_RET(0x006a72b0); r_esp += 8; return;
}

void f_006a72ec(void) /* sub_6A72EC */
{
    FN_ENTER(0x006a72ec);
    /* 006a72ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a72ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a72ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a72ef: mov edi, ecx */ r_edi = r_ecx;
    /* 006a72f1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006a72f5: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006a72f9: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 006a72fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a72fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a72fe: call 0x6a7b9c */ r_esp -= 4; W32(r_esp, 0x6a7303u); f_006a7b9c();
    /* 006a7303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7305: je 0x6a7312 */ if (fZ) goto L_006a7312;
L_006a7307:; BB(0x006a7307);
    /* 006a7307: mov eax, 1 */ r_eax = 0x1u;
    /* 006a730c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a730d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a730e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a730f: ret 0xc */ FN_RET(0x006a72ec); r_esp += 16; return;
L_006a7312:; BB(0x006a7312);
    /* 006a7312: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7313: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7314: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7318: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 006a731b: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 006a731e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a7320: call 0x6a6f80 */ r_esp -= 4; W32(r_esp, 0x6a7325u); f_006a6f80();
    /* 006a7325: mov ebx, eax */ r_ebx = r_eax;
    /* 006a7327: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7329: je 0x6a7332 */ if (fZ) goto L_006a7332;
L_006a732b:; BB(0x006a732b);
    /* 006a732b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006a732d: mov ecx, edi */ r_ecx = r_edi;
    /* 006a732f: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x6a7332u); call_ind(t); }
L_006a7332:; BB(0x006a7332);
    /* 006a7332: mov eax, ebx */ r_eax = r_ebx;
    /* 006a7334: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7335: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a7336: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a7337: ret 0xc */ FN_RET(0x006a72ec); r_esp += 16; return;
}

void f_006a733c(void) /* sub_6A733C */
{
    FN_ENTER(0x006a733c);
    /* 006a733c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a733d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006a7341: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7342: call 0x6a7b70 */ r_esp -= 4; W32(r_esp, 0x6a7347u); f_006a7b70();
    /* 006a7347: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a734a: jne 0x6a7352 */ if (!fZ) goto L_006a7352;
L_006a734c:; BB(0x006a734c);
    /* 006a734c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a734e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a734f: ret 8 */ FN_RET(0x006a733c); r_esp += 12; return;
L_006a7352:; BB(0x006a7352);
    /* 006a7352: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a7356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7357: call 0x6a7b8c */ r_esp -= 4; W32(r_esp, 0x6a735cu); f_006a7b8c();
    /* 006a735c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a735d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a735f: jne 0x6a7367 */ if (!fZ) goto L_006a7367;
L_006a7361:; BB(0x006a7361);
    /* 006a7361: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7363: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7364: ret 8 */ FN_RET(0x006a733c); r_esp += 12; return;
L_006a7367:; BB(0x006a7367);
    /* 006a7367: mov edx, dword ptr [ebx*4 + 0x9cbeec] */ r_edx = R32((u32)(r_ebx*4+0x9cbeecu));
    /* 006a736e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a7372: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006a7375: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7376: ret 8 */ FN_RET(0x006a733c); r_esp += 12; return;
}

void f_006a737c(void) /* sub_6A737C */
{
    FN_ENTER(0x006a737c);
    /* 006a737c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a737d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006a7381: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7382: call 0x6a7b70 */ r_esp -= 4; W32(r_esp, 0x6a7387u); f_006a7b70();
    /* 006a7387: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a738a: jne 0x6a7392 */ if (!fZ) goto L_006a7392;
L_006a738c:; BB(0x006a738c);
    /* 006a738c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a738e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a738f: ret 8 */ FN_RET(0x006a737c); r_esp += 12; return;
L_006a7392:; BB(0x006a7392);
    /* 006a7392: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a7396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7397: call 0x6a7b8c */ r_esp -= 4; W32(r_esp, 0x6a739cu); f_006a7b8c();
    /* 006a739c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a739d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a739f: jne 0x6a73a7 */ if (!fZ) goto L_006a73a7;
L_006a73a1:; BB(0x006a73a1);
    /* 006a73a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a73a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a73a4: ret 8 */ FN_RET(0x006a737c); r_esp += 12; return;
L_006a73a7:; BB(0x006a73a7);
    /* 006a73a7: mov edx, dword ptr [ebx*4 + 0x9cbf04] */ r_edx = R32((u32)(r_ebx*4+0x9cbf04u));
    /* 006a73ae: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a73b2: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006a73b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a73b6: ret 8 */ FN_RET(0x006a737c); r_esp += 12; return;
}

void f_006a73bc(void) /* sub_6A73BC */
{
    FN_ENTER(0x006a73bc);
    /* 006a73bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a73c0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a73c4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a73c8: mov eax, dword ptr [eax*4 + 0x9cbf04] */ r_eax = R32((u32)(r_eax*4+0x9cbf04u));
    /* 006a73cf: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006a73d2: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006a73d5: ret 0xc */ FN_RET(0x006a73bc); r_esp += 16; return;
}

void f_006a73d8(void) /* sub_6A73D8 */
{
    FN_ENTER(0x006a73d8);
    /* 006a73d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a73d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a73db: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006a73dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a73df: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a73e2u); call_ind(t); }
    /* 006a73e2: mov edx, dword ptr [ebx + eax*8 + 0x10] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 006a73e6: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 006a73ea: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a73ef: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 006a73f3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006a73f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a73f7: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a73fau); call_ind(t); }
    /* 006a73fa: mov edx, dword ptr [ebx + eax*8 + 0x10] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 006a73fe: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 006a7402: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a7407: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 006a740b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006a740d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a740f: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a7412u); call_ind(t); }
    /* 006a7412: mov edx, dword ptr [ebx + eax*8 + 0x10] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 006a7416: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 006a741a: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a741f: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 006a7423: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7424: ret  */ FN_RET(0x006a73d8); r_esp += 4; return;
}

void f_006a7428(void) /* sub_6A7428 */
{
    FN_ENTER(0x006a7428);
    /* 006a7428: mov dword ptr [0xa943d0], 0x3f800000 */ W32((u32)(0xa943d0u), 0x3f800000u);
    /* 006a7432: mov dword ptr [0xa943d4], 0x41000000 */ W32((u32)(0xa943d4u), 0x41000000u);
    /* 006a743c: mov dword ptr [0xa943d8], 0x3fc00000 */ W32((u32)(0xa943d8u), 0x3fc00000u);
    /* 006a7446: ret  */ FN_RET(0x006a7428); r_esp += 4; return;
}

void f_006a7448(void) /* sub_6A7448 */
{
    FN_ENTER(0x006a7448);
    /* 006a7448: push 0x480000 */ { u32 v = 0x480000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a744d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a7452u); f_008581c5();
    /* 006a7452: mov dword ptr [0xa943dc], eax */ W32((u32)(0xa943dcu), r_eax);
    /* 006a7457: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7458: ret  */ FN_RET(0x006a7448); r_esp += 4; return;
}

void f_006a745c(void) /* sub_6A745C */
{
    FN_ENTER(0x006a745c);
    /* 006a745c: mov dword ptr [0xa943cc], 1 */ W32((u32)(0xa943ccu), 0x1u);
    /* 006a7466: call 0x6a7448 */ r_esp -= 4; W32(r_esp, 0x6a746bu); f_006a7448();
    /* 006a746b: ret  */ FN_RET(0x006a745c); r_esp += 4; return;
}

void f_006a746c(void) /* sub_6A746C */
{
    FN_ENTER(0x006a746c);
    /* 006a746c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a746d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a746f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a7471: call 0x6a7490 */ r_esp -= 4; W32(r_esp, 0x6a7476u); f_006a7490();
    /* 006a7476: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a747a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a747c: jne 0x6a7482 */ if (!fZ) goto L_006a7482;
L_006a747e:; BB(0x006a747e);
    /* 006a747e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a747f: ret 4 */ FN_RET(0x006a746c); r_esp += 8; return;
L_006a7482:; BB(0x006a7482);
    /* 006a7482: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7483: call 0x797e64 */ r_esp -= 4; W32(r_esp, 0x6a7488u); f_00797e64();
    /* 006a7488: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7489: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a748a: ret 4 */ FN_RET(0x006a746c); r_esp += 8; return;
}

void f_006a7490(void) /* sub_6A7490 */
{
    FN_ENTER(0x006a7490);
    /* 006a7490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7491: mov ebp, esp */ r_ebp = r_esp;
    /* 006a7493: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a7495: push 0x8eb958 */ { u32 v = 0x8eb958u; r_esp -= 4; W32(r_esp, v); }
    /* 006a749a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a74a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a74a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a74a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a74ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a74ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a74b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a74b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a74b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a74ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a74bd: mov dword ptr [ecx], 0xb3a040 */ W32((u32)(r_ecx), 0xb3a040u);
    /* 006a74c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a74ca: call 0x6a6f60 */ r_esp -= 4; W32(r_esp, 0x6a74cfu); f_006a6f60();
    /* 006a74cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a74d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a74d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006a74db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a74dc: ret  */ FN_RET(0x006a7490); r_esp += 4; return;
}

void f_006a74e0(void) /* sub_6A74E0 */
{
    FN_ENTER(0x006a74e0);
    /* 006a74e0: call 0x6a74f0 */ r_esp -= 4; W32(r_esp, 0x6a74e5u); f_006a74f0();
    /* 006a74e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a74e7: mov eax, 0 */ r_eax = 0x0u;
    /* 006a74ec: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006a74ef: ret  */ FN_RET(0x006a74e0); r_esp += 4; return;
}

void f_006a74f0(void) /* sub_6A74F0 */
{
    FN_ENTER(0x006a74f0);
    /* 006a74f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a74f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a74f3: lea ecx, [ebp + 4] */ r_ecx = (u32)(r_ebp+0x4u);
    /* 006a74f6: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x6a74fbu); f_006a7b64();
    /* 006a74fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a74fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a74fe: call 0x6a7508 */ r_esp -= 4; W32(r_esp, 0x6a7503u); f_006a7508();
    /* 006a7503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7504: ret  */ FN_RET(0x006a74f0); r_esp += 4; return;
}

void f_006a7508(void) /* sub_6A7508 */
{
    FN_ENTER(0x006a7508);
    /* 006a7508: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a750c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a750e: je 0x6a7530 */ if (fZ) goto L_006a7530;
L_006a7510:; BB(0x006a7510);
    /* 006a7510: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7513: je 0x6a7530 */ if (fZ) goto L_006a7530;
L_006a7515:; BB(0x006a7515);
    /* 006a7515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a7517: jle 0x6a7530 */ if ((fZ||fS!=fO)) goto L_006a7530;
L_006a7519:; BB(0x006a7519);
    /* 006a7519: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a751c: jle 0x6a7528 */ if ((fZ||fS!=fO)) goto L_006a7528;
L_006a751e:; BB(0x006a751e);
    /* 006a751e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a7521: jl 0x6a7530 */ if ((fS!=fO)) goto L_006a7530;
L_006a7523:; BB(0x006a7523);
    /* 006a7523: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7526: jg 0x6a7530 */ if ((!fZ&&fS==fO)) goto L_006a7530;
L_006a7528:; BB(0x006a7528);
    /* 006a7528: mov eax, 1 */ r_eax = 0x1u;
    /* 006a752d: ret 4 */ FN_RET(0x006a7508); r_esp += 8; return;
L_006a7530:; BB(0x006a7530);
    /* 006a7530: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7532: ret 4 */ FN_RET(0x006a7508); r_esp += 8; return;
}

void f_006a7538(void) /* sub_6A7538 */
{
    FN_ENTER(0x006a7538);
    /* 006a7538: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a753c: call 0x6a7508 */ r_esp -= 4; W32(r_esp, 0x6a7541u); f_006a7508();
    /* 006a7541: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7543: mov eax, 0 */ r_eax = 0x0u;
    /* 006a7548: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006a754b: ret 4 */ FN_RET(0x006a7538); r_esp += 8; return;
}

void f_006a7550(void) /* sub_6A7550 */
{
    FN_ENTER(0x006a7550);
    /* 006a7550: call 0x6a74f0 */ r_esp -= 4; W32(r_esp, 0x6a7555u); f_006a74f0();
    /* 006a7555: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7558: mov eax, 0 */ r_eax = 0x0u;
    /* 006a755d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006a7560: ret  */ FN_RET(0x006a7550); r_esp += 4; return;
}

void f_006a7564(void) /* sub_6A7564 */
{
    FN_ENTER(0x006a7564);
    /* 006a7564: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7568: call 0x6a7508 */ r_esp -= 4; W32(r_esp, 0x6a756du); f_006a7508();
    /* 006a756d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7570: mov eax, 0 */ r_eax = 0x0u;
    /* 006a7575: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006a7578: ret 4 */ FN_RET(0x006a7564); r_esp += 8; return;
}

void f_006a757c(void) /* sub_6A757C */
{
    FN_ENTER(0x006a757c);
    /* 006a757c: mov eax, dword ptr [0xa94770] */ r_eax = R32((u32)(0xa94770u));
    /* 006a7581: ret  */ FN_RET(0x006a757c); r_esp += 4; return;
}

void f_006a7584(void) /* sub_6A7584 */
{
    FN_ENTER(0x006a7584);
    /* 006a7584: mov eax, 6 */ r_eax = 0x6u;
    /* 006a7589: ret  */ FN_RET(0x006a7584); r_esp += 4; return;
}

void f_006a758c(void) /* sub_6A758C */
{
    FN_ENTER(0x006a758c);
    /* 006a758c: mov eax, 7 */ r_eax = 0x7u;
    /* 006a7591: ret  */ FN_RET(0x006a758c); r_esp += 4; return;
}

void f_006a7594(void) /* sub_6A7594 */
{
    FN_ENTER(0x006a7594);
    /* 006a7594: mov eax, 8 */ r_eax = 0x8u;
    /* 006a7599: ret  */ FN_RET(0x006a7594); r_esp += 4; return;
}

void f_006a759c(void) /* sub_6A759C */
{
    FN_ENTER(0x006a759c);
    /* 006a759c: mov eax, 9 */ r_eax = 0x9u;
    /* 006a75a1: ret  */ FN_RET(0x006a759c); r_esp += 4; return;
}

void f_006a75a4(void) /* sub_6A75A4 */
{
    FN_ENTER(0x006a75a4);
    /* 006a75a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006a75a9: ret  */ FN_RET(0x006a75a4); r_esp += 4; return;
}

void f_006a75ac(void) /* sub_6A75AC */
{
    FN_ENTER(0x006a75ac);
    /* 006a75ac: mov eax, 0xb */ r_eax = 0xbu;
    /* 006a75b1: ret  */ FN_RET(0x006a75ac); r_esp += 4; return;
}

void f_006a75b4(void) /* sub_6A75B4 */
{
    FN_ENTER(0x006a75b4);
    /* 006a75b4: mov eax, 0xc */ r_eax = 0xcu;
    /* 006a75b9: ret  */ FN_RET(0x006a75b4); r_esp += 4; return;
}

void f_006a75bc(void) /* sub_6A75BC */
{
    FN_ENTER(0x006a75bc);
    /* 006a75bc: mov eax, 0xd */ r_eax = 0xdu;
    /* 006a75c1: ret  */ FN_RET(0x006a75bc); r_esp += 4; return;
}

void f_006a75c4(void) /* sub_6A75C4 */
{
    FN_ENTER(0x006a75c4);
    /* 006a75c4: mov eax, 0xe */ r_eax = 0xeu;
    /* 006a75c9: ret  */ FN_RET(0x006a75c4); r_esp += 4; return;
}

void f_006a75cc(void) /* sub_6A75CC */
{
    FN_ENTER(0x006a75cc);
    /* 006a75cc: mov eax, 0xf */ r_eax = 0xfu;
    /* 006a75d1: ret  */ FN_RET(0x006a75cc); r_esp += 4; return;
}

void f_006a75d4(void) /* sub_6A75D4 */
{
    FN_ENTER(0x006a75d4);
    /* 006a75d4: mov eax, 0x10 */ r_eax = 0x10u;
    /* 006a75d9: ret  */ FN_RET(0x006a75d4); r_esp += 4; return;
}

void f_006a75dc(void) /* sub_6A75DC */
{
    FN_ENTER(0x006a75dc);
    /* 006a75dc: mov eax, 0x11 */ r_eax = 0x11u;
    /* 006a75e1: ret  */ FN_RET(0x006a75dc); r_esp += 4; return;
}

void f_006a75e4(void) /* sub_6A75E4 */
{
    FN_ENTER(0x006a75e4);
    /* 006a75e4: mov eax, 0x13 */ r_eax = 0x13u;
    /* 006a75e9: ret  */ FN_RET(0x006a75e4); r_esp += 4; return;
}

void f_006a75ec(void) /* sub_6A75EC */
{
    FN_ENTER(0x006a75ec);
    /* 006a75ec: mov eax, 0x14 */ r_eax = 0x14u;
    /* 006a75f1: ret  */ FN_RET(0x006a75ec); r_esp += 4; return;
}

void f_006a75f4(void) /* sub_6A75F4 */
{
    FN_ENTER(0x006a75f4);
    /* 006a75f4: mov eax, 0x15 */ r_eax = 0x15u;
    /* 006a75f9: ret  */ FN_RET(0x006a75f4); r_esp += 4; return;
}

void f_006a75fc(void) /* sub_6A75FC */
{
    FN_ENTER(0x006a75fc);
    /* 006a75fc: mov eax, 0x16 */ r_eax = 0x16u;
    /* 006a7601: ret  */ FN_RET(0x006a75fc); r_esp += 4; return;
}

void f_006a7604(void) /* sub_6A7604 */
{
    FN_ENTER(0x006a7604);
    /* 006a7604: mov eax, 0x17 */ r_eax = 0x17u;
    /* 006a7609: ret  */ FN_RET(0x006a7604); r_esp += 4; return;
}

void f_006a760c(void) /* sub_6A760C */
{
    FN_ENTER(0x006a760c);
    /* 006a760c: mov eax, 0x18 */ r_eax = 0x18u;
    /* 006a7611: ret  */ FN_RET(0x006a760c); r_esp += 4; return;
}

void f_006a7614(void) /* sub_6A7614 */
{
    FN_ENTER(0x006a7614);
    /* 006a7614: mov eax, 0x12 */ r_eax = 0x12u;
    /* 006a7619: ret  */ FN_RET(0x006a7614); r_esp += 4; return;
}

void f_006a761c(void) /* sub_6A761C */
{
    FN_ENTER(0x006a761c);
    /* 006a761c: mov eax, 0x19 */ r_eax = 0x19u;
    /* 006a7621: ret  */ FN_RET(0x006a761c); r_esp += 4; return;
}

void f_006a7624(void) /* sub_6A7624 */
{
    FN_ENTER(0x006a7624);
    /* 006a7624: mov eax, 0x1a */ r_eax = 0x1au;
    /* 006a7629: ret  */ FN_RET(0x006a7624); r_esp += 4; return;
}

void f_006a762c(void) /* sub_6A762C */
{
    FN_ENTER(0x006a762c);
    /* 006a762c: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 006a7631: ret  */ FN_RET(0x006a762c); r_esp += 4; return;
}

void f_006a7634(void) /* sub_6A7634 */
{
    FN_ENTER(0x006a7634);
    /* 006a7634: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 006a7639: ret  */ FN_RET(0x006a7634); r_esp += 4; return;
}

void f_006a763c(void) /* sub_6A763C */
{
    FN_ENTER(0x006a763c);
    /* 006a763c: mov eax, 0x1d */ r_eax = 0x1du;
    /* 006a7641: ret  */ FN_RET(0x006a763c); r_esp += 4; return;
}

void f_006a7644(void) /* sub_6A7644 */
{
    FN_ENTER(0x006a7644);
    /* 006a7644: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 006a7649: ret  */ FN_RET(0x006a7644); r_esp += 4; return;
}

void f_006a764c(void) /* sub_6A764C */
{
    FN_ENTER(0x006a764c);
    /* 006a764c: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 006a7651: ret  */ FN_RET(0x006a764c); r_esp += 4; return;
}

void f_006a7654(void) /* sub_6A7654 */
{
    FN_ENTER(0x006a7654);
    /* 006a7654: mov eax, 0x20 */ r_eax = 0x20u;
    /* 006a7659: ret  */ FN_RET(0x006a7654); r_esp += 4; return;
}

void f_006a765c(void) /* sub_6A765C */
{
    FN_ENTER(0x006a765c);
    /* 006a765c: mov eax, 0x21 */ r_eax = 0x21u;
    /* 006a7661: ret  */ FN_RET(0x006a765c); r_esp += 4; return;
}

void f_006a7664(void) /* sub_6A7664 */
{
    FN_ENTER(0x006a7664);
    /* 006a7664: mov eax, 0x22 */ r_eax = 0x22u;
    /* 006a7669: ret  */ FN_RET(0x006a7664); r_esp += 4; return;
}

void f_006a766c(void) /* sub_6A766C */
{
    FN_ENTER(0x006a766c);
    /* 006a766c: mov eax, 0x23 */ r_eax = 0x23u;
    /* 006a7671: ret  */ FN_RET(0x006a766c); r_esp += 4; return;
}

void f_006a7674(void) /* sub_6A7674 */
{
    FN_ENTER(0x006a7674);
    /* 006a7674: mov eax, 0x24 */ r_eax = 0x24u;
    /* 006a7679: ret  */ FN_RET(0x006a7674); r_esp += 4; return;
}

void f_006a767c(void) /* sub_6A767C */
{
    FN_ENTER(0x006a767c);
    /* 006a767c: mov eax, 0x25 */ r_eax = 0x25u;
    /* 006a7681: ret  */ FN_RET(0x006a767c); r_esp += 4; return;
}

void f_006a7684(void) /* sub_6A7684 */
{
    FN_ENTER(0x006a7684);
    /* 006a7684: mov eax, 0x26 */ r_eax = 0x26u;
    /* 006a7689: ret  */ FN_RET(0x006a7684); r_esp += 4; return;
}

void f_006a768c(void) /* sub_6A768C */
{
    FN_ENTER(0x006a768c);
    /* 006a768c: mov eax, 0x27 */ r_eax = 0x27u;
    /* 006a7691: ret  */ FN_RET(0x006a768c); r_esp += 4; return;
}

void f_006a7694(void) /* sub_6A7694 */
{
    FN_ENTER(0x006a7694);
    /* 006a7694: mov eax, 0x28 */ r_eax = 0x28u;
    /* 006a7699: ret  */ FN_RET(0x006a7694); r_esp += 4; return;
}

void f_006a769c(void) /* sub_6A769C */
{
    FN_ENTER(0x006a769c);
    /* 006a769c: mov eax, 0x29 */ r_eax = 0x29u;
    /* 006a76a1: ret  */ FN_RET(0x006a769c); r_esp += 4; return;
}

void f_006a76a4(void) /* sub_6A76A4 */
{
    FN_ENTER(0x006a76a4);
    /* 006a76a4: mov eax, 0x2a */ r_eax = 0x2au;
    /* 006a76a9: ret  */ FN_RET(0x006a76a4); r_esp += 4; return;
}

void f_006a76ac(void) /* sub_6A76AC */
{
    FN_ENTER(0x006a76ac);
    /* 006a76ac: mov eax, 0x2b */ r_eax = 0x2bu;
    /* 006a76b1: ret  */ FN_RET(0x006a76ac); r_esp += 4; return;
}

void f_006a76b4(void) /* sub_6A76B4 */
{
    FN_ENTER(0x006a76b4);
    /* 006a76b4: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 006a76b9: ret  */ FN_RET(0x006a76b4); r_esp += 4; return;
}

void f_006a76bc(void) /* sub_6A76BC */
{
    FN_ENTER(0x006a76bc);
    /* 006a76bc: mov eax, 0x2d */ r_eax = 0x2du;
    /* 006a76c1: ret  */ FN_RET(0x006a76bc); r_esp += 4; return;
}

void f_006a76c4(void) /* sub_6A76C4 */
{
    FN_ENTER(0x006a76c4);
    /* 006a76c4: mov eax, 0x2e */ r_eax = 0x2eu;
    /* 006a76c9: ret  */ FN_RET(0x006a76c4); r_esp += 4; return;
}

void f_006a76cc(void) /* sub_6A76CC */
{
    FN_ENTER(0x006a76cc);
    /* 006a76cc: mov eax, 0x2f */ r_eax = 0x2fu;
    /* 006a76d1: ret  */ FN_RET(0x006a76cc); r_esp += 4; return;
}

void f_006a76d4(void) /* sub_6A76D4 */
{
    FN_ENTER(0x006a76d4);
    /* 006a76d4: mov eax, 0x30 */ r_eax = 0x30u;
    /* 006a76d9: ret  */ FN_RET(0x006a76d4); r_esp += 4; return;
}

void f_006a76dc(void) /* sub_6A76DC */
{
    FN_ENTER(0x006a76dc);
    /* 006a76dc: mov eax, 0x31 */ r_eax = 0x31u;
    /* 006a76e1: ret  */ FN_RET(0x006a76dc); r_esp += 4; return;
}

void f_006a76e4(void) /* sub_6A76E4 */
{
    FN_ENTER(0x006a76e4);
    /* 006a76e4: mov eax, 0x32 */ r_eax = 0x32u;
    /* 006a76e9: ret  */ FN_RET(0x006a76e4); r_esp += 4; return;
}

void f_006a76ec(void) /* sub_6A76EC */
{
    FN_ENTER(0x006a76ec);
    /* 006a76ec: mov eax, 0x33 */ r_eax = 0x33u;
    /* 006a76f1: ret  */ FN_RET(0x006a76ec); r_esp += 4; return;
}

void f_006a76f4(void) /* sub_6A76F4 */
{
    FN_ENTER(0x006a76f4);
    /* 006a76f4: mov eax, 0x34 */ r_eax = 0x34u;
    /* 006a76f9: ret  */ FN_RET(0x006a76f4); r_esp += 4; return;
}

void f_006a76fc(void) /* sub_6A76FC */
{
    FN_ENTER(0x006a76fc);
    /* 006a76fc: mov eax, 0x35 */ r_eax = 0x35u;
    /* 006a7701: ret  */ FN_RET(0x006a76fc); r_esp += 4; return;
}

void f_006a7704(void) /* sub_6A7704 */
{
    FN_ENTER(0x006a7704);
    /* 006a7704: mov eax, 0x38 */ r_eax = 0x38u;
    /* 006a7709: ret  */ FN_RET(0x006a7704); r_esp += 4; return;
}

void f_006a770c(void)
{
    FN_ENTER(0x006a770c);
    /* 006a770c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a770e: call dword ptr [eax + 0x128] */ { u32 t = R32((u32)(r_eax+0x128u)); r_esp -= 4; W32(r_esp, 0x6a7714u); call_ind(t); }
    /* 006a7714: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a7718: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006a771b: imul eax, dword ptr [esp + 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006a7720: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006a7723: add eax, dword ptr [0xa94770] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa94770u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a7729: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a772b: ret 8 */ FN_RET(0x006a770c); r_esp += 12; return;
}

void f_006a7730(void) /* sub_6A7730 */
{
    FN_ENTER(0x006a7730);
    /* 006a7730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7731: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a7733: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a7735: call 0x6a70d4 */ r_esp -= 4; W32(r_esp, 0x6a773au); f_006a70d4();
    /* 006a773a: mov dword ptr [ebp], 0xb3a040 */ W32((u32)(r_ebp), 0xb3a040u);
    /* 006a7741: mov eax, ebp */ r_eax = r_ebp;
    /* 006a7743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7744: ret  */ FN_RET(0x006a7730); r_esp += 4; return;
}

void f_006a7748(void) /* sub_6A7748 */
{
    FN_ENTER(0x006a7748);
    /* 006a7748: call 0x6a86ec */ r_esp -= 4; W32(r_esp, 0x6a774du); f_006a86ec();
    /* 006a774d: call 0x6a7760 */ r_esp -= 4; W32(r_esp, 0x6a7752u); f_006a7760();
    /* 006a7752: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7754: mov dword ptr [0xa943cc], eax */ W32((u32)(0xa943ccu), r_eax);
    /* 006a7759: mov dword ptr [0xa9476c], eax */ W32((u32)(0xa9476cu), r_eax);
    /* 006a775e: ret  */ FN_RET(0x006a7748); r_esp += 4; return;
}

void f_006a7760(void) /* sub_6A7760 */
{
    FN_ENTER(0x006a7760);
    /* 006a7760: mov eax, dword ptr [0xa94770] */ r_eax = R32((u32)(0xa94770u));
    /* 006a7765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7767: je 0x6a777a */ if (fZ) goto L_006a777a;
L_006a7769:; BB(0x006a7769);
    /* 006a7769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a776a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a776fu); f_00857e98();
    /* 006a776f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7770: mov dword ptr [0xa94770], 0 */ W32((u32)(0xa94770u), 0x0u);
L_006a777a:; BB(0x006a777a);
    /* 006a777a: ret  */ FN_RET(0x006a7760); r_esp += 4; return;
}

void f_006a777c(void) /* sub_6A777C */
{
    FN_ENTER(0x006a777c);
    /* 006a777c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a777d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a777f: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 006a7782: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x6a7787u); f_006a7b64();
    /* 006a7787: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7788: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006a778a: mov ecx, esi */ r_ecx = r_esi;
    /* 006a778c: call dword ptr [edx + 0x12c] */ { u32 t = R32((u32)(r_edx+0x12cu)); r_esp -= 4; W32(r_esp, 0x6a7792u); call_ind(t); }
    /* 006a7792: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a7793: ret  */ FN_RET(0x006a777c); r_esp += 4; return;
}

void f_006a7794(void) /* sub_6A7794 */
{
    FN_ENTER(0x006a7794);
    /* 006a7794: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7798: call 0x6a7508 */ r_esp -= 4; W32(r_esp, 0x6a779du); f_006a7508();
    /* 006a779d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a779f: jne 0x6a77a9 */ if (!fZ) goto L_006a77a9;
L_006a77a1:; BB(0x006a77a1);
    /* 006a77a1: mov eax, 0xa945a0 */ r_eax = 0xa945a0u;
    /* 006a77a6: ret 4 */ FN_RET(0x006a7794); r_esp += 8; return;
L_006a77a9:; BB(0x006a77a9);
    /* 006a77a9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a77ac: jne 0x6a77b6 */ if (!fZ) goto L_006a77b6;
L_006a77ae:; BB(0x006a77ae);
    /* 006a77ae: mov eax, 0xa943e0 */ r_eax = 0xa943e0u;
    /* 006a77b3: ret 4 */ FN_RET(0x006a7794); r_esp += 8; return;
L_006a77b6:; BB(0x006a77b6);
    /* 006a77b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a77b8: ret 4 */ FN_RET(0x006a7794); r_esp += 8; return;
}

void f_006a77bc(void) /* sub_6A77BC */
{
    FN_ENTER(0x006a77bc);
    /* 006a77bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a77bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a77bf: mov edx, dword ptr [0xa9476c] */ r_edx = R32((u32)(0xa9476cu));
    /* 006a77c5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a77c8: je 0x6a77d1 */ if (fZ) goto L_006a77d1;
L_006a77ca:; BB(0x006a77ca);
    /* 006a77ca: mov eax, 1 */ r_eax = 0x1u;
    /* 006a77cf: jmp 0x6a77d3 */ goto L_006a77d3;
L_006a77d1:; BB(0x006a77d1);
    /* 006a77d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a77d3:; BB(0x006a77d3);
    /* 006a77d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a77d5: jne 0x6a77f2 */ if (!fZ) goto L_006a77f2;
L_006a77d7:; BB(0x006a77d7);
    /* 006a77d7: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a77da: mov dword ptr [0xa9476c], edx */ W32((u32)(0xa9476cu), r_edx);
    /* 006a77e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a77e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a77e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a77e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a77e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a77e7: call 0x6a6f80 */ r_esp -= 4; W32(r_esp, 0x6a77ecu); f_006a6f80();
    /* 006a77ec: mov edx, dword ptr [0xa9476c] */ r_edx = R32((u32)(0xa9476cu));
L_006a77f2:; BB(0x006a77f2);
    /* 006a77f2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a77f5: je 0x6a77fe */ if (fZ) goto L_006a77fe;
L_006a77f7:; BB(0x006a77f7);
    /* 006a77f7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a77fc: jmp 0x6a7800 */ goto L_006a7800;
L_006a77fe:; BB(0x006a77fe);
    /* 006a77fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a7800:; BB(0x006a7800);
    /* 006a7800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7802: jne 0x6a781d */ if (!fZ) goto L_006a781d;
L_006a7804:; BB(0x006a7804);
    /* 006a7804: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7806: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a7809: mov dword ptr [0xa9476c], edx */ W32((u32)(0xa9476cu), r_edx);
    /* 006a780f: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7816: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a7818: call 0x6a6f80 */ r_esp -= 4; W32(r_esp, 0x6a781du); f_006a6f80();
L_006a781d:; BB(0x006a781d);
    /* 006a781d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7823: ret 4 */ FN_RET(0x006a77bc); r_esp += 8; return;
}

void f_006a7828(void) /* _DllMain@12 */
{
    FN_ENTER(0x006a7828);
    /* 006a7828: mov eax, 1 */ r_eax = 0x1u;
    /* 006a782d: ret 0xc */ FN_RET(0x006a7828); r_esp += 16; return;
}

void f_006a782e(void)
{
    FN_ENTER(0x006a782e);
    /* 006a782e: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006a7830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7831: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7835: call 0x6a7508 */ r_esp -= 4; W32(r_esp, 0x6a783au); f_006a7508();
    /* 006a783a: mov ebp, eax */ r_ebp = r_eax;
    /* 006a783c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a783d: call 0x6a7b70 */ r_esp -= 4; W32(r_esp, 0x6a7842u); f_006a7b70();
    /* 006a7842: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7845: jne 0x6a784d */ if (!fZ) goto L_006a784d;
L_006a7847:; BB(0x006a7847);
    /* 006a7847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a784a: ret 8 */ FN_RET(0x006a782e); r_esp += 12; return;
L_006a784d:; BB(0x006a784d);
    /* 006a784d: mov edx, dword ptr [ebp*4 + 0x9cc08c] */ r_edx = R32((u32)(r_ebp*4+0x9cc08cu));
    /* 006a7854: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006a7856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7857: ret 8 */ FN_RET(0x006a782e); r_esp += 12; return;
}

void f_006a7830(void) /* sub_6A7830 */
{
    FN_ENTER(0x006a7830);
    /* 006a7830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7831: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7835: call 0x6a7508 */ r_esp -= 4; W32(r_esp, 0x6a783au); f_006a7508();
    /* 006a783a: mov ebp, eax */ r_ebp = r_eax;
    /* 006a783c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a783d: call 0x6a7b70 */ r_esp -= 4; W32(r_esp, 0x6a7842u); f_006a7b70();
    /* 006a7842: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7845: jne 0x6a784d */ if (!fZ) goto L_006a784d;
L_006a7847:; BB(0x006a7847);
    /* 006a7847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a784a: ret 8 */ FN_RET(0x006a7830); r_esp += 12; return;
L_006a784d:; BB(0x006a784d);
    /* 006a784d: mov edx, dword ptr [ebp*4 + 0x9cc08c] */ r_edx = R32((u32)(r_ebp*4+0x9cc08cu));
    /* 006a7854: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006a7856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7857: ret 8 */ FN_RET(0x006a7830); r_esp += 12; return;
}

void f_006a785c(void) /* sub_6A785C */
{
    FN_ENTER(0x006a785c);
    /* 006a785c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a785d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006a7861: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7862: call 0x6a7b70 */ r_esp -= 4; W32(r_esp, 0x6a7867u); f_006a7b70();
    /* 006a7867: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a786a: jne 0x6a7872 */ if (!fZ) goto L_006a7872;
L_006a786c:; BB(0x006a786c);
    /* 006a786c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a786e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a786f: ret 8 */ FN_RET(0x006a785c); r_esp += 12; return;
L_006a7872:; BB(0x006a7872);
    /* 006a7872: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a7876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7877: call 0x6a7b8c */ r_esp -= 4; W32(r_esp, 0x6a787cu); f_006a7b8c();
    /* 006a787c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a787d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a787f: jne 0x6a7887 */ if (!fZ) goto L_006a7887;
L_006a7881:; BB(0x006a7881);
    /* 006a7881: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7883: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7884: ret 8 */ FN_RET(0x006a785c); r_esp += 12; return;
L_006a7887:; BB(0x006a7887);
    /* 006a7887: mov edx, dword ptr [ebx*4 + 0x9cc094] */ r_edx = R32((u32)(r_ebx*4+0x9cc094u));
    /* 006a788e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a7892: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006a7895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7896: ret 8 */ FN_RET(0x006a785c); r_esp += 12; return;
}

void f_006a789c(void) /* sub_6A789C */
{
    FN_ENTER(0x006a789c);
    /* 006a789c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a78a0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a78a4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a78a8: mov eax, dword ptr [eax*4 + 0x9cc094] */ r_eax = R32((u32)(r_eax*4+0x9cc094u));
    /* 006a78af: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006a78b2: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006a78b5: ret 0xc */ FN_RET(0x006a789c); r_esp += 16; return;
}

void f_006a78b8(void) /* sub_6A78B8 */
{
    FN_ENTER(0x006a78b8);
    /* 006a78b8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a78bb: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x6a78c0u); f_006a7b64();
    /* 006a78c0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a78c3: je 0x6a78c8 */ if (fZ) goto L_006a78c8;
L_006a78c5:; BB(0x006a78c5);
    /* 006a78c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a78c7: ret  */ FN_RET(0x006a78b8); r_esp += 4; return;
L_006a78c8:; BB(0x006a78c8);
    /* 006a78c8: mov eax, 3 */ r_eax = 0x3u;
    /* 006a78cd: ret  */ FN_RET(0x006a78b8); r_esp += 4; return;
}

void f_006a78d0(void) /* sub_6A78D0 */
{
    FN_ENTER(0x006a78d0);
    /* 006a78d0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a78d3: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x6a78d8u); f_006a7b64();
    /* 006a78d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a78db: je 0x6a78e3 */ if (fZ) goto L_006a78e3;
L_006a78dd:; BB(0x006a78dd);
    /* 006a78dd: mov eax, 1 */ r_eax = 0x1u;
    /* 006a78e2: ret  */ FN_RET(0x006a78d0); r_esp += 4; return;
L_006a78e3:; BB(0x006a78e3);
    /* 006a78e3: mov eax, 4 */ r_eax = 0x4u;
    /* 006a78e8: ret  */ FN_RET(0x006a78d0); r_esp += 4; return;
}

void f_006a78ec(void) /* sub_6A78EC */
{
    FN_ENTER(0x006a78ec);
    /* 006a78ec: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a78ef: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x6a78f4u); f_006a7b64();
    /* 006a78f4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a78f7: je 0x6a78ff */ if (fZ) goto L_006a78ff;
L_006a78f9:; BB(0x006a78f9);
    /* 006a78f9: mov eax, 2 */ r_eax = 0x2u;
    /* 006a78fe: ret  */ FN_RET(0x006a78ec); r_esp += 4; return;
L_006a78ff:; BB(0x006a78ff);
    /* 006a78ff: mov eax, 5 */ r_eax = 0x5u;
    /* 006a7904: ret  */ FN_RET(0x006a78ec); r_esp += 4; return;
}

void f_006a7934(void) /* sub_6A7934 */
{
    FN_ENTER(0x006a7934);
    /* 006a7934: push 0x1c0000 */ { u32 v = 0x1c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7939: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a793eu); f_008581c5();
    /* 006a793e: mov dword ptr [0xa94770], eax */ W32((u32)(0xa94770u), r_eax);
    /* 006a7943: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7944: ret  */ FN_RET(0x006a7934); r_esp += 4; return;
}

void f_006a7948(void) /* sub_6A7948 */
{
    FN_ENTER(0x006a7948);
    /* 006a7948: mov dword ptr [0xa943cc], 0 */ W32((u32)(0xa943ccu), 0x0u);
    /* 006a7952: call 0x6a7934 */ r_esp -= 4; W32(r_esp, 0x6a7957u); f_006a7934();
    /* 006a7957: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7959: jne 0x6a7966 */ if (!fZ) goto L_006a7966;
L_006a795b:; BB(0x006a795b);
    /* 006a795b: mov dword ptr [0xa943cc], 1 */ W32((u32)(0xa943ccu), 0x1u);
    /* 006a7965: ret  */ FN_RET(0x006a7948); r_esp += 4; return;
L_006a7966:; BB(0x006a7966);
    /* 006a7966: call 0x6a8ccc */ r_esp -= 4; W32(r_esp, 0x6a796bu); f_006a8ccc();
    /* 006a796b: ret  */ FN_RET(0x006a7948); r_esp += 4; return;
}

void f_006a796c(void) /* sub_6A796C */
{
    FN_ENTER(0x006a796c);
    /* 006a796c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a796d: mov ebp, esp */ r_ebp = r_esp;
    /* 006a796f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a7971: push 0x8eb980 */ { u32 v = 0x8eb980u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7976: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a797c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a797d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a7984: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a7987: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a798a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a798d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a7990: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a7993: mov eax, dword ptr [0xa94790] */ r_eax = R32((u32)(0xa94790u));
    /* 006a7998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a799a: je 0x6a79ac */ if (fZ) goto L_006a79ac;
L_006a799c:; BB(0x006a799c);
    /* 006a799c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a799e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a79a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a79a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006a79aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a79ab: ret  */ FN_RET(0x006a796c); r_esp += 4; return;
L_006a79ac:; BB(0x006a79ac);
    /* 006a79ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006a79b3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006a79b5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a79bau); f_008581c5();
    /* 006a79ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a79bb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006a79be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a79c0: je 0x6a7a11 */ if (fZ) goto L_006a7a11;
L_006a79c2:; BB(0x006a79c2);
    /* 006a79c2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006a79c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a79d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a79d3: call 0x6c1434 */ r_esp -= 4; W32(r_esp, 0x6a79d8u); f_006c1434();
    /* 006a79d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a79db: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006a79e2:; BB(0x006a79e2);
    /* 006a79e2: mov dword ptr [0xa94790], ecx */ W32((u32)(0xa94790u), r_ecx);
    /* 006a79e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a79ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a79f1: je 0x6a799c */ if (fZ) goto L_006a799c;
L_006a79f3:; BB(0x006a79f3);
    /* 006a79f3: push dword ptr [0x9cc0a0] */ { u32 v = R32((u32)(0x9cc0a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a79f9: call 0x6c144c */ r_esp -= 4; W32(r_esp, 0x6a79feu); f_006c144c();
    /* 006a79fe: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7a03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a7a06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a7a0d: mov esp, ebp */ r_esp = r_ebp;
    /* 006a7a0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7a10: ret  */ FN_RET(0x006a796c); r_esp += 4; return;
L_006a7a11:; BB(0x006a7a11);
    /* 006a7a11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a7a13: jmp 0x6a79e2 */ goto L_006a79e2;
}

void f_006a7a18(void) /* sub_6A7A18 */
{
    FN_ENTER(0x006a7a18);
    /* 006a7a18: mov ecx, dword ptr [0xa94790] */ r_ecx = R32((u32)(0xa94790u));
    /* 006a7a1e: call 0x6c15e0 */ r_esp -= 4; W32(r_esp, 0x6a7a23u); f_006c15e0();
    /* 006a7a23: mov ecx, dword ptr [0xa94790] */ r_ecx = R32((u32)(0xa94790u));
    /* 006a7a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7a2b: je 0x6a7a33 */ if (fZ) goto L_006a7a33;
L_006a7a2d:; BB(0x006a7a2d);
    /* 006a7a2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7a2f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a7a31: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6a7a33u); call_ind(t); }
L_006a7a33:; BB(0x006a7a33);
    /* 006a7a33: mov dword ptr [0xa94790], 0 */ W32((u32)(0xa94790u), 0x0u);
    /* 006a7a3d: ret  */ FN_RET(0x006a7a18); r_esp += 4; return;
}

void f_006a7a40(void) /* sub_6A7A40 */
{
    FN_ENTER(0x006a7a40);
    /* 006a7a40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7a41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7a42: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006a7a46: mov ecx, dword ptr [0xa9478c] */ r_ecx = R32((u32)(0xa9478cu));
    /* 006a7a4c: call 0x6c1650 */ r_esp -= 4; W32(r_esp, 0x6a7a51u); f_006c1650();
    /* 006a7a51: mov edx, dword ptr [0xa9478c] */ r_edx = R32((u32)(0xa9478cu));
    /* 006a7a57: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a7a59: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a7a5d: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006a7a60: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a7a62: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a7a64: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a7a66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a7a68: call 0x6c165c */ r_esp -= 4; W32(r_esp, 0x6a7a6du); f_006c165c();
    /* 006a7a6d: mov edx, dword ptr [0xa94784] */ r_edx = R32((u32)(0xa94784u));
    /* 006a7a73: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a7a75: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006a7a77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a7a79: call 0x6c1698 */ r_esp -= 4; W32(r_esp, 0x6a7a7eu); f_006c1698();
    /* 006a7a7e: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006a7a81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a7a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a7a83: ret  */ FN_RET(0x006a7a40); r_esp += 4; return;
}

void f_006a7a84(void) /* sub_6A7A84 */
{
    FN_ENTER(0x006a7a84);
    /* 006a7a84: push dword ptr [0xa94780] */ { u32 v = R32((u32)(0xa94780u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7a8a: mov eax, dword ptr [0xa94790] */ r_eax = R32((u32)(0xa94790u));
    /* 006a7a8f: push dword ptr [0xa94784] */ { u32 v = R32((u32)(0xa94784u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7a95: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7a9a: call 0x77a3e8 */ r_esp -= 4; W32(r_esp, 0x6a7a9fu); f_0077a3e8();
    /* 006a7a9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a7aa2: ret  */ FN_RET(0x006a7a84); r_esp += 4; return;
}

void f_006a7aa4(void) /* sub_6A7AA4 */
{
    FN_ENTER(0x006a7aa4);
    /* 006a7aa4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7aa8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7aac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7ab0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7ab2: call 0x77a45c */ r_esp -= 4; W32(r_esp, 0x6a7ab7u); f_0077a45c();
    /* 006a7ab7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a7aba: ret  */ FN_RET(0x006a7aa4); r_esp += 4; return;
}

void f_006a7abc(void) /* sub_6A7ABC */
{
    FN_ENTER(0x006a7abc);
    /* 006a7abc: mov ecx, dword ptr [0xa94790] */ r_ecx = R32((u32)(0xa94790u));
    /* 006a7ac2: call 0x6c15f4 */ r_esp -= 4; W32(r_esp, 0x6a7ac7u); f_006c15f4();
    /* 006a7ac7: cmp eax, 0x258 */ {  u32 a = r_eax; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a7acc: jl 0x6a7ad1 */ if ((fS!=fO)) goto L_006a7ad1;
L_006a7ace:; BB(0x006a7ace);
    /* 006a7ace: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7ad0: ret  */ FN_RET(0x006a7abc); r_esp += 4; return;
L_006a7ad1:; BB(0x006a7ad1);
    /* 006a7ad1: push dword ptr [0xa94788] */ { u32 v = R32((u32)(0xa94788u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7ad7: mov eax, dword ptr [0xa94790] */ r_eax = R32((u32)(0xa94790u));
    /* 006a7adc: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7adf: push dword ptr [0xa9478c] */ { u32 v = R32((u32)(0xa9478cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7ae5: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6a7aeau); f_0086b6b8();
    /* 006a7aea: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7aef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a7af2: ret  */ FN_RET(0x006a7abc); r_esp += 4; return;
}

void f_006a7af4(void) /* sub_6A7AF4 */
{
    FN_ENTER(0x006a7af4);
    /* 006a7af4: mov eax, dword ptr [0xa9478c] */ r_eax = R32((u32)(0xa9478cu));
    /* 006a7af9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7afb: je 0x6a7afe */ if (fZ) goto L_006a7afe;
L_006a7afd:; BB(0x006a7afd);
    /* 006a7afd: ret  */ FN_RET(0x006a7af4); r_esp += 4; return;
L_006a7afe:; BB(0x006a7afe);
    /* 006a7afe: push 0x12e0 */ { u32 v = 0x12e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7b03: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a7b08u); f_008581c5();
    /* 006a7b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7b09: mov dword ptr [0xa9478c], eax */ W32((u32)(0xa9478cu), r_eax);
    /* 006a7b0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7b10: je 0x6a7afd */ if (fZ) goto L_006a7afd;
L_006a7b12:; BB(0x006a7b12);
    /* 006a7b12: mov dword ptr [0xa94788], 0x12e0 */ W32((u32)(0xa94788u), 0x12e0u);
    /* 006a7b1c: ret  */ FN_RET(0x006a7af4); r_esp += 4; return;
}

void f_006a7b20(void) /* sub_6A7B20 */
{
    FN_ENTER(0x006a7b20);
    /* 006a7b20: mov eax, dword ptr [0xa9478c] */ r_eax = R32((u32)(0xa9478cu));
    /* 006a7b25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7b27: je 0x6a7b3a */ if (fZ) goto L_006a7b3a;
L_006a7b29:; BB(0x006a7b29);
    /* 006a7b29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7b2a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a7b2fu); f_00857e98();
    /* 006a7b2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7b30: mov dword ptr [0xa9478c], 0 */ W32((u32)(0xa9478cu), 0x0u);
L_006a7b3a:; BB(0x006a7b3a);
    /* 006a7b3a: ret  */ FN_RET(0x006a7b20); r_esp += 4; return;
}

void f_006a7b3c(void) /* sub_6A7B3C */
{
    FN_ENTER(0x006a7b3c);
    /* 006a7b3c: push dword ptr [0x9cc0a0] */ { u32 v = R32((u32)(0x9cc0a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a7b42: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x6a7b47u); f_005bbe24();
    /* 006a7b47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7b48: lea edx, [eax + 0x1f] */ r_edx = (u32)(r_eax+0x1fu);
    /* 006a7b4b: and edx, 0xffffffe0 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a7b4e: mov dword ptr [0xa94780], edx */ W32((u32)(0xa94780u), r_edx);
    /* 006a7b54: call 0x83dd24 */ r_esp -= 4; W32(r_esp, 0x6a7b59u); f_0083dd24();
    /* 006a7b59: mov dword ptr [0xa94784], eax */ W32((u32)(0xa94784u), r_eax);
    /* 006a7b5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a7b61: ret  */ FN_RET(0x006a7b3c); r_esp += 4; return;
}

void f_006a7b64(void) /* sub_6A7B64 */
{
    FN_ENTER(0x006a7b64);
    /* 006a7b64: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a7b66: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7b69: jae 0x6a7b6c */ if (!fC) goto L_006a7b6c;
L_006a7b6b:; BB(0x006a7b6b);
    /* 006a7b6b: ret  */ FN_RET(0x006a7b64); r_esp += 4; return;
L_006a7b6c:; BB(0x006a7b6c);
    /* 006a7b6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7b6e: ret  */ FN_RET(0x006a7b64); r_esp += 4; return;
}

void f_006a7b70(void) /* sub_6A7B70 */
{
    FN_ENTER(0x006a7b70);
    /* 006a7b70: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a7b74: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7b77: mov eax, 0 */ r_eax = 0x0u;
    /* 006a7b7c: setb al */ r_eax = (r_eax & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 006a7b7f: ret  */ FN_RET(0x006a7b70); r_esp += 4; return;
}

void f_006a7b80(void) /* sub_6A7B80 */
{
    FN_ENTER(0x006a7b80);
    /* 006a7b80: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006a7b83: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7b86: jae 0x6a7b89 */ if (!fC) goto L_006a7b89;
L_006a7b88:; BB(0x006a7b88);
    /* 006a7b88: ret  */ FN_RET(0x006a7b80); r_esp += 4; return;
L_006a7b89:; BB(0x006a7b89);
    /* 006a7b89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7b8b: ret  */ FN_RET(0x006a7b80); r_esp += 4; return;
}

void f_006a7b8c(void) /* sub_6A7B8C */
{
    FN_ENTER(0x006a7b8c);
    /* 006a7b8c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a7b90: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7b93: mov eax, 0 */ r_eax = 0x0u;
    /* 006a7b98: setb al */ r_eax = (r_eax & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 006a7b9b: ret  */ FN_RET(0x006a7b8c); r_esp += 4; return;
}

void f_006a7b9c(void) /* sub_6A7B9C */
{
    FN_ENTER(0x006a7b9c);
    /* 006a7b9c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a7ba0: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7ba2: jne 0x6a7bb5 */ if (!fZ) goto L_006a7bb5;
L_006a7ba4:; BB(0x006a7ba4);
    /* 006a7ba4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a7ba8: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7bab: jne 0x6a7bb5 */ if (!fZ) goto L_006a7bb5;
L_006a7bad:; BB(0x006a7bad);
    /* 006a7bad: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7bb2: ret 8 */ FN_RET(0x006a7b9c); r_esp += 12; return;
L_006a7bb5:; BB(0x006a7bb5);
    /* 006a7bb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7bb7: ret 8 */ FN_RET(0x006a7b9c); r_esp += 12; return;
}

void f_006a7bbc(void) /* sub_6A7BBC */
{
    FN_ENTER(0x006a7bbc);
    /* 006a7bbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7bbd: mov edi, ecx */ r_edi = r_ecx;
    /* 006a7bbf: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006a7bc4: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006a7bc7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a7bcc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 006a7bcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a7bd1: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 006a7bd5: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 006a7bd8: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006a7bdb: lea ecx, [edi + 0x10] */ r_ecx = (u32)(r_edi+0x10u);
    /* 006a7bde: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x6a7be3u); f_007c12f8();
    /* 006a7be3: mov eax, edi */ r_eax = r_edi;
    /* 006a7be5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a7be6: ret  */ FN_RET(0x006a7bbc); r_esp += 4; return;
}

void f_006a7be8(void) /* sub_6A7BE8 */
{
    FN_ENTER(0x006a7be8);
    /* 006a7be8: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 006a7bed: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 006a7bf2: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 006a7bf5: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 006a7bf9: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006a7bfe: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006a7c01: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006a7c04: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006a7c07: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a7c09: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a7c0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a7c0d: lea eax, [eax + eax + 0xaae75c] */ r_eax = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006a7c14: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006a7c17: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a7c1a: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x6a7c1fu); f_007c12f8();
    /* 006a7c1f: ret 8 */ FN_RET(0x006a7be8); r_esp += 12; return;
}

void f_006a7c24(void) /* sub_6A7C24 */
{
    FN_ENTER(0x006a7c24);
    /* 006a7c24: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006a7c27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7c29: je 0x6a7c52 */ if (fZ) goto L_006a7c52;
L_006a7c2b:; BB(0x006a7c2b);
    /* 006a7c2b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006a7c2e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a7c31: je 0x6a7c52 */ if (fZ) goto L_006a7c52;
L_006a7c33:; BB(0x006a7c33);
    /* 006a7c33: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a7c37: test dword ptr [ecx + 8], edx */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7c3a: je 0x6a7c52 */ if (fZ) goto L_006a7c52;
L_006a7c3c:; BB(0x006a7c3c);
    /* 006a7c3c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a7c40: test dword ptr [eax + 8], edx */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c43: je 0x6a7c4d */ if (fZ) goto L_006a7c4d;
L_006a7c45:; BB(0x006a7c45);
    /* 006a7c45: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7c4a: ret 4 */ FN_RET(0x006a7c24); r_esp += 8; return;
L_006a7c4d:; BB(0x006a7c4d);
    /* 006a7c4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c4f: ret 4 */ FN_RET(0x006a7c24); r_esp += 8; return;
L_006a7c52:; BB(0x006a7c52);
    /* 006a7c52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c54: ret 4 */ FN_RET(0x006a7c24); r_esp += 8; return;
}

void f_006a7c58(void) /* sub_6A7C58 */
{
    FN_ENTER(0x006a7c58);
    /* 006a7c58: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006a7c5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7c5d: je 0x6a7c85 */ if (fZ) goto L_006a7c85;
L_006a7c5f:; BB(0x006a7c5f);
    /* 006a7c5f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006a7c62: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a7c65: je 0x6a7c85 */ if (fZ) goto L_006a7c85;
L_006a7c67:; BB(0x006a7c67);
    /* 006a7c67: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a7c6b: test dword ptr [ecx + 8], edx */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7c6e: je 0x6a7c85 */ if (fZ) goto L_006a7c85;
L_006a7c70:; BB(0x006a7c70);
    /* 006a7c70: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a7c74: test dword ptr [eax], edx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c76: je 0x6a7c80 */ if (fZ) goto L_006a7c80;
L_006a7c78:; BB(0x006a7c78);
    /* 006a7c78: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7c7d: ret 4 */ FN_RET(0x006a7c58); r_esp += 8; return;
L_006a7c80:; BB(0x006a7c80);
    /* 006a7c80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c82: ret 4 */ FN_RET(0x006a7c58); r_esp += 8; return;
L_006a7c85:; BB(0x006a7c85);
    /* 006a7c85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c87: ret 4 */ FN_RET(0x006a7c58); r_esp += 8; return;
}

void f_006a7c8c(void) /* sub_6A7C8C */
{
    FN_ENTER(0x006a7c8c);
    /* 006a7c8c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006a7c8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c91: je 0x6a7ca5 */ if (fZ) goto L_006a7ca5;
L_006a7c93:; BB(0x006a7c93);
    /* 006a7c93: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006a7c96: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7c98: je 0x6a7c9e */ if (fZ) goto L_006a7c9e;
L_006a7c9a:; BB(0x006a7c9a);
    /* 006a7c9a: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 006a7c9d: ret  */ FN_RET(0x006a7c8c); r_esp += 4; return;
L_006a7c9e:; BB(0x006a7c9e);
    /* 006a7c9e: fld dword ptr [0x966640] */ FPUSH(R_F32((u32)(0x966640u)));
    /* 006a7ca4: ret  */ FN_RET(0x006a7c8c); r_esp += 4; return;
L_006a7ca5:; BB(0x006a7ca5);
    /* 006a7ca5: fld dword ptr [0x966640] */ FPUSH(R_F32((u32)(0x966640u)));
    /* 006a7cab: ret  */ FN_RET(0x006a7c8c); r_esp += 4; return;
}

void f_006a7cac(void) /* sub_6A7CAC */
{
    FN_ENTER(0x006a7cac);
    /* 006a7cac: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006a7caf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7cb1: je 0x6a7cbe */ if (fZ) goto L_006a7cbe;
L_006a7cb3:; BB(0x006a7cb3);
    /* 006a7cb3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006a7cb6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7cb8: je 0x6a7cbe */ if (fZ) goto L_006a7cbe;
L_006a7cba:; BB(0x006a7cba);
    /* 006a7cba: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006a7cbd: ret  */ FN_RET(0x006a7cac); r_esp += 4; return;
L_006a7cbe:; BB(0x006a7cbe);
    /* 006a7cbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7cc0: ret  */ FN_RET(0x006a7cac); r_esp += 4; return;
}

void f_006a7cc4(void) /* sub_6A7CC4 */
{
    FN_ENTER(0x006a7cc4);
    /* 006a7cc4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006a7cc9: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7cce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7ccf: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x6a7cd4u); f_007be19c();
    /* 006a7cd4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a7cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7cd9: je 0x6a7ce3 */ if (fZ) goto L_006a7ce3;
L_006a7cdb:; BB(0x006a7cdb);
    /* 006a7cdb: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 006a7ce0: ret 4 */ FN_RET(0x006a7cc4); r_esp += 8; return;
L_006a7ce3:; BB(0x006a7ce3);
    /* 006a7ce3: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 006a7ce8: ret 4 */ FN_RET(0x006a7cc4); r_esp += 8; return;
}

void f_006a7cec(void) /* sub_6A7CEC */
{
    FN_ENTER(0x006a7cec);
    /* 006a7cec: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006a7cf1: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7cf7: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x6a7cfcu); f_007be19c();
    /* 006a7cfc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a7cff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7d01: je 0x6a7d0b */ if (fZ) goto L_006a7d0b;
L_006a7d03:; BB(0x006a7d03);
    /* 006a7d03: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 006a7d08: ret 4 */ FN_RET(0x006a7cec); r_esp += 8; return;
L_006a7d0b:; BB(0x006a7d0b);
    /* 006a7d0b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 006a7d10: ret 4 */ FN_RET(0x006a7cec); r_esp += 8; return;
}

void f_006a7d14(void) /* sub_6A7D14 */
{
    FN_ENTER(0x006a7d14);
    /* 006a7d14: mov dword ptr [0xa94794], 0x3f800000 */ W32((u32)(0xa94794u), 0x3f800000u);
    /* 006a7d1e: mov dword ptr [0xa94798], 0x41000000 */ W32((u32)(0xa94798u), 0x41000000u);
    /* 006a7d28: mov dword ptr [0xa9479c], 0x3fc00000 */ W32((u32)(0xa9479cu), 0x3fc00000u);
    /* 006a7d32: ret  */ FN_RET(0x006a7d14); r_esp += 4; return;
}

void f_006a7d34(void) /* sub_6A7D34 */
{
    FN_ENTER(0x006a7d34);
    /* 006a7d34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7d35: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a7d37: lea edx, [ebp + 0x14] */ r_edx = (u32)(r_ebp+0x14u);
    /* 006a7d3a: mov eax, 0xa */ r_eax = 0xau;
L_006a7d3f:; BB(0x006a7d3f);
    /* 006a7d3f: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006a7d44: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 006a7d47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a7d49: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 006a7d4d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a7d50: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a7d53: jne 0x6a7d3f */ if (!fZ) goto L_006a7d3f;
L_006a7d55:; BB(0x006a7d55);
    /* 006a7d55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a7d57: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 006a7d5a: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 006a7d5d: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 006a7d60: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a7d62: call 0x6a82bc */ r_esp -= 4; W32(r_esp, 0x6a7d67u); f_006a82bc();
    /* 006a7d67: mov eax, ebp */ r_eax = r_ebp;
    /* 006a7d69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7d6a: ret  */ FN_RET(0x006a7d34); r_esp += 4; return;
}

void f_006a7d6c(void) /* sub_6A7D6C */
{
    FN_ENTER(0x006a7d6c);
    /* 006a7d6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7d6d: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 006a7d70: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a7d73: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 006a7d76: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 006a7d79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a7d7b: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 006a7d7e: mov byte ptr [esp], 0x3b */ W8((u32)(r_esp), 0x3bu);
    /* 006a7d82: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 006a7d85: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006a7d8a: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006a7d8f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a7d92: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a7d97u); f_008003e0();
    /* 006a7d97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7d98: ret  */ FN_RET(0x006a7d6c); r_esp += 4; return;
}

void f_006a7d9c(void)
{
    FN_ENTER(0x006a7d9c);
    /* 006a7d9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7d9d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a7da1: mov byte ptr [esp], 0x3b */ W8((u32)(r_esp), 0x3bu);
    /* 006a7da5: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006a7daa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a7dad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a7daf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006a7db2: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x6a7db7u); f_006a9e70();
    /* 006a7db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7db9: je 0x6a7deb */ if (fZ) goto L_006a7deb;
L_006a7dbb:; BB(0x006a7dbb);
    /* 006a7dbb: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 006a7dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7dc1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a7dc6u); f_0068d5a8();
    /* 006a7dc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7dc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7dc9: je 0x6a7deb */ if (fZ) goto L_006a7deb;
L_006a7dcb:; BB(0x006a7dcb);
    /* 006a7dcb: mov edx, dword ptr [eax + 0x524] */ r_edx = R32((u32)(r_eax+0x524u));
    /* 006a7dd1: and edx, 0xffffffc1 */ {  u32 a = r_edx; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a7dd4: mov dword ptr [eax + 0x524], edx */ W32((u32)(r_eax+0x524u), r_edx);
    /* 006a7dda: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006a7de1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7de4: jne 0x6a7deb */ if (!fZ) goto L_006a7deb;
L_006a7de6:; BB(0x006a7de6);
    /* 006a7de6: call 0x6a2834 */ r_esp -= 4; W32(r_esp, 0x6a7debu); f_006a2834();
L_006a7deb:; BB(0x006a7deb);
    /* 006a7deb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7dec: ret  */ FN_RET(0x006a7d9c); r_esp += 4; return;
}

void f_006a7df0(void) /* sub_6A7DF0 */
{
    FN_ENTER(0x006a7df0);
    /* 006a7df0: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 006a7df7: mov edx, 6 */ r_edx = 0x6u;
    /* 006a7dfc: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006a7e00: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006a7e05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a7e07: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 006a7e0b: mov word ptr [ecx + 0x14], dx */ W16((u32)(r_ecx+0x14u), (u16)r_edx);
    /* 006a7e0f: mov word ptr [ecx + 0x16], ax */ W16((u32)(r_ecx+0x16u), (u16)r_eax);
    /* 006a7e13: mov word ptr [ecx + 0x18], dx */ W16((u32)(r_ecx+0x18u), (u16)r_edx);
    /* 006a7e17: mov word ptr [ecx + 0x1a], ax */ W16((u32)(r_ecx+0x1au), (u16)r_eax);
    /* 006a7e1b: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 006a7e1f: mov word ptr [ecx + 0x1e], ax */ W16((u32)(r_ecx+0x1eu), (u16)r_eax);
    /* 006a7e23: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 006a7e27: mov word ptr [ecx + 0x22], ax */ W16((u32)(r_ecx+0x22u), (u16)r_eax);
    /* 006a7e2b: mov word ptr [ecx + 0x24], dx */ W16((u32)(r_ecx+0x24u), (u16)r_edx);
    /* 006a7e2f: mov word ptr [ecx + 0x26], ax */ W16((u32)(r_ecx+0x26u), (u16)r_eax);
    /* 006a7e33: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 006a7e37: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 006a7e3b: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 006a7e3f: mov word ptr [ecx + 0x2e], ax */ W16((u32)(r_ecx+0x2eu), (u16)r_eax);
    /* 006a7e43: mov word ptr [ecx + 0x30], dx */ W16((u32)(r_ecx+0x30u), (u16)r_edx);
    /* 006a7e47: mov word ptr [ecx + 0x32], ax */ W16((u32)(r_ecx+0x32u), (u16)r_eax);
    /* 006a7e4b: mov word ptr [ecx + 0x34], dx */ W16((u32)(r_ecx+0x34u), (u16)r_edx);
    /* 006a7e4f: mov word ptr [ecx + 0x36], ax */ W16((u32)(r_ecx+0x36u), (u16)r_eax);
    /* 006a7e53: mov word ptr [ecx + 0x38], dx */ W16((u32)(r_ecx+0x38u), (u16)r_edx);
    /* 006a7e57: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 006a7e5a: mov word ptr [ecx + 0x3a], ax */ W16((u32)(r_ecx+0x3au), (u16)r_eax);
    /* 006a7e5e: and edx, 0xffffffc1 */ {  u32 a = r_edx; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7e61: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006a7e64: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 006a7e67: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 006a7e6a: ret  */ FN_RET(0x006a7df0); r_esp += 4; return;
}

void f_006a7e6c(void) /* sub_6A7E6C */
{
    FN_ENTER(0x006a7e6c);
    /* 006a7e6c: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006a7e6f: fcomp dword ptr [0x966684] */ fx_compare(ST(0), R_F32((u32)(0x966684u))); FPOP();
    /* 006a7e75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7e77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7e78: jb 0x6a7e83 */ if (fC) goto L_006a7e83;
L_006a7e7a:; BB(0x006a7e7a);
    /* 006a7e7a: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 006a7e7d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7e80: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
L_006a7e83:; BB(0x006a7e83);
    /* 006a7e83: ret  */ FN_RET(0x006a7e6c); r_esp += 4; return;
}

void f_006a7e84(void) /* sub_6A7E84 */
{
    FN_ENTER(0x006a7e84);
    /* 006a7e84: fld dword ptr [0x966680] */ FPUSH(R_F32((u32)(0x966680u)));
    /* 006a7e8a: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006a7e8d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a7e8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7e91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7e92: jae 0x6a7ebd */ if (!fC) goto L_006a7ebd;
L_006a7e94:; BB(0x006a7e94);
    /* 006a7e94: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006a7e98: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006a7e9a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a7e9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a7e9e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7ea0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7ea2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7ea3: jae 0x6a7eab */ if (!fC) goto L_006a7eab;
L_006a7ea5:; BB(0x006a7ea5);
    /* 006a7ea5: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006a7ea8: ret 4 */ FN_RET(0x006a7e84); r_esp += 8; return;
L_006a7eab:; BB(0x006a7eab);
    /* 006a7eab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7ead: mov eax, 0x42c80000 */ r_eax = 0x42c80000u;
    /* 006a7eb2: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 006a7eb5: call 0x6a7ec4 */ r_esp -= 4; W32(r_esp, 0x6a7ebau); f_006a7ec4();
    /* 006a7eba: ret 4 */ FN_RET(0x006a7e84); r_esp += 8; return;
L_006a7ebd:; BB(0x006a7ebd);
    /* 006a7ebd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006a7ebf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7ec1: ret 4 */ FN_RET(0x006a7e84); r_esp += 8; return;
}

void f_006a7ec4(void) /* sub_6A7EC4 */
{
    FN_ENTER(0x006a7ec4);
    /* 006a7ec4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7ec5: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 006a7ec8: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006a7ecd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a7ed0: mov byte ptr [esp], 0x39 */ W8((u32)(r_esp), 0x39u);
    /* 006a7ed4: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006a7ed9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a7edeu); f_008003e0();
    /* 006a7ede: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7edf: ret  */ FN_RET(0x006a7ec4); r_esp += 4; return;
}

void f_006a7ee0(void) /* sub_6A7EE0 */
{
    FN_ENTER(0x006a7ee0);
    /* 006a7ee0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006a7ee4: fld dword ptr [0x96667c] */ FPUSH(R_F32((u32)(0x96667cu)));
    /* 006a7eea: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006a7eed: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a7eef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7ef1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7ef2: jae 0x6a7f14 */ if (!fC) goto L_006a7f14;
L_006a7ef4:; BB(0x006a7ef4);
    /* 006a7ef4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006a7ef6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006a7ef8: fcom dword ptr [0x966674] */ fx_compare(ST(0), R_F32((u32)(0x966674u))); 
    /* 006a7efe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7f00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7f01: jae 0x6a7f0f */ if (!fC) goto L_006a7f0f;
L_006a7f03:; BB(0x006a7f03);
    /* 006a7f03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7f05: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a7f07: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006a7f0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7f0c: ret 4 */ FN_RET(0x006a7ee0); r_esp += 8; return;
L_006a7f0f:; BB(0x006a7f0f);
    /* 006a7f0f: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006a7f12: jmp 0x6a7f3d */ goto L_006a7f3d;
L_006a7f14:; BB(0x006a7f14);
    /* 006a7f14: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 006a7f16: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006a7f18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7f1a: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 006a7f1d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7f1e: ja 0x6a7f36 */ if ((!fC&&!fZ)) goto L_006a7f36;
L_006a7f20:; BB(0x006a7f20);
    /* 006a7f20: fcomp dword ptr [0x966678] */ fx_compare(ST(0), R_F32((u32)(0x966678u))); FPOP();
    /* 006a7f26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7f28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7f29: jae 0x6a7f3d */ if (!fC) goto L_006a7f3d;
L_006a7f2b:; BB(0x006a7f2b);
    /* 006a7f2b: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 006a7f2e: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7f31: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 006a7f34: jmp 0x6a7f3d */ goto L_006a7f3d;
L_006a7f36:; BB(0x006a7f36);
    /* 006a7f36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7f38: call 0x6a7f48 */ r_esp -= 4; W32(r_esp, 0x6a7f3du); f_006a7f48();
L_006a7f3d:; BB(0x006a7f3d);
    /* 006a7f3d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a7f42: ret 4 */ FN_RET(0x006a7ee0); r_esp += 8; return;
}

void f_006a7f48(void) /* sub_6A7F48 */
{
    FN_ENTER(0x006a7f48);
    /* 006a7f48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7f49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7f4a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a7f4c: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 006a7f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7f51: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a7f56u); f_0068d5a8();
    /* 006a7f56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7f57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7f59: je 0x6a7f6a */ if (fZ) goto L_006a7f6a;
L_006a7f5b:; BB(0x006a7f5b);
    /* 006a7f5b: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006a7f62: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a7f65: jne 0x6a7f6a */ if (!fZ) goto L_006a7f6a;
L_006a7f67:; BB(0x006a7f67);
    /* 006a7f67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7f68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7f69: ret  */ FN_RET(0x006a7f48); r_esp += 4; return;
L_006a7f6a:; BB(0x006a7f6a);
    /* 006a7f6a: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 006a7f6e: mov byte ptr [esp], 0x3a */ W8((u32)(r_esp), 0x3au);
    /* 006a7f72: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006a7f77: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006a7f7c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a7f7f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a7f84u); f_008003e0();
    /* 006a7f84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7f85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a7f86: ret  */ FN_RET(0x006a7f48); r_esp += 4; return;
}

void f_006a7f88(void) /* sub_6A7F88 */
{
    FN_ENTER(0x006a7f88);
    /* 006a7f88: fld dword ptr [0x966670] */ FPUSH(R_F32((u32)(0x966670u)));
    /* 006a7f8e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006a7f91: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a7f93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7f95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7f96: jae 0x6a7fb4 */ if (!fC) goto L_006a7fb4;
L_006a7f98:; BB(0x006a7f98);
    /* 006a7f98: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006a7f9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006a7f9e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a7fa0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a7fa2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7fa4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7fa6: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006a7fa9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7faa: jb 0x6a7fe9 */ if (fC) goto L_006a7fe9;
L_006a7fac:; BB(0x006a7fac);
    /* 006a7fac: call 0x6a7ec4 */ r_esp -= 4; W32(r_esp, 0x6a7fb1u); f_006a7ec4();
    /* 006a7fb1: ret 4 */ FN_RET(0x006a7f88); r_esp += 8; return;
L_006a7fb4:; BB(0x006a7fb4);
    /* 006a7fb4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006a7fb6: fld dword ptr [0x96666c] */ FPUSH(R_F32((u32)(0x96666cu)));
    /* 006a7fbc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a7fbe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7fc0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7fc1: jbe 0x6a7fec */ if ((fC||fZ)) goto L_006a7fec;
L_006a7fc3:; BB(0x006a7fc3);
    /* 006a7fc3: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006a7fc7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006a7fc9: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006a7fcb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a7fcd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a7fce: jbe 0x6a7fd6 */ if ((fC||fZ)) goto L_006a7fd6;
L_006a7fd0:; BB(0x006a7fd0);
    /* 006a7fd0: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006a7fd3: ret 4 */ FN_RET(0x006a7f88); r_esp += 8; return;
L_006a7fd6:; BB(0x006a7fd6);
    /* 006a7fd6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7fd8: mov eax, 0x43c80000 */ r_eax = 0x43c80000u;
    /* 006a7fdd: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 006a7fe0: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 006a7fe3: or edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a7fe6: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
L_006a7fe9:; BB(0x006a7fe9);
    /* 006a7fe9: ret 4 */ FN_RET(0x006a7f88); r_esp += 8; return;
L_006a7fec:; BB(0x006a7fec);
    /* 006a7fec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7fee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a7ff0: ret 4 */ FN_RET(0x006a7f88); r_esp += 8; return;
}

void f_006a7ff4(void) /* sub_6A7FF4 */
{
    FN_ENTER(0x006a7ff4);
    /* 006a7ff4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a7ff5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7ff6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a7ffa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a7ffd: mov byte ptr [esp], 0x39 */ W8((u32)(r_esp), 0x39u);
    /* 006a8001: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006a8006: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a8008: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006a800b: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x6a8010u); f_006a9e70();
    /* 006a8010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8012: je 0x6a8059 */ if (fZ) goto L_006a8059;
L_006a8014:; BB(0x006a8014);
    /* 006a8014: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 006a8019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a801a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a801fu); f_0068d5a8();
    /* 006a801f: mov ebp, eax */ r_ebp = r_eax;
    /* 006a8021: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a8024: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8026: je 0x6a8059 */ if (fZ) goto L_006a8059;
L_006a8028:; BB(0x006a8028);
    /* 006a8028: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6a802du); f_00807d60();
    /* 006a802d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a802f: je 0x6a8059 */ if (fZ) goto L_006a8059;
L_006a8031:; BB(0x006a8031);
    /* 006a8031: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 006a8037: cmp edx, dword ptr [ebp + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a803d: jne 0x6a8059 */ if (!fZ) goto L_006a8059;
L_006a803f:; BB(0x006a803f);
    /* 006a803f: mov edx, dword ptr [ebp + 0x524] */ r_edx = R32((u32)(r_ebp+0x524u));
    /* 006a8045: lea ecx, [ebp + 0x4e4] */ r_ecx = (u32)(r_ebp+0x4e4u);
    /* 006a804b: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a804e: mov dword ptr [ebp + 0x524], edx */ W32((u32)(r_ebp+0x524u), r_edx);
    /* 006a8054: call 0x6a805c */ r_esp -= 4; W32(r_esp, 0x6a8059u); f_006a805c();
L_006a8059:; BB(0x006a8059);
    /* 006a8059: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a805a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a805b: ret  */ FN_RET(0x006a7ff4); r_esp += 4; return;
}

