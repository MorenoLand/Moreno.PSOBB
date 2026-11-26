#include "protos.h"

void f_0076203d(void)
{
    FN_ENTER(0x0076203d);
    /* 0076203d: mov eax, ecx */ r_eax = r_ecx;
    /* 0076203f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00762042: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762044: je 0x762055 */ if (fZ) goto L_00762055;
L_00762046:; BB(0x00762046);
    /* 00762046: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x76204bu); f_0073d160();
    /* 0076204b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076204e: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_00762055:; BB(0x00762055);
    /* 00762055: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00762058: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0076205f: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00762065: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0076206c: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0076206f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762071: je 0x76207a */ if (fZ) goto L_0076207a;
L_00762073:; BB(0x00762073);
    /* 00762073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762075: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x76207au); f_00760acc();
L_0076207a:; BB(0x0076207a);
    /* 0076207a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076207d: call 0x762140 */ r_esp -= 4; W32(r_esp, 0x762082u); f_00762140();
    /* 00762082: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762085: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00762089: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076208c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0076208f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00762096: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00762098: je 0x7620bb */ if (fZ) goto L_007620bb;
L_0076209a:; BB(0x0076209a);
    /* 0076209a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076209d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 007620a1: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007620a6: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 007620aa: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 007620ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620b7: mov esp, ebp */ r_esp = r_ebp;
    /* 007620b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620ba: ret  */ FN_RET(0x0076203d); r_esp += 4; return;
L_007620bb:; BB(0x007620bb);
    /* 007620bb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007620bd: je 0x7620cd */ if (fZ) goto L_007620cd;
L_007620bf:; BB(0x007620bf);
    /* 007620bf: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7620c4u); f_007365f4();
    /* 007620c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007620c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007620c8: call 0x7621e4 */ r_esp -= 4; W32(r_esp, 0x7620cdu); f_007621e4();
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x0076203d); r_esp += 4; return;
}

void f_00762089(void)
{
    FN_ENTER(0x00762089);
    /* 00762089: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076208c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0076208f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00762096: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00762098: je 0x7620bb */ if (fZ) goto L_007620bb;
L_0076209a:; BB(0x0076209a);
    /* 0076209a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076209d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 007620a1: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007620a6: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 007620aa: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 007620ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620b7: mov esp, ebp */ r_esp = r_ebp;
    /* 007620b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620ba: ret  */ FN_RET(0x00762089); r_esp += 4; return;
L_007620bb:; BB(0x007620bb);
    /* 007620bb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007620bd: je 0x7620cd */ if (fZ) goto L_007620cd;
L_007620bf:; BB(0x007620bf);
    /* 007620bf: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7620c4u); f_007365f4();
    /* 007620c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007620c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007620c8: call 0x7621e4 */ r_esp -= 4; W32(r_esp, 0x7620cdu); f_007621e4();
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00762089); r_esp += 4; return;
}

void f_00762140(void) /* sub_762140 */
{
    FN_ENTER(0x00762140);
    /* 00762140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00762141: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762142: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00762145: mov edx, ecx */ r_edx = r_ecx;
    /* 00762147: mov eax, 1 */ r_eax = 0x1u;
    /* 0076214c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0076214e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00762151: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00762155: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00762159: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0076215d: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00762161: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00762165: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00762169: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0076216d: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00762171: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00762175: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00762179: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0076217d: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00762180: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762182: je 0x7621ae */ if (fZ) goto L_007621ae;
L_00762184:; BB(0x00762184);
    /* 00762184: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00762187: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 0076218c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076218e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00762190: je 0x7621a3 */ if (fZ) goto L_007621a3;
L_00762192:; BB(0x00762192);
    /* 00762192: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00762194: sub al, byte ptr [edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (a < b); }
    /* 00762196: jne 0x7621a3 */ if (!fZ) goto L_007621a3;
L_00762198:; BB(0x00762198);
    /* 00762198: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076219b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076219e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fC = (a < b); }
    /* 007621a1: jne 0x762192 */ if (!fZ) goto L_00762192;
L_007621a3:; BB(0x007621a3);
    /* 007621a3: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 007621a6: setb cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 007621a9: sub al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007621ab: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
L_007621ae:; BB(0x007621ae);
    /* 007621ae: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 007621b1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007621b3: je 0x7621d2 */ if (fZ) goto L_007621d2;
L_007621b5:; BB(0x007621b5);
    /* 007621b5: movzx esi, word ptr [esi] */ r_esi = (u32)R16((u32)(r_esi));
    /* 007621b8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007621ba: je 0x7621d2 */ if (fZ) goto L_007621d2;
L_007621bc:; BB(0x007621bc);
    /* 007621bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007621be: je 0x7621d2 */ if (fZ) goto L_007621d2;
L_007621c0:; BB(0x007621c0);
    /* 007621c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007621c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007621c4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 007621c7: call 0x736608 */ r_esp -= 4; W32(r_esp, 0x7621ccu); f_00736608();
    /* 007621cc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007621cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007621d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007621d1: ret  */ FN_RET(0x00762140); r_esp += 4; return;
L_007621d2:; BB(0x007621d2);
    /* 007621d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007621d4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 007621d7: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x7621dcu); f_0073662c();
    /* 007621dc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007621df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007621e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007621e1: ret  */ FN_RET(0x00762140); r_esp += 4; return;
}

void f_007621e4(void) /* sub_7621E4 */
{
    FN_ENTER(0x007621e4);
    /* 007621e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007621e8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007621eb: je 0x76221c */ if (fZ) goto L_0076221c;
L_007621ed:; BB(0x007621ed);
    /* 007621ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007621ef: je 0x762209 */ if (fZ) goto L_00762209;
L_007621f1:; BB(0x007621f1);
    /* 007621f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007621f4: jne 0x7621fd */ if (!fZ) goto L_007621fd;
L_007621f6:; BB(0x007621f6);
    /* 007621f6: mov byte ptr [ecx + 0x1c], 5 */ W8((u32)(r_ecx+0x1cu), 0x5u);
    /* 007621fa: ret 4 */ FN_RET(0x007621e4); r_esp += 8; return;
L_007621fd:; BB(0x007621fd);
    /* 007621fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762200: jne 0x762219 */ if (!fZ) goto L_00762219;
L_00762202:; BB(0x00762202);
    /* 00762202: mov byte ptr [ecx + 0x1c], 7 */ W8((u32)(r_ecx+0x1cu), 0x7u);
    /* 00762206: ret 4 */ FN_RET(0x007621e4); r_esp += 8; return;
L_00762209:; BB(0x00762209);
    /* 00762209: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 0076220d: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 00762211: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762216: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
L_00762219:; BB(0x00762219);
    /* 00762219: ret 4 */ FN_RET(0x007621e4); r_esp += 8; return;
L_0076221c:; BB(0x0076221c);
    /* 0076221c: mov byte ptr [ecx + 0x1c], 3 */ W8((u32)(r_ecx+0x1cu), 0x3u);
    /* 00762220: ret 4 */ FN_RET(0x007621e4); r_esp += 8; return;
}

void f_00762224(void) /* sub_762224 */
{
    FN_ENTER(0x00762224);
    /* 00762224: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00762225: mov ebp, esp */ r_ebp = r_esp;
    /* 00762227: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00762229: push 0x8f3694 */ { u32 v = 0x8f3694u; r_esp -= 4; W32(r_esp, v); }
    /* 0076222e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00762234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762235: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076223c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076223f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00762242: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00762245: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00762248: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076224b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0076224e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762251: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00762254: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00762257: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x76225cu); f_008193cc();
    /* 0076225c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00762263: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762266: mov dword ptr [edx], 0xb43060 */ W32((u32)(r_edx), 0xb43060u);
    /* 0076226c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076226e: mov esi, dword ptr [0x9f5908] */ r_esi = R32((u32)(0x9f5908u));
    /* 00762274: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00762276: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00762279: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0076227c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0076227f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00762282: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x762287u); f_008581c5();
    /* 00762287: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076228a: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0076228c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0076228f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x762294u); f_008581c5();
    /* 00762294: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762297: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076229a: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0076229d: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007622a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007622a2: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007622a4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007622a7: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007622aa: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007622ad: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 007622b0: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 007622b3: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 007622b6: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 007622b9: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 007622bc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 007622bf: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 007622c2: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 007622c5: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 007622c8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 007622cb: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 007622ce: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 007622d1: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 007622d4: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 007622d7: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 007622da: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 007622dd: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 007622e0: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 007622e3: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 007622e6: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 007622e9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007622ec: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007622ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007622f1: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 007622f3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 007622f6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 007622f9: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 007622fc: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 007622ff: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00762302: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00762305: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00762308: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0076230b: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0076230e: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00762311: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00762314: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00762317: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0076231a: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0076231d: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00762320: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00762323: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00762326: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00762329: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0076232c: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0076232f: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00762332: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 00762335: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00762338: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076233b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076233d: je 0x76235a */ if (fZ) goto L_0076235a;
L_0076233f:; BB(0x0076233f);
    /* 0076233f: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762344u); f_00762d2c();
    /* 00762344: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762347: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076234a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076234b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076234e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076234f: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762352: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762357u); f_00857dec();
    /* 00762357: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076235a:; BB(0x0076235a);
    /* 0076235a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076235c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00762361: push 0x43b40000 */ { u32 v = 0x43b40000u; r_esp -= 4; W32(r_esp, v); }
    /* 00762366: push 0x43a50000 */ { u32 v = 0x43a50000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076236b: push 0x430c0000 */ { u32 v = 0x430c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00762370: call 0x73840c */ r_esp -= 4; W32(r_esp, 0x762375u); f_0073840c();
    /* 00762375: mov edi, eax */ r_edi = r_eax;
    /* 00762377: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00762379: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0076237b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x762380u); f_00792fe8();
    /* 00762380: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762384: mov ecx, edi */ r_ecx = r_edi;
    /* 00762386: call 0x738364 */ r_esp -= 4; W32(r_esp, 0x76238bu); f_00738364();
    /* 0076238b: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x762390u); f_00762d00();
    /* 00762390: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 00762394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00762395: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76239au); f_008581c5();
    /* 0076239a: mov esi, eax */ r_esi = r_eax;
    /* 0076239c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076239f: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007623a2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007623a4: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7623a9u); f_00858009();
    /* 007623a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007623ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007623ae: jbe 0x7623fb */ if ((fC||fZ)) goto L_007623fb;
L_007623b0:; BB(0x007623b0);
    /* 007623b0: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x7623b5u); f_0082d2f8();
    /* 007623b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007623b7: je 0x7623c0 */ if (fZ) goto L_007623c0;
L_007623b9:; BB(0x007623b9);
    /* 007623b9: mov edx, 8 */ r_edx = 0x8u;
    /* 007623be: jmp 0x7623db */ goto L_007623db;
L_007623c0:; BB(0x007623c0);
    /* 007623c0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7623c5u); f_006dc358();
    /* 007623c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007623c8: je 0x7623cf */ if (fZ) goto L_007623cf;
L_007623ca:; BB(0x007623ca);
    /* 007623ca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007623cd: jne 0x7623d6 */ if (!fZ) goto L_007623d6;
L_007623cf:; BB(0x007623cf);
    /* 007623cf: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007623d4: jmp 0x7623db */ goto L_007623db;
L_007623d6:; BB(0x007623d6);
    /* 007623d6: mov edx, 8 */ r_edx = 0x8u;
L_007623db:; BB(0x007623db);
    /* 007623db: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007623dd: je 0x7623fb */ if (fZ) goto L_007623fb;
L_007623df:; BB(0x007623df);
    /* 007623df: mov edx, 0x2a */ r_edx = 0x2au;
    /* 007623e4: mov word ptr [esi + ebx*2], dx */ W16((u32)(r_esi+r_ebx*2), (u16)r_edx);
    /* 007623e8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007623eb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007623ee: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007623f1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7623f6u); f_00858009();
    /* 007623f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007623f7: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007623f9: jb 0x7623b0 */ if (fC) goto L_007623b0;
L_007623fb:; BB(0x007623fb);
    /* 007623fb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007623fd: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 007623ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00762401: mov word ptr [esi + ebx*2], dx */ W16((u32)(r_esi+r_ebx*2), (u16)r_edx);
    /* 00762405: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x76240au); f_00792fe8();
    /* 0076240a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076240d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762410: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762412: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762415: mov ecx, edi */ r_ecx = r_edi;
    /* 00762417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762418: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x76241du); f_00738a04();
    /* 0076241d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0076241f: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00762421: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x762426u); f_00792fe8();
    /* 00762426: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762429: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076242b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076242c: mov ecx, edi */ r_ecx = r_edi;
    /* 0076242e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076242f: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x762434u); f_00738a04();
    /* 00762434: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762436: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00762438: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x76243du); f_00792fe8();
    /* 0076243d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762440: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00762442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762443: mov ecx, edi */ r_ecx = r_edi;
    /* 00762445: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x76244au); f_007389cc();
    /* 0076244a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076244c: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0076244e: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x762453u); f_00792fe8();
    /* 00762453: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762456: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00762458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762459: mov ecx, edi */ r_ecx = r_edi;
    /* 0076245b: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x762460u); f_007389cc();
    /* 00762460: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762461: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x762466u); f_00857e98();
    /* 00762466: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762467: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076246a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076246d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762470: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 00762473: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762476: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0076247d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762480: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762487: mov esp, ebp */ r_esp = r_ebp;
    /* 00762489: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076248a: ret 8 */ FN_RET(0x00762224); r_esp += 12; return;
}

void f_00762490(void) /* sub_762490 */
{
    FN_ENTER(0x00762490);
    /* 00762490: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762491: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00762494: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x762499u); f_0073cd8c();
    /* 00762499: mov esi, eax */ r_esi = r_eax;
    /* 0076249b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076249d: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0076249f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7624a4u); f_00792fe8();
    /* 007624a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007624a7: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 007624ac: mov ecx, esi */ r_ecx = r_esi;
    /* 007624ae: push 0x974e3c */ { u32 v = 0x974e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007624b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007624b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007624b6: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x7624bbu); f_0073cfec();
    /* 007624bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007624bd: mov ecx, esi */ r_ecx = r_esi;
    /* 007624bf: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x7624c4u); f_0073d148();
    /* 007624c4: mov eax, esi */ r_eax = r_esi;
    /* 007624c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007624c7: ret  */ FN_RET(0x00762490); r_esp += 4; return;
}

void f_007624c8(void) /* sub_7624C8 */
{
    FN_ENTER(0x007624c8);
    /* 007624c8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007624cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007624cd: je 0x7624d0 */ if (fZ) goto L_007624d0;
L_007624cf:; BB(0x007624cf);
    /* 007624cf: ret  */ FN_RET(0x007624c8); r_esp += 4; return;
L_007624d0:; BB(0x007624d0);
    /* 007624d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007624d2: ret  */ FN_RET(0x007624c8); r_esp += 4; return;
}

void f_007624d4(void) /* sub_7624D4 */
{
    FN_ENTER(0x007624d4);
    /* 007624d4: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 007624d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007624d9: je 0x7624dc */ if (fZ) goto L_007624dc;
L_007624db:; BB(0x007624db);
    /* 007624db: ret  */ FN_RET(0x007624d4); r_esp += 4; return;
L_007624dc:; BB(0x007624dc);
    /* 007624dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007624de: ret  */ FN_RET(0x007624d4); r_esp += 4; return;
}

void f_007624e0(void) /* sub_7624E0 */
{
    FN_ENTER(0x007624e0);
    /* 007624e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007624e1: mov ebp, esp */ r_ebp = r_esp;
    /* 007624e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007624e5: push 0x8f36e0 */ { u32 v = 0x8f36e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007624ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007624f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007624f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007624f8: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007624fe: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00762501: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00762504: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00762507: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076250a: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0076250e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00762511: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762514: ja 0x762a7e */ if ((!fC&&!fZ)) goto L_00762a7e;
L_0076251a:; BB(0x0076251a);
    /* 0076251a: mov eax, dword ptr [eax*4 + 0x974e5c] */ r_eax = R32((u32)(r_eax*4+0x974e5cu));
    /* 00762521: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x007624e0); r_esp += 4; return;
}

void f_00762523(void)
{
    FN_ENTER(0x00762523);
    /* 00762523: mov eax, ecx */ r_eax = r_ecx;
    /* 00762525: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0076252c: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00762530: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762535u); f_0082d2f8();
    /* 00762535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762537: jne 0x762579 */ if (!fZ) goto L_00762579;
L_00762539:; BB(0x00762539);
    /* 00762539: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00762540: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00762543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762544: push 0x8f87f0 */ { u32 v = 0x8f87f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762549: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x76254eu); f_0082d3c0();
    /* 0076254e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762551: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762556: jne 0x762579 */ if (!fZ) goto L_00762579;
L_00762558:; BB(0x00762558);
    /* 00762558: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 0076255d: push 0x8f8800 */ { u32 v = 0x8f8800u; r_esp -= 4; W32(r_esp, v); }
    /* 00762562: call 0x82d564 */ r_esp -= 4; W32(r_esp, 0x762567u); f_0082d564();
    /* 00762567: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 0076256c: push 0x8f8808 */ { u32 v = 0x8f8808u; r_esp -= 4; W32(r_esp, v); }
    /* 00762571: call 0x82d564 */ r_esp -= 4; W32(r_esp, 0x762576u); f_0082d564();
    /* 00762576: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00762579:; BB(0x00762579);
    /* 00762579: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076257c: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00762580: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 00762584: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762589: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0076258c: jmp 0x762a7e */ goto L_00762a7e;
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x00762523); r_esp += 4; return;
}

void f_00762530(void)
{
    FN_ENTER(0x00762530);
    /* 00762530: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762535u); f_0082d2f8();
    /* 00762535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762537: jne 0x762579 */ if (!fZ) goto L_00762579;
L_00762539:; BB(0x00762539);
    /* 00762539: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00762540: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00762543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762544: push 0x8f87f0 */ { u32 v = 0x8f87f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762549: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x76254eu); f_0082d3c0();
    /* 0076254e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762551: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762556: jne 0x762579 */ if (!fZ) goto L_00762579;
L_00762558:; BB(0x00762558);
    /* 00762558: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 0076255d: push 0x8f8800 */ { u32 v = 0x8f8800u; r_esp -= 4; W32(r_esp, v); }
    /* 00762562: call 0x82d564 */ r_esp -= 4; W32(r_esp, 0x762567u); f_0082d564();
    /* 00762567: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 0076256c: push 0x8f8808 */ { u32 v = 0x8f8808u; r_esp -= 4; W32(r_esp, v); }
    /* 00762571: call 0x82d564 */ r_esp -= 4; W32(r_esp, 0x762576u); f_0082d564();
    /* 00762576: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00762579:; BB(0x00762579);
    /* 00762579: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076257c: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00762580: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 00762584: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762589: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0076258c: jmp 0x762a7e */ goto L_00762a7e;
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x00762530); r_esp += 4; return;
}

void f_00762591(void)
{
    FN_ENTER(0x00762591);
    /* 00762591: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00762598: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0076259a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76259fu); f_005caba4();
    /* 0076259f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007625a0: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 007625a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007625a8: je 0x762adb */ if (fZ) goto L_00762adb;
L_007625ae:; BB(0x007625ae);
    /* 007625ae: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 007625b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007625bc: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x7625c1u); f_00762d00();
    /* 007625c1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007625c7: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 007625cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007625cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007625d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007625d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007625d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007625d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007625d6: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x7625dbu); f_0078eba4();
    /* 007625db: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 007625e1: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_007625e8:; BB(0x007625e8);
    /* 007625e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007625eb: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 007625ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007625f5: mov dword ptr [ebp - 0x6c], 0x439e0000 */ W32((u32)(r_ebp+0xffffff94u), 0x439e0000u);
    /* 007625fc: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 007625ff: mov dword ptr [ebp - 0x68], 0x43b70000 */ W32((u32)(r_ebp+0xffffff98u), 0x43b70000u);
    /* 00762606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762607: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x76260cu); f_0078ed84();
    /* 0076260c: push 0x47166400 */ { u32 v = 0x47166400u; r_esp -= 4; W32(r_esp, v); }
    /* 00762611: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762614: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762617: call 0x78ee24 */ r_esp -= 4; W32(r_esp, 0x76261cu); f_0078ee24();
    /* 0076261c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076261f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762622: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x762627u); f_0078ee74();
    /* 00762627: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076262a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0076262d: call 0x78ee98 */ r_esp -= 4; W32(r_esp, 0x762632u); f_0078ee98();
    /* 00762632: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762635: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762637: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762639: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0076263c: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762641u); f_00738a40();
    /* 00762641: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762644: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00762648: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076264b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0076264e: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x762653u); f_0078ed20();
    /* 00762653: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762655: jne 0x7626df */ if (!fZ) goto L_007626df;
L_0076265b:; BB(0x0076265b);
    /* 0076265b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076265e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762661: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x762666u); f_0078ed14();
    /* 00762666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762668: je 0x762a7e */ if (fZ) goto L_00762a7e;
L_0076266e:; BB(0x0076266e);
    /* 0076266e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762671: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762674: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x762679u); f_0078ed4c();
    /* 00762679: mov ebx, eax */ r_ebx = r_eax;
    /* 0076267b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076267d: je 0x76269d */ if (fZ) goto L_0076269d;
L_0076267f:; BB(0x0076267f);
    /* 0076267f: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762684u); f_00762d2c();
    /* 00762684: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762687: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076268a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076268b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076268c: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076268f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762694u); f_00857dec();
    /* 00762694: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762695: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76269au); f_00857e98();
    /* 0076269a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076269d:; BB(0x0076269d);
    /* 0076269d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007626a0: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007626a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007626a5: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7626aau); f_00858009();
    /* 007626aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007626ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007626ad: jbe 0x762a95 */ if ((fC||fZ)) goto L_00762a95;
L_007626b3:; BB(0x007626b3);
    /* 007626b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007626b6: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007626b9: mov eax, 0x2a */ r_eax = 0x2au;
    /* 007626be: mov word ptr [ebp + ebx*2 - 0x64], ax */ W16((u32)(r_ebp+r_ebx*2+0xffffff9cu), (u16)r_eax);
    /* 007626c3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007626c6: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7626cbu); f_00858009();
    /* 007626cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007626cc: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007626ce: jae 0x762a95 */ if (!fC) goto L_00762a95;
L_007626d4:; BB(0x007626d4);
    /* 007626d4: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007626d7: je 0x762a95 */ if (fZ) goto L_00762a95;
L_007626dd:; BB(0x007626dd);
    /* 007626dd: jmp 0x7626b3 */ goto L_007626b3;
L_007626df:; BB(0x007626df);
    /* 007626df: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x7626e4u); f_00762d00();
    /* 007626e4: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 007626e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007626e9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7626eeu); f_008581c5();
    /* 007626ee: mov esi, eax */ r_esi = r_eax;
    /* 007626f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007626f3: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007626f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007626f8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7626fdu); f_00858009();
    /* 007626fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00762702: jbe 0x762ab5 */ if ((fC||fZ)) goto L_00762ab5;
L_00762708:; BB(0x00762708);
    /* 00762708: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x76270du); f_0082d2f8();
    /* 0076270d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076270f: je 0x762718 */ if (fZ) goto L_00762718;
L_00762711:; BB(0x00762711);
    /* 00762711: mov edx, 8 */ r_edx = 0x8u;
    /* 00762716: jmp 0x762733 */ goto L_00762733;
L_00762718:; BB(0x00762718);
    /* 00762718: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x76271du); f_006dc358();
    /* 0076271d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762720: je 0x762727 */ if (fZ) goto L_00762727;
L_00762722:; BB(0x00762722);
    /* 00762722: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762725: jne 0x76272e */ if (!fZ) goto L_0076272e;
L_00762727:; BB(0x00762727);
    /* 00762727: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0076272c: jmp 0x762733 */ goto L_00762733;
L_0076272e:; BB(0x0076272e);
    /* 0076272e: mov edx, 8 */ r_edx = 0x8u;
L_00762733:; BB(0x00762733);
    /* 00762733: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762735: je 0x762ab5 */ if (fZ) goto L_00762ab5;
L_0076273b:; BB(0x0076273b);
    /* 0076273b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076273e: mov edx, 0x2a */ r_edx = 0x2au;
    /* 00762743: mov word ptr [esi + ebx*2], dx */ W16((u32)(r_esi+r_ebx*2), (u16)r_edx);
    /* 00762747: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076274a: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076274d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x762752u); f_00858009();
    /* 00762752: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762753: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00762755: jb 0x762708 */ if (fC) goto L_00762708;
L_00762757:; BB(0x00762757);
    /* 00762757: jmp 0x762ab5 */ goto L_00762ab5;
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x00762591); r_esp += 4; return;
L_00762a95:; BB(0x00762a95);
    /* 00762a95: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00762a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00762a9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00762a9d: mov word ptr [ebp + ebx*2 - 0x64], ax */ W16((u32)(r_ebp+r_ebx*2+0xffffff9cu), (u16)r_eax);
    /* 00762aa2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762aa5: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762aa8: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762aadu); f_00738a40();
    /* 00762aad: mov eax, ebx */ r_eax = r_ebx;
    /* 00762aaf: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00762ab3: jmp 0x762a7e */ goto L_00762a7e;
L_00762ab5:; BB(0x00762ab5);
    /* 00762ab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762ab7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762ab8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00762aba: mov word ptr [esi + ebx*2], dx */ W16((u32)(r_esi+r_ebx*2), (u16)r_edx);
    /* 00762abe: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762ac1: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762ac4: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762ac9u); f_00738a40();
    /* 00762ac9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762aca: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x762acfu); f_00857e98();
    /* 00762acf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762ad0: mov eax, ebx */ r_eax = r_ebx;
    /* 00762ad2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00762ad6: jmp 0x76265b */ goto L_0076265b;
L_00762adb:; BB(0x00762adb);
    /* 00762adb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00762add: jmp 0x7625e8 */ goto L_007625e8;
}

void f_00762648(void)
{
    FN_ENTER(0x00762648);
    /* 00762648: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076264b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0076264e: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x762653u); f_0078ed20();
    /* 00762653: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762655: jne 0x7626df */ if (!fZ) goto L_007626df;
L_0076265b:; BB(0x0076265b);
    /* 0076265b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076265e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762661: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x762666u); f_0078ed14();
    /* 00762666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762668: je 0x762a7e */ if (fZ) goto L_00762a7e;
L_0076266e:; BB(0x0076266e);
    /* 0076266e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762671: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762674: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x762679u); f_0078ed4c();
    /* 00762679: mov ebx, eax */ r_ebx = r_eax;
    /* 0076267b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076267d: je 0x76269d */ if (fZ) goto L_0076269d;
L_0076267f:; BB(0x0076267f);
    /* 0076267f: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762684u); f_00762d2c();
    /* 00762684: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762687: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076268a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076268b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076268c: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076268f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762694u); f_00857dec();
    /* 00762694: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762695: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76269au); f_00857e98();
    /* 0076269a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076269d:; BB(0x0076269d);
    /* 0076269d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007626a0: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007626a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007626a5: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7626aau); f_00858009();
    /* 007626aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007626ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007626ad: jbe 0x762a95 */ if ((fC||fZ)) goto L_00762a95;
L_007626b3:; BB(0x007626b3);
    /* 007626b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007626b6: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007626b9: mov eax, 0x2a */ r_eax = 0x2au;
    /* 007626be: mov word ptr [ebp + ebx*2 - 0x64], ax */ W16((u32)(r_ebp+r_ebx*2+0xffffff9cu), (u16)r_eax);
    /* 007626c3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007626c6: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7626cbu); f_00858009();
    /* 007626cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007626cc: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007626ce: jae 0x762a95 */ if (!fC) goto L_00762a95;
L_007626d4:; BB(0x007626d4);
    /* 007626d4: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007626d7: je 0x762a95 */ if (fZ) goto L_00762a95;
L_007626dd:; BB(0x007626dd);
    /* 007626dd: jmp 0x7626b3 */ goto L_007626b3;
L_007626df:; BB(0x007626df);
    /* 007626df: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x7626e4u); f_00762d00();
    /* 007626e4: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 007626e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007626e9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7626eeu); f_008581c5();
    /* 007626ee: mov esi, eax */ r_esi = r_eax;
    /* 007626f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007626f3: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007626f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007626f8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7626fdu); f_00858009();
    /* 007626fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00762702: jbe 0x762ab5 */ if ((fC||fZ)) goto L_00762ab5;
L_00762708:; BB(0x00762708);
    /* 00762708: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x76270du); f_0082d2f8();
    /* 0076270d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076270f: je 0x762718 */ if (fZ) goto L_00762718;
L_00762711:; BB(0x00762711);
    /* 00762711: mov edx, 8 */ r_edx = 0x8u;
    /* 00762716: jmp 0x762733 */ goto L_00762733;
L_00762718:; BB(0x00762718);
    /* 00762718: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x76271du); f_006dc358();
    /* 0076271d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762720: je 0x762727 */ if (fZ) goto L_00762727;
L_00762722:; BB(0x00762722);
    /* 00762722: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762725: jne 0x76272e */ if (!fZ) goto L_0076272e;
L_00762727:; BB(0x00762727);
    /* 00762727: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0076272c: jmp 0x762733 */ goto L_00762733;
L_0076272e:; BB(0x0076272e);
    /* 0076272e: mov edx, 8 */ r_edx = 0x8u;
L_00762733:; BB(0x00762733);
    /* 00762733: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762735: je 0x762ab5 */ if (fZ) goto L_00762ab5;
L_0076273b:; BB(0x0076273b);
    /* 0076273b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076273e: mov edx, 0x2a */ r_edx = 0x2au;
    /* 00762743: mov word ptr [esi + ebx*2], dx */ W16((u32)(r_esi+r_ebx*2), (u16)r_edx);
    /* 00762747: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076274a: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076274d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x762752u); f_00858009();
    /* 00762752: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762753: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00762755: jb 0x762708 */ if (fC) goto L_00762708;
L_00762757:; BB(0x00762757);
    /* 00762757: jmp 0x762ab5 */ goto L_00762ab5;
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x00762648); r_esp += 4; return;
L_00762a95:; BB(0x00762a95);
    /* 00762a95: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00762a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00762a9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00762a9d: mov word ptr [ebp + ebx*2 - 0x64], ax */ W16((u32)(r_ebp+r_ebx*2+0xffffff9cu), (u16)r_eax);
    /* 00762aa2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762aa5: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762aa8: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762aadu); f_00738a40();
    /* 00762aad: mov eax, ebx */ r_eax = r_ebx;
    /* 00762aaf: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00762ab3: jmp 0x762a7e */ goto L_00762a7e;
L_00762ab5:; BB(0x00762ab5);
    /* 00762ab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762ab7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762ab8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00762aba: mov word ptr [esi + ebx*2], dx */ W16((u32)(r_esi+r_ebx*2), (u16)r_edx);
    /* 00762abe: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762ac1: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762ac4: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762ac9u); f_00738a40();
    /* 00762ac9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762aca: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x762acfu); f_00857e98();
    /* 00762acf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762ad0: mov eax, ebx */ r_eax = r_ebx;
    /* 00762ad2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00762ad6: jmp 0x76265b */ goto L_0076265b;
}

void f_0076275c(void)
{
    FN_ENTER(0x0076275c);
    /* 0076275c: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 00762766: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00762768: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76276du); f_005caba4();
    /* 0076276d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076276e: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00762774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762776: je 0x762b0b */ if (fZ) goto L_00762b0b;
L_0076277c:; BB(0x0076277c);
    /* 0076277c: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 00762786: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076278d: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762792u); f_00762d2c();
    /* 00762792: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762798: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0076279e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007627a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007627a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007627a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007627a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007627a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007627a7: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x7627acu); f_0078eba4();
    /* 007627ac: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 007627b2: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_007627bc:; BB(0x007627bc);
    /* 007627bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007627bf: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 007627c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007627c9: mov dword ptr [ebp - 0xd8], 0x439e0000 */ W32((u32)(r_ebp+0xffffff28u), 0x439e0000u);
    /* 007627d3: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 007627d9: mov dword ptr [ebp - 0xd4], 0x43ad0000 */ W32((u32)(r_ebp+0xffffff2cu), 0x43ad0000u);
    /* 007627e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007627e4: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x7627e9u); f_0078ed84();
    /* 007627e9: push 0x47166400 */ { u32 v = 0x47166400u; r_esp -= 4; W32(r_esp, v); }
    /* 007627ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007627f1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007627f4: call 0x78ee24 */ r_esp -= 4; W32(r_esp, 0x7627f9u); f_0078ee24();
    /* 007627f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007627fc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007627ff: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x762804u); f_0078ed3c();
    /* 00762804: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762807: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076280a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0076280d: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x762812u); f_0078ed74();
    /* 00762812: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762815: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762818: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x76281du); f_0078ee74();
    /* 0076281d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762820: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00762823: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00762825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762826: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762827: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x76282cu); f_00738a40();
    /* 0076282c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076282f: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00762833: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762836: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762839: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x76283eu); f_0078ed20();
    /* 0076283e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762840: je 0x762859 */ if (fZ) goto L_00762859;
L_00762842:; BB(0x00762842);
    /* 00762842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762845: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762847: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076284a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0076284d: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762852u); f_00738a40();
    /* 00762852: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762855: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00762859:; BB(0x00762859);
    /* 00762859: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076285c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0076285f: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x762864u); f_0078ed14();
    /* 00762864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762866: je 0x762a7e */ if (fZ) goto L_00762a7e;
L_0076286c:; BB(0x0076286c);
    /* 0076286c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076286f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762872: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x762877u); f_0078ed4c();
    /* 00762877: mov ebx, eax */ r_ebx = r_eax;
    /* 00762879: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076287b: je 0x76289b */ if (fZ) goto L_0076289b;
L_0076287d:; BB(0x0076287d);
    /* 0076287d: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762882u); f_00762d2c();
    /* 00762882: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762885: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00762888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762889: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076288a: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076288d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762892u); f_00857dec();
    /* 00762892: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762893: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x762898u); f_00857e98();
    /* 00762898: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076289b:; BB(0x0076289b);
    /* 0076289b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076289e: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 007628a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007628a3: je 0x7629b5 */ if (fZ) goto L_007629b5;
L_007628a9:; BB(0x007628a9);
    /* 007628a9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007628ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007628ad: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 007628b3: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 007628b9: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 007628bf: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 007628c5: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 007628cb: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 007628d1: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 007628d7: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 007628dd: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 007628e3: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 007628e9: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 007628ef: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 007628f5: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 007628fb: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00762901: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00762907: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0076290d: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00762913: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00762919: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0076291f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00762925: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00762928: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0076292b: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0076292e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00762931: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00762933: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762938u); f_00762d2c();
    /* 00762938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076293a: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_00762940:; BB(0x00762940);
    /* 00762940: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762943: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00762946: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00762949: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076294b: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_00762951:; BB(0x00762951);
    /* 00762951: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
L_00762954:; BB(0x00762954);
    /* 00762954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762956: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_0076295c:; BB(0x0076295c);
    /* 0076295c: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076295f: je 0x76296c */ if (fZ) goto L_0076296c;
L_00762961:; BB(0x00762961);
    /* 00762961: mov word ptr [ebp + esi*2 - 0xd0], ax */ W16((u32)(r_ebp+r_esi*2+0xffffff30u), (u16)r_eax);
    /* 00762969: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0076296c:; BB(0x0076296c);
    /* 0076296c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076296f: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762974u); f_0082d2f8();
    /* 00762974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762976: je 0x76297f */ if (fZ) goto L_0076297f;
L_00762978:; BB(0x00762978);
    /* 00762978: mov eax, 0xc */ r_eax = 0xcu;
    /* 0076297d: jmp 0x76299a */ goto L_0076299a;
L_0076297f:; BB(0x0076297f);
    /* 0076297f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x762984u); f_006dc358();
    /* 00762984: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762987: je 0x76298e */ if (fZ) goto L_0076298e;
L_00762989:; BB(0x00762989);
    /* 00762989: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076298c: jne 0x762995 */ if (!fZ) goto L_00762995;
L_0076298e:; BB(0x0076298e);
    /* 0076298e: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762993: jmp 0x76299a */ goto L_0076299a;
L_00762995:; BB(0x00762995);
    /* 00762995: mov eax, 0x10 */ r_eax = 0x10u;
L_0076299a:; BB(0x0076299a);
    /* 0076299a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076299c: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_007629a2:; BB(0x007629a2);
    /* 007629a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629a5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007629a8: movzx eax, word ptr [edx + ebx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ebx*2));
    /* 007629ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007629ae: jne 0x762954 */ if (!fZ) goto L_00762954;
L_007629b0:; BB(0x007629b0);
    /* 007629b0: jmp 0x762ae2 */ goto L_00762ae2;
L_007629b5:; BB(0x007629b5);
    /* 007629b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007629b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007629b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629bb: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007629be: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7629c3u); f_00738a40();
    /* 007629c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629c6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007629ca: jmp 0x762a7e */ goto L_00762a7e;
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x0076275c); r_esp += 4; return;
L_00762ae2:; BB(0x00762ae2);
    /* 00762ae2: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762ae7u); f_00762d2c();
    /* 00762ae7: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 00762aed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00762af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762af1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00762af5: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762af8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762afdu); f_00857dec();
    /* 00762afd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762b00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762b03: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00762b06: jmp 0x7629b5 */ goto L_007629b5;
L_00762b0b:; BB(0x00762b0b);
    /* 00762b0b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00762b0d: jmp 0x7627bc */ goto L_007627bc;
}

void f_00762833(void)
{
    FN_ENTER(0x00762833);
    /* 00762833: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762836: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762839: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x76283eu); f_0078ed20();
    /* 0076283e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762840: je 0x762859 */ if (fZ) goto L_00762859;
L_00762842:; BB(0x00762842);
    /* 00762842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762845: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00762847: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076284a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0076284d: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x762852u); f_00738a40();
    /* 00762852: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762855: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00762859:; BB(0x00762859);
    /* 00762859: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076285c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0076285f: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x762864u); f_0078ed14();
    /* 00762864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762866: je 0x762a7e */ if (fZ) goto L_00762a7e;
L_0076286c:; BB(0x0076286c);
    /* 0076286c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076286f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00762872: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x762877u); f_0078ed4c();
    /* 00762877: mov ebx, eax */ r_ebx = r_eax;
    /* 00762879: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076287b: je 0x76289b */ if (fZ) goto L_0076289b;
L_0076287d:; BB(0x0076287d);
    /* 0076287d: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762882u); f_00762d2c();
    /* 00762882: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762885: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00762888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762889: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076288a: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076288d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762892u); f_00857dec();
    /* 00762892: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762893: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x762898u); f_00857e98();
    /* 00762898: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076289b:; BB(0x0076289b);
    /* 0076289b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076289e: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 007628a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007628a3: je 0x7629b5 */ if (fZ) goto L_007629b5;
L_007628a9:; BB(0x007628a9);
    /* 007628a9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007628ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007628ad: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 007628b3: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 007628b9: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 007628bf: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 007628c5: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 007628cb: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 007628d1: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 007628d7: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 007628dd: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 007628e3: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 007628e9: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 007628ef: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 007628f5: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 007628fb: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00762901: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00762907: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0076290d: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00762913: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00762919: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0076291f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00762925: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00762928: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0076292b: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0076292e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00762931: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00762933: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762938u); f_00762d2c();
    /* 00762938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076293a: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_00762940:; BB(0x00762940);
    /* 00762940: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762943: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00762946: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00762949: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076294b: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_00762951:; BB(0x00762951);
    /* 00762951: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
L_00762954:; BB(0x00762954);
    /* 00762954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762956: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_0076295c:; BB(0x0076295c);
    /* 0076295c: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076295f: je 0x76296c */ if (fZ) goto L_0076296c;
L_00762961:; BB(0x00762961);
    /* 00762961: mov word ptr [ebp + esi*2 - 0xd0], ax */ W16((u32)(r_ebp+r_esi*2+0xffffff30u), (u16)r_eax);
    /* 00762969: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0076296c:; BB(0x0076296c);
    /* 0076296c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076296f: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762974u); f_0082d2f8();
    /* 00762974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762976: je 0x76297f */ if (fZ) goto L_0076297f;
L_00762978:; BB(0x00762978);
    /* 00762978: mov eax, 0xc */ r_eax = 0xcu;
    /* 0076297d: jmp 0x76299a */ goto L_0076299a;
L_0076297f:; BB(0x0076297f);
    /* 0076297f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x762984u); f_006dc358();
    /* 00762984: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762987: je 0x76298e */ if (fZ) goto L_0076298e;
L_00762989:; BB(0x00762989);
    /* 00762989: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076298c: jne 0x762995 */ if (!fZ) goto L_00762995;
L_0076298e:; BB(0x0076298e);
    /* 0076298e: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762993: jmp 0x76299a */ goto L_0076299a;
L_00762995:; BB(0x00762995);
    /* 00762995: mov eax, 0x10 */ r_eax = 0x10u;
L_0076299a:; BB(0x0076299a);
    /* 0076299a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076299c: je 0x762ae2 */ if (fZ) goto L_00762ae2;
L_007629a2:; BB(0x007629a2);
    /* 007629a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629a5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007629a8: movzx eax, word ptr [edx + ebx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ebx*2));
    /* 007629ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007629ae: jne 0x762954 */ if (!fZ) goto L_00762954;
L_007629b0:; BB(0x007629b0);
    /* 007629b0: jmp 0x762ae2 */ goto L_00762ae2;
L_007629b5:; BB(0x007629b5);
    /* 007629b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007629b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007629b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629bb: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007629be: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7629c3u); f_00738a40();
    /* 007629c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629c6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007629ca: jmp 0x762a7e */ goto L_00762a7e;
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x00762833); r_esp += 4; return;
L_00762ae2:; BB(0x00762ae2);
    /* 00762ae2: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762ae7u); f_00762d2c();
    /* 00762ae7: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 00762aed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00762af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762af1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00762af5: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762af8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762afdu); f_00857dec();
    /* 00762afd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762b00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762b03: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00762b06: jmp 0x7629b5 */ goto L_007629b5;
}

void f_007629cf(void)
{
    FN_ENTER(0x007629cf);
    /* 007629cf: mov eax, ecx */ r_eax = r_ecx;
    /* 007629d1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007629d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007629d6: je 0x7629ee */ if (fZ) goto L_007629ee;
L_007629d8:; BB(0x007629d8);
    /* 007629d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007629dc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007629e1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007629e5: mov edx, ecx */ r_edx = r_ecx;
    /* 007629e7: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
L_007629ee:; BB(0x007629ee);
    /* 007629ee: mov eax, ecx */ r_eax = r_ecx;
    /* 007629f0: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007629f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007629f5: je 0x762a06 */ if (fZ) goto L_00762a06;
L_007629f7:; BB(0x007629f7);
    /* 007629f7: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7629fcu); f_0073d160();
    /* 007629fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007629ff: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_00762a06:; BB(0x00762a06);
    /* 00762a06: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00762a09: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00762a10: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00762a16: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00762a1d: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00762a20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762a22: je 0x762a2b */ if (fZ) goto L_00762a2b;
L_00762a24:; BB(0x00762a24);
    /* 00762a24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00762a26: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x762a2bu); f_00760acc();
L_00762a2b:; BB(0x00762a2b);
    /* 00762a2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a2e: call 0x762b14 */ r_esp -= 4; W32(r_esp, 0x762a33u); f_00762b14();
    /* 00762a33: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a36: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00762a3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a3d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00762a40: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00762a47: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00762a49: je 0x762a6c */ if (fZ) goto L_00762a6c;
L_00762a4b:; BB(0x00762a4b);
    /* 00762a4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a4e: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00762a52: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762a57: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 00762a5b: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00762a5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a68: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a6b: ret  */ FN_RET(0x007629cf); r_esp += 4; return;
L_00762a6c:; BB(0x00762a6c);
    /* 00762a6c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762a6e: je 0x762a7e */ if (fZ) goto L_00762a7e;
L_00762a70:; BB(0x00762a70);
    /* 00762a70: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x762a75u); f_00737d90();
    /* 00762a75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762a79: call 0x762cc0 */ r_esp -= 4; W32(r_esp, 0x762a7eu); f_00762cc0();
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x007629cf); r_esp += 4; return;
}

void f_00762a3a(void)
{
    FN_ENTER(0x00762a3a);
    /* 00762a3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a3d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00762a40: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00762a47: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00762a49: je 0x762a6c */ if (fZ) goto L_00762a6c;
L_00762a4b:; BB(0x00762a4b);
    /* 00762a4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a4e: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00762a52: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762a57: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 00762a5b: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00762a5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a68: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a6b: ret  */ FN_RET(0x00762a3a); r_esp += 4; return;
L_00762a6c:; BB(0x00762a6c);
    /* 00762a6c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762a6e: je 0x762a7e */ if (fZ) goto L_00762a7e;
L_00762a70:; BB(0x00762a70);
    /* 00762a70: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x762a75u); f_00737d90();
    /* 00762a75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762a79: call 0x762cc0 */ r_esp -= 4; W32(r_esp, 0x762a7eu); f_00762cc0();
L_00762a7e:; BB(0x00762a7e);
    /* 00762a7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762a81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00762a84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762a8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00762a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762a94: ret  */ FN_RET(0x00762a3a); r_esp += 4; return;
}

void f_00762b14(void) /* sub_762B14 */
{
    FN_ENTER(0x00762b14);
    /* 00762b14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00762b15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762b16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00762b17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762b18: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00762b1e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00762b20: mov edi, 1 */ r_edi = 0x1u;
    /* 00762b25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00762b27: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00762b2a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00762b2e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00762b32: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00762b36: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00762b3a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00762b3e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00762b42: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00762b46: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00762b4a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00762b4e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00762b52: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00762b56: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 00762b59: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762b5b: je 0x762b89 */ if (fZ) goto L_00762b89;
L_00762b5d:; BB(0x00762b5d);
    /* 00762b5d: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00762b60: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 00762b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00762b67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00762b69: je 0x762b7c */ if (fZ) goto L_00762b7c;
L_00762b6b:; BB(0x00762b6b);
    /* 00762b6b: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00762b6d: sub al, byte ptr [edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (a < b); }
    /* 00762b6f: jne 0x762b7c */ if (!fZ) goto L_00762b7c;
L_00762b71:; BB(0x00762b71);
    /* 00762b71: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00762b74: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00762b77: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fC = (a < b); }
    /* 00762b7a: jne 0x762b6b */ if (!fZ) goto L_00762b6b;
L_00762b7c:; BB(0x00762b7c);
    /* 00762b7c: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 00762b7f: setb cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 00762b82: sub al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00762b84: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00762b87: mov edi, eax */ r_edi = r_eax;
L_00762b89:; BB(0x00762b89);
    /* 00762b89: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00762b8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762b8e: je 0x762c86 */ if (fZ) goto L_00762c86;
L_00762b94:; BB(0x00762b94);
    /* 00762b94: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00762b96: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00762b98: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00762b9c: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00762ba0: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00762ba4: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00762ba8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00762bac: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00762bb0: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00762bb4: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00762bb8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00762bbc: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00762bc0: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00762bc4: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00762bc8: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00762bcc: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00762bd0: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00762bd4: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00762bd8: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00762bdc: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00762be0: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00762be4: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00762be8: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00762bef: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00762bf6: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 00762bfd: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 00762c04: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00762c06: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762c0bu); f_00762d2c();
    /* 00762c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c0d: je 0x762c6a */ if (fZ) goto L_00762c6a;
L_00762c0f:; BB(0x00762c0f);
    /* 00762c0f: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00762c12: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00762c15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c17: je 0x762c6a */ if (fZ) goto L_00762c6a;
L_00762c19:; BB(0x00762c19);
    /* 00762c19: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
L_00762c1c:; BB(0x00762c1c);
    /* 00762c1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c1e: je 0x762c6a */ if (fZ) goto L_00762c6a;
L_00762c20:; BB(0x00762c20);
    /* 00762c20: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c23: je 0x762c2d */ if (fZ) goto L_00762c2d;
L_00762c25:; BB(0x00762c25);
    /* 00762c25: mov word ptr [esp + esi*2 + 0x30], dx */ W16((u32)(r_esp+r_esi*2+0x30u), (u16)r_edx);
    /* 00762c2a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00762c2d:; BB(0x00762c2d);
    /* 00762c2d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00762c30: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762c35u); f_0082d2f8();
    /* 00762c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c37: je 0x762c40 */ if (fZ) goto L_00762c40;
L_00762c39:; BB(0x00762c39);
    /* 00762c39: mov edx, 0xc */ r_edx = 0xcu;
    /* 00762c3e: jmp 0x762c5b */ goto L_00762c5b;
L_00762c40:; BB(0x00762c40);
    /* 00762c40: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x762c45u); f_006dc358();
    /* 00762c45: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c48: je 0x762c4f */ if (fZ) goto L_00762c4f;
L_00762c4a:; BB(0x00762c4a);
    /* 00762c4a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c4d: jne 0x762c56 */ if (!fZ) goto L_00762c56;
L_00762c4f:; BB(0x00762c4f);
    /* 00762c4f: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00762c54: jmp 0x762c5b */ goto L_00762c5b;
L_00762c56:; BB(0x00762c56);
    /* 00762c56: mov edx, 0x10 */ r_edx = 0x10u;
L_00762c5b:; BB(0x00762c5b);
    /* 00762c5b: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c5d: je 0x762c6a */ if (fZ) goto L_00762c6a;
L_00762c5f:; BB(0x00762c5f);
    /* 00762c5f: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00762c62: movzx edx, word ptr [edx + ebp*2] */ r_edx = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 00762c66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c68: jne 0x762c1c */ if (!fZ) goto L_00762c1c;
L_00762c6a:; BB(0x00762c6a);
    /* 00762c6a: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x762c6fu); f_00762d2c();
    /* 00762c6f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00762c73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00762c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762c77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00762c78: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762c7b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x762c80u); f_00857dec();
    /* 00762c80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762c83: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
L_00762c86:; BB(0x00762c86);
    /* 00762c86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c88: je 0x762caa */ if (fZ) goto L_00762caa;
L_00762c8a:; BB(0x00762c8a);
    /* 00762c8a: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 00762c8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c8f: je 0x762caa */ if (fZ) goto L_00762caa;
L_00762c91:; BB(0x00762c91);
    /* 00762c91: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762c93: je 0x762caa */ if (fZ) goto L_00762caa;
L_00762c95:; BB(0x00762c95);
    /* 00762c95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00762c97: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762c9a: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x762c9fu); f_00738b08();
    /* 00762c9f: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00762ca5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00762ca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762ca7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00762ca8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00762ca9: ret  */ FN_RET(0x00762b14); r_esp += 4; return;
L_00762caa:; BB(0x00762caa);
    /* 00762caa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00762cac: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762caf: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x762cb4u); f_00738a9c();
    /* 00762cb4: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00762cba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00762cbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762cbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00762cbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00762cbe: ret  */ FN_RET(0x00762b14); r_esp += 4; return;
}

void f_00762cc0(void) /* sub_762CC0 */
{
    FN_ENTER(0x00762cc0);
    /* 00762cc0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00762cc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762cc6: je 0x762cf8 */ if (fZ) goto L_00762cf8;
L_00762cc8:; BB(0x00762cc8);
    /* 00762cc8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762ccb: je 0x762cf1 */ if (fZ) goto L_00762cf1;
L_00762ccd:; BB(0x00762ccd);
    /* 00762ccd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762cd0: jne 0x762cd9 */ if (!fZ) goto L_00762cd9;
L_00762cd2:; BB(0x00762cd2);
    /* 00762cd2: mov byte ptr [ecx + 0x1c], 7 */ W8((u32)(r_ecx+0x1cu), 0x7u);
    /* 00762cd6: ret 4 */ FN_RET(0x00762cc0); r_esp += 8; return;
L_00762cd9:; BB(0x00762cd9);
    /* 00762cd9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762cdc: jne 0x762cf5 */ if (!fZ) goto L_00762cf5;
L_00762cde:; BB(0x00762cde);
    /* 00762cde: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 00762ce2: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 00762ce6: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762ceb: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
    /* 00762cee: ret 4 */ FN_RET(0x00762cc0); r_esp += 8; return;
L_00762cf1:; BB(0x00762cf1);
    /* 00762cf1: mov byte ptr [ecx + 0x1c], 5 */ W8((u32)(r_ecx+0x1cu), 0x5u);
L_00762cf5:; BB(0x00762cf5);
    /* 00762cf5: ret 4 */ FN_RET(0x00762cc0); r_esp += 8; return;
L_00762cf8:; BB(0x00762cf8);
    /* 00762cf8: mov byte ptr [ecx + 0x1c], 3 */ W8((u32)(r_ecx+0x1cu), 0x3u);
    /* 00762cfc: ret 4 */ FN_RET(0x00762cc0); r_esp += 8; return;
}

void f_00762d00(void) /* sub_762D00 */
{
    FN_ENTER(0x00762d00);
    /* 00762d00: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762d05u); f_0082d2f8();
    /* 00762d05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762d07: je 0x762d0f */ if (fZ) goto L_00762d0f;
L_00762d09:; BB(0x00762d09);
    /* 00762d09: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762d0e: ret  */ FN_RET(0x00762d00); r_esp += 4; return;
L_00762d0f:; BB(0x00762d0f);
    /* 00762d0f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x762d14u); f_006dc358();
    /* 00762d14: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762d17: je 0x762d24 */ if (fZ) goto L_00762d24;
L_00762d19:; BB(0x00762d19);
    /* 00762d19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762d1c: je 0x762d24 */ if (fZ) goto L_00762d24;
L_00762d1e:; BB(0x00762d1e);
    /* 00762d1e: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762d23: ret  */ FN_RET(0x00762d00); r_esp += 4; return;
L_00762d24:; BB(0x00762d24);
    /* 00762d24: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762d29: ret  */ FN_RET(0x00762d00); r_esp += 4; return;
}

void f_00762d2c(void) /* sub_762D2C */
{
    FN_ENTER(0x00762d2c);
    /* 00762d2c: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x762d31u); f_0082d2f8();
    /* 00762d31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762d33: je 0x762d3b */ if (fZ) goto L_00762d3b;
L_00762d35:; BB(0x00762d35);
    /* 00762d35: mov eax, 0xc */ r_eax = 0xcu;
    /* 00762d3a: ret  */ FN_RET(0x00762d2c); r_esp += 4; return;
L_00762d3b:; BB(0x00762d3b);
    /* 00762d3b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x762d40u); f_006dc358();
    /* 00762d40: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762d43: je 0x762d50 */ if (fZ) goto L_00762d50;
L_00762d45:; BB(0x00762d45);
    /* 00762d45: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00762d48: je 0x762d50 */ if (fZ) goto L_00762d50;
L_00762d4a:; BB(0x00762d4a);
    /* 00762d4a: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762d4f: ret  */ FN_RET(0x00762d2c); r_esp += 4; return;
L_00762d50:; BB(0x00762d50);
    /* 00762d50: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00762d55: ret  */ FN_RET(0x00762d2c); r_esp += 4; return;
}

void f_00762d58(void) /* sub_762D58 */
{
    FN_ENTER(0x00762d58);
    /* 00762d58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762d59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00762d5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00762d5d: call 0x762d7c */ r_esp -= 4; W32(r_esp, 0x762d62u); f_00762d7c();
    /* 00762d62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00762d66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762d68: jne 0x762d6e */ if (!fZ) goto L_00762d6e;
L_00762d6a:; BB(0x00762d6a);
    /* 00762d6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00762d6b: ret 4 */ FN_RET(0x00762d58); r_esp += 8; return;
L_00762d6e:; BB(0x00762d6e);
    /* 00762d6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762d6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x762d74u); f_005c2f74();
    /* 00762d74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762d75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00762d76: ret 4 */ FN_RET(0x00762d58); r_esp += 8; return;
}

void f_00762d7c(void) /* sub_762D7C */
{
    FN_ENTER(0x00762d7c);
    /* 00762d7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00762d7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00762d7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00762d81: push 0x8f36fc */ { u32 v = 0x8f36fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00762d86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00762d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762d8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00762d94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00762d97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00762d9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00762d9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00762da0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00762da3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00762da6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00762da9: mov dword ptr [ecx], 0xb430c0 */ W32((u32)(r_ecx), 0xb430c0u);
    /* 00762daf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00762db6: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x762dbbu); f_00710c28();
    /* 00762dbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762dbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762dc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00762dc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762dc8: ret  */ FN_RET(0x00762d7c); r_esp += 4; return;
}

void f_00762dcc(void) /* sub_762DCC */
{
    FN_ENTER(0x00762dcc);
    /* 00762dcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00762dcd: mov ebp, esp */ r_ebp = r_esp;
    /* 00762dcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00762dd1: push 0x8f3718 */ { u32 v = 0x8f3718u; r_esp -= 4; W32(r_esp, v); }
    /* 00762dd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00762ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762ddd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00762de4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00762de7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00762dea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00762ded: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00762df0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00762df3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00762df6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00762df9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00762dfc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00762dff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00762e01: push 0x9f5a28 */ { u32 v = 0x9f5a28u; r_esp -= 4; W32(r_esp, v); }
    /* 00762e06: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x762e0bu); f_00710d30();
    /* 00762e0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00762e12: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762e15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00762e18: mov dword ptr [eax], 0xb430c0 */ W32((u32)(r_eax), 0xb430c0u);
    /* 00762e1e: mov ecx, dword ptr [0x9f5a24] */ r_ecx = R32((u32)(0x9f5a24u));
    /* 00762e24: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00762e27: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00762e2a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762e2d: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00762e30: call 0x762e54 */ r_esp -= 4; W32(r_esp, 0x762e35u); f_00762e54();
    /* 00762e35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00762e38: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00762e3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00762e3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00762e45: mov esp, ebp */ r_esp = r_ebp;
    /* 00762e47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762e48: ret 8 */ FN_RET(0x00762dcc); r_esp += 12; return;
}

void f_00762e54(void) /* sub_762E54 */
{
    FN_ENTER(0x00762e54);
    /* 00762e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00762e55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00762e56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00762e57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762e58: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00762e5b: mov edi, edx */ r_edi = r_edx;
    /* 00762e5d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00762e60: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00762e63: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 00762e66: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00762e69: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00762e6c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00762e70: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00762e73: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00762e76: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00762e79: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00762e7d: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x762e82u); f_00816d30();
    /* 00762e82: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00762e87: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762e8cu); f_00816cb8();
    /* 00762e8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762e8d: mov ecx, edi */ r_ecx = r_edi;
    /* 00762e8f: call 0x827398 */ r_esp -= 4; W32(r_esp, 0x762e94u); f_00827398();
    /* 00762e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762e95: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762e9au); f_00816cb8();
    /* 00762e9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762e9b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00762e9d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00762ea2: mov ecx, esi */ r_ecx = r_esi;
    /* 00762ea4: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x762ea9u); f_0072db60();
    /* 00762ea9: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x762eaeu); f_00816d30();
    /* 00762eae: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00762eb3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762eb8u); f_00816cb8();
    /* 00762eb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762eb9: mov ecx, edi */ r_ecx = r_edi;
    /* 00762ebb: call 0x827380 */ r_esp -= 4; W32(r_esp, 0x762ec0u); f_00827380();
    /* 00762ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762ec1: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762ec6u); f_00816cb8();
    /* 00762ec6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762ec7: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00762ec9: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00762ece: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00762ed0: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x762ed5u); f_0072db60();
    /* 00762ed5: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x762edau); f_00816d30();
    /* 00762eda: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00762edf: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762ee4u); f_00816cb8();
    /* 00762ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762ee5: mov ecx, edi */ r_ecx = r_edi;
    /* 00762ee7: call 0x827388 */ r_esp -= 4; W32(r_esp, 0x762eecu); f_00827388();
    /* 00762eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762eed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762ef2u); f_00816cb8();
    /* 00762ef2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762ef3: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00762ef5: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00762efa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00762efc: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x762f01u); f_0072db60();
    /* 00762f01: mov ecx, edi */ r_ecx = r_edi;
    /* 00762f03: call 0x827390 */ r_esp -= 4; W32(r_esp, 0x762f08u); f_00827390();
    /* 00762f08: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 00762f0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762f0d: jne 0x762fb7 */ if (!fZ) goto L_00762fb7;
L_00762f13:; BB(0x00762f13);
    /* 00762f13: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00762f16: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00762f1a: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00762f1e: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00762f23: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 00762f27: movzx ebp, word ptr [esi + 4] */ r_ebp = (u32)R16((u32)(r_esi+0x4u));
    /* 00762f2b: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00762f31: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
L_00762f35:; BB(0x00762f35);
    /* 00762f35: mov ecx, edi */ r_ecx = r_edi;
    /* 00762f37: call 0x827378 */ r_esp -= 4; W32(r_esp, 0x762f3cu); f_00827378();
    /* 00762f3c: mov ebx, eax */ r_ebx = r_eax;
    /* 00762f3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00762f40: call 0x827398 */ r_esp -= 4; W32(r_esp, 0x762f45u); f_00827398();
    /* 00762f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762f46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00762f47: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x762f4cu); f_00858c4d();
    /* 00762f4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762f4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00762f51: jne 0x762f6c */ if (!fZ) goto L_00762f6c;
L_00762f53:; BB(0x00762f53);
    /* 00762f53: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00762f57: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00762f5b: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00762f60: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00762f64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00762f67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00762f68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762f69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00762f6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00762f6b: ret  */ FN_RET(0x00762e54); r_esp += 4; return;
L_00762f6c:; BB(0x00762f6c);
    /* 00762f6c: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x762f71u); f_00816d30();
    /* 00762f71: mov ecx, edi */ r_ecx = r_edi;
    /* 00762f73: call 0x827378 */ r_esp -= 4; W32(r_esp, 0x762f78u); f_00827378();
    /* 00762f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762f79: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762f7eu); f_00816cb8();
    /* 00762f7e: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00762f80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x762f85u); f_0079317c();
    /* 00762f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762f86: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762f8bu); f_00816cb8();
    /* 00762f8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00762f8e: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00762f90: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00762f95: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00762f99: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x762f9eu); f_0072db60();
    /* 00762f9e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00762fa2: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00762fa6: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00762fab: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00762faf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00762fb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00762fb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00762fb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00762fb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00762fb6: ret  */ FN_RET(0x00762e54); r_esp += 4; return;
L_00762fb7:; BB(0x00762fb7);
    /* 00762fb7: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x762fbcu); f_00816d30();
    /* 00762fbc: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00762fc1: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762fc6u); f_00816cb8();
    /* 00762fc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762fc7: mov ecx, edi */ r_ecx = r_edi;
    /* 00762fc9: call 0x827390 */ r_esp -= 4; W32(r_esp, 0x762fceu); f_00827390();
    /* 00762fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00762fcf: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x762fd4u); f_00816cb8();
    /* 00762fd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00762fd5: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00762fd7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00762fdc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00762fe0: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x762fe5u); f_0072db60();
    /* 00762fe5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00762fe8: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00762fec: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00762ff0: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00762ff5: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 00762ff9: movzx ebp, word ptr [esi + 4] */ r_ebp = (u32)R16((u32)(r_esi+0x4u));
    /* 00762ffd: and ebp, 0xfffd */ {  u32 a = r_ebp; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00763003: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 00763007: jmp 0x762f35 */ goto L_00762f35;
}

