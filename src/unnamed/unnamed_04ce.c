#include "protos.h"

void f_004ce228(void) /* sub_4CE228 */
{
    FN_ENTER(0x004ce228);
    /* 004ce228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce229: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce22a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ce22b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce22c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce22d: mov edx, ecx */ r_edx = r_ecx;
    /* 004ce22f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce231: mov ebx, eax */ r_ebx = r_eax;
    /* 004ce233: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004ce237: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 004ce23b: mov ebp, edx */ r_ebp = r_edx;
L_004ce23d:; BB(0x004ce23d);
    /* 004ce23d: mov edi, dword ptr [ebp + ebx*4 + 0x1c] */ r_edi = R32((u32)(r_ebp+r_ebx*4+0x1cu));
    /* 004ce241: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ce246u); f_0082d7b0();
    /* 004ce246: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce248: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4ce24du); f_00830cd8();
    /* 004ce24d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004ce251: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4ce256u); f_0082d838();
    /* 004ce256: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce258: mov edx, esi */ r_edx = r_esi;
    /* 004ce25a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4ce25fu); f_0082d8bc();
    /* 004ce25f: lea edx, [edi + 0xac] */ r_edx = (u32)(r_edi+0xacu);
    /* 004ce265: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004ce268: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce269: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce26b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4ce270u); f_00830aa0();
    /* 004ce270: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ce275u); f_0082da80();
    /* 004ce275: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce276: mov dword ptr [edi + 0x60], esi */ W32((u32)(r_edi+0x60u), r_esi);
    /* 004ce279: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4ce27eu); f_007b999c();
    /* 004ce27e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce27f: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 004ce285: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce289: jle 0x4ce2c1 */ if ((fZ||fS!=fO)) goto L_004ce2c1;
L_004ce28b:; BB(0x004ce28b);
    /* 004ce28b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004ce28e: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004ce291: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce293: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ce295: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce297: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce299: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ce29b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce29d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004ce29f:; BB(0x004ce29f);
    /* 004ce29f: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 004ce2a5: mov ebp, dword ptr [eax + edx + 0x18] */ r_ebp = R32((u32)(r_eax+r_edx+0x18u));
    /* 004ce2a9: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004ce2ac: mov dword ptr [eax + edx + 0x18], ebp */ W32((u32)(r_eax+r_edx+0x18u), r_ebp);
    /* 004ce2b0: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce2b3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce2b6: cmp ecx, dword ptr [edi + 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce2bc: jl 0x4ce29f */ if ((fS!=fO)) goto L_004ce29f;
L_004ce2be:; BB(0x004ce2be);
    /* 004ce2be: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004ce2c1:; BB(0x004ce2c1);
    /* 004ce2c1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce2c4: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ce2c7: jl 0x4ce23d */ if ((fS!=fO)) goto L_004ce23d;
L_004ce2cd:; BB(0x004ce2cd);
    /* 004ce2cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce2ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce2cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce2d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ce2d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ce2d2: ret 8 */ FN_RET(0x004ce228); r_esp += 12; return;
}

void f_004ce2c0(void)
{
    FN_ENTER(0x004ce2c0);
    /* 004ce2c0: and al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce2c2: ret  */ FN_RET(0x004ce2c0); r_esp += 4; return;
}

void f_004ce2c3(void)
{
    FN_ENTER(0x004ce2c3);
    /* 004ce2c3: add dword ptr [ebx - 0x73f0fc05], eax */ { u32 ad = (u32)(r_ebx+0x8c0f03fbu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 004ce2c9: jo 0x4ce2ca */ if (fO) UNSUP(0x004ce2c9, "branch to code that was not decoded");
}

void f_004ce2d8(void) /* sub_4CE2D8 */
{
    FN_ENTER(0x004ce2d8);
    /* 004ce2d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce2d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ce2db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ce2dd: call 0x4ce2fc */ r_esp -= 4; W32(r_esp, 0x4ce2e2u); f_004ce2fc();
    /* 004ce2e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ce2e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce2e8: jne 0x4ce2ee */ if (!fZ) goto L_004ce2ee;
L_004ce2ea:; BB(0x004ce2ea);
    /* 004ce2ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce2eb: ret 4 */ FN_RET(0x004ce2d8); r_esp += 8; return;
L_004ce2ee:; BB(0x004ce2ee);
    /* 004ce2ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce2ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ce2f4u); f_005c2f74();
    /* 004ce2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce2f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce2f6: ret 4 */ FN_RET(0x004ce2d8); r_esp += 8; return;
}

void f_004ce2fc(void) /* sub_4CE2FC */
{
    FN_ENTER(0x004ce2fc);
    /* 004ce2fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ce2fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004ce2ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ce301: push 0x8d17ec */ { u32 v = 0x8d17ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004ce306: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ce30c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce30d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ce314: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce317: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ce31a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ce31d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ce320: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ce323: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ce326: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ce329: mov dword ptr [ecx], 0xafbb80 */ W32((u32)(r_ecx), 0xafbb80u);
    /* 004ce32f: cmp ecx, dword ptr [0xa48688] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa48688u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce335: jne 0x4ce341 */ if (!fZ) goto L_004ce341;
L_004ce337:; BB(0x004ce337);
    /* 004ce337: mov dword ptr [0xa48688], 0 */ W32((u32)(0xa48688u), 0x0u);
L_004ce341:; BB(0x004ce341);
    /* 004ce341: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ce348: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ce34du); f_008171e8();
    /* 004ce34d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ce350: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ce357: mov esp, ebp */ r_esp = r_ebp;
    /* 004ce359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce35a: ret  */ FN_RET(0x004ce2fc); r_esp += 4; return;
}

void f_004ce35c(void) /* sub_4CE35C */
{
    FN_ENTER(0x004ce35c);
    /* 004ce35c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ce35d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce35e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ce360: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004ce364: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce366: jl 0x4ce36d */ if ((fS!=fO)) goto L_004ce36d;
L_004ce368:; BB(0x004ce368);
    /* 004ce368: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce36b: jle 0x4ce374 */ if ((fZ||fS!=fO)) goto L_004ce374;
L_004ce36d:; BB(0x004ce36d);
    /* 004ce36d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce36f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce370: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce371: ret 0x10 */ FN_RET(0x004ce35c); r_esp += 20; return;
L_004ce374:; BB(0x004ce374);
    /* 004ce374: movzx eax, word ptr [ebp + 0x22] */ r_eax = (u32)R16((u32)(r_ebp+0x22u));
    /* 004ce378: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce37a: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 004ce37d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce37e: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce383u); f_00786b3c();
    /* 004ce383: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce386: je 0x4ce38f */ if (fZ) goto L_004ce38f;
L_004ce388:; BB(0x004ce388);
    /* 004ce388: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce38a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce38b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce38c: ret 0x10 */ FN_RET(0x004ce35c); r_esp += 20; return;
L_004ce38f:; BB(0x004ce38f);
    /* 004ce38f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce393: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004ce397: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004ce39a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce39e: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 004ce3a2: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 004ce3a6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3aa: movzx eax, word ptr [ebp + 0x20] */ r_eax = (u32)R16((u32)(r_ebp+0x20u));
    /* 004ce3ae: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 004ce3b2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3b6: movzx eax, word ptr [ebp + 0x22] */ r_eax = (u32)R16((u32)(r_ebp+0x22u));
    /* 004ce3ba: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 004ce3be: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3c2: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 004ce3c6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ce3ca: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3ce: movzx eax, word ptr [ebp + 0x26] */ r_eax = (u32)R16((u32)(r_ebp+0x26u));
    /* 004ce3d2: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 004ce3d6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3da: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 004ce3de: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 004ce3e2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3e6: movzx eax, word ptr [ebp + 0x2a] */ r_eax = (u32)R16((u32)(r_ebp+0x2au));
    /* 004ce3ea: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 004ce3ee: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3f2: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004ce3f5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 004ce3f8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce3fc: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004ce3ff: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 004ce402: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce406: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004ce409: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004ce40c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce410: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004ce413: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004ce416: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce41a: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004ce41d: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004ce420: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce424: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004ce427: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004ce42a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce42e: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 004ce431: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004ce434: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce438: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004ce43b: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004ce43e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce442: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 004ce445: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004ce448: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce44c: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 004ce44f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004ce452: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce456: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 004ce459: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004ce45c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce460: movzx eax, word ptr [ebp + 0x58] */ r_eax = (u32)R16((u32)(r_ebp+0x58u));
    /* 004ce464: mov word ptr [edx + 0x3c], ax */ W16((u32)(r_edx+0x3cu), (u16)r_eax);
    /* 004ce468: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce46c: movzx eax, word ptr [ebp + 0x5a] */ r_eax = (u32)R16((u32)(r_ebp+0x5au));
    /* 004ce470: mov word ptr [edx + 0x3e], ax */ W16((u32)(r_edx+0x3eu), (u16)r_eax);
    /* 004ce474: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce478: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004ce47c: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce47e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004ce481: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce485: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce487: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 004ce48b: movzx ecx, word ptr [ebp + 0x22] */ r_ecx = (u32)R16((u32)(r_ebp+0x22u));
    /* 004ce48f: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce491: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 004ce495: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004ce499: mov word ptr [ebx + 6], cx */ W16((u32)(r_ebx+0x6u), (u16)r_ecx);
    /* 004ce49d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce49f: je 0x4ce4ca */ if (fZ) goto L_004ce4ca;
L_004ce4a1:; BB(0x004ce4a1);
    /* 004ce4a1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004ce4a5: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004ce4a9: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004ce4ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ce4af: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004ce4b3: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 004ce4b6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce4ba: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 004ce4bd: mov dword ptr [eax + 0x14], ebp */ W32((u32)(r_eax+0x14u), r_ebp);
    /* 004ce4c0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004ce4c4: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ce4c7: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_004ce4ca:; BB(0x004ce4ca);
    /* 004ce4ca: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004ce4ce: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004ce4d2: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 004ce4d5: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce4da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce4db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce4dc: ret 0x10 */ FN_RET(0x004ce35c); r_esp += 20; return;
}

void f_004ce4e0(void) /* sub_4CE4E0 */
{
    FN_ENTER(0x004ce4e0);
    /* 004ce4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ce4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ce4e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ce4e5: push 0x8d1814 */ { u32 v = 0x8d1814u; r_esp -= 4; W32(r_esp, v); }
    /* 004ce4ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ce4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce4f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ce4f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce4fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ce4fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ce501: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ce504: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ce507: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ce509: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ce510: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ce515u); f_005caba4();
    /* 004ce515: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce516: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ce519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce51b: je 0x4ce551 */ if (fZ) goto L_004ce551;
L_004ce51d:; BB(0x004ce51d);
    /* 004ce51d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ce524: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ce52b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce52e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce531: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ce534: call 0x4ce558 */ r_esp -= 4; W32(r_esp, 0x4ce539u); f_004ce558();
    /* 004ce539: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ce53c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ce543:; BB(0x004ce543);
    /* 004ce543: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ce546: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ce54d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ce54f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce550: ret  */ FN_RET(0x004ce4e0); r_esp += 4; return;
L_004ce551:; BB(0x004ce551);
    /* 004ce551: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce553: jmp 0x4ce543 */ goto L_004ce543;
}

void f_004ce558(void) /* sub_4CE558 */
{
    FN_ENTER(0x004ce558);
    /* 004ce558: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce559: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce55a: mov edi, ecx */ r_edi = r_ecx;
    /* 004ce55c: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004ce560: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce564: mov ecx, edi */ r_ecx = r_edi;
    /* 004ce566: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ce56bu); f_008193cc();
    /* 004ce56b: mov dword ptr [edi], 0xafbb80 */ W32((u32)(r_edi), 0xafbb80u);
    /* 004ce571: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004ce576: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce578: jne 0x4ce580 */ if (!fZ) goto L_004ce580;
L_004ce57a:; BB(0x004ce57a);
    /* 004ce57a: mov dword ptr [0xa48688], edi */ W32((u32)(0xa48688u), r_edi);
L_004ce580:; BB(0x004ce580);
    /* 004ce580: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 004ce583: mov word ptr [edi + 0x1c], dx */ W16((u32)(r_edi+0x1cu), (u16)r_edx);
    /* 004ce587: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 004ce58b: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 004ce58f: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 004ce593: mov word ptr [edi + 0x20], ax */ W16((u32)(r_edi+0x20u), (u16)r_eax);
    /* 004ce597: movzx eax, word ptr [esi + 6] */ r_eax = (u32)R16((u32)(r_esi+0x6u));
    /* 004ce59b: mov word ptr [edi + 0x22], ax */ W16((u32)(r_edi+0x22u), (u16)r_eax);
    /* 004ce59f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004ce5a3: mov word ptr [edi + 0x24], ax */ W16((u32)(r_edi+0x24u), (u16)r_eax);
    /* 004ce5a7: movzx eax, word ptr [esi + 0xa] */ r_eax = (u32)R16((u32)(r_esi+0xau));
    /* 004ce5ab: mov word ptr [edi + 0x26], ax */ W16((u32)(r_edi+0x26u), (u16)r_eax);
    /* 004ce5af: movzx eax, word ptr [esi + 0xc] */ r_eax = (u32)R16((u32)(r_esi+0xcu));
    /* 004ce5b3: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 004ce5b7: movzx eax, word ptr [esi + 0xe] */ r_eax = (u32)R16((u32)(r_esi+0xeu));
    /* 004ce5bb: mov word ptr [edi + 0x2a], ax */ W16((u32)(r_edi+0x2au), (u16)r_eax);
    /* 004ce5bf: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004ce5c2: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004ce5c5: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 004ce5c8: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004ce5cb: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 004ce5ce: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004ce5d1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004ce5d4: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004ce5d7: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004ce5da: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004ce5dd: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004ce5e0: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004ce5e3: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004ce5e6: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004ce5e9: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 004ce5ec: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004ce5ef: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004ce5f2: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 004ce5f5: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004ce5f8: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004ce5fb: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004ce5fe: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 004ce601: movzx eax, word ptr [esi + 0x3c] */ r_eax = (u32)R16((u32)(r_esi+0x3cu));
    /* 004ce605: mov word ptr [edi + 0x58], ax */ W16((u32)(r_edi+0x58u), (u16)r_eax);
    /* 004ce609: movzx esi, word ptr [esi + 0x3e] */ r_esi = (u32)R16((u32)(r_esi+0x3eu));
    /* 004ce60d: mov word ptr [edi + 0x5a], si */ W16((u32)(r_edi+0x5au), (u16)r_esi);
    /* 004ce611: mov eax, edi */ r_eax = r_edi;
    /* 004ce613: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ce614: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ce615: ret 8 */ FN_RET(0x004ce558); r_esp += 12; return;
}

void f_004ce618(void) /* sub_4CE618 */
{
    FN_ENTER(0x004ce618);
    /* 004ce618: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce61b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004ce61f: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004ce624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce626: je 0x4ce6a1 */ if (fZ) goto L_004ce6a1;
L_004ce628:; BB(0x004ce628);
    /* 004ce628: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004ce62c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004ce62f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ce631: mov ebx, edx */ r_ebx = r_edx;
    /* 004ce633: mov esi, ecx */ r_esi = r_ecx;
    /* 004ce635: jmp 0x4ce63c */ goto L_004ce63c;
L_004ce637:; BB(0x004ce637);
    /* 004ce637: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
L_004ce63c:; BB(0x004ce63c);
    /* 004ce63c: movzx eax, word ptr [eax + 0x22] */ r_eax = (u32)R16((u32)(r_eax+0x22u));
    /* 004ce640: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce642: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 004ce645: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004ce649: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce64b: je 0x4ce68c */ if (fZ) goto L_004ce68c;
L_004ce64d:; BB(0x004ce64d);
    /* 004ce64d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce64e: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce653u); f_00786b3c();
    /* 004ce653: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce656: je 0x4ce68c */ if (fZ) goto L_004ce68c;
L_004ce658:; BB(0x004ce658);
    /* 004ce658: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004ce65b: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 004ce65e: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004ce661: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 004ce664: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ce666: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ce66a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004ce66e: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004ce676: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004ce67a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce67b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ce680u); f_007828e4();
    /* 004ce680: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce681: fcomp dword ptr [0x908a28] */ fx_compare(ST(0), R_F32((u32)(0x908a28u))); FPOP();
    /* 004ce687: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ce689: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ce68a: jb 0x4ce6a7 */ if (fC) goto L_004ce6a7;
L_004ce68c:; BB(0x004ce68c);
    /* 004ce68c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce68f: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce692: jl 0x4ce637 */ if ((fS!=fO)) goto L_004ce637;
L_004ce694:; BB(0x004ce694);
    /* 004ce694: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004ce698: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004ce69b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce69d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce6a0: ret  */ FN_RET(0x004ce618); r_esp += 4; return;
L_004ce6a1:; BB(0x004ce6a1);
    /* 004ce6a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce6a3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce6a6: ret  */ FN_RET(0x004ce618); r_esp += 4; return;
L_004ce6a7:; BB(0x004ce6a7);
    /* 004ce6a7: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004ce6ab: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004ce6ae: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce6b3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce6b6: ret  */ FN_RET(0x004ce618); r_esp += 4; return;
}

void f_004ce6b8(void) /* sub_4CE6B8 */
{
    FN_ENTER(0x004ce6b8);
    /* 004ce6b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce6bb: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ce6bf: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004ce6c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce6c6: je 0x4ce74f */ if (fZ) goto L_004ce74f;
L_004ce6cc:; BB(0x004ce6cc);
    /* 004ce6cc: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 004ce6d0: mov ebx, edx */ r_ebx = r_edx;
    /* 004ce6d2: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004ce6d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce6d8: mov esi, ecx */ r_esi = r_ecx;
    /* 004ce6da: jmp 0x4ce6e1 */ goto L_004ce6e1;
L_004ce6dc:; BB(0x004ce6dc);
    /* 004ce6dc: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
L_004ce6e1:; BB(0x004ce6e1);
    /* 004ce6e1: movzx eax, word ptr [eax + 0x22] */ r_eax = (u32)R16((u32)(r_eax+0x22u));
    /* 004ce6e5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce6e7: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 004ce6ea: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004ce6ee: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce6f0: je 0x4ce739 */ if (fZ) goto L_004ce739;
L_004ce6f2:; BB(0x004ce6f2);
    /* 004ce6f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce6f3: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce6f8u); f_00786b3c();
    /* 004ce6f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce6f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce6fb: je 0x4ce739 */ if (fZ) goto L_004ce739;
L_004ce6fd:; BB(0x004ce6fd);
    /* 004ce6fd: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004ce700: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 004ce703: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004ce706: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004ce709: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ce70b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ce70e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ce712: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004ce71a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ce71d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce71e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ce723u); f_007828e4();
    /* 004ce723: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce724: fld dword ptr [0x908a20] */ FPUSH(R_F32((u32)(0x908a20u)));
    /* 004ce72a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004ce72c: fcom dword ptr [0x908a24] */ fx_compare(ST(0), R_F32((u32)(0x908a24u))); 
    /* 004ce732: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ce734: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ce735: jb 0x4ce755 */ if (fC) goto L_004ce755;
L_004ce737:; BB(0x004ce737);
    /* 004ce737: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004ce739:; BB(0x004ce739);
    /* 004ce739: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ce73c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce73f: jl 0x4ce6dc */ if ((fS!=fO)) goto L_004ce6dc;
L_004ce741:; BB(0x004ce741);
    /* 004ce741: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004ce745: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004ce749: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce74b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce74e: ret  */ FN_RET(0x004ce6b8); r_esp += 4; return;
L_004ce74f:; BB(0x004ce74f);
    /* 004ce74f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce751: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce754: ret  */ FN_RET(0x004ce6b8); r_esp += 4; return;
L_004ce755:; BB(0x004ce755);
    /* 004ce755: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004ce759: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ce75c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ce75e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004ce762: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ce764: mov edx, ebx */ r_edx = r_ebx;
    /* 004ce766: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 004ce769: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ce76b: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 004ce76e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004ce772: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ce774: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 004ce777: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 004ce77a: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce77f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce782: ret  */ FN_RET(0x004ce6b8); r_esp += 4; return;
}

void f_004ce784(void) /* sub_4CE784 */
{
    FN_ENTER(0x004ce784);
    /* 004ce784: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce787: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004ce78c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce78e: je 0x4ce837 */ if (fZ) goto L_004ce837;
L_004ce794:; BB(0x004ce794);
    /* 004ce794: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004ce79b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ce79e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004ce7a6: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004ce7ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce7af: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ce7b4u); f_007828e4();
    /* 004ce7b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce7b5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004ce7b9: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 004ce7bd: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce7c2: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004ce7c6: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 004ce7ca: mov ebx, eax */ r_ebx = r_eax;
L_004ce7cc:; BB(0x004ce7cc);
    /* 004ce7cc: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
    /* 004ce7d2: movzx ecx, word ptr [edx + 0x22] */ r_ecx = (u32)R16((u32)(r_edx+0x22u));
    /* 004ce7d6: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004ce7da: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce7dc: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004ce7df: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce7e1: je 0x4ce81e */ if (fZ) goto L_004ce81e;
L_004ce7e3:; BB(0x004ce7e3);
    /* 004ce7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce7e4: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce7e9u); f_00786b3c();
    /* 004ce7e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce7ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce7ec: je 0x4ce81e */ if (fZ) goto L_004ce81e;
L_004ce7ee:; BB(0x004ce7ee);
    /* 004ce7ee: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004ce7f1: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 004ce7f4: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004ce7f7: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 004ce7fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ce7fc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ce7ff: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ce803: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004ce80b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ce80e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce80f: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ce814u); f_007828e4();
    /* 004ce814: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce815: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 004ce819: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ce81b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ce81c: jb 0x4ce840 */ if (fC) goto L_004ce840;
L_004ce81e:; BB(0x004ce81e);
    /* 004ce81e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce821: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce824: jl 0x4ce7cc */ if ((fS!=fO)) goto L_004ce7cc;
L_004ce826:; BB(0x004ce826);
    /* 004ce826: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004ce82a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004ce82e: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce833: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce836: ret  */ FN_RET(0x004ce784); r_esp += 4; return;
L_004ce837:; BB(0x004ce837);
    /* 004ce837: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce83c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce83f: ret  */ FN_RET(0x004ce784); r_esp += 4; return;
L_004ce840:; BB(0x004ce840);
    /* 004ce840: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004ce844: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004ce848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce84a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce84d: ret  */ FN_RET(0x004ce784); r_esp += 4; return;
}

void f_004ce850(void) /* sub_4CE850 */
{
    FN_ENTER(0x004ce850);
    /* 004ce850: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce853: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004ce858: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ce85a: jne 0x4ce8a8 */ if (!fZ) goto L_004ce8a8;
L_004ce85c:; BB(0x004ce85c);
    /* 004ce85c: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004ce861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce863: je 0x4ce8b1 */ if (fZ) goto L_004ce8b1;
L_004ce865:; BB(0x004ce865);
    /* 004ce865: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004ce869: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004ce86c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce86e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ce870: mov ebx, edx */ r_ebx = r_edx;
    /* 004ce872: mov esi, ecx */ r_esi = r_ecx;
    /* 004ce874: jmp 0x4ce87b */ goto L_004ce87b;
L_004ce876:; BB(0x004ce876);
    /* 004ce876: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
L_004ce87b:; BB(0x004ce87b);
    /* 004ce87b: movzx eax, word ptr [eax + 0x22] */ r_eax = (u32)R16((u32)(r_eax+0x22u));
    /* 004ce87f: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce881: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004ce884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce885: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce88au); f_00786b3c();
    /* 004ce88a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce88b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce88d: je 0x4ce892 */ if (fZ) goto L_004ce892;
L_004ce88f:; BB(0x004ce88f);
    /* 004ce88f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004ce892:; BB(0x004ce892);
    /* 004ce892: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce895: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce898: jl 0x4ce876 */ if ((fS!=fO)) goto L_004ce876;
L_004ce89a:; BB(0x004ce89a);
    /* 004ce89a: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004ce89e: mov ecx, esi */ r_ecx = r_esi;
    /* 004ce8a0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004ce8a3: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce8a6: jl 0x4ce8b1 */ if ((fS!=fO)) goto L_004ce8b1;
L_004ce8a8:; BB(0x004ce8a8);
    /* 004ce8a8: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce8ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce8b0: ret  */ FN_RET(0x004ce850); r_esp += 4; return;
L_004ce8b1:; BB(0x004ce8b1);
    /* 004ce8b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce8b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce8b6: ret  */ FN_RET(0x004ce850); r_esp += 4; return;
}

void f_004ce8b8(void) /* sub_4CE8B8 */
{
    FN_ENTER(0x004ce8b8);
    /* 004ce8b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ce8bb: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004ce8c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce8c2: je 0x4ce90b */ if (fZ) goto L_004ce90b;
L_004ce8c4:; BB(0x004ce8c4);
    /* 004ce8c4: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004ce8c8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004ce8cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce8cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ce8cf: mov ebx, edx */ r_ebx = r_edx;
    /* 004ce8d1: mov esi, ecx */ r_esi = r_ecx;
    /* 004ce8d3: jmp 0x4ce8da */ goto L_004ce8da;
L_004ce8d5:; BB(0x004ce8d5);
    /* 004ce8d5: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
L_004ce8da:; BB(0x004ce8da);
    /* 004ce8da: movzx eax, word ptr [eax + 0x22] */ r_eax = (u32)R16((u32)(r_eax+0x22u));
    /* 004ce8de: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ce8e0: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004ce8e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ce8e4: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce8e9u); f_00786b3c();
    /* 004ce8e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce8ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce8ec: je 0x4ce8f1 */ if (fZ) goto L_004ce8f1;
L_004ce8ee:; BB(0x004ce8ee);
    /* 004ce8ee: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004ce8f1:; BB(0x004ce8f1);
    /* 004ce8f1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce8f4: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce8f7: jl 0x4ce8d5 */ if ((fS!=fO)) goto L_004ce8d5;
L_004ce8f9:; BB(0x004ce8f9);
    /* 004ce8f9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004ce8fd: mov ecx, esi */ r_ecx = r_esi;
    /* 004ce8ff: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004ce902: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce905: jge 0x4ce91d */ if ((fS==fO)) goto L_004ce91d;
L_004ce907:; BB(0x004ce907);
    /* 004ce907: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce909: jle 0x4ce914 */ if ((fZ||fS!=fO)) goto L_004ce914;
L_004ce90b:; BB(0x004ce90b);
    /* 004ce90b: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce910: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce913: ret  */ FN_RET(0x004ce8b8); r_esp += 4; return;
L_004ce914:; BB(0x004ce914);
    /* 004ce914: mov eax, 2 */ r_eax = 0x2u;
    /* 004ce919: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce91c: ret  */ FN_RET(0x004ce8b8); r_esp += 4; return;
L_004ce91d:; BB(0x004ce91d);
    /* 004ce91d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce91f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce922: ret  */ FN_RET(0x004ce8b8); r_esp += 4; return;
}

void f_004ce900(void)
{
    FN_ENTER(0x004ce900);
    /* 004ce900: xor al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004ce902: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce905: jge 0x4ce91d */ if ((fS==fO)) goto L_004ce91d;
L_004ce907:; BB(0x004ce907);
    /* 004ce907: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce909: jle 0x4ce914 */ if ((fZ||fS!=fO)) goto L_004ce914;
L_004ce90b:; BB(0x004ce90b);
    /* 004ce90b: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce910: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce913: ret  */ FN_RET(0x004ce900); r_esp += 4; return;
L_004ce914:; BB(0x004ce914);
    /* 004ce914: mov eax, 2 */ r_eax = 0x2u;
    /* 004ce919: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce91c: ret  */ FN_RET(0x004ce900); r_esp += 4; return;
L_004ce91d:; BB(0x004ce91d);
    /* 004ce91d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ce91f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ce922: ret  */ FN_RET(0x004ce900); r_esp += 4; return;
}

void f_004ce924(void) /* sub_4CE924 */
{
    FN_ENTER(0x004ce924);
    /* 004ce924: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce925: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
    /* 004ce92b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce92d: je 0x4ce966 */ if (fZ) goto L_004ce966;
L_004ce92f:; BB(0x004ce92f);
    /* 004ce92f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004ce932: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce937: mov ebx, eax */ r_ebx = r_eax;
    /* 004ce939: jmp 0x4ce941 */ goto L_004ce941;
L_004ce93b:; BB(0x004ce93b);
    /* 004ce93b: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
L_004ce941:; BB(0x004ce941);
    /* 004ce941: movzx edx, word ptr [edx + 0x22] */ r_edx = (u32)R16((u32)(r_edx+0x22u));
    /* 004ce945: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ce947: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 004ce94a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce94b: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce950u); f_00786b3c();
    /* 004ce950: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce951: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce953: je 0x4ce95c */ if (fZ) goto L_004ce95c;
L_004ce955:; BB(0x004ce955);
    /* 004ce955: mov ecx, eax */ r_ecx = r_eax;
    /* 004ce957: call 0x4cd398 */ r_esp -= 4; W32(r_esp, 0x4ce95cu); f_004cd398();
L_004ce95c:; BB(0x004ce95c);
    /* 004ce95c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce95f: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ce962: jl 0x4ce93b */ if ((fS!=fO)) goto L_004ce93b;
L_004ce964:; BB(0x004ce964);
    /* 004ce964: jmp 0x4ce968 */ goto L_004ce968;
L_004ce966:; BB(0x004ce966);
    /* 004ce966: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce967: ret  */ FN_RET(0x004ce924); r_esp += 4; return;
L_004ce968:; BB(0x004ce968);
    /* 004ce968: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004ce96b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce96c: ret  */ FN_RET(0x004ce924); r_esp += 4; return;
}

void f_004ce970(void) /* sub_4CE970 */
{
    FN_ENTER(0x004ce970);
    /* 004ce970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce971: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
    /* 004ce977: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce979: je 0x4ce9ac */ if (fZ) goto L_004ce9ac;
L_004ce97b:; BB(0x004ce97b);
    /* 004ce97b: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce980: mov ebx, eax */ r_ebx = r_eax;
    /* 004ce982: jmp 0x4ce98a */ goto L_004ce98a;
L_004ce984:; BB(0x004ce984);
    /* 004ce984: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
L_004ce98a:; BB(0x004ce98a);
    /* 004ce98a: movzx edx, word ptr [edx + 0x22] */ r_edx = (u32)R16((u32)(r_edx+0x22u));
    /* 004ce98e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ce990: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 004ce993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce994: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce999u); f_00786b3c();
    /* 004ce999: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce99c: jne 0x4ce9a8 */ if (!fZ) goto L_004ce9a8;
L_004ce99e:; BB(0x004ce99e);
    /* 004ce99e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce9a1: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ce9a4: jl 0x4ce984 */ if ((fS!=fO)) goto L_004ce984;
L_004ce9a6:; BB(0x004ce9a6);
    /* 004ce9a6: jmp 0x4ce9b3 */ goto L_004ce9b3;
L_004ce9a8:; BB(0x004ce9a8);
    /* 004ce9a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce9aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce9ab: ret  */ FN_RET(0x004ce970); r_esp += 4; return;
L_004ce9ac:; BB(0x004ce9ac);
    /* 004ce9ac: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce9b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce9b2: ret  */ FN_RET(0x004ce970); r_esp += 4; return;
L_004ce9b3:; BB(0x004ce9b3);
    /* 004ce9b3: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce9b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce9b9: ret  */ FN_RET(0x004ce970); r_esp += 4; return;
}

void f_004ce9bc(void) /* sub_4CE9BC */
{
    FN_ENTER(0x004ce9bc);
    /* 004ce9bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce9bd: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
    /* 004ce9c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce9c5: je 0x4ce9fb */ if (fZ) goto L_004ce9fb;
L_004ce9c7:; BB(0x004ce9c7);
    /* 004ce9c7: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce9cc: mov ebx, eax */ r_ebx = r_eax;
    /* 004ce9ce: jmp 0x4ce9d6 */ goto L_004ce9d6;
L_004ce9d0:; BB(0x004ce9d0);
    /* 004ce9d0: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
L_004ce9d6:; BB(0x004ce9d6);
    /* 004ce9d6: movzx edx, word ptr [edx + 0x22] */ r_edx = (u32)R16((u32)(r_edx+0x22u));
    /* 004ce9da: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ce9dc: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 004ce9df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce9e0: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce9e5u); f_00786b3c();
    /* 004ce9e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce9e8: jne 0x4ce9f4 */ if (!fZ) goto L_004ce9f4;
L_004ce9ea:; BB(0x004ce9ea);
    /* 004ce9ea: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce9ed: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce9f0: jl 0x4ce9d0 */ if ((fS!=fO)) goto L_004ce9d0;
L_004ce9f2:; BB(0x004ce9f2);
    /* 004ce9f2: jmp 0x4ce9ff */ goto L_004ce9ff;
L_004ce9f4:; BB(0x004ce9f4);
    /* 004ce9f4: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce9f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce9fa: ret  */ FN_RET(0x004ce9bc); r_esp += 4; return;
L_004ce9fb:; BB(0x004ce9fb);
    /* 004ce9fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce9fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce9fe: ret  */ FN_RET(0x004ce9bc); r_esp += 4; return;
L_004ce9ff:; BB(0x004ce9ff);
    /* 004ce9ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cea01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cea02: ret  */ FN_RET(0x004ce9bc); r_esp += 4; return;
}

void f_004ce9c7(void)
{
    FN_ENTER(0x004ce9c7);
    /* 004ce9c7: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce9cc: mov ebx, eax */ r_ebx = r_eax;
    /* 004ce9ce: jmp 0x4ce9d6 */ goto L_004ce9d6;
L_004ce9d0:; BB(0x004ce9d0);
    /* 004ce9d0: mov edx, dword ptr [0xa48688] */ r_edx = R32((u32)(0xa48688u));
L_004ce9d6:; BB(0x004ce9d6);
    /* 004ce9d6: movzx edx, word ptr [edx + 0x22] */ r_edx = (u32)R16((u32)(r_edx+0x22u));
    /* 004ce9da: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ce9dc: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 004ce9df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ce9e0: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4ce9e5u); f_00786b3c();
    /* 004ce9e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce9e8: jne 0x4ce9f4 */ if (!fZ) goto L_004ce9f4;
L_004ce9ea:; BB(0x004ce9ea);
    /* 004ce9ea: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce9ed: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce9f0: jl 0x4ce9d0 */ if ((fS!=fO)) goto L_004ce9d0;
L_004ce9f2:; BB(0x004ce9f2);
    /* 004ce9f2: jmp 0x4ce9ff */ goto L_004ce9ff;
L_004ce9f4:; BB(0x004ce9f4);
    /* 004ce9f4: mov eax, 1 */ r_eax = 0x1u;
    /* 004ce9f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ce9fa: ret  */ FN_RET(0x004ce9c7); r_esp += 4; return;
L_004ce9ff:; BB(0x004ce9ff);
    /* 004ce9ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cea01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cea02: ret  */ FN_RET(0x004ce9c7); r_esp += 4; return;
}

void f_004cea04(void) /* sub_4CEA04 */
{
    FN_ENTER(0x004cea04);
    /* 004cea04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cea05: mov ebp, esp */ r_ebp = r_esp;
    /* 004cea07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cea09: push 0x8d183c */ { u32 v = 0x8d183cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cea0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cea14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cea15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cea1c: sub esp, 0x17c */ {  u32 a = r_esp; u32 b = 0x17cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cea22: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cea25: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004cea28: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004cea2b: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004cea2e: lea ecx, [ebp - 0x188] */ r_ecx = (u32)(r_ebp+0xfffffe78u);
    /* 004cea34: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x4cea39u); f_00763030();
    /* 004cea39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cea3c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cea3f: jg 0x4cebe8 */ if ((!fZ&&fS==fO)) goto L_004cebe8;
L_004cea45:; BB(0x004cea45);
    /* 004cea45: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004cea4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cea4c: jne 0x4cea5c */ if (!fZ) goto L_004cea5c;
L_004cea4e:; BB(0x004cea4e);
    /* 004cea4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cea51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cea58: mov esp, ebp */ r_esp = r_ebp;
    /* 004cea5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cea5b: ret  */ FN_RET(0x004cea04); r_esp += 4; return;
L_004cea5c:; BB(0x004cea5c);
    /* 004cea5c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cea5f: lea ecx, [ebp - 0x188] */ r_ecx = (u32)(r_ebp+0xfffffe78u);
    /* 004cea65: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x4cea6au); f_0084c390();
    /* 004cea6a: lea ecx, [ebp - 0x188] */ r_ecx = (u32)(r_ebp+0xfffffe78u);
    /* 004cea70: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4cea75u); f_00763498();
    /* 004cea75: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 004cea78: mov edi, dword ptr [0xa48688] */ r_edi = R32((u32)(0xa48688u));
    /* 004cea7e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004cea81: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004cea84: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004cea87: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004cea8a: fadd dword ptr [eax*4 + 0x908a08] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908a08u));
    /* 004cea91: fdiv dword ptr [0x908a18] */ ST(0) = ST(0) / R_F32((u32)(0x908a18u));
    /* 004cea97: fmul dword ptr [0x908a14] */ ST(0) = ST(0) * R_F32((u32)(0x908a14u));
    /* 004cea9d: lea esi, [ebx + 1] */ r_esi = (u32)(r_ebx+0x1u);
    /* 004ceaa0: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 004ceaa3: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 004ceaa7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ceaac: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004ceaaf: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004ceab2: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 004ceab5: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004ceab8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ceabb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ceabd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ceac0: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 004ceac5: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x004ceac5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004ceac5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004ceac7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ceaca: movzx eax, word ptr [edi + 0x22] */ r_eax = (u32)R16((u32)(r_edi+0x22u));
    /* 004ceace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ceacf: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4cead4u); f_00786b3c();
    /* 004cead4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004cead7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ceada: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ceadd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ceae2u); f_0082dcbc();
    /* 004ceae2: fmul dword ptr [0x908a10] */ ST(0) = ST(0) * R_F32((u32)(0x908a10u));
    /* 004ceae8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ceaeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ceaee: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 004ceaf1: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ceaf6u); f_0082ddd8();
    /* 004ceaf6: fmul dword ptr [0x908a10] */ ST(0) = ST(0) * R_F32((u32)(0x908a10u));
    /* 004ceafc: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ceaff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ceb02: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 004ceb05: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004ceb08: lea edx, [eax + 0x8000] */ r_edx = (u32)(r_eax+0x8000u);
    /* 004ceb0e: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 004ceb11: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 004ceb14: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ceb16: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ceb19: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ceb1b: jle 0x4cebe8 */ if ((fZ||fS!=fO)) goto L_004cebe8;
L_004ceb21:; BB(0x004ceb21);
    /* 004ceb21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ceb24: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ceb27: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ceb2a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ceb2fu); f_0082dcbc();
    /* 004ceb2f: fmul dword ptr [0x908a10] */ ST(0) = ST(0) * R_F32((u32)(0x908a10u));
    /* 004ceb35: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ceb38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ceb3b: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004ceb3e: fstp dword ptr [ebp - 0xa0] */ W_F32((u32)(r_ebp+0xffffff60u), ST(0)); FPOP();
    /* 004ceb44: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 004ceb4a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ceb4fu); f_0082ddd8();
    /* 004ceb4f: fmul dword ptr [0x908a10] */ ST(0) = ST(0) * R_F32((u32)(0x908a10u));
    /* 004ceb55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ceb58: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ceb5b: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 004ceb61: lea edx, [eax + 0x8000] */ r_edx = (u32)(r_eax+0x8000u);
    /* 004ceb67: movzx edi, dx */ r_edi = (u32)(u16)r_edx;
    /* 004ceb6a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ceb6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ceb70: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 004ceb76: lea ebx, [ebp - 0x94] */ r_ebx = (u32)(r_ebp+0xffffff6cu);
    /* 004ceb7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ceb7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ceb7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ceb7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ceb80: mov ecx, dword ptr [0xa48688] */ r_ecx = R32((u32)(0xa48688u));
    /* 004ceb86: call 0x4ce35c */ r_esp -= 4; W32(r_esp, 0x4ceb8bu); f_004ce35c();
    /* 004ceb8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ceb8d: je 0x4cebdb */ if (fZ) goto L_004cebdb;
L_004ceb8f:; BB(0x004ceb8f);
    /* 004ceb8f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 004ceb96: push 0x8b4 */ { u32 v = 0x8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ceb9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ceba0u); f_005caba4();
    /* 004ceba0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ceba1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004ceba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ceba6: je 0x4cebd4 */ if (fZ) goto L_004cebd4;
L_004ceba8:; BB(0x004ceba8);
    /* 004ceba8: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 004cebaf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cebb6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cebb9: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 004cebbf: mov ecx, eax */ r_ecx = r_eax;
    /* 004cebc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cebc2: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cebc8: call 0x4cede4 */ r_esp -= 4; W32(r_esp, 0x4cebcdu); f_004cede4();
    /* 004cebcd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004cebd4:; BB(0x004cebd4);
    /* 004cebd4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004cebdb:; BB(0x004cebdb);
    /* 004cebdb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004cebde: mov eax, esi */ r_eax = r_esi;
    /* 004cebe0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cebe2: jl 0x4ceb21 */ if ((fS!=fO)) goto L_004ceb21;
L_004cebe8:; BB(0x004cebe8);
    /* 004cebe8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004cebeb: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cebee: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004cebf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cebf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cebfb: mov esp, ebp */ r_esp = r_ebp;
    /* 004cebfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cebfe: ret  */ FN_RET(0x004cea04); r_esp += 4; return;
}

void f_004cec00(void) /* sub_4CEC00 */
{
    FN_ENTER(0x004cec00);
    /* 004cec00: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004cec05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cec07: je 0x4cec15 */ if (fZ) goto L_004cec15;
L_004cec09:; BB(0x004cec09);
    /* 004cec09: movzx edx, word ptr [eax + 0x22] */ r_edx = (u32)R16((u32)(r_eax+0x22u));
    /* 004cec0d: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cec11: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 004cec14: ret  */ FN_RET(0x004cec00); r_esp += 4; return;
L_004cec15:; BB(0x004cec15);
    /* 004cec15: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004cec1a: ret  */ FN_RET(0x004cec00); r_esp += 4; return;
}

void f_004cec1c(void) /* sub_4CEC1C */
{
    FN_ENTER(0x004cec1c);
    /* 004cec1c: mov eax, dword ptr [0xa48688] */ r_eax = R32((u32)(0xa48688u));
    /* 004cec21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cec23: je 0x4cec38 */ if (fZ) goto L_004cec38;
L_004cec25:; BB(0x004cec25);
    /* 004cec25: movzx eax, word ptr [eax + 0x22] */ r_eax = (u32)R16((u32)(r_eax+0x22u));
    /* 004cec29: add eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cec2d: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 004cec30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cec31: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4cec36u); f_00786b3c();
    /* 004cec36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cec37: ret  */ FN_RET(0x004cec1c); r_esp += 4; return;
L_004cec38:; BB(0x004cec38);
    /* 004cec38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cec3a: ret  */ FN_RET(0x004cec1c); r_esp += 4; return;
}

void f_004cec3c(void) /* sub_4CEC3C */
{
    FN_ENTER(0x004cec3c);
    /* 004cec3c: mov dword ptr [0xa48688], 0 */ W32((u32)(0xa48688u), 0x0u);
    /* 004cec46: ret  */ FN_RET(0x004cec3c); r_esp += 4; return;
}

void f_004cec48(void) /* sub_4CEC48 */
{
    FN_ENTER(0x004cec48);
    /* 004cec48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cec49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cec4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cec4d: call 0x4cec6c */ r_esp -= 4; W32(r_esp, 0x4cec52u); f_004cec6c();
    /* 004cec52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cec56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cec58: jne 0x4cec5e */ if (!fZ) goto L_004cec5e;
L_004cec5a:; BB(0x004cec5a);
    /* 004cec5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cec5b: ret 4 */ FN_RET(0x004cec48); r_esp += 8; return;
L_004cec5e:; BB(0x004cec5e);
    /* 004cec5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cec5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cec64u); f_005c2f74();
    /* 004cec64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cec65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cec66: ret 4 */ FN_RET(0x004cec48); r_esp += 8; return;
}

void f_004cec6c(void) /* sub_4CEC6C */
{
    FN_ENTER(0x004cec6c);
    /* 004cec6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cec6d: mov ebp, esp */ r_ebp = r_esp;
    /* 004cec6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cec71: push 0x8d1858 */ { u32 v = 0x8d1858u; r_esp -= 4; W32(r_esp, v); }
    /* 004cec76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cec7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cec7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cec84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cec87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cec8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cec8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cec90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cec93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cec96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cec99: mov dword ptr [ecx], 0xafbbe0 */ W32((u32)(r_ecx), 0xafbbe0u);
    /* 004cec9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ceca6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4cecabu); f_008171e8();
    /* 004cecab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cecae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cecb5: mov esp, ebp */ r_esp = r_ebp;
    /* 004cecb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cecb8: ret  */ FN_RET(0x004cec6c); r_esp += 4; return;
}

void f_004cecbc(void) /* sub_4CECBC */
{
    FN_ENTER(0x004cecbc);
    /* 004cecbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cecbd: mov ebp, esp */ r_ebp = r_esp;
    /* 004cecbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cecc1: push 0x8d1874 */ { u32 v = 0x8d1874u; r_esp -= 4; W32(r_esp, v); }
    /* 004cecc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ceccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ceccd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cecd4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cecd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cecda: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004cecdd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004cece0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004cece3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004cece6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cece9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004cecec: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004cecef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cecf2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004cecf5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4cecfau); f_008193cc();
    /* 004cecfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ced01: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004ced04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ced07: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ced0a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004ced0d: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004ced10: mov dword ptr [eax], 0xafbbe0 */ W32((u32)(r_eax), 0xafbbe0u);
    /* 004ced16: mov esi, dword ptr [0x9ac534] */ r_esi = R32((u32)(0x9ac534u));
    /* 004ced1c: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 004ced1f: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 004ced22: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 004ced29: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ced2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ced2d: mov byte ptr [ebp - 0x34], 1 */ W8((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004ced31: mov byte ptr [ebp - 0x33], dl */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_edx);
    /* 004ced34: mov word ptr [ebp - 0x32], dx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_edx);
    /* 004ced38: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004ced3f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4ced44u); f_004d31f4();
    /* 004ced44: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004ced47: push 0x3333 */ { u32 v = 0x3333u; r_esp -= 4; W32(r_esp, v); }
    /* 004ced4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ced4d: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4ced52u); f_004d6770();
    /* 004ced52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ced55: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004ced58: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ced5b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ced5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ced61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ced68: mov esp, ebp */ r_esp = r_ebp;
    /* 004ced6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ced6b: ret 0xc */ FN_RET(0x004cecbc); r_esp += 16; return;
}

void f_004ced70(void) /* sub_4CED70 */
{
    FN_ENTER(0x004ced70);
    /* 004ced70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ced71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ced73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ced75: call 0x4ced94 */ r_esp -= 4; W32(r_esp, 0x4ced7au); f_004ced94();
    /* 004ced7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ced7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ced80: jne 0x4ced86 */ if (!fZ) goto L_004ced86;
L_004ced82:; BB(0x004ced82);
    /* 004ced82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ced83: ret 4 */ FN_RET(0x004ced70); r_esp += 8; return;
L_004ced86:; BB(0x004ced86);
    /* 004ced86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ced87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ced8cu); f_005c2f74();
    /* 004ced8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ced8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ced8e: ret 4 */ FN_RET(0x004ced70); r_esp += 8; return;
}

void f_004ced94(void) /* sub_4CED94 */
{
    FN_ENTER(0x004ced94);
    /* 004ced94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ced95: mov ebp, esp */ r_ebp = r_esp;
    /* 004ced97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ced99: push 0x8d1890 */ { u32 v = 0x8d1890u; r_esp -= 4; W32(r_esp, v); }
    /* 004ced9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ceda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ceda5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cedac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cedaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cedb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cedb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cedb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cedbb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cedbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cedc1: mov dword ptr [ecx], 0xafbc20 */ W32((u32)(r_ecx), 0xafbc20u);
    /* 004cedc7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cedce: call 0x4c0038 */ r_esp -= 4; W32(r_esp, 0x4cedd3u); f_004c0038();
    /* 004cedd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cedd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ceddd: mov esp, ebp */ r_esp = r_ebp;
    /* 004ceddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cede0: ret  */ FN_RET(0x004ced94); r_esp += 4; return;
}

void f_004cede4(void) /* sub_4CEDE4 */
{
    FN_ENTER(0x004cede4);
    /* 004cede4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cede5: mov edi, ecx */ r_edi = r_ecx;
    /* 004cede7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cedeb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cedef: mov ecx, edi */ r_ecx = r_edi;
    /* 004cedf1: call 0x4cb480 */ r_esp -= 4; W32(r_esp, 0x4cedf6u); f_004cb480();
    /* 004cedf6: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 004cedfc: mov dword ptr [edi], 0xafbc20 */ W32((u32)(r_edi), 0xafbc20u);
    /* 004cee02: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cee05: mov dword ptr [edi + 0x3c8], edx */ W32((u32)(r_edi+0x3c8u), r_edx);
    /* 004cee0b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004cee10: mov word ptr [edi + 0x682], ax */ W16((u32)(r_edi+0x682u), (u16)r_eax);
    /* 004cee17: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004cee1c: mov word ptr [edi + 0x334], ax */ W16((u32)(r_edi+0x334u), (u16)r_eax);
    /* 004cee23: mov word ptr [edi + 0x2bc], ax */ W16((u32)(r_edi+0x2bcu), (u16)r_eax);
    /* 004cee2a: mov eax, edi */ r_eax = r_edi;
    /* 004cee2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cee2d: ret 0xc */ FN_RET(0x004cede4); r_esp += 16; return;
}

void f_004cee30(void) /* sub_4CEE30 */
{
    FN_ENTER(0x004cee30);
    /* 004cee30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cee31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cee32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cee33: mov esi, ecx */ r_esi = r_ecx;
    /* 004cee35: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4cee3au); f_004f7c84();
    /* 004cee3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cee3c: jne 0x4cf041 */ if (!fZ) goto L_004cf041;
L_004cee42:; BB(0x004cee42);
    /* 004cee42: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004cee48: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cee4a: jne 0x4cf029 */ if (!fZ) goto L_004cf029;
L_004cee50:; BB(0x004cee50);
    /* 004cee50: mov eax, dword ptr [esi + 0x75c] */ r_eax = R32((u32)(r_esi+0x75cu));
    /* 004cee56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cee58: je 0x4cee6a */ if (fZ) goto L_004cee6a;
L_004cee5a:; BB(0x004cee5a);
    /* 004cee5a: mov ecx, esi */ r_ecx = r_esi;
    /* 004cee5c: call 0x4cc314 */ r_esp -= 4; W32(r_esp, 0x4cee61u); f_004cc314();
    /* 004cee61: add dword ptr [esi + 0x764], 1 */ { u32 ad = (u32)(r_esi+0x764u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004cee68: jmp 0x4ceeb2 */ goto L_004ceeb2;
L_004cee6a:; BB(0x004cee6a);
    /* 004cee6a: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4cee6fu); f_00694cc8();
    /* 004cee6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cee71: je 0x4ceeb2 */ if (fZ) goto L_004ceeb2;
L_004cee73:; BB(0x004cee73);
    /* 004cee73: mov eax, dword ptr [esi + 0x6dc] */ r_eax = R32((u32)(r_esi+0x6dcu));
    /* 004cee79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cee7b: jne 0x4ceeb2 */ if (!fZ) goto L_004ceeb2;
L_004cee7d:; BB(0x004cee7d);
    /* 004cee7d: mov ebp, dword ptr [esi + 0x3e8] */ r_ebp = R32((u32)(r_esi+0x3e8u));
    /* 004cee83: mov ecx, esi */ r_ecx = r_esi;
    /* 004cee85: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4cee8au); f_00520db0();
    /* 004cee8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cee8c: je 0x4ceea8 */ if (fZ) goto L_004ceea8;
L_004cee8e:; BB(0x004cee8e);
    /* 004cee8e: mov dword ptr [esi + 0x3e8], 0 */ W32((u32)(r_esi+0x3e8u), 0x0u);
    /* 004cee98: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cee9a: je 0x4ceeb2 */ if (fZ) goto L_004ceeb2;
L_004cee9c:; BB(0x004cee9c);
    /* 004cee9c: mov dword ptr [esi + 0x8b0], 1 */ W32((u32)(r_esi+0x8b0u), 0x1u);
    /* 004ceea6: jmp 0x4ceeb2 */ goto L_004ceeb2;
L_004ceea8:; BB(0x004ceea8);
    /* 004ceea8: mov dword ptr [esi + 0x3e8], 1 */ W32((u32)(r_esi+0x3e8u), 0x1u);
L_004ceeb2:; BB(0x004ceeb2);
    /* 004ceeb2: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4ceeb7u); f_00520db8();
    /* 004ceeb7: mov ebp, eax */ r_ebp = r_eax;
    /* 004ceeb9: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004ceebb: mov ecx, esi */ r_ecx = r_esi;
    /* 004ceebd: call dword ptr [edx + 0xac] */ { u32 t = R32((u32)(r_edx+0xacu)); r_esp -= 4; W32(r_esp, 0x4ceec3u); call_ind(t); }
    /* 004ceec3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004ceec5: mov ecx, esi */ r_ecx = r_esi;
    /* 004ceec7: call dword ptr [edx + 0xb0] */ { u32 t = R32((u32)(r_edx+0xb0u)); r_esp -= 4; W32(r_esp, 0x4ceecdu); call_ind(t); }
    /* 004ceecd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ceecf: jne 0x4cefc5 */ if (!fZ) goto L_004cefc5;
L_004ceed5:; BB(0x004ceed5);
    /* 004ceed5: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 004ceedc: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ceedf: je 0x4cf073 */ if (fZ) goto L_004cf073;
L_004ceee5:; BB(0x004ceee5);
    /* 004ceee5: cmp edx, 0x17 */ {  u32 a = r_edx; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ceee8: je 0x4cf073 */ if (fZ) goto L_004cf073;
L_004ceeee:; BB(0x004ceeee);
    /* 004ceeee: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 004ceef1: and edi, 0xfffff7ff */ {  u32 a = r_edi; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004ceef7: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
L_004ceefa:; BB(0x004ceefa);
    /* 004ceefa: mov edi, dword ptr [esi + 0x75c] */ r_edi = R32((u32)(r_esi+0x75cu));
    /* 004cef00: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cef02: je 0x4cef7e */ if (fZ) goto L_004cef7e;
L_004cef04:; BB(0x004cef04);
    /* 004cef04: movzx edi, word ptr [esi + 0x760] */ r_edi = (u32)R16((u32)(r_esi+0x760u));
    /* 004cef0b: cmp edi, dword ptr [0xa9c4f4] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cef11: jne 0x4cef57 */ if (!fZ) goto L_004cef57;
L_004cef13:; BB(0x004cef13);
    /* 004cef13: mov edx, dword ptr [0xa485f4] */ r_edx = R32((u32)(0xa485f4u));
    /* 004cef19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cef1b: jne 0x4cef26 */ if (!fZ) goto L_004cef26;
L_004cef1d:; BB(0x004cef1d);
    /* 004cef1d: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef1f: call 0x4cc7f4 */ r_esp -= 4; W32(r_esp, 0x4cef24u); f_004cc7f4();
    /* 004cef24: jmp 0x4cef2d */ goto L_004cef2d;
L_004cef26:; BB(0x004cef26);
    /* 004cef26: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef28: call 0x4cc644 */ r_esp -= 4; W32(r_esp, 0x4cef2du); f_004cc644();
L_004cef2d:; BB(0x004cef2d);
    /* 004cef2d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cef2f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cef31: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 004cef38: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cef3b: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cef41u); call_ind(t); }
    /* 004cef41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cef43: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cef45: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 004cef4c: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cef4f: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cef55u); call_ind(t); }
    /* 004cef55: jmp 0x4cefc5 */ goto L_004cefc5;
L_004cef57:; BB(0x004cef57);
    /* 004cef57: mov edi, dword ptr [0xa485f4] */ r_edi = R32((u32)(0xa485f4u));
    /* 004cef5d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cef5f: jne 0x4cef6f */ if (!fZ) goto L_004cef6f;
L_004cef61:; BB(0x004cef61);
    /* 004cef61: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef63: call 0x4cc7f4 */ r_esp -= 4; W32(r_esp, 0x4cef68u); f_004cc7f4();
    /* 004cef68: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
L_004cef6f:; BB(0x004cef6f);
    /* 004cef6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cef71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cef72: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cef74: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef76: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cef7cu); call_ind(t); }
    /* 004cef7c: jmp 0x4cefc5 */ goto L_004cefc5;
L_004cef7e:; BB(0x004cef7e);
    /* 004cef7e: mov edi, dword ptr [esi + 0x3e8] */ r_edi = R32((u32)(r_esi+0x3e8u));
    /* 004cef84: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cef87: je 0x4cf061 */ if (fZ) goto L_004cf061;
L_004cef8d:; BB(0x004cef8d);
    /* 004cef8d: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cef90: je 0x4cf04f */ if (fZ) goto L_004cf04f;
L_004cef96:; BB(0x004cef96);
    /* 004cef96: mov ecx, esi */ r_ecx = r_esi;
    /* 004cef98: call 0x4cc390 */ r_esp -= 4; W32(r_esp, 0x4cef9du); f_004cc390();
L_004cef9d:; BB(0x004cef9d);
    /* 004cef9d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cef9f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cefa1: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 004cefa8: mov ecx, esi */ r_ecx = r_esi;
    /* 004cefaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cefab: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cefb1u); call_ind(t); }
    /* 004cefb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cefb3: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cefb5: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 004cefbc: mov ecx, esi */ r_ecx = r_esi;
    /* 004cefbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cefbf: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cefc5u); call_ind(t); }
L_004cefc5:; BB(0x004cefc5);
    /* 004cefc5: mov ecx, esi */ r_ecx = r_esi;
    /* 004cefc7: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4cefccu); f_0051f604();
    /* 004cefcc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004cefce: mov ecx, esi */ r_ecx = r_esi;
    /* 004cefd0: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x4cefd6u); call_ind(t); }
    /* 004cefd6: mov ecx, esi */ r_ecx = r_esi;
    /* 004cefd8: call 0x4cca28 */ r_esp -= 4; W32(r_esp, 0x4cefddu); f_004cca28();
    /* 004cefdd: mov ecx, esi */ r_ecx = r_esi;
    /* 004cefdf: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x4cefe4u); f_006401f0();
    /* 004cefe4: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 004cefe7: mov edx, 1 */ r_edx = 0x1u;
    /* 004cefec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cefed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cefee: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ceff3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ceff8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ceff9: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4ceffeu); f_0080575c();
    /* 004ceffe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf001: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf003: jne 0x4cf010 */ if (!fZ) goto L_004cf010;
L_004cf005:; BB(0x004cf005);
    /* 004cf005: lea ecx, [esi + 0x3cc] */ r_ecx = (u32)(r_esi+0x3ccu);
    /* 004cf00b: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4cf010u); f_00817574();
L_004cf010:; BB(0x004cf010);
    /* 004cf010: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf015: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004cf01b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf01c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf01d: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4cf022u); f_00520dc0();
    /* 004cf022: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cf025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf026: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf027: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf028: ret  */ FN_RET(0x004cee30); r_esp += 4; return;
L_004cf029:; BB(0x004cf029);
    /* 004cf029: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf02a: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x4cf02fu); f_008113e4();
    /* 004cf02f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004cf033: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf038: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004cf03c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf03d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf03e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf03f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf040: ret  */ FN_RET(0x004cee30); r_esp += 4; return;
L_004cf041:; BB(0x004cf041);
    /* 004cf041: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004cf043: mov ecx, esi */ r_ecx = r_esi;
    /* 004cf045: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x4cf04bu); call_ind(t); }
    /* 004cf04b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf04c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf04d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf04e: ret  */ FN_RET(0x004cee30); r_esp += 4; return;
L_004cf04f:; BB(0x004cf04f);
    /* 004cf04f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf051: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf052: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cf054: mov ecx, esi */ r_ecx = r_esi;
    /* 004cf056: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cf05cu); call_ind(t); }
    /* 004cf05c: jmp 0x4cef9d */ goto L_004cef9d;
L_004cf061:; BB(0x004cf061);
    /* 004cf061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf063: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf064: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004cf066: mov ecx, esi */ r_ecx = r_esi;
    /* 004cf068: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cf06eu); call_ind(t); }
    /* 004cf06e: jmp 0x4cefc5 */ goto L_004cefc5;
L_004cf073:; BB(0x004cf073);
    /* 004cf073: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 004cf076: or edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004cf07c: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 004cf07f: jmp 0x4ceefa */ goto L_004ceefa;
}

