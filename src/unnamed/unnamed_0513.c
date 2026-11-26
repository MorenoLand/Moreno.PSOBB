#include "protos.h"

void f_0051303c(void)
{
    FN_ENTER(0x0051303c);
    /* 0051303c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051303d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051303f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513041: push 0x8d43aa */ { u32 v = 0x8d43aau; r_esp -= 4; W32(r_esp, v); }
    /* 00513046: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051304c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051304d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00513054: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00513057: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051305a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051305d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00513060: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00513063: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x513068u); f_00520e6c();
    /* 00513068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051306a: je 0x513085 */ if (fZ) goto L_00513085;
L_0051306c:; BB(0x0051306c);
    /* 0051306c: push 0x9207c0 */ { u32 v = 0x9207c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513071: push 0x9bb3f4 */ { u32 v = 0x9bb3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00513076: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x51307bu); f_0051f674();
    /* 0051307b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051307e: mov dword ptr [0xa72d0c], eax */ W32((u32)(0xa72d0cu), r_eax);
    /* 00513083: jmp 0x5130da */ goto L_005130da;
L_00513085:; BB(0x00513085);
    /* 00513085: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0051308c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00513091: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x513096u); f_008581c5();
    /* 00513096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513097: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051309a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051309c: je 0x513390 */ if (fZ) goto L_00513390;
L_005130a2:; BB(0x005130a2);
    /* 005130a2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005130a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005130b0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005130b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005130b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005130b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005130b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005130b8: push 0x9bb3f4 */ { u32 v = 0x9bb3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005130bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130bf: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5130c4u); f_005b7a84();
    /* 005130c4: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005130c7: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005130ce: mov dword ptr [0xa72d0c], eax */ W32((u32)(0xa72d0cu), r_eax);
    /* 005130d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005130da:; BB(0x005130da);
    /* 005130da: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005130e1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5130e8u); f_008581c5();
    /* 005130e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005130e9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005130ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005130ee: je 0x513389 */ if (fZ) goto L_00513389;
L_005130f4:; BB(0x005130f4);
    /* 005130f4: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005130fb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00513102: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00513105: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513107: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051310c: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513111: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513116: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x51311bu); f_005795a0();
    /* 0051311b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051311e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00513125: mov dword ptr [0xa72d14], eax */ W32((u32)(0xa72d14u), r_eax);
    /* 0051312a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513131: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00513138: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051313a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51313fu); f_008581c5();
    /* 0051313f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513140: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00513143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513145: je 0x513382 */ if (fZ) goto L_00513382;
L_0051314b:; BB(0x0051314b);
    /* 0051314b: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00513152: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00513159: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051315c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051315e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513163: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513168: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051316d: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x513172u); f_005795a0();
    /* 00513172: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00513175: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0051317c: mov dword ptr [0xa72d18], eax */ W32((u32)(0xa72d18u), r_eax);
    /* 00513181: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513188: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 0051318d: mov ebx, dword ptr [0x9bb334] */ r_ebx = R32((u32)(0x9bb334u));
    /* 00513193: mov ecx, dword ptr [0xa72d14] */ r_ecx = R32((u32)(0xa72d14u));
    /* 00513199: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051319b: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005131a3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131a9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131ad: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131b0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131b5u); f_00579a28();
    /* 005131b5: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 005131ba: mov ebx, dword ptr [0x9bb344] */ r_ebx = R32((u32)(0x9bb344u));
    /* 005131c0: mov ecx, dword ptr [0xa72d18] */ r_ecx = R32((u32)(0xa72d18u));
    /* 005131c6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005131c8: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131ce: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005131d0: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131d6: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131da: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131dd: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131e2u); f_00579a28();
    /* 005131e2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131e4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131e9u); f_008581c5();
    /* 005131e9: mov dword ptr [0xa72d08], eax */ W32((u32)(0xa72d08u), r_eax);
    /* 005131ee: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131f5u); f_008581c5();
    /* 005131f5: mov dword ptr [0xa72d04], eax */ W32((u32)(0xa72d04u), r_eax);
    /* 005131fa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x513201u); f_008581c5();
    /* 00513201: mov dword ptr [0xa72d00], eax */ W32((u32)(0xa72d00u), r_eax);
    /* 00513206: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00513208: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51320du); f_008581c5();
    /* 0051320d: mov dword ptr [0xa72cfc], eax */ W32((u32)(0xa72cfcu), r_eax);
    /* 00513212: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00513214: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513219u); f_0077a684();
    /* 00513219: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051321f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00513221: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513223: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513228u); f_0077a684();
    /* 00513228: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051322e: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00513230: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513233: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513238u); f_0077a684();
    /* 00513238: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051323e: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00513240: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513243: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513248u); f_0077a698();
    /* 00513248: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051324e: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00513250: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513252: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513257u); f_0077a698();
    /* 00513257: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051325d: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0051325f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513262: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513267u); f_0077a698();
    /* 00513267: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051326d: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051326f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513272: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513277u); f_0077a6b4();
    /* 00513277: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051327d: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051327f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513281: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513286u); f_0077a6b4();
    /* 00513286: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051328c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0051328e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513291: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513296u); f_0077a6b4();
    /* 00513296: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051329c: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051329e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132a1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132a6u); f_0077a6cc();
    /* 005132a6: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ac: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 005132ae: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005132b0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132b5u); f_0077a6cc();
    /* 005132b5: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132bb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005132bd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005132c0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132c5u); f_0077a6cc();
    /* 005132c5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005132c8: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ce: mov esi, dword ptr [0x9205b4] */ r_esi = R32((u32)(0x9205b4u));
    /* 005132d4: movzx edi, word ptr [0x9205b8] */ r_edi = (u32)R16((u32)(0x9205b8u));
    /* 005132db: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132de: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 005132e4: mov dword ptr [0xa72d10], 0 */ W32((u32)(0xa72d10u), 0x0u);
    /* 005132ee: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005132f1: mov eax, 0x2f */ r_eax = 0x2fu;
    /* 005132f6: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005132fa: movzx eax, word ptr [0x9205ba] */ r_eax = (u32)R16((u32)(0x9205bau));
    /* 00513301: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 00513305: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 0051330a: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 0051330e: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00513312: movzx eax, word ptr [0x9205bc] */ r_eax = (u32)R16((u32)(0x9205bcu));
    /* 00513319: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 0051331d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00513323: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00513326: mov ebx, 0x31 */ r_ebx = 0x31u;
    /* 0051332b: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 0051332f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00513331:; BB(0x00513331);
    /* 00513331: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00513334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513337: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0051333d: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513342: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00513345: movsx esi, word ptr [ebp + ecx - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffccu));
    /* 0051334a: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051334e: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513352: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513353: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x513358u); f_00608470();
    /* 00513358: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051335b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051335e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00513361: jge 0x51336b */ if ((fS==fO)) goto L_0051336b;
L_00513363:; BB(0x00513363);
    /* 00513363: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 00513369: jmp 0x513331 */ goto L_00513331;
L_0051336b:; BB(0x0051336b);
    /* 0051336b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051336e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513371: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00513374: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00513377: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051337e: mov esp, ebp */ r_esp = r_ebp;
    /* 00513380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513381: ret  */ FN_RET(0x0051303c); r_esp += 4; return;
L_00513382:; BB(0x00513382);
    /* 00513382: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00513384: jmp 0x51317c */ f_0051317c(); return;
L_00513389:; BB(0x00513389);
    /* 00513389: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051338b: jmp 0x513125 */ f_00513125(); return;
L_00513390:; BB(0x00513390);
    /* 00513390: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00513392: jmp 0x5130ce */ f_005130ce(); return;
}

void f_00513398(void) /* sub_513398 */
{
    FN_ENTER(0x00513398);
    /* 00513398: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00513399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051339a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051339b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051339e: mov edi, ecx */ r_edi = r_ecx;
    /* 005133a0: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005133a6: fcomp dword ptr [0x9205c0] */ fx_compare(ST(0), R_F32((u32)(0x9205c0u))); FPOP();
    /* 005133ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005133ae: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 005133b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005133b5: jae 0x513440 */ if (!fC) goto L_00513440;
L_005133bb:; BB(0x005133bb);
    /* 005133bb: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005133c2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005133c5: jne 0x5133d9 */ if (!fZ) goto L_005133d9;
L_005133c7:; BB(0x005133c7);
    /* 005133c7: mov ecx, dword ptr [0xa72d14] */ r_ecx = R32((u32)(0xa72d14u));
    /* 005133cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005133ce: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5133d3u); f_00579de0();
    /* 005133d3: mov ebp, eax */ r_ebp = r_eax;
    /* 005133d5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005133d7: jmp 0x5133f1 */ goto L_005133f1;
L_005133d9:; BB(0x005133d9);
    /* 005133d9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005133dc: jne 0x513440 */ if (!fZ) goto L_00513440;
L_005133de:; BB(0x005133de);
    /* 005133de: mov ecx, dword ptr [0xa72d18] */ r_ecx = R32((u32)(0xa72d18u));
    /* 005133e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005133e5: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5133eau); f_00579de0();
    /* 005133ea: mov ebp, eax */ r_ebp = r_eax;
    /* 005133ec: mov ebx, 1 */ r_ebx = 0x1u;
L_005133f1:; BB(0x005133f1);
    /* 005133f1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005133f3: je 0x513440 */ if (fZ) goto L_00513440;
L_005133f5:; BB(0x005133f5);
    /* 005133f5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5133fau); f_0082d7b0();
    /* 005133fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005133fc: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x513401u); f_00830cd8();
    /* 00513401: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00513404: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x513409u); f_0082d838();
    /* 00513409: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0051340c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051340e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x513413u); f_0082d8bc();
    /* 00513413: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00513416: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513419: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051341b: mov edx, ebp */ r_edx = r_ebp;
    /* 0051341d: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x513422u); f_0082f940();
    /* 00513422: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x513427u); f_0082da80();
    /* 00513427: mov ecx, dword ptr [edi + ebx*4 + 0x3cc] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x3ccu));
    /* 0051342e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513430: je 0x513440 */ if (fZ) goto L_00513440;
L_00513432:; BB(0x00513432);
    /* 00513432: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00513435: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00513439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051343a: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0051343c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051343d: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x513440u); call_ind(t); }
L_00513440:; BB(0x00513440);
    /* 00513440: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513443: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00513444: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513445: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00513446: ret  */ FN_RET(0x00513398); r_esp += 4; return;
}

void f_00513448(void) /* sub_513448 */
{
    FN_ENTER(0x00513448);
    /* 00513448: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513449: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051344b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051344d: call 0x51346c */ r_esp -= 4; W32(r_esp, 0x513452u); f_0051346c();
    /* 00513452: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00513456: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00513458: jne 0x51345e */ if (!fZ) goto L_0051345e;
L_0051345a:; BB(0x0051345a);
    /* 0051345a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051345b: ret 4 */ FN_RET(0x00513448); r_esp += 8; return;
L_0051345e:; BB(0x0051345e);
    /* 0051345e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051345f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x513464u); f_005c2f74();
    /* 00513464: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513465: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00513466: ret 4 */ FN_RET(0x00513448); r_esp += 8; return;
}

void f_0051346c(void) /* sub_51346C */
{
    FN_ENTER(0x0051346c);
    /* 0051346c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051346d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051346f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513471: push 0x8d43f2 */ { u32 v = 0x8d43f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513476: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051347c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051347d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00513484: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00513487: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051348a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051348d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00513490: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00513493: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00513496: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0051349d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005134a0: mov edx, dword ptr [ecx + 0x3a0] */ r_edx = R32((u32)(r_ecx+0x3a0u));
    /* 005134a6: mov dword ptr [ecx], 0xaffb20 */ W32((u32)(r_ecx), 0xaffb20u);
    /* 005134ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005134ae: je 0x5134ca */ if (fZ) goto L_005134ca;
L_005134b0:; BB(0x005134b0);
    /* 005134b0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005134b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005134b7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005134bc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005134c0: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
L_005134ca:; BB(0x005134ca);
    /* 005134ca: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5134cfu); f_007b9c8c();
    /* 005134cf: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005134d6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005134db: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005134de: add eax, 0x3a4 */ {  u32 a = r_eax; u32 b = 0x3a4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005134e3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005134e5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005134e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005134e8: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5134edu); f_008586d6();
    /* 005134ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005134f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005134f7: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5134fcu); f_0078638c();
    /* 005134fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005134ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00513506: mov esp, ebp */ r_esp = r_ebp;
    /* 00513508: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513509: ret  */ FN_RET(0x0051346c); r_esp += 4; return;
}

void f_0051350c(void) /* sub_51350C */
{
    FN_ENTER(0x0051350c);
    /* 0051350c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051350d: mov esi, ecx */ r_esi = r_ecx;
    /* 0051350f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x513514u); f_004f7c84();
    /* 00513514: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00513517: je 0x513612 */ if (fZ) goto L_00513612;
L_0051351d:; BB(0x0051351d);
    /* 0051351d: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00513524: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00513527: ja 0x51358a */ if ((!fC&&!fZ)) goto L_0051358a;
L_00513529:; BB(0x00513529);
    /* 00513529: mov eax, dword ptr [eax*4 + 0x9207d8] */ r_eax = R32((u32)(r_eax*4+0x9207d8u));
    /* 00513530: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00513612:; BB(0x00513612);
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x0051350c); r_esp += 4; return;
}

void f_00513532(void)
{
    FN_ENTER(0x00513532);
    /* 00513532: mov ecx, esi */ r_ecx = r_esi;
    /* 00513534: call 0x513614 */ r_esp -= 4; W32(r_esp, 0x513539u); f_00513614();
    /* 00513539: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x00513532); r_esp += 4; return;
}

void f_0051353b(void)
{
    FN_ENTER(0x0051353b);
    /* 0051353b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051353d: call 0x513794 */ r_esp -= 4; W32(r_esp, 0x513542u); f_00513794();
    /* 00513542: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x0051353b); r_esp += 4; return;
}

void f_00513544(void)
{
    FN_ENTER(0x00513544);
    /* 00513544: mov ecx, esi */ r_ecx = r_esi;
    /* 00513546: call 0x51383c */ r_esp -= 4; W32(r_esp, 0x51354bu); f_0051383c();
    /* 0051354b: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x00513544); r_esp += 4; return;
}

void f_0051354d(void)
{
    FN_ENTER(0x0051354d);
    /* 0051354d: mov ecx, esi */ r_ecx = r_esi;
    /* 0051354f: call 0x5138b4 */ r_esp -= 4; W32(r_esp, 0x513554u); f_005138b4();
    /* 00513554: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x0051354d); r_esp += 4; return;
}

void f_00513556(void)
{
    FN_ENTER(0x00513556);
    /* 00513556: mov ecx, esi */ r_ecx = r_esi;
    /* 00513558: call 0x513c70 */ r_esp -= 4; W32(r_esp, 0x51355du); f_00513c70();
    /* 0051355d: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x00513556); r_esp += 4; return;
}

void f_0051355f(void)
{
    FN_ENTER(0x0051355f);
    /* 0051355f: mov ecx, esi */ r_ecx = r_esi;
    /* 00513561: call 0x514378 */ r_esp -= 4; W32(r_esp, 0x513566u); f_00514378();
    /* 00513566: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x0051355f); r_esp += 4; return;
}

void f_00513568(void)
{
    FN_ENTER(0x00513568);
    /* 00513568: mov ecx, esi */ r_ecx = r_esi;
    /* 0051356a: call 0x51472c */ r_esp -= 4; W32(r_esp, 0x51356fu); f_0051472c();
    /* 0051356f: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x00513568); r_esp += 4; return;
}

void f_00513571(void)
{
    FN_ENTER(0x00513571);
    /* 00513571: mov ecx, esi */ r_ecx = r_esi;
    /* 00513573: call 0x514938 */ r_esp -= 4; W32(r_esp, 0x513578u); f_00514938();
    /* 00513578: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x00513571); r_esp += 4; return;
}

void f_0051357a(void)
{
    FN_ENTER(0x0051357a);
    /* 0051357a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051357c: call 0x514ccc */ r_esp -= 4; W32(r_esp, 0x513581u); f_00514ccc();
    /* 00513581: jmp 0x51358a */ goto L_0051358a;
L_0051358a:; BB(0x0051358a);
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x0051357a); r_esp += 4; return;
}

void f_00513583(void)
{
    FN_ENTER(0x00513583);
    /* 00513583: mov ecx, esi */ r_ecx = r_esi;
    /* 00513585: call 0x515098 */ r_esp -= 4; W32(r_esp, 0x51358au); f_00515098();
    /* 0051358a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051358c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x513591u); f_0078730c();
    /* 00513591: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513594: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051359a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005135a0: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005135a3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005135a9: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005135ac: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005135af: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5135b4u); f_006946a8();
    /* 005135b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005135b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005135b9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5135beu); f_00770738();
    /* 005135be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135c0: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135c2:; BB(0x005135c2);
    /* 005135c2: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005135c5: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ca: je 0x5135eb */ if (fZ) goto L_005135eb;
L_005135cc:; BB(0x005135cc);
    /* 005135cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005135cf: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005135d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005135db: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005135e2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005135e8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005135eb:; BB(0x005135eb);
    /* 005135eb: fld dword ptr [0x920984] */ FPUSH(R_F32((u32)(0x920984u)));
    /* 005135f1: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005135f7: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005135fd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513604: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051360a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x51360fu); f_00805608();
    /* 0051360f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513613: ret  */ FN_RET(0x00513583); r_esp += 4; return;
}

void f_00513614(void) /* sub_513614 */
{
    FN_ENTER(0x00513614);
    /* 00513614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00513615: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00513618: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051361a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051361c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x513621u); f_007aa094();
    /* 00513621: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513623: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513625: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51362au); f_007aaa30();
    /* 0051362a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051362c: je 0x51364d */ if (fZ) goto L_0051364d;
L_0051362e:; BB(0x0051362e);
    /* 0051362e: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513633: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513635: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51363au); f_007879b8();
    /* 0051363a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051363c: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051363f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00513641: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513645: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51364au); f_00814298();
    /* 0051364a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051364d:; BB(0x0051364d);
    /* 0051364d: push 0x41d80000 */ { u32 v = 0x41d80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513652: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513654: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x513659u); f_007aaa30();
    /* 00513659: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051365b: je 0x513706 */ if (fZ) goto L_00513706;
L_00513661:; BB(0x00513661);
    /* 00513661: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00513667: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0051366a: fmul dword ptr [0x920974] */ ST(0) = ST(0) * R_F32((u32)(0x920974u));
    /* 00513670: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00513674: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0051367b: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 00513683: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00513688: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x51368du); f_0082d990();
    /* 0051368d: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00513690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00513692: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x513697u); f_0082d8bc();
    /* 00513697: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051369a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051369b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0051369f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005136a1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5136a6u); f_0082eab8();
    /* 005136a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5136abu); f_0082da80();
    /* 005136ab: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005136ae: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005136b1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5136b6u); f_0082ebac();
    /* 005136b6: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005136bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005136bd: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5136c2u); f_007879b8();
    /* 005136c2: mov ecx, eax */ r_ecx = r_eax;
    /* 005136c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005136c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005136c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005136ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005136cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005136cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005136cd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5136d2u); f_00814298();
    /* 005136d2: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005136d7: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5136dcu); f_00814680();
    /* 005136dc: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005136e0: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005136e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005136e6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5136ebu); f_0050b510();
    /* 005136eb: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 005136ef: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005136f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005136f2: call 0x5781d8 */ r_esp -= 4; W32(r_esp, 0x5136f7u); f_005781d8();
    /* 005136f7: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005136fb: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005136fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005136fe: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x513703u); f_00578778();
    /* 00513703: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513706:; BB(0x00513706);
    /* 00513706: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 0051370c: fmul dword ptr [0x920970] */ ST(0) = ST(0) * R_F32((u32)(0x920970u));
    /* 00513712: fmul dword ptr [0x920974] */ ST(0) = ST(0) * R_F32((u32)(0x920974u));
    /* 00513718: fcomp dword ptr [ebp + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc0u))); FPOP();
    /* 0051371e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00513720: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00513721: ja 0x51373a */ if ((!fC&&!fZ)) goto L_0051373a;
L_00513723:; BB(0x00513723);
    /* 00513723: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00513726: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051372b: jne 0x513764 */ if (!fZ) goto L_00513764;
L_0051372d:; BB(0x0051372d);
    /* 0051372d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051372f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513731: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513733: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x513738u); f_00772b44();
    /* 00513738: jmp 0x513764 */ goto L_00513764;
L_0051373a:; BB(0x0051373a);
    /* 0051373a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051373d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051373f: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x513742u); call_ind(t); }
    /* 00513742: fld dword ptr [0x920974] */ FPUSH(R_F32((u32)(0x920974u)));
    /* 00513748: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 0051374e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00513750: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
    /* 00513756: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00513758: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 0051375e: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
L_00513764:; BB(0x00513764);
    /* 00513764: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 0051376a: fsub dword ptr [0x92096c] */ ST(0) = ST(0) - R_F32((u32)(0x92096cu));
    /* 00513770: fcom dword ptr [0x920968] */ fx_compare(ST(0), R_F32((u32)(0x920968u))); 
    /* 00513776: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00513778: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 0051377e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051377f: jae 0x51378e */ if (!fC) goto L_0051378e;
L_00513781:; BB(0x00513781);
    /* 00513781: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00513785: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051378a: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_0051378e:; BB(0x0051378e);
    /* 0051378e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513792: ret  */ FN_RET(0x00513614); r_esp += 4; return;
}

void f_00513794(void) /* sub_513794 */
{
    FN_ENTER(0x00513794);
    /* 00513794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00513795: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00513797: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513799: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51379eu); f_007aa094();
    /* 0051379e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005137a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005137a2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5137a7u); f_007aaa30();
    /* 005137a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005137a9: je 0x5137d4 */ if (fZ) goto L_005137d4;
L_005137ab:; BB(0x005137ab);
    /* 005137ab: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005137b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005137b2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5137b7u); f_007879b8();
    /* 005137b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005137b9: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005137bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005137be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005137bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005137c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005137c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005137c2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5137c7u); f_00814298();
    /* 005137c7: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005137cc: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5137d1u); f_00814680();
    /* 005137d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005137d4:; BB(0x005137d4);
    /* 005137d4: mov dword ptr [ebp + 0x314], 0 */ W32((u32)(r_ebp+0x314u), 0x0u);
    /* 005137de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005137e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005137e2: mov dword ptr [ebp + 0x30c], 0 */ W32((u32)(r_ebp+0x30cu), 0x0u);
    /* 005137ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005137ee: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5137f3u); f_00772b44();
    /* 005137f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005137f5: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5137fau); f_007b6880();
    /* 005137fa: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 00513800: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00513803: je 0x51383a */ if (fZ) goto L_0051383a;
L_00513805:; BB(0x00513805);
    /* 00513805: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00513808: and eax, 0xfbfff9ff */ {  u32 a = r_eax; u32 b = 0xfbfff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051380d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00513810: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00513816: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00513819: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051381f: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00513822: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 00513829: mov dword ptr [ebp + 0x390], 0 */ W32((u32)(r_ebp+0x390u), 0x0u);
    /* 00513833: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
L_0051383a:; BB(0x0051383a);
    /* 0051383a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051383b: ret  */ FN_RET(0x00513794); r_esp += 4; return;
}

void f_0051383c(void) /* sub_51383C */
{
    FN_ENTER(0x0051383c);
    /* 0051383c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051383d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051383f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513841: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x513846u); f_007aa094();
    /* 00513846: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00513849: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051384e: jne 0x51385b */ if (!fZ) goto L_0051385b;
L_00513850:; BB(0x00513850);
    /* 00513850: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513854: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00513856: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x51385bu); f_00772b44();
L_0051385b:; BB(0x0051385b);
    /* 0051385b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051385d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x513862u); f_007b6880();
    /* 00513862: movsx edx, word ptr [ebp + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 00513869: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0051386c: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00513873: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00513875: jge 0x5138b0 */ if ((fS==fO)) goto L_005138b0;
L_00513877:; BB(0x00513877);
    /* 00513877: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0051387a: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051387f: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00513882: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00513888: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0051388b: or edx, 0x8001 */ {  u32 a = r_edx; u32 b = 0x8001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00513891: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00513894: movzx eax, word ptr [ebp + 0x342] */ r_eax = (u32)R16((u32)(r_ebp+0x342u));
    /* 0051389b: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 005138a2: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 005138a9: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
L_005138b0:; BB(0x005138b0);
    /* 005138b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005138b1: ret  */ FN_RET(0x0051383c); r_esp += 4; return;
}

void f_005138b4(void) /* sub_5138B4 */
{
    FN_ENTER(0x005138b4);
    /* 005138b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005138b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005138b6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005138b9: mov esi, ecx */ r_esi = r_ecx;
    /* 005138bb: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 005138c2: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005138c7: jl 0x5138f8 */ if ((fS!=fO)) goto L_005138f8;
L_005138c9:; BB(0x005138c9);
    /* 005138c9: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005138ce: jge 0x5138e1 */ if ((fS==fO)) goto L_005138e1;
L_005138d0:; BB(0x005138d0);
    /* 005138d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138d1: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5138d6u); f_00786b3c();
    /* 005138d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005138d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138d8: mov ecx, esi */ r_ecx = r_esi;
    /* 005138da: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5138dfu); f_007706b0();
    /* 005138df: jmp 0x513924 */ goto L_00513924;
L_005138e1:; BB(0x005138e1);
    /* 005138e1: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005138e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005138e8: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 005138ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005138f1: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5138f6u); f_007706b0();
    /* 005138f6: jmp 0x513924 */ goto L_00513924;
L_005138f8:; BB(0x005138f8);
    /* 005138f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138f9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5138feu); f_0068d5a8();
    /* 005138fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005138ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513901: je 0x51391b */ if (fZ) goto L_0051391b;
L_00513903:; BB(0x00513903);
    /* 00513903: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00513909: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051390f: jne 0x51391b */ if (!fZ) goto L_0051391b;
L_00513911:; BB(0x00513911);
    /* 00513911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513912: mov ecx, esi */ r_ecx = r_esi;
    /* 00513914: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x513919u); f_007706b0();
    /* 00513919: jmp 0x513924 */ goto L_00513924;
L_0051391b:; BB(0x0051391b);
    /* 0051391b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051391d: mov ecx, esi */ r_ecx = r_esi;
    /* 0051391f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x513924u); f_007706b0();
L_00513924:; BB(0x00513924);
    /* 00513924: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00513927: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051392c: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 00513932: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00513935: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00513938: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0051393b: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0051393e: mov ecx, esi */ r_ecx = r_esi;
    /* 00513940: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x513945u); f_007aa094();
    /* 00513945: mov ecx, esi */ r_ecx = r_esi;
    /* 00513947: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x51394cu); f_00770738();
    /* 0051394c: mov ebx, eax */ r_ebx = r_eax;
    /* 0051394e: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00513955: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513958: jne 0x513af2 */ if (!fZ) goto L_00513af2;
L_0051395e:; BB(0x0051395e);
    /* 0051395e: push dword ptr [esi + 0x2ac] */ { u32 v = R32((u32)(r_esi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00513964: push dword ptr [esi + 0x2a8] */ { u32 v = R32((u32)(r_esi+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051396a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051396c: push dword ptr [esi + 0x2a4] */ { u32 v = R32((u32)(r_esi+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513972: push dword ptr [esi + 0x2a0] */ { u32 v = R32((u32)(r_esi+0x2a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513978: push dword ptr [esi + 0x29c] */ { u32 v = R32((u32)(r_esi+0x29cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051397e: push dword ptr [esi + 0x298] */ { u32 v = R32((u32)(r_esi+0x298u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513984: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051398a: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x51398fu); f_00771f5c();
    /* 0051398f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00513991: mov ecx, esi */ r_ecx = r_esi;
    /* 00513993: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x513996u); call_ind(t); }
    /* 00513996: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051399b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051399d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5139a2u); f_007aaa30();
    /* 005139a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005139a4: je 0x513c55 */ if (fZ) goto L_00513c55;
L_005139aa:; BB(0x005139aa);
    /* 005139aa: mov eax, 2 */ r_eax = 0x2u;
    /* 005139af: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005139b6: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005139bb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005139bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005139bf: jle 0x513aad */ if ((fZ||fS!=fO)) goto L_00513aad;
L_005139c5:; BB(0x005139c5);
    /* 005139c5: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
L_005139c9:; BB(0x005139c9);
    /* 005139c9: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 005139d0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005139d2: je 0x513c64 */ if (fZ) goto L_00513c64;
L_005139d8:; BB(0x005139d8);
    /* 005139d8: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005139dc: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005139e2: jge 0x513c5b */ if ((fS==fO)) goto L_00513c5b;
L_005139e8:; BB(0x005139e8);
    /* 005139e8: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 005139ef: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005139f2: jne 0x513a9e */ if (!fZ) goto L_00513a9e;
L_005139f8:; BB(0x005139f8);
    /* 005139f8: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005139fe: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00513a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513a05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513a06: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x513a0bu); f_007a9180();
    /* 00513a0b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00513a0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513a12: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00513a16: mov ecx, dword ptr [esi + 0x31c] */ r_ecx = R32((u32)(r_esi+0x31cu));
    /* 00513a1c: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00513a1f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00513a21: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00513a23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00513a25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00513a26: jb 0x513a64 */ if (fC) goto L_00513a64;
L_00513a28:; BB(0x00513a28);
    /* 00513a28: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00513a2b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00513a2f: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00513a33: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00513a35: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00513a39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00513a3b: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00513a40: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00513a44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513a45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513a46: mov ecx, edi */ r_ecx = r_edi;
    /* 00513a48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513a49: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00513a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513a4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513a50: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x513a53u); call_ind(t); }
    /* 00513a53: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00513a55: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513a58: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00513a5c: mov ecx, edi */ r_ecx = r_edi;
    /* 00513a5e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00513a61: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x513a64u); call_ind(t); }
L_00513a64:; BB(0x00513a64);
    /* 00513a64: fld dword ptr [0xa72d20] */ FPUSH(R_F32((u32)(0xa72d20u)));
    /* 00513a6a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00513a6c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00513a70: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00513a72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00513a74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00513a75: jbe 0x513a7e */ if ((fC||fZ)) goto L_00513a7e;
L_00513a77:; BB(0x00513a77);
    /* 00513a77: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00513a7c: jmp 0x513a9e */ goto L_00513a9e;
L_00513a7e:; BB(0x00513a7e);
    /* 00513a7e: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00513a82: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513a88: je 0x513a91 */ if (fZ) goto L_00513a91;
L_00513a8a:; BB(0x00513a8a);
    /* 00513a8a: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00513a8f: jmp 0x513a9e */ goto L_00513a9e;
L_00513a91:; BB(0x00513a91);
    /* 00513a91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513a93: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x513a98u); f_004d4288();
    /* 00513a98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513a99: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_00513a9e:; BB(0x00513a9e);
    /* 00513a9e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00513aa1: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513aa3: jl 0x5139c9 */ if ((fS!=fO)) goto L_005139c9;
L_00513aa9:; BB(0x00513aa9);
    /* 00513aa9: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_00513aad:; BB(0x00513aad);
    /* 00513aad: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00513ab2: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00513ab5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ab6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x513abbu); f_0050b510();
    /* 00513abb: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513ac0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ac1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x513ac6u); f_0050b510();
    /* 00513ac6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513ac9: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00513ace: mov ecx, esi */ r_ecx = r_esi;
    /* 00513ad0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x513ad5u); f_007879b8();
    /* 00513ad5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00513ad7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ad9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513adb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x513ae0u); f_00814298();
    /* 00513ae0: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 00513ae5: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x513aeau); f_00814680();
    /* 00513aea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513aed: jmp 0x513c55 */ goto L_00513c55;
L_00513af2:; BB(0x00513af2);
    /* 00513af2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513af5: jne 0x513b43 */ if (!fZ) goto L_00513b43;
L_00513af7:; BB(0x00513af7);
    /* 00513af7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513af9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513afb: mov ecx, esi */ r_ecx = r_esi;
    /* 00513afd: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x513b02u); f_00772b44();
    /* 00513b02: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00513b08: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b0b: je 0x513c55 */ if (fZ) goto L_00513c55;
L_00513b11:; BB(0x00513b11);
    /* 00513b11: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00513b14: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 00513b1a: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00513b1f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00513b22: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00513b25: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00513b28: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00513b2b: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00513b35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00513b37: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00513b3e: jmp 0x513c55 */ goto L_00513c55;
L_00513b43:; BB(0x00513b43);
    /* 00513b43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b47: mov ecx, esi */ r_ecx = r_esi;
    /* 00513b49: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x513b4eu); f_00772b44();
    /* 00513b4e: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b53: mov ecx, esi */ r_ecx = r_esi;
    /* 00513b55: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x513b5au); f_007aaa30();
    /* 00513b5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b5c: je 0x513c55 */ if (fZ) goto L_00513c55;
L_00513b62:; BB(0x00513b62);
    /* 00513b62: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b64: je 0x513c1e */ if (fZ) goto L_00513c1e;
L_00513b6a:; BB(0x00513b6a);
    /* 00513b6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b6c: push dword ptr [ebx + 0x308] */ { u32 v = R32((u32)(r_ebx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513b72: mov ecx, esi */ r_ecx = r_esi;
    /* 00513b74: push dword ptr [ebx + 0x304] */ { u32 v = R32((u32)(r_ebx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513b7a: push dword ptr [ebx + 0x300] */ { u32 v = R32((u32)(r_ebx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513b80: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x513b85u); f_00771c8c();
    /* 00513b85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b87: jne 0x513b9a */ if (!fZ) goto L_00513b9a;
L_00513b89:; BB(0x00513b89);
    /* 00513b89: mov eax, 2 */ r_eax = 0x2u;
    /* 00513b8e: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00513b95: jmp 0x513c2a */ goto L_00513c2a;
L_00513b9a:; BB(0x00513b9a);
    /* 00513b9a: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513ba0: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513ba6: mov ecx, esi */ r_ecx = r_esi;
    /* 00513ba8: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513bae: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x513bb3u); f_00771f1c();
    /* 00513bb3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00513bb6: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 00513bbc: mov ebx, dword ptr [esi + 0x2a8] */ r_ebx = R32((u32)(r_esi+0x2a8u));
    /* 00513bc2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00513bc5: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 00513bcb: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00513bcf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00513bd3: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00513bd9: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x513bdeu); f_0082f9c4();
    /* 00513bde: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00513be1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00513be3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00513be7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00513be9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00513beb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00513bec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00513bef: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x513bf4u); f_0082dc9c();
    /* 00513bf4: fld dword ptr [0x920954] */ FPUSH(R_F32((u32)(0x920954u)));
    /* 00513bfa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00513bfc: fld dword ptr [0x920950] */ FPUSH(R_F32((u32)(0x920950u)));
    /* 00513c02: fdiv dword ptr [esi + 0xc8] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xc8u));
    /* 00513c08: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00513c0a: fstp dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0)); FPOP();
    /* 00513c10: mov eax, 1 */ r_eax = 0x1u;
    /* 00513c15: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00513c1c: jmp 0x513c2a */ goto L_00513c2a;
L_00513c1e:; BB(0x00513c1e);
    /* 00513c1e: mov eax, 2 */ r_eax = 0x2u;
    /* 00513c23: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_00513c2a:; BB(0x00513c2a);
    /* 00513c2a: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00513c2f: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00513c32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c33: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x513c38u); f_0050b510();
    /* 00513c38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513c3b: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 00513c40: mov ecx, esi */ r_ecx = r_esi;
    /* 00513c42: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x513c47u); f_007879b8();
    /* 00513c47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00513c49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513c4d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x513c52u); f_00814298();
    /* 00513c52: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513c55:; BB(0x00513c55);
    /* 00513c55: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00513c58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00513c59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00513c5a: ret  */ FN_RET(0x005138b4); r_esp += 4; return;
L_00513c5b:; BB(0x00513c5b);
    /* 00513c5b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00513c5f: jmp 0x513aad */ goto L_00513aad;
L_00513c64:; BB(0x00513c64);
    /* 00513c64: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00513c68: jmp 0x513aad */ goto L_00513aad;
}

void f_00513c70(void) /* sub_513C70 */
{
    FN_ENTER(0x00513c70);
    /* 00513c70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c71: mov ebx, esp */ r_ebx = r_esp;
    /* 00513c73: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00513c76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00513c77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00513c78: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00513c7b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00513c7f: mov ebp, esp */ r_ebp = r_esp;
    /* 00513c81: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513c83: push 0x8d441a */ { u32 v = 0x8d441au; r_esp -= 4; W32(r_esp, v); }
    /* 00513c88: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00513c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513c8f: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00513c96: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00513c99: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00513c9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00513c9f: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00513ca2: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00513ca5: movzx eax, word ptr [ecx + 0x340] */ r_eax = (u32)R16((u32)(r_ecx+0x340u));
    /* 00513cac: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513cb1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00513cb4: jl 0x513ce4 */ if ((fS!=fO)) goto L_00513ce4;
L_00513cb6:; BB(0x00513cb6);
    /* 00513cb6: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513cbb: jge 0x513ccf */ if ((fS==fO)) goto L_00513ccf;
L_00513cbd:; BB(0x00513cbd);
    /* 00513cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513cbe: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x513cc3u); f_00786b3c();
    /* 00513cc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513cc4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513cc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513cc8: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x513ccdu); f_007706b0();
    /* 00513ccd: jmp 0x513d31 */ goto L_00513d31;
L_00513ccf:; BB(0x00513ccf);
    /* 00513ccf: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00513cd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513cd6: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 00513cdd: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x513ce2u); f_007706b0();
    /* 00513ce2: jmp 0x513d31 */ goto L_00513d31;
L_00513ce4:; BB(0x00513ce4);
    /* 00513ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ce5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x513ceau); f_0068d5a8();
    /* 00513cea: mov edi, eax */ r_edi = r_eax;
    /* 00513cec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513cef: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513cf1: je 0x513d27 */ if (fZ) goto L_00513d27;
L_00513cf3:; BB(0x00513cf3);
    /* 00513cf3: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00513cf9: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513cff: jne 0x513d27 */ if (!fZ) goto L_00513d27;
L_00513d01:; BB(0x00513d01);
    /* 00513d01: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d04: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x513d09u); f_007ba980();
    /* 00513d09: mov esi, eax */ r_esi = r_eax;
    /* 00513d0b: mov ecx, edi */ r_ecx = r_edi;
    /* 00513d0d: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x513d12u); f_007ba980();
    /* 00513d12: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00513d15: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 00513d18: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513d1a: jne 0x513d27 */ if (!fZ) goto L_00513d27;
L_00513d1c:; BB(0x00513d1c);
    /* 00513d1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00513d20: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x513d25u); f_007706b0();
    /* 00513d25: jmp 0x513d31 */ goto L_00513d31;
L_00513d27:; BB(0x00513d27);
    /* 00513d27: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513d2c: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x513d31u); f_007706b0();
L_00513d31:; BB(0x00513d31);
    /* 00513d31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d34: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x513d39u); f_007aa094();
    /* 00513d39: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d3c: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x513d41u); f_00770738();
    /* 00513d41: mov esi, eax */ r_esi = r_eax;
    /* 00513d43: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d46: movsx edx, word ptr [edx + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x330u));
    /* 00513d4d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513d50: jne 0x513fc3 */ if (!fZ) goto L_00513fc3;
L_00513d56:; BB(0x00513d56);
    /* 00513d56: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513d5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d5e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x513d63u); f_007aaa30();
    /* 00513d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513d65: je 0x513f92 */ if (fZ) goto L_00513f92;
L_00513d6b:; BB(0x00513d6b);
    /* 00513d6b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00513d72: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00513d77: mov dword ptr [ebp - 0x68], 0x40400000 */ W32((u32)(r_ebp+0xffffff98u), 0x40400000u);
    /* 00513d7e: mov dword ptr [ebp - 0x64], 0x41880000 */ W32((u32)(r_ebp+0xffffff9cu), 0x41880000u);
    /* 00513d85: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x513d8au); f_0082d990();
    /* 00513d8a: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513d8d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00513d90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00513d92: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x513d97u); f_0082d8bc();
    /* 00513d97: lea edi, [ebp - 0x6c] */ r_edi = (u32)(r_ebp+0xffffff94u);
    /* 00513d9a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00513d9b: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 00513d9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00513da0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x513da5u); f_0082eab8();
    /* 00513da5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00513daa: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x513dafu); f_0082eb80();
    /* 00513daf: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513db2: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00513db5: lea edi, [edi + 0x300] */ r_edi = (u32)(r_edi+0x300u);
    /* 00513dbb: mov edx, edi */ r_edx = r_edi;
    /* 00513dbd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x513dc2u); f_0082ebac();
    /* 00513dc2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513dc4: je 0x514366 */ if (fZ) goto L_00514366;
L_00513dca:; BB(0x00513dca);
    /* 00513dca: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00513dcd: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00513dd3: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00513dd6: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 00513ddc: mov edx, edi */ r_edx = r_edi;
    /* 00513dde: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00513de1: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00513de7: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513dea: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x513defu); f_0082f9c4();
    /* 00513def: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513df2: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 00513df5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513df6: mov edi, dword ptr [ecx + 0x358] */ r_edi = R32((u32)(r_ecx+0x358u));
    /* 00513dfc: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513dff: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x513e04u); f_00771858();
    /* 00513e04: mov edi, eax */ r_edi = r_eax;
L_00513e06:; BB(0x00513e06);
    /* 00513e06: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00513e0c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513e0f: je 0x51414e */ if (fZ) goto L_0051414e;
L_00513e15:; BB(0x00513e15);
    /* 00513e15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e18: mov edx, dword ptr [edx + 0x370] */ r_edx = R32((u32)(r_edx+0x370u));
    /* 00513e1e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513e21: jne 0x513e41 */ if (!fZ) goto L_00513e41;
L_00513e23:; BB(0x00513e23);
    /* 00513e23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e26: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x513e2bu); f_005716c0();
    /* 00513e2b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e2e: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 00513e31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513e32: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513e35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e37: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x513e3cu); f_006e38e0();
    /* 00513e3c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513e3f: jmp 0x513e9c */ goto L_00513e9c;
L_00513e41:; BB(0x00513e41);
    /* 00513e41: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e44: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 00513e4a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00513e4d: mov edx, eax */ r_edx = r_eax;
    /* 00513e4f: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00513e52: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513e54: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00513e56: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513e58: jge 0x513e80 */ if ((fS==fO)) goto L_00513e80;
L_00513e5a:; BB(0x00513e5a);
    /* 00513e5a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513e5c: je 0x513e80 */ if (fZ) goto L_00513e80;
L_00513e5e:; BB(0x00513e5e);
    /* 00513e5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e61: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x513e66u); f_005716c0();
    /* 00513e66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e69: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 00513e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513e6d: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00513e73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513e74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e76: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x513e7bu); f_006e3408();
    /* 00513e7b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513e7e: jmp 0x513e9c */ goto L_00513e9c;
L_00513e80:; BB(0x00513e80);
    /* 00513e80: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e83: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x513e88u); f_005716c0();
    /* 00513e88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513e8b: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 00513e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513e8f: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e94: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x513e99u); f_006e2f20();
    /* 00513e99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513e9c:; BB(0x00513e9c);
    /* 00513e9c: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 00513ea3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00513ea8: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00513eaf: mov dword ptr [ebp - 0x70], 0x3f800000 */ W32((u32)(r_ebp+0xffffff90u), 0x3f800000u);
    /* 00513eb6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x513ebbu); f_0082d990();
    /* 00513ebb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513ebe: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00513ec1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00513ec3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x513ec8u); f_0082d8bc();
    /* 00513ec8: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00513ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ecc: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 00513ecf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00513ed1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x513ed6u); f_0082eab8();
    /* 00513ed6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00513edb: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x513ee0u); f_0082eb80();
    /* 00513ee0: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 00513ee3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00513ee5: fld dword ptr [ebp - 0x74] */ FPUSH(R_F32((u32)(r_ebp+0xffffff8cu)));
    /* 00513ee8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00513eea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00513eec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00513eed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00513ef0: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x513ef5u); f_0082dc9c();
    /* 00513ef5: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00513ef8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00513efa: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00513efc: fld dword ptr [ebp - 0x74] */ FPUSH(R_F32((u32)(r_ebp+0xffffff8cu)));
    /* 00513eff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00513f01: fmul qword ptr [0x920858] */ ST(0) = ST(0) * R_F64((u32)(0x920858u));
    /* 00513f07: fdiv qword ptr [0x920850] */ ST(0) = ST(0) / R_F64((u32)(0x920850u));
    /* 00513f0d: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00513f10: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00513f14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00513f19: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00513f1c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00513f1f: fistp dword ptr [ebp - 0x60] */ W32((u32)(r_ebp+0xffffffa0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00513f22: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00513f25: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 00513f28: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00513f2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00513f31: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00513f33: fmul qword ptr [0x920858] */ ST(0) = ST(0) * R_F64((u32)(0x920858u));
    /* 00513f39: fdiv qword ptr [0x920850] */ ST(0) = ST(0) / R_F64((u32)(0x920850u));
    /* 00513f3f: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00513f42: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00513f46: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00513f4b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00513f4e: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00513f51: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00513f54: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00513f57: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00513f5a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00513f5d: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00513f60: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00513f65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f66: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00513f68: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00513f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f6c: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x513f71u); f_0050bab4();
    /* 00513f71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f74: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513f77: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00513f7c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x513f81u); f_007879b8();
    /* 00513f81: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00513f84: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00513f86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513f8a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x513f8fu); f_00814298();
    /* 00513f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513f92:; BB(0x00513f92);
    /* 00513f92: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513f95: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00513f9b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513f9e: je 0x514123 */ if (fZ) goto L_00514123;
L_00513fa4:; BB(0x00513fa4);
    /* 00513fa4: mov ecx, eax */ r_ecx = r_eax;
    /* 00513fa6: mov eax, 2 */ r_eax = 0x2u;
    /* 00513fab: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00513fb2: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00513fb7: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00513fbe: jmp 0x514123 */ goto L_00514123;
L_00513fc3:; BB(0x00513fc3);
    /* 00513fc3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513fc6: jne 0x514014 */ if (!fZ) goto L_00514014;
L_00513fc8:; BB(0x00513fc8);
    /* 00513fc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513fcb: mov eax, dword ptr [eax + 0x38c] */ r_eax = R32((u32)(r_eax+0x38cu));
    /* 00513fd1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513fd4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513fd7: jl 0x513ff6 */ if ((fS!=fO)) goto L_00513ff6;
L_00513fd9:; BB(0x00513fd9);
    /* 00513fd9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513fdc: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00513fdf: mov dword ptr [edx + 0x38c], 0xffffffff */ W32((u32)(r_edx+0x38cu), 0xffffffffu);
    /* 00513fe9: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00513fee: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00513ff1: jmp 0x514123 */ goto L_00514123;
L_00513ff6:; BB(0x00513ff6);
    /* 00513ff6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513ff9: mov dword ptr [edx + 0x38c], eax */ W32((u32)(r_edx+0x38cu), r_eax);
    /* 00513fff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00514001: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 00514008: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 0051400f: jmp 0x514123 */ goto L_00514123;
L_00514014:; BB(0x00514014);
    /* 00514014: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514016: jne 0x514042 */ if (!fZ) goto L_00514042;
L_00514018:; BB(0x00514018);
    /* 00514018: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051401b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0051401e: mov dword ptr [ecx + 0x38c], 0xffffffff */ W32((u32)(r_ecx+0x38cu), 0xffffffffu);
    /* 00514028: mov eax, 2 */ r_eax = 0x2u;
    /* 0051402d: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00514034: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0051403a: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0051403d: jmp 0x514123 */ goto L_00514123;
L_00514042:; BB(0x00514042);
    /* 00514042: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514045: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514047: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051404d: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514053: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514059: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x51405eu); f_00771c8c();
    /* 0051405e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514060: je 0x5140ad */ if (fZ) goto L_005140ad;
L_00514062:; BB(0x00514062);
    /* 00514062: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514065: push dword ptr [ecx + 0x308] */ { u32 v = R32((u32)(r_ecx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051406b: push dword ptr [ecx + 0x304] */ { u32 v = R32((u32)(r_ecx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514071: push dword ptr [ecx + 0x300] */ { u32 v = R32((u32)(r_ecx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514077: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x51407cu); f_00771f1c();
    /* 0051407c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051407f: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 00514085: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514088: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x51408du); f_00772358();
    /* 0051408d: mov esi, eax */ r_esi = r_eax;
    /* 0051408f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514092: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514095: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00514097: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 0051409d: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005140a0: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x5140a3u); call_ind(t); }
    /* 005140a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005140a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005140a8: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5140abu); call_ind(t); }
    /* 005140ab: jmp 0x5140ef */ goto L_005140ef;
L_005140ad:; BB(0x005140ad);
    /* 005140ad: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005140b0: mov edi, dword ptr [esi + 0x300] */ r_edi = R32((u32)(r_esi+0x300u));
    /* 005140b6: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005140bc: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005140c2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005140c5: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 005140c8: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005140cb: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005140ce: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005140d4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5140d9u); f_0082f9c4();
    /* 005140d9: mov ecx, esi */ r_ecx = r_esi;
    /* 005140db: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005140de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005140df: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 005140e5: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005140e8: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5140edu); f_00771858();
    /* 005140ed: mov esi, eax */ r_esi = r_eax;
L_005140ef:; BB(0x005140ef);
    /* 005140ef: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005140f5: jge 0x514114 */ if ((fS==fO)) goto L_00514114;
L_005140f7:; BB(0x005140f7);
    /* 005140f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005140fa: mov eax, 1 */ r_eax = 0x1u;
    /* 005140ff: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00514106: mov edx, 4 */ r_edx = 0x4u;
    /* 0051410b: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00514112: jmp 0x514123 */ goto L_00514123;
L_00514114:; BB(0x00514114);
    /* 00514114: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514117: mov eax, 2 */ r_eax = 0x2u;
    /* 0051411c: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_00514123:; BB(0x00514123);
    /* 00514123: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514126: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514128: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051412a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x51412fu); f_00772b44();
    /* 0051412f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514132: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x514137u); f_007b6880();
    /* 00514137: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051413a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051413d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514140: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00514147: mov esp, ebp */ r_esp = r_ebp;
    /* 00514149: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051414a: mov esp, ebx */ r_esp = r_ebx;
    /* 0051414c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051414d: ret  */ FN_RET(0x00513c70); r_esp += 4; return;
L_0051414e:; BB(0x0051414e);
    /* 0051414e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514151: mov edx, dword ptr [edx + 0x370] */ r_edx = R32((u32)(r_edx+0x370u));
    /* 00514157: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051415a: jne 0x5141d1 */ if (!fZ) goto L_005141d1;
L_0051415c:; BB(0x0051415c);
    /* 0051415c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051415f: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 00514165: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00514168: mov edx, eax */ r_edx = r_eax;
    /* 0051416a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0051416d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051416f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00514171: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514173: jge 0x51419b */ if ((fS==fO)) goto L_0051419b;
L_00514175:; BB(0x00514175);
    /* 00514175: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514177: je 0x51419b */ if (fZ) goto L_0051419b;
L_00514179:; BB(0x00514179);
    /* 00514179: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051417c: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x514181u); f_005716c0();
    /* 00514181: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514184: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 00514187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514188: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051418e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051418f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514190: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514191: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x514196u); f_006e9e14();
    /* 00514196: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514199: jmp 0x5141b7 */ goto L_005141b7;
L_0051419b:; BB(0x0051419b);
    /* 0051419b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051419e: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x5141a3u); f_005716c0();
    /* 005141a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005141a6: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 005141a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005141aa: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005141ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005141ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005141af: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x5141b4u); f_006e9848();
    /* 005141b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005141b7:; BB(0x005141b7);
    /* 005141b7: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 005141ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005141bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005141bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005141be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005141bf: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 005141c4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5141c9u); f_00814298();
    /* 005141c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005141cc: jmp 0x513f92 */ goto L_00513f92;
L_005141d1:; BB(0x005141d1);
    /* 005141d1: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 005141d4: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 005141d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005141da: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5141dfu); f_0050b510();
    /* 005141df: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 005141e2: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 005141e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005141e8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5141edu); f_0050b510();
    /* 005141ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005141f0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005141f3: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 005141f9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005141fc: mov edx, eax */ r_edx = r_eax;
    /* 005141fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00514201: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00514203: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00514205: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514207: jge 0x5142ab */ if ((fS==fO)) goto L_005142ab;
L_0051420d:; BB(0x0051420d);
    /* 0051420d: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 00514210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514211: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x514216u); f_00782868();
    /* 00514216: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00514217: fcomp dword ptr [0x920934] */ fx_compare(ST(0), R_F32((u32)(0x920934u))); FPOP();
    /* 0051421d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051421f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00514220: jae 0x514261 */ if (!fC) goto L_00514261;
L_00514222:; BB(0x00514222);
    /* 00514222: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 00514229: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0051422e: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00514235: mov dword ptr [ebp - 0x70], 0x3f800000 */ W32((u32)(r_ebp+0xffffff90u), 0x3f800000u);
    /* 0051423c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x514241u); f_0082d990();
    /* 00514241: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514244: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00514247: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00514249: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51424eu); f_0082d8bc();
    /* 0051424e: lea edi, [ebp - 0x78] */ r_edi = (u32)(r_ebp+0xffffff88u);
    /* 00514251: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00514252: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 00514255: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00514257: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x51425cu); f_0082eab8();
    /* 0051425c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x514261u); f_0082da80();
L_00514261:; BB(0x00514261);
    /* 00514261: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514263: je 0x5142ea */ if (fZ) goto L_005142ea;
L_00514269:; BB(0x00514269);
    /* 00514269: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051426c: mov dword ptr [ebp - 0x54], 3 */ W32((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 00514273: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x514278u); f_005716c0();
    /* 00514278: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051427b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0051427e: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00514281: fmul dword ptr [0x92092c] */ ST(0) = ST(0) * R_F32((u32)(0x92092cu));
    /* 00514287: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00514289: fadd dword ptr [0x920930] */ ST(0) = ST(0) + R_F32((u32)(0x920930u));
    /* 0051428f: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00514292: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00514297: mov ecx, esi */ r_ecx = r_esi;
    /* 00514299: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051429a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051429b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051429d: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005142a0: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005142a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005142a4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5142a7u); call_ind(t); }
    /* 005142a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005142a9: jmp 0x5142ea */ goto L_005142ea;
L_005142ab:; BB(0x005142ab);
    /* 005142ab: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005142b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005142b7: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005142be: mov dword ptr [ebp - 0x70], 0x3f800000 */ W32((u32)(r_ebp+0xffffff90u), 0x3f800000u);
    /* 005142c5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5142cau); f_0082d990();
    /* 005142ca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005142cd: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005142d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005142d2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5142d7u); f_0082d8bc();
    /* 005142d7: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005142da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005142db: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 005142de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005142e0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5142e5u); f_0082eab8();
    /* 005142e5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5142eau); f_0082da80();
L_005142ea:; BB(0x005142ea);
    /* 005142ea: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005142f1: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005142f6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5142fbu); f_005caba4();
    /* 005142fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005142fc: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005142ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514301: je 0x514345 */ if (fZ) goto L_00514345;
L_00514303:; BB(0x00514303);
    /* 00514303: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0051430a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00514311: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514314: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00514317: lea edi, [ebp - 0x78] */ r_edi = (u32)(r_ebp+0xffffff88u);
    /* 0051431a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051431c: mov esi, dword ptr [edx + 0x31c] */ r_esi = R32((u32)(r_edx+0x31cu));
    /* 00514322: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514327: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0051432c: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051432f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00514330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514331: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514337: mov ecx, eax */ r_ecx = r_eax;
    /* 00514339: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x51433eu); f_006f3ba4();
    /* 0051433e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00514345:; BB(0x00514345);
    /* 00514345: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051434c: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 0051434f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00514351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514354: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00514359: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51435eu); f_00814298();
    /* 0051435e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514361: jmp 0x513f92 */ goto L_00513f92;
L_00514366:; BB(0x00514366);
    /* 00514366: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00514369: mov edi, dword ptr [edx + 0x31c] */ r_edi = R32((u32)(r_edx+0x31cu));
    /* 0051436f: mov edi, dword ptr [edi + 0xc] */ r_edi = R32((u32)(r_edi+0xcu));
    /* 00514372: jmp 0x513e06 */ goto L_00513e06;
}

