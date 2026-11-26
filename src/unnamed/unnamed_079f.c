#include "protos.h"

void f_0079f1d8(void) /* sub_79F1D8 */
{
    FN_ENTER(0x0079f1d8);
    /* 0079f1d8: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079f1db: movzx eax, word ptr [0x9ff4fc] */ r_eax = (u32)R16((u32)(0x9ff4fcu));
    /* 0079f1e2: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f1e7: je 0x79f204 */ if (fZ) goto L_0079f204;
L_0079f1e9:; BB(0x0079f1e9);
    /* 0079f1e9: mov byte ptr [esp], 0xce */ W8((u32)(r_esp), 0xceu);
    /* 0079f1ed: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 0079f1f2: mov dword ptr [esp + 8], 4 */ W32((u32)(r_esp+0x8u), 0x4u);
    /* 0079f1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f1fb: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0079f1ff: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x79f204u); f_00800464();
L_0079f204:; BB(0x0079f204);
    /* 0079f204: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079f20a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f20c: je 0x79f213 */ if (fZ) goto L_0079f213;
L_0079f20e:; BB(0x0079f20e);
    /* 0079f20e: call 0x7d367c */ r_esp -= 4; W32(r_esp, 0x79f213u); f_007d367c();
L_0079f213:; BB(0x0079f213);
    /* 0079f213: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f216: ret  */ FN_RET(0x0079f1d8); r_esp += 4; return;
}

void f_0079f218(void) /* sub_79F218 */
{
    FN_ENTER(0x0079f218);
    /* 0079f218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f219: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f21b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f220u); f_00793168();
    /* 0079f220: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f221: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79f226u); f_0079a8c4();
    /* 0079f226: mov dword ptr [0xaab1cc], 0 */ W32((u32)(0xaab1ccu), 0x0u);
    /* 0079f230: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f235: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79f23au); f_0073ec50();
    /* 0079f23a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f23b: mov edx, dword ptr [0xaab204] */ r_edx = R32((u32)(0xaab204u));
    /* 0079f241: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079f244: jge 0x79f29f */ if ((fS==fO)) goto L_0079f29f;
L_0079f246:; BB(0x0079f246);
    /* 0079f246: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f249: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79f24eu); f_00735708();
    /* 0079f24e: mov dword ptr [0xaab25c], eax */ W32((u32)(0xaab25cu), r_eax);
    /* 0079f253: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f255: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f25au); f_00793168();
    /* 0079f25a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f25d: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f265: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f268: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f26du); f_00735c90();
    /* 0079f26d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f26f: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f274u); f_00793168();
    /* 0079f274: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f275: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f27b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f27d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f27f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f280: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f285u); f_00735c90();
    /* 0079f285: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f287: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f28cu); f_00793168();
    /* 0079f28c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f28d: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f293: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f295: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f298: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f29du); f_00735c90();
    /* 0079f29d: jmp 0x79f30e */ goto L_0079f30e;
L_0079f29f:; BB(0x0079f29f);
    /* 0079f29f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2a2: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79f2a7u); f_00735708();
    /* 0079f2a7: mov dword ptr [0xaab25c], eax */ W32((u32)(0xaab25cu), r_eax);
    /* 0079f2ac: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2ae: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f2b3u); f_00793168();
    /* 0079f2b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f2b6: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f2bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2be: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2c1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f2c6u); f_00735c90();
    /* 0079f2c6: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2c8: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f2cdu); f_00793168();
    /* 0079f2cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f2ce: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f2d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2d6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2d9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f2deu); f_00735c90();
    /* 0079f2de: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2e0: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f2e5u); f_00793168();
    /* 0079f2e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f2e6: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f2ec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2ee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2f1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f2f6u); f_00735c90();
    /* 0079f2f6: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0079f2f8: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f2fdu); f_00793168();
    /* 0079f2fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f2fe: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f304: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f306: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f309: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79f30eu); f_00735c90();
L_0079f30e:; BB(0x0079f30e);
    /* 0079f30e: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f314: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79f319u); f_0073608c();
    /* 0079f319: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079f31f: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79f324u); f_00736458();
    /* 0079f324: mov edx, dword ptr [0xaab25c] */ r_edx = R32((u32)(0xaab25cu));
    /* 0079f32a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079f331: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079f336: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079f33d: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x79f342u); f_00798468();
    /* 0079f342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f344: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79f349u); f_00791748();
    /* 0079f349: mov dword ptr [0xaab218], 3 */ W32((u32)(0xaab218u), 0x3u);
    /* 0079f353: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f356: ret  */ FN_RET(0x0079f218); r_esp += 4; return;
}

void f_0079f358(void) /* sub_79F358 */
{
    FN_ENTER(0x0079f358);
    /* 0079f358: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079f35b: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079f360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f362: je 0x79f4b9 */ if (fZ) goto L_0079f4b9;
L_0079f368:; BB(0x0079f368);
    /* 0079f368: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 0079f36d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f36f: jne 0x79f49b */ if (!fZ) goto L_0079f49b;
L_0079f375:; BB(0x0079f375);
    /* 0079f375: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079f37a: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f37d: je 0x79f4af */ if (fZ) goto L_0079f4af;
L_0079f383:; BB(0x0079f383);
    /* 0079f383: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x79f388u); f_00708734();
    /* 0079f388: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f38b: je 0x79f4de */ if (fZ) goto L_0079f4de;
L_0079f391:; BB(0x0079f391);
    /* 0079f391: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f394: je 0x79f4bd */ if (fZ) goto L_0079f4bd;
L_0079f39a:; BB(0x0079f39a);
    /* 0079f39a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f39d: je 0x79f401 */ if (fZ) goto L_0079f401;
L_0079f39f:; BB(0x0079f39f);
    /* 0079f39f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f3a2: jne 0x79f3c2 */ if (!fZ) goto L_0079f3c2;
L_0079f3a4:; BB(0x0079f3a4);
    /* 0079f3a4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3a6: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3a8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79f3adu); f_00792fe8();
    /* 0079f3ad: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3b3: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3b8: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f3bdu); f_00857e29();
    /* 0079f3bd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f3c0: jmp 0x79f41d */ goto L_0079f41d;
L_0079f3c2:; BB(0x0079f3c2);
    /* 0079f3c2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f3c5: jne 0x79f3e5 */ if (!fZ) goto L_0079f3e5;
L_0079f3c7:; BB(0x0079f3c7);
    /* 0079f3c7: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3c9: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3cb: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79f3d0u); f_00792fe8();
    /* 0079f3d0: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3d6: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3db: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f3e0u); f_00857e29();
    /* 0079f3e0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f3e3: jmp 0x79f41d */ goto L_0079f41d;
L_0079f3e5:; BB(0x0079f3e5);
    /* 0079f3e5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3e7: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f3ecu); f_00793168();
    /* 0079f3ec: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3f2: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f3f7: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f3fcu); f_00857e29();
    /* 0079f3fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f3ff: jmp 0x79f41d */ goto L_0079f41d;
L_0079f401:; BB(0x0079f401);
    /* 0079f401: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f403: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f405: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79f40au); f_00792fe8();
    /* 0079f40a: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f410: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f415: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f41au); f_00857e29();
    /* 0079f41a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079f41d:; BB(0x0079f41d);
    /* 0079f41d: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 0079f422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f424: jne 0x79f43b */ if (!fZ) goto L_0079f43b;
L_0079f426:; BB(0x0079f426);
    /* 0079f426: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 0079f42b: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79f430u); f_0079a8c4();
    /* 0079f430: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079f436: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x79f43bu); f_00712c00();
L_0079f43b:; BB(0x0079f43b);
    /* 0079f43b: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x79f440u); f_00798468();
    /* 0079f440: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079f446: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079f450: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f452: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 0079f45c: je 0x79f470 */ if (fZ) goto L_0079f470;
L_0079f45e:; BB(0x0079f45e);
    /* 0079f45e: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 0079f465: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079f46a: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079f470:; BB(0x0079f470);
    /* 0079f470: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 0079f475: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0079f478: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f47a: je 0x79f4af */ if (fZ) goto L_0079f4af;
L_0079f47c:; BB(0x0079f47c);
    /* 0079f47c: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0079f480: mov ebx, ecx */ r_ebx = r_ecx;
L_0079f482:; BB(0x0079f482);
    /* 0079f482: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f484: je 0x79f48e */ if (fZ) goto L_0079f48e;
L_0079f486:; BB(0x0079f486);
    /* 0079f486: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f488: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079f48a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079f48c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x79f48eu); call_ind(t); }
L_0079f48e:; BB(0x0079f48e);
    /* 0079f48e: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0079f491: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f493: jne 0x79f482 */ if (!fZ) goto L_0079f482;
L_0079f495:; BB(0x0079f495);
    /* 0079f495: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0079f499: jmp 0x79f4af */ goto L_0079f4af;
L_0079f49b:; BB(0x0079f49b);
    /* 0079f49b: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 0079f4a5: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_0079f4af:; BB(0x0079f4af);
    /* 0079f4af: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079f4b9:; BB(0x0079f4b9);
    /* 0079f4b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f4bc: ret  */ FN_RET(0x0079f358); r_esp += 4; return;
L_0079f4bd:; BB(0x0079f4bd);
    /* 0079f4bd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79f4c6u); f_00792fe8();
    /* 0079f4c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f4d6u); f_00857e29();
    /* 0079f4d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f4d9: jmp 0x79f41d */ goto L_0079f41d;
L_0079f4de:; BB(0x0079f4de);
    /* 0079f4de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4e0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4e2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79f4e7u); f_00792fe8();
    /* 0079f4e7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4ed: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f4f2: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f4f7u); f_00857e29();
    /* 0079f4f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f4fa: jmp 0x79f41d */ goto L_0079f41d;
}

void f_0079f500(void) /* sub_79F500 */
{
    FN_ENTER(0x0079f500);
    /* 0079f500: mov dword ptr [0xaab21c], 1 */ W32((u32)(0xaab21cu), 0x1u);
    /* 0079f50a: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x79f50fu); f_00798468();
    /* 0079f50f: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f513: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079f519: call 0x7d4068 */ r_esp -= 4; W32(r_esp, 0x79f51eu); f_007d4068();
    /* 0079f51e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f520: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79f525u); f_00791748();
    /* 0079f525: mov dword ptr [0xaab218], 0x13 */ W32((u32)(0xaab218u), 0x13u);
    /* 0079f52f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f530: ret  */ FN_RET(0x0079f500); r_esp += 4; return;
}

void f_0079f534(void) /* sub_79F534 */
{
    FN_ENTER(0x0079f534);
    /* 0079f534: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079f537: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079f53c: cmp eax, 0x4d */ {  u32 a = r_eax; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f53f: je 0x79f545 */ if (fZ) goto L_0079f545;
L_0079f541:; BB(0x0079f541);
    /* 0079f541: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f544: ret  */ FN_RET(0x0079f534); r_esp += 4; return;
L_0079f545:; BB(0x0079f545);
    /* 0079f545: mov dword ptr [esp], 0x43480000 */ W32((u32)(r_esp), 0x43480000u);
    /* 0079f54c: mov dword ptr [esp + 4], 0x42200000 */ W32((u32)(r_esp+0x4u), 0x42200000u);
    /* 0079f554: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f556: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79f55bu); f_0073ec50();
    /* 0079f55b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f55c: fld dword ptr [0x97cda8] */ FPUSH(R_F32((u32)(0x97cda8u)));
    /* 0079f562: fld dword ptr [0x97cda4] */ FPUSH(R_F32((u32)(0x97cda4u)));
    /* 0079f568: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0079f56c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079f56e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0079f572: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0079f574: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0079f578: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0079f57b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079f57f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0079f583: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0079f587: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0079f58b: mov dword ptr [0xaab19c], ecx */ W32((u32)(0xaab19cu), r_ecx);
    /* 0079f591: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079f597: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f599: je 0x79f5aa */ if (fZ) goto L_0079f5aa;
L_0079f59b:; BB(0x0079f59b);
    /* 0079f59b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79f5a0u); f_007127b0();
    /* 0079f5a0: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_0079f5aa:; BB(0x0079f5aa);
    /* 0079f5aa: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0079f5ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079f5b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5b5: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x79f5bau); f_0073a8dc();
    /* 0079f5ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f5bd: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079f5c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f5c4: je 0x79f5fb */ if (fZ) goto L_0079f5fb;
L_0079f5c6:; BB(0x0079f5c6);
    /* 0079f5c6: push 0x176 */ { u32 v = 0x176u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5cb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79f5d0u); f_0079317c();
    /* 0079f5d0: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0079f5d4: push dword ptr [0xaab19c] */ { u32 v = R32((u32)(0xaab19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f5da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5db: push 0x97cf24 */ { u32 v = 0x97cf24u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79f5e6u); f_00857e29();
    /* 0079f5e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f5e9: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079f5ef: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0079f5f3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f5f6: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79f5fbu); f_0073ae38();
L_0079f5fb:; BB(0x0079f5fb);
    /* 0079f5fb: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079f601: call 0x7f6840 */ r_esp -= 4; W32(r_esp, 0x79f606u); f_007f6840();
    /* 0079f606: mov dword ptr [0xaab218], 0x4e */ W32((u32)(0xaab218u), 0x4eu);
    /* 0079f610: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f613: ret  */ FN_RET(0x0079f534); r_esp += 4; return;
}

void f_0079f614(void) /* sub_79F614 */
{
    FN_ENTER(0x0079f614);
    /* 0079f614: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f615: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f616: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079f619: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0079f61d: push 0x620c */ { u32 v = 0x620cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f622: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f623: push 0xa9f9e0 */ { u32 v = 0xa9f9e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f628: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x79f62du); f_0086b324();
    /* 0079f62d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f630: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079f636: mov dword ptr [0xaab1c0], 1 */ W32((u32)(0xaab1c0u), 0x1u);
    /* 0079f640: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f642: je 0x79f653 */ if (fZ) goto L_0079f653;
L_0079f644:; BB(0x0079f644);
    /* 0079f644: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79f649u); f_007127b0();
    /* 0079f649: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079f653:; BB(0x0079f653);
    /* 0079f653: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f659: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f65b: je 0x79f8ce */ if (fZ) goto L_0079f8ce;
L_0079f661:; BB(0x0079f661);
    /* 0079f661: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f663: je 0x79f7b6 */ if (fZ) goto L_0079f7b6;
L_0079f669:; BB(0x0079f669);
    /* 0079f669: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x79f66eu); f_00737d1c();
    /* 0079f66e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f670: je 0x79f863 */ if (fZ) goto L_0079f863;
L_0079f676:; BB(0x0079f676);
    /* 0079f676: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0079f679: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079f67b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079f67d: jbe 0x79f726 */ if ((fC||fZ)) goto L_0079f726;
L_0079f683:; BB(0x0079f683);
    /* 0079f683: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0079f687: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0079f68b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0079f68e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f690: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079f692: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f694: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f696: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f698: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f69a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f69c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f69e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f6a0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f6a2: lea eax, [esi + eax + 0x18c] */ r_eax = (u32)(r_esi+r_eax+0x18cu);
    /* 0079f6a9: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0079f6ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6ae: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6b2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6b4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6b6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6b8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6ba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6bc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6be: lea edi, [ecx + ecx + 0xc] */ r_edi = (u32)(r_ecx+r_ecx+0xcu);
    /* 0079f6c2: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079f6c4: mov ebx, eax */ r_ebx = r_eax;
    /* 0079f6c6: mov ebp, edx */ r_ebp = r_edx;
L_0079f6c8:; BB(0x0079f6c8);
    /* 0079f6c8: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f6cb: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f6cd: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f6d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f6d4: call 0x737568 */ r_esp -= 4; W32(r_esp, 0x79f6d9u); f_00737568();
    /* 0079f6d9: mov ecx, dword ptr [0xaab19c] */ r_ecx = R32((u32)(0xaab19cu));
    /* 0079f6df: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079f6e1: jae 0x79f708 */ if (!fC) goto L_0079f708;
L_0079f6e3:; BB(0x0079f6e3);
    /* 0079f6e3: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f6e9: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0079f6ec: mov eax, dword ptr [ecx + ebp*4] */ r_eax = R32((u32)(r_ecx+r_ebp*4));
    /* 0079f6ef: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 0079f6f3: or ecx, 0xffff0080 */ {  u32 a = r_ecx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0079f6f9: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0079f6fd: mov ecx, 0xff909090 */ r_ecx = 0xff909090u;
    /* 0079f702: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0079f705: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
L_0079f708:; BB(0x0079f708);
    /* 0079f708: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0079f70b: add ebx, 0x188 */ {  u32 a = r_ebx; u32 b = 0x188u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079f711: add edi, 0x188 */ {  u32 a = r_edi; u32 b = 0x188u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079f717: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079f71a: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079f71c: jb 0x79f6c8 */ if (fC) goto L_0079f6c8;
L_0079f71e:; BB(0x0079f71e);
    /* 0079f71e: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0079f722: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_0079f726:; BB(0x0079f726);
    /* 0079f726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f728: je 0x79f732 */ if (fZ) goto L_0079f732;
L_0079f72a:; BB(0x0079f72a);
    /* 0079f72a: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f730: jmp 0x79f764 */ goto L_0079f764;
L_0079f732:; BB(0x0079f732);
    /* 0079f732: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f737: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79f73cu); f_0079317c();
    /* 0079f73c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f73d: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f746: call 0x7374b8 */ r_esp -= 4; W32(r_esp, 0x79f74bu); f_007374b8();
    /* 0079f74b: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f751: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079f758: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079f75d: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
L_0079f764:; BB(0x0079f764);
    /* 0079f764: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x79f769u); f_00737cdc();
    /* 0079f769: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 0079f76f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079f776: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0079f77b: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0079f77e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079f785: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f787: je 0x79f796 */ if (fZ) goto L_0079f796;
L_0079f789:; BB(0x0079f789);
    /* 0079f789: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f78b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x79f790u); f_00760acc();
    /* 0079f790: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
L_0079f796:; BB(0x0079f796);
    /* 0079f796: mov ecx, edx */ r_ecx = r_edx;
    /* 0079f798: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x79f79du); f_00737da4();
    /* 0079f79d: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 0079f7a3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079f7aa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079f7af: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0079f7b6:; BB(0x0079f7b6);
    /* 0079f7b6: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 0079f7bc: mov dword ptr [0xaab1c4], 0 */ W32((u32)(0xaab1c4u), 0x0u);
    /* 0079f7c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f7c8: je 0x79f89d */ if (fZ) goto L_0079f89d;
L_0079f7ce:; BB(0x0079f7ce);
    /* 0079f7ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f7d0: je 0x79f82d */ if (fZ) goto L_0079f82d;
L_0079f7d2:; BB(0x0079f7d2);
    /* 0079f7d2: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f7d7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79f7dcu); f_00712624();
    /* 0079f7dc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f7de: je 0x79f82d */ if (fZ) goto L_0079f82d;
L_0079f7e0:; BB(0x0079f7e0);
    /* 0079f7e0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0079f7e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f7e5: jne 0x79f7fb */ if (!fZ) goto L_0079f7fb;
L_0079f7e7:; BB(0x0079f7e7);
    /* 0079f7e7: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 0079f7ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f7ef: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f7f4: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79f7f9u); f_0073ae38();
    /* 0079f7f9: jmp 0x79f82d */ goto L_0079f82d;
L_0079f7fb:; BB(0x0079f7fb);
    /* 0079f7fb: mov edx, dword ptr [0xaab1c4] */ r_edx = R32((u32)(0xaab1c4u));
    /* 0079f801: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 0079f807: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f809: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0079f80c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f80e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079f810: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f812: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f814: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f816: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079f818: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f81a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f81c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f81e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f820: lea esi, [edx + esi + 0x8c] */ r_esi = (u32)(r_edx+r_esi+0x8cu);
    /* 0079f827: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f828: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79f82du); f_0073ae38();
L_0079f82d:; BB(0x0079f82d);
    /* 0079f82d: mov eax, dword ptr [0xaab264] */ r_eax = R32((u32)(0xaab264u));
    /* 0079f832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f834: je 0x79f86e */ if (fZ) goto L_0079f86e;
L_0079f836:; BB(0x0079f836);
    /* 0079f836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f838: je 0x79f853 */ if (fZ) goto L_0079f853;
L_0079f83a:; BB(0x0079f83a);
    /* 0079f83a: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f83f: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f844u); f_00793168();
    /* 0079f844: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f845: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079f84b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f84d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f84e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79f853u); f_0073ae38();
L_0079f853:; BB(0x0079f853);
    /* 0079f853: mov dword ptr [0xaab218], 0x4f */ W32((u32)(0xaab218u), 0x4fu);
    /* 0079f85d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f860: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079f861: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079f862: ret  */ FN_RET(0x0079f614); r_esp += 4; return;
L_0079f863:; BB(0x0079f863);
    /* 0079f863: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079f869: jmp 0x79f764 */ goto L_0079f764;
L_0079f86e:; BB(0x0079f86e);
    /* 0079f86e: mov dword ptr [esp + 8], 0x43ab0000 */ W32((u32)(r_esp+0x8u), 0x43ab0000u);
    /* 0079f876: mov dword ptr [esp + 0xc], 0x43100000 */ W32((u32)(r_esp+0xcu), 0x43100000u);
    /* 0079f87e: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f883: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79f888u); f_0073ec50();
    /* 0079f888: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0079f88c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f88e: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79f893u); f_0073a888();
    /* 0079f893: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f896: mov dword ptr [0xaab264], eax */ W32((u32)(0xaab264u), r_eax);
    /* 0079f89b: jmp 0x79f836 */ goto L_0079f836;
L_0079f89d:; BB(0x0079f89d);
    /* 0079f89d: mov dword ptr [esp], 0x43640000 */ W32((u32)(r_esp), 0x43640000u);
    /* 0079f8a4: mov dword ptr [esp + 4], 0x43380000 */ W32((u32)(r_esp+0x4u), 0x43380000u);
    /* 0079f8ac: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f8ae: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79f8b3u); f_0073ec50();
    /* 0079f8b3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079f8b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f8b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f8b9: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79f8beu); f_0073a888();
    /* 0079f8be: mov ecx, eax */ r_ecx = r_eax;
    /* 0079f8c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f8c3: mov dword ptr [0xaab238], ecx */ W32((u32)(0xaab238u), r_ecx);
    /* 0079f8c9: jmp 0x79f7ce */ goto L_0079f7ce;
L_0079f8ce:; BB(0x0079f8ce);
    /* 0079f8ce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f8d0: je 0x79f8f7 */ if (fZ) goto L_0079f8f7;
L_0079f8d2:; BB(0x0079f8d2);
    /* 0079f8d2: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0079f8d5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f8d7: je 0x79f8f7 */ if (fZ) goto L_0079f8f7;
L_0079f8d9:; BB(0x0079f8d9);
    /* 0079f8d9: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f8db: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79f8e0u); f_00793168();
    /* 0079f8e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f8e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f8e2: call 0x73ff1c */ r_esp -= 4; W32(r_esp, 0x79f8e7u); f_0073ff1c();
    /* 0079f8e7: mov ecx, eax */ r_ecx = r_eax;
    /* 0079f8e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f8ec: mov dword ptr [0xaab268], ecx */ W32((u32)(0xaab268u), r_ecx);
    /* 0079f8f2: jmp 0x79f661 */ goto L_0079f661;
L_0079f8f7:; BB(0x0079f8f7);
    /* 0079f8f7: mov edi, 1 */ r_edi = 0x1u;
    /* 0079f8fc: jmp 0x79f8d9 */ goto L_0079f8d9;
}

void f_0079f900(void) /* sub_79F900 */
{
    FN_ENTER(0x0079f900);
    /* 0079f900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079f902: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079f903: sub esp, 0x74c */ {  u32 a = r_esp; u32 b = 0x74cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079f909: call 0x6c2f54 */ r_esp -= 4; W32(r_esp, 0x79f90eu); f_006c2f54();
    /* 0079f90e: mov ebp, 8 */ r_ebp = 0x8u;
    /* 0079f913: mov word ptr [esp], bp */ W16((u32)(r_esp), (u16)r_ebp);
    /* 0079f917: mov word ptr [esp + 0x78], bp */ W16((u32)(r_esp+0x78u), (u16)r_ebp);
    /* 0079f91c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079f91e: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 0079f922: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 0079f926: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0079f92a: mov byte ptr [esp + 0x7a], al */ W8((u32)(r_esp+0x7au), (u8)r_eax);
    /* 0079f92e: mov byte ptr [esp + 0x7b], al */ W8((u32)(r_esp+0x7bu), (u8)r_eax);
    /* 0079f932: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0079f936: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f93b: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x79f940u); f_006c1bd4();
    /* 0079f940: mov ebp, eax */ r_ebp = r_eax;
    /* 0079f942: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079f944: mov dword ptr [esp + 0x484], edx */ W32((u32)(r_esp+0x484u), r_edx);
    /* 0079f94b: mov dword ptr [esp + 0x488], edx */ W32((u32)(r_esp+0x488u), r_edx);
    /* 0079f952: mov dword ptr [esp + 0x48c], edx */ W32((u32)(r_esp+0x48cu), r_edx);
    /* 0079f959: mov dword ptr [esp + 0x490], edx */ W32((u32)(r_esp+0x490u), r_edx);
    /* 0079f960: mov dword ptr [esp + 0x494], edx */ W32((u32)(r_esp+0x494u), r_edx);
    /* 0079f967: mov dword ptr [esp + 0x498], edx */ W32((u32)(r_esp+0x498u), r_edx);
    /* 0079f96e: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f973: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f979: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x79f97eu); f_007be19c();
    /* 0079f97e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f983: je 0x79f992 */ if (fZ) goto L_0079f992;
L_0079f985:; BB(0x0079f985);
    /* 0079f985: mov dword ptr [esp + 0x480], 1 */ W32((u32)(r_esp+0x480u), 0x1u);
    /* 0079f990: jmp 0x79f99d */ goto L_0079f99d;
L_0079f992:; BB(0x0079f992);
    /* 0079f992: mov dword ptr [esp + 0x480], 0 */ W32((u32)(r_esp+0x480u), 0x0u);
L_0079f99d:; BB(0x0079f99d);
    /* 0079f99d: lea edx, [esp + 0x480] */ r_edx = (u32)(r_esp+0x480u);
    /* 0079f9a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9a5: lea ecx, [ebp + 0x2944] */ r_ecx = (u32)(r_ebp+0x2944u);
    /* 0079f9ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9ac: call 0x77f060 */ r_esp -= 4; W32(r_esp, 0x79f9b1u); f_0077f060();
    /* 0079f9b1: lea edx, [esp + 0x4a0] */ r_edx = (u32)(r_esp+0x4a0u);
    /* 0079f9b8: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9c0: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79f9c5u); f_0086b688();
    /* 0079f9c5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f9c8: call 0x78e050 */ r_esp -= 4; W32(r_esp, 0x79f9cdu); f_0078e050();
    /* 0079f9cd: lea edx, [esp + 0x498] */ r_edx = (u32)(r_esp+0x498u);
    /* 0079f9d4: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f9db: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79f9e0u); f_00857dec();
    /* 0079f9e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079f9e2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0079f9e6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0079f9ea: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0079f9ee: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0079f9f2: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0079f9f6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0079f9fa: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0079f9fe: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0079fa02: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0079fa06: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0079fa0a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0079fa0e: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0079fa12: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0079fa16: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0079fa1a: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0079fa1e: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0079fa22: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0079fa26: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0079fa2a: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0079fa2e: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0079fa32: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0079fa36: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0079fa3a: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0079fa3e: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0079fa42: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0079fa46: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0079fa4a: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0079fa4e: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0079fa52: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0079fa56: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0079fa5d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0079fa61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fa62: call 0x782708 */ r_esp -= 4; W32(r_esp, 0x79fa67u); f_00782708();
    /* 0079fa67: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0079fa6e: push 0x408 */ { u32 v = 0x408u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fa73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fa75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fa76: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79fa7bu); f_0086b688();
    /* 0079fa7b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fa7e: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x79fa83u); f_0077a584();
    /* 0079fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fa85: je 0x79faaa */ if (fZ) goto L_0079faaa;
L_0079fa87:; BB(0x0079fa87);
    /* 0079fa87: mov dword ptr [esp + 0x7c], 1 */ W32((u32)(r_esp+0x7cu), 0x1u);
    /* 0079fa8f: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x79fa94u); f_0077a5b0();
    /* 0079fa94: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0079fa9b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0079faa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079faa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079faa2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79faa7u); f_00857dec();
    /* 0079faa7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079faaa:; BB(0x0079faaa);
    /* 0079faaa: lea edx, [esp + 0x5f0] */ r_edx = (u32)(r_esp+0x5f0u);
    /* 0079fab1: push 0x15c */ { u32 v = 0x15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079fab6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fab8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fab9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79fabeu); f_0086b688();
    /* 0079fabe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fac1: lea edi, [esp + 0x5f4] */ r_edi = (u32)(r_esp+0x5f4u);
    /* 0079fac8: lea esi, [ebp + 0x27dc] */ r_esi = (u32)(r_ebp+0x27dcu);
    /* 0079face: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 0079fad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fad4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079fad7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079fad9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fada: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079fadd: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079fadf: movzx edx, word ptr [ebp + 0x27c0] */ r_edx = (u32)R16((u32)(r_ebp+0x27c0u));
    /* 0079fae6: movzx ecx, word ptr [ebp + 0x27c2] */ r_ecx = (u32)R16((u32)(r_ebp+0x27c2u));
    /* 0079faed: movzx esi, word ptr [ebp + 0x27c4] */ r_esi = (u32)R16((u32)(r_ebp+0x27c4u));
    /* 0079faf4: movzx edi, word ptr [ebp + 0x27c6] */ r_edi = (u32)R16((u32)(r_ebp+0x27c6u));
    /* 0079fafb: mov eax, dword ptr [ebp + 0x27d4] */ r_eax = R32((u32)(r_ebp+0x27d4u));
    /* 0079fb01: mov word ptr [esp + 0x734], dx */ W16((u32)(r_esp+0x734u), (u16)r_edx);
    /* 0079fb09: movzx edx, word ptr [ebp + 0x27c8] */ r_edx = (u32)R16((u32)(r_ebp+0x27c8u));
    /* 0079fb10: mov word ptr [esp + 0x736], cx */ W16((u32)(r_esp+0x736u), (u16)r_ecx);
    /* 0079fb18: mov word ptr [esp + 0x738], si */ W16((u32)(r_esp+0x738u), (u16)r_esi);
    /* 0079fb20: mov word ptr [esp + 0x73a], di */ W16((u32)(r_esp+0x73au), (u16)r_edi);
    /* 0079fb28: mov word ptr [esp + 0x73c], dx */ W16((u32)(r_esp+0x73cu), (u16)r_edx);
    /* 0079fb30: movzx edx, word ptr [ebp + 0x27ca] */ r_edx = (u32)R16((u32)(r_ebp+0x27cau));
    /* 0079fb37: mov word ptr [esp + 0x73e], dx */ W16((u32)(r_esp+0x73eu), (u16)r_edx);
    /* 0079fb3f: movzx edx, word ptr [ebp + 0x27cc] */ r_edx = (u32)R16((u32)(r_ebp+0x27ccu));
    /* 0079fb46: mov word ptr [esp + 0x740], dx */ W16((u32)(r_esp+0x740u), (u16)r_edx);
    /* 0079fb4e: mov edx, dword ptr [ebp + 0x27d0] */ r_edx = R32((u32)(r_ebp+0x27d0u));
    /* 0079fb54: mov dword ptr [esp + 0x744], edx */ W32((u32)(r_esp+0x744u), r_edx);
    /* 0079fb5b: mov dword ptr [esp + 0x748], eax */ W32((u32)(r_esp+0x748u), r_eax);
    /* 0079fb62: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb67: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79fb6cu); f_006c1bcc();
    /* 0079fb6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fb6d: lea ecx, [esp + 0x5f0] */ r_ecx = (u32)(r_esp+0x5f0u);
    /* 0079fb74: lea edi, [esp + 0x480] */ r_edi = (u32)(r_esp+0x480u);
    /* 0079fb7b: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0079fb7e: lea ebp, [esp + 0x78] */ r_ebp = (u32)(r_esp+0x78u);
    /* 0079fb82: lea edx, [esp + 0x498] */ r_edx = (u32)(r_esp+0x498u);
    /* 0079fb89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb8e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079fb94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079fb95: call 0x7e50f4 */ r_esp -= 4; W32(r_esp, 0x79fb9au); f_007e50f4();
    /* 0079fb9a: add esp, 0x74c */ {  u32 a = r_esp; u32 b = 0x74cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079fba0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fba1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079fba2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fba3: ret  */ FN_RET(0x0079f900); r_esp += 4; return;
}

void f_0079fba4(void)
{
    FN_ENTER(0x0079fba4);
    /* 0079fba4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fba5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fba6: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079fbad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fbaf: jne 0x79fbc0 */ if (!fZ) goto L_0079fbc0;
L_0079fbb1:; BB(0x0079fbb1);
    /* 0079fbb1: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079fbb6: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fbb9: je 0x79fbc3 */ if (fZ) goto L_0079fbc3;
L_0079fbbb:; BB(0x0079fbbb);
    /* 0079fbbb: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fbbe: je 0x79fbc3 */ if (fZ) goto L_0079fbc3;
L_0079fbc0:; BB(0x0079fbc0);
    /* 0079fbc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fbc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fbc2: ret  */ FN_RET(0x0079fba4); r_esp += 4; return;
L_0079fbc3:; BB(0x0079fbc3);
    /* 0079fbc3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0079fbc7: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fbcc: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0079fbcf: add ebp, -8 */ {  u32 a = r_ebp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fbd2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79fbd7u); f_008581c5();
    /* 0079fbd7: mov edi, eax */ r_edi = r_eax;
    /* 0079fbd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fbdc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fbde: je 0x79fbc0 */ if (fZ) goto L_0079fbc0;
L_0079fbe0:; BB(0x0079fbe0);
    /* 0079fbe0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0079fbe4: push dword ptr [0xab02b8] */ { u32 v = R32((u32)(0xab02b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079fbea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fbeb: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 0079fbee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fbef: mov ecx, edi */ r_ecx = r_edi;
    /* 0079fbf1: call 0x7a59d4 */ r_esp -= 4; W32(r_esp, 0x79fbf6u); f_007a59d4();
    /* 0079fbf6: mov ebp, eax */ r_ebp = r_eax;
    /* 0079fbf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fbf9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79fbfeu); f_00857e98();
    /* 0079fbfe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fbff: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0079fc04: mul ebp */ { u64 t = (u64)r_eax * r_ebp; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0079fc06: mov ecx, edx */ r_ecx = r_edx;
    /* 0079fc08: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079fc0b: mov dword ptr [0xab02b0], ecx */ W32((u32)(0xab02b0u), r_ecx);
    /* 0079fc11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079fc13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fc15: jle 0x79fbc0 */ if ((fZ||fS!=fO)) goto L_0079fbc0;
L_0079fc17:; BB(0x0079fc17);
    /* 0079fc17: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079fc1a: jl 0x79fc26 */ if ((fS!=fO)) goto L_0079fc26;
L_0079fc1c:; BB(0x0079fc1c);
    /* 0079fc1c: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
L_0079fc1f:; BB(0x0079fc1f);
    /* 0079fc1f: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079fc22: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079fc24: jle 0x79fc1f */ if ((fZ||fS!=fO)) goto L_0079fc1f;
L_0079fc26:; BB(0x0079fc26);
    /* 0079fc26: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079fc29: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fc2b: jl 0x79fc26 */ if ((fS!=fO)) goto L_0079fc26;
L_0079fc2d:; BB(0x0079fc2d);
    /* 0079fc2d: jmp 0x79fbc0 */ goto L_0079fbc0;
}

void f_0079fc30(void)
{
    FN_ENTER(0x0079fc30);
    /* 0079fc30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fc31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fc32: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079fc39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fc3b: jne 0x79fc4c */ if (!fZ) goto L_0079fc4c;
L_0079fc3d:; BB(0x0079fc3d);
    /* 0079fc3d: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079fc42: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fc45: je 0x79fc4f */ if (fZ) goto L_0079fc4f;
L_0079fc47:; BB(0x0079fc47);
    /* 0079fc47: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fc4a: je 0x79fc4f */ if (fZ) goto L_0079fc4f;
L_0079fc4c:; BB(0x0079fc4c);
    /* 0079fc4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079fc4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079fc4e: ret  */ FN_RET(0x0079fc30); r_esp += 4; return;
L_0079fc4f:; BB(0x0079fc4f);
    /* 0079fc4f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0079fc53: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fc58: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0079fc5b: add esi, -8 */ {  u32 a = r_esi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079fc5e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79fc63u); f_008581c5();
    /* 0079fc63: mov ebx, eax */ r_ebx = r_eax;
    /* 0079fc65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fc68: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fc6a: je 0x79fc4c */ if (fZ) goto L_0079fc4c;
L_0079fc6c:; BB(0x0079fc6c);
    /* 0079fc6c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0079fc70: push dword ptr [0xab02bc] */ { u32 v = R32((u32)(0xab02bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079fc76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fc77: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 0079fc7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fc7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079fc7d: call 0x7a59d4 */ r_esp -= 4; W32(r_esp, 0x79fc82u); f_007a59d4();
    /* 0079fc82: mov esi, eax */ r_esi = r_eax;
    /* 0079fc84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fc85: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79fc8au); f_00857e98();
    /* 0079fc8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fc8b: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0079fc8e: mov dword ptr [0xab02b4], esi */ W32((u32)(0xab02b4u), r_esi);
    /* 0079fc94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079fc96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fc98: jle 0x79fc4c */ if ((fZ||fS!=fO)) goto L_0079fc4c;
L_0079fc9a:; BB(0x0079fc9a);
    /* 0079fc9a: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079fc9d: jl 0x79fca9 */ if ((fS!=fO)) goto L_0079fca9;
L_0079fc9f:; BB(0x0079fc9f);
    /* 0079fc9f: lea edx, [esi - 6] */ r_edx = (u32)(r_esi+0xfffffffau);
L_0079fca2:; BB(0x0079fca2);
    /* 0079fca2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079fca5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079fca7: jle 0x79fca2 */ if ((fZ||fS!=fO)) goto L_0079fca2;
L_0079fca9:; BB(0x0079fca9);
    /* 0079fca9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079fcac: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fcae: jl 0x79fca9 */ if ((fS!=fO)) goto L_0079fca9;
L_0079fcb0:; BB(0x0079fcb0);
    /* 0079fcb0: jmp 0x79fc4c */ goto L_0079fc4c;
}

void f_0079fcb4(void) /* sub_79FCB4 */
{
    FN_ENTER(0x0079fcb4);
    /* 0079fcb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fcb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fcb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fcb7: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079fcbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fcc0: jne 0x79fcd1 */ if (!fZ) goto L_0079fcd1;
L_0079fcc2:; BB(0x0079fcc2);
    /* 0079fcc2: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079fcc7: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fcca: je 0x79fcd5 */ if (fZ) goto L_0079fcd5;
L_0079fccc:; BB(0x0079fccc);
    /* 0079fccc: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fccf: je 0x79fcd5 */ if (fZ) goto L_0079fcd5;
L_0079fcd1:; BB(0x0079fcd1);
    /* 0079fcd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079fcd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fcd3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fcd4: ret  */ FN_RET(0x0079fcb4); r_esp += 4; return;
L_0079fcd5:; BB(0x0079fcd5);
    /* 0079fcd5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0079fcd9: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fcde: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0079fce1: add ebx, -8 */ {  u32 a = r_ebx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079fce4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79fce9u); f_008581c5();
    /* 0079fce9: mov edi, eax */ r_edi = r_eax;
    /* 0079fceb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fcee: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fcf0: je 0x79fcd1 */ if (fZ) goto L_0079fcd1;
L_0079fcf2:; BB(0x0079fcf2);
    /* 0079fcf2: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fcf7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79fcfcu); f_008581c5();
    /* 0079fcfc: mov ebp, eax */ r_ebp = r_eax;
    /* 0079fcfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fd01: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fd03: je 0x79fd1d */ if (fZ) goto L_0079fd1d;
L_0079fd05:; BB(0x0079fd05);
    /* 0079fd05: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0079fd09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd0b: lea edx, [edx + 8] */ r_edx = (u32)(r_edx+0x8u);
    /* 0079fd0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079fd11: call 0x7a59d4 */ r_esp -= 4; W32(r_esp, 0x79fd16u); f_007a59d4();
    /* 0079fd16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd17: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79fd1cu); f_00857e98();
    /* 0079fd1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079fd1d:; BB(0x0079fd1d);
    /* 0079fd1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd1e: call 0x5c87a0 */ r_esp -= 4; W32(r_esp, 0x79fd23u); f_005c87a0();
    /* 0079fd23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd24: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79fd29u); f_00857e98();
    /* 0079fd29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079fd2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079fd2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fd2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fd2f: ret  */ FN_RET(0x0079fcb4); r_esp += 4; return;
}

void f_0079fd30(void)
{
    FN_ENTER(0x0079fd30);
    /* 0079fd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd32: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079fd39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fd3b: jne 0x79fd4c */ if (!fZ) goto L_0079fd4c;
L_0079fd3d:; BB(0x0079fd3d);
    /* 0079fd3d: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079fd42: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fd45: je 0x79fd4f */ if (fZ) goto L_0079fd4f;
L_0079fd47:; BB(0x0079fd47);
    /* 0079fd47: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fd4a: je 0x79fd4f */ if (fZ) goto L_0079fd4f;
L_0079fd4c:; BB(0x0079fd4c);
    /* 0079fd4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079fd4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fd4e: ret  */ FN_RET(0x0079fd30); r_esp += 4; return;
L_0079fd4f:; BB(0x0079fd4f);
    /* 0079fd4f: push 0x4008 */ { u32 v = 0x4008u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd54: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79fd59u); f_008581c5();
    /* 0079fd59: mov ebx, eax */ r_ebx = r_eax;
    /* 0079fd5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fd5e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fd60: je 0x79fd4c */ if (fZ) goto L_0079fd4c;
L_0079fd62:; BB(0x0079fd62);
    /* 0079fd62: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd67: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79fd6cu); f_008581c5();
    /* 0079fd6c: mov ebp, eax */ r_ebp = r_eax;
    /* 0079fd6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fd71: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fd73: je 0x79fdd0 */ if (fZ) goto L_0079fdd0;
L_0079fd75:; BB(0x0079fd75);
    /* 0079fd75: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0079fd79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd7a: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0079fd7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079fd7f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0079fd83: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079fd86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd87: call 0x7a59d4 */ r_esp -= 4; W32(r_esp, 0x79fd8cu); f_007a59d4();
    /* 0079fd8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd8d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79fd92u); f_00857e98();
    /* 0079fd92: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0079fd96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd97: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0079fd9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fd9b: call 0x812564 */ r_esp -= 4; W32(r_esp, 0x79fda0u); f_00812564();
    /* 0079fda0: movzx ebp, word ptr [ebx + 2] */ r_ebp = (u32)R16((u32)(r_ebx+0x2u));
    /* 0079fda4: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0079fda8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fda9: lea ecx, [ebx + ebp + 8] */ r_ecx = (u32)(r_ebx+r_ebp+0x8u);
    /* 0079fdad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fdae: call 0x80d4d8 */ r_esp -= 4; W32(r_esp, 0x79fdb3u); f_0080d4d8();
    /* 0079fdb3: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0079fdb7: movzx ecx, word ptr [ebx + 6] */ r_ecx = (u32)R16((u32)(r_ebx+0x6u));
    /* 0079fdbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fdbc: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079fdbe: lea ebp, [ebx + edx + 8] */ r_ebp = (u32)(r_ebx+r_edx+0x8u);
    /* 0079fdc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fdc3: call 0x816fc8 */ r_esp -= 4; W32(r_esp, 0x79fdc8u); f_00816fc8();
    /* 0079fdc8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fdcb: call 0x80d01c */ r_esp -= 4; W32(r_esp, 0x79fdd0u); f_0080d01c();
L_0079fdd0:; BB(0x0079fdd0);
    /* 0079fdd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fdd1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79fdd6u); f_00857e98();
    /* 0079fdd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fdd7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079fdd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fdd9: ret  */ FN_RET(0x0079fd30); r_esp += 4; return;
}

void f_0079fddc(void) /* sub_79FDDC */
{
    FN_ENTER(0x0079fddc);
    /* 0079fddc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fddd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fdde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079fddf: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079fde6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079fde8: jne 0x79fe3e */ if (!fZ) goto L_0079fe3e;
L_0079fdea:; BB(0x0079fdea);
    /* 0079fdea: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079fdef: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fdf2: je 0x79fdfd */ if (fZ) goto L_0079fdfd;
L_0079fdf4:; BB(0x0079fdf4);
    /* 0079fdf4: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fdf7: je 0x79fdfd */ if (fZ) goto L_0079fdfd;
L_0079fdf9:; BB(0x0079fdf9);
    /* 0079fdf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fdfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fdfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fdfc: ret  */ FN_RET(0x0079fddc); r_esp += 4; return;
L_0079fdfd:; BB(0x0079fdfd);
    /* 0079fdfd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0079fe01: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0079fe05: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0079fe09: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0079fe0c: lea ebp, [ebp + 8] */ r_ebp = (u32)(r_ebp+0x8u);
    /* 0079fe0f: lea ecx, [ecx + 0x170] */ r_ecx = (u32)(r_ecx+0x170u);
    /* 0079fe15: lea edi, [eax + 0x4b8] */ r_edi = (u32)(r_eax+0x4b8u);
    /* 0079fe1b: mov esi, ecx */ r_esi = r_ecx;
L_0079fe1d:; BB(0x0079fe1d);
    /* 0079fe1d: mov ecx, esi */ r_ecx = r_esi;
    /* 0079fe1f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79fe24u); f_0061cdb0();
    /* 0079fe24: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079fe27: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079fe29: jg 0x79fe1d */ if ((!fZ&&fS==fO)) goto L_0079fe1d;
L_0079fe2b:; BB(0x0079fe2b);
    /* 0079fe2b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0079fe2e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0079fe32: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 0079fe36: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fe3c: jne 0x79fe42 */ if (!fZ) goto L_0079fe42;
L_0079fe3e:; BB(0x0079fe3e);
    /* 0079fe3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fe3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fe40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fe41: ret  */ FN_RET(0x0079fddc); r_esp += 4; return;
L_0079fe42:; BB(0x0079fe42);
    /* 0079fe42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe43: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79fe48u); f_0068d5a8();
    /* 0079fe48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fe49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fe4b: je 0x79fe57 */ if (fZ) goto L_0079fe57;
L_0079fe4d:; BB(0x0079fe4d);
    /* 0079fe4d: je 0x79fe57 */ if (fZ) goto L_0079fe57;
L_0079fe4f:; BB(0x0079fe4f);
    /* 0079fe4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079fe53: mov ecx, eax */ r_ecx = r_eax;
    /* 0079fe55: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79fe57u); call_ind(t); }
L_0079fe57:; BB(0x0079fe57);
    /* 0079fe57: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe58: call 0x686a18 */ r_esp -= 4; W32(r_esp, 0x79fe5du); f_00686a18();
    /* 0079fe5d: mov edi, eax */ r_edi = r_eax;
    /* 0079fe5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fe62: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0079fe66: movzx ebp, word ptr [edx + 8] */ r_ebp = (u32)R16((u32)(r_edx+0x8u));
    /* 0079fe6a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe6c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe6e: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0079fe72: mov ecx, edi */ r_ecx = r_edi;
    /* 0079fe74: mov edx, dword ptr [ebp + edx*8 + 0xaaad00] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xaaad00u));
    /* 0079fe7b: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 0079fe7f: mov dword ptr [edi + 0xeb8], edx */ W32((u32)(r_edi+0xeb8u), r_edx);
    /* 0079fe85: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x79fe8au); f_006936b4();
    /* 0079fe8a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe8d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe8f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe91: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe93: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe95: lea edx, [ebp + ebp + 0xaab000] */ r_edx = (u32)(r_ebp+r_ebp+0xaab000u);
    /* 0079fe9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe9d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79fea2u); f_00857dec();
    /* 0079fea2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fea5: mov ecx, edi */ r_ecx = r_edi;
    /* 0079fea7: call 0x688e40 */ r_esp -= 4; W32(r_esp, 0x79feacu); f_00688e40();
    /* 0079feac: jmp 0x79fdf9 */ goto L_0079fdf9;
}

void f_0079fe4e(void)
{
    FN_ENTER(0x0079fe4e);
    goto L_0079fe4e;
L_0079fdf9:; BB(0x0079fdf9);
    /* 0079fdf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fdfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079fdfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079fdfc: ret  */ FN_RET(0x0079fe4e); r_esp += 4; return;
L_0079fe4e:; BB(0x0079fe4e);
    /* 0079fe4e: or byte ptr [edx + 1], ch */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0079fe51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079fe53: mov ecx, eax */ r_ecx = r_eax;
    /* 0079fe55: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79fe57u); call_ind(t); }
    /* 0079fe57: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe58: call 0x686a18 */ r_esp -= 4; W32(r_esp, 0x79fe5du); f_00686a18();
    /* 0079fe5d: mov edi, eax */ r_edi = r_eax;
    /* 0079fe5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fe62: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0079fe66: movzx ebp, word ptr [edx + 8] */ r_ebp = (u32)R16((u32)(r_edx+0x8u));
    /* 0079fe6a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe6c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe6e: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0079fe72: mov ecx, edi */ r_ecx = r_edi;
    /* 0079fe74: mov edx, dword ptr [ebp + edx*8 + 0xaaad00] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xaaad00u));
    /* 0079fe7b: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 0079fe7f: mov dword ptr [edi + 0xeb8], edx */ W32((u32)(r_edi+0xeb8u), r_edx);
    /* 0079fe85: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x79fe8au); f_006936b4();
    /* 0079fe8a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe8d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe8f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe91: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe93: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079fe95: lea edx, [ebp + ebp + 0xaab000] */ r_edx = (u32)(r_ebp+r_ebp+0xaab000u);
    /* 0079fe9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079fe9d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79fea2u); f_00857dec();
    /* 0079fea2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079fea5: mov ecx, edi */ r_ecx = r_edi;
    /* 0079fea7: call 0x688e40 */ r_esp -= 4; W32(r_esp, 0x79feacu); f_00688e40();
    /* 0079feac: jmp 0x79fdf9 */ goto L_0079fdf9;
}

void f_0079feb4(void)
{
    FN_ENTER(0x0079feb4);
    /* 0079feb4: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079febb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079febd: jne 0x79fed3 */ if (!fZ) goto L_0079fed3;
L_0079febf:; BB(0x0079febf);
    /* 0079febf: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079fec4: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fec7: je 0x79fed4 */ if (fZ) goto L_0079fed4;
L_0079fec9:; BB(0x0079fec9);
    /* 0079fec9: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fecc: je 0x79fed4 */ if (fZ) goto L_0079fed4;
L_0079fece:; BB(0x0079fece);
    /* 0079fece: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079fed1: je 0x79fed4 */ if (fZ) goto L_0079fed4;
L_0079fed3:; BB(0x0079fed3);
    /* 0079fed3: ret  */ FN_RET(0x0079feb4); r_esp += 4; return;
L_0079fed4:; BB(0x0079fed4);
    /* 0079fed4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079fed8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0079fedc: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0079fee2: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0079fee5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079fee8: jne 0x79fef3 */ if (!fZ) goto L_0079fef3;
L_0079feea:; BB(0x0079feea);
    /* 0079feea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079feeb: call 0x6bb55c */ r_esp -= 4; W32(r_esp, 0x79fef0u); f_006bb55c();
    /* 0079fef0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079fef1: jmp 0x79ff06 */ goto L_0079ff06;
L_0079fef3:; BB(0x0079fef3);
    /* 0079fef3: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079fef9: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 0079fefe: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79ff03u); f_0086b6b8();
    /* 0079ff03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079ff06:; BB(0x0079ff06);
    /* 0079ff06: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079ff0b: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079ff0e: jne 0x79fed3 */ if (!fZ) goto L_0079fed3;
L_0079ff10:; BB(0x0079ff10);
    /* 0079ff10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff12: call 0x6bb0d8 */ r_esp -= 4; W32(r_esp, 0x79ff17u); f_006bb0d8();
    /* 0079ff17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ff18: ret  */ FN_RET(0x0079feb4); r_esp += 4; return;
}

void f_0079ff1c(void) /* sub_79FF1C */
{
    FN_ENTER(0x0079ff1c);
    /* 0079ff1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff1d: sub esp, 0x4c0 */ {  u32 a = r_esp; u32 b = 0x4c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079ff23: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 0079ff2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff2c: je 0x79ff36 */ if (fZ) goto L_0079ff36;
L_0079ff2e:; BB(0x0079ff2e);
    /* 0079ff2e: add esp, 0x4c0 */ {  u32 a = r_esp; u32 b = 0x4c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079ff34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079ff35: ret  */ FN_RET(0x0079ff1c); r_esp += 4; return;
L_0079ff36:; BB(0x0079ff36);
    /* 0079ff36: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ff3c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ff41u); f_0068d5a8();
    /* 0079ff41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ff42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff44: je 0x7a0059 */ if (fZ) goto L_007a0059;
L_0079ff4a:; BB(0x0079ff4a);
    /* 0079ff4a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079ff4e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0079ff51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079ff53: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ff55: mov esi, eax */ r_esi = r_eax;
L_0079ff57:; BB(0x0079ff57);
    /* 0079ff57: mov edx, dword ptr [esi*4 + 0xaab28c] */ r_edx = R32((u32)(r_esi*4+0xaab28cu));
    /* 0079ff5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff60: je 0x79ffc7 */ if (fZ) goto L_0079ffc7;
L_0079ff62:; BB(0x0079ff62);
    /* 0079ff62: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0079ff66: call 0x6857f0 */ r_esp -= 4; W32(r_esp, 0x79ff6bu); f_006857f0();
    /* 0079ff6b: push 0x4c0 */ { u32 v = 0x4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff70: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79ff75u); f_008581c5();
    /* 0079ff75: mov edi, eax */ r_edi = r_eax;
    /* 0079ff77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ff7a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff7c: je 0x79ffbc */ if (fZ) goto L_0079ffbc;
L_0079ff7e:; BB(0x0079ff7e);
    /* 0079ff7e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ff84: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ff89u); f_0068d5a8();
    /* 0079ff89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ff8a: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 0079ff8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff8e: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ff90: call 0x68cee8 */ r_esp -= 4; W32(r_esp, 0x79ff95u); f_0068cee8();
    /* 0079ff95: mov byte ptr [edi], 0x70 */ W8((u32)(r_edi), 0x70u);
    /* 0079ff98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff99: mov ecx, edi */ r_ecx = r_edi;
    /* 0079ff9b: mov byte ptr [edi + 1], 0 */ W8((u32)(r_edi+0x1u), 0x0u);
    /* 0079ff9f: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079ffa5: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 0079ffa9: mov dword ptr [edi + 4], 0x4c0 */ W32((u32)(r_edi+0x4u), 0x4c0u);
    /* 0079ffb0: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79ffb5u); f_008005e0();
    /* 0079ffb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ffb6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ffbbu); f_00857e98();
    /* 0079ffbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ffbc:; BB(0x0079ffbc);
    /* 0079ffbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ffc2u); f_0068d5a8();
    /* 0079ffc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ffc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ffc5: je 0x7a0005 */ if (fZ) goto L_007a0005;
L_0079ffc7:; BB(0x0079ffc7);
    /* 0079ffc7: mov dword ptr [esi*4 + 0xaab28c], 0 */ W32((u32)(r_esi*4+0xaab28cu), 0x0u);
    /* 0079ffd2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ffd5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079ffd8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ffdb: jl 0x79ff57 */ if ((fS!=fO)) goto L_0079ff57;
L_0079ffe1:; BB(0x0079ffe1);
    /* 0079ffe1: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079ffe5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0079ffe8: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079ffee: mov dword ptr [0xaab218], 0xf */ W32((u32)(0xaab218u), 0xfu);
    /* 0079fff8: call 0x7d41c4 */ r_esp -= 4; W32(r_esp, 0x79fffdu); f_007d41c4();
    /* 0079fffd: add esp, 0x4c0 */ {  u32 a = r_esp; u32 b = 0x4c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0004: ret  */ FN_RET(0x0079ff1c); r_esp += 4; return;
L_007a0005:; BB(0x007a0005);
    /* 007a0005: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 007a0008: lea edi, [esi + edi*8] */ r_edi = (u32)(r_esi+r_edi*8);
    /* 007a000b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a000d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a000f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007a0012: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a0014: lea ecx, [edx + edx + 0xaa6d84] */ r_ecx = (u32)(r_edx+r_edx+0xaa6d84u);
    /* 007a001b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a001c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a001e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a001f: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7a0024u); f_00686258();
    /* 007a0024: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0027: mov edx, dword ptr [edi*8 + 0xaa6d40] */ r_edx = R32((u32)(r_edi*8+0xaa6d40u));
    /* 007a002e: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 007a0034: mov edi, dword ptr [edi*8 + 0xaa6d44] */ r_edi = R32((u32)(r_edi*8+0xaa6d44u));
    /* 007a003b: mov edx, dword ptr [ebx + 0xaaad00] */ r_edx = R32((u32)(r_ebx+0xaaad00u));
    /* 007a0041: mov dword ptr [eax + 0xeb4], edi */ W32((u32)(r_eax+0xeb4u), r_edi);
    /* 007a0047: mov dword ptr [eax + 0xeb8], edx */ W32((u32)(r_eax+0xeb8u), r_edx);
    /* 007a004d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007a004f: mov ecx, eax */ r_ecx = r_eax;
    /* 007a0051: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7a0054u); call_ind(t); }
    /* 007a0054: jmp 0x79ffc7 */ goto L_0079ffc7;
L_007a0059:; BB(0x007a0059);
    /* 007a0059: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a005e: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7a0063u); f_006c1bcc();
    /* 007a0063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0066: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a006c: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7a0071u); f_00686258();
    /* 007a0071: mov ebx, eax */ r_ebx = r_eax;
    /* 007a0073: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0076: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 007a007b: mov edx, dword ptr [eax + 0x12120] */ r_edx = R32((u32)(r_eax+0x12120u));
    /* 007a0081: mov dword ptr [ebx + 0xeb0], edx */ W32((u32)(r_ebx+0xeb0u), r_edx);
    /* 007a0087: mov edx, dword ptr [eax + 0x12124] */ r_edx = R32((u32)(r_eax+0x12124u));
    /* 007a008d: mov dword ptr [ebx + 0xeb4], edx */ W32((u32)(r_ebx+0xeb4u), r_edx);
    /* 007a0093: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a0095: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007a009b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a009d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a009f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a00a2: mov edx, dword ptr [edx + eax*8 + 0xaaad00] */ r_edx = R32((u32)(r_edx+r_eax*8+0xaaad00u));
    /* 007a00a9: mov dword ptr [ebx + 0xeb8], edx */ W32((u32)(r_ebx+0xeb8u), r_edx);
    /* 007a00af: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007a00b1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7a00b4u); call_ind(t); }
    /* 007a00b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a00b6: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7a00bbu); f_006936b4();
    /* 007a00bb: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007a00c1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007a00c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a00c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00cc: lea ecx, [edx + edx + 0xaab000] */ r_ecx = (u32)(r_edx+r_edx+0xaab000u);
    /* 007a00d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a00d4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7a00d9u); f_00857dec();
    /* 007a00d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a00dc: jmp 0x79ff4a */ goto L_0079ff4a;
}

