#include "protos.h"

void f_006cd000(void)
{
    FN_ENTER(0x006cd000);
    /* 006cd000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cd001: mov ebp, esp */ r_ebp = r_esp;
    /* 006cd003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cd005: push 0x8eda80 */ { u32 v = 0x8eda80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd00a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cd010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd011: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cd018: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cd01b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cd01e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cd021: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cd024: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cd027: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd029: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006cd030: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cd035u); f_005caba4();
    /* 006cd035: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd036: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006cd039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd03b: je 0x6cd065 */ if (fZ) goto L_006cd065;
L_006cd03d:; BB(0x006cd03d);
    /* 006cd03d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006cd044: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cd04b: push 0x6cc2b0 */ { u32 v = 0x6cc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd050: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd056: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cd059: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cd05eu); f_00788938();
    /* 006cd05e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006cd065:; BB(0x006cd065);
    /* 006cd065: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cd068: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cd06f: mov esp, ebp */ r_esp = r_ebp;
    /* 006cd071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cd072: ret  */ FN_RET(0x006cd000); r_esp += 4; return;
}

void f_006cd074(void) /* sub_6CD074 */
{
    FN_ENTER(0x006cd074);
    /* 006cd074: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cd077: mov eax, dword ptr [0xa955e0] */ r_eax = R32((u32)(0xa955e0u));
    /* 006cd07c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd07f: jne 0x6cd085 */ if (!fZ) goto L_006cd085;
L_006cd081:; BB(0x006cd081);
    /* 006cd081: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cd084: ret  */ FN_RET(0x006cd074); r_esp += 4; return;
L_006cd085:; BB(0x006cd085);
    /* 006cd085: call 0x6d04e0 */ r_esp -= 4; W32(r_esp, 0x6cd08au); f_006d04e0();
    /* 006cd08a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd08c: je 0x6cd0ef */ if (fZ) goto L_006cd0ef;
L_006cd08e:; BB(0x006cd08e);
    /* 006cd08e: push dword ptr [0xa95fc4] */ { u32 v = R32((u32)(0xa95fc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd094: push dword ptr [0xa95fc8] */ { u32 v = R32((u32)(0xa95fc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd09a: call 0x6d0488 */ r_esp -= 4; W32(r_esp, 0x6cd09fu); f_006d0488();
    /* 006cd09f: push dword ptr [0xa96024] */ { u32 v = R32((u32)(0xa96024u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd0a5: push dword ptr [0xa96028] */ { u32 v = R32((u32)(0xa96028u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd0ab: call 0x6d04b8 */ r_esp -= 4; W32(r_esp, 0x6cd0b0u); f_006d04b8();
    /* 006cd0b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd0b3: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 006cd0b8: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 006cd0c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd0c4: je 0x6cd0d2 */ if (fZ) goto L_006cd0d2;
L_006cd0c6:; BB(0x006cd0c6);
    /* 006cd0c6: mov dword ptr [0xa955e0], 4 */ W32((u32)(0xa955e0u), 0x4u);
    /* 006cd0d0: jmp 0x6cd0dc */ goto L_006cd0dc;
L_006cd0d2:; BB(0x006cd0d2);
    /* 006cd0d2: mov dword ptr [0xa955e0], 2 */ W32((u32)(0xa955e0u), 0x2u);
L_006cd0dc:; BB(0x006cd0dc);
    /* 006cd0dc: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6cd0e1u); f_007a6160();
    /* 006cd0e1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd0e7: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6cd0ecu); f_00717ed8();
    /* 006cd0ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd0ed: jmp 0x6cd150 */ goto L_006cd150;
L_006cd0ef:; BB(0x006cd0ef);
    /* 006cd0ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cd0f1: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 006cd0f6: mov dword ptr [0xa955e0], eax */ W32((u32)(0xa955e0u), r_eax);
    /* 006cd0fb: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x6cd100u); f_007a6154();
    /* 006cd100: mov eax, dword ptr [0xa95fc8] */ r_eax = R32((u32)(0xa95fc8u));
    /* 006cd105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd107: je 0x6cd11a */ if (fZ) goto L_006cd11a;
L_006cd109:; BB(0x006cd109);
    /* 006cd109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd10a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6cd10fu); f_00857e98();
    /* 006cd10f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd110: mov dword ptr [0xa95fc8], 0 */ W32((u32)(0xa95fc8u), 0x0u);
L_006cd11a:; BB(0x006cd11a);
    /* 006cd11a: mov eax, dword ptr [0xa96028] */ r_eax = R32((u32)(0xa96028u));
    /* 006cd11f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd121: je 0x6cd134 */ if (fZ) goto L_006cd134;
L_006cd123:; BB(0x006cd123);
    /* 006cd123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd124: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6cd129u); f_00857e98();
    /* 006cd129: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd12a: mov dword ptr [0xa96028], 0 */ W32((u32)(0xa96028u), 0x0u);
L_006cd134:; BB(0x006cd134);
    /* 006cd134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cd136: mov dword ptr [0xa9607c], eax */ W32((u32)(0xa9607cu), r_eax);
    /* 006cd13b: mov dword ptr [0xa96078], eax */ W32((u32)(0xa96078u), r_eax);
    /* 006cd140: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 006cd145: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd147: je 0x6cd150 */ if (fZ) goto L_006cd150;
L_006cd149:; BB(0x006cd149);
    /* 006cd149: mov dword ptr [eax + 0x20], 0xb */ W32((u32)(r_eax+0x20u), 0xbu);
L_006cd150:; BB(0x006cd150);
    /* 006cd150: mov ecx, dword ptr [0xa96074] */ r_ecx = R32((u32)(0xa96074u));
    /* 006cd156: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd158: je 0x6cd169 */ if (fZ) goto L_006cd169;
L_006cd15a:; BB(0x006cd15a);
    /* 006cd15a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd15fu); f_007127b0();
    /* 006cd15f: mov dword ptr [0xa96074], 0 */ W32((u32)(0xa96074u), 0x0u);
L_006cd169:; BB(0x006cd169);
    /* 006cd169: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006cd16f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd171: je 0x6cd182 */ if (fZ) goto L_006cd182;
L_006cd173:; BB(0x006cd173);
    /* 006cd173: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd178u); f_007127b0();
    /* 006cd178: mov dword ptr [0xa96070], 0 */ W32((u32)(0xa96070u), 0x0u);
L_006cd182:; BB(0x006cd182);
    /* 006cd182: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006cd188: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd18a: je 0x6cd19b */ if (fZ) goto L_006cd19b;
L_006cd18c:; BB(0x006cd18c);
    /* 006cd18c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd191u); f_007127b0();
    /* 006cd191: mov dword ptr [0xa9606c], 0 */ W32((u32)(0xa9606cu), 0x0u);
L_006cd19b:; BB(0x006cd19b);
    /* 006cd19b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006cd1a0: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x6cd1a5u); f_008181c4();
    /* 006cd1a5: mov dword ptr [0xa96060], 0 */ W32((u32)(0xa96060u), 0x0u);
    /* 006cd1af: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006cd1b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cd1b5: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006cd1b8: mov ebx, eax */ r_ebx = r_eax;
L_006cd1ba:; BB(0x006cd1ba);
    /* 006cd1ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd1bb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cd1c0u); f_0068d5a8();
    /* 006cd1c0: mov esi, eax */ r_esi = r_eax;
    /* 006cd1c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd1c5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd1c7: je 0x6cd1d7 */ if (fZ) goto L_006cd1d7;
L_006cd1c9:; BB(0x006cd1c9);
    /* 006cd1c9: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd1cb: call 0x694308 */ r_esp -= 4; W32(r_esp, 0x6cd1d0u); f_00694308();
    /* 006cd1d0: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd1d2: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x6cd1d7u); f_00693240();
L_006cd1d7:; BB(0x006cd1d7);
    /* 006cd1d7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cd1da: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cd1dd: jl 0x6cd1ba */ if ((fS!=fO)) goto L_006cd1ba;
L_006cd1df:; BB(0x006cd1df);
    /* 006cd1df: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006cd1e3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006cd1e6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd1ec: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6cd1f1u); f_00717ed8();
    /* 006cd1f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cd1f4: ret  */ FN_RET(0x006cd074); r_esp += 4; return;
}

void f_006cd1f8(void) /* sub_6CD1F8 */
{
    FN_ENTER(0x006cd1f8);
    /* 006cd1f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd1f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cd1fb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd1ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd201: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6cd206u); f_008193cc();
    /* 006cd206: mov dword ptr [ebx], 0xb3bda0 */ W32((u32)(r_ebx), 0xb3bda0u);
    /* 006cd20c: mov edx, dword ptr [0x9cecf8] */ r_edx = R32((u32)(0x9cecf8u));
    /* 006cd212: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006cd215: mov eax, ebx */ r_eax = r_ebx;
    /* 006cd217: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd218: ret 4 */ FN_RET(0x006cd1f8); r_esp += 8; return;
}

void f_006cd21c(void) /* sub_6CD21C */
{
    FN_ENTER(0x006cd21c);
    /* 006cd21c: mov eax, dword ptr [0xa96070] */ r_eax = R32((u32)(0xa96070u));
    /* 006cd221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd223: je 0x6cd26a */ if (fZ) goto L_006cd26a;
L_006cd225:; BB(0x006cd225);
    /* 006cd225: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6cd22au); f_00694c6c();
    /* 006cd22a: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd230: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006cd233: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cd235: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cd237: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cd239: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006cd240: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6cd245u); f_007c1160();
    /* 006cd245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd247: je 0x6cd26a */ if (fZ) goto L_006cd26a;
L_006cd249:; BB(0x006cd249);
    /* 006cd249: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006cd24f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd254u); f_007127b0();
    /* 006cd254: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd25a: mov dword ptr [0xa96070], 0 */ W32((u32)(0xa96070u), 0x0u);
    /* 006cd264: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6cd269u); f_00717ed8();
    /* 006cd269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cd26a:; BB(0x006cd26a);
    /* 006cd26a: ret  */ FN_RET(0x006cd21c); r_esp += 4; return;
}

void f_006cd26c(void) /* sub_6CD26C */
{
    FN_ENTER(0x006cd26c);
    /* 006cd26c: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006cd26f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd272: ja 0x6cd2d3 */ if ((!fC&&!fZ)) goto L_006cd2d3;
L_006cd274:; BB(0x006cd274);
    /* 006cd274: mov eax, dword ptr [eax*4 + 0x96ba54] */ r_eax = R32((u32)(r_eax*4+0x96ba54u));
    /* 006cd27b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd26c); r_esp += 4; return;
}

void f_006cd27d(void)
{
    FN_ENTER(0x006cd27d);
    /* 006cd27d: call 0x6ce0a0 */ r_esp -= 4; W32(r_esp, 0x6cd282u); f_006ce0a0();
    /* 006cd282: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd27d); r_esp += 4; return;
}

void f_006cd284(void)
{
    FN_ENTER(0x006cd284);
    /* 006cd284: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cd286: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x6cd289u); call_ind(t); }
    /* 006cd289: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd284); r_esp += 4; return;
}

void f_006cd28b(void)
{
    FN_ENTER(0x006cd28b);
    /* 006cd28b: mov dword ptr [ecx + 0x20], 0xc */ W32((u32)(r_ecx+0x20u), 0xcu);
    /* 006cd292: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd28b); r_esp += 4; return;
}

void f_006cd294(void)
{
    FN_ENTER(0x006cd294);
    /* 006cd294: mov dword ptr [ecx + 0x20], 0xc */ W32((u32)(r_ecx+0x20u), 0xcu);
    /* 006cd29b: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd294); r_esp += 4; return;
}

void f_006cd29d(void)
{
    FN_ENTER(0x006cd29d);
    /* 006cd29d: call 0x6cd2d4 */ r_esp -= 4; W32(r_esp, 0x6cd2a2u); f_006cd2d4();
    /* 006cd2a2: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd29d); r_esp += 4; return;
}

void f_006cd2a4(void)
{
    FN_ENTER(0x006cd2a4);
    /* 006cd2a4: call 0x6cd3ac */ r_esp -= 4; W32(r_esp, 0x6cd2a9u); f_006cd3ac();
    /* 006cd2a9: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2a4); r_esp += 4; return;
}

void f_006cd2ab(void)
{
    FN_ENTER(0x006cd2ab);
    /* 006cd2ab: call 0x6cd494 */ r_esp -= 4; W32(r_esp, 0x6cd2b0u); f_006cd494();
    /* 006cd2b0: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2ab); r_esp += 4; return;
}

void f_006cd2b2(void)
{
    FN_ENTER(0x006cd2b2);
    /* 006cd2b2: call 0x6cd518 */ r_esp -= 4; W32(r_esp, 0x6cd2b7u); f_006cd518();
    /* 006cd2b7: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2b2); r_esp += 4; return;
}

void f_006cd2b9(void)
{
    FN_ENTER(0x006cd2b9);
    /* 006cd2b9: call 0x6cd570 */ r_esp -= 4; W32(r_esp, 0x6cd2beu); f_006cd570();
    /* 006cd2be: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2b9); r_esp += 4; return;
}

void f_006cd2c0(void)
{
    FN_ENTER(0x006cd2c0);
    /* 006cd2c0: call 0x6cd5c4 */ r_esp -= 4; W32(r_esp, 0x6cd2c5u); f_006cd5c4();
    /* 006cd2c5: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2c0); r_esp += 4; return;
}

void f_006cd2c7(void)
{
    FN_ENTER(0x006cd2c7);
    /* 006cd2c7: call 0x6ce10c */ r_esp -= 4; W32(r_esp, 0x6cd2ccu); f_006ce10c();
    /* 006cd2cc: jmp 0x6cd2d3 */ goto L_006cd2d3;
L_006cd2d3:; BB(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2c7); r_esp += 4; return;
}

void f_006cd2ce(void)
{
    FN_ENTER(0x006cd2ce);
    /* 006cd2ce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cd2d0: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6cd2d3u); call_ind(t); }
    /* 006cd2d3: ret  */ FN_RET(0x006cd2ce); r_esp += 4; return;
}

void f_006cd2d3(void)
{
    FN_ENTER(0x006cd2d3);
    /* 006cd2d3: ret  */ FN_RET(0x006cd2d3); r_esp += 4; return;
}

void f_006cd2d4(void) /* sub_6CD2D4 */
{
    FN_ENTER(0x006cd2d4);
    /* 006cd2d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cd2d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006cd2d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cd2d9: push 0x8edaa8 */ { u32 v = 0x8edaa8u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd2de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cd2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd2e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cd2ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cd2ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cd2f2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006cd2f5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006cd2f8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006cd2fb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006cd2fe: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006cd305: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd30a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cd30fu); f_005caba4();
    /* 006cd30f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cd312: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd315: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006cd318: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd31a: je 0x6cd3a5 */ if (fZ) goto L_006cd3a5;
L_006cd320:; BB(0x006cd320);
    /* 006cd320: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006cd327: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cd32e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cd331: push dword ptr [eax + 0x44] */ { u32 v = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd334: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd337: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd33a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd33b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd341: call 0x6cfde8 */ r_esp -= 4; W32(r_esp, 0x6cd346u); f_006cfde8();
    /* 006cd346: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006cd34d:; BB(0x006cd34d);
    /* 006cd34d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cd354: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd359: je 0x6cd397 */ if (fZ) goto L_006cd397;
L_006cd35b:; BB(0x006cd35b);
    /* 006cd35b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cd35e: mov eax, 4 */ r_eax = 0x4u;
    /* 006cd363: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd366: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd369: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd36eu); f_006dc59c();
    /* 006cd36e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd371: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cd374: mov dword ptr [eax + 0x28], 0x6cd784 */ W32((u32)(r_eax+0x28u), 0x6cd784u);
    /* 006cd37b: mov dword ptr [eax + 0x2c], 0x6cd7b4 */ W32((u32)(r_eax+0x2cu), 0x6cd7b4u);
    /* 006cd382: mov dword ptr [eax + 0x30], 0x6cd7e4 */ W32((u32)(r_eax+0x30u), 0x6cd7e4u);
    /* 006cd389: mov dword ptr [eax + 0x34], 0x6ce1d4 */ W32((u32)(r_eax+0x34u), 0x6ce1d4u);
    /* 006cd390: mov dword ptr [edx + 0x20], 0xe */ W32((u32)(r_edx+0x20u), 0xeu);
L_006cd397:; BB(0x006cd397);
    /* 006cd397: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cd39a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cd3a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006cd3a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cd3a4: ret  */ FN_RET(0x006cd2d4); r_esp += 4; return;
L_006cd3a5:; BB(0x006cd3a5);
    /* 006cd3a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cd3a7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cd3aa: jmp 0x6cd34d */ goto L_006cd34d;
}

void f_006cd3ac(void) /* sub_6CD3AC */
{
    FN_ENTER(0x006cd3ac);
    /* 006cd3ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cd3ad: mov edi, ecx */ r_edi = r_ecx;
    /* 006cd3af: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cd3b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd3b4: je 0x6cd456 */ if (fZ) goto L_006cd456;
L_006cd3ba:; BB(0x006cd3ba);
    /* 006cd3ba: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cd3c1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cd3c3: je 0x6cd456 */ if (fZ) goto L_006cd456;
L_006cd3c9:; BB(0x006cd3c9);
    /* 006cd3c9: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6cd3ceu); f_007365f4();
    /* 006cd3ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd3d0: jne 0x6cd41a */ if (!fZ) goto L_006cd41a;
L_006cd3d2:; BB(0x006cd3d2);
    /* 006cd3d2: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cd3d5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd3dau); f_007127b0();
    /* 006cd3da: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006cd3e1: mov eax, 9 */ r_eax = 0x9u;
    /* 006cd3e6: mov ecx, edi */ r_ecx = r_edi;
    /* 006cd3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd3e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd3ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd3eb: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd3ee: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd3f3u); f_006dc59c();
    /* 006cd3f3: mov eax, dword ptr [0xa95f6c] */ r_eax = R32((u32)(0xa95f6cu));
    /* 006cd3f8: mov dword ptr [edi + 0x34], 1 */ W32((u32)(r_edi+0x34u), 0x1u);
    /* 006cd3ff: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd402: je 0x6cd40e */ if (fZ) goto L_006cd40e;
L_006cd404:; BB(0x006cd404);
    /* 006cd404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd405: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cd40au); f_006bc76c();
    /* 006cd40a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd40b: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
L_006cd40e:; BB(0x006cd40e);
    /* 006cd40e: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cd411: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006cd418: jmp 0x6cd456 */ goto L_006cd456;
L_006cd41a:; BB(0x006cd41a);
    /* 006cd41a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd41d: jne 0x6cd453 */ if (!fZ) goto L_006cd453;
L_006cd41f:; BB(0x006cd41f);
    /* 006cd41f: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cd422: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd427u); f_007127b0();
    /* 006cd427: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006cd42e: mov eax, 0xa */ r_eax = 0xau;
    /* 006cd433: mov ecx, edi */ r_ecx = r_edi;
    /* 006cd435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd438: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd43b: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd440u); f_006dc59c();
    /* 006cd440: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cd443: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006cd44a: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006cd451: jmp 0x6cd456 */ goto L_006cd456;
L_006cd453:; BB(0x006cd453);
    /* 006cd453: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
L_006cd456:; BB(0x006cd456);
    /* 006cd456: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd458: je 0x6cd491 */ if (fZ) goto L_006cd491;
L_006cd45a:; BB(0x006cd45a);
    /* 006cd45a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cd461: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd463: je 0x6cd491 */ if (fZ) goto L_006cd491;
L_006cd465:; BB(0x006cd465);
    /* 006cd465: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cd46au); f_007127b0();
    /* 006cd46a: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006cd471: mov eax, 0xa */ r_eax = 0xau;
    /* 006cd476: mov ecx, edi */ r_ecx = r_edi;
    /* 006cd478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd479: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd47a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd47b: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd47e: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd483u); f_006dc59c();
    /* 006cd483: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006cd48a: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
L_006cd491:; BB(0x006cd491);
    /* 006cd491: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cd492: ret  */ FN_RET(0x006cd3ac); r_esp += 4; return;
}

void f_006cd494(void) /* sub_6CD494 */
{
    FN_ENTER(0x006cd494);
    /* 006cd494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cd495: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cd496: mov esi, ecx */ r_esi = r_ecx;
    /* 006cd498: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006cd49a: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd49c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cd49fu); call_ind(t); }
    /* 006cd49f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd4a1: jne 0x6cd4a6 */ if (!fZ) goto L_006cd4a6;
L_006cd4a3:; BB(0x006cd4a3);
    /* 006cd4a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd4a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cd4a5: ret  */ FN_RET(0x006cd494); r_esp += 4; return;
L_006cd4a6:; BB(0x006cd4a6);
    /* 006cd4a6: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd4a8: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cd4adu); f_006dc988();
    /* 006cd4ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd4af: je 0x6cd515 */ if (fZ) goto L_006cd515;
L_006cd4b1:; BB(0x006cd4b1);
    /* 006cd4b1: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006cd4b3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cd4b8u); f_0073ec50();
    /* 006cd4b8: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cd4bb: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cd4bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd4c1: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6cd4c6u); f_00735884();
    /* 006cd4c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd4c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd4cb: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006cd4ce: mov ecx, eax */ r_ecx = r_eax;
    /* 006cd4d0: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6cd4d5u); f_00736510();
    /* 006cd4d5: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd4d7: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cd4dcu); f_006dc8d8();
    /* 006cd4dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cd4df: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd4e1: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cd4e6u); f_006dc8d8();
    /* 006cd4e6: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006cd4e9: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd4ec: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006cd4f0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cd4f3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cd4f7: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cd4fcu); f_0070f5a4();
    /* 006cd4fc: mov eax, 8 */ r_eax = 0x8u;
    /* 006cd501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd503: mov ecx, esi */ r_ecx = r_esi;
    /* 006cd505: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd506: push dword ptr [esi + 0x44] */ { u32 v = R32((u32)(r_esi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd509: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd50eu); f_006dc59c();
    /* 006cd50e: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
L_006cd515:; BB(0x006cd515);
    /* 006cd515: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd516: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cd517: ret  */ FN_RET(0x006cd494); r_esp += 4; return;
}

void f_006cd518(void) /* sub_6CD518 */
{
    FN_ENTER(0x006cd518);
    /* 006cd518: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd519: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cd51b: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006cd51e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd520: je 0x6cd533 */ if (fZ) goto L_006cd533;
L_006cd522:; BB(0x006cd522);
    /* 006cd522: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cd527u); f_008173b4();
    /* 006cd527: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd52a: je 0x6cd53e */ if (fZ) goto L_006cd53e;
L_006cd52c:; BB(0x006cd52c);
    /* 006cd52c: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_006cd533:; BB(0x006cd533);
    /* 006cd533: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cd535: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd537: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cd53au); call_ind(t); }
    /* 006cd53a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd53c: jne 0x6cd540 */ if (!fZ) goto L_006cd540;
L_006cd53e:; BB(0x006cd53e);
    /* 006cd53e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd53f: ret  */ FN_RET(0x006cd518); r_esp += 4; return;
L_006cd540:; BB(0x006cd540);
    /* 006cd540: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd542: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cd547u); f_006dc988();
    /* 006cd547: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd549: je 0x6cd53e */ if (fZ) goto L_006cd53e;
L_006cd54b:; BB(0x006cd54b);
    /* 006cd54b: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cd550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd552: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd555: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd558: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd55du); f_006dc59c();
    /* 006cd55d: mov dword ptr [ebx + 0x34], 1 */ W32((u32)(r_ebx+0x34u), 0x1u);
    /* 006cd564: mov dword ptr [ebx + 0x20], 0xc */ W32((u32)(r_ebx+0x20u), 0xcu);
    /* 006cd56b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd56c: ret  */ FN_RET(0x006cd518); r_esp += 4; return;
}

void f_006cd570(void) /* sub_6CD570 */
{
    FN_ENTER(0x006cd570);
    /* 006cd570: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd571: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cd573: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006cd576: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd578: je 0x6cd58a */ if (fZ) goto L_006cd58a;
L_006cd57a:; BB(0x006cd57a);
    /* 006cd57a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cd57fu); f_008173b4();
    /* 006cd57f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd581: jne 0x6cd595 */ if (!fZ) goto L_006cd595;
L_006cd583:; BB(0x006cd583);
    /* 006cd583: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_006cd58a:; BB(0x006cd58a);
    /* 006cd58a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cd58c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd58e: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cd591u); call_ind(t); }
    /* 006cd591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd593: jne 0x6cd597 */ if (!fZ) goto L_006cd597;
L_006cd595:; BB(0x006cd595);
    /* 006cd595: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd596: ret  */ FN_RET(0x006cd570); r_esp += 4; return;
L_006cd597:; BB(0x006cd597);
    /* 006cd597: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd599: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cd59eu); f_006dc988();
    /* 006cd59e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd5a0: je 0x6cd595 */ if (fZ) goto L_006cd595;
L_006cd5a2:; BB(0x006cd5a2);
    /* 006cd5a2: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cd5a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd5a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd5ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd5ac: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd5af: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd5b4u); f_006dc59c();
    /* 006cd5b4: mov dword ptr [ebx + 0x34], 1 */ W32((u32)(r_ebx+0x34u), 0x1u);
    /* 006cd5bb: mov dword ptr [ebx + 0x20], 0xc */ W32((u32)(r_ebx+0x20u), 0xcu);
    /* 006cd5c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd5c3: ret  */ FN_RET(0x006cd570); r_esp += 4; return;
}

void f_006cd5c4(void) /* sub_6CD5C4 */
{
    FN_ENTER(0x006cd5c4);
    /* 006cd5c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd5c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cd5c7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cd5c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd5cb: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cd5ceu); call_ind(t); }
    /* 006cd5ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd5d0: jne 0x6cd5d4 */ if (!fZ) goto L_006cd5d4;
L_006cd5d2:; BB(0x006cd5d2);
    /* 006cd5d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd5d3: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd5d4:; BB(0x006cd5d4);
    /* 006cd5d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd5d6: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cd5dbu); f_006dc988();
    /* 006cd5db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd5dd: je 0x6cd5ea */ if (fZ) goto L_006cd5ea;
L_006cd5df:; BB(0x006cd5df);
    /* 006cd5df: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 006cd5e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cd5e8: jmp 0x6cd5ed */ goto L_006cd5ed;
L_006cd5ea:; BB(0x006cd5ea);
    /* 006cd5ea: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
L_006cd5ed:; BB(0x006cd5ed);
    /* 006cd5ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd5ef: jne 0x6cd71d */ if (!fZ) goto L_006cd71d;
L_006cd5f5:; BB(0x006cd5f5);
    /* 006cd5f5: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006cd5f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd5fa: je 0x6cd71f */ if (fZ) goto L_006cd71f;
L_006cd600:; BB(0x006cd600);
    /* 006cd600: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd603: je 0x6cd6e8 */ if (fZ) goto L_006cd6e8;
L_006cd609:; BB(0x006cd609);
    /* 006cd609: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd60c: jne 0x6cd71d */ if (!fZ) goto L_006cd71d;
L_006cd612:; BB(0x006cd612);
    /* 006cd612: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006cd617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd619: je 0x6cd6c6 */ if (fZ) goto L_006cd6c6;
L_006cd61f:; BB(0x006cd61f);
    /* 006cd61f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cd624: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd62a: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6cd62fu); f_006bc260();
    /* 006cd62f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd634: je 0x6cd665 */ if (fZ) goto L_006cd665;
L_006cd636:; BB(0x006cd636);
    /* 006cd636: mov eax, 0xb */ r_eax = 0xbu;
    /* 006cd63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd63d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd63f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd640: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd643: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd648u); f_006dc59c();
    /* 006cd648: mov eax, dword ptr [0xa95f68] */ r_eax = R32((u32)(0xa95f68u));
    /* 006cd64d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd650: je 0x6cd65c */ if (fZ) goto L_006cd65c;
L_006cd652:; BB(0x006cd652);
    /* 006cd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd653: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cd658u); f_006bc76c();
    /* 006cd658: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd659: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
L_006cd65c:; BB(0x006cd65c);
    /* 006cd65c: mov dword ptr [ebx + 0x20], 4 */ W32((u32)(r_ebx+0x20u), 0x4u);
    /* 006cd663: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd664: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd665:; BB(0x006cd665);
    /* 006cd665: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 006cd66a: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd670: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6cd675u); f_006bc260();
    /* 006cd675: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cd678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd67a: je 0x6cd6ab */ if (fZ) goto L_006cd6ab;
L_006cd67c:; BB(0x006cd67c);
    /* 006cd67c: mov eax, 0x12 */ r_eax = 0x12u;
    /* 006cd681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd683: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd686: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd689: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd68eu); f_006dc59c();
    /* 006cd68e: mov eax, dword ptr [0xa95f64] */ r_eax = R32((u32)(0xa95f64u));
    /* 006cd693: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd696: je 0x6cd6a2 */ if (fZ) goto L_006cd6a2;
L_006cd698:; BB(0x006cd698);
    /* 006cd698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd699: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cd69eu); f_006bc76c();
    /* 006cd69e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd69f: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
L_006cd6a2:; BB(0x006cd6a2);
    /* 006cd6a2: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006cd6a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd6aa: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd6ab:; BB(0x006cd6ab);
    /* 006cd6ab: mov eax, 2 */ r_eax = 0x2u;
    /* 006cd6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd6b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd6b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd6b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd6b5: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd6b8: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd6bdu); f_006dc59c();
    /* 006cd6bd: mov dword ptr [ebx + 0x20], 6 */ W32((u32)(r_ebx+0x20u), 0x6u);
    /* 006cd6c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd6c5: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd6c6:; BB(0x006cd6c6);
    /* 006cd6c6: mov eax, 4 */ r_eax = 0x4u;
    /* 006cd6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd6cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd6cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd6d0: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd6d3: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd6d8u); f_006dc59c();
    /* 006cd6d8: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 006cd6df: mov dword ptr [ebx + 0x20], 8 */ W32((u32)(r_ebx+0x20u), 0x8u);
    /* 006cd6e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd6e7: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd6e8:; BB(0x006cd6e8);
    /* 006cd6e8: call 0x6cba04 */ r_esp -= 4; W32(r_esp, 0x6cd6edu); f_006cba04();
    /* 006cd6ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd6f0: jne 0x6cd6f9 */ if (!fZ) goto L_006cd6f9;
L_006cd6f2:; BB(0x006cd6f2);
    /* 006cd6f2: mov dword ptr [ebx + 0x30], 2 */ W32((u32)(r_ebx+0x30u), 0x2u);
L_006cd6f9:; BB(0x006cd6f9);
    /* 006cd6f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd6fb: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cd700u); f_006dc988();
    /* 006cd700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd702: je 0x6cd71d */ if (fZ) goto L_006cd71d;
L_006cd704:; BB(0x006cd704);
    /* 006cd704: mov eax, 0x10 */ r_eax = 0x10u;
    /* 006cd709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd70a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd70b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd70d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd70e: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd711: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd716u); f_006dc59c();
    /* 006cd716: mov dword ptr [ebx + 0x20], 0xd */ W32((u32)(r_ebx+0x20u), 0xdu);
L_006cd71d:; BB(0x006cd71d);
    /* 006cd71d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd71e: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd71f:; BB(0x006cd71f);
    /* 006cd71f: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006cd724: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd726: je 0x6cd731 */ if (fZ) goto L_006cd731;
L_006cd728:; BB(0x006cd728);
    /* 006cd728: mov dword ptr [ebx + 0x30], 2 */ W32((u32)(r_ebx+0x30u), 0x2u);
    /* 006cd72f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd730: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd731:; BB(0x006cd731);
    /* 006cd731: call 0x6cba04 */ r_esp -= 4; W32(r_esp, 0x6cd736u); f_006cba04();
    /* 006cd736: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd739: je 0x6cd77a */ if (fZ) goto L_006cd77a;
L_006cd73b:; BB(0x006cd73b);
    /* 006cd73b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd73d: jne 0x6cd75a */ if (!fZ) goto L_006cd75a;
L_006cd73f:; BB(0x006cd73f);
    /* 006cd73f: mov eax, 0x11 */ r_eax = 0x11u;
    /* 006cd744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd746: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd749: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd74c: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd751u); f_006dc59c();
    /* 006cd751: mov dword ptr [ebx + 0x30], 1 */ W32((u32)(r_ebx+0x30u), 0x1u);
    /* 006cd758: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd759: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd75a:; BB(0x006cd75a);
    /* 006cd75a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd75d: jne 0x6cd71d */ if (!fZ) goto L_006cd71d;
L_006cd75f:; BB(0x006cd75f);
    /* 006cd75f: mov eax, 0xd */ r_eax = 0xdu;
    /* 006cd764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd765: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd766: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cd768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd769: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd76c: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd771u); f_006dc59c();
    /* 006cd771: mov dword ptr [ebx + 0x30], 1 */ W32((u32)(r_ebx+0x30u), 0x1u);
    /* 006cd778: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd779: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
L_006cd77a:; BB(0x006cd77a);
    /* 006cd77a: mov dword ptr [ebx + 0x30], 2 */ W32((u32)(r_ebx+0x30u), 0x2u);
    /* 006cd781: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cd782: ret  */ FN_RET(0x006cd5c4); r_esp += 4; return;
}

void f_006cd784(void)
{
    FN_ENTER(0x006cd784);
    /* 006cd784: mov ecx, dword ptr [0xa9604c] */ r_ecx = R32((u32)(0xa9604cu));
    /* 006cd78a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd78c: je 0x6cd7b1 */ if (fZ) goto L_006cd7b1;
L_006cd78e:; BB(0x006cd78e);
    /* 006cd78e: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cd793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd795: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd796: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd799: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd79eu); f_006dc59c();
    /* 006cd79e: mov eax, dword ptr [0xa9604c] */ r_eax = R32((u32)(0xa9604cu));
    /* 006cd7a3: mov dword ptr [eax + 0x20], 9 */ W32((u32)(r_eax+0x20u), 0x9u);
    /* 006cd7aa: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006cd7b1:; BB(0x006cd7b1);
    /* 006cd7b1: ret  */ FN_RET(0x006cd784); r_esp += 4; return;
}

void f_006cd7b4(void)
{
    FN_ENTER(0x006cd7b4);
    /* 006cd7b4: mov ecx, dword ptr [0xa9604c] */ r_ecx = R32((u32)(0xa9604cu));
    /* 006cd7ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd7bc: je 0x6cd7e1 */ if (fZ) goto L_006cd7e1;
L_006cd7be:; BB(0x006cd7be);
    /* 006cd7be: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cd7c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd7c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd7c6: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd7c9: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd7ceu); f_006dc59c();
    /* 006cd7ce: mov eax, dword ptr [0xa9604c] */ r_eax = R32((u32)(0xa9604cu));
    /* 006cd7d3: mov dword ptr [eax + 0x20], 0xa */ W32((u32)(r_eax+0x20u), 0xau);
    /* 006cd7da: mov dword ptr [eax + 0x34], 2 */ W32((u32)(r_eax+0x34u), 0x2u);
L_006cd7e1:; BB(0x006cd7e1);
    /* 006cd7e1: ret  */ FN_RET(0x006cd7b4); r_esp += 4; return;
}

void f_006cd7e4(void)
{
    FN_ENTER(0x006cd7e4);
    /* 006cd7e4: mov ecx, dword ptr [0xa9604c] */ r_ecx = R32((u32)(0xa9604cu));
    /* 006cd7ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd7ec: je 0x6cd811 */ if (fZ) goto L_006cd811;
L_006cd7ee:; BB(0x006cd7ee);
    /* 006cd7ee: mov eax, 6 */ r_eax = 0x6u;
    /* 006cd7f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd7f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd7f6: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd7f9: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cd7feu); f_006dc59c();
    /* 006cd7fe: mov eax, dword ptr [0xa9604c] */ r_eax = R32((u32)(0xa9604cu));
    /* 006cd803: mov dword ptr [eax + 0x20], 0xc */ W32((u32)(r_eax+0x20u), 0xcu);
    /* 006cd80a: mov dword ptr [eax + 0x34], 2 */ W32((u32)(r_eax+0x34u), 0x2u);
L_006cd811:; BB(0x006cd811);
    /* 006cd811: ret  */ FN_RET(0x006cd7e4); r_esp += 4; return;
}

void f_006cd814(void) /* sub_6CD814 */
{
    FN_ENTER(0x006cd814);
    /* 006cd814: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 006cd81e: mov dword ptr [0xa955e0], 2 */ W32((u32)(0xa955e0u), 0x2u);
    /* 006cd828: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6cd82du); f_007a6160();
    /* 006cd82d: ret  */ FN_RET(0x006cd814); r_esp += 4; return;
}

void f_006cd830(void) /* sub_6CD830 */
{
    FN_ENTER(0x006cd830);
    /* 006cd830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cd831: mov ebp, esp */ r_ebp = r_esp;
    /* 006cd833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cd835: push 0x8edac4 */ { u32 v = 0x8edac4u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd83a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cd840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cd848: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cd84b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cd84e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cd851: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cd854: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cd857: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cd85a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd85d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cd860: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cd863: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6cd868u); f_006dc410();
    /* 006cd868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cd86f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cd872: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd875: mov dword ptr [ecx], 0xb3bd40 */ W32((u32)(r_ecx), 0xb3bd40u);
    /* 006cd87b: mov eax, dword ptr [0x9cecfc] */ r_eax = R32((u32)(0x9cecfcu));
    /* 006cd880: mov dword ptr [ecx + 0x40], 1 */ W32((u32)(r_ecx+0x40u), 0x1u);
    /* 006cd887: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006cd88a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cd88c: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006cd88f: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006cd892: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006cd895: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006cd898: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 006cd89b: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006cd89e: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 006cd8a1: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cd8a6u); f_006dc9fc();
    /* 006cd8a6: mov dword ptr [eax*4 + 0xa96050], 1 */ W32((u32)(r_eax*4+0xa96050u), 0x1u);
    /* 006cd8b1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cd8b4: mov dword ptr [0xa9604c], eax */ W32((u32)(0xa9604cu), r_eax);
    /* 006cd8b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd8bb: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cd8c0u); f_00791748();
    /* 006cd8c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd8c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cd8c4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cd8c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cd8ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cd8d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006cd8d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cd8d4: ret 8 */ FN_RET(0x006cd830); r_esp += 12; return;
}

void f_006cd8d8(void) /* sub_6CD8D8 */
{
    FN_ENTER(0x006cd8d8);
    /* 006cd8d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cd8d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006cd8db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cd8dd: push 0x8edb06 */ { u32 v = 0x8edb06u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd8e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cd8e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cd8e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cd8f0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cd8f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cd8f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cd8f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cd8fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cd8ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006cd902: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 006cd905: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd907: je 0x6cd920 */ if (fZ) goto L_006cd920;
L_006cd909:; BB(0x006cd909);
    /* 006cd909: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cd90eu); f_008173b4();
    /* 006cd90e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd910: jne 0x6cda79 */ if (!fZ) goto L_006cda79;
L_006cd916:; BB(0x006cd916);
    /* 006cd916: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd919: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006cd920:; BB(0x006cd920);
    /* 006cd920: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd923: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cd925: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cd928u); call_ind(t); }
    /* 006cd928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd92a: je 0x6cda79 */ if (fZ) goto L_006cda79;
L_006cd930:; BB(0x006cd930);
    /* 006cd930: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd933: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 006cd936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd938: je 0x6cda41 */ if (fZ) goto L_006cda41;
L_006cd93e:; BB(0x006cd93e);
    /* 006cd93e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd941: jne 0x6cd9c9 */ if (!fZ) goto L_006cd9c9;
L_006cd947:; BB(0x006cd947);
    /* 006cd947: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd94a: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6cd94fu); f_006dc8fc();
    /* 006cd94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd951: je 0x6cda79 */ if (fZ) goto L_006cda79;
L_006cd957:; BB(0x006cd957);
    /* 006cd957: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006cd95e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd960: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cd965u); f_005caba4();
    /* 006cd965: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd966: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006cd969: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd96b: je 0x6cd994 */ if (fZ) goto L_006cd994;
L_006cd96d:; BB(0x006cd96d);
    /* 006cd96d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006cd974: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006cd97b: push 0x6cc2b0 */ { u32 v = 0x6cc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd980: mov ecx, eax */ r_ecx = r_eax;
    /* 006cd982: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cd988: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cd98du); f_00788938();
    /* 006cd98d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006cd994:; BB(0x006cd994);
    /* 006cd994: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cd99b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd99e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cd9a1: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cd9a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cd9a6: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cd9abu); f_006d7338();
    /* 006cd9ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd9ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd9af: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6cd9b4u); f_006dc4b0();
    /* 006cd9b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cd9b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cd9bb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cd9c0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cd9c4: jmp 0x6cda79 */ goto L_006cda79;
L_006cd9c9:; BB(0x006cd9c9);
    /* 006cd9c9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cd9cc: jne 0x6cda79 */ if (!fZ) goto L_006cda79;
L_006cd9d2:; BB(0x006cd9d2);
    /* 006cd9d2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006cd9d9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd9db: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cd9e0u); f_005caba4();
    /* 006cd9e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cd9e1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006cd9e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cd9e6: je 0x6cda0f */ if (fZ) goto L_006cda0f;
L_006cd9e8:; BB(0x006cd9e8);
    /* 006cd9e8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006cd9ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cd9f6: push 0x6cd814 */ { u32 v = 0x6cd814u; r_esp -= 4; W32(r_esp, v); }
    /* 006cd9fb: mov ecx, eax */ r_ecx = r_eax;
    /* 006cd9fd: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cda03: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cda08u); f_00788938();
    /* 006cda08: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006cda0f:; BB(0x006cda0f);
    /* 006cda0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cda16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cda19: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cda1c: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cda20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cda21: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cda26u); f_006d7338();
    /* 006cda26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cda27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cda2a: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6cda2fu); f_006dc4b0();
    /* 006cda2f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cda32: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cda36: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cda3b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cda3f: jmp 0x6cda79 */ goto L_006cda79;
L_006cda41:; BB(0x006cda41);
    /* 006cda41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cda44: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6cda49u); f_006dc8fc();
    /* 006cda49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cda4b: je 0x6cda79 */ if (fZ) goto L_006cda79;
L_006cda4d:; BB(0x006cda4d);
    /* 006cda4d: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006cda52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cda54: jne 0x6cda61 */ if (!fZ) goto L_006cda61;
L_006cda56:; BB(0x006cda56);
    /* 006cda56: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006cda5c: call 0x7d776c */ r_esp -= 4; W32(r_esp, 0x6cda61u); f_007d776c();
L_006cda61:; BB(0x006cda61);
    /* 006cda61: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cda64: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6cda69u); f_006dc4b0();
    /* 006cda69: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cda6c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cda70: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cda75: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006cda79:; BB(0x006cda79);
    /* 006cda79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cda7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cda83: mov esp, ebp */ r_esp = r_ebp;
    /* 006cda85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cda86: ret  */ FN_RET(0x006cd8d8); r_esp += 4; return;
}

void f_006cda88(void) /* sub_6CDA88 */
{
    FN_ENTER(0x006cda88);
    /* 006cda88: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006cda8b: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cda8e: ja 0x6cdad6 */ if ((!fC&&!fZ)) goto L_006cdad6;
L_006cda90:; BB(0x006cda90);
    /* 006cda90: mov eax, dword ptr [eax*4 + 0x96ba90] */ r_eax = R32((u32)(r_eax*4+0x96ba90u));
    /* 006cda97: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cda88); r_esp += 4; return;
}

void f_006cda99(void)
{
    FN_ENTER(0x006cda99);
    /* 006cda99: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cda9b: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x6cda9eu); call_ind(t); }
    /* 006cda9e: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cda99); r_esp += 4; return;
}

void f_006cdaa0(void)
{
    FN_ENTER(0x006cdaa0);
    /* 006cdaa0: call 0x6cdad8 */ r_esp -= 4; W32(r_esp, 0x6cdaa5u); f_006cdad8();
    /* 006cdaa5: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdaa0); r_esp += 4; return;
}

void f_006cdaa7(void)
{
    FN_ENTER(0x006cdaa7);
    /* 006cdaa7: call 0x6cdb18 */ r_esp -= 4; W32(r_esp, 0x6cdaacu); f_006cdb18();
    /* 006cdaac: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdaa7); r_esp += 4; return;
}

void f_006cdaae(void)
{
    FN_ENTER(0x006cdaae);
    /* 006cdaae: call 0x6cdc00 */ r_esp -= 4; W32(r_esp, 0x6cdab3u); f_006cdc00();
    /* 006cdab3: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdaae); r_esp += 4; return;
}

void f_006cdab5(void)
{
    FN_ENTER(0x006cdab5);
    /* 006cdab5: call 0x6cdc84 */ r_esp -= 4; W32(r_esp, 0x6cdabau); f_006cdc84();
    /* 006cdaba: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdab5); r_esp += 4; return;
}

void f_006cdabc(void)
{
    FN_ENTER(0x006cdabc);
    /* 006cdabc: call 0x6cdcdc */ r_esp -= 4; W32(r_esp, 0x6cdac1u); f_006cdcdc();
    /* 006cdac1: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdabc); r_esp += 4; return;
}

void f_006cdac3(void)
{
    FN_ENTER(0x006cdac3);
    /* 006cdac3: call 0x6cdd30 */ r_esp -= 4; W32(r_esp, 0x6cdac8u); f_006cdd30();
    /* 006cdac8: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdac3); r_esp += 4; return;
}

void f_006cdaca(void)
{
    FN_ENTER(0x006cdaca);
    /* 006cdaca: call 0x6ce004 */ r_esp -= 4; W32(r_esp, 0x6cdacfu); f_006ce004();
    /* 006cdacf: jmp 0x6cdad6 */ goto L_006cdad6;
L_006cdad6:; BB(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdaca); r_esp += 4; return;
}

void f_006cdad1(void)
{
    FN_ENTER(0x006cdad1);
    /* 006cdad1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cdad3: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6cdad6u); call_ind(t); }
    /* 006cdad6: ret  */ FN_RET(0x006cdad1); r_esp += 4; return;
}

void f_006cdad6(void)
{
    FN_ENTER(0x006cdad6);
    /* 006cdad6: ret  */ FN_RET(0x006cdad6); r_esp += 4; return;
}

void f_006cdad8(void) /* sub_6CDAD8 */
{
    FN_ENTER(0x006cdad8);
    /* 006cdad8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cdad9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cdadb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cdadd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdadf: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cdae2u); call_ind(t); }
    /* 006cdae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdae4: jne 0x6cdae8 */ if (!fZ) goto L_006cdae8;
L_006cdae6:; BB(0x006cdae6);
    /* 006cdae6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cdae7: ret  */ FN_RET(0x006cdad8); r_esp += 4; return;
L_006cdae8:; BB(0x006cdae8);
    /* 006cdae8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdaea: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cdaefu); f_006dc988();
    /* 006cdaef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdaf1: je 0x6cdae6 */ if (fZ) goto L_006cdae6;
L_006cdaf3:; BB(0x006cdaf3);
    /* 006cdaf3: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cdaf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdaf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdafa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdafc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdafd: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdb00: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdb05u); f_006dc59c();
    /* 006cdb05: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
    /* 006cdb0c: mov dword ptr [ebx + 0x20], 0xc */ W32((u32)(r_ebx+0x20u), 0xcu);
    /* 006cdb13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cdb14: ret  */ FN_RET(0x006cdad8); r_esp += 4; return;
}

void f_006cdb18(void) /* sub_6CDB18 */
{
    FN_ENTER(0x006cdb18);
    /* 006cdb18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cdb19: mov edi, ecx */ r_edi = r_ecx;
    /* 006cdb1b: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cdb1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdb20: je 0x6cdbc2 */ if (fZ) goto L_006cdbc2;
L_006cdb26:; BB(0x006cdb26);
    /* 006cdb26: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cdb2d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cdb2f: je 0x6cdbc2 */ if (fZ) goto L_006cdbc2;
L_006cdb35:; BB(0x006cdb35);
    /* 006cdb35: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6cdb3au); f_007365f4();
    /* 006cdb3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdb3c: jne 0x6cdb86 */ if (!fZ) goto L_006cdb86;
L_006cdb3e:; BB(0x006cdb3e);
    /* 006cdb3e: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cdb41: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cdb46u); f_007127b0();
    /* 006cdb46: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 006cdb4d: mov eax, 9 */ r_eax = 0x9u;
    /* 006cdb52: mov ecx, edi */ r_ecx = r_edi;
    /* 006cdb54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdb55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdb56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdb57: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdb5a: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdb5fu); f_006dc59c();
    /* 006cdb5f: mov eax, dword ptr [0xa95f6c] */ r_eax = R32((u32)(0xa95f6cu));
    /* 006cdb64: mov dword ptr [edi + 0x34], 1 */ W32((u32)(r_edi+0x34u), 0x1u);
    /* 006cdb6b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdb6e: je 0x6cdb7a */ if (fZ) goto L_006cdb7a;
L_006cdb70:; BB(0x006cdb70);
    /* 006cdb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdb71: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cdb76u); f_006bc76c();
    /* 006cdb76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cdb77: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
L_006cdb7a:; BB(0x006cdb7a);
    /* 006cdb7a: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cdb7d: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006cdb84: jmp 0x6cdbc2 */ goto L_006cdbc2;
L_006cdb86:; BB(0x006cdb86);
    /* 006cdb86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdb89: jne 0x6cdbbf */ if (!fZ) goto L_006cdbbf;
L_006cdb8b:; BB(0x006cdb8b);
    /* 006cdb8b: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cdb8e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cdb93u); f_007127b0();
    /* 006cdb93: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 006cdb9a: mov eax, 0xa */ r_eax = 0xau;
    /* 006cdb9f: mov ecx, edi */ r_ecx = r_edi;
    /* 006cdba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdba4: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdba7: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdbacu); f_006dc59c();
    /* 006cdbac: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cdbaf: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006cdbb6: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006cdbbd: jmp 0x6cdbc2 */ goto L_006cdbc2;
L_006cdbbf:; BB(0x006cdbbf);
    /* 006cdbbf: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
L_006cdbc2:; BB(0x006cdbc2);
    /* 006cdbc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdbc4: je 0x6cdbfd */ if (fZ) goto L_006cdbfd;
L_006cdbc6:; BB(0x006cdbc6);
    /* 006cdbc6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cdbcd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdbcf: je 0x6cdbfd */ if (fZ) goto L_006cdbfd;
L_006cdbd1:; BB(0x006cdbd1);
    /* 006cdbd1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cdbd6u); f_007127b0();
    /* 006cdbd6: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 006cdbdd: mov eax, 0xa */ r_eax = 0xau;
    /* 006cdbe2: mov ecx, edi */ r_ecx = r_edi;
    /* 006cdbe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdbe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdbe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdbe7: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdbea: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdbefu); f_006dc59c();
    /* 006cdbef: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006cdbf6: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
L_006cdbfd:; BB(0x006cdbfd);
    /* 006cdbfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cdbfe: ret  */ FN_RET(0x006cdb18); r_esp += 4; return;
}

void f_006cdc00(void) /* sub_6CDC00 */
{
    FN_ENTER(0x006cdc00);
    /* 006cdc00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc02: mov esi, ecx */ r_esi = r_ecx;
    /* 006cdc04: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006cdc06: mov ecx, esi */ r_ecx = r_esi;
    /* 006cdc08: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cdc0bu); call_ind(t); }
    /* 006cdc0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdc0d: jne 0x6cdc12 */ if (!fZ) goto L_006cdc12;
L_006cdc0f:; BB(0x006cdc0f);
    /* 006cdc0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cdc10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cdc11: ret  */ FN_RET(0x006cdc00); r_esp += 4; return;
L_006cdc12:; BB(0x006cdc12);
    /* 006cdc12: mov ecx, esi */ r_ecx = r_esi;
    /* 006cdc14: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cdc19u); f_006dc988();
    /* 006cdc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdc1b: je 0x6cdc81 */ if (fZ) goto L_006cdc81;
L_006cdc1d:; BB(0x006cdc1d);
    /* 006cdc1d: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc1f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cdc24u); f_0073ec50();
    /* 006cdc24: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cdc27: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cdc2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc2d: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6cdc32u); f_00735884();
    /* 006cdc32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cdc35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc37: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006cdc3a: mov ecx, eax */ r_ecx = r_eax;
    /* 006cdc3c: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6cdc41u); f_00736510();
    /* 006cdc41: mov ecx, esi */ r_ecx = r_esi;
    /* 006cdc43: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cdc48u); f_006dc8d8();
    /* 006cdc48: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cdc4b: mov ecx, esi */ r_ecx = r_esi;
    /* 006cdc4d: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cdc52u); f_006dc8d8();
    /* 006cdc52: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 006cdc55: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cdc58: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006cdc5c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cdc5f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cdc63: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cdc68u); f_0070f5a4();
    /* 006cdc68: mov eax, 8 */ r_eax = 0x8u;
    /* 006cdc6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc6f: mov ecx, esi */ r_ecx = r_esi;
    /* 006cdc71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc72: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdc75: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdc7au); f_006dc59c();
    /* 006cdc7a: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
L_006cdc81:; BB(0x006cdc81);
    /* 006cdc81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cdc82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cdc83: ret  */ FN_RET(0x006cdc00); r_esp += 4; return;
}

void f_006cdc84(void) /* sub_6CDC84 */
{
    FN_ENTER(0x006cdc84);
    /* 006cdc84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cdc85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cdc87: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006cdc8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdc8c: je 0x6cdc9f */ if (fZ) goto L_006cdc9f;
L_006cdc8e:; BB(0x006cdc8e);
    /* 006cdc8e: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cdc93u); f_008173b4();
    /* 006cdc93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cdc96: je 0x6cdcaa */ if (fZ) goto L_006cdcaa;
L_006cdc98:; BB(0x006cdc98);
    /* 006cdc98: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
L_006cdc9f:; BB(0x006cdc9f);
    /* 006cdc9f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cdca1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdca3: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cdca6u); call_ind(t); }
    /* 006cdca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdca8: jne 0x6cdcac */ if (!fZ) goto L_006cdcac;
L_006cdcaa:; BB(0x006cdcaa);
    /* 006cdcaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cdcab: ret  */ FN_RET(0x006cdc84); r_esp += 4; return;
L_006cdcac:; BB(0x006cdcac);
    /* 006cdcac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdcae: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cdcb3u); f_006dc988();
    /* 006cdcb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdcb5: je 0x6cdcaa */ if (fZ) goto L_006cdcaa;
L_006cdcb7:; BB(0x006cdcb7);
    /* 006cdcb7: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cdcbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdcbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdcbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdcc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdcc1: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdcc4: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdcc9u); f_006dc59c();
    /* 006cdcc9: mov dword ptr [ebx + 0x34], 1 */ W32((u32)(r_ebx+0x34u), 0x1u);
    /* 006cdcd0: mov dword ptr [ebx + 0x20], 0xc */ W32((u32)(r_ebx+0x20u), 0xcu);
    /* 006cdcd7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cdcd8: ret  */ FN_RET(0x006cdc84); r_esp += 4; return;
}

void f_006cdcdc(void) /* sub_6CDCDC */
{
    FN_ENTER(0x006cdcdc);
    /* 006cdcdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cdcdd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cdcdf: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006cdce2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdce4: je 0x6cdcf6 */ if (fZ) goto L_006cdcf6;
L_006cdce6:; BB(0x006cdce6);
    /* 006cdce6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cdcebu); f_008173b4();
    /* 006cdceb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdced: jne 0x6cdd01 */ if (!fZ) goto L_006cdd01;
L_006cdcef:; BB(0x006cdcef);
    /* 006cdcef: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
L_006cdcf6:; BB(0x006cdcf6);
    /* 006cdcf6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cdcf8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdcfa: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cdcfdu); call_ind(t); }
    /* 006cdcfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdcff: jne 0x6cdd03 */ if (!fZ) goto L_006cdd03;
L_006cdd01:; BB(0x006cdd01);
    /* 006cdd01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cdd02: ret  */ FN_RET(0x006cdcdc); r_esp += 4; return;
L_006cdd03:; BB(0x006cdd03);
    /* 006cdd03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdd05: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cdd0au); f_006dc988();
    /* 006cdd0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdd0c: je 0x6cdd01 */ if (fZ) goto L_006cdd01;
L_006cdd0e:; BB(0x006cdd0e);
    /* 006cdd0e: mov eax, 0xc */ r_eax = 0xcu;
    /* 006cdd13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd15: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cdd17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd18: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdd1b: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdd20u); f_006dc59c();
    /* 006cdd20: mov dword ptr [ebx + 0x34], 1 */ W32((u32)(r_ebx+0x34u), 0x1u);
    /* 006cdd27: mov dword ptr [ebx + 0x20], 0xc */ W32((u32)(r_ebx+0x20u), 0xcu);
    /* 006cdd2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cdd2f: ret  */ FN_RET(0x006cdcdc); r_esp += 4; return;
}

void f_006cdd30(void) /* sub_6CDD30 */
{
    FN_ENTER(0x006cdd30);
    /* 006cdd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006cdd33: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cdd36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cdd38: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cdd3bu); call_ind(t); }
    /* 006cdd3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdd3d: je 0x6cde31 */ if (fZ) goto L_006cde31;
L_006cdd43:; BB(0x006cdd43);
    /* 006cdd43: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006cdd46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdd48: jne 0x6cde31 */ if (!fZ) goto L_006cde31;
L_006cdd4e:; BB(0x006cdd4e);
    /* 006cdd4e: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006cdd53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdd55: je 0x6cde0d */ if (fZ) goto L_006cde0d;
L_006cdd5b:; BB(0x006cdd5b);
    /* 006cdd5b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd60: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdd66: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6cdd6bu); f_006bc260();
    /* 006cdd6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cdd6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdd70: je 0x6cdda1 */ if (fZ) goto L_006cdda1;
L_006cdd72:; BB(0x006cdd72);
    /* 006cdd72: mov eax, 0xb */ r_eax = 0xbu;
    /* 006cdd77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cdd7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd7c: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdd7f: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cdd84u); f_006dc59c();
    /* 006cdd84: mov eax, dword ptr [0xa95f68] */ r_eax = R32((u32)(0xa95f68u));
    /* 006cdd89: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cdd8c: je 0x6cdd98 */ if (fZ) goto L_006cdd98;
L_006cdd8e:; BB(0x006cdd8e);
    /* 006cdd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdd8f: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cdd94u); f_006bc76c();
    /* 006cdd94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cdd95: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
L_006cdd98:; BB(0x006cdd98);
    /* 006cdd98: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006cdd9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cdda0: ret  */ FN_RET(0x006cdd30); r_esp += 4; return;
L_006cdda1:; BB(0x006cdda1);
    /* 006cdda1: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 006cdda6: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cddac: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6cddb1u); f_006bc260();
    /* 006cddb1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cddb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cddb6: je 0x6cdde7 */ if (fZ) goto L_006cdde7;
L_006cddb8:; BB(0x006cddb8);
    /* 006cddb8: mov eax, 0x12 */ r_eax = 0x12u;
    /* 006cddbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cddc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddc2: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cddc5: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cddcau); f_006dc59c();
    /* 006cddca: mov eax, dword ptr [0xa95f64] */ r_eax = R32((u32)(0xa95f64u));
    /* 006cddcf: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cddd2: je 0x6cddde */ if (fZ) goto L_006cddde;
L_006cddd4:; BB(0x006cddd4);
    /* 006cddd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddd5: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cdddau); f_006bc76c();
    /* 006cddda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cdddb: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
L_006cddde:; BB(0x006cddde);
    /* 006cddde: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
    /* 006cdde5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cdde6: ret  */ FN_RET(0x006cdd30); r_esp += 4; return;
L_006cdde7:; BB(0x006cdde7);
    /* 006cdde7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cdde9: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cddeeu); f_006dc988();
    /* 006cddee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cddf0: je 0x6cde31 */ if (fZ) goto L_006cde31;
L_006cddf2:; BB(0x006cddf2);
    /* 006cddf2: mov eax, 2 */ r_eax = 0x2u;
    /* 006cddf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddf9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cddfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cddfc: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cddff: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cde04u); f_006dc59c();
    /* 006cde04: mov dword ptr [ebp + 0x20], 6 */ W32((u32)(r_ebp+0x20u), 0x6u);
    /* 006cde0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cde0c: ret  */ FN_RET(0x006cdd30); r_esp += 4; return;
L_006cde0d:; BB(0x006cde0d);
    /* 006cde0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cde0f: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cde14u); f_006dc988();
    /* 006cde14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cde16: je 0x6cde31 */ if (fZ) goto L_006cde31;
L_006cde18:; BB(0x006cde18);
    /* 006cde18: mov eax, 0x15 */ r_eax = 0x15u;
    /* 006cde1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cde1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cde1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cde21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cde22: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cde25: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6cde2au); f_006dc59c();
    /* 006cde2a: mov dword ptr [ebp + 0x20], 0xb */ W32((u32)(r_ebp+0x20u), 0xbu);
L_006cde31:; BB(0x006cde31);
    /* 006cde31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cde32: ret  */ FN_RET(0x006cdd30); r_esp += 4; return;
}

void f_006cde34(void) /* sub_6CDE34 */
{
    FN_ENTER(0x006cde34);
    /* 006cde34: mov eax, dword ptr [0xa96038] */ r_eax = R32((u32)(0xa96038u));
    /* 006cde39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cde3b: je 0x6cde41 */ if (fZ) goto L_006cde41;
L_006cde3d:; BB(0x006cde3d);
    /* 006cde3d: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006cde40: ret  */ FN_RET(0x006cde34); r_esp += 4; return;
L_006cde41:; BB(0x006cde41);
    /* 006cde41: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006cde46: ret  */ FN_RET(0x006cde34); r_esp += 4; return;
}

void f_006cde48(void) /* sub_6CDE48 */
{
    FN_ENTER(0x006cde48);
    /* 006cde48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cde49: mov ebp, esp */ r_ebp = r_esp;
    /* 006cde4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cde4d: push 0x8edb20 */ { u32 v = 0x8edb20u; r_esp -= 4; W32(r_esp, v); }
    /* 006cde52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cde58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cde59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cde60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cde63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cde66: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cde69: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cde6c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cde6f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cde72: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cde75: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cde78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cde7b: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6cde80u); f_006dc410();
    /* 006cde80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cde87: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cde8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cde8d: mov dword ptr [ecx], 0xb3bd70 */ W32((u32)(r_ecx), 0xb3bd70u);
    /* 006cde93: mov eax, dword ptr [0x9ced00] */ r_eax = R32((u32)(0x9ced00u));
    /* 006cde98: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006cde9b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cde9d: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006cdea0: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006cdea3: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006cdea6: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006cdea9: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006cdeac: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006cdeaf: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 006cdeb2: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 006cdeb5: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cdebau); f_006dc9fc();
    /* 006cdeba: mov dword ptr [eax*4 + 0xa9603c], 1 */ W32((u32)(r_eax*4+0xa9603cu), 0x1u);
    /* 006cdec5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cdec8: mov dword ptr [0xa96038], eax */ W32((u32)(0xa96038u), r_eax);
    /* 006cdecd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cdecf: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cded4u); f_00791748();
    /* 006cded4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cded5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cded8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cdedb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cdede: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cdee5: mov esp, ebp */ r_esp = r_ebp;
    /* 006cdee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cdee8: ret 8 */ FN_RET(0x006cde48); r_esp += 12; return;
}

void f_006cdea0(void)
{
    FN_ENTER(0x006cdea0);
    /* 006cdea0: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006cdea3: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006cdea6: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006cdea9: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006cdeac: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006cdeaf: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 006cdeb2: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 006cdeb5: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cdebau); f_006dc9fc();
    /* 006cdeba: mov dword ptr [eax*4 + 0xa9603c], 1 */ W32((u32)(r_eax*4+0xa9603cu), 0x1u);
    /* 006cdec5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cdec8: mov dword ptr [0xa96038], eax */ W32((u32)(0xa96038u), r_eax);
    /* 006cdecd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cdecf: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cded4u); f_00791748();
    /* 006cded4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cded5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cded8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cdedb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cdede: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cdee5: mov esp, ebp */ r_esp = r_ebp;
    /* 006cdee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cdee8: ret 8 */ FN_RET(0x006cdea0); r_esp += 12; return;
}

void f_006cdeec(void) /* sub_6CDEEC */
{
    FN_ENTER(0x006cdeec);
    /* 006cdeec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cdeed: mov ebp, esp */ r_ebp = r_esp;
    /* 006cdeef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cdef1: push 0x8edb48 */ { u32 v = 0x8edb48u; r_esp -= 4; W32(r_esp, v); }
    /* 006cdef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cdefc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cdefd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cdf04: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cdf07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cdf0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cdf0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cdf10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cdf13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006cdf16: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 006cdf19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdf1b: je 0x6cdf34 */ if (fZ) goto L_006cdf34;
L_006cdf1d:; BB(0x006cdf1d);
    /* 006cdf1d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cdf22u); f_008173b4();
    /* 006cdf22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdf24: jne 0x6cdfd6 */ if (!fZ) goto L_006cdfd6;
L_006cdf2a:; BB(0x006cdf2a);
    /* 006cdf2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdf2d: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006cdf34:; BB(0x006cdf34);
    /* 006cdf34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdf37: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cdf39: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cdf3cu); call_ind(t); }
    /* 006cdf3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdf3e: jne 0x6cdf4e */ if (!fZ) goto L_006cdf4e;
L_006cdf40:; BB(0x006cdf40);
    /* 006cdf40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cdf43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cdf4a: mov esp, ebp */ r_esp = r_ebp;
    /* 006cdf4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cdf4d: ret  */ FN_RET(0x006cdeec); r_esp += 4; return;
L_006cdf4e:; BB(0x006cdf4e);
    /* 006cdf4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdf51: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6cdf56u); f_006dc8fc();
    /* 006cdf56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdf58: je 0x6cdfd6 */ if (fZ) goto L_006cdfd6;
L_006cdf5a:; BB(0x006cdf5a);
    /* 006cdf5a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdf5d: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 006cdf60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdf62: je 0x6cdfbe */ if (fZ) goto L_006cdfbe;
L_006cdf64:; BB(0x006cdf64);
    /* 006cdf64: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdf67: jne 0x6cdfbe */ if (!fZ) goto L_006cdfbe;
L_006cdf69:; BB(0x006cdf69);
    /* 006cdf69: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006cdf70: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cdf72: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cdf77u); f_005caba4();
    /* 006cdf77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cdf78: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006cdf7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cdf7d: je 0x6cdfa6 */ if (fZ) goto L_006cdfa6;
L_006cdf7f:; BB(0x006cdf7f);
    /* 006cdf7f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006cdf86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cdf8d: push 0x6cc2b0 */ { u32 v = 0x6cc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cdf92: mov ecx, eax */ r_ecx = r_eax;
    /* 006cdf94: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cdf9a: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cdf9fu); f_00788938();
    /* 006cdf9f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006cdfa6:; BB(0x006cdfa6);
    /* 006cdfa6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cdfad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdfb0: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cdfb3: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cdfb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cdfb8: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cdfbdu); f_006d7338();
    /* 006cdfbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cdfbe:; BB(0x006cdfbe);
    /* 006cdfbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdfc1: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6cdfc6u); f_006dc4b0();
    /* 006cdfc6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cdfc9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cdfcd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cdfd2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006cdfd6:; BB(0x006cdfd6);
    /* 006cdfd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cdfd9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cdfe0: mov esp, ebp */ r_esp = r_ebp;
    /* 006cdfe2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cdfe3: ret  */ FN_RET(0x006cdeec); r_esp += 4; return;
}

void f_006cdfe4(void) /* sub_6CDFE4 */
{
    FN_ENTER(0x006cdfe4);
    /* 006cdfe4: mov dword ptr [0xa9602c], 0x3f800000 */ W32((u32)(0xa9602cu), 0x3f800000u);
    /* 006cdfee: mov dword ptr [0xa96030], 0x41000000 */ W32((u32)(0xa96030u), 0x41000000u);
    /* 006cdff8: mov dword ptr [0xa96034], 0x3fc00000 */ W32((u32)(0xa96034u), 0x3fc00000u);
    /* 006ce002: ret  */ FN_RET(0x006cdfe4); r_esp += 4; return;
}

