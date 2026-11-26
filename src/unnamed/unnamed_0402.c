#include "protos.h"

void f_004022e0(void)
{
    FN_ENTER(0x004022e0);
    goto L_004022e0;
L_00401eb2:; BB(0x00401eb2);
    /* 00401eb2: add esp, 0x5b4 */ {  u32 a = r_esp; u32 b = 0x5b4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401eb8: ret 8 */ FN_RET(0x004022e0); r_esp += 12; return;
L_00401f53:; BB(0x00401f53);
    /* 00401f53: lea edx, [esp + 0x354] */ r_edx = (u32)(r_esp+0x354u);
    /* 00401f5a: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f62: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x401f67u); f_0086b688();
    /* 00401f67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401f6a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f6c: je 0x4020d9 */ if (fZ) goto L_004020d9;
L_00401f72:; BB(0x00401f72);
    /* 00401f72: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f75: jne 0x40205c */ if (!fZ) goto L_0040205c;
L_00401f7b:; BB(0x00401f7b);
    /* 00401f7b: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401f7e: jge 0x401fee */ if ((fS==fO)) goto L_00401fee;
L_00401f80:; BB(0x00401f80);
    /* 00401f80: mov edx, dword ptr [ebp*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebp*8+0x8f86f8u));
    /* 00401f87: mov ebx, dword ptr [ebp*8 + 0x8f86fc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86fcu));
    /* 00401f8e: mov dword ptr [esp + 0x35c], 0x41c80000 */ W32((u32)(r_esp+0x35cu), 0x41c80000u);
    /* 00401f99: mov dword ptr [esp + 0x360], 0x43650000 */ W32((u32)(r_esp+0x360u), 0x43650000u);
    /* 00401fa4: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00401fab: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 00401fb2: mov dword ptr [esp + 0x354], 0x41c80000 */ W32((u32)(r_esp+0x354u), 0x41c80000u);
    /* 00401fbd: mov dword ptr [esp + 0x358], 0x43650000 */ W32((u32)(r_esp+0x358u), 0x43650000u);
    /* 00401fc8: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 00401fd3: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 00401fde: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
    /* 00401fe9: jmp 0x402142 */ goto L_00402142;
L_00401fee:; BB(0x00401fee);
    /* 00401fee: mov edx, dword ptr [ebp*8 + 0x8f86c0] */ r_edx = R32((u32)(r_ebp*8+0x8f86c0u));
    /* 00401ff5: mov ebx, dword ptr [ebp*8 + 0x8f86c4] */ r_ebx = R32((u32)(r_ebp*8+0x8f86c4u));
    /* 00401ffc: mov dword ptr [esp + 0x35c], 0x43690000 */ W32((u32)(r_esp+0x35cu), 0x43690000u);
    /* 00402007: mov dword ptr [esp + 0x360], 0x43650000 */ W32((u32)(r_esp+0x360u), 0x43650000u);
    /* 00402012: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00402019: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 00402020: mov dword ptr [esp + 0x354], 0x43690000 */ W32((u32)(r_esp+0x354u), 0x43690000u);
    /* 0040202b: mov dword ptr [esp + 0x358], 0x43650000 */ W32((u32)(r_esp+0x358u), 0x43650000u);
    /* 00402036: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 00402041: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 0040204c: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
    /* 00402057: jmp 0x402142 */ goto L_00402142;
L_0040205c:; BB(0x0040205c);
    /* 0040205c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040205f: jl 0x402142 */ if ((fS!=fO)) goto L_00402142;
L_00402065:; BB(0x00402065);
    /* 00402065: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402068: jg 0x402142 */ if ((!fZ&&fS==fO)) goto L_00402142;
L_0040206e:; BB(0x0040206e);
    /* 0040206e: mov edx, dword ptr [ebp*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebp*8+0x8f86f8u));
    /* 00402075: mov ebx, dword ptr [ebp*8 + 0x8f86fc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86fcu));
    /* 0040207c: mov dword ptr [esp + 0x35c], 0x41c80000 */ W32((u32)(r_esp+0x35cu), 0x41c80000u);
    /* 00402087: mov dword ptr [esp + 0x360], 0x43650000 */ W32((u32)(r_esp+0x360u), 0x43650000u);
    /* 00402092: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00402099: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 004020a0: mov dword ptr [esp + 0x354], 0x41c80000 */ W32((u32)(r_esp+0x354u), 0x41c80000u);
    /* 004020ab: mov dword ptr [esp + 0x358], 0x43650000 */ W32((u32)(r_esp+0x358u), 0x43650000u);
    /* 004020b6: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 004020c1: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 004020cc: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
    /* 004020d7: jmp 0x402142 */ goto L_00402142;
L_004020d9:; BB(0x004020d9);
    /* 004020d9: mov edx, dword ptr [ebp*8 + 0x8f86b8] */ r_edx = R32((u32)(r_ebp*8+0x8f86b8u));
    /* 004020e0: mov ebx, dword ptr [ebp*8 + 0x8f86bc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86bcu));
    /* 004020e7: mov dword ptr [esp + 0x35c], 0x43030000 */ W32((u32)(r_esp+0x35cu), 0x43030000u);
    /* 004020f2: mov dword ptr [esp + 0x360], 0x43360000 */ W32((u32)(r_esp+0x360u), 0x43360000u);
    /* 004020fd: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00402104: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 0040210b: mov dword ptr [esp + 0x354], 0x43030000 */ W32((u32)(r_esp+0x354u), 0x43030000u);
    /* 00402116: mov dword ptr [esp + 0x358], 0x43360000 */ W32((u32)(r_esp+0x358u), 0x43360000u);
    /* 00402121: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 0040212c: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 00402137: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
L_00402142:; BB(0x00402142);
    /* 00402142: mov dword ptr [esp + 0x2b4], 4 */ W32((u32)(r_esp+0x2b4u), 0x4u);
    /* 0040214d: mov edx, 3 */ r_edx = 0x3u;
    /* 00402152: mov dword ptr [esp + 0x2b8], edx */ W32((u32)(r_esp+0x2b8u), r_edx);
    /* 00402159: mov dword ptr [esp + 0x2c0], 0 */ W32((u32)(r_esp+0x2c0u), 0x0u);
    /* 00402164: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 0040216b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040216c: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x402171u); f_006c44d0();
    /* 00402171: mov ebx, eax */ r_ebx = r_eax;
    /* 00402173: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402176: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402178: je 0x4022dd */ if (fZ) goto L_004022dd;
L_0040217e:; BB(0x0040217e);
    /* 0040217e: lea edx, [esp + 0x374] */ r_edx = (u32)(r_esp+0x374u);
    /* 00402185: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00402187: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040218a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040218b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x402190u); f_00857dec();
    /* 00402190: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402193: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00402195: mov dword ptr [esp + 0x2c4], edx */ W32((u32)(r_esp+0x2c4u), r_edx);
    /* 0040219c: mov dword ptr [esp + 0x2c8], edx */ W32((u32)(r_esp+0x2c8u), r_edx);
    /* 004021a3: mov dword ptr [esp + 0x2cc], edx */ W32((u32)(r_esp+0x2ccu), r_edx);
    /* 004021aa: mov dword ptr [esp + 0x2d0], edx */ W32((u32)(r_esp+0x2d0u), r_edx);
    /* 004021b1: mov dword ptr [esp + 0x2d4], edx */ W32((u32)(r_esp+0x2d4u), r_edx);
    /* 004021b8: mov dword ptr [esp + 0x2d8], edx */ W32((u32)(r_esp+0x2d8u), r_edx);
    /* 004021bf: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 004021c6: mov dword ptr [esp + 0x2e0], edx */ W32((u32)(r_esp+0x2e0u), r_edx);
    /* 004021cd: mov dword ptr [esp + 0x2e4], edx */ W32((u32)(r_esp+0x2e4u), r_edx);
    /* 004021d4: mov dword ptr [esp + 0x2e8], edx */ W32((u32)(r_esp+0x2e8u), r_edx);
    /* 004021db: mov dword ptr [esp + 0x2ec], edx */ W32((u32)(r_esp+0x2ecu), r_edx);
    /* 004021e2: mov dword ptr [esp + 0x2f0], edx */ W32((u32)(r_esp+0x2f0u), r_edx);
    /* 004021e9: mov dword ptr [esp + 0x2f4], edx */ W32((u32)(r_esp+0x2f4u), r_edx);
    /* 004021f0: mov dword ptr [esp + 0x2f8], edx */ W32((u32)(r_esp+0x2f8u), r_edx);
    /* 004021f7: mov dword ptr [esp + 0x2fc], edx */ W32((u32)(r_esp+0x2fcu), r_edx);
    /* 004021fe: mov dword ptr [esp + 0x300], edx */ W32((u32)(r_esp+0x300u), r_edx);
    /* 00402205: mov dword ptr [esp + 0x304], edx */ W32((u32)(r_esp+0x304u), r_edx);
    /* 0040220c: mov dword ptr [esp + 0x308], edx */ W32((u32)(r_esp+0x308u), r_edx);
    /* 00402213: mov dword ptr [esp + 0x30c], edx */ W32((u32)(r_esp+0x30cu), r_edx);
    /* 0040221a: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 00402221: mov dword ptr [esp + 0x314], edx */ W32((u32)(r_esp+0x314u), r_edx);
    /* 00402228: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 0040222f: mov dword ptr [esp + 0x31c], edx */ W32((u32)(r_esp+0x31cu), r_edx);
    /* 00402236: mov dword ptr [esp + 0x320], edx */ W32((u32)(r_esp+0x320u), r_edx);
    /* 0040223d: mov dword ptr [esp + 0x324], edx */ W32((u32)(r_esp+0x324u), r_edx);
    /* 00402244: mov dword ptr [esp + 0x328], edx */ W32((u32)(r_esp+0x328u), r_edx);
    /* 0040224b: mov dword ptr [esp + 0x32c], edx */ W32((u32)(r_esp+0x32cu), r_edx);
    /* 00402252: mov dword ptr [esp + 0x330], edx */ W32((u32)(r_esp+0x330u), r_edx);
    /* 00402259: mov dword ptr [esp + 0x334], edx */ W32((u32)(r_esp+0x334u), r_edx);
    /* 00402260: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 00402267: mov dword ptr [esp + 0x33c], edx */ W32((u32)(r_esp+0x33cu), r_edx);
    /* 0040226e: mov dword ptr [esp + 0x340], edx */ W32((u32)(r_esp+0x340u), r_edx);
    /* 00402275: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 0040227c: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0040227f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00402282: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402283: mov ecx, esi */ r_ecx = r_esi;
    /* 00402285: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402286: call 0x402604 */ r_esp -= 4; W32(r_esp, 0x40228bu); f_00402604();
    /* 0040228b: lea ebx, [esp + 0x3f4] */ r_ebx = (u32)(r_esp+0x3f4u);
    /* 00402292: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 00402299: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040229b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040229c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040229d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4022a2u); f_00857dec();
    /* 004022a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004022a5:; BB(0x004022a5);
    /* 004022a5: mov ecx, dword ptr [ebp*4 + 0xa3ae40] */ r_ecx = R32((u32)(r_ebp*4+0xa3ae40u));
    /* 004022ac: lea edx, [esp + 0x354] */ r_edx = (u32)(r_esp+0x354u);
    /* 004022b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004022b4: call 0x40e3f8 */ r_esp -= 4; W32(r_esp, 0x4022b9u); f_0040e3f8();
    /* 004022b9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004022bc: cmp ebp, dword ptr [esp + edi*4 + 0x344] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+r_edi*4+0x344u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004022c3: jl 0x401f53 */ if ((fS!=fO)) goto L_00401f53;
L_004022c9:; BB(0x004022c9);
    /* 004022c9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004022cd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004022d0: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004022d4: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004022d8: jmp 0x401eb2 */ goto L_00401eb2;
L_004022dd:; BB(0x004022dd);
    /* 004022dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004022df: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
L_004022e0:; BB(0x004022e0);
    /* 004022e0: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;   }
    /* 004022e1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4022e6u); f_00792fe8();
    /* 004022e2: add cl, byte ptr [0x948d0039] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(0x948d0039u)); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004022e6: lea edx, [esp + 0x37c] */ r_edx = (u32)(r_esp+0x37cu);
    /* 004022e8: and al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004022ea: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004022ec: add byte ptr [edx + 0x3f], ch */ { u32 ad = (u32)(r_edx+0x3fu);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004022ed: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 004022ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004022f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004022f1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4022f6u); f_00857dec();
    /* 004022f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004022f9: jmp 0x4022a5 */ goto L_004022a5;
}

void f_00402604(void) /* sub_402604 */
{
    FN_ENTER(0x00402604);
    /* 00402604: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402606: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00402608: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40260du); f_00792fe8();
    /* 0040260d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402612: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402616: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x40261bu); f_00857e29();
    /* 0040261b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040261e: ret 8 */ FN_RET(0x00402604); r_esp += 12; return;
}

void f_00402624(void) /* sub_402624 */
{
    FN_ENTER(0x00402624);
    /* 00402624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402625: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00402627: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040262b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040262d: je 0x40268d */ if (fZ) goto L_0040268d;
L_0040262f:; BB(0x0040262f);
    /* 0040262f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402632: jne 0x402662 */ if (!fZ) goto L_00402662;
L_00402634:; BB(0x00402634);
    /* 00402634: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402636: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00402638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402639: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x40263eu); f_004088b8();
    /* 0040263e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402640: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00402642: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 00402645: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402646: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x40264bu); f_004088b8();
    /* 0040264b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040264d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040264f: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00402652: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402653: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x402658u); f_004088b8();
    /* 00402658: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040265b: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0040265e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040265f: ret 4 */ FN_RET(0x00402624); r_esp += 8; return;
L_00402662:; BB(0x00402662);
    /* 00402662: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00402665: jl 0x4026aa */ if ((fS!=fO)) goto L_004026aa;
L_00402667:; BB(0x00402667);
    /* 00402667: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040266a: jg 0x4026aa */ if ((!fZ&&fS==fO)) goto L_004026aa;
L_0040266c:; BB(0x0040266c);
    /* 0040266c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040266e: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00402670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402671: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x402676u); f_004088b8();
    /* 00402676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402678: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0040267a: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0040267d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040267e: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x402683u); f_004088b8();
    /* 00402683: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00402686: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 00402689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040268a: ret 4 */ FN_RET(0x00402624); r_esp += 8; return;
L_0040268d:; BB(0x0040268d);
    /* 0040268d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040268f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00402691: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402692: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x402697u); f_004088b8();
    /* 00402697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402699: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0040269b: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0040269e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040269f: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x4026a4u); f_004088b8();
    /* 004026a4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004026a7: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
L_004026aa:; BB(0x004026aa);
    /* 004026aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004026ab: ret 4 */ FN_RET(0x00402624); r_esp += 8; return;
}

void f_004026b0(void) /* sub_4026B0 */
{
    FN_ENTER(0x004026b0);
    /* 004026b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004026b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004026b6: je 0x40270d */ if (fZ) goto L_0040270d;
L_004026b8:; BB(0x004026b8);
    /* 004026b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004026bb: je 0x4026ed */ if (fZ) goto L_004026ed;
L_004026bd:; BB(0x004026bd);
    /* 004026bd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004026c0: jne 0x4026d5 */ if (!fZ) goto L_004026d5;
L_004026c2:; BB(0x004026c2);
    /* 004026c2: push 0x8f85e4 */ { u32 v = 0x8f85e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004026c7: mov ecx, dword ptr [0xa3b1b4] */ r_ecx = R32((u32)(0xa3b1b4u));
    /* 004026cd: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x4026d2u); f_00414c94();
    /* 004026d2: ret 4 */ FN_RET(0x004026b0); r_esp += 8; return;
L_004026d5:; BB(0x004026d5);
    /* 004026d5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004026d8: jne 0x40270d */ if (!fZ) goto L_0040270d;
L_004026da:; BB(0x004026da);
    /* 004026da: push 0x8f85ec */ { u32 v = 0x8f85ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004026df: mov ecx, dword ptr [0xa3b1b8] */ r_ecx = R32((u32)(0xa3b1b8u));
    /* 004026e5: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x4026eau); f_00414c94();
    /* 004026ea: ret 4 */ FN_RET(0x004026b0); r_esp += 8; return;
L_004026ed:; BB(0x004026ed);
    /* 004026ed: push 0x8f85e4 */ { u32 v = 0x8f85e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004026f2: mov ecx, dword ptr [0xa3b1b4] */ r_ecx = R32((u32)(0xa3b1b4u));
    /* 004026f8: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x4026fdu); f_00414c94();
    /* 004026fd: push 0x8f85dc */ { u32 v = 0x8f85dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00402702: mov ecx, dword ptr [0xa3b1b8] */ r_ecx = R32((u32)(0xa3b1b8u));
    /* 00402708: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x40270du); f_00414c94();
L_0040270d:; BB(0x0040270d);
    /* 0040270d: ret 4 */ FN_RET(0x004026b0); r_esp += 8; return;
}

void f_00402710(void) /* sub_402710 */
{
    FN_ENTER(0x00402710);
    /* 00402710: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402711: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00402713: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402716: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00402718: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040271a: call 0x401664 */ r_esp -= 4; W32(r_esp, 0x40271fu); f_00401664();
    /* 0040271f: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402722: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00402724: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00402726: call 0x401664 */ r_esp -= 4; W32(r_esp, 0x40272bu); f_00401664();
    /* 0040272b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040272c: ret  */ FN_RET(0x00402710); r_esp += 4; return;
}

void f_00402730(void) /* sub_402730 */
{
    FN_ENTER(0x00402730);
    /* 00402730: mov dword ptr [0xa3a6d0], 0x3f800000 */ W32((u32)(0xa3a6d0u), 0x3f800000u);
    /* 0040273a: mov dword ptr [0xa3a6d4], 0x41000000 */ W32((u32)(0xa3a6d4u), 0x41000000u);
    /* 00402744: mov dword ptr [0xa3a6d8], 0x3fc00000 */ W32((u32)(0xa3a6d8u), 0x3fc00000u);
    /* 0040274e: ret  */ FN_RET(0x00402730); r_esp += 4; return;
}

void f_00402750(void) /* sub_402750 */
{
    FN_ENTER(0x00402750);
    /* 00402750: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00402754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402756: je 0x40278d */ if (fZ) goto L_0040278d;
L_00402758:; BB(0x00402758);
    /* 00402758: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040275b: jne 0x402770 */ if (!fZ) goto L_00402770;
L_0040275d:; BB(0x0040275d);
    /* 0040275d: push 0x8f85c0 */ { u32 v = 0x8f85c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402762: mov ecx, dword ptr [0xa3b1ac] */ r_ecx = R32((u32)(0xa3b1acu));
    /* 00402768: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x40276du); f_00414c94();
    /* 0040276d: ret 4 */ FN_RET(0x00402750); r_esp += 8; return;
L_00402770:; BB(0x00402770);
    /* 00402770: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00402773: jl 0x40279d */ if ((fS!=fO)) goto L_0040279d;
L_00402775:; BB(0x00402775);
    /* 00402775: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00402778: jg 0x40279d */ if ((!fZ&&fS==fO)) goto L_0040279d;
L_0040277a:; BB(0x0040277a);
    /* 0040277a: push 0x8f85c8 */ { u32 v = 0x8f85c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040277f: mov ecx, dword ptr [0xa3b1ac] */ r_ecx = R32((u32)(0xa3b1acu));
    /* 00402785: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x40278au); f_00414c94();
    /* 0040278a: ret 4 */ FN_RET(0x00402750); r_esp += 8; return;
L_0040278d:; BB(0x0040278d);
    /* 0040278d: push 0x8f85b8 */ { u32 v = 0x8f85b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00402792: mov ecx, dword ptr [0xa3b1a0] */ r_ecx = R32((u32)(0xa3b1a0u));
    /* 00402798: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x40279du); f_00414c94();
L_0040279d:; BB(0x0040279d);
    /* 0040279d: ret 4 */ FN_RET(0x00402750); r_esp += 8; return;
}

void f_004027a0(void) /* sub_4027A0 */
{
    FN_ENTER(0x004027a0);
    /* 004027a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004027a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027a4: call 0x414d60 */ r_esp -= 4; W32(r_esp, 0x4027a9u); f_00414d60();
    /* 004027a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004027aa: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004027ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004027af: call 0x402750 */ r_esp -= 4; W32(r_esp, 0x4027b4u); f_00402750();
    /* 004027b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004027b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027b7: call 0x40f008 */ r_esp -= 4; W32(r_esp, 0x4027bcu); f_0040f008();
    /* 004027bc: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004027c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004027c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004027c7: ret  */ FN_RET(0x004027a0); r_esp += 4; return;
}

void f_004027c8(void) /* sub_4027C8 */
{
    FN_ENTER(0x004027c8);
    /* 004027c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004027c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004027cb: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x4027d0u); f_006c44ac();
    /* 004027d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004027d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004027d3: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4027d8u); f_0082c198();
    /* 004027d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004027db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004027dd: je 0x4027e6 */ if (fZ) goto L_004027e6;
L_004027df:; BB(0x004027df);
    /* 004027df: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
L_004027e6:; BB(0x004027e6);
    /* 004027e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004027e7: ret  */ FN_RET(0x004027c8); r_esp += 4; return;
}

void f_004027e8(void) /* sub_4027E8 */
{
    FN_ENTER(0x004027e8);
    /* 004027e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004027eb: call 0x6c3158 */ r_esp -= 4; W32(r_esp, 0x4027f0u); f_006c3158();
    /* 004027f0: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004027f5: je 0x4027fe */ if (fZ) goto L_004027fe;
L_004027f7:; BB(0x004027f7);
    /* 004027f7: mov dword ptr [ebp + 0x1c], 3 */ W32((u32)(r_ebp+0x1cu), 0x3u);
L_004027fe:; BB(0x004027fe);
    /* 004027fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004027ff: ret  */ FN_RET(0x004027e8); r_esp += 4; return;
}

void f_00402800(void) /* sub_402800 */
{
    FN_ENTER(0x00402800);
    /* 00402800: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402801: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00402803: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00402805: call 0x402824 */ r_esp -= 4; W32(r_esp, 0x40280au); f_00402824();
    /* 0040280a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040280e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402810: jne 0x402816 */ if (!fZ) goto L_00402816;
L_00402812:; BB(0x00402812);
    /* 00402812: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402813: ret 4 */ FN_RET(0x00402800); r_esp += 8; return;
L_00402816:; BB(0x00402816);
    /* 00402816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402817: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40281cu); f_005c2f74();
    /* 0040281c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040281d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040281e: ret 4 */ FN_RET(0x00402800); r_esp += 8; return;
}

void f_00402824(void) /* sub_402824 */
{
    FN_ENTER(0x00402824);
    /* 00402824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402825: mov ebp, esp */ r_ebp = r_esp;
    /* 00402827: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402829: push 0x8cc08c */ { u32 v = 0x8cc08cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040282e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00402834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402835: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040283c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040283f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00402842: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00402845: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00402848: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040284b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040284e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402851: mov dword ptr [ecx], 0xaf2120 */ W32((u32)(r_ecx), 0xaf2120u);
    /* 00402857: mov dword ptr [0xa3a900], 0 */ W32((u32)(0xa3a900u), 0x0u);
    /* 00402861: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00402868: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40286du); f_008171e8();
    /* 0040286d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402870: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00402877: mov esp, ebp */ r_esp = r_ebp;
    /* 00402879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040287a: ret  */ FN_RET(0x00402824); r_esp += 4; return;
}

void f_0040287c(void) /* sub_40287C */
{
    FN_ENTER(0x0040287c);
    /* 0040287c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040287d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00402881: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402882: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x402887u); f_0073cd8c();
    /* 00402887: mov ebp, eax */ r_ebp = r_eax;
    /* 00402889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040288b: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0040288d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x402892u); f_00792fe8();
    /* 00402892: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402895: push 0x43440000 */ { u32 v = 0x43440000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040289a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040289c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004028a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004028a1: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x4028a6u); f_0073ce70();
    /* 004028a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004028a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004028aa: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x4028afu); f_0073d148();
    /* 004028af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004028b1: call 0x73d230 */ r_esp -= 4; W32(r_esp, 0x4028b6u); f_0073d230();
    /* 004028b6: mov eax, ebp */ r_eax = r_ebp;
    /* 004028b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004028b9: ret 8 */ FN_RET(0x0040287c); r_esp += 12; return;
}

void f_004028bc(void) /* sub_4028BC */
{
    FN_ENTER(0x004028bc);
    /* 004028bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004028bd: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004028c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004028c2: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x4028c7u); f_0073cd8c();
    /* 004028c7: mov esi, eax */ r_esi = r_eax;
    /* 004028c9: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004028ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004028d0: push 0xa3a700 */ { u32 v = 0xa3a700u; r_esp -= 4; W32(r_esp, v); }
    /* 004028d5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x4028dau); f_0086b688();
    /* 004028da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004028dc: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 004028de: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4028e3u); f_00792fe8();
    /* 004028e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004028e4: push 0xa3a700 */ { u32 v = 0xa3a700u; r_esp -= 4; W32(r_esp, v); }
    /* 004028e9: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4028eeu); f_00857e29();
    /* 004028ee: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004028f1: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 004028f6: mov ecx, esi */ r_ecx = r_esi;
    /* 004028f8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004028fc: push 0xa3a700 */ { u32 v = 0xa3a700u; r_esp -= 4; W32(r_esp, v); }
    /* 00402901: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x402906u); f_0073ce70();
    /* 00402906: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402908: mov ecx, esi */ r_ecx = r_esi;
    /* 0040290a: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x40290fu); f_0073d148();
    /* 0040290f: mov eax, esi */ r_eax = r_esi;
    /* 00402911: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00402912: ret 8 */ FN_RET(0x004028bc); r_esp += 12; return;
}

void f_00402918(void) /* sub_402918 */
{
    FN_ENTER(0x00402918);
    /* 00402918: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00402919: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040291d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040291e: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x402923u); f_0073cd8c();
    /* 00402923: mov esi, eax */ r_esi = r_eax;
    /* 00402925: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00402927: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00402929: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40292eu); f_00792fe8();
    /* 0040292e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402931: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 00402936: mov ecx, esi */ r_ecx = r_esi;
    /* 00402938: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040293c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040293d: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x402942u); f_0073ce70();
    /* 00402942: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402944: mov ecx, esi */ r_ecx = r_esi;
    /* 00402946: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x40294bu); f_0073d148();
    /* 0040294b: mov eax, esi */ r_eax = r_esi;
    /* 0040294d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040294e: ret 8 */ FN_RET(0x00402918); r_esp += 12; return;
}

void f_00402954(void) /* sub_402954 */
{
    FN_ENTER(0x00402954);
    /* 00402954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402955: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00402957: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040295a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040295b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040295c: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 00402961: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x402966u); f_00814298();
    /* 00402966: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040296a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040296b: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x402970u); f_0073cd8c();
    /* 00402970: mov ebp, eax */ r_ebp = r_eax;
    /* 00402972: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402974: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00402976: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40297bu); f_00792fe8();
    /* 0040297b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040297e: push 0x43e50000 */ { u32 v = 0x43e50000u; r_esp -= 4; W32(r_esp, v); }
    /* 00402983: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00402985: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00402989: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040298a: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x40298fu); f_0073ce70();
    /* 0040298f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402991: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00402993: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x402998u); f_0073d148();
    /* 00402998: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040299a: call 0x73d230 */ r_esp -= 4; W32(r_esp, 0x40299fu); f_0073d230();
    /* 0040299f: mov eax, ebp */ r_eax = r_ebp;
    /* 004029a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004029a2: ret 8 */ FN_RET(0x00402954); r_esp += 12; return;
}

void f_004029a8(void) /* sub_4029A8 */
{
    FN_ENTER(0x004029a8);
    /* 004029a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004029a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004029ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004029ad: push 0x8cc0b4 */ { u32 v = 0x8cc0b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004029b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004029b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004029b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004029c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004029c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004029c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004029c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004029cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004029cf: mov eax, dword ptr [0xa3a900] */ r_eax = R32((u32)(0xa3a900u));
    /* 004029d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004029d6: je 0x4029e8 */ if (fZ) goto L_004029e8;
L_004029d8:; BB(0x004029d8);
    /* 004029d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004029da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004029dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004029e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004029e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004029e7: ret  */ FN_RET(0x004029a8); r_esp += 4; return;
L_004029e8:; BB(0x004029e8);
    /* 004029e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004029ef: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004029f1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4029f6u); f_005caba4();
    /* 004029f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004029f7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004029fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004029fc: je 0x402a34 */ if (fZ) goto L_00402a34;
L_004029fe:; BB(0x004029fe);
    /* 004029fe: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00402a05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402a0c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402a0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402a12: call 0x402a38 */ r_esp -= 4; W32(r_esp, 0x402a17u); f_00402a38();
    /* 00402a17: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402a1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00402a21:; BB(0x00402a21);
    /* 00402a21: mov dword ptr [0xa3a900], eax */ W32((u32)(0xa3a900u), r_eax);
    /* 00402a26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402a29: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00402a30: mov esp, ebp */ r_esp = r_ebp;
    /* 00402a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402a33: ret  */ FN_RET(0x004029a8); r_esp += 4; return;
L_00402a34:; BB(0x00402a34);
    /* 00402a34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402a36: jmp 0x402a21 */ goto L_00402a21;
}

void f_00402a38(void) /* sub_402A38 */
{
    FN_ENTER(0x00402a38);
    /* 00402a38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402a39: mov edi, ecx */ r_edi = r_ecx;
    /* 00402a3b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402a3f: mov ecx, edi */ r_ecx = r_edi;
    /* 00402a41: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x402a46u); f_008193cc();
    /* 00402a46: mov dword ptr [edi], 0xaf2120 */ W32((u32)(r_edi), 0xaf2120u);
    /* 00402a4c: mov edx, dword ptr [0x9a2d9c] */ r_edx = R32((u32)(0x9a2d9cu));
    /* 00402a52: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00402a55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402a57: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 00402a5e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00402a61: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00402a64: mov eax, edi */ r_eax = r_edi;
    /* 00402a66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00402a67: ret 4 */ FN_RET(0x00402a38); r_esp += 8; return;
}

void f_00402a6c(void) /* sub_402A6C */
{
    FN_ENTER(0x00402a6c);
    /* 00402a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402a6d: mov edi, ecx */ r_edi = r_ecx;
    /* 00402a6f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00402a72: mov ecx, edi */ r_ecx = r_edi;
    /* 00402a74: call dword ptr [eax*4 + 0x9a2d90] */ { u32 t = R32((u32)(r_eax*4+0x9a2d90u)); r_esp -= 4; W32(r_esp, 0x402a7bu); call_ind(t); }
    /* 00402a7b: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 00402a7e: cmp edx, dword ptr [edi + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402a81: je 0x402a87 */ if (fZ) goto L_00402a87;
L_00402a83:; BB(0x00402a83);
    /* 00402a83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402a85: jmp 0x402a8d */ goto L_00402a8d;
L_00402a87:; BB(0x00402a87);
    /* 00402a87: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00402a8a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00402a8d:; BB(0x00402a8d);
    /* 00402a8d: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00402a90: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00402a93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00402a94: ret  */ FN_RET(0x00402a6c); r_esp += 4; return;
}

void f_00402a98(void) /* sub_402A98 */
{
    FN_ENTER(0x00402a98);
    /* 00402a98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00402a9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00402a9d: call 0x70c22c */ r_esp -= 4; W32(r_esp, 0x402aa2u); f_0070c22c();
    /* 00402aa2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00402aa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402aa8: jne 0x402aae */ if (!fZ) goto L_00402aae;
L_00402aaa:; BB(0x00402aaa);
    /* 00402aaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402aab: ret 4 */ FN_RET(0x00402a98); r_esp += 8; return;
L_00402aae:; BB(0x00402aae);
    /* 00402aae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402aaf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x402ab4u); f_00857e98();
    /* 00402ab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00402ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402ab6: ret 4 */ FN_RET(0x00402a98); r_esp += 8; return;
}

void f_00402abc(void) /* sub_402ABC */
{
    FN_ENTER(0x00402abc);
    /* 00402abc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402abd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00402abf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00402ac1: call 0x402ae0 */ r_esp -= 4; W32(r_esp, 0x402ac6u); f_00402ae0();
    /* 00402ac6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00402aca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402acc: jne 0x402ad2 */ if (!fZ) goto L_00402ad2;
L_00402ace:; BB(0x00402ace);
    /* 00402ace: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402acf: ret 4 */ FN_RET(0x00402abc); r_esp += 8; return;
L_00402ad2:; BB(0x00402ad2);
    /* 00402ad2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ad3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x402ad8u); f_005c2f74();
    /* 00402ad8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00402ad9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402ada: ret 4 */ FN_RET(0x00402abc); r_esp += 8; return;
}

void f_00402ae0(void) /* sub_402AE0 */
{
    FN_ENTER(0x00402ae0);
    /* 00402ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402ae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402ae5: push 0x8cc0d0 */ { u32 v = 0x8cc0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402aea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00402af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402af1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00402af8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402afb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00402afe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00402b01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00402b04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00402b07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00402b0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402b11: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402b14: mov ecx, dword ptr [eax + 0x1284] */ r_ecx = R32((u32)(r_eax+0x1284u));
    /* 00402b1a: mov dword ptr [eax], 0xaf2230 */ W32((u32)(r_eax), 0xaf2230u);
    /* 00402b20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b22: je 0x402b30 */ if (fZ) goto L_00402b30;
L_00402b24:; BB(0x00402b24);
    /* 00402b24: je 0x402b30 */ if (fZ) goto L_00402b30;
L_00402b26:; BB(0x00402b26);
    /* 00402b26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b28: call 0x402a98 */ r_esp -= 4; W32(r_esp, 0x402b2du); f_00402a98();
    /* 00402b2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00402b30:; BB(0x00402b30);
    /* 00402b30: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00402b33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b35: je 0x402b49 */ if (fZ) goto L_00402b49;
L_00402b37:; BB(0x00402b37);
    /* 00402b37: je 0x402b42 */ if (fZ) goto L_00402b42;
L_00402b39:; BB(0x00402b39);
    /* 00402b39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b3b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00402b3d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x402b3fu); call_ind(t); }
    /* 00402b3f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00402b42:; BB(0x00402b42);
    /* 00402b42: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_00402b49:; BB(0x00402b49);
    /* 00402b49: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00402b4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b4e: je 0x402b67 */ if (fZ) goto L_00402b67;
L_00402b50:; BB(0x00402b50);
    /* 00402b50: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00402b54: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00402b59: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00402b5d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402b60: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00402b67:; BB(0x00402b67);
    /* 00402b67: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00402b6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b6c: je 0x402b7d */ if (fZ) goto L_00402b7d;
L_00402b6e:; BB(0x00402b6e);
    /* 00402b6e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x402b73u); f_007127b0();
    /* 00402b73: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402b76: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00402b7d:; BB(0x00402b7d);
    /* 00402b7d: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00402b80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b82: je 0x402b9b */ if (fZ) goto L_00402b9b;
L_00402b84:; BB(0x00402b84);
    /* 00402b84: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00402b88: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00402b8d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00402b91: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402b94: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
L_00402b9b:; BB(0x00402b9b);
    /* 00402b9b: call 0x70cc5c */ r_esp -= 4; W32(r_esp, 0x402ba0u); f_0070cc5c();
    /* 00402ba0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00402ba7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402baa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x402bafu); f_008171e8();
    /* 00402baf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402bb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00402bb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00402bbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402bbc: ret  */ FN_RET(0x00402ae0); r_esp += 4; return;
}

void f_00402bc0(void)
{
    FN_ENTER(0x00402bc0);
    /* 00402bc0: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00402bc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402bc8: je 0x402bd3 */ if (fZ) goto L_00402bd3;
L_00402bca:; BB(0x00402bca);
    /* 00402bca: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402bce: call 0x402bd4 */ r_esp -= 4; W32(r_esp, 0x402bd3u); f_00402bd4();
L_00402bd3:; BB(0x00402bd3);
    /* 00402bd3: ret  */ FN_RET(0x00402bc0); r_esp += 4; return;
}

void f_00402bd4(void) /* sub_402BD4 */
{
    FN_ENTER(0x00402bd4);
    /* 00402bd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00402bd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402bd6: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402bdc: mov esi, ecx */ r_esi = r_ecx;
    /* 00402bde: mov ebx, dword ptr [esp + 0x214] */ r_ebx = R32((u32)(r_esp+0x214u));
    /* 00402be5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00402be8: lea eax, [ebx + 0x1a954] */ r_eax = (u32)(r_ebx+0x1a954u);
    /* 00402bee: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00402bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402bf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402bf5: call 0x857f98 */ r_esp -= 4; W32(r_esp, 0x402bfau); f_00857f98();
    /* 00402bfa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402bfd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00402c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402c01: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402c07: call 0x70d230 */ r_esp -= 4; W32(r_esp, 0x402c0cu); f_0070d230();
    /* 00402c0c: push dword ptr [ebx + 0x1a994] */ { u32 v = R32((u32)(r_ebx+0x1a994u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402c12: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402c18: call 0x70d248 */ r_esp -= 4; W32(r_esp, 0x402c1du); f_0070d248();
    /* 00402c1d: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00402c23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402c24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00402c25: ret 4 */ FN_RET(0x00402bd4); r_esp += 8; return;
}

void f_00402c28(void)
{
    FN_ENTER(0x00402c28);
    /* 00402c28: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00402c2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402c30: je 0x402c3b */ if (fZ) goto L_00402c3b;
L_00402c32:; BB(0x00402c32);
    /* 00402c32: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402c36: call 0x402c3c */ r_esp -= 4; W32(r_esp, 0x402c3bu); f_00402c3c();
L_00402c3b:; BB(0x00402c3b);
    /* 00402c3b: ret  */ FN_RET(0x00402c28); r_esp += 4; return;
}

void f_00402c3c(void) /* sub_402C3C */
{
    FN_ENTER(0x00402c3c);
    /* 00402c3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00402c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402c3e: mov esi, ecx */ r_esi = r_ecx;
    /* 00402c40: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00402c44: fild dword ptr [ebp + 0x1a99c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x1a99cu)));
    /* 00402c4a: mov eax, dword ptr [ebp + 0x1a99c] */ r_eax = R32((u32)(r_ebp+0x1a99cu));
    /* 00402c50: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402c56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402c57: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00402c5a: fadd dword ptr [eax*4 + 0x8f8780] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8f8780u));
    /* 00402c61: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00402c64: call 0x70d268 */ r_esp -= 4; W32(r_esp, 0x402c69u); f_0070d268();
    /* 00402c69: push dword ptr [ebp + 0x1a998] */ { u32 v = R32((u32)(r_ebp+0x1a998u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402c6f: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402c75: call 0x70d258 */ r_esp -= 4; W32(r_esp, 0x402c7au); f_0070d258();
    /* 00402c7a: fild dword ptr [ebp + 0x1a948] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x1a948u)));
    /* 00402c80: mov eax, dword ptr [ebp + 0x1a948] */ r_eax = R32((u32)(r_ebp+0x1a948u));
    /* 00402c86: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402c8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402c8d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00402c90: fadd dword ptr [eax*4 + 0x8f8780] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8f8780u));
    /* 00402c97: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00402c9a: call 0x70d2b8 */ r_esp -= 4; W32(r_esp, 0x402c9fu); f_0070d2b8();
    /* 00402c9f: push dword ptr [ebp + 0x1a944] */ { u32 v = R32((u32)(r_ebp+0x1a944u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402ca5: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402cab: call 0x70d298 */ r_esp -= 4; W32(r_esp, 0x402cb0u); f_0070d298();
    /* 00402cb0: push dword ptr [ebp + 0x1a950] */ { u32 v = R32((u32)(r_ebp+0x1a950u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402cb6: mov ecx, dword ptr [esi + 0x1288] */ r_ecx = R32((u32)(r_esi+0x1288u));
    /* 00402cbc: call 0x70d278 */ r_esp -= 4; W32(r_esp, 0x402cc1u); f_0070d278();
    /* 00402cc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402cc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00402cc3: ret 4 */ FN_RET(0x00402c3c); r_esp += 8; return;
}

void f_00402cc8(void)
{
    FN_ENTER(0x00402cc8);
    /* 00402cc8: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00402cce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402cd0: je 0x402cdb */ if (fZ) goto L_00402cdb;
L_00402cd2:; BB(0x00402cd2);
    /* 00402cd2: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402cd6: call 0x402cdc */ r_esp -= 4; W32(r_esp, 0x402cdbu); f_00402cdc();
L_00402cdb:; BB(0x00402cdb);
    /* 00402cdb: ret  */ FN_RET(0x00402cc8); r_esp += 4; return;
}

void f_00402cdc(void) /* sub_402CDC */
{
    FN_ENTER(0x00402cdc);
    /* 00402cdc: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00402ce1: mov ecx, dword ptr [ecx + 0x1288] */ r_ecx = R32((u32)(r_ecx+0x1288u));
    /* 00402ce7: call 0x70d230 */ r_esp -= 4; W32(r_esp, 0x402cecu); f_0070d230();
    /* 00402cec: ret 4 */ FN_RET(0x00402cdc); r_esp += 8; return;
}

void f_00402cf0(void)
{
    FN_ENTER(0x00402cf0);
    /* 00402cf0: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00402cf6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402cf8: je 0x402d03 */ if (fZ) goto L_00402d03;
L_00402cfa:; BB(0x00402cfa);
    /* 00402cfa: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402cfe: call 0x402d04 */ r_esp -= 4; W32(r_esp, 0x402d03u); f_00402d04();
L_00402d03:; BB(0x00402d03);
    /* 00402d03: ret  */ FN_RET(0x00402cf0); r_esp += 4; return;
}

void f_00402d04(void) /* sub_402D04 */
{
    FN_ENTER(0x00402d04);
    /* 00402d04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402d05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d06: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00402d08: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00402d0c: push dword ptr [ebx + 0x1a94c] */ { u32 v = R32((u32)(r_ebx+0x1a94cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00402d12: mov ecx, dword ptr [ebp + 0x1288] */ r_ecx = R32((u32)(r_ebp+0x1288u));
    /* 00402d18: call 0x70d288 */ r_esp -= 4; W32(r_esp, 0x402d1du); f_0070d288();
    /* 00402d1d: push dword ptr [ebx + 0x1a940] */ { u32 v = R32((u32)(r_ebx+0x1a940u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402d23: mov ecx, dword ptr [ebp + 0x1288] */ r_ecx = R32((u32)(r_ebp+0x1288u));
    /* 00402d29: call 0x70d2a8 */ r_esp -= 4; W32(r_esp, 0x402d2eu); f_0070d2a8();
    /* 00402d2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402d2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402d30: ret 4 */ FN_RET(0x00402d04); r_esp += 8; return;
}

void f_00402d34(void)
{
    FN_ENTER(0x00402d34);
    /* 00402d34: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00402d3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402d3c: je 0x402d47 */ if (fZ) goto L_00402d47;
L_00402d3e:; BB(0x00402d3e);
    /* 00402d3e: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402d42: call 0x402d48 */ r_esp -= 4; W32(r_esp, 0x402d47u); f_00402d48();
L_00402d47:; BB(0x00402d47);
    /* 00402d47: ret  */ FN_RET(0x00402d34); r_esp += 4; return;
}

void f_00402d48(void) /* sub_402D48 */
{
    FN_ENTER(0x00402d48);
    /* 00402d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402d49: sub esp, 0xa08 */ {  u32 a = r_esp; u32 b = 0xa08u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402d4f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00402d51: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 00402d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402d56: je 0x402e9a */ if (fZ) goto L_00402e9a;
L_00402d5c:; BB(0x00402d5c);
    /* 00402d5c: mov eax, dword ptr [esp + 0xa10] */ r_eax = R32((u32)(r_esp+0xa10u));
    /* 00402d63: mov edx, dword ptr [eax + 0x1a94c] */ r_edx = R32((u32)(r_eax+0x1a94cu));
    /* 00402d69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402d6b: jne 0x402dcb */ if (!fZ) goto L_00402dcb;
L_00402d6d:; BB(0x00402d6d);
    /* 00402d6d: mov eax, dword ptr [0xa3a940] */ r_eax = R32((u32)(0xa3a940u));
    /* 00402d72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402d74: je 0x402da7 */ if (fZ) goto L_00402da7;
L_00402d76:; BB(0x00402d76);
    /* 00402d76: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d78: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d7a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x402d7fu); f_00792fe8();
    /* 00402d7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402d80: lea edx, [ebp + 0x884] */ r_edx = (u32)(r_ebp+0x884u);
    /* 00402d86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d87: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x402d8cu); f_00857fed();
    /* 00402d8c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d8e: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d90: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x402d95u); f_00792fe8();
    /* 00402d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402d96: lea edx, [ebp + 0xa84] */ r_edx = (u32)(r_ebp+0xa84u);
    /* 00402d9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d9d: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x402da2u); f_00857fed();
    /* 00402da2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402da5: jmp 0x402e04 */ goto L_00402e04;
L_00402da7:; BB(0x00402da7);
    /* 00402da7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00402da9: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00402dab: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x402db0u); f_00792fe8();
    /* 00402db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402db1: lea edx, [ebp + 0x884] */ r_edx = (u32)(r_ebp+0x884u);
    /* 00402db7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402db8: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x402dbdu); f_00857fed();
    /* 00402dbd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402dc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402dc2: mov word ptr [ebp + 0xa84], ax */ W16((u32)(r_ebp+0xa84u), (u16)r_eax);
    /* 00402dc9: jmp 0x402e04 */ goto L_00402e04;
L_00402dcb:; BB(0x00402dcb);
    /* 00402dcb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00402dcd: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00402dcf: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x402dd4u); f_00792fe8();
    /* 00402dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402dd5: lea edx, [ebp + 0x884] */ r_edx = (u32)(r_ebp+0x884u);
    /* 00402ddb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ddc: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x402de1u); f_00857fed();
    /* 00402de1: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00402de3: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00402de5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x402deau); f_00792fe8();
    /* 00402dea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402deb: lea edx, [ebp + 0xa84] */ r_edx = (u32)(r_ebp+0xa84u);
    /* 00402df1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402df2: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x402df7u); f_00857fed();
    /* 00402df7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402dfa: mov dword ptr [ebp + 0x128c], 1 */ W32((u32)(r_ebp+0x128cu), 0x1u);
L_00402e04:; BB(0x00402e04);
    /* 00402e04: mov edx, dword ptr [ebp + 0x74] */ r_edx = R32((u32)(r_ebp+0x74u));
    /* 00402e07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402e09: mov word ptr [ebp + 0xc84], ax */ W16((u32)(r_ebp+0xc84u), (u16)r_eax);
    /* 00402e10: mov word ptr [ebp + 0xe84], ax */ W16((u32)(r_ebp+0xe84u), (u16)r_eax);
    /* 00402e17: mov word ptr [ebp + 0x1084], ax */ W16((u32)(r_ebp+0x1084u), (u16)r_eax);
    /* 00402e1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402e20: je 0x402e86 */ if (fZ) goto L_00402e86;
L_00402e22:; BB(0x00402e22);
    /* 00402e22: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00402e26: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00402e29: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00402e2d: lea ecx, [ebp + 0x884] */ r_ecx = (u32)(r_ebp+0x884u);
    /* 00402e33: lea edx, [ebp + 0x1284] */ r_edx = (u32)(r_ebp+0x1284u);
    /* 00402e39: mov esi, edx */ r_esi = r_edx;
    /* 00402e3b: mov edi, ecx */ r_edi = r_ecx;
L_00402e3d:; BB(0x00402e3d);
    /* 00402e3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402e3e: push 0x8f881c */ { u32 v = 0x8f881cu; r_esp -= 4; W32(r_esp, v); }
    /* 00402e43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402e44: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x402e49u); f_00857e29();
    /* 00402e49: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00402e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402e4e: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x402e53u); f_00858009();
    /* 00402e53: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402e56: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00402e5a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402e5c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402e5e: add edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00402e64: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402e66: jg 0x402e3d */ if ((!fZ&&fS==fO)) goto L_00402e3d;
L_00402e68:; BB(0x00402e68);
    /* 00402e68: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00402e6b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00402e6f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00402e73: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402e75: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 00402e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402e79: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x402e7eu); f_0073ae38();
    /* 00402e7e: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 00402e81: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x402e86u); f_0073b0f0();
L_00402e86:; BB(0x00402e86);
    /* 00402e86: mov dword ptr [0xa3a938], 1 */ W32((u32)(0xa3a938u), 0x1u);
    /* 00402e90: add esp, 0xa08 */ {  u32 a = r_esp; u32 b = 0xa08u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00402e96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402e97: ret 4 */ FN_RET(0x00402d48); r_esp += 8; return;
L_00402e9a:; BB(0x00402e9a);
    /* 00402e9a: push 0x8f87e4 */ { u32 v = 0x8f87e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00402e9f: push 0x8f87dc */ { u32 v = 0x8f87dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00402ea4: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x402ea9u); f_0073a888();
    /* 00402ea9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402eac: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 00402eaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402eb1: jne 0x402d5c */ if (!fZ) goto L_00402d5c;
L_00402eb7:; BB(0x00402eb7);
    /* 00402eb7: add esp, 0xa08 */ {  u32 a = r_esp; u32 b = 0xa08u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00402ebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402ebe: ret 4 */ FN_RET(0x00402d48); r_esp += 8; return;
}

void f_00402ec4(void)
{
    FN_ENTER(0x00402ec4);
    /* 00402ec4: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00402eca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402ecc: je 0x402ed7 */ if (fZ) goto L_00402ed7;
L_00402ece:; BB(0x00402ece);
    /* 00402ece: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00402ed2: call 0x402ed8 */ r_esp -= 4; W32(r_esp, 0x402ed7u); f_00402ed8();
L_00402ed7:; BB(0x00402ed7);
    /* 00402ed7: ret  */ FN_RET(0x00402ec4); r_esp += 4; return;
}

void f_00402ed8(void) /* sub_402ED8 */
{
    FN_ENTER(0x00402ed8);
    /* 00402ed8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402ed9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402eda: mov edi, ecx */ r_edi = r_ecx;
    /* 00402edc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00402ee0: lea ebx, [edi + 0x84] */ r_ebx = (u32)(r_edi+0x84u);
    /* 00402ee6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ee7: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x402eecu); f_00857fed();
    /* 00402eec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402eef: mov ecx, edi */ r_ecx = r_edi;
    /* 00402ef1: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x402ef6u); f_00404a34();
    /* 00402ef6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402ef9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402efa: mov ecx, edi */ r_ecx = r_edi;
    /* 00402efc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402efe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402eff: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x402f04u); f_00402f0c();
    /* 00402f04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00402f05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00402f06: ret 4 */ FN_RET(0x00402ed8); r_esp += 8; return;
}

void f_00402f0c(void) /* sub_402F0C */
{
    FN_ENTER(0x00402f0c);
    /* 00402f0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00402f0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00402f0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f0f: mov edi, ecx */ r_edi = r_ecx;
    /* 00402f11: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00402f15: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00402f19: mov edx, dword ptr [edi + 0x6c] */ r_edx = R32((u32)(r_edi+0x6cu));
    /* 00402f1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402f1e: je 0x402f26 */ if (fZ) goto L_00402f26;
L_00402f20:; BB(0x00402f20);
    /* 00402f20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402f21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00402f22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00402f23: ret 0x10 */ FN_RET(0x00402f0c); r_esp += 20; return;
L_00402f26:; BB(0x00402f26);
    /* 00402f26: mov edx, dword ptr [edi + 0x70] */ r_edx = R32((u32)(r_edi+0x70u));
    /* 00402f29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402f2b: jne 0x402f20 */ if (!fZ) goto L_00402f20;
L_00402f2d:; BB(0x00402f2d);
    /* 00402f2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f2f: push 0x8f87d4 */ { u32 v = 0x8f87d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f34: push 0x8f87cc */ { u32 v = 0x8f87ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00402f39: call 0x73b698 */ r_esp -= 4; W32(r_esp, 0x402f3eu); f_0073b698();
    /* 00402f3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402f41: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 00402f44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402f46: je 0x402ff3 */ if (fZ) goto L_00402ff3;
L_00402f4c:; BB(0x00402f4c);
    /* 00402f4c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00402f50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402f52: je 0x402f65 */ if (fZ) goto L_00402f65;
L_00402f54:; BB(0x00402f54);
    /* 00402f54: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f56: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00402f5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f5b: mov ecx, eax */ r_ecx = r_eax;
    /* 00402f5d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x402f62u); f_0073ae38();
    /* 00402f62: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
L_00402f65:; BB(0x00402f65);
    /* 00402f65: mov ecx, eax */ r_ecx = r_eax;
    /* 00402f67: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x402f6cu); f_0073b0f0();
    /* 00402f6c: mov ecx, dword ptr [edi + 0x6c] */ r_ecx = R32((u32)(r_edi+0x6cu));
    /* 00402f6f: call 0x73b558 */ r_esp -= 4; W32(r_esp, 0x402f74u); f_0073b558();
    /* 00402f74: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00402f78: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00402f7b: je 0x402ff3 */ if (fZ) goto L_00402ff3;
L_00402f7d:; BB(0x00402f7d);
    /* 00402f7d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f7f: push 0xa3a924 */ { u32 v = 0xa3a924u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f84: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x402f89u); f_00735708();
    /* 00402f89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402f8c: mov edx, dword ptr [edi + 0x6c] */ r_edx = R32((u32)(r_edi+0x6cu));
    /* 00402f8f: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 00402f92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402f94: je 0x402ff3 */ if (fZ) goto L_00402ff3;
L_00402f96:; BB(0x00402f96);
    /* 00402f96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402f98: je 0x403007 */ if (fZ) goto L_00403007;
L_00402f9a:; BB(0x00402f9a);
    /* 00402f9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f9c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00402f9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00402fa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00402fa1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x402fa6u); f_00735c90();
    /* 00402fa6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402fa8: je 0x402ff9 */ if (fZ) goto L_00402ff9;
L_00402faa:; BB(0x00402faa);
    /* 00402faa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402fac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00402fae: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00402fb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402fb2: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x402fb7u); f_00735c90();
    /* 00402fb7: push dword ptr [0xa3a92c] */ { u32 v = R32((u32)(0xa3a92cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00402fbd: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00402fc0: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x402fc5u); f_00736138();
    /* 00402fc5: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00402fc8: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x402fcdu); f_00736458();
    /* 00402fcd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00402fd1: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00402fd4: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00402fd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402fd8: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x402fddu); f_00736510();
    /* 00402fdd: mov edx, dword ptr [edi + 0x70] */ r_edx = R32((u32)(r_edi+0x70u));
    /* 00402fe0: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00402fe7: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00402fec: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_00402ff3:; BB(0x00402ff3);
    /* 00402ff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402ff4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00402ff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00402ff6: ret 0x10 */ FN_RET(0x00402f0c); r_esp += 20; return;
L_00402ff9:; BB(0x00402ff9);
    /* 00402ff9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 00402ffb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x403000u); f_0079317c();
    /* 00403000: mov ebp, eax */ r_ebp = r_eax;
    /* 00403002: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403005: jmp 0x402faa */ goto L_00402faa;
L_00403007:; BB(0x00403007);
    /* 00403007: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00403009: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x40300eu); f_0079317c();
    /* 0040300e: mov esi, eax */ r_esi = r_eax;
    /* 00403010: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403013: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 00403016: jmp 0x402f9a */ goto L_00402f9a;
}

