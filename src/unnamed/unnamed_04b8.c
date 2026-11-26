#include "protos.h"

void f_004b8034(void) /* sub_4B8034 */
{
    FN_ENTER(0x004b8034);
    /* 004b8034: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8035: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b8038: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b803a: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004b803e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8041: je 0x4b8512 */ if (fZ) goto L_004b8512;
L_004b8047:; BB(0x004b8047);
    /* 004b8047: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b804a: je 0x4b84b6 */ if (fZ) goto L_004b84b6;
L_004b8050:; BB(0x004b8050);
    /* 004b8050: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8053: je 0x4b8356 */ if (fZ) goto L_004b8356;
L_004b8059:; BB(0x004b8059);
    /* 004b8059: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b805c: je 0x4b81f9 */ if (fZ) goto L_004b81f9;
L_004b8062:; BB(0x004b8062);
    /* 004b8062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8064: je 0x4b808e */ if (fZ) goto L_004b808e;
L_004b8066:; BB(0x004b8066);
    /* 004b8066: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8069: je 0x4b81f9 */ if (fZ) goto L_004b81f9;
L_004b806f:; BB(0x004b806f);
    /* 004b806f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8072: jne 0x4b81f9 */ if (!fZ) goto L_004b81f9;
L_004b8078:; BB(0x004b8078);
    /* 004b8078: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4b807du); f_004d3250();
    /* 004b807d: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4b8082u); f_00717f38();
    /* 004b8082: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8084: call 0x520e34 */ r_esp -= 4; W32(r_esp, 0x4b8089u); f_00520e34();
    /* 004b8089: jmp 0x4b81f9 */ goto L_004b81f9;
L_004b808e:; BB(0x004b808e);
    /* 004b808e: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b8094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8096: jne 0x4b80ed */ if (!fZ) goto L_004b80ed;
L_004b8098:; BB(0x004b8098);
    /* 004b8098: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b809du); f_00520db8();
    /* 004b809d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b809f: jne 0x4b81f9 */ if (!fZ) goto L_004b81f9;
L_004b80a5:; BB(0x004b80a5);
    /* 004b80a5: mov byte ptr [esp + 0x18], 1 */ W8((u32)(r_esp+0x18u), 0x1u);
    /* 004b80aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b80ac: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 004b80b0: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 004b80b8: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004b80bd: mov dword ptr [esp + 0x20], 0x3f333333 */ W32((u32)(r_esp+0x20u), 0x3f333333u);
    /* 004b80c5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80c7: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4b80ccu); f_004d31f4();
    /* 004b80cc: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004b80d0: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b80d6: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4b80dbu); f_004d6770();
    /* 004b80db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b80de: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b80e8: jmp 0x4b81f9 */ goto L_004b81f9;
L_004b80ed:; BB(0x004b80ed);
    /* 004b80ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b80ef: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b80f4u); f_007aa094();
    /* 004b80f4: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b80fb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b8100u); f_007aaa30();
    /* 004b8100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8102: je 0x4b8116 */ if (fZ) goto L_004b8116;
L_004b8104:; BB(0x004b8104);
    /* 004b8104: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8109: push 0x3e7 */ { u32 v = 0x3e7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b810e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b8113u); f_00814298();
    /* 004b8113: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b8116:; BB(0x004b8116);
    /* 004b8116: push 0x42a60000 */ { u32 v = 0x42a60000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b811b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b811d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b8122u); f_007aaa30();
    /* 004b8122: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8124: je 0x4b8149 */ if (fZ) goto L_004b8149;
L_004b8126:; BB(0x004b8126);
    /* 004b8126: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8128: call 0x4b60a0 */ r_esp -= 4; W32(r_esp, 0x4b812du); f_004b60a0();
    /* 004b812d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b812f: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8134: lea eax, [ebx + 0x7bc] */ r_eax = (u32)(r_ebx+0x7bcu);
    /* 004b813a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b813b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4b8140u); f_0050981c();
    /* 004b8140: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8143: mov dword ptr [ebx + 0x7b8], eax */ W32((u32)(r_ebx+0x7b8u), r_eax);
L_004b8149:; BB(0x004b8149);
    /* 004b8149: push 0x42d20000 */ { u32 v = 0x42d20000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b814e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8150: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b8155u); f_007aaa30();
    /* 004b8155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8157: je 0x4b8160 */ if (fZ) goto L_004b8160;
L_004b8159:; BB(0x004b8159);
    /* 004b8159: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b815b: call 0x4b60a0 */ r_esp -= 4; W32(r_esp, 0x4b8160u); f_004b60a0();
L_004b8160:; BB(0x004b8160);
    /* 004b8160: push 0x42aa0000 */ { u32 v = 0x42aa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8165: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8167: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b816cu); f_007aaa30();
    /* 004b816c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b816e: je 0x4b819a */ if (fZ) goto L_004b819a;
L_004b8170:; BB(0x004b8170);
    /* 004b8170: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004b8177: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b817a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004b8182: mov dword ptr [esp + 8], 0xc4160000 */ W32((u32)(r_esp+0x8u), 0xc4160000u);
    /* 004b818a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b818c: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8192: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4b8197u); f_0050b7a4();
    /* 004b8197: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b819a:; BB(0x004b819a);
    /* 004b819a: push 0x42c40000 */ { u32 v = 0x42c40000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b819f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b81a1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b81a6u); f_007aaa30();
    /* 004b81a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b81a8: je 0x4b81e5 */ if (fZ) goto L_004b81e5;
L_004b81aa:; BB(0x004b81aa);
    /* 004b81aa: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004b81b2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004b81b6: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004b81be: mov dword ptr [esp + 0x14], 0xc3898000 */ W32((u32)(r_esp+0x14u), 0xc3898000u);
    /* 004b81c6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b81c8: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b81cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b81ce: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4b81d3u); f_0050b7a4();
    /* 004b81d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b81d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b81d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b81d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b81d8: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b81dd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b81e2u); f_00814298();
    /* 004b81e2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b81e5:; BB(0x004b81e5);
    /* 004b81e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b81e7: call 0x4b1cdc */ r_esp -= 4; W32(r_esp, 0x4b81ecu); f_004b1cdc();
    /* 004b81ec: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x4b81f1u); f_004d6864();
    /* 004b81f1: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004b81f5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b81f7: jne 0x4b8200 */ if (!fZ) goto L_004b8200;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8034); r_esp += 8; return;
L_004b8200:; BB(0x004b8200);
    /* 004b8200: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4b8205u); f_004d3250();
    /* 004b8205: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b820b: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b8212: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b8218: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b821b: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b8221: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b8225: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b8228: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b822b: ja 0x4b833f */ if ((!fC&&!fZ)) goto L_004b833f;
L_004b8231:; BB(0x004b8231);
    /* 004b8231: mov ecx, dword ptr [ecx*4 + 0x905b00] */ r_ecx = R32((u32)(r_ecx*4+0x905b00u));
    /* 004b8238: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
L_004b8356:; BB(0x004b8356);
    /* 004b8356: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b835c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b835f: jne 0x4b81f9 */ if (!fZ) goto L_004b81f9;
L_004b8365:; BB(0x004b8365);
    /* 004b8365: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b836b: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b8372: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b8378: mov dword ptr [ebx + 0x6c8], 0 */ W32((u32)(r_ebx+0x6c8u), 0x0u);
    /* 004b8382: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b8385: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b838b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b838f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b8392: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b8395: ja 0x4b84a9 */ if ((!fC&&!fZ)) goto L_004b84a9;
L_004b839b:; BB(0x004b839b);
    /* 004b839b: mov ecx, dword ptr [ecx*4 + 0x905a60] */ r_ecx = R32((u32)(r_ecx*4+0x905a60u));
    /* 004b83a2: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
L_004b84b6:; BB(0x004b84b6);
    /* 004b84b6: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b84bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b84bf: jne 0x4b81f9 */ if (!fZ) goto L_004b81f9;
L_004b84c5:; BB(0x004b84c5);
    /* 004b84c5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b84c7: mov dword ptr [ebx + 0x6c8], 0 */ W32((u32)(r_ebx+0x6c8u), 0x0u);
    /* 004b84d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b84d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b84d7: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b84ddu); call_ind(t); }
    /* 004b84dd: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b84e1: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b84e7: mov byte ptr [esp + 0x24], 0xa9 */ W8((u32)(r_esp+0x24u), 0xa9u);
    /* 004b84ec: mov edx, 2 */ r_edx = 0x2u;
    /* 004b84f1: mov byte ptr [esp + 0x25], dl */ W8((u32)(r_esp+0x25u), (u8)r_edx);
    /* 004b84f5: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 004b84fa: mov word ptr [esp + 0x28], dx */ W16((u32)(r_esp+0x28u), (u16)r_edx);
    /* 004b84ff: mov word ptr [esp + 0x2a], bx */ W16((u32)(r_esp+0x2au), (u16)r_ebx);
    /* 004b8504: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 004b8508: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b850du); f_008003e0();
    /* 004b850d: jmp 0x4b81f9 */ goto L_004b81f9;
L_004b8512:; BB(0x004b8512);
    /* 004b8512: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b8514: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8516: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b851d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b851f: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b8525u); call_ind(t); }
    /* 004b8525: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 004b8529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b852b: mov esi, eax */ r_esi = r_eax;
L_004b852d:; BB(0x004b852d);
    /* 004b852d: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b8534: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b8536: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b853cu); call_ind(t); }
    /* 004b853c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b853f: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8542: jl 0x4b852d */ if ((fS!=fO)) goto L_004b852d;
L_004b8544:; BB(0x004b8544);
    /* 004b8544: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 004b8548: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b854e: mov dword ptr [ebx + 0x6f8], 0 */ W32((u32)(r_ebx+0x6f8u), 0x0u);
    /* 004b8558: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b855d: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b8563: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b8565: mov dword ptr [ebx + 0x730], edx */ W32((u32)(r_ebx+0x730u), r_edx);
    /* 004b856b: mov dword ptr [ebx + 0x734], edx */ W32((u32)(r_ebx+0x734u), r_edx);
    /* 004b8571: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4b8576u); f_00717f74();
    /* 004b8576: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8578: call 0x520e2c */ r_esp -= 4; W32(r_esp, 0x4b857du); f_00520e2c();
    /* 004b857d: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b80a0(void)
{
    FN_ENTER(0x004b80a0);
    /* 004b80a0: test dword ptr [ecx + eax], edx */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;   }
    /* 004b80a4: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004b80a6: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b80a7: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b80a9: add dword ptr [ebx], esi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004b80ab: ror byte ptr [eax - 0x38e6dbbc], 0x44 */ { u32 ad = (u32)(r_eax+0xc7192444u); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 004b80b2: and al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b80b4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b80b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b80b8: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004b80bd: mov dword ptr [esp + 0x20], 0x3f333333 */ W32((u32)(r_esp+0x20u), 0x3f333333u);
    /* 004b80c5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80c7: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4b80ccu); f_004d31f4();
    /* 004b80cc: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004b80d0: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 004b80d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b80d6: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4b80dbu); f_004d6770();
    /* 004b80db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b80de: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b80e8: jmp 0x4b81f9 */ goto L_004b81f9;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b80a0); r_esp += 8; return;
}

void f_004b823a(void)
{
    FN_ENTER(0x004b823a);
    goto L_004b823a;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b823a); r_esp += 8; return;
L_004b8218:; BB(0x004b8218);
    /* 004b8218: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b821b: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b8221: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b8225: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b8228: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b822b: ja 0x4b833f */ if ((!fC&&!fZ)) goto L_004b833f;
L_004b8231:; BB(0x004b8231);
    /* 004b8231: mov ecx, dword ptr [ecx*4 + 0x905b00] */ r_ecx = R32((u32)(r_ecx*4+0x905b00u));
    /* 004b8238: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b823a:; BB(0x004b823a);
    /* 004b823a: mov eax, 1 */ r_eax = 0x1u;
    /* 004b823f: jmp 0x4b8218 */ goto L_004b8218;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8241(void)
{
    FN_ENTER(0x004b8241);
    goto L_004b8241;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8241); r_esp += 8; return;
L_004b8241:; BB(0x004b8241);
    /* 004b8241: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8249: jne 0x4b8255 */ if (!fZ) goto L_004b8255;
L_004b824b:; BB(0x004b824b);
    /* 004b824b: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b8250: jmp 0x4b833f */ goto L_004b833f;
L_004b8255:; BB(0x004b8255);
    /* 004b8255: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b825a: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b825f(void)
{
    FN_ENTER(0x004b825f);
    goto L_004b825f;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b825f); r_esp += 8; return;
L_004b825f:; BB(0x004b825f);
    /* 004b825f: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8267: jne 0x4b8273 */ if (!fZ) goto L_004b8273;
L_004b8269:; BB(0x004b8269);
    /* 004b8269: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b826e: jmp 0x4b833f */ goto L_004b833f;
L_004b8273:; BB(0x004b8273);
    /* 004b8273: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b8278: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b827d(void)
{
    FN_ENTER(0x004b827d);
    goto L_004b827d;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b827d); r_esp += 8; return;
L_004b827d:; BB(0x004b827d);
    /* 004b827d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8283: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8285: jne 0x4b8291 */ if (!fZ) goto L_004b8291;
L_004b8287:; BB(0x004b8287);
    /* 004b8287: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b828c: jmp 0x4b833f */ goto L_004b833f;
L_004b8291:; BB(0x004b8291);
    /* 004b8291: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b8296: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b829b(void)
{
    FN_ENTER(0x004b829b);
    goto L_004b829b;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b829b); r_esp += 8; return;
L_004b829b:; BB(0x004b829b);
    /* 004b829b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b82a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b82a3: jne 0x4b82af */ if (!fZ) goto L_004b82af;
L_004b82a5:; BB(0x004b82a5);
    /* 004b82a5: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b82aa: jmp 0x4b833f */ goto L_004b833f;
L_004b82af:; BB(0x004b82af);
    /* 004b82af: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b82b4: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b82b9(void)
{
    FN_ENTER(0x004b82b9);
    goto L_004b82b9;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b82b9); r_esp += 8; return;
L_004b82b9:; BB(0x004b82b9);
    /* 004b82b9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b82bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b82c1: jne 0x4b82ca */ if (!fZ) goto L_004b82ca;
L_004b82c3:; BB(0x004b82c3);
    /* 004b82c3: mov eax, 4 */ r_eax = 0x4u;
    /* 004b82c8: jmp 0x4b833f */ goto L_004b833f;
L_004b82ca:; BB(0x004b82ca);
    /* 004b82ca: mov eax, 0xa */ r_eax = 0xau;
    /* 004b82cf: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b82d1(void)
{
    FN_ENTER(0x004b82d1);
    goto L_004b82d1;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b82d1); r_esp += 8; return;
L_004b82d1:; BB(0x004b82d1);
    /* 004b82d1: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b82d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b82d9: jne 0x4b82e2 */ if (!fZ) goto L_004b82e2;
L_004b82db:; BB(0x004b82db);
    /* 004b82db: mov eax, 3 */ r_eax = 0x3u;
    /* 004b82e0: jmp 0x4b833f */ goto L_004b833f;
L_004b82e2:; BB(0x004b82e2);
    /* 004b82e2: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b82e7: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b82e9(void)
{
    FN_ENTER(0x004b82e9);
    goto L_004b82e9;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b82e9); r_esp += 8; return;
L_004b82e9:; BB(0x004b82e9);
    /* 004b82e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b82eb: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b82f0u); f_00520bf4();
    /* 004b82f0: fcomp dword ptr [0x906ca0] */ fx_compare(ST(0), R_F32((u32)(0x906ca0u))); FPOP();
    /* 004b82f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b82f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b82f9: jbe 0x4b8302 */ if ((fC||fZ)) goto L_004b8302;
L_004b82fb:; BB(0x004b82fb);
    /* 004b82fb: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b8300: jmp 0x4b833f */ goto L_004b833f;
L_004b8302:; BB(0x004b8302);
    /* 004b8302: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b8307: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8309(void)
{
    FN_ENTER(0x004b8309);
    goto L_004b8309;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8309); r_esp += 8; return;
L_004b8309:; BB(0x004b8309);
    /* 004b8309: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b830f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8311: jne 0x4b831a */ if (!fZ) goto L_004b831a;
L_004b8313:; BB(0x004b8313);
    /* 004b8313: mov eax, 5 */ r_eax = 0x5u;
    /* 004b8318: jmp 0x4b833f */ goto L_004b833f;
L_004b831a:; BB(0x004b831a);
    /* 004b831a: mov eax, 9 */ r_eax = 0x9u;
    /* 004b831f: jmp 0x4b833f */ goto L_004b833f;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8321(void)
{
    FN_ENTER(0x004b8321);
    goto L_004b8321;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8321); r_esp += 8; return;
L_004b8321:; BB(0x004b8321);
    /* 004b8321: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8323: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b8328u); f_00520bf4();
    /* 004b8328: fcomp dword ptr [0x906ca0] */ fx_compare(ST(0), R_F32((u32)(0x906ca0u))); FPOP();
    /* 004b832e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8330: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8331: jbe 0x4b833a */ if ((fC||fZ)) goto L_004b833a;
L_004b8333:; BB(0x004b8333);
    /* 004b8333: mov eax, 8 */ r_eax = 0x8u;
    /* 004b8338: jmp 0x4b833f */ goto L_004b833f;
L_004b833a:; BB(0x004b833a);
    /* 004b833a: mov eax, 6 */ r_eax = 0x6u;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b833f(void)
{
    FN_ENTER(0x004b833f);
    goto L_004b833f;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b833f); r_esp += 8; return;
L_004b833f:; BB(0x004b833f);
    /* 004b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8342: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8347u); f_004b5150();
    /* 004b8347: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b8351: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b83a4(void)
{
    FN_ENTER(0x004b83a4);
    goto L_004b83a4;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b83a4); r_esp += 8; return;
L_004b8382:; BB(0x004b8382);
    /* 004b8382: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b8385: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b838b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b838f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b8392: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b8395: ja 0x4b84a9 */ if ((!fC&&!fZ)) goto L_004b84a9;
L_004b839b:; BB(0x004b839b);
    /* 004b839b: mov ecx, dword ptr [ecx*4 + 0x905a60] */ r_ecx = R32((u32)(r_ecx*4+0x905a60u));
    /* 004b83a2: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b83a4:; BB(0x004b83a4);
    /* 004b83a4: mov eax, 1 */ r_eax = 0x1u;
    /* 004b83a9: jmp 0x4b8382 */ goto L_004b8382;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b83ab(void)
{
    FN_ENTER(0x004b83ab);
    goto L_004b83ab;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b83ab); r_esp += 8; return;
L_004b83ab:; BB(0x004b83ab);
    /* 004b83ab: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b83b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b83b3: jne 0x4b83bf */ if (!fZ) goto L_004b83bf;
L_004b83b5:; BB(0x004b83b5);
    /* 004b83b5: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b83ba: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b83bf:; BB(0x004b83bf);
    /* 004b83bf: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b83c4: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b83c9(void)
{
    FN_ENTER(0x004b83c9);
    goto L_004b83c9;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b83c9); r_esp += 8; return;
L_004b83c9:; BB(0x004b83c9);
    /* 004b83c9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b83cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b83d1: jne 0x4b83dd */ if (!fZ) goto L_004b83dd;
L_004b83d3:; BB(0x004b83d3);
    /* 004b83d3: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b83d8: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b83dd:; BB(0x004b83dd);
    /* 004b83dd: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b83e2: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b83e7(void)
{
    FN_ENTER(0x004b83e7);
    goto L_004b83e7;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b83e7); r_esp += 8; return;
L_004b83e7:; BB(0x004b83e7);
    /* 004b83e7: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b83ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b83ef: jne 0x4b83fb */ if (!fZ) goto L_004b83fb;
L_004b83f1:; BB(0x004b83f1);
    /* 004b83f1: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b83f6: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b83fb:; BB(0x004b83fb);
    /* 004b83fb: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b8400: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8405(void)
{
    FN_ENTER(0x004b8405);
    goto L_004b8405;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8405); r_esp += 8; return;
L_004b8405:; BB(0x004b8405);
    /* 004b8405: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b840b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b840d: jne 0x4b8419 */ if (!fZ) goto L_004b8419;
L_004b840f:; BB(0x004b840f);
    /* 004b840f: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b8414: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b8419:; BB(0x004b8419);
    /* 004b8419: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b841e: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8423(void)
{
    FN_ENTER(0x004b8423);
    goto L_004b8423;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8423); r_esp += 8; return;
L_004b8423:; BB(0x004b8423);
    /* 004b8423: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b842b: jne 0x4b8434 */ if (!fZ) goto L_004b8434;
L_004b842d:; BB(0x004b842d);
    /* 004b842d: mov eax, 4 */ r_eax = 0x4u;
    /* 004b8432: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b8434:; BB(0x004b8434);
    /* 004b8434: mov eax, 0xa */ r_eax = 0xau;
    /* 004b8439: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b843b(void)
{
    FN_ENTER(0x004b843b);
    goto L_004b843b;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b843b); r_esp += 8; return;
L_004b843b:; BB(0x004b843b);
    /* 004b843b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8443: jne 0x4b844c */ if (!fZ) goto L_004b844c;
L_004b8445:; BB(0x004b8445);
    /* 004b8445: mov eax, 3 */ r_eax = 0x3u;
    /* 004b844a: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b844c:; BB(0x004b844c);
    /* 004b844c: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b8451: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8453(void)
{
    FN_ENTER(0x004b8453);
    goto L_004b8453;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8453); r_esp += 8; return;
L_004b8453:; BB(0x004b8453);
    /* 004b8453: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8455: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b845au); f_00520bf4();
    /* 004b845a: fcomp dword ptr [0x906ca0] */ fx_compare(ST(0), R_F32((u32)(0x906ca0u))); FPOP();
    /* 004b8460: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8462: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8463: jbe 0x4b846c */ if ((fC||fZ)) goto L_004b846c;
L_004b8465:; BB(0x004b8465);
    /* 004b8465: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b846a: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b846c:; BB(0x004b846c);
    /* 004b846c: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b8471: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8473(void)
{
    FN_ENTER(0x004b8473);
    goto L_004b8473;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b8473); r_esp += 8; return;
L_004b8473:; BB(0x004b8473);
    /* 004b8473: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b847b: jne 0x4b8484 */ if (!fZ) goto L_004b8484;
L_004b847d:; BB(0x004b847d);
    /* 004b847d: mov eax, 5 */ r_eax = 0x5u;
    /* 004b8482: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b8484:; BB(0x004b8484);
    /* 004b8484: mov eax, 9 */ r_eax = 0x9u;
    /* 004b8489: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b848b(void)
{
    FN_ENTER(0x004b848b);
    goto L_004b848b;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b848b); r_esp += 8; return;
L_004b848b:; BB(0x004b848b);
    /* 004b848b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b848d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b8492u); f_00520bf4();
    /* 004b8492: fcomp dword ptr [0x906ca0] */ fx_compare(ST(0), R_F32((u32)(0x906ca0u))); FPOP();
    /* 004b8498: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b849a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b849b: jbe 0x4b84a4 */ if ((fC||fZ)) goto L_004b84a4;
L_004b849d:; BB(0x004b849d);
    /* 004b849d: mov eax, 8 */ r_eax = 0x8u;
    /* 004b84a2: jmp 0x4b84a9 */ goto L_004b84a9;
L_004b84a4:; BB(0x004b84a4);
    /* 004b84a4: mov eax, 6 */ r_eax = 0x6u;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b84a9(void)
{
    FN_ENTER(0x004b84a9);
    goto L_004b84a9;
L_004b81f9:; BB(0x004b81f9);
    /* 004b81f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b81fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b81fd: ret 4 */ FN_RET(0x004b84a9); r_esp += 8; return;
L_004b84a9:; BB(0x004b84a9);
    /* 004b84a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b84aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b84ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b84b1u); f_004b5150();
    /* 004b84b1: jmp 0x4b81f9 */ goto L_004b81f9;
}

void f_004b8584(void) /* sub_4B8584 */
{
    FN_ENTER(0x004b8584);
    /* 004b8584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b8585: mov ebp, esp */ r_ebp = r_esp;
    /* 004b8587: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8589: push 0x8d0e50 */ { u32 v = 0x8d0e50u; r_esp -= 4; W32(r_esp, v); }
    /* 004b858e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b8594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8595: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b859c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b859f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b85a2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004b85a5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004b85a8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004b85ab: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b85b1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b85b4: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85b9: jne 0x4b8946 */ if (!fZ) goto L_004b8946;
L_004b85bf:; BB(0x004b85bf);
    /* 004b85bf: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85c4: je 0x4b8619 */ if (fZ) goto L_004b8619;
L_004b85c6:; BB(0x004b85c6);
    /* 004b85c6: mov edx, ecx */ r_edx = r_ecx;
    /* 004b85c8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 004b85cf: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b85d4: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b85d7: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b85d9: mov dword ptr [edx + 0x630], eax */ W32((u32)(r_edx+0x630u), r_eax);
    /* 004b85df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b85e4u); f_005caba4();
    /* 004b85e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b85e5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004b85e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b85ea: je 0x4b8612 */ if (fZ) goto L_004b8612;
L_004b85ec:; BB(0x004b85ec);
    /* 004b85ec: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 004b85f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b85fa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b85fd: push dword ptr [edx + 0x6dc] */ { u32 v = R32((u32)(r_edx+0x6dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8603: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8604: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8606: call 0x4ad2d4 */ r_esp -= 4; W32(r_esp, 0x4b860bu); f_004ad2d4();
    /* 004b860b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004b8612:; BB(0x004b8612);
    /* 004b8612: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004b8619:; BB(0x004b8619);
    /* 004b8619: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b861eu); f_00694cc8();
    /* 004b861e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8620: je 0x4b8665 */ if (fZ) goto L_004b8665;
L_004b8622:; BB(0x004b8622);
    /* 004b8622: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8625: mov eax, dword ptr [eax + 0x6b4] */ r_eax = R32((u32)(r_eax+0x6b4u));
    /* 004b862b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b862d: jne 0x4b866e */ if (!fZ) goto L_004b866e;
L_004b862f:; BB(0x004b862f);
    /* 004b862f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8632: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b8637u); f_00520db0();
    /* 004b8637: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8639: je 0x4b8650 */ if (fZ) goto L_004b8650;
L_004b863b:; BB(0x004b863b);
    /* 004b863b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b863e: mov dword ptr [eax + 0x6c0], 0 */ W32((u32)(r_eax+0x6c0u), 0x0u);
    /* 004b8648: mov eax, dword ptr [eax + 0x6b4] */ r_eax = R32((u32)(r_eax+0x6b4u));
    /* 004b864e: jmp 0x4b866e */ goto L_004b866e;
L_004b8650:; BB(0x004b8650);
    /* 004b8650: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8653: mov dword ptr [eax + 0x6c0], 1 */ W32((u32)(r_eax+0x6c0u), 0x1u);
    /* 004b865d: mov eax, dword ptr [eax + 0x6b4] */ r_eax = R32((u32)(r_eax+0x6b4u));
    /* 004b8663: jmp 0x4b866e */ goto L_004b866e;
L_004b8665:; BB(0x004b8665);
    /* 004b8665: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8668: mov eax, dword ptr [eax + 0x6b4] */ r_eax = R32((u32)(r_eax+0x6b4u));
L_004b866e:; BB(0x004b866e);
    /* 004b866e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8670: je 0x4b8837 */ if (fZ) goto L_004b8837;
L_004b8676:; BB(0x004b8676);
    /* 004b8676: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8679: mov edx, dword ptr [eax + 0x62c] */ r_edx = R32((u32)(r_eax+0x62cu));
    /* 004b867f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004b8682: test dword ptr [0xa0f688], ecx */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8688: je 0x4b8837 */ if (fZ) goto L_004b8837;
L_004b868e:; BB(0x004b868e);
    /* 004b868e: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b8694: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8697: je 0x4b86ca */ if (fZ) goto L_004b86ca;
L_004b8699:; BB(0x004b8699);
    /* 004b8699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b869b: jne 0x4b86af */ if (!fZ) goto L_004b86af;
L_004b869d:; BB(0x004b869d);
    /* 004b869d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b86a0: mov dword ptr [eax + 0x6c0], 2 */ W32((u32)(r_eax+0x6c0u), 0x2u);
    /* 004b86aa: jmp 0x4b8837 */ goto L_004b8837;
L_004b86af:; BB(0x004b86af);
    /* 004b86af: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b86b2: jne 0x4b8837 */ if (!fZ) goto L_004b8837;
L_004b86b8:; BB(0x004b86b8);
    /* 004b86b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b86bb: mov dword ptr [eax + 0x6c0], 1 */ W32((u32)(r_eax+0x6c0u), 0x1u);
    /* 004b86c5: jmp 0x4b8837 */ goto L_004b8837;
L_004b86ca:; BB(0x004b86ca);
    /* 004b86ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b86cd: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b86d3: mov ebx, dword ptr [eax + 0x6bc] */ r_ebx = R32((u32)(r_eax+0x6bcu));
    /* 004b86d9: mov dword ptr [eax + 0x6c0], 0 */ W32((u32)(r_eax+0x6c0u), 0x0u);
    /* 004b86e3: mov eax, dword ptr [edx*4 + 0x9abc68] */ r_eax = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b86ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b86ed: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b86f0: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b86f6: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b86fa: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b86fd: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b8700: ja 0x4b882e */ if ((!fC&&!fZ)) goto L_004b882e;
L_004b8706:; BB(0x004b8706);
    /* 004b8706: mov edx, dword ptr [edx*4 + 0x905bc0] */ r_edx = R32((u32)(r_edx*4+0x905bc0u));
    /* 004b870d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
L_004b8837:; BB(0x004b8837);
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b8946:; BB(0x004b8946);
    /* 004b8946: mov eax, ecx */ r_eax = r_ecx;
    /* 004b8948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8949: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x4b894eu); f_008113e4();
    /* 004b894e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b894f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8952: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b8956: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b895b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b895f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8962: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8969: mov esp, ebp */ r_esp = r_ebp;
    /* 004b896b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b896c: ret  */ FN_RET(0x004b8584); r_esp += 4; return;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b8584); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b870f(void)
{
    FN_ENTER(0x004b870f);
    goto L_004b870f;
L_004b86ea:; BB(0x004b86ea);
    /* 004b86ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b86ed: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b86f0: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b86f6: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b86fa: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b86fd: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b8700: ja 0x4b882e */ if ((!fC&&!fZ)) goto L_004b882e;
L_004b8706:; BB(0x004b8706);
    /* 004b8706: mov edx, dword ptr [edx*4 + 0x905bc0] */ r_edx = R32((u32)(r_edx*4+0x905bc0u));
    /* 004b870d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b870f:; BB(0x004b870f);
    /* 004b870f: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004b8714: jmp 0x4b86ea */ goto L_004b86ea;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b870f); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b8716(void)
{
    FN_ENTER(0x004b8716);
    /* 004b8716: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8719: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b871f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8721: jne 0x4b872d */ if (!fZ) goto L_004b872d;
L_004b8723:; BB(0x004b8723);
    /* 004b8723: mov ecx, 0x15 */ r_ecx = 0x15u;
    /* 004b8728: jmp 0x4b882e */ goto L_004b882e;
L_004b872d:; BB(0x004b872d);
    /* 004b872d: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 004b8732: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b8716); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b8737(void)
{
    FN_ENTER(0x004b8737);
    /* 004b8737: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b873a: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b8740: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8742: jne 0x4b874e */ if (!fZ) goto L_004b874e;
L_004b8744:; BB(0x004b8744);
    /* 004b8744: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 004b8749: jmp 0x4b882e */ goto L_004b882e;
L_004b874e:; BB(0x004b874e);
    /* 004b874e: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 004b8753: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b8737); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b8758(void)
{
    FN_ENTER(0x004b8758);
    /* 004b8758: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b875b: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b8761: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8763: jne 0x4b876f */ if (!fZ) goto L_004b876f;
L_004b8765:; BB(0x004b8765);
    /* 004b8765: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 004b876a: jmp 0x4b882e */ goto L_004b882e;
L_004b876f:; BB(0x004b876f);
    /* 004b876f: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 004b8774: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b8758); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b8779(void)
{
    FN_ENTER(0x004b8779);
    /* 004b8779: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b877c: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b8782: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8784: jne 0x4b8790 */ if (!fZ) goto L_004b8790;
L_004b8786:; BB(0x004b8786);
    /* 004b8786: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 004b878b: jmp 0x4b882e */ goto L_004b882e;
L_004b8790:; BB(0x004b8790);
    /* 004b8790: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 004b8795: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b8779); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b879a(void)
{
    FN_ENTER(0x004b879a);
    /* 004b879a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b879d: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b87a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b87a5: jne 0x4b87b1 */ if (!fZ) goto L_004b87b1;
L_004b87a7:; BB(0x004b87a7);
    /* 004b87a7: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004b87ac: jmp 0x4b882e */ goto L_004b882e;
L_004b87b1:; BB(0x004b87b1);
    /* 004b87b1: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004b87b6: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b879a); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b87b8(void)
{
    FN_ENTER(0x004b87b8);
    /* 004b87b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b87bb: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b87c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b87c3: jne 0x4b87cc */ if (!fZ) goto L_004b87cc;
L_004b87c5:; BB(0x004b87c5);
    /* 004b87c5: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004b87ca: jmp 0x4b882e */ goto L_004b882e;
L_004b87cc:; BB(0x004b87cc);
    /* 004b87cc: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 004b87d1: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b87b8); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b87d3(void)
{
    FN_ENTER(0x004b87d3);
    /* 004b87d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b87d6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b87dbu); f_00520bf4();
    /* 004b87db: fcomp dword ptr [0x906c98] */ fx_compare(ST(0), R_F32((u32)(0x906c98u))); FPOP();
    /* 004b87e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b87e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b87e4: jbe 0x4b87ed */ if ((fC||fZ)) goto L_004b87ed;
L_004b87e6:; BB(0x004b87e6);
    /* 004b87e6: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 004b87eb: jmp 0x4b882e */ goto L_004b882e;
L_004b87ed:; BB(0x004b87ed);
    /* 004b87ed: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 004b87f2: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b87d3); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b87f4(void)
{
    FN_ENTER(0x004b87f4);
    /* 004b87f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b87f7: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b87fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b87ff: jne 0x4b8808 */ if (!fZ) goto L_004b8808;
L_004b8801:; BB(0x004b8801);
    /* 004b8801: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004b8806: jmp 0x4b882e */ goto L_004b882e;
L_004b8808:; BB(0x004b8808);
    /* 004b8808: mov ecx, 9 */ r_ecx = 0x9u;
    /* 004b880d: jmp 0x4b882e */ goto L_004b882e;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b87f4); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b880f(void)
{
    FN_ENTER(0x004b880f);
    /* 004b880f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8812: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b8817u); f_00520bf4();
    /* 004b8817: fcomp dword ptr [0x906c98] */ fx_compare(ST(0), R_F32((u32)(0x906c98u))); FPOP();
    /* 004b881d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b881f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8820: jbe 0x4b8829 */ if ((fC||fZ)) goto L_004b8829;
L_004b8822:; BB(0x004b8822);
    /* 004b8822: mov ecx, 8 */ r_ecx = 0x8u;
    /* 004b8827: jmp 0x4b882e */ goto L_004b882e;
L_004b8829:; BB(0x004b8829);
    /* 004b8829: mov ecx, 6 */ r_ecx = 0x6u;
L_004b882e:; BB(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b880f); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b882e(void)
{
    FN_ENTER(0x004b882e);
    /* 004b882e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b882f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8832: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b8837u); f_004b5150();
    /* 004b8837: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4b883cu); f_00520db8();
    /* 004b883c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b883f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b8844: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x4b884au); call_ind(t); }
    /* 004b884a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b884d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b884f: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x4b8855u); call_ind(t); }
    /* 004b8855: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b885a: jne 0x4b88ff */ if (!fZ) goto L_004b88ff;
L_004b8860:; BB(0x004b8860);
    /* 004b8860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8863: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 004b886a: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b886d: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8873:; BB(0x004b8873);
    /* 004b8873: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8876: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b887c:; BB(0x004b887c);
    /* 004b887c: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b887f: je 0x4b89cb */ if (fZ) goto L_004b89cb;
L_004b8885:; BB(0x004b8885);
    /* 004b8885: mov edx, eax */ r_edx = r_eax;
    /* 004b8887: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b888a: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b888f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_004b8892:; BB(0x004b8892);
    /* 004b8892: mov eax, edx */ r_eax = r_edx;
    /* 004b8894: mov eax, dword ptr [eax + 0x6c0] */ r_eax = R32((u32)(r_eax+0x6c0u));
    /* 004b889a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b889d: je 0x4b8998 */ if (fZ) goto L_004b8998;
L_004b88a3:; BB(0x004b88a3);
    /* 004b88a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88a6: je 0x4b896d */ if (fZ) goto L_004b896d;
L_004b88ac:; BB(0x004b88ac);
    /* 004b88ac: mov ecx, edx */ r_ecx = r_edx;
    /* 004b88ae: call 0x4b8dec */ r_esp -= 4; W32(r_esp, 0x4b88b3u); f_004b8dec();
L_004b88b3:; BB(0x004b88b3);
    /* 004b88b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88b8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b88beu); call_ind(t); }
    /* 004b88be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b88c0: je 0x4b88cd */ if (fZ) goto L_004b88cd;
L_004b88c2:; BB(0x004b88c2);
    /* 004b88c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b88c7: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b88cdu); call_ind(t); }
L_004b88cd:; BB(0x004b88cd);
    /* 004b88cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88dc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88e2u); call_ind(t); }
    /* 004b88e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b88e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b88e9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b88f1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b88f7u); call_ind(t); }
L_004b88f7:; BB(0x004b88f7);
    /* 004b88f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b88fa: call 0x4b903c */ r_esp -= 4; W32(r_esp, 0x4b88ffu); f_004b903c();
L_004b88ff:; BB(0x004b88ff);
    /* 004b88ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8902: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4b8907u); f_0051f604();
    /* 004b8907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b890a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b890c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4b8912u); call_ind(t); }
    /* 004b8912: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8915: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4b891au); f_00435484();
    /* 004b891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b891d: call 0x4b9198 */ r_esp -= 4; W32(r_esp, 0x4b8922u); f_004b9198();
    /* 004b8922: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b8924:; BB(0x004b8924);
    /* 004b8924: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8927: mov edx, dword ptr [eax + esi*4 + 0x790] */ r_edx = R32((u32)(r_eax+r_esi*4+0x790u));
    /* 004b892e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004b8931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8933: je 0x4b8d71 */ if (fZ) goto L_004b8d71;
L_004b8939:; BB(0x004b8939);
    /* 004b8939: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b893c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b893f: jl 0x4b8924 */ if ((fS!=fO)) goto L_004b8924;
L_004b8941:; BB(0x004b8941);
    /* 004b8941: jmp 0x4b89dd */ goto L_004b89dd;
L_004b896d:; BB(0x004b896d);
    /* 004b896d: mov ecx, edx */ r_ecx = r_edx;
    /* 004b896f: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8974u); f_004b8e1c();
    /* 004b8974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8976: je 0x4b8985 */ if (fZ) goto L_004b8985;
L_004b8978:; BB(0x004b8978);
    /* 004b8978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b897b: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8980u); f_004b8e3c();
    /* 004b8980: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8985:; BB(0x004b8985);
    /* 004b8985: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8988: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b898a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b898b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b898d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8993u); call_ind(t); }
    /* 004b8993: jmp 0x4b88b3 */ goto L_004b88b3;
L_004b8998:; BB(0x004b8998);
    /* 004b8998: mov ecx, edx */ r_ecx = r_edx;
    /* 004b899a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b899c: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4b89a2u); call_ind(t); }
    /* 004b89a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89a4: je 0x4b89b1 */ if (fZ) goto L_004b89b1;
L_004b89a6:; BB(0x004b89a6);
    /* 004b89a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b89ab: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4b89b1u); call_ind(t); }
L_004b89b1:; BB(0x004b89b1);
    /* 004b89b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b89b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b89b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b89c0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b89c6u); call_ind(t); }
    /* 004b89c6: jmp 0x4b88f7 */ goto L_004b88f7;
L_004b89cb:; BB(0x004b89cb);
    /* 004b89cb: mov edx, eax */ r_edx = r_eax;
    /* 004b89cd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004b89d0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b89d5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004b89d8: jmp 0x4b8892 */ goto L_004b8892;
L_004b89dd:; BB(0x004b89dd);
    /* 004b89dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89e0: mov eax, dword ptr [eax + 0x7a8] */ r_eax = R32((u32)(r_eax+0x7a8u));
    /* 004b89e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b89e8: jne 0x4b8ad7 */ if (!fZ) goto L_004b8ad7;
L_004b89ee:; BB(0x004b89ee);
    /* 004b89ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b89f0:; BB(0x004b89f0);
    /* 004b89f0: mov eax, dword ptr [ebx*4 + 0x9abc5c] */ r_eax = R32((u32)(r_ebx*4+0x9abc5cu));
    /* 004b89f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b89fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b89fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004b8a01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8a03: fld dword ptr [esi + edx + 0x53c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x53cu)));
    /* 004b8a0a: fsub dword ptr [0x906bb0] */ ST(0) = ST(0) - R_F32((u32)(0x906bb0u));
    /* 004b8a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b8a14: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b8a19u); f_0082e900();
    /* 004b8a19: fld dword ptr [ebx*4 + 0x9abc50] */ FPUSH(R_F32((u32)(r_ebx*4+0x9abc50u)));
    /* 004b8a20: fld dword ptr [0x906c8c] */ FPUSH(R_F32((u32)(0x906c8cu)));
    /* 004b8a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8a28: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b8a2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8a2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004b8a2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8a30: jbe 0x4b8aa3 */ if ((fC||fZ)) goto L_004b8aa3;
L_004b8a32:; BB(0x004b8a32);
    /* 004b8a32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a35: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a38: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004b8a3a: fld dword ptr [esi + eax + 0x538] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x538u)));
    /* 004b8a41: mov edx, dword ptr [esi + eax + 0x538] */ r_edx = R32((u32)(r_esi+r_eax+0x538u));
    /* 004b8a48: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8a51: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 004b8a54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b8a56: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004b8a59: mov edi, dword ptr [esi + eax + 0x53c] */ r_edi = R32((u32)(r_esi+r_eax+0x53cu));
    /* 004b8a60: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b8a63: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a67: mov esi, dword ptr [esi + eax + 0x540] */ r_esi = R32((u32)(r_esi+r_eax+0x540u));
    /* 004b8a6e: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a71: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8a78: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8a7b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8a7e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8a83u); f_00508db8();
    /* 004b8a83: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004b8a86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004b8a88: fsubr dword ptr [ebp - 0x40] */ ST(0) = R_F32((u32)(r_ebp+0xffffffc0u)) - ST(0);
    /* 004b8a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8a8e: mov ecx, dword ptr [edx + esi*4 + 0x794] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x794u));
    /* 004b8a95: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8a98: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8a9c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8aa1u); f_00508db8();
    /* 004b8aa1: jmp 0x4b8ac6 */ goto L_004b8ac6;
L_004b8aa3:; BB(0x004b8aa3);
    /* 004b8aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b8aa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aa8: mov ecx, dword ptr [eax + ebx*8 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x790u));
    /* 004b8aaf: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004b8ab2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ab7u); f_00508f48();
    /* 004b8ab7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8aba: mov ecx, dword ptr [eax + esi*4 + 0x794] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 004b8ac1: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ac6u); f_00508f48();
L_004b8ac6:; BB(0x004b8ac6);
    /* 004b8ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ac9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8acc: jl 0x4b89f0 */ if ((fS!=fO)) goto L_004b89f0;
L_004b8ad2:; BB(0x004b8ad2);
    /* 004b8ad2: jmp 0x4b8b6e */ goto L_004b8b6e;
L_004b8ad7:; BB(0x004b8ad7);
    /* 004b8ad7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ada: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 004b8add: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ade: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8ae2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004b8ae5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8ae7: fld dword ptr [ebx + ecx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x538u)));
    /* 004b8aee: fadd dword ptr [0x906c94] */ ST(0) = ST(0) + R_F32((u32)(0x906c94u));
    /* 004b8af4: mov eax, dword ptr [ebx + ecx + 0x538] */ r_eax = R32((u32)(r_ebx+r_ecx+0x538u));
    /* 004b8afb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b8afe: mov edx, dword ptr [ebx + ecx + 0x53c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x53cu));
    /* 004b8b05: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b8b08: mov esi, dword ptr [ebx + ecx + 0x540] */ r_esi = R32((u32)(r_ebx+r_ecx+0x540u));
    /* 004b8b0f: mov ecx, dword ptr [ecx + 0x790] */ r_ecx = R32((u32)(r_ecx+0x790u));
    /* 004b8b15: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 004b8b1b: mov dword ptr [ebp - 0x3c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffc4u), 0xc0a00000u);
    /* 004b8b22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b27u); f_00508db8();
    /* 004b8b27: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004b8b2a: fsub dword ptr [0x906c90] */ ST(0) = ST(0) - R_F32((u32)(0x906c90u));
    /* 004b8b30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b33: mov ecx, dword ptr [edx + 0x794] */ r_ecx = R32((u32)(r_edx+0x794u));
    /* 004b8b39: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004b8b3c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004b8b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8b40: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b8b45u); f_00508db8();
    /* 004b8b45: mov ebx, 2 */ r_ebx = 0x2u;
L_004b8b4a:; BB(0x004b8b4a);
    /* 004b8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b4d: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8b54: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8b59u); f_00508f48();
    /* 004b8b59: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b5c: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b5f: jl 0x4b8b4a */ if ((fS!=fO)) goto L_004b8b4a;
L_004b8b61:; BB(0x004b8b61);
    /* 004b8b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b64: mov dword ptr [eax + 0x7a8], 0 */ W32((u32)(r_eax+0x7a8u), 0x0u);
L_004b8b6e:; BB(0x004b8b6e);
    /* 004b8b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8b70:; BB(0x004b8b70);
    /* 004b8b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b73: push dword ptr [eax + ebx*4 + 0x790] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x790u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8b7a: call 0x4be78c */ r_esp -= 4; W32(r_esp, 0x4b8b7fu); f_004be78c();
    /* 004b8b7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b8b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8b83: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8b86: jl 0x4b8b70 */ if ((fS!=fO)) goto L_004b8b70;
L_004b8b88:; BB(0x004b8b88);
    /* 004b8b88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b8b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8b8d: jne 0x4b8b9d */ if (!fZ) goto L_004b8b9d;
L_004b8b8f:; BB(0x004b8b8f);
    /* 004b8b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8b92: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004b8b98: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4b8b9du); f_00817574();
L_004b8b9d:; BB(0x004b8b9d);
    /* 004b8b9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8ba0: mov edx, dword ptr [eax + 0x7b4] */ r_edx = R32((u32)(r_eax+0x7b4u));
    /* 004b8ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8ba8: je 0x4b8d5a */ if (fZ) goto L_004b8d5a;
L_004b8bae:; BB(0x004b8bae);
    /* 004b8bae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b8bb3u); f_0082fa9c();
    /* 004b8bb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b8bb8u); f_0082d7b0();
    /* 004b8bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b8bba: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4b8bbfu); f_00830cd8();
    /* 004b8bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bc2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004b8bc5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bcau); f_0082d838();
    /* 004b8bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bcd: lea ecx, [eax + 0x6f4] */ r_ecx = (u32)(r_eax+0x6f4u);
    /* 004b8bd3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b8bd8u); f_0082d838();
    /* 004b8bd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bdb: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 004b8bde: mov edx, 1 */ r_edx = 0x1u;
    /* 004b8be3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b8be8u); f_00830df8();
    /* 004b8be8: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b8bed: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b8bf2u); f_00831290();
    /* 004b8bf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bf5: call 0x4b91d0 */ r_esp -= 4; W32(r_esp, 0x4b8bfau); f_004b91d0();
    /* 004b8bfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8bfd: push dword ptr [eax + 0xc0] */ { u32 v = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c03: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b8c09: mov ecx, dword ptr [eax + 0x7b4] */ r_ecx = R32((u32)(r_eax+0x7b4u));
    /* 004b8c0f: call 0x7ab3b4 */ r_esp -= 4; W32(r_esp, 0x4b8c14u); f_007ab3b4();
    /* 004b8c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b8c19u); f_0082da80();
    /* 004b8c19: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b8c1eu); f_0082faac();
    /* 004b8c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8c21: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8c24: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004b8c2a: mov ebx, dword ptr [edi + 0x3f8] */ r_ebx = R32((u32)(r_edi+0x3f8u));
    /* 004b8c30: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 004b8c36: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 004b8c3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b8c3f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004b8c42: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004b8c45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8c4au); f_0082ebac();
    /* 004b8c4a: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8c50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8c53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8c55: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8c58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8c5a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8c5d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8c5f: mov esi, dword ptr [ecx + 0x460] */ r_esi = R32((u32)(r_ecx+0x460u));
    /* 004b8c65: mov edi, dword ptr [ecx + 0x464] */ r_edi = R32((u32)(r_ecx+0x464u));
    /* 004b8c6b: mov edx, dword ptr [ecx + 0x468] */ r_edx = R32((u32)(r_ecx+0x468u));
    /* 004b8c71: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8c73: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8c78: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8c7b: fstp dword ptr [ecx + 0x538] */ W_F32((u32)(r_ecx+0x538u), ST(0)); FPOP();
    /* 004b8c81: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8c84: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 004b8c8a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8c8d: mov dword ptr [ecx + 0x540], ebx */ W32((u32)(r_ecx+0x540u), r_ebx);
    /* 004b8c93: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004b8c96: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b8c99: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8c9c: lea edx, [ecx + 0x478] */ r_edx = (u32)(r_ecx+0x478u);
    /* 004b8ca2: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ca5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8caau); f_0082ebac();
    /* 004b8caa: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8cb0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8cb5: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8cb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8cba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8cbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cc0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8cc2: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8cc7: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8cca: fstp dword ptr [ecx + 0x544] */ W_F32((u32)(r_ecx+0x544u), ST(0)); FPOP();
    /* 004b8cd0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8cd3: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 004b8cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8cdc: mov dword ptr [ecx + 0x54c], edx */ W32((u32)(r_ecx+0x54cu), r_edx);
    /* 004b8ce2: lea esi, [ecx + 0x550] */ r_esi = (u32)(r_ecx+0x550u);
    /* 004b8ce8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b8cea:; BB(0x004b8cea);
    /* 004b8cea: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004b8ced: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004b8cf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b8cf2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004b8cf5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b8cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8cfa: mov edx, dword ptr [edi + eax + 0x478] */ r_edx = R32((u32)(r_edi+r_eax+0x478u));
    /* 004b8d01: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004b8d04: mov edx, dword ptr [edi + eax + 0x47c] */ r_edx = R32((u32)(r_edi+r_eax+0x47cu));
    /* 004b8d0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004b8d0e: mov edx, dword ptr [edi + eax + 0x480] */ r_edx = R32((u32)(r_edi+r_eax+0x480u));
    /* 004b8d15: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004b8d18: lea edx, [eax + edi + 0x484] */ r_edx = (u32)(r_eax+r_edi+0x484u);
    /* 004b8d1f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b8d24u); f_0082ebac();
    /* 004b8d24: fld dword ptr [0x906c88] */ FPUSH(R_F32((u32)(0x906c88u)));
    /* 004b8d2a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b8d2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b8d2f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004b8d32: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b8d34: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004b8d37: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b8d39: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004b8d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b8d3e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b8d41: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004b8d43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8d46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b8d49: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004b8d4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b8d4f: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004b8d52: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b8d55: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b8d58: jl 0x4b8cea */ if ((fS!=fO)) goto L_004b8cea;
L_004b8d5a:; BB(0x004b8d5a);
    /* 004b8d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b8d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b8d60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b8d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b8d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b8d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b8d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b8d70: ret  */ FN_RET(0x004b882e); r_esp += 4; return;
L_004b8d71:; BB(0x004b8d71);
    /* 004b8d71: mov edx, eax */ r_edx = r_eax;
    /* 004b8d73: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b8d76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b8d7a: lea edi, [edx + 0x538] */ r_edi = (u32)(r_edx+0x538u);
    /* 004b8d80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004b8d83: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b8d86: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b8d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d8b: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8d92: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4b8d97u); f_0050a664();
    /* 004b8d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b8d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8d9c: je 0x4b8dc5 */ if (fZ) goto L_004b8dc5;
L_004b8d9e:; BB(0x004b8d9e);
    /* 004b8d9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8da1: mov dword ptr [edx + ebx*2 + 0x790], eax */ W32((u32)(r_edx+r_ebx*2+0x790u), r_eax);
    /* 004b8da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8daa: mov ecx, eax */ r_ecx = r_eax;
    /* 004b8dac: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4b8db1u); f_00508efc();
    /* 004b8db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8db4: mov ecx, dword ptr [eax + ebx*2 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x790u));
    /* 004b8dbb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8dc0u); f_00508f48();
    /* 004b8dc0: jmp 0x4b8939 */ goto L_004b8939;
L_004b8dc5:; BB(0x004b8dc5);
    /* 004b8dc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8dc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8dc9: jle 0x4b8b88 */ if ((fZ||fS!=fO)) goto L_004b8b88;
L_004b8dcf:; BB(0x004b8dcf);
    /* 004b8dcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b8dd2: mov ecx, dword ptr [eax + ebx*4 + 0x790] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x790u));
    /* 004b8dd9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b8ddeu); f_00508f48();
    /* 004b8dde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b8de1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b8de3: jl 0x4b8dcf */ if ((fS!=fO)) goto L_004b8dcf;
L_004b8de5:; BB(0x004b8de5);
    /* 004b8de5: jmp 0x4b8b88 */ goto L_004b8b88;
}

void f_004b8dec(void) /* sub_4B8DEC */
{
    FN_ENTER(0x004b8dec);
    /* 004b8dec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b8ded: mov edi, ecx */ r_edi = r_ecx;
    /* 004b8def: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8df1: call 0x4b8e1c */ r_esp -= 4; W32(r_esp, 0x4b8df6u); f_004b8e1c();
    /* 004b8df6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8df8: je 0x4b8e03 */ if (fZ) goto L_004b8e03;
L_004b8dfa:; BB(0x004b8dfa);
    /* 004b8dfa: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8dfc: call 0x4b8e3c */ r_esp -= 4; W32(r_esp, 0x4b8e01u); f_004b8e3c();
    /* 004b8e01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b8e02: ret  */ FN_RET(0x004b8dec); r_esp += 4; return;
L_004b8e03:; BB(0x004b8e03);
    /* 004b8e03: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e05: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004b8e07: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 004b8e0e: mov ecx, edi */ r_ecx = r_edi;
    /* 004b8e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e11: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8e17u); call_ind(t); }
    /* 004b8e17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b8e18: ret  */ FN_RET(0x004b8dec); r_esp += 4; return;
}

void f_004b8e1c(void) /* sub_4B8E1C */
{
    FN_ENTER(0x004b8e1c);
    /* 004b8e1c: mov eax, dword ptr [ecx + 0x704] */ r_eax = R32((u32)(r_ecx+0x704u));
    /* 004b8e22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b8e24: jle 0x4b8e29 */ if ((fZ||fS!=fO)) goto L_004b8e29;
L_004b8e26:; BB(0x004b8e26);
    /* 004b8e26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8e28: ret  */ FN_RET(0x004b8e1c); r_esp += 4; return;
L_004b8e29:; BB(0x004b8e29);
    /* 004b8e29: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b8e2f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b8e31: jne 0x4b8e26 */ if (!fZ) goto L_004b8e26;
L_004b8e33:; BB(0x004b8e33);
    /* 004b8e33: mov eax, 1 */ r_eax = 0x1u;
    /* 004b8e38: ret  */ FN_RET(0x004b8e1c); r_esp += 4; return;
}

void f_004b8e3c(void) /* sub_4B8E3C */
{
    FN_ENTER(0x004b8e3c);
    /* 004b8e3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e3d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b8e40: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b8e42: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004b8e49: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e4c: je 0x4b8eac */ if (fZ) goto L_004b8eac;
L_004b8e4e:; BB(0x004b8e4e);
    /* 004b8e4e: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e51: je 0x4b8eac */ if (fZ) goto L_004b8eac;
L_004b8e53:; BB(0x004b8e53);
    /* 004b8e53: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e56: je 0x4b8ef5 */ if (fZ) goto L_004b8ef5;
L_004b8e5c:; BB(0x004b8e5c);
    /* 004b8e5c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e5f: je 0x4b8ef5 */ if (fZ) goto L_004b8ef5;
L_004b8e65:; BB(0x004b8e65);
    /* 004b8e65: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e68: je 0x4b8eb1 */ if (fZ) goto L_004b8eb1;
L_004b8e6a:; BB(0x004b8e6a);
    /* 004b8e6a: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8e6d: je 0x4b8eb1 */ if (fZ) goto L_004b8eb1;
L_004b8e6f:; BB(0x004b8e6f);
    /* 004b8e6f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e71: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8e73: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b8e75: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8e77: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8e7du); call_ind(t); }
    /* 004b8e7d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b8e81: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b8e87: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b8e8b: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 004b8e90: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004b8e95: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b8e9a: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b8e9f: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004b8ea4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b8ea7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b8eacu); f_008003e0();
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8e3c); r_esp += 4; return;
L_004b8eb1:; BB(0x004b8eb1);
    /* 004b8eb1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b8eb3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b8eb5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b8eb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8eb9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b8ebfu); call_ind(t); }
    /* 004b8ebf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b8ec3: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b8ec9: mov byte ptr [esp + 8], 0xa9 */ W8((u32)(r_esp+0x8u), 0xa9u);
    /* 004b8ece: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004b8ed3: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 004b8ed8: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 004b8edd: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 004b8ee2: mov word ptr [esp + 0xe], bx */ W16((u32)(r_esp+0xeu), (u16)r_ebx);
    /* 004b8ee7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004b8eeb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b8ef0u); f_008003e0();
    /* 004b8ef0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8ef3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8ef4: ret  */ FN_RET(0x004b8e3c); r_esp += 4; return;
L_004b8ef5:; BB(0x004b8ef5);
    /* 004b8ef5: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b8efb: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b8f02: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b8f08: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b8f0b: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b8f11: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b8f15: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b8f18: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b8f1b: ja 0x4b902f */ if ((!fC&&!fZ)) goto L_004b902f;
L_004b8f21:; BB(0x004b8f21);
    /* 004b8f21: mov ecx, dword ptr [ecx*4 + 0x905c60] */ r_ecx = R32((u32)(r_ecx*4+0x905c60u));
    /* 004b8f28: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8f2a(void)
{
    FN_ENTER(0x004b8f2a);
    goto L_004b8f2a;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8f2a); r_esp += 4; return;
L_004b8f08:; BB(0x004b8f08);
    /* 004b8f08: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b8f0b: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b8f11: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b8f15: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b8f18: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b8f1b: ja 0x4b902f */ if ((!fC&&!fZ)) goto L_004b902f;
L_004b8f21:; BB(0x004b8f21);
    /* 004b8f21: mov ecx, dword ptr [ecx*4 + 0x905c60] */ r_ecx = R32((u32)(r_ecx*4+0x905c60u));
    /* 004b8f28: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b8f2a:; BB(0x004b8f2a);
    /* 004b8f2a: mov eax, 1 */ r_eax = 0x1u;
    /* 004b8f2f: jmp 0x4b8f08 */ goto L_004b8f08;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8f31(void)
{
    FN_ENTER(0x004b8f31);
    goto L_004b8f31;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8f31); r_esp += 4; return;
L_004b8f31:; BB(0x004b8f31);
    /* 004b8f31: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8f39: jne 0x4b8f45 */ if (!fZ) goto L_004b8f45;
L_004b8f3b:; BB(0x004b8f3b);
    /* 004b8f3b: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b8f40: jmp 0x4b902f */ goto L_004b902f;
L_004b8f45:; BB(0x004b8f45);
    /* 004b8f45: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b8f4a: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8f4f(void)
{
    FN_ENTER(0x004b8f4f);
    goto L_004b8f4f;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8f4f); r_esp += 4; return;
L_004b8f4f:; BB(0x004b8f4f);
    /* 004b8f4f: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8f57: jne 0x4b8f63 */ if (!fZ) goto L_004b8f63;
L_004b8f59:; BB(0x004b8f59);
    /* 004b8f59: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b8f5e: jmp 0x4b902f */ goto L_004b902f;
L_004b8f63:; BB(0x004b8f63);
    /* 004b8f63: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b8f68: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8f6d(void)
{
    FN_ENTER(0x004b8f6d);
    goto L_004b8f6d;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8f6d); r_esp += 4; return;
L_004b8f6d:; BB(0x004b8f6d);
    /* 004b8f6d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8f73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8f75: jne 0x4b8f81 */ if (!fZ) goto L_004b8f81;
L_004b8f77:; BB(0x004b8f77);
    /* 004b8f77: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b8f7c: jmp 0x4b902f */ goto L_004b902f;
L_004b8f81:; BB(0x004b8f81);
    /* 004b8f81: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b8f86: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8f8b(void)
{
    FN_ENTER(0x004b8f8b);
    goto L_004b8f8b;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8f8b); r_esp += 4; return;
L_004b8f8b:; BB(0x004b8f8b);
    /* 004b8f8b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8f91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8f93: jne 0x4b8f9f */ if (!fZ) goto L_004b8f9f;
L_004b8f95:; BB(0x004b8f95);
    /* 004b8f95: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b8f9a: jmp 0x4b902f */ goto L_004b902f;
L_004b8f9f:; BB(0x004b8f9f);
    /* 004b8f9f: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b8fa4: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8fa9(void)
{
    FN_ENTER(0x004b8fa9);
    goto L_004b8fa9;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8fa9); r_esp += 4; return;
L_004b8fa9:; BB(0x004b8fa9);
    /* 004b8fa9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8faf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8fb1: jne 0x4b8fba */ if (!fZ) goto L_004b8fba;
L_004b8fb3:; BB(0x004b8fb3);
    /* 004b8fb3: mov eax, 4 */ r_eax = 0x4u;
    /* 004b8fb8: jmp 0x4b902f */ goto L_004b902f;
L_004b8fba:; BB(0x004b8fba);
    /* 004b8fba: mov eax, 0xa */ r_eax = 0xau;
    /* 004b8fbf: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8fc1(void)
{
    FN_ENTER(0x004b8fc1);
    goto L_004b8fc1;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8fc1); r_esp += 4; return;
L_004b8fc1:; BB(0x004b8fc1);
    /* 004b8fc1: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8fc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b8fc9: jne 0x4b8fd2 */ if (!fZ) goto L_004b8fd2;
L_004b8fcb:; BB(0x004b8fcb);
    /* 004b8fcb: mov eax, 3 */ r_eax = 0x3u;
    /* 004b8fd0: jmp 0x4b902f */ goto L_004b902f;
L_004b8fd2:; BB(0x004b8fd2);
    /* 004b8fd2: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b8fd7: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8fd9(void)
{
    FN_ENTER(0x004b8fd9);
    goto L_004b8fd9;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8fd9); r_esp += 4; return;
L_004b8fd9:; BB(0x004b8fd9);
    /* 004b8fd9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b8fdb: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b8fe0u); f_00520bf4();
    /* 004b8fe0: fcomp dword ptr [0x906c84] */ fx_compare(ST(0), R_F32((u32)(0x906c84u))); FPOP();
    /* 004b8fe6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b8fe8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b8fe9: jbe 0x4b8ff2 */ if ((fC||fZ)) goto L_004b8ff2;
L_004b8feb:; BB(0x004b8feb);
    /* 004b8feb: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b8ff0: jmp 0x4b902f */ goto L_004b902f;
L_004b8ff2:; BB(0x004b8ff2);
    /* 004b8ff2: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b8ff7: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b8ff9(void)
{
    FN_ENTER(0x004b8ff9);
    goto L_004b8ff9;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b8ff9); r_esp += 4; return;
L_004b8ff9:; BB(0x004b8ff9);
    /* 004b8ff9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b8fff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9001: jne 0x4b900a */ if (!fZ) goto L_004b900a;
L_004b9003:; BB(0x004b9003);
    /* 004b9003: mov eax, 5 */ r_eax = 0x5u;
    /* 004b9008: jmp 0x4b902f */ goto L_004b902f;
L_004b900a:; BB(0x004b900a);
    /* 004b900a: mov eax, 9 */ r_eax = 0x9u;
    /* 004b900f: jmp 0x4b902f */ goto L_004b902f;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

