#include "protos.h"

void f_00554114(void)
{
    FN_ENTER(0x00554114);
    /* 00554114: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554115: mov ebp, esp */ r_ebp = r_esp;
    /* 00554117: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554119: push 0x8d614c */ { u32 v = 0x8d614cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055411e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00554124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554125: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055412c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055412f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00554132: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00554135: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00554138: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055413b: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x554140u); f_00482a20();
    /* 00554140: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00554143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554145: jne 0x55419e */ if (!fZ) goto L_0055419e;
L_00554147:; BB(0x00554147);
    /* 00554147: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0055414e: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00554153: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554158u); f_008581c5();
    /* 00554158: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554159: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0055415c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055415e: je 0x554465 */ if (fZ) goto L_00554465;
L_00554164:; BB(0x00554164);
    /* 00554164: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0055416b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00554172: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00554175: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00554177: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055417a: push 0x9bdb08 */ { u32 v = 0x9bdb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0055417f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554181: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x554186u); f_005b7a84();
    /* 00554186: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00554189: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00554190: mov dword ptr [0xa73a10], eax */ W32((u32)(0xa73a10u), r_eax);
    /* 00554195: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055419c: jmp 0x5541f3 */ goto L_005541f3;
L_0055419e:; BB(0x0055419e);
    /* 0055419e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005541a5: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005541aa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5541afu); f_008581c5();
    /* 005541af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005541b0: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005541b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005541b5: je 0x55447a */ if (fZ) goto L_0055447a;
L_005541bb:; BB(0x005541bb);
    /* 005541bb: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 005541c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005541c9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005541cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005541ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005541cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005541d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005541d1: push 0x9bdac4 */ { u32 v = 0x9bdac4u; r_esp -= 4; W32(r_esp, v); }
    /* 005541d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005541d8: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5541ddu); f_005b7a84();
    /* 005541dd: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005541e0: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005541e7:; BB(0x005541e7);
    /* 005541e7: mov dword ptr [0xa73a10], eax */ W32((u32)(0xa73a10u), r_eax);
    /* 005541ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005541f3:; BB(0x005541f3);
    /* 005541f3: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005541fa: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005541fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554201u); f_008581c5();
    /* 00554201: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554202: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00554205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554207: je 0x554473 */ if (fZ) goto L_00554473;
L_0055420d:; BB(0x0055420d);
    /* 0055420d: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00554214: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055421b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0055421e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00554220: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00554225: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055422a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055422c: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x554231u); f_005795a0();
    /* 00554231: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554234: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0055423b:; BB(0x0055423b);
    /* 0055423b: mov dword ptr [0xa73a18], eax */ W32((u32)(0xa73a18u), r_eax);
    /* 00554240: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554247: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0055424e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00554250: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554255u); f_008581c5();
    /* 00554255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554256: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00554259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055425b: je 0x55446c */ if (fZ) goto L_0055446c;
L_00554261:; BB(0x00554261);
    /* 00554261: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00554268: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0055426f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554272: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00554274: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00554279: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055427e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554280: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x554285u); f_005795a0();
    /* 00554285: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554288: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0055428f:; BB(0x0055428f);
    /* 0055428f: mov dword ptr [0xa73a1c], eax */ W32((u32)(0xa73a1cu), r_eax);
    /* 00554294: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055429b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5542a0u); f_0082fa9c();
    /* 005542a0: mov eax, dword ptr [0xa73a10] */ r_eax = R32((u32)(0xa73a10u));
    /* 005542a5: mov ebx, dword ptr [0x9bd9f4] */ r_ebx = R32((u32)(0x9bd9f4u));
    /* 005542ab: mov ecx, dword ptr [0xa73a18] */ r_ecx = R32((u32)(0xa73a18u));
    /* 005542b1: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 005542b3: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005542b9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005542bb: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005542c1: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542c5: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542c8: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5542cdu); f_00579a28();
    /* 005542cd: mov eax, dword ptr [0xa73a10] */ r_eax = R32((u32)(0xa73a10u));
    /* 005542d2: mov ebx, dword ptr [0x9bda04] */ r_ebx = R32((u32)(0x9bda04u));
    /* 005542d8: mov ecx, dword ptr [0xa73a1c] */ r_ecx = R32((u32)(0xa73a1cu));
    /* 005542de: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005542e0: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005542e6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005542e8: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005542ee: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542f2: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542f5: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5542fau); f_00579a28();
    /* 005542fa: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5542ffu); f_0082faac();
    /* 005542ff: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554301: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554306u); f_008581c5();
    /* 00554306: mov dword ptr [0xa73a0c], eax */ W32((u32)(0xa73a0cu), r_eax);
    /* 0055430b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055430d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554312u); f_008581c5();
    /* 00554312: mov dword ptr [0xa73a08], eax */ W32((u32)(0xa73a08u), r_eax);
    /* 00554317: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554319: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55431eu); f_008581c5();
    /* 0055431e: mov dword ptr [0xa73a04], eax */ W32((u32)(0xa73a04u), r_eax);
    /* 00554323: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554325: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55432au); f_008581c5();
    /* 0055432a: mov dword ptr [0xa73a00], eax */ W32((u32)(0xa73a00u), r_eax);
    /* 0055432f: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00554331: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x554336u); f_0077a684();
    /* 00554336: mov edx, dword ptr [0xa73a0c] */ r_edx = R32((u32)(0xa73a0cu));
    /* 0055433c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0055433e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00554340: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x554345u); f_0077a684();
    /* 00554345: mov edx, dword ptr [0xa73a0c] */ r_edx = R32((u32)(0xa73a0cu));
    /* 0055434b: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0055434d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00554350: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x554355u); f_0077a698();
    /* 00554355: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 0055435b: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0055435d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055435f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x554364u); f_0077a698();
    /* 00554364: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 0055436a: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055436c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055436f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x554374u); f_0077a6b4();
    /* 00554374: mov edx, dword ptr [0xa73a04] */ r_edx = R32((u32)(0xa73a04u));
    /* 0055437a: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055437c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055437e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x554383u); f_0077a6b4();
    /* 00554383: mov edx, dword ptr [0xa73a04] */ r_edx = R32((u32)(0xa73a04u));
    /* 00554389: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055438b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055438e: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x554393u); f_0077a6cc();
    /* 00554393: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00554399: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055439b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055439d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5543a2u); f_0077a6cc();
    /* 005543a2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005543a5: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 005543ab: mov ebx, dword ptr [0x9248dc] */ r_ebx = R32((u32)(0x9248dcu));
    /* 005543b1: movzx esi, word ptr [0x9248e0] */ r_esi = (u32)R16((u32)(0x9248e0u));
    /* 005543b8: movzx edi, word ptr [0x9248e2] */ r_edi = (u32)R16((u32)(0x9248e2u));
    /* 005543bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005543c2: mov edx, dword ptr [0xa73a10] */ r_edx = R32((u32)(0xa73a10u));
    /* 005543c8: mov dword ptr [0xa73a14], 0 */ W32((u32)(0xa73a14u), 0x0u);
    /* 005543d2: mov eax, 0x45 */ r_eax = 0x45u;
    /* 005543d7: mov ecx, 0x4f */ r_ecx = 0x4fu;
    /* 005543dc: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 005543e0: movzx eax, word ptr [0x9248e4] */ r_eax = (u32)R16((u32)(0x9248e4u));
    /* 005543e7: mov word ptr [ebp - 0x2e], cx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_ecx);
    /* 005543eb: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005543ee: mov word ptr [ebp - 0x24], si */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_esi);
    /* 005543f2: mov word ptr [ebp - 0x22], di */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_edi);
    /* 005543f6: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005543fa: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00554400: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00554402: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00554405:; BB(0x00554405);
    /* 00554405: movsx edi, word ptr [ebp + ebx*2 - 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 0055440a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0055440d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055440e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00554414: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00554417: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554419: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0055441c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055441e: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00554420: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554422: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554424: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00554426: push dword ptr [edx*4 + 0x9bd96c] */ { u32 v = R32((u32)(r_edx*4+0x9bd96cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055442d: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00554431: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554435: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554436: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x55443bu); f_00608470();
    /* 0055443b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055443e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00554441: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554444: jge 0x55444e */ if ((fS==fO)) goto L_0055444e;
L_00554446:; BB(0x00554446);
    /* 00554446: mov edx, dword ptr [0xa73a10] */ r_edx = R32((u32)(0xa73a10u));
    /* 0055444c: jmp 0x554405 */ goto L_00554405;
L_0055444e:; BB(0x0055444e);
    /* 0055444e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554451: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00554454: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055445a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554461: mov esp, ebp */ r_esp = r_ebp;
    /* 00554463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554464: ret  */ FN_RET(0x00554114); r_esp += 4; return;
L_00554465:; BB(0x00554465);
    /* 00554465: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00554467: jmp 0x554190 */ f_00554190(); return;
L_0055446c:; BB(0x0055446c);
    /* 0055446c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055446e: jmp 0x55428f */ goto L_0055428f;
L_00554473:; BB(0x00554473);
    /* 00554473: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00554475: jmp 0x55423b */ goto L_0055423b;
L_0055447a:; BB(0x0055447a);
    /* 0055447a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055447c: jmp 0x5541e7 */ goto L_005541e7;
}

void f_00554345(void)
{
    FN_ENTER(0x00554345);
    /* 00554345: mov edx, dword ptr [0xa73a0c] */ r_edx = R32((u32)(0xa73a0cu));
    /* 0055434b: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0055434d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00554350: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x554355u); f_0077a698();
    /* 00554355: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 0055435b: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0055435d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055435f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x554364u); f_0077a698();
    /* 00554364: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 0055436a: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055436c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055436f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x554374u); f_0077a6b4();
    /* 00554374: mov edx, dword ptr [0xa73a04] */ r_edx = R32((u32)(0xa73a04u));
    /* 0055437a: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055437c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055437e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x554383u); f_0077a6b4();
    /* 00554383: mov edx, dword ptr [0xa73a04] */ r_edx = R32((u32)(0xa73a04u));
    /* 00554389: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055438b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055438e: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x554393u); f_0077a6cc();
    /* 00554393: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00554399: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055439b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055439d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5543a2u); f_0077a6cc();
    /* 005543a2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005543a5: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 005543ab: mov ebx, dword ptr [0x9248dc] */ r_ebx = R32((u32)(0x9248dcu));
    /* 005543b1: movzx esi, word ptr [0x9248e0] */ r_esi = (u32)R16((u32)(0x9248e0u));
    /* 005543b8: movzx edi, word ptr [0x9248e2] */ r_edi = (u32)R16((u32)(0x9248e2u));
    /* 005543bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005543c2: mov edx, dword ptr [0xa73a10] */ r_edx = R32((u32)(0xa73a10u));
    /* 005543c8: mov dword ptr [0xa73a14], 0 */ W32((u32)(0xa73a14u), 0x0u);
    /* 005543d2: mov eax, 0x45 */ r_eax = 0x45u;
    /* 005543d7: mov ecx, 0x4f */ r_ecx = 0x4fu;
    /* 005543dc: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 005543e0: movzx eax, word ptr [0x9248e4] */ r_eax = (u32)R16((u32)(0x9248e4u));
    /* 005543e7: mov word ptr [ebp - 0x2e], cx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_ecx);
    /* 005543eb: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005543ee: mov word ptr [ebp - 0x24], si */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_esi);
    /* 005543f2: mov word ptr [ebp - 0x22], di */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_edi);
    /* 005543f6: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005543fa: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00554400: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00554402: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00554405:; BB(0x00554405);
    /* 00554405: movsx edi, word ptr [ebp + ebx*2 - 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 0055440a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0055440d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055440e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00554414: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00554417: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554419: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0055441c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055441e: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00554420: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554422: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554424: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00554426: push dword ptr [edx*4 + 0x9bd96c] */ { u32 v = R32((u32)(r_edx*4+0x9bd96cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055442d: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00554431: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554435: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554436: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x55443bu); f_00608470();
    /* 0055443b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055443e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00554441: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554444: jge 0x55444e */ if ((fS==fO)) goto L_0055444e;
L_00554446:; BB(0x00554446);
    /* 00554446: mov edx, dword ptr [0xa73a10] */ r_edx = R32((u32)(0xa73a10u));
    /* 0055444c: jmp 0x554405 */ goto L_00554405;
L_0055444e:; BB(0x0055444e);
    /* 0055444e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554451: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00554454: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055445a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554461: mov esp, ebp */ r_esp = r_ebp;
    /* 00554463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554464: ret  */ FN_RET(0x00554345); r_esp += 4; return;
}

void f_00554484(void) /* sub_554484 */
{
    FN_ENTER(0x00554484);
    /* 00554484: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554485: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554486: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554487: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055448a: mov edi, ecx */ r_edi = r_ecx;
    /* 0055448c: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00554492: fcomp dword ptr [0x9248f8] */ fx_compare(ST(0), R_F32((u32)(0x9248f8u))); FPOP();
    /* 00554498: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055449a: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 005544a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005544a1: jae 0x55452c */ if (!fC) goto L_0055452c;
L_005544a7:; BB(0x005544a7);
    /* 005544a7: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005544ae: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005544b1: jne 0x5544c5 */ if (!fZ) goto L_005544c5;
L_005544b3:; BB(0x005544b3);
    /* 005544b3: mov ecx, dword ptr [0xa73a18] */ r_ecx = R32((u32)(0xa73a18u));
    /* 005544b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005544ba: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5544bfu); f_00579de0();
    /* 005544bf: mov ebp, eax */ r_ebp = r_eax;
    /* 005544c1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005544c3: jmp 0x5544dd */ goto L_005544dd;
L_005544c5:; BB(0x005544c5);
    /* 005544c5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005544c8: jne 0x55452c */ if (!fZ) goto L_0055452c;
L_005544ca:; BB(0x005544ca);
    /* 005544ca: mov ecx, dword ptr [0xa73a1c] */ r_ecx = R32((u32)(0xa73a1cu));
    /* 005544d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005544d1: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5544d6u); f_00579de0();
    /* 005544d6: mov ebp, eax */ r_ebp = r_eax;
    /* 005544d8: mov ebx, 1 */ r_ebx = 0x1u;
L_005544dd:; BB(0x005544dd);
    /* 005544dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005544df: je 0x55452c */ if (fZ) goto L_0055452c;
L_005544e1:; BB(0x005544e1);
    /* 005544e1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5544e6u); f_0082d7b0();
    /* 005544e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005544e8: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5544edu); f_00830cd8();
    /* 005544ed: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005544f0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5544f5u); f_0082d838();
    /* 005544f5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005544f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005544fa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5544ffu); f_0082d8bc();
    /* 005544ff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00554502: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00554504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554505: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00554507: mov edx, ebp */ r_edx = r_ebp;
    /* 00554509: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x55450eu); f_0082f940();
    /* 0055450e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x554513u); f_0082da80();
    /* 00554513: mov ecx, dword ptr [edi + ebx*4 + 0x3cc] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x3ccu));
    /* 0055451a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055451c: je 0x55452c */ if (fZ) goto L_0055452c;
L_0055451e:; BB(0x0055451e);
    /* 0055451e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00554521: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00554525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554526: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00554528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554529: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x55452cu); call_ind(t); }
L_0055452c:; BB(0x0055452c);
    /* 0055452c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055452f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00554530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554531: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00554532: ret  */ FN_RET(0x00554484); r_esp += 4; return;
}

void f_00554534(void) /* sub_554534 */
{
    FN_ENTER(0x00554534);
    /* 00554534: mov dword ptr [0xa73a24], 0x3f800000 */ W32((u32)(0xa73a24u), 0x3f800000u);
    /* 0055453e: mov dword ptr [0xa73a28], 0x41000000 */ W32((u32)(0xa73a28u), 0x41000000u);
    /* 00554548: mov dword ptr [0xa73a2c], 0x3fc00000 */ W32((u32)(0xa73a2cu), 0x3fc00000u);
    /* 00554552: ret  */ FN_RET(0x00554534); r_esp += 4; return;
}

void f_00554554(void) /* sub_554554 */
{
    FN_ENTER(0x00554554);
    /* 00554554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554555: mov ebp, esp */ r_ebp = r_esp;
    /* 00554557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554559: push 0x8d618c */ { u32 v = 0x8d618cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055455e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00554564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055456c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055456f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00554572: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00554575: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00554578: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0055457b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055457e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00554581: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00554588: mov eax, ecx */ r_eax = r_ecx;
    /* 0055458a: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 00554590: mov dword ptr [eax], 0xb04760 */ W32((u32)(r_eax), 0xb04760u);
    /* 00554596: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554598: je 0x5545b3 */ if (fZ) goto L_005545b3;
L_0055459a:; BB(0x0055459a);
    /* 0055459a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055459e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005545a3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005545a7: mov edx, ecx */ r_edx = r_ecx;
    /* 005545a9: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_005545b3:; BB(0x005545b3);
    /* 005545b3: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5545b8u); f_007b9c8c();
    /* 005545b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005545bb: mov edx, dword ptr [eax + 0x39c] */ r_edx = R32((u32)(r_eax+0x39cu));
    /* 005545c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005545c3: je 0x5545df */ if (fZ) goto L_005545df;
L_005545c5:; BB(0x005545c5);
    /* 005545c5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005545c9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005545ce: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005545d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005545d5: mov dword ptr [edx + 0x39c], 0 */ W32((u32)(r_edx+0x39cu), 0x0u);
L_005545df:; BB(0x005545df);
    /* 005545df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005545e2: mov edx, dword ptr [eax + 0x3a0] */ r_edx = R32((u32)(r_eax+0x3a0u));
    /* 005545e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005545ea: je 0x554606 */ if (fZ) goto L_00554606;
L_005545ec:; BB(0x005545ec);
    /* 005545ec: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005545f0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005545f5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005545f9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005545fc: mov dword ptr [edx + 0x3a0], 0 */ W32((u32)(r_edx+0x3a0u), 0x0u);
L_00554606:; BB(0x00554606);
    /* 00554606: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554609: mov edx, dword ptr [eax + 0x3a4] */ r_edx = R32((u32)(r_eax+0x3a4u));
    /* 0055460f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554611: je 0x55462d */ if (fZ) goto L_0055462d;
L_00554613:; BB(0x00554613);
    /* 00554613: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00554617: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055461c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554620: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554623: mov dword ptr [edx + 0x3a4], 0 */ W32((u32)(r_edx+0x3a4u), 0x0u);
L_0055462d:; BB(0x0055462d);
    /* 0055462d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554630: mov ecx, dword ptr [eax + 0x3b4] */ r_ecx = R32((u32)(r_eax+0x3b4u));
    /* 00554636: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554638: je 0x554644 */ if (fZ) goto L_00554644;
L_0055463e:; BB(0x0055463e);
    /* 0055463e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554640: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00554642: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x554644u); call_ind(t); }
L_00554644:; BB(0x00554644);
    /* 00554644: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055464b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055464e: lea ecx, [eax + 0x3b8] */ r_ecx = (u32)(r_eax+0x3b8u);
    /* 00554654: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x554659u); f_005769f8();
    /* 00554659: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554660: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554663: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x554668u); f_0052bf84();
    /* 00554668: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055466b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055466d: jne 0x55467f */ if (!fZ) goto L_0055467f;
L_0055466f:; BB(0x0055466f);
    /* 0055466f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554672: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554679: mov esp, ebp */ r_esp = r_ebp;
    /* 0055467b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055467c: ret 4 */ FN_RET(0x00554554); r_esp += 8; return;
L_0055467f:; BB(0x0055467f);
    /* 0055467f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554683: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x554688u); f_005c2f74();
    /* 00554688: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554689: jmp 0x55466f */ goto L_0055466f;
}

void f_0055468c(void) /* sub_55468C */
{
    FN_ENTER(0x0055468c);
    /* 0055468c: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00554692: mov eax, dword ptr [eax*4 + 0xa73af4] */ r_eax = R32((u32)(r_eax*4+0xa73af4u));
    /* 00554699: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055469b: mov dword ptr [0x9bdc08], edx */ W32((u32)(0x9bdc08u), r_edx);
    /* 005546a1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005546a4: mov dword ptr [0x9bdc58], edx */ W32((u32)(0x9bdc58u), r_edx);
    /* 005546aa: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005546ad: mov dword ptr [0x9bdca8], edx */ W32((u32)(0x9bdca8u), r_edx);
    /* 005546b3: movsx edx, word ptr [ecx + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x39au));
    /* 005546ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005546bc: je 0x5546c5 */ if (fZ) goto L_005546c5;
L_005546be:; BB(0x005546be);
    /* 005546be: mov edx, 5 */ r_edx = 0x5u;
    /* 005546c3: jmp 0x5546ca */ goto L_005546ca;
L_005546c5:; BB(0x005546c5);
    /* 005546c5: mov edx, 1 */ r_edx = 0x1u;
L_005546ca:; BB(0x005546ca);
    /* 005546ca: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005546cd: mov edx, dword ptr [ecx + 0x31c] */ r_edx = R32((u32)(r_ecx+0x31cu));
    /* 005546d3: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005546d6: ret  */ FN_RET(0x0055468c); r_esp += 4; return;
}

void f_005546d8(void) /* sub_5546D8 */
{
    FN_ENTER(0x005546d8);
    /* 005546d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005546d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005546da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005546db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005546dc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005546df: mov edi, ecx */ r_edi = r_ecx;
    /* 005546e1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005546e4: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005546e9: je 0x5546f3 */ if (fZ) goto L_005546f3;
L_005546eb:; BB(0x005546eb);
    /* 005546eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005546ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005546ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005546f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005546f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005546f2: ret  */ FN_RET(0x005546d8); r_esp += 4; return;
L_005546f3:; BB(0x005546f3);
    /* 005546f3: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005546f8: mov ecx, edi */ r_ecx = r_edi;
    /* 005546fa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005546fc: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554701: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554706: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x554709u); call_ind(t); }
    /* 00554709: mov esi, eax */ r_esi = r_eax;
    /* 0055470b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055470d: je 0x554806 */ if (fZ) goto L_00554806;
L_00554713:; BB(0x00554713);
    /* 00554713: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554714: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x554719u); f_00794548();
    /* 00554719: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055471a: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55471fu); f_00578b38();
    /* 0055471f: movsx edx, word ptr [edi + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x39au));
    /* 00554726: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554728: je 0x554737 */ if (fZ) goto L_00554737;
L_0055472a:; BB(0x0055472a);
    /* 0055472a: mov ecx, dword ptr [0xa73b14] */ r_ecx = R32((u32)(0xa73b14u));
    /* 00554730: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x554735u); f_00829cc8();
    /* 00554735: jmp 0x55473f */ goto L_0055473f;
L_00554737:; BB(0x00554737);
    /* 00554737: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0055473a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55473fu); f_00829cc8();
L_0055473f:; BB(0x0055473f);
    /* 0055473f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00554744: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x554749u); f_0082d7b0();
    /* 00554749: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0055474f: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00554755: mov ecx, edi */ r_ecx = r_edi;
    /* 00554757: call 0x55487c */ r_esp -= 4; W32(r_esp, 0x55475cu); f_0055487c();
    /* 0055475c: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055475f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x554764u); f_0082d838();
    /* 00554764: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00554767: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00554769: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55476eu); f_0082d8bc();
    /* 0055476e: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00554773: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00554778: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0055477d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055477f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x554784u); f_0082fa0c();
    /* 00554784: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0055478a: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00554790: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00554796: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x55479bu); f_004f7c84();
    /* 0055479b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055479e: je 0x55486b */ if (fZ) goto L_0055486b;
L_005547a4:; BB(0x005547a4);
    /* 005547a4: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005547aa: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005547ad: jne 0x554817 */ if (!fZ) goto L_00554817;
L_005547af:; BB(0x005547af);
    /* 005547af: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005547b2: je 0x55480e */ if (fZ) goto L_0055480e;
L_005547b4:; BB(0x005547b4);
    /* 005547b4: mov ecx, edi */ r_ecx = r_edi;
    /* 005547b6: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5547bbu); f_007aa7b8();
L_005547bb:; BB(0x005547bb);
    /* 005547bb: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005547c0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005547c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5547cau); f_0082da80();
    /* 005547ca: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5547cfu); f_00794750();
    /* 005547cf: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5547d4u); f_0082dab0();
    /* 005547d4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005547d7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005547dc: jne 0x554806 */ if (!fZ) goto L_00554806;
L_005547de:; BB(0x005547de);
    /* 005547de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005547e0: je 0x554806 */ if (fZ) goto L_00554806;
L_005547e2:; BB(0x005547e2);
    /* 005547e2: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 005547e9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005547ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005547ee: mov dword ptr [esp + 4], 0x3fc00000 */ W32((u32)(r_esp+0x4u), 0x3fc00000u);
    /* 005547f6: mov dword ptr [esp + 8], 0x3fc00000 */ W32((u32)(r_esp+0x8u), 0x3fc00000u);
    /* 005547fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554801: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x554806u); f_00779d4c();
L_00554806:; BB(0x00554806);
    /* 00554806: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055480a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055480b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055480c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055480d: ret  */ FN_RET(0x005546d8); r_esp += 4; return;
L_0055480e:; BB(0x0055480e);
    /* 0055480e: mov ecx, edi */ r_ecx = r_edi;
    /* 00554810: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x554815u); f_007aa668();
    /* 00554815: jmp 0x5547bb */ goto L_005547bb;
L_00554817:; BB(0x00554817);
    /* 00554817: mov edx, dword ptr [edi + 0x3b8] */ r_edx = R32((u32)(r_edi+0x3b8u));
    /* 0055481d: lea ebx, [edi + 0x3b8] */ r_ebx = (u32)(r_edi+0x3b8u);
    /* 00554823: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00554825: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x554828u); call_ind(t); }
    /* 00554828: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055482a: jne 0x554830 */ if (!fZ) goto L_00554830;
L_0055482c:; BB(0x0055482c);
    /* 0055482c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0055482e: jmp 0x5547bb */ goto L_005547bb;
L_00554830:; BB(0x00554830);
    /* 00554830: mov edx, dword ptr [edi + 0x3b8] */ r_edx = R32((u32)(r_edi+0x3b8u));
    /* 00554836: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00554838: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x55483bu); call_ind(t); }
    /* 0055483b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055483d: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x554842u); f_008173d0();
    /* 00554842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554844: jne 0x554852 */ if (!fZ) goto L_00554852;
L_00554846:; BB(0x00554846);
    /* 00554846: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554849: je 0x554862 */ if (fZ) goto L_00554862;
L_0055484b:; BB(0x0055484b);
    /* 0055484b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055484d: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x554852u); f_007aa7b8();
L_00554852:; BB(0x00554852);
    /* 00554852: mov eax, dword ptr [edi + 0x3b8] */ r_eax = R32((u32)(r_edi+0x3b8u));
    /* 00554858: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055485a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55485du); call_ind(t); }
    /* 0055485d: jmp 0x5547bb */ goto L_005547bb;
L_00554862:; BB(0x00554862);
    /* 00554862: mov ecx, edi */ r_ecx = r_edi;
    /* 00554864: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x554869u); f_007aa668();
    /* 00554869: jmp 0x554852 */ goto L_00554852;
L_0055486b:; BB(0x0055486b);
    /* 0055486b: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055486e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x554873u); f_0082e1e8();
    /* 00554873: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554874: jmp 0x5547bb */ goto L_005547bb;
}

void f_00554840(void)
{
    FN_ENTER(0x00554840);
    goto L_00554840;
L_005547bb:; BB(0x005547bb);
    /* 005547bb: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005547c0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005547c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5547cau); f_0082da80();
    /* 005547ca: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5547cfu); f_00794750();
    /* 005547cf: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5547d4u); f_0082dab0();
    /* 005547d4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005547d7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005547dc: jne 0x554806 */ if (!fZ) goto L_00554806;
L_005547de:; BB(0x005547de);
    /* 005547de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005547e0: je 0x554806 */ if (fZ) goto L_00554806;
L_005547e2:; BB(0x005547e2);
    /* 005547e2: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 005547e9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005547ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005547ee: mov dword ptr [esp + 4], 0x3fc00000 */ W32((u32)(r_esp+0x4u), 0x3fc00000u);
    /* 005547f6: mov dword ptr [esp + 8], 0x3fc00000 */ W32((u32)(r_esp+0x8u), 0x3fc00000u);
    /* 005547fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554801: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x554806u); f_00779d4c();
L_00554806:; BB(0x00554806);
    /* 00554806: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055480a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055480b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055480c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055480d: ret  */ FN_RET(0x00554840); r_esp += 4; return;
L_00554840:; BB(0x00554840);
    /* 00554840: sub al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00554842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554844: jne 0x554852 */ if (!fZ) goto L_00554852;
L_00554846:; BB(0x00554846);
    /* 00554846: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554849: je 0x554862 */ if (fZ) goto L_00554862;
L_0055484b:; BB(0x0055484b);
    /* 0055484b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055484d: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x554852u); f_007aa7b8();
L_00554852:; BB(0x00554852);
    /* 00554852: mov eax, dword ptr [edi + 0x3b8] */ r_eax = R32((u32)(r_edi+0x3b8u));
    /* 00554858: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055485a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55485du); call_ind(t); }
    /* 0055485d: jmp 0x5547bb */ goto L_005547bb;
L_00554862:; BB(0x00554862);
    /* 00554862: mov ecx, edi */ r_ecx = r_edi;
    /* 00554864: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x554869u); f_007aa668();
    /* 00554869: jmp 0x554852 */ goto L_00554852;
}

void f_0055487c(void) /* sub_55487C */
{
    FN_ENTER(0x0055487c);
    /* 0055487c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055487d: mov edi, ecx */ r_edi = r_ecx;
    /* 0055487f: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00554885: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055488a: je 0x554899 */ if (fZ) goto L_00554899;
L_0055488c:; BB(0x0055488c);
    /* 0055488c: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00554891: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x554896u); f_0052cc24();
    /* 00554896: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554897: jmp 0x5548a4 */ goto L_005548a4;
L_00554899:; BB(0x00554899);
    /* 00554899: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 0055489e: call 0x52cc3c */ r_esp -= 4; W32(r_esp, 0x5548a3u); f_0052cc3c();
    /* 005548a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005548a4:; BB(0x005548a4);
    /* 005548a4: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005548aa: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005548af: je 0x5548be */ if (fZ) goto L_005548be;
L_005548b1:; BB(0x005548b1);
    /* 005548b1: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 005548b6: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x5548bbu); f_0052cc24();
    /* 005548bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005548bc: jmp 0x5548c9 */ goto L_005548c9;
L_005548be:; BB(0x005548be);
    /* 005548be: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 005548c3: call 0x52cc3c */ r_esp -= 4; W32(r_esp, 0x5548c8u); f_0052cc3c();
    /* 005548c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005548c9:; BB(0x005548c9);
    /* 005548c9: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005548cf: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005548d4: je 0x5548e3 */ if (fZ) goto L_005548e3;
L_005548d6:; BB(0x005548d6);
    /* 005548d6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 005548db: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x5548e0u); f_0052cc24();
    /* 005548e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005548e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005548e2: ret  */ FN_RET(0x0055487c); r_esp += 4; return;
L_005548e3:; BB(0x005548e3);
    /* 005548e3: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 005548e8: call 0x52cc3c */ r_esp -= 4; W32(r_esp, 0x5548edu); f_0052cc3c();
    /* 005548ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005548ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005548ef: ret  */ FN_RET(0x0055487c); r_esp += 4; return;
}

void f_005548f0(void) /* sub_5548F0 */
{
    FN_ENTER(0x005548f0);
    /* 005548f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005548f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005548f2: mov edi, ecx */ r_edi = r_ecx;
    /* 005548f4: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5548f9u); f_004f7c84();
    /* 005548f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005548fc: je 0x554a07 */ if (fZ) goto L_00554a07;
L_00554902:; BB(0x00554902);
    /* 00554902: mov ecx, edi */ r_ecx = r_edi;
    /* 00554904: call 0x55468c */ r_esp -= 4; W32(r_esp, 0x554909u); f_0055468c();
    /* 00554909: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 00554910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554911: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x554916u); f_00578c74();
    /* 00554916: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554918: mov ecx, edi */ r_ecx = r_edi;
    /* 0055491a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x55491fu); f_007706b0();
    /* 0055491f: mov ecx, edi */ r_ecx = r_edi;
    /* 00554921: call 0x52d00c */ r_esp -= 4; W32(r_esp, 0x554926u); f_0052d00c();
    /* 00554926: mov ecx, edi */ r_ecx = r_edi;
    /* 00554928: call 0x5562ec */ r_esp -= 4; W32(r_esp, 0x55492du); f_005562ec();
    /* 0055492d: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00554934: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 0055493a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055493c: je 0x554971 */ if (fZ) goto L_00554971;
L_0055493e:; BB(0x0055493e);
    /* 0055493e: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00554944: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554947: je 0x554960 */ if (fZ) goto L_00554960;
L_00554949:; BB(0x00554949);
    /* 00554949: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 00554953: mov ecx, edi */ r_ecx = r_edi;
    /* 00554955: call 0x554a0c */ r_esp -= 4; W32(r_esp, 0x55495au); f_00554a0c();
    /* 0055495a: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
L_00554960:; BB(0x00554960);
    /* 00554960: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 0055496a: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
L_00554971:; BB(0x00554971);
    /* 00554971: mov ecx, edi */ r_ecx = r_edi;
    /* 00554973: call 0x554a0c */ r_esp -= 4; W32(r_esp, 0x554978u); f_00554a0c();
    /* 00554978: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0055497b: fsub dword ptr [edi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x44u));
    /* 0055497e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055497f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554982: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x554987u); f_0082e900();
    /* 00554987: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055498a: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0055498d: fsub dword ptr [edi + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4cu));
    /* 00554990: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554991: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554994: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x554999u); f_0082e900();
    /* 00554999: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0055499c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055499e: fcomp dword ptr [0x924c84] */ fx_compare(ST(0), R_F32((u32)(0x924c84u))); FPOP();
    /* 005549a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005549a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005549a7: jbe 0x5549bb */ if ((fC||fZ)) goto L_005549bb;
L_005549a9:; BB(0x005549a9);
    /* 005549a9: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 005549ac: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 005549af: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005549b2: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 005549b5: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005549b8: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
L_005549bb:; BB(0x005549bb);
    /* 005549bb: mov ecx, edi */ r_ecx = r_edi;
    /* 005549bd: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5549c2u); f_0078730c();
    /* 005549c2: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005549c8: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005549ce: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 005549d1: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 005549d7: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 005549da: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 005549dd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005549e0: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005549e5: jne 0x5549f2 */ if (!fZ) goto L_005549f2;
L_005549e7:; BB(0x005549e7);
    /* 005549e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005549e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005549ea: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5549efu); f_006946a8();
    /* 005549ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005549f2:; BB(0x005549f2);
    /* 005549f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005549f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005549f6: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005549f9: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005549fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005549ff: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x554a04u); f_00805608();
    /* 00554a04: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00554a07:; BB(0x00554a07);
    /* 00554a07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554a08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00554a09: ret  */ FN_RET(0x005548f0); r_esp += 4; return;
}

void f_00554a0c(void) /* sub_554A0C */
{
    FN_ENTER(0x00554a0c);
    /* 00554a0c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00554a13: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554a16: ja 0x554a57 */ if ((!fC&&!fZ)) goto L_00554a57;
L_00554a18:; BB(0x00554a18);
    /* 00554a18: mov eax, dword ptr [eax*4 + 0x924b4c] */ r_eax = R32((u32)(r_eax*4+0x924b4cu));
    /* 00554a1f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a0c); r_esp += 4; return;
}

void f_00554a21(void)
{
    FN_ENTER(0x00554a21);
    /* 00554a21: call 0x554a58 */ r_esp -= 4; W32(r_esp, 0x554a26u); f_00554a58();
    /* 00554a26: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a21); r_esp += 4; return;
}

void f_00554a28(void)
{
    FN_ENTER(0x00554a28);
    /* 00554a28: call 0x554fd4 */ r_esp -= 4; W32(r_esp, 0x554a2du); f_00554fd4();
    /* 00554a2d: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a28); r_esp += 4; return;
}

void f_00554a2f(void)
{
    FN_ENTER(0x00554a2f);
    /* 00554a2f: call 0x555160 */ r_esp -= 4; W32(r_esp, 0x554a34u); f_00555160();
    /* 00554a34: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a2f); r_esp += 4; return;
}

void f_00554a36(void)
{
    FN_ENTER(0x00554a36);
    /* 00554a36: call 0x555234 */ r_esp -= 4; W32(r_esp, 0x554a3bu); f_00555234();
    /* 00554a3b: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a36); r_esp += 4; return;
}

void f_00554a3d(void)
{
    FN_ENTER(0x00554a3d);
    /* 00554a3d: call 0x5559dc */ r_esp -= 4; W32(r_esp, 0x554a42u); f_005559dc();
    /* 00554a42: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a3d); r_esp += 4; return;
}

void f_00554a44(void)
{
    FN_ENTER(0x00554a44);
    /* 00554a44: call 0x555cd8 */ r_esp -= 4; W32(r_esp, 0x554a49u); f_00555cd8();
    /* 00554a49: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a44); r_esp += 4; return;
}

void f_00554a4b(void)
{
    FN_ENTER(0x00554a4b);
    /* 00554a4b: call 0x555fdc */ r_esp -= 4; W32(r_esp, 0x554a50u); f_00555fdc();
    /* 00554a50: jmp 0x554a57 */ goto L_00554a57;
L_00554a57:; BB(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a4b); r_esp += 4; return;
}

void f_00554a52(void)
{
    FN_ENTER(0x00554a52);
    /* 00554a52: call 0x556240 */ r_esp -= 4; W32(r_esp, 0x554a57u); f_00556240();
    /* 00554a57: ret  */ FN_RET(0x00554a52); r_esp += 4; return;
}

void f_00554a57(void)
{
    FN_ENTER(0x00554a57);
    /* 00554a57: ret  */ FN_RET(0x00554a57); r_esp += 4; return;
}

void f_00554a58(void) /* sub_554A58 */
{
    FN_ENTER(0x00554a58);
    /* 00554a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554a59: mov ebp, esp */ r_ebp = r_esp;
    /* 00554a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554a5d: push 0x8d61b4 */ { u32 v = 0x8d61b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00554a62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00554a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554a69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00554a70: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554a73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00554a76: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00554a79: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00554a7c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00554a7f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00554a82: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x554a87u); f_00770738();
    /* 00554a87: mov edx, eax */ r_edx = r_eax;
    /* 00554a89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554a8c: mov ecx, dword ptr [ecx + 0x384] */ r_ecx = R32((u32)(r_ecx+0x384u));
    /* 00554a92: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 00554a95: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554a98: ja 0x554e66 */ if ((!fC&&!fZ)) goto L_00554e66;
L_00554a9e:; BB(0x00554a9e);
    /* 00554a9e: mov ecx, dword ptr [ecx*4 + 0x924b78] */ r_ecx = R32((u32)(r_ecx*4+0x924b78u));
    /* 00554aa5: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554a58); r_esp += 4; return;
}

void f_00554aa7(void)
{
    FN_ENTER(0x00554aa7);
    /* 00554aa7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554aaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554aac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554aae: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554ab3u); f_00772b44();
    /* 00554ab3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554ab6: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554abbu); f_007b6894();
    /* 00554abb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554abe: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554ac3u); f_007b798c();
    /* 00554ac3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554ac6: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00554acd: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554ad0: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00554ad7: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00554ada: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554adc: jle 0x554e7d */ if ((fZ||fS!=fO)) goto L_00554e7d;
L_00554ae2:; BB(0x00554ae2);
    /* 00554ae2: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554aa7); r_esp += 4; return;
L_00554e7d:; BB(0x00554e7d);
    /* 00554e7d: movsx edx, word ptr [eax + 0x396] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x396u));
    /* 00554e84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554e86: jle 0x554e94 */ if ((fZ||fS!=fO)) goto L_00554e94;
L_00554e88:; BB(0x00554e88);
    /* 00554e88: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 00554e92: jmp 0x554e66 */ goto L_00554e66;
L_00554e94:; BB(0x00554e94);
    /* 00554e94: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00554e9a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554e9d: jne 0x554ebe */ if (!fZ) goto L_00554ebe;
L_00554e9f:; BB(0x00554e9f);
    /* 00554e9f: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00554ea6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554ea9: je 0x554ebe */ if (fZ) goto L_00554ebe;
L_00554eab:; BB(0x00554eab);
    /* 00554eab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554eae: mov dword ptr [edx + 0x37c], 1 */ W32((u32)(r_edx+0x37cu), 0x1u);
    /* 00554eb8: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_00554ebe:; BB(0x00554ebe);
    /* 00554ebe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554ec1: mov dword ptr [eax + 0x384], 0xffffffff */ W32((u32)(r_eax+0x384u), 0xffffffffu);
    /* 00554ecb: jmp 0x554e66 */ goto L_00554e66;
}

void f_00554ae7(void)
{
    FN_ENTER(0x00554ae7);
    /* 00554ae7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554aea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554aec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554aee: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554af3u); f_00772b44();
    /* 00554af3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554af6: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554afbu); f_007b6894();
    /* 00554afb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554afe: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554b03u); f_007b798c();
    /* 00554b03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b06: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00554b0d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554b10: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00554b17: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00554b1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554b1c: jg 0x554e66 */ if ((!fZ&&fS==fO)) goto L_00554e66;
L_00554b22:; BB(0x00554b22);
    /* 00554b22: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 00554b2c: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554ae7); r_esp += 4; return;
}

void f_00554b31(void)
{
    FN_ENTER(0x00554b31);
    /* 00554b31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b34: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x554b39u); f_007aa094();
    /* 00554b39: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b40: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554b45u); f_00772b44();
    /* 00554b45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b48: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554b4du); f_007b6894();
    /* 00554b4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b50: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554b55u); f_007b798c();
    /* 00554b55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b58: movsx edx, word ptr [eax + 0x396] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x396u));
    /* 00554b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00554b61: jle 0x554ecd */ if ((fZ||fS!=fO)) goto L_00554ecd;
L_00554b67:; BB(0x00554b67);
    /* 00554b67: movsx edx, word ptr [eax + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x39au));
    /* 00554b6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554b70: je 0x554b80 */ if (fZ) goto L_00554b80;
L_00554b72:; BB(0x00554b72);
    /* 00554b72: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b77: mov ecx, eax */ r_ecx = r_eax;
    /* 00554b79: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554b7eu); f_007aaa30();
    /* 00554b7e: jmp 0x554b8c */ goto L_00554b8c;
L_00554b80:; BB(0x00554b80);
    /* 00554b80: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b85: mov ecx, eax */ r_ecx = r_eax;
    /* 00554b87: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554b8cu); f_007aaa30();
L_00554b8c:; BB(0x00554b8c);
    /* 00554b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554b8e: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554b94:; BB(0x00554b94);
    /* 00554b94: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554b97: mov dword ptr [edx + 0x384], 5 */ W32((u32)(r_edx+0x384u), 0x5u);
    /* 00554ba1: mov eax, 0xf */ r_eax = 0xfu;
    /* 00554ba6: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00554bad: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554b31); r_esp += 4; return;
L_00554ecd:; BB(0x00554ecd);
    /* 00554ecd: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00554ed3: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554ed6: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554ed8:; BB(0x00554ed8);
    /* 00554ed8: mov edx, eax */ r_edx = r_eax;
    /* 00554eda: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 00554ee4: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00554ee9: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00554ef0: jmp 0x554e66 */ goto L_00554e66;
}

void f_00554b41(void)
{
    FN_ENTER(0x00554b41);
}

void f_00554bb2(void)
{
    FN_ENTER(0x00554bb2);
    /* 00554bb2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554bb4: je 0x554beb */ if (fZ) goto L_00554beb;
L_00554bb6:; BB(0x00554bb6);
    /* 00554bb6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554bb9: mov ebx, dword ptr [edx + 0x300] */ r_ebx = R32((u32)(r_edx+0x300u));
    /* 00554bbf: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 00554bc5: mov dword ptr [ecx + 0x2a4], ebx */ W32((u32)(r_ecx+0x2a4u), r_ebx);
    /* 00554bcb: mov esi, dword ptr [edx + 0x304] */ r_esi = R32((u32)(r_edx+0x304u));
    /* 00554bd1: mov dword ptr [ecx + 0x2a8], esi */ W32((u32)(r_ecx+0x2a8u), r_esi);
    /* 00554bd7: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00554bdd: mov dword ptr [ecx + 0x2ac], edx */ W32((u32)(r_ecx+0x2acu), r_edx);
    /* 00554be3: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554be6: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x554bebu); f_00772358();
L_00554beb:; BB(0x00554beb);
    /* 00554beb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554bee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554bf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554bf2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554bf7u); f_00772b44();
    /* 00554bf7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554bfa: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554bffu); f_007b6894();
    /* 00554bff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c02: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554c07u); f_007b798c();
    /* 00554c07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c0a: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x554c0fu); f_0052cac0();
    /* 00554c0f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554c14: lea eax, [ecx + 0x418] */ r_eax = (u32)(r_ecx+0x418u);
    /* 00554c1a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00554c1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554c1e: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00554c20: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x554c26u); call_ind(t); }
    /* 00554c26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c29: mov ecx, dword ptr [eax + 0x3b0] */ r_ecx = R32((u32)(r_eax+0x3b0u));
    /* 00554c2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554c31: je 0x554c3c */ if (fZ) goto L_00554c3c;
L_00554c33:; BB(0x00554c33);
    /* 00554c33: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00554c36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554c37: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x554c3cu); f_00508db8();
L_00554c3c:; BB(0x00554c3c);
    /* 00554c3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c3f: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00554c46: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554c49: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00554c50: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00554c53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554c55: jle 0x554ef5 */ if ((fZ||fS!=fO)) goto L_00554ef5;
L_00554c5b:; BB(0x00554c5b);
    /* 00554c5b: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554bb2); r_esp += 4; return;
L_00554ef5:; BB(0x00554ef5);
    /* 00554ef5: add word ptr [eax + 0x396], -1 */ { u32 ad = (u32)(r_eax+0x396u);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00554efd: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00554eff: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00554f06: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x554f0bu); f_005caba4();
    /* 00554f0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554f0c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00554f0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554f11: je 0x554f4a */ if (fZ) goto L_00554f4a;
L_00554f13:; BB(0x00554f13);
    /* 00554f13: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00554f1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00554f21: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f24: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00554f27: mov edx, dword ptr [esi + 0x370] */ r_edx = R32((u32)(r_esi+0x370u));
    /* 00554f2d: mov ebx, dword ptr [edx*4 + 0xa73af4] */ r_ebx = R32((u32)(r_edx*4+0xa73af4u));
    /* 00554f34: mov ecx, eax */ r_ecx = r_eax;
    /* 00554f36: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554f39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00554f3a: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554f3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554f3e: call 0x5570f0 */ r_esp -= 4; W32(r_esp, 0x554f43u); f_005570f0();
    /* 00554f43: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00554f4a:; BB(0x00554f4a);
    /* 00554f4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554f51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f54: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 00554f5a: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00554f64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554f66: je 0x554f82 */ if (fZ) goto L_00554f82;
L_00554f68:; BB(0x00554f68);
    /* 00554f68: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00554f6c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00554f71: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554f75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f78: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_00554f82:; BB(0x00554f82);
    /* 00554f82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f85: push 0x129 */ { u32 v = 0x129u; r_esp -= 4; W32(r_esp, v); }
    /* 00554f8a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x554f8fu); f_007879b8();
    /* 00554f8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f92: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554f95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00554f97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x554fa0u); f_00814298();
    /* 00554fa0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554fa3: jmp 0x554e66 */ goto L_00554e66;
}

void f_00554c60(void)
{
    FN_ENTER(0x00554c60);
    /* 00554c60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c63: movsx eax, word ptr [ecx + 0x396] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x396u));
    /* 00554c6a: jmp 0x554d2a */ goto L_00554d2a;
L_00554d2a:; BB(0x00554d2a);
    /* 00554d2a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d2d: je 0x554fa8 */ if (fZ) goto L_00554fa8;
L_00554d33:; BB(0x00554d33);
    /* 00554d33: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d36: mov dword ptr [ecx + 0x384], 2 */ W32((u32)(r_ecx+0x384u), 0x2u);
    /* 00554d40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d42: je 0x554d79 */ if (fZ) goto L_00554d79;
L_00554d44:; BB(0x00554d44);
    /* 00554d44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d47: mov ebx, dword ptr [edx + 0x300] */ r_ebx = R32((u32)(r_edx+0x300u));
    /* 00554d4d: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 00554d53: mov dword ptr [ecx + 0x2a4], ebx */ W32((u32)(r_ecx+0x2a4u), r_ebx);
    /* 00554d59: mov esi, dword ptr [edx + 0x304] */ r_esi = R32((u32)(r_edx+0x304u));
    /* 00554d5f: mov dword ptr [ecx + 0x2a8], esi */ W32((u32)(r_ecx+0x2a8u), r_esi);
    /* 00554d65: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00554d6b: mov dword ptr [ecx + 0x2ac], edx */ W32((u32)(r_ecx+0x2acu), r_edx);
    /* 00554d71: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554d74: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x554d79u); f_00772358();
L_00554d79:; BB(0x00554d79);
    /* 00554d79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d7c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x554d81u); f_007aa094();
    /* 00554d81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d88: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554d8du); f_00772b44();
    /* 00554d8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d90: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554d95u); f_007b6894();
    /* 00554d95: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d98: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554d9du); f_007b798c();
    /* 00554d9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554da0: movsx edx, word ptr [eax + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x39au));
    /* 00554da7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554da9: je 0x554dc9 */ if (fZ) goto L_00554dc9;
L_00554dab:; BB(0x00554dab);
    /* 00554dab: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00554db2: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554db5: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554dbb:; BB(0x00554dbb);
    /* 00554dbb: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00554dc2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554dc7u); f_007aaa30();
    /* 00554dc7: jmp 0x554de5 */ goto L_00554de5;
L_00554dc9:; BB(0x00554dc9);
    /* 00554dc9: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00554dd0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554dd3: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554dd9:; BB(0x00554dd9);
    /* 00554dd9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dde: mov ecx, eax */ r_ecx = r_eax;
    /* 00554de0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554de5u); f_007aaa30();
L_00554de5:; BB(0x00554de5);
    /* 00554de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554de7: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554de9:; BB(0x00554de9);
    /* 00554de9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554dec: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x554df1u); f_0052cac0();
    /* 00554df1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554df4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00554df6: lea ebx, [ecx + 0x418] */ r_ebx = (u32)(r_ecx+0x418u);
    /* 00554dfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554dfd: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dff: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x554e05u); call_ind(t); }
    /* 00554e05: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e0b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x554e10u); f_00509590();
    /* 00554e10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554e13: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554e16: mov dword ptr [ebx + 0x3b0], eax */ W32((u32)(r_ebx+0x3b0u), r_eax);
    /* 00554e1c: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00554e22: mov edx, dword ptr [eax*4 + 0xa73af4] */ r_edx = R32((u32)(r_eax*4+0xa73af4u));
    /* 00554e29: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00554e2c: mov word ptr [ebx + 0x344], cx */ W16((u32)(r_ebx+0x344u), (u16)r_ecx);
    /* 00554e33: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
    /* 00554e3d: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554c60); r_esp += 4; return;
L_00554fa8:; BB(0x00554fa8);
    /* 00554fa8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554fab: movsx ebx, word ptr [ecx + 0x39a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x39au));
    /* 00554fb2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554fb4: je 0x554fbd */ if (fZ) goto L_00554fbd;
L_00554fb6:; BB(0x00554fb6);
    /* 00554fb6: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 00554fbb: jmp 0x554fc2 */ goto L_00554fc2;
L_00554fbd:; BB(0x00554fbd);
    /* 00554fbd: mov ecx, 0x11 */ r_ecx = 0x11u;
L_00554fc2:; BB(0x00554fc2);
    /* 00554fc2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554fc5: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 00554fcc: jmp 0x554d33 */ goto L_00554d33;
}

void f_00554c6f(void)
{
    FN_ENTER(0x00554c6f);
    /* 00554c6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554c72: mov ebx, dword ptr [ecx + 0x3a4] */ r_ebx = R32((u32)(r_ecx+0x3a4u));
    /* 00554c78: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554c7a: je 0x554cc4 */ if (fZ) goto L_00554cc4;
L_00554c7c:; BB(0x00554c7c);
    /* 00554c7c: mov eax, ecx */ r_eax = r_ecx;
    /* 00554c7e: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00554c84: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554c87: jne 0x554ca7 */ if (!fZ) goto L_00554ca7;
L_00554c89:; BB(0x00554c89);
    /* 00554c89: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00554c90: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554c93: je 0x554ca7 */ if (fZ) goto L_00554ca7;
L_00554c95:; BB(0x00554c95);
    /* 00554c95: mov edx, ecx */ r_edx = r_ecx;
    /* 00554c97: mov dword ptr [edx + 0x37c], 1 */ W32((u32)(r_edx+0x37cu), 0x1u);
    /* 00554ca1: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_00554ca7:; BB(0x00554ca7);
    /* 00554ca7: mov eax, ecx */ r_eax = r_ecx;
    /* 00554ca9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554cac: mov dword ptr [eax + 0x384], 0xffffffff */ W32((u32)(r_eax+0x384u), 0xffffffffu);
    /* 00554cb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554cb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554cc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00554cc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554cc3: ret  */ FN_RET(0x00554c6f); r_esp += 4; return;
L_00554cc4:; BB(0x00554cc4);
    /* 00554cc4: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 00554cca: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 00554ccd: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00554cd1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00554cd6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00554cd9: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00554cdc: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00554cdf: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00554ce2: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00554ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554ce8: jne 0x554cff */ if (!fZ) goto L_00554cff;
L_00554cea:; BB(0x00554cea);
    /* 00554cea: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00554cec: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00554cf1: mov word ptr [ebx + 0x396], cx */ W16((u32)(r_ebx+0x396u), (u16)r_ecx);
    /* 00554cf8: mov eax, 2 */ r_eax = 0x2u;
    /* 00554cfd: jmp 0x554d06 */ goto L_00554d06;
L_00554cff:; BB(0x00554cff);
    /* 00554cff: mov word ptr [ecx + 0x396], ax */ W16((u32)(r_ecx+0x396u), (u16)r_eax);
L_00554d06:; BB(0x00554d06);
    /* 00554d06: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d09: movsx ebx, word ptr [ecx + 0x39a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x39au));
    /* 00554d10: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d12: je 0x554d1b */ if (fZ) goto L_00554d1b;
L_00554d14:; BB(0x00554d14);
    /* 00554d14: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00554d19: jmp 0x554d20 */ goto L_00554d20;
L_00554d1b:; BB(0x00554d1b);
    /* 00554d1b: mov ecx, 8 */ r_ecx = 0x8u;
L_00554d20:; BB(0x00554d20);
    /* 00554d20: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d23: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 00554d2a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d2d: je 0x554fa8 */ if (fZ) goto L_00554fa8;
L_00554d33:; BB(0x00554d33);
    /* 00554d33: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d36: mov dword ptr [ecx + 0x384], 2 */ W32((u32)(r_ecx+0x384u), 0x2u);
    /* 00554d40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d42: je 0x554d79 */ if (fZ) goto L_00554d79;
L_00554d44:; BB(0x00554d44);
    /* 00554d44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d47: mov ebx, dword ptr [edx + 0x300] */ r_ebx = R32((u32)(r_edx+0x300u));
    /* 00554d4d: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 00554d53: mov dword ptr [ecx + 0x2a4], ebx */ W32((u32)(r_ecx+0x2a4u), r_ebx);
    /* 00554d59: mov esi, dword ptr [edx + 0x304] */ r_esi = R32((u32)(r_edx+0x304u));
    /* 00554d5f: mov dword ptr [ecx + 0x2a8], esi */ W32((u32)(r_ecx+0x2a8u), r_esi);
    /* 00554d65: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00554d6b: mov dword ptr [ecx + 0x2ac], edx */ W32((u32)(r_ecx+0x2acu), r_edx);
    /* 00554d71: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554d74: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x554d79u); f_00772358();
L_00554d79:; BB(0x00554d79);
    /* 00554d79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d7c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x554d81u); f_007aa094();
    /* 00554d81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d88: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554d8du); f_00772b44();
    /* 00554d8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d90: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554d95u); f_007b6894();
    /* 00554d95: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d98: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554d9du); f_007b798c();
    /* 00554d9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554da0: movsx edx, word ptr [eax + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x39au));
    /* 00554da7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554da9: je 0x554dc9 */ if (fZ) goto L_00554dc9;
L_00554dab:; BB(0x00554dab);
    /* 00554dab: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00554db2: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554db5: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554dbb:; BB(0x00554dbb);
    /* 00554dbb: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00554dc2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554dc7u); f_007aaa30();
    /* 00554dc7: jmp 0x554de5 */ goto L_00554de5;
L_00554dc9:; BB(0x00554dc9);
    /* 00554dc9: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00554dd0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554dd3: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554dd9:; BB(0x00554dd9);
    /* 00554dd9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dde: mov ecx, eax */ r_ecx = r_eax;
    /* 00554de0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554de5u); f_007aaa30();
L_00554de5:; BB(0x00554de5);
    /* 00554de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554de7: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554de9:; BB(0x00554de9);
    /* 00554de9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554dec: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x554df1u); f_0052cac0();
    /* 00554df1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554df4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00554df6: lea ebx, [ecx + 0x418] */ r_ebx = (u32)(r_ecx+0x418u);
    /* 00554dfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554dfd: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dff: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x554e05u); call_ind(t); }
    /* 00554e05: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e0b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x554e10u); f_00509590();
    /* 00554e10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554e13: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554e16: mov dword ptr [ebx + 0x3b0], eax */ W32((u32)(r_ebx+0x3b0u), r_eax);
    /* 00554e1c: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00554e22: mov edx, dword ptr [eax*4 + 0xa73af4] */ r_edx = R32((u32)(r_eax*4+0xa73af4u));
    /* 00554e29: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00554e2c: mov word ptr [ebx + 0x344], cx */ W16((u32)(r_ebx+0x344u), (u16)r_ecx);
    /* 00554e33: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
    /* 00554e3d: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554c6f); r_esp += 4; return;
L_00554fa8:; BB(0x00554fa8);
    /* 00554fa8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554fab: movsx ebx, word ptr [ecx + 0x39a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x39au));
    /* 00554fb2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554fb4: je 0x554fbd */ if (fZ) goto L_00554fbd;
L_00554fb6:; BB(0x00554fb6);
    /* 00554fb6: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 00554fbb: jmp 0x554fc2 */ goto L_00554fc2;
L_00554fbd:; BB(0x00554fbd);
    /* 00554fbd: mov ecx, 0x11 */ r_ecx = 0x11u;
L_00554fc2:; BB(0x00554fc2);
    /* 00554fc2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554fc5: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 00554fcc: jmp 0x554d33 */ goto L_00554d33;
}

void f_00554d40(void)
{
    FN_ENTER(0x00554d40);
    /* 00554d40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d42: je 0x554d79 */ if (fZ) goto L_00554d79;
L_00554d44:; BB(0x00554d44);
    /* 00554d44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d47: mov ebx, dword ptr [edx + 0x300] */ r_ebx = R32((u32)(r_edx+0x300u));
    /* 00554d4d: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 00554d53: mov dword ptr [ecx + 0x2a4], ebx */ W32((u32)(r_ecx+0x2a4u), r_ebx);
    /* 00554d59: mov esi, dword ptr [edx + 0x304] */ r_esi = R32((u32)(r_edx+0x304u));
    /* 00554d5f: mov dword ptr [ecx + 0x2a8], esi */ W32((u32)(r_ecx+0x2a8u), r_esi);
    /* 00554d65: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00554d6b: mov dword ptr [ecx + 0x2ac], edx */ W32((u32)(r_ecx+0x2acu), r_edx);
    /* 00554d71: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554d74: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x554d79u); f_00772358();
L_00554d79:; BB(0x00554d79);
    /* 00554d79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d7c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x554d81u); f_007aa094();
    /* 00554d81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d88: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x554d8du); f_00772b44();
    /* 00554d8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d90: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x554d95u); f_007b6894();
    /* 00554d95: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554d98: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x554d9du); f_007b798c();
    /* 00554d9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554da0: movsx edx, word ptr [eax + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x39au));
    /* 00554da7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554da9: je 0x554dc9 */ if (fZ) goto L_00554dc9;
L_00554dab:; BB(0x00554dab);
    /* 00554dab: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00554db2: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554db5: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554dbb:; BB(0x00554dbb);
    /* 00554dbb: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00554dc2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554dc7u); f_007aaa30();
    /* 00554dc7: jmp 0x554de5 */ goto L_00554de5;
L_00554dc9:; BB(0x00554dc9);
    /* 00554dc9: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00554dd0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554dd3: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554dd9:; BB(0x00554dd9);
    /* 00554dd9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dde: mov ecx, eax */ r_ecx = r_eax;
    /* 00554de0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x554de5u); f_007aaa30();
L_00554de5:; BB(0x00554de5);
    /* 00554de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554de7: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554de9:; BB(0x00554de9);
    /* 00554de9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554dec: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x554df1u); f_0052cac0();
    /* 00554df1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554df4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00554df6: lea ebx, [ecx + 0x418] */ r_ebx = (u32)(r_ecx+0x418u);
    /* 00554dfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554dfd: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00554dff: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x554e05u); call_ind(t); }
    /* 00554e05: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e0b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x554e10u); f_00509590();
    /* 00554e10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554e13: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554e16: mov dword ptr [ebx + 0x3b0], eax */ W32((u32)(r_ebx+0x3b0u), r_eax);
    /* 00554e1c: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00554e22: mov edx, dword ptr [eax*4 + 0xa73af4] */ r_edx = R32((u32)(r_eax*4+0xa73af4u));
    /* 00554e29: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00554e2c: mov word ptr [ebx + 0x344], cx */ W16((u32)(r_ebx+0x344u), (u16)r_ecx);
    /* 00554e33: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
    /* 00554e3d: jmp 0x554e66 */ goto L_00554e66;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554d40); r_esp += 4; return;
}

void f_00554e3f(void)
{
    FN_ENTER(0x00554e3f);
    /* 00554e3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554e42: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 00554e48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554e4a: je 0x554e66 */ if (fZ) goto L_00554e66;
L_00554e4c:; BB(0x00554e4c);
    /* 00554e4c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00554e50: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554e55: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554e59: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554e5c: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554e3f); r_esp += 4; return;
}

void f_00554e45(void)
{
    FN_ENTER(0x00554e45);
    /* 00554e45: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554e47: add byte ptr [ebp + 0xf1a74d2], al */ { u32 ad = (u32)(r_ebp+0xf1a74d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00554e4d: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 00554e4f: or byte ptr [0xffff0001], cl */ { u32 ad = (u32)(0xffff0001u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00554e55: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554e59: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554e5c: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554e45); r_esp += 4; return;
}

void f_00554f42(void)
{
    FN_ENTER(0x00554f42);
    goto L_00554f42;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554f42); r_esp += 4; return;
L_00554f42:; BB(0x00554f42);
    /* 00554f42: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00554f44: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00554f45: mov esp, 0 */ r_esp = 0x0u;
    /* 00554f4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554f51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f54: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 00554f5a: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00554f64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554f66: je 0x554f82 */ if (fZ) goto L_00554f82;
L_00554f68:; BB(0x00554f68);
    /* 00554f68: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00554f6c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00554f71: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554f75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f78: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_00554f82:; BB(0x00554f82);
    /* 00554f82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f85: push 0x129 */ { u32 v = 0x129u; r_esp -= 4; W32(r_esp, v); }
    /* 00554f8a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x554f8fu); f_007879b8();
    /* 00554f8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f92: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554f95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00554f97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x554fa0u); f_00814298();
    /* 00554fa0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554fa3: jmp 0x554e66 */ goto L_00554e66;
}

void f_00554f44(void)
{
    FN_ENTER(0x00554f44);
    goto L_00554f44;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554f44); r_esp += 4; return;
L_00554f44:; BB(0x00554f44);
    /* 00554f44: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00554f45: mov esp, 0 */ r_esp = 0x0u;
    /* 00554f4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554f51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f54: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 00554f5a: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00554f64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554f66: je 0x554f82 */ if (fZ) goto L_00554f82;
L_00554f68:; BB(0x00554f68);
    /* 00554f68: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00554f6c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00554f71: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554f75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f78: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_00554f82:; BB(0x00554f82);
    /* 00554f82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f85: push 0x129 */ { u32 v = 0x129u; r_esp -= 4; W32(r_esp, v); }
    /* 00554f8a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x554f8fu); f_007879b8();
    /* 00554f8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f92: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554f95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00554f97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x554fa0u); f_00814298();
    /* 00554fa0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554fa3: jmp 0x554e66 */ goto L_00554e66;
}

void f_00554f4a(void)
{
    FN_ENTER(0x00554f4a);
    goto L_00554f4a;
L_00554e66:; BB(0x00554e66);
    /* 00554e66: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554e69: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554e6c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e7c: ret  */ FN_RET(0x00554f4a); r_esp += 4; return;
L_00554f4a:; BB(0x00554f4a);
    /* 00554f4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554f51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f54: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 00554f5a: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00554f64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554f66: je 0x554f82 */ if (fZ) goto L_00554f82;
L_00554f68:; BB(0x00554f68);
    /* 00554f68: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00554f6c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00554f71: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00554f75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f78: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_00554f82:; BB(0x00554f82);
    /* 00554f82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f85: push 0x129 */ { u32 v = 0x129u; r_esp -= 4; W32(r_esp, v); }
    /* 00554f8a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x554f8fu); f_007879b8();
    /* 00554f8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554f92: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554f95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00554f97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554f9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x554fa0u); f_00814298();
    /* 00554fa0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00554fa3: jmp 0x554e66 */ goto L_00554e66;
}

void f_00554f4b(void)
{
    FN_ENTER(0x00554f4b);
    /* 00554f4b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00554f4c: cld  */ rt_df = 0;
    UNSUP(0x00554f4d, "falls out of decoded code");
}

void f_00554fd4(void) /* sub_554FD4 */
{
    FN_ENTER(0x00554fd4);
    /* 00554fd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554fd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00554fd6: mov esi, ecx */ r_esi = r_ecx;
    /* 00554fd8: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00554fde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554fe0: je 0x5550fb */ if (fZ) goto L_005550fb;
L_00554fe6:; BB(0x00554fe6);
    /* 00554fe6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554fe9: jne 0x55515a */ if (!fZ) goto L_0055515a;
L_00554fef:; BB(0x00554fef);
    /* 00554fef: mov ecx, esi */ r_ecx = r_esi;
    /* 00554ff1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x554ff6u); f_007aa094();
    /* 00554ff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ffa: mov ecx, esi */ r_ecx = r_esi;
    /* 00554ffc: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x555001u); f_00772b44();
    /* 00555001: mov ecx, esi */ r_ecx = r_esi;
    /* 00555003: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x555008u); f_007b6894();
    /* 00555008: mov ecx, esi */ r_ecx = r_esi;
    /* 0055500a: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x55500fu); f_007b798c();
    /* 0055500f: mov edx, dword ptr [esi + 0x370] */ r_edx = R32((u32)(r_esi+0x370u));
    /* 00555015: movsx eax, word ptr [esi + 0x39a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x39au));
    /* 0055501c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055501e: jne 0x555029 */ if (!fZ) goto L_00555029;
L_00555020:; BB(0x00555020);
    /* 00555020: mov ecx, dword ptr [edx*4 + 0xa73aa8] */ r_ecx = R32((u32)(r_edx*4+0xa73aa8u));
    /* 00555027: jmp 0x555033 */ goto L_00555033;
L_00555029:; BB(0x00555029);
    /* 00555029: mov eax, dword ptr [edx*4 + 0xa73af4] */ r_eax = R32((u32)(r_edx*4+0xa73af4u));
    /* 00555030: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
L_00555033:; BB(0x00555033);
    /* 00555033: mov edi, dword ptr [esi + 0x300] */ r_edi = R32((u32)(r_esi+0x300u));
    /* 00555039: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0055503f: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00555045: mov dword ptr [esi + 0x298], edi */ W32((u32)(r_esi+0x298u), r_edi);
    /* 0055504b: mov dword ptr [esi + 0x29c], edx */ W32((u32)(r_esi+0x29cu), r_edx);
    /* 00555051: mov dword ptr [esi + 0x2a0], eax */ W32((u32)(r_esi+0x2a0u), r_eax);
    /* 00555057: push dword ptr [esi + 0x2ac] */ { u32 v = R32((u32)(r_esi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055505d: push dword ptr [esi + 0x2a8] */ { u32 v = R32((u32)(r_esi+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555063: push dword ptr [esi + 0x2a4] */ { u32 v = R32((u32)(r_esi+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055506a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055506b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055506c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055506d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055506f: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x555074u); f_00771f5c();
    /* 00555074: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0055507a: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 00555080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555081: mov ecx, esi */ r_ecx = r_esi;
    /* 00555083: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555086: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x55508bu); f_00771858();
    /* 0055508b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055508d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055508f: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x555092u); call_ind(t); }
    /* 00555092: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00555095: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 00555098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555099: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055509a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x55509fu); f_0078ea50();
    /* 0055509f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005550a2: fcomp dword ptr [0x924c6c] */ fx_compare(ST(0), R_F32((u32)(0x924c6cu))); FPOP();
    /* 005550a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005550aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005550ab: jae 0x55515a */ if (!fC) goto L_0055515a;
L_005550b1:; BB(0x005550b1);
    /* 005550b1: mov eax, 5 */ r_eax = 0x5u;
    /* 005550b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005550bd: mov ecx, esi */ r_ecx = r_esi;
    /* 005550bf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5550c4u); f_007aa094();
    /* 005550c4: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005550ca: and eax, 0xfe7fffff */ {  u32 a = r_eax; u32 b = 0xfe7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005550cf: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 005550d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005550d7: jne 0x55515a */ if (!fZ) goto L_0055515a;
L_005550dd:; BB(0x005550dd);
    /* 005550dd: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005550e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005550e6: je 0x55515a */ if (fZ) goto L_0055515a;
L_005550e8:; BB(0x005550e8);
    /* 005550e8: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 005550f2: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 005550f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005550f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005550fa: ret  */ FN_RET(0x00554fd4); r_esp += 4; return;
L_005550fb:; BB(0x005550fb);
    /* 005550fb: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x555100u); f_00520e6c();
    /* 00555100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555102: jne 0x55512c */ if (!fZ) goto L_0055512c;
L_00555104:; BB(0x00555104);
    /* 00555104: movsx eax, word ptr [esi + 0x39a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x39au));
    /* 0055510b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055510d: je 0x555116 */ if (fZ) goto L_00555116;
L_0055510f:; BB(0x0055510f);
    /* 0055510f: mov eax, 7 */ r_eax = 0x7u;
    /* 00555114: jmp 0x555123 */ goto L_00555123;
L_00555116:; BB(0x00555116);
    /* 00555116: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 0055511c: mov eax, dword ptr [eax*4 + 0x9bdda4] */ r_eax = R32((u32)(r_eax*4+0x9bdda4u));
L_00555123:; BB(0x00555123);
    /* 00555123: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055512a: jmp 0x555135 */ goto L_00555135;
L_0055512c:; BB(0x0055512c);
    /* 0055512c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055512e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00555135:; BB(0x00555135);
    /* 00555135: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00555138: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 0055513b: mov edi, dword ptr [esi + 0x58] */ r_edi = R32((u32)(r_esi+0x58u));
    /* 0055513e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00555144: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0055514a: mov dword ptr [esi + 0x2ac], edi */ W32((u32)(r_esi+0x2acu), r_edi);
    /* 00555150: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
L_0055515a:; BB(0x0055515a);
    /* 0055515a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055515b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055515c: ret  */ FN_RET(0x00554fd4); r_esp += 4; return;
}

