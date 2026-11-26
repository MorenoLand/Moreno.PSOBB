#include "protos.h"

void f_00896184(void) /* ??_Estringdispid@CComTypeInfoHolder@ATL@@QAEPAXI@Z */
{
    FN_ENTER(0x00896184);
    /* 00896184: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00896185: mov bl, byte ptr [esp + 8] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0x8u))) & 0xffu);
    /* 00896189: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089618c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089618d: mov esi, ecx */ r_esi = r_ecx;
    /* 0089618f: je 0x8961b5 */ if (fZ) goto L_008961b5;
L_00896191:; BB(0x00896191);
    /* 00896191: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896192: push 0x895ebe */ { u32 v = 0x895ebeu; r_esp -= 4; W32(r_esp, v); }
    /* 00896197: lea edi, [esi - 4] */ r_edi = (u32)(r_esi+0xfffffffcu);
    /* 0089619a: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0089619c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0089619e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089619f: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x8961a4u); f_008586d6();
    /* 008961a4: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008961a7: je 0x8961b0 */ if (fZ) goto L_008961b0;
L_008961a9:; BB(0x008961a9);
    /* 008961a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008961aa: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8961afu); f_00857e98();
    /* 008961af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008961b0:; BB(0x008961b0);
    /* 008961b0: mov eax, edi */ r_eax = r_edi;
    /* 008961b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008961b3: jmp 0x8961cb */ goto L_008961cb;
L_008961b5:; BB(0x008961b5);
    /* 008961b5: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008961b7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8961bcu); f_00857e98();
    /* 008961bc: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008961bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008961c0: je 0x8961c9 */ if (fZ) goto L_008961c9;
L_008961c2:; BB(0x008961c2);
    /* 008961c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008961c3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8961c8u); f_00857e98();
    /* 008961c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008961c9:; BB(0x008961c9);
    /* 008961c9: mov eax, esi */ r_eax = r_esi;
L_008961cb:; BB(0x008961cb);
    /* 008961cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008961cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008961cd: ret 4 */ FN_RET(0x00896184); r_esp += 8; return;
}

void f_008961d0(void) /* ?BltTriangle3D@CD3DXBlt@@IAEJXZ */
{
    FN_ENTER(0x008961d0);
    /* 008961d0: mov eax, 0x8cb603 */ r_eax = 0x8cb603u;
    /* 008961d5: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x8961dau); f_008cb064();
    /* 008961da: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008961dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008961df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008961e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008961e1: mov esi, ecx */ r_esi = r_ecx;
    /* 008961e3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008961e6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008961e9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 008961ec: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008961ef: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 008961f2: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008961f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008961f6: mov ecx, eax */ r_ecx = r_eax;
    /* 008961f8: mov edi, eax */ r_edi = r_eax;
    /* 008961fa: shr eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008961fd: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00896200: not eax */ r_eax = ~r_eax;
    /* 00896202: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00896204: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896205: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00896207: not ecx */ r_ecx = ~r_ecx;
    /* 00896209: and ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089620b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0089620e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00896211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00896212: push dword ptr [eax + 0x1058] */ { u32 v = R32((u32)(r_eax+0x1058u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896218: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089621a: push dword ptr [eax + 0x1058] */ { u32 v = R32((u32)(r_eax+0x1058u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896220: shr edi, 0x11 */ { u32 c = (17u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00896223: not edi */ r_edi = ~r_edi;
    /* 00896225: and edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896227: call 0x895ec7 */ r_esp -= 4; W32(r_esp, 0x89622cu); f_00895ec7();
    /* 0089622c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089622f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896231: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00896234: je 0x8965f6 */ if (fZ) goto L_008965f6;
L_0089623a:; BB(0x0089623a);
    /* 0089623a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089623d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089623e: push dword ptr [eax + 0x105c] */ { u32 v = R32((u32)(r_eax+0x105cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00896244: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00896246: push dword ptr [eax + 0x105c] */ { u32 v = R32((u32)(r_eax+0x105cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089624c: call 0x895ec7 */ r_esp -= 4; W32(r_esp, 0x896251u); f_00895ec7();
    /* 00896251: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00896254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896256: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00896259: je 0x8965f6 */ if (fZ) goto L_008965f6;
L_0089625f:; BB(0x0089625f);
    /* 0089625f: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00896262: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00896265: push dword ptr [eax + 0x1060] */ { u32 v = R32((u32)(r_eax+0x1060u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089626b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089626d: push dword ptr [eax + 0x1060] */ { u32 v = R32((u32)(r_eax+0x1060u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896273: call 0x895ec7 */ r_esp -= 4; W32(r_esp, 0x896278u); f_00895ec7();
    /* 00896278: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089627b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089627d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00896280: je 0x8965f6 */ if (fZ) goto L_008965f6;
L_00896286:; BB(0x00896286);
    /* 00896286: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00896289: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0089628b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089628d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00896290: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00896293: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00896295: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896297: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089629a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0089629d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0089629f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008962a1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008962a4: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008962a7: mov edi, dword ptr [eax + 0x1060] */ r_edi = R32((u32)(r_eax+0x1060u));
    /* 008962ad: lea eax, [edi + edi*2] */ r_eax = (u32)(r_edi+r_edi*2);
    /* 008962b0: lea eax, [eax*4 + 4] */ r_eax = (u32)(r_eax*4+0x4u);
    /* 008962b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008962b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8962bdu); f_008581c5();
    /* 008962bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008962be: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 008962c1: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008962c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008962c7: je 0x8962ec */ if (fZ) goto L_008962ec;
L_008962c9:; BB(0x008962c9);
    /* 008962c9: push 0x895ebe */ { u32 v = 0x895ebeu; r_esp -= 4; W32(r_esp, v); }
    /* 008962ce: push 0x895eb1 */ { u32 v = 0x895eb1u; r_esp -= 4; W32(r_esp, v); }
    /* 008962d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008962d4: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 008962d6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008962d9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008962db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008962dc: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 008962df: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x8962e4u); f_00858736();
    /* 008962e4: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 008962e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008962ea: jmp 0x8962f3 */ goto L_008962f3;
L_008962ec:; BB(0x008962ec);
    /* 008962ec: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008962f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_008962f3:; BB(0x008962f3);
    /* 008962f3: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008962f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008962f9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 008962fc: je 0x8965ef */ if (fZ) goto L_008965ef;
L_00896302:; BB(0x00896302);
    /* 00896302: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00896304: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 0089630a: mov eax, edi */ r_eax = r_edi;
    /* 0089630c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089630f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00896310: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x896315u); f_008581c5();
    /* 00896315: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00896316: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00896319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089631b: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0089631e: je 0x896336 */ if (fZ) goto L_00896336;
L_00896320:; BB(0x00896320);
    /* 00896320: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 00896325: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896326: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00896328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00896329: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89632eu); f_0088fd17();
    /* 0089632e: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00896331: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00896334: jmp 0x89633d */ goto L_0089633d;
L_00896336:; BB(0x00896336);
    /* 00896336: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089633a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0089633d:; BB(0x0089633d);
    /* 0089633d: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00896341: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896343: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00896346: je 0x8965ef */ if (fZ) goto L_008965ef;
L_0089634c:; BB(0x0089634c);
    /* 0089634c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089634f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896352: mov ecx, edi */ r_ecx = r_edi;
    /* 00896354: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896357: jae 0x89637e */ if (!fC) goto L_0089637e;
L_00896359:; BB(0x00896359);
    /* 00896359: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0089635b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089635d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00896360: jmp 0x896373 */ goto L_00896373;
L_00896362:; BB(0x00896362);
    /* 00896362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00896364: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00896367: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 0089636a: lea eax, [ebx + eax*4 + 8] */ r_eax = (u32)(r_ebx+r_eax*4+0x8u);
    /* 0089636e: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896370: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00896373:; BB(0x00896373);
    /* 00896373: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896375: jb 0x896362 */ if (fC) goto L_00896362;
L_00896377:; BB(0x00896377);
    /* 00896377: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089637a: mov ecx, edx */ r_ecx = r_edx;
    /* 0089637c: jb 0x896359 */ if (fC) goto L_00896359;
L_0089637e:; BB(0x0089637e);
    /* 0089637e: and dword ptr [ebp - 0x40], 0 */ { u32 ad = (u32)(r_ebp+0xffffffc0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00896382: mov eax, edi */ r_eax = r_edi;
    /* 00896384: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896387: jae 0x8965eb */ if (!fC) goto L_008965eb;
L_0089638d:; BB(0x0089638d);
    /* 0089638d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0089638f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00896391: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896394: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896396: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00896399: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0089639c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089639f: jae 0x896454 */ if (!fC) goto L_00896454;
L_008963a5:; BB(0x008963a5);
    /* 008963a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008963a8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008963aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008963ad: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008963b0: lea ebx, [ecx + eax*4] */ r_ebx = (u32)(r_ecx+r_eax*4);
    /* 008963b3: cmp dword ptr [ebx], 0 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008963b6: jne 0x896447 */ if (!fZ) goto L_00896447;
L_008963bc:; BB(0x008963bc);
    /* 008963bc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008963bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008963c1: je 0x8963d2 */ if (fZ) goto L_008963d2;
L_008963c3:; BB(0x008963c3);
    /* 008963c3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008963c5: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 008963c7: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008963ca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008963cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008963d0: jmp 0x896422 */ goto L_00896422;
L_008963d2:; BB(0x008963d2);
    /* 008963d2: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008963d5: mov edi, dword ptr [eax + 0x105c] */ r_edi = R32((u32)(r_eax+0x105cu));
    /* 008963db: imul edi, dword ptr [eax + 0x1058] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_eax+0x1058u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008963e2: mov eax, edi */ r_eax = r_edi;
    /* 008963e4: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008963e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008963e8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8963edu); f_008581c5();
    /* 008963ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008963ee: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 008963f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008963f3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 008963fa: je 0x89640f */ if (fZ) goto L_0089640f;
L_008963fc:; BB(0x008963fc);
    /* 008963fc: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 00896401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896402: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00896404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00896405: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89640au); f_0088fd17();
    /* 0089640a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0089640d: jmp 0x896411 */ goto L_00896411;
L_0089640f:; BB(0x0089640f);
    /* 0089640f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00896411:; BB(0x00896411);
    /* 00896411: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00896415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896417: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00896419: je 0x8965ef */ if (fZ) goto L_008965ef;
L_0089641f:; BB(0x0089641f);
    /* 0089641f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
L_00896422:; BB(0x00896422);
    /* 00896422: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00896425: mov ecx, dword ptr [eax + 0x105c] */ r_ecx = R32((u32)(r_eax+0x105cu));
    /* 0089642b: imul ecx, dword ptr [eax + 0x1058] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x1058u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896432: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00896434: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00896437: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00896439: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089643c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089643e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00896440: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00896442: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896445: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00896447:; BB(0x00896447);
    /* 00896447: add dword ptr [ebp - 0x10], 8 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089644b: cmp dword ptr [ebp - 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089644e: jb 0x8963a5 */ if (fC) goto L_008963a5;
L_00896454:; BB(0x00896454);
    /* 00896454: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00896457: and dword ptr [ebp - 0x38], 0 */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089645b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089645e: cmp eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896461: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00896464: jae 0x89657a */ if (!fC) goto L_0089657a;
L_0089646a:; BB(0x0089646a);
    /* 0089646a: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089646d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00896470: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00896472: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896475: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00896477: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089647a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089647c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0089647e: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00896481: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x896484u); call_ind(t); }
    /* 00896484: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00896487: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089648a: cmp eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089648d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00896490: jae 0x896568 */ if (!fC) goto L_00896568;
L_00896496:; BB(0x00896496);
    /* 00896496: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00896499: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0089649c:; BB(0x0089649c);
    /* 0089649c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0089649f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008964a1: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008964a3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 008964a6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008964a9: jmp 0x89654d */ goto L_0089654d;
L_008964ae:; BB(0x008964ae);
    /* 008964ae: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008964b1: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008964b4: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008964b6: jae 0x89654a */ if (!fC) goto L_0089654a;
L_008964bc:; BB(0x008964bc);
    /* 008964bc: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008964bf: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 008964c5: imul eax, dword ptr [ebx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008964c8: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008964ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008964cd: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008964d0: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008964d3: add eax, dword ptr [edi + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008964d6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 008964d9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008964dc: jmp 0x896530 */ goto L_00896530;
L_008964de:; BB(0x008964de);
    /* 008964de: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008964e1: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008964e4: fmul dword ptr [ebx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x4u));
    /* 008964e7: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 008964ea: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 008964ec: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008964ef: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008964f1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008964f3: fmul dword ptr [edx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff8u));
    /* 008964f6: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 008964f8: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 008964fa: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 008964fc: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008964ff: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00896501: lea edi, [edi + eax + 4] */ r_edi = (u32)(r_edi+r_eax+0x4u);
    /* 00896505: fmul dword ptr [edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffffcu));
    /* 00896508: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0089650a: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0089650c: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0089650e: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00896511: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00896513: lea edi, [edi + eax + 8] */ r_edi = (u32)(r_edi+r_eax+0x8u);
    /* 00896517: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00896519: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0089651b: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0089651d: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0089651f: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00896522: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00896525: lea edi, [edi + eax + 0xc] */ r_edi = (u32)(r_edi+r_eax+0xcu);
    /* 00896529: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089652c: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0089652e: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
L_00896530:; BB(0x00896530);
    /* 00896530: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896533: jb 0x8964de */ if (fC) goto L_008964de;
L_00896535:; BB(0x00896535);
    /* 00896535: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00896538: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089653b: cmp ebx, dword ptr [ebp - 0x48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089653e: jb 0x8964bc */ if (fC) goto L_008964bc;
L_00896544:; BB(0x00896544);
    /* 00896544: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00896547: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_0089654a:; BB(0x0089654a);
    /* 0089654a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0089654d:; BB(0x0089654d);
    /* 0089654d: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896550: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00896553: jb 0x8964ae */ if (fC) goto L_008964ae;
L_00896559:; BB(0x00896559);
    /* 00896559: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089655c: cmp eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089655f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00896562: jb 0x89649c */ if (fC) goto L_0089649c;
L_00896568:; BB(0x00896568);
    /* 00896568: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089656b: cmp edi, dword ptr [ebp - 0x50] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089656e: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 00896571: jb 0x89646a */ if (fC) goto L_0089646a;
L_00896577:; BB(0x00896577);
    /* 00896577: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
L_0089657a:; BB(0x0089657a);
    /* 0089657a: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 0089657d: jmp 0x8965d9 */ goto L_008965d9;
L_0089657f:; BB(0x0089657f);
    /* 0089657f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00896581: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00896584: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00896587: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089658a: dec dword ptr [edi + 8] */ { u32 ad = (u32)(r_edi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0089658d: jne 0x8965d6 */ if (!fZ) goto L_008965d6;
L_0089658f:; BB(0x0089658f);
    /* 0089658f: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00896592: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00896596: cmp dword ptr [ecx + 0x105c], 0 */ {  u32 a = R32((u32)(r_ecx+0x105cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089659d: jbe 0x8965cd */ if ((fC||fZ)) goto L_008965cd;
L_0089659f:; BB(0x0089659f);
    /* 0089659f: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 008965a5: imul edx, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008965a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008965ab: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008965ae: add edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008965b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008965b1: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008965b3: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008965b6: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8965b9u); call_ind(t); }
    /* 008965b9: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008965bc: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008965bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008965c2: cmp eax, dword ptr [ecx + 0x105c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008965c8: jb 0x89659f */ if (fC) goto L_0089659f;
L_008965ca:; BB(0x008965ca);
    /* 008965ca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
L_008965cd:; BB(0x008965cd);
    /* 008965cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008965d0: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008965d3: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_008965d6:; BB(0x008965d6);
    /* 008965d6: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008965d9:; BB(0x008965d9);
    /* 008965d9: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008965db: jb 0x89657f */ if (fC) goto L_0089657f;
L_008965dd:; BB(0x008965dd);
    /* 008965dd: inc dword ptr [ebp - 0x40] */ { u32 ad = (u32)(r_ebp+0xffffffc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008965e0: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008965e3: mov eax, edx */ r_eax = r_edx;
    /* 008965e5: jb 0x89638d */ if (fC) goto L_0089638d;
L_008965eb:; BB(0x008965eb);
    /* 008965eb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008965ed: jmp 0x8965fb */ goto L_008965fb;
L_008965ef:; BB(0x008965ef);
    /* 008965ef: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
    /* 008965f4: jmp 0x8965fb */ goto L_008965fb;
L_008965f6:; BB(0x008965f6);
    /* 008965f6: mov esi, 0x80004005 */ r_esi = 0x80004005u;
L_008965fb:; BB(0x008965fb);
    /* 008965fb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 008965fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896600: je 0x896609 */ if (fZ) goto L_00896609;
L_00896602:; BB(0x00896602);
    /* 00896602: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00896604: call 0x896184 */ r_esp -= 4; W32(r_esp, 0x896609u); f_00896184();
L_00896609:; BB(0x00896609);
    /* 00896609: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089660c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x896611u); f_00857e98();
    /* 00896611: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896614: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x896619u); f_00857e98();
    /* 00896619: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089661c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x896621u); f_00857e98();
    /* 00896621: push dword ptr [ebp - 0x5c] */ { u32 v = R32((u32)(r_ebp+0xffffffa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896624: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x896629u); f_00857e98();
    /* 00896629: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089662b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x896630u); f_00857e98();
    /* 00896630: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00896633: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896636: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896637: mov eax, esi */ r_eax = r_esi;
    /* 00896639: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089663a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089663b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00896642: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00896643: ret  */ FN_RET(0x008961d0); r_esp += 4; return;
}

