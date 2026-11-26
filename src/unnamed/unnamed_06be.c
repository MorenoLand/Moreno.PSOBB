#include "protos.h"

void f_006be070(void) /* sub_6BE070 */
{
    FN_ENTER(0x006be070);
    /* 006be070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be071: mov ebp, esp */ r_ebp = r_esp;
    /* 006be073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006be075: push 0x8ec47c */ { u32 v = 0x8ec47cu; r_esp -= 4; W32(r_esp, v); }
    /* 006be07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006be080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be081: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006be088: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006be08b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006be08e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006be091: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006be094: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006be097: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be09a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006be09d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6be0a2u); f_008193cc();
    /* 006be0a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006be0a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006be0ac: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006be0af: call 0x6daefc */ r_esp -= 4; W32(r_esp, 0x6be0b4u); f_006daefc();
    /* 006be0b4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006be0b7: mov dword ptr [esi], 0xb3b020 */ W32((u32)(r_esi), 0xb3b020u);
    /* 006be0bd: mov eax, dword ptr [0x9ceab0] */ r_eax = R32((u32)(0x9ceab0u));
    /* 006be0c2: mov dword ptr [esi + 0x1c], 0xb3b030 */ W32((u32)(r_esi+0x1cu), 0xb3b030u);
    /* 006be0c9: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006be0cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006be0ce: mov dword ptr [esi + 0x42c], edx */ W32((u32)(r_esi+0x42cu), r_edx);
    /* 006be0d4: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 006be0da: add esi, 0x434 */ {  u32 a = r_esi; u32 b = 0x434u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006be0e0: mov edi, 0x96b75c */ r_edi = 0x96b75cu;
L_006be0e5:; BB(0x006be0e5);
    /* 006be0e5: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006be0e7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006be0ea: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006be0ec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006be0ef: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be0f1: jne 0x6be0e5 */ if (!fZ) goto L_006be0e5;
L_006be0f3:; BB(0x006be0f3);
    /* 006be0f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006be0f6: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006be0f9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006be0fc: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006be0ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006be101: mov dword ptr [eax + 0x458], edx */ W32((u32)(r_eax+0x458u), r_edx);
    /* 006be107: mov dword ptr [eax + 0x454], 1 */ W32((u32)(r_eax+0x454u), 0x1u);
    /* 006be111: mov dword ptr [0xa95d3c], eax */ W32((u32)(0xa95d3cu), r_eax);
    /* 006be116: mov dword ptr [eax + 0x45c], edx */ W32((u32)(r_eax+0x45cu), r_edx);
    /* 006be11c: mov dword ptr [eax + 0x474], 0x78 */ W32((u32)(r_eax+0x474u), 0x78u);
    /* 006be126: mov dword ptr [eax + 0x460], edx */ W32((u32)(r_eax+0x460u), r_edx);
    /* 006be12c: mov dword ptr [eax + 0x464], edx */ W32((u32)(r_eax+0x464u), r_edx);
    /* 006be132: mov dword ptr [eax + 0x468], edx */ W32((u32)(r_eax+0x468u), r_edx);
    /* 006be138: mov dword ptr [eax + 0x46c], edx */ W32((u32)(r_eax+0x46cu), r_edx);
    /* 006be13e: mov dword ptr [eax + 0x470], edx */ W32((u32)(r_eax+0x470u), r_edx);
    /* 006be144: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 006be14a: mov dword ptr [eax + 0x478], edx */ W32((u32)(r_eax+0x478u), r_edx);
    /* 006be150: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006be153: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006be15a: mov esp, ebp */ r_esp = r_ebp;
    /* 006be15c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006be15d: ret 4 */ FN_RET(0x006be070); r_esp += 8; return;
}

void f_006be160(void) /* sub_6BE160 */
{
    FN_ENTER(0x006be160);
    /* 006be160: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006be166: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be168: je 0x6be179 */ if (fZ) goto L_006be179;
L_006be16a:; BB(0x006be16a);
    /* 006be16a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6be16fu); f_007127b0();
    /* 006be16f: mov dword ptr [0xa95d4c], 0 */ W32((u32)(0xa95d4cu), 0x0u);
L_006be179:; BB(0x006be179);
    /* 006be179: mov eax, dword ptr [0xa95d28] */ r_eax = R32((u32)(0xa95d28u));
    /* 006be17e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be180: je 0x6be193 */ if (fZ) goto L_006be193;
L_006be182:; BB(0x006be182);
    /* 006be182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be183: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be188u); f_0082e960();
    /* 006be188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be189: mov dword ptr [0xa95d28], 0 */ W32((u32)(0xa95d28u), 0x0u);
L_006be193:; BB(0x006be193);
    /* 006be193: mov eax, dword ptr [0xa95cc8] */ r_eax = R32((u32)(0xa95cc8u));
    /* 006be198: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be19a: je 0x6be1ad */ if (fZ) goto L_006be1ad;
L_006be19c:; BB(0x006be19c);
    /* 006be19c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be19d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be1a2u); f_0082e960();
    /* 006be1a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be1a3: mov dword ptr [0xa95cc8], 0 */ W32((u32)(0xa95cc8u), 0x0u);
L_006be1ad:; BB(0x006be1ad);
    /* 006be1ad: mov eax, dword ptr [0xa95c68] */ r_eax = R32((u32)(0xa95c68u));
    /* 006be1b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be1b4: je 0x6be1c7 */ if (fZ) goto L_006be1c7;
L_006be1b6:; BB(0x006be1b6);
    /* 006be1b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be1b7: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be1bcu); f_0082e960();
    /* 006be1bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be1bd: mov dword ptr [0xa95c68], 0 */ W32((u32)(0xa95c68u), 0x0u);
L_006be1c7:; BB(0x006be1c7);
    /* 006be1c7: mov eax, dword ptr [0xa95c08] */ r_eax = R32((u32)(0xa95c08u));
    /* 006be1cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be1ce: je 0x6be1e1 */ if (fZ) goto L_006be1e1;
L_006be1d0:; BB(0x006be1d0);
    /* 006be1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be1d1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be1d6u); f_0082e960();
    /* 006be1d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be1d7: mov dword ptr [0xa95c08], 0 */ W32((u32)(0xa95c08u), 0x0u);
L_006be1e1:; BB(0x006be1e1);
    /* 006be1e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be1e3: mov dword ptr [0xa95d6c], eax */ W32((u32)(0xa95d6cu), r_eax);
    /* 006be1e8: mov dword ptr [0xa95d68], eax */ W32((u32)(0xa95d68u), r_eax);
    /* 006be1ed: mov edx, 1 */ r_edx = 0x1u;
    /* 006be1f2: mov dword ptr [0xa95d64], eax */ W32((u32)(0xa95d64u), r_eax);
    /* 006be1f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be1f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be1f9: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6be1feu); f_007836b0();
    /* 006be1fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be201: ret  */ FN_RET(0x006be160); r_esp += 4; return;
}

void f_006be204(void) /* sub_6BE204 */
{
    FN_ENTER(0x006be204);
    /* 006be204: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be205: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be206: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be207: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be208: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 006be20c: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006be210: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be211: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6be216u); f_0082e940();
    /* 006be216: mov edi, eax */ r_edi = r_eax;
    /* 006be218: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be219: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6be21eu); f_0082e940();
    /* 006be21e: mov esi, eax */ r_esi = r_eax;
    /* 006be220: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be221: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be222: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be223: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6be228u); f_0086b6b8();
    /* 006be228: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be22b: push dword ptr [0xa95d48] */ { u32 v = R32((u32)(0xa95d48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be231: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be236: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6be23bu); f_0084c390();
    /* 006be23b: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be240: call 0x763400 */ r_esp -= 4; W32(r_esp, 0x6be245u); f_00763400();
    /* 006be245: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be246: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be247: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be24c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be24d: call 0x7638a4 */ r_esp -= 4; W32(r_esp, 0x6be252u); f_007638a4();
    /* 006be252: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be253: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be255: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6be25au); f_0086b6b8();
    /* 006be25a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be25b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be260u); f_0082e960();
    /* 006be260: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be261: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be266u); f_0082e960();
    /* 006be266: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be269: push dword ptr [0xa95d44] */ { u32 v = R32((u32)(0xa95d44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be26f: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be274: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6be279u); f_0084c390();
    /* 006be279: mov eax, ebx */ r_eax = r_ebx;
    /* 006be27b: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006be27e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be280: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be282: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be289: call 0x763958 */ r_esp -= 4; W32(r_esp, 0x6be28eu); f_00763958();
    /* 006be28e: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 006be291: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be296: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6be29bu); f_0084c390();
    /* 006be29b: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006be29e: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006be2a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be2a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be2a5: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 006be2a8: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006be2ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be2ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be2af: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x6be2b4u); f_00763054();
    /* 006be2b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be2b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006be2b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be2b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be2b8: ret  */ FN_RET(0x006be204); r_esp += 4; return;
}

void f_006be2bc(void) /* sub_6BE2BC */
{
    FN_ENTER(0x006be2bc);
    /* 006be2bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be2bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be2be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be2bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be2c0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006be2c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be2c5: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6be2cau); f_0082e940();
    /* 006be2ca: mov esi, eax */ r_esi = r_eax;
    /* 006be2cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be2cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be2d1: je 0x6be3ae */ if (fZ) goto L_006be3ae;
L_006be2d7:; BB(0x006be2d7);
    /* 006be2d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be2d8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be2dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be2dd: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6be2e2u); f_0086b6b8();
    /* 006be2e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be2e5: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 006be2e8: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 006be2ef: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006be2f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006be2f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006be2f8: jbe 0x6be397 */ if ((fC||fZ)) goto L_006be397;
L_006be2fe:; BB(0x006be2fe);
    /* 006be2fe: movzx ecx, byte ptr [edx + esi] */ r_ecx = (u32)R8((u32)(r_edx+r_esi));
    /* 006be302: xor ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be304: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006be307: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be30a: je 0x6be316 */ if (fZ) goto L_006be316;
L_006be30c:; BB(0x006be30c);
    /* 006be30c: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be30e: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be314: jmp 0x6be318 */ goto L_006be318;
L_006be316:; BB(0x006be316);
    /* 006be316: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be318:; BB(0x006be318);
    /* 006be318: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be31b: je 0x6be327 */ if (fZ) goto L_006be327;
L_006be31d:; BB(0x006be31d);
    /* 006be31d: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be31f: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be325: jmp 0x6be329 */ goto L_006be329;
L_006be327:; BB(0x006be327);
    /* 006be327: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be329:; BB(0x006be329);
    /* 006be329: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be32c: je 0x6be338 */ if (fZ) goto L_006be338;
L_006be32e:; BB(0x006be32e);
    /* 006be32e: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be330: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be336: jmp 0x6be33a */ goto L_006be33a;
L_006be338:; BB(0x006be338);
    /* 006be338: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be33a:; BB(0x006be33a);
    /* 006be33a: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be33d: je 0x6be349 */ if (fZ) goto L_006be349;
L_006be33f:; BB(0x006be33f);
    /* 006be33f: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be341: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be347: jmp 0x6be34b */ goto L_006be34b;
L_006be349:; BB(0x006be349);
    /* 006be349: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be34b:; BB(0x006be34b);
    /* 006be34b: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be34e: je 0x6be35a */ if (fZ) goto L_006be35a;
L_006be350:; BB(0x006be350);
    /* 006be350: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be352: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be358: jmp 0x6be35c */ goto L_006be35c;
L_006be35a:; BB(0x006be35a);
    /* 006be35a: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be35c:; BB(0x006be35c);
    /* 006be35c: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be35f: je 0x6be36b */ if (fZ) goto L_006be36b;
L_006be361:; BB(0x006be361);
    /* 006be361: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be363: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be369: jmp 0x6be36d */ goto L_006be36d;
L_006be36b:; BB(0x006be36b);
    /* 006be36b: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be36d:; BB(0x006be36d);
    /* 006be36d: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be370: je 0x6be37c */ if (fZ) goto L_006be37c;
L_006be372:; BB(0x006be372);
    /* 006be372: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be374: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be37a: jmp 0x6be37e */ goto L_006be37e;
L_006be37c:; BB(0x006be37c);
    /* 006be37c: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be37e:; BB(0x006be37e);
    /* 006be37e: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006be381: je 0x6be38d */ if (fZ) goto L_006be38d;
L_006be383:; BB(0x006be383);
    /* 006be383: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006be385: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006be38b: jmp 0x6be38f */ goto L_006be38f;
L_006be38d:; BB(0x006be38d);
    /* 006be38d: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006be38f:; BB(0x006be38f);
    /* 006be38f: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006be391: jb 0x6be2fe */ if (fC) goto L_006be2fe;
L_006be397:; BB(0x006be397);
    /* 006be397: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be398: not ebx */ r_ebx = ~r_ebx;
    /* 006be39a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be39fu); f_0082e960();
    /* 006be39f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be3a0: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006be3a2: jne 0x6be3ae */ if (!fZ) goto L_006be3ae;
L_006be3a4:; BB(0x006be3a4);
    /* 006be3a4: mov eax, 1 */ r_eax = 0x1u;
    /* 006be3a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be3aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006be3ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be3ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be3ad: ret  */ FN_RET(0x006be2bc); r_esp += 4; return;
L_006be3ae:; BB(0x006be3ae);
    /* 006be3ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006be3b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be3b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006be3b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be3b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be3b4: ret  */ FN_RET(0x006be2bc); r_esp += 4; return;
}

void f_006be3b8(void) /* sub_6BE3B8 */
{
    FN_ENTER(0x006be3b8);
    /* 006be3b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be3b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be3ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be3bb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006be3be: mov esi, ecx */ r_esi = r_ecx;
    /* 006be3c0: mov edx, dword ptr [esi + 0x49c] */ r_edx = R32((u32)(r_esi+0x49cu));
    /* 006be3c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be3c8: je 0x6be494 */ if (fZ) goto L_006be494;
L_006be3ce:; BB(0x006be3ce);
    /* 006be3ce: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be3d1: je 0x6be494 */ if (fZ) goto L_006be494;
L_006be3d7:; BB(0x006be3d7);
    /* 006be3d7: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be3da: je 0x6be494 */ if (fZ) goto L_006be494;
L_006be3e0:; BB(0x006be3e0);
    /* 006be3e0: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006be3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be3e7: jne 0x6be494 */ if (!fZ) goto L_006be494;
L_006be3ed:; BB(0x006be3ed);
    /* 006be3ed: mov dword ptr [esi + 0x434], 0 */ W32((u32)(r_esi+0x434u), 0x0u);
    /* 006be3f7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006be3f9:; BB(0x006be3f9);
    /* 006be3f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be3fa: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6be3ffu); f_0082c204();
    /* 006be3ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006be402: je 0x6be413 */ if (fZ) goto L_006be413;
L_006be404:; BB(0x006be404);
    /* 006be404: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006be406: mov eax, 1 */ r_eax = 0x1u;
    /* 006be40b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006be40d: or dword ptr [esi + 0x434], eax */ { u32 ad = (u32)(r_esi+0x434u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006be413:; BB(0x006be413);
    /* 006be413: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006be416: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006be419: jl 0x6be3f9 */ if ((fS!=fO)) goto L_006be3f9;
L_006be41b:; BB(0x006be41b);
    /* 006be41b: mov eax, dword ptr [esi + 0x434] */ r_eax = R32((u32)(r_esi+0x434u));
    /* 006be421: cmp eax, dword ptr [esi + 0x438] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x438u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be427: je 0x6be48e */ if (fZ) goto L_006be48e;
L_006be429:; BB(0x006be429);
    /* 006be429: mov dword ptr [esi + 0x438], eax */ W32((u32)(r_esi+0x438u), r_eax);
    /* 006be42f: mov eax, dword ptr [0xa95d6c] */ r_eax = R32((u32)(0xa95d6cu));
    /* 006be434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be436: je 0x6be47d */ if (fZ) goto L_006be47d;
L_006be438:; BB(0x006be438);
    /* 006be438: mov dword ptr [0xa95d6c], 0 */ W32((u32)(0xa95d6cu), 0x0u);
    /* 006be442: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006be444: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6be449u); f_007930dc();
    /* 006be449: mov edi, eax */ r_edi = r_eax;
    /* 006be44b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be44e: mov edx, dword ptr [esi + 0x494] */ r_edx = R32((u32)(r_esi+0x494u));
    /* 006be454: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be456: je 0x6be6b1 */ if (fZ) goto L_006be6b1;
L_006be45c:; BB(0x006be45c);
    /* 006be45c: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
L_006be45f:; BB(0x006be45f);
    /* 006be45f: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006be464: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be465: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006be467: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6be46cu); f_006db5d4();
    /* 006be46c: mov dword ptr [esi + 0x49c], 0x12 */ W32((u32)(r_esi+0x49cu), 0x12u);
    /* 006be476: mov edx, 0x12 */ r_edx = 0x12u;
    /* 006be47b: jmp 0x6be494 */ goto L_006be494;
L_006be47d:; BB(0x006be47d);
    /* 006be47d: mov dword ptr [esi + 0x49c], 1 */ W32((u32)(r_esi+0x49cu), 0x1u);
    /* 006be487: mov edx, 1 */ r_edx = 0x1u;
    /* 006be48c: jmp 0x6be494 */ goto L_006be494;
L_006be48e:; BB(0x006be48e);
    /* 006be48e: mov edx, dword ptr [esi + 0x49c] */ r_edx = R32((u32)(r_esi+0x49cu));
L_006be494:; BB(0x006be494);
    /* 006be494: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006be497: ja 0x6be6aa */ if ((!fC&&!fZ)) goto L_006be6aa;
L_006be49d:; BB(0x006be49d);
    /* 006be49d: mov eax, dword ptr [edx*4 + 0x96b600] */ r_eax = R32((u32)(r_edx*4+0x96b600u));
    /* 006be4a4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be3b8); r_esp += 4; return;
L_006be6b1:; BB(0x006be6b1);
    /* 006be6b1: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006be6b8: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006be6c0: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006be6c2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6be6c7u); f_0073ec50();
    /* 006be6c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be6c8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006be6cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be6cd: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 006be6d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006be6d2: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6be6d7u); f_006dbcf0();
    /* 006be6d7: mov dword ptr [esi + 0x494], eax */ W32((u32)(r_esi+0x494u), r_eax);
    /* 006be6dd: jmp 0x6be45f */ goto L_006be45f;
}

void f_006be4a6(void)
{
    FN_ENTER(0x006be4a6);
    /* 006be4a6: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4a8: call 0x6bd7f0 */ r_esp -= 4; W32(r_esp, 0x6be4adu); f_006bd7f0();
    /* 006be4ad: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4a6); r_esp += 4; return;
}

void f_006be4b2(void)
{
    FN_ENTER(0x006be4b2);
    /* 006be4b2: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4b4: call 0x6be720 */ r_esp -= 4; W32(r_esp, 0x6be4b9u); f_006be720();
    /* 006be4b9: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4b2); r_esp += 4; return;
}

void f_006be4be(void)
{
    FN_ENTER(0x006be4be);
    /* 006be4be: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4c0: call 0x6be90c */ r_esp -= 4; W32(r_esp, 0x6be4c5u); f_006be90c();
    /* 006be4c5: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4be); r_esp += 4; return;
}

void f_006be4ca(void)
{
    FN_ENTER(0x006be4ca);
    /* 006be4ca: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4cc: call 0x6be968 */ r_esp -= 4; W32(r_esp, 0x6be4d1u); f_006be968();
    /* 006be4d1: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4ca); r_esp += 4; return;
}

void f_006be4d6(void)
{
    FN_ENTER(0x006be4d6);
    /* 006be4d6: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4d8: call 0x6bea90 */ r_esp -= 4; W32(r_esp, 0x6be4ddu); f_006bea90();
    /* 006be4dd: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4d6); r_esp += 4; return;
}

void f_006be4e2(void)
{
    FN_ENTER(0x006be4e2);
    /* 006be4e2: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4e4: call 0x6c0c08 */ r_esp -= 4; W32(r_esp, 0x6be4e9u); f_006c0c08();
    /* 006be4e9: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4e2); r_esp += 4; return;
}

void f_006be4ee(void)
{
    FN_ENTER(0x006be4ee);
    /* 006be4ee: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4f0: call 0x6beb64 */ r_esp -= 4; W32(r_esp, 0x6be4f5u); f_006beb64();
    /* 006be4f5: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4ee); r_esp += 4; return;
}

void f_006be4fa(void)
{
    FN_ENTER(0x006be4fa);
    /* 006be4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 006be4fc: call 0x6bec38 */ r_esp -= 4; W32(r_esp, 0x6be501u); f_006bec38();
    /* 006be501: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be4fa); r_esp += 4; return;
}

void f_006be506(void)
{
    FN_ENTER(0x006be506);
    /* 006be506: mov ecx, esi */ r_ecx = r_esi;
    /* 006be508: call 0x6bece4 */ r_esp -= 4; W32(r_esp, 0x6be50du); f_006bece4();
    /* 006be50d: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be506); r_esp += 4; return;
}

void f_006be512(void)
{
    FN_ENTER(0x006be512);
    /* 006be512: mov ecx, esi */ r_ecx = r_esi;
    /* 006be514: call 0x6bef48 */ r_esp -= 4; W32(r_esp, 0x6be519u); f_006bef48();
    /* 006be519: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be512); r_esp += 4; return;
}

void f_006be51e(void)
{
    FN_ENTER(0x006be51e);
    /* 006be51e: mov ecx, esi */ r_ecx = r_esi;
    /* 006be520: call 0x6befb8 */ r_esp -= 4; W32(r_esp, 0x6be525u); f_006befb8();
    /* 006be525: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be51e); r_esp += 4; return;
}

void f_006be52a(void)
{
    FN_ENTER(0x006be52a);
    /* 006be52a: mov ecx, esi */ r_ecx = r_esi;
    /* 006be52c: call 0x6bf068 */ r_esp -= 4; W32(r_esp, 0x6be531u); f_006bf068();
    /* 006be531: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be52a); r_esp += 4; return;
}

void f_006be536(void)
{
    FN_ENTER(0x006be536);
    /* 006be536: mov ecx, esi */ r_ecx = r_esi;
    /* 006be538: call 0x6bf22c */ r_esp -= 4; W32(r_esp, 0x6be53du); f_006bf22c();
    /* 006be53d: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be536); r_esp += 4; return;
}

void f_006be542(void)
{
    FN_ENTER(0x006be542);
    /* 006be542: mov ecx, esi */ r_ecx = r_esi;
    /* 006be544: call 0x6bf270 */ r_esp -= 4; W32(r_esp, 0x6be549u); f_006bf270();
    /* 006be549: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be542); r_esp += 4; return;
}

void f_006be54e(void)
{
    FN_ENTER(0x006be54e);
    /* 006be54e: mov ecx, esi */ r_ecx = r_esi;
    /* 006be550: call 0x6bf328 */ r_esp -= 4; W32(r_esp, 0x6be555u); f_006bf328();
    /* 006be555: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be54e); r_esp += 4; return;
}

void f_006be55a(void)
{
    FN_ENTER(0x006be55a);
    /* 006be55a: lea eax, [esi + 0x470] */ r_eax = (u32)(r_esi+0x470u);
    /* 006be560: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006be562: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006be564: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006be567: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006be56a: mov byte ptr [eax + 0xc], dl */ W8((u32)(r_eax+0xcu), (u8)r_edx);
    /* 006be56d: lea ebx, [esi + 0x47d] */ r_ebx = (u32)(r_esi+0x47du);
    /* 006be573: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006be575: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 006be577: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006be57a: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 006be57d: mov byte ptr [ebx + 0xc], dl */ W8((u32)(r_ebx+0xcu), (u8)r_edx);
    /* 006be580: mov edx, dword ptr [0x96bfb0] */ r_edx = R32((u32)(0x96bfb0u));
    /* 006be586: cmp edx, dword ptr [0x96bfb4] */ {  u32 a = r_edx; u32 b = R32((u32)(0x96bfb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006be58c: jge 0x6be628 */ if ((fS==fO)) goto L_006be628;
L_006be592:; BB(0x006be592);
    /* 006be592: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006be596: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006be59a: mov ebp, ebx */ r_ebp = r_ebx;
    /* 006be59c: mov ebx, edx */ r_ebx = r_edx;
L_006be59e:; BB(0x006be59e);
    /* 006be59e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be5a0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006be5a4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006be5a8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006be5ac: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 006be5b0: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006be5b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be5b5: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006be5ba: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006be5bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be5c0: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6be5c5u); f_00858bf5();
    /* 006be5c5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006be5c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be5ca: push dword ptr [esi + 0x45c] */ { u32 v = R32((u32)(r_esi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006be5d0: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6be5d5u); f_0082c198();
    /* 006be5d5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be5d8: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be5dd: jne 0x6be615 */ if (!fZ) goto L_006be615;
L_006be5df:; BB(0x006be5df);
    /* 006be5df: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006be5e3: lea edi, [ebx + 1] */ r_edi = (u32)(r_ebx+0x1u);
    /* 006be5e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be5e7: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006be5ec: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006be5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be5f2: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6be5f7u); f_00858bf5();
    /* 006be5f7: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006be5fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be5fc: push dword ptr [esi + 0x45c] */ { u32 v = R32((u32)(r_esi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006be602: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6be607u); f_0082c198();
    /* 006be607: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be60a: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be60f: je 0x6be6e2 */ if (fZ) goto L_006be6e2;
L_006be615:; BB(0x006be615);
    /* 006be615: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006be618: cmp ebx, dword ptr [0x96bfb4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0x96bfb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006be61e: jl 0x6be59e */ if ((fS!=fO)) goto L_006be59e;
L_006be624:; BB(0x006be624);
    /* 006be624: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_006be628:; BB(0x006be628);
    /* 006be628: mov dword ptr [esi + 0x49c], 0x11 */ W32((u32)(r_esi+0x49cu), 0x11u);
    /* 006be632: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be55a); r_esp += 4; return;
L_006be6e2:; BB(0x006be6e2);
    /* 006be6e2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006be6e6: mov edx, ebx */ r_edx = r_ebx;
    /* 006be6e8: mov ebx, ebp */ r_ebx = r_ebp;
    /* 006be6ea: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 006be6ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be6ef: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006be6f4: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006be6f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be6fa: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6be6ffu); f_00858bf5();
    /* 006be6ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be700: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006be705: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006be70a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006be70b: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6be710u); f_00858bf5();
    /* 006be710: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be713: mov dword ptr [esi + 0x49c], 8 */ W32((u32)(r_esi+0x49cu), 0x8u);
    /* 006be71d: jmp 0x6be6aa */ goto L_006be6aa;
}

void f_006be634(void)
{
    FN_ENTER(0x006be634);
    /* 006be634: mov ecx, esi */ r_ecx = r_esi;
    /* 006be636: call 0x6bf4ec */ r_esp -= 4; W32(r_esp, 0x6be63bu); f_006bf4ec();
    /* 006be63b: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be634); r_esp += 4; return;
}

void f_006be63d(void)
{
    FN_ENTER(0x006be63d);
    /* 006be63d: mov ecx, esi */ r_ecx = r_esi;
    /* 006be63f: call 0x6bf6b8 */ r_esp -= 4; W32(r_esp, 0x6be644u); f_006bf6b8();
    /* 006be644: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be63d); r_esp += 4; return;
}

void f_006be646(void)
{
    FN_ENTER(0x006be646);
    /* 006be646: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006be64b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be64d: je 0x6be668 */ if (fZ) goto L_006be668;
L_006be64f:; BB(0x006be64f);
    /* 006be64f: mov edx, dword ptr [esi + 0x490] */ r_edx = R32((u32)(r_esi+0x490u));
    /* 006be655: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be657: je 0x6be6aa */ if (fZ) goto L_006be6aa;
L_006be659:; BB(0x006be659);
    /* 006be659: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006be65d: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006be662: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006be666: jmp 0x6be6aa */ goto L_006be6aa;
L_006be668:; BB(0x006be668);
    /* 006be668: mov edx, dword ptr [esi + 0x490] */ r_edx = R32((u32)(r_esi+0x490u));
    /* 006be66e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be670: je 0x6be67f */ if (fZ) goto L_006be67f;
L_006be672:; BB(0x006be672);
    /* 006be672: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006be676: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006be67b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006be67f:; BB(0x006be67f);
    /* 006be67f: mov ecx, esi */ r_ecx = r_esi;
    /* 006be681: call 0x6bfa90 */ r_esp -= 4; W32(r_esp, 0x6be686u); f_006bfa90();
    /* 006be686: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be646); r_esp += 4; return;
}

void f_006be688(void)
{
    FN_ENTER(0x006be688);
    /* 006be688: mov ecx, esi */ r_ecx = r_esi;
    /* 006be68a: call 0x6bfb4c */ r_esp -= 4; W32(r_esp, 0x6be68fu); f_006bfb4c();
    /* 006be68f: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be688); r_esp += 4; return;
}

void f_006be691(void)
{
    FN_ENTER(0x006be691);
    /* 006be691: mov ecx, esi */ r_ecx = r_esi;
    /* 006be693: call 0x6c0cc8 */ r_esp -= 4; W32(r_esp, 0x6be698u); f_006c0cc8();
    /* 006be698: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be691); r_esp += 4; return;
}

void f_006be69a(void)
{
    FN_ENTER(0x006be69a);
    /* 006be69a: mov ecx, esi */ r_ecx = r_esi;
    /* 006be69c: call 0x6bfdd4 */ r_esp -= 4; W32(r_esp, 0x6be6a1u); f_006bfdd4();
    /* 006be6a1: jmp 0x6be6aa */ goto L_006be6aa;
L_006be6aa:; BB(0x006be6aa);
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be69a); r_esp += 4; return;
}

void f_006be6a3(void)
{
    FN_ENTER(0x006be6a3);
    /* 006be6a3: mov ecx, esi */ r_ecx = r_esi;
    /* 006be6a5: call 0x6c0d58 */ r_esp -= 4; W32(r_esp, 0x6be6aau); f_006c0d58();
    /* 006be6aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be6ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006be6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006be6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be6b0: ret  */ FN_RET(0x006be6a3); r_esp += 4; return;
}

void f_006be720(void) /* sub_6BE720 */
{
    FN_ENTER(0x006be720);
    /* 006be720: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be721: mov edi, ecx */ r_edi = r_ecx;
    /* 006be723: mov edx, dword ptr [0xaab26c] */ r_edx = R32((u32)(0xaab26cu));
    /* 006be729: mov byte ptr [0xaafc88], 1 */ W8((u32)(0xaafc88u), 0x1u);
    /* 006be730: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be732: je 0x6be741 */ if (fZ) goto L_006be741;
L_006be734:; BB(0x006be734);
    /* 006be734: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006be738: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006be73d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006be741:; BB(0x006be741);
    /* 006be741: call 0x6be758 */ r_esp -= 4; W32(r_esp, 0x6be746u); f_006be758();
    /* 006be746: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006be74a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006be74f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006be753: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006be754: ret  */ FN_RET(0x006be720); r_esp += 4; return;
}

void f_006be758(void) /* sub_6BE758 */
{
    FN_ENTER(0x006be758);
    /* 006be758: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006be75e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be760: je 0x6be771 */ if (fZ) goto L_006be771;
L_006be762:; BB(0x006be762);
    /* 006be762: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6be767u); f_007127b0();
    /* 006be767: mov dword ptr [0xa95d4c], 0 */ W32((u32)(0xa95d4cu), 0x0u);
L_006be771:; BB(0x006be771);
    /* 006be771: mov eax, dword ptr [0xa95d28] */ r_eax = R32((u32)(0xa95d28u));
    /* 006be776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be778: je 0x6be78b */ if (fZ) goto L_006be78b;
L_006be77a:; BB(0x006be77a);
    /* 006be77a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be77b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be780u); f_0082e960();
    /* 006be780: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be781: mov dword ptr [0xa95d28], 0 */ W32((u32)(0xa95d28u), 0x0u);
L_006be78b:; BB(0x006be78b);
    /* 006be78b: mov eax, dword ptr [0xa95cc8] */ r_eax = R32((u32)(0xa95cc8u));
    /* 006be790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be792: je 0x6be7a5 */ if (fZ) goto L_006be7a5;
L_006be794:; BB(0x006be794);
    /* 006be794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be795: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be79au); f_0082e960();
    /* 006be79a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be79b: mov dword ptr [0xa95cc8], 0 */ W32((u32)(0xa95cc8u), 0x0u);
L_006be7a5:; BB(0x006be7a5);
    /* 006be7a5: mov eax, dword ptr [0xa95c68] */ r_eax = R32((u32)(0xa95c68u));
    /* 006be7aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be7ac: je 0x6be7bf */ if (fZ) goto L_006be7bf;
L_006be7ae:; BB(0x006be7ae);
    /* 006be7ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be7af: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be7b4u); f_0082e960();
    /* 006be7b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be7b5: mov dword ptr [0xa95c68], 0 */ W32((u32)(0xa95c68u), 0x0u);
L_006be7bf:; BB(0x006be7bf);
    /* 006be7bf: mov eax, dword ptr [0xa95c08] */ r_eax = R32((u32)(0xa95c08u));
    /* 006be7c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be7c6: je 0x6be7d9 */ if (fZ) goto L_006be7d9;
L_006be7c8:; BB(0x006be7c8);
    /* 006be7c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be7c9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6be7ceu); f_0082e960();
    /* 006be7ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be7cf: mov dword ptr [0xa95c08], 0 */ W32((u32)(0xa95c08u), 0x0u);
L_006be7d9:; BB(0x006be7d9);
    /* 006be7d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be7db: mov dword ptr [0xa95d60], eax */ W32((u32)(0xa95d60u), r_eax);
    /* 006be7e0: mov dword ptr [0xa95d5c], eax */ W32((u32)(0xa95d5cu), r_eax);
    /* 006be7e5: mov ecx, 0xa95ce0 */ r_ecx = 0xa95ce0u;
    /* 006be7ea: mov dword ptr [0xa95d58], eax */ W32((u32)(0xa95d58u), r_eax);
    /* 006be7ef: mov dword ptr [0xa95d54], eax */ W32((u32)(0xa95d54u), r_eax);
    /* 006be7f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006be7f6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006be7f8: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006be7fb: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006be7fe: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006be801: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006be804: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006be807: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006be80a: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006be80d: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 006be810: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006be813: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006be816: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 006be819: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006be81c: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006be81f: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006be822: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006be825: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006be828: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006be82b: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006be82e: mov edx, 0xa95c80 */ r_edx = 0xa95c80u;
    /* 006be833: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be835: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006be837: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006be83a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006be83d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006be840: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006be843: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006be846: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006be849: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006be84c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006be84f: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006be852: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006be855: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006be858: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006be85b: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006be85e: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006be861: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006be864: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006be867: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006be86a: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006be86d: mov edx, 0xa95c20 */ r_edx = 0xa95c20u;
    /* 006be872: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be874: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006be876: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006be879: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006be87c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006be87f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006be882: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006be885: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006be888: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006be88b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006be88e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006be891: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006be894: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006be897: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006be89a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006be89d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006be8a0: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006be8a3: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006be8a6: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006be8a9: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006be8ac: mov edx, 0xa95bc0 */ r_edx = 0xa95bc0u;
    /* 006be8b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be8b3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006be8b5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006be8b8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006be8bb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006be8be: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006be8c1: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006be8c4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006be8c7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006be8ca: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006be8cd: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006be8d0: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006be8d3: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006be8d6: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006be8d9: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006be8dc: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006be8df: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006be8e2: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006be8e5: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006be8e8: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006be8eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006be8ed: mov dword ptr [0xa95d6c], eax */ W32((u32)(0xa95d6cu), r_eax);
    /* 006be8f2: mov dword ptr [0xa95d68], eax */ W32((u32)(0xa95d68u), r_eax);
    /* 006be8f7: mov edx, 1 */ r_edx = 0x1u;
    /* 006be8fc: mov dword ptr [0xa95d64], eax */ W32((u32)(0xa95d64u), r_eax);
    /* 006be901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006be903: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6be908u); f_007836b0();
    /* 006be908: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006be90b: ret  */ FN_RET(0x006be758); r_esp += 4; return;
}

void f_006be90c(void) /* sub_6BE90C */
{
    FN_ENTER(0x006be90c);
    /* 006be90c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be90d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006be90f: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6be914u); f_00694c6c();
    /* 006be914: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be91a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006be91d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be91f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be921: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be923: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006be92a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6be92fu); f_007c1160();
    /* 006be92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be931: jne 0x6be957 */ if (!fZ) goto L_006be957;
L_006be933:; BB(0x006be933);
    /* 006be933: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6be938u); f_00694c6c();
    /* 006be938: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be93e: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006be941: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be943: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be945: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be947: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006be94e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6be953u); f_007c1160();
    /* 006be953: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006be955: je 0x6be966 */ if (fZ) goto L_006be966;
L_006be957:; BB(0x006be957);
    /* 006be957: call 0x79ac9c */ r_esp -= 4; W32(r_esp, 0x6be95cu); f_0079ac9c();
    /* 006be95c: mov dword ptr [ebp + 0x49c], 0x15 */ W32((u32)(r_ebp+0x49cu), 0x15u);
L_006be966:; BB(0x006be966);
    /* 006be966: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006be967: ret  */ FN_RET(0x006be90c); r_esp += 4; return;
}

void f_006be968(void) /* sub_6BE968 */
{
    FN_ENTER(0x006be968);
    /* 006be968: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be969: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006be96a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006be96b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006be96e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006be970: mov dword ptr [0xa95d6c], 0 */ W32((u32)(0xa95d6cu), 0x0u);
    /* 006be97a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6be97fu); f_00694c6c();
    /* 006be97f: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be985: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006be988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be98a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be98c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be98e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006be995: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6be99au); f_007c1160();
    /* 006be99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be99c: je 0x6be9d4 */ if (fZ) goto L_006be9d4;
L_006be99e:; BB(0x006be99e);
    /* 006be99e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006be9a0: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006be9a2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6be9a7u); f_00792fe8();
    /* 006be9a7: mov edi, eax */ r_edi = r_eax;
    /* 006be9a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006be9ac: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006be9b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be9b4: je 0x6bea5f */ if (fZ) goto L_006bea5f;
L_006be9ba:; BB(0x006be9ba);
    /* 006be9ba: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006be9bd:; BB(0x006be9bd);
    /* 006be9bd: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006be9c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006be9c3: mov ecx, esi */ r_ecx = r_esi;
    /* 006be9c5: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6be9cau); f_006db5d4();
    /* 006be9ca: mov dword ptr [ebp + 0x49c], 4 */ W32((u32)(r_ebp+0x49cu), 0x4u);
L_006be9d4:; BB(0x006be9d4);
    /* 006be9d4: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6be9d9u); f_00694c6c();
    /* 006be9d9: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be9df: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006be9e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be9e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be9e6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006be9e8: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006be9ef: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6be9f4u); f_007c1160();
    /* 006be9f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006be9f6: je 0x6bea28 */ if (fZ) goto L_006bea28;
L_006be9f8:; BB(0x006be9f8);
    /* 006be9f8: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 006be9fa: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6be9ffu); f_007930dc();
    /* 006be9ff: mov edi, eax */ r_edi = r_eax;
    /* 006bea01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bea04: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bea0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bea0c: je 0x6bea2f */ if (fZ) goto L_006bea2f;
L_006bea0e:; BB(0x006bea0e);
    /* 006bea0e: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bea11:; BB(0x006bea11);
    /* 006bea11: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bea16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bea17: mov ecx, esi */ r_ecx = r_esi;
    /* 006bea19: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bea1eu); f_006db5d4();
    /* 006bea1e: mov dword ptr [ebp + 0x49c], 0x14 */ W32((u32)(r_ebp+0x49cu), 0x14u);
L_006bea28:; BB(0x006bea28);
    /* 006bea28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bea2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bea2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bea2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bea2e: ret  */ FN_RET(0x006be968); r_esp += 4; return;
L_006bea2f:; BB(0x006bea2f);
    /* 006bea2f: mov dword ptr [esp + 8], 0x43de0000 */ W32((u32)(r_esp+0x8u), 0x43de0000u);
    /* 006bea37: mov dword ptr [esp + 0xc], 0x42a80000 */ W32((u32)(r_esp+0xcu), 0x42a80000u);
    /* 006bea3f: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bea41: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bea46u); f_0073ec50();
    /* 006bea46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bea47: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 006bea4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bea4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bea4d: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bea50: mov ecx, esi */ r_ecx = r_esi;
    /* 006bea52: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bea57u); f_006dbcf0();
    /* 006bea57: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bea5d: jmp 0x6bea11 */ goto L_006bea11;
L_006bea5f:; BB(0x006bea5f);
    /* 006bea5f: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bea66: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bea6e: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bea70: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bea75u); f_0073ec50();
    /* 006bea75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bea76: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bea79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bea7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bea7b: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bea7e: mov ecx, esi */ r_ecx = r_esi;
    /* 006bea80: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bea85u); f_006dbcf0();
    /* 006bea85: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bea8b: jmp 0x6be9bd */ goto L_006be9bd;
}

void f_006bea90(void) /* sub_6BEA90 */
{
    FN_ENTER(0x006bea90);
    /* 006bea90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bea91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bea92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bea93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bea96: mov edi, ecx */ r_edi = r_ecx;
    /* 006bea98: mov eax, dword ptr [edi + 0x494] */ r_eax = R32((u32)(r_edi+0x494u));
    /* 006bea9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beaa0: je 0x6beab5 */ if (fZ) goto L_006beab5;
L_006beaa2:; BB(0x006beaa2);
    /* 006beaa2: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 006beaa5: call 0x6db7b8 */ r_esp -= 4; W32(r_esp, 0x6beaaau); f_006db7b8();
    /* 006beaaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beaac: jne 0x6beab5 */ if (!fZ) goto L_006beab5;
L_006beaae:; BB(0x006beaae);
    /* 006beaae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beab2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beab3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006beab4: ret  */ FN_RET(0x006bea90); r_esp += 4; return;
L_006beab5:; BB(0x006beab5);
    /* 006beab5: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6beabau); f_00694c6c();
    /* 006beaba: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006beac0: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006beac3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006beac5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006beac7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006beac9: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bead0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bead5u); f_007c1160();
    /* 006bead5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bead7: jne 0x6beafd */ if (!fZ) goto L_006beafd;
L_006bead9:; BB(0x006bead9);
    /* 006bead9: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6beadeu); f_00694c6c();
    /* 006beade: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006beae4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006beae7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006beae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006beaeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006beaed: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006beaf4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6beaf9u); f_007c1160();
    /* 006beaf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beafb: je 0x6beb2f */ if (fZ) goto L_006beb2f;
L_006beafd:; BB(0x006beafd);
    /* 006beafd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006beaff: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006beb01: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6beb06u); f_00792fe8();
    /* 006beb06: mov esi, eax */ r_esi = r_eax;
    /* 006beb08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006beb0b: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006beb11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beb13: je 0x6beb36 */ if (fZ) goto L_006beb36;
L_006beb15:; BB(0x006beb15);
    /* 006beb15: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
L_006beb18:; BB(0x006beb18);
    /* 006beb18: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006beb1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006beb1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006beb20: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6beb25u); f_006db5d4();
    /* 006beb25: mov dword ptr [edi + 0x49c], 4 */ W32((u32)(r_edi+0x49cu), 0x4u);
L_006beb2f:; BB(0x006beb2f);
    /* 006beb2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beb32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beb33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beb34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006beb35: ret  */ FN_RET(0x006bea90); r_esp += 4; return;
L_006beb36:; BB(0x006beb36);
    /* 006beb36: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006beb3d: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006beb45: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006beb47: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6beb4cu); f_0073ec50();
    /* 006beb4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006beb4d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006beb50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006beb51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006beb52: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 006beb55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006beb57: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6beb5cu); f_006dbcf0();
    /* 006beb5c: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006beb62: jmp 0x6beb18 */ goto L_006beb18;
}

void f_006beb64(void) /* sub_6BEB64 */
{
    FN_ENTER(0x006beb64);
    /* 006beb64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006beb65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006beb66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006beb67: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006beb6a: mov edi, ecx */ r_edi = r_ecx;
    /* 006beb6c: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006beb72: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6beb77u); f_006dc358();
    /* 006beb77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006beb78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beb7a: jne 0x6bec00 */ if (!fZ) goto L_006bec00;
L_006beb80:; BB(0x006beb80);
    /* 006beb80: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 006beb86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beb88: je 0x6beb9b */ if (fZ) goto L_006beb9b;
L_006beb8a:; BB(0x006beb8a);
    /* 006beb8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006beb8b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6beb90u); f_0082e960();
    /* 006beb90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006beb91: mov dword ptr [edi + 0x460], 0 */ W32((u32)(r_edi+0x460u), 0x0u);
L_006beb9b:; BB(0x006beb9b);
    /* 006beb9b: mov edx, dword ptr [edi + 0x48c] */ r_edx = R32((u32)(r_edi+0x48cu));
    /* 006beba1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beba3: je 0x6bebc6 */ if (fZ) goto L_006bebc6;
L_006beba5:; BB(0x006beba5);
    /* 006beba5: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006bebac: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bebb1: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006bebb4: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006bebbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bebbd: je 0x6bebc6 */ if (fZ) goto L_006bebc6;
L_006bebbf:; BB(0x006bebbf);
    /* 006bebbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bebc1: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6bebc6u); f_00760acc();
L_006bebc6:; BB(0x006bebc6);
    /* 006bebc6: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 006bebc8: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bebcdu); f_007930dc();
    /* 006bebcd: mov esi, eax */ r_esi = r_eax;
    /* 006bebcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bebd2: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006bebd8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bebda: je 0x6bec07 */ if (fZ) goto L_006bec07;
L_006bebdc:; BB(0x006bebdc);
    /* 006bebdc: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
L_006bebdf:; BB(0x006bebdf);
    /* 006bebdf: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bebe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bebe5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bebe7: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bebecu); f_006db5d4();
    /* 006bebec: mov dword ptr [edi + 0x49c], 0x13 */ W32((u32)(r_edi+0x49cu), 0x13u);
    /* 006bebf6: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
L_006bec00:; BB(0x006bec00);
    /* 006bec00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bec03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bec04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bec05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bec06: ret  */ FN_RET(0x006beb64); r_esp += 4; return;
L_006bec07:; BB(0x006bec07);
    /* 006bec07: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bec0e: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bec16: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bec18: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bec1du); f_0073ec50();
    /* 006bec1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bec1e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bec21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bec22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bec23: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 006bec26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bec28: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bec2du); f_006dbcf0();
    /* 006bec2d: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006bec33: jmp 0x6bebdf */ goto L_006bebdf;
}

void f_006bec38(void) /* sub_6BEC38 */
{
    FN_ENTER(0x006bec38);
    /* 006bec38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bec39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bec3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bec3b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bec3e: mov esi, ecx */ r_esi = r_ecx;
    /* 006bec40: push dword ptr [esi + 0x46c] */ { u32 v = R32((u32)(r_esi+0x46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bec46: push dword ptr [esi + 0x460] */ { u32 v = R32((u32)(r_esi+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bec4c: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006bec56: push 0x96bfa0 */ { u32 v = 0x96bfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bec5b: push dword ptr [esi + 0x45c] */ { u32 v = R32((u32)(r_esi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bec61: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6bec66u); f_00828928();
    /* 006bec66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bec69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bec6b: jne 0x6becd2 */ if (!fZ) goto L_006becd2;
L_006bec6d:; BB(0x006bec6d);
    /* 006bec6d: mov dword ptr [esi + 0x49c], 0x10 */ W32((u32)(r_esi+0x49cu), 0x10u);
    /* 006bec77: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bec79: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bec7eu); f_007930dc();
    /* 006bec7e: mov ebp, eax */ r_ebp = r_eax;
    /* 006bec80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bec83: mov edx, dword ptr [esi + 0x494] */ r_edx = R32((u32)(r_esi+0x494u));
    /* 006bec89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bec8b: je 0x6beca4 */ if (fZ) goto L_006beca4;
L_006bec8d:; BB(0x006bec8d);
    /* 006bec8d: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
L_006bec90:; BB(0x006bec90);
    /* 006bec90: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bec95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bec96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bec98: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bec9du); f_006db5d4();
    /* 006bec9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beca0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006beca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beca2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beca3: ret  */ FN_RET(0x006bec38); r_esp += 4; return;
L_006beca4:; BB(0x006beca4);
    /* 006beca4: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006becab: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006becb3: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006becb5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6becbau); f_0073ec50();
    /* 006becba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006becbb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006becbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006becbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006becc0: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 006becc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006becc5: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6beccau); f_006dbcf0();
    /* 006becca: mov dword ptr [esi + 0x494], eax */ W32((u32)(r_esi+0x494u), r_eax);
    /* 006becd0: jmp 0x6bec90 */ goto L_006bec90;
L_006becd2:; BB(0x006becd2);
    /* 006becd2: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006becdc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006becdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bece0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bece1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bece2: ret  */ FN_RET(0x006bec38); r_esp += 4; return;
}

void f_006bece4(void) /* sub_6BECE4 */
{
    FN_ENTER(0x006bece4);
    /* 006bece4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bece5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bece6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bece7: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006becea: mov edi, ecx */ r_edi = r_ecx;
    /* 006becec: movsx eax, byte ptr [0xa95d50] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa95d50u));
    /* 006becf3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006becf6: je 0x6bed33 */ if (fZ) goto L_006bed33;
L_006becf8:; BB(0x006becf8);
    /* 006becf8: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 006becfa: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6becffu); f_007930dc();
    /* 006becff: mov esi, eax */ r_esi = r_eax;
    /* 006bed01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bed04: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006bed0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bed0c: je 0x6bef01 */ if (fZ) goto L_006bef01;
L_006bed12:; BB(0x006bed12);
    /* 006bed12: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
L_006bed15:; BB(0x006bed15);
    /* 006bed15: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bed1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bed1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bed1d: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bed22u); f_006db5d4();
    /* 006bed22: mov dword ptr [edi + 0x49c], 0x13 */ W32((u32)(r_edi+0x49cu), 0x13u);
    /* 006bed2c: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bed2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bed30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bed31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bed32: ret  */ FN_RET(0x006bece4); r_esp += 4; return;
L_006bed33:; BB(0x006bed33);
    /* 006bed33: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 006bed39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bed3b: jl 0x6beef0 */ if ((fS!=fO)) goto L_006beef0;
L_006bed41:; BB(0x006bed41);
    /* 006bed41: mov eax, dword ptr [0xa95c64] */ r_eax = R32((u32)(0xa95c64u));
    /* 006bed46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bed48: jle 0x6beef0 */ if ((fZ||fS!=fO)) goto L_006beef0;
L_006bed4e:; BB(0x006bed4e);
    /* 006bed4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bed4f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bed54u); f_006dc358();
    /* 006bed54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bed55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bed57: jne 0x6beefa */ if (!fZ) goto L_006beefa;
L_006bed5d:; BB(0x006bed5d);
    /* 006bed5d: mov edx, dword ptr [edi + 0x46c] */ r_edx = R32((u32)(r_edi+0x46cu));
    /* 006bed63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bed65: jle 0x6bef34 */ if ((fZ||fS!=fO)) goto L_006bef34;
L_006bed6b:; BB(0x006bed6b);
    /* 006bed6b: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 006bed71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bed73: je 0x6bed8c */ if (fZ) goto L_006bed8c;
L_006bed75:; BB(0x006bed75);
    /* 006bed75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bed76: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bed7bu); f_0082e960();
    /* 006bed7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bed7c: mov edx, dword ptr [edi + 0x46c] */ r_edx = R32((u32)(r_edi+0x46cu));
    /* 006bed82: mov dword ptr [edi + 0x460], 0 */ W32((u32)(r_edi+0x460u), 0x0u);
L_006bed8c:; BB(0x006bed8c);
    /* 006bed8c: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bed8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bed90: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bed95u); f_0082e940();
    /* 006bed95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bed96: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 006bed9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bed9e: je 0x6beedf */ if (fZ) goto L_006beedf;
L_006beda4:; BB(0x006beda4);
    /* 006beda4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006beda6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006beda9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006bedad: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006bedb1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006bedb5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006bedb9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006bedbd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006bedc1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006bedc5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006bedc9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006bedcd: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006bedd1: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006bedd5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006bedd9: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006beddd: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006bede1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006bede5: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006bede9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006beded: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006bedf1: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006bedf5: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006bedf9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006bedfd: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006bee01: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006bee05: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006bee08: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006bee0a: push 0x9ceab4 */ { u32 v = 0x9ceab4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bee0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bee10: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bee15u); f_00858900();
    /* 006bee15: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 006bee19: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bee1b: push 0xa95c40 */ { u32 v = 0xa95c40u; r_esp -= 4; W32(r_esp, v); }
    /* 006bee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bee21: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bee26u); f_00858900();
    /* 006bee26: mov esi, 0xa95e4c */ r_esi = 0xa95e4cu;
    /* 006bee2b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006bee2d: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006bee30: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 006bee33: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006bee37: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006bee3a: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006bee3e: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 006bee42: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006bee46: mov ebp, dword ptr [0xa95c68] */ r_ebp = R32((u32)(0xa95c68u));
    /* 006bee4c: mov esi, dword ptr [0xa95c64] */ r_esi = R32((u32)(0xa95c64u));
    /* 006bee52: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 006bee56: mov dword ptr [esp + 0x74], esi */ W32((u32)(r_esp+0x74u), r_esi);
    /* 006bee5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bee5c: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006bee60: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006bee64: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006bee68: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006bee6c: mov edx, 1 */ r_edx = 0x1u;
    /* 006bee71: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 006bee76: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 006bee7b: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 006bee80: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006bee82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bee83: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bee88u); f_0061cdb0();
    /* 006bee88: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006bee8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bee8d: push dword ptr [edi + 0x460] */ { u32 v = R32((u32)(r_edi+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bee93: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6bee98u); f_0082c34c();
    /* 006bee98: mov ebp, eax */ r_ebp = r_eax;
    /* 006bee9a: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006bee9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bee9f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6beea4u); f_0061cdb0();
    /* 006beea4: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006beea7: cmp ebp, 0xffffff00 */ {  u32 a = r_ebp; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beead: jne 0x6beec0 */ if (!fZ) goto L_006beec0;
L_006beeaf:; BB(0x006beeaf);
    /* 006beeaf: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006beeb9: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beebc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006beebf: ret  */ FN_RET(0x006bece4); r_esp += 4; return;
L_006beec0:; BB(0x006beec0);
    /* 006beec0: cmp ebp, dword ptr [edi + 0x46c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x46cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006beec6: je 0x6beece */ if (fZ) goto L_006beece;
L_006beec8:; BB(0x006beec8);
    /* 006beec8: mov dword ptr [edi + 0x46c], ebp */ W32((u32)(r_edi+0x46cu), r_ebp);
L_006beece:; BB(0x006beece);
    /* 006beece: mov dword ptr [edi + 0x49c], 0xf */ W32((u32)(r_edi+0x49cu), 0xfu);
    /* 006beed8: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beedb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beedc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beedd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006beede: ret  */ FN_RET(0x006bece4); r_esp += 4; return;
L_006beedf:; BB(0x006beedf);
    /* 006beedf: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006beee9: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beeec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beeed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beeee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006beeef: ret  */ FN_RET(0x006bece4); r_esp += 4; return;
L_006beef0:; BB(0x006beef0);
    /* 006beef0: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
L_006beefa:; BB(0x006beefa);
    /* 006beefa: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006beefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006beefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006beeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bef00: ret  */ FN_RET(0x006bece4); r_esp += 4; return;
L_006bef01:; BB(0x006bef01);
    /* 006bef01: mov dword ptr [esp + 0x60], 0x43de0000 */ W32((u32)(r_esp+0x60u), 0x43de0000u);
    /* 006bef09: mov dword ptr [esp + 0x64], 0x42a80000 */ W32((u32)(r_esp+0x64u), 0x42a80000u);
    /* 006bef11: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bef13: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bef18u); f_0073ec50();
    /* 006bef18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bef19: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 006bef1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bef1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bef1f: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 006bef22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bef24: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bef29u); f_006dbcf0();
    /* 006bef29: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006bef2f: jmp 0x6bed15 */ goto L_006bed15;
L_006bef34:; BB(0x006bef34);
    /* 006bef34: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006bef3e: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bef41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bef42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bef43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bef44: ret  */ FN_RET(0x006bece4); r_esp += 4; return;
}

void f_006bef48(void) /* sub_6BEF48 */
{
    FN_ENTER(0x006bef48);
    /* 006bef48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bef49: mov edi, ecx */ r_edi = r_ecx;
    /* 006bef4b: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bef51: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bef56u); f_006dc358();
    /* 006bef56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bef57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bef59: jne 0x6befb5 */ if (!fZ) goto L_006befb5;
L_006bef5b:; BB(0x006bef5b);
    /* 006bef5b: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 006bef61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bef63: je 0x6bef76 */ if (fZ) goto L_006bef76;
L_006bef65:; BB(0x006bef65);
    /* 006bef65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bef66: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bef6bu); f_0082e960();
    /* 006bef6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bef6c: mov dword ptr [edi + 0x460], 0 */ W32((u32)(r_edi+0x460u), 0x0u);
L_006bef76:; BB(0x006bef76);
    /* 006bef76: mov edx, dword ptr [edi + 0x48c] */ r_edx = R32((u32)(r_edi+0x48cu));
    /* 006bef7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bef7e: je 0x6befa1 */ if (fZ) goto L_006befa1;
L_006bef80:; BB(0x006bef80);
    /* 006bef80: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006bef87: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bef8c: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006bef8f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006bef96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bef98: je 0x6befa1 */ if (fZ) goto L_006befa1;
L_006bef9a:; BB(0x006bef9a);
    /* 006bef9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bef9c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6befa1u); f_00760acc();
L_006befa1:; BB(0x006befa1);
    /* 006befa1: mov dword ptr [edi + 0x49c], 0xe */ W32((u32)(r_edi+0x49cu), 0xeu);
    /* 006befab: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
L_006befb5:; BB(0x006befb5);
    /* 006befb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006befb6: ret  */ FN_RET(0x006bef48); r_esp += 4; return;
}

void f_006befb8(void) /* sub_6BEFB8 */
{
    FN_ENTER(0x006befb8);
    /* 006befb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006befb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006befba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006befbb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006befbe: mov edi, ecx */ r_edi = r_ecx;
    /* 006befc0: push dword ptr [edi + 0x468] */ { u32 v = R32((u32)(r_edi+0x468u)); r_esp -= 4; W32(r_esp, v); }
    /* 006befc6: push dword ptr [edi + 0x460] */ { u32 v = R32((u32)(r_edi+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 006befcc: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006befd6: lea eax, [edi + 0x47d] */ r_eax = (u32)(r_edi+0x47du);
    /* 006befdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006befdd: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006befe3: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6befe8u); f_00828928();
    /* 006befe8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006befeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006befed: jne 0x6bf054 */ if (!fZ) goto L_006bf054;
L_006befef:; BB(0x006befef);
    /* 006befef: mov dword ptr [edi + 0x49c], 0xd */ W32((u32)(r_edi+0x49cu), 0xdu);
    /* 006beff9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006beffb: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bf000u); f_007930dc();
    /* 006bf000: mov ebp, eax */ r_ebp = r_eax;
    /* 006bf002: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf005: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006bf00b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf00d: je 0x6bf026 */ if (fZ) goto L_006bf026;
L_006bf00f:; BB(0x006bf00f);
    /* 006bf00f: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
L_006bf012:; BB(0x006bf012);
    /* 006bf012: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf017: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bf018: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf01a: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf01fu); f_006db5d4();
    /* 006bf01f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf022: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bf023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf024: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf025: ret  */ FN_RET(0x006befb8); r_esp += 4; return;
L_006bf026:; BB(0x006bf026);
    /* 006bf026: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bf02d: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bf035: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf037: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf03cu); f_0073ec50();
    /* 006bf03c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf03d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bf040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf042: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
    /* 006bf045: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf047: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf04cu); f_006dbcf0();
    /* 006bf04c: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006bf052: jmp 0x6bf012 */ goto L_006bf012;
L_006bf054:; BB(0x006bf054);
    /* 006bf054: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006bf05e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf061: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bf062: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf063: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf064: ret  */ FN_RET(0x006befb8); r_esp += 4; return;
}

