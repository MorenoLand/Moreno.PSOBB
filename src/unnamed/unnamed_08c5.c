#include "protos.h"

void f_008c5000(void) /* sub_8C5000 */
{
    FN_ENTER(0x008c5000);
    /* 008c5000: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c5006: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5007: call 0x8c4f20 */ r_esp -= 4; W32(r_esp, 0x8c500cu); f_008c4f20();
    /* 008c500c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c500e: je 0x8c50d3 */ if (fZ) goto L_008c50d3;
L_008c5014:; BB(0x008c5014);
    /* 008c5014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5015: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c5017: mov ecx, 0x49 */ r_ecx = 0x49u;
    /* 008c501c: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 008c5020: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 008c5028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5029: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c502b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c502d: call dword ptr [0xaea4b0] */ { u32 t = R32((u32)(0xaea4b0u)); r_esp -= 4; W32(r_esp, 0x8c5033u); call_ind(t); }
    /* 008c5033: mov esi, eax */ r_esi = r_eax;
    /* 008c5035: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5036: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5039: je 0x8c50d3 */ if (fZ) goto L_008c50d3;
L_008c503f:; BB(0x008c503f);
    /* 008c503f: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 008c5043: mov dword ptr [esp + 4], 0x128 */ W32((u32)(r_esp+0x4u), 0x128u);
    /* 008c504b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c504c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c504d: call dword ptr [0xaea3a0] */ { u32 t = R32((u32)(0xaea3a0u)); r_esp -= 4; W32(r_esp, 0x8c5053u); call_ind(t); }
    /* 008c5053: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5055: je 0x8c50cc */ if (fZ) goto L_008c50cc;
L_008c5057:; BB(0x008c5057);
    /* 008c5057: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c505c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c505e: je 0x8c50bc */ if (fZ) goto L_008c50bc;
L_008c5060:; BB(0x008c5060);
    /* 008c5060: push 0xa38bfc */ { u32 v = 0xa38bfcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5065: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c506au); f_008c94e0();
    /* 008c506a: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c5070: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5073: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5077: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5078: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c507du); f_008c3720();
    /* 008c507d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5080:; BB(0x008c5080);
    /* 008c5080: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5087: je 0x8c50bc */ if (fZ) goto L_008c50bc;
L_008c5089:; BB(0x008c5089);
    /* 008c5089: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 008c508d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008c5091: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c5095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5097: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 008c509b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c509c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c509d: push 0xa38bd8 */ { u32 v = 0xa38bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c50a2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c50a7u); f_008c94e0();
    /* 008c50a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c50aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c50ab: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c50b0: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c50b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c50b4: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c50b9u); f_008c3720();
    /* 008c50b9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c50bc:; BB(0x008c50bc);
    /* 008c50bc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 008c50c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c50c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c50c2: call dword ptr [0xaea6c8] */ { u32 t = R32((u32)(0xaea6c8u)); r_esp -= 4; W32(r_esp, 0x8c50c8u); call_ind(t); }
    /* 008c50c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c50ca: jne 0x8c5080 */ if (!fZ) goto L_008c5080;
L_008c50cc:; BB(0x008c50cc);
    /* 008c50cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c50cd: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c50d3u); call_ind(t); }
L_008c50d3:; BB(0x008c50d3);
    /* 008c50d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c50d4: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c50da: ret  */ FN_RET(0x008c5000); r_esp += 4; return;
}

void f_008c50e0(void) /* sub_8C50E0 */
{
    FN_ENTER(0x008c50e0);
    /* 008c50e0: sub esp, 0x224 */ {  u32 a = r_esp; u32 b = 0x224u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c50e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c50e7: call 0x8c4f20 */ r_esp -= 4; W32(r_esp, 0x8c50ecu); f_008c4f20();
    /* 008c50ec: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c50ee: je 0x8c51bc */ if (fZ) goto L_008c51bc;
L_008c50f4:; BB(0x008c50f4);
    /* 008c50f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c50f5: mov ecx, 0x88 */ r_ecx = 0x88u;
    /* 008c50fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c50fc: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 008c5100: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 008c5108: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c510a: call dword ptr [0x8f82cc] */ { u32 t = R32((u32)(0x8f82ccu)); r_esp -= 4; W32(r_esp, 0x8c5110u); call_ind(t); }
    /* 008c5110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5111: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5113: call dword ptr [0xaea4b0] */ { u32 t = R32((u32)(0xaea4b0u)); r_esp -= 4; W32(r_esp, 0x8c5119u); call_ind(t); }
    /* 008c5119: mov esi, eax */ r_esi = r_eax;
    /* 008c511b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c511c: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c511f: je 0x8c51bc */ if (fZ) goto L_008c51bc;
L_008c5125:; BB(0x008c5125);
    /* 008c5125: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 008c5129: mov dword ptr [esp + 4], 0x224 */ W32((u32)(r_esp+0x4u), 0x224u);
    /* 008c5131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5132: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5133: call dword ptr [0xaea6c4] */ { u32 t = R32((u32)(0xaea6c4u)); r_esp -= 4; W32(r_esp, 0x8c5139u); call_ind(t); }
    /* 008c5139: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c513b: je 0x8c51b5 */ if (fZ) goto L_008c51b5;
L_008c513d:; BB(0x008c513d);
    /* 008c513d: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5142: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5144: je 0x8c51a5 */ if (fZ) goto L_008c51a5;
L_008c5146:; BB(0x008c5146);
    /* 008c5146: push 0xa38c50 */ { u32 v = 0xa38c50u; r_esp -= 4; W32(r_esp, v); }
    /* 008c514b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5150u); f_008c94e0();
    /* 008c5150: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c5156: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5159: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c515c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c515d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c515e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5163u); f_008c3720();
    /* 008c5163: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5166:; BB(0x008c5166);
    /* 008c5166: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c516b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c516d: je 0x8c51a5 */ if (fZ) goto L_008c51a5;
L_008c516f:; BB(0x008c516f);
    /* 008c516f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c5173: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008c5177: lea edx, [esp + 0x124] */ r_edx = (u32)(r_esp+0x124u);
    /* 008c517e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c517f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5180: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 008c5184: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5186: push 0xa38c30 */ { u32 v = 0xa38c30u; r_esp -= 4; W32(r_esp, v); }
    /* 008c518b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5190u); f_008c94e0();
    /* 008c5190: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5194: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5199: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c519c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c519d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c51a2u); f_008c3720();
    /* 008c51a2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c51a5:; BB(0x008c51a5);
    /* 008c51a5: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 008c51a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c51aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c51ab: call dword ptr [0xaea3a4] */ { u32 t = R32((u32)(0xaea3a4u)); r_esp -= 4; W32(r_esp, 0x8c51b1u); call_ind(t); }
    /* 008c51b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c51b3: jne 0x8c5166 */ if (!fZ) goto L_008c5166;
L_008c51b5:; BB(0x008c51b5);
    /* 008c51b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c51b6: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c51bcu); call_ind(t); }
L_008c51bc:; BB(0x008c51bc);
    /* 008c51bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c51bd: add esp, 0x224 */ {  u32 a = r_esp; u32 b = 0x224u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c51c3: ret  */ FN_RET(0x008c50e0); r_esp += 4; return;
}

void f_008c51d0(void) /* TopLevelExceptionFilter */
{
    FN_ENTER(0x008c51d0);
    /* 008c51d0: mov al, byte ptr [0xaeaa31] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaeaa31u))) & 0xffu);
    /* 008c51d5: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c51db: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c51dd: je 0x8c51ed */ if (fZ) goto L_008c51ed;
L_008c51df:; BB(0x008c51df);
    /* 008c51df: mov eax, 1 */ r_eax = 0x1u;
    /* 008c51e4: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c51ea: ret 4 */ FN_RET(0x008c51d0); r_esp += 8; return;
L_008c51ed:; BB(0x008c51ed);
    /* 008c51ed: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 008c51f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c51f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c51f6: mov byte ptr [0xaeaa31], 1 */ W8((u32)(0xaeaa31u), 0x1u);
    /* 008c51fd: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008c51ff: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5206: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5207: je 0x8c523e */ if (fZ) goto L_008c523e;
L_008c5209:; BB(0x008c5209);
    /* 008c5209: mov ecx, dword ptr [0xaea6d8] */ r_ecx = R32((u32)(0xaea6d8u));
    /* 008c520f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5210: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x8c5216u); call_ind(t); }
    /* 008c5216: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008c5219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c521a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c521c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c521d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c521e: push 0xa38ca8 */ { u32 v = 0xa38ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5223: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5228u); f_008c94e0();
    /* 008c5228: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c522e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5231: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5236: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c523bu); f_008c3720();
    /* 008c523b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c523e:; BB(0x008c523e);
    /* 008c523e: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 008c5241: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c5243: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008c5245:; BB(0x008c5245);
    /* 008c5245: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c5247: mov dl, byte ptr [esi + ebx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008c524a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c524b: push 0xa38c9c */ { u32 v = 0xa38c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5250: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c5255u); f_008c9470();
    /* 008c5255: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5259: lea eax, [esp + edi + 0x14] */ r_eax = (u32)(r_esp+r_edi+0x14u);
    /* 008c525d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c525e: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c5263u); f_00858bf5();
    /* 008c5263: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5266: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c5268: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c5269: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c526c: jl 0x8c5245 */ if ((fS!=fO)) goto L_008c5245;
L_008c526e:; BB(0x008c526e);
    /* 008c526e: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5273: mov byte ptr [esp + edi + 0xc], 0 */ W8((u32)(r_esp+r_edi+0xcu), 0x0u);
    /* 008c5278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5279: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c527a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c527c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c527d: je 0x8c52a4 */ if (fZ) goto L_008c52a4;
L_008c527f:; BB(0x008c527f);
    /* 008c527f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008c5283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5284: push 0xa38c88 */ { u32 v = 0xa38c88u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5289: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c528eu); f_008c94e0();
    /* 008c528e: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5294: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5297: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c529a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c529b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c529c: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c52a1u); f_008c3720();
    /* 008c52a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c52a4:; BB(0x008c52a4);
    /* 008c52a4: call 0x8c5000 */ r_esp -= 4; W32(r_esp, 0x8c52a9u); f_008c5000();
    /* 008c52a9: call 0x8c50e0 */ r_esp -= 4; W32(r_esp, 0x8c52aeu); f_008c50e0();
    /* 008c52ae: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c52b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c52b5: je 0x8c52d0 */ if (fZ) goto L_008c52d0;
L_008c52b7:; BB(0x008c52b7);
    /* 008c52b7: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c52ba: jne 0x8c52d0 */ if (!fZ) goto L_008c52d0;
L_008c52bc:; BB(0x008c52bc);
    /* 008c52bc: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 008c52bf: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c52c1: add ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c52c7: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008c52ca: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x8c52d0u); call_ind(t); }
L_008c52d0:; BB(0x008c52d0);
    /* 008c52d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c52d2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c52d8: ret 4 */ FN_RET(0x008c51d0); r_esp += 8; return;
}

void f_008c52e0(void) /* sub_8C52E0 */
{
    FN_ENTER(0x008c52e0);
    /* 008c52e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c52e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c52e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c52e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c52e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c52e5: push 0xa38dd8 */ { u32 v = 0xa38dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c52ea: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 008c52f2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c52f7u); f_008c94e0();
    /* 008c52f7: mov edi, dword ptr [0x8f81f0] */ r_edi = R32((u32)(0x8f81f0u));
    /* 008c52fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5301: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5303u); call_ind(t); }
    /* 008c5303: push 0xa38dc8 */ { u32 v = 0xa38dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5308: mov ebx, eax */ r_ebx = r_eax;
    /* 008c530a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c530fu); f_008c94e0();
    /* 008c530f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5313: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5315u); call_ind(t); }
    /* 008c5315: push 0xa38db4 */ { u32 v = 0xa38db4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c531a: mov ebp, eax */ r_ebp = r_eax;
    /* 008c531c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5321u); f_008c94e0();
    /* 008c5321: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5325: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5327u); call_ind(t); }
    /* 008c5327: mov esi, eax */ r_esi = r_eax;
    /* 008c5329: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c532b: jne 0x8c5338 */ if (!fZ) goto L_008c5338;
L_008c532d:; BB(0x008c532d);
    /* 008c532d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c532e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c532f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5330: mov eax, 2 */ r_eax = 0x2u;
    /* 008c5335: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5336: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c5337: ret  */ FN_RET(0x008c52e0); r_esp += 4; return;
L_008c5338:; BB(0x008c5338);
    /* 008c5338: push 0xa38d98 */ { u32 v = 0xa38d98u; r_esp -= 4; W32(r_esp, v); }
    /* 008c533d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5342u); f_008c94e0();
    /* 008c5342: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5346: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5347: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c534cu); f_008c5c80();
    /* 008c534c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c534e: mov dword ptr [0xaeaa38], eax */ W32((u32)(0xaeaa38u), r_eax);
    /* 008c5353: je 0x8c53d3 */ if (fZ) goto L_008c53d3;
L_008c5355:; BB(0x008c5355);
    /* 008c5355: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c535b: mov ecx, dword ptr [0x8f8170] */ r_ecx = R32((u32)(0x8f8170u));
    /* 008c5361: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5363: mov dword ptr [0xaeaa4c], ecx */ W32((u32)(0xaeaa4cu), r_ecx);
    /* 008c5369: je 0x8c5391 */ if (fZ) goto L_008c5391;
L_008c536b:; BB(0x008c536b);
    /* 008c536b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c536c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c536d: push 0xa38d84 */ { u32 v = 0xa38d84u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5372: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5377u); f_008c94e0();
    /* 008c5377: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c537a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c537b: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5380: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5384: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5389u); f_008c3720();
    /* 008c5389: mov eax, dword ptr [0xaeaa38] */ r_eax = R32((u32)(0xaeaa38u));
    /* 008c538e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5391:; BB(0x008c5391);
    /* 008c5391: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5393: jae 0x8c53d3 */ if (!fC) goto L_008c53d3;
L_008c5395:; BB(0x008c5395);
    /* 008c5395: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5397: jne 0x8c53d3 */ if (!fZ) goto L_008c53d3;
L_008c5399:; BB(0x008c5399);
    /* 008c5399: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c539b: je 0x8c53a1 */ if (fZ) goto L_008c53a1;
L_008c539d:; BB(0x008c539d);
    /* 008c539d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c539f: jae 0x8c53d3 */ if (!fC) goto L_008c53d3;
L_008c53a1:; BB(0x008c53a1);
    /* 008c53a1: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c53a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c53a8: je 0x8c53cb */ if (fZ) goto L_008c53cb;
L_008c53aa:; BB(0x008c53aa);
    /* 008c53aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c53ab: push 0xa38d6c */ { u32 v = 0xa38d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c53b0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c53b5u); f_008c94e0();
    /* 008c53b5: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c53bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c53be: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c53c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c53c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c53c3: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c53c8u); f_008c3720();
    /* 008c53c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c53cb:; BB(0x008c53cb);
    /* 008c53cb: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
L_008c53d3:; BB(0x008c53d3);
    /* 008c53d3: push 0xa38d58 */ { u32 v = 0xa38d58u; r_esp -= 4; W32(r_esp, v); }
    /* 008c53d8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c53ddu); f_008c94e0();
    /* 008c53dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c53e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c53e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c53e2: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c53e7u); f_008c5c80();
    /* 008c53e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c53e9: mov dword ptr [0xaeaa34], eax */ W32((u32)(0xaeaa34u), r_eax);
    /* 008c53ee: je 0x8c546e */ if (fZ) goto L_008c546e;
L_008c53f0:; BB(0x008c53f0);
    /* 008c53f0: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c53f6: mov ecx, dword ptr [0x8f8184] */ r_ecx = R32((u32)(0x8f8184u));
    /* 008c53fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c53fe: mov dword ptr [0xaeaa48], ecx */ W32((u32)(0xaeaa48u), r_ecx);
    /* 008c5404: je 0x8c542d */ if (fZ) goto L_008c542d;
L_008c5406:; BB(0x008c5406);
    /* 008c5406: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5408: push 0xa38d44 */ { u32 v = 0xa38d44u; r_esp -= 4; W32(r_esp, v); }
    /* 008c540d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5412u); f_008c94e0();
    /* 008c5412: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5418: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c541b: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c541e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c541f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5420: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5425u); f_008c3720();
    /* 008c5425: mov eax, dword ptr [0xaeaa34] */ r_eax = R32((u32)(0xaeaa34u));
    /* 008c542a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c542d:; BB(0x008c542d);
    /* 008c542d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c542f: jae 0x8c546e */ if (!fC) goto L_008c546e;
L_008c5431:; BB(0x008c5431);
    /* 008c5431: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5433: jne 0x8c546e */ if (!fZ) goto L_008c546e;
L_008c5435:; BB(0x008c5435);
    /* 008c5435: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5437: je 0x8c5441 */ if (fZ) goto L_008c5441;
L_008c5439:; BB(0x008c5439);
    /* 008c5439: cmp dword ptr [0xaeaa38], ebx */ {  u32 a = R32((u32)(0xaeaa38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c543f: jae 0x8c546e */ if (!fC) goto L_008c546e;
L_008c5441:; BB(0x008c5441);
    /* 008c5441: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5448: je 0x8c546a */ if (fZ) goto L_008c546a;
L_008c544a:; BB(0x008c544a);
    /* 008c544a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c544b: push 0xa38d2c */ { u32 v = 0xa38d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5450: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5455u); f_008c94e0();
    /* 008c5455: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5459: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c545e: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5462: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5467u); f_008c3720();
    /* 008c5467: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c546a:; BB(0x008c546a);
    /* 008c546a: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008c546e:; BB(0x008c546e);
    /* 008c546e: mov esi, dword ptr [0x8f83b8] */ r_esi = R32((u32)(0x8f83b8u));
    /* 008c5474: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c5476u); call_ind(t); }
    /* 008c5476: push 0xa38d1c */ { u32 v = 0xa38d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c547b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5480u); f_008c94e0();
    /* 008c5480: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5484: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5486u); call_ind(t); }
    /* 008c5486: mov edi, eax */ r_edi = r_eax;
    /* 008c5488: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c548a: je 0x8c5526 */ if (fZ) goto L_008c5526;
L_008c5490:; BB(0x008c5490);
    /* 008c5490: push 0xa38d0c */ { u32 v = 0xa38d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5495: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c549au); f_008c94e0();
    /* 008c549a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c549e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c549f: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c54a4u); f_008c5c80();
    /* 008c54a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54a6: mov dword ptr [0xaeaa3c], eax */ W32((u32)(0xaeaa3cu), r_eax);
    /* 008c54ab: je 0x8c5526 */ if (fZ) goto L_008c5526;
L_008c54ad:; BB(0x008c54ad);
    /* 008c54ad: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c54b3: mov dword ptr [0xaeaa50], esi */ W32((u32)(0xaeaa50u), r_esi);
    /* 008c54b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54bb: je 0x8c54e4 */ if (fZ) goto L_008c54e4;
L_008c54bd:; BB(0x008c54bd);
    /* 008c54bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c54be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c54bf: push 0xa38cf8 */ { u32 v = 0xa38cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c54c4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c54c9u); f_008c94e0();
    /* 008c54c9: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c54cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c54d2: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c54d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c54d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c54d7: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c54dcu); f_008c3720();
    /* 008c54dc: mov eax, dword ptr [0xaeaa3c] */ r_eax = R32((u32)(0xaeaa3cu));
    /* 008c54e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c54e4:; BB(0x008c54e4);
    /* 008c54e4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c54e6: jae 0x8c5526 */ if (!fC) goto L_008c5526;
L_008c54e8:; BB(0x008c54e8);
    /* 008c54e8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54ea: jne 0x8c5526 */ if (!fZ) goto L_008c5526;
L_008c54ec:; BB(0x008c54ec);
    /* 008c54ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54ee: je 0x8c54f8 */ if (fZ) goto L_008c54f8;
L_008c54f0:; BB(0x008c54f0);
    /* 008c54f0: cmp dword ptr [0xaeaa38], ebx */ {  u32 a = R32((u32)(0xaeaa38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c54f6: jae 0x8c5526 */ if (!fC) goto L_008c5526;
L_008c54f8:; BB(0x008c54f8);
    /* 008c54f8: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c54fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54ff: je 0x8c5522 */ if (fZ) goto L_008c5522;
L_008c5501:; BB(0x008c5501);
    /* 008c5501: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5502: push 0xa38ce0 */ { u32 v = 0xa38ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5507: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c550cu); f_008c94e0();
    /* 008c550c: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5515: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c5518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c551a: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c551fu); f_008c3720();
    /* 008c551f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5522:; BB(0x008c5522);
    /* 008c5522: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008c5526:; BB(0x008c5526);
    /* 008c5526: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c552a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c552c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c552d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c552e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5531: mov byte ptr [0xaeaa5c], 1 */ W8((u32)(0xaeaa5cu), 0x1u);
    /* 008c5538: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008c553b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c553c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c553d: ret  */ FN_RET(0x008c52e0); r_esp += 4; return;
}

void f_008c534c(void)
{
    FN_ENTER(0x008c534c);
    /* 008c534c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c534e: mov dword ptr [0xaeaa38], eax */ W32((u32)(0xaeaa38u), r_eax);
    /* 008c5353: je 0x8c53d3 */ if (fZ) goto L_008c53d3;
L_008c5355:; BB(0x008c5355);
    /* 008c5355: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c535b: mov ecx, dword ptr [0x8f8170] */ r_ecx = R32((u32)(0x8f8170u));
    /* 008c5361: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5363: mov dword ptr [0xaeaa4c], ecx */ W32((u32)(0xaeaa4cu), r_ecx);
    /* 008c5369: je 0x8c5391 */ if (fZ) goto L_008c5391;
L_008c536b:; BB(0x008c536b);
    /* 008c536b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c536c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c536d: push 0xa38d84 */ { u32 v = 0xa38d84u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5372: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5377u); f_008c94e0();
    /* 008c5377: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c537a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c537b: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5380: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5384: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5389u); f_008c3720();
    /* 008c5389: mov eax, dword ptr [0xaeaa38] */ r_eax = R32((u32)(0xaeaa38u));
    /* 008c538e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5391:; BB(0x008c5391);
    /* 008c5391: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5393: jae 0x8c53d3 */ if (!fC) goto L_008c53d3;
L_008c5395:; BB(0x008c5395);
    /* 008c5395: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5397: jne 0x8c53d3 */ if (!fZ) goto L_008c53d3;
L_008c5399:; BB(0x008c5399);
    /* 008c5399: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c539b: je 0x8c53a1 */ if (fZ) goto L_008c53a1;
L_008c539d:; BB(0x008c539d);
    /* 008c539d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c539f: jae 0x8c53d3 */ if (!fC) goto L_008c53d3;
L_008c53a1:; BB(0x008c53a1);
    /* 008c53a1: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c53a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c53a8: je 0x8c53cb */ if (fZ) goto L_008c53cb;
L_008c53aa:; BB(0x008c53aa);
    /* 008c53aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c53ab: push 0xa38d6c */ { u32 v = 0xa38d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c53b0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c53b5u); f_008c94e0();
    /* 008c53b5: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c53bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c53be: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c53c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c53c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c53c3: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c53c8u); f_008c3720();
    /* 008c53c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c53cb:; BB(0x008c53cb);
    /* 008c53cb: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
L_008c53d3:; BB(0x008c53d3);
    /* 008c53d3: push 0xa38d58 */ { u32 v = 0xa38d58u; r_esp -= 4; W32(r_esp, v); }
    /* 008c53d8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c53ddu); f_008c94e0();
    /* 008c53dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c53e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c53e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c53e2: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c53e7u); f_008c5c80();
    /* 008c53e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c53e9: mov dword ptr [0xaeaa34], eax */ W32((u32)(0xaeaa34u), r_eax);
    /* 008c53ee: je 0x8c546e */ if (fZ) goto L_008c546e;
L_008c53f0:; BB(0x008c53f0);
    /* 008c53f0: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c53f6: mov ecx, dword ptr [0x8f8184] */ r_ecx = R32((u32)(0x8f8184u));
    /* 008c53fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c53fe: mov dword ptr [0xaeaa48], ecx */ W32((u32)(0xaeaa48u), r_ecx);
    /* 008c5404: je 0x8c542d */ if (fZ) goto L_008c542d;
L_008c5406:; BB(0x008c5406);
    /* 008c5406: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5408: push 0xa38d44 */ { u32 v = 0xa38d44u; r_esp -= 4; W32(r_esp, v); }
    /* 008c540d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5412u); f_008c94e0();
    /* 008c5412: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5418: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c541b: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c541e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c541f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5420: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5425u); f_008c3720();
    /* 008c5425: mov eax, dword ptr [0xaeaa34] */ r_eax = R32((u32)(0xaeaa34u));
    /* 008c542a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c542d:; BB(0x008c542d);
    /* 008c542d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c542f: jae 0x8c546e */ if (!fC) goto L_008c546e;
L_008c5431:; BB(0x008c5431);
    /* 008c5431: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5433: jne 0x8c546e */ if (!fZ) goto L_008c546e;
L_008c5435:; BB(0x008c5435);
    /* 008c5435: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5437: je 0x8c5441 */ if (fZ) goto L_008c5441;
L_008c5439:; BB(0x008c5439);
    /* 008c5439: cmp dword ptr [0xaeaa38], ebx */ {  u32 a = R32((u32)(0xaeaa38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c543f: jae 0x8c546e */ if (!fC) goto L_008c546e;
L_008c5441:; BB(0x008c5441);
    /* 008c5441: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5448: je 0x8c546a */ if (fZ) goto L_008c546a;
L_008c544a:; BB(0x008c544a);
    /* 008c544a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c544b: push 0xa38d2c */ { u32 v = 0xa38d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5450: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5455u); f_008c94e0();
    /* 008c5455: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5459: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c545e: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5462: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5467u); f_008c3720();
    /* 008c5467: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c546a:; BB(0x008c546a);
    /* 008c546a: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008c546e:; BB(0x008c546e);
    /* 008c546e: mov esi, dword ptr [0x8f83b8] */ r_esi = R32((u32)(0x8f83b8u));
    /* 008c5474: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c5476u); call_ind(t); }
    /* 008c5476: push 0xa38d1c */ { u32 v = 0xa38d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c547b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5480u); f_008c94e0();
    /* 008c5480: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5484: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5486u); call_ind(t); }
    /* 008c5486: mov edi, eax */ r_edi = r_eax;
    /* 008c5488: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c548a: je 0x8c5526 */ if (fZ) goto L_008c5526;
L_008c5490:; BB(0x008c5490);
    /* 008c5490: push 0xa38d0c */ { u32 v = 0xa38d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5495: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c549au); f_008c94e0();
    /* 008c549a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c549e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c549f: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c54a4u); f_008c5c80();
    /* 008c54a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54a6: mov dword ptr [0xaeaa3c], eax */ W32((u32)(0xaeaa3cu), r_eax);
    /* 008c54ab: je 0x8c5526 */ if (fZ) goto L_008c5526;
L_008c54ad:; BB(0x008c54ad);
    /* 008c54ad: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c54b3: mov dword ptr [0xaeaa50], esi */ W32((u32)(0xaeaa50u), r_esi);
    /* 008c54b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54bb: je 0x8c54e4 */ if (fZ) goto L_008c54e4;
L_008c54bd:; BB(0x008c54bd);
    /* 008c54bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c54be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c54bf: push 0xa38cf8 */ { u32 v = 0xa38cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c54c4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c54c9u); f_008c94e0();
    /* 008c54c9: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c54cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c54d2: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c54d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c54d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c54d7: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c54dcu); f_008c3720();
    /* 008c54dc: mov eax, dword ptr [0xaeaa3c] */ r_eax = R32((u32)(0xaeaa3cu));
    /* 008c54e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c54e4:; BB(0x008c54e4);
    /* 008c54e4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c54e6: jae 0x8c5526 */ if (!fC) goto L_008c5526;
L_008c54e8:; BB(0x008c54e8);
    /* 008c54e8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54ea: jne 0x8c5526 */ if (!fZ) goto L_008c5526;
L_008c54ec:; BB(0x008c54ec);
    /* 008c54ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54ee: je 0x8c54f8 */ if (fZ) goto L_008c54f8;
L_008c54f0:; BB(0x008c54f0);
    /* 008c54f0: cmp dword ptr [0xaeaa38], ebx */ {  u32 a = R32((u32)(0xaeaa38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c54f6: jae 0x8c5526 */ if (!fC) goto L_008c5526;
L_008c54f8:; BB(0x008c54f8);
    /* 008c54f8: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c54fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c54ff: je 0x8c5522 */ if (fZ) goto L_008c5522;
L_008c5501:; BB(0x008c5501);
    /* 008c5501: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5502: push 0xa38ce0 */ { u32 v = 0xa38ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5507: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c550cu); f_008c94e0();
    /* 008c550c: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5515: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c5518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c551a: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c551fu); f_008c3720();
    /* 008c551f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5522:; BB(0x008c5522);
    /* 008c5522: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008c5526:; BB(0x008c5526);
    /* 008c5526: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c552a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c552c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c552d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c552e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5531: mov byte ptr [0xaeaa5c], 1 */ W8((u32)(0xaeaa5cu), 0x1u);
    /* 008c5538: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008c553b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c553c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c553d: ret  */ FN_RET(0x008c534c); r_esp += 4; return;
}

void f_008c5540(void) /* sub_8C5540 */
{
    FN_ENTER(0x008c5540);
    /* 008c5540: mov al, byte ptr [0xaea814] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaea814u))) & 0xffu);
    /* 008c5545: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5547: je 0x8c554f */ if (fZ) goto L_008c554f;
L_008c5549:; BB(0x008c5549);
    /* 008c5549: mov eax, 1 */ r_eax = 0x1u;
    /* 008c554e: ret  */ FN_RET(0x008c5540); r_esp += 4; return;
L_008c554f:; BB(0x008c554f);
    /* 008c554f: mov al, byte ptr [0xaeaa5c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaeaa5cu))) & 0xffu);
    /* 008c5554: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5556: jne 0x8c555e */ if (!fZ) goto L_008c555e;
L_008c5558:; BB(0x008c5558);
    /* 008c5558: mov eax, 2 */ r_eax = 0x2u;
    /* 008c555d: ret  */ FN_RET(0x008c5540); r_esp += 4; return;
L_008c555e:; BB(0x008c555e);
    /* 008c555e: mov eax, dword ptr [0x8f8170] */ r_eax = R32((u32)(0x8f8170u));
    /* 008c5563: mov ecx, dword ptr [0xaeaa4c] */ r_ecx = R32((u32)(0xaeaa4cu));
    /* 008c5569: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c556a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c556c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c556e: je 0x8c559f */ if (fZ) goto L_008c559f;
L_008c5570:; BB(0x008c5570);
    /* 008c5570: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c5576: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5578: je 0x8c559a */ if (fZ) goto L_008c559a;
L_008c557a:; BB(0x008c557a);
    /* 008c557a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c557b: push 0xa38e14 */ { u32 v = 0xa38e14u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5580: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5585u); f_008c94e0();
    /* 008c5585: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5589: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c558e: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5592: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5597u); f_008c3720();
    /* 008c5597: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c559a:; BB(0x008c559a);
    /* 008c559a: mov esi, 1 */ r_esi = 0x1u;
L_008c559f:; BB(0x008c559f);
    /* 008c559f: mov eax, dword ptr [0x8f8184] */ r_eax = R32((u32)(0x8f8184u));
    /* 008c55a4: mov ecx, dword ptr [0xaeaa48] */ r_ecx = R32((u32)(0xaeaa48u));
    /* 008c55aa: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c55ac: je 0x8c55da */ if (fZ) goto L_008c55da;
L_008c55ae:; BB(0x008c55ae);
    /* 008c55ae: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c55b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c55b6: je 0x8c55d9 */ if (fZ) goto L_008c55d9;
L_008c55b8:; BB(0x008c55b8);
    /* 008c55b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c55b9: push 0xa38e00 */ { u32 v = 0xa38e00u; r_esp -= 4; W32(r_esp, v); }
    /* 008c55be: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c55c3u); f_008c94e0();
    /* 008c55c3: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c55c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c55cc: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c55cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c55d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c55d1: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c55d6u); f_008c3720();
    /* 008c55d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c55d9:; BB(0x008c55d9);
    /* 008c55d9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008c55da:; BB(0x008c55da);
    /* 008c55da: mov eax, dword ptr [0x8f83b8] */ r_eax = R32((u32)(0x8f83b8u));
    /* 008c55df: mov ecx, dword ptr [0xaeaa50] */ r_ecx = R32((u32)(0xaeaa50u));
    /* 008c55e5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c55e7: je 0x8c5615 */ if (fZ) goto L_008c5615;
L_008c55e9:; BB(0x008c55e9);
    /* 008c55e9: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c55ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c55f1: je 0x8c5614 */ if (fZ) goto L_008c5614;
L_008c55f3:; BB(0x008c55f3);
    /* 008c55f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c55f4: push 0xa38dec */ { u32 v = 0xa38decu; r_esp -= 4; W32(r_esp, v); }
    /* 008c55f9: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c55feu); f_008c94e0();
    /* 008c55fe: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5607: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c560a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c560b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c560c: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5611u); f_008c3720();
    /* 008c5611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5614:; BB(0x008c5614);
    /* 008c5614: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008c5615:; BB(0x008c5615);
    /* 008c5615: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c5617: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5619: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008c561c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c561d: ret  */ FN_RET(0x008c5540); r_esp += 4; return;
}

void f_008c5620(void) /* sub_8C5620 */
{
    FN_ENTER(0x008c5620);
    /* 008c5620: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5621: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5622: push 0xa38ea8 */ { u32 v = 0xa38ea8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5627: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c5629: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c562eu); f_008c94e0();
    /* 008c562e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5632: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8c5638u); call_ind(t); }
    /* 008c5638: mov esi, eax */ r_esi = r_eax;
    /* 008c563a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c563c: jne 0x8c5646 */ if (!fZ) goto L_008c5646;
L_008c563e:; BB(0x008c563e);
    /* 008c563e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c563f: mov eax, 2 */ r_eax = 0x2u;
    /* 008c5644: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5645: ret  */ FN_RET(0x008c5620); r_esp += 4; return;
L_008c5646:; BB(0x008c5646);
    /* 008c5646: push 0xa38e9c */ { u32 v = 0xa38e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c564b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5650u); f_008c94e0();
    /* 008c5650: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5654: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5655: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c565au); f_008c5c80();
    /* 008c565a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c565c: mov dword ptr [0xaeaa40], eax */ W32((u32)(0xaeaa40u), r_eax);
    /* 008c5661: je 0x8c56d2 */ if (fZ) goto L_008c56d2;
L_008c5663:; BB(0x008c5663);
    /* 008c5663: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5669: mov ecx, dword ptr [0x8f83c4] */ r_ecx = R32((u32)(0x8f83c4u));
    /* 008c566f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5671: mov dword ptr [0xaeaa54], ecx */ W32((u32)(0xaeaa54u), r_ecx);
    /* 008c5677: je 0x8c569f */ if (fZ) goto L_008c569f;
L_008c5679:; BB(0x008c5679);
    /* 008c5679: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c567a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c567b: push 0xa38e84 */ { u32 v = 0xa38e84u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5680: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5685u); f_008c94e0();
    /* 008c5685: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5689: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c568e: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5692: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5697u); f_008c3720();
    /* 008c5697: mov eax, dword ptr [0xaeaa40] */ r_eax = R32((u32)(0xaeaa40u));
    /* 008c569c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c569f:; BB(0x008c569f);
    /* 008c569f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c56a1: jae 0x8c56d2 */ if (!fC) goto L_008c56d2;
L_008c56a3:; BB(0x008c56a3);
    /* 008c56a3: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c56a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c56aa: je 0x8c56cd */ if (fZ) goto L_008c56cd;
L_008c56ac:; BB(0x008c56ac);
    /* 008c56ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c56ad: push 0xa38e68 */ { u32 v = 0xa38e68u; r_esp -= 4; W32(r_esp, v); }
    /* 008c56b2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c56b7u); f_008c94e0();
    /* 008c56b7: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c56bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c56c0: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c56c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c56c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c56c5: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c56cau); f_008c3720();
    /* 008c56ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c56cd:; BB(0x008c56cd);
    /* 008c56cd: mov edi, 1 */ r_edi = 0x1u;
L_008c56d2:; BB(0x008c56d2);
    /* 008c56d2: push 0xa38e5c */ { u32 v = 0xa38e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c56d7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c56dcu); f_008c94e0();
    /* 008c56dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c56df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c56e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c56e1: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c56e6u); f_008c5c80();
    /* 008c56e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c56e8: mov dword ptr [0xaeaa44], eax */ W32((u32)(0xaeaa44u), r_eax);
    /* 008c56ed: je 0x8c575a */ if (fZ) goto L_008c575a;
L_008c56ef:; BB(0x008c56ef);
    /* 008c56ef: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c56f5: mov ecx, dword ptr [0x8f83d8] */ r_ecx = R32((u32)(0x8f83d8u));
    /* 008c56fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c56fd: mov dword ptr [0xaeaa58], ecx */ W32((u32)(0xaeaa58u), r_ecx);
    /* 008c5703: je 0x8c572c */ if (fZ) goto L_008c572c;
L_008c5705:; BB(0x008c5705);
    /* 008c5705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5707: push 0xa38e44 */ { u32 v = 0xa38e44u; r_esp -= 4; W32(r_esp, v); }
    /* 008c570c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5711u); f_008c94e0();
    /* 008c5711: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c571a: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c571d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c571e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c571f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5724u); f_008c3720();
    /* 008c5724: mov eax, dword ptr [0xaeaa44] */ r_eax = R32((u32)(0xaeaa44u));
    /* 008c5729: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c572c:; BB(0x008c572c);
    /* 008c572c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c572e: jae 0x8c575a */ if (!fC) goto L_008c575a;
L_008c5730:; BB(0x008c5730);
    /* 008c5730: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5737: je 0x8c5759 */ if (fZ) goto L_008c5759;
L_008c5739:; BB(0x008c5739);
    /* 008c5739: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c573a: push 0xa38e28 */ { u32 v = 0xa38e28u; r_esp -= 4; W32(r_esp, v); }
    /* 008c573f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5744u); f_008c94e0();
    /* 008c5744: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5748: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c574d: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5751: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5756u); f_008c3720();
    /* 008c5756: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5759:; BB(0x008c5759);
    /* 008c5759: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008c575a:; BB(0x008c575a);
    /* 008c575a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c575c: mov byte ptr [0xaeaa5d], 1 */ W8((u32)(0xaeaa5du), 0x1u);
    /* 008c5763: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5765: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5766: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5767: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008c576a: ret  */ FN_RET(0x008c5620); r_esp += 4; return;
}

void f_008c5770(void) /* sub_8C5770 */
{
    FN_ENTER(0x008c5770);
    /* 008c5770: mov al, byte ptr [0xaeaa5d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaeaa5du))) & 0xffu);
    /* 008c5775: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5777: jne 0x8c577f */ if (!fZ) goto L_008c577f;
L_008c5779:; BB(0x008c5779);
    /* 008c5779: mov eax, 2 */ r_eax = 0x2u;
    /* 008c577e: ret  */ FN_RET(0x008c5770); r_esp += 4; return;
L_008c577f:; BB(0x008c577f);
    /* 008c577f: mov eax, dword ptr [0x8f83c4] */ r_eax = R32((u32)(0x8f83c4u));
    /* 008c5784: mov ecx, dword ptr [0xaeaa54] */ r_ecx = R32((u32)(0xaeaa54u));
    /* 008c578a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c578b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c578d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c578f: je 0x8c57c0 */ if (fZ) goto L_008c57c0;
L_008c5791:; BB(0x008c5791);
    /* 008c5791: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c5797: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5799: je 0x8c57bb */ if (fZ) goto L_008c57bb;
L_008c579b:; BB(0x008c579b);
    /* 008c579b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c579c: push 0xa38ecc */ { u32 v = 0xa38eccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c57a1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c57a6u); f_008c94e0();
    /* 008c57a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c57a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c57aa: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c57af: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c57b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c57b3: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c57b8u); f_008c3720();
    /* 008c57b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c57bb:; BB(0x008c57bb);
    /* 008c57bb: mov esi, 1 */ r_esi = 0x1u;
L_008c57c0:; BB(0x008c57c0);
    /* 008c57c0: mov eax, dword ptr [0x8f83d8] */ r_eax = R32((u32)(0x8f83d8u));
    /* 008c57c5: mov ecx, dword ptr [0xaeaa58] */ r_ecx = R32((u32)(0xaeaa58u));
    /* 008c57cb: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c57cd: je 0x8c57fb */ if (fZ) goto L_008c57fb;
L_008c57cf:; BB(0x008c57cf);
    /* 008c57cf: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c57d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c57d7: je 0x8c57fa */ if (fZ) goto L_008c57fa;
L_008c57d9:; BB(0x008c57d9);
    /* 008c57d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c57da: push 0xa38eb8 */ { u32 v = 0xa38eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c57df: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c57e4u); f_008c94e0();
    /* 008c57e4: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c57ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c57ed: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c57f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c57f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c57f2: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c57f7u); f_008c3720();
    /* 008c57f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c57fa:; BB(0x008c57fa);
    /* 008c57fa: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008c57fb:; BB(0x008c57fb);
    /* 008c57fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c57fd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c57ff: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008c5802: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5803: ret  */ FN_RET(0x008c5770); r_esp += 4; return;
}

void f_008c5810(void) /* sub_8C5810 */
{
    FN_ENTER(0x008c5810);
    /* 008c5810: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5812: push 0x8cba0b */ { u32 v = 0x8cba0bu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5817: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008c581d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c581e: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008c5825: sub esp, 0x418 */ {  u32 a = r_esp; u32 b = 0x418u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c582b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c582c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c582d: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c5831: mov dword ptr [esp + 0x18], 4 */ W32((u32)(r_esp+0x18u), 0x4u);
    /* 008c5839: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 008c5841: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 008c5849: call 0x8c9940 */ r_esp -= 4; W32(r_esp, 0x8c584eu); f_008c9940();
    /* 008c584e: mov ebx, dword ptr [esp + 0x430] */ r_ebx = R32((u32)(r_esp+0x430u));
    /* 008c5855: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 008c5859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c585a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c585b: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008c585f: mov dword ptr [esp + 0x430], 0 */ W32((u32)(r_esp+0x430u), 0x0u);
    /* 008c586a: call 0x8c9980 */ r_esp -= 4; W32(r_esp, 0x8c586fu); f_008c9980();
    /* 008c586f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c5871: jne 0x8c58b2 */ if (!fZ) goto L_008c58b2;
L_008c5873:; BB(0x008c5873);
    /* 008c5873: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c5879: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c587bu); call_ind(t); }
    /* 008c587b: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5882: je 0x8c58b2 */ if (fZ) goto L_008c58b2;
L_008c5884:; BB(0x008c5884);
    /* 008c5884: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5885: mov esi, dword ptr [esp + 0x420] */ r_esi = R32((u32)(r_esp+0x420u));
    /* 008c588c: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c588eu); call_ind(t); }
    /* 008c588e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c588f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5891: push 0xa38f60 */ { u32 v = 0xa38f60u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5896: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c589bu); f_008c94e0();
    /* 008c589b: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c58a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c58a4: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c58a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c58a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c58a9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c58aeu); f_008c3720();
    /* 008c58ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c58b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c58b2:; BB(0x008c58b2);
    /* 008c58b2: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c58b6: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c58ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c58bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c58bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c58be: push 0xf003f */ { u32 v = 0xf003fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c58c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c58c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c58c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c58c9: push 0xa38f2c */ { u32 v = 0xa38f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c58ce: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c58d3u); f_008c94e0();
    /* 008c58d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c58d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c58d7: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c58dc: call dword ptr [0x8f8044] */ { u32 t = R32((u32)(0x8f8044u)); r_esp -= 4; W32(r_esp, 0x8c58e2u); call_ind(t); }
    /* 008c58e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c58e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c58e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c58e6: jne 0x8c5959 */ if (!fZ) goto L_008c5959;
L_008c58e8:; BB(0x008c58e8);
    /* 008c58e8: cmp dword ptr [esp + 0xc], 2 */ {  u32 a = R32((u32)(r_esp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c58ed: jne 0x8c5919 */ if (!fZ) goto L_008c5919;
L_008c58ef:; BB(0x008c58ef);
    /* 008c58ef: mov eax, dword ptr [esp + 0x42c] */ r_eax = R32((u32)(r_esp+0x42cu));
    /* 008c58f6: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c58fa: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 008c58fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c58ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5900: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5902: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5905: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c590au); f_008c94e0();
    /* 008c590a: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008c590e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5912: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5913: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x8c5919u); call_ind(t); }
L_008c5919:; BB(0x008c5919);
    /* 008c5919: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008c591d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c591e: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c5924u); call_ind(t); }
    /* 008c5924: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008c5928: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008c592c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c592e: je 0x8c5988 */ if (fZ) goto L_008c5988;
L_008c5930:; BB(0x008c5930);
    /* 008c5930: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5936: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5938: je 0x8c59bf */ if (fZ) goto L_008c59bf;
L_008c593e:; BB(0x008c593e);
    /* 008c593e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c593f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5940: push 0xa38f14 */ { u32 v = 0xa38f14u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5945: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c594au); f_008c94e0();
    /* 008c594a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c594d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c594e: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5953: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5957: jmp 0x8c59b7 */ goto L_008c59b7;
L_008c5959:; BB(0x008c5959);
    /* 008c5959: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c595f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5961: je 0x8c5984 */ if (fZ) goto L_008c5984;
L_008c5963:; BB(0x008c5963);
    /* 008c5963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5964: push 0xa38efc */ { u32 v = 0xa38efcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5969: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c596eu); f_008c94e0();
    /* 008c596e: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c5974: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5977: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c597a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c597b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c597c: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5981u); f_008c3720();
    /* 008c5981: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5984:; BB(0x008c5984);
    /* 008c5984: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_008c5988:; BB(0x008c5988);
    /* 008c5988: mov ecx, dword ptr [esp + 0x430] */ r_ecx = R32((u32)(r_esp+0x430u));
    /* 008c598f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5991: je 0x8c59ea */ if (fZ) goto L_008c59ea;
L_008c5993:; BB(0x008c5993);
    /* 008c5993: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5999: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c599b: je 0x8c59bf */ if (fZ) goto L_008c59bf;
L_008c599d:; BB(0x008c599d);
    /* 008c599d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c599e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c599f: push 0xa38ee4 */ { u32 v = 0xa38ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c59a4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c59a9u); f_008c94e0();
    /* 008c59a9: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c59af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c59b2: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c59b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c59b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
L_008c59b7:; BB(0x008c59b7);
    /* 008c59b7: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c59bcu); f_008c3720();
    /* 008c59bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c59bf:; BB(0x008c59bf);
    /* 008c59bf: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c59c3: mov dword ptr [esp + 0x420], 0xffffffff */ W32((u32)(r_esp+0x420u), 0xffffffffu);
    /* 008c59ce: call 0x8c76b0 */ r_esp -= 4; W32(r_esp, 0x8c59d3u); f_008c76b0();
    /* 008c59d3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c59d5: mov ecx, dword ptr [esp + 0x418] */ r_ecx = R32((u32)(r_esp+0x418u));
    /* 008c59dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c59e3: add esp, 0x424 */ {  u32 a = r_esp; u32 b = 0x424u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c59e9: ret  */ FN_RET(0x008c5810); r_esp += 4; return;
L_008c59ea:; BB(0x008c59ea);
    /* 008c59ea: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c59ee: mov dword ptr [esp + 0x420], 0xffffffff */ W32((u32)(r_esp+0x420u), 0xffffffffu);
    /* 008c59f9: call 0x8c76b0 */ r_esp -= 4; W32(r_esp, 0x8c59feu); f_008c76b0();
    /* 008c59fe: mov ecx, dword ptr [esp + 0x418] */ r_ecx = R32((u32)(r_esp+0x418u));
    /* 008c5a05: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c5a07: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5a0e: add esp, 0x424 */ {  u32 a = r_esp; u32 b = 0x424u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c5a14: ret  */ FN_RET(0x008c5810); r_esp += 4; return;
}

void f_008c5a20(void) /* sub_8C5A20 */
{
    FN_ENTER(0x008c5a20);
    /* 008c5a20: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c5a23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a25: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a26: push 0xa38fb8 */ { u32 v = 0xa38fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a2b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c5a2d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5a32u); f_008c94e0();
    /* 008c5a32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a36: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8c5a3cu); call_ind(t); }
    /* 008c5a3c: push 0xa38f98 */ { u32 v = 0xa38f98u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a41: mov esi, eax */ r_esi = r_eax;
    /* 008c5a43: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5a48u); f_008c94e0();
    /* 008c5a48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a4d: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c5a52u); f_008c5c80();
    /* 008c5a52: push 0xa38f80 */ { u32 v = 0xa38f80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a57: mov edi, eax */ r_edi = r_eax;
    /* 008c5a59: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5a5eu); f_008c94e0();
    /* 008c5a5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a63: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c5a68u); f_008c5c80();
    /* 008c5a68: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 008c5a6c: mov ecx, eax */ r_ecx = r_eax;
    /* 008c5a6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c5a70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5a72: je 0x8c5a86 */ if (fZ) goto L_008c5a86;
L_008c5a74:; BB(0x008c5a74);
    /* 008c5a74: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c5a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a77: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c5a7b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a7e: push 0x400000 */ { u32 v = 0x400000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a84: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x8c5a86u); call_ind(t); }
L_008c5a86:; BB(0x008c5a86);
    /* 008c5a86: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5a88: je 0x8c5aa1 */ if (fZ) goto L_008c5aa1;
L_008c5a8a:; BB(0x008c5a8a);
    /* 008c5a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5a8c: jne 0x8c5aa5 */ if (!fZ) goto L_008c5aa5;
L_008c5a8e:; BB(0x008c5a8e);
    /* 008c5a8e: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008c5a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a92: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c5a96: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a99: push 0x400000 */ { u32 v = 0x400000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5a9f: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5aa1u); call_ind(t); }
L_008c5aa1:; BB(0x008c5aa1);
    /* 008c5aa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5aa3: je 0x8c5ab2 */ if (fZ) goto L_008c5ab2;
L_008c5aa5:; BB(0x008c5aa5);
    /* 008c5aa5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008c5aa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5aaa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5aab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5aac: not eax */ r_eax = ~r_eax;
    /* 008c5aae: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c5ab1: ret  */ FN_RET(0x008c5a20); r_esp += 4; return;
L_008c5ab2:; BB(0x008c5ab2);
    /* 008c5ab2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5ab3: mov eax, ebx */ r_eax = r_ebx;
    /* 008c5ab5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5ab6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5ab7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c5aba: ret  */ FN_RET(0x008c5a20); r_esp += 4; return;
}

void f_008c5ac0(void) /* sub_8C5AC0 */
{
    FN_ENTER(0x008c5ac0);
    /* 008c5ac0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c5ac3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ac4: push 0xa39030 */ { u32 v = 0xa39030u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ac9: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
    /* 008c5ace: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5ad3u); f_008c94e0();
    /* 008c5ad3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ad7: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x8c5addu); call_ind(t); }
    /* 008c5add: mov ebx, eax */ r_ebx = r_eax;
    /* 008c5adf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5ae1: je 0x8c5c70 */ if (fZ) goto L_008c5c70;
L_008c5ae7:; BB(0x008c5ae7);
    /* 008c5ae7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ae8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ae9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5aea: push 0xa39014 */ { u32 v = 0xa39014u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5aef: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5af4u); f_008c94e0();
    /* 008c5af4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5af7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5af8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5af9: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c5afeu); f_008c5c80();
    /* 008c5afe: push 0xa38ffc */ { u32 v = 0xa38ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b03: mov esi, eax */ r_esi = r_eax;
    /* 008c5b05: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5b0au); f_008c94e0();
    /* 008c5b0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b0f: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c5b14u); f_008c5c80();
    /* 008c5b14: push 0xa38fe8 */ { u32 v = 0xa38fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b19: mov edi, eax */ r_edi = r_eax;
    /* 008c5b1b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5b20u); f_008c94e0();
    /* 008c5b20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b25: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c5b2au); f_008c5c80();
    /* 008c5b2a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5b2c: mov ebp, eax */ r_ebp = r_eax;
    /* 008c5b2e: je 0x8c5c5d */ if (fZ) goto L_008c5c5d;
L_008c5b34:; BB(0x008c5b34);
    /* 008c5b34: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5b36: je 0x8c5c5d */ if (fZ) goto L_008c5c5d;
L_008c5b3c:; BB(0x008c5b3c);
    /* 008c5b3c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5b3e: je 0x8c5c5d */ if (fZ) goto L_008c5c5d;
L_008c5b44:; BB(0x008c5b44);
    /* 008c5b44: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008c5b48: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008c5b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b4e: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c5b50u); call_ind(t); }
    /* 008c5b50: mov esi, eax */ r_esi = r_eax;
    /* 008c5b52: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5b54: je 0x8c5c5d */ if (fZ) goto L_008c5c5d;
L_008c5b5a:; BB(0x008c5b5a);
    /* 008c5b5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b5b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8c5b60u); f_008581c5();
    /* 008c5b60: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008c5b64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5b67: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008c5b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b6c: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 008c5b70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b73: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c5b75u); call_ind(t); }
    /* 008c5b75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5b77: je 0x8c5c50 */ if (fZ) goto L_008c5c50;
L_008c5b7d:; BB(0x008c5b7d);
    /* 008c5b7d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008c5b81: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 008c5b85: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c5b89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b8b: push 0xa384f8 */ { u32 v = 0xa384f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5b91: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c5b93u); call_ind(t); }
    /* 008c5b93: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008c5b97: cmp dword ptr [ecx], 0xfeef04bd */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xfeef04bdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5b9d: jne 0x8c5c50 */ if (!fZ) goto L_008c5c50;
L_008c5ba3:; BB(0x008c5ba3);
    /* 008c5ba3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 008c5ba6: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c5ba9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5bac: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008c5baf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c5bb1: mov ax, word ptr [ecx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 008c5bb5: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 008c5bb8: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5bbb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008c5bbe: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 008c5bc1: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c5bc4: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 008c5bc7: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5bca: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008c5bcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c5bcf: mov ax, word ptr [ecx + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0xcu))) & 0xffffu);
    /* 008c5bd3: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 008c5bd6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 008c5bda: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008c5bde: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c5be3: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c5be9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5bec: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 008c5bef: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 008c5bf2: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 008c5bf6: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5bfc: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5bff: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5c02: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008c5c05: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c5c08: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008c5c0b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008c5c0f: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c5c14: lea edi, [eax + edx*4] */ r_edi = (u32)(r_eax+r_edx*4);
    /* 008c5c17: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5c1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5c1e: je 0x8c5c47 */ if (fZ) goto L_008c5c47;
L_008c5c20:; BB(0x008c5c20);
    /* 008c5c20: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008c5c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c27: push 0xa38fcc */ { u32 v = 0xa38fccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c2c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5c31u); f_008c94e0();
    /* 008c5c31: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c5c37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5c3a: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c5c3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c3f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5c44u); f_008c3720();
    /* 008c5c44: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5c47:; BB(0x008c5c47);
    /* 008c5c47: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5c49: jae 0x8c5c50 */ if (!fC) goto L_008c5c50;
L_008c5c4b:; BB(0x008c5c4b);
    /* 008c5c4b: mov byte ptr [esp + 0x13], 0 */ W8((u32)(r_esp+0x13u), 0x0u);
L_008c5c50:; BB(0x008c5c50);
    /* 008c5c50: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008c5c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c55: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8c5c5au); f_00857e98();
    /* 008c5c5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c5c5d:; BB(0x008c5c5d);
    /* 008c5c5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c5e: call dword ptr [0x8f8134] */ { u32 t = R32((u32)(0x8f8134u)); r_esp -= 4; W32(r_esp, 0x8c5c64u); call_ind(t); }
    /* 008c5c64: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 008c5c68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5c69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5c6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5c6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5c6c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c5c6f: ret  */ FN_RET(0x008c5ac0); r_esp += 4; return;
L_008c5c70:; BB(0x008c5c70);
    /* 008c5c70: mov al, byte ptr [esp + 7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x7u))) & 0xffu);
    /* 008c5c74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5c75: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c5c78: ret  */ FN_RET(0x008c5ac0); r_esp += 4; return;
}

void f_008c5c80(void) /* sub_8C5C80 */
{
    FN_ENTER(0x008c5c80);
    /* 008c5c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c81: mov ebp, esp */ r_ebp = r_esp;
    /* 008c5c83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c85: push 0x99f940 */ { u32 v = 0x99f940u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c8a: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c8f: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008c5c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5c96: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008c5c9d: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c5ca3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ca4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ca5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ca6: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008c5ca9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5cab: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008c5cae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5caf: call dword ptr [0x8f82a4] */ { u32 t = R32((u32)(0x8f82a4u)); r_esp -= 4; W32(r_esp, 0x8c5cb5u); call_ind(t); }
    /* 008c5cb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5cb7: je 0x8c5cce */ if (fZ) goto L_008c5cce;
L_008c5cb9:; BB(0x008c5cb9);
    /* 008c5cb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5cbb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5cbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5cc5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5cc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5cc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5cc8: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5cca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5ccb: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5cce:; BB(0x008c5cce);
    /* 008c5cce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c5cd0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008c5cd3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008c5cd6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008c5cd9: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 008c5cdc: cmp word ptr [ebx], 0x5a4d */ {  u32 a = R16((u32)(r_ebx)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008c5ce1: je 0x8c5cff */ if (fZ) goto L_008c5cff;
L_008c5ce3:; BB(0x008c5ce3);
    /* 008c5ce3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5cea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5cec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5cef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5cf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5cf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5cf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5cf9: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5cfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5cfc: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5cff:; BB(0x008c5cff);
    /* 008c5cff: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 008c5d02: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5d04: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 008c5d07: cmp dword ptr [eax], 0x4550 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5d0d: je 0x8c5d2b */ if (fZ) goto L_008c5d2b;
L_008c5d0f:; BB(0x008c5d0f);
    /* 008c5d0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5d16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5d18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5d1b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5d22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5d23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5d24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5d25: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5d27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5d28: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5d2b:; BB(0x008c5d2b);
    /* 008c5d2b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008c5d2e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008c5d31: cmp word ptr [eax + 0x18], 0x20b */ {  u32 a = R16((u32)(r_eax+0x18u)); u32 b = 0x20bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008c5d37: jne 0x8c5d50 */ if (!fZ) goto L_008c5d50;
L_008c5d39:; BB(0x008c5d39);
    /* 008c5d39: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 008c5d3c: mov esi, dword ptr [eax + 0x88] */ r_esi = R32((u32)(r_eax+0x88u));
    /* 008c5d42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 008c5d45: mov eax, dword ptr [eax + 0x8c] */ r_eax = R32((u32)(r_eax+0x8cu));
    /* 008c5d4b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008c5d4e: jmp 0x8c5d5e */ goto L_008c5d5e;
L_008c5d50:; BB(0x008c5d50);
    /* 008c5d50: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 008c5d53: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008c5d56: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 008c5d59: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008c5d5c: mov esi, ecx */ r_esi = r_ecx;
L_008c5d5e:; BB(0x008c5d5e);
    /* 008c5d5e: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5d60: jne 0x8c5d7e */ if (!fZ) goto L_008c5d7e;
L_008c5d62:; BB(0x008c5d62);
    /* 008c5d62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5d69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5d6b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5d6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5d75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5d76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5d77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5d78: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5d7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5d7b: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5d7e:; BB(0x008c5d7e);
    /* 008c5d7e: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c5d80: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 008c5d83: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 008c5d86: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008c5d89: cmp edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5d8f: jae 0x8c5d9c */ if (!fC) goto L_008c5d9c;
L_008c5d91:; BB(0x008c5d91);
    /* 008c5d91: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 008c5d94: lea ecx, [edi - 1] */ r_ecx = (u32)(r_edi+0xffffffffu);
    /* 008c5d97: jmp 0x8c5eaf */ goto L_008c5eaf;
L_008c5d9c:; BB(0x008c5d9c);
    /* 008c5d9c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5d9e: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 008c5da1: mov eax, edi */ r_eax = r_edi;
    /* 008c5da3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_008c5da6:; BB(0x008c5da6);
    /* 008c5da6: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c5da9: je 0x8c5dd7 */ if (fZ) goto L_008c5dd7;
L_008c5dab:; BB(0x008c5dab);
    /* 008c5dab: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5dac: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 008c5daf: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5db0: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 008c5db3: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5db9: jb 0x8c5da6 */ if (fC) goto L_008c5da6;
L_008c5dbb:; BB(0x008c5dbb);
    /* 008c5dbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5dc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5dc4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5dc7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5dce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5dcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5dd1: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5dd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5dd4: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5dd7:; BB(0x008c5dd7);
    /* 008c5dd7: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008c5dda: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5ddc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 008c5ddf: mov byte ptr [ebp - 0x54], 0 */ W8((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 008c5de3: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_008c5de6:; BB(0x008c5de6);
    /* 008c5de6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 008c5de9: cmp ecx, dword ptr [esi + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5dec: jae 0x8c5e76 */ if (!fC) goto L_008c5e76;
L_008c5df2:; BB(0x008c5df2);
    /* 008c5df2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008c5df4: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c5df6: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 008c5df9: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 008c5dfc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5dfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5dff: call dword ptr [0x8f82a4] */ { u32 t = R32((u32)(0x8f82a4u)); r_esp -= 4; W32(r_esp, 0x8c5e05u); call_ind(t); }
    /* 008c5e05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5e07: je 0x8c5e25 */ if (fZ) goto L_008c5e25;
L_008c5e09:; BB(0x008c5e09);
    /* 008c5e09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5e10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5e12: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5e15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5e1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5e1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5e1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5e1f: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5e21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5e22: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5e25:; BB(0x008c5e25);
    /* 008c5e25: mov byte ptr [ebp - 0x5c], 1 */ W8((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 008c5e29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c5e2b:; BB(0x008c5e2b);
    /* 008c5e2b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 008c5e2e: cmp eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c5e31: jae 0x8c5e42 */ if (!fC) goto L_008c5e42;
L_008c5e33:; BB(0x008c5e33);
    /* 008c5e33: movsx edx, byte ptr [edi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 008c5e36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5e38: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c5e3a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008c5e3c: je 0x8c5e52 */ if (fZ) goto L_008c5e52;
L_008c5e3e:; BB(0x008c5e3e);
    /* 008c5e3e: mov byte ptr [ebp - 0x5c], 0 */ W8((u32)(r_ebp+0xffffffa4u), 0x0u);
L_008c5e42:; BB(0x008c5e42);
    /* 008c5e42: mov al, byte ptr [ebp - 0x5c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa4u))) & 0xffu);
    /* 008c5e45: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c5e47: je 0x8c5e5d */ if (fZ) goto L_008c5e5d;
L_008c5e49:; BB(0x008c5e49);
    /* 008c5e49: mov byte ptr [ebp - 0x54], 1 */ W8((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 008c5e4d: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 008c5e50: jmp 0x8c5e76 */ goto L_008c5e76;
L_008c5e52:; BB(0x008c5e52);
    /* 008c5e52: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c5e53: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 008c5e56: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c5e57: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 008c5e5a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5e5b: jmp 0x8c5e2b */ goto L_008c5e2b;
L_008c5e5d:; BB(0x008c5e5d);
    /* 008c5e5d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 008c5e60: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5e63: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 008c5e66: inc dword ptr [ebp - 0x34] */ { u32 ad = (u32)(r_ebp+0xffffffccu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c5e69: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008c5e6c: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 008c5e6f: mov eax, ecx */ r_eax = r_ecx;
    /* 008c5e71: jmp 0x8c5de6 */ goto L_008c5de6;
L_008c5e76:; BB(0x008c5e76);
    /* 008c5e76: mov al, byte ptr [ebp - 0x54] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffacu))) & 0xffu);
    /* 008c5e79: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c5e7b: jne 0x8c5e99 */ if (!fZ) goto L_008c5e99;
L_008c5e7d:; BB(0x008c5e7d);
    /* 008c5e7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5e84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5e86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5e89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5e90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5e92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5e93: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5e95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5e96: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
L_008c5e99:; BB(0x008c5e99);
    /* 008c5e99: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008c5e9c: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5e9e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 008c5ea1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 008c5ea4: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 008c5ea7: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 008c5eaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5eac: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
L_008c5eaf:; BB(0x008c5eaf);
    /* 008c5eaf: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008c5eb2: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008c5eb5: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5eb7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008c5eba: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 008c5ebd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008c5ec0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008c5ec2: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5ec4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008c5ec7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c5eca: lea edx, [ecx + ebx] */ r_edx = (u32)(r_ecx+r_ebx);
    /* 008c5ecd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c5ecf: jb 0x8c5f3a */ if (fC) goto L_008c5f3a;
L_008c5ed1:; BB(0x008c5ed1);
    /* 008c5ed1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c5ed4: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c5ed6: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c5ed8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c5eda: jae 0x8c5f3a */ if (!fC) goto L_008c5f3a;
L_008c5edc:; BB(0x008c5edc);
    /* 008c5edc: lea edx, [ebp - 0xe4] */ r_edx = (u32)(r_ebp+0xffffff1cu);
    /* 008c5ee2: mov edi, eax */ r_edi = r_eax;
    /* 008c5ee4: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5ee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5ee9: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c5eeb: not ecx */ r_ecx = ~r_ecx;
    /* 008c5eed: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c5eef: mov eax, ecx */ r_eax = r_ecx;
    /* 008c5ef1: mov esi, edi */ r_esi = r_edi;
    /* 008c5ef3: mov edi, edx */ r_edi = r_edx;
    /* 008c5ef5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c5ef8: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c5efa: mov ecx, eax */ r_ecx = r_eax;
    /* 008c5efc: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5eff: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c5f01: push 0xa385bc */ { u32 v = 0xa385bcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f06: lea ecx, [ebp - 0xe4] */ r_ecx = (u32)(r_ebp+0xffffff1cu);
    /* 008c5f0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f0d: call 0x8cb35e */ r_esp -= 4; W32(r_esp, 0x8c5f12u); f_008cb35e();
    /* 008c5f12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5f15: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 008c5f18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c5f1a: je 0x8c5f23 */ if (fZ) goto L_008c5f23;
L_008c5f1c:; BB(0x008c5f1c);
    /* 008c5f1c: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 008c5f1f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c5f20: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
L_008c5f23:; BB(0x008c5f23);
    /* 008c5f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f24: lea edx, [ebp - 0xe4] */ r_edx = (u32)(r_ebp+0xffffff1cu);
    /* 008c5f2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f2b: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8c5f31u); call_ind(t); }
    /* 008c5f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f32: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c5f37u); f_008c5c80();
    /* 008c5f37: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_008c5f3a:; BB(0x008c5f3a);
    /* 008c5f3a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5f41: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5f44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5f4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5f4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5f4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5f4e: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5f50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5f51: ret 8 */ FN_RET(0x008c5c80); r_esp += 12; return;
}

void f_008c5f54(void)
{
    FN_ENTER(0x008c5f54);
    /* 008c5f54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008c5f57: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008c5f59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008c5f5b: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 008c5f61: mov eax, ecx */ r_eax = r_ecx;
    /* 008c5f63: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008c5f66: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008c5f69: mov eax, 1 */ r_eax = 0x1u;
    /* 008c5f6e: ret  */ FN_RET(0x008c5f54); r_esp += 4; return;
}

void f_008c5f6f(void)
{
    FN_ENTER(0x008c5f6f);
    /* 008c5f6f: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c5f72: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c5f77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c5f79: je 0x8c5fa6 */ if (fZ) goto L_008c5fa6;
L_008c5f7b:; BB(0x008c5f7b);
    /* 008c5f7b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c5f7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f7f: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 008c5f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f86: push 0xa39040 */ { u32 v = 0xa39040u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f8b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5f90u); f_008c94e0();
    /* 008c5f90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f94: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c5f9a: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c5f9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5f9e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c5fa3u); f_008c3720();
    /* 008c5fa3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008c5fa6:; BB(0x008c5fa6);
    /* 008c5fa6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c5fad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008c5fb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c5fb3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c5fba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c5fbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c5fbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c5fbd: mov esp, ebp */ r_esp = r_ebp;
    /* 008c5fbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c5fc0: ret 8 */ FN_RET(0x008c5f6f); r_esp += 12; return;
}

void f_008c5fd0(void) /* sub_8C5FD0 */
{
    FN_ENTER(0x008c5fd0);
    /* 008c5fd0: sub esp, 0x2b0 */ {  u32 a = r_esp; u32 b = 0x2b0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c5fd6: lea eax, [esp + 0x88] */ r_eax = (u32)(r_esp+0x88u);
    /* 008c5fdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fdf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fe0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fe1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c5fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fe4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fe6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fe7: push 0xa391ac */ { u32 v = 0xa391acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c5fec: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c5ff1u); f_008c94e0();
    /* 008c5ff1: mov esi, dword ptr [0x8f800c] */ r_esi = R32((u32)(0x8f800cu));
    /* 008c5ff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c5ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c5ffb: push 0x80000002 */ { u32 v = 0x80000002u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6000: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6002u); call_ind(t); }
    /* 008c6002: mov edi, dword ptr [0x8f8008] */ r_edi = R32((u32)(0x8f8008u));
    /* 008c6008: mov ebp, 0x104 */ r_ebp = 0x104u;
    /* 008c600d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c600f: jne 0x8c6084 */ if (!fZ) goto L_008c6084;
L_008c6011:; BB(0x008c6011);
    /* 008c6011: lea ecx, [esp + 0x9c] */ r_ecx = (u32)(r_esp+0x9cu);
    /* 008c6018: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 008c601f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6021: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6022: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6023: push 0xa391a0 */ { u32 v = 0xa391a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6028: mov dword ptr [esp + 0xb0], ebp */ W32((u32)(r_esp+0xb0u), r_ebp);
    /* 008c602f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6034u); f_008c94e0();
    /* 008c6034: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6038: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 008c603f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6040: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c6042u); call_ind(t); }
    /* 008c6042: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6044: jne 0x8c6076 */ if (!fZ) goto L_008c6076;
L_008c6046:; BB(0x008c6046);
    /* 008c6046: cmp dword ptr [0xaeaa28], ebx */ {  u32 a = R32((u32)(0xaeaa28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c604c: je 0x8c6076 */ if (fZ) goto L_008c6076;
L_008c604e:; BB(0x008c604e);
    /* 008c604e: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 008c6055: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6056: push 0xa3918c */ { u32 v = 0xa3918cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c605b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6060u); f_008c94e0();
    /* 008c6060: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c6066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6069: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c606c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c606d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c606e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c6073u); f_008c3720();
    /* 008c6073: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c6076:; BB(0x008c6076);
    /* 008c6076: mov eax, dword ptr [esp + 0x98] */ r_eax = R32((u32)(r_esp+0x98u));
    /* 008c607d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c607e: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c6084u); call_ind(t); }
L_008c6084:; BB(0x008c6084);
    /* 008c6084: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 008c608b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c608c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c608e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c608f: push 0xa39128 */ { u32 v = 0xa39128u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6094: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6099u); f_008c94e0();
    /* 008c6099: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c609c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c609d: push 0x80000002 */ { u32 v = 0x80000002u; r_esp -= 4; W32(r_esp, v); }
    /* 008c60a2: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c60a4u); call_ind(t); }
    /* 008c60a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c60a6: jne 0x8c6a4f */ if (!fZ) goto L_008c6a4f;
L_008c60ac:; BB(0x008c60ac);
    /* 008c60ac: lea edx, [esp + 0x9c] */ r_edx = (u32)(r_esp+0x9cu);
    /* 008c60b3: lea eax, [esp + 0xb8] */ r_eax = (u32)(r_esp+0xb8u);
    /* 008c60ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c60bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c60bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c60bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c60be: push 0xa39118 */ { u32 v = 0xa39118u; r_esp -= 4; W32(r_esp, v); }
    /* 008c60c3: mov dword ptr [esp + 0xb0], ebp */ W32((u32)(r_esp+0xb0u), r_ebp);
    /* 008c60ca: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c60cfu); f_008c94e0();
    /* 008c60cf: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 008c60d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c60d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c60da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c60db: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c60ddu); call_ind(t); }
    /* 008c60dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c60df: jne 0x8c613f */ if (!fZ) goto L_008c613f;
L_008c60e1:; BB(0x008c60e1);
    /* 008c60e1: cmp dword ptr [0xaeaa28], ebx */ {  u32 a = R32((u32)(0xaeaa28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c60e7: je 0x8c613f */ if (fZ) goto L_008c613f;
L_008c60e9:; BB(0x008c60e9);
    /* 008c60e9: mov edx, dword ptr [esp + 0xbb] */ r_edx = R32((u32)(r_esp+0xbbu));
    /* 008c60f0: mov eax, dword ptr [esp + 0xba] */ r_eax = R32((u32)(r_esp+0xbau));
    /* 008c60f7: mov ecx, dword ptr [esp + 0xb9] */ r_ecx = R32((u32)(r_esp+0xb9u));
    /* 008c60fe: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c6104: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6105: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 008c610c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c6111: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6117: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6118: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c611e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c611f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6120: push 0xa390f4 */ { u32 v = 0xa390f4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6125: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c612au); f_008c94e0();
    /* 008c612a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c612d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c612e: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c6133: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c6136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6137: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c613cu); f_008c3720();
    /* 008c613c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c613f:; BB(0x008c613f);
    /* 008c613f: lea ecx, [esp + 0x1bc] */ r_ecx = (u32)(r_esp+0x1bcu);
    /* 008c6146: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6147: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6148: call dword ptr [0x8f8114] */ { u32 t = R32((u32)(0x8f8114u)); r_esp -= 4; W32(r_esp, 0x8c614eu); call_ind(t); }
    /* 008c614e: push 0xa390e0 */ { u32 v = 0xa390e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6153: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6158u); f_008c94e0();
    /* 008c6158: mov edi, eax */ r_edi = r_eax;
    /* 008c615a: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c615d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c615f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c6162: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c6164: not ecx */ r_ecx = ~r_ecx;
    /* 008c6166: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c6168: lea edx, [esp + 0x1bc] */ r_edx = (u32)(r_esp+0x1bcu);
    /* 008c616f: mov esi, edi */ r_esi = r_edi;
    /* 008c6171: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c6173: mov edi, edx */ r_edi = r_edx;
    /* 008c6175: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6178: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c617a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c617c: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c617d: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c6180: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c6182: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6183: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6188: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c618a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c618c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c618d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6190: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6192: lea eax, [esp + 0x1d0] */ r_eax = (u32)(r_esp+0x1d0u);
    /* 008c6199: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c619e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c619f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c61a1: mov dword ptr [esp + 0xbc], ebx */ W32((u32)(r_esp+0xbcu), r_ebx);
    /* 008c61a8: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c61aeu); call_ind(t); }
    /* 008c61ae: mov esi, eax */ r_esi = r_eax;
    /* 008c61b0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c61b3: jne 0x8c61ee */ if (!fZ) goto L_008c61ee;
L_008c61b5:; BB(0x008c61b5);
    /* 008c61b5: cmp dword ptr [0xaeaa28], ebx */ {  u32 a = R32((u32)(0xaeaa28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c61bb: je 0x8c622e */ if (fZ) goto L_008c622e;
L_008c61bd:; BB(0x008c61bd);
    /* 008c61bd: lea ecx, [esp + 0x1bc] */ r_ecx = (u32)(r_esp+0x1bcu);
    /* 008c61c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c61c5: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c61cbu); call_ind(t); }
    /* 008c61cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c61cc: push 0xa381fc */ { u32 v = 0xa381fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c61d1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c61d6u); f_008c94e0();
    /* 008c61d6: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c61dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c61df: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c61e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c61e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c61e4: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c61e9u); f_008c3720();
    /* 008c61e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c61ec: jmp 0x8c622e */ goto L_008c622e;
L_008c61ee:; BB(0x008c61ee);
    /* 008c61ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c61ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c61f0: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x8c61f6u); call_ind(t); }
    /* 008c61f6: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c61fc: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 008c6203: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6205: je 0x8c6227 */ if (fZ) goto L_008c6227;
L_008c6207:; BB(0x008c6207);
    /* 008c6207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6208: push 0xa381ec */ { u32 v = 0xa381ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c620d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6212u); f_008c94e0();
    /* 008c6212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6215: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6216: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c621b: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c621e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c621f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c6224u); f_008c3720();
    /* 008c6224: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c6227:; BB(0x008c6227);
    /* 008c6227: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6228: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c622eu); call_ind(t); }
L_008c622e:; BB(0x008c622e);
    /* 008c622e: push 0xa39030 */ { u32 v = 0xa39030u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6233: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6238u); f_008c94e0();
    /* 008c6238: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c623b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c623c: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x8c6242u); call_ind(t); }
    /* 008c6242: mov ebp, eax */ r_ebp = r_eax;
    /* 008c6244: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6246: je 0x8c6371 */ if (fZ) goto L_008c6371;
L_008c624c:; BB(0x008c624c);
    /* 008c624c: push 0xa39014 */ { u32 v = 0xa39014u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6251: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6256u); f_008c94e0();
    /* 008c6256: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c625a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c625b: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c6260u); f_008c5c80();
    /* 008c6260: push 0xa38ffc */ { u32 v = 0xa38ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6265: mov esi, eax */ r_esi = r_eax;
    /* 008c6267: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c626cu); f_008c94e0();
    /* 008c626c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c626f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6271: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c6276u); f_008c5c80();
    /* 008c6276: mov edi, eax */ r_edi = r_eax;
    /* 008c6278: push 0xa38fe8 */ { u32 v = 0xa38fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c627d: mov dword ptr [esp + 0xb0], edi */ W32((u32)(r_esp+0xb0u), r_edi);
    /* 008c6284: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6289u); f_008c94e0();
    /* 008c6289: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c628c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c628d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c628e: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c6293u); f_008c5c80();
    /* 008c6293: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6295: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 008c629c: je 0x8c636a */ if (fZ) goto L_008c636a;
L_008c62a2:; BB(0x008c62a2);
    /* 008c62a2: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c62a4: je 0x8c636a */ if (fZ) goto L_008c636a;
L_008c62aa:; BB(0x008c62aa);
    /* 008c62aa: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c62ac: je 0x8c636a */ if (fZ) goto L_008c636a;
L_008c62b2:; BB(0x008c62b2);
    /* 008c62b2: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 008c62b9: lea edx, [esp + 0x1bc] */ r_edx = (u32)(r_esp+0x1bcu);
    /* 008c62c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c62c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c62c2: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c62c4u); call_ind(t); }
    /* 008c62c4: mov esi, eax */ r_esi = r_eax;
    /* 008c62c6: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c62c8: je 0x8c636a */ if (fZ) goto L_008c636a;
L_008c62ce:; BB(0x008c62ce);
    /* 008c62ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c62cf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8c62d4u); f_008581c5();
    /* 008c62d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c62d7: mov edi, eax */ r_edi = r_eax;
    /* 008c62d9: mov eax, dword ptr [esp + 0xb0] */ r_eax = R32((u32)(r_esp+0xb0u));
    /* 008c62e0: lea ecx, [esp + 0x1bc] */ r_ecx = (u32)(r_esp+0x1bcu);
    /* 008c62e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c62e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c62e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c62ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c62eb: call dword ptr [esp + 0xbc] */ { u32 t = R32((u32)(r_esp+0xbcu)); r_esp -= 4; W32(r_esp, 0x8c62f2u); call_ind(t); }
    /* 008c62f2: lea edx, [esp + 0xb4] */ r_edx = (u32)(r_esp+0xb4u);
    /* 008c62f9: lea eax, [esp + 0xa8] */ r_eax = (u32)(r_esp+0xa8u);
    /* 008c6300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6302: push 0xa384f8 */ { u32 v = 0xa384f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6307: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6308: call dword ptr [esp + 0xb4] */ { u32 t = R32((u32)(r_esp+0xb4u)); r_esp -= 4; W32(r_esp, 0x8c630fu); call_ind(t); }
    /* 008c630f: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 008c6316: cmp dword ptr [eax], 0xfeef04bd */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xfeef04bdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c631c: jne 0x8c6361 */ if (!fZ) goto L_008c6361;
L_008c631e:; BB(0x008c631e);
    /* 008c631e: cmp dword ptr [0xaeaa28], ebx */ {  u32 a = R32((u32)(0xaeaa28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6324: je 0x8c6361 */ if (fZ) goto L_008c6361;
L_008c6326:; BB(0x008c6326);
    /* 008c6326: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008c6329: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c632b: mov cx, word ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xcu))) & 0xffffu);
    /* 008c632f: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008c6332: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6333: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6334: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008c6337: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6339: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 008c633d: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008c6340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6341: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6342: push 0xa390c8 */ { u32 v = 0xa390c8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6347: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c634cu); f_008c94e0();
    /* 008c634c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c634f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6350: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c6355: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c6358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6359: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c635eu); f_008c3720();
    /* 008c635e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c6361:; BB(0x008c6361);
    /* 008c6361: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6362: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8c6367u); f_00857e98();
    /* 008c6367: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c636a:; BB(0x008c636a);
    /* 008c636a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c636b: call dword ptr [0x8f8134] */ { u32 t = R32((u32)(0x8f8134u)); r_esp -= 4; W32(r_esp, 0x8c6371u); call_ind(t); }
L_008c6371:; BB(0x008c6371);
    /* 008c6371: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 008c6378: cmp eax, 0x18d10 */ {  u32 a = r_eax; u32 b = 0x18d10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c637d: jne 0x8c66d0 */ if (!fZ) goto L_008c66d0;
L_008c6383:; BB(0x008c6383);
    /* 008c6383: cmp dword ptr [0xaeaa28], ebx */ {  u32 a = R32((u32)(0xaeaa28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6389: je 0x8c63ab */ if (fZ) goto L_008c63ab;
L_008c638b:; BB(0x008c638b);
    /* 008c638b: push 0xa390ac */ { u32 v = 0xa390acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6390: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6395u); f_008c94e0();
    /* 008c6395: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c639b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c639e: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c63a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c63a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c63a3: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c63a8u); f_008c3720();
    /* 008c63a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c63ab:; BB(0x008c63ab);
    /* 008c63ab: mov al, 0xc7 */ r_eax = (r_eax & 0xffffff00u) | ((0xc7u) & 0xffu);
    /* 008c63ad: mov cl, 0xf2 */ r_ecx = (r_ecx & 0xffffff00u) | ((0xf2u) & 0xffu);
    /* 008c63af: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 008c63b3: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 008c63b7: mov al, 0x16 */ r_eax = (r_eax & 0xffffff00u) | ((0x16u) & 0xffu);
    /* 008c63b9: mov byte ptr [esp + 0x43], cl */ W8((u32)(r_esp+0x43u), (u8)r_ecx);
    /* 008c63bd: mov byte ptr [esp + 0x36], al */ W8((u32)(r_esp+0x36u), (u8)r_eax);
    /* 008c63c1: mov byte ptr [esp + 0x47], cl */ W8((u32)(r_esp+0x47u), (u8)r_ecx);
    /* 008c63c5: mov byte ptr [esp + 0x54], al */ W8((u32)(r_esp+0x54u), (u8)r_eax);
    /* 008c63c9: mov dl, 0xf5 */ r_edx = (r_edx & 0xffffff00u) | ((0xf5u) & 0xffu);
    /* 008c63cb: mov cl, 0xb5 */ r_ecx = (r_ecx & 0xffffff00u) | ((0xb5u) & 0xffu);
    /* 008c63cd: mov al, 0x77 */ r_eax = (r_eax & 0xffffff00u) | ((0x77u) & 0xffu);
    /* 008c63cf: mov byte ptr [esp + 0x10], 0x2a */ W8((u32)(r_esp+0x10u), 0x2au);
    /* 008c63d4: mov byte ptr [esp + 0x12], 0xe */ W8((u32)(r_esp+0x12u), 0xeu);
    /* 008c63d9: mov byte ptr [esp + 0x13], 0x10 */ W8((u32)(r_esp+0x13u), 0x10u);
    /* 008c63de: mov byte ptr [esp + 0x14], 6 */ W8((u32)(r_esp+0x14u), 0x6u);
    /* 008c63e3: mov byte ptr [esp + 0x15], 0xbe */ W8((u32)(r_esp+0x15u), 0xbeu);
    /* 008c63e8: mov byte ptr [esp + 0x16], 0xa7 */ W8((u32)(r_esp+0x16u), 0xa7u);
    /* 008c63ed: mov byte ptr [esp + 0x17], 0xcd */ W8((u32)(r_esp+0x17u), 0xcdu);
    /* 008c63f2: mov byte ptr [esp + 0x18], dl */ W8((u32)(r_esp+0x18u), (u8)r_edx);
    /* 008c63f6: mov byte ptr [esp + 0x19], 0xfa */ W8((u32)(r_esp+0x19u), 0xfau);
    /* 008c63fb: mov byte ptr [esp + 0x1a], 0x66 */ W8((u32)(r_esp+0x1au), 0x66u);
    /* 008c6400: mov byte ptr [esp + 0x1b], 0xf */ W8((u32)(r_esp+0x1bu), 0xfu);
    /* 008c6405: mov byte ptr [esp + 0x1c], 0x86 */ W8((u32)(r_esp+0x1cu), 0x86u);
    /* 008c640a: mov byte ptr [esp + 0x1d], 0xa3 */ W8((u32)(r_esp+0x1du), 0xa3u);
    /* 008c640f: mov byte ptr [esp + 0x1e], 0x8a */ W8((u32)(r_esp+0x1eu), 0x8au);
    /* 008c6414: mov byte ptr [esp + 0x1f], 0x41 */ W8((u32)(r_esp+0x1fu), 0x41u);
    /* 008c6419: mov byte ptr [esp + 0x20], 0x58 */ W8((u32)(r_esp+0x20u), 0x58u);
    /* 008c641e: mov byte ptr [esp + 0x22], 0xaf */ W8((u32)(r_esp+0x22u), 0xafu);
    /* 008c6423: mov byte ptr [esp + 0x23], 0x6e */ W8((u32)(r_esp+0x23u), 0x6eu);
    /* 008c6428: mov byte ptr [esp + 0x24], dl */ W8((u32)(r_esp+0x24u), (u8)r_edx);
    /* 008c642c: mov byte ptr [esp + 0x25], 0xc1 */ W8((u32)(r_esp+0x25u), 0xc1u);
    /* 008c6431: mov byte ptr [esp + 0x26], 0x92 */ W8((u32)(r_esp+0x26u), 0x92u);
    /* 008c6436: mov byte ptr [esp + 0x27], 0x3d */ W8((u32)(r_esp+0x27u), 0x3du);
    /* 008c643b: mov byte ptr [esp + 0x28], dl */ W8((u32)(r_esp+0x28u), (u8)r_edx);
    /* 008c643f: mov byte ptr [esp + 0x29], 0x56 */ W8((u32)(r_esp+0x29u), 0x56u);
    /* 008c6444: mov byte ptr [esp + 0x2a], 0xa8 */ W8((u32)(r_esp+0x2au), 0xa8u);
    /* 008c6449: mov byte ptr [esp + 0x2b], 0x81 */ W8((u32)(r_esp+0x2bu), 0x81u);
    /* 008c644e: mov byte ptr [esp + 0x2c], 0x48 */ W8((u32)(r_esp+0x2cu), 0x48u);
    /* 008c6453: mov byte ptr [esp + 0x2d], 0x2e */ W8((u32)(r_esp+0x2du), 0x2eu);
    /* 008c6458: mov byte ptr [esp + 0x2e], 0x89 */ W8((u32)(r_esp+0x2eu), 0x89u);
    /* 008c645d: mov byte ptr [esp + 0x2f], 0x7c */ W8((u32)(r_esp+0x2fu), 0x7cu);
    /* 008c6462: mov byte ptr [esp + 0x30], 4 */ W8((u32)(r_esp+0x30u), 0x4u);
    /* 008c6467: mov byte ptr [esp + 0x31], 0x36 */ W8((u32)(r_esp+0x31u), 0x36u);
    /* 008c646c: mov byte ptr [esp + 0x32], 0x53 */ W8((u32)(r_esp+0x32u), 0x53u);
    /* 008c6471: mov byte ptr [esp + 0x33], 0xe3 */ W8((u32)(r_esp+0x33u), 0xe3u);
    /* 008c6476: mov byte ptr [esp + 0x34], 0x64 */ W8((u32)(r_esp+0x34u), 0x64u);
    /* 008c647b: mov byte ptr [esp + 0x35], 0x79 */ W8((u32)(r_esp+0x35u), 0x79u);
    /* 008c6480: mov byte ptr [esp + 0x37], 0x34 */ W8((u32)(r_esp+0x37u), 0x34u);
    /* 008c6485: mov byte ptr [esp + 0x38], 0x7d */ W8((u32)(r_esp+0x38u), 0x7du);
    /* 008c648a: mov byte ptr [esp + 0x39], 0xe8 */ W8((u32)(r_esp+0x39u), 0xe8u);
    /* 008c648f: mov byte ptr [esp + 0x3a], 0xb0 */ W8((u32)(r_esp+0x3au), 0xb0u);
    /* 008c6494: mov byte ptr [esp + 0x3b], 0xae */ W8((u32)(r_esp+0x3bu), 0xaeu);
    /* 008c6499: mov byte ptr [esp + 0x3c], 0xd7 */ W8((u32)(r_esp+0x3cu), 0xd7u);
    /* 008c649e: mov byte ptr [esp + 0x3d], 0x3c */ W8((u32)(r_esp+0x3du), 0x3cu);
    /* 008c64a3: mov byte ptr [esp + 0x3e], 0xc5 */ W8((u32)(r_esp+0x3eu), 0xc5u);
    /* 008c64a8: mov byte ptr [esp + 0x3f], 0xeb */ W8((u32)(r_esp+0x3fu), 0xebu);
    /* 008c64ad: mov byte ptr [esp + 0x40], 0x7a */ W8((u32)(r_esp+0x40u), 0x7au);
    /* 008c64b2: mov byte ptr [esp + 0x41], 0x25 */ W8((u32)(r_esp+0x41u), 0x25u);
    /* 008c64b7: mov byte ptr [esp + 0x42], 0x2d */ W8((u32)(r_esp+0x42u), 0x2du);
    /* 008c64bc: mov byte ptr [esp + 0x44], 0xb8 */ W8((u32)(r_esp+0x44u), 0xb8u);
    /* 008c64c1: mov byte ptr [esp + 0x45], 0xe4 */ W8((u32)(r_esp+0x45u), 0xe4u);
    /* 008c64c6: mov byte ptr [esp + 0x46], 0xf4 */ W8((u32)(r_esp+0x46u), 0xf4u);
    /* 008c64cb: mov byte ptr [esp + 0x48], 0xcd */ W8((u32)(r_esp+0x48u), 0xcdu);
    /* 008c64d0: mov byte ptr [esp + 0x49], 0x95 */ W8((u32)(r_esp+0x49u), 0x95u);
    /* 008c64d5: mov byte ptr [esp + 0x4a], 0xb */ W8((u32)(r_esp+0x4au), 0xbu);
    /* 008c64da: mov byte ptr [esp + 0x4b], 0xdd */ W8((u32)(r_esp+0x4bu), 0xddu);
    /* 008c64df: mov byte ptr [esp + 0x4c], 0x4f */ W8((u32)(r_esp+0x4cu), 0x4fu);
    /* 008c64e4: mov byte ptr [esp + 0x4d], 0xa */ W8((u32)(r_esp+0x4du), 0xau);
    /* 008c64e9: mov byte ptr [esp + 0x4e], 0x9f */ W8((u32)(r_esp+0x4eu), 0x9fu);
    /* 008c64ee: mov byte ptr [esp + 0x4f], 0x27 */ W8((u32)(r_esp+0x4fu), 0x27u);
    /* 008c64f3: mov byte ptr [esp + 0x50], 0x19 */ W8((u32)(r_esp+0x50u), 0x19u);
    /* 008c64f8: mov byte ptr [esp + 0x51], cl */ W8((u32)(r_esp+0x51u), (u8)r_ecx);
    /* 008c64fc: mov byte ptr [esp + 0x52], 0xf6 */ W8((u32)(r_esp+0x52u), 0xf6u);
    /* 008c6501: mov byte ptr [esp + 0x53], 0x52 */ W8((u32)(r_esp+0x53u), 0x52u);
    /* 008c6506: mov byte ptr [esp + 0x55], al */ W8((u32)(r_esp+0x55u), (u8)r_eax);
    /* 008c650a: mov byte ptr [esp + 0x56], 1 */ W8((u32)(r_esp+0x56u), 0x1u);
    /* 008c650f: mov byte ptr [esp + 0x57], 0x2c */ W8((u32)(r_esp+0x57u), 0x2cu);
    /* 008c6514: mov byte ptr [esp + 0x58], 0xf6 */ W8((u32)(r_esp+0x58u), 0xf6u);
    /* 008c6519: mov byte ptr [esp + 0x59], 0xae */ W8((u32)(r_esp+0x59u), 0xaeu);
    /* 008c651e: mov byte ptr [esp + 0x5a], 0x9a */ W8((u32)(r_esp+0x5au), 0x9au);
    /* 008c6523: mov byte ptr [esp + 0x75], dl */ W8((u32)(r_esp+0x75u), (u8)r_edx);
    /* 008c6527: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c652b: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6530: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6531: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6533: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6534: mov byte ptr [esp + 0x6b], 0xd3 */ W8((u32)(r_esp+0x6bu), 0xd3u);
    /* 008c6539: mov byte ptr [esp + 0x6c], 0x7f */ W8((u32)(r_esp+0x6cu), 0x7fu);
    /* 008c653e: mov byte ptr [esp + 0x6d], 0xbf */ W8((u32)(r_esp+0x6du), 0xbfu);
    /* 008c6543: mov byte ptr [esp + 0x6e], 0x6a */ W8((u32)(r_esp+0x6eu), 0x6au);
    /* 008c6548: mov byte ptr [esp + 0x6f], 0x22 */ W8((u32)(r_esp+0x6fu), 0x22u);
    /* 008c654d: mov byte ptr [esp + 0x70], 0x91 */ W8((u32)(r_esp+0x70u), 0x91u);
    /* 008c6552: mov byte ptr [esp + 0x71], 0x6b */ W8((u32)(r_esp+0x71u), 0x6bu);
    /* 008c6557: mov byte ptr [esp + 0x72], 0xf3 */ W8((u32)(r_esp+0x72u), 0xf3u);
    /* 008c655c: mov byte ptr [esp + 0x73], 0xdb */ W8((u32)(r_esp+0x73u), 0xdbu);
    /* 008c6561: mov byte ptr [esp + 0x74], 0x93 */ W8((u32)(r_esp+0x74u), 0x93u);
    /* 008c6566: mov byte ptr [esp + 0x75], 0xd */ W8((u32)(r_esp+0x75u), 0xdu);
    /* 008c656b: mov byte ptr [esp + 0x76], 0x1c */ W8((u32)(r_esp+0x76u), 0x1cu);
    /* 008c6570: mov byte ptr [esp + 0x77], 0xd2 */ W8((u32)(r_esp+0x77u), 0xd2u);
    /* 008c6575: mov byte ptr [esp + 0x78], bl */ W8((u32)(r_esp+0x78u), (u8)r_ebx);
    /* 008c6579: mov byte ptr [esp + 0x79], cl */ W8((u32)(r_esp+0x79u), (u8)r_ecx);
    /* 008c657d: mov byte ptr [esp + 0x7a], 0xb8 */ W8((u32)(r_esp+0x7au), 0xb8u);
    /* 008c6582: mov byte ptr [esp + 0x7b], 0x14 */ W8((u32)(r_esp+0x7bu), 0x14u);
    /* 008c6587: mov byte ptr [esp + 0x7c], 0x1c */ W8((u32)(r_esp+0x7cu), 0x1cu);
    /* 008c658c: mov byte ptr [esp + 0x7d], 0x3e */ W8((u32)(r_esp+0x7du), 0x3eu);
    /* 008c6591: mov byte ptr [esp + 0x7e], 0x9e */ W8((u32)(r_esp+0x7eu), 0x9eu);
    /* 008c6596: mov byte ptr [esp + 0x7f], 0x94 */ W8((u32)(r_esp+0x7fu), 0x94u);
    /* 008c659b: mov byte ptr [esp + 0x80], 0x7b */ W8((u32)(r_esp+0x80u), 0x7bu);
    /* 008c65a3: mov byte ptr [esp + 0x81], 0xa9 */ W8((u32)(r_esp+0x81u), 0xa9u);
    /* 008c65ab: mov byte ptr [esp + 0x82], 0x8e */ W8((u32)(r_esp+0x82u), 0x8eu);
    /* 008c65b3: mov byte ptr [esp + 0x83], 0xc6 */ W8((u32)(r_esp+0x83u), 0xc6u);
    /* 008c65bb: mov byte ptr [esp + 0x84], 0x84 */ W8((u32)(r_esp+0x84u), 0x84u);
    /* 008c65c3: mov byte ptr [esp + 0x86], 0x2b */ W8((u32)(r_esp+0x86u), 0x2bu);
    /* 008c65cb: mov byte ptr [esp + 0x87], 0xfa */ W8((u32)(r_esp+0x87u), 0xfau);
    /* 008c65d3: mov byte ptr [esp + 0x88], cl */ W8((u32)(r_esp+0x88u), (u8)r_ecx);
    /* 008c65da: mov byte ptr [esp + 0x89], 0x95 */ W8((u32)(r_esp+0x89u), 0x95u);
    /* 008c65e2: mov byte ptr [esp + 0x8a], bl */ W8((u32)(r_esp+0x8au), (u8)r_ebx);
    /* 008c65e9: mov byte ptr [esp + 0x8b], 0xa5 */ W8((u32)(r_esp+0x8bu), 0xa5u);
    /* 008c65f1: mov byte ptr [esp + 0x8c], 0x95 */ W8((u32)(r_esp+0x8cu), 0x95u);
    /* 008c65f9: mov byte ptr [esp + 0x8d], 0xb2 */ W8((u32)(r_esp+0x8du), 0xb2u);
    /* 008c6601: mov byte ptr [esp + 0x8e], 0x65 */ W8((u32)(r_esp+0x8eu), 0x65u);
    /* 008c6609: mov byte ptr [esp + 0x8f], 0x8c */ W8((u32)(r_esp+0x8fu), 0x8cu);
    /* 008c6611: mov byte ptr [esp + 0x90], 0x31 */ W8((u32)(r_esp+0x90u), 0x31u);
    /* 008c6619: mov byte ptr [esp + 0x91], 0x19 */ W8((u32)(r_esp+0x91u), 0x19u);
    /* 008c6621: mov byte ptr [esp + 0x92], al */ W8((u32)(r_esp+0x92u), (u8)r_eax);
    /* 008c6628: mov byte ptr [esp + 0x93], bl */ W8((u32)(r_esp+0x93u), (u8)r_ebx);
    /* 008c662f: mov byte ptr [esp + 0x94], 0xcd */ W8((u32)(r_esp+0x94u), 0xcdu);
    /* 008c6637: mov byte ptr [esp + 0x95], 0x5b */ W8((u32)(r_esp+0x95u), 0x5bu);
    /* 008c663f: mov byte ptr [esp + 0x96], 0x4e */ W8((u32)(r_esp+0x96u), 0x4eu);
    /* 008c6647: mov byte ptr [esp + 0x97], 0x92 */ W8((u32)(r_esp+0x97u), 0x92u);
    /* 008c664f: mov byte ptr [esp + 0x98], 0x68 */ W8((u32)(r_esp+0x98u), 0x68u);
    /* 008c6657: mov byte ptr [esp + 0x99], 0xe4 */ W8((u32)(r_esp+0x99u), 0xe4u);
    /* 008c665f: mov byte ptr [esp + 0x9a], 0x42 */ W8((u32)(r_esp+0x9au), 0x42u);
    /* 008c6667: mov byte ptr [esp + 0x9b], 0x66 */ W8((u32)(r_esp+0x9bu), 0x66u);
    /* 008c666f: mov byte ptr [esp + 0x9c], 0x17 */ W8((u32)(r_esp+0x9cu), 0x17u);
    /* 008c6677: mov byte ptr [esp + 0x9d], cl */ W8((u32)(r_esp+0x9du), (u8)r_ecx);
    /* 008c667e: mov byte ptr [esp + 0x9e], 0xd4 */ W8((u32)(r_esp+0x9eu), 0xd4u);
    /* 008c6686: mov byte ptr [esp + 0x9f], 0x93 */ W8((u32)(r_esp+0x9fu), 0x93u);
    /* 008c668e: mov byte ptr [esp + 0xa0], bl */ W8((u32)(r_esp+0xa0u), (u8)r_ebx);
    /* 008c6695: mov byte ptr [esp + 0xa1], bl */ W8((u32)(r_esp+0xa1u), (u8)r_ebx);
    /* 008c669c: mov byte ptr [esp + 0xa2], bl */ W8((u32)(r_esp+0xa2u), (u8)r_ebx);
    /* 008c66a3: mov byte ptr [esp + 0xa3], bl */ W8((u32)(r_esp+0xa3u), (u8)r_ebx);
    /* 008c66aa: mov byte ptr [esp + 0xa4], bl */ W8((u32)(r_esp+0xa4u), (u8)r_ebx);
    /* 008c66b1: mov byte ptr [esp + 0xa5], bl */ W8((u32)(r_esp+0xa5u), (u8)r_ebx);
    /* 008c66b8: mov byte ptr [esp + 0xa6], bl */ W8((u32)(r_esp+0xa6u), (u8)r_ebx);
    /* 008c66bf: mov byte ptr [esp + 0xa7], bl */ W8((u32)(r_esp+0xa7u), (u8)r_ebx);
    /* 008c66c6: push 0xa3909c */ { u32 v = 0xa3909cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c66cb: jmp 0x8c6a28 */ goto L_008c6a28;
L_008c66d0:; BB(0x008c66d0);
    /* 008c66d0: cmp eax, 0x17110 */ {  u32 a = r_eax; u32 b = 0x17110u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c66d5: jne 0x8c6a41 */ if (!fZ) goto L_008c6a41;
L_008c66db:; BB(0x008c66db);
    /* 008c66db: cmp dword ptr [0xaeaa28], ebx */ {  u32 a = R32((u32)(0xaeaa28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c66e1: je 0x8c6703 */ if (fZ) goto L_008c6703;
L_008c66e3:; BB(0x008c66e3);
    /* 008c66e3: push 0xa39080 */ { u32 v = 0xa39080u; r_esp -= 4; W32(r_esp, v); }
    /* 008c66e8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c66edu); f_008c94e0();
    /* 008c66ed: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c66f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c66f6: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c66f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c66fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c66fb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c6700u); f_008c3720();
    /* 008c6700: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c6703:; BB(0x008c6703);
    /* 008c6703: mov dl, 7 */ r_edx = (r_edx & 0xffffff00u) | ((0x7u) & 0xffu);
    /* 008c6705: mov al, 0x77 */ r_eax = (r_eax & 0xffffff00u) | ((0x77u) & 0xffu);
    /* 008c6707: mov byte ptr [esp + 0x23], dl */ W8((u32)(r_esp+0x23u), (u8)r_edx);
    /* 008c670b: mov byte ptr [esp + 0x38], dl */ W8((u32)(r_esp+0x38u), (u8)r_edx);
    /* 008c670f: mov byte ptr [esp + 0x3f], dl */ W8((u32)(r_esp+0x3fu), (u8)r_edx);
    /* 008c6713: mov cl, 0xf0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0xf0u) & 0xffu);
    /* 008c6715: mov dl, 0x49 */ r_edx = (r_edx & 0xffffff00u) | ((0x49u) & 0xffu);
    /* 008c6717: mov byte ptr [esp + 0x10], 0x5f */ W8((u32)(r_esp+0x10u), 0x5fu);
    /* 008c671c: mov byte ptr [esp + 0x11], 0x71 */ W8((u32)(r_esp+0x11u), 0x71u);
    /* 008c6721: mov byte ptr [esp + 0x12], 0x69 */ W8((u32)(r_esp+0x12u), 0x69u);
    /* 008c6726: mov byte ptr [esp + 0x13], 0x53 */ W8((u32)(r_esp+0x13u), 0x53u);
    /* 008c672b: mov byte ptr [esp + 0x14], 0x8a */ W8((u32)(r_esp+0x14u), 0x8au);
    /* 008c6730: mov byte ptr [esp + 0x15], 0x8e */ W8((u32)(r_esp+0x15u), 0x8eu);
    /* 008c6735: mov byte ptr [esp + 0x16], 0x54 */ W8((u32)(r_esp+0x16u), 0x54u);
    /* 008c673a: mov byte ptr [esp + 0x17], 0xac */ W8((u32)(r_esp+0x17u), 0xacu);
    /* 008c673f: mov byte ptr [esp + 0x18], 9 */ W8((u32)(r_esp+0x18u), 0x9u);
    /* 008c6744: mov byte ptr [esp + 0x19], 0x3f */ W8((u32)(r_esp+0x19u), 0x3fu);
    /* 008c6749: mov byte ptr [esp + 0x1a], 0x65 */ W8((u32)(r_esp+0x1au), 0x65u);
    /* 008c674e: mov byte ptr [esp + 0x1b], 0x5a */ W8((u32)(r_esp+0x1bu), 0x5au);
    /* 008c6753: mov byte ptr [esp + 0x1c], 0x26 */ W8((u32)(r_esp+0x1cu), 0x26u);
    /* 008c6758: mov byte ptr [esp + 0x1d], 0x8d */ W8((u32)(r_esp+0x1du), 0x8du);
    /* 008c675d: mov byte ptr [esp + 0x1e], al */ W8((u32)(r_esp+0x1eu), (u8)r_eax);
    /* 008c6761: mov byte ptr [esp + 0x1f], 0x15 */ W8((u32)(r_esp+0x1fu), 0x15u);
    /* 008c6766: mov byte ptr [esp + 0x20], 0x9e */ W8((u32)(r_esp+0x20u), 0x9eu);
    /* 008c676b: mov byte ptr [esp + 0x21], 0x68 */ W8((u32)(r_esp+0x21u), 0x68u);
    /* 008c6770: mov byte ptr [esp + 0x22], 0xbb */ W8((u32)(r_esp+0x22u), 0xbbu);
    /* 008c6775: mov byte ptr [esp + 0x24], 0xed */ W8((u32)(r_esp+0x24u), 0xedu);
    /* 008c677a: mov byte ptr [esp + 0x25], 0x8f */ W8((u32)(r_esp+0x25u), 0x8fu);
    /* 008c677f: mov byte ptr [esp + 0x26], cl */ W8((u32)(r_esp+0x26u), (u8)r_ecx);
    /* 008c6783: mov byte ptr [esp + 0x27], 0xb7 */ W8((u32)(r_esp+0x27u), 0xb7u);
    /* 008c6788: mov byte ptr [esp + 0x28], 0xf1 */ W8((u32)(r_esp+0x28u), 0xf1u);
    /* 008c678d: mov byte ptr [esp + 0x29], 0x99 */ W8((u32)(r_esp+0x29u), 0x99u);
    /* 008c6792: mov byte ptr [esp + 0x2a], 5 */ W8((u32)(r_esp+0x2au), 0x5u);
    /* 008c6797: mov byte ptr [esp + 0x2b], 0x15 */ W8((u32)(r_esp+0x2bu), 0x15u);
    /* 008c679c: mov byte ptr [esp + 0x2c], 0x80 */ W8((u32)(r_esp+0x2cu), 0x80u);
    /* 008c67a1: mov byte ptr [esp + 0x2d], 0x64 */ W8((u32)(r_esp+0x2du), 0x64u);
    /* 008c67a6: mov byte ptr [esp + 0x2e], 0xa8 */ W8((u32)(r_esp+0x2eu), 0xa8u);
    /* 008c67ab: mov byte ptr [esp + 0x2f], 0xd8 */ W8((u32)(r_esp+0x2fu), 0xd8u);
    /* 008c67b0: mov byte ptr [esp + 0x30], 0x87 */ W8((u32)(r_esp+0x30u), 0x87u);
    /* 008c67b5: mov byte ptr [esp + 0x31], 0xc3 */ W8((u32)(r_esp+0x31u), 0xc3u);
    /* 008c67ba: mov byte ptr [esp + 0x32], 0x58 */ W8((u32)(r_esp+0x32u), 0x58u);
    /* 008c67bf: mov byte ptr [esp + 0x33], 0xa9 */ W8((u32)(r_esp+0x33u), 0xa9u);
    /* 008c67c4: mov byte ptr [esp + 0x34], 0xce */ W8((u32)(r_esp+0x34u), 0xceu);
    /* 008c67c9: mov byte ptr [esp + 0x35], 0x26 */ W8((u32)(r_esp+0x35u), 0x26u);
    /* 008c67ce: mov byte ptr [esp + 0x36], 0xfe */ W8((u32)(r_esp+0x36u), 0xfeu);
    /* 008c67d3: mov byte ptr [esp + 0x37], 0xb3 */ W8((u32)(r_esp+0x37u), 0xb3u);
    /* 008c67d8: mov byte ptr [esp + 0x39], 0xd7 */ W8((u32)(r_esp+0x39u), 0xd7u);
    /* 008c67dd: mov byte ptr [esp + 0x3a], 0xa3 */ W8((u32)(r_esp+0x3au), 0xa3u);
    /* 008c67e2: mov byte ptr [esp + 0x3b], 0x81 */ W8((u32)(r_esp+0x3bu), 0x81u);
    /* 008c67e7: mov byte ptr [esp + 0x3c], 0xbe */ W8((u32)(r_esp+0x3cu), 0xbeu);
    /* 008c67ec: mov byte ptr [esp + 0x3d], 0xb8 */ W8((u32)(r_esp+0x3du), 0xb8u);
    /* 008c67f1: mov byte ptr [esp + 0x3e], 0x6e */ W8((u32)(r_esp+0x3eu), 0x6eu);
    /* 008c67f6: mov byte ptr [esp + 0x40], 0x15 */ W8((u32)(r_esp+0x40u), 0x15u);
    /* 008c67fb: mov byte ptr [esp + 0x41], 0x68 */ W8((u32)(r_esp+0x41u), 0x68u);
    /* 008c6800: mov byte ptr [esp + 0x42], 0x44 */ W8((u32)(r_esp+0x42u), 0x44u);
    /* 008c6805: mov byte ptr [esp + 0x43], 0x17 */ W8((u32)(r_esp+0x43u), 0x17u);
    /* 008c680a: mov byte ptr [esp + 0x44], 0xbe */ W8((u32)(r_esp+0x44u), 0xbeu);
    /* 008c680f: mov byte ptr [esp + 0x45], 0x81 */ W8((u32)(r_esp+0x45u), 0x81u);
    /* 008c6814: mov byte ptr [esp + 0x46], 0x80 */ W8((u32)(r_esp+0x46u), 0x80u);
    /* 008c6819: mov byte ptr [esp + 0x47], 0x75 */ W8((u32)(r_esp+0x47u), 0x75u);
    /* 008c681e: mov byte ptr [esp + 0x48], 0xa1 */ W8((u32)(r_esp+0x48u), 0xa1u);
    /* 008c6823: mov byte ptr [esp + 0x49], 0xdb */ W8((u32)(r_esp+0x49u), 0xdbu);
    /* 008c6828: mov byte ptr [esp + 0x4a], 0xab */ W8((u32)(r_esp+0x4au), 0xabu);
    /* 008c682d: mov byte ptr [esp + 0x4b], 0x21 */ W8((u32)(r_esp+0x4bu), 0x21u);
    /* 008c6832: mov byte ptr [esp + 0x4c], 0xd1 */ W8((u32)(r_esp+0x4cu), 0xd1u);
    /* 008c6837: mov byte ptr [esp + 0x4d], 0x1f */ W8((u32)(r_esp+0x4du), 0x1fu);
    /* 008c683c: mov byte ptr [esp + 0x4e], 0xbc */ W8((u32)(r_esp+0x4eu), 0xbcu);
    /* 008c6841: mov byte ptr [esp + 0x4f], 0x9c */ W8((u32)(r_esp+0x4fu), 0x9cu);
    /* 008c6846: mov byte ptr [esp + 0x50], 0x1d */ W8((u32)(r_esp+0x50u), 0x1du);
    /* 008c684b: mov byte ptr [esp + 0x51], dl */ W8((u32)(r_esp+0x51u), (u8)r_edx);
    /* 008c684f: mov byte ptr [esp + 0x52], cl */ W8((u32)(r_esp+0x52u), (u8)r_ecx);
    /* 008c6853: mov byte ptr [esp + 0x53], 0xe5 */ W8((u32)(r_esp+0x53u), 0xe5u);
    /* 008c6858: mov byte ptr [esp + 0x54], 0xdd */ W8((u32)(r_esp+0x54u), 0xddu);
    /* 008c685d: mov byte ptr [esp + 0x55], dl */ W8((u32)(r_esp+0x55u), (u8)r_edx);
    /* 008c6861: mov byte ptr [esp + 0x56], 0x7f */ W8((u32)(r_esp+0x56u), 0x7fu);
    /* 008c6866: mov byte ptr [esp + 0x57], 0xb5 */ W8((u32)(r_esp+0x57u), 0xb5u);
    /* 008c686b: mov byte ptr [esp + 0x58], 0xe4 */ W8((u32)(r_esp+0x58u), 0xe4u);
    /* 008c6870: mov byte ptr [esp + 0x59], 9 */ W8((u32)(r_esp+0x59u), 0x9u);
    /* 008c6875: mov byte ptr [esp + 0x5a], cl */ W8((u32)(r_esp+0x5au), (u8)r_ecx);
    /* 008c6879: mov byte ptr [esp + 0x5b], 0x39 */ W8((u32)(r_esp+0x5bu), 0x39u);
    /* 008c687e: mov byte ptr [esp + 0x5c], 0x94 */ W8((u32)(r_esp+0x5cu), 0x94u);
    /* 008c6883: mov dl, 0x20 */ r_edx = (r_edx & 0xffffff00u) | ((0x20u) & 0xffu);
    /* 008c6885: mov cl, 0x2a */ r_ecx = (r_ecx & 0xffffff00u) | ((0x2au) & 0xffu);
    /* 008c6887: mov byte ptr [esp + 0x6a], dl */ W8((u32)(r_esp+0x6au), (u8)r_edx);
    /* 008c688b: mov byte ptr [esp + 0x8c], dl */ W8((u32)(r_esp+0x8cu), (u8)r_edx);
    /* 008c6892: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c6896: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 008c689b: mov byte ptr [esp + 0x61], cl */ W8((u32)(r_esp+0x61u), (u8)r_ecx);
    /* 008c689f: mov byte ptr [esp + 0x7a], cl */ W8((u32)(r_esp+0x7au), (u8)r_ecx);
    /* 008c68a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c68a4: mov cl, 0xa0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0xa0u) & 0xffu);
    /* 008c68a6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c68a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c68a9: mov byte ptr [esp + 0x6e], 0x6b */ W8((u32)(r_esp+0x6eu), 0x6bu);
    /* 008c68ae: mov byte ptr [esp + 0x6f], 0x83 */ W8((u32)(r_esp+0x6fu), 0x83u);
    /* 008c68b3: mov byte ptr [esp + 0x70], 0xf */ W8((u32)(r_esp+0x70u), 0xfu);
    /* 008c68b8: mov byte ptr [esp + 0x71], 0xdb */ W8((u32)(r_esp+0x71u), 0xdbu);
    /* 008c68bd: mov byte ptr [esp + 0x72], 0x56 */ W8((u32)(r_esp+0x72u), 0x56u);
    /* 008c68c2: mov byte ptr [esp + 0x73], 0xe */ W8((u32)(r_esp+0x73u), 0xeu);
    /* 008c68c7: mov byte ptr [esp + 0x74], 0xa3 */ W8((u32)(r_esp+0x74u), 0xa3u);
    /* 008c68cc: mov byte ptr [esp + 0x75], 0x61 */ W8((u32)(r_esp+0x75u), 0x61u);
    /* 008c68d1: mov byte ptr [esp + 0x76], 0x9f */ W8((u32)(r_esp+0x76u), 0x9fu);
    /* 008c68d6: mov byte ptr [esp + 0x77], 0x12 */ W8((u32)(r_esp+0x77u), 0x12u);
    /* 008c68db: mov byte ptr [esp + 0x78], 0xd4 */ W8((u32)(r_esp+0x78u), 0xd4u);
    /* 008c68e0: mov byte ptr [esp + 0x79], 0xd7 */ W8((u32)(r_esp+0x79u), 0xd7u);
    /* 008c68e5: mov byte ptr [esp + 0x7b], 0x90 */ W8((u32)(r_esp+0x7bu), 0x90u);
    /* 008c68ea: mov byte ptr [esp + 0x7c], 0x54 */ W8((u32)(r_esp+0x7cu), 0x54u);
    /* 008c68ef: mov byte ptr [esp + 0x7d], 0x9b */ W8((u32)(r_esp+0x7du), 0x9bu);
    /* 008c68f4: mov byte ptr [esp + 0x7e], 0xc6 */ W8((u32)(r_esp+0x7eu), 0xc6u);
    /* 008c68f9: mov byte ptr [esp + 0x7f], 0x99 */ W8((u32)(r_esp+0x7fu), 0x99u);
    /* 008c68fe: mov byte ptr [esp + 0x80], 0xc */ W8((u32)(r_esp+0x80u), 0xcu);
    /* 008c6906: mov byte ptr [esp + 0x81], 0x44 */ W8((u32)(r_esp+0x81u), 0x44u);
    /* 008c690e: mov byte ptr [esp + 0x82], 3 */ W8((u32)(r_esp+0x82u), 0x3u);
    /* 008c6916: mov byte ptr [esp + 0x83], 0xd5 */ W8((u32)(r_esp+0x83u), 0xd5u);
    /* 008c691e: mov byte ptr [esp + 0x84], 0x1b */ W8((u32)(r_esp+0x84u), 0x1bu);
    /* 008c6926: mov byte ptr [esp + 0x85], 0x9a */ W8((u32)(r_esp+0x85u), 0x9au);
    /* 008c692e: mov byte ptr [esp + 0x87], cl */ W8((u32)(r_esp+0x87u), (u8)r_ecx);
    /* 008c6935: mov byte ptr [esp + 0x88], 0xa2 */ W8((u32)(r_esp+0x88u), 0xa2u);
    /* 008c693d: mov byte ptr [esp + 0x89], 0x8c */ W8((u32)(r_esp+0x89u), 0x8cu);
    /* 008c6945: mov byte ptr [esp + 0x8a], 0x1c */ W8((u32)(r_esp+0x8au), 0x1cu);
    /* 008c694d: mov byte ptr [esp + 0x8b], 0xf6 */ W8((u32)(r_esp+0x8bu), 0xf6u);
    /* 008c6955: mov byte ptr [esp + 0x8c], 0x68 */ W8((u32)(r_esp+0x8cu), 0x68u);
    /* 008c695d: mov byte ptr [esp + 0x8d], 0xa5 */ W8((u32)(r_esp+0x8du), 0xa5u);
    /* 008c6965: mov byte ptr [esp + 0x8e], 0x57 */ W8((u32)(r_esp+0x8eu), 0x57u);
    /* 008c696d: mov byte ptr [esp + 0x8f], 0x2e */ W8((u32)(r_esp+0x8fu), 0x2eu);
    /* 008c6975: mov byte ptr [esp + 0x90], 0x11 */ W8((u32)(r_esp+0x90u), 0x11u);
    /* 008c697d: mov byte ptr [esp + 0x91], 0x40 */ W8((u32)(r_esp+0x91u), 0x40u);
    /* 008c6985: mov byte ptr [esp + 0x92], 0xa5 */ W8((u32)(r_esp+0x92u), 0xa5u);
    /* 008c698d: mov byte ptr [esp + 0x93], 0x8f */ W8((u32)(r_esp+0x93u), 0x8fu);
    /* 008c6995: mov byte ptr [esp + 0x94], al */ W8((u32)(r_esp+0x94u), (u8)r_eax);
    /* 008c699c: mov byte ptr [esp + 0x95], 0x71 */ W8((u32)(r_esp+0x95u), 0x71u);
    /* 008c69a4: mov byte ptr [esp + 0x96], 0xec */ W8((u32)(r_esp+0x96u), 0xecu);
    /* 008c69ac: mov byte ptr [esp + 0x97], 0x6a */ W8((u32)(r_esp+0x97u), 0x6au);
    /* 008c69b4: mov byte ptr [esp + 0x98], 0x69 */ W8((u32)(r_esp+0x98u), 0x69u);
    /* 008c69bc: mov byte ptr [esp + 0x99], cl */ W8((u32)(r_esp+0x99u), (u8)r_ecx);
    /* 008c69c3: mov byte ptr [esp + 0x9a], 0xcb */ W8((u32)(r_esp+0x9au), 0xcbu);
    /* 008c69cb: mov byte ptr [esp + 0x9b], 0x1e */ W8((u32)(r_esp+0x9bu), 0x1eu);
    /* 008c69d3: mov byte ptr [esp + 0x9d], 0x8e */ W8((u32)(r_esp+0x9du), 0x8eu);
    /* 008c69db: mov byte ptr [esp + 0x9e], 0xe0 */ W8((u32)(r_esp+0x9eu), 0xe0u);
    /* 008c69e3: mov byte ptr [esp + 0x9f], 5 */ W8((u32)(r_esp+0x9fu), 0x5u);
    /* 008c69eb: mov byte ptr [esp + 0xa0], bl */ W8((u32)(r_esp+0xa0u), (u8)r_ebx);
    /* 008c69f2: mov byte ptr [esp + 0xa1], bl */ W8((u32)(r_esp+0xa1u), (u8)r_ebx);
    /* 008c69f9: mov byte ptr [esp + 0xa2], bl */ W8((u32)(r_esp+0xa2u), (u8)r_ebx);
    /* 008c6a00: mov byte ptr [esp + 0xa3], bl */ W8((u32)(r_esp+0xa3u), (u8)r_ebx);
    /* 008c6a07: mov byte ptr [esp + 0xa4], bl */ W8((u32)(r_esp+0xa4u), (u8)r_ebx);
    /* 008c6a0e: mov byte ptr [esp + 0xa5], bl */ W8((u32)(r_esp+0xa5u), (u8)r_ebx);
    /* 008c6a15: mov byte ptr [esp + 0xa6], bl */ W8((u32)(r_esp+0xa6u), (u8)r_ebx);
    /* 008c6a1c: mov byte ptr [esp + 0xa7], bl */ W8((u32)(r_esp+0xa7u), (u8)r_ebx);
    /* 008c6a23: push 0xa39070 */ { u32 v = 0xa39070u; r_esp -= 4; W32(r_esp, v); }
L_008c6a28:; BB(0x008c6a28);
    /* 008c6a28: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6a2du); f_008c94e0();
    /* 008c6a2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a31: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 008c6a38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a39: call dword ptr [0x8f8010] */ { u32 t = R32((u32)(0x8f8010u)); r_esp -= 4; W32(r_esp, 0x8c6a3fu); call_ind(t); }
    /* 008c6a3f: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008c6a41:; BB(0x008c6a41);
    /* 008c6a41: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 008c6a48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a49: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c6a4fu); call_ind(t); }
L_008c6a4f:; BB(0x008c6a4f);
    /* 008c6a4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c6a50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c6a51: mov al, bl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008c6a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c6a54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6a55: add esp, 0x2b0 */ {  u32 a = r_esp; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c6a5b: ret  */ FN_RET(0x008c5fd0); r_esp += 4; return;
}

