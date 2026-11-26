#include "protos.h"

void f_0082600c(void) /* sub_82600C */
{
    FN_ENTER(0x0082600c);
    /* 0082600c: mov eax, dword ptr [0xaca8f4] */ r_eax = R32((u32)(0xaca8f4u));
    /* 00826011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826013: je 0x826018 */ if (fZ) goto L_00826018;
L_00826015:; BB(0x00826015);
    /* 00826015: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826017: ret  */ FN_RET(0x0082600c); r_esp += 4; return;
L_00826018:; BB(0x00826018);
    /* 00826018: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082601c: mov dword ptr [0xaca8f4], edx */ W32((u32)(0xaca8f4u), r_edx);
    /* 00826022: mov eax, 1 */ r_eax = 0x1u;
    /* 00826027: ret  */ FN_RET(0x0082600c); r_esp += 4; return;
}

void f_00826028(void) /* sub_826028 */
{
    FN_ENTER(0x00826028);
    /* 00826028: mov eax, dword ptr [0xaca8f4] */ r_eax = R32((u32)(0xaca8f4u));
    /* 0082602d: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00826031: je 0x826036 */ if (fZ) goto L_00826036;
L_00826033:; BB(0x00826033);
    /* 00826033: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826035: ret  */ FN_RET(0x00826028); r_esp += 4; return;
L_00826036:; BB(0x00826036);
    /* 00826036: mov dword ptr [0xaca8f4], 0 */ W32((u32)(0xaca8f4u), 0x0u);
    /* 00826040: mov eax, 1 */ r_eax = 0x1u;
    /* 00826045: ret  */ FN_RET(0x00826028); r_esp += 4; return;
}

void f_00826048(void) /* sub_826048 */
{
    FN_ENTER(0x00826048);
    /* 00826048: mov eax, dword ptr [0xaca8f0] */ r_eax = R32((u32)(0xaca8f0u));
    /* 0082604d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082604f: je 0x826054 */ if (fZ) goto L_00826054;
L_00826051:; BB(0x00826051);
    /* 00826051: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826053: ret  */ FN_RET(0x00826048); r_esp += 4; return;
L_00826054:; BB(0x00826054);
    /* 00826054: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00826058: mov dword ptr [0xaca8f0], edx */ W32((u32)(0xaca8f0u), r_edx);
    /* 0082605e: mov eax, 1 */ r_eax = 0x1u;
    /* 00826063: ret  */ FN_RET(0x00826048); r_esp += 4; return;
}

void f_00826064(void) /* sub_826064 */
{
    FN_ENTER(0x00826064);
    /* 00826064: mov eax, dword ptr [0xaca8f0] */ r_eax = R32((u32)(0xaca8f0u));
    /* 00826069: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082606d: je 0x826072 */ if (fZ) goto L_00826072;
L_0082606f:; BB(0x0082606f);
    /* 0082606f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826071: ret  */ FN_RET(0x00826064); r_esp += 4; return;
L_00826072:; BB(0x00826072);
    /* 00826072: mov dword ptr [0xaca8f0], 0 */ W32((u32)(0xaca8f0u), 0x0u);
    /* 0082607c: mov eax, 1 */ r_eax = 0x1u;
    /* 00826081: ret  */ FN_RET(0x00826064); r_esp += 4; return;
}

void f_00826084(void) /* sub_826084 */
{
    FN_ENTER(0x00826084);
    /* 00826084: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00826088: mov dword ptr [0xaca8ec], edx */ W32((u32)(0xaca8ecu), r_edx);
    /* 0082608e: mov eax, 1 */ r_eax = 0x1u;
    /* 00826093: ret  */ FN_RET(0x00826084); r_esp += 4; return;
}

void f_00826094(void) /* sub_826094 */
{
    FN_ENTER(0x00826094);
    /* 00826094: mov eax, dword ptr [0xaca8ec] */ r_eax = R32((u32)(0xaca8ecu));
    /* 00826099: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082609d: je 0x8260a2 */ if (fZ) goto L_008260a2;
L_0082609f:; BB(0x0082609f);
    /* 0082609f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008260a1: ret  */ FN_RET(0x00826094); r_esp += 4; return;
L_008260a2:; BB(0x008260a2);
    /* 008260a2: mov dword ptr [0xaca8ec], 0 */ W32((u32)(0xaca8ecu), 0x0u);
    /* 008260ac: mov eax, 1 */ r_eax = 0x1u;
    /* 008260b1: ret  */ FN_RET(0x00826094); r_esp += 4; return;
}

void f_008260b4(void) /* sub_8260B4 */
{
    FN_ENTER(0x008260b4);
    /* 008260b4: mov eax, 0xaca500 */ r_eax = 0xaca500u;
    /* 008260b9: ret  */ FN_RET(0x008260b4); r_esp += 4; return;
}

void f_008260bc(void) /* sub_8260BC */
{
    FN_ENTER(0x008260bc);
    /* 008260bc: mov eax, 0xaca6f0 */ r_eax = 0xaca6f0u;
    /* 008260c1: ret  */ FN_RET(0x008260bc); r_esp += 4; return;
}

void f_008260c4(void) /* sub_8260C4 */
{
    FN_ENTER(0x008260c4);
    /* 008260c4: mov eax, 0xaca5f8 */ r_eax = 0xaca5f8u;
    /* 008260c9: ret  */ FN_RET(0x008260c4); r_esp += 4; return;
}

void f_008260cc(void) /* sub_8260CC */
{
    FN_ENTER(0x008260cc);
    /* 008260cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008260cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008260ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008260cf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008260d2: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 008260d6: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 008260da: movsx ebx, byte ptr [0xaca904] */ r_ebx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 008260e1: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008260e5: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 008260e9: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 008260ed: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 008260f2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008260f5: mov byte ptr [esp + 4], 1 */ W8((u32)(r_esp+0x4u), 0x1u);
    /* 008260fa: mov byte ptr [esp + 5], 0 */ W8((u32)(r_esp+0x5u), 0x0u);
    /* 008260ff: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x826104u); f_00827364();
    /* 00826104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826105: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00826109: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x82610eu); f_00800464();
    /* 0082610e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082610f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00826110: mov ecx, 0xaca500 */ r_ecx = 0xaca500u;
    /* 00826115: call 0x824e7c */ r_esp -= 4; W32(r_esp, 0x82611au); f_00824e7c();
    /* 0082611a: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00826120: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826122: je 0x826129 */ if (fZ) goto L_00826129;
L_00826124:; BB(0x00826124);
    /* 00826124: call 0x76074c */ r_esp -= 4; W32(r_esp, 0x826129u); f_0076074c();
L_00826129:; BB(0x00826129);
    /* 00826129: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082612c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082612d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082612e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082612f: ret  */ FN_RET(0x008260cc); r_esp += 4; return;
}

void f_00826130(void) /* sub_826130 */
{
    FN_ENTER(0x00826130);
    /* 00826130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00826131: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00826132: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826133: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00826136: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0082613a: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0082613e: movsx ebx, byte ptr [0xaca904] */ r_ebx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826145: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00826149: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 0082614d: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00826151: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 00826156: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00826159: mov byte ptr [esp + 4], 2 */ W8((u32)(r_esp+0x4u), 0x2u);
    /* 0082615e: mov byte ptr [esp + 5], 0 */ W8((u32)(r_esp+0x5u), 0x0u);
    /* 00826163: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x826168u); f_00827364();
    /* 00826168: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826169: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0082616d: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x826172u); f_00800464();
    /* 00826172: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00826173: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00826174: mov ecx, 0xaca500 */ r_ecx = 0xaca500u;
    /* 00826179: call 0x8252a4 */ r_esp -= 4; W32(r_esp, 0x82617eu); f_008252a4();
    /* 0082617e: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00826184: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826186: je 0x82618d */ if (fZ) goto L_0082618d;
L_00826188:; BB(0x00826188);
    /* 00826188: call 0x76074c */ r_esp -= 4; W32(r_esp, 0x82618du); f_0076074c();
L_0082618d:; BB(0x0082618d);
    /* 0082618d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826190: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826191: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826192: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826193: ret  */ FN_RET(0x00826130); r_esp += 4; return;
}

void f_00826194(void) /* sub_826194 */
{
    FN_ENTER(0x00826194);
    /* 00826194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826195: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00826198: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 0082619f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008261a2: je 0x8261a9 */ if (fZ) goto L_008261a9;
L_008261a4:; BB(0x008261a4);
    /* 008261a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008261a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008261a8: ret  */ FN_RET(0x00826194); r_esp += 4; return;
L_008261a9:; BB(0x008261a9);
    /* 008261a9: movsx ebp, byte ptr [0xaca904] */ r_ebp = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 008261b0: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 008261b4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008261b7: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 008261bc: mov byte ptr [esp + 4], 0 */ W8((u32)(r_esp+0x4u), 0x0u);
    /* 008261c1: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 008261c6: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x8261cbu); f_00827364();
    /* 008261cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008261cc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 008261d0: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x8261d5u); f_00800464();
    /* 008261d5: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x8261dau); f_00717da4();
    /* 008261da: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x8261dfu); f_00824dc0();
    /* 008261df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008261e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008261e3: ret  */ FN_RET(0x00826194); r_esp += 4; return;
}

void f_008261e4(void) /* sub_8261E4 */
{
    FN_ENTER(0x008261e4);
    /* 008261e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008261e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008261e6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008261e9: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 008261ed: mov byte ptr [esp + 4], 0xa6 */ W8((u32)(r_esp+0x4u), 0xa6u);
    /* 008261f2: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 008261f7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008261fd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x826202u); f_0068d5a8();
    /* 00826202: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826205: je 0x826242 */ if (fZ) goto L_00826242;
L_00826207:; BB(0x00826207);
    /* 00826207: mov edi, dword ptr [eax + 0x2b4] */ r_edi = R32((u32)(r_eax+0x2b4u));
    /* 0082620d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082620f: je 0x826242 */ if (fZ) goto L_00826242;
L_00826211:; BB(0x00826211);
    /* 00826211: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826218: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082621b: je 0x82624d */ if (fZ) goto L_0082624d;
L_0082621d:; BB(0x0082621d);
    /* 0082621d: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x826222u); f_00717da4();
    /* 00826222: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826229: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082622b: jne 0x826248 */ if (!fZ) goto L_00826248;
L_0082622d:; BB(0x0082622d);
    /* 0082622d: call 0x826284 */ r_esp -= 4; W32(r_esp, 0x826232u); f_00826284();
    /* 00826232: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00826234: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082623a: call 0x718224 */ r_esp -= 4; W32(r_esp, 0x82623fu); f_00718224();
    /* 0082623f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00826242:; BB(0x00826242);
    /* 00826242: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826246: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826247: ret  */ FN_RET(0x008261e4); r_esp += 4; return;
L_00826248:; BB(0x00826248);
    /* 00826248: call 0x824d38 */ r_esp -= 4; W32(r_esp, 0x82624du); f_00824d38();
L_0082624d:; BB(0x0082624d);
    /* 0082624d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00826251: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00826254: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00826258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082625a: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 0082625e: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00826262: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x826267u); f_00827364();
    /* 00826267: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826268: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0082626c: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x826271u); f_00800464();
    /* 00826271: mov byte ptr [0xaca900], 1 */ W8((u32)(0xaca900u), 0x1u);
    /* 00826278: mov byte ptr [0xaca904], bl */ W8((u32)(0xaca904u), (u8)r_ebx);
    /* 0082627e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826281: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826282: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826283: ret  */ FN_RET(0x008261e4); r_esp += 4; return;
}

void f_00826284(void) /* sub_826284 */
{
    FN_ENTER(0x00826284);
    /* 00826284: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00826285: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00826288: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 0082628f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826292: je 0x826299 */ if (fZ) goto L_00826299;
L_00826294:; BB(0x00826294);
    /* 00826294: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826297: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826298: ret  */ FN_RET(0x00826284); r_esp += 4; return;
L_00826299:; BB(0x00826299);
    /* 00826299: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0082629e: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 008262a2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008262a8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x8262adu); f_0068d5a8();
    /* 008262ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008262ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008262b0: je 0x826294 */ if (fZ) goto L_00826294;
L_008262b2:; BB(0x008262b2);
    /* 008262b2: mov eax, dword ptr [eax + 0x2b4] */ r_eax = R32((u32)(r_eax+0x2b4u));
    /* 008262b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008262ba: je 0x826294 */ if (fZ) goto L_00826294;
L_008262bc:; BB(0x008262bc);
    /* 008262bc: movsx esi, byte ptr [0xaca904] */ r_esi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 008262c3: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 008262c6: mov byte ptr [esp + 4], 0 */ W8((u32)(r_esp+0x4u), 0x0u);
    /* 008262cb: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 008262d0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008262d4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008262d7: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x8262dcu); f_00827364();
    /* 008262dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008262dd: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 008262e1: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x8262e6u); f_00800464();
    /* 008262e6: mov byte ptr [0xaca900], 3 */ W8((u32)(0xaca900u), 0x3u);
    /* 008262ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008262f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008262f1: ret  */ FN_RET(0x00826284); r_esp += 4; return;
}

void f_008262f4(void) /* sub_8262F4 */
{
    FN_ENTER(0x008262f4);
    /* 008262f4: mov eax, dword ptr [0xaca8f4] */ r_eax = R32((u32)(0xaca8f4u));
    /* 008262f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008262fb: je 0x8262fe */ if (fZ) goto L_008262fe;
L_008262fd:; BB(0x008262fd);
    /* 008262fd: ret  */ FN_RET(0x008262f4); r_esp += 4; return;
L_008262fe:; BB(0x008262fe);
    /* 008262fe: mov eax, dword ptr [0xaca8f0] */ r_eax = R32((u32)(0xaca8f0u));
    /* 00826303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826305: je 0x826308 */ if (fZ) goto L_00826308;
L_00826307:; BB(0x00826307);
    /* 00826307: ret  */ FN_RET(0x008262f4); r_esp += 4; return;
L_00826308:; BB(0x00826308);
    /* 00826308: mov eax, dword ptr [0xaca8ec] */ r_eax = R32((u32)(0xaca8ecu));
    /* 0082630d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082630f: je 0x826312 */ if (fZ) goto L_00826312;
L_00826311:; BB(0x00826311);
    /* 00826311: ret  */ FN_RET(0x008262f4); r_esp += 4; return;
L_00826312:; BB(0x00826312);
    /* 00826312: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x826317u); f_00825b4c();
    /* 00826317: ret  */ FN_RET(0x008262f4); r_esp += 4; return;
}

void f_00826318(void) /* sub_826318 */
{
    FN_ENTER(0x00826318);
    /* 00826318: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00826319: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082631a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0082631e: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00826322: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00826325: jge 0x826353 */ if ((fS==fO)) goto L_00826353;
L_00826327:; BB(0x00826327);
    /* 00826327: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 0082632b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082632e: jge 0x826353 */ if ((fS==fO)) goto L_00826353;
L_00826330:; BB(0x00826330);
    /* 00826330: movsx edi, byte ptr [0xaca904] */ r_edi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826337: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082633a: je 0x826356 */ if (fZ) goto L_00826356;
L_0082633c:; BB(0x0082633c);
    /* 0082633c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082633e: je 0x826356 */ if (fZ) goto L_00826356;
L_00826340:; BB(0x00826340);
    /* 00826340: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826342: jne 0x826353 */ if (!fZ) goto L_00826353;
L_00826344:; BB(0x00826344);
    /* 00826344: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00826348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082634a: jne 0x826353 */ if (!fZ) goto L_00826353;
L_0082634c:; BB(0x0082634c);
    /* 0082634c: mov eax, ecx */ r_eax = r_ecx;
    /* 0082634e: call 0x824d38 */ r_esp -= 4; W32(r_esp, 0x826353u); f_00824d38();
L_00826353:; BB(0x00826353);
    /* 00826353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826354: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826355: ret  */ FN_RET(0x00826318); r_esp += 4; return;
L_00826356:; BB(0x00826356);
    /* 00826356: movsx ecx, byte ptr [0xaca900] */ r_ecx = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 0082635d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082635f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00826361: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00826363: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00826365: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00826367: mov eax, dword ptr [ecx + eax*4 + 0xa16660] */ r_eax = R32((u32)(r_ecx+r_eax*4+0xa16660u));
    /* 0082636e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826370: je 0x826376 */ if (fZ) goto L_00826376;
L_00826372:; BB(0x00826372);
    /* 00826372: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00826373: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x826375u); call_ind(t); }
    /* 00826375: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00826376:; BB(0x00826376);
    /* 00826376: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826377: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826378: ret  */ FN_RET(0x00826318); r_esp += 4; return;
}

void f_0082637c(void)
{
    FN_ENTER(0x0082637c);
    /* 0082637c: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00826383: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00826386: je 0x826389 */ if (fZ) goto L_00826389;
L_00826388:; BB(0x00826388);
    /* 00826388: ret  */ FN_RET(0x0082637c); r_esp += 4; return;
L_00826389:; BB(0x00826389);
    /* 00826389: mov byte ptr [0xaca900], 9 */ W8((u32)(0xaca900u), 0x9u);
    /* 00826390: ret  */ FN_RET(0x0082637c); r_esp += 4; return;
}

void f_00826394(void) /* sub_826394 */
{
    FN_ENTER(0x00826394);
    /* 00826394: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00826395: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826396: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00826399: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 008263a0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008263a3: je 0x8263ab */ if (fZ) goto L_008263ab;
L_008263a5:; BB(0x008263a5);
    /* 008263a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008263a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008263a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008263aa: ret  */ FN_RET(0x00826394); r_esp += 4; return;
L_008263ab:; BB(0x008263ab);
    /* 008263ab: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008263b1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x8263b6u); f_0068d5a8();
    /* 008263b6: mov esi, eax */ r_esi = r_eax;
    /* 008263b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008263bb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008263bd: je 0x82646c */ if (fZ) goto L_0082646c;
L_008263c3:; BB(0x008263c3);
    /* 008263c3: mov edx, 0xaca500 */ r_edx = 0xaca500u;
    /* 008263c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008263ca: je 0x82646c */ if (fZ) goto L_0082646c;
L_008263d0:; BB(0x008263d0);
    /* 008263d0: call 0x6a47ec */ r_esp -= 4; W32(r_esp, 0x8263d5u); f_006a47ec();
    /* 008263d5: mov edx, eax */ r_edx = r_eax;
    /* 008263d7: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008263db: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008263df: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008263e3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008263e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008263e8: mov eax, 0xaca500 */ r_eax = 0xaca500u;
    /* 008263ed: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008263ef: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008263f3: mov esi, eax */ r_esi = r_eax;
L_008263f5:; BB(0x008263f5);
    /* 008263f5: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008263f7: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 008263fa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008263fc: jle 0x826449 */ if ((fZ||fS!=fO)) goto L_00826449;
L_008263fe:; BB(0x008263fe);
    /* 008263fe: cmp edi, 0xffffff01 */ {  u32 a = r_edi; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826404: je 0x82643f */ if (fZ) goto L_0082643f;
L_00826406:; BB(0x00826406);
    /* 00826406: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0082640a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082640c: je 0x826429 */ if (fZ) goto L_00826429;
L_0082640e:; BB(0x0082640e);
    /* 0082640e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082640f: call 0x6a6b38 */ r_esp -= 4; W32(r_esp, 0x826414u); f_006a6b38();
    /* 00826414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826417: je 0x826429 */ if (fZ) goto L_00826429;
L_00826419:; BB(0x00826419);
    /* 00826419: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082641a: call 0x6a6c80 */ r_esp -= 4; W32(r_esp, 0x82641fu); f_006a6c80();
    /* 0082641f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826420: mov edx, 1 */ r_edx = 0x1u;
    /* 00826425: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_00826429:; BB(0x00826429);
    /* 00826429: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082642a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082642b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0082642f: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x826434u); f_0068ed94();
    /* 00826434: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00826438: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x82643du); f_0068dd44();
    /* 0082643d: jmp 0x826449 */ goto L_00826449;
L_0082643f:; BB(0x0082643f);
    /* 0082643f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826440: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00826444: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x826449u); f_007772bc();
L_00826449:; BB(0x00826449);
    /* 00826449: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082644c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082644f: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00826452: jl 0x8263f5 */ if ((fS!=fO)) goto L_008263f5;
L_00826454:; BB(0x00826454);
    /* 00826454: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00826458: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0082645c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0082645f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826461: je 0x826472 */ if (fZ) goto L_00826472;
L_00826463:; BB(0x00826463);
    /* 00826463: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x826468u); f_006dc358();
    /* 00826468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082646a: je 0x826472 */ if (fZ) goto L_00826472;
L_0082646c:; BB(0x0082646c);
    /* 0082646c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082646f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826470: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826471: ret  */ FN_RET(0x00826394); r_esp += 4; return;
L_00826472:; BB(0x00826472);
    /* 00826472: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00826478: mov byte ptr [0xaca900], 8 */ W8((u32)(0xaca900u), 0x8u);
    /* 0082647f: call 0x7e87ac */ r_esp -= 4; W32(r_esp, 0x826484u); f_007e87ac();
    /* 00826484: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826487: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826488: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826489: ret  */ FN_RET(0x00826394); r_esp += 4; return;
}

void f_0082648c(void) /* sub_82648C */
{
    FN_ENTER(0x0082648c);
    /* 0082648c: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00826493: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826498: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 0082649e: ret  */ FN_RET(0x0082648c); r_esp += 4; return;
}

void f_008264a0(void) /* sub_8264A0 */
{
    FN_ENTER(0x008264a0);
    /* 008264a0: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 008264a7: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008264ac: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 008264b2: ret  */ FN_RET(0x008264a0); r_esp += 4; return;
}

void f_008264b4(void) /* sub_8264B4 */
{
    FN_ENTER(0x008264b4);
    /* 008264b4: movzx edx, word ptr [0xaca908] */ r_edx = (u32)R16((u32)(0xaca908u));
    /* 008264bb: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008264be: mov eax, 0 */ r_eax = 0x0u;
    /* 008264c3: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008264c6: ret  */ FN_RET(0x008264b4); r_esp += 4; return;
}

void f_008264c8(void) /* sub_8264C8 */
{
    FN_ENTER(0x008264c8);
    /* 008264c8: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 008264cf: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008264d4: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 008264da: ret  */ FN_RET(0x008264c8); r_esp += 4; return;
}

void f_008264dc(void) /* sub_8264DC */
{
    FN_ENTER(0x008264dc);
    /* 008264dc: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 008264e3: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008264e8: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 008264ee: ret  */ FN_RET(0x008264dc); r_esp += 4; return;
}

void f_008264f0(void) /* sub_8264F0 */
{
    FN_ENTER(0x008264f0);
    /* 008264f0: movzx edx, word ptr [0xaca908] */ r_edx = (u32)R16((u32)(0xaca908u));
    /* 008264f7: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008264fd: mov eax, 0 */ r_eax = 0x0u;
    /* 00826502: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00826505: ret  */ FN_RET(0x008264f0); r_esp += 4; return;
}

void f_00826508(void) /* sub_826508 */
{
    FN_ENTER(0x00826508);
    /* 00826508: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 0082650f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00826511: jne 0x826516 */ if (!fZ) goto L_00826516;
L_00826513:; BB(0x00826513);
    /* 00826513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826515: ret  */ FN_RET(0x00826508); r_esp += 4; return;
L_00826516:; BB(0x00826516);
    /* 00826516: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826518: jne 0x82651d */ if (!fZ) goto L_0082651d;
L_0082651a:; BB(0x0082651a);
    /* 0082651a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082651c: ret  */ FN_RET(0x00826508); r_esp += 4; return;
L_0082651d:; BB(0x0082651d);
    /* 0082651d: mov eax, 1 */ r_eax = 0x1u;
    /* 00826522: ret  */ FN_RET(0x00826508); r_esp += 4; return;
}

void f_00826524(void) /* sub_826524 */
{
    FN_ENTER(0x00826524);
    /* 00826524: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00826525: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00826526: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826527: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826528: sub esp, 0x25c */ {  u32 a = r_esp; u32 b = 0x25cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082652e: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00826532: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00826534: call 0x82722c */ r_esp -= 4; W32(r_esp, 0x826539u); f_0082722c();
    /* 00826539: lea edi, [esp + 0x1c] */ r_edi = (u32)(r_esp+0x1cu);
    /* 0082653d: mov esi, 0xaca6f0 */ r_esi = 0xaca6f0u;
    /* 00826542: mov ecx, 0xf8 */ r_ecx = 0xf8u;
    /* 00826547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00826548: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082654b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0082654d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082654e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00826551: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00826553: lea edi, [esp + 0x114] */ r_edi = (u32)(r_esp+0x114u);
    /* 0082655a: mov esi, 0xaca5f8 */ r_esi = 0xaca5f8u;
    /* 0082655f: mov ecx, 0xf8 */ r_ecx = 0xf8u;
    /* 00826564: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00826565: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00826568: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0082656a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082656b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082656e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00826570: lea edi, [esp + 0x114] */ r_edi = (u32)(r_esp+0x114u);
    /* 00826577: mov esi, 1 */ r_esi = 0x1u;
    /* 0082657c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0082657e:; BB(0x0082657e);
    /* 0082657e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00826580: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826583: je 0x8265a4 */ if (fZ) goto L_008265a4;
L_00826585:; BB(0x00826585);
    /* 00826585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826586: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x82658bu); f_005c5528();
    /* 0082658b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082658c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082658e: je 0x826597 */ if (fZ) goto L_00826597;
L_00826590:; BB(0x00826590);
    /* 00826590: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00826593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00826595: jg 0x8265a4 */ if ((!fZ&&fS==fO)) goto L_008265a4;
L_00826597:; BB(0x00826597);
    /* 00826597: mov dword ptr [edi], 0xffffffff */ W32((u32)(r_edi), 0xffffffffu);
    /* 0082659d: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
L_008265a4:; BB(0x008265a4);
    /* 008265a4: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008265a7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008265aa: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008265ad: jl 0x82657e */ if ((fS!=fO)) goto L_0082657e;
L_008265af:; BB(0x008265af);
    /* 008265af: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 008265b3: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008265b7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008265ba: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008265bc:; BB(0x008265bc);
    /* 008265bc: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 008265be: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008265c1: je 0x8268ec */ if (fZ) goto L_008268ec;
L_008265c7:; BB(0x008265c7);
    /* 008265c7: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 008265ca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008265cc: jle 0x8268ec */ if ((fZ||fS!=fO)) goto L_008268ec;
L_008265d2:; BB(0x008265d2);
    /* 008265d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008265d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008265d8: cmp ebp, 0xffffff01 */ {  u32 a = r_ebp; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008265de: jne 0x826609 */ if (!fZ) goto L_00826609;
L_008265e0:; BB(0x008265e0);
    /* 008265e0: mov eax, dword ptr [esp + 0x208] */ r_eax = R32((u32)(r_esp+0x208u));
    /* 008265e7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008265e9: mov dword ptr [esp + 0x208], esi */ W32((u32)(r_esp+0x208u), r_esi);
    /* 008265f0: cmp esi, 0xf423f */ {  u32 a = r_esi; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008265f6: jle 0x826602 */ if ((fZ||fS!=fO)) goto L_00826602;
L_008265f8:; BB(0x008265f8);
    /* 008265f8: mov eax, 1 */ r_eax = 0x1u;
    /* 008265fd: jmp 0x8268e4 */ goto L_008268e4;
L_00826602:; BB(0x00826602);
    /* 00826602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826604: jmp 0x8268e4 */ goto L_008268e4;
L_00826609:; BB(0x00826609);
    /* 00826609: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082660a: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x82660fu); f_005c5528();
    /* 0082660f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00826613: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826618: je 0x826d5c */ if (fZ) goto L_00826d5c;
L_0082661e:; BB(0x0082661e);
    /* 0082661e: movzx ecx, byte ptr [eax + 0xf2] */ r_ecx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00826625: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 0082662c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082662d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082662e: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x826633u); f_005c502c();
    /* 00826633: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826638: je 0x8266db */ if (fZ) goto L_008266db;
L_0082663e:; BB(0x0082663e);
    /* 0082663e: lea eax, [esp + 0x20c] */ r_eax = (u32)(r_esp+0x20cu);
    /* 00826645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826646: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0082664a: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x82664fu); f_005c425c();
    /* 0082664f: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 00826656: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0082665a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0082665e: mov edi, edx */ r_edi = r_edx;
    /* 00826660: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826662: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00826666: mov ebp, eax */ r_ebp = r_eax;
L_00826668:; BB(0x00826668);
    /* 00826668: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082666a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082666d: je 0x8266c4 */ if (fZ) goto L_008266c4;
L_0082666f:; BB(0x0082666f);
    /* 0082666f: cmp ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826675: je 0x8266c4 */ if (fZ) goto L_008266c4;
L_00826677:; BB(0x00826677);
    /* 00826677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00826678: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x82667du); f_005c5528();
    /* 0082667d: mov ebx, eax */ r_ebx = r_eax;
    /* 0082667f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826682: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826684: je 0x8266c4 */ if (fZ) goto L_008266c4;
L_00826686:; BB(0x00826686);
    /* 00826686: lea eax, [esp + 0x220] */ r_eax = (u32)(r_esp+0x220u);
    /* 0082668d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082668e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00826690: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x826695u); f_005c425c();
    /* 00826695: lea edx, [esp + 0x220] */ r_edx = (u32)(r_esp+0x220u);
    /* 0082669c: lea eax, [esp + 0x20c] */ r_eax = (u32)(r_esp+0x20cu);
    /* 008266a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008266a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008266a5: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x8266aau); f_005ca70c();
    /* 008266aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008266ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008266af: je 0x8266c4 */ if (fZ) goto L_008266c4;
L_008266b1:; BB(0x008266b1);
    /* 008266b1: add dword ptr [edi + 4], esi */ { u32 ad = (u32)(r_edi+0x4u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008266b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008266b6: call 0x5c5064 */ r_esp -= 4; W32(r_esp, 0x8266bbu); f_005c5064();
    /* 008266bb: cmp eax, dword ptr [edi + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008266be: jl 0x826d32 */ if ((fS!=fO)) goto L_00826d32;
L_008266c4:; BB(0x008266c4);
    /* 008266c4: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008266c7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008266ca: cmp ebp, 0x1e */ {  u32 a = r_ebp; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008266cd: jl 0x826668 */ if ((fS!=fO)) goto L_00826668;
L_008266cf:; BB(0x008266cf);
    /* 008266cf: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 008266d3: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008266d7: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_008266db:; BB(0x008266db);
    /* 008266db: lea eax, [esp + 0x114] */ r_eax = (u32)(r_esp+0x114u);
    /* 008266e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008266e4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008266e7: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008266ed:; BB(0x008266ed);
    /* 008266ed: lea eax, [esp + 0x11c] */ r_eax = (u32)(r_esp+0x11cu);
    /* 008266f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008266f6: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008266f9: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008266ff:; BB(0x008266ff);
    /* 008266ff: lea eax, [esp + 0x124] */ r_eax = (u32)(r_esp+0x124u);
    /* 00826706: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826708: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082670b: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826711:; BB(0x00826711);
    /* 00826711: lea eax, [esp + 0x12c] */ r_eax = (u32)(r_esp+0x12cu);
    /* 00826718: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082671a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082671d: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826723:; BB(0x00826723);
    /* 00826723: lea eax, [esp + 0x134] */ r_eax = (u32)(r_esp+0x134u);
    /* 0082672a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082672c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082672f: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826735:; BB(0x00826735);
    /* 00826735: lea eax, [esp + 0x13c] */ r_eax = (u32)(r_esp+0x13cu);
    /* 0082673c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082673e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826741: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826747:; BB(0x00826747);
    /* 00826747: lea eax, [esp + 0x144] */ r_eax = (u32)(r_esp+0x144u);
    /* 0082674e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826750: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826753: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826759:; BB(0x00826759);
    /* 00826759: lea eax, [esp + 0x14c] */ r_eax = (u32)(r_esp+0x14cu);
    /* 00826760: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826762: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826765: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082676b:; BB(0x0082676b);
    /* 0082676b: lea eax, [esp + 0x154] */ r_eax = (u32)(r_esp+0x154u);
    /* 00826772: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826774: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826777: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082677d:; BB(0x0082677d);
    /* 0082677d: lea eax, [esp + 0x15c] */ r_eax = (u32)(r_esp+0x15cu);
    /* 00826784: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826786: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826789: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082678f:; BB(0x0082678f);
    /* 0082678f: lea eax, [esp + 0x164] */ r_eax = (u32)(r_esp+0x164u);
    /* 00826796: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826798: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082679b: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008267a1:; BB(0x008267a1);
    /* 008267a1: lea eax, [esp + 0x16c] */ r_eax = (u32)(r_esp+0x16cu);
    /* 008267a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008267aa: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008267ad: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008267b3:; BB(0x008267b3);
    /* 008267b3: lea eax, [esp + 0x174] */ r_eax = (u32)(r_esp+0x174u);
    /* 008267ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008267bc: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008267bf: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008267c5:; BB(0x008267c5);
    /* 008267c5: lea eax, [esp + 0x17c] */ r_eax = (u32)(r_esp+0x17cu);
    /* 008267cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008267ce: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008267d1: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008267d7:; BB(0x008267d7);
    /* 008267d7: lea eax, [esp + 0x184] */ r_eax = (u32)(r_esp+0x184u);
    /* 008267de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008267e0: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008267e3: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008267e9:; BB(0x008267e9);
    /* 008267e9: lea eax, [esp + 0x18c] */ r_eax = (u32)(r_esp+0x18cu);
    /* 008267f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008267f2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008267f5: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008267fb:; BB(0x008267fb);
    /* 008267fb: lea eax, [esp + 0x194] */ r_eax = (u32)(r_esp+0x194u);
    /* 00826802: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826804: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826807: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082680d:; BB(0x0082680d);
    /* 0082680d: lea eax, [esp + 0x19c] */ r_eax = (u32)(r_esp+0x19cu);
    /* 00826814: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826816: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826819: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082681f:; BB(0x0082681f);
    /* 0082681f: lea eax, [esp + 0x1a4] */ r_eax = (u32)(r_esp+0x1a4u);
    /* 00826826: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826828: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082682b: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826831:; BB(0x00826831);
    /* 00826831: lea eax, [esp + 0x1ac] */ r_eax = (u32)(r_esp+0x1acu);
    /* 00826838: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082683a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082683d: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826843:; BB(0x00826843);
    /* 00826843: lea eax, [esp + 0x1b4] */ r_eax = (u32)(r_esp+0x1b4u);
    /* 0082684a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082684c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082684f: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826855:; BB(0x00826855);
    /* 00826855: lea eax, [esp + 0x1bc] */ r_eax = (u32)(r_esp+0x1bcu);
    /* 0082685c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082685e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826861: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826863:; BB(0x00826863);
    /* 00826863: lea eax, [esp + 0x1c4] */ r_eax = (u32)(r_esp+0x1c4u);
    /* 0082686a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082686c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082686f: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_00826871:; BB(0x00826871);
    /* 00826871: lea eax, [esp + 0x1cc] */ r_eax = (u32)(r_esp+0x1ccu);
    /* 00826878: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082687a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082687d: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082687f:; BB(0x0082687f);
    /* 0082687f: lea eax, [esp + 0x1d4] */ r_eax = (u32)(r_esp+0x1d4u);
    /* 00826886: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826888: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082688b: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082688d:; BB(0x0082688d);
    /* 0082688d: lea eax, [esp + 0x1dc] */ r_eax = (u32)(r_esp+0x1dcu);
    /* 00826894: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826896: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826899: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_0082689b:; BB(0x0082689b);
    /* 0082689b: lea eax, [esp + 0x1e4] */ r_eax = (u32)(r_esp+0x1e4u);
    /* 008268a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008268a4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008268a7: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008268a9:; BB(0x008268a9);
    /* 008268a9: lea eax, [esp + 0x1ec] */ r_eax = (u32)(r_esp+0x1ecu);
    /* 008268b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008268b2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008268b5: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008268b7:; BB(0x008268b7);
    /* 008268b7: lea eax, [esp + 0x1f4] */ r_eax = (u32)(r_esp+0x1f4u);
    /* 008268be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008268c0: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008268c3: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008268c5:; BB(0x008268c5);
    /* 008268c5: lea eax, [esp + 0x1fc] */ r_eax = (u32)(r_esp+0x1fcu);
    /* 008268cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008268ce: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008268d1: je 0x8268d5 */ if (fZ) goto L_008268d5;
L_008268d3:; BB(0x008268d3);
    /* 008268d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008268d5:; BB(0x008268d5);
    /* 008268d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008268d7: je 0x826d52 */ if (fZ) goto L_00826d52;
L_008268dd:; BB(0x008268dd);
    /* 008268dd: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008268df: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008268e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008268e4:; BB(0x008268e4);
    /* 008268e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008268e6: jne 0x826d48 */ if (!fZ) goto L_00826d48;
L_008268ec:; BB(0x008268ec);
    /* 008268ec: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008268ef: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008268f2: cmp edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008268f5: jl 0x8265bc */ if ((fS!=fO)) goto L_008265bc;
L_008268fb:; BB(0x008268fb);
    /* 008268fb: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 008268ff: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00826902: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00826904: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826906: je 0x82690f */ if (fZ) goto L_0082690f;
L_00826908:; BB(0x00826908);
    /* 00826908: mov eax, 4 */ r_eax = 0x4u;
    /* 0082690d: jmp 0x826911 */ goto L_00826911;
L_0082690f:; BB(0x0082690f);
    /* 0082690f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00826911:; BB(0x00826911);
    /* 00826911: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826914: je 0x826de4 */ if (fZ) goto L_00826de4;
L_0082691a:; BB(0x0082691a);
    /* 0082691a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082691c: jne 0x826dcc */ if (!fZ) goto L_00826dcc;
L_00826922:; BB(0x00826922);
    /* 00826922: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00826926: call 0x82722c */ r_esp -= 4; W32(r_esp, 0x82692bu); f_0082722c();
    /* 0082692b: lea edi, [esp + 0x1c] */ r_edi = (u32)(r_esp+0x1cu);
    /* 0082692f: mov esi, 0xaca500 */ r_esi = 0xaca500u;
    /* 00826934: mov ecx, 0xf8 */ r_ecx = 0xf8u;
    /* 00826939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082693a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082693d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0082693f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826940: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00826943: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00826945: lea edi, [esp + 0x114] */ r_edi = (u32)(r_esp+0x114u);
    /* 0082694c: mov esi, 0xaca7e8 */ r_esi = 0xaca7e8u;
    /* 00826951: mov ecx, 0xf8 */ r_ecx = 0xf8u;
    /* 00826956: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00826957: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082695a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0082695c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082695d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00826960: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00826962: lea eax, [esp + 0x114] */ r_eax = (u32)(r_esp+0x114u);
    /* 00826969: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0082696c: mov edi, 1 */ r_edi = 0x1u;
    /* 00826971: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00826973: mov ebp, eax */ r_ebp = r_eax;
L_00826975:; BB(0x00826975);
    /* 00826975: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00826978: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082697b: je 0x82699d */ if (fZ) goto L_0082699d;
L_0082697d:; BB(0x0082697d);
    /* 0082697d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082697e: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x826983u); f_005c5528();
    /* 00826983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00826984: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826986: je 0x82698f */ if (fZ) goto L_0082698f;
L_00826988:; BB(0x00826988);
    /* 00826988: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0082698b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0082698d: jg 0x82699d */ if ((!fZ&&fS==fO)) goto L_0082699d;
L_0082698f:; BB(0x0082698f);
    /* 0082698f: mov dword ptr [ebp], 0xffffffff */ W32((u32)(r_ebp), 0xffffffffu);
    /* 00826996: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
L_0082699d:; BB(0x0082699d);
    /* 0082699d: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008269a0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008269a3: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008269a6: jl 0x826975 */ if ((fS!=fO)) goto L_00826975;
L_008269a8:; BB(0x008269a8);
    /* 008269a8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008269ab: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008269af: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 008269b3: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008269b7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008269ba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008269bc: mov ebp, eax */ r_ebp = r_eax;
L_008269be:; BB(0x008269be);
    /* 008269be: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 008269c1: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008269c4: je 0x826cf1 */ if (fZ) goto L_00826cf1;
L_008269ca:; BB(0x008269ca);
    /* 008269ca: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 008269cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008269cf: jle 0x826cf1 */ if ((fZ||fS!=fO)) goto L_00826cf1;
L_008269d5:; BB(0x008269d5);
    /* 008269d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008269d7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008269db: cmp ebx, 0xffffff01 */ {  u32 a = r_ebx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008269e1: jne 0x826a0c */ if (!fZ) goto L_00826a0c;
L_008269e3:; BB(0x008269e3);
    /* 008269e3: mov edx, dword ptr [esp + 0x208] */ r_edx = R32((u32)(r_esp+0x208u));
    /* 008269ea: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008269ec: mov dword ptr [esp + 0x208], edi */ W32((u32)(r_esp+0x208u), r_edi);
    /* 008269f3: cmp edi, 0xf423f */ {  u32 a = r_edi; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008269f9: jle 0x826a05 */ if ((fZ||fS!=fO)) goto L_00826a05;
L_008269fb:; BB(0x008269fb);
    /* 008269fb: mov eax, 1 */ r_eax = 0x1u;
    /* 00826a00: jmp 0x826ce9 */ goto L_00826ce9;
L_00826a05:; BB(0x00826a05);
    /* 00826a05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826a07: jmp 0x826ce9 */ goto L_00826ce9;
L_00826a0c:; BB(0x00826a0c);
    /* 00826a0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826a0d: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x826a12u); f_005c5528();
    /* 00826a12: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00826a16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826a19: mov edx, eax */ r_edx = r_eax;
    /* 00826a1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826a1d: je 0x826d88 */ if (fZ) goto L_00826d88;
L_00826a23:; BB(0x00826a23);
    /* 00826a23: movzx eax, byte ptr [edx + 0xf2] */ r_eax = (u32)R8((u32)(r_edx+0xf2u));
    /* 00826a2a: movzx ecx, byte ptr [edx + 0xf3] */ r_ecx = (u32)R8((u32)(r_edx+0xf3u));
    /* 00826a31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00826a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826a33: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x826a38u); f_005c502c();
    /* 00826a38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826a3d: je 0x826ae0 */ if (fZ) goto L_00826ae0;
L_00826a43:; BB(0x00826a43);
    /* 00826a43: lea edx, [esp + 0x234] */ r_edx = (u32)(r_esp+0x234u);
    /* 00826a4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00826a4b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00826a4f: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x826a54u); f_005c425c();
    /* 00826a54: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 00826a5b: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00826a5f: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00826a63: mov esi, edx */ r_esi = r_edx;
    /* 00826a65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826a67: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00826a6b: mov ebp, eax */ r_ebp = r_eax;
L_00826a6d:; BB(0x00826a6d);
    /* 00826a6d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00826a6f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826a72: je 0x826ac9 */ if (fZ) goto L_00826ac9;
L_00826a74:; BB(0x00826a74);
    /* 00826a74: cmp ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826a7a: je 0x826ac9 */ if (fZ) goto L_00826ac9;
L_00826a7c:; BB(0x00826a7c);
    /* 00826a7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00826a7d: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x826a82u); f_005c5528();
    /* 00826a82: mov ebx, eax */ r_ebx = r_eax;
    /* 00826a84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826a87: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826a89: je 0x826ac9 */ if (fZ) goto L_00826ac9;
L_00826a8b:; BB(0x00826a8b);
    /* 00826a8b: lea eax, [esp + 0x248] */ r_eax = (u32)(r_esp+0x248u);
    /* 00826a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826a93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00826a95: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x826a9au); f_005c425c();
    /* 00826a9a: lea edx, [esp + 0x248] */ r_edx = (u32)(r_esp+0x248u);
    /* 00826aa1: lea eax, [esp + 0x234] */ r_eax = (u32)(r_esp+0x234u);
    /* 00826aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00826aaa: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x826aafu); f_005ca70c();
    /* 00826aaf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826ab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826ab4: je 0x826ac9 */ if (fZ) goto L_00826ac9;
L_00826ab6:; BB(0x00826ab6);
    /* 00826ab6: add dword ptr [esi + 4], edi */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00826ab9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00826abb: call 0x5c5064 */ r_esp -= 4; W32(r_esp, 0x826ac0u); f_005c5064();
    /* 00826ac0: cmp eax, dword ptr [esi + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00826ac3: jl 0x826d63 */ if ((fS!=fO)) goto L_00826d63;
L_00826ac9:; BB(0x00826ac9);
    /* 00826ac9: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00826acc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00826acf: cmp ebp, 0x1e */ {  u32 a = r_ebp; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00826ad2: jl 0x826a6d */ if ((fS!=fO)) goto L_00826a6d;
L_00826ad4:; BB(0x00826ad4);
    /* 00826ad4: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00826ad8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00826adc: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00826ae0:; BB(0x00826ae0);
    /* 00826ae0: lea eax, [esp + 0x114] */ r_eax = (u32)(r_esp+0x114u);
    /* 00826ae7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826ae9: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826aec: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826af2:; BB(0x00826af2);
    /* 00826af2: lea eax, [esp + 0x11c] */ r_eax = (u32)(r_esp+0x11cu);
    /* 00826af9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826afb: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826afe: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b04:; BB(0x00826b04);
    /* 00826b04: lea eax, [esp + 0x124] */ r_eax = (u32)(r_esp+0x124u);
    /* 00826b0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b0d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b10: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b16:; BB(0x00826b16);
    /* 00826b16: lea eax, [esp + 0x12c] */ r_eax = (u32)(r_esp+0x12cu);
    /* 00826b1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b1f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b22: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b28:; BB(0x00826b28);
    /* 00826b28: lea eax, [esp + 0x134] */ r_eax = (u32)(r_esp+0x134u);
    /* 00826b2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b31: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b34: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b3a:; BB(0x00826b3a);
    /* 00826b3a: lea eax, [esp + 0x13c] */ r_eax = (u32)(r_esp+0x13cu);
    /* 00826b41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b43: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b46: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b4c:; BB(0x00826b4c);
    /* 00826b4c: lea eax, [esp + 0x144] */ r_eax = (u32)(r_esp+0x144u);
    /* 00826b53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b55: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b58: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b5e:; BB(0x00826b5e);
    /* 00826b5e: lea eax, [esp + 0x14c] */ r_eax = (u32)(r_esp+0x14cu);
    /* 00826b65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b67: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b6a: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b70:; BB(0x00826b70);
    /* 00826b70: lea eax, [esp + 0x154] */ r_eax = (u32)(r_esp+0x154u);
    /* 00826b77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b79: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b7c: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b82:; BB(0x00826b82);
    /* 00826b82: lea eax, [esp + 0x15c] */ r_eax = (u32)(r_esp+0x15cu);
    /* 00826b89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b8b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826b8e: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826b94:; BB(0x00826b94);
    /* 00826b94: lea eax, [esp + 0x164] */ r_eax = (u32)(r_esp+0x164u);
    /* 00826b9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826b9d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826ba0: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826ba6:; BB(0x00826ba6);
    /* 00826ba6: lea eax, [esp + 0x16c] */ r_eax = (u32)(r_esp+0x16cu);
    /* 00826bad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826baf: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826bb2: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826bb8:; BB(0x00826bb8);
    /* 00826bb8: lea eax, [esp + 0x174] */ r_eax = (u32)(r_esp+0x174u);
    /* 00826bbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826bc1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826bc4: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826bca:; BB(0x00826bca);
    /* 00826bca: lea eax, [esp + 0x17c] */ r_eax = (u32)(r_esp+0x17cu);
    /* 00826bd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826bd3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826bd6: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826bdc:; BB(0x00826bdc);
    /* 00826bdc: lea eax, [esp + 0x184] */ r_eax = (u32)(r_esp+0x184u);
    /* 00826be3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826be5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826be8: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826bee:; BB(0x00826bee);
    /* 00826bee: lea eax, [esp + 0x18c] */ r_eax = (u32)(r_esp+0x18cu);
    /* 00826bf5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826bf7: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826bfa: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c00:; BB(0x00826c00);
    /* 00826c00: lea eax, [esp + 0x194] */ r_eax = (u32)(r_esp+0x194u);
    /* 00826c07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c09: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c0c: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c12:; BB(0x00826c12);
    /* 00826c12: lea eax, [esp + 0x19c] */ r_eax = (u32)(r_esp+0x19cu);
    /* 00826c19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c1b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c1e: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c24:; BB(0x00826c24);
    /* 00826c24: lea eax, [esp + 0x1a4] */ r_eax = (u32)(r_esp+0x1a4u);
    /* 00826c2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c2d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c30: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c36:; BB(0x00826c36);
    /* 00826c36: lea eax, [esp + 0x1ac] */ r_eax = (u32)(r_esp+0x1acu);
    /* 00826c3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c3f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c42: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c48:; BB(0x00826c48);
    /* 00826c48: lea eax, [esp + 0x1b4] */ r_eax = (u32)(r_esp+0x1b4u);
    /* 00826c4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c51: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c54: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c5a:; BB(0x00826c5a);
    /* 00826c5a: lea eax, [esp + 0x1bc] */ r_eax = (u32)(r_esp+0x1bcu);
    /* 00826c61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c63: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c66: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c68:; BB(0x00826c68);
    /* 00826c68: lea eax, [esp + 0x1c4] */ r_eax = (u32)(r_esp+0x1c4u);
    /* 00826c6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c71: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c74: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c76:; BB(0x00826c76);
    /* 00826c76: lea eax, [esp + 0x1cc] */ r_eax = (u32)(r_esp+0x1ccu);
    /* 00826c7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c7f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c82: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c84:; BB(0x00826c84);
    /* 00826c84: lea eax, [esp + 0x1d4] */ r_eax = (u32)(r_esp+0x1d4u);
    /* 00826c8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c8d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c90: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826c92:; BB(0x00826c92);
    /* 00826c92: lea eax, [esp + 0x1dc] */ r_eax = (u32)(r_esp+0x1dcu);
    /* 00826c99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826c9b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826c9e: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826ca0:; BB(0x00826ca0);
    /* 00826ca0: lea eax, [esp + 0x1e4] */ r_eax = (u32)(r_esp+0x1e4u);
    /* 00826ca7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826ca9: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826cac: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826cae:; BB(0x00826cae);
    /* 00826cae: lea eax, [esp + 0x1ec] */ r_eax = (u32)(r_esp+0x1ecu);
    /* 00826cb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826cb7: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826cba: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826cbc:; BB(0x00826cbc);
    /* 00826cbc: lea eax, [esp + 0x1f4] */ r_eax = (u32)(r_esp+0x1f4u);
    /* 00826cc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826cc5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826cc8: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826cca:; BB(0x00826cca);
    /* 00826cca: lea eax, [esp + 0x1fc] */ r_eax = (u32)(r_esp+0x1fcu);
    /* 00826cd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00826cd3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826cd6: je 0x826cda */ if (fZ) goto L_00826cda;
L_00826cd8:; BB(0x00826cd8);
    /* 00826cd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00826cda:; BB(0x00826cda);
    /* 00826cda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826cdc: je 0x826d7e */ if (fZ) goto L_00826d7e;
L_00826ce2:; BB(0x00826ce2);
    /* 00826ce2: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00826ce4: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00826ce7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00826ce9:; BB(0x00826ce9);
    /* 00826ce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826ceb: jne 0x826d79 */ if (!fZ) goto L_00826d79;
L_00826cf1:; BB(0x00826cf1);
    /* 00826cf1: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00826cf4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00826cf7: cmp esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00826cfa: jl 0x8269be */ if ((fS!=fO)) goto L_008269be;
L_00826d00:; BB(0x00826d00);
    /* 00826d00: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00826d04: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00826d08: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00826d0b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826d0d: je 0x826d16 */ if (fZ) goto L_00826d16;
L_00826d0f:; BB(0x00826d0f);
    /* 00826d0f: mov eax, 4 */ r_eax = 0x4u;
    /* 00826d14: jmp 0x826d18 */ goto L_00826d18;
L_00826d16:; BB(0x00826d16);
    /* 00826d16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00826d18:; BB(0x00826d18);
    /* 00826d18: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826d1b: je 0x826da9 */ if (fZ) goto L_00826da9;
L_00826d21:; BB(0x00826d21);
    /* 00826d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826d23: jne 0x826d8f */ if (!fZ) goto L_00826d8f;
L_00826d25:; BB(0x00826d25);
    /* 00826d25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826d27: add esp, 0x25c */ {  u32 a = r_esp; u32 b = 0x25cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826d2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826d2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826d2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826d30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826d31: ret  */ FN_RET(0x00826524); r_esp += 4; return;
L_00826d32:; BB(0x00826d32);
    /* 00826d32: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00826d36: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00826d3a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00826d3e: mov eax, 2 */ r_eax = 0x2u;
    /* 00826d43: jmp 0x8268e4 */ goto L_008268e4;
L_00826d48:; BB(0x00826d48);
    /* 00826d48: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00826d4a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00826d4d: jmp 0x826911 */ goto L_00826911;
L_00826d52:; BB(0x00826d52);
    /* 00826d52: mov eax, 3 */ r_eax = 0x3u;
    /* 00826d57: jmp 0x8268e4 */ goto L_008268e4;
L_00826d5c:; BB(0x00826d5c);
    /* 00826d5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826d5e: jmp 0x8268e4 */ goto L_008268e4;
L_00826d63:; BB(0x00826d63);
    /* 00826d63: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00826d67: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00826d6b: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00826d6f: mov eax, 2 */ r_eax = 0x2u;
    /* 00826d74: jmp 0x826ce9 */ goto L_00826ce9;
L_00826d79:; BB(0x00826d79);
    /* 00826d79: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00826d7c: jmp 0x826d18 */ goto L_00826d18;
L_00826d7e:; BB(0x00826d7e);
    /* 00826d7e: mov eax, 3 */ r_eax = 0x3u;
    /* 00826d83: jmp 0x826ce9 */ goto L_00826ce9;
L_00826d88:; BB(0x00826d88);
    /* 00826d88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826d8a: jmp 0x826ce9 */ goto L_00826ce9;
L_00826d8f:; BB(0x00826d8f);
    /* 00826d8f: movsx edx, byte ptr [0xaca904] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826d97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826d98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00826d99: call 0x827098 */ r_esp -= 4; W32(r_esp, 0x826d9eu); f_00827098();
    /* 00826d9e: add esp, 0x268 */ {  u32 a = r_esp; u32 b = 0x268u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826da4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826da5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826da6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826da7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826da8: ret  */ FN_RET(0x00826524); r_esp += 4; return;
L_00826da9:; BB(0x00826da9);
    /* 00826da9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826dab: je 0x826d25 */ if (fZ) goto L_00826d25;
L_00826db1:; BB(0x00826db1);
    /* 00826db1: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826db8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826db9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00826dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826dbc: call 0x827098 */ r_esp -= 4; W32(r_esp, 0x826dc1u); f_00827098();
    /* 00826dc1: add esp, 0x268 */ {  u32 a = r_esp; u32 b = 0x268u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826dc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826dc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826dc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826dca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826dcb: ret  */ FN_RET(0x00826524); r_esp += 4; return;
L_00826dcc:; BB(0x00826dcc);
    /* 00826dcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826dce: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00826dd4: call 0x827098 */ r_esp -= 4; W32(r_esp, 0x826dd9u); f_00827098();
    /* 00826dd9: add esp, 0x268 */ {  u32 a = r_esp; u32 b = 0x268u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826ddf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826de0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826de1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826de2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826de3: ret  */ FN_RET(0x00826524); r_esp += 4; return;
L_00826de4:; BB(0x00826de4);
    /* 00826de4: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00826de9: jmp 0x826922 */ goto L_00826922;
}

void f_00826df0(void) /* sub_826DF0 */
{
    FN_ENTER(0x00826df0);
    /* 00826df0: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x826df5u); f_00816d30();
    /* 00826df5: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826dfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826dfd: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x826e02u); f_00816cf0();
    /* 00826e02: push 0x115 */ { u32 v = 0x115u; r_esp -= 4; W32(r_esp, v); }
    /* 00826e07: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x826e0cu); f_0079317c();
    /* 00826e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00826e0d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x826e12u); f_00816cb8();
    /* 00826e12: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 00826e17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826e1a: ret  */ FN_RET(0x00826df0); r_esp += 4; return;
}

void f_00826e1c(void) /* sub_826E1C */
{
    FN_ENTER(0x00826e1c);
    /* 00826e1c: mov dword ptr [0xaca8e0], 0x3f800000 */ W32((u32)(0xaca8e0u), 0x3f800000u);
    /* 00826e26: mov dword ptr [0xaca8e4], 0x41000000 */ W32((u32)(0xaca8e4u), 0x41000000u);
    /* 00826e30: mov dword ptr [0xaca8e8], 0x3fc00000 */ W32((u32)(0xaca8e8u), 0x3fc00000u);
    /* 00826e3a: ret  */ FN_RET(0x00826e1c); r_esp += 4; return;
}

void f_00826e3c(void) /* sub_826E3C */
{
    FN_ENTER(0x00826e3c);
    /* 00826e3c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00826e40: mov dword ptr [ecx + 0x1ec], eax */ W32((u32)(r_ecx+0x1ecu), r_eax);
    /* 00826e46: ret 4 */ FN_RET(0x00826e3c); r_esp += 8; return;
}

void f_00826e50(void) /* sub_826E50 */
{
    FN_ENTER(0x00826e50);
    /* 00826e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826e51: mov ebp, eax */ r_ebp = r_eax;
    /* 00826e53: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00826e5a: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826e5d: je 0x826e61 */ if (fZ) goto L_00826e61;
L_00826e5f:; BB(0x00826e5f);
    /* 00826e5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826e60: ret  */ FN_RET(0x00826e50); r_esp += 4; return;
L_00826e61:; BB(0x00826e61);
    /* 00826e61: movzx ecx, word ptr [0xaca908] */ r_ecx = (u32)R16((u32)(0xaca908u));
    /* 00826e68: mov byte ptr [0xaca904], 4 */ W8((u32)(0xaca904u), 0x4u);
    /* 00826e6f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00826e71: mov byte ptr [0xaca900], dl */ W8((u32)(0xaca900u), (u8)r_edx);
    /* 00826e77: mov dword ptr [0xaca8fc], edx */ W32((u32)(0xaca8fcu), r_edx);
    /* 00826e7d: mov dword ptr [0xaca8f8], edx */ W32((u32)(0xaca8f8u), r_edx);
    /* 00826e83: and ecx, 0xf80f */ {  u32 a = r_ecx; u32 b = 0xf80fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00826e89: mov word ptr [0xaca908], cx */ W16((u32)(0xaca908u), (u16)r_ecx);
    /* 00826e90: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00826e92: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00826e98: call 0x718224 */ r_esp -= 4; W32(r_esp, 0x826e9du); f_00718224();
    /* 00826e9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826ea0: mov ecx, dword ptr [0xaca8ec] */ r_ecx = R32((u32)(0xaca8ecu));
    /* 00826ea6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826ea8: je 0x826eb0 */ if (fZ) goto L_00826eb0;
L_00826eaa:; BB(0x00826eaa);
    /* 00826eaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826eab: call 0x760998 */ r_esp -= 4; W32(r_esp, 0x826eb0u); f_00760998();
L_00826eb0:; BB(0x00826eb0);
    /* 00826eb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826eb1: ret  */ FN_RET(0x00826e50); r_esp += 4; return;
}

void f_00826eb4(void) /* sub_826EB4 */
{
    FN_ENTER(0x00826eb4);
    /* 00826eb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00826eb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00826eb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826eb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00826eb8: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00826ebb: mov ebp, dword ptr [0xa9c4f4] */ r_ebp = R32((u32)(0xa9c4f4u));
    /* 00826ec1: mov ecx, 0xaca500 */ r_ecx = 0xaca500u;
    /* 00826ec6: call 0x82722c */ r_esp -= 4; W32(r_esp, 0x826ecbu); f_0082722c();
    /* 00826ecb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826ecc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x826ed1u); f_0068d5a8();
    /* 00826ed1: mov ebp, eax */ r_ebp = r_eax;
    /* 00826ed3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826ed6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826ed8: je 0x826f4f */ if (fZ) goto L_00826f4f;
L_00826eda:; BB(0x00826eda);
    /* 00826eda: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00826edd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00826ede: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 00826ee4: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x826ee9u); f_006a54d4();
    /* 00826ee9: mov ecx, eax */ r_ecx = r_eax;
    /* 00826eeb: mov edx, 0xaca5f8 */ r_edx = 0xaca5f8u;
    /* 00826ef0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826ef2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00826ef4: jle 0x826f2f */ if ((fZ||fS!=fO)) goto L_00826f2f;
L_00826ef6:; BB(0x00826ef6);
    /* 00826ef6: mov ebx, eax */ r_ebx = r_eax;
    /* 00826ef8: mov esi, edx */ r_esi = r_edx;
    /* 00826efa: mov edi, ecx */ r_edi = r_ecx;
L_00826efc:; BB(0x00826efc);
    /* 00826efc: push dword ptr [esp + ebx*4] */ { u32 v = R32((u32)(r_esp+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00826eff: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x826f04u); f_005c5528();
    /* 00826f04: mov ecx, eax */ r_ecx = r_eax;
    /* 00826f06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826f09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826f0b: je 0x826f28 */ if (fZ) goto L_00826f28;
L_00826f0d:; BB(0x00826f0d);
    /* 00826f0d: mov eax, dword ptr [esp + ebx*4] */ r_eax = R32((u32)(r_esp+r_ebx*4));
    /* 00826f10: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00826f12: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00826f14: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x826f1au); call_ind(t); }
    /* 00826f1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00826f1c: jle 0x827018 */ if ((fZ||fS!=fO)) goto L_00827018;
L_00826f22:; BB(0x00826f22);
    /* 00826f22: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_00826f25:; BB(0x00826f25);
    /* 00826f25: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00826f28:; BB(0x00826f28);
    /* 00826f28: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00826f2b: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00826f2d: jl 0x826efc */ if ((fS!=fO)) goto L_00826efc;
L_00826f2f:; BB(0x00826f2f);
    /* 00826f2f: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00826f35: mov dword ptr [0xaca6e8], 0xffffff01 */ W32((u32)(0xaca6e8u), 0xffffff01u);
    /* 00826f3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826f41: je 0x827009 */ if (fZ) goto L_00827009;
L_00826f47:; BB(0x00826f47);
    /* 00826f47: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00826f4a: mov dword ptr [0xaca6ec], eax */ W32((u32)(0xaca6ecu), r_eax);
L_00826f4f:; BB(0x00826f4f);
    /* 00826f4f: movsx ebp, byte ptr [0xaca904] */ r_ebp = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00826f56: mov ecx, 0xaca6f0 */ r_ecx = 0xaca6f0u;
    /* 00826f5b: call 0x82722c */ r_esp -= 4; W32(r_esp, 0x826f60u); f_0082722c();
    /* 00826f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00826f61: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x826f66u); f_0068d5a8();
    /* 00826f66: mov ebp, eax */ r_ebp = r_eax;
    /* 00826f68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826f6b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826f6d: je 0x826fdc */ if (fZ) goto L_00826fdc;
L_00826f6f:; BB(0x00826f6f);
    /* 00826f6f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00826f72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00826f73: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 00826f79: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x826f7eu); f_006a54d4();
    /* 00826f7e: mov ecx, eax */ r_ecx = r_eax;
    /* 00826f80: mov edx, 0xaca7e8 */ r_edx = 0xaca7e8u;
    /* 00826f85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00826f87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00826f89: jle 0x826fc0 */ if ((fZ||fS!=fO)) goto L_00826fc0;
L_00826f8b:; BB(0x00826f8b);
    /* 00826f8b: mov ebx, eax */ r_ebx = r_eax;
    /* 00826f8d: mov esi, edx */ r_esi = r_edx;
    /* 00826f8f: mov edi, ecx */ r_edi = r_ecx;
L_00826f91:; BB(0x00826f91);
    /* 00826f91: push dword ptr [esp + ebx*4] */ { u32 v = R32((u32)(r_esp+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00826f94: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x826f99u); f_005c5528();
    /* 00826f99: mov ecx, eax */ r_ecx = r_eax;
    /* 00826f9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00826f9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826fa0: je 0x826fb9 */ if (fZ) goto L_00826fb9;
L_00826fa2:; BB(0x00826fa2);
    /* 00826fa2: mov eax, dword ptr [esp + ebx*4] */ r_eax = R32((u32)(r_esp+r_ebx*4));
    /* 00826fa5: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00826fa7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00826fa9: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x826fafu); call_ind(t); }
    /* 00826faf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00826fb1: jle 0x827000 */ if ((fZ||fS!=fO)) goto L_00827000;
L_00826fb3:; BB(0x00826fb3);
    /* 00826fb3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_00826fb6:; BB(0x00826fb6);
    /* 00826fb6: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00826fb9:; BB(0x00826fb9);
    /* 00826fb9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00826fbc: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00826fbe: jl 0x826f91 */ if ((fS!=fO)) goto L_00826f91;
L_00826fc0:; BB(0x00826fc0);
    /* 00826fc0: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00826fc6: mov dword ptr [0xaca8d8], 0xffffff01 */ W32((u32)(0xaca8d8u), 0xffffff01u);
    /* 00826fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00826fd2: je 0x826ff4 */ if (fZ) goto L_00826ff4;
L_00826fd4:; BB(0x00826fd4);
    /* 00826fd4: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00826fd7: mov dword ptr [0xaca8dc], eax */ W32((u32)(0xaca8dcu), r_eax);
L_00826fdc:; BB(0x00826fdc);
    /* 00826fdc: push dword ptr [0xaca8fc] */ { u32 v = R32((u32)(0xaca8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00826fe2: mov ecx, 0xaca6f0 */ r_ecx = 0xaca6f0u;
    /* 00826fe7: call 0x826e3c */ r_esp -= 4; W32(r_esp, 0x826fecu); f_00826e3c();
    /* 00826fec: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00826fef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00826ff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00826ff1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00826ff2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00826ff3: ret  */ FN_RET(0x00826eb4); r_esp += 4; return;
L_00826ff4:; BB(0x00826ff4);
    /* 00826ff4: mov dword ptr [0xaca8dc], 0 */ W32((u32)(0xaca8dcu), 0x0u);
    /* 00826ffe: jmp 0x826fdc */ goto L_00826fdc;
L_00827000:; BB(0x00827000);
    /* 00827000: mov dword ptr [esi + 4], 1 */ W32((u32)(r_esi+0x4u), 0x1u);
    /* 00827007: jmp 0x826fb6 */ goto L_00826fb6;
L_00827009:; BB(0x00827009);
    /* 00827009: mov dword ptr [0xaca6ec], 0 */ W32((u32)(0xaca6ecu), 0x0u);
    /* 00827013: jmp 0x826f4f */ goto L_00826f4f;
L_00827018:; BB(0x00827018);
    /* 00827018: mov dword ptr [esi + 4], 1 */ W32((u32)(r_esi+0x4u), 0x1u);
    /* 0082701f: jmp 0x826f25 */ goto L_00826f25;
}

