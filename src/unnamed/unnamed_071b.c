#include "protos.h"

void f_0071b0d0(void) /* sub_71B0D0 */
{
    FN_ENTER(0x0071b0d0);
    /* 0071b0d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b0d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071b0d4: mov esi, ecx */ r_esi = r_ecx;
    /* 0071b0d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b0d8: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71b0ddu); f_0071b354();
    /* 0071b0dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b0df: je 0x71b0e7 */ if (fZ) goto L_0071b0e7;
L_0071b0e1:; BB(0x0071b0e1);
    /* 0071b0e1: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0071b0e5: jmp 0x71b0f3 */ goto L_0071b0f3;
L_0071b0e7:; BB(0x0071b0e7);
    /* 0071b0e7: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0071b0eb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071b0ed: jne 0x71b0f3 */ if (!fZ) goto L_0071b0f3;
L_0071b0ef:; BB(0x0071b0ef);
    /* 0071b0ef: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071b0f1: je 0x71b136 */ if (fZ) goto L_0071b136;
L_0071b0f3:; BB(0x0071b0f3);
    /* 0071b0f3: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071b0f8: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b0fb: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 0071b0ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b101: je 0x71b131 */ if (fZ) goto L_0071b131;
L_0071b103:; BB(0x0071b103);
    /* 0071b103: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71b108u); f_007127b0();
    /* 0071b108: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 0071b10f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b111: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71b116u); f_0071b354();
    /* 0071b116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b118: jne 0x71b131 */ if (!fZ) goto L_0071b131;
L_0071b11a:; BB(0x0071b11a);
    /* 0071b11a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b120: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71b125u); f_0068d5a8();
    /* 0071b125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b128: je 0x71b131 */ if (fZ) goto L_0071b131;
L_0071b12a:; BB(0x0071b12a);
    /* 0071b12a: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b12c: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x71b131u); f_00693728();
L_0071b131:; BB(0x0071b131);
    /* 0071b131: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b134: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b135: ret  */ FN_RET(0x0071b0d0); r_esp += 4; return;
L_0071b136:; BB(0x0071b136);
    /* 0071b136: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b13b: je 0x71b176 */ if (fZ) goto L_0071b176;
L_0071b13d:; BB(0x0071b13d);
    /* 0071b13d: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b140: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b142: je 0x71b1a5 */ if (fZ) goto L_0071b1a5;
L_0071b144:; BB(0x0071b144);
    /* 0071b144: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x71b149u); f_0073608c();
    /* 0071b149: fld dword ptr [0x96fff8] */ FPUSH(R_F32((u32)(0x96fff8u)));
    /* 0071b14f: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 0071b152: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 0071b155: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071b157: fadd dword ptr [0x96fffc] */ ST(0) = ST(0) + R_F32((u32)(0x96fffcu));
    /* 0071b15d: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 0071b160: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0071b163: fld dword ptr [edx + 0x4c] */ FPUSH(R_F32((u32)(r_edx+0x4cu)));
    /* 0071b166: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071b168: fadd dword ptr [0x96fff4] */ ST(0) = ST(0) + R_F32((u32)(0x96fff4u));
    /* 0071b16e: fstp dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0)); FPOP();
    /* 0071b171: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b174: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b175: ret  */ FN_RET(0x0071b0d0); r_esp += 4; return;
L_0071b176:; BB(0x0071b176);
    /* 0071b176: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b179: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b17b: je 0x71b1a0 */ if (fZ) goto L_0071b1a0;
L_0071b17d:; BB(0x0071b17d);
    /* 0071b17d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71b182u); f_007127b0();
    /* 0071b182: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b188: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 0071b18f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71b194u); f_0068d5a8();
    /* 0071b194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b197: je 0x71b1a0 */ if (fZ) goto L_0071b1a0;
L_0071b199:; BB(0x0071b199);
    /* 0071b199: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b19b: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x71b1a0u); f_00693728();
L_0071b1a0:; BB(0x0071b1a0);
    /* 0071b1a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b1a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b1a4: ret  */ FN_RET(0x0071b0d0); r_esp += 4; return;
L_0071b1a5:; BB(0x0071b1a5);
    /* 0071b1a5: mov dword ptr [esp], 0x43a00000 */ W32((u32)(r_esp), 0x43a00000u);
    /* 0071b1ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071b1af: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 0071b1b7: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b1ba: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1bd: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x71b1c2u); f_007354fc();
    /* 0071b1c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071b1c5: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 0071b1c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b1ca: je 0x71b1a0 */ if (fZ) goto L_0071b1a0;
L_0071b1cc:; BB(0x0071b1cc);
    /* 0071b1cc: push 0x161 */ { u32 v = 0x161u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1d1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b1d6u); f_0079317c();
    /* 0071b1d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b1d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1d9: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1de: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1e2: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b1e7u); f_00735c90();
    /* 0071b1e7: push 0x162 */ { u32 v = 0x162u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1ec: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b1f1u); f_0079317c();
    /* 0071b1f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b1f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1f4: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1f9: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b1fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b1fd: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b202u); f_00735c90();
    /* 0071b202: push 0x163 */ { u32 v = 0x163u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b207: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b20cu); f_0079317c();
    /* 0071b20c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b20d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b20f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b214: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b218: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b21du); f_00735c90();
    /* 0071b21d: push 0x164 */ { u32 v = 0x164u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b222: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b227u); f_0079317c();
    /* 0071b227: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b228: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b22a: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b22f: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b233: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b238u); f_00735c90();
    /* 0071b238: push 0x165 */ { u32 v = 0x165u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b23d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b242u); f_0079317c();
    /* 0071b242: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b243: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b245: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b24a: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b24d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b24e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b253u); f_00735c90();
    /* 0071b253: push 0x166 */ { u32 v = 0x166u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b258: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b25du); f_0079317c();
    /* 0071b25d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b25e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b260: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b265: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b269: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b26eu); f_00735c90();
    /* 0071b26e: push 0x167 */ { u32 v = 0x167u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b273: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b278u); f_0079317c();
    /* 0071b278: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b279: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b27b: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b280: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b284: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b289u); f_00735c90();
    /* 0071b289: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b28e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b293u); f_0079317c();
    /* 0071b293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b294: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b296: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b29b: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b29f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2a4u); f_00735c90();
    /* 0071b2a4: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2a9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2aeu); f_0079317c();
    /* 0071b2ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b2af: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2b1: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2b6: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b2b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2ba: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2bfu); f_00735c90();
    /* 0071b2bf: push 0x16a */ { u32 v = 0x16au; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2c4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2c9u); f_0079317c();
    /* 0071b2c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b2ca: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2cc: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2d1: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b2d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2d5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2dau); f_00735c90();
    /* 0071b2da: push 0x16b */ { u32 v = 0x16bu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2df: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2e4u); f_0079317c();
    /* 0071b2e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b2e5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2e7: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2ec: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b2ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2f0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2f5u); f_00735c90();
    /* 0071b2f5: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2fa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2ffu); f_0079317c();
    /* 0071b2ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b300: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b302: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b307: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b30a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b30b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b310u); f_00735c90();
    /* 0071b310: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b315: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b318: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x71b31du); f_00712624();
    /* 0071b31d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b323: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0071b326: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0071b32d: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071b332: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0071b339: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71b33eu); f_0068d5a8();
    /* 0071b33e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b33f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b341: je 0x71b1a0 */ if (fZ) goto L_0071b1a0;
L_0071b347:; BB(0x0071b347);
    /* 0071b347: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b349: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x71b34eu); f_006936ec();
    /* 0071b34e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b351: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b352: ret  */ FN_RET(0x0071b0d0); r_esp += 4; return;
}

void f_0071b1ff(void)
{
    FN_ENTER(0x0071b1ff);
    goto L_0071b1ff;
L_0071b1a0:; BB(0x0071b1a0);
    /* 0071b1a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b1a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b1a4: ret  */ FN_RET(0x0071b1ff); r_esp += 4; return;
L_0071b1ff:; BB(0x0071b1ff);
    /* 0071b1ff: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0071b200: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0071b202: push 0x163 */ { u32 v = 0x163u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b207: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b20cu); f_0079317c();
    /* 0071b20c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b20d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b20f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b214: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b218: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b21du); f_00735c90();
    /* 0071b21d: push 0x164 */ { u32 v = 0x164u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b222: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b227u); f_0079317c();
    /* 0071b227: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b228: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b22a: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b22f: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b233: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b238u); f_00735c90();
    /* 0071b238: push 0x165 */ { u32 v = 0x165u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b23d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b242u); f_0079317c();
    /* 0071b242: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b243: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b245: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b24a: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b24d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b24e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b253u); f_00735c90();
    /* 0071b253: push 0x166 */ { u32 v = 0x166u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b258: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b25du); f_0079317c();
    /* 0071b25d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b25e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b260: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b265: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b269: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b26eu); f_00735c90();
    /* 0071b26e: push 0x167 */ { u32 v = 0x167u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b273: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b278u); f_0079317c();
    /* 0071b278: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b279: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b27b: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b280: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b284: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b289u); f_00735c90();
    /* 0071b289: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b28e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b293u); f_0079317c();
    /* 0071b293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b294: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b296: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b29b: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b29f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2a4u); f_00735c90();
    /* 0071b2a4: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2a9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2aeu); f_0079317c();
    /* 0071b2ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b2af: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2b1: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2b6: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b2b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2ba: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2bfu); f_00735c90();
    /* 0071b2bf: push 0x16a */ { u32 v = 0x16au; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2c4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2c9u); f_0079317c();
    /* 0071b2c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b2ca: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2cc: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2d1: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b2d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2d5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2dau); f_00735c90();
    /* 0071b2da: push 0x16b */ { u32 v = 0x16bu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2df: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2e4u); f_0079317c();
    /* 0071b2e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b2e5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2e7: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2ec: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b2ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2f0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b2f5u); f_00735c90();
    /* 0071b2f5: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b2fa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x71b2ffu); f_0079317c();
    /* 0071b2ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b300: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b302: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b307: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b30a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b30b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x71b310u); f_00735c90();
    /* 0071b310: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b315: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0071b318: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x71b31du); f_00712624();
    /* 0071b31d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b323: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0071b326: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0071b32d: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071b332: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0071b339: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71b33eu); f_0068d5a8();
    /* 0071b33e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b33f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b341: je 0x71b1a0 */ if (fZ) goto L_0071b1a0;
L_0071b347:; BB(0x0071b347);
    /* 0071b347: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b349: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x71b34eu); f_006936ec();
    /* 0071b34e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b351: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b352: ret  */ FN_RET(0x0071b1ff); r_esp += 4; return;
}

void f_0071b354(void) /* sub_71B354 */
{
    FN_ENTER(0x0071b354);
    /* 0071b354: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0071b357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b359: je 0x71b36b */ if (fZ) goto L_0071b36b;
L_0071b35b:; BB(0x0071b35b);
    /* 0071b35b: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 0071b35e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b360: je 0x71b368 */ if (fZ) goto L_0071b368;
L_0071b362:; BB(0x0071b362);
    /* 0071b362: mov eax, 1 */ r_eax = 0x1u;
    /* 0071b367: ret  */ FN_RET(0x0071b354); r_esp += 4; return;
L_0071b368:; BB(0x0071b368);
    /* 0071b368: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b36a: ret  */ FN_RET(0x0071b354); r_esp += 4; return;
L_0071b36b:; BB(0x0071b36b);
    /* 0071b36b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b36d: ret  */ FN_RET(0x0071b354); r_esp += 4; return;
}

void f_0071b370(void) /* sub_71B370 */
{
    FN_ENTER(0x0071b370);
    /* 0071b370: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b371: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b372: mov esi, ecx */ r_esi = r_ecx;
    /* 0071b374: mov ebp, dword ptr [esi + 0x4c] */ r_ebp = R32((u32)(r_esi+0x4cu));
    /* 0071b377: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b379: je 0x71b473 */ if (fZ) goto L_0071b473;
L_0071b37f:; BB(0x0071b37f);
    /* 0071b37f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b381: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71b386u); f_0071b354();
    /* 0071b386: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b388: je 0x71b390 */ if (fZ) goto L_0071b390;
L_0071b38a:; BB(0x0071b38a);
    /* 0071b38a: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0071b38e: jmp 0x71b3ac */ goto L_0071b3ac;
L_0071b390:; BB(0x0071b390);
    /* 0071b390: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0071b394: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071b396: jne 0x71b3ac */ if (!fZ) goto L_0071b3ac;
L_0071b398:; BB(0x0071b398);
    /* 0071b398: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071b39a: jne 0x71b3ac */ if (!fZ) goto L_0071b3ac;
L_0071b39c:; BB(0x0071b39c);
    /* 0071b39c: call 0x71843c */ r_esp -= 4; W32(r_esp, 0x71b3a1u); f_0071843c();
    /* 0071b3a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b3a3: je 0x71b3d5 */ if (fZ) goto L_0071b3d5;
L_0071b3a5:; BB(0x0071b3a5);
    /* 0071b3a5: mov ebp, dword ptr [esi + 0x4c] */ r_ebp = R32((u32)(r_esi+0x4cu));
    /* 0071b3a8: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
L_0071b3ac:; BB(0x0071b3ac);
    /* 0071b3ac: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071b3b1: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 0071b3b5: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b3b7: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71b3bcu); f_0071b354();
    /* 0071b3bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b3be: je 0x71b3cb */ if (fZ) goto L_0071b3cb;
L_0071b3c0:; BB(0x0071b3c0);
    /* 0071b3c0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0071b3c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071b3c5: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x71b3c8u); call_ind(t); }
    /* 0071b3c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b3c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b3ca: ret  */ FN_RET(0x0071b370); r_esp += 4; return;
L_0071b3cb:; BB(0x0071b3cb);
    /* 0071b3cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071b3cd: call 0x73d5bc */ r_esp -= 4; W32(r_esp, 0x71b3d2u); f_0073d5bc();
    /* 0071b3d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b3d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b3d4: ret  */ FN_RET(0x0071b370); r_esp += 4; return;
L_0071b3d5:; BB(0x0071b3d5);
    /* 0071b3d5: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0071b3d9: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b3de: je 0x71b43f */ if (fZ) goto L_0071b43f;
L_0071b3e0:; BB(0x0071b3e0);
    /* 0071b3e0: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0071b3e3: call 0x73d5a4 */ r_esp -= 4; W32(r_esp, 0x71b3e8u); f_0073d5a4();
    /* 0071b3e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b3ea: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x71b3efu); f_00791748();
    /* 0071b3ef: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b3f5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71b3fau); f_0068d5a8();
    /* 0071b3fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071b3fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b3ff: je 0x71b408 */ if (fZ) goto L_0071b408;
L_0071b401:; BB(0x0071b401);
    /* 0071b401: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b403: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x71b408u); f_006936ec();
L_0071b408:; BB(0x0071b408);
    /* 0071b408: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x71b40du); f_00694c6c();
    /* 0071b40d: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0071b413: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0071b416: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071b418: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071b41a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071b41c: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071b41e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0071b425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b426: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x71b42bu); f_007c1160();
    /* 0071b42b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b42d: je 0x71b473 */ if (fZ) goto L_0071b473;
L_0071b42f:; BB(0x0071b42f);
    /* 0071b42f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0071b433: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b438: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 0071b43c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b43d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b43e: ret  */ FN_RET(0x0071b370); r_esp += 4; return;
L_0071b43f:; BB(0x0071b43f);
    /* 0071b43f: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0071b442: call 0x73d5d4 */ r_esp -= 4; W32(r_esp, 0x71b447u); f_0073d5d4();
    /* 0071b447: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b449: jne 0x71b46b */ if (!fZ) goto L_0071b46b;
L_0071b44b:; BB(0x0071b44b);
    /* 0071b44b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b44d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x71b452u); f_00791748();
    /* 0071b452: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b458: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71b45du); f_0068d5a8();
    /* 0071b45d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071b460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b462: je 0x71b46b */ if (fZ) goto L_0071b46b;
L_0071b464:; BB(0x0071b464);
    /* 0071b464: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b466: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x71b46bu); f_00693728();
L_0071b46b:; BB(0x0071b46b);
    /* 0071b46b: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0071b46e: call 0x73d5bc */ r_esp -= 4; W32(r_esp, 0x71b473u); f_0073d5bc();
L_0071b473:; BB(0x0071b473);
    /* 0071b473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b474: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b475: ret  */ FN_RET(0x0071b370); r_esp += 4; return;
}

void f_0071b478(void) /* sub_71B478 */
{
    FN_ENTER(0x0071b478);
    /* 0071b478: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0071b47b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b47d: je 0x71b48f */ if (fZ) goto L_0071b48f;
L_0071b47f:; BB(0x0071b47f);
    /* 0071b47f: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 0071b482: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b484: je 0x71b48c */ if (fZ) goto L_0071b48c;
L_0071b486:; BB(0x0071b486);
    /* 0071b486: mov eax, 1 */ r_eax = 0x1u;
    /* 0071b48b: ret  */ FN_RET(0x0071b478); r_esp += 4; return;
L_0071b48c:; BB(0x0071b48c);
    /* 0071b48c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b48e: ret  */ FN_RET(0x0071b478); r_esp += 4; return;
L_0071b48f:; BB(0x0071b48f);
    /* 0071b48f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b491: ret  */ FN_RET(0x0071b478); r_esp += 4; return;
}

void f_0071b494(void) /* sub_71B494 */
{
    FN_ENTER(0x0071b494);
    /* 0071b494: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0071b497: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b499: je 0x71b4a6 */ if (fZ) goto L_0071b4a6;
L_0071b49b:; BB(0x0071b49b);
    /* 0071b49b: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0071b4a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b4a1: call 0x733714 */ r_esp -= 4; W32(r_esp, 0x71b4a6u); f_00733714();
L_0071b4a6:; BB(0x0071b4a6);
    /* 0071b4a6: ret 4 */ FN_RET(0x0071b494); r_esp += 8; return;
}

void f_0071b4ac(void) /* sub_71B4AC */
{
    FN_ENTER(0x0071b4ac);
    /* 0071b4ac: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0071b4af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b4b1: je 0x71b4be */ if (fZ) goto L_0071b4be;
L_0071b4b3:; BB(0x0071b4b3);
    /* 0071b4b3: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0071b4b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b4b9: call 0x7337e8 */ r_esp -= 4; W32(r_esp, 0x71b4beu); f_007337e8();
L_0071b4be:; BB(0x0071b4be);
    /* 0071b4be: ret 4 */ FN_RET(0x0071b4ac); r_esp += 8; return;
}

void f_0071b4c4(void) /* sub_71B4C4 */
{
    FN_ENTER(0x0071b4c4);
    /* 0071b4c4: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0071b4c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b4c9: je 0x71b4d2 */ if (fZ) goto L_0071b4d2;
L_0071b4cb:; BB(0x0071b4cb);
    /* 0071b4cb: mov dword ptr [eax + 0x50], 3 */ W32((u32)(r_eax+0x50u), 0x3u);
L_0071b4d2:; BB(0x0071b4d2);
    /* 0071b4d2: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0071b4d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b4d7: je 0x71b4e0 */ if (fZ) goto L_0071b4e0;
L_0071b4d9:; BB(0x0071b4d9);
    /* 0071b4d9: mov dword ptr [eax + 0x50], 3 */ W32((u32)(r_eax+0x50u), 0x3u);
L_0071b4e0:; BB(0x0071b4e0);
    /* 0071b4e0: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0071b4e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b4e5: je 0x71b4ee */ if (fZ) goto L_0071b4ee;
L_0071b4e7:; BB(0x0071b4e7);
    /* 0071b4e7: mov dword ptr [eax + 0x50], 3 */ W32((u32)(r_eax+0x50u), 0x3u);
L_0071b4ee:; BB(0x0071b4ee);
    /* 0071b4ee: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0071b4f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b4f3: je 0x71b4fe */ if (fZ) goto L_0071b4fe;
L_0071b4f5:; BB(0x0071b4f5);
    /* 0071b4f5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0071b4f8: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b4fb: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
L_0071b4fe:; BB(0x0071b4fe);
    /* 0071b4fe: ret  */ FN_RET(0x0071b4c4); r_esp += 4; return;
}

void f_0071b500(void) /* sub_71B500 */
{
    FN_ENTER(0x0071b500);
    /* 0071b500: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0071b503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b505: je 0x71b50e */ if (fZ) goto L_0071b50e;
L_0071b507:; BB(0x0071b507);
    /* 0071b507: mov dword ptr [eax + 0x50], 3 */ W32((u32)(r_eax+0x50u), 0x3u);
L_0071b50e:; BB(0x0071b50e);
    /* 0071b50e: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0071b511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b513: je 0x71b51c */ if (fZ) goto L_0071b51c;
L_0071b515:; BB(0x0071b515);
    /* 0071b515: mov dword ptr [eax + 0x50], 3 */ W32((u32)(r_eax+0x50u), 0x3u);
L_0071b51c:; BB(0x0071b51c);
    /* 0071b51c: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0071b51f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b521: je 0x71b52a */ if (fZ) goto L_0071b52a;
L_0071b523:; BB(0x0071b523);
    /* 0071b523: mov dword ptr [eax + 0x50], 3 */ W32((u32)(r_eax+0x50u), 0x3u);
L_0071b52a:; BB(0x0071b52a);
    /* 0071b52a: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0071b52d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b52f: je 0x71b53a */ if (fZ) goto L_0071b53a;
L_0071b531:; BB(0x0071b531);
    /* 0071b531: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0071b534: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b537: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
L_0071b53a:; BB(0x0071b53a);
    /* 0071b53a: ret  */ FN_RET(0x0071b500); r_esp += 4; return;
}

void f_0071b53c(void) /* sub_71B53C */
{
    FN_ENTER(0x0071b53c);
    /* 0071b53c: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0071b53f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b541: je 0x71b54c */ if (fZ) goto L_0071b54c;
L_0071b543:; BB(0x0071b543);
    /* 0071b543: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b547: call 0x7101fc */ r_esp -= 4; W32(r_esp, 0x71b54cu); f_007101fc();
L_0071b54c:; BB(0x0071b54c);
    /* 0071b54c: ret 4 */ FN_RET(0x0071b53c); r_esp += 8; return;
}

void f_0071b550(void) /* sub_71B550 */
{
    FN_ENTER(0x0071b550);
    /* 0071b550: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0071b553: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b555: je 0x71b564 */ if (fZ) goto L_0071b564;
L_0071b557:; BB(0x0071b557);
    /* 0071b557: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b55b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b55f: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x71b564u); f_0073ae38();
L_0071b564:; BB(0x0071b564);
    /* 0071b564: ret 8 */ FN_RET(0x0071b550); r_esp += 12; return;
}

void f_0071b568(void) /* sub_71B568 */
{
    FN_ENTER(0x0071b568);
    /* 0071b568: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0071b56b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b56d: je 0x71b57b */ if (fZ) goto L_0071b57b;
L_0071b56f:; BB(0x0071b56f);
    /* 0071b56f: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b573: call 0x741e94 */ r_esp -= 4; W32(r_esp, 0x71b578u); f_00741e94();
    /* 0071b578: ret 4 */ FN_RET(0x0071b568); r_esp += 8; return;
L_0071b57b:; BB(0x0071b57b);
    /* 0071b57b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0071b580: ret 4 */ FN_RET(0x0071b568); r_esp += 8; return;
}

void f_0071b584(void) /* sub_71B584 */
{
    FN_ENTER(0x0071b584);
    /* 0071b584: mov dword ptr [0xa98560], 0x3f800000 */ W32((u32)(0xa98560u), 0x3f800000u);
    /* 0071b58e: mov dword ptr [0xa98564], 0x41000000 */ W32((u32)(0xa98564u), 0x41000000u);
    /* 0071b598: mov dword ptr [0xa98568], 0x3fc00000 */ W32((u32)(0xa98568u), 0x3fc00000u);
    /* 0071b5a2: ret  */ FN_RET(0x0071b584); r_esp += 4; return;
}

void f_0071b5a4(void) /* sub_71B5A4 */
{
    FN_ENTER(0x0071b5a4);
    /* 0071b5a4: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 0071b5a9: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
    /* 0071b5ad: ret  */ FN_RET(0x0071b5a4); r_esp += 4; return;
}

void f_0071b5b0(void) /* sub_71B5B0 */
{
    FN_ENTER(0x0071b5b0);
    /* 0071b5b0: movsx eax, word ptr [ecx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 0071b5b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b5b6: jle 0x71b5bb */ if ((fZ||fS!=fO)) goto L_0071b5bb;
L_0071b5b8:; BB(0x0071b5b8);
    /* 0071b5b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b5ba: ret  */ FN_RET(0x0071b5b0); r_esp += 4; return;
L_0071b5bb:; BB(0x0071b5bb);
    /* 0071b5bb: mov eax, 1 */ r_eax = 0x1u;
    /* 0071b5c0: ret  */ FN_RET(0x0071b5b0); r_esp += 4; return;
}

void f_0071b5c4(void) /* sub_71B5C4 */
{
    FN_ENTER(0x0071b5c4);
    /* 0071b5c4: movsx eax, word ptr [ecx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 0071b5c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b5ca: jle 0x71b5d3 */ if ((fZ||fS!=fO)) goto L_0071b5d3;
L_0071b5cc:; BB(0x0071b5cc);
    /* 0071b5cc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b5cf: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
L_0071b5d3:; BB(0x0071b5d3);
    /* 0071b5d3: ret  */ FN_RET(0x0071b5c4); r_esp += 4; return;
}

void f_0071b5d4(void) /* sub_71B5D4 */
{
    FN_ENTER(0x0071b5d4);
    /* 0071b5d4: mov dword ptr [0xa98570], 0x3f800000 */ W32((u32)(0xa98570u), 0x3f800000u);
    /* 0071b5de: mov dword ptr [0xa98574], 0x41000000 */ W32((u32)(0xa98574u), 0x41000000u);
    /* 0071b5e8: mov dword ptr [0xa98578], 0x3fc00000 */ W32((u32)(0xa98578u), 0x3fc00000u);
    /* 0071b5f2: ret  */ FN_RET(0x0071b5d4); r_esp += 4; return;
}

void f_0071b5f4(void) /* sub_71B5F4 */
{
    FN_ENTER(0x0071b5f4);
    /* 0071b5f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b5f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071b5f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071b5f9: call 0x71b618 */ r_esp -= 4; W32(r_esp, 0x71b5feu); f_0071b618();
    /* 0071b5fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071b602: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b604: jne 0x71b60a */ if (!fZ) goto L_0071b60a;
L_0071b606:; BB(0x0071b606);
    /* 0071b606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071b607: ret 4 */ FN_RET(0x0071b5f4); r_esp += 8; return;
L_0071b60a:; BB(0x0071b60a);
    /* 0071b60a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b60b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71b610u); f_005c2f74();
    /* 0071b610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b611: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071b612: ret 4 */ FN_RET(0x0071b5f4); r_esp += 8; return;
}

void f_0071b618(void) /* sub_71B618 */
{
    FN_ENTER(0x0071b618);
    /* 0071b618: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b619: mov ebp, esp */ r_ebp = r_esp;
    /* 0071b61b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b61d: push 0x8f0bd0 */ { u32 v = 0x8f0bd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b622: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071b628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b629: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071b630: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071b633: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071b636: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071b639: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071b63c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071b63f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071b642: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071b645: mov dword ptr [ecx], 0xb3faf0 */ W32((u32)(r_ecx), 0xb3faf0u);
    /* 0071b64b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071b652: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x71b657u); f_00710c28();
    /* 0071b657: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071b65a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071b661: mov esp, ebp */ r_esp = r_ebp;
    /* 0071b663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b664: ret  */ FN_RET(0x0071b618); r_esp += 4; return;
}

void f_0071b668(void) /* sub_71B668 */
{
    FN_ENTER(0x0071b668);
    /* 0071b668: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b669: mov ebp, esp */ r_ebp = r_esp;
    /* 0071b66b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b66d: push 0x8f0bec */ { u32 v = 0x8f0becu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b672: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071b678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b679: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071b680: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071b683: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071b686: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0071b689: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0071b68c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0071b68f: movsx ebx, word ptr [ebp + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0071b693: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0071b696: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b698: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x71b69du); f_0073ec50();
    /* 0071b69d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b69e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071b6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b6a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b6a3: push 0x9f2064 */ { u32 v = 0x9f2064u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b6a8: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x71b6adu); f_00710d30();
    /* 0071b6ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071b6b4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071b6b7: mov dword ptr [edx], 0xb3faf0 */ W32((u32)(r_edx), 0xb3faf0u);
    /* 0071b6bd: mov eax, dword ptr [0x9f2060] */ r_eax = R32((u32)(0x9f2060u));
    /* 0071b6c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b6c4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0071b6c7: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x71b6ccu); f_007930dc();
    /* 0071b6cc: mov ebx, eax */ r_ebx = r_eax;
    /* 0071b6ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b6cf: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x71b6d4u); f_007ac344();
    /* 0071b6d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071b6d7: fld dword ptr [0x970034] */ FPUSH(R_F32((u32)(0x970034u)));
    /* 0071b6dd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0071b6e0: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0071b6e3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0071b6e6: fadd dword ptr [eax*4 + 0x970020] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970020u));
    /* 0071b6ed: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 0071b6f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071b6f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b6f3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071b6f6: call 0x760aac */ r_esp -= 4; W32(r_esp, 0x71b6fbu); f_00760aac();
    /* 0071b6fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b6fc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071b6ff: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 0071b702: fstp dword ptr [edx + 0x60] */ W_F32((u32)(r_edx+0x60u), ST(0)); FPOP();
    /* 0071b705: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0071b708: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0071b70a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b70c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b70d: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x71b712u); f_0072db60();
    /* 0071b712: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0071b715: fadd dword ptr [0x970030] */ ST(0) = ST(0) + R_F32((u32)(0x970030u));
    /* 0071b71b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071b71e: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0071b721: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b724: call 0x760e58 */ r_esp -= 4; W32(r_esp, 0x71b729u); f_00760e58();
    /* 0071b729: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b72a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071b72d: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0071b730: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x71b735u); f_00710f64();
    /* 0071b735: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0071b73a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071b73d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071b740: jle 0x71b752 */ if ((fZ||fS!=fO)) goto L_0071b752;
L_0071b742:; BB(0x0071b742);
    /* 0071b742: mov dword ptr [edx + 0x64], 0x3f400000 */ W32((u32)(r_edx+0x64u), 0x3f400000u);
    /* 0071b749: mov dword ptr [edx + 0x68], 0x3f400000 */ W32((u32)(r_edx+0x68u), 0x3f400000u);
    /* 0071b750: jmp 0x71b760 */ goto L_0071b760;
L_0071b752:; BB(0x0071b752);
    /* 0071b752: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0071b759: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
L_0071b760:; BB(0x0071b760);
    /* 0071b760: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071b763: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071b766: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071b769: mov eax, edx */ r_eax = r_edx;
    /* 0071b76b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071b76e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071b775: mov esp, ebp */ r_esp = r_ebp;
    /* 0071b777: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b778: ret 4 */ FN_RET(0x0071b668); r_esp += 8; return;
}

void f_0071b77c(void) /* sub_71B77C */
{
    FN_ENTER(0x0071b77c);
    /* 0071b77c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b77d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b77e: mov esi, ecx */ r_esi = r_ecx;
    /* 0071b780: lea eax, [esi + 0x64] */ r_eax = (u32)(r_esi+0x64u);
    /* 0071b783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b784: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b786: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x71b78bu); f_00712658();
    /* 0071b78b: mov ebp, eax */ r_ebp = r_eax;
    /* 0071b78d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b78e: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b790: call 0x71b7a4 */ r_esp -= 4; W32(r_esp, 0x71b795u); f_0071b7a4();
    /* 0071b795: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b796: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0071b799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b79a: mov ecx, esi */ r_ecx = r_esi;
    /* 0071b79c: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71b7a1u); f_0072a648();
    /* 0071b7a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b7a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071b7a3: ret  */ FN_RET(0x0071b77c); r_esp += 4; return;
}

void f_0071b7a4(void) /* sub_71B7A4 */
{
    FN_ENTER(0x0071b7a4);
    /* 0071b7a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071b7a8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b7aa: lea eax, [edx + 0x10] */ r_eax = (u32)(r_edx+0x10u);
    /* 0071b7ad: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b7b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b7b2: call 0x760b74 */ r_esp -= 4; W32(r_esp, 0x71b7b7u); f_00760b74();
    /* 0071b7b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071b7ba: ret 4 */ FN_RET(0x0071b7a4); r_esp += 8; return;
}

void f_0071b7c0(void) /* sub_71B7C0 */
{
    FN_ENTER(0x0071b7c0);
    /* 0071b7c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b7c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071b7c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071b7c5: call 0x71b7e4 */ r_esp -= 4; W32(r_esp, 0x71b7cau); f_0071b7e4();
    /* 0071b7ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071b7ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b7d0: jne 0x71b7d6 */ if (!fZ) goto L_0071b7d6;
L_0071b7d2:; BB(0x0071b7d2);
    /* 0071b7d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071b7d3: ret 4 */ FN_RET(0x0071b7c0); r_esp += 8; return;
L_0071b7d6:; BB(0x0071b7d6);
    /* 0071b7d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071b7d7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x71b7dcu); f_00857e98();
    /* 0071b7dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071b7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071b7de: ret 4 */ FN_RET(0x0071b7c0); r_esp += 8; return;
}

void f_0071b7e4(void) /* sub_71B7E4 */
{
    FN_ENTER(0x0071b7e4);
    /* 0071b7e4: cmp ecx, dword ptr [0xa98584] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa98584u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071b7ea: jne 0x71b7f6 */ if (!fZ) goto L_0071b7f6;
L_0071b7ec:; BB(0x0071b7ec);
    /* 0071b7ec: mov dword ptr [0xa98584], 0 */ W32((u32)(0xa98584u), 0x0u);
L_0071b7f6:; BB(0x0071b7f6);
    /* 0071b7f6: ret  */ FN_RET(0x0071b7e4); r_esp += 4; return;
}

void f_0071b7f8(void) /* sub_71B7F8 */
{
    FN_ENTER(0x0071b7f8);
    /* 0071b7f8: mov ecx, dword ptr [0xa98584] */ r_ecx = R32((u32)(0xa98584u));
    /* 0071b7fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b800: je 0x71b815 */ if (fZ) goto L_0071b815;
L_0071b802:; BB(0x0071b802);
    /* 0071b802: je 0x71b80b */ if (fZ) goto L_0071b80b;
L_0071b804:; BB(0x0071b804);
    /* 0071b804: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071b806: call 0x71b7c0 */ r_esp -= 4; W32(r_esp, 0x71b80bu); f_0071b7c0();
L_0071b80b:; BB(0x0071b80b);
    /* 0071b80b: mov dword ptr [0xa98584], 0 */ W32((u32)(0xa98584u), 0x0u);
L_0071b815:; BB(0x0071b815);
    /* 0071b815: ret  */ FN_RET(0x0071b7f8); r_esp += 4; return;
}

void f_0071b818(void) /* sub_71B818 */
{
    FN_ENTER(0x0071b818);
    /* 0071b818: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071b819: mov eax, dword ptr [0xa98584] */ r_eax = R32((u32)(0xa98584u));
    /* 0071b81e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b820: je 0x71b824 */ if (fZ) goto L_0071b824;
L_0071b822:; BB(0x0071b822);
    /* 0071b822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b823: ret  */ FN_RET(0x0071b818); r_esp += 4; return;
L_0071b824:; BB(0x0071b824);
    /* 0071b824: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b826: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x71b82bu); f_008581c5();
    /* 0071b82b: mov ebp, eax */ r_ebp = r_eax;
    /* 0071b82d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071b830: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b832: je 0x71b845 */ if (fZ) goto L_0071b845;
L_0071b834:; BB(0x0071b834);
    /* 0071b834: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071b836: call 0x71b84c */ r_esp -= 4; W32(r_esp, 0x71b83bu); f_0071b84c();
L_0071b83b:; BB(0x0071b83b);
    /* 0071b83b: mov dword ptr [0xa98584], ebp */ W32((u32)(0xa98584u), r_ebp);
    /* 0071b841: mov eax, ebp */ r_eax = r_ebp;
    /* 0071b843: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b844: ret  */ FN_RET(0x0071b818); r_esp += 4; return;
L_0071b845:; BB(0x0071b845);
    /* 0071b845: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b847: jmp 0x71b83b */ goto L_0071b83b;
}

void f_0071b84c(void) /* sub_71B84C */
{
    FN_ENTER(0x0071b84c);
    /* 0071b84c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0071b852: mov eax, ecx */ r_eax = r_ecx;
    /* 0071b854: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0071b85b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0071b862: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0071b869: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0071b870: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0071b877: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0071b87e: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0071b885: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0071b88c: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0071b893: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 0071b89a: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0071b8a1: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0071b8a8: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0071b8af: mov dword ptr [ecx + 0x28], 0x3f800000 */ W32((u32)(r_ecx+0x28u), 0x3f800000u);
    /* 0071b8b6: mov dword ptr [ecx + 0x2c], 0x3f800000 */ W32((u32)(r_ecx+0x2cu), 0x3f800000u);
    /* 0071b8bd: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0071b8c4: mov dword ptr [ecx + 0x34], 0xffffffff */ W32((u32)(r_ecx+0x34u), 0xffffffffu);
    /* 0071b8cb: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 0071b8d2: ret  */ FN_RET(0x0071b84c); r_esp += 4; return;
}

void f_0071b8d4(void) /* sub_71B8D4 */
{
    FN_ENTER(0x0071b8d4);
    /* 0071b8d4: mov ecx, dword ptr [0xa98584] */ r_ecx = R32((u32)(0xa98584u));
    /* 0071b8da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b8dc: je 0x71b8fd */ if (fZ) goto L_0071b8fd;
L_0071b8de:; BB(0x0071b8de);
    /* 0071b8de: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b8e2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b8e6: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b8ea: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b8ee: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b8f2: call 0x71b900 */ r_esp -= 4; W32(r_esp, 0x71b8f7u); f_0071b900();
    /* 0071b8f7: mov eax, dword ptr [0xa98584] */ r_eax = R32((u32)(0xa98584u));
    /* 0071b8fc: ret  */ FN_RET(0x0071b8d4); r_esp += 4; return;
L_0071b8fd:; BB(0x0071b8fd);
    /* 0071b8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b8ff: ret  */ FN_RET(0x0071b8d4); r_esp += 4; return;
}

void f_0071b900(void) /* sub_71B900 */
{
    FN_ENTER(0x0071b900);
    /* 0071b900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b902: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071b903: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0071b907: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0071b90b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0071b90f: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b915: je 0x71b925 */ if (fZ) goto L_0071b925;
L_0071b917:; BB(0x0071b917);
    /* 0071b917: fld dword ptr [0x9700bc] */ FPUSH(R_F32((u32)(0x9700bcu)));
    /* 0071b91d: fld dword ptr [0x9700bc] */ FPUSH(R_F32((u32)(0x9700bcu)));
    /* 0071b923: jmp 0x71b931 */ goto L_0071b931;
L_0071b925:; BB(0x0071b925);
    /* 0071b925: fld dword ptr [0x9700c0] */ FPUSH(R_F32((u32)(0x9700c0u)));
    /* 0071b92b: fld dword ptr [0x9700c0] */ FPUSH(R_F32((u32)(0x9700c0u)));
L_0071b931:; BB(0x0071b931);
    /* 0071b931: fld dword ptr [0x9700b8] */ FPUSH(R_F32((u32)(0x9700b8u)));
    /* 0071b937: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0071b939: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0071b93b: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 0071b93e: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0071b941: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 0071b944: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 0071b947: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0071b949: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0071b94b: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 0071b94e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0071b951: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0071b954: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0071b957: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b95d: je 0x71b980 */ if (fZ) goto L_0071b980;
L_0071b95f:; BB(0x0071b95f);
    /* 0071b95f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071b961: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071b963: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0071b965: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0071b967: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b969: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071b96b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0071b96f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b971: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071b973: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 0071b976: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071b978: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071b97b: fst dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0));
    /* 0071b97e: jmp 0x71b99f */ goto L_0071b99f;
L_0071b980:; BB(0x0071b980);
    /* 0071b980: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0071b982: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0071b984: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071b986: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071b988: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071b98a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071b98c: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0071b98e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0071b992: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071b994: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 0071b997: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071b999: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071b99c: fst dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0));
L_0071b99f:; BB(0x0071b99f);
    /* 0071b99f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0071b9a3: fld dword ptr [0x9700b4] */ FPUSH(R_F32((u32)(0x9700b4u)));
    /* 0071b9a9: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0071b9ab: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071b9ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b9af: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0071b9b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b9b3: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0071b9b5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071b9b7: fst dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0));
    /* 0071b9b9: mov eax, dword ptr [0xa98584] */ r_eax = R32((u32)(0xa98584u));
    /* 0071b9be: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071b9c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071b9c2: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071b9c5: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
    /* 0071b9c8: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0071b9ca: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0071b9cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b9ce: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0071b9d0: fst dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0));
    /* 0071b9d3: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0071b9d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071b9d8: fst dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0));
    /* 0071b9db: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0071b9de: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0071b9e0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071b9e2: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0071b9e4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071b9e6: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0071b9e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b9ea: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071b9ec: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071b9ee: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 0071b9f1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0071b9f3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071b9f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071b9f8: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0071b9fb: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0071b9fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071b9ff: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0071ba01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ba03: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0071ba05: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ba07: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071ba09: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 0071ba0c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0071ba0e: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0071ba11: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0071ba18: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0071ba1b: mov dword ptr [ecx + 0x34], 0xffffffff */ W32((u32)(r_ecx+0x34u), 0xffffffffu);
    /* 0071ba22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ba23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ba24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ba25: ret 0x14 */ FN_RET(0x0071b900); r_esp += 24; return;
}

void f_0071ba28(void) /* sub_71BA28 */
{
    FN_ENTER(0x0071ba28);
    /* 0071ba28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071ba2c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0071ba30: ret  */ FN_RET(0x0071ba28); r_esp += 4; return;
}

void f_0071ba30(void)
{
    FN_ENTER(0x0071ba30);
    /* 0071ba30: ret  */ FN_RET(0x0071ba30); r_esp += 4; return;
}

void f_0071ba34(void) /* sub_71BA34 */
{
    FN_ENTER(0x0071ba34);
    /* 0071ba34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba36: mov edi, ecx */ r_edi = r_ecx;
    /* 0071ba38: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0071ba3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ba3f: call 0x71ba64 */ r_esp -= 4; W32(r_esp, 0x71ba44u); f_0071ba64();
    /* 0071ba44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ba46: jne 0x71ba4f */ if (!fZ) goto L_0071ba4f;
L_0071ba48:; BB(0x0071ba48);
    /* 0071ba48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ba4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ba4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ba4c: ret 4 */ FN_RET(0x0071ba34); r_esp += 8; return;
L_0071ba4f:; BB(0x0071ba4f);
    /* 0071ba4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba50: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ba52: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x71ba57u); f_0071bbb4();
    /* 0071ba57: mov eax, 1 */ r_eax = 0x1u;
    /* 0071ba5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ba5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ba5e: ret 4 */ FN_RET(0x0071ba34); r_esp += 8; return;
}

void f_0071ba64(void) /* sub_71BA64 */
{
    FN_ENTER(0x0071ba64);
    /* 0071ba64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba66: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071ba69: mov edi, ecx */ r_edi = r_ecx;
    /* 0071ba6b: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0071ba6f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ba70: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ba72: call 0x71bb78 */ r_esp -= 4; W32(r_esp, 0x71ba77u); f_0071bb78();
    /* 0071ba77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ba79: je 0x71bb6b */ if (fZ) goto L_0071bb6b;
L_0071ba7f:; BB(0x0071ba7f);
    /* 0071ba7f: fld dword ptr [esi + 0x18] */ FPUSH(R_F32((u32)(r_esi+0x18u)));
    /* 0071ba82: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0071ba85: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0071ba88: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071ba8a: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0071ba8d: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0071ba90: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0071ba93: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0071ba96: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0071ba98: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071ba9b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071ba9d: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0071baa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071baa3: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0071baa7: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0071baaa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071baac: fsubp st(6) */ ST(6) = ST(6) - ST(0); FPOP();
    /* 0071baae: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0071bab1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bab3: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0071bab5: fdivp st(6) */ ST(6) = ST(6) / ST(0); FPOP();
    /* 0071bab7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0071bab9: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0071babc: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0071babf: fsub st(7) */ ST(0) = ST(0) - ST(7);
    /* 0071bac1: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0071bac3: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0071bac6: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 0071bac8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071baca: fcom dword ptr [0x9700b0] */ fx_compare(ST(0), R_F32((u32)(0x9700b0u))); 
    /* 0071bad0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bad2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bad3: jbe 0x71bae0 */ if ((fC||fZ)) goto L_0071bae0;
L_0071bad5:; BB(0x0071bad5);
    /* 0071bad5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0071bad7: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0071badb: fst dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0));
    /* 0071bade: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
L_0071bae0:; BB(0x0071bae0);
    /* 0071bae0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bae2: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0071bae5: fsubrp st(6) */ ST(6) = ST(0) - ST(6); FPOP();
    /* 0071bae7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071bae9: fcom dword ptr [0x9700b0] */ fx_compare(ST(0), R_F32((u32)(0x9700b0u))); 
    /* 0071baef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071baf1: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0071baf4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071baf5: jbe 0x71bb03 */ if ((fC||fZ)) goto L_0071bb03;
L_0071baf7:; BB(0x0071baf7);
    /* 0071baf7: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0071baf9: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0071bafd: fst dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0));
    /* 0071bb00: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
L_0071bb03:; BB(0x0071bb03);
    /* 0071bb03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bb05: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bb07: fsub dword ptr [edi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x44u));
    /* 0071bb0a: fcom dword ptr [0x9700b0] */ fx_compare(ST(0), R_F32((u32)(0x9700b0u))); 
    /* 0071bb10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bb12: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 0071bb15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bb16: jbe 0x71bb29 */ if ((fC||fZ)) goto L_0071bb29;
L_0071bb18:; BB(0x0071bb18);
    /* 0071bb18: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0071bb1b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071bb1d: fchs  */ ST(0) = -ST(0);
    /* 0071bb1f: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071bb21: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071bb23: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0071bb26: fst dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0));
L_0071bb29:; BB(0x0071bb29);
    /* 0071bb29: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bb2b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0071bb2d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bb2f: fsub dword ptr [edi + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x48u));
    /* 0071bb32: fcom dword ptr [0x9700b0] */ fx_compare(ST(0), R_F32((u32)(0x9700b0u))); 
    /* 0071bb38: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bb3a: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 0071bb3d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bb3e: jbe 0x71bb58 */ if ((fC||fZ)) goto L_0071bb58;
L_0071bb40:; BB(0x0071bb40);
    /* 0071bb40: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 0071bb43: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bb45: fchs  */ ST(0) = -ST(0);
    /* 0071bb47: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071bb49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bb4b: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071bb4d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bb4f: fst dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0));
    /* 0071bb52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bb54: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bb56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0071bb58:; BB(0x0071bb58);
    /* 0071bb58: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0071bb5a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bb5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bb5e: mov eax, 1 */ r_eax = 0x1u;
    /* 0071bb63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071bb66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071bb67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071bb68: ret 4 */ FN_RET(0x0071ba64); r_esp += 8; return;
L_0071bb6b:; BB(0x0071bb6b);
    /* 0071bb6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071bb6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071bb70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071bb71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071bb72: ret 4 */ FN_RET(0x0071ba64); r_esp += 8; return;
}

void f_0071bb78(void) /* sub_71BB78 */
{
    FN_ENTER(0x0071bb78);
    /* 0071bb78: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071bb7c: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0071bb7f: fcomp dword ptr [ecx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3cu))); FPOP();
    /* 0071bb82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bb84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bb85: jb 0x71bba7 */ if (fC) goto L_0071bba7;
L_0071bb87:; BB(0x0071bb87);
    /* 0071bb87: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0071bb8a: fcomp dword ptr [ecx + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x40u))); FPOP();
    /* 0071bb8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bb8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bb90: jb 0x71bba7 */ if (fC) goto L_0071bba7;
L_0071bb92:; BB(0x0071bb92);
    /* 0071bb92: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071bb94: fcomp dword ptr [ecx + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x44u))); FPOP();
    /* 0071bb97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bb99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bb9a: ja 0x71bba7 */ if ((!fC&&!fZ)) goto L_0071bba7;
L_0071bb9c:; BB(0x0071bb9c);
    /* 0071bb9c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0071bb9f: fcomp dword ptr [ecx + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x48u))); FPOP();
    /* 0071bba2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bba4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bba5: jbe 0x71bbac */ if ((fC||fZ)) goto L_0071bbac;
L_0071bba7:; BB(0x0071bba7);
    /* 0071bba7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071bba9: ret 4 */ FN_RET(0x0071bb78); r_esp += 8; return;
L_0071bbac:; BB(0x0071bbac);
    /* 0071bbac: mov eax, 1 */ r_eax = 0x1u;
    /* 0071bbb1: ret 4 */ FN_RET(0x0071bb78); r_esp += 8; return;
}

void f_0071bbb4(void) /* sub_71BBB4 */
{
    FN_ENTER(0x0071bbb4);
    /* 0071bbb4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071bbb8: fld dword ptr [0x9700ac] */ FPUSH(R_F32((u32)(0x9700acu)));
    /* 0071bbbe: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0071bbc1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071bbc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bbc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bbc6: je 0x71bbeb */ if (fZ) goto L_0071bbeb;
L_0071bbc8:; BB(0x0071bbc8);
    /* 0071bbc8: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0071bbcb: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071bbcd: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0071bbcf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071bbd1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bbd3: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0071bbd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bbd8: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0071bbda: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0071bbdd: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0071bbdf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bbe1: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 0071bbe4: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071bbe6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bbe8: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
L_0071bbeb:; BB(0x0071bbeb);
    /* 0071bbeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bbed: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0071bbf0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071bbf2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bbf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bbf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bbf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bbf9: je 0x71bc20 */ if (fZ) goto L_0071bc20;
L_0071bbfb:; BB(0x0071bbfb);
    /* 0071bbfb: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0071bbfe: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0071bc01: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0071bc03: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071bc05: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bc07: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0071bc0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bc0c: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0071bc0f: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0071bc12: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0071bc14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bc16: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0071bc19: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071bc1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bc1d: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
L_0071bc20:; BB(0x0071bc20);
    /* 0071bc20: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bc22: ret 4 */ FN_RET(0x0071bbb4); r_esp += 8; return;
}

void f_0071bc28(void) /* sub_71BC28 */
{
    FN_ENTER(0x0071bc28);
    /* 0071bc28: fld dword ptr [0x9700a4] */ FPUSH(R_F32((u32)(0x9700a4u)));
    /* 0071bc2e: fld dword ptr [0x9700a0] */ FPUSH(R_F32((u32)(0x9700a0u)));
    /* 0071bc34: fadd dword ptr [ecx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x1cu));
    /* 0071bc37: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0071bc3a: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 0071bc3d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bc3f: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0071bc42: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071bc44: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0071bc47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bc49: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0071bc4c: ret  */ FN_RET(0x0071bc28); r_esp += 4; return;
}

void f_0071bc50(void) /* sub_71BC50 */
{
    FN_ENTER(0x0071bc50);
    /* 0071bc50: fld dword ptr [0x97009c] */ FPUSH(R_F32((u32)(0x97009cu)));
    /* 0071bc56: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0071bc59: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071bc5b: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 0071bc5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bc60: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0071bc63: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bc65: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 0071bc68: ret  */ FN_RET(0x0071bc50); r_esp += 4; return;
}

void f_0071bc6c(void) /* sub_71BC6C */
{
    FN_ENTER(0x0071bc6c);
    /* 0071bc6c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071bc70: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0071bc74: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0071bc77: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0071bc7b: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0071bc7e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0071bc82: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0071bc85: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 0071bc88: ret 0x10 */ FN_RET(0x0071bc6c); r_esp += 20; return;
}

void f_0071bc8c(void) /* sub_71BC8C */
{
    FN_ENTER(0x0071bc8c);
    /* 0071bc8c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071bc8f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0071bc93: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0071bc96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071bc98: jl 0x71bca0 */ if ((fS!=fO)) goto L_0071bca0;
L_0071bc9a:; BB(0x0071bc9a);
    /* 0071bc9a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071bc9d: ret 4 */ FN_RET(0x0071bc8c); r_esp += 8; return;
L_0071bca0:; BB(0x0071bca0);
    /* 0071bca0: fld dword ptr [0x970098] */ FPUSH(R_F32((u32)(0x970098u)));
    /* 0071bca6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0071bca9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071bcac: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071bcae: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071bcb0: fmul dword ptr [0x970094] */ ST(0) = ST(0) * R_F32((u32)(0x970094u));
    /* 0071bcb6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0071bcba: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0071bcbf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071bcc4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0071bcc8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0071bccc: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0071bcd0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0071bcd4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0071bcd8: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0071bcdb: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071bce0: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0071bce3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071bce6: ret 4 */ FN_RET(0x0071bc8c); r_esp += 8; return;
}

void f_0071bcec(void) /* sub_71BCEC */
{
    FN_ENTER(0x0071bcec);
    /* 0071bcec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071bcef: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0071bcf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071bcf5: je 0x71bd2d */ if (fZ) goto L_0071bd2d;
L_0071bcf7:; BB(0x0071bcf7);
    /* 0071bcf7: fld dword ptr [0x970090] */ FPUSH(R_F32((u32)(0x970090u)));
    /* 0071bcfd: fld dword ptr [0x97008c] */ FPUSH(R_F32((u32)(0x97008cu)));
    /* 0071bd03: fld dword ptr [0x970084] */ FPUSH(R_F32((u32)(0x970084u)));
    /* 0071bd09: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0071bd0c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071bd0f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071bd11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071bd13: fmul dword ptr [0x970088] */ ST(0) = ST(0) * R_F32((u32)(0x970088u));
    /* 0071bd19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bd1b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071bd1d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071bd1f: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 0071bd22: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0071bd25: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bd27: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0071bd2a: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
L_0071bd2d:; BB(0x0071bd2d);
    /* 0071bd2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071bd30: ret 4 */ FN_RET(0x0071bcec); r_esp += 8; return;
}

void f_0071bd34(void) /* sub_71BD34 */
{
    FN_ENTER(0x0071bd34);
    /* 0071bd34: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071bd38: fld dword ptr [0x970080] */ FPUSH(R_F32((u32)(0x970080u)));
    /* 0071bd3e: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0071bd41: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071bd43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bd45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bd46: je 0x71bd55 */ if (fZ) goto L_0071bd55;
L_0071bd48:; BB(0x0071bd48);
    /* 0071bd48: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0071bd4b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071bd4d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0071bd4f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071bd51: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bd53: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
L_0071bd55:; BB(0x0071bd55);
    /* 0071bd55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bd57: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0071bd5a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071bd5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071bd5e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bd60: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071bd62: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071bd63: je 0x71bd74 */ if (fZ) goto L_0071bd74;
L_0071bd65:; BB(0x0071bd65);
    /* 0071bd65: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0071bd68: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0071bd6b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0071bd6d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071bd6f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071bd71: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
L_0071bd74:; BB(0x0071bd74);
    /* 0071bd74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071bd76: ret 4 */ FN_RET(0x0071bd34); r_esp += 8; return;
}

void f_0071bd7c(void) /* sub_71BD7C */
{
    FN_ENTER(0x0071bd7c);
    /* 0071bd7c: mov dword ptr [0xa98584], 0 */ W32((u32)(0xa98584u), 0x0u);
    /* 0071bd86: ret  */ FN_RET(0x0071bd7c); r_esp += 4; return;
}

void f_0071bd88(void) /* sub_71BD88 */
{
    FN_ENTER(0x0071bd88);
    /* 0071bd88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071bd89: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071bd8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071bd8d: call 0x71bdac */ r_esp -= 4; W32(r_esp, 0x71bd92u); f_0071bdac();
    /* 0071bd92: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071bd96: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071bd98: jne 0x71bd9e */ if (!fZ) goto L_0071bd9e;
L_0071bd9a:; BB(0x0071bd9a);
    /* 0071bd9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071bd9b: ret 4 */ FN_RET(0x0071bd88); r_esp += 8; return;
L_0071bd9e:; BB(0x0071bd9e);
    /* 0071bd9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071bd9f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71bda4u); f_005c2f74();
    /* 0071bda4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071bda5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071bda6: ret 4 */ FN_RET(0x0071bd88); r_esp += 8; return;
}

void f_0071bdac(void) /* sub_71BDAC */
{
    FN_ENTER(0x0071bdac);
    /* 0071bdac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071bdad: mov ebp, esp */ r_ebp = r_esp;
    /* 0071bdaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071bdb1: push 0x8f0c08 */ { u32 v = 0x8f0c08u; r_esp -= 4; W32(r_esp, v); }
    /* 0071bdb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071bdbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071bdbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071bdc4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071bdc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071bdca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071bdcd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071bdd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071bdd3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071bdd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071bddd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071bde0: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0071bde3: mov dword ptr [eax], 0xb3fb58 */ W32((u32)(r_eax), 0xb3fb58u);
    /* 0071bde9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071bdeb: je 0x71bdf7 */ if (fZ) goto L_0071bdf7;
L_0071bded:; BB(0x0071bded);
    /* 0071bded: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071bdef: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x71bdf4u); f_00721474();
    /* 0071bdf4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0071bdf7:; BB(0x0071bdf7);
    /* 0071bdf7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071bdfe: mov ecx, eax */ r_ecx = r_eax;
    /* 0071be00: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x71be05u); f_00710c28();
    /* 0071be05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071be08: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071be0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0071be11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071be12: ret  */ FN_RET(0x0071bdac); r_esp += 4; return;
}

void f_0071be14(void) /* sub_71BE14 */
{
    FN_ENTER(0x0071be14);
    /* 0071be14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071be15: mov ebp, esp */ r_ebp = r_esp;
    /* 0071be17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071be19: push 0x8f0c3e */ { u32 v = 0x8f0c3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0071be1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071be24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071be25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071be2c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071be2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071be32: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0071be35: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0071be38: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0071be3b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0071be3e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0071be41: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0071be43: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x71be48u); f_0073ec50();
    /* 0071be48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071be49: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071be4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071be4d: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0071be50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071be51: push 0x9f2450 */ { u32 v = 0x9f2450u; r_esp -= 4; W32(r_esp, v); }
    /* 0071be56: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x71be5bu); f_00710d30();
    /* 0071be5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071be62: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071be65: mov dword ptr [edx], 0xb3fb58 */ W32((u32)(r_edx), 0xb3fb58u);
    /* 0071be6b: mov eax, dword ptr [0x9f244c] */ r_eax = R32((u32)(0x9f244cu));
    /* 0071be70: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0071be77: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0071be79: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0071be7c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x71be81u); f_008581c5();
    /* 0071be81: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071be84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071be87: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0071be8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071be8c: je 0x71bf20 */ if (fZ) goto L_0071bf20;
L_0071be92:; BB(0x0071be92);
    /* 0071be92: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0071be99: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0071bea0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071bea3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071bea6: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0071beaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071beab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0071bead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071beaf: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x71beb4u); f_0073e5d4();
    /* 0071beb4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0071bebb:; BB(0x0071bebb);
    /* 0071bebb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071bebe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071bec1: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0071bec4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071becb: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0071bed0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071bed3: jle 0x71bee5 */ if ((fZ||fS!=fO)) goto L_0071bee5;
L_0071bed5:; BB(0x0071bed5);
    /* 0071bed5: mov dword ptr [ecx + 0x60], 0x3f4ccccd */ W32((u32)(r_ecx+0x60u), 0x3f4ccccdu);
    /* 0071bedc: mov dword ptr [ecx + 0x64], 0x3f4ccccd */ W32((u32)(r_ecx+0x64u), 0x3f4ccccdu);
    /* 0071bee3: jmp 0x71bef5 */ goto L_0071bef5;
L_0071bee5:; BB(0x0071bee5);
    /* 0071bee5: je 0x71bf10 */ if (fZ) goto L_0071bf10;
L_0071bee7:; BB(0x0071bee7);
    /* 0071bee7: mov dword ptr [ecx + 0x60], 0x3f800000 */ W32((u32)(r_ecx+0x60u), 0x3f800000u);
    /* 0071beee: mov dword ptr [ecx + 0x64], 0x3f800000 */ W32((u32)(r_ecx+0x64u), 0x3f800000u);
L_0071bef5:; BB(0x0071bef5);
    /* 0071bef5: call 0x71c34c */ r_esp -= 4; W32(r_esp, 0x71befau); f_0071c34c();
    /* 0071befa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071befd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071bf00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071bf03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071bf0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0071bf0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071bf0d: ret 4 */ FN_RET(0x0071be14); r_esp += 8; return;
L_0071bf10:; BB(0x0071bf10);
    /* 0071bf10: mov dword ptr [ecx + 0x60], 0x3f800000 */ W32((u32)(r_ecx+0x60u), 0x3f800000u);
    /* 0071bf17: mov dword ptr [ecx + 0x64], 0x3f800000 */ W32((u32)(r_ecx+0x64u), 0x3f800000u);
    /* 0071bf1e: jmp 0x71bef5 */ goto L_0071bef5;
L_0071bf20:; BB(0x0071bf20);
    /* 0071bf20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071bf22: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071bf25: jmp 0x71bebb */ goto L_0071bebb;
}

void f_0071bf28(void) /* sub_71BF28 */
{
    FN_ENTER(0x0071bf28);
    /* 0071bf28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf29: mov edi, ecx */ r_edi = r_ecx;
    /* 0071bf2b: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0071bf2e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071bf30: jne 0x71bf39 */ if (!fZ) goto L_0071bf39;
L_0071bf32:; BB(0x0071bf32);
    /* 0071bf32: mov dword ptr [edi + 0x5c], 0x1000000 */ W32((u32)(r_edi+0x5cu), 0x1000000u);
L_0071bf39:; BB(0x0071bf39);
    /* 0071bf39: lea eax, [edi + 0x60] */ r_eax = (u32)(r_edi+0x60u);
    /* 0071bf3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0071bf3f: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x71bf44u); f_00712658();
    /* 0071bf44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf45: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 0071bf48: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x71bf4du); f_0073e60c();
    /* 0071bf4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071bf4f: jne 0x71bf6c */ if (!fZ) goto L_0071bf6c;
L_0071bf51:; BB(0x0071bf51);
    /* 0071bf51: mov ecx, edi */ r_ecx = r_edi;
    /* 0071bf53: call 0x71bf78 */ r_esp -= 4; W32(r_esp, 0x71bf58u); f_0071bf78();
    /* 0071bf58: mov ecx, edi */ r_ecx = r_edi;
    /* 0071bf5a: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x71bf5fu); f_00710db4();
    /* 0071bf5f: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0071bf62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf63: mov ecx, edi */ r_ecx = r_edi;
    /* 0071bf65: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71bf6au); f_0072a5ec();
    /* 0071bf6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071bf6b: ret  */ FN_RET(0x0071bf28); r_esp += 4; return;
L_0071bf6c:; BB(0x0071bf6c);
    /* 0071bf6c: mov ecx, edi */ r_ecx = r_edi;
    /* 0071bf6e: call 0x71c34c */ r_esp -= 4; W32(r_esp, 0x71bf73u); f_0071c34c();
    /* 0071bf73: jmp 0x71bf51 */ goto L_0071bf51;
}

void f_0071bf78(void) /* sub_71BF78 */
{
    FN_ENTER(0x0071bf78);
    /* 0071bf78: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0071bf7b: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0071bf7e: call dword ptr [edx*4 + 0x9f2080] */ { u32 t = R32((u32)(r_edx*4+0x9f2080u)); r_esp -= 4; W32(r_esp, 0x71bf85u); call_ind(t); }
    /* 0071bf85: ret  */ FN_RET(0x0071bf78); r_esp += 4; return;
}

void f_0071bf88(void) /* sub_71BF88 */
{
    FN_ENTER(0x0071bf88);
    /* 0071bf88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf8a: mov esi, ecx */ r_esi = r_ecx;
    /* 0071bf8c: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 0071bf8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf90: mov ecx, esi */ r_ecx = r_esi;
    /* 0071bf92: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x71bf97u); f_00712658();
    /* 0071bf97: mov ebp, eax */ r_ebp = r_eax;
    /* 0071bf99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071bf9a: mov ecx, esi */ r_ecx = r_esi;
    /* 0071bf9c: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x71bfa1u); f_00710f80();
    /* 0071bfa1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfa2: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0071bfa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfa6: mov ecx, esi */ r_ecx = r_esi;
    /* 0071bfa8: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71bfadu); f_0072a648();
    /* 0071bfad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfae: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 0071bfb1: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x71bfb6u); f_0073e6b4();
    /* 0071bfb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071bfb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071bfb8: ret  */ FN_RET(0x0071bf88); r_esp += 4; return;
}

void f_0071bfbc(void) /* sub_71BFBC */
{
    FN_ENTER(0x0071bfbc);
    /* 0071bfbc: mov dword ptr [0xa98588], 0x3f800000 */ W32((u32)(0xa98588u), 0x3f800000u);
    /* 0071bfc6: mov dword ptr [0xa9858c], 0x41000000 */ W32((u32)(0xa9858cu), 0x41000000u);
    /* 0071bfd0: mov dword ptr [0xa98590], 0x3fc00000 */ W32((u32)(0xa98590u), 0x3fc00000u);
    /* 0071bfda: ret  */ FN_RET(0x0071bfbc); r_esp += 4; return;
}

void f_0071bfdc(void) /* sub_71BFDC */
{
    FN_ENTER(0x0071bfdc);
    /* 0071bfdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfdf: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071bfe2: mov esi, ecx */ r_esi = r_ecx;
    /* 0071bfe4: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071bfe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071bfe9: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0071bfec: push 0x9f22a0 */ { u32 v = 0x9f22a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071bff1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071bff2: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x71bff7u); f_0072a68c();
    /* 0071bff7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071bff9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071bffb: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0071bffe: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0071c000: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c005u); f_00792fe8();
    /* 0071c005: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c009: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c00b: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c010u); f_0072db50();
    /* 0071c010: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c012: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c014: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0071c017: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 0071c01a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c01fu); f_00792fe8();
    /* 0071c01f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c023: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c025: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c02au); f_0072db50();
    /* 0071c02a: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071c02e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c02f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71c034u); f_0068d5a8();
    /* 0071c034: mov edi, eax */ r_edi = r_eax;
    /* 0071c036: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c039: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c03b: je 0x71c138 */ if (fZ) goto L_0071c138;
L_0071c041:; BB(0x0071c041);
    /* 0071c041: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0071c044: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0071c047: mov ecx, edi */ r_ecx = r_edi;
    /* 0071c049: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x71c04eu); f_006936b4();
    /* 0071c04e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c051: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c053: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x71c058u); f_0072db60();
    /* 0071c058: fld dword ptr [edi + 0x834] */ FPUSH(R_F32((u32)(r_edi+0x834u)));
    /* 0071c05e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0071c062: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0071c067: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071c06c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0071c070: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0071c074: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 0071c077: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0071c07b: fld dword ptr [edi + 0x844] */ FPUSH(R_F32((u32)(r_edi+0x844u)));
    /* 0071c081: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0071c085: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0071c08a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071c08f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0071c093: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0071c097: fistp dword ptr [esp + 4] */ W32((u32)(r_esp+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071c09b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0071c09f: fld dword ptr [edi + 0x864] */ FPUSH(R_F32((u32)(r_edi+0x864u)));
    /* 0071c0a5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0071c0a9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0071c0ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071c0b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0071c0b7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0071c0bb: fistp dword ptr [esp + 8] */ W32((u32)(r_esp+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071c0bf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0071c0c3: fld dword ptr [edi + 0x854] */ FPUSH(R_F32((u32)(r_edi+0x854u)));
    /* 0071c0c9: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0071c0cd: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0071c0d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071c0d7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0071c0db: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0071c0df: fistp dword ptr [esp + 0xc] */ W32((u32)(r_esp+0xcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0071c0e3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0071c0e7: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0071c0eb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0071c0ed: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_0071c0f1:; BB(0x0071c0f1);
    /* 0071c0f1: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0071c0f5: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0071c0f8: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0071c0fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071c0fd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0071c100: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071c102: mov edi, dword ptr [edx + ebp + 8] */ r_edi = R32((u32)(r_edx+r_ebp+0x8u));
    /* 0071c106: mov ebp, dword ptr [edx + ebp + 0x10] */ r_ebp = R32((u32)(r_edx+r_ebp+0x10u));
    /* 0071c10a: lea esi, [ebx + 1] */ r_esi = (u32)(r_ebx+0x1u);
    /* 0071c10d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071c10e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c110: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c115u); f_00792fe8();
    /* 0071c115: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c119: mov ecx, edi */ r_ecx = r_edi;
    /* 0071c11b: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c120u); f_0072db50();
    /* 0071c120: mov eax, dword ptr [esp + ebx*4] */ r_eax = R32((u32)(r_esp+r_ebx*4));
    /* 0071c123: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0071c126: mov ebx, esi */ r_ebx = r_esi;
    /* 0071c128: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071c12b: jl 0x71c0f1 */ if ((fS!=fO)) goto L_0071c0f1;
L_0071c12d:; BB(0x0071c12d);
    /* 0071c12d: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0071c131: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071c134: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071c135: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071c136: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071c137: ret  */ FN_RET(0x0071bfdc); r_esp += 4; return;
L_0071c138:; BB(0x0071c138);
    /* 0071c138: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071c13b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071c13c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071c13d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071c13e: ret  */ FN_RET(0x0071bfdc); r_esp += 4; return;
}

