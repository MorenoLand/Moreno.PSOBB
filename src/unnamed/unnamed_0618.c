#include "protos.h"

void f_0061802c(void) /* sub_61802C */
{
    FN_ENTER(0x0061802c);
    /* 0061802c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061802d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061802f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618031: push 0x8e1782 */ { u32 v = 0x8e1782u; r_esp -= 4; W32(r_esp, v); }
    /* 00618036: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061803c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061803d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618044: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061804a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061804d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00618050: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00618053: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00618056: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0061805d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00618060: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00618063: je 0x6182d8 */ if (fZ) goto L_006182d8;
L_00618069:; BB(0x00618069);
    /* 00618069: mov eax, 0x9304e0 */ r_eax = 0x9304e0u;
    /* 0061806e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00618070: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00618073: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00618076: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00618079: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0061807c: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00618082: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00618085: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0061808b: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 00618091: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 00618097: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 0061809d: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 006180a3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006180a6: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 006180ac: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006180af: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 006180b5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006180b8: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 006180be: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006180c1: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 006180c7: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006180ca: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 006180d0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006180d3: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 006180d9: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006180dc: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 006180e2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006180e5: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 006180eb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006180ee: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 006180f4: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006180f7: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 006180fd: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00618100: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00618106: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00618109: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0061810c: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0061810f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00618112: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00618115: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 0061811b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061811d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00618120: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00618123: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00618126: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0061812c: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 00618132: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 00618138: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0061813e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x618143u); f_005b8610();
    /* 00618143: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 00618149: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0061814f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00618151: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x618156u); f_005b8624();
    /* 00618156: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00618159: mov eax, 0x930480 */ r_eax = 0x930480u;
    /* 0061815e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00618160: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00618163: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00618166: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00618169: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0061816c: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0061816f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00618172: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00618175: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 00618178: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0061817b: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0061817e: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00618181: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00618184: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00618187: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0061818a: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0061818d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00618190: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00618193: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00618196: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00618199: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0061819c: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0061819f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006181a2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006181a5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006181a8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006181ab: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006181ae: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006181b1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006181b4: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006181b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006181ba: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006181bd: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006181c0: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006181c3: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006181c6: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 006181c9: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006181cc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006181cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006181d2: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 006181d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006181da: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006181dd: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 006181e0: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 006181e3: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006181e6: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 006181e9: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 006181ec: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 006181ef: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6181f4u); f_005b8610();
    /* 006181f4: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 006181fa: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006181fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006181ff: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x618204u); f_005b8624();
    /* 00618204: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00618207: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061820a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061820d: cmp edx, dword ptr [0x9c4b54] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c4b54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618213: jne 0x618227 */ if (!fZ) goto L_00618227;
L_00618215:; BB(0x00618215);
    /* 00618215: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 0061821b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061821e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00618221: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00618224: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00618227:; BB(0x00618227);
    /* 00618227: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061822a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0061822c: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 0061822f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618230: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x618235u); f_0050b510();
    /* 00618235: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00618237: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618238: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x61823du); f_0050b510();
    /* 0061823d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00618244: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00618249: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61824eu); f_005caba4();
    /* 0061824e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618251: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00618254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618256: je 0x618282 */ if (fZ) goto L_00618282;
L_00618258:; BB(0x00618258);
    /* 00618258: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061825f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00618266: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00618269: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0061826f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618270: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618276: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x61827bu); f_006441f4();
    /* 0061827b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00618282:; BB(0x00618282);
    /* 00618282: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00618289: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00618290: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00618295: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61829au); f_005caba4();
    /* 0061829a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061829b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061829e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006182a0: je 0x6182c9 */ if (fZ) goto L_006182c9;
L_006182a2:; BB(0x006182a2);
    /* 006182a2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006182a9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006182b0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006182b3: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 006182b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006182b7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006182bd: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6182c2u); f_006441f4();
    /* 006182c2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006182c9:; BB(0x006182c9);
    /* 006182c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006182d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006182d3: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x6182d8u); f_0064de10();
L_006182d8:; BB(0x006182d8);
    /* 006182d8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006182db: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006182de: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006182e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006182e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006182eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006182ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006182ee: ret  */ FN_RET(0x0061802c); r_esp += 4; return;
}

void f_006182f0(void)
{
    FN_ENTER(0x006182f0);
    /* 006182f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006182f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006182f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006182f5: push 0x8e17c2 */ { u32 v = 0x8e17c2u; r_esp -= 4; W32(r_esp, v); }
    /* 006182fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618308: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061830b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061830e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00618311: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00618314: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00618317: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061831c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061831f: je 0x618378 */ if (fZ) goto L_00618378;
L_00618321:; BB(0x00618321);
    /* 00618321: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00618328: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0061832d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x618332u); f_005caba4();
    /* 00618332: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00618335: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618338: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0061833b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061833d: je 0x618371 */ if (fZ) goto L_00618371;
L_0061833f:; BB(0x0061833f);
    /* 0061833f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00618346: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061834d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618350: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00618353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618354: call 0x6183e4 */ r_esp -= 4; W32(r_esp, 0x618359u); f_006183e4();
    /* 00618359: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00618360:; BB(0x00618360);
    /* 00618360: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00618363: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618366: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061836d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061836f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618370: ret  */ FN_RET(0x006182f0); r_esp += 4; return;
L_00618371:; BB(0x00618371);
    /* 00618371: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618373: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00618376: jmp 0x618360 */ goto L_00618360;
L_00618378:; BB(0x00618378);
    /* 00618378: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x61837du); f_0078b1c4();
    /* 0061837d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618380: jne 0x618321 */ if (!fZ) goto L_00618321;
L_00618382:; BB(0x00618382);
    /* 00618382: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00618387: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061838a: jne 0x618321 */ if (!fZ) goto L_00618321;
L_0061838c:; BB(0x0061838c);
    /* 0061838c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00618393: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 00618398: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61839du); f_005caba4();
    /* 0061839d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006183a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006183a3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006183a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006183a8: je 0x6183dc */ if (fZ) goto L_006183dc;
L_006183aa:; BB(0x006183aa);
    /* 006183aa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006183b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006183b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006183bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006183be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006183bf: call 0x6183e4 */ r_esp -= 4; W32(r_esp, 0x6183c4u); f_006183e4();
    /* 006183c4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006183cb:; BB(0x006183cb);
    /* 006183cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006183ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006183d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006183d8: mov esp, ebp */ r_esp = r_ebp;
    /* 006183da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006183db: ret  */ FN_RET(0x006182f0); r_esp += 4; return;
L_006183dc:; BB(0x006183dc);
    /* 006183dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006183de: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006183e1: jmp 0x6183cb */ goto L_006183cb;
}

void f_006183e4(void) /* sub_6183E4 */
{
    FN_ENTER(0x006183e4);
    /* 006183e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006183e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006183e7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006183eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006183ed: call 0x618408 */ r_esp -= 4; W32(r_esp, 0x6183f2u); f_00618408();
    /* 006183f2: mov dword ptr [ebx], 0xb265c0 */ W32((u32)(r_ebx), 0xb265c0u);
    /* 006183f8: mov edx, dword ptr [0x9c4b50] */ r_edx = R32((u32)(0x9c4b50u));
    /* 006183fe: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00618401: mov eax, ebx */ r_eax = r_ebx;
    /* 00618403: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00618404: ret 4 */ FN_RET(0x006183e4); r_esp += 8; return;
}

void f_00618408(void) /* sub_618408 */
{
    FN_ENTER(0x00618408);
    /* 00618408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618409: mov ebp, esp */ r_ebp = r_esp;
    /* 0061840b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061840d: push 0x8e17dc */ { u32 v = 0x8e17dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00618412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618420: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00618426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00618429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061842c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061842f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618432: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618438: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061843b: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x618440u); f_0064df84();
    /* 00618440: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00618447: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061844a: mov dword ptr [ecx], 0xb26040 */ W32((u32)(r_ecx), 0xb26040u);
    /* 00618450: mov eax, dword ptr [0x9c4b4c] */ r_eax = R32((u32)(0x9c4b4cu));
    /* 00618455: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00618457: push 0x9c4b58 */ { u32 v = 0x9c4b58u; r_esp -= 4; W32(r_esp, v); }
    /* 0061845c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061845f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x618464u); f_007b9a88();
    /* 00618464: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618467: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61846cu); f_007b4f54();
    /* 0061846c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061846f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618471: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00618474: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00618477: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0061847a: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0061847d: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00618480: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618483: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00618486: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00618489: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0061848c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0061848f: mov dword ptr [edx + 0x300], edi */ W32((u32)(r_edx+0x300u), r_edi);
    /* 00618495: mov dword ptr [edx + 0x304], ecx */ W32((u32)(r_edx+0x304u), r_ecx);
    /* 0061849b: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 006184a1: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 006184a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006184aa: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 006184ad: fadd dword ptr [0x9c4b5c] */ ST(0) = ST(0) + R_F32((u32)(0x9c4b5cu));
    /* 006184b3: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 006184b6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6184bbu); f_005b8610();
    /* 006184bb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006184be: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 006184c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006184c6: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006184c9: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6184ceu); f_005b8624();
    /* 006184ce: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006184d1: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006184d4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006184d7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006184da: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006184dd: mov eax, edx */ r_eax = r_edx;
    /* 006184df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006184e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006184e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006184eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006184ec: ret 4 */ FN_RET(0x00618408); r_esp += 8; return;
}

void f_006184f0(void) /* sub_6184F0 */
{
    FN_ENTER(0x006184f0);
    /* 006184f0: mov dword ptr [0xa8eb30], 0x3f800000 */ W32((u32)(0xa8eb30u), 0x3f800000u);
    /* 006184fa: mov dword ptr [0xa8eb34], 0x41000000 */ W32((u32)(0xa8eb34u), 0x41000000u);
    /* 00618504: mov dword ptr [0xa8eb38], 0x3fc00000 */ W32((u32)(0xa8eb38u), 0x3fc00000u);
    /* 0061850e: ret  */ FN_RET(0x006184f0); r_esp += 4; return;
}

void f_00618510(void) /* sub_618510 */
{
    FN_ENTER(0x00618510);
    /* 00618510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618511: mov ebp, esp */ r_ebp = r_esp;
    /* 00618513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618515: push 0x8e17f8 */ { u32 v = 0x8e17f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061851a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618521: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618528: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061852b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061852e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00618531: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00618534: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00618537: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061853a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061853d: mov dword ptr [ecx], 0xb261a0 */ W32((u32)(r_ecx), 0xb261a0u);
    /* 00618543: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061854a: call 0x617784 */ r_esp -= 4; W32(r_esp, 0x61854fu); f_00617784();
    /* 0061854f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618552: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00618559: mov esp, ebp */ r_esp = r_ebp;
    /* 0061855b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061855c: ret  */ FN_RET(0x00618510); r_esp += 4; return;
}

void f_00618560(void) /* sub_618560 */
{
    FN_ENTER(0x00618560);
    /* 00618560: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00618561: mov edi, ecx */ r_edi = r_ecx;
    /* 00618563: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618567: mov ecx, edi */ r_ecx = r_edi;
    /* 00618569: call 0x618408 */ r_esp -= 4; W32(r_esp, 0x61856eu); f_00618408();
    /* 0061856e: mov dword ptr [edi], 0xb261a0 */ W32((u32)(r_edi), 0xb261a0u);
    /* 00618574: mov edx, dword ptr [0x9c4b54] */ r_edx = R32((u32)(0x9c4b54u));
    /* 0061857a: mov eax, dword ptr [0xa8eb3c] */ r_eax = R32((u32)(0xa8eb3cu));
    /* 0061857f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00618582: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00618584: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00618587: mov eax, edi */ r_eax = r_edi;
    /* 00618589: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061858a: ret 4 */ FN_RET(0x00618560); r_esp += 8; return;
}

void f_00618590(void) /* sub_618590 */
{
    FN_ENTER(0x00618590);
    /* 00618590: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00618591: mov edi, ecx */ r_edi = r_ecx;
    /* 00618593: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00618597: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0061859a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061859d: je 0x6185a3 */ if (fZ) goto L_006185a3;
L_0061859f:; BB(0x0061859f);
    /* 0061859f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006185a0: ret 8 */ FN_RET(0x00618590); r_esp += 12; return;
L_006185a3:; BB(0x006185a3);
    /* 006185a3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006185a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006185a9: je 0x6185c4 */ if (fZ) goto L_006185c4;
L_006185ab:; BB(0x006185ab);
    /* 006185ab: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006185ad: mov ecx, edi */ r_ecx = r_edi;
    /* 006185af: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x6185b5u); call_ind(t); }
    /* 006185b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006185b7: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 006185ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006185bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006185bc: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x6185c1u); f_005c9874();
    /* 006185c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006185c4:; BB(0x006185c4);
    /* 006185c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006185c5: mov eax, 1 */ r_eax = 0x1u;
    /* 006185ca: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 006185d1: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x6185d6u); f_008113bc();
    /* 006185d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006185d7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006185db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006185e0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006185e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006185e5: ret 8 */ FN_RET(0x00618590); r_esp += 12; return;
}

void f_006185ae(void)
{
    FN_ENTER(0x006185ae);
    /* 006185ae: iretd  */ UNSUP(0x006185ae, "iretd ");
    /* 006185af: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x6185b5u); call_ind(t); }
    /* 006185b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006185b7: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 006185ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006185bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006185bc: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x6185c1u); f_005c9874();
    /* 006185c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006185c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006185c5: mov eax, 1 */ r_eax = 0x1u;
    /* 006185ca: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 006185d1: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x6185d6u); f_008113bc();
    /* 006185d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006185d7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006185db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006185e0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006185e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006185e5: ret 8 */ FN_RET(0x006185ae); r_esp += 12; return;
}

void f_006185e8(void) /* sub_6185E8 */
{
    FN_ENTER(0x006185e8);
    /* 006185e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006185e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006185eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006185ed: push 0x8e1814 */ { u32 v = 0x8e1814u; r_esp -= 4; W32(r_esp, v); }
    /* 006185f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006185f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006185f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618600: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618603: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00618606: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00618609: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061860c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061860f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00618612: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618615: mov dword ptr [ecx], 0xb25ee0 */ W32((u32)(r_ecx), 0xb25ee0u);
    /* 0061861b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00618622: call 0x61758c */ r_esp -= 4; W32(r_esp, 0x618627u); f_0061758c();
    /* 00618627: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061862a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00618631: mov esp, ebp */ r_esp = r_ebp;
    /* 00618633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618634: ret  */ FN_RET(0x006185e8); r_esp += 4; return;
}

void f_00618638(void) /* sub_618638 */
{
    FN_ENTER(0x00618638);
    /* 00618638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00618639: mov edi, ecx */ r_edi = r_ecx;
    /* 0061863b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061863f: mov ecx, edi */ r_ecx = r_edi;
    /* 00618641: call 0x617cbc */ r_esp -= 4; W32(r_esp, 0x618646u); f_00617cbc();
    /* 00618646: mov dword ptr [edi], 0xb25ee0 */ W32((u32)(r_edi), 0xb25ee0u);
    /* 0061864c: mov edx, dword ptr [0x9c4b44] */ r_edx = R32((u32)(0x9c4b44u));
    /* 00618652: mov eax, dword ptr [0xa8eb3c] */ r_eax = R32((u32)(0xa8eb3cu));
    /* 00618657: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0061865a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0061865c: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0061865f: mov eax, edi */ r_eax = r_edi;
    /* 00618661: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00618662: ret 4 */ FN_RET(0x00618638); r_esp += 8; return;
}

void f_00618668(void) /* sub_618668 */
{
    FN_ENTER(0x00618668);
    /* 00618668: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618669: mov ebp, esp */ r_ebp = r_esp;
    /* 0061866b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061866d: push 0x8e1872 */ { u32 v = 0x8e1872u; r_esp -= 4; W32(r_esp, v); }
    /* 00618672: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618679: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618680: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618683: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00618686: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00618689: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061868c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061868f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x618694u); f_00807ac0();
    /* 00618694: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 0061869a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061869d: je 0x618817 */ if (fZ) goto L_00618817;
L_006186a3:; BB(0x006186a3);
    /* 006186a3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006186a6: je 0x61875a */ if (fZ) goto L_0061875a;
L_006186ac:; BB(0x006186ac);
    /* 006186ac: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006186b3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006186b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6186bdu); f_008581c5();
    /* 006186bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006186be: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006186c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006186c3: je 0x618756 */ if (fZ) goto L_00618756;
L_006186c9:; BB(0x006186c9);
    /* 006186c9: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006186d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006186d7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006186da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006186dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006186dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006186de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006186df: push 0x9c4aec */ { u32 v = 0x9c4aecu; r_esp -= 4; W32(r_esp, v); }
    /* 006186e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006186e6: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6186ebu); f_005b7a84();
    /* 006186eb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006186ee: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006186f5:; BB(0x006186f5);
    /* 006186f5: mov dword ptr [0xa8eb40], eax */ W32((u32)(0xa8eb40u), r_eax);
    /* 006186fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00618701: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00618703: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x618708u); f_008581c5();
    /* 00618708: push 0x930754 */ { u32 v = 0x930754u; r_esp -= 4; W32(r_esp, v); }
    /* 0061870d: mov dword ptr [0xa8eb3c], eax */ W32((u32)(0xa8eb3cu), r_eax);
    /* 00618712: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x618717u); f_008009dc();
    /* 00618717: push 0x930770 */ { u32 v = 0x930770u; r_esp -= 4; W32(r_esp, v); }
    /* 0061871c: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 00618722: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00618724: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x618729u); f_008009dc();
    /* 00618729: push 0x930790 */ { u32 v = 0x930790u; r_esp -= 4; W32(r_esp, v); }
    /* 0061872e: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 00618734: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00618737: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61873cu); f_008009dc();
    /* 0061873c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061873f: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 00618745: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_00618748:; BB(0x00618748);
    /* 00618748: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061874b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00618752: mov esp, ebp */ r_esp = r_ebp;
    /* 00618754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618755: ret  */ FN_RET(0x00618668); r_esp += 4; return;
L_00618756:; BB(0x00618756);
    /* 00618756: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00618758: jmp 0x6186f5 */ goto L_006186f5;
L_0061875a:; BB(0x0061875a);
    /* 0061875a: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061875d: je 0x618772 */ if (fZ) goto L_00618772;
L_0061875f:; BB(0x0061875f);
    /* 0061875f: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618762: je 0x618772 */ if (fZ) goto L_00618772;
L_00618764:; BB(0x00618764);
    /* 00618764: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618767: je 0x618772 */ if (fZ) goto L_00618772;
L_00618769:; BB(0x00618769);
    /* 00618769: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061876c: jne 0x6186ac */ if (!fZ) goto L_006186ac;
L_00618772:; BB(0x00618772);
    /* 00618772: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00618779: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061877e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x618783u); f_008581c5();
    /* 00618783: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618784: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00618787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618789: je 0x618813 */ if (fZ) goto L_00618813;
L_0061878f:; BB(0x0061878f);
    /* 0061878f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00618796: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061879d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006187a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006187a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006187a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006187a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006187a5: push 0x9c4b0c */ { u32 v = 0x9c4b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006187aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006187ac: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6187b1u); f_005b7a84();
    /* 006187b1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006187b4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006187bb:; BB(0x006187bb);
    /* 006187bb: mov dword ptr [0xa8eb40], eax */ W32((u32)(0xa8eb40u), r_eax);
    /* 006187c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006187c7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006187c9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6187ceu); f_008581c5();
    /* 006187ce: push 0x9306f8 */ { u32 v = 0x9306f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006187d3: mov dword ptr [0xa8eb3c], eax */ W32((u32)(0xa8eb3cu), r_eax);
    /* 006187d8: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6187ddu); f_008009dc();
    /* 006187dd: push 0x930714 */ { u32 v = 0x930714u; r_esp -= 4; W32(r_esp, v); }
    /* 006187e2: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 006187e8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006187ea: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6187efu); f_008009dc();
    /* 006187ef: push 0x930734 */ { u32 v = 0x930734u; r_esp -= 4; W32(r_esp, v); }
    /* 006187f4: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 006187fa: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006187fd: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x618802u); f_008009dc();
    /* 00618802: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00618805: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 0061880b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061880e: jmp 0x618748 */ goto L_00618748;
L_00618813:; BB(0x00618813);
    /* 00618813: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00618815: jmp 0x6187bb */ goto L_006187bb;
L_00618817:; BB(0x00618817);
    /* 00618817: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061881a: je 0x61882f */ if (fZ) goto L_0061882f;
L_0061881c:; BB(0x0061881c);
    /* 0061881c: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061881f: je 0x61882f */ if (fZ) goto L_0061882f;
L_00618821:; BB(0x00618821);
    /* 00618821: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618824: je 0x61882f */ if (fZ) goto L_0061882f;
L_00618826:; BB(0x00618826);
    /* 00618826: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618829: jne 0x6186a3 */ if (!fZ) goto L_006186a3;
L_0061882f:; BB(0x0061882f);
    /* 0061882f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00618836: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061883b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x618840u); f_008581c5();
    /* 00618840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618841: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00618844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618846: je 0x6188d0 */ if (fZ) goto L_006188d0;
L_0061884c:; BB(0x0061884c);
    /* 0061884c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00618853: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0061885a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061885d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061885f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618862: push 0x9c4b2c */ { u32 v = 0x9c4b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00618867: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00618869: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61886eu); f_005b7a84();
    /* 0061886e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618871: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00618878:; BB(0x00618878);
    /* 00618878: mov dword ptr [0xa8eb40], eax */ W32((u32)(0xa8eb40u), r_eax);
    /* 0061887d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00618884: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00618886: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61888bu); f_008581c5();
    /* 0061888b: push 0x9306ac */ { u32 v = 0x9306acu; r_esp -= 4; W32(r_esp, v); }
    /* 00618890: mov dword ptr [0xa8eb3c], eax */ W32((u32)(0xa8eb3cu), r_eax);
    /* 00618895: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61889au); f_008009dc();
    /* 0061889a: push 0x9306c0 */ { u32 v = 0x9306c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061889f: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 006188a5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006188a7: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6188acu); f_008009dc();
    /* 006188ac: push 0x9306dc */ { u32 v = 0x9306dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006188b1: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 006188b7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006188ba: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6188bfu); f_008009dc();
    /* 006188bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006188c2: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 006188c8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006188cb: jmp 0x618748 */ goto L_00618748;
L_006188d0:; BB(0x006188d0);
    /* 006188d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006188d2: jmp 0x618878 */ goto L_00618878;
}

void f_006188d4(void) /* sub_6188D4 */
{
    FN_ENTER(0x006188d4);
    /* 006188d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006188d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006188d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006188d9: call 0x618510 */ r_esp -= 4; W32(r_esp, 0x6188deu); f_00618510();
    /* 006188de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006188e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006188e4: jne 0x6188ea */ if (!fZ) goto L_006188ea;
L_006188e6:; BB(0x006188e6);
    /* 006188e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006188e7: ret 4 */ FN_RET(0x006188d4); r_esp += 8; return;
L_006188ea:; BB(0x006188ea);
    /* 006188ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006188eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6188f0u); f_005c2f74();
    /* 006188f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006188f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006188f2: ret 4 */ FN_RET(0x006188d4); r_esp += 8; return;
}

void f_006188f8(void) /* sub_6188F8 */
{
    FN_ENTER(0x006188f8);
    /* 006188f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006188f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006188fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006188fd: call 0x6185e8 */ r_esp -= 4; W32(r_esp, 0x618902u); f_006185e8();
    /* 00618902: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00618906: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618908: jne 0x61890e */ if (!fZ) goto L_0061890e;
L_0061890a:; BB(0x0061890a);
    /* 0061890a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061890b: ret 4 */ FN_RET(0x006188f8); r_esp += 8; return;
L_0061890e:; BB(0x0061890e);
    /* 0061890e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061890f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x618914u); f_005c2f74();
    /* 00618914: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618915: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00618916: ret 4 */ FN_RET(0x006188f8); r_esp += 8; return;
}

void f_0061891c(void) /* sub_61891C */
{
    FN_ENTER(0x0061891c);
    /* 0061891c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061891d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061891f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618921: call 0x618940 */ r_esp -= 4; W32(r_esp, 0x618926u); f_00618940();
    /* 00618926: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061892a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061892c: jne 0x618932 */ if (!fZ) goto L_00618932;
L_0061892e:; BB(0x0061892e);
    /* 0061892e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061892f: ret 4 */ FN_RET(0x0061891c); r_esp += 8; return;
L_00618932:; BB(0x00618932);
    /* 00618932: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618933: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x618938u); f_005c2f74();
    /* 00618938: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618939: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061893a: ret 4 */ FN_RET(0x0061891c); r_esp += 8; return;
}

void f_00618940(void) /* sub_618940 */
{
    FN_ENTER(0x00618940);
    /* 00618940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618941: mov ebp, esp */ r_ebp = r_esp;
    /* 00618943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618945: push 0x8e188c */ { u32 v = 0x8e188cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061894a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618958: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061895b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061895e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00618961: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00618964: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00618967: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061896a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00618971: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618974: mov dword ptr [eax], 0xb267c0 */ W32((u32)(r_eax), 0xb267c0u);
    /* 0061897a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061897b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x618980u); f_007b4e84();
    /* 00618980: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618981: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618984: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x618989u); f_007b9c8c();
    /* 00618989: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00618990: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618993: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x618998u); f_0078638c();
    /* 00618998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061899b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006189a2: mov esp, ebp */ r_esp = r_ebp;
    /* 006189a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006189a5: ret  */ FN_RET(0x00618940); r_esp += 4; return;
}

void f_006189a8(void) /* sub_6189A8 */
{
    FN_ENTER(0x006189a8);
    /* 006189a8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 006189af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189b1: je 0x6189c3 */ if (fZ) goto L_006189c3;
L_006189b3:; BB(0x006189b3);
    /* 006189b3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006189b7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006189bb: call 0x772e60 */ r_esp -= 4; W32(r_esp, 0x6189c0u); f_00772e60();
    /* 006189c0: ret 8 */ FN_RET(0x006189a8); r_esp += 12; return;
L_006189c3:; BB(0x006189c3);
    /* 006189c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006189c5: ret 8 */ FN_RET(0x006189a8); r_esp += 12; return;
}

void f_006189c8(void) /* sub_6189C8 */
{
    FN_ENTER(0x006189c8);
    /* 006189c8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 006189cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006189d1: je 0x6189f2 */ if (fZ) goto L_006189f2;
L_006189d3:; BB(0x006189d3);
    /* 006189d3: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006189d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006189d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006189da: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006189de: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006189e2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006189e6: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006189ea: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x6189efu); f_00773afc();
    /* 006189ef: ret 0x18 */ FN_RET(0x006189c8); r_esp += 28; return;
L_006189f2:; BB(0x006189f2);
    /* 006189f2: fld dword ptr [0x930810] */ FPUSH(R_F32((u32)(0x930810u)));
    /* 006189f8: ret 0x18 */ FN_RET(0x006189c8); r_esp += 28; return;
}

void f_006189fc(void) /* sub_6189FC */
{
    FN_ENTER(0x006189fc);
    /* 006189fc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00618a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a05: je 0x618a1b */ if (fZ) goto L_00618a1b;
L_00618a07:; BB(0x00618a07);
    /* 00618a07: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618a0b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618a0f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618a13: call 0x77758c */ r_esp -= 4; W32(r_esp, 0x618a18u); f_0077758c();
    /* 00618a18: ret 0xc */ FN_RET(0x006189fc); r_esp += 16; return;
L_00618a1b:; BB(0x00618a1b);
    /* 00618a1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618a1d: ret 0xc */ FN_RET(0x006189fc); r_esp += 16; return;
}

void f_00618a20(void) /* sub_618A20 */
{
    FN_ENTER(0x00618a20);
    /* 00618a20: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00618a27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a29: je 0x618a3f */ if (fZ) goto L_00618a3f;
L_00618a2b:; BB(0x00618a2b);
    /* 00618a2b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618a2f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618a33: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618a37: call 0x7775ec */ r_esp -= 4; W32(r_esp, 0x618a3cu); f_007775ec();
    /* 00618a3c: ret 0xc */ FN_RET(0x00618a20); r_esp += 16; return;
L_00618a3f:; BB(0x00618a3f);
    /* 00618a3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618a41: ret 0xc */ FN_RET(0x00618a20); r_esp += 16; return;
}

void f_00618a48(void)
{
    FN_ENTER(0x00618a48);
    /* 00618a48: mov ecx, dword ptr [0xa8eb88] */ r_ecx = R32((u32)(0xa8eb88u));
    /* 00618a4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618a50: je 0x618a65 */ if (fZ) goto L_00618a65;
L_00618a52:; BB(0x00618a52);
    /* 00618a52: je 0x618a5b */ if (fZ) goto L_00618a5b;
L_00618a54:; BB(0x00618a54);
    /* 00618a54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00618a56: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x618a5bu); f_004066a8();
L_00618a5b:; BB(0x00618a5b);
    /* 00618a5b: mov dword ptr [0xa8eb88], 0 */ W32((u32)(0xa8eb88u), 0x0u);
L_00618a65:; BB(0x00618a65);
    /* 00618a65: ret  */ FN_RET(0x00618a48); r_esp += 4; return;
}

void f_00618a68(void)
{
    FN_ENTER(0x00618a68);
    /* 00618a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618a69: mov ebp, esp */ r_ebp = r_esp;
    /* 00618a6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618a6d: push 0x8e18b4 */ { u32 v = 0x8e18b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00618a72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618a79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618a80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618a83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00618a86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00618a89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00618a8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00618a8f: push 0x3a8 */ { u32 v = 0x3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00618a94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00618a9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x618aa0u); f_005caba4();
    /* 00618aa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618aa1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00618aa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618aa6: je 0x618adf */ if (fZ) goto L_00618adf;
L_00618aa8:; BB(0x00618aa8);
    /* 00618aa8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00618aaf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00618ab6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618ab9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618abf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618ac2: call 0x618ae4 */ r_esp -= 4; W32(r_esp, 0x618ac7u); f_00618ae4();
    /* 00618ac7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618aca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00618ad1:; BB(0x00618ad1);
    /* 00618ad1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618ad4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00618adb: mov esp, ebp */ r_esp = r_ebp;
    /* 00618add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618ade: ret  */ FN_RET(0x00618a68); r_esp += 4; return;
L_00618adf:; BB(0x00618adf);
    /* 00618adf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618ae1: jmp 0x618ad1 */ goto L_00618ad1;
}

void f_00618ae4(void) /* sub_618AE4 */
{
    FN_ENTER(0x00618ae4);
    /* 00618ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 00618ae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618ae9: push 0x8e18d0 */ { u32 v = 0x8e18d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618aee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00618af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618af5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00618afc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618aff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00618b02: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00618b05: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00618b08: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00618b0b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00618b0e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618b11: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00618b14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00618b17: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x618b1cu); f_007865e8();
    /* 00618b1c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00618b23: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618b26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00618b29: mov dword ptr [ecx], 0xb267c0 */ W32((u32)(r_ecx), 0xb267c0u);
    /* 00618b2f: mov eax, dword ptr [0x9c4b9c] */ r_eax = R32((u32)(0x9c4b9cu));
    /* 00618b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618b35: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00618b38: call dword ptr [0xb2690c] */ { u32 t = R32((u32)(0xb2690cu)); r_esp -= 4; W32(r_esp, 0x618b3eu); call_ind(t); }
    /* 00618b3e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618b41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00618b43: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00618b46: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00618b49: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00618b4c: push 0x9c4ba0 */ { u32 v = 0x9c4ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618b51: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00618b57: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00618b5d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618b60: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00618b66: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00618b6c: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00618b72: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00618b78: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00618b7e: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00618b84: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618b87: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00618b8d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618b90: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00618b96: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00618b99: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00618b9f: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00618ba2: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00618ba8: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00618bab: mov edx, dword ptr [0xa8eb88] */ r_edx = R32((u32)(0xa8eb88u));
    /* 00618bb1: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00618bb7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00618bba: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00618bbd: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00618bc3: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00618bc6: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00618bc9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x618bceu); f_007b9a88();
    /* 00618bce: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618bd1: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x618bd6u); f_007b999c();
    /* 00618bd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618bd7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618bda: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x618bdfu); f_007b4f54();
    /* 00618bdf: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00618be4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618be7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618be9: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x618beeu); f_007b52c4();
    /* 00618bee: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00618bf1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00618bf4: mov dword ptr [eax + 0x37c], 0x43c80000 */ W32((u32)(r_eax+0x37cu), 0x43c80000u);
    /* 00618bfe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618c00: mov word ptr [eax + 0x32e], bx */ W16((u32)(r_eax+0x32eu), (u16)r_ebx);
    /* 00618c07: mov edx, 0x12c */ r_edx = 0x12cu;
    /* 00618c0c: mov word ptr [eax + 0x334], dx */ W16((u32)(r_eax+0x334u), (u16)r_edx);
    /* 00618c13: mov word ptr [eax + 0x2bc], dx */ W16((u32)(r_eax+0x2bcu), (u16)r_edx);
    /* 00618c1a: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00618c1d: mov esi, dword ptr [edi + 0x14] */ r_esi = R32((u32)(r_edi+0x14u));
    /* 00618c20: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618c23: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00618c26: mov dword ptr [eax + 0x384], 0x42700000 */ W32((u32)(r_eax+0x384u), 0x42700000u);
    /* 00618c30: mov dword ptr [eax + 0x380], esi */ W32((u32)(r_eax+0x380u), r_esi);
    /* 00618c36: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00618c39: mov dword ptr [eax + 0x38c], 0 */ W32((u32)(r_eax+0x38cu), 0x0u);
    /* 00618c43: mov dword ptr [eax + 0x388], ebx */ W32((u32)(r_eax+0x388u), r_ebx);
    /* 00618c49: mov dword ptr [eax + 0x394], ebx */ W32((u32)(r_eax+0x394u), r_ebx);
    /* 00618c4f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00618c52: mov dword ptr [eax + 0x390], 0 */ W32((u32)(r_eax+0x390u), 0x0u);
    /* 00618c5c: mov dword ptr [eax + 0x398], edx */ W32((u32)(r_eax+0x398u), r_edx);
    /* 00618c62: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00618c65: mov dword ptr [eax + 0x3a4], 1 */ W32((u32)(r_eax+0x3a4u), 0x1u);
    /* 00618c6f: mov dword ptr [eax + 0x39c], edx */ W32((u32)(r_eax+0x39cu), r_edx);
    /* 00618c75: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00618c78: mov dword ptr [eax + 0x3a0], edx */ W32((u32)(r_eax+0x3a0u), r_edx);
    /* 00618c7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618c81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00618c88: mov esp, ebp */ r_esp = r_ebp;
    /* 00618c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618c8b: ret 8 */ FN_RET(0x00618ae4); r_esp += 12; return;
}

void f_00618c90(void) /* sub_618C90 */
{
    FN_ENTER(0x00618c90);
    /* 00618c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00618c91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00618c92: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618c95: mov esi, ecx */ r_esi = r_ecx;
    /* 00618c97: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618c9d: push dword ptr [esi + 0x37c] */ { u32 v = R32((u32)(r_esi+0x37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00618ca3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00618ca5: mov ecx, esi */ r_ecx = r_esi;
    /* 00618ca7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x618caau); call_ind(t); }
    /* 00618caa: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 00618cb0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618cb3: je 0x618d78 */ if (fZ) goto L_00618d78;
L_00618cb9:; BB(0x00618cb9);
    /* 00618cb9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x618cbeu); f_0082d7b0();
    /* 00618cbe: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00618cc2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00618cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618cc6: lea edi, [esi + 0x250] */ r_edi = (u32)(r_esi+0x250u);
    /* 00618ccc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618ccd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00618cce: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x618cd3u); f_007a8d98();
    /* 00618cd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618cd6: fld dword ptr [0x9307f0] */ FPUSH(R_F32((u32)(0x9307f0u)));
    /* 00618cdc: fadd dword ptr [esi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x39cu));
    /* 00618ce2: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00618ce8: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 00618cee: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618cf1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00618cf5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00618cf8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618cfa: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00618cfe: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x618d03u); f_00830b74();
    /* 00618d03: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00618d06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d08: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x618d0du); f_00830c04();
    /* 00618d0d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00618d11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d13: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x618d18u); f_0082e9e4();
    /* 00618d18: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00618d1b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d1d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x618d22u); f_0082d8bc();
    /* 00618d22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d24: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00618d29: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x618d2eu); f_0082e9e4();
    /* 00618d2e: fld dword ptr [0xa8eb6c] */ FPUSH(R_F32((u32)(0xa8eb6cu)));
    /* 00618d34: fld dword ptr [esi + 0x384] */ FPUSH(R_F32((u32)(r_esi+0x384u)));
    /* 00618d3a: fsub dword ptr [0x9307ec] */ ST(0) = ST(0) - R_F32((u32)(0x9307ecu));
    /* 00618d40: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00618d44: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00618d4c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00618d4e: fchs  */ ST(0) = -ST(0);
    /* 00618d50: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00618d52: fadd dword ptr [0x9307f4] */ ST(0) = ST(0) + R_F32((u32)(0x9307f4u));
    /* 00618d58: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00618d5c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00618d60: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x618d65u); f_00831290();
    /* 00618d65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618d67: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x618d6cu); f_0052d46c();
    /* 00618d6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618d6d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x618d72u); f_0082da80();
    /* 00618d72: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00618d75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00618d76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00618d77: ret  */ FN_RET(0x00618c90); r_esp += 4; return;
L_00618d78:; BB(0x00618d78);
    /* 00618d78: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x618d7du); f_0082d7b0();
    /* 00618d7d: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00618d80: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x618d85u); f_0082d838();
    /* 00618d85: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00618d88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d8a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x618d8fu); f_0082d8bc();
    /* 00618d8f: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00618d92: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x618d97u); f_00829cc8();
    /* 00618d97: mov edi, dword ptr [esi + 0x34] */ r_edi = R32((u32)(r_esi+0x34u));
    /* 00618d9a: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00618d9d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x618da2u); f_0082d838();
    /* 00618da2: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618da5: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x618daau); f_008321d8();
    /* 00618daa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618dab: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x618db0u); f_0082d7b0();
    /* 00618db0: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00618db3: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00618db6: fld dword ptr [esi + 0x38c] */ FPUSH(R_F32((u32)(r_esi+0x38cu)));
    /* 00618dbc: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00618dbf: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00618dc2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618dc5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00618dc9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00618dcc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618dce: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00618dd2: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x618dd7u); f_00830b74();
    /* 00618dd7: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618dda: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x618ddfu); f_008321d8();
    /* 00618ddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618de0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x618de5u); f_0082da80();
    /* 00618de5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x618deau); f_0082d7b0();
    /* 00618dea: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00618ded: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00618df0: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00618df3: fsub dword ptr [esi + 0x38c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38cu));
    /* 00618df9: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00618dfc: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618dff: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00618e03: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00618e06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618e08: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00618e0c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x618e11u); f_00830b74();
    /* 00618e11: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618e14: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x618e19u); f_008321d8();
    /* 00618e19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618e1a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x618e1fu); f_0082da80();
    /* 00618e1f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x618e24u); f_0082d7b0();
    /* 00618e24: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00618e27: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00618e2a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x618e2fu); f_0082d838();
    /* 00618e2f: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 00618e35: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618e37: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x618e3cu); f_0082d8bc();
    /* 00618e3c: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618e3f: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x618e44u); f_008321d8();
    /* 00618e44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618e45: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x618e4au); f_0082dbac();
    /* 00618e4a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x618e4fu); f_0082d7b0();
    /* 00618e4f: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00618e52: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00618e55: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x618e5au); f_0082d838();
    /* 00618e5a: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00618e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618e61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00618e63: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00618e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618e69: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x618e6eu); f_0082fa0c();
    /* 00618e6e: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00618e71: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x618e76u); f_008321d8();
    /* 00618e76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618e77: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x618e7cu); f_0082da80();
    /* 00618e7c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x618e81u); f_0082dab0();
    /* 00618e81: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x618e86u); f_0082da80();
    /* 00618e86: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x618e8bu); f_0082da80();
    /* 00618e8b: jmp 0x618cb9 */ goto L_00618cb9;
}

void f_00618e90(void) /* sub_618E90 */
{
    FN_ENTER(0x00618e90);
    /* 00618e90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618e91: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618e94: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00618e96: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x618e9bu); f_004f7c84();
    /* 00618e9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618e9e: je 0x618f4d */ if (fZ) goto L_00618f4d;
L_00618ea4:; BB(0x00618ea4);
    /* 00618ea4: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00618ea7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618eac: je 0x618ec1 */ if (fZ) goto L_00618ec1;
L_00618eae:; BB(0x00618eae);
    /* 00618eae: mov edx, 6 */ r_edx = 0x6u;
    /* 00618eb3: mov eax, 6 */ r_eax = 0x6u;
    /* 00618eb8: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 00618ebf: jmp 0x618eda */ goto L_00618eda;
L_00618ec1:; BB(0x00618ec1);
    /* 00618ec1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00618ec3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618ec5: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x618ecbu); call_ind(t); }
    /* 00618ecb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618ecd: jne 0x618f52 */ if (!fZ) goto L_00618f52;
L_00618ed3:; BB(0x00618ed3);
    /* 00618ed3: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
L_00618eda:; BB(0x00618eda);
    /* 00618eda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618edc: je 0x618f80 */ if (fZ) goto L_00618f80;
L_00618ee2:; BB(0x00618ee2);
    /* 00618ee2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618ee5: je 0x618f77 */ if (fZ) goto L_00618f77;
L_00618eeb:; BB(0x00618eeb);
    /* 00618eeb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618eee: je 0x618f6e */ if (fZ) goto L_00618f6e;
L_00618ef4:; BB(0x00618ef4);
    /* 00618ef4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618ef7: je 0x618f65 */ if (fZ) goto L_00618f65;
L_00618ef9:; BB(0x00618ef9);
    /* 00618ef9: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618efc: je 0x618f1a */ if (fZ) goto L_00618f1a;
L_00618efe:; BB(0x00618efe);
    /* 00618efe: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618f01: jne 0x618f0c */ if (!fZ) goto L_00618f0c;
L_00618f03:; BB(0x00618f03);
    /* 00618f03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618f05: call 0x619198 */ r_esp -= 4; W32(r_esp, 0x618f0au); f_00619198();
    /* 00618f0a: jmp 0x618f21 */ goto L_00618f21;
L_00618f0c:; BB(0x00618f0c);
    /* 00618f0c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618f0f: jne 0x618f21 */ if (!fZ) goto L_00618f21;
L_00618f11:; BB(0x00618f11);
    /* 00618f11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618f13: call 0x619050 */ r_esp -= 4; W32(r_esp, 0x618f18u); f_00619050();
    /* 00618f18: jmp 0x618f21 */ goto L_00618f21;
L_00618f1a:; BB(0x00618f1a);
    /* 00618f1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618f1c: call 0x6191d8 */ r_esp -= 4; W32(r_esp, 0x618f21u); f_006191d8();
L_00618f21:; BB(0x00618f21);
    /* 00618f21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618f22: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00618f25: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00618f28: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 00618f2e: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00618f31: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 00618f37: mov dword ptr [ebx + 0x308], eax */ W32((u32)(r_ebx+0x308u), r_eax);
    /* 00618f3d: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x618f42u); f_007b999c();
    /* 00618f42: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618f44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618f45: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x618f4au); f_006946a8();
    /* 00618f4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00618f4d:; BB(0x00618f4d);
    /* 00618f4d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00618f50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00618f51: ret  */ FN_RET(0x00618e90); r_esp += 4; return;
L_00618f52:; BB(0x00618f52);
    /* 00618f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618f53: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x618f58u); f_007b999c();
    /* 00618f58: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00618f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618f5b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x618f60u); f_006946a8();
    /* 00618f60: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00618f63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00618f64: ret  */ FN_RET(0x00618e90); r_esp += 4; return;
L_00618f65:; BB(0x00618f65);
    /* 00618f65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618f67: call 0x619210 */ r_esp -= 4; W32(r_esp, 0x618f6cu); f_00619210();
    /* 00618f6c: jmp 0x618f21 */ goto L_00618f21;
L_00618f6e:; BB(0x00618f6e);
    /* 00618f6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618f70: call 0x619290 */ r_esp -= 4; W32(r_esp, 0x618f75u); f_00619290();
    /* 00618f75: jmp 0x618f21 */ goto L_00618f21;
L_00618f77:; BB(0x00618f77);
    /* 00618f77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618f79: call 0x619350 */ r_esp -= 4; W32(r_esp, 0x618f7eu); f_00619350();
    /* 00618f7e: jmp 0x618f21 */ goto L_00618f21;
L_00618f80:; BB(0x00618f80);
    /* 00618f80: fild dword ptr [ebx + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x388u)));
    /* 00618f86: fadd dword ptr [0x93080c] */ ST(0) = ST(0) + R_F32((u32)(0x93080cu));
    /* 00618f8c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00618f8f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00618f93: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00618f98: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00618f9c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00618fa0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00618fa4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00618fa7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00618fab: mov dword ptr [ebx + 0x388], ecx */ W32((u32)(r_ebx+0x388u), r_ecx);
    /* 00618fb1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x618fb6u); f_0082dcbc();
    /* 00618fb6: fld dword ptr [0x930804] */ FPUSH(R_F32((u32)(0x930804u)));
    /* 00618fbc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00618fbe: fadd dword ptr [0x930808] */ ST(0) = ST(0) + R_F32((u32)(0x930808u));
    /* 00618fc4: fst dword ptr [ebx + 0x384] */ W_F32((u32)(r_ebx+0x384u), ST(0));
    /* 00618fca: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618fcd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00618fd0: lea eax, [ebx + 0x398] */ r_eax = (u32)(r_ebx+0x398u);
    /* 00618fd6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00618fda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00618fdc: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x618fe1u); f_00772b44();
    /* 00618fe1: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00618fe7: mov edx, dword ptr [0xaae164] */ r_edx = R32((u32)(0xaae164u));
    /* 00618fed: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618fef: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618ff1: jge 0x618f21 */ if ((fS==fO)) goto L_00618f21;
L_00618ff7:; BB(0x00618ff7);
    /* 00618ff7: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_00618ffb:; BB(0x00618ffb);
    /* 00618ffb: mov eax, dword ptr [ecx*4 + 0xaad720] */ r_eax = R32((u32)(r_ecx*4+0xaad720u));
    /* 00619002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619004: je 0x619040 */ if (fZ) goto L_00619040;
L_00619006:; BB(0x00619006);
    /* 00619006: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619008: je 0x619040 */ if (fZ) goto L_00619040;
L_0061900a:; BB(0x0061900a);
    /* 0061900a: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0061900d: test esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619013: je 0x619040 */ if (fZ) goto L_00619040;
L_00619015:; BB(0x00619015);
    /* 00619015: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00619018: cmp esi, dword ptr [0x9bdd3c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9bdd3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061901e: jne 0x619040 */ if (!fZ) goto L_00619040;
L_00619020:; BB(0x00619020);
    /* 00619020: mov esi, dword ptr [eax + 0x370] */ r_esi = R32((u32)(r_eax+0x370u));
    /* 00619026: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619028: jne 0x619040 */ if (!fZ) goto L_00619040;
L_0061902a:; BB(0x0061902a);
    /* 0061902a: movsx esi, word ptr [ebx + 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0061902e: cmp si, word ptr [eax + 0x28] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00619032: jne 0x619040 */ if (!fZ) goto L_00619040;
L_00619034:; BB(0x00619034);
    /* 00619034: mov eax, 1 */ r_eax = 0x1u;
    /* 00619039: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
L_00619040:; BB(0x00619040);
    /* 00619040: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619043: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619045: jl 0x618ffb */ if ((fS!=fO)) goto L_00618ffb;
L_00619047:; BB(0x00619047);
    /* 00619047: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0061904b: jmp 0x618f21 */ goto L_00618f21;
}

