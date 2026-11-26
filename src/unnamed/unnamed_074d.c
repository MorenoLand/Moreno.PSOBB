#include "protos.h"

void f_0074d1cc(void) /* sub_74D1CC */
{
    FN_ENTER(0x0074d1cc);
    /* 0074d1cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d1cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074d1cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d1d1: call 0x74d1f0 */ r_esp -= 4; W32(r_esp, 0x74d1d6u); f_0074d1f0();
    /* 0074d1d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074d1da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d1dc: jne 0x74d1e2 */ if (!fZ) goto L_0074d1e2;
L_0074d1de:; BB(0x0074d1de);
    /* 0074d1de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d1df: ret 4 */ FN_RET(0x0074d1cc); r_esp += 8; return;
L_0074d1e2:; BB(0x0074d1e2);
    /* 0074d1e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d1e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74d1e8u); f_005c2f74();
    /* 0074d1e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d1e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d1ea: ret 4 */ FN_RET(0x0074d1cc); r_esp += 8; return;
}

void f_0074d1f0(void) /* sub_74D1F0 */
{
    FN_ENTER(0x0074d1f0);
    /* 0074d1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0074d1f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d1f5: push 0x8f2914 */ { u32 v = 0x8f2914u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d1fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074d200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d201: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074d208: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d20b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074d20e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074d211: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074d214: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074d217: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074d21a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d21d: mov dword ptr [ecx], 0xb41ef0 */ W32((u32)(r_ecx), 0xb41ef0u);
    /* 0074d223: mov dword ptr [0xa9ab68], 0 */ W32((u32)(0xa9ab68u), 0x0u);
    /* 0074d22d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074d234: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x74d239u); f_007366bc();
    /* 0074d239: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d23c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d243: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d246: ret  */ FN_RET(0x0074d1f0); r_esp += 4; return;
}

void f_0074d248(void) /* sub_74D248 */
{
    FN_ENTER(0x0074d248);
    /* 0074d248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d249: mov ebp, esp */ r_ebp = r_esp;
    /* 0074d24b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d24d: push 0x8f293c */ { u32 v = 0x8f293cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d252: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074d258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d259: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074d260: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d263: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074d266: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074d269: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074d26c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074d26f: mov eax, dword ptr [0xa9ab68] */ r_eax = R32((u32)(0xa9ab68u));
    /* 0074d274: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d276: je 0x74d288 */ if (fZ) goto L_0074d288;
L_0074d278:; BB(0x0074d278);
    /* 0074d278: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d27a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d27d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d284: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d287: ret  */ FN_RET(0x0074d248); r_esp += 4; return;
L_0074d288:; BB(0x0074d288);
    /* 0074d288: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d28a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d28d: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x74d292u); f_00737f80();
    /* 0074d292: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0074d299: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d29e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74d2a3u); f_005caba4();
    /* 0074d2a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d2a6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074d2a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d2ab: je 0x74d2e6 */ if (fZ) goto L_0074d2e6;
L_0074d2ad:; BB(0x0074d2ad);
    /* 0074d2ad: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0074d2b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074d2bb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d2be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d2c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d2c4: call 0x74d2ec */ r_esp -= 4; W32(r_esp, 0x74d2c9u); f_0074d2ec();
    /* 0074d2c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d2cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0074d2d3:; BB(0x0074d2d3);
    /* 0074d2d3: mov dword ptr [0xa9ab68], eax */ W32((u32)(0xa9ab68u), r_eax);
    /* 0074d2d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d2db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d2e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d2e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d2e5: ret  */ FN_RET(0x0074d248); r_esp += 4; return;
L_0074d2e6:; BB(0x0074d2e6);
    /* 0074d2e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d2e8: jmp 0x74d2d3 */ goto L_0074d2d3;
}

void f_0074d2ec(void) /* sub_74D2EC */
{
    FN_ENTER(0x0074d2ec);
    /* 0074d2ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d2ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0074d2ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d2f1: push 0x8f2958 */ { u32 v = 0x8f2958u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d2f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074d2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d2fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074d304: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d307: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074d30a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074d30d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074d310: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074d313: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0074d317: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074d31a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d31b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d31d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d320: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x74d325u); f_00736988();
    /* 0074d325: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074d32c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d32f: mov dword ptr [edx], 0xb41ef0 */ W32((u32)(r_edx), 0xb41ef0u);
    /* 0074d335: mov eax, dword ptr [0x9f4078] */ r_eax = R32((u32)(0x9f4078u));
    /* 0074d33a: push 0x15a */ { u32 v = 0x15au; r_esp -= 4; W32(r_esp, v); }
    /* 0074d33f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0074d342: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74d347u); f_0079317c();
    /* 0074d347: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d348: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d34b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d34c: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x74d351u); f_00737ae4();
    /* 0074d351: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d354: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x74d359u); f_00737b8c();
    /* 0074d359: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d35c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d35e: mov byte ptr [eax + 0x94], dl */ W8((u32)(r_eax+0x94u), (u8)r_edx);
    /* 0074d364: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 0074d36a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d36d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d374: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d376: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d377: ret 8 */ FN_RET(0x0074d2ec); r_esp += 12; return;
}

void f_0074d37c(void) /* sub_74D37C */
{
    FN_ENTER(0x0074d37c);
    /* 0074d37c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d37d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d37e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d37f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d382: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0074d386: mov esi, dword ptr [0xa9ab68] */ r_esi = R32((u32)(0xa9ab68u));
    /* 0074d38c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d38e: je 0x74d472 */ if (fZ) goto L_0074d472;
L_0074d394:; BB(0x0074d394);
    /* 0074d394: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d399: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x74d39eu); f_006c1bd4();
    /* 0074d39e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d39f: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0074d3a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0074d3a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074d3a6: jbe 0x74d452 */ if ((fC||fZ)) goto L_0074d452;
L_0074d3ac:; BB(0x0074d3ac);
    /* 0074d3ac: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0074d3b0: mov esi, edi */ r_esi = r_edi;
    /* 0074d3b2: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074d3b5: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0074d3b8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3be: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3c4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3cc: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074d3d2: lea eax, [edi + eax + 8] */ r_eax = (u32)(r_edi+r_eax+0x8u);
    /* 0074d3d6: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0074d3d9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3db: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3dd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3df: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3e1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3e3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3e5: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3e7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3e9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3eb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3ed: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3ef: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3f1: lea ebx, [ebx + ebx + 0x44] */ r_ebx = (u32)(r_ebx+r_ebx+0x44u);
    /* 0074d3f5: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d3f7: mov edi, eax */ r_edi = r_eax;
    /* 0074d3f9: mov ebp, ecx */ r_ebp = r_ecx;
L_0074d3fb:; BB(0x0074d3fb);
    /* 0074d3fb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0074d3fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d3ff: jne 0x74d41a */ if (!fZ) goto L_0074d41a;
L_0074d401:; BB(0x0074d401);
    /* 0074d401: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0074d404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d406: jne 0x74d41a */ if (!fZ) goto L_0074d41a;
L_0074d408:; BB(0x0074d408);
    /* 0074d408: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0074d40b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d40d: jne 0x74d41a */ if (!fZ) goto L_0074d41a;
L_0074d40f:; BB(0x0074d40f);
    /* 0074d40f: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0074d412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d414: jne 0x74d41a */ if (!fZ) goto L_0074d41a;
L_0074d416:; BB(0x0074d416);
    /* 0074d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074d418: jmp 0x74d41f */ goto L_0074d41f;
L_0074d41a:; BB(0x0074d41a);
    /* 0074d41a: mov eax, 1 */ r_eax = 0x1u;
L_0074d41f:; BB(0x0074d41f);
    /* 0074d41f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d421: jne 0x74d438 */ if (!fZ) goto L_0074d438;
L_0074d423:; BB(0x0074d423);
    /* 0074d423: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0074d426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d428: je 0x74d438 */ if (fZ) goto L_0074d438;
L_0074d42a:; BB(0x0074d42a);
    /* 0074d42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d42b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d42c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0074d430: call 0x7374b8 */ r_esp -= 4; W32(r_esp, 0x74d435u); f_007374b8();
    /* 0074d435: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
L_0074d438:; BB(0x0074d438);
    /* 0074d438: add edi, 0x85c */ {  u32 a = r_edi; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074d43e: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d444: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074d447: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074d449: jb 0x74d3fb */ if (fC) goto L_0074d3fb;
L_0074d44b:; BB(0x0074d44b);
    /* 0074d44b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0074d44f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074d452:; BB(0x0074d452);
    /* 0074d452: mov ecx, esi */ r_ecx = r_esi;
    /* 0074d454: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74d459u); f_00737cdc();
    /* 0074d459: movzx eax, byte ptr [esi + 0x94] */ r_eax = (u32)R8((u32)(r_esi+0x94u));
    /* 0074d460: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074d465: mov byte ptr [esi + 0x94], al */ W8((u32)(r_esi+0x94u), (u8)r_eax);
    /* 0074d46b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d46e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d46f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d470: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d471: ret  */ FN_RET(0x0074d37c); r_esp += 4; return;
L_0074d472:; BB(0x0074d472);
    /* 0074d472: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d475: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d476: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d477: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d478: ret  */ FN_RET(0x0074d37c); r_esp += 4; return;
}

void f_0074d47c(void) /* sub_74D47C */
{
    FN_ENTER(0x0074d47c);
    /* 0074d47c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074d480: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d482: lea edx, [eax + 0x18] */ r_edx = (u32)(r_eax+0x18u);
    /* 0074d485: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d486: push 0xa9ab78 */ { u32 v = 0xa9ab78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d48b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x74d490u); f_00857dec();
    /* 0074d490: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d493: mov edx, dword ptr [0xa9ab68] */ r_edx = R32((u32)(0xa9ab68u));
    /* 0074d499: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d49b: je 0x74d4af */ if (fZ) goto L_0074d4af;
L_0074d49d:; BB(0x0074d49d);
    /* 0074d49d: movzx eax, byte ptr [edx + 0x94] */ r_eax = (u32)R8((u32)(r_edx+0x94u));
    /* 0074d4a4: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d4a9: mov byte ptr [edx + 0x94], al */ W8((u32)(r_edx+0x94u), (u8)r_eax);
L_0074d4af:; BB(0x0074d4af);
    /* 0074d4af: ret  */ FN_RET(0x0074d47c); r_esp += 4; return;
}

void f_0074d4b0(void) /* sub_74D4B0 */
{
    FN_ENTER(0x0074d4b0);
    /* 0074d4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4b2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074d4b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d4b6: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x74d4bbu); f_007108f4();
    /* 0074d4bb: mov ebp, eax */ r_ebp = r_eax;
    /* 0074d4bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d4c0: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74d4c5u); f_00710f80();
    /* 0074d4c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4c6: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0074d4c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d4cc: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74d4d1u); f_0072a648();
    /* 0074d4d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d4d4: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x74d4d9u); f_0073746c();
    /* 0074d4d9: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0074d4dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d4de: je 0x74d4e6 */ if (fZ) goto L_0074d4e6;
L_0074d4e0:; BB(0x0074d4e0);
    /* 0074d4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4e1: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74d4e6u); f_00761390();
L_0074d4e6:; BB(0x0074d4e6);
    /* 0074d4e6: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074d4e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d4eb: je 0x74d4f9 */ if (fZ) goto L_0074d4f9;
L_0074d4ed:; BB(0x0074d4ed);
    /* 0074d4ed: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074d4f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d4f4: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74d4f9u); f_0073f694();
L_0074d4f9:; BB(0x0074d4f9);
    /* 0074d4f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d4fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d4fb: ret  */ FN_RET(0x0074d4b0); r_esp += 4; return;
}

void f_0074d4fc(void) /* sub_74D4FC */
{
    FN_ENTER(0x0074d4fc);
    /* 0074d4fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d4fd: mov esi, ecx */ r_esi = r_ecx;
    /* 0074d4ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0074d501: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74d506u); f_00737d70();
    /* 0074d506: mov ecx, esi */ r_ecx = r_esi;
    /* 0074d508: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74d50du); f_00737d1c();
    /* 0074d50d: mov ecx, esi */ r_ecx = r_esi;
    /* 0074d50f: call 0x74d520 */ r_esp -= 4; W32(r_esp, 0x74d514u); f_0074d520();
    /* 0074d514: mov ecx, esi */ r_ecx = r_esi;
    /* 0074d516: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x74d51bu); f_00737c94();
    /* 0074d51b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d51c: ret  */ FN_RET(0x0074d4fc); r_esp += 4; return;
}

void f_0074d520(void) /* sub_74D520 */
{
    FN_ENTER(0x0074d520);
    /* 0074d520: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074d526: call 0x7f6780 */ r_esp -= 4; W32(r_esp, 0x74d52bu); f_007f6780();
    /* 0074d52b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074d531: call 0x7f6620 */ r_esp -= 4; W32(r_esp, 0x74d536u); f_007f6620();
    /* 0074d536: ret  */ FN_RET(0x0074d520); r_esp += 4; return;
}

void f_0074d538(void) /* sub_74D538 */
{
    FN_ENTER(0x0074d538);
    /* 0074d538: mov dword ptr [0xa9ab6c], 0x3f800000 */ W32((u32)(0xa9ab6cu), 0x3f800000u);
    /* 0074d542: mov dword ptr [0xa9ab70], 0x41000000 */ W32((u32)(0xa9ab70u), 0x41000000u);
    /* 0074d54c: mov dword ptr [0xa9ab74], 0x3fc00000 */ W32((u32)(0xa9ab74u), 0x3fc00000u);
    /* 0074d556: ret  */ FN_RET(0x0074d538); r_esp += 4; return;
}

void f_0074d558(void) /* sub_74D558 */
{
    FN_ENTER(0x0074d558);
    /* 0074d558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d559: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074d55b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d55d: call 0x74d57c */ r_esp -= 4; W32(r_esp, 0x74d562u); f_0074d57c();
    /* 0074d562: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074d566: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d568: jne 0x74d56e */ if (!fZ) goto L_0074d56e;
L_0074d56a:; BB(0x0074d56a);
    /* 0074d56a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d56b: ret 4 */ FN_RET(0x0074d558); r_esp += 8; return;
L_0074d56e:; BB(0x0074d56e);
    /* 0074d56e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d56f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74d574u); f_005c2f74();
    /* 0074d574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d576: ret 4 */ FN_RET(0x0074d558); r_esp += 8; return;
}

void f_0074d57c(void) /* sub_74D57C */
{
    FN_ENTER(0x0074d57c);
    /* 0074d57c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d57d: mov ebp, esp */ r_ebp = r_esp;
    /* 0074d57f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d581: push 0x8f2974 */ { u32 v = 0x8f2974u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d586: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074d58c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d58d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074d594: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d597: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074d59a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074d59d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074d5a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074d5a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074d5a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074d5ad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d5b0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074d5b3: mov dword ptr [eax], 0xb41f30 */ W32((u32)(r_eax), 0xb41f30u);
    /* 0074d5b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d5bb: je 0x74d5cc */ if (fZ) goto L_0074d5cc;
L_0074d5bd:; BB(0x0074d5bd);
    /* 0074d5bd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d5c2u); f_007127b0();
    /* 0074d5c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d5c5: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0074d5cc:; BB(0x0074d5cc);
    /* 0074d5cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074d5d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d5d5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74d5dau); f_008171e8();
    /* 0074d5da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d5dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d5e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d5e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d5e7: ret  */ FN_RET(0x0074d57c); r_esp += 4; return;
}

void f_0074d5e8(void) /* sub_74D5E8 */
{
    FN_ENTER(0x0074d5e8);
    /* 0074d5e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d5e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d5ea: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074d5ec: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0074d5f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d5f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d5f3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74d5f8u); f_008193cc();
    /* 0074d5f8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0074d5fc: mov dword ptr [ebx], 0xb41f30 */ W32((u32)(r_ebx), 0xb41f30u);
    /* 0074d602: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 0074d605: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0074d608: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d60a: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 0074d60d: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 0074d610: mov eax, ebx */ r_eax = r_ebx;
    /* 0074d612: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d613: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d614: ret 8 */ FN_RET(0x0074d5e8); r_esp += 12; return;
}

void f_0074d618(void) /* sub_74D618 */
{
    FN_ENTER(0x0074d618);
    /* 0074d618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d619: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d61a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d61d: mov edi, ecx */ r_edi = r_ecx;
    /* 0074d61f: movsx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 0074d623: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0074d625: jl 0x74d749 */ if ((fS!=fO)) goto L_0074d749;
L_0074d62b:; BB(0x0074d62b);
    /* 0074d62b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074d62e: jle 0x74d68f */ if ((fZ||fS!=fO)) goto L_0074d68f;
L_0074d630:; BB(0x0074d630);
    /* 0074d630: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d633: jne 0x74d749 */ if (!fZ) goto L_0074d749;
L_0074d639:; BB(0x0074d639);
    /* 0074d639: mov eax, 0x43140000 */ r_eax = 0x43140000u;
    /* 0074d63e: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074d641: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0074d645: mov edx, 0x43970000 */ r_edx = 0x43970000u;
    /* 0074d64a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0074d64d: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x74d652u); f_00751c44();
    /* 0074d652: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d654: jne 0x74d661 */ if (!fZ) goto L_0074d661;
L_0074d656:; BB(0x0074d656);
    /* 0074d656: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d659: call 0x718e28 */ r_esp -= 4; W32(r_esp, 0x74d65eu); f_00718e28();
    /* 0074d65e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d65f: jmp 0x74d66a */ goto L_0074d66a;
L_0074d661:; BB(0x0074d661);
    /* 0074d661: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d664: call 0x718e58 */ r_esp -= 4; W32(r_esp, 0x74d669u); f_00718e58();
    /* 0074d669: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0074d66a:; BB(0x0074d66a);
    /* 0074d66a: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0074d66d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074d674: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074d677: je 0x74d749 */ if (fZ) goto L_0074d749;
L_0074d67d:; BB(0x0074d67d);
    /* 0074d67d: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0074d680: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074d682: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74d685u); call_ind(t); }
    /* 0074d685: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0074d689: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d68c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d68d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d68e: ret  */ FN_RET(0x0074d618); r_esp += 4; return;
L_0074d68f:; BB(0x0074d68f);
    /* 0074d68f: mov eax, 0x43140000 */ r_eax = 0x43140000u;
    /* 0074d694: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0074d698: mov edx, 0x43970000 */ r_edx = 0x43970000u;
    /* 0074d69d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0074d6a0: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d6a3: call 0x718eb0 */ r_esp -= 4; W32(r_esp, 0x74d6a8u); f_00718eb0();
    /* 0074d6a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d6a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d6ab: je 0x74d6b1 */ if (fZ) goto L_0074d6b1;
L_0074d6ad:; BB(0x0074d6ad);
    /* 0074d6ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0074d6af: jmp 0x74d6b6 */ goto L_0074d6b6;
L_0074d6b1:; BB(0x0074d6b1);
    /* 0074d6b1: mov esi, 1 */ r_esi = 0x1u;
L_0074d6b6:; BB(0x0074d6b6);
    /* 0074d6b6: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6b8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74d6bdu); f_0073ec50();
    /* 0074d6bd: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0074d6c1: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d6c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6c6: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x74d6cbu); f_00714ac8();
    /* 0074d6cb: push 0x157 */ { u32 v = 0x157u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6d0: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0074d6d3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74d6d8u); f_0079317c();
    /* 0074d6d8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d6db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6dc: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074d6df: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x74d6e4u); f_00737ae4();
    /* 0074d6e4: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6e9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74d6eeu); f_0079317c();
    /* 0074d6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d6ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6f2: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074d6f5: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x74d6fau); f_00714d34();
    /* 0074d6fa: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d6ff: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74d704u); f_0079317c();
    /* 0074d704: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d705: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d707: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d708: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074d70b: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x74d710u); f_00714d34();
    /* 0074d710: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d711: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074d714: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x74d719u); f_00714e5c();
    /* 0074d719: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d71b: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0074d71e: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074d725: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074d72a: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074d731: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0074d734: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74d739u); f_007336fc();
    /* 0074d739: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074d73c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d73d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074d740: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74d745u); f_00712624();
    /* 0074d745: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
L_0074d749:; BB(0x0074d749);
    /* 0074d749: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d74c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d74d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d74e: ret  */ FN_RET(0x0074d618); r_esp += 4; return;
}

void f_0074d750(void) /* sub_74D750 */
{
    FN_ENTER(0x0074d750);
    /* 0074d750: mov dword ptr [0xa9ab9c], 0x3f800000 */ W32((u32)(0xa9ab9cu), 0x3f800000u);
    /* 0074d75a: mov dword ptr [0xa9aba0], 0x41000000 */ W32((u32)(0xa9aba0u), 0x41000000u);
    /* 0074d764: mov dword ptr [0xa9aba4], 0x3fc00000 */ W32((u32)(0xa9aba4u), 0x3fc00000u);
    /* 0074d76e: ret  */ FN_RET(0x0074d750); r_esp += 4; return;
}

void f_0074d770(void) /* sub_74D770 */
{
    FN_ENTER(0x0074d770);
    /* 0074d770: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d771: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074d773: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074d775: call 0x74d794 */ r_esp -= 4; W32(r_esp, 0x74d77au); f_0074d794();
    /* 0074d77a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074d77e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d780: jne 0x74d786 */ if (!fZ) goto L_0074d786;
L_0074d782:; BB(0x0074d782);
    /* 0074d782: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d783: ret 4 */ FN_RET(0x0074d770); r_esp += 8; return;
L_0074d786:; BB(0x0074d786);
    /* 0074d786: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d787: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74d78cu); f_005c2f74();
    /* 0074d78c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d78d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d78e: ret 4 */ FN_RET(0x0074d770); r_esp += 8; return;
}

void f_0074d794(void) /* sub_74D794 */
{
    FN_ENTER(0x0074d794);
    /* 0074d794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d795: mov ebp, esp */ r_ebp = r_esp;
    /* 0074d797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d799: push 0x8f2990 */ { u32 v = 0x8f2990u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d79e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074d7a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d7a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074d7ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d7af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074d7b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074d7b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074d7b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074d7bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074d7be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074d7c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d7c8: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0074d7cb: mov dword ptr [ecx], 0xb41fe0 */ W32((u32)(r_ecx), 0xb41fe0u);
    /* 0074d7d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d7d3: je 0x74d7e6 */ if (fZ) goto L_0074d7e6;
L_0074d7d5:; BB(0x0074d7d5);
    /* 0074d7d5: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d7d7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d7dcu); f_007127b0();
    /* 0074d7dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d7df: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_0074d7e6:; BB(0x0074d7e6);
    /* 0074d7e6: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0074d7e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d7eb: je 0x74d7fe */ if (fZ) goto L_0074d7fe;
L_0074d7ed:; BB(0x0074d7ed);
    /* 0074d7ed: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d7ef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d7f4u); f_007127b0();
    /* 0074d7f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d7f7: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0074d7fe:; BB(0x0074d7fe);
    /* 0074d7fe: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0074d801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d803: je 0x74d816 */ if (fZ) goto L_0074d816;
L_0074d805:; BB(0x0074d805);
    /* 0074d805: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d807: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d80cu); f_007127b0();
    /* 0074d80c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d80f: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_0074d816:; BB(0x0074d816);
    /* 0074d816: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0074d819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d81b: je 0x74d82e */ if (fZ) goto L_0074d82e;
L_0074d81d:; BB(0x0074d81d);
    /* 0074d81d: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d81f: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74d824u); f_0073d160();
    /* 0074d824: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d827: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_0074d82e:; BB(0x0074d82e);
    /* 0074d82e: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0074d831: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d833: je 0x74d846 */ if (fZ) goto L_0074d846;
L_0074d835:; BB(0x0074d835);
    /* 0074d835: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d837: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d83cu); f_007127b0();
    /* 0074d83c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d83f: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_0074d846:; BB(0x0074d846);
    /* 0074d846: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0074d849: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d84b: je 0x74d864 */ if (fZ) goto L_0074d864;
L_0074d84d:; BB(0x0074d84d);
    /* 0074d84d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d850: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074d854: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074d859: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0074d85d: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0074d864:; BB(0x0074d864);
    /* 0074d864: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0074d867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d869: je 0x74d87c */ if (fZ) goto L_0074d87c;
L_0074d86b:; BB(0x0074d86b);
    /* 0074d86b: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d86d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d872u); f_007127b0();
    /* 0074d872: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d875: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_0074d87c:; BB(0x0074d87c);
    /* 0074d87c: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0074d87f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d881: je 0x74d894 */ if (fZ) goto L_0074d894;
L_0074d883:; BB(0x0074d883);
    /* 0074d883: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d885: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d88au); f_007127b0();
    /* 0074d88a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d88d: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_0074d894:; BB(0x0074d894);
    /* 0074d894: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 0074d897: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d899: je 0x74d8ac */ if (fZ) goto L_0074d8ac;
L_0074d89b:; BB(0x0074d89b);
    /* 0074d89b: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d89d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74d8a2u); f_007127b0();
    /* 0074d8a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d8a5: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
L_0074d8ac:; BB(0x0074d8ac);
    /* 0074d8ac: movzx eax, byte ptr [ecx + 0x64] */ r_eax = (u32)R8((u32)(r_ecx+0x64u));
    /* 0074d8b0: mov dword ptr [0xa9abac], 0 */ W32((u32)(0xa9abacu), 0x0u);
    /* 0074d8ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d8bc: je 0x74d8da */ if (fZ) goto L_0074d8da;
L_0074d8be:; BB(0x0074d8be);
    /* 0074d8be: push dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d8c1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74d8c6u); f_0068d5a8();
    /* 0074d8c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074d8c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074d8c9: je 0x74d8d7 */ if (fZ) goto L_0074d8d7;
L_0074d8cb:; BB(0x0074d8cb);
    /* 0074d8cb: mov ecx, eax */ r_ecx = r_eax;
    /* 0074d8cd: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x74d8d2u); f_00691e2c();
    /* 0074d8d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074d8d5: jmp 0x74d8da */ goto L_0074d8da;
L_0074d8d7:; BB(0x0074d8d7);
    /* 0074d8d7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0074d8da:; BB(0x0074d8da);
    /* 0074d8da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074d8e1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74d8e6u); f_008171e8();
    /* 0074d8e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d8e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d8f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d8f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d8f3: ret  */ FN_RET(0x0074d794); r_esp += 4; return;
}

void f_0074d8f4(void) /* sub_74D8F4 */
{
    FN_ENTER(0x0074d8f4);
    /* 0074d8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074d8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0074d8f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d8f9: push 0x8f29ac */ { u32 v = 0x8f29acu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d8fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074d904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074d90c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d90f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074d912: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074d915: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074d918: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074d91b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0074d91e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0074d921: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074d924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d925: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074d928: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074d92b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74d930u); f_008193cc();
    /* 0074d930: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074d937: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074d93a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074d93d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074d940: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0074d943: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 0074d946: mov dword ptr [ecx], 0xb41fe0 */ W32((u32)(r_ecx), 0xb41fe0u);
    /* 0074d94c: mov eax, dword ptr [0x9f4080] */ r_eax = R32((u32)(0x9f4080u));
    /* 0074d951: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0074d954: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0074d95b: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74d960u); f_0074e000();
    /* 0074d960: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074d963: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074d966: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074d968: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0074d96b: mov dword ptr [eax + 0x54], 0xffffffff */ W32((u32)(r_eax+0x54u), 0xffffffffu);
    /* 0074d972: mov dword ptr [0xa9abac], eax */ W32((u32)(0xa9abacu), r_eax);
    /* 0074d977: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0074d97a: mov byte ptr [eax + 0x5c], 1 */ W8((u32)(r_eax+0x5cu), 0x1u);
    /* 0074d97e: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0074d981: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0074d984: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0074d987: mov byte ptr [eax + 0x1c], dl */ W8((u32)(r_eax+0x1cu), (u8)r_edx);
    /* 0074d98a: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0074d98d: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0074d990: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0074d993: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0074d996: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0074d999: mov byte ptr [eax + 0x64], dl */ W8((u32)(r_eax+0x64u), (u8)r_edx);
    /* 0074d99c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074d99f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074d9a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0074d9a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d9a9: ret 8 */ FN_RET(0x0074d8f4); r_esp += 12; return;
}

void f_0074d9ac(void) /* sub_74D9AC */
{
    FN_ENTER(0x0074d9ac);
    /* 0074d9ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d9ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d9ae: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074d9b1: mov edi, ecx */ r_edi = r_ecx;
    /* 0074d9b3: mov dword ptr [esp], 0x43d18000 */ W32((u32)(r_esp), 0x43d18000u);
    /* 0074d9ba: mov dword ptr [esp + 4], 0x43ac0000 */ W32((u32)(r_esp+0x4u), 0x43ac0000u);
    /* 0074d9c2: mov dword ptr [esp + 8], 0x434e0000 */ W32((u32)(r_esp+0x8u), 0x434e0000u);
    /* 0074d9ca: mov dword ptr [esp + 0xc], 0x42b80000 */ W32((u32)(r_esp+0xcu), 0x42b80000u);
    /* 0074d9d2: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d9d5: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74d9dau); f_00719140();
    /* 0074d9da: mov ebx, eax */ r_ebx = r_eax;
    /* 0074d9dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d9df: movzx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)R8((u32)(r_edi+0x1cu));
    /* 0074d9e3: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074d9e6: ja 0x74df46 */ if ((!fC&&!fZ)) goto L_0074df46;
L_0074d9ec:; BB(0x0074d9ec);
    /* 0074d9ec: mov edx, dword ptr [edx*4 + 0x973a80] */ r_edx = R32((u32)(r_edx*4+0x973a80u));
    /* 0074d9f3: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074d9ac); r_esp += 4; return;
}

void f_0074d9f5(void)
{
    FN_ENTER(0x0074d9f5);
    /* 0074d9f5: mov ecx, edi */ r_ecx = r_edi;
    /* 0074d9f7: call 0x74dfb0 */ r_esp -= 4; W32(r_esp, 0x74d9fcu); f_0074dfb0();
    /* 0074d9fc: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074d9f5); r_esp += 4; return;
}

void f_0074da01(void)
{
    FN_ENTER(0x0074da01);
    /* 0074da01: mov ecx, edi */ r_ecx = r_edi;
    /* 0074da03: call 0x74e060 */ r_esp -= 4; W32(r_esp, 0x74da08u); f_0074e060();
    /* 0074da08: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da01); r_esp += 4; return;
}

void f_0074da0d(void)
{
    FN_ENTER(0x0074da0d);
    /* 0074da0d: mov ecx, edi */ r_ecx = r_edi;
    /* 0074da0f: call 0x74e18c */ r_esp -= 4; W32(r_esp, 0x74da14u); f_0074e18c();
    /* 0074da14: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da0d); r_esp += 4; return;
}

void f_0074da19(void)
{
    FN_ENTER(0x0074da19);
    /* 0074da19: mov ecx, edi */ r_ecx = r_edi;
    /* 0074da1b: call 0x74e574 */ r_esp -= 4; W32(r_esp, 0x74da20u); f_0074e574();
    /* 0074da20: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da19); r_esp += 4; return;
}

void f_0074da25(void)
{
    FN_ENTER(0x0074da25);
    /* 0074da25: mov ecx, edi */ r_ecx = r_edi;
    /* 0074da27: call 0x74e618 */ r_esp -= 4; W32(r_esp, 0x74da2cu); f_0074e618();
    /* 0074da2c: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da25); r_esp += 4; return;
}

void f_0074da31(void)
{
    FN_ENTER(0x0074da31);
    /* 0074da31: mov ecx, edi */ r_ecx = r_edi;
    /* 0074da33: call 0x74e6d4 */ r_esp -= 4; W32(r_esp, 0x74da38u); f_0074e6d4();
    /* 0074da38: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da31); r_esp += 4; return;
}

void f_0074da3d(void)
{
    FN_ENTER(0x0074da3d);
    /* 0074da3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0074da3f: call 0x74e394 */ r_esp -= 4; W32(r_esp, 0x74da44u); f_0074e394();
    /* 0074da44: jmp 0x74df46 */ goto L_0074df46;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da3d); r_esp += 4; return;
}

void f_0074da49(void)
{
    FN_ENTER(0x0074da49);
    /* 0074da49: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0074da4c: jmp 0x74da79 */ goto L_0074da79;
L_0074da79:; BB(0x0074da79);
    /* 0074da79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074da7c: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0074da7f: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074da84: jbe 0x74df46 */ if ((fC||fZ)) goto L_0074df46;
L_0074da8a:; BB(0x0074da8a);
    /* 0074da8a: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074da8d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74da92u); f_0068d5a8();
    /* 0074da92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074da93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074da95: je 0x74da9e */ if (fZ) goto L_0074da9e;
L_0074da97:; BB(0x0074da97);
    /* 0074da97: mov ecx, eax */ r_ecx = r_eax;
    /* 0074da99: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x74da9eu); f_00691e2c();
L_0074da9e:; BB(0x0074da9e);
    /* 0074da9e: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074daa1: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74daa6u); f_00718138();
    /* 0074daa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074daa7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074daaa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074daac: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74daafu); call_ind(t); }
    /* 0074daaf: mov byte ptr [edi + 0x1c], 0x1c */ W8((u32)(r_edi+0x1cu), 0x1cu);
    /* 0074dab3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dab6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dab7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dab8: ret  */ FN_RET(0x0074da49); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da49); r_esp += 4; return;
}

void f_0074da4e(void)
{
    FN_ENTER(0x0074da4e);
    /* 0074da4e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074da51: call 0x74f028 */ r_esp -= 4; W32(r_esp, 0x74da56u); f_0074f028();
    /* 0074da56: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074da59: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74da5eu); f_0068d5a8();
    /* 0074da5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074da5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074da61: je 0x74da6a */ if (fZ) goto L_0074da6a;
L_0074da63:; BB(0x0074da63);
    /* 0074da63: mov ecx, eax */ r_ecx = r_eax;
    /* 0074da65: call 0x691e10 */ r_esp -= 4; W32(r_esp, 0x74da6au); f_00691e10();
L_0074da6a:; BB(0x0074da6a);
    /* 0074da6a: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074da6d: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x74da72u); f_00718168();
    /* 0074da72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074da73: mov byte ptr [edi + 0x1c], 0x13 */ W8((u32)(r_edi+0x1cu), 0x13u);
    /* 0074da77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074da79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074da7c: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0074da7f: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074da84: jbe 0x74df46 */ if ((fC||fZ)) goto L_0074df46;
L_0074da8a:; BB(0x0074da8a);
    /* 0074da8a: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074da8d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74da92u); f_0068d5a8();
    /* 0074da92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074da93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074da95: je 0x74da9e */ if (fZ) goto L_0074da9e;
L_0074da97:; BB(0x0074da97);
    /* 0074da97: mov ecx, eax */ r_ecx = r_eax;
    /* 0074da99: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x74da9eu); f_00691e2c();
L_0074da9e:; BB(0x0074da9e);
    /* 0074da9e: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074daa1: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74daa6u); f_00718138();
    /* 0074daa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074daa7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074daaa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074daac: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74daafu); call_ind(t); }
    /* 0074daaf: mov byte ptr [edi + 0x1c], 0x1c */ W8((u32)(r_edi+0x1cu), 0x1cu);
    /* 0074dab3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dab6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dab7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dab8: ret  */ FN_RET(0x0074da4e); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074da4e); r_esp += 4; return;
}

void f_0074dab9(void)
{
    FN_ENTER(0x0074dab9);
    /* 0074dab9: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074dabc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dabe: je 0x74daf5 */ if (fZ) goto L_0074daf5;
L_0074dac0:; BB(0x0074dac0);
    /* 0074dac0: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x74dac5u); f_0073b170();
    /* 0074dac5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dac7: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dacd:; BB(0x0074dacd);
    /* 0074dacd: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0074dad2: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074dad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dad9: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0074dade: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74dae3u); f_007c1160();
    /* 0074dae3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dae5: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074daeb:; BB(0x0074daeb);
    /* 0074daeb: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 0074daef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074daf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074daf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074daf4: ret  */ FN_RET(0x0074dab9); r_esp += 4; return;
L_0074daf5:; BB(0x0074daf5);
    /* 0074daf5: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 0074daf9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dafc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dafd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dafe: ret  */ FN_RET(0x0074dab9); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dab9); r_esp += 4; return;
}

void f_0074daff(void)
{
    FN_ENTER(0x0074daff);
    /* 0074daff: mov ecx, edi */ r_ecx = r_edi;
    /* 0074db01: call 0x74e934 */ r_esp -= 4; W32(r_esp, 0x74db06u); f_0074e934();
    /* 0074db06: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0074db09: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0074db10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074db12: je 0x74df65 */ if (fZ) goto L_0074df65;
L_0074db18:; BB(0x0074db18);
    /* 0074db18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074db1a: je 0x74db2f */ if (fZ) goto L_0074db2f;
L_0074db1c:; BB(0x0074db1c);
    /* 0074db1c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0074db1e: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x74db23u); f_007930dc();
    /* 0074db23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074db24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074db26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074db27: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074db2a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74db2fu); f_0073ae38();
L_0074db2f:; BB(0x0074db2f);
    /* 0074db2f: mov byte ptr [edi + 0x1c], 0x10 */ W8((u32)(r_edi+0x1cu), 0x10u);
    /* 0074db33: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0074db36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074db39: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0074db3c: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074db42: jbe 0x74db73 */ if ((fC||fZ)) goto L_0074db73;
L_0074db44:; BB(0x0074db44);
    /* 0074db44: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0074db47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074db49: je 0x74df4c */ if (fZ) goto L_0074df4c;
L_0074db4f:; BB(0x0074db4f);
    /* 0074db4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074db51: je 0x74db69 */ if (fZ) goto L_0074db69;
L_0074db53:; BB(0x0074db53);
    /* 0074db53: push 0x15b */ { u32 v = 0x15bu; r_esp -= 4; W32(r_esp, v); }
    /* 0074db58: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74db5du); f_0079317c();
    /* 0074db5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074db5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074db60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074db61: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074db64: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74db69u); f_0073ae38();
L_0074db69:; BB(0x0074db69);
    /* 0074db69: mov byte ptr [edi + 0x1c], 0x11 */ W8((u32)(r_edi+0x1cu), 0x11u);
    /* 0074db6d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074db70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074db71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074db72: ret  */ FN_RET(0x0074daff); r_esp += 4; return;
L_0074db73:; BB(0x0074db73);
    /* 0074db73: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0074db76: movzx edx, byte ptr [edx + 0x94] */ r_edx = (u32)R8((u32)(r_edx+0x94u));
    /* 0074db7d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074db80: je 0x74db86 */ if (fZ) goto L_0074db86;
L_0074db82:; BB(0x0074db82);
    /* 0074db82: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
L_0074db86:; BB(0x0074db86);
    /* 0074db86: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0074db8c: or edx, dword ptr [0xa0f678] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074db92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074db93: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0074db96: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074db98: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074db9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074db9c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074dba3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74dba8u); f_007c1160();
    /* 0074dba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dbaa: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dbb0:; BB(0x0074dbb0);
    /* 0074dbb0: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 0074dbb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dbb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dbb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dbb9: ret  */ FN_RET(0x0074daff); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074daff); r_esp += 4; return;
L_0074df4c:; BB(0x0074df4c);
    /* 0074df4c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074df4f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0074df53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074df54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074df55: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74df5au); f_0073a888();
    /* 0074df5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074df5d: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0074df60: jmp 0x74db4f */ goto L_0074db4f;
L_0074df65:; BB(0x0074df65);
    /* 0074df65: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0074df68: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0074df6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074df6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074df6e: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74df73u); f_0073a888();
    /* 0074df73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074df76: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0074df79: jmp 0x74db18 */ goto L_0074db18;
}

void f_0074db33(void)
{
    FN_ENTER(0x0074db33);
    /* 0074db33: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0074db36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074db39: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0074db3c: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074db42: jbe 0x74db73 */ if ((fC||fZ)) goto L_0074db73;
L_0074db44:; BB(0x0074db44);
    /* 0074db44: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0074db47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074db49: je 0x74df4c */ if (fZ) goto L_0074df4c;
L_0074db4f:; BB(0x0074db4f);
    /* 0074db4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074db51: je 0x74db69 */ if (fZ) goto L_0074db69;
L_0074db53:; BB(0x0074db53);
    /* 0074db53: push 0x15b */ { u32 v = 0x15bu; r_esp -= 4; W32(r_esp, v); }
    /* 0074db58: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74db5du); f_0079317c();
    /* 0074db5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074db5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074db60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074db61: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074db64: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74db69u); f_0073ae38();
L_0074db69:; BB(0x0074db69);
    /* 0074db69: mov byte ptr [edi + 0x1c], 0x11 */ W8((u32)(r_edi+0x1cu), 0x11u);
    /* 0074db6d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074db70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074db71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074db72: ret  */ FN_RET(0x0074db33); r_esp += 4; return;
L_0074db73:; BB(0x0074db73);
    /* 0074db73: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0074db76: movzx edx, byte ptr [edx + 0x94] */ r_edx = (u32)R8((u32)(r_edx+0x94u));
    /* 0074db7d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074db80: je 0x74db86 */ if (fZ) goto L_0074db86;
L_0074db82:; BB(0x0074db82);
    /* 0074db82: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
L_0074db86:; BB(0x0074db86);
    /* 0074db86: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0074db8c: or edx, dword ptr [0xa0f678] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074db92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074db93: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0074db96: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074db98: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074db9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074db9c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074dba3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74dba8u); f_007c1160();
    /* 0074dba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dbaa: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dbb0:; BB(0x0074dbb0);
    /* 0074dbb0: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 0074dbb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dbb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dbb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dbb9: ret  */ FN_RET(0x0074db33); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074db33); r_esp += 4; return;
L_0074df4c:; BB(0x0074df4c);
    /* 0074df4c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074df4f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0074df53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074df54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074df55: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74df5au); f_0073a888();
    /* 0074df5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074df5d: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0074df60: jmp 0x74db4f */ goto L_0074db4f;
}

void f_0074dbba(void)
{
    FN_ENTER(0x0074dbba);
    /* 0074dbba: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0074dbbd: jmp 0x74dbee */ goto L_0074dbee;
L_0074dbee:; BB(0x0074dbee);
    /* 0074dbee: mov ecx, eax */ r_ecx = r_eax;
    /* 0074dbf0: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x74dbf5u); f_0073d114();
    /* 0074dbf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dbf7: je 0x74dc03 */ if (fZ) goto L_0074dc03;
L_0074dbf9:; BB(0x0074dbf9);
    /* 0074dbf9: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 0074dbfd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dc00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dc01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dc02: ret  */ FN_RET(0x0074dbba); r_esp += 4; return;
L_0074dc03:; BB(0x0074dc03);
    /* 0074dc03: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0074dc06: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x74dc0bu); f_0073ce50();
    /* 0074dc0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc0d: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dc13:; BB(0x0074dc13);
    /* 0074dc13: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0074dc16: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74dc1bu); f_0073d134();
    /* 0074dc1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc1d: je 0x74dc29 */ if (fZ) goto L_0074dc29;
L_0074dc1f:; BB(0x0074dc1f);
    /* 0074dc1f: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 0074dc23: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dc26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dc27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dc28: ret  */ FN_RET(0x0074dbba); r_esp += 4; return;
L_0074dc29:; BB(0x0074dc29);
    /* 0074dc29: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dc2b: call 0x74e154 */ r_esp -= 4; W32(r_esp, 0x74dc30u); f_0074e154();
    /* 0074dc30: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dc34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dc37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dc38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dc39: ret  */ FN_RET(0x0074dbba); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dbba); r_esp += 4; return;
}

void f_0074dbbf(void)
{
    FN_ENTER(0x0074dbbf);
    /* 0074dbbf: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074dbc4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74dbc9u); f_0073ec50();
    /* 0074dbc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074dbca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dbcb: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dbce: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x74dbd3u); f_0078edec();
    /* 0074dbd3: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dbd6: call 0x78ee54 */ r_esp -= 4; W32(r_esp, 0x74dbdbu); f_0078ee54();
    /* 0074dbdb: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074dbde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074dbdf: call 0x756a58 */ r_esp -= 4; W32(r_esp, 0x74dbe4u); f_00756a58();
    /* 0074dbe4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074dbe7: mov byte ptr [edi + 0x1c], 0xe */ W8((u32)(r_edi+0x1cu), 0xeu);
    /* 0074dbeb: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 0074dbee: mov ecx, eax */ r_ecx = r_eax;
    /* 0074dbf0: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x74dbf5u); f_0073d114();
    /* 0074dbf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dbf7: je 0x74dc03 */ if (fZ) goto L_0074dc03;
L_0074dbf9:; BB(0x0074dbf9);
    /* 0074dbf9: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 0074dbfd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dc00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dc01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dc02: ret  */ FN_RET(0x0074dbbf); r_esp += 4; return;
L_0074dc03:; BB(0x0074dc03);
    /* 0074dc03: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0074dc06: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x74dc0bu); f_0073ce50();
    /* 0074dc0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc0d: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dc13:; BB(0x0074dc13);
    /* 0074dc13: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0074dc16: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74dc1bu); f_0073d134();
    /* 0074dc1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc1d: je 0x74dc29 */ if (fZ) goto L_0074dc29;
L_0074dc1f:; BB(0x0074dc1f);
    /* 0074dc1f: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 0074dc23: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dc26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dc27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dc28: ret  */ FN_RET(0x0074dbbf); r_esp += 4; return;
L_0074dc29:; BB(0x0074dc29);
    /* 0074dc29: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dc2b: call 0x74e154 */ r_esp -= 4; W32(r_esp, 0x74dc30u); f_0074e154();
    /* 0074dc30: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dc34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dc37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dc38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dc39: ret  */ FN_RET(0x0074dbbf); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dbbf); r_esp += 4; return;
}

void f_0074dc3a(void)
{
    FN_ENTER(0x0074dc3a);
    /* 0074dc3a: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0074dc3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc3f: je 0x74dc4d */ if (fZ) goto L_0074dc4d;
L_0074dc41:; BB(0x0074dc41);
    /* 0074dc41: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74dc46u); f_0073d160();
    /* 0074dc46: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_0074dc4d:; BB(0x0074dc4d);
    /* 0074dc4d: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074dc50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc52: je 0x74dc60 */ if (fZ) goto L_0074dc60;
L_0074dc54:; BB(0x0074dc54);
    /* 0074dc54: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74dc59u); f_007127b0();
    /* 0074dc59: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0074dc60:; BB(0x0074dc60);
    /* 0074dc60: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074dc63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc65: je 0x74dc73 */ if (fZ) goto L_0074dc73;
L_0074dc67:; BB(0x0074dc67);
    /* 0074dc67: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74dc6cu); f_007127b0();
    /* 0074dc6c: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0074dc73:; BB(0x0074dc73);
    /* 0074dc73: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 0074dc76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dc78: je 0x74df7e */ if (fZ) goto L_0074df7e;
L_0074dc7e:; BB(0x0074dc7e);
    /* 0074dc7e: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0074dc83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74dc88u); f_0073ec50();
    /* 0074dc88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074dc89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dc8a: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dc8d: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x74dc92u); f_0078edec();
    /* 0074dc92: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dc95: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x74dc9au); f_0078ed2c();
    /* 0074dc9a: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dc9d: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x74dca2u); f_0078ee34();
    /* 0074dca2: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dca5: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x74dcaau); f_0078ee74();
    /* 0074dcaa: mov byte ptr [edi + 0x1c], 0xc */ W8((u32)(r_edi+0x1cu), 0xcu);
    /* 0074dcae: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dcb1: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x74dcb6u); f_0078ed20();
    /* 0074dcb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dcb8: je 0x74dcc4 */ if (fZ) goto L_0074dcc4;
L_0074dcba:; BB(0x0074dcba);
    /* 0074dcba: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dcbe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dcc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dcc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dcc3: ret  */ FN_RET(0x0074dc3a); r_esp += 4; return;
L_0074dcc4:; BB(0x0074dcc4);
    /* 0074dcc4: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dcc7: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x74dcccu); f_0078ed14();
    /* 0074dccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dcce: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dcd4:; BB(0x0074dcd4);
    /* 0074dcd4: mov byte ptr [edi + 0x1c], 0xd */ W8((u32)(r_edi+0x1cu), 0xdu);
    /* 0074dcd8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dcdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dcdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dcdd: ret  */ FN_RET(0x0074dc3a); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dc3a); r_esp += 4; return;
L_0074df7e:; BB(0x0074df7e);
    /* 0074df7e: call 0x756ab0 */ r_esp -= 4; W32(r_esp, 0x74df83u); f_00756ab0();
    /* 0074df83: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0074df86: jmp 0x74dc7e */ goto L_0074dc7e;
}

void f_0074dcae(void)
{
    FN_ENTER(0x0074dcae);
    /* 0074dcae: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dcb1: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x74dcb6u); f_0078ed20();
    /* 0074dcb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dcb8: je 0x74dcc4 */ if (fZ) goto L_0074dcc4;
L_0074dcba:; BB(0x0074dcba);
    /* 0074dcba: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dcbe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dcc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dcc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dcc3: ret  */ FN_RET(0x0074dcae); r_esp += 4; return;
L_0074dcc4:; BB(0x0074dcc4);
    /* 0074dcc4: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074dcc7: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x74dcccu); f_0078ed14();
    /* 0074dccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dcce: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dcd4:; BB(0x0074dcd4);
    /* 0074dcd4: mov byte ptr [edi + 0x1c], 0xd */ W8((u32)(r_edi+0x1cu), 0xdu);
    /* 0074dcd8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dcdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dcdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dcdd: ret  */ FN_RET(0x0074dcae); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dcae); r_esp += 4; return;
}

void f_0074dcde(void)
{
    FN_ENTER(0x0074dcde);
    /* 0074dcde: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0074dce1: jmp 0x74dcf9 */ goto L_0074dcf9;
L_0074dcf9:; BB(0x0074dcf9);
    /* 0074dcf9: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074dd00: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074dd03: je 0x74dd10 */ if (fZ) goto L_0074dd10;
L_0074dd05:; BB(0x0074dd05);
    /* 0074dd05: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dd09: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0074dd10:; BB(0x0074dd10);
    /* 0074dd10: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074dd13: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dd19:; BB(0x0074dd19);
    /* 0074dd19: mov ecx, eax */ r_ecx = r_eax;
    /* 0074dd1b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74dd20u); f_007365f4();
    /* 0074dd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd21: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dd23: call 0x74e944 */ r_esp -= 4; W32(r_esp, 0x74dd28u); f_0074e944();
    /* 0074dd28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dd2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dd2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dd2d: ret  */ FN_RET(0x0074dcde); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dcde); r_esp += 4; return;
}

void f_0074dce3(void)
{
    FN_ENTER(0x0074dce3);
    /* 0074dce3: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074dce6: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x74dcebu); f_0073600c();
    /* 0074dceb: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dced: call 0x74e960 */ r_esp -= 4; W32(r_esp, 0x74dcf2u); f_0074e960();
    /* 0074dcf2: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0074dcf6: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0074dcf9: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074dd00: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074dd03: je 0x74dd10 */ if (fZ) goto L_0074dd10;
L_0074dd05:; BB(0x0074dd05);
    /* 0074dd05: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dd09: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0074dd10:; BB(0x0074dd10);
    /* 0074dd10: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074dd13: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dd19:; BB(0x0074dd19);
    /* 0074dd19: mov ecx, eax */ r_ecx = r_eax;
    /* 0074dd1b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74dd20u); f_007365f4();
    /* 0074dd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd21: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dd23: call 0x74e944 */ r_esp -= 4; W32(r_esp, 0x74dd28u); f_0074e944();
    /* 0074dd28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dd2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dd2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dd2d: ret  */ FN_RET(0x0074dce3); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dce3); r_esp += 4; return;
}

void f_0074dd2e(void)
{
    FN_ENTER(0x0074dd2e);
    /* 0074dd2e: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0074dd34: lea ebx, [ebx + ebx*4] */ r_ebx = (u32)(r_ebx+r_ebx*4);
    /* 0074dd37: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074dd39: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074dd3b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074dd3d: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074dd3f: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 0074dd46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd47: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74dd4cu); f_007c1160();
    /* 0074dd4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dd4e: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074dd54:; BB(0x0074dd54);
    /* 0074dd54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074dd56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd59: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0074dd5e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74dd63u); f_00814298();
    /* 0074dd63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074dd66: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0074dd6a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dd6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dd6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dd6f: ret  */ FN_RET(0x0074dd2e); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dd2e); r_esp += 4; return;
}

void f_0074dd70(void)
{
    FN_ENTER(0x0074dd70);
    /* 0074dd70: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 0074dd73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dd75: je 0x74dd8b */ if (fZ) goto L_0074dd8b;
L_0074dd77:; BB(0x0074dd77);
    /* 0074dd77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074dd7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074dd80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0074dd84: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
L_0074dd8b:; BB(0x0074dd8b);
    /* 0074dd8b: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074dd8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dd90: je 0x74dd9e */ if (fZ) goto L_0074dd9e;
L_0074dd92:; BB(0x0074dd92);
    /* 0074dd92: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74dd97u); f_007127b0();
    /* 0074dd97: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_0074dd9e:; BB(0x0074dd9e);
    /* 0074dd9e: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0074dda1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dda3: je 0x74ddb1 */ if (fZ) goto L_0074ddb1;
L_0074dda5:; BB(0x0074dda5);
    /* 0074dda5: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74ddaau); f_0073d160();
    /* 0074ddaa: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_0074ddb1:; BB(0x0074ddb1);
    /* 0074ddb1: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074ddb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ddb6: je 0x74ddc4 */ if (fZ) goto L_0074ddc4;
L_0074ddb8:; BB(0x0074ddb8);
    /* 0074ddb8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74ddbdu); f_007127b0();
    /* 0074ddbd: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0074ddc4:; BB(0x0074ddc4);
    /* 0074ddc4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0074ddc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ddc9: je 0x74df8b */ if (fZ) goto L_0074df8b;
L_0074ddcf:; BB(0x0074ddcf);
    /* 0074ddcf: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074ddd6: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074dddc: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0074dddf: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0074dde6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dde8: je 0x74ddf1 */ if (fZ) goto L_0074ddf1;
L_0074ddea:; BB(0x0074ddea);
    /* 0074ddea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ddec: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74ddf1u); f_00760acc();
L_0074ddf1:; BB(0x0074ddf1);
    /* 0074ddf1: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074ddf4: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x74ddf9u); f_0073605c();
    /* 0074ddf9: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0074ddfd: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074de00: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074de07: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de09: je 0x74de16 */ if (fZ) goto L_0074de16;
L_0074de0b:; BB(0x0074de0b);
    /* 0074de0b: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0074de0f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
L_0074de16:; BB(0x0074de16);
    /* 0074de16: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de18: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074de1e:; BB(0x0074de1e);
    /* 0074de1e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74de23u); f_007365f4();
    /* 0074de23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074de24: mov ecx, edi */ r_ecx = r_edi;
    /* 0074de26: call 0x74e9f4 */ r_esp -= 4; W32(r_esp, 0x74de2bu); f_0074e9f4();
    /* 0074de2b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074de2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074de2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074de30: ret  */ FN_RET(0x0074dd70); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dd70); r_esp += 4; return;
L_0074df8b:; BB(0x0074df8b);
    /* 0074df8b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074df8e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74df93u); f_00737d90();
    /* 0074df93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074df94: mov ecx, edi */ r_ecx = r_edi;
    /* 0074df96: call 0x74ea28 */ r_esp -= 4; W32(r_esp, 0x74df9bu); f_0074ea28();
    /* 0074df9b: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0074df9e: jmp 0x74ddcf */ goto L_0074ddcf;
}

void f_0074ddfd(void)
{
    FN_ENTER(0x0074ddfd);
    /* 0074ddfd: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074de00: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074de07: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de09: je 0x74de16 */ if (fZ) goto L_0074de16;
L_0074de0b:; BB(0x0074de0b);
    /* 0074de0b: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0074de0f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
L_0074de16:; BB(0x0074de16);
    /* 0074de16: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de18: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074de1e:; BB(0x0074de1e);
    /* 0074de1e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74de23u); f_007365f4();
    /* 0074de23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074de24: mov ecx, edi */ r_ecx = r_edi;
    /* 0074de26: call 0x74e9f4 */ r_esp -= 4; W32(r_esp, 0x74de2bu); f_0074e9f4();
    /* 0074de2b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074de2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074de2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074de30: ret  */ FN_RET(0x0074ddfd); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074ddfd); r_esp += 4; return;
}

void f_0074de31(void)
{
    FN_ENTER(0x0074de31);
    /* 0074de31: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074de34: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074de3b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de3d: je 0x74de51 */ if (fZ) goto L_0074de51;
L_0074de3f:; BB(0x0074de3f);
    /* 0074de3f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074de42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074de44: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74de47u); call_ind(t); }
    /* 0074de47: mov byte ptr [edi + 0x1c], 0x1c */ W8((u32)(r_edi+0x1cu), 0x1cu);
    /* 0074de4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074de4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074de4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074de50: ret  */ FN_RET(0x0074de31); r_esp += 4; return;
L_0074de51:; BB(0x0074de51);
    /* 0074de51: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de53: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074de59:; BB(0x0074de59);
    /* 0074de59: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74de5eu); f_00737d90();
    /* 0074de5e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0074de61: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0074de64: movzx eax, byte ptr [edx + 0x94] */ r_eax = (u32)R8((u32)(r_edx+0x94u));
    /* 0074de6b: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074de70: mov byte ptr [edx + 0x94], al */ W8((u32)(r_edx+0x94u), (u8)r_eax);
    /* 0074de76: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074de79: call 0x737a68 */ r_esp -= 4; W32(r_esp, 0x74de7eu); f_00737a68();
    /* 0074de7e: mov byte ptr [edi + 0x1c], 0xf */ W8((u32)(r_edi+0x1cu), 0xfu);
    /* 0074de82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074de85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074de86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074de87: ret  */ FN_RET(0x0074de31); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074de31); r_esp += 4; return;
}

void f_0074de88(void)
{
    FN_ENTER(0x0074de88);
    /* 0074de88: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0074de8b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074de92: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074de94: je 0x74dea8 */ if (fZ) goto L_0074dea8;
L_0074de96:; BB(0x0074de96);
    /* 0074de96: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074de99: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074de9b: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74de9eu); call_ind(t); }
    /* 0074de9e: mov byte ptr [edi + 0x1c], 0x1c */ W8((u32)(r_edi+0x1cu), 0x1cu);
    /* 0074dea2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dea5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dea6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dea7: ret  */ FN_RET(0x0074de88); r_esp += 4; return;
L_0074dea8:; BB(0x0074dea8);
    /* 0074dea8: movzx eax, byte ptr [edx + 0x94] */ r_eax = (u32)R8((u32)(r_edx+0x94u));
    /* 0074deaf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074deb1: je 0x74df46 */ if (fZ) goto L_0074df46;
L_0074deb7:; BB(0x0074deb7);
    /* 0074deb7: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0074debb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074debe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074debf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dec0: ret  */ FN_RET(0x0074de88); r_esp += 4; return;
L_0074df46:; BB(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074de88); r_esp += 4; return;
}

void f_0074dec1(void)
{
    FN_ENTER(0x0074dec1);
    /* 0074dec1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0074dec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dec6: je 0x74dfa3 */ if (fZ) goto L_0074dfa3;
L_0074decc:; BB(0x0074decc);
    /* 0074decc: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074decf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ded1: je 0x74dedf */ if (fZ) goto L_0074dedf;
L_0074ded3:; BB(0x0074ded3);
    /* 0074ded3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74ded8u); f_007127b0();
    /* 0074ded8: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0074dedf:; BB(0x0074dedf);
    /* 0074dedf: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074dee2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dee4: je 0x74def2 */ if (fZ) goto L_0074def2;
L_0074dee6:; BB(0x0074dee6);
    /* 0074dee6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74deebu); f_007127b0();
    /* 0074deeb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0074def2:; BB(0x0074def2);
    /* 0074def2: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074def5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074def7: je 0x74df05 */ if (fZ) goto L_0074df05;
L_0074def9:; BB(0x0074def9);
    /* 0074def9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74defeu); f_007127b0();
    /* 0074defe: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_0074df05:; BB(0x0074df05);
    /* 0074df05: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074df08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074df0a: je 0x74df42 */ if (fZ) goto L_0074df42;
L_0074df0c:; BB(0x0074df0c);
    /* 0074df0c: call 0x74efd4 */ r_esp -= 4; W32(r_esp, 0x74df11u); f_0074efd4();
    /* 0074df11: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0074df14: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074df1b: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074df20: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0074df23: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074df2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074df2c: je 0x74df35 */ if (fZ) goto L_0074df35;
L_0074df2e:; BB(0x0074df2e);
    /* 0074df2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074df30: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74df35u); f_00760acc();
L_0074df35:; BB(0x0074df35);
    /* 0074df35: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074df3a: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074df3d: call 0x737ab8 */ r_esp -= 4; W32(r_esp, 0x74df42u); f_00737ab8();
L_0074df42:; BB(0x0074df42);
    /* 0074df42: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074dec1); r_esp += 4; return;
L_0074dfa3:; BB(0x0074dfa3);
    /* 0074dfa3: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dfa5: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74dfaau); f_0074e000();
    /* 0074dfaa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074dfad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074dfae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dfaf: ret  */ FN_RET(0x0074dec1); r_esp += 4; return;
}

void f_0074decc(void)
{
    FN_ENTER(0x0074decc);
    /* 0074decc: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074decf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ded1: je 0x74dedf */ if (fZ) goto L_0074dedf;
L_0074ded3:; BB(0x0074ded3);
    /* 0074ded3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74ded8u); f_007127b0();
    /* 0074ded8: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0074dedf:; BB(0x0074dedf);
    /* 0074dedf: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074dee2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dee4: je 0x74def2 */ if (fZ) goto L_0074def2;
L_0074dee6:; BB(0x0074dee6);
    /* 0074dee6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74deebu); f_007127b0();
    /* 0074deeb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0074def2:; BB(0x0074def2);
    /* 0074def2: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074def5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074def7: je 0x74df05 */ if (fZ) goto L_0074df05;
L_0074def9:; BB(0x0074def9);
    /* 0074def9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74defeu); f_007127b0();
    /* 0074defe: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_0074df05:; BB(0x0074df05);
    /* 0074df05: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074df08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074df0a: je 0x74df42 */ if (fZ) goto L_0074df42;
L_0074df0c:; BB(0x0074df0c);
    /* 0074df0c: call 0x74efd4 */ r_esp -= 4; W32(r_esp, 0x74df11u); f_0074efd4();
    /* 0074df11: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0074df14: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074df1b: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074df20: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0074df23: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074df2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074df2c: je 0x74df35 */ if (fZ) goto L_0074df35;
L_0074df2e:; BB(0x0074df2e);
    /* 0074df2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074df30: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74df35u); f_00760acc();
L_0074df35:; BB(0x0074df35);
    /* 0074df35: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074df3a: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074df3d: call 0x737ab8 */ r_esp -= 4; W32(r_esp, 0x74df42u); f_00737ab8();
L_0074df42:; BB(0x0074df42);
    /* 0074df42: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074decc); r_esp += 4; return;
}

void f_0074df46(void)
{
    FN_ENTER(0x0074df46);
    /* 0074df46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074df49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074df4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074df4b: ret  */ FN_RET(0x0074df46); r_esp += 4; return;
}

void f_0074dfb0(void) /* sub_74DFB0 */
{
    FN_ENTER(0x0074dfb0);
    /* 0074dfb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074dfb1: mov edi, ecx */ r_edi = r_ecx;
    /* 0074dfb3: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074dfb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074dfb8: je 0x74dfed */ if (fZ) goto L_0074dfed;
L_0074dfba:; BB(0x0074dfba);
    /* 0074dfba: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x74dfbfu); f_0073b170();
    /* 0074dfbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074dfc1: je 0x74dfeb */ if (fZ) goto L_0074dfeb;
L_0074dfc3:; BB(0x0074dfc3);
    /* 0074dfc3: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0074dfc8: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074dfce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074dfcf: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0074dfd4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74dfd9u); f_007c1160();
    /* 0074dfd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074dfdb: je 0x74dfeb */ if (fZ) goto L_0074dfeb;
L_0074dfdd:; BB(0x0074dfdd);
    /* 0074dfdd: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dfdf: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74dfe4u); f_0074e2e0();
    /* 0074dfe4: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dfe6: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74dfebu); f_0074e000();
L_0074dfeb:; BB(0x0074dfeb);
    /* 0074dfeb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dfec: ret  */ FN_RET(0x0074dfb0); r_esp += 4; return;
L_0074dfed:; BB(0x0074dfed);
    /* 0074dfed: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dfef: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74dff4u); f_0074e2e0();
    /* 0074dff4: mov ecx, edi */ r_ecx = r_edi;
    /* 0074dff6: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74dffbu); f_0074e000();
    /* 0074dffb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074dffc: ret  */ FN_RET(0x0074dfb0); r_esp += 4; return;
}

