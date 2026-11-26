#include "protos.h"

void f_00782038(void) /* sub_782038 */
{
    FN_ENTER(0x00782038);
    /* 00782038: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x78203du); f_005ba204();
    /* 0078203d: call 0x5ba168 */ r_esp -= 4; W32(r_esp, 0x782042u); f_005ba168();
    /* 00782042: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x782047u); f_005ba1e0();
    /* 00782047: ret  */ FN_RET(0x00782038); r_esp += 4; return;
}

void f_00782048(void) /* sub_782048 */
{
    FN_ENTER(0x00782048);
    /* 00782048: call 0x787ce0 */ r_esp -= 4; W32(r_esp, 0x78204du); f_00787ce0();
    /* 0078204d: call 0x80ca04 */ r_esp -= 4; W32(r_esp, 0x782052u); f_0080ca04();
    /* 00782052: call 0x782058 */ r_esp -= 4; W32(r_esp, 0x782057u); f_00782058();
    /* 00782057: ret  */ FN_RET(0x00782048); r_esp += 4; return;
}

void f_00782058(void) /* sub_782058 */
{
    FN_ENTER(0x00782058);
    /* 00782058: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x78205du); f_0080a640();
    /* 0078205d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078205f: je 0x78206b */ if (fZ) goto L_0078206b;
L_00782061:; BB(0x00782061);
    /* 00782061: call 0x415700 */ r_esp -= 4; W32(r_esp, 0x782066u); f_00415700();
    /* 00782066: call 0x66654c */ r_esp -= 4; W32(r_esp, 0x78206bu); f_0066654c();
L_0078206b:; BB(0x0078206b);
    /* 0078206b: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x782070u); f_00807d60();
    /* 00782070: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782072: je 0x782083 */ if (fZ) goto L_00782083;
L_00782074:; BB(0x00782074);
    /* 00782074: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00782076: push 0x9f85e8 */ { u32 v = 0x9f85e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0078207b: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x782080u); f_0078b0a0();
    /* 00782080: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00782083:; BB(0x00782083);
    /* 00782083: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00782088: push 0x9f8500 */ { u32 v = 0x9f8500u; r_esp -= 4; W32(r_esp, v); }
    /* 0078208d: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x782092u); f_0078b0a0();
    /* 00782092: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782095: ret  */ FN_RET(0x00782058); r_esp += 4; return;
}

void f_00782098(void) /* sub_782098 */
{
    FN_ENTER(0x00782098);
    /* 00782098: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782099: mov ebp, esp */ r_ebp = r_esp;
    /* 0078209b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078209d: push 0x8f4570 */ { u32 v = 0x8f4570u; r_esp -= 4; W32(r_esp, v); }
    /* 007820a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007820a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007820a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007820b0: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007820b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007820b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007820b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007820bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007820bf: call 0x5bc4ec */ r_esp -= 4; W32(r_esp, 0x7820c4u); f_005bc4ec();
    /* 007820c4: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 007820cb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007820cd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7820d2u); f_005caba4();
    /* 007820d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007820d3: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 007820d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007820d8: je 0x7820ff */ if (fZ) goto L_007820ff;
L_007820da:; BB(0x007820da);
    /* 007820da: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 007820e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007820e8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 007820eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007820ed: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007820f3: call 0x502cbc */ r_esp -= 4; W32(r_esp, 0x7820f8u); f_00502cbc();
    /* 007820f8: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_007820ff:; BB(0x007820ff);
    /* 007820ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00782106: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0078210d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0078210f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x782114u); f_005caba4();
    /* 00782114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782115: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00782118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078211a: je 0x782141 */ if (fZ) goto L_00782141;
L_0078211c:; BB(0x0078211c);
    /* 0078211c: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00782123: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0078212a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0078212d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078212f: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782135: call 0x502cbc */ r_esp -= 4; W32(r_esp, 0x78213au); f_00502cbc();
    /* 0078213a: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00782141:; BB(0x00782141);
    /* 00782141: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00782148: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0078214f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00782151: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x782156u); f_005caba4();
    /* 00782156: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782157: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0078215a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078215c: je 0x782181 */ if (fZ) goto L_00782181;
L_0078215e:; BB(0x0078215e);
    /* 0078215e: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 00782165: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0078216c: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782172: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00782175: call 0x5066a4 */ r_esp -= 4; W32(r_esp, 0x78217au); f_005066a4();
    /* 0078217a: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00782181:; BB(0x00782181);
    /* 00782181: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00782188: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0078218f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00782191: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x782196u); f_005caba4();
    /* 00782196: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782197: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0078219a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078219c: je 0x7821c1 */ if (fZ) goto L_007821c1;
L_0078219e:; BB(0x0078219e);
    /* 0078219e: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 007821a5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007821ac: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007821b2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 007821b5: call 0x5069e0 */ r_esp -= 4; W32(r_esp, 0x7821bau); f_005069e0();
    /* 007821ba: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_007821c1:; BB(0x007821c1);
    /* 007821c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007821c8: call 0x5ca4b8 */ r_esp -= 4; W32(r_esp, 0x7821cdu); f_005ca4b8();
    /* 007821cd: call 0x80bbc0 */ r_esp -= 4; W32(r_esp, 0x7821d2u); f_0080bbc0();
    /* 007821d2: call 0x8076f0 */ r_esp -= 4; W32(r_esp, 0x7821d7u); f_008076f0();
    /* 007821d7: call 0x8104b4 */ r_esp -= 4; W32(r_esp, 0x7821dcu); f_008104b4();
    /* 007821dc: call 0x80d01c */ r_esp -= 4; W32(r_esp, 0x7821e1u); f_0080d01c();
    /* 007821e1: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 007821e8: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007821ea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7821efu); f_005caba4();
    /* 007821ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007821f0: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 007821f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007821f5: je 0x782214 */ if (fZ) goto L_00782214;
L_007821f7:; BB(0x007821f7);
    /* 007821f7: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 007821fe: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00782205: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00782208: call 0x7195c8 */ r_esp -= 4; W32(r_esp, 0x78220du); f_007195c8();
    /* 0078220d: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00782214:; BB(0x00782214);
    /* 00782214: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078221b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00782222: push 0x144 */ { u32 v = 0x144u; r_esp -= 4; W32(r_esp, v); }
    /* 00782227: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78222cu); f_005caba4();
    /* 0078222c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078222d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00782230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782232: je 0x782257 */ if (fZ) goto L_00782257;
L_00782234:; BB(0x00782234);
    /* 00782234: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0078223b: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00782242: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782248: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0078224b: call 0x716354 */ r_esp -= 4; W32(r_esp, 0x782250u); f_00716354();
    /* 00782250: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00782257:; BB(0x00782257);
    /* 00782257: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078225e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00782265: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782267: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78226cu); f_005caba4();
    /* 0078226c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078226d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00782270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782272: je 0x782297 */ if (fZ) goto L_00782297;
L_00782274:; BB(0x00782274);
    /* 00782274: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0078227b: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00782282: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782288: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0078228b: call 0x788d20 */ r_esp -= 4; W32(r_esp, 0x782290u); f_00788d20();
    /* 00782290: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00782297:; BB(0x00782297);
    /* 00782297: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078229e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007822a0: call 0x788f38 */ r_esp -= 4; W32(r_esp, 0x7822a5u); f_00788f38();
    /* 007822a5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 007822ac: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007822ae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7822b3u); f_005caba4();
    /* 007822b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007822b6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007822b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007822bb: je 0x7822e0 */ if (fZ) goto L_007822e0;
L_007822bd:; BB(0x007822bd);
    /* 007822bd: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 007822c4: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 007822cb: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007822d1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007822d4: call 0x77f13c */ r_esp -= 4; W32(r_esp, 0x7822d9u); f_0077f13c();
    /* 007822d9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_007822e0:; BB(0x007822e0);
    /* 007822e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007822e7: call 0x804d94 */ r_esp -= 4; W32(r_esp, 0x7822ecu); f_00804d94();
    /* 007822ec: call 0x6e9548 */ r_esp -= 4; W32(r_esp, 0x7822f1u); f_006e9548();
    /* 007822f1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 007822f8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007822fa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7822ffu); f_005caba4();
    /* 007822ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782300: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00782303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782305: je 0x78232a */ if (fZ) goto L_0078232a;
L_00782307:; BB(0x00782307);
    /* 00782307: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0078230e: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00782315: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078231b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0078231e: call 0x7b45ec */ r_esp -= 4; W32(r_esp, 0x782323u); f_007b45ec();
    /* 00782323: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0078232a:; BB(0x0078232a);
    /* 0078232a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00782331: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00782338: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0078233a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78233fu); f_005caba4();
    /* 0078233f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782340: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00782343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782345: je 0x78236a */ if (fZ) goto L_0078236a;
L_00782347:; BB(0x00782347);
    /* 00782347: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0078234e: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00782355: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078235b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078235e: call 0x816da8 */ r_esp -= 4; W32(r_esp, 0x782363u); f_00816da8();
    /* 00782363: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0078236a:; BB(0x0078236a);
    /* 0078236a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00782371: call 0x662874 */ r_esp -= 4; W32(r_esp, 0x782376u); f_00662874();
    /* 00782376: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x78237bu); f_0080a640();
    /* 0078237b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078237d: je 0x78238d */ if (fZ) goto L_0078238d;
L_0078237f:; BB(0x0078237f);
    /* 0078237f: call 0x80c1e8 */ r_esp -= 4; W32(r_esp, 0x782384u); f_0080c1e8();
    /* 00782384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782386: je 0x78238d */ if (fZ) goto L_0078238d;
L_00782388:; BB(0x00782388);
    /* 00782388: call 0x666ae4 */ r_esp -= 4; W32(r_esp, 0x78238du); f_00666ae4();
L_0078238d:; BB(0x0078238d);
    /* 0078238d: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x782392u); f_007a61a4();
    /* 00782392: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782395: je 0x782409 */ if (fZ) goto L_00782409;
L_00782397:; BB(0x00782397);
    /* 00782397: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0078239e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007823a0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7823a5u); f_005caba4();
    /* 007823a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007823a6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007823a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007823ab: je 0x7823d0 */ if (fZ) goto L_007823d0;
L_007823ad:; BB(0x007823ad);
    /* 007823ad: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007823b4: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 007823bb: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007823c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007823c4: call 0x6e06dc */ r_esp -= 4; W32(r_esp, 0x7823c9u); f_006e06dc();
    /* 007823c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007823d0:; BB(0x007823d0);
    /* 007823d0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007823d7: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x7823dcu); f_00807e10();
    /* 007823dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007823de: je 0x7823e5 */ if (fZ) goto L_007823e5;
L_007823e0:; BB(0x007823e0);
    /* 007823e0: call 0x8148a0 */ r_esp -= 4; W32(r_esp, 0x7823e5u); f_008148a0();
L_007823e5:; BB(0x007823e5);
    /* 007823e5: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007823eb: call 0x70ab8c */ r_esp -= 4; W32(r_esp, 0x7823f0u); f_0070ab8c();
    /* 007823f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007823f1: call 0x7089c4 */ r_esp -= 4; W32(r_esp, 0x7823f6u); f_007089c4();
    /* 007823f6: call 0x48301c */ r_esp -= 4; W32(r_esp, 0x7823fbu); f_0048301c();
    /* 007823fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007823fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00782405: mov esp, ebp */ r_esp = r_ebp;
    /* 00782407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782408: ret  */ FN_RET(0x00782098); r_esp += 4; return;
L_00782409:; BB(0x00782409);
    /* 00782409: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x78240eu); f_00807e10();
    /* 0078240e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782410: je 0x782397 */ if (fZ) goto L_00782397;
L_00782412:; BB(0x00782412);
    /* 00782412: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00782419: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078241b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x782420u); f_005caba4();
    /* 00782420: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782421: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00782424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782426: je 0x78244b */ if (fZ) goto L_0078244b;
L_00782428:; BB(0x00782428);
    /* 00782428: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0078242f: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00782436: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078243c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0078243f: call 0x6cd1f8 */ r_esp -= 4; W32(r_esp, 0x782444u); f_006cd1f8();
    /* 00782444: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0078244b:; BB(0x0078244b);
    /* 0078244b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00782452: jmp 0x782397 */ goto L_00782397;
}

void f_00782458(void) /* sub_782458 */
{
    FN_ENTER(0x00782458);
    /* 00782458: mov dword ptr [0xa9c100], 0x3f800000 */ W32((u32)(0xa9c100u), 0x3f800000u);
    /* 00782462: mov dword ptr [0xa9c104], 0x41000000 */ W32((u32)(0xa9c104u), 0x41000000u);
    /* 0078246c: mov dword ptr [0xa9c108], 0x3fc00000 */ W32((u32)(0xa9c108u), 0x3fc00000u);
    /* 00782476: ret  */ FN_RET(0x00782458); r_esp += 4; return;
}

void f_00782478(void) /* sub_782478 */
{
    FN_ENTER(0x00782478);
    /* 00782478: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0078247d: push 0x9f8500 */ { u32 v = 0x9f8500u; r_esp -= 4; W32(r_esp, v); }
    /* 00782482: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x782487u); f_0078b184();
    /* 00782487: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078248a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078248c: jne 0x78248f */ if (!fZ) goto L_0078248f;
L_0078248e:; BB(0x0078248e);
    /* 0078248e: ret  */ FN_RET(0x00782478); r_esp += 4; return;
L_0078248f:; BB(0x0078248f);
    /* 0078248f: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x782494u); f_00807d60();
    /* 00782494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782496: jne 0x7824b3 */ if (!fZ) goto L_007824b3;
L_00782498:; BB(0x00782498);
    /* 00782498: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x78249du); f_0080a640();
    /* 0078249d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078249f: jne 0x7824a7 */ if (!fZ) goto L_007824a7;
L_007824a1:; BB(0x007824a1);
    /* 007824a1: mov eax, 1 */ r_eax = 0x1u;
    /* 007824a6: ret  */ FN_RET(0x00782478); r_esp += 4; return;
L_007824a7:; BB(0x007824a7);
    /* 007824a7: call 0x667570 */ r_esp -= 4; W32(r_esp, 0x7824acu); f_00667570();
    /* 007824ac: call 0x415a28 */ r_esp -= 4; W32(r_esp, 0x7824b1u); f_00415a28();
    /* 007824b1: jmp 0x7824a1 */ goto L_007824a1;
L_007824b3:; BB(0x007824b3);
    /* 007824b3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007824b5: push 0x9f85e8 */ { u32 v = 0x9f85e8u; r_esp -= 4; W32(r_esp, v); }
    /* 007824ba: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7824bfu); f_0078b184();
    /* 007824bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007824c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007824c4: jne 0x782498 */ if (!fZ) goto L_00782498;
L_007824c6:; BB(0x007824c6);
    /* 007824c6: ret  */ FN_RET(0x00782478); r_esp += 4; return;
}

void f_007824c8(void) /* sub_7824C8 */
{
    FN_ENTER(0x007824c8);
    /* 007824c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007824ca: mov word ptr [0xa8fa94], ax */ W16((u32)(0xa8fa94u), (u16)r_eax);
    /* 007824d0: ret  */ FN_RET(0x007824c8); r_esp += 4; return;
}

void f_007824d4(void) /* sub_7824D4 */
{
    FN_ENTER(0x007824d4);
    /* 007824d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007824d5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007824d9: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x7824deu); f_00781dd4();
    /* 007824de: mov edi, eax */ r_edi = r_eax;
    /* 007824e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007824e3: mov ecx, edi */ r_ecx = r_edi;
    /* 007824e5: call 0x7824fc */ r_esp -= 4; W32(r_esp, 0x7824eau); f_007824fc();
    /* 007824ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007824ec: je 0x7824f0 */ if (fZ) goto L_007824f0;
L_007824ee:; BB(0x007824ee);
    /* 007824ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007824ef: ret  */ FN_RET(0x007824d4); r_esp += 4; return;
L_007824f0:; BB(0x007824f0);
    /* 007824f0: mov ecx, edi */ r_ecx = r_edi;
    /* 007824f2: call 0x782510 */ r_esp -= 4; W32(r_esp, 0x7824f7u); f_00782510();
    /* 007824f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007824f8: ret  */ FN_RET(0x007824d4); r_esp += 4; return;
}

void f_007824fc(void) /* sub_7824FC */
{
    FN_ENTER(0x007824fc);
    /* 007824fc: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 00782501: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782503: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00782508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782509: call 0x781534 */ r_esp -= 4; W32(r_esp, 0x78250eu); f_00781534();
    /* 0078250e: ret  */ FN_RET(0x007824fc); r_esp += 4; return;
}

void f_00782510(void) /* sub_782510 */
{
    FN_ENTER(0x00782510);
    /* 00782510: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782511: mov esi, ecx */ r_esi = r_ecx;
    /* 00782513: mov ecx, esi */ r_ecx = r_esi;
    /* 00782515: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 0078251a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078251c: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00782521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782522: call 0x7814e0 */ r_esp -= 4; W32(r_esp, 0x782527u); f_007814e0();
    /* 00782527: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 0078252c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078252e: je 0x782538 */ if (fZ) goto L_00782538;
L_00782530:; BB(0x00782530);
    /* 00782530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782531: mov ecx, eax */ r_ecx = r_eax;
    /* 00782533: call 0x7f3110 */ r_esp -= 4; W32(r_esp, 0x782538u); f_007f3110();
L_00782538:; BB(0x00782538);
    /* 00782538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782539: ret  */ FN_RET(0x00782510); r_esp += 4; return;
}

void f_00782520(void)
{
    FN_ENTER(0x00782520);
    /* 00782520: add byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00782523: mov ecx, 0xa1ffffef */ r_ecx = 0xa1ffffefu;
    /* 00782528: test byte ptr [edx - 0x3f7aff56], dh */ {  u32 a = R8((u32)(r_edx+0xc08500aau)); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078252e: je 0x782538 */ if (fZ) goto L_00782538;
L_00782530:; BB(0x00782530);
    /* 00782530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782531: mov ecx, eax */ r_ecx = r_eax;
    /* 00782533: call 0x7f3110 */ r_esp -= 4; W32(r_esp, 0x782538u); f_007f3110();
L_00782538:; BB(0x00782538);
    /* 00782538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782539: ret  */ FN_RET(0x00782520); r_esp += 4; return;
}

void f_0078253c(void) /* sub_78253C */
{
    FN_ENTER(0x0078253c);
    /* 0078253c: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00782542: push dword ptr [esp + 0x10c] */ { u32 v = R32((u32)(r_esp+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00782549: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078254d: call 0x78255c */ r_esp -= 4; W32(r_esp, 0x782552u); f_0078255c();
    /* 00782552: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782558: ret  */ FN_RET(0x0078253c); r_esp += 4; return;
}

void f_0078255c(void) /* sub_78255C */
{
    FN_ENTER(0x0078255c);
    /* 0078255c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078255d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078255f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00782561: call 0x781878 */ r_esp -= 4; W32(r_esp, 0x782566u); f_00781878();
    /* 00782566: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078256a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078256c: call 0x78175c */ r_esp -= 4; W32(r_esp, 0x782571u); f_0078175c();
    /* 00782571: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782573: jne 0x782579 */ if (!fZ) goto L_00782579;
L_00782575:; BB(0x00782575);
    /* 00782575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782576: ret 4 */ FN_RET(0x0078255c); r_esp += 8; return;
L_00782579:; BB(0x00782579);
    /* 00782579: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078257b: call 0x7824fc */ r_esp -= 4; W32(r_esp, 0x782580u); f_007824fc();
    /* 00782580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782582: je 0x782588 */ if (fZ) goto L_00782588;
L_00782584:; BB(0x00782584);
    /* 00782584: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782585: ret 4 */ FN_RET(0x0078255c); r_esp += 8; return;
L_00782588:; BB(0x00782588);
    /* 00782588: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078258a: call 0x782510 */ r_esp -= 4; W32(r_esp, 0x78258fu); f_00782510();
    /* 0078258f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782590: ret 4 */ FN_RET(0x0078255c); r_esp += 8; return;
}

void f_00782594(void) /* sub_782594 */
{
    FN_ENTER(0x00782594);
    /* 00782594: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078259a: push dword ptr [esp + 0x10c] */ { u32 v = R32((u32)(r_esp+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007825a1: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007825a5: call 0x7825b4 */ r_esp -= 4; W32(r_esp, 0x7825aau); f_007825b4();
    /* 007825aa: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007825b0: ret  */ FN_RET(0x00782594); r_esp += 4; return;
}

void f_007825b4(void) /* sub_7825B4 */
{
    FN_ENTER(0x007825b4);
    /* 007825b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007825b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007825b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007825b9: call 0x781878 */ r_esp -= 4; W32(r_esp, 0x7825beu); f_00781878();
    /* 007825be: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007825c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007825c4: call 0x7817f0 */ r_esp -= 4; W32(r_esp, 0x7825c9u); f_007817f0();
    /* 007825c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007825cb: jne 0x7825d1 */ if (!fZ) goto L_007825d1;
L_007825cd:; BB(0x007825cd);
    /* 007825cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007825ce: ret 4 */ FN_RET(0x007825b4); r_esp += 8; return;
L_007825d1:; BB(0x007825d1);
    /* 007825d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007825d3: call 0x7824fc */ r_esp -= 4; W32(r_esp, 0x7825d8u); f_007824fc();
    /* 007825d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007825da: je 0x7825e0 */ if (fZ) goto L_007825e0;
L_007825dc:; BB(0x007825dc);
    /* 007825dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007825dd: ret 4 */ FN_RET(0x007825b4); r_esp += 8; return;
L_007825e0:; BB(0x007825e0);
    /* 007825e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007825e2: call 0x782510 */ r_esp -= 4; W32(r_esp, 0x7825e7u); f_00782510();
    /* 007825e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007825e8: ret 4 */ FN_RET(0x007825b4); r_esp += 8; return;
}

void f_007825ec(void) /* sub_7825EC */
{
    FN_ENTER(0x007825ec);
    /* 007825ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007825ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007825ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007825ef: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007825f3: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 007825f9: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007825ff: lea esi, [edx + 0x114] */ r_esi = (u32)(r_edx+0x114u);
    /* 00782605: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782607: je 0x78262f */ if (fZ) goto L_0078262f;
L_00782609:; BB(0x00782609);
    /* 00782609: cmp ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078260c: jge 0x78262f */ if ((fS==fO)) goto L_0078262f;
L_0078260e:; BB(0x0078260e);
    /* 0078260e: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00782612: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00782614: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00782616: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00782619: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078261b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078261d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078261f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782621: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782623: push dword ptr [edx + edi + 0x114] */ { u32 v = R32((u32)(r_edx+r_edi+0x114u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078262a: call 0x7f3170 */ r_esp -= 4; W32(r_esp, 0x78262fu); f_007f3170();
L_0078262f:; BB(0x0078262f);
    /* 0078262f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782631: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782632: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782633: call 0x7815c8 */ r_esp -= 4; W32(r_esp, 0x782638u); f_007815c8();
    /* 00782638: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078263b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078263c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078263d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078263e: ret  */ FN_RET(0x007825ec); r_esp += 4; return;
}

void f_00782640(void) /* sub_782640 */
{
    FN_ENTER(0x00782640);
    /* 00782640: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 00782645: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782647: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078264c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078264d: call 0x78188c */ r_esp -= 4; W32(r_esp, 0x782652u); f_0078188c();
    /* 00782652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782655: ret  */ FN_RET(0x00782640); r_esp += 4; return;
}

void f_00782658(void) /* sub_782658 */
{
    FN_ENTER(0x00782658);
    /* 00782658: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782659: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078265a: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078265d: mov eax, 8 */ r_eax = 0x8u;
    /* 00782662: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00782666: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 0078266a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078266c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078266e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00782670: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 00782674: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 00782678: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078267c: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 00782682: add edx, 0x114 */ {  u32 a = r_edx; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00782688:; BB(0x00782688);
    /* 00782688: movzx esi, byte ptr [edx + 0x104] */ r_esi = (u32)R8((u32)(r_edx+0x104u));
    /* 0078268f: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782695: je 0x7826af */ if (fZ) goto L_007826af;
L_00782697:; BB(0x00782697);
    /* 00782697: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00782699: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 0078269b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078269e: add edx, 0x108 */ {  u32 a = r_edx; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007826a4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007826a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007826aa: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007826ad: jl 0x782688 */ if ((fS!=fO)) goto L_00782688;
L_007826af:; BB(0x007826af);
    /* 007826af: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 007826b3: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007826b6: jge 0x7826f0 */ if ((fS==fO)) goto L_007826f0;
L_007826b8:; BB(0x007826b8);
    /* 007826b8: mov eax, ecx */ r_eax = r_ecx;
    /* 007826ba: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007826bc: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007826bf: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007826c2: jl 0x7826df */ if ((fS!=fO)) goto L_007826df;
L_007826c4:; BB(0x007826c4);
    /* 007826c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007826c6: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 007826c8: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 007826cb: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 007826ce: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 007826d1: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 007826d4: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007826d7: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007826da: cmp ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007826dd: jl 0x7826c4 */ if ((fS!=fO)) goto L_007826c4;
L_007826df:; BB(0x007826df);
    /* 007826df: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 007826e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007826e8: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007826eb: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007826ee: jl 0x7826df */ if ((fS!=fO)) goto L_007826df;
L_007826f0:; BB(0x007826f0);
    /* 007826f0: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007826f6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007826f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007826fa: call 0x7d7910 */ r_esp -= 4; W32(r_esp, 0x7826ffu); f_007d7910();
    /* 007826ff: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782703: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782704: ret  */ FN_RET(0x00782658); r_esp += 4; return;
}

void f_00782708(void) /* sub_782708 */
{
    FN_ENTER(0x00782708);
    /* 00782708: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782709: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078270a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078270b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0078270f: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 00782715: add edx, 0x114 */ {  u32 a = r_edx; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078271b: lea edi, [ecx + 8] */ r_edi = (u32)(r_ecx+0x8u);
    /* 0078271e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00782720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00782722:; BB(0x00782722);
    /* 00782722: movzx esi, byte ptr [edx + 0x104] */ r_esi = (u32)R8((u32)(r_edx+0x104u));
    /* 00782729: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078272f: je 0x782749 */ if (fZ) goto L_00782749;
L_00782731:; BB(0x00782731);
    /* 00782731: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00782733: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00782735: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00782738: add edx, 0x108 */ {  u32 a = r_edx; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078273e: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782741: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00782744: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00782747: jl 0x782722 */ if ((fS!=fO)) goto L_00782722;
L_00782749:; BB(0x00782749);
    /* 00782749: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 0078274c: cmp ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078274f: jge 0x782789 */ if ((fS==fO)) goto L_00782789;
L_00782751:; BB(0x00782751);
    /* 00782751: mov eax, ebp */ r_eax = r_ebp;
    /* 00782753: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00782755: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00782758: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078275b: jl 0x782778 */ if ((fS!=fO)) goto L_00782778;
L_0078275d:; BB(0x0078275d);
    /* 0078275d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078275f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00782761: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00782764: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00782767: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0078276a: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0078276d: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00782770: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782773: cmp ebp, 0x16 */ {  u32 a = r_ebp; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00782776: jl 0x78275d */ if ((fS!=fO)) goto L_0078275d;
L_00782778:; BB(0x00782778);
    /* 00782778: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 0078277e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00782781: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782784: cmp ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00782787: jl 0x782778 */ if ((fS!=fO)) goto L_00782778;
L_00782789:; BB(0x00782789);
    /* 00782789: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078278a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078278b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078278c: ret  */ FN_RET(0x00782708); r_esp += 4; return;
}

void f_00782790(void) /* sub_782790 */
{
    FN_ENTER(0x00782790);
    /* 00782790: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00782794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00782796: jl 0x78279d */ if ((fS!=fO)) goto L_0078279d;
L_00782798:; BB(0x00782798);
    /* 00782798: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078279b: jl 0x7827a0 */ if ((fS!=fO)) goto L_007827a0;
L_0078279d:; BB(0x0078279d);
    /* 0078279d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078279f: ret  */ FN_RET(0x00782790); r_esp += 4; return;
L_007827a0:; BB(0x007827a0);
    /* 007827a0: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 007827a6: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007827a9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007827ab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007827ad: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007827b0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007827b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007827b4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007827b6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007827b8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007827ba: lea eax, [eax + edx + 0x114] */ r_eax = (u32)(r_eax+r_edx+0x114u);
    /* 007827c1: ret  */ FN_RET(0x00782790); r_esp += 4; return;
}

void f_007827c4(void) /* sub_7827C4 */
{
    FN_ENTER(0x007827c4);
    /* 007827c4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007827c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007827ca: jl 0x7827e9 */ if ((fS!=fO)) goto L_007827e9;
L_007827cc:; BB(0x007827cc);
    /* 007827cc: jg 0x7827e9 */ if ((!fZ&&fS==fO)) goto L_007827e9;
L_007827ce:; BB(0x007827ce);
    /* 007827ce: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007827d2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007827d4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007827d8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 007827db: mov dword ptr [edx*8 + 0xa9c110], eax */ W32((u32)(r_edx*8+0xa9c110u), r_eax);
    /* 007827e2: mov dword ptr [edx*8 + 0xa9c114], ecx */ W32((u32)(r_edx*8+0xa9c114u), r_ecx);
L_007827e9:; BB(0x007827e9);
    /* 007827e9: ret  */ FN_RET(0x007827c4); r_esp += 4; return;
}

void f_007827ec(void) /* sub_7827EC */
{
    FN_ENTER(0x007827ec);
    /* 007827ec: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007827f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007827f2: jl 0x7827f6 */ if ((fS!=fO)) goto L_007827f6;
L_007827f4:; BB(0x007827f4);
    /* 007827f4: jle 0x7827fb */ if ((fZ||fS!=fO)) goto L_007827fb;
L_007827f6:; BB(0x007827f6);
    /* 007827f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007827f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007827fa: ret  */ FN_RET(0x007827ec); r_esp += 4; return;
L_007827fb:; BB(0x007827fb);
    /* 007827fb: mov eax, dword ptr [edx*8 + 0xa9c110] */ r_eax = R32((u32)(r_edx*8+0xa9c110u));
    /* 00782802: mov edx, dword ptr [edx*8 + 0xa9c114] */ r_edx = R32((u32)(r_edx*8+0xa9c114u));
    /* 00782809: ret  */ FN_RET(0x007827ec); r_esp += 4; return;
}

void f_0078280c(void) /* sub_78280C */
{
    FN_ENTER(0x0078280c);
    /* 0078280c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078280f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00782812: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782813: call 0x7a8ec0 */ r_esp -= 4; W32(r_esp, 0x782818u); f_007a8ec0();
    /* 00782818: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0078281c: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00782821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782822: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00782826: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078282a: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078282e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782830: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00782834: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00782838: call 0x82c290 */ r_esp -= 4; W32(r_esp, 0x78283du); f_0082c290();
    /* 0078283d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782840: ret  */ FN_RET(0x0078280c); r_esp += 4; return;
}

void f_00782844(void) /* sub_782844 */
{
    FN_ENTER(0x00782844);
    /* 00782844: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00782847: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078284a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078284c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078284d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078284e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078284f: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782853: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782857: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078285b: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078285f: call 0x82c2b4 */ r_esp -= 4; W32(r_esp, 0x782864u); f_0082c2b4();
    /* 00782864: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782867: ret  */ FN_RET(0x00782844); r_esp += 4; return;
}

void f_00782868(void) /* sub_782868 */
{
    FN_ENTER(0x00782868);
    /* 00782868: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782869: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078286c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00782870: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00782872: fld dword ptr [0x979ad0] */ FPUSH(R_F32((u32)(0x979ad0u)));
    /* 00782878: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078287b: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x782880u); f_0082def4();
    /* 00782880: fcomp dword ptr [0x979ad0] */ fx_compare(ST(0), R_F32((u32)(0x979ad0u))); FPOP();
    /* 00782886: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782888: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782889: je 0x7828cc */ if (fZ) goto L_007828cc;
L_0078288b:; BB(0x0078288b);
    /* 0078288b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078288d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x782892u); f_0082df08();
    /* 00782892: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00782895: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782898: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078289c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007828a0: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007828a5: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007828aa: jne 0x7828db */ if (!fZ) goto L_007828db;
L_007828ac:; BB(0x007828ac);
    /* 007828ac: fld dword ptr [0x979ad0] */ FPUSH(R_F32((u32)(0x979ad0u)));
    /* 007828b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007828b5: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007828bc: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 007828c3: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 007828ca: jmp 0x7828db */ goto L_007828db;
L_007828cc:; BB(0x007828cc);
    /* 007828cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007828ce: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 007828d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007828d3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 007828d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007828d8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_007828db:; BB(0x007828db);
    /* 007828db: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007828de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007828e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007828e2: ret  */ FN_RET(0x00782868); r_esp += 4; return;
}

void f_007828e4(void) /* sub_7828E4 */
{
    FN_ENTER(0x007828e4);
    /* 007828e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007828e5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007828e8: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007828ec: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 007828ee: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 007828f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007828f3: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007828f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007828f9: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 007828fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007828ff: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00782901: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782903: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00782905: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00782907: fld dword ptr [0x979acc] */ FPUSH(R_F32((u32)(0x979accu)));
    /* 0078290d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0078290f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782911: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782913: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00782917: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782918: je 0x782973 */ if (fZ) goto L_00782973;
L_0078291a:; BB(0x0078291a);
    /* 0078291a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078291c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078291d: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00782921: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00782924: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x782929u); f_0082f9f8();
    /* 00782929: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0078292c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0078292f: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00782934: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782939: jne 0x782955 */ if (!fZ) goto L_00782955;
L_0078293b:; BB(0x0078293b);
    /* 0078293b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078293d: fld dword ptr [0x979acc] */ FPUSH(R_F32((u32)(0x979accu)));
    /* 00782943: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00782949: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 00782950: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782953: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782954: ret  */ FN_RET(0x007828e4); r_esp += 4; return;
L_00782955:; BB(0x00782955);
    /* 00782955: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00782959: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078295b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0078295f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00782961: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782963: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00782965: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00782969: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0078296b: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0078296e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782972: ret  */ FN_RET(0x007828e4); r_esp += 4; return;
L_00782973:; BB(0x00782973);
    /* 00782973: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00782975: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00782977: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00782979: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0078297c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078297f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782980: ret  */ FN_RET(0x007828e4); r_esp += 4; return;
}

void f_00782984(void) /* sub_782984 */
{
    FN_ENTER(0x00782984);
    /* 00782984: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x782989u); f_0082d7b0();
    /* 00782989: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078298b: call 0x83c670 */ r_esp -= 4; W32(r_esp, 0x782990u); f_0083c670();
    /* 00782990: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00782994: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x782999u); f_00831650();
    /* 00782999: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78299eu); f_0082da80();
    /* 0078299e: ret  */ FN_RET(0x00782984); r_esp += 4; return;
}

void f_007829a0(void) /* sub_7829A0 */
{
    FN_ENTER(0x007829a0);
    /* 007829a0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7829a5u); f_0082d7b0();
    /* 007829a5: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x7829aau); f_004d455c();
    /* 007829aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007829ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007829ad: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x7829b2u); f_0083a668();
    /* 007829b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007829b5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007829b9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007829bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007829bf: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x7829c4u); f_00830aa0();
    /* 007829c4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7829c9u); f_0082da80();
    /* 007829c9: ret  */ FN_RET(0x007829a0); r_esp += 4; return;
}

void f_007829cc(void) /* sub_7829CC */
{
    FN_ENTER(0x007829cc);
    /* 007829cc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007829d0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007829d4: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 007829d7: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 007829d9: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007829db: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 007829de: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007829e0: fcomp dword ptr [0x979ac8] */ fx_compare(ST(0), R_F32((u32)(0x979ac8u))); FPOP();
    /* 007829e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007829e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007829e9: jb 0x7829ee */ if (fC) goto L_007829ee;
L_007829eb:; BB(0x007829eb);
    /* 007829eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007829ed: ret  */ FN_RET(0x007829cc); r_esp += 4; return;
L_007829ee:; BB(0x007829ee);
    /* 007829ee: mov eax, 1 */ r_eax = 0x1u;
    /* 007829f3: ret  */ FN_RET(0x007829cc); r_esp += 4; return;
}

void f_007829f4(void) /* sub_7829F4 */
{
    FN_ENTER(0x007829f4);
    /* 007829f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007829f5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007829f9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7829feu); f_0082ddd8();
    /* 007829fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00782a01: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00782a05: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x782a0au); f_0082dcbc();
    /* 00782a0a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00782a0c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00782a10: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782a13: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782a16: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00782a18: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00782a1a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00782a1c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00782a20: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00782a23: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00782a25: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00782a27: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00782a29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782a2b: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00782a2e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00782a30: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00782a32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782a33: ret  */ FN_RET(0x007829f4); r_esp += 4; return;
}

void f_00782a34(void) /* sub_782A34 */
{
    FN_ENTER(0x00782a34);
    /* 00782a34: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00782a38: mov ecx, eax */ r_ecx = r_eax;
    /* 00782a3a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00782a3d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00782a3f: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00782a41: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x782a46u); f_0082dcbc();
    /* 00782a46: fld dword ptr [0x979ac4] */ FPUSH(R_F32((u32)(0x979ac4u)));
    /* 00782a4c: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00782a50: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00782a52: ret  */ FN_RET(0x00782a34); r_esp += 4; return;
}

void f_00782a54(void) /* sub_782A54 */
{
    FN_ENTER(0x00782a54);
    /* 00782a54: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00782a58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a5b: mov edi, eax */ r_edi = r_eax;
    /* 00782a5d: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00782a60: mov esi, 1 */ r_esi = 0x1u;
    /* 00782a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782a67: je 0x782a73 */ if (fZ) goto L_00782a73;
L_00782a69:; BB(0x00782a69);
    /* 00782a69: call 0x782a58 */ r_esp -= 4; W32(r_esp, 0x782a6eu); f_00782a58();
    /* 00782a6e: mov esi, eax */ r_esi = r_eax;
    /* 00782a70: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00782a73:; BB(0x00782a73);
    /* 00782a73: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00782a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782a78: je 0x782a81 */ if (fZ) goto L_00782a81;
L_00782a7a:; BB(0x00782a7a);
    /* 00782a7a: call 0x782a58 */ r_esp -= 4; W32(r_esp, 0x782a7fu); f_00782a58();
    /* 00782a7f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00782a81:; BB(0x00782a81);
    /* 00782a81: mov eax, esi */ r_eax = r_esi;
    /* 00782a83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782a84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782a85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00782a86: ret  */ FN_RET(0x00782a54); r_esp += 4; return;
}

void f_00782a58(void) /* sub_782A58 */
{
    FN_ENTER(0x00782a58);
    /* 00782a58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a5b: mov edi, eax */ r_edi = r_eax;
    /* 00782a5d: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00782a60: mov esi, 1 */ r_esi = 0x1u;
    /* 00782a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782a67: je 0x782a73 */ if (fZ) goto L_00782a73;
L_00782a69:; BB(0x00782a69);
    /* 00782a69: call 0x782a58 */ r_esp -= 4; W32(r_esp, 0x782a6eu); f_00782a58();
    /* 00782a6e: mov esi, eax */ r_esi = r_eax;
    /* 00782a70: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00782a73:; BB(0x00782a73);
    /* 00782a73: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00782a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782a78: je 0x782a81 */ if (fZ) goto L_00782a81;
L_00782a7a:; BB(0x00782a7a);
    /* 00782a7a: call 0x782a58 */ r_esp -= 4; W32(r_esp, 0x782a7fu); f_00782a58();
    /* 00782a7f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00782a81:; BB(0x00782a81);
    /* 00782a81: mov eax, esi */ r_eax = r_esi;
    /* 00782a83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782a84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782a85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00782a86: ret  */ FN_RET(0x00782a58); r_esp += 4; return;
}

void f_00782a88(void) /* sub_782A88 */
{
    FN_ENTER(0x00782a88);
    /* 00782a88: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00782a8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782a8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a8f: mov edx, eax */ r_edx = r_eax;
    /* 00782a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00782a93: mov ebx, eax */ r_ebx = r_eax;
    /* 00782a95: mov esi, edx */ r_esi = r_edx;
L_00782a97:; BB(0x00782a97);
    /* 00782a97: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00782a99: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00782a9c: jne 0x782aa1 */ if (!fZ) goto L_00782aa1;
L_00782a9e:; BB(0x00782a9e);
    /* 00782a9e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00782aa1:; BB(0x00782aa1);
    /* 00782aa1: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00782aa4: jne 0x782ab0 */ if (!fZ) goto L_00782ab0;
L_00782aa6:; BB(0x00782aa6);
    /* 00782aa6: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00782aa9: call 0x782a8c */ r_esp -= 4; W32(r_esp, 0x782aaeu); f_00782a8c();
    /* 00782aae: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00782ab0:; BB(0x00782ab0);
    /* 00782ab0: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00782ab3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782ab5: jne 0x782a97 */ if (!fZ) goto L_00782a97;
L_00782ab7:; BB(0x00782ab7);
    /* 00782ab7: mov eax, ebx */ r_eax = r_ebx;
    /* 00782ab9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782aba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782abb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782abc: ret  */ FN_RET(0x00782a88); r_esp += 4; return;
}

void f_00782a8c(void) /* sub_782A8C */
{
    FN_ENTER(0x00782a8c);
    /* 00782a8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782a8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782a8f: mov edx, eax */ r_edx = r_eax;
    /* 00782a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00782a93: mov ebx, eax */ r_ebx = r_eax;
    /* 00782a95: mov esi, edx */ r_esi = r_edx;
L_00782a97:; BB(0x00782a97);
    /* 00782a97: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00782a99: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00782a9c: jne 0x782aa1 */ if (!fZ) goto L_00782aa1;
L_00782a9e:; BB(0x00782a9e);
    /* 00782a9e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00782aa1:; BB(0x00782aa1);
    /* 00782aa1: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00782aa4: jne 0x782ab0 */ if (!fZ) goto L_00782ab0;
L_00782aa6:; BB(0x00782aa6);
    /* 00782aa6: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00782aa9: call 0x782a8c */ r_esp -= 4; W32(r_esp, 0x782aaeu); f_00782a8c();
    /* 00782aae: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00782ab0:; BB(0x00782ab0);
    /* 00782ab0: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00782ab3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782ab5: jne 0x782a97 */ if (!fZ) goto L_00782a97;
L_00782ab7:; BB(0x00782ab7);
    /* 00782ab7: mov eax, ebx */ r_eax = r_ebx;
    /* 00782ab9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782aba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782abb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782abc: ret  */ FN_RET(0x00782a8c); r_esp += 4; return;
}

void f_00782ac0(void) /* sub_782AC0 */
{
    FN_ENTER(0x00782ac0);
    /* 00782ac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782ac1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782ac2: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00782ac6: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00782aca: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782ace: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782ad2: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x782ad7u); f_007a900c();
    /* 00782ad7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782ada: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00782adc: jg 0x782ae6 */ if ((!fZ&&fS==fO)) goto L_00782ae6;
L_00782ade:; BB(0x00782ade);
    /* 00782ade: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00782ae0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00782ae2: jg 0x782ae6 */ if ((!fZ&&fS==fO)) goto L_00782ae6;
L_00782ae4:; BB(0x00782ae4);
    /* 00782ae4: mov edi, eax */ r_edi = r_eax;
L_00782ae6:; BB(0x00782ae6);
    /* 00782ae6: mov eax, esi */ r_eax = r_esi;
    /* 00782ae8: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00782aeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00782aed: jl 0x782b04 */ if ((fS!=fO)) goto L_00782b04;
L_00782aef:; BB(0x00782aef);
    /* 00782aef: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00782af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782af4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782af5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782af6: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x782afbu); f_007a8c74();
    /* 00782afb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00782afe:; BB(0x00782afe);
    /* 00782afe: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00782b01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782b02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00782b03: ret  */ FN_RET(0x00782ac0); r_esp += 4; return;
L_00782b04:; BB(0x00782b04);
    /* 00782b04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b06: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x782b0bu); f_007a900c();
    /* 00782b0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782b0e: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00782b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00782b13: jl 0x782b2a */ if ((fS!=fO)) goto L_00782b2a;
L_00782b15:; BB(0x00782b15);
    /* 00782b15: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782b17: jl 0x782b21 */ if ((fS!=fO)) goto L_00782b21;
L_00782b19:; BB(0x00782b19);
    /* 00782b19: mov eax, esi */ r_eax = r_esi;
    /* 00782b1b: sub eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00782b1f: jmp 0x782afe */ goto L_00782afe;
L_00782b21:; BB(0x00782b21);
    /* 00782b21: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00782b25: lea eax, [esi + edx] */ r_eax = (u32)(r_esi+r_edx);
    /* 00782b28: jmp 0x782afe */ goto L_00782afe;
L_00782b2a:; BB(0x00782b2a);
    /* 00782b2a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00782b2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00782b2f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b31: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x782b36u); f_007a8c74();
    /* 00782b36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782b39: jmp 0x782afe */ goto L_00782afe;
}

void f_00782b3c(void) /* sub_782B3C */
{
    FN_ENTER(0x00782b3c);
    /* 00782b3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b3d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00782b40: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00782b44: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 00782b47: mov eax, edi */ r_eax = r_edi;
    /* 00782b49: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00782b4d: call 0x782b70 */ r_esp -= 4; W32(r_esp, 0x782b52u); f_00782b70();
    /* 00782b52: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00782b56: mov ecx, edi */ r_ecx = r_edi;
    /* 00782b58: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x782b5du); f_0082ebac();
    /* 00782b5d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782b60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00782b61: ret  */ FN_RET(0x00782b3c); r_esp += 4; return;
}

void f_00782b64(void) /* sub_782B64 */
{
    FN_ENTER(0x00782b64);
    /* 00782b64: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00782b68: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00782b6c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00782b70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782b72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782b73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b74: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00782b76: mov ebp, edx */ r_ebp = r_edx;
    /* 00782b78: mov esi, eax */ r_esi = r_eax;
    /* 00782b7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00782b7c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x782b81u); f_0082ddd8();
    /* 00782b81: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00782b84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00782b86: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x782b8bu); f_0082dcbc();
    /* 00782b8b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00782b8d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782b90: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782b93: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00782b95: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00782b97: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00782b99: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00782b9c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00782b9e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00782ba0: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00782ba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782ba4: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00782ba7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00782ba9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00782bab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782bac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782bad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782bae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782baf: ret  */ FN_RET(0x00782b64); r_esp += 4; return;
}

void f_00782b70(void)
{
    FN_ENTER(0x00782b70);
    /* 00782b70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782b72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782b73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782b74: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00782b76: mov ebp, edx */ r_ebp = r_edx;
    /* 00782b78: mov esi, eax */ r_esi = r_eax;
    /* 00782b7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00782b7c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x782b81u); f_0082ddd8();
    /* 00782b81: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00782b84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00782b86: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x782b8bu); f_0082dcbc();
    /* 00782b8b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00782b8d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782b90: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00782b93: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00782b95: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00782b97: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00782b99: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00782b9c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00782b9e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00782ba0: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00782ba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782ba4: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00782ba7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00782ba9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00782bab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782bac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782bad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782bae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782baf: ret  */ FN_RET(0x00782b70); r_esp += 4; return;
}

void f_00782bb0(void) /* sub_782BB0 */
{
    FN_ENTER(0x00782bb0);
    /* 00782bb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782bb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782bb2: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00782bb6: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00782bba: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00782bbf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00782bc1: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00782bc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782bc5: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00782bc8: fadd dword ptr [0x979ac0] */ ST(0) = ST(0) + R_F32((u32)(0x979ac0u));
    /* 00782bce: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00782bd1: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00782bd4: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00782bd7: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 00782bda: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00782bdd: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x782be2u); f_00780630();
    /* 00782be2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782be7: je 0x782c05 */ if (fZ) goto L_00782c05;
L_00782be9:; BB(0x00782be9);
    /* 00782be9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00782bec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00782bee: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00782bf1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00782bf4: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00782bf7: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00782bfa: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00782bfd: mov eax, 1 */ r_eax = 0x1u;
    /* 00782c02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782c03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782c04: ret  */ FN_RET(0x00782bb0); r_esp += 4; return;
L_00782c05:; BB(0x00782c05);
    /* 00782c05: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00782c07: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00782c0a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00782c0d: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00782c10: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00782c13: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00782c16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782c18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782c19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782c1a: ret  */ FN_RET(0x00782bb0); r_esp += 4; return;
}

void f_00782c1c(void) /* sub_782C1C */
{
    FN_ENTER(0x00782c1c);
    /* 00782c1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782c1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782c1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782c1f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00782c23: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00782c27: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00782c2b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00782c2d: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00782c30: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00782c35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782c36: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00782c39: fadd dword ptr [0x979abc] */ ST(0) = ST(0) + R_F32((u32)(0x979abcu));
    /* 00782c3f: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00782c42: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00782c45: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00782c48: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 00782c4b: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00782c4e: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x782c53u); f_00780630();
    /* 00782c53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782c56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782c58: je 0x782c8b */ if (fZ) goto L_00782c8b;
L_00782c5a:; BB(0x00782c5a);
    /* 00782c5a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00782c5d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00782c5f: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00782c62: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00782c65: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00782c68: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00782c6b: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00782c6e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00782c71: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00782c74: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00782c76: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 00782c79: mov dword ptr [ebx + 4], ebp */ W32((u32)(r_ebx+0x4u), r_ebp);
    /* 00782c7c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00782c7f: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00782c82: mov eax, 1 */ r_eax = 0x1u;
    /* 00782c87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782c88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782c89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782c8a: ret  */ FN_RET(0x00782c1c); r_esp += 4; return;
L_00782c8b:; BB(0x00782c8b);
    /* 00782c8b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00782c8d: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00782c90: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00782c93: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00782c96: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00782c99: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00782c9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782c9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782c9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782ca0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782ca1: ret  */ FN_RET(0x00782c1c); r_esp += 4; return;
}

void f_00782ca4(void) /* sub_782CA4 */
{
    FN_ENTER(0x00782ca4);
    /* 00782ca4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00782ca8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00782caa: mov eax, edx */ r_eax = r_edx;
    /* 00782cac: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00782caf: sub eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00782cb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00782cb5: jl 0x782cc7 */ if ((fS!=fO)) goto L_00782cc7;
L_00782cb7:; BB(0x00782cb7);
    /* 00782cb7: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00782cbd: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00782cc0: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00782cc2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00782cc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782cc6: ret  */ FN_RET(0x00782ca4); r_esp += 4; return;
L_00782cc7:; BB(0x00782cc7);
    /* 00782cc7: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782ccd: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00782ccf: mov eax, 1 */ r_eax = 0x1u;
    /* 00782cd4: ret  */ FN_RET(0x00782ca4); r_esp += 4; return;
}

void f_00782cd8(void) /* sub_782CD8 */
{
    FN_ENTER(0x00782cd8);
    /* 00782cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00782cd9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00782cdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00782cdd: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x782ce2u); f_00782ce8();
    /* 00782ce2: mov eax, ebp */ r_eax = r_ebp;
    /* 00782ce4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00782ce5: ret  */ FN_RET(0x00782cd8); r_esp += 4; return;
}

void f_00782ce8(void) /* sub_782CE8 */
{
    FN_ENTER(0x00782ce8);
    /* 00782ce8: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00782cef: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00782cf5: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00782cfc: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00782d03: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00782d0a: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00782d11: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00782d18: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00782d1f: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00782d26: ret  */ FN_RET(0x00782ce8); r_esp += 4; return;
}

void f_00782d28(void) /* sub_782D28 */
{
    FN_ENTER(0x00782d28);
    /* 00782d28: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00782d2c: fld dword ptr [0x979ab4] */ FPUSH(R_F32((u32)(0x979ab4u)));
    /* 00782d32: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00782d34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782d36: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782d37: ja 0x782d96 */ if ((!fC&&!fZ)) goto L_00782d96;
L_00782d39:; BB(0x00782d39);
    /* 00782d39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00782d3b: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00782d3e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00782d40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782d42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782d43: ja 0x782d85 */ if ((!fC&&!fZ)) goto L_00782d85;
L_00782d45:; BB(0x00782d45);
    /* 00782d45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00782d47: fcom dword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x10u))); 
    /* 00782d4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782d4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782d4d: jae 0x782d5a */ if (!fC) goto L_00782d5a;
L_00782d4f:; BB(0x00782d4f);
    /* 00782d4f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00782d51: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00782d54: fadd dword ptr [ecx + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x18u));
    /* 00782d57: ret 4 */ FN_RET(0x00782d28); r_esp += 8; return;
L_00782d5a:; BB(0x00782d5a);
    /* 00782d5a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00782d5c: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00782d5f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00782d61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782d63: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782d64: jbe 0x782d7b */ if ((fC||fZ)) goto L_00782d7b;
L_00782d66:; BB(0x00782d66);
    /* 00782d66: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00782d68: fld dword ptr [0x979ab0] */ FPUSH(R_F32((u32)(0x979ab0u)));
    /* 00782d6e: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00782d71: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00782d73: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00782d75: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 00782d78: ret 4 */ FN_RET(0x00782d28); r_esp += 8; return;
L_00782d7b:; BB(0x00782d7b);
    /* 00782d7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00782d7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00782d7f: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00782d82: ret 4 */ FN_RET(0x00782d28); r_esp += 8; return;
L_00782d85:; BB(0x00782d85);
    /* 00782d85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00782d87: fld dword ptr [0x979ab0] */ FPUSH(R_F32((u32)(0x979ab0u)));
    /* 00782d8d: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00782d8f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00782d91: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00782d93: ret 4 */ FN_RET(0x00782d28); r_esp += 8; return;
L_00782d96:; BB(0x00782d96);
    /* 00782d96: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00782d98: ret 4 */ FN_RET(0x00782d28); r_esp += 8; return;
}

void f_00782d9c(void) /* sub_782D9C */
{
    FN_ENTER(0x00782d9c);
    /* 00782d9c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00782da0: fcomp dword ptr [ecx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x14u))); FPOP();
    /* 00782da3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00782da5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00782da7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00782da8: mov eax, 1 */ r_eax = 0x1u;
    /* 00782dad: jae 0x782db1 */ if (!fC) goto L_00782db1;
L_00782daf:; BB(0x00782daf);
    /* 00782daf: mov eax, edx */ r_eax = r_edx;
L_00782db1:; BB(0x00782db1);
    /* 00782db1: ret 4 */ FN_RET(0x00782d9c); r_esp += 8; return;
}

void f_00782db4(void) /* sub_782DB4 */
{
    FN_ENTER(0x00782db4);
    /* 00782db4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00782db5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782db6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00782db9: mov eax, 0x979948 */ r_eax = 0x979948u;
    /* 00782dbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00782dc0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00782dc3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00782dc6: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00782dc9: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00782dcd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00782dd1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00782dd4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00782dd8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00782ddb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00782ddf: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00782de2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00782de6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00782de9: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00782dec: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00782df0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00782df4: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00782df7: mov esi, 0x9f9838 */ r_esi = 0x9f9838u;
L_00782dfc:; BB(0x00782dfc);
    /* 00782dfc: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00782dfe: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782e01: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00782e03: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00782e06: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00782e08: jne 0x782dfc */ if (!fZ) goto L_00782dfc;
L_00782e0a:; BB(0x00782e0a);
    /* 00782e0a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x782e0fu); f_006dc358();
    /* 00782e0f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00782e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782e14: push 0x91ed4c */ { u32 v = 0x91ed4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782e19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00782e1a: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x782e1fu); f_00858bf5();
    /* 00782e1f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782e22: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00782e26: mov edi, 0x9f9838 */ r_edi = 0x9f9838u;
    /* 00782e2b: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00782e30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782e32: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 00782e34: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00782e37:; BB(0x00782e37);
    /* 00782e37: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00782e39: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00782e3c: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00782e3e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00782e41: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00782e43: jne 0x782e37 */ if (!fZ) goto L_00782e37;
L_00782e45:; BB(0x00782e45);
    /* 00782e45: mov eax, 0x9f9838 */ r_eax = 0x9f9838u;
    /* 00782e4a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782e4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00782e4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00782e4f: ret  */ FN_RET(0x00782db4); r_esp += 4; return;
}

void f_00782e50(void) /* sub_782E50 */
{
    FN_ENTER(0x00782e50);
    /* 00782e50: mov eax, dword ptr [0xa9c144] */ r_eax = R32((u32)(0xa9c144u));
    /* 00782e55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782e57: je 0x782e6a */ if (fZ) goto L_00782e6a;
L_00782e59:; BB(0x00782e59);
    /* 00782e59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782e5a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x782e5fu); f_0082e960();
    /* 00782e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782e60: mov dword ptr [0xa9c144], 0 */ W32((u32)(0xa9c144u), 0x0u);
L_00782e6a:; BB(0x00782e6a);
    /* 00782e6a: call 0x501da8 */ r_esp -= 4; W32(r_esp, 0x782e6fu); f_00501da8();
    /* 00782e6f: mov eax, dword ptr [0xa9c148] */ r_eax = R32((u32)(0xa9c148u));
    /* 00782e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782e76: je 0x782e89 */ if (fZ) goto L_00782e89;
L_00782e78:; BB(0x00782e78);
    /* 00782e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782e79: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x782e7eu); f_0082e960();
    /* 00782e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782e7f: mov dword ptr [0xa9c148], 0 */ W32((u32)(0xa9c148u), 0x0u);
L_00782e89:; BB(0x00782e89);
    /* 00782e89: ret  */ FN_RET(0x00782e50); r_esp += 4; return;
}

void f_00782e76(void)
{
    FN_ENTER(0x00782e76);
    /* 00782e76: je 0x782e89 */ if (fZ) goto L_00782e89;
L_00782e78:; BB(0x00782e78);
    /* 00782e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782e79: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x782e7eu); f_0082e960();
    /* 00782e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782e7f: mov dword ptr [0xa9c148], 0 */ W32((u32)(0xa9c148u), 0x0u);
L_00782e89:; BB(0x00782e89);
    /* 00782e89: ret  */ FN_RET(0x00782e76); r_esp += 4; return;
}

void f_00782e8c(void) /* sub_782E8C */
{
    FN_ENTER(0x00782e8c);
    /* 00782e8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00782e8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782e8f: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x782e94u); f_0082c204();
    /* 00782e94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782e95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782e97: jne 0x782ea5 */ if (!fZ) goto L_00782ea5;
L_00782e99:; BB(0x00782e99);
    /* 00782e99: mov dword ptr [esp], 0xfffffffc */ W32((u32)(r_esp), 0xfffffffcu);
    /* 00782ea0: jmp 0x782f5b */ goto L_00782f5b;
L_00782ea5:; BB(0x00782ea5);
    /* 00782ea5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782ea7: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x782eacu); f_007083d4();
    /* 00782eac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782ead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782eaf: jne 0x782ece */ if (!fZ) goto L_00782ece;
L_00782eb1:; BB(0x00782eb1);
    /* 00782eb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782eb3: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x782eb8u); f_0082c3a8();
    /* 00782eb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782eb9: cmp eax, -0x7d */ {  u32 a = r_eax; u32 b = 0xffffff83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00782ebc: jne 0x782f60 */ if (!fZ) goto L_00782f60;
L_00782ec2:; BB(0x00782ec2);
    /* 00782ec2: mov dword ptr [esp], 0xfffffffa */ W32((u32)(r_esp), 0xfffffffau);
    /* 00782ec9: jmp 0x782f5b */ goto L_00782f5b;
L_00782ece:; BB(0x00782ece);
    /* 00782ece: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782ed0: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x782ed5u); f_0082c1e0();
    /* 00782ed5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782ed8: je 0x782ee3 */ if (fZ) goto L_00782ee3;
L_00782eda:; BB(0x00782eda);
    /* 00782eda: mov dword ptr [esp], 0xfffffffd */ W32((u32)(r_esp), 0xfffffffdu);
    /* 00782ee1: jmp 0x782f5b */ goto L_00782f5b;
L_00782ee3:; BB(0x00782ee3);
    /* 00782ee3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782ee5: call 0x8002f0 */ r_esp -= 4; W32(r_esp, 0x782eeau); f_008002f0();
    /* 00782eea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782eed: jg 0x782ef8 */ if ((!fZ&&fS==fO)) goto L_00782ef8;
L_00782eef:; BB(0x00782eef);
    /* 00782eef: mov dword ptr [esp], 0xfffffff9 */ W32((u32)(r_esp), 0xfffffff9u);
    /* 00782ef6: jmp 0x782f5b */ goto L_00782f5b;
L_00782ef8:; BB(0x00782ef8);
    /* 00782ef8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782efa: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x782effu); f_006dc358();
    /* 00782eff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782f00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782f02: je 0x782f0d */ if (fZ) goto L_00782f0d;
L_00782f04:; BB(0x00782f04);
    /* 00782f04: mov dword ptr [esp], 0xfffffffe */ W32((u32)(r_esp), 0xfffffffeu);
    /* 00782f0b: jmp 0x782f5b */ goto L_00782f5b;
L_00782f0d:; BB(0x00782f0d);
    /* 00782f0d: call 0x782db4 */ r_esp -= 4; W32(r_esp, 0x782f12u); f_00782db4();
    /* 00782f12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782f13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782f15: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x782f1au); f_0082c198();
    /* 00782f1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782f1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782f1f: jne 0x782f2a */ if (!fZ) goto L_00782f2a;
L_00782f21:; BB(0x00782f21);
    /* 00782f21: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00782f28: jmp 0x782f5b */ goto L_00782f5b;
L_00782f2a:; BB(0x00782f2a);
    /* 00782f2a: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00782f2f: jne 0x782f3a */ if (!fZ) goto L_00782f3a;
L_00782f31:; BB(0x00782f31);
    /* 00782f31: mov dword ptr [esp], 0xfffffffe */ W32((u32)(r_esp), 0xfffffffeu);
    /* 00782f38: jmp 0x782f5b */ goto L_00782f5b;
L_00782f3a:; BB(0x00782f3a);
    /* 00782f3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00782f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782f3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00782f3e: call 0x82c22c */ r_esp -= 4; W32(r_esp, 0x782f43u); f_0082c22c();
    /* 00782f43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00782f46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00782f49: jge 0x782f54 */ if ((fS==fO)) goto L_00782f54;
L_00782f4b:; BB(0x00782f4b);
    /* 00782f4b: mov dword ptr [esp], 0xffffffff */ W32((u32)(r_esp), 0xffffffffu);
    /* 00782f52: jmp 0x782f5b */ goto L_00782f5b;
L_00782f54:; BB(0x00782f54);
    /* 00782f54: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_00782f5b:; BB(0x00782f5b);
    /* 00782f5b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00782f5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782f5f: ret  */ FN_RET(0x00782e8c); r_esp += 4; return;
L_00782f60:; BB(0x00782f60);
    /* 00782f60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782f62: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x782f67u); f_0082c3a8();
    /* 00782f67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782f68: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00782f6d: jne 0x782f78 */ if (!fZ) goto L_00782f78;
L_00782f6f:; BB(0x00782f6f);
    /* 00782f6f: mov dword ptr [esp], 0xfffffff8 */ W32((u32)(r_esp), 0xfffffff8u);
    /* 00782f76: jmp 0x782f5b */ goto L_00782f5b;
L_00782f78:; BB(0x00782f78);
    /* 00782f78: mov dword ptr [esp], 0xfffffffe */ W32((u32)(r_esp), 0xfffffffeu);
    /* 00782f7f: jmp 0x782f5b */ goto L_00782f5b;
}

void f_00782f84(void) /* sub_782F84 */
{
    FN_ENTER(0x00782f84);
    /* 00782f84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782f85: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00782f88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00782f8a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x782f8fu); f_006dc358();
    /* 00782f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00782f90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782f92: jne 0x782fb0 */ if (!fZ) goto L_00782fb0;
L_00782f94:; BB(0x00782f94);
    /* 00782f94: movzx eax, word ptr [0xa9c14c] */ r_eax = (u32)R16((u32)(0xa9c14cu));
    /* 00782f9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00782f9d: je 0x782fa6 */ if (fZ) goto L_00782fa6;
L_00782f9f:; BB(0x00782f9f);
    /* 00782f9f: jle 0x782fa6 */ if ((fZ||fS!=fO)) goto L_00782fa6;
L_00782fa1:; BB(0x00782fa1);
    /* 00782fa1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00782fa4: jle 0x782fb7 */ if ((fZ||fS!=fO)) goto L_00782fb7;
L_00782fa6:; BB(0x00782fa6);
    /* 00782fa6: mov eax, 1 */ r_eax = 0x1u;
    /* 00782fab: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782fae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782faf: ret  */ FN_RET(0x00782f84); r_esp += 4; return;
L_00782fb0:; BB(0x00782fb0);
    /* 00782fb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00782fb2: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00782fb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00782fb6: ret  */ FN_RET(0x00782f84); r_esp += 4; return;
L_00782fb7:; BB(0x00782fb7);
    /* 00782fb7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x782fbcu); f_006dc358();
    /* 00782fbc: mov ebx, eax */ r_ebx = r_eax;
    /* 00782fbe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782fc0: je 0x782ff2 */ if (fZ) goto L_00782ff2;
L_00782fc2:; BB(0x00782fc2);
    /* 00782fc2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00782fc5: push dword ptr [0xa9c148] */ { u32 v = R32((u32)(0xa9c148u)); r_esp -= 4; W32(r_esp, v); }
    /* 00782fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00782fcc: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x782fd1u); f_0082c21c();
    /* 00782fd1: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00782fd5: push 0x1818c */ { u32 v = 0x1818cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782fda: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00782fdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00782fde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782fdf: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x782fe4u); f_0086b324();
    /* 00782fe4: push 0x1818c */ { u32 v = 0x1818cu; r_esp -= 4; W32(r_esp, v); }
    /* 00782fe9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00782fea: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x782fefu); f_0061cdb0();
    /* 00782fef: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00782ff2:; BB(0x00782ff2);
    /* 00782ff2: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 00782ffc: jmp 0x782fa6 */ goto L_00782fa6;
}

