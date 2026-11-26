#include "protos.h"

void f_004e90c8(void) /* sub_4E90C8 */
{
    FN_ENTER(0x004e90c8);
    /* 004e90c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e90c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004e90cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e90cd: push 0x8d281a */ { u32 v = 0x8d281au; r_esp -= 4; W32(r_esp, v); }
    /* 004e90d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004e90d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e90d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004e90e0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e90e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004e90e6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004e90e9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004e90ec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004e90ef: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e90f2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004e90f5: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x4e90fau); f_007a9e5c();
    /* 004e90fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e9101: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004e9104: mov dword ptr [edx], 0xafd298 */ W32((u32)(r_edx), 0xafd298u);
    /* 004e910a: mov eax, dword ptr [0x9b1a28] */ r_eax = R32((u32)(0x9b1a28u));
    /* 004e910f: mov ecx, dword ptr [0xa4d7f8] */ r_ecx = R32((u32)(0xa4d7f8u));
    /* 004e9115: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 004e911f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004e9122: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004e9124: mov dword ptr [0xa72128], ebx */ W32((u32)(0xa72128u), r_ebx);
    /* 004e912a: mov dword ptr [0xa72124], ebx */ W32((u32)(0xa72124u), r_ebx);
    /* 004e9130: mov dword ptr [0xa720f0], edx */ W32((u32)(0xa720f0u), r_edx);
    /* 004e9136: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004e9139: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004e913c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9141: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4e9146u); f_008581c5();
    /* 004e9146: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004e9149: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e914c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004e914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9151: je 0x4e9361 */ if (fZ) goto L_004e9361;
L_004e9157:; BB(0x004e9157);
    /* 004e9157: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 004e915e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004e9165: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e9168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e9169: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e916eu); f_004e6f24();
    /* 004e916e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e916f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e9172: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e9174: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9175: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9176: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9177: push dword ptr [eax*4 + 0x9b1620] */ { u32 v = R32((u32)(r_eax*4+0x9b1620u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e917e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9180: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4e9185u); f_005b7a84();
    /* 004e9185: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004e918c:; BB(0x004e918c);
    /* 004e918c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004e918f: mov dword ptr [0xa720f4], eax */ W32((u32)(0xa720f4u), r_eax);
    /* 004e9194: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e919b: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e91a0: mov edx, 0xa70f20 */ r_edx = 0xa70f20u;
    /* 004e91a5: mov ecx, 0xa4d920 */ r_ecx = 0xa4d920u;
    /* 004e91aa: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e91ac: jae 0x4e92a4 */ if (!fC) goto L_004e92a4;
L_004e91b2:; BB(0x004e91b2);
    /* 004e91b2: mov ecx, 0xa4d920 */ r_ecx = 0xa4d920u;
    /* 004e91b7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e91b9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e91bb: cmp ecx, 0x161c */ {  u32 a = r_ecx; u32 b = 0x161cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e91c1: jb 0x4e9279 */ if (fC) goto L_004e9279;
L_004e91c7:; BB(0x004e91c7);
    /* 004e91c7: mov ebx, 0xa6f904 */ r_ebx = 0xa6f904u;
L_004e91cc:; BB(0x004e91cc);
    /* 004e91cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e91ce: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004e91d0: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 004e91d3: mov dword ptr [eax + 0x188], ecx */ W32((u32)(r_eax+0x188u), r_ecx);
    /* 004e91d9: mov dword ptr [eax + 0x2fc], ecx */ W32((u32)(r_eax+0x2fcu), r_ecx);
    /* 004e91df: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004e91e2: mov dword ptr [eax + 0x184], ecx */ W32((u32)(r_eax+0x184u), r_ecx);
    /* 004e91e8: mov dword ptr [eax + 0x2f8], ecx */ W32((u32)(r_eax+0x2f8u), r_ecx);
    /* 004e91ee: mov dword ptr [eax + 0x46c], ecx */ W32((u32)(r_eax+0x46cu), r_ecx);
    /* 004e91f4: mov dword ptr [eax + 0x480], ecx */ W32((u32)(r_eax+0x480u), r_ecx);
    /* 004e91fa: mov dword ptr [eax + 0x5f4], ecx */ W32((u32)(r_eax+0x5f4u), r_ecx);
    /* 004e9200: mov dword ptr [eax + 0x768], ecx */ W32((u32)(r_eax+0x768u), r_ecx);
    /* 004e9206: mov dword ptr [eax + 0x47c], ecx */ W32((u32)(r_eax+0x47cu), r_ecx);
    /* 004e920c: mov dword ptr [eax + 0x5f0], ecx */ W32((u32)(r_eax+0x5f0u), r_ecx);
    /* 004e9212: mov dword ptr [eax + 0x764], ecx */ W32((u32)(r_eax+0x764u), r_ecx);
    /* 004e9218: mov dword ptr [eax + 0x8d8], ecx */ W32((u32)(r_eax+0x8d8u), r_ecx);
    /* 004e921e: mov dword ptr [eax + 0x8ec], ecx */ W32((u32)(r_eax+0x8ecu), r_ecx);
    /* 004e9224: mov dword ptr [eax + 0xa60], ecx */ W32((u32)(r_eax+0xa60u), r_ecx);
    /* 004e922a: mov dword ptr [eax + 0xbd4], ecx */ W32((u32)(r_eax+0xbd4u), r_ecx);
    /* 004e9230: mov dword ptr [eax + 0x8e8], ecx */ W32((u32)(r_eax+0x8e8u), r_ecx);
    /* 004e9236: mov dword ptr [eax + 0xa5c], ecx */ W32((u32)(r_eax+0xa5cu), r_ecx);
    /* 004e923c: mov dword ptr [eax + 0xbd0], ecx */ W32((u32)(r_eax+0xbd0u), r_ecx);
    /* 004e9242: mov dword ptr [eax + 0xd44], ecx */ W32((u32)(r_eax+0xd44u), r_ecx);
    /* 004e9248: mov dword ptr [eax + 0xd58], ecx */ W32((u32)(r_eax+0xd58u), r_ecx);
    /* 004e924e: mov dword ptr [eax + 0xecc], ecx */ W32((u32)(r_eax+0xeccu), r_ecx);
    /* 004e9254: mov dword ptr [eax + 0x1040], ecx */ W32((u32)(r_eax+0x1040u), r_ecx);
    /* 004e925a: mov dword ptr [eax + 0xd54], ecx */ W32((u32)(r_eax+0xd54u), r_ecx);
    /* 004e9260: mov dword ptr [eax + 0xec8], ecx */ W32((u32)(r_eax+0xec8u), r_ecx);
    /* 004e9266: mov dword ptr [eax + 0x103c], ecx */ W32((u32)(r_eax+0x103cu), r_ecx);
    /* 004e926c: add eax, 0x11b0 */ {  u32 a = r_eax; u32 b = 0x11b0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e9271: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004e9273: jbe 0x4e91cc */ if ((fC||fZ)) goto L_004e91cc;
L_004e9279:; BB(0x004e9279);
    /* 004e9279: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e927b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004e927d: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 004e9280: mov dword ptr [eax + 0x188], ecx */ W32((u32)(r_eax+0x188u), r_ecx);
    /* 004e9286: mov dword ptr [eax + 0x2fc], ecx */ W32((u32)(r_eax+0x2fcu), r_ecx);
    /* 004e928c: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004e928f: mov dword ptr [eax + 0x184], ecx */ W32((u32)(r_eax+0x184u), r_ecx);
    /* 004e9295: mov dword ptr [eax + 0x2f8], ecx */ W32((u32)(r_eax+0x2f8u), r_ecx);
    /* 004e929b: add eax, 0x46c */ {  u32 a = r_eax; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e92a0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e92a2: jb 0x4e9279 */ if (fC) goto L_004e9279;
L_004e92a4:; BB(0x004e92a4);
    /* 004e92a4: mov dword ptr [0xa720ec], 0 */ W32((u32)(0xa720ecu), 0x0u);
    /* 004e92ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e92af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e92b1: call 0x4e8994 */ r_esp -= 4; W32(r_esp, 0x4e92b6u); f_004e8994();
    /* 004e92b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e92b7: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004e92ba: mov edx, dword ptr [0xa4d7f4] */ r_edx = R32((u32)(0xa4d7f4u));
    /* 004e92c0: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e92c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e92c6: mov dword ptr [0xa720ec], 0 */ W32((u32)(0xa720ecu), 0x0u);
    /* 004e92d0: mov dword ptr [ebx + 0xd8], 0x9b1580 */ W32((u32)(r_ebx+0xd8u), 0x9b1580u);
    /* 004e92da: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 004e92e0: mov dword ptr [ebx + 0xdc], ecx */ W32((u32)(r_ebx+0xdcu), r_ecx);
    /* 004e92e6: call 0x4e9370 */ r_esp -= 4; W32(r_esp, 0x4e92ebu); f_004e9370();
    /* 004e92eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e92ec: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004e92ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e92f0: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004e92f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004e92f9: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x4e92feu); f_007aa4c8();
    /* 004e92fe: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9303: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4e9308u); f_008581c5();
    /* 004e9308: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9309: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004e930c: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 004e9313: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 004e9319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e931b: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 004e9322: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 004e9325: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 004e9328: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 004e932b: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 004e9332: call 0x4e9a68 */ r_esp -= 4; W32(r_esp, 0x4e9337u); f_004e9a68();
    /* 004e9337: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004e933a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004e933d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e9340: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004e9343: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e9345: mov dword ptr [0xa72120], edx */ W32((u32)(0xa72120u), r_edx);
    /* 004e934b: mov dword ptr [0xa720ac], edx */ W32((u32)(0xa720acu), r_edx);
    /* 004e9351: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e9354: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e935b: mov esp, ebp */ r_esp = r_ebp;
    /* 004e935d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e935e: ret 4 */ FN_RET(0x004e90c8); r_esp += 8; return;
L_004e9361:; BB(0x004e9361);
    /* 004e9361: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e9363: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004e9366: jmp 0x4e918c */ goto L_004e918c;
}

void f_004e9370(void) /* sub_4E9370 */
{
    FN_ENTER(0x004e9370);
    /* 004e9370: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e9375: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004e9378: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e937b: jne 0x4e938c */ if (!fZ) goto L_004e938c;
L_004e937d:; BB(0x004e937d);
    /* 004e937d: movsx eax, byte ptr [eax + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x31u));
    /* 004e9381: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e9384: je 0x4e938f */ if (fZ) goto L_004e938f;
L_004e9386:; BB(0x004e9386);
    /* 004e9386: mov eax, 1 */ r_eax = 0x1u;
    /* 004e938b: ret  */ FN_RET(0x004e9370); r_esp += 4; return;
L_004e938c:; BB(0x004e938c);
    /* 004e938c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e938e: ret  */ FN_RET(0x004e9370); r_esp += 4; return;
L_004e938f:; BB(0x004e938f);
    /* 004e938f: mov eax, 2 */ r_eax = 0x2u;
    /* 004e9394: ret  */ FN_RET(0x004e9370); r_esp += 4; return;
}

void f_004e9398(void) /* sub_4E9398 */
{
    FN_ENTER(0x004e9398);
    /* 004e9398: mov edx, dword ptr [0xa72128] */ r_edx = R32((u32)(0xa72128u));
    /* 004e939e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e93a1: mov eax, 0 */ r_eax = 0x0u;
    /* 004e93a6: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004e93a9: ret  */ FN_RET(0x004e9398); r_esp += 4; return;
}

void f_004e93ac(void) /* sub_4E93AC */
{
    FN_ENTER(0x004e93ac);
    /* 004e93ac: mov eax, dword ptr [0xa72124] */ r_eax = R32((u32)(0xa72124u));
    /* 004e93b1: ret  */ FN_RET(0x004e93ac); r_esp += 4; return;
}

void f_004e93b4(void) /* sub_4E93B4 */
{
    FN_ENTER(0x004e93b4);
    /* 004e93b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e93b5: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004e93b9: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004e93bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e93be: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004e93c2: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004e93c5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e93c7: mov esi, dword ptr [esi + 0x9b16e0] */ r_esi = R32((u32)(r_esi+0x9b16e0u));
    /* 004e93cd: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e93d0: je 0x4e93db */ if (fZ) goto L_004e93db;
L_004e93d2:; BB(0x004e93d2);
    /* 004e93d2: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e93d5: jne 0x4e93e0 */ if (!fZ) goto L_004e93e0;
L_004e93d7:; BB(0x004e93d7);
    /* 004e93d7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004e93d9: jmp 0x4e93e0 */ goto L_004e93e0;
L_004e93db:; BB(0x004e93db);
    /* 004e93db: mov esi, 4 */ r_esi = 0x4u;
L_004e93e0:; BB(0x004e93e0);
    /* 004e93e0: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 004e93e2: mov esi, dword ptr [eax + ecx*8 + 0x9b16e4] */ r_esi = R32((u32)(r_eax+r_ecx*8+0x9b16e4u));
    /* 004e93e9: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e93ec: je 0x4e93f7 */ if (fZ) goto L_004e93f7;
L_004e93ee:; BB(0x004e93ee);
    /* 004e93ee: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e93f1: jne 0x4e93fc */ if (!fZ) goto L_004e93fc;
L_004e93f3:; BB(0x004e93f3);
    /* 004e93f3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004e93f5: jmp 0x4e93fc */ goto L_004e93fc;
L_004e93f7:; BB(0x004e93f7);
    /* 004e93f7: mov esi, 4 */ r_esi = 0x4u;
L_004e93fc:; BB(0x004e93fc);
    /* 004e93fc: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 004e93ff: mov eax, dword ptr [eax + ecx*8 + 0x9b16e8] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x9b16e8u));
    /* 004e9406: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e9409: je 0x4e9414 */ if (fZ) goto L_004e9414;
L_004e940b:; BB(0x004e940b);
    /* 004e940b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e940e: jne 0x4e9419 */ if (!fZ) goto L_004e9419;
L_004e9410:; BB(0x004e9410);
    /* 004e9410: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e9412: jmp 0x4e9419 */ goto L_004e9419;
L_004e9414:; BB(0x004e9414);
    /* 004e9414: mov eax, 4 */ r_eax = 0x4u;
L_004e9419:; BB(0x004e9419);
    /* 004e9419: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004e941c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e941d: ret  */ FN_RET(0x004e93b4); r_esp += 4; return;
}

void f_004e9420(void) /* sub_4E9420 */
{
    FN_ENTER(0x004e9420);
    /* 004e9420: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9421: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9422: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9423: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004e9427: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004e942b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e942c: call 0x4e686c */ r_esp -= 4; W32(r_esp, 0x4e9431u); f_004e686c();
    /* 004e9431: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9432: mov eax, esi */ r_eax = r_esi;
    /* 004e9434: call 0x4e877c */ r_esp -= 4; W32(r_esp, 0x4e9439u); f_004e877c();
    /* 004e9439: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e943c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e943e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004e9441: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e9443: mov ecx, dword ptr [ecx + 0x9b16e0] */ r_ecx = R32((u32)(r_ecx+0x9b16e0u));
    /* 004e9449: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e944c: je 0x4e9457 */ if (fZ) goto L_004e9457;
L_004e944e:; BB(0x004e944e);
    /* 004e944e: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9451: jne 0x4e945c */ if (!fZ) goto L_004e945c;
L_004e9453:; BB(0x004e9453);
    /* 004e9453: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e9455: jmp 0x4e945c */ goto L_004e945c;
L_004e9457:; BB(0x004e9457);
    /* 004e9457: mov ecx, 4 */ r_ecx = 0x4u;
L_004e945c:; BB(0x004e945c);
    /* 004e945c: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 004e945e: mov ecx, dword ptr [edx + eax*8 + 0x9b16e4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x9b16e4u));
    /* 004e9465: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9468: je 0x4e9473 */ if (fZ) goto L_004e9473;
L_004e946a:; BB(0x004e946a);
    /* 004e946a: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e946d: jne 0x4e9478 */ if (!fZ) goto L_004e9478;
L_004e946f:; BB(0x004e946f);
    /* 004e946f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e9471: jmp 0x4e9478 */ goto L_004e9478;
L_004e9473:; BB(0x004e9473);
    /* 004e9473: mov ecx, 4 */ r_ecx = 0x4u;
L_004e9478:; BB(0x004e9478);
    /* 004e9478: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 004e947b: mov eax, dword ptr [edx + eax*8 + 0x9b16e8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x9b16e8u));
    /* 004e9482: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9485: je 0x4e9490 */ if (fZ) goto L_004e9490;
L_004e9487:; BB(0x004e9487);
    /* 004e9487: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e948a: jne 0x4e9495 */ if (!fZ) goto L_004e9495;
L_004e948c:; BB(0x004e948c);
    /* 004e948c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e948e: jmp 0x4e9495 */ goto L_004e9495;
L_004e9490:; BB(0x004e9490);
    /* 004e9490: mov eax, 4 */ r_eax = 0x4u;
L_004e9495:; BB(0x004e9495);
    /* 004e9495: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004e9498: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004e949a:; BB(0x004e949a);
    /* 004e949a: mov edx, 2 */ r_edx = 0x2u;
    /* 004e949f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e94a2: jge 0x4e94bf */ if ((fS==fO)) goto L_004e94bf;
L_004e94a4:; BB(0x004e94a4);
    /* 004e94a4: mov ecx, dword ptr [ebx + edx*4] */ r_ecx = R32((u32)(r_ebx+r_edx*4));
    /* 004e94a7: cmp ecx, dword ptr [ebx + edx*4 - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_edx*4+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e94ab: jge 0x4e94b8 */ if ((fS==fO)) goto L_004e94b8;
L_004e94ad:; BB(0x004e94ad);
    /* 004e94ad: mov esi, dword ptr [ebx + edx*4 - 4] */ r_esi = R32((u32)(r_ebx+r_edx*4+0xfffffffcu));
    /* 004e94b1: mov dword ptr [ebx + edx*4 - 4], ecx */ W32((u32)(r_ebx+r_edx*4+0xfffffffcu), r_ecx);
    /* 004e94b5: mov dword ptr [ebx + edx*4], esi */ W32((u32)(r_ebx+r_edx*4), r_esi);
L_004e94b8:; BB(0x004e94b8);
    /* 004e94b8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e94bb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e94bd: jg 0x4e94a4 */ if ((!fZ&&fS==fO)) goto L_004e94a4;
L_004e94bf:; BB(0x004e94bf);
    /* 004e94bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e94c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e94c5: jl 0x4e949a */ if ((fS!=fO)) goto L_004e949a;
L_004e94c7:; BB(0x004e94c7);
    /* 004e94c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e94c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e94c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e94ca: ret  */ FN_RET(0x004e9420); r_esp += 4; return;
}

void f_004e94cc(void) /* sub_4E94CC */
{
    FN_ENTER(0x004e94cc);
    /* 004e94cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e94cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e94ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e94cf: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004e94d3: mov ecx, dword ptr [0xa72098] */ r_ecx = R32((u32)(0xa72098u));
    /* 004e94d9: mov edx, dword ptr [0xa7209c] */ r_edx = R32((u32)(0xa7209cu));
    /* 004e94df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e94e1: mov dword ptr [0xa720f8], ecx */ W32((u32)(0xa720f8u), r_ecx);
    /* 004e94e7: mov dword ptr [0xa720fc], edx */ W32((u32)(0xa720fcu), r_edx);
    /* 004e94ed: mov dword ptr [0xa72100], ecx */ W32((u32)(0xa72100u), r_ecx);
    /* 004e94f3: mov dword ptr [0xa72104], edx */ W32((u32)(0xa72104u), r_edx);
    /* 004e94f9: mov dword ptr [0xa72108], ecx */ W32((u32)(0xa72108u), r_ecx);
    /* 004e94ff: mov dword ptr [0xa7210c], edx */ W32((u32)(0xa7210cu), r_edx);
    /* 004e9505: mov dword ptr [0xa72110], ecx */ W32((u32)(0xa72110u), r_ecx);
    /* 004e950b: mov dword ptr [0xa72114], edx */ W32((u32)(0xa72114u), r_edx);
    /* 004e9511: mov dword ptr [0xa72118], ecx */ W32((u32)(0xa72118u), r_ecx);
    /* 004e9517: mov dword ptr [0xa7211c], edx */ W32((u32)(0xa7211cu), r_edx);
L_004e951d:; BB(0x004e951d);
    /* 004e951d: mov dword ptr [eax + 0xa71f80], ecx */ W32((u32)(r_eax+0xa71f80u), r_ecx);
    /* 004e9523: mov dword ptr [eax + 0xa71f84], edx */ W32((u32)(r_eax+0xa71f84u), r_edx);
    /* 004e9529: mov dword ptr [eax + 0xa71f88], ecx */ W32((u32)(r_eax+0xa71f88u), r_ecx);
    /* 004e952f: mov dword ptr [eax + 0xa71f8c], edx */ W32((u32)(r_eax+0xa71f8cu), r_edx);
    /* 004e9535: mov dword ptr [eax + 0xa71f90], ecx */ W32((u32)(r_eax+0xa71f90u), r_ecx);
    /* 004e953b: mov dword ptr [eax + 0xa71f94], edx */ W32((u32)(r_eax+0xa71f94u), r_edx);
    /* 004e9541: mov dword ptr [eax + 0xa71f98], ecx */ W32((u32)(r_eax+0xa71f98u), r_ecx);
    /* 004e9547: mov dword ptr [eax + 0xa71f9c], edx */ W32((u32)(r_eax+0xa71f9cu), r_edx);
    /* 004e954d: mov dword ptr [eax + 0xa71fa0], ecx */ W32((u32)(r_eax+0xa71fa0u), r_ecx);
    /* 004e9553: mov dword ptr [eax + 0xa71fa4], edx */ W32((u32)(r_eax+0xa71fa4u), r_edx);
    /* 004e9559: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e955c: cmp eax, 0x118 */ {  u32 a = r_eax; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e9561: jl 0x4e951d */ if ((fS!=fO)) goto L_004e951d;
L_004e9563:; BB(0x004e9563);
    /* 004e9563: mov ebp, 0xa71d60 */ r_ebp = 0xa71d60u;
    /* 004e9568: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004e956a:; BB(0x004e956a);
    /* 004e956a: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 004e956d: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 004e9570: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 004e9573: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 004e9576: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 004e9579: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 004e957c: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 004e957f: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 004e9582: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 004e9585: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 004e9588: add ebp, 0x28 */ {  u32 a = r_ebp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e958b: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e958e: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e9591: jl 0x4e956a */ if ((fS!=fO)) goto L_004e956a;
L_004e9593:; BB(0x004e9593);
    /* 004e9593: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004e9595:; BB(0x004e9595);
    /* 004e9595: lea esi, [eax + 0xa70f20] */ r_esi = (u32)(r_eax+0xa70f20u);
    /* 004e959b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e959d:; BB(0x004e959d);
    /* 004e959d: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004e959f: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 004e95a2: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004e95a5: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004e95a8: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004e95ab: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004e95ae: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004e95b1: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004e95b4: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004e95b7: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004e95ba: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e95bd: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e95c0: cmp ebp, 0x41 */ {  u32 a = r_ebp; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e95c3: jl 0x4e959d */ if ((fS!=fO)) goto L_004e959d;
L_004e95c5:; BB(0x004e95c5);
    /* 004e95c5: add eax, 0x208 */ {  u32 a = r_eax; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e95ca: cmp eax, 0xe38 */ {  u32 a = r_eax; u32 b = 0xe38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e95cf: jl 0x4e9595 */ if ((fS!=fO)) goto L_004e9595;
L_004e95d1:; BB(0x004e95d1);
    /* 004e95d1: push 0xa720f8 */ { u32 v = 0xa720f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004e95d6: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e95d9: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e95deu); f_007aaed0();
    /* 004e95de: push 0xa71d60 */ { u32 v = 0xa71d60u; r_esp -= 4; W32(r_esp, v); }
    /* 004e95e3: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e95e6: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e95ebu); f_007aaed0();
    /* 004e95eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e95ee: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e95f0:; BB(0x004e95f0);
    /* 004e95f0: mov esi, dword ptr [edi + ebp*4 + 0xc] */ r_esi = R32((u32)(r_edi+r_ebp*4+0xcu));
    /* 004e95f4: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 004e95f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e95f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e95fb: lea edx, [eax + eax + 0xa71f80] */ r_edx = (u32)(r_eax+r_eax+0xa71f80u);
    /* 004e9602: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9603: push dword ptr [edi + ebp*4 + 0x18] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9607: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e960cu); f_007aaed0();
    /* 004e960c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e960e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9610: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9612: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004e9615: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e9617: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e9619: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e961b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e961d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e961f: lea edx, [esi + eax + 0xa70f20] */ r_edx = (u32)(r_esi+r_eax+0xa70f20u);
    /* 004e9626: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9627: push dword ptr [edi + ebp*4 + 0x24] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e962b: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e9630u); f_007aaed0();
    /* 004e9630: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e9633: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e9636: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e9639: jl 0x4e95f0 */ if ((fS!=fO)) goto L_004e95f0;
L_004e963b:; BB(0x004e963b);
    /* 004e963b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e963c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e963d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e963e: ret  */ FN_RET(0x004e94cc); r_esp += 4; return;
}

void f_004e9640(void) /* sub_4E9640 */
{
    FN_ENTER(0x004e9640);
    /* 004e9640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9641: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9642: mov ebp, dword ptr [0xa720f0] */ r_ebp = R32((u32)(0xa720f0u));
    /* 004e9648: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e964a: je 0x4e966f */ if (fZ) goto L_004e966f;
L_004e964c:; BB(0x004e964c);
    /* 004e964c: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e9651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e9653: je 0x4e966f */ if (fZ) goto L_004e966f;
L_004e9655:; BB(0x004e9655);
    /* 004e9655: call 0x4e9370 */ r_esp -= 4; W32(r_esp, 0x4e965au); f_004e9370();
    /* 004e965a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004e965e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004e9661: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e9663: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9665: mov word ptr [ebp + 0xb8], cx */ W16((u32)(r_ebp+0xb8u), (u16)r_ecx);
    /* 004e966c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e966d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e966e: ret  */ FN_RET(0x004e9640); r_esp += 4; return;
L_004e966f:; BB(0x004e966f);
    /* 004e966f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9670: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9671: ret  */ FN_RET(0x004e9640); r_esp += 4; return;
}

void f_004e96c8(void) /* sub_4E96C8 */
{
    FN_ENTER(0x004e96c8);
    /* 004e96c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e96c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e96ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e96cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e96cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e96cf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e96d1: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e96d6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004e96d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e96da: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e96dfu); f_004e6f24();
    /* 004e96df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e96e0: mov ecx, dword ptr [0xa720f4] */ r_ecx = R32((u32)(0xa720f4u));
    /* 004e96e6: mov dword ptr [0xa720b0], 1 */ W32((u32)(0xa720b0u), 0x1u);
    /* 004e96f0: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 004e96f3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e96f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e96f7: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004e96f9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e96fb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e96fd: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004e96ff: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4e9704u); f_005b8610();
    /* 004e9704: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004e9707: mov edi, dword ptr [ebp*4 + 0x9b5b74] */ r_edi = R32((u32)(r_ebp*4+0x9b5b74u));
    /* 004e970e: mov dword ptr [0xa720e4], 0 */ W32((u32)(0xa720e4u), 0x0u);
    /* 004e9718: mov ebx, 0xa4d860 */ r_ebx = 0xa4d860u;
    /* 004e971d: mov eax, 1 */ r_eax = 0x1u;
    /* 004e9722: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004e9726: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9728: je 0x4e9933 */ if (fZ) goto L_004e9933;
L_004e972e:; BB(0x004e972e);
    /* 004e972e: mov esi, dword ptr [0xa4d7f8] */ r_esi = R32((u32)(0xa4d7f8u));
    /* 004e9734: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9735: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e973au); f_004e6f24();
    /* 004e973a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e973b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e973e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e9740: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e9742: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e9744: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e9746: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e9748: movsx edx, word ptr [edx*4 + 0x9b5b68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b68u));
    /* 004e9750: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9752: jne 0x4e9759 */ if (!fZ) goto L_004e9759;
L_004e9754:; BB(0x004e9754);
    /* 004e9754: mov edx, 1 */ r_edx = 0x1u;
L_004e9759:; BB(0x004e9759);
    /* 004e9759: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e975b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e975d: jle 0x4e97b7 */ if ((fZ||fS!=fO)) goto L_004e97b7;
L_004e975f:; BB(0x004e975f);
    /* 004e975f: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004e9763: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004e9767: mov esi, eax */ r_esi = r_eax;
    /* 004e9769: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004e976d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_004e9771:; BB(0x004e9771);
    /* 004e9771: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004e9773: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9775: jne 0x4e9780 */ if (!fZ) goto L_004e9780;
L_004e9777:; BB(0x004e9777);
    /* 004e9777: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e9779: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004e977b: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004e977e: jmp 0x4e979a */ goto L_004e979a;
L_004e9780:; BB(0x004e9780);
    /* 004e9780: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 004e9786: mov ecx, dword ptr [0xa720f4] */ r_ecx = R32((u32)(0xa720f4u));
    /* 004e978c: mov edx, ebp */ r_edx = r_ebp;
    /* 004e978e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e9791: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9792: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4e9797u); f_005b8610();
    /* 004e9797: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
L_004e979a:; BB(0x004e979a);
    /* 004e979a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004e979e: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e97a1: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e97a4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e97a7: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e97a9: jl 0x4e9771 */ if ((fS!=fO)) goto L_004e9771;
L_004e97ab:; BB(0x004e97ab);
    /* 004e97ab: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004e97af: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004e97b3: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_004e97b7:; BB(0x004e97b7);
    /* 004e97b7: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 004e97bb: mov edx, dword ptr [ebx + eax*8 + 4] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 004e97bf: mov dword ptr [0xa720e0], edx */ W32((u32)(0xa720e0u), r_edx);
L_004e97c5:; BB(0x004e97c5);
    /* 004e97c5: mov edi, dword ptr [ebp*4 + 0x9b5b70] */ r_edi = R32((u32)(r_ebp*4+0x9b5b70u));
    /* 004e97cc: mov dword ptr [0xa720e8], 0 */ W32((u32)(0xa720e8u), 0x0u);
    /* 004e97d6: mov ebx, 0xa4d8c0 */ r_ebx = 0xa4d8c0u;
    /* 004e97db: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e97dd: je 0x4e987a */ if (fZ) goto L_004e987a;
L_004e97e3:; BB(0x004e97e3);
    /* 004e97e3: mov esi, dword ptr [0xa4d7f8] */ r_esi = R32((u32)(0xa4d7f8u));
    /* 004e97e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e97ea: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e97efu); f_004e6f24();
    /* 004e97ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e97f0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e97f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e97f5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e97f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e97f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e97fb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e97fd: movsx edx, word ptr [edx*4 + 0x9b5b68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b68u));
    /* 004e9805: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9807: jne 0x4e980e */ if (!fZ) goto L_004e980e;
L_004e9809:; BB(0x004e9809);
    /* 004e9809: mov edx, 1 */ r_edx = 0x1u;
L_004e980e:; BB(0x004e980e);
    /* 004e980e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e9810: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e9812: jle 0x4e986c */ if ((fZ||fS!=fO)) goto L_004e986c;
L_004e9814:; BB(0x004e9814);
    /* 004e9814: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004e9818: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004e981c: mov esi, eax */ r_esi = r_eax;
    /* 004e981e: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004e9822: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_004e9826:; BB(0x004e9826);
    /* 004e9826: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004e9828: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e982a: jne 0x4e9835 */ if (!fZ) goto L_004e9835;
L_004e982c:; BB(0x004e982c);
    /* 004e982c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e982e: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004e9830: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004e9833: jmp 0x4e984f */ goto L_004e984f;
L_004e9835:; BB(0x004e9835);
    /* 004e9835: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 004e983b: mov ecx, dword ptr [0xa720f4] */ r_ecx = R32((u32)(0xa720f4u));
    /* 004e9841: mov edx, ebp */ r_edx = r_ebp;
    /* 004e9843: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e9846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9847: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4e984cu); f_005b8610();
    /* 004e984c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
L_004e984f:; BB(0x004e984f);
    /* 004e984f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004e9853: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e9856: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e9859: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e985c: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e985e: jl 0x4e9826 */ if ((fS!=fO)) goto L_004e9826;
L_004e9860:; BB(0x004e9860);
    /* 004e9860: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004e9864: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004e9868: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_004e986c:; BB(0x004e986c);
    /* 004e986c: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 004e9870: mov edx, dword ptr [ebx + eax*8 + 4] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 004e9874: mov dword ptr [0xa720e0], edx */ W32((u32)(0xa720e0u), r_edx);
L_004e987a:; BB(0x004e987a);
    /* 004e987a: mov ebp, dword ptr [ebp*4 + 0x9b5b78] */ r_ebp = R32((u32)(r_ebp*4+0x9b5b78u));
    /* 004e9881: mov dword ptr [0xa720e0], 0 */ W32((u32)(0xa720e0u), 0x0u);
    /* 004e988b: mov esi, 0xa720b8 */ r_esi = 0xa720b8u;
    /* 004e9890: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9892: je 0x4e9922 */ if (fZ) goto L_004e9922;
L_004e9898:; BB(0x004e9898);
    /* 004e9898: mov edi, dword ptr [0xa4d7f8] */ r_edi = R32((u32)(0xa4d7f8u));
    /* 004e989e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e989f: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e98a4u); f_004e6f24();
    /* 004e98a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e98a5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e98a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e98aa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e98ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e98ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e98b0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e98b2: movsx eax, word ptr [edx*4 + 0x9b5b66] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b66u));
    /* 004e98ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e98bc: jne 0x4e98c3 */ if (!fZ) goto L_004e98c3;
L_004e98be:; BB(0x004e98be);
    /* 004e98be: mov eax, 1 */ r_eax = 0x1u;
L_004e98c3:; BB(0x004e98c3);
    /* 004e98c3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004e98c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e98c7: jle 0x4e9914 */ if ((fZ||fS!=fO)) goto L_004e9914;
L_004e98c9:; BB(0x004e98c9);
    /* 004e98c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004e98cd: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004e98d1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_004e98d5:; BB(0x004e98d5);
    /* 004e98d5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004e98d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e98da: jne 0x4e98e5 */ if (!fZ) goto L_004e98e5;
L_004e98dc:; BB(0x004e98dc);
    /* 004e98dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e98de: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 004e98e0: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004e98e3: jmp 0x4e98ff */ goto L_004e98ff;
L_004e98e5:; BB(0x004e98e5);
    /* 004e98e5: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 004e98eb: mov ecx, dword ptr [0xa720f4] */ r_ecx = R32((u32)(0xa720f4u));
    /* 004e98f1: mov eax, edi */ r_eax = r_edi;
    /* 004e98f3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e98f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e98f7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4e98fcu); f_005b8610();
    /* 004e98fc: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_004e98ff:; BB(0x004e98ff);
    /* 004e98ff: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004e9903: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e9906: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9909: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e990c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e990e: jl 0x4e98d5 */ if ((fS!=fO)) goto L_004e98d5;
L_004e9910:; BB(0x004e9910);
    /* 004e9910: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_004e9914:; BB(0x004e9914);
    /* 004e9914: movsx eax, word ptr [edi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3eu));
    /* 004e9918: mov edx, dword ptr [esi + eax*8 + 4] */ r_edx = R32((u32)(r_esi+r_eax*8+0x4u));
    /* 004e991c: mov dword ptr [0xa720e0], edx */ W32((u32)(0xa720e0u), r_edx);
L_004e9922:; BB(0x004e9922);
    /* 004e9922: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004e9925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e9926: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e992bu); f_004e6f24();
    /* 004e992b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e992e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e992f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e9932: ret  */ FN_RET(0x004e96c8); r_esp += 4; return;
L_004e9933:; BB(0x004e9933);
    /* 004e9933: mov eax, 1 */ r_eax = 0x1u;
    /* 004e9938: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004e993c: jmp 0x4e97c5 */ goto L_004e97c5;
}

void f_004e9944(void) /* sub_4E9944 */
{
    FN_ENTER(0x004e9944);
    /* 004e9944: mov edx, dword ptr [0x90a434] */ r_edx = R32((u32)(0x90a434u));
    /* 004e994a: mov dword ptr [0xa4d8c4], edx */ W32((u32)(0xa4d8c4u), r_edx);
    /* 004e9950: mov dword ptr [0xa4d864], edx */ W32((u32)(0xa4d864u), r_edx);
    /* 004e9956: mov dword ptr [0xa4d8cc], edx */ W32((u32)(0xa4d8ccu), r_edx);
    /* 004e995c: mov dword ptr [0xa4d86c], edx */ W32((u32)(0xa4d86cu), r_edx);
    /* 004e9962: mov dword ptr [0xa4d8d4], edx */ W32((u32)(0xa4d8d4u), r_edx);
    /* 004e9968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e996a: mov dword ptr [0xa4d8c0], eax */ W32((u32)(0xa4d8c0u), r_eax);
    /* 004e996f: mov dword ptr [0xa4d860], eax */ W32((u32)(0xa4d860u), r_eax);
    /* 004e9974: mov dword ptr [0xa4d8c8], eax */ W32((u32)(0xa4d8c8u), r_eax);
    /* 004e9979: mov dword ptr [0xa4d868], eax */ W32((u32)(0xa4d868u), r_eax);
    /* 004e997e: mov dword ptr [0xa4d8d0], eax */ W32((u32)(0xa4d8d0u), r_eax);
    /* 004e9983: mov dword ptr [0xa4d870], eax */ W32((u32)(0xa4d870u), r_eax);
    /* 004e9988: mov dword ptr [0xa4d874], edx */ W32((u32)(0xa4d874u), r_edx);
    /* 004e998e: mov dword ptr [0xa4d8d8], eax */ W32((u32)(0xa4d8d8u), r_eax);
    /* 004e9993: mov dword ptr [0xa4d8dc], edx */ W32((u32)(0xa4d8dcu), r_edx);
    /* 004e9999: mov dword ptr [0xa4d878], eax */ W32((u32)(0xa4d878u), r_eax);
    /* 004e999e: mov dword ptr [0xa4d87c], edx */ W32((u32)(0xa4d87cu), r_edx);
    /* 004e99a4: mov dword ptr [0xa4d8e0], eax */ W32((u32)(0xa4d8e0u), r_eax);
    /* 004e99a9: mov dword ptr [0xa4d8e4], edx */ W32((u32)(0xa4d8e4u), r_edx);
    /* 004e99af: mov dword ptr [0xa4d880], eax */ W32((u32)(0xa4d880u), r_eax);
    /* 004e99b4: mov dword ptr [0xa4d884], edx */ W32((u32)(0xa4d884u), r_edx);
    /* 004e99ba: mov dword ptr [0xa4d8e8], eax */ W32((u32)(0xa4d8e8u), r_eax);
    /* 004e99bf: mov dword ptr [0xa4d8ec], edx */ W32((u32)(0xa4d8ecu), r_edx);
    /* 004e99c5: mov dword ptr [0xa4d888], eax */ W32((u32)(0xa4d888u), r_eax);
    /* 004e99ca: mov dword ptr [0xa4d88c], edx */ W32((u32)(0xa4d88cu), r_edx);
    /* 004e99d0: mov dword ptr [0xa4d8f0], eax */ W32((u32)(0xa4d8f0u), r_eax);
    /* 004e99d5: mov dword ptr [0xa4d8f4], edx */ W32((u32)(0xa4d8f4u), r_edx);
    /* 004e99db: mov dword ptr [0xa4d890], eax */ W32((u32)(0xa4d890u), r_eax);
    /* 004e99e0: mov dword ptr [0xa4d894], edx */ W32((u32)(0xa4d894u), r_edx);
    /* 004e99e6: mov dword ptr [0xa4d8f8], eax */ W32((u32)(0xa4d8f8u), r_eax);
    /* 004e99eb: mov dword ptr [0xa4d8fc], edx */ W32((u32)(0xa4d8fcu), r_edx);
    /* 004e99f1: mov dword ptr [0xa4d898], eax */ W32((u32)(0xa4d898u), r_eax);
    /* 004e99f6: mov dword ptr [0xa4d89c], edx */ W32((u32)(0xa4d89cu), r_edx);
    /* 004e99fc: mov dword ptr [0xa4d900], eax */ W32((u32)(0xa4d900u), r_eax);
    /* 004e9a01: mov dword ptr [0xa4d904], edx */ W32((u32)(0xa4d904u), r_edx);
    /* 004e9a07: mov dword ptr [0xa4d8a0], eax */ W32((u32)(0xa4d8a0u), r_eax);
    /* 004e9a0c: mov dword ptr [0xa4d8a4], edx */ W32((u32)(0xa4d8a4u), r_edx);
    /* 004e9a12: mov dword ptr [0xa4d908], eax */ W32((u32)(0xa4d908u), r_eax);
    /* 004e9a17: mov dword ptr [0xa4d90c], edx */ W32((u32)(0xa4d90cu), r_edx);
    /* 004e9a1d: mov dword ptr [0xa4d8a8], eax */ W32((u32)(0xa4d8a8u), r_eax);
    /* 004e9a22: mov dword ptr [0xa4d8ac], edx */ W32((u32)(0xa4d8acu), r_edx);
    /* 004e9a28: mov dword ptr [0xa720b8], eax */ W32((u32)(0xa720b8u), r_eax);
    /* 004e9a2d: mov dword ptr [0xa720bc], edx */ W32((u32)(0xa720bcu), r_edx);
    /* 004e9a33: mov dword ptr [0xa720c0], eax */ W32((u32)(0xa720c0u), r_eax);
    /* 004e9a38: mov dword ptr [0xa720c4], edx */ W32((u32)(0xa720c4u), r_edx);
    /* 004e9a3e: mov dword ptr [0xa720c8], eax */ W32((u32)(0xa720c8u), r_eax);
    /* 004e9a43: mov dword ptr [0xa720cc], edx */ W32((u32)(0xa720ccu), r_edx);
    /* 004e9a49: mov dword ptr [0xa720d0], eax */ W32((u32)(0xa720d0u), r_eax);
    /* 004e9a4e: mov dword ptr [0xa720d4], edx */ W32((u32)(0xa720d4u), r_edx);
    /* 004e9a54: mov dword ptr [0xa720d8], eax */ W32((u32)(0xa720d8u), r_eax);
    /* 004e9a59: mov dword ptr [0xa720dc], edx */ W32((u32)(0xa720dcu), r_edx);
    /* 004e9a5f: call 0x4e96c8 */ r_esp -= 4; W32(r_esp, 0x4e9a64u); f_004e96c8();
    /* 004e9a64: ret  */ FN_RET(0x004e9944); r_esp += 4; return;
}

void f_004e9a68(void) /* sub_4E9A68 */
{
    FN_ENTER(0x004e9a68);
    /* 004e9a68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9a69: mov esi, ecx */ r_esi = r_ecx;
    /* 004e9a6b: push 0x44000 */ { u32 v = 0x44000u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9a70: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4e9a75u); f_0082e940();
    /* 004e9a75: push dword ptr [0xa4d7f8] */ { u32 v = R32((u32)(0xa4d7f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9a7b: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 004e9a81: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e9a86u); f_004e6f24();
    /* 004e9a86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9a88: lea edx, [esi + 0x104] */ r_edx = (u32)(r_esi+0x104u);
    /* 004e9a8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9a8f: push dword ptr [esi + 0xfc] */ { u32 v = R32((u32)(r_esi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9a95: push dword ptr [eax*4 + 0x9b5980] */ { u32 v = R32((u32)(r_eax*4+0x9b5980u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9a9c: call 0x5ba3f4 */ r_esp -= 4; W32(r_esp, 0x4e9aa1u); f_005ba3f4();
    /* 004e9aa1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e9aa4: mov dword ptr [esi + 0x100], eax */ W32((u32)(r_esi+0x100u), r_eax);
    /* 004e9aaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e9aac: jl 0x4e9aae */ if ((fS!=fO)) goto L_004e9aae;
L_004e9aae:; BB(0x004e9aae);
    /* 004e9aae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9aaf: ret  */ FN_RET(0x004e9a68); r_esp += 4; return;
}

void f_004e9bd4(void) /* sub_4E9BD4 */
{
    FN_ENTER(0x004e9bd4);
    /* 004e9bd4: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x4e9bd9u); f_0083adbc();
    /* 004e9bd9: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x4e9bdeu); f_007becd4();
    /* 004e9bde: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x4e9be3u); f_007bfba0();
    /* 004e9be3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 004e9be8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4e9bedu); f_0061cdb0();
    /* 004e9bed: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 004e9bf2: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x4e9bf7u); f_0081745c();
    /* 004e9bf7: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 004e9bfc: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x4e9c01u); f_00817604();
    /* 004e9c01: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 004e9c06: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x4e9c0bu); f_00818f80();
    /* 004e9c0b: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x4e9c10u); f_005ba748();
    /* 004e9c10: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x4e9c15u); f_00814168();
    /* 004e9c15: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x4e9c1au); f_006c38bc();
    /* 004e9c1a: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x4e9c1fu); f_007bfedc();
    /* 004e9c1f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004e9c22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9c24: je 0x4e9c2b */ if (fZ) goto L_004e9c2b;
L_004e9c26:; BB(0x004e9c26);
    /* 004e9c26: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x4e9c2bu); f_007a6174();
L_004e9c2b:; BB(0x004e9c2b);
    /* 004e9c2b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e9c30u); f_006dc358();
    /* 004e9c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9c32: je 0x4e9c3c */ if (fZ) goto L_004e9c3c;
L_004e9c34:; BB(0x004e9c34);
    /* 004e9c34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c36: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4e9c3bu); f_007a60dc();
    /* 004e9c3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004e9c3c:; BB(0x004e9c3c);
    /* 004e9c3c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c3e: call 0x7c0044 */ r_esp -= 4; W32(r_esp, 0x4e9c43u); f_007c0044();
    /* 004e9c43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9c44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9c46: je 0x4e9c51 */ if (fZ) goto L_004e9c51;
L_004e9c48:; BB(0x004e9c48);
    /* 004e9c48: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c4a: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4e9c4fu); f_007a60dc();
    /* 004e9c4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9c50: ret  */ FN_RET(0x004e9bd4); r_esp += 4; return;
L_004e9c51:; BB(0x004e9c51);
    /* 004e9c51: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x4e9c56u); f_0080030c();
    /* 004e9c56: ret  */ FN_RET(0x004e9bd4); r_esp += 4; return;
}

void f_004e9c58(void) /* sub_4E9C58 */
{
    FN_ENTER(0x004e9c58);
    /* 004e9c58: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x4e9c5du); f_00815434();
    /* 004e9c5d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 004e9c62: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x4e9c67u); f_00818560();
    /* 004e9c67: call 0x4e3134 */ r_esp -= 4; W32(r_esp, 0x4e9c6cu); f_004e3134();
    /* 004e9c6c: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x4e9c71u); f_0080030c();
    /* 004e9c71: ret  */ FN_RET(0x004e9c58); r_esp += 4; return;
}

void f_004e9c74(void) /* sub_4E9C74 */
{
    FN_ENTER(0x004e9c74);
    /* 004e9c74: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e9c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c7d: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x4e9c82u); f_0082acd8();
    /* 004e9c82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e9c85: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x4e9c8au); f_007bebe8();
    /* 004e9c8a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9c8c: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x4e9c91u); f_007a6198();
    /* 004e9c91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9c92: movzx eax, byte ptr [0xa721cc] */ r_eax = (u32)R8((u32)(0xa721ccu));
    /* 004e9c99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9c9b: je 0x4e9caa */ if (fZ) goto L_004e9caa;
L_004e9c9d:; BB(0x004e9c9d);
    /* 004e9c9d: mov byte ptr [0xa721cc], 0 */ W8((u32)(0xa721ccu), 0x0u);
    /* 004e9ca4: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x4e9ca9u); f_007a6174();
    /* 004e9ca9: ret  */ FN_RET(0x004e9c74); r_esp += 4; return;
L_004e9caa:; BB(0x004e9caa);
    /* 004e9caa: call 0x4df9ec */ r_esp -= 4; W32(r_esp, 0x4e9cafu); f_004df9ec();
    /* 004e9caf: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x4e9cb4u); f_0080030c();
    /* 004e9cb4: ret  */ FN_RET(0x004e9c74); r_esp += 4; return;
}

void f_004e9cb8(void) /* sub_4E9CB8 */
{
    FN_ENTER(0x004e9cb8);
    /* 004e9cb8: mov edx, dword ptr [0xa72218] */ r_edx = R32((u32)(0xa72218u));
    /* 004e9cbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9cc0: je 0x4e9ccf */ if (fZ) goto L_004e9ccf;
L_004e9cc2:; BB(0x004e9cc2);
    /* 004e9cc2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004e9cc6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e9ccb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004e9ccf:; BB(0x004e9ccf);
    /* 004e9ccf: mov dword ptr [0xa72218], 0 */ W32((u32)(0xa72218u), 0x0u);
    /* 004e9cd9: push 0x9b8c20 */ { u32 v = 0x9b8c20u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9cde: call 0x81a7c0 */ r_esp -= 4; W32(r_esp, 0x4e9ce3u); f_0081a7c0();
    /* 004e9ce3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e9ce4: ret  */ FN_RET(0x004e9cb8); r_esp += 4; return;
}

void f_004e9ce8(void) /* sub_4E9CE8 */
{
    FN_ENTER(0x004e9ce8);
    /* 004e9ce8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e9cec: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004e9cf0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004e9cf4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9cf7: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 004e9cff: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004e9d03: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 004e9d0b: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 004e9d13: call 0x4e9d2c */ r_esp -= 4; W32(r_esp, 0x4e9d18u); f_004e9d2c();
    /* 004e9d18: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9d1b: ret  */ FN_RET(0x004e9ce8); r_esp += 4; return;
}

void f_004e9d1c(void) /* sub_4E9D1C */
{
    FN_ENTER(0x004e9d1c);
    /* 004e9d1c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e9d20: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004e9d24: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004e9d28: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004e9d2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d2d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9d30: mov esi, edx */ r_esi = r_edx;
    /* 004e9d32: mov edx, eax */ r_edx = r_eax;
    /* 004e9d34: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004e9d38: fcomp dword ptr [0x91d6dc] */ fx_compare(ST(0), R_F32((u32)(0x91d6dcu))); FPOP();
    /* 004e9d3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e9d40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e9d41: ja 0x4e9d4a */ if ((!fC&&!fZ)) goto L_004e9d4a;
L_004e9d43:; BB(0x004e9d43);
    /* 004e9d43: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e9d45: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9d48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9d49: ret  */ FN_RET(0x004e9d1c); r_esp += 4; return;
L_004e9d4a:; BB(0x004e9d4a);
    /* 004e9d4a: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004e9d4e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004e9d52: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004e9d56: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004e9d59: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 004e9d61: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004e9d65: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 004e9d6d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004e9d71: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 004e9d79: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004e9d7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004e9d81: call 0x4e9d8c */ r_esp -= 4; W32(r_esp, 0x4e9d86u); f_004e9d8c();
    /* 004e9d86: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9d89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9d8a: ret  */ FN_RET(0x004e9d1c); r_esp += 4; return;
}

void f_004e9d2c(void) /* sub_4E9D2C */
{
    FN_ENTER(0x004e9d2c);
    /* 004e9d2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d2d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9d30: mov esi, edx */ r_esi = r_edx;
    /* 004e9d32: mov edx, eax */ r_edx = r_eax;
    /* 004e9d34: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004e9d38: fcomp dword ptr [0x91d6dc] */ fx_compare(ST(0), R_F32((u32)(0x91d6dcu))); FPOP();
    /* 004e9d3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e9d40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e9d41: ja 0x4e9d4a */ if ((!fC&&!fZ)) goto L_004e9d4a;
L_004e9d43:; BB(0x004e9d43);
    /* 004e9d43: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e9d45: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9d48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9d49: ret  */ FN_RET(0x004e9d2c); r_esp += 4; return;
L_004e9d4a:; BB(0x004e9d4a);
    /* 004e9d4a: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004e9d4e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004e9d52: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004e9d56: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004e9d59: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 004e9d61: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004e9d65: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 004e9d6d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004e9d71: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 004e9d79: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004e9d7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004e9d81: call 0x4e9d8c */ r_esp -= 4; W32(r_esp, 0x4e9d86u); f_004e9d8c();
    /* 004e9d86: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9d89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9d8a: ret  */ FN_RET(0x004e9d2c); r_esp += 4; return;
}

void f_004e9d8c(void) /* sub_4E9D8C */
{
    FN_ENTER(0x004e9d8c);
    /* 004e9d8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d90: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9d93: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 004e9d97: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004e9d9b: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 004e9d9f: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 004e9da3: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004e9da5: fcomp dword ptr [0x91d6d4] */ fx_compare(ST(0), R_F32((u32)(0x91d6d4u))); FPOP();
    /* 004e9dab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e9dad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e9dae: ja 0x4e9db8 */ if ((!fC&&!fZ)) goto L_004e9db8;
L_004e9db0:; BB(0x004e9db0);
    /* 004e9db0: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9db3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e9db4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9db5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9db6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e9db7: ret  */ FN_RET(0x004e9d8c); r_esp += 4; return;
L_004e9db8:; BB(0x004e9db8);
    /* 004e9db8: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4e9dbdu); f_0082dbac();
    /* 004e9dbd: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004e9dc3: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004e9dc7: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004e9dcb: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004e9dcd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004e9dd1: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 004e9dd4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004e9dd6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004e9dda: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 004e9ddd: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004e9de1: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 004e9de4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004e9de6: mov dword ptr [esp + 0x20], 0x9b8c20 */ W32((u32)(r_esp+0x20u), 0x9b8c20u);
    /* 004e9dee: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004e9df2: call 0x4e9e84 */ r_esp -= 4; W32(r_esp, 0x4e9df7u); f_004e9e84();
    /* 004e9df7: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 004e9dfc: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 004e9e02: mov ecx, dword ptr [0xaf0378] */ r_ecx = R32((u32)(0xaf0378u));
    /* 004e9e08: mov ebx, dword ptr [0xaf037c] */ r_ebx = R32((u32)(0xaf037cu));
    /* 004e9e0e: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 004e9e13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9e14: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 004e9e1a: mov dword ptr [0xaab510], ecx */ W32((u32)(0xaab510u), r_ecx);
    /* 004e9e20: mov dword ptr [0xaab514], ebx */ W32((u32)(0xaab514u), r_ebx);
    /* 004e9e26: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x4e9e2bu); f_0082d710();
    /* 004e9e2b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004e9e2f: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 004e9e31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e9e32: push dword ptr [esp + 0x48] */ { u32 v = R32((u32)(r_esp+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e9e37: call 0x82b6bc */ r_esp -= 4; W32(r_esp, 0x4e9e3cu); f_0082b6bc();
    /* 004e9e3c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e9e3f: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 004e9e44: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 004e9e4a: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 004e9e50: mov ebx, dword ptr [0xaab514] */ r_ebx = R32((u32)(0xaab514u));
    /* 004e9e56: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 004e9e5b: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 004e9e61: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 004e9e67: mov dword ptr [0xaf037c], ebx */ W32((u32)(0xaf037cu), r_ebx);
    /* 004e9e6d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4e9e72u); f_0082dab0();
    /* 004e9e72: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9e75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e9e76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9e77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e9e78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e9e79: ret  */ FN_RET(0x004e9d8c); r_esp += 4; return;
}

void f_004e9e84(void) /* sub_4E9E84 */
{
    FN_ENTER(0x004e9e84);
    /* 004e9e84: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004e9e86: cmp ecx, 0x93 */ {  u32 a = r_ecx; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e9e8c: jl 0x4e9eae */ if ((fS!=fO)) goto L_004e9eae;
L_004e9e8e:; BB(0x004e9e8e);
    /* 004e9e8e: add ecx, 0xffffff6d */ {  u32 a = r_ecx; u32 b = 0xffffff6du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e9e94: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004e9e96: mov edx, dword ptr [0xa72214] */ r_edx = R32((u32)(0xa72214u));
    /* 004e9e9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e9e9e: jne 0x4e9ea7 */ if (!fZ) goto L_004e9ea7;
L_004e9ea0:; BB(0x004e9ea0);
    /* 004e9ea0: mov dword ptr [eax], 0x9b8260 */ W32((u32)(r_eax), 0x9b8260u);
    /* 004e9ea6: ret  */ FN_RET(0x004e9e84); r_esp += 4; return;
L_004e9ea7:; BB(0x004e9ea7);
    /* 004e9ea7: mov dword ptr [eax], 0x9b8680 */ W32((u32)(r_eax), 0x9b8680u);
    /* 004e9ead: ret  */ FN_RET(0x004e9e84); r_esp += 4; return;
L_004e9eae:; BB(0x004e9eae);
    /* 004e9eae: mov dword ptr [eax], 0x9b76e0 */ W32((u32)(r_eax), 0x9b76e0u);
    /* 004e9eb4: ret  */ FN_RET(0x004e9e84); r_esp += 4; return;
}

void f_004e9eb8(void) /* sub_4E9EB8 */
{
    FN_ENTER(0x004e9eb8);
    /* 004e9eb8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9ebb: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004e9ec2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004e9ec5: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 004e9ecd: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 004e9ed5: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 004e9edd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e9ede: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9ee2: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9ee6: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9eea: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9eee: call 0x4e9d8c */ r_esp -= 4; W32(r_esp, 0x4e9ef3u); f_004e9d8c();
    /* 004e9ef3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9ef6: ret  */ FN_RET(0x004e9eb8); r_esp += 4; return;
}

void f_004e9ef8(void) /* sub_4E9EF8 */
{
    FN_ENTER(0x004e9ef8);
    /* 004e9ef8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9efb: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004e9eff: fcomp dword ptr [0x91d6cc] */ fx_compare(ST(0), R_F32((u32)(0x91d6ccu))); FPOP();
    /* 004e9f05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e9f07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e9f08: ja 0x4e9f0e */ if ((!fC&&!fZ)) goto L_004e9f0e;
L_004e9f0a:; BB(0x004e9f0a);
    /* 004e9f0a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9f0d: ret  */ FN_RET(0x004e9ef8); r_esp += 4; return;
L_004e9f0e:; BB(0x004e9f0e);
    /* 004e9f0e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004e9f12: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004e9f16: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004e9f1a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004e9f1e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004e9f22: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 004e9f2a: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004e9f2e: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 004e9f36: call 0x4e9d2c */ r_esp -= 4; W32(r_esp, 0x4e9f3bu); f_004e9d2c();
    /* 004e9f3b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9f3e: ret  */ FN_RET(0x004e9ef8); r_esp += 4; return;
}

void f_004e9f40(void) /* sub_4E9F40 */
{
    FN_ENTER(0x004e9f40);
    /* 004e9f40: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9f43: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004e9f47: fcomp dword ptr [0x91d6c4] */ fx_compare(ST(0), R_F32((u32)(0x91d6c4u))); FPOP();
    /* 004e9f4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e9f4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e9f50: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004e9f54: ja 0x4e9f5a */ if ((!fC&&!fZ)) goto L_004e9f5a;
L_004e9f56:; BB(0x004e9f56);
    /* 004e9f56: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9f59: ret  */ FN_RET(0x004e9f40); r_esp += 4; return;
L_004e9f5a:; BB(0x004e9f5a);
    /* 004e9f5a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004e9f5e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004e9f61: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004e9f65: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004e9f69: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004e9f6d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004e9f70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9f71: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9f75: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9f79: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9f7d: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e9f81: call 0x4e9d8c */ r_esp -= 4; W32(r_esp, 0x4e9f86u); f_004e9d8c();
    /* 004e9f86: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e9f89: ret  */ FN_RET(0x004e9f40); r_esp += 4; return;
}

void f_004e9f8c(void) /* sub_4E9F8C */
{
    FN_ENTER(0x004e9f8c);
    /* 004e9f8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9f8d: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9f90: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 004e9f94: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e9f98: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004e9f9a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e9f9d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004e9fa1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004e9fa5: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 004e9fa9: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004e9fad: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 004e9fb1: call 0x4e9e84 */ r_esp -= 4; W32(r_esp, 0x4e9fb6u); f_004e9e84();
    /* 004e9fb6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004e9fba: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004e9fbe: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004e9fc2: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004e9fc5: movsx edx, word ptr [ecx + eax*4 + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*4+0x4u));
    /* 004e9fca: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004e9fce: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004e9fd2: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004e9fd6: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 004e9fda: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004e9fde: movsx eax, word ptr [ecx + eax*4 + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*4+0x6u));
    /* 004e9fe3: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004e9fe7: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004e9feb: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004e9fef: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 004e9ff3: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004e9ff7: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004e9ffb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004e9fff: mov eax, ebp */ r_eax = r_ebp;
    /* 004ea001: call 0x4e9d2c */ r_esp -= 4; W32(r_esp, 0x4ea006u); f_004e9d2c();
    /* 004ea006: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ea009: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ea00a: ret  */ FN_RET(0x004e9f8c); r_esp += 4; return;
}

