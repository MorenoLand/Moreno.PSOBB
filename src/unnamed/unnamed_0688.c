#include "protos.h"

void f_006880cc(void) /* sub_6880CC */
{
    FN_ENTER(0x006880cc);
    /* 006880cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006880cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006880cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006880d1: push 0x8eb298 */ { u32 v = 0x8eb298u; r_esp -= 4; W32(r_esp, v); }
    /* 006880d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006880dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006880dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006880e4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006880e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006880ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006880ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006880f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006880f3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006880f6: call 0x7ba40c */ r_esp -= 4; W32(r_esp, 0x6880fbu); f_007ba40c();
    /* 006880fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006880fe: call 0x7b4c1c */ r_esp -= 4; W32(r_esp, 0x688103u); f_007b4c1c();
    /* 00688103: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688106: call 0x7a9fc4 */ r_esp -= 4; W32(r_esp, 0x68810bu); f_007a9fc4();
    /* 0068810b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068810e: call 0x770a68 */ r_esp -= 4; W32(r_esp, 0x688113u); f_00770a68();
    /* 00688113: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688116: call 0x68839c */ r_esp -= 4; W32(r_esp, 0x68811bu); f_0068839c();
    /* 0068811b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068811e: call 0x6884ac */ r_esp -= 4; W32(r_esp, 0x688123u); f_006884ac();
    /* 00688123: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688126: call 0x687684 */ r_esp -= 4; W32(r_esp, 0x68812bu); f_00687684();
    /* 0068812b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068812e: call 0x688b44 */ r_esp -= 4; W32(r_esp, 0x688133u); f_00688b44();
    /* 00688133: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688136: call 0x688bd4 */ r_esp -= 4; W32(r_esp, 0x68813bu); f_00688bd4();
    /* 0068813b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068813e: call 0x688c08 */ r_esp -= 4; W32(r_esp, 0x688143u); f_00688c08();
    /* 00688143: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688146: call 0x688cc4 */ r_esp -= 4; W32(r_esp, 0x68814bu); f_00688cc4();
    /* 0068814b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068814e: call 0x688d18 */ r_esp -= 4; W32(r_esp, 0x688153u); f_00688d18();
    /* 00688153: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688156: call 0x688d28 */ r_esp -= 4; W32(r_esp, 0x68815bu); f_00688d28();
    /* 0068815b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068815e: call 0x688d60 */ r_esp -= 4; W32(r_esp, 0x688163u); f_00688d60();
    /* 00688163: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688166: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0068816d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688170: jne 0x688245 */ if (!fZ) goto L_00688245;
L_00688176:; BB(0x00688176);
    /* 00688176: call 0x688b34 */ r_esp -= 4; W32(r_esp, 0x68817bu); f_00688b34();
    /* 0068817b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068817d: jne 0x68818e */ if (!fZ) goto L_0068818e;
L_0068817f:; BB(0x0068817f);
    /* 0068817f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688182: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00688189: jmp 0x688245 */ goto L_00688245;
L_0068818e:; BB(0x0068818e);
    /* 0068818e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688191: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00688197: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068819d: je 0x6881ab */ if (fZ) goto L_006881ab;
L_0068819f:; BB(0x0068819f);
    /* 0068819f: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006881a6: jmp 0x688245 */ goto L_00688245;
L_006881ab:; BB(0x006881ab);
    /* 006881ab: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006881ae: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006881b4: je 0x68822f */ if (fZ) goto L_0068822f;
L_006881b6:; BB(0x006881b6);
    /* 006881b6: and edx, 0xfffff7ff */ {  u32 a = r_edx; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006881bc: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006881bf: mov edx, dword ptr [0xa95624] */ r_edx = R32((u32)(0xa95624u));
    /* 006881c5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006881c8: jne 0x6881dd */ if (!fZ) goto L_006881dd;
L_006881ca:; BB(0x006881ca);
    /* 006881ca: mov ecx, eax */ r_ecx = r_eax;
    /* 006881cc: call 0x688f70 */ r_esp -= 4; W32(r_esp, 0x6881d1u); f_00688f70();
    /* 006881d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006881d4: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006881db: jmp 0x688245 */ goto L_00688245;
L_006881dd:; BB(0x006881dd);
    /* 006881dd: mov edx, eax */ r_edx = r_eax;
    /* 006881df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006881e0: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006881e4: call 0x6ac7a4 */ r_esp -= 4; W32(r_esp, 0x6881e9u); f_006ac7a4();
    /* 006881e9: mov ebx, eax */ r_ebx = r_eax;
    /* 006881eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006881ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006881ef: call 0x6ac7c4 */ r_esp -= 4; W32(r_esp, 0x6881f4u); f_006ac7c4();
    /* 006881f4: mov ecx, eax */ r_ecx = r_eax;
    /* 006881f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006881f9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006881fc: mov eax, esi */ r_eax = r_esi;
    /* 006881fe: mov edx, ebx */ r_edx = r_ebx;
    /* 00688200: call 0x688ef1 */ r_esp -= 4; W32(r_esp, 0x688205u); f_00688ef1();
    /* 00688205: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688208: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068820b: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00688211: mov dword ptr [edx + 0x3c0], 0 */ W32((u32)(r_edx+0x3c0u), 0x0u);
    /* 0068821b: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00688220: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 00688226: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 0068822d: jmp 0x688245 */ goto L_00688245;
L_0068822f:; BB(0x0068822f);
    /* 0068822f: movsx ecx, word ptr [eax + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 00688236: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00688238: jle 0x6881b6 */ if ((fZ||fS!=fO)) goto L_006881b6;
L_0068823e:; BB(0x0068823e);
    /* 0068823e: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
L_00688245:; BB(0x00688245);
    /* 00688245: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688248: jne 0x688378 */ if (!fZ) goto L_00688378;
L_0068824e:; BB(0x0068824e);
    /* 0068824e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688251: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 00688257: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068825c: je 0x688378 */ if (fZ) goto L_00688378;
L_00688262:; BB(0x00688262);
    /* 00688262: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688265: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068826a: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 00688270: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00688274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688275: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x68827au); f_00718108();
    /* 0068827a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068827b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068827e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688280: je 0x68828e */ if (fZ) goto L_0068828e;
L_00688282:; BB(0x00688282);
    /* 00688282: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00688289: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068828c: je 0x6882d8 */ if (fZ) goto L_006882d8;
L_0068828e:; BB(0x0068828e);
    /* 0068828e: mov edi, eax */ r_edi = r_eax;
    /* 00688290: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00688294: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0068829b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068829d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006882a4: mov word ptr [ebp - 0x3a], ax */ W16((u32)(r_ebp+0xffffffc6u), (u16)r_eax);
    /* 006882a8: mov ebx, 0xf */ r_ebx = 0xfu;
    /* 006882ad: mov byte ptr [ebp - 0x3c], 0x2c */ W8((u32)(r_ebp+0xffffffc4u), 0x2cu);
    /* 006882b1: mov word ptr [ebp - 0x36], dx */ W16((u32)(r_ebp+0xffffffcau), (u16)r_edx);
    /* 006882b5: mov word ptr [ebp - 0x38], bx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_ebx);
    /* 006882b9: mov byte ptr [ebp - 0x3b], 5 */ W8((u32)(r_ebp+0xffffffc5u), 0x5u);
    /* 006882bd: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 006882c0: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 006882c3: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006882c6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006882c9: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 006882cc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006882d3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6882d8u); f_008003e0();
L_006882d8:; BB(0x006882d8);
    /* 006882d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006882db: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x6882e0u); f_0069d554();
    /* 006882e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006882e3: call 0x688f70 */ r_esp -= 4; W32(r_esp, 0x6882e8u); f_00688f70();
    /* 006882e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006882eb: call 0x688fa0 */ r_esp -= 4; W32(r_esp, 0x6882f0u); f_00688fa0();
    /* 006882f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006882f3: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x6882f8u); f_00695388();
    /* 006882f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006882fa: jne 0x68838f */ if (!fZ) goto L_0068838f;
L_00688300:; BB(0x00688300);
    /* 00688300: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688303: mov eax, dword ptr [eax + 0x3c0] */ r_eax = R32((u32)(r_eax+0x3c0u));
    /* 00688309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068830b: je 0x68831c */ if (fZ) goto L_0068831c;
L_0068830d:; BB(0x0068830d);
    /* 0068830d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688310: jne 0x68836b */ if (!fZ) goto L_0068836b;
L_00688312:; BB(0x00688312);
    /* 00688312: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688314: call 0x6427e8 */ r_esp -= 4; W32(r_esp, 0x688319u); f_006427e8();
    /* 00688319: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068831a: jmp 0x68836b */ goto L_0068836b;
L_0068831c:; BB(0x0068831c);
    /* 0068831c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068831e: call 0x6427e8 */ r_esp -= 4; W32(r_esp, 0x688323u); f_006427e8();
    /* 00688323: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688324: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688327: call 0x688fd0 */ r_esp -= 4; W32(r_esp, 0x68832cu); f_00688fd0();
    /* 0068832c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00688333: push 0x434 */ { u32 v = 0x434u; r_esp -= 4; W32(r_esp, v); }
    /* 00688338: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68833du); f_005caba4();
    /* 0068833d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068833e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00688341: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688343: je 0x68836b */ if (fZ) goto L_0068836b;
L_00688345:; BB(0x00688345);
    /* 00688345: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0068834c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00688353: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688357: mov ecx, eax */ r_ecx = r_eax;
    /* 00688359: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068835f: call 0x6cecb4 */ r_esp -= 4; W32(r_esp, 0x688364u); f_006cecb4();
    /* 00688364: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0068836b:; BB(0x0068836b);
    /* 0068836b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068836e: mov dword ptr [eax + 0x3c0], 0 */ W32((u32)(r_eax+0x3c0u), 0x0u);
L_00688378:; BB(0x00688378);
    /* 00688378: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068837b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068837e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688381: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00688384: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068838b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068838d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068838e: ret  */ FN_RET(0x006880cc); r_esp += 4; return;
L_0068838f:; BB(0x0068838f);
    /* 0068838f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688392: call 0x695420 */ r_esp -= 4; W32(r_esp, 0x688397u); f_00695420();
    /* 00688397: jmp 0x688300 */ goto L_00688300;
}

void f_0068839c(void) /* sub_68839C */
{
    FN_ENTER(0x0068839c);
    /* 0068839c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068839d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068839f: mov eax, dword ptr [ebp + 0x92c] */ r_eax = R32((u32)(r_ebp+0x92cu));
    /* 006883a5: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006883a8: mov dword ptr [ebp + 0x92c], eax */ W32((u32)(r_ebp+0x92cu), r_eax);
    /* 006883ae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006883b0: mov dword ptr [ebp + 0x718], edx */ W32((u32)(r_ebp+0x718u), r_edx);
    /* 006883b6: mov dword ptr [ebp + 0x714], edx */ W32((u32)(r_ebp+0x714u), r_edx);
    /* 006883bc: mov dword ptr [ebp + 0x720], edx */ W32((u32)(r_ebp+0x720u), r_edx);
    /* 006883c2: lea ecx, [ebp + 0x8a4] */ r_ecx = (u32)(r_ebp+0x8a4u);
    /* 006883c8: call 0x6a2ebc */ r_esp -= 4; W32(r_esp, 0x6883cdu); f_006a2ebc();
    /* 006883cd: mov dword ptr [ebp + 0x810], 0 */ W32((u32)(r_ebp+0x810u), 0x0u);
    /* 006883d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006883d9: mov word ptr [ebp + 0x808], ax */ W16((u32)(r_ebp+0x808u), (u16)r_eax);
    /* 006883e0: mov word ptr [ebp + 0x80a], ax */ W16((u32)(r_ebp+0x80au), (u16)r_eax);
    /* 006883e7: mov dword ptr [ebp + 0x818], 0 */ W32((u32)(r_ebp+0x818u), 0x0u);
    /* 006883f1: lea ecx, [ebp + 0x6e0] */ r_ecx = (u32)(r_ebp+0x6e0u);
    /* 006883f7: mov dword ptr [ebp + 0x814], 0 */ W32((u32)(r_ebp+0x814u), 0x0u);
    /* 00688401: call 0x6982ec */ r_esp -= 4; W32(r_esp, 0x688406u); f_006982ec();
    /* 00688406: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0068840c: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
    /* 00688416: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00688418: mov dword ptr [ebp + 0x620], edx */ W32((u32)(r_ebp+0x620u), r_edx);
    /* 0068841e: mov dword ptr [ebp + 0x408], 0 */ W32((u32)(r_ebp+0x408u), 0x0u);
    /* 00688428: mov dword ptr [ebp + 0x350], edx */ W32((u32)(r_ebp+0x350u), r_edx);
    /* 0068842e: mov byte ptr [ebp + 0x354], dl */ W8((u32)(r_ebp+0x354u), (u8)r_edx);
    /* 00688434: mov byte ptr [ebp + 0x355], dl */ W8((u32)(r_ebp+0x355u), (u8)r_edx);
    /* 0068843a: mov dword ptr [ebp + 0x404], 0 */ W32((u32)(r_ebp+0x404u), 0x0u);
    /* 00688444: mov word ptr [ebp + 0x356], dx */ W16((u32)(r_ebp+0x356u), (u16)r_edx);
    /* 0068844b: mov dword ptr [ebp + 0x3e0], edx */ W32((u32)(r_ebp+0x3e0u), r_edx);
    /* 00688451: and eax, 0xfffffd7c */ {  u32 a = r_eax; u32 b = 0xfffffd7cu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688456: mov dword ptr [ebp + 0x314], 0 */ W32((u32)(r_ebp+0x314u), 0x0u);
    /* 00688460: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 00688466: mov dword ptr [ebp + 0x400], edx */ W32((u32)(r_ebp+0x400u), r_edx);
    /* 0068846c: mov dword ptr [ebp + 0x3fc], edx */ W32((u32)(r_ebp+0x3fcu), r_edx);
    /* 00688472: mov dword ptr [ebp + 0x310], 0 */ W32((u32)(r_ebp+0x310u), 0x0u);
    /* 0068847c: mov dword ptr [ebp + 0x3f8], edx */ W32((u32)(r_ebp+0x3f8u), r_edx);
    /* 00688482: mov dword ptr [ebp + 0x30c], 0 */ W32((u32)(r_ebp+0x30cu), 0x0u);
    /* 0068848c: mov dword ptr [ebp + 0x6d4], 0 */ W32((u32)(r_ebp+0x6d4u), 0x0u);
    /* 00688496: mov dword ptr [ebp + 0x6d8], 0 */ W32((u32)(r_ebp+0x6d8u), 0x0u);
    /* 006884a0: mov dword ptr [ebp + 0x6dc], 0 */ W32((u32)(r_ebp+0x6dcu), 0x0u);
    /* 006884aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006884ab: ret  */ FN_RET(0x0068839c); r_esp += 4; return;
}

void f_006884ac(void) /* sub_6884AC */
{
    FN_ENTER(0x006884ac);
    /* 006884ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006884ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006884af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006884b1: push 0x8eb2c0 */ { u32 v = 0x8eb2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006884b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006884bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006884bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006884c4: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006884c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006884ca: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006884cd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006884d0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006884d3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006884d6: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006884db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006884dd: jl 0x6884f1 */ if ((fS!=fO)) goto L_006884f1;
L_006884df:; BB(0x006884df);
    /* 006884df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006884e2: jg 0x6884f1 */ if ((!fZ&&fS==fO)) goto L_006884f1;
L_006884e4:; BB(0x006884e4);
    /* 006884e4: mov eax, ecx */ r_eax = r_ecx;
    /* 006884e6: lea edx, [eax + 0x784] */ r_edx = (u32)(r_eax+0x784u);
    /* 006884ec: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006884ef: jmp 0x688513 */ goto L_00688513;
L_006884f1:; BB(0x006884f1);
    /* 006884f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006884f3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006884f6: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 006884f9: mov dword ptr [ebx + 0x788], eax */ W32((u32)(r_ebx+0x788u), r_eax);
    /* 006884ff: mov dword ptr [ebx + 0x78c], edx */ W32((u32)(r_ebx+0x78cu), r_edx);
    /* 00688505: lea ecx, [ebx + 0x784] */ r_ecx = (u32)(r_ebx+0x784u);
    /* 0068850b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0068850e: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x688513u); f_00697f48();
L_00688513:; BB(0x00688513);
    /* 00688513: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688516: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688519: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0068851c: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0068851f: mov dword ptr [ebx + 0x788], eax */ W32((u32)(r_ebx+0x788u), r_eax);
    /* 00688525: mov dword ptr [ebx + 0x78c], edx */ W32((u32)(r_ebx+0x78cu), r_edx);
    /* 0068852b: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x688530u); f_00697f48();
    /* 00688530: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x688535u); f_007a61a4();
    /* 00688535: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688538: je 0x68889e */ if (fZ) goto L_0068889e;
L_0068853e:; BB(0x0068853e);
    /* 0068853e: mov eax, ebx */ r_eax = r_ebx;
    /* 00688540: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
L_00688547:; BB(0x00688547);
    /* 00688547: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068854a: jne 0x68855c */ if (!fZ) goto L_0068855c;
L_0068854c:; BB(0x0068854c);
    /* 0068854c: mov eax, ebx */ r_eax = r_ebx;
    /* 0068854e: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00688551: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00688554: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00688557: jmp 0x688669 */ goto L_00688669;
L_0068855c:; BB(0x0068855c);
    /* 0068855c: mov eax, ebx */ r_eax = r_ebx;
    /* 0068855e: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00688562: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 00688565: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688566: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688567: call 0x6e9630 */ r_esp -= 4; W32(r_esp, 0x68856cu); f_006e9630();
    /* 0068856c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068856e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688571: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688573: je 0x68872f */ if (fZ) goto L_0068872f;
L_00688579:; BB(0x00688579);
    /* 00688579: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0068857b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068857d: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00688580: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00688583: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00688586: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00688589: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0068858f: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00688592: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00688595: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 00688598: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068859a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0068859c: jl 0x6885a7 */ if ((fS!=fO)) goto L_006885a7;
L_0068859e:; BB(0x0068859e);
    /* 0068859e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006885a1: jle 0x688669 */ if ((fZ||fS!=fO)) goto L_00688669;
L_006885a7:; BB(0x006885a7);
    /* 006885a7: mov edx, ebx */ r_edx = r_ebx;
    /* 006885a9: mov dword ptr [edx + 0x800], eax */ W32((u32)(r_edx+0x800u), r_eax);
    /* 006885af: mov dword ptr [edx + 0x804], ecx */ W32((u32)(r_edx+0x804u), r_ecx);
    /* 006885b5: mov dword ptr [edx + 0x7f8], eax */ W32((u32)(r_edx+0x7f8u), r_eax);
    /* 006885bb: mov dword ptr [edx + 0x7fc], ecx */ W32((u32)(r_edx+0x7fcu), r_ecx);
    /* 006885c1: mov dword ptr [edx + 0x7f0], eax */ W32((u32)(r_edx+0x7f0u), r_eax);
    /* 006885c7: mov dword ptr [edx + 0x7f4], ecx */ W32((u32)(r_edx+0x7f4u), r_ecx);
    /* 006885cd: mov dword ptr [edx + 0x7e8], eax */ W32((u32)(r_edx+0x7e8u), r_eax);
    /* 006885d3: mov dword ptr [edx + 0x7ec], ecx */ W32((u32)(r_edx+0x7ecu), r_ecx);
    /* 006885d9: mov dword ptr [edx + 0x7e0], eax */ W32((u32)(r_edx+0x7e0u), r_eax);
    /* 006885df: mov dword ptr [edx + 0x7e4], ecx */ W32((u32)(r_edx+0x7e4u), r_ecx);
    /* 006885e5: mov dword ptr [edx + 0x7d8], eax */ W32((u32)(r_edx+0x7d8u), r_eax);
    /* 006885eb: mov dword ptr [edx + 0x7dc], ecx */ W32((u32)(r_edx+0x7dcu), r_ecx);
    /* 006885f1: mov dword ptr [edx + 0x7d0], eax */ W32((u32)(r_edx+0x7d0u), r_eax);
    /* 006885f7: mov dword ptr [edx + 0x7d4], ecx */ W32((u32)(r_edx+0x7d4u), r_ecx);
    /* 006885fd: mov dword ptr [edx + 0x7c8], eax */ W32((u32)(r_edx+0x7c8u), r_eax);
    /* 00688603: mov dword ptr [edx + 0x7cc], ecx */ W32((u32)(r_edx+0x7ccu), r_ecx);
    /* 00688609: mov dword ptr [edx + 0x7c0], eax */ W32((u32)(r_edx+0x7c0u), r_eax);
    /* 0068860f: mov dword ptr [edx + 0x7c4], ecx */ W32((u32)(r_edx+0x7c4u), r_ecx);
    /* 00688615: mov dword ptr [edx + 0x7b8], eax */ W32((u32)(r_edx+0x7b8u), r_eax);
    /* 0068861b: mov dword ptr [edx + 0x7bc], ecx */ W32((u32)(r_edx+0x7bcu), r_ecx);
    /* 00688621: mov dword ptr [edx + 0x7b0], eax */ W32((u32)(r_edx+0x7b0u), r_eax);
    /* 00688627: mov dword ptr [edx + 0x7b4], ecx */ W32((u32)(r_edx+0x7b4u), r_ecx);
    /* 0068862d: mov dword ptr [edx + 0x7a8], eax */ W32((u32)(r_edx+0x7a8u), r_eax);
    /* 00688633: mov dword ptr [edx + 0x7ac], ecx */ W32((u32)(r_edx+0x7acu), r_ecx);
    /* 00688639: mov dword ptr [edx + 0x7a0], eax */ W32((u32)(r_edx+0x7a0u), r_eax);
    /* 0068863f: mov dword ptr [edx + 0x7a4], ecx */ W32((u32)(r_edx+0x7a4u), r_ecx);
    /* 00688645: mov dword ptr [edx + 0x798], eax */ W32((u32)(r_edx+0x798u), r_eax);
    /* 0068864b: mov dword ptr [edx + 0x79c], ecx */ W32((u32)(r_edx+0x79cu), r_ecx);
    /* 00688651: mov dword ptr [edx + 0x790], eax */ W32((u32)(r_edx+0x790u), r_eax);
    /* 00688657: mov dword ptr [edx + 0x794], ecx */ W32((u32)(r_edx+0x794u), r_ecx);
    /* 0068865d: mov dword ptr [edx + 0x788], eax */ W32((u32)(r_edx+0x788u), r_eax);
    /* 00688663: mov dword ptr [edx + 0x78c], ecx */ W32((u32)(r_edx+0x78cu), r_ecx);
L_00688669:; BB(0x00688669);
    /* 00688669: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068866c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0068866e: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 00688671: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00688673: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 00688676: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 00688679: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x68867eu); f_0077a1f4();
    /* 0068867e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688682: lea ecx, [eax + 0x920] */ r_ecx = (u32)(r_eax+0x920u);
    /* 00688688: call 0x6981d0 */ r_esp -= 4; W32(r_esp, 0x68868du); f_006981d0();
    /* 0068868d: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00688692: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00688694: jl 0x6886b8 */ if ((fS!=fO)) goto L_006886b8;
L_00688696:; BB(0x00688696);
    /* 00688696: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00688699: jg 0x6886b8 */ if ((!fZ&&fS==fO)) goto L_006886b8;
L_0068869b:; BB(0x0068869b);
    /* 0068869b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068869e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006886a1: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006886a4: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 006886a7: mov dword ptr [ebx + 0x788], eax */ W32((u32)(r_ebx+0x788u), r_eax);
    /* 006886ad: mov dword ptr [ebx + 0x78c], edx */ W32((u32)(r_ebx+0x78cu), r_edx);
    /* 006886b3: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x6886b8u); f_00697f48();
L_006886b8:; BB(0x006886b8);
    /* 006886b8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6886bdu); f_006dc358();
    /* 006886bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006886c0: jne 0x6886d2 */ if (!fZ) goto L_006886d2;
L_006886c2:; BB(0x006886c2);
    /* 006886c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006886c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006886c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006886c8: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x6886cdu); f_004d2fb4();
    /* 006886cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006886d0: jmp 0x688718 */ goto L_00688718;
L_006886d2:; BB(0x006886d2);
    /* 006886d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006886d5: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x6886dau); f_007ba9d8();
    /* 006886da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006886dc: je 0x688718 */ if (fZ) goto L_00688718;
L_006886de:; BB(0x006886de);
    /* 006886de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006886e1: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006886e8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006886eb: jne 0x6886fd */ if (!fZ) goto L_006886fd;
L_006886ed:; BB(0x006886ed);
    /* 006886ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006886f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006886f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006886f3: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x6886f8u); f_004d2fb4();
    /* 006886f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006886fb: jmp 0x688718 */ goto L_00688718;
L_006886fd:; BB(0x006886fd);
    /* 006886fd: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00688702: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00688703: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x688708u); f_0068d5ac();
    /* 00688708: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068870b: je 0x6886ed */ if (fZ) goto L_006886ed;
L_0068870d:; BB(0x0068870d);
    /* 0068870d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068870f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688710: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x688715u); f_004d2fb4();
    /* 00688715: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00688718:; BB(0x00688718);
    /* 00688718: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068871b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068871e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00688721: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00688724: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068872b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068872d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068872e: ret  */ FN_RET(0x006884ac); r_esp += 4; return;
L_0068872f:; BB(0x0068872f);
    /* 0068872f: mov edx, ebx */ r_edx = r_ebx;
    /* 00688731: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00688735: movsx ecx, word ptr [edx + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 0068873c: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0068873f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688742: je 0x688754 */ if (fZ) goto L_00688754;
L_00688744:; BB(0x00688744);
    /* 00688744: mov edx, dword ptr [eax*4 + 0xa94140] */ r_edx = R32((u32)(r_eax*4+0xa94140u));
    /* 0068874b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068874e: je 0x68884c */ if (fZ) goto L_0068884c;
L_00688754:; BB(0x00688754);
    /* 00688754: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00688757: mov ecx, dword ptr [eax + 0x3d4] */ r_ecx = R32((u32)(r_eax+0x3d4u));
    /* 0068875d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688760: je 0x68881c */ if (fZ) goto L_0068881c;
L_00688766:; BB(0x00688766);
    /* 00688766: mov dword ptr [eax + 0x3d4], 0xffffffff */ W32((u32)(r_eax+0x3d4u), 0xffffffffu);
L_00688770:; BB(0x00688770);
    /* 00688770: mov eax, dword ptr [0xaca348] */ r_eax = R32((u32)(0xaca348u));
    /* 00688775: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00688778: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068877a: je 0x6887b6 */ if (fZ) goto L_006887b6;
L_0068877c:; BB(0x0068877c);
    /* 0068877c: mov esi, dword ptr [0x9c8840] */ r_esi = R32((u32)(0x9c8840u));
L_00688782:; BB(0x00688782);
    /* 00688782: cmp esi, dword ptr [edx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688785: jne 0x6887af */ if (!fZ) goto L_006887af;
L_00688787:; BB(0x00688787);
    /* 00688787: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 0068878a: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0068878d: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00688791: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00688796: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00688799: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0068879c: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068879f: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 006887a2: cmp ebx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006887a5: jne 0x6887af */ if (!fZ) goto L_006887af;
L_006887a7:; BB(0x006887a7);
    /* 006887a7: cmp ecx, dword ptr [edx + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006887ad: je 0x6887b8 */ if (fZ) goto L_006887b8;
L_006887af:; BB(0x006887af);
    /* 006887af: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006887b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006887b4: jne 0x688782 */ if (!fZ) goto L_00688782;
L_006887b6:; BB(0x006887b6);
    /* 006887b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006887b8:; BB(0x006887b8);
    /* 006887b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006887ba: je 0x6887e7 */ if (fZ) goto L_006887e7;
L_006887bc:; BB(0x006887bc);
    /* 006887bc: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006887bf: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 006887c2: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006887c5: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006887c8: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 006887cb: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006887ce: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 006887d1: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 006887d4: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 006887d7: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 006887da: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 006887dd: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 006887e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006887e2: jmp 0x688669 */ goto L_00688669;
L_006887e7:; BB(0x006887e7);
    /* 006887e7: fld dword ptr [0x93c7ac] */ FPUSH(R_F32((u32)(0x93c7acu)));
    /* 006887ed: fld dword ptr [0x93c7ac] */ FPUSH(R_F32((u32)(0x93c7acu)));
    /* 006887f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006887f6: fld dword ptr [0x93c7ac] */ FPUSH(R_F32((u32)(0x93c7acu)));
    /* 006887fc: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00688803: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0068880a: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00688811: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00688813: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00688815: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00688817: jmp 0x688669 */ goto L_00688669;
L_0068881c:; BB(0x0068881c);
    /* 0068881c: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00688821: call 0x815648 */ r_esp -= 4; W32(r_esp, 0x688826u); f_00815648();
    /* 00688826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00688828: jne 0x688834 */ if (!fZ) goto L_00688834;
L_0068882a:; BB(0x0068882a);
    /* 0068882a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0068882f: jmp 0x688770 */ goto L_00688770;
L_00688834:; BB(0x00688834);
    /* 00688834: jle 0x688842 */ if ((fZ||fS!=fO)) goto L_00688842;
L_00688836:; BB(0x00688836);
    /* 00688836: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00688839: jg 0x688842 */ if ((!fZ&&fS==fO)) goto L_00688842;
L_0068883b:; BB(0x0068883b);
    /* 0068883b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068883d: jmp 0x688770 */ goto L_00688770;
L_00688842:; BB(0x00688842);
    /* 00688842: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00688847: jmp 0x688770 */ goto L_00688770;
L_0068884c:; BB(0x0068884c);
    /* 0068884c: mov edx, dword ptr [eax*4 + 0xa94144] */ r_edx = R32((u32)(r_eax*4+0xa94144u));
    /* 00688853: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00688856: mov dword ptr [eax*4 + 0xa94140], 0 */ W32((u32)(r_eax*4+0xa94140u), 0x0u);
    /* 00688861: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 00688864: fld dword ptr [eax*4 + 0xa94148] */ FPUSH(R_F32((u32)(r_eax*4+0xa94148u)));
    /* 0068886b: mov ecx, dword ptr [eax*4 + 0xa94148] */ r_ecx = R32((u32)(r_eax*4+0xa94148u));
    /* 00688872: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 00688875: fld dword ptr [eax*4 + 0xa9414c] */ FPUSH(R_F32((u32)(r_eax*4+0xa9414cu)));
    /* 0068887c: mov ebx, dword ptr [eax*4 + 0xa9414c] */ r_ebx = R32((u32)(r_eax*4+0xa9414cu));
    /* 00688883: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 00688886: fld dword ptr [eax*4 + 0xa94150] */ FPUSH(R_F32((u32)(r_eax*4+0xa94150u)));
    /* 0068888d: mov eax, dword ptr [eax*4 + 0xa94150] */ r_eax = R32((u32)(r_eax*4+0xa94150u));
    /* 00688894: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00688897: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00688899: jmp 0x688669 */ goto L_00688669;
L_0068889e:; BB(0x0068889e);
    /* 0068889e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6888a3u); f_006dc358();
    /* 006888a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006888a6: jne 0x6888b6 */ if (!fZ) goto L_006888b6;
L_006888a8:; BB(0x006888a8);
    /* 006888a8: mov eax, ebx */ r_eax = r_ebx;
    /* 006888aa: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006888b1: jmp 0x688547 */ goto L_00688547;
L_006888b6:; BB(0x006888b6);
    /* 006888b6: mov eax, ebx */ r_eax = r_ebx;
    /* 006888b8: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006888bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006888c2: jne 0x688547 */ if (!fZ) goto L_00688547;
L_006888c8:; BB(0x006888c8);
    /* 006888c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006888ca: call 0x688a10 */ r_esp -= 4; W32(r_esp, 0x6888cfu); f_00688a10();
    /* 006888cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006888d1: je 0x6888e1 */ if (fZ) goto L_006888e1;
L_006888d3:; BB(0x006888d3);
    /* 006888d3: mov eax, ebx */ r_eax = r_ebx;
    /* 006888d5: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006888dc: jmp 0x688547 */ goto L_00688547;
L_006888e1:; BB(0x006888e1);
    /* 006888e1: mov eax, ebx */ r_eax = r_ebx;
    /* 006888e3: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006888e9: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006888ef: je 0x6888fd */ if (fZ) goto L_006888fd;
L_006888f1:; BB(0x006888f1);
    /* 006888f1: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006888f8: jmp 0x688547 */ goto L_00688547;
L_006888fd:; BB(0x006888fd);
    /* 006888fd: call 0x688b34 */ r_esp -= 4; W32(r_esp, 0x688902u); f_00688b34();
    /* 00688902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688904: je 0x6889ff */ if (fZ) goto L_006889ff;
L_0068890a:; BB(0x0068890a);
    /* 0068890a: mov edx, ebx */ r_edx = r_ebx;
    /* 0068890c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068890d: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00688913: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00688918: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 0068891e: call 0x6ac820 */ r_esp -= 4; W32(r_esp, 0x688923u); f_006ac820();
    /* 00688923: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688924: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00688926: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00688929: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068892c: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0068892f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00688932: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00688935: call 0x6ac838 */ r_esp -= 4; W32(r_esp, 0x68893au); f_006ac838();
    /* 0068893a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068893d: mov edx, ebx */ r_edx = r_ebx;
    /* 0068893f: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00688942: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688944: je 0x688954 */ if (fZ) goto L_00688954;
L_00688946:; BB(0x00688946);
    /* 00688946: mov eax, edx */ r_eax = r_edx;
    /* 00688948: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0068894f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688952: je 0x68899e */ if (fZ) goto L_0068899e;
L_00688954:; BB(0x00688954);
    /* 00688954: mov edi, ebx */ r_edi = r_ebx;
    /* 00688956: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0068895a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00688961: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00688963: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0068896a: mov word ptr [ebp - 0x56], ax */ W16((u32)(r_ebp+0xffffffaau), (u16)r_eax);
    /* 0068896e: mov ebx, 0x1e */ r_ebx = 0x1eu;
    /* 00688973: mov byte ptr [ebp - 0x58], 0x2c */ W8((u32)(r_ebp+0xffffffa8u), 0x2cu);
    /* 00688977: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0068897b: mov word ptr [ebp - 0x54], bx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_ebx);
    /* 0068897f: mov byte ptr [ebp - 0x57], 5 */ W8((u32)(r_ebp+0xffffffa9u), 0x5u);
    /* 00688983: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 00688986: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 00688989: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0068898c: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0068898f: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00688992: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00688999: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68899eu); f_008003e0();
L_0068899e:; BB(0x0068899e);
    /* 0068899e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006889a0: call 0x6427e8 */ r_esp -= 4; W32(r_esp, 0x6889a5u); f_006427e8();
    /* 006889a5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006889ac: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006889ae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6889b3u); f_005caba4();
    /* 006889b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006889b6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006889b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006889bb: je 0x6889e7 */ if (fZ) goto L_006889e7;
L_006889bd:; BB(0x006889bd);
    /* 006889bd: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006889c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006889cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006889ce: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006889d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006889d3: mov ecx, eax */ r_ecx = r_eax;
    /* 006889d5: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006889db: call 0x698588 */ r_esp -= 4; W32(r_esp, 0x6889e0u); f_00698588();
    /* 006889e0: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006889e7:; BB(0x006889e7);
    /* 006889e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006889ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006889f1: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 006889f4: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 006889f7: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 006889fa: jmp 0x688669 */ goto L_00688669;
L_006889ff:; BB(0x006889ff);
    /* 006889ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00688a01: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00688a08: jmp 0x688547 */ goto L_00688547;
}

void f_00688a10(void) /* sub_688A10 */
{
    FN_ENTER(0x00688a10);
    /* 00688a10: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00688a15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688a17: je 0x688ae1 */ if (fZ) goto L_00688ae1;
L_00688a1d:; BB(0x00688a1d);
    /* 00688a1d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688a20: jne 0x688a83 */ if (!fZ) goto L_00688a83;
L_00688a22:; BB(0x00688a22);
    /* 00688a22: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00688a27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688a2a: je 0x688b2b */ if (fZ) goto L_00688b2b;
L_00688a30:; BB(0x00688a30);
    /* 00688a30: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00688a32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688a34: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688a39u); f_006bb450();
    /* 00688a39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688a3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688a3e: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688a44:; BB(0x00688a44);
    /* 00688a44: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00688a46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688a48: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688a4du); f_006bb450();
    /* 00688a4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688a50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688a52: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688a58:; BB(0x00688a58);
    /* 00688a58: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00688a5a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00688a5c: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688a61u); f_006bb450();
    /* 00688a61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688a64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688a66: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688a6c:; BB(0x00688a6c);
    /* 00688a6c: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00688a6e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00688a70: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688a75u); f_006bb450();
    /* 00688a75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688a7a: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688a80:; BB(0x00688a80);
    /* 00688a80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688a82: ret  */ FN_RET(0x00688a10); r_esp += 4; return;
L_00688a83:; BB(0x00688a83);
    /* 00688a83: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688a86: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688a8c:; BB(0x00688a8c);
    /* 00688a8c: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00688a91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688a94: je 0x688b2b */ if (fZ) goto L_00688b2b;
L_00688a9a:; BB(0x00688a9a);
    /* 00688a9a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688a9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688a9e: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688aa3u); f_006bb450();
    /* 00688aa3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688aa8: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688aae:; BB(0x00688aae);
    /* 00688aae: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688ab0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688ab2: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688ab7u); f_006bb450();
    /* 00688ab7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688abc: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688abe:; BB(0x00688abe);
    /* 00688abe: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688ac0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00688ac2: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688ac7u); f_006bb450();
    /* 00688ac7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688aca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688acc: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688ace:; BB(0x00688ace);
    /* 00688ace: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688ad0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00688ad2: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688ad7u); f_006bb450();
    /* 00688ad7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688ada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688adc: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688ade:; BB(0x00688ade);
    /* 00688ade: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688ae0: ret  */ FN_RET(0x00688a10); r_esp += 4; return;
L_00688ae1:; BB(0x00688ae1);
    /* 00688ae1: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00688ae6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688ae9: je 0x688b2b */ if (fZ) goto L_00688b2b;
L_00688aeb:; BB(0x00688aeb);
    /* 00688aeb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688aed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688aef: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688af4u); f_006bb450();
    /* 00688af4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688af7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688af9: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688afb:; BB(0x00688afb);
    /* 00688afb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688afd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688aff: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688b04u); f_006bb450();
    /* 00688b04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688b07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688b09: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688b0b:; BB(0x00688b0b);
    /* 00688b0b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688b0d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00688b0f: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688b14u); f_006bb450();
    /* 00688b14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688b17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688b19: jne 0x688b2b */ if (!fZ) goto L_00688b2b;
L_00688b1b:; BB(0x00688b1b);
    /* 00688b1b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00688b1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00688b1f: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x688b24u); f_006bb450();
    /* 00688b24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688b27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688b29: je 0x688ade */ if (fZ) goto L_00688ade;
L_00688b2b:; BB(0x00688b2b);
    /* 00688b2b: mov eax, 1 */ r_eax = 0x1u;
    /* 00688b30: ret  */ FN_RET(0x00688a10); r_esp += 4; return;
}

void f_00688b34(void) /* sub_688B34 */
{
    FN_ENTER(0x00688b34);
    /* 00688b34: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x688b39u); f_00807ac0();
    /* 00688b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688b3a: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x688b3fu); f_00807e20();
    /* 00688b3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688b40: ret  */ FN_RET(0x00688b34); r_esp += 4; return;
}

void f_00688b44(void) /* sub_688B44 */
{
    FN_ENTER(0x00688b44);
    /* 00688b44: call 0x688b4c */ r_esp -= 4; W32(r_esp, 0x688b49u); f_00688b4c();
    /* 00688b49: ret  */ FN_RET(0x00688b44); r_esp += 4; return;
}

void f_00688b4c(void) /* sub_688B4C */
{
    FN_ENTER(0x00688b4c);
    /* 00688b4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688b4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00688b4f: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x688b54u); f_00687c48();
    /* 00688b54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688b56: jne 0x688b73 */ if (!fZ) goto L_00688b73;
L_00688b58:; BB(0x00688b58);
    /* 00688b58: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x688b5du); f_00688b8c();
    /* 00688b5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688b5f: jne 0x688b73 */ if (!fZ) goto L_00688b73;
L_00688b61:; BB(0x00688b61);
    /* 00688b61: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x688b66u); f_00807db8();
    /* 00688b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688b68: jne 0x688b73 */ if (!fZ) goto L_00688b73;
L_00688b6a:; BB(0x00688b6a);
    /* 00688b6a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x688b6fu); f_00807d60();
    /* 00688b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688b71: jne 0x688b7e */ if (!fZ) goto L_00688b7e;
L_00688b73:; BB(0x00688b73);
    /* 00688b73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688b75: call 0x688bc0 */ r_esp -= 4; W32(r_esp, 0x688b7au); f_00688bc0();
    /* 00688b7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688b7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688b7d: ret  */ FN_RET(0x00688b4c); r_esp += 4; return;
L_00688b7e:; BB(0x00688b7e);
    /* 00688b7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688b80: call 0x688bac */ r_esp -= 4; W32(r_esp, 0x688b85u); f_00688bac();
    /* 00688b85: mov eax, 1 */ r_eax = 0x1u;
    /* 00688b8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688b8b: ret  */ FN_RET(0x00688b4c); r_esp += 4; return;
}

void f_00688b8c(void) /* sub_688B8C */
{
    FN_ENTER(0x00688b8c);
    /* 00688b8c: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00688b91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688b94: jne 0x688ba3 */ if (!fZ) goto L_00688ba3;
L_00688b96:; BB(0x00688b96);
    /* 00688b96: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x688b9bu); f_0078b1c4();
    /* 00688b9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688b9e: je 0x688ba6 */ if (fZ) goto L_00688ba6;
L_00688ba0:; BB(0x00688ba0);
    /* 00688ba0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688ba2: ret  */ FN_RET(0x00688b8c); r_esp += 4; return;
L_00688ba3:; BB(0x00688ba3);
    /* 00688ba3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688ba5: ret  */ FN_RET(0x00688b8c); r_esp += 4; return;
L_00688ba6:; BB(0x00688ba6);
    /* 00688ba6: mov eax, 1 */ r_eax = 0x1u;
    /* 00688bab: ret  */ FN_RET(0x00688b8c); r_esp += 4; return;
}

void f_00688bac(void) /* sub_688BAC */
{
    FN_ENTER(0x00688bac);
    /* 00688bac: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00688bb2: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688bb7: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00688bbd: ret  */ FN_RET(0x00688bac); r_esp += 4; return;
}

void f_00688bc0(void) /* sub_688BC0 */
{
    FN_ENTER(0x00688bc0);
    /* 00688bc0: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00688bc6: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688bcb: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00688bd1: ret  */ FN_RET(0x00688bc0); r_esp += 4; return;
}

void f_00688bd4(void) /* sub_688BD4 */
{
    FN_ENTER(0x00688bd4);
    /* 00688bd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00688bd5: mov edi, ecx */ r_edi = r_ecx;
    /* 00688bd7: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x688bdcu); f_00807d60();
    /* 00688bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688bde: je 0x688bf3 */ if (fZ) goto L_00688bf3;
L_00688be0:; BB(0x00688be0);
    /* 00688be0: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00688be6: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688beb: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 00688bf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00688bf2: ret  */ FN_RET(0x00688bd4); r_esp += 4; return;
L_00688bf3:; BB(0x00688bf3);
    /* 00688bf3: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00688bf9: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688bfe: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 00688c04: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00688c05: ret  */ FN_RET(0x00688bd4); r_esp += 4; return;
}

void f_00688c08(void) /* sub_688C08 */
{
    FN_ENTER(0x00688c08);
    /* 00688c08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688c09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00688c0b: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00688c12: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c15: jne 0x688c2a */ if (!fZ) goto L_00688c2a;
L_00688c17:; BB(0x00688c17);
    /* 00688c17: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 00688c1d: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00688c22: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00688c28: jmp 0x688c38 */ goto L_00688c38;
L_00688c2a:; BB(0x00688c2a);
    /* 00688c2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688c2c: call 0x688c58 */ r_esp -= 4; W32(r_esp, 0x688c31u); f_00688c58();
    /* 00688c31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688c33: call 0x688c68 */ r_esp -= 4; W32(r_esp, 0x688c38u); f_00688c68();
L_00688c38:; BB(0x00688c38);
    /* 00688c38: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x688c3du); f_007a61a4();
    /* 00688c3d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688c40: jne 0x688c54 */ if (!fZ) goto L_00688c54;
L_00688c42:; BB(0x00688c42);
    /* 00688c42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688c44: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x688c49u); f_007ba9d8();
    /* 00688c49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688c4b: je 0x688c54 */ if (fZ) goto L_00688c54;
L_00688c4d:; BB(0x00688c4d);
    /* 00688c4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688c4f: call 0x688c74 */ r_esp -= 4; W32(r_esp, 0x688c54u); f_00688c74();
L_00688c54:; BB(0x00688c54);
    /* 00688c54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688c55: ret  */ FN_RET(0x00688c08); r_esp += 4; return;
}

void f_00688c58(void) /* sub_688C58 */
{
    FN_ENTER(0x00688c58);
    /* 00688c58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688c59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00688c5b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x688c60u); f_00807ac0();
    /* 00688c60: mov dword ptr [ebp + 0x3ec], eax */ W32((u32)(r_ebp+0x3ecu), r_eax);
    /* 00688c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688c67: ret  */ FN_RET(0x00688c58); r_esp += 4; return;
}

void f_00688c68(void) /* sub_688C68 */
{
    FN_ENTER(0x00688c68);
    /* 00688c68: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00688c6d: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00688c73: ret  */ FN_RET(0x00688c68); r_esp += 4; return;
}

void f_00688c74(void) /* sub_688C74 */
{
    FN_ENTER(0x00688c74);
    /* 00688c74: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688c77: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00688c7d: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00688c82: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00688c88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c8a: je 0x688c9c */ if (fZ) goto L_00688c9c;
L_00688c8c:; BB(0x00688c8c);
    /* 00688c8c: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00688c93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c96: jne 0x688c9c */ if (!fZ) goto L_00688c9c;
L_00688c98:; BB(0x00688c98);
    /* 00688c98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00688c9b: ret  */ FN_RET(0x00688c74); r_esp += 4; return;
L_00688c9c:; BB(0x00688c9c);
    /* 00688c9c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00688ca0: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 00688ca6: mov byte ptr [esp], 0x1f */ W8((u32)(r_esp), 0x1fu);
    /* 00688caa: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00688caf: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00688cb4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00688cb8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00688cbb: call 0x8004fc */ r_esp -= 4; W32(r_esp, 0x688cc0u); f_008004fc();
    /* 00688cc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00688cc3: ret  */ FN_RET(0x00688c74); r_esp += 4; return;
}

void f_00688cc4(void) /* sub_688CC4 */
{
    FN_ENTER(0x00688cc4);
    /* 00688cc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688cc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688cc6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00688cc8: lea ecx, [ebx + 0x390] */ r_ecx = (u32)(r_ebx+0x390u);
    /* 00688cce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688ccf: call 0x6a37bc */ r_esp -= 4; W32(r_esp, 0x688cd4u); f_006a37bc();
    /* 00688cd4: lea ecx, [ebx + 0x70c] */ r_ecx = (u32)(r_ebx+0x70cu);
    /* 00688cda: call 0x698678 */ r_esp -= 4; W32(r_esp, 0x688cdfu); f_00698678();
    /* 00688cdf: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00688ce6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688ce9: jne 0x688d12 */ if (!fZ) goto L_00688d12;
L_00688ceb:; BB(0x00688ceb);
    /* 00688ceb: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00688cee: mov eax, 0xa94254 */ r_eax = 0xa94254u;
    /* 00688cf3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00688cf5: mov esi, eax */ r_esi = r_eax;
L_00688cf7:; BB(0x00688cf7);
    /* 00688cf7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00688cf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688cfb: je 0x688d04 */ if (fZ) goto L_00688d04;
L_00688cfd:; BB(0x00688cfd);
    /* 00688cfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688cfe: call 0x692014 */ r_esp -= 4; W32(r_esp, 0x688d03u); f_00692014();
    /* 00688d03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00688d04:; BB(0x00688d04);
    /* 00688d04: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00688d07: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00688d0a: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688d0d: jl 0x688cf7 */ if ((fS!=fO)) goto L_00688cf7;
L_00688d0f:; BB(0x00688d0f);
    /* 00688d0f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00688d12:; BB(0x00688d12);
    /* 00688d12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688d13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688d14: ret  */ FN_RET(0x00688cc4); r_esp += 4; return;
}

void f_00688d18(void) /* sub_688D18 */
{
    FN_ENTER(0x00688d18);
    /* 00688d18: mov ecx, dword ptr [ecx + 0x45c] */ r_ecx = R32((u32)(r_ecx+0x45cu));
    /* 00688d1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688d20: je 0x688d27 */ if (fZ) goto L_00688d27;
L_00688d22:; BB(0x00688d22);
    /* 00688d22: call 0x7a3c98 */ r_esp -= 4; W32(r_esp, 0x688d27u); f_007a3c98();
L_00688d27:; BB(0x00688d27);
    /* 00688d27: ret  */ FN_RET(0x00688d18); r_esp += 4; return;
}

void f_00688d28(void) /* sub_688D28 */
{
    FN_ENTER(0x00688d28);
    /* 00688d28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688d2a: mov dword ptr [ecx + 0x538], eax */ W32((u32)(r_ecx+0x538u), r_eax);
    /* 00688d30: mov dword ptr [ecx + 0x5ac], eax */ W32((u32)(r_ecx+0x5acu), r_eax);
    /* 00688d36: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x688d3bu); f_00688d3c();
    /* 00688d3b: ret  */ FN_RET(0x00688d28); r_esp += 4; return;
}

void f_00688d3c(void) /* sub_688D3C */
{
    FN_ENTER(0x00688d3c);
    /* 00688d3c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00688d42: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00688d47: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00688d4d: call 0x688d54 */ r_esp -= 4; W32(r_esp, 0x688d52u); f_00688d54();
    /* 00688d52: ret  */ FN_RET(0x00688d3c); r_esp += 4; return;
}

void f_00688d54(void) /* sub_688D54 */
{
    FN_ENTER(0x00688d54);
    /* 00688d54: mov dword ptr [ecx + 0x350], 0 */ W32((u32)(r_ecx+0x350u), 0x0u);
    /* 00688d5e: ret  */ FN_RET(0x00688d54); r_esp += 4; return;
}

void f_00688d60(void) /* sub_688D60 */
{
    FN_ENTER(0x00688d60);
    /* 00688d60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00688d61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688d62: mov edi, ecx */ r_edi = r_ecx;
    /* 00688d64: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x688d69u); f_00807d60();
    /* 00688d69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688d6b: je 0x688d93 */ if (fZ) goto L_00688d93;
L_00688d6d:; BB(0x00688d6d);
    /* 00688d6d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00688d6f: lea ecx, [edi + 0xdf8] */ r_ecx = (u32)(r_edi+0xdf8u);
    /* 00688d75: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x688d7au); f_0069792c();
    /* 00688d7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688d7c: je 0x688d93 */ if (fZ) goto L_00688d93;
L_00688d7e:; BB(0x00688d7e);
    /* 00688d7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00688d80: mov ecx, eax */ r_ecx = r_eax;
    /* 00688d82: call dword ptr [edx + 0xa4] */ { u32 t = R32((u32)(r_edx+0xa4u)); r_esp -= 4; W32(r_esp, 0x688d88u); call_ind(t); }
    /* 00688d88: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00688d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688d8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00688d8e: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x688d93u); f_00687d30();
L_00688d93:; BB(0x00688d93);
    /* 00688d93: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00688d9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688d9d: jne 0x688dd4 */ if (!fZ) goto L_00688dd4;
L_00688d9f:; BB(0x00688d9f);
    /* 00688d9f: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x688da4u); f_0068be84();
    /* 00688da4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688da6: jne 0x688dd4 */ if (!fZ) goto L_00688dd4;
L_00688da8:; BB(0x00688da8);
    /* 00688da8: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x688dadu); f_00807d60();
    /* 00688dad: lea ebx, [edi + 0x4e4] */ r_ebx = (u32)(r_edi+0x4e4u);
    /* 00688db3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688db5: jne 0x688dc1 */ if (!fZ) goto L_00688dc1;
L_00688db7:; BB(0x00688db7);
    /* 00688db7: mov dword ptr [edi + 0x520], 0 */ W32((u32)(r_edi+0x520u), 0x0u);
L_00688dc1:; BB(0x00688dc1);
    /* 00688dc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688dc3: call 0x6a7d6c */ r_esp -= 4; W32(r_esp, 0x688dc8u); f_006a7d6c();
    /* 00688dc8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688dca: call 0x6a7e6c */ r_esp -= 4; W32(r_esp, 0x688dcfu); f_006a7e6c();
    /* 00688dcf: call 0x6a2834 */ r_esp -= 4; W32(r_esp, 0x688dd4u); f_006a2834();
L_00688dd4:; BB(0x00688dd4);
    /* 00688dd4: mov ecx, edi */ r_ecx = r_edi;
    /* 00688dd6: call 0x688e40 */ r_esp -= 4; W32(r_esp, 0x688ddbu); f_00688e40();
    /* 00688ddb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00688dde: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00688de5: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00688dea: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00688ded: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688df0: jne 0x688e26 */ if (!fZ) goto L_00688e26;
L_00688df2:; BB(0x00688df2);
    /* 00688df2: mov ecx, edi */ r_ecx = r_edi;
    /* 00688df4: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x688df9u); f_00688e9c();
    /* 00688df9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688dfb: je 0x688e04 */ if (fZ) goto L_00688e04;
L_00688dfd:; BB(0x00688dfd);
    /* 00688dfd: mov ecx, edi */ r_ecx = r_edi;
    /* 00688dff: call 0x688eb4 */ r_esp -= 4; W32(r_esp, 0x688e04u); f_00688eb4();
L_00688e04:; BB(0x00688e04);
    /* 00688e04: mov eax, dword ptr [edi + 0x68c] */ r_eax = R32((u32)(r_edi+0x68cu));
    /* 00688e0a: lea ecx, [edi + 0x688] */ r_ecx = (u32)(r_edi+0x688u);
    /* 00688e10: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00688e12: je 0x688e1b */ if (fZ) goto L_00688e1b;
L_00688e14:; BB(0x00688e14);
    /* 00688e14: mov eax, 1 */ r_eax = 0x1u;
    /* 00688e19: jmp 0x688e1d */ goto L_00688e1d;
L_00688e1b:; BB(0x00688e1b);
    /* 00688e1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00688e1d:; BB(0x00688e1d);
    /* 00688e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e1f: je 0x688e26 */ if (fZ) goto L_00688e26;
L_00688e21:; BB(0x00688e21);
    /* 00688e21: call 0x697770 */ r_esp -= 4; W32(r_esp, 0x688e26u); f_00697770();
L_00688e26:; BB(0x00688e26);
    /* 00688e26: mov eax, dword ptr [edi + 0x470] */ r_eax = R32((u32)(r_edi+0x470u));
    /* 00688e2c: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00688e2f: mov dword ptr [edi + 0x470], eax */ W32((u32)(r_edi+0x470u), r_eax);
    /* 00688e35: call 0x6aa0cc */ r_esp -= 4; W32(r_esp, 0x688e3au); f_006aa0cc();
    /* 00688e3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688e3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00688e3c: ret  */ FN_RET(0x00688d60); r_esp += 4; return;
}

void f_00688e40(void) /* sub_688E40 */
{
    FN_ENTER(0x00688e40);
    /* 00688e40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688e41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688e42: mov esi, ecx */ r_esi = r_ecx;
    /* 00688e44: mov edx, dword ptr [esi + 0x624] */ r_edx = R32((u32)(r_esi+0x624u));
    /* 00688e4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e4c: je 0x688e70 */ if (fZ) goto L_00688e70;
L_00688e4e:; BB(0x00688e4e);
    /* 00688e4e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00688e51: cmp eax, dword ptr [0x9fd1a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9fd1a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e57: jne 0x688e70 */ if (!fZ) goto L_00688e70;
L_00688e59:; BB(0x00688e59);
    /* 00688e59: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00688e5d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00688e62: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00688e66: mov dword ptr [esi + 0x624], 0 */ W32((u32)(r_esi+0x624u), 0x0u);
L_00688e70:; BB(0x00688e70);
    /* 00688e70: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 00688e74: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x688e79u); f_0068be84();
    /* 00688e79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e7b: je 0x688e81 */ if (fZ) goto L_00688e81;
L_00688e7d:; BB(0x00688e7d);
    /* 00688e7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688e7f: jmp 0x688e86 */ goto L_00688e86;
L_00688e81:; BB(0x00688e81);
    /* 00688e81: mov eax, 1 */ r_eax = 0x1u;
L_00688e86:; BB(0x00688e86);
    /* 00688e86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688e87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688e88: call 0x789c1c */ r_esp -= 4; W32(r_esp, 0x688e8du); f_00789c1c();
    /* 00688e8d: mov dword ptr [esi + 0x624], eax */ W32((u32)(r_esi+0x624u), r_eax);
    /* 00688e93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00688e96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688e97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00688e98: ret  */ FN_RET(0x00688e40); r_esp += 4; return;
}

void f_00688e9c(void) /* sub_688E9C */
{
    FN_ENTER(0x00688e9c);
    /* 00688e9c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00688ea2: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688ea7: je 0x688eaf */ if (fZ) goto L_00688eaf;
L_00688ea9:; BB(0x00688ea9);
    /* 00688ea9: mov eax, 1 */ r_eax = 0x1u;
    /* 00688eae: ret  */ FN_RET(0x00688e9c); r_esp += 4; return;
L_00688eaf:; BB(0x00688eaf);
    /* 00688eaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00688eb1: ret  */ FN_RET(0x00688e9c); r_esp += 4; return;
}

void f_00688eb4(void) /* sub_688EB4 */
{
    FN_ENTER(0x00688eb4);
    /* 00688eb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688eb5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688eb7: je 0x688ec7 */ if (fZ) goto L_00688ec7;
L_00688eb9:; BB(0x00688eb9);
    /* 00688eb9: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00688ec0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688ec3: jne 0x688ec7 */ if (!fZ) goto L_00688ec7;
L_00688ec5:; BB(0x00688ec5);
    /* 00688ec5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688ec6: ret  */ FN_RET(0x00688eb4); r_esp += 4; return;
L_00688ec7:; BB(0x00688ec7);
    /* 00688ec7: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00688ecb: mov byte ptr [esp], 0x7b */ W8((u32)(r_esp), 0x7bu);
    /* 00688ecf: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00688ed4: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00688ed9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00688edc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x688ee1u); f_008003e0();
    /* 00688ee1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688ee2: ret  */ FN_RET(0x00688eb4); r_esp += 4; return;
}

void f_00688ee4(void) /* sub_688EE4 */
{
    FN_ENTER(0x00688ee4);
    /* 00688ee4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00688ee9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00688eed: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00688ef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688ef7: mov esi, ecx */ r_esi = r_ecx;
    /* 00688ef9: mov ebp, edx */ r_ebp = r_edx;
    /* 00688efb: mov ebx, eax */ r_ebx = r_eax;
    /* 00688efd: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 00688f00: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00688f08: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00688f10: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00688f18: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00688f20: mov byte ptr [esp + 4], 0x24 */ W8((u32)(r_esp+0x4u), 0x24u);
    /* 00688f25: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00688f2a: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x688f2fu); f_0068d5ac();
    /* 00688f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688f31: je 0x688f66 */ if (fZ) goto L_00688f66;
L_00688f33:; BB(0x00688f33);
    /* 00688f33: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00688f3a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688f3d: je 0x688f66 */ if (fZ) goto L_00688f66;
L_00688f3f:; BB(0x00688f3f);
    /* 00688f3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00688f42: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688f45: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 00688f4a: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 00688f4d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00688f51: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00688f55: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00688f59: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00688f5d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00688f61: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x688f66u); f_008003e0();
L_00688f66:; BB(0x00688f66);
    /* 00688f66: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00688f69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688f6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00688f6c: ret  */ FN_RET(0x00688ee4); r_esp += 4; return;
}

void f_00688ef1(void) /* sub_688EF1 */
{
    FN_ENTER(0x00688ef1);
    /* 00688ef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688ef7: mov esi, ecx */ r_esi = r_ecx;
    /* 00688ef9: mov ebp, edx */ r_ebp = r_edx;
    /* 00688efb: mov ebx, eax */ r_ebx = r_eax;
    /* 00688efd: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 00688f00: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00688f08: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00688f10: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00688f18: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00688f20: mov byte ptr [esp + 4], 0x24 */ W8((u32)(r_esp+0x4u), 0x24u);
    /* 00688f25: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00688f2a: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x688f2fu); f_0068d5ac();
    /* 00688f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688f31: je 0x688f66 */ if (fZ) goto L_00688f66;
L_00688f33:; BB(0x00688f33);
    /* 00688f33: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00688f3a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688f3d: je 0x688f66 */ if (fZ) goto L_00688f66;
L_00688f3f:; BB(0x00688f3f);
    /* 00688f3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00688f42: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688f45: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 00688f4a: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 00688f4d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00688f51: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00688f55: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00688f59: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00688f5d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00688f61: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x688f66u); f_008003e0();
L_00688f66:; BB(0x00688f66);
    /* 00688f66: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00688f69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688f6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00688f6c: ret  */ FN_RET(0x00688ef1); r_esp += 4; return;
}

void f_00688f70(void) /* sub_688F70 */
{
    FN_ENTER(0x00688f70);
    /* 00688f70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688f71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688f73: je 0x688f83 */ if (fZ) goto L_00688f83;
L_00688f75:; BB(0x00688f75);
    /* 00688f75: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00688f7c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688f7f: jne 0x688f83 */ if (!fZ) goto L_00688f83;
L_00688f81:; BB(0x00688f81);
    /* 00688f81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688f82: ret  */ FN_RET(0x00688f70); r_esp += 4; return;
L_00688f83:; BB(0x00688f83);
    /* 00688f83: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00688f87: mov byte ptr [esp], 0x31 */ W8((u32)(r_esp), 0x31u);
    /* 00688f8b: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00688f90: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00688f95: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00688f98: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x688f9du); f_008003e0();
    /* 00688f9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688f9e: ret  */ FN_RET(0x00688f70); r_esp += 4; return;
}

void f_00688fa0(void) /* sub_688FA0 */
{
    FN_ENTER(0x00688fa0);
    /* 00688fa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688fa1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688fa3: je 0x688fb3 */ if (fZ) goto L_00688fb3;
L_00688fa5:; BB(0x00688fa5);
    /* 00688fa5: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00688fac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00688faf: jne 0x688fb3 */ if (!fZ) goto L_00688fb3;
L_00688fb1:; BB(0x00688fb1);
    /* 00688fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688fb2: ret  */ FN_RET(0x00688fa0); r_esp += 4; return;
L_00688fb3:; BB(0x00688fb3);
    /* 00688fb3: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00688fb7: mov byte ptr [esp], 0x32 */ W8((u32)(r_esp), 0x32u);
    /* 00688fbb: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00688fc0: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00688fc5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00688fc8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x688fcdu); f_008003e0();
    /* 00688fcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688fce: ret  */ FN_RET(0x00688fa0); r_esp += 4; return;
}

void f_00688fd0(void) /* sub_688FD0 */
{
    FN_ENTER(0x00688fd0);
    /* 00688fd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00688fd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00688fd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688fd5: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x688fdau); f_00689b44();
    /* 00688fda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688fdc: jne 0x688ffc */ if (!fZ) goto L_00688ffc;
L_00688fde:; BB(0x00688fde);
    /* 00688fde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688fe0: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x688fe5u); f_00688e9c();
    /* 00688fe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688fe7: jne 0x688ffc */ if (!fZ) goto L_00688ffc;
L_00688fe9:; BB(0x00688fe9);
    /* 00688fe9: movzx eax, word ptr [ebx + 0x390] */ r_eax = (u32)R16((u32)(r_ebx+0x390u));
    /* 00688ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688ff1: lea ecx, [ebx + 0x394] */ r_ecx = (u32)(r_ebx+0x394u);
    /* 00688ff7: call 0x6a3720 */ r_esp -= 4; W32(r_esp, 0x688ffcu); f_006a3720();
L_00688ffc:; BB(0x00688ffc);
    /* 00688ffc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00688ffe: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x689003u); f_006877b0();
    /* 00689003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689005: je 0x68901c */ if (fZ) goto L_0068901c;
L_00689007:; BB(0x00689007);
    /* 00689007: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068900a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068900c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068900d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068900e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068900f: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 00689014: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x689019u); f_00814298();
    /* 00689019: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0068901c:; BB(0x0068901c);
    /* 0068901c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068901d: ret  */ FN_RET(0x00688fd0); r_esp += 4; return;
}

