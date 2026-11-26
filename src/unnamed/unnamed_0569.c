#include "protos.h"

void f_005690f8(void) /* sub_5690F8 */
{
    FN_ENTER(0x005690f8);
    /* 005690f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005690f9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005690fc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005690fe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00569102: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569105: je 0x56920c */ if (fZ) goto L_0056920c;
L_0056910b:; BB(0x0056910b);
    /* 0056910b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056910e: je 0x5691d1 */ if (fZ) goto L_005691d1;
L_00569114:; BB(0x00569114);
    /* 00569114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569116: jne 0x5691f9 */ if (!fZ) goto L_005691f9;
L_0056911c:; BB(0x0056911c);
    /* 0056911c: mov eax, dword ptr [0xa73d60] */ r_eax = R32((u32)(0xa73d60u));
    /* 00569121: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 00569127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569129: je 0x56915f */ if (fZ) goto L_0056915f;
L_0056912b:; BB(0x0056912b);
    /* 0056912b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0056912e: mov esi, eax */ r_esi = r_eax;
    /* 00569130: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00569134: mov edi, edx */ r_edi = r_edx;
L_00569136:; BB(0x00569136);
    /* 00569136: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0056913a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056913b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x569140u); f_007b4d18();
    /* 00569140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00569141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569143: je 0x569151 */ if (fZ) goto L_00569151;
L_00569145:; BB(0x00569145);
    /* 00569145: cmp edi, dword ptr [eax + 0x474] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x474u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056914b: je 0x569200 */ if (fZ) goto L_00569200;
L_00569151:; BB(0x00569151);
    /* 00569151: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 00569154: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569156: jne 0x569136 */ if (!fZ) goto L_00569136;
L_00569158:; BB(0x00569158);
    /* 00569158: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0056915b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0056915f:; BB(0x0056915f);
    /* 0056915f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00569161:; BB(0x00569161);
    /* 00569161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569163: je 0x569170 */ if (fZ) goto L_00569170;
L_00569165:; BB(0x00569165);
    /* 00569165: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00569169: mov word ptr [ebp + 0x47c], dx */ W16((u32)(r_ebp+0x47cu), (u16)r_edx);
L_00569170:; BB(0x00569170);
    /* 00569170: mov edx, dword ptr [ebp + 0x46c] */ r_edx = R32((u32)(r_ebp+0x46cu));
    /* 00569176: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569178: jne 0x5691a4 */ if (!fZ) goto L_005691a4;
L_0056917a:; BB(0x0056917a);
    /* 0056917a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056917c: je 0x5691a4 */ if (fZ) goto L_005691a4;
L_0056917e:; BB(0x0056917e);
    /* 0056917e: mov edx, dword ptr [eax + 0x484] */ r_edx = R32((u32)(r_eax+0x484u));
    /* 00569184: mov dword ptr [ebp + 0x490], edx */ W32((u32)(r_ebp+0x490u), r_edx);
    /* 0056918a: mov edx, dword ptr [eax + 0x488] */ r_edx = R32((u32)(r_eax+0x488u));
    /* 00569190: mov dword ptr [ebp + 0x494], edx */ W32((u32)(r_ebp+0x494u), r_edx);
    /* 00569196: mov eax, dword ptr [eax + 0x48c] */ r_eax = R32((u32)(r_eax+0x48cu));
    /* 0056919c: mov dword ptr [ebp + 0x498], eax */ W32((u32)(r_ebp+0x498u), r_eax);
    /* 005691a2: jmp 0x5691c8 */ goto L_005691c8;
L_005691a4:; BB(0x005691a4);
    /* 005691a4: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 005691aa: mov edx, dword ptr [ebp + 0x488] */ r_edx = R32((u32)(r_ebp+0x488u));
    /* 005691b0: mov dword ptr [ebp + 0x490], eax */ W32((u32)(r_ebp+0x490u), r_eax);
    /* 005691b6: mov eax, dword ptr [ebp + 0x48c] */ r_eax = R32((u32)(r_ebp+0x48cu));
    /* 005691bc: mov dword ptr [ebp + 0x494], edx */ W32((u32)(r_ebp+0x494u), r_edx);
    /* 005691c2: mov dword ptr [ebp + 0x498], eax */ W32((u32)(r_ebp+0x498u), r_eax);
L_005691c8:; BB(0x005691c8);
    /* 005691c8: add dword ptr [ebp + 0x524], 1 */ { u32 ad = (u32)(r_ebp+0x524u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005691cf: jmp 0x5691f9 */ goto L_005691f9;
L_005691d1:; BB(0x005691d1);
    /* 005691d1: mov eax, dword ptr [ebp + 0x524] */ r_eax = R32((u32)(r_ebp+0x524u));
    /* 005691d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005691d9: jle 0x5691f9 */ if ((fZ||fS!=fO)) goto L_005691f9;
L_005691db:; BB(0x005691db);
    /* 005691db: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 005691e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005691e3: jg 0x5691f0 */ if ((!fZ&&fS==fO)) goto L_005691f0;
L_005691e5:; BB(0x005691e5);
    /* 005691e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005691e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005691e9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5691eeu); f_0051f62c();
    /* 005691ee: jmp 0x5691f9 */ goto L_005691f9;
L_005691f0:; BB(0x005691f0);
    /* 005691f0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005691f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005691f4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5691f9u); f_0051f62c();
L_005691f9:; BB(0x005691f9);
    /* 005691f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005691fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005691fd: ret 4 */ FN_RET(0x005690f8); r_esp += 8; return;
L_00569200:; BB(0x00569200);
    /* 00569200: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00569203: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00569207: jmp 0x569161 */ goto L_00569161;
L_0056920c:; BB(0x0056920c);
    /* 0056920c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056920e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056920f: mov dword ptr [ebp + 0x524], eax */ W32((u32)(r_ebp+0x524u), r_eax);
    /* 00569215: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569217: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x56921cu); f_0051f664();
    /* 0056921c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056921f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569221: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x569227u); call_ind(t); }
    /* 00569227: mov eax, dword ptr [ebp + 0x4b4] */ r_eax = R32((u32)(r_ebp+0x4b4u));
    /* 0056922d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00569230: mov dword ptr [ebp + 0x4b4], eax */ W32((u32)(r_ebp+0x4b4u), r_eax);
    /* 00569236: jmp 0x5691f9 */ goto L_005691f9;
}

void f_005691bf(void)
{
    FN_ENTER(0x005691bf);
    /* 005691bf: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005691c1: add byte ptr [ecx + 0x49885], cl */ { u32 ad = (u32)(r_ecx+0x49885u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005691c7: add byte ptr [ebx + 0x52485], al */ { u32 ad = (u32)(r_ebx+0x52485u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005691cd: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005691cf: jmp 0x5691f9 */ goto L_005691f9;
L_005691f9:; BB(0x005691f9);
    /* 005691f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005691fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005691fd: ret 4 */ FN_RET(0x005691bf); r_esp += 8; return;
}

void f_00569238(void) /* sub_569238 */
{
    FN_ENTER(0x00569238);
    /* 00569238: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569239: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056923b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056923d: call 0x56925c */ r_esp -= 4; W32(r_esp, 0x569242u); f_0056925c();
    /* 00569242: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00569246: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00569248: jne 0x56924e */ if (!fZ) goto L_0056924e;
L_0056924a:; BB(0x0056924a);
    /* 0056924a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056924b: ret 4 */ FN_RET(0x00569238); r_esp += 8; return;
L_0056924e:; BB(0x0056924e);
    /* 0056924e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056924f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x569254u); f_005c2f74();
    /* 00569254: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00569255: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569256: ret 4 */ FN_RET(0x00569238); r_esp += 8; return;
}

void f_0056925c(void) /* sub_56925C */
{
    FN_ENTER(0x0056925c);
    /* 0056925c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056925d: mov ebp, esp */ r_ebp = r_esp;
    /* 0056925f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00569261: push 0x8d6992 */ { u32 v = 0x8d6992u; r_esp -= 4; W32(r_esp, v); }
    /* 00569266: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056926c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056926d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00569274: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569277: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056927a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056927d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00569280: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00569283: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00569286: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056928d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00569290: mov dword ptr [ecx], 0xb05a20 */ W32((u32)(r_ecx), 0xb05a20u);
    /* 00569296: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x56929bu); f_007b9c8c();
    /* 0056929b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005692a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005692a5: add ecx, 0x420 */ {  u32 a = r_ecx; u32 b = 0x420u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005692ab: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x5692b0u); f_005770ec();
    /* 005692b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005692b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005692ba: add ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005692c0: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5692c5u); f_005769f8();
    /* 005692c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005692c8: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x5692cdu); f_0052bf84();
    /* 005692cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005692d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005692d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005692d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005692da: ret  */ FN_RET(0x0056925c); r_esp += 4; return;
}

void f_005692dc(void) /* sub_5692DC */
{
    FN_ENTER(0x005692dc);
    /* 005692dc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005692e3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005692e6: jl 0x56930d */ if ((fS!=fO)) goto L_0056930d;
L_005692e8:; BB(0x005692e8);
    /* 005692e8: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005692eb: jle 0x5692f2 */ if ((fZ||fS!=fO)) goto L_005692f2;
L_005692ed:; BB(0x005692ed);
    /* 005692ed: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005692f0: jne 0x56930d */ if (!fZ) goto L_0056930d;
L_005692f2:; BB(0x005692f2);
    /* 005692f2: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 005692f9: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005692fc: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 00569303: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00569309: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0056930c: ret  */ FN_RET(0x005692dc); r_esp += 4; return;
L_0056930d:; BB(0x0056930d);
    /* 0056930d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569310: je 0x56931c */ if (fZ) goto L_0056931c;
L_00569312:; BB(0x00569312);
    /* 00569312: mov dword ptr [ecx + 0x37c], 4 */ W32((u32)(r_ecx+0x37cu), 0x4u);
L_0056931c:; BB(0x0056931c);
    /* 0056931c: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00569322: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00569328: mov dword ptr [ecx + 0x380], 4 */ W32((u32)(r_ecx+0x380u), 0x4u);
    /* 00569332: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 00569338: or edx, 0x10001 */ {  u32 a = r_edx; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056933e: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00569344: ret  */ FN_RET(0x005692dc); r_esp += 4; return;
}

void f_00569348(void) /* sub_569348 */
{
    FN_ENTER(0x00569348);
    /* 00569348: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056934f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569352: je 0x56935e */ if (fZ) goto L_0056935e;
L_00569354:; BB(0x00569354);
    /* 00569354: mov dword ptr [ecx + 0x37c], 5 */ W32((u32)(r_ecx+0x37cu), 0x5u);
L_0056935e:; BB(0x0056935e);
    /* 0056935e: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00569364: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0056936a: mov dword ptr [ecx + 0x380], 5 */ W32((u32)(r_ecx+0x380u), 0x5u);
    /* 00569374: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0056937a: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056937d: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00569383: ret  */ FN_RET(0x00569348); r_esp += 4; return;
}

void f_00569384(void) /* sub_569384 */
{
    FN_ENTER(0x00569384);
    /* 00569384: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00569385: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569386: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569387: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569388: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056938b: mov edi, ecx */ r_edi = r_ecx;
    /* 0056938d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00569390: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569395: je 0x56939f */ if (fZ) goto L_0056939f;
L_00569397:; BB(0x00569397);
    /* 00569397: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056939a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056939b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056939c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056939d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056939e: ret  */ FN_RET(0x00569384); r_esp += 4; return;
L_0056939f:; BB(0x0056939f);
    /* 0056939f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5693a4u); f_00807ac0();
    /* 005693a4: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005693a7: je 0x5695cc */ if (fZ) goto L_005695cc;
L_005693ad:; BB(0x005693ad);
    /* 005693ad: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005693b2: mov ecx, edi */ r_ecx = r_edi;
    /* 005693b4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005693b6: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005693bb: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005693c0: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5693c3u); call_ind(t); }
    /* 005693c3: mov esi, eax */ r_esi = r_eax;
L_005693c5:; BB(0x005693c5);
    /* 005693c5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005693c7: je 0x56953d */ if (fZ) goto L_0056953d;
L_005693cd:; BB(0x005693cd);
    /* 005693cd: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5693d2u); f_004f7c84();
    /* 005693d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005693d5: je 0x5693ed */ if (fZ) goto L_005693ed;
L_005693d7:; BB(0x005693d7);
    /* 005693d7: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005693dd: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005693e3: je 0x5693ed */ if (fZ) goto L_005693ed;
L_005693e5:; BB(0x005693e5);
    /* 005693e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005693e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005693e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005693ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005693eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005693ec: ret  */ FN_RET(0x00569384); r_esp += 4; return;
L_005693ed:; BB(0x005693ed);
    /* 005693ed: mov ebp, dword ptr [0xaf034c] */ r_ebp = R32((u32)(0xaf034cu));
    /* 005693f3: mov dword ptr [0xaab518], ebp */ W32((u32)(0xaab518u), r_ebp);
    /* 005693f9: lea ebp, [edi + 0x420] */ r_ebp = (u32)(r_edi+0x420u);
    /* 005693ff: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00569405: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569407: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569408: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x56940du); f_0057725c();
    /* 0056940d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056940f: je 0x569439 */ if (fZ) goto L_00569439;
L_00569411:; BB(0x00569411);
    /* 00569411: mov edx, dword ptr [edi + 0x420] */ r_edx = R32((u32)(r_edi+0x420u));
    /* 00569417: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569419: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x56941cu); call_ind(t); }
    /* 0056941c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056941e: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x569423u); f_008173d0();
    /* 00569423: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569425: je 0x569439 */ if (fZ) goto L_00569439;
L_00569427:; BB(0x00569427);
    /* 00569427: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0056942c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00569431: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00569434: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569435: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569436: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569437: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00569438: ret  */ FN_RET(0x00569384); r_esp += 4; return;
L_00569439:; BB(0x00569439);
    /* 00569439: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0056943c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x569441u); f_00829cc8();
    /* 00569441: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00569442: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x569447u); f_00794548();
    /* 00569447: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00569448: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x56944du); f_00578b38();
    /* 0056944d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00569452: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x569457u); f_0082d7b0();
    /* 00569457: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0056945a: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0056945d: fadd dword ptr [edi + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f0u));
    /* 00569463: fadd dword ptr [edi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f4u));
    /* 00569469: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056946c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00569470: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00569473: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00569476: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00569478: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0056947c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x569481u); f_00830b74();
    /* 00569481: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00569484: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00569486: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56948bu); f_0082d8bc();
    /* 0056948b: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00569491: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00569497: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0056949d: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5694a2u); f_004f7c84();
    /* 005694a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005694a5: je 0x5695be */ if (fZ) goto L_005695be;
L_005694ab:; BB(0x005694ab);
    /* 005694ab: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005694b1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005694b4: jne 0x56955b */ if (!fZ) goto L_0056955b;
L_005694ba:; BB(0x005694ba);
    /* 005694ba: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005694bd: je 0x569545 */ if (fZ) goto L_00569545;
L_005694c3:; BB(0x005694c3);
    /* 005694c3: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5694c8u); f_0082fa9c();
    /* 005694c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005694ca: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5694cfu); f_007aa7b8();
    /* 005694cf: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5694d4u); f_0082faac();
L_005694d4:; BB(0x005694d4);
    /* 005694d4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5694d9u); f_0082da80();
    /* 005694d9: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5694deu); f_00794750();
    /* 005694de: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5694e3u); f_0082dab0();
    /* 005694e3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005694e6: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005694eb: jne 0x569528 */ if (!fZ) goto L_00569528;
L_005694ed:; BB(0x005694ed);
    /* 005694ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005694ef: je 0x569528 */ if (fZ) goto L_00569528;
L_005694f1:; BB(0x005694f1);
    /* 005694f1: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005694f5: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 005694f8: fmul dword ptr [0x926380] */ ST(0) = ST(0) * R_F32((u32)(0x926380u));
    /* 005694fe: fld dword ptr [edi + 0x3f4] */ FPUSH(R_F32((u32)(r_edi+0x3f4u)));
    /* 00569504: fmul dword ptr [0x926384] */ ST(0) = ST(0) * R_F32((u32)(0x926384u));
    /* 0056950a: fadd dword ptr [0x926388] */ ST(0) = ST(0) + R_F32((u32)(0x926388u));
    /* 00569510: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00569512: mov ecx, edi */ r_ecx = r_edi;
    /* 00569514: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00569518: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0056951c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00569520: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569523: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x569528u); f_00779d4c();
L_00569528:; BB(0x00569528);
    /* 00569528: mov eax, dword ptr [edi + 0x420] */ r_eax = R32((u32)(r_edi+0x420u));
    /* 0056952e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569530: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x569533u); call_ind(t); }
    /* 00569533: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00569538: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0056953d:; BB(0x0056953d);
    /* 0056953d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00569540: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569542: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569543: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00569544: ret  */ FN_RET(0x00569384); r_esp += 4; return;
L_00569545:; BB(0x00569545);
    /* 00569545: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x56954au); f_0082fa9c();
    /* 0056954a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056954c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x569551u); f_007aa668();
    /* 00569551: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x569556u); f_0082faac();
    /* 00569556: jmp 0x5694d4 */ goto L_005694d4;
L_0056955b:; BB(0x0056955b);
    /* 0056955b: mov edx, dword ptr [edi + 0x404] */ r_edx = R32((u32)(r_edi+0x404u));
    /* 00569561: lea ecx, [edi + 0x404] */ r_ecx = (u32)(r_edi+0x404u);
    /* 00569567: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0056956a: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x56956du); call_ind(t); }
    /* 0056956d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056956f: jne 0x569578 */ if (!fZ) goto L_00569578;
L_00569571:; BB(0x00569571);
    /* 00569571: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00569573: jmp 0x5694d4 */ goto L_005694d4;
L_00569578:; BB(0x00569578);
    /* 00569578: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0056957b: mov edx, dword ptr [edi + 0x404] */ r_edx = R32((u32)(r_edi+0x404u));
    /* 00569581: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x569584u); call_ind(t); }
    /* 00569584: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569587: je 0x5695ab */ if (fZ) goto L_005695ab;
L_00569589:; BB(0x00569589);
    /* 00569589: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x56958eu); f_0082fa9c();
    /* 0056958e: mov ecx, edi */ r_ecx = r_edi;
    /* 00569590: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x569595u); f_007aa7b8();
    /* 00569595: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x56959au); f_0082faac();
L_0056959a:; BB(0x0056959a);
    /* 0056959a: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0056959d: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 005695a3: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5695a6u); call_ind(t); }
    /* 005695a6: jmp 0x5694d4 */ goto L_005694d4;
L_005695ab:; BB(0x005695ab);
    /* 005695ab: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5695b0u); f_0082fa9c();
    /* 005695b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005695b2: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5695b7u); f_007aa668();
    /* 005695b7: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5695bcu); f_0082faac();
    /* 005695bc: jmp 0x56959a */ goto L_0056959a;
L_005695be:; BB(0x005695be);
    /* 005695be: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005695c1: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5695c6u); f_0082e1e8();
    /* 005695c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005695c7: jmp 0x5694d4 */ goto L_005694d4;
L_005695cc:; BB(0x005695cc);
    /* 005695cc: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005695d1: mov ecx, edi */ r_ecx = r_edi;
    /* 005695d3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005695d5: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005695da: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005695df: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5695e2u); call_ind(t); }
    /* 005695e2: mov esi, eax */ r_esi = r_eax;
    /* 005695e4: jmp 0x5693c5 */ goto L_005693c5;
}

void f_005695ec(void) /* sub_5695EC */
{
    FN_ENTER(0x005695ec);
    /* 005695ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005695ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005695ee: mov esi, ecx */ r_esi = r_ecx;
    /* 005695f0: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5695f5u); f_004f7c84();
    /* 005695f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005695f8: je 0x5697ad */ if (fZ) goto L_005697ad;
L_005695fe:; BB(0x005695fe);
    /* 005695fe: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 00569605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569606: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x56960bu); f_00578c74();
    /* 0056960b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056960c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056960d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056960f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x569614u); f_007706b0();
    /* 00569614: mov ecx, esi */ r_ecx = r_esi;
    /* 00569616: call 0x52d00c */ r_esp -= 4; W32(r_esp, 0x56961bu); f_0052d00c();
    /* 0056961b: mov ecx, esi */ r_ecx = r_esi;
    /* 0056961d: call 0x56b9dc */ r_esp -= 4; W32(r_esp, 0x569622u); f_0056b9dc();
    /* 00569622: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00569629: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0056962f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569631: je 0x569666 */ if (fZ) goto L_00569666;
L_00569633:; BB(0x00569633);
    /* 00569633: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00569639: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056963c: je 0x569655 */ if (fZ) goto L_00569655;
L_0056963e:; BB(0x0056963e);
    /* 0056963e: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00569648: mov ecx, esi */ r_ecx = r_esi;
    /* 0056964a: call 0x5697b8 */ r_esp -= 4; W32(r_esp, 0x56964fu); f_005697b8();
    /* 0056964f: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
L_00569655:; BB(0x00569655);
    /* 00569655: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0056965f: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
L_00569666:; BB(0x00569666);
    /* 00569666: mov ecx, esi */ r_ecx = r_esi;
    /* 00569668: call 0x5697b8 */ r_esp -= 4; W32(r_esp, 0x56966du); f_005697b8();
    /* 0056966d: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00569673: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569676: je 0x569780 */ if (fZ) goto L_00569780;
L_0056967c:; BB(0x0056967c);
    /* 0056967c: fld dword ptr [0x92637c] */ FPUSH(R_F32((u32)(0x92637cu)));
    /* 00569682: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00569685: fld dword ptr [0x926378] */ FPUSH(R_F32((u32)(0x926378u)));
    /* 0056968b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0056968e: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00569691: fld dword ptr [esi + 0x3f4] */ FPUSH(R_F32((u32)(r_esi+0x3f4u)));
    /* 00569697: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 0056969d: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0056969f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005696a1: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 005696a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005696a9: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 005696af: mov dword ptr [esi + 0x308], edx */ W32((u32)(r_esi+0x308u), r_edx);
    /* 005696b5: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 005696b8: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005696be: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005696c3: je 0x5696ca */ if (fZ) goto L_005696ca;
L_005696c5:; BB(0x005696c5);
    /* 005696c5: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005696c8: jmp 0x5696e7 */ goto L_005696e7;
L_005696ca:; BB(0x005696ca);
    /* 005696ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005696cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005696cd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5696d2u); f_006946a8();
    /* 005696d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005696d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005696d6: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005696d9: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005696de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005696df: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5696e4u); f_00805608();
    /* 005696e4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005696e7:; BB(0x005696e7);
    /* 005696e7: mov eax, dword ptr [esi + 0x3fc] */ r_eax = R32((u32)(r_esi+0x3fcu));
    /* 005696ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005696ef: jle 0x5696fa */ if ((fZ||fS!=fO)) goto L_005696fa;
L_005696f1:; BB(0x005696f1);
    /* 005696f1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005696f4: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
L_005696fa:; BB(0x005696fa);
    /* 005696fa: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00569700: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00569703: and edx, 0xfffffff9 */ {  u32 a = r_edx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00569706: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00569709: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0056970f: fld dword ptr [esi + 0x3f4] */ FPUSH(R_F32((u32)(r_esi+0x3f4u)));
    /* 00569715: fcomp dword ptr [0x926370] */ fx_compare(ST(0), R_F32((u32)(0x926370u))); FPOP();
    /* 0056971b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056971d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056971e: jbe 0x56972b */ if ((fC||fZ)) goto L_0056972b;
L_00569720:; BB(0x00569720);
    /* 00569720: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00569723: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00569726: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00569729: jmp 0x569734 */ goto L_00569734;
L_0056972b:; BB(0x0056972b);
    /* 0056972b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0056972e: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00569731: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00569734:; BB(0x00569734);
    /* 00569734: lea ecx, [esi + 0x420] */ r_ecx = (u32)(r_esi+0x420u);
    /* 0056973a: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x56973fu); f_005771a4();
    /* 0056973f: lea eax, [esi + 0x44] */ r_eax = (u32)(r_esi+0x44u);
    /* 00569742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569743: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569744: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x569749u); f_0078ea50();
    /* 00569749: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0056974c: fcomp dword ptr [0x926374] */ fx_compare(ST(0), R_F32((u32)(0x926374u))); FPOP();
    /* 00569752: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569754: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569755: jbe 0x56976b */ if ((fC||fZ)) goto L_0056976b;
L_00569757:; BB(0x00569757);
    /* 00569757: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0056975a: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0056975d: mov ebx, dword ptr [esi + 0x4c] */ r_ebx = R32((u32)(r_esi+0x4cu));
    /* 00569760: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00569763: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00569766: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 00569769: jmp 0x569774 */ goto L_00569774;
L_0056976b:; BB(0x0056976b);
    /* 0056976b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0056976e: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00569771: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
L_00569774:; BB(0x00569774);
    /* 00569774: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00569777: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 0056977a: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 0056977d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056977e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056977f: ret  */ FN_RET(0x005695ec); r_esp += 4; return;
L_00569780:; BB(0x00569780);
    /* 00569780: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 0056978a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056978c: call 0x5697b8 */ r_esp -= 4; W32(r_esp, 0x569791u); f_005697b8();
    /* 00569791: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00569797: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 005697a1: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005697a8: jmp 0x56967c */ goto L_0056967c;
L_005697ad:; BB(0x005697ad);
    /* 005697ad: mov ecx, esi */ r_ecx = r_esi;
    /* 005697af: call 0x56bba4 */ r_esp -= 4; W32(r_esp, 0x5697b4u); f_0056bba4();
    /* 005697b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005697b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005697b6: ret  */ FN_RET(0x005695ec); r_esp += 4; return;
}

void f_005697b8(void) /* sub_5697B8 */
{
    FN_ENTER(0x005697b8);
    /* 005697b8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005697bf: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005697c2: ja 0x56981f */ if ((!fC&&!fZ)) goto L_0056981f;
L_005697c4:; BB(0x005697c4);
    /* 005697c4: mov eax, dword ptr [eax*4 + 0x9261b0] */ r_eax = R32((u32)(r_eax*4+0x9261b0u));
    /* 005697cb: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697b8); r_esp += 4; return;
}

void f_005697cd(void)
{
    FN_ENTER(0x005697cd);
    /* 005697cd: call 0x569820 */ r_esp -= 4; W32(r_esp, 0x5697d2u); f_00569820();
    /* 005697d2: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697cd); r_esp += 4; return;
}

void f_005697d4(void)
{
    FN_ENTER(0x005697d4);
    /* 005697d4: call 0x569a64 */ r_esp -= 4; W32(r_esp, 0x5697d9u); f_00569a64();
    /* 005697d9: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697d4); r_esp += 4; return;
}

void f_005697db(void)
{
    FN_ENTER(0x005697db);
    /* 005697db: call 0x56a2cc */ r_esp -= 4; W32(r_esp, 0x5697e0u); f_0056a2cc();
    /* 005697e0: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697db); r_esp += 4; return;
}

void f_005697e2(void)
{
    FN_ENTER(0x005697e2);
    /* 005697e2: call 0x56a3cc */ r_esp -= 4; W32(r_esp, 0x5697e7u); f_0056a3cc();
    /* 005697e7: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697e2); r_esp += 4; return;
}

void f_005697e9(void)
{
    FN_ENTER(0x005697e9);
    /* 005697e9: call 0x56a7a4 */ r_esp -= 4; W32(r_esp, 0x5697eeu); f_0056a7a4();
    /* 005697ee: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697e9); r_esp += 4; return;
}

void f_005697f0(void)
{
    FN_ENTER(0x005697f0);
    /* 005697f0: call 0x56aadc */ r_esp -= 4; W32(r_esp, 0x5697f5u); f_0056aadc();
    /* 005697f5: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697f0); r_esp += 4; return;
}

void f_005697f7(void)
{
    FN_ENTER(0x005697f7);
    /* 005697f7: call 0x56b09c */ r_esp -= 4; W32(r_esp, 0x5697fcu); f_0056b09c();
    /* 005697fc: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697f7); r_esp += 4; return;
}

void f_005697fe(void)
{
    FN_ENTER(0x005697fe);
    /* 005697fe: call 0x56b19c */ r_esp -= 4; W32(r_esp, 0x569803u); f_0056b19c();
    /* 00569803: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x005697fe); r_esp += 4; return;
}

void f_00569805(void)
{
    FN_ENTER(0x00569805);
    /* 00569805: call 0x56b248 */ r_esp -= 4; W32(r_esp, 0x56980au); f_0056b248();
    /* 0056980a: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x00569805); r_esp += 4; return;
}

void f_0056980c(void)
{
    FN_ENTER(0x0056980c);
    /* 0056980c: call 0x52c6ac */ r_esp -= 4; W32(r_esp, 0x569811u); f_0052c6ac();
    /* 00569811: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x0056980c); r_esp += 4; return;
}

void f_00569813(void)
{
    FN_ENTER(0x00569813);
    /* 00569813: call 0x56b4e8 */ r_esp -= 4; W32(r_esp, 0x569818u); f_0056b4e8();
    /* 00569818: jmp 0x56981f */ goto L_0056981f;
L_0056981f:; BB(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x00569813); r_esp += 4; return;
}

void f_0056981a(void)
{
    FN_ENTER(0x0056981a);
    /* 0056981a: call 0x56b7d0 */ r_esp -= 4; W32(r_esp, 0x56981fu); f_0056b7d0();
    /* 0056981f: ret  */ FN_RET(0x0056981a); r_esp += 4; return;
}

void f_0056981f(void)
{
    FN_ENTER(0x0056981f);
    /* 0056981f: ret  */ FN_RET(0x0056981f); r_esp += 4; return;
}

void f_00569820(void) /* sub_569820 */
{
    FN_ENTER(0x00569820);
    /* 00569820: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569821: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569822: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569825: mov esi, ecx */ r_esi = r_ecx;
    /* 00569827: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0056982d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056982f: je 0x569876 */ if (fZ) goto L_00569876;
L_00569831:; BB(0x00569831);
    /* 00569831: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569834: je 0x5698e9 */ if (fZ) goto L_005698e9;
L_0056983a:; BB(0x0056983a);
    /* 0056983a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056983d: jne 0x5699ec */ if (!fZ) goto L_005699ec;
L_00569843:; BB(0x00569843);
    /* 00569843: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00569849: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056984b: jne 0x5699ec */ if (!fZ) goto L_005699ec;
L_00569851:; BB(0x00569851);
    /* 00569851: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00569858: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056985b: je 0x5699ec */ if (fZ) goto L_005699ec;
L_00569861:; BB(0x00569861);
    /* 00569861: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0056986b: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 00569871: jmp 0x5699ec */ goto L_005699ec;
L_00569876:; BB(0x00569876);
    /* 00569876: mov ebx, dword ptr [esi + 0x50] */ r_ebx = R32((u32)(r_esi+0x50u));
    /* 00569879: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 0056987c: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0056987f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569880: mov dword ptr [esi + 0x398], ebx */ W32((u32)(r_esi+0x398u), r_ebx);
    /* 00569886: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569887: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569888: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 0056988e: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 00569894: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569897: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056989a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056989c: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056989f: push dword ptr [esi + 0x3ec] */ { u32 v = R32((u32)(r_esi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005698a5: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5698aau); f_00771f5c();
    /* 005698aa: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005698b0: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005698b3: mov ebx, dword ptr [esi + 0x444] */ r_ebx = R32((u32)(r_esi+0x444u));
    /* 005698b9: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005698be: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 005698c4: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005698ca: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 005698d4: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005698d7: mov dword ptr [esi + 0x3f4], ebx */ W32((u32)(r_esi+0x3f4u), r_ebx);
    /* 005698dd: mov eax, 7 */ r_eax = 0x7u;
    /* 005698e2: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_005698e9:; BB(0x005698e9);
    /* 005698e9: mov ecx, esi */ r_ecx = r_esi;
    /* 005698eb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5698f0u); f_007aa094();
    /* 005698f0: fld dword ptr [0x926360] */ FPUSH(R_F32((u32)(0x926360u)));
    /* 005698f6: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 005698fc: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 005698ff: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00569902: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 00569905: fadd dword ptr [esi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f4u));
    /* 0056990b: fcom dword ptr [0x92636c] */ fx_compare(ST(0), R_F32((u32)(0x92636cu))); 
    /* 00569911: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569913: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569914: ja 0x56997b */ if ((!fC&&!fZ)) goto L_0056997b;
L_00569916:; BB(0x00569916);
    /* 00569916: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569918: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0056991b: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00569921: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569923: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 00569929: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 00569930: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00569936: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00569939: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0056993b: mov dword ptr [esi + 0x310], ebx */ W32((u32)(r_esi+0x310u), r_ebx);
    /* 00569941: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569944: je 0x569976 */ if (fZ) goto L_00569976;
L_00569946:; BB(0x00569946);
    /* 00569946: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00569950: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x569955u); f_00807ac0();
    /* 00569955: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569958: je 0x5699fd */ if (fZ) goto L_005699fd;
L_0056995e:; BB(0x0056995e);
    /* 0056995e: mov edx, 0x252 */ r_edx = 0x252u;
L_00569963:; BB(0x00569963);
    /* 00569963: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00569966: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056996a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056996b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056996c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x569971u); f_00814298();
    /* 00569971: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569974: jmp 0x5699c5 */ goto L_005699c5;
L_00569976:; BB(0x00569976);
    /* 00569976: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00569979: jmp 0x5699c5 */ goto L_005699c5;
L_0056997b:; BB(0x0056997b);
    /* 0056997b: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 00569982: fst dword ptr [esi + 0x3f4] */ W_F32((u32)(r_esi+0x3f4u), ST(0));
    /* 00569988: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056998b: je 0x569a26 */ if (fZ) goto L_00569a26;
L_00569991:; BB(0x00569991);
    /* 00569991: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569993: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00569999: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0056999c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005699a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005699a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005699a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005699ad: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005699b1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005699b4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005699b8: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005699bb: je 0x569a07 */ if (fZ) goto L_00569a07;
L_005699bd:; BB(0x005699bd);
    /* 005699bd: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005699c0: je 0x569a07 */ if (fZ) goto L_00569a07;
L_005699c2:; BB(0x005699c2);
    /* 005699c2: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
L_005699c5:; BB(0x005699c5);
    /* 005699c5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5699cau); f_00807ac0();
    /* 005699ca: push 0x226 */ { u32 v = 0x226u; r_esp -= 4; W32(r_esp, v); }
    /* 005699cf: mov ecx, esi */ r_ecx = r_esi;
    /* 005699d1: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5699d6u); f_007879b8();
    /* 005699d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005699d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005699d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005699da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005699db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005699dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005699dd: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5699e2u); f_008144b0();
    /* 005699e2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005699e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005699e7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5699ecu); f_007b6880();
L_005699ec:; BB(0x005699ec);
    /* 005699ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005699ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005699f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005699f2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5699f7u); f_00772b44();
    /* 005699f7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005699fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005699fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005699fc: ret  */ FN_RET(0x00569820); r_esp += 4; return;
L_005699fd:; BB(0x005699fd);
    /* 005699fd: mov edx, 0x2a0 */ r_edx = 0x2a0u;
    /* 00569a02: jmp 0x569963 */ goto L_00569963;
L_00569a07:; BB(0x00569a07);
    /* 00569a07: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00569a0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569a0b: mov ecx, esi */ r_ecx = r_esi;
    /* 00569a0d: call 0x56a2a0 */ r_esp -= 4; W32(r_esp, 0x569a12u); f_0056a2a0();
    /* 00569a12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569a14: je 0x5699c5 */ if (fZ) goto L_005699c5;
L_00569a16:; BB(0x00569a16);
    /* 00569a16: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569a1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569a1c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x569a21u); f_0050b510();
    /* 00569a21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569a24: jmp 0x5699c5 */ goto L_005699c5;
L_00569a26:; BB(0x00569a26);
    /* 00569a26: fld dword ptr [0x926364] */ FPUSH(R_F32((u32)(0x926364u)));
    /* 00569a2c: fdiv dword ptr [esi + 0xcc] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xccu));
    /* 00569a32: fadd dword ptr [0x92635c] */ ST(0) = ST(0) + R_F32((u32)(0x92635cu));
    /* 00569a38: fmul dword ptr [0x926368] */ ST(0) = ST(0) * R_F32((u32)(0x926368u));
    /* 00569a3e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00569a40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569a42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569a43: jb 0x569a59 */ if (fC) goto L_00569a59;
L_00569a45:; BB(0x00569a45);
    /* 00569a45: mov eax, 8 */ r_eax = 0x8u;
    /* 00569a4a: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00569a51: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00569a54: jmp 0x5699c5 */ goto L_005699c5;
L_00569a59:; BB(0x00569a59);
    /* 00569a59: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00569a5c: jmp 0x5699c5 */ goto L_005699c5;
}

void f_00569a64(void) /* sub_569A64 */
{
    FN_ENTER(0x00569a64);
    /* 00569a64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00569a65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569a66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569a67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569a68: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569a6b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00569a6d: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00569a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569a75: je 0x56a25a */ if (fZ) goto L_0056a25a;
L_00569a7b:; BB(0x00569a7b);
    /* 00569a7b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569a7e: je 0x569fa2 */ if (fZ) goto L_00569fa2;
L_00569a84:; BB(0x00569a84);
    /* 00569a84: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569a87: je 0x569e83 */ if (fZ) goto L_00569e83;
L_00569a8d:; BB(0x00569a8d);
    /* 00569a8d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569a90: je 0x569c93 */ if (fZ) goto L_00569c93;
L_00569a96:; BB(0x00569a96);
    /* 00569a96: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569a99: jne 0x569c3d */ if (!fZ) goto L_00569c3d;
L_00569a9f:; BB(0x00569a9f);
    /* 00569a9f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00569aa2: mov ebx, dword ptr [ebp + 0xa4] */ r_ebx = R32((u32)(r_ebp+0xa4u));
    /* 00569aa8: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00569aad: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00569ab0: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 00569ab3: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00569ab6: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 00569ab9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569abb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x569ac0u); f_007aa094();
    /* 00569ac0: fld dword ptr [0x926360] */ FPUSH(R_F32((u32)(0x926360u)));
    /* 00569ac6: fadd dword ptr [ebp + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f4u));
    /* 00569acc: fcom dword ptr [0x926358] */ fx_compare(ST(0), R_F32((u32)(0x926358u))); 
    /* 00569ad2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569ad4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569ad5: ja 0x569ba0 */ if ((!fC&&!fZ)) goto L_00569ba0;
L_00569adb:; BB(0x00569adb);
    /* 00569adb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569add: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00569ae0: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00569ae6: movsx esi, word ptr [ebp + 0xb8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00569aed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569aef: mov dword ptr [ebp + 0x3f4], eax */ W32((u32)(r_ebp+0x3f4u), r_eax);
    /* 00569af5: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00569afb: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00569afe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00569b00: mov dword ptr [ebp + 0x310], ebx */ W32((u32)(r_ebp+0x310u), r_ebx);
    /* 00569b06: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569b09: je 0x569dc8 */ if (fZ) goto L_00569dc8;
L_00569b0f:; BB(0x00569b0f);
    /* 00569b0f: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00569b15: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569b1a: jne 0x569b72 */ if (!fZ) goto L_00569b72;
L_00569b1c:; BB(0x00569b1c);
    /* 00569b1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569b1e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x569b23u); f_007751b0();
    /* 00569b23: fcomp dword ptr [ebp + 0x448] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x448u))); FPOP();
    /* 00569b29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569b2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569b2c: ja 0x569b6c */ if ((!fC&&!fZ)) goto L_00569b6c;
L_00569b2e:; BB(0x00569b2e);
    /* 00569b2e: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00569b34: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00569b36: je 0x569b40 */ if (fZ) goto L_00569b40;
L_00569b38:; BB(0x00569b38);
    /* 00569b38: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569b3b: jmp 0x569bf5 */ goto L_00569bf5;
L_00569b40:; BB(0x00569b40);
    /* 00569b40: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00569b47: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569b4a: je 0x569b64 */ if (fZ) goto L_00569b64;
L_00569b4c:; BB(0x00569b4c);
    /* 00569b4c: mov dword ptr [ebp + 0x37c], 0xc */ W32((u32)(r_ebp+0x37cu), 0xcu);
    /* 00569b56: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 00569b5c: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569b5f: jmp 0x569bf5 */ goto L_00569bf5;
L_00569b64:; BB(0x00569b64);
    /* 00569b64: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569b67: jmp 0x569bf5 */ goto L_00569bf5;
L_00569b6c:; BB(0x00569b6c);
    /* 00569b6c: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
L_00569b72:; BB(0x00569b72);
    /* 00569b72: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00569b74: je 0x569b7b */ if (fZ) goto L_00569b7b;
L_00569b76:; BB(0x00569b76);
    /* 00569b76: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569b79: jmp 0x569bf5 */ goto L_00569bf5;
L_00569b7b:; BB(0x00569b7b);
    /* 00569b7b: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00569b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569b84: je 0x569b9b */ if (fZ) goto L_00569b9b;
L_00569b86:; BB(0x00569b86);
    /* 00569b86: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 00569b90: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 00569b96: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569b99: jmp 0x569bf5 */ goto L_00569bf5;
L_00569b9b:; BB(0x00569b9b);
    /* 00569b9b: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569b9e: jmp 0x569bf5 */ goto L_00569bf5;
L_00569ba0:; BB(0x00569ba0);
    /* 00569ba0: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00569ba7: fst dword ptr [ebp + 0x3f4] */ W_F32((u32)(r_ebp+0x3f4u), ST(0));
    /* 00569bad: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569bb0: je 0x569df6 */ if (fZ) goto L_00569df6;
L_00569bb6:; BB(0x00569bb6);
    /* 00569bb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569bb8: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00569bbe: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00569bc2: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00569bc7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00569bcc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00569bd0: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00569bd4: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00569bd8: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00569bdc: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00569be0: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569be3: je 0x569dd0 */ if (fZ) goto L_00569dd0;
L_00569be9:; BB(0x00569be9);
    /* 00569be9: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569bec: je 0x569dd0 */ if (fZ) goto L_00569dd0;
L_00569bf2:; BB(0x00569bf2);
    /* 00569bf2: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_00569bf5:; BB(0x00569bf5);
    /* 00569bf5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x569bfau); f_00807ac0();
    /* 00569bfa: push 0x226 */ { u32 v = 0x226u; r_esp -= 4; W32(r_esp, v); }
    /* 00569bff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569c01: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x569c06u); f_007879b8();
    /* 00569c06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00569c08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569c09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569c0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569c0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569c0d: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x569c12u); f_008144b0();
    /* 00569c12: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569c15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569c17: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x569c1cu); f_007b6894();
    /* 00569c1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569c1e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x569c23u); f_007b798c();
    /* 00569c23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569c25: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x569c2au); f_007b7e9c();
    /* 00569c2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569c2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569c2e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569c30: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x569c35u); f_00772b44();
    /* 00569c35: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00569c38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569c3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569c3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00569c3c: ret  */ FN_RET(0x00569a64); r_esp += 4; return;
L_00569c3d:; BB(0x00569c3d);
    /* 00569c3d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569c40: jne 0x569dc0 */ if (!fZ) goto L_00569dc0;
L_00569c46:; BB(0x00569c46);
    /* 00569c46: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00569c4c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569c4f: je 0x569c60 */ if (fZ) goto L_00569c60;
L_00569c51:; BB(0x00569c51);
    /* 00569c51: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569c54: je 0x569c60 */ if (fZ) goto L_00569c60;
L_00569c56:; BB(0x00569c56);
    /* 00569c56: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
L_00569c60:; BB(0x00569c60);
    /* 00569c60: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00569c66: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00569c69: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00569c6c: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00569c6f: mov ebx, dword ptr [ebp + 0x390] */ r_ebx = R32((u32)(r_ebp+0x390u));
    /* 00569c75: and ebx, 0xfffbffff */ {  u32 a = r_ebx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00569c7b: mov dword ptr [ebp + 0x400], 0 */ W32((u32)(r_ebp+0x400u), 0x0u);
    /* 00569c85: mov dword ptr [ebp + 0x390], ebx */ W32((u32)(r_ebp+0x390u), r_ebx);
    /* 00569c8b: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00569c8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569c8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569c90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569c91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00569c92: ret  */ FN_RET(0x00569a64); r_esp += 4; return;
L_00569c93:; BB(0x00569c93);
    /* 00569c93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569c95: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x569c9au); f_007aa094();
    /* 00569c9a: mov eax, dword ptr [0xa73d9c] */ r_eax = R32((u32)(0xa73d9cu));
    /* 00569c9f: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569ca5: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00569cab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569cad: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569cb3: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569cb6: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00569cb9: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569cbc: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00569cbe: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x569cc3u); f_00771f5c();
    /* 00569cc3: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00569cc6: mov ebx, dword ptr [ebp + 0x3c] */ r_ebx = R32((u32)(r_ebp+0x3cu));
    /* 00569cc9: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 00569ccc: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00569ccf: mov dword ptr [ebp + 0x48], ebx */ W32((u32)(r_ebp+0x48u), r_ebx);
    /* 00569cd2: mov dword ptr [ebp + 0x4c], esi */ W32((u32)(r_ebp+0x4cu), r_esi);
    /* 00569cd5: mov dword ptr [ebp + 0x310], 0 */ W32((u32)(r_ebp+0x310u), 0x0u);
    /* 00569cdf: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00569ce2: lea ebx, [ebp + 0x30c] */ r_ebx = (u32)(r_ebp+0x30cu);
    /* 00569ce8: mov ecx, esi */ r_ecx = r_esi;
    /* 00569cea: mov edx, ebx */ r_edx = r_ebx;
    /* 00569cec: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x569cf1u); f_0082ebac();
    /* 00569cf1: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569cf6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569cf7: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 00569cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569cfb: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x569d00u); f_0077fffc();
    /* 00569d00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569d03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d05: je 0x569e31 */ if (fZ) goto L_00569e31;
L_00569d0b:; BB(0x00569d0b);
    /* 00569d0b: fld dword ptr [0x92634c] */ FPUSH(R_F32((u32)(0x92634cu)));
    /* 00569d11: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00569d14: mov edi, dword ptr [ebp + 0x48] */ r_edi = R32((u32)(r_ebp+0x48u));
    /* 00569d17: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00569d1a: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 00569d1d: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 00569d20: mov dword ptr [ebp + 0x384], 4 */ W32((u32)(r_ebp+0x384u), 0x4u);
    /* 00569d2a: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00569d2d: mov dword ptr [ebp + 0x314], 0 */ W32((u32)(r_ebp+0x314u), 0x0u);
    /* 00569d37: mov dword ptr [ebp + 0x30c], 0 */ W32((u32)(r_ebp+0x30cu), 0x0u);
L_00569d41:; BB(0x00569d41);
    /* 00569d41: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00569d42: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00569d45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569d47: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x569d4cu); f_007aaa30();
    /* 00569d4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d4e: je 0x569d6a */ if (fZ) goto L_00569d6a;
L_00569d50:; BB(0x00569d50);
    /* 00569d50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569d51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569d53: call 0x56a2a0 */ r_esp -= 4; W32(r_esp, 0x569d58u); f_0056a2a0();
    /* 00569d58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d5a: je 0x569d6a */ if (fZ) goto L_00569d6a;
L_00569d5c:; BB(0x00569d5c);
    /* 00569d5c: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569d61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569d62: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x569d67u); f_0050b510();
    /* 00569d67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00569d6a:; BB(0x00569d6a);
    /* 00569d6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569d6b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x569d70u); f_007b999c();
    /* 00569d70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00569d71: fld dword ptr [ebp + 0x3f4] */ FPUSH(R_F32((u32)(r_ebp+0x3f4u)));
    /* 00569d77: fcomp dword ptr [0x926348] */ fx_compare(ST(0), R_F32((u32)(0x926348u))); FPOP();
    /* 00569d7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569d7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569d80: jbe 0x569d96 */ if ((fC||fZ)) goto L_00569d96;
L_00569d82:; BB(0x00569d82);
    /* 00569d82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569d83: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 00569d89: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00569d8c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00569d8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569d90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00569d91: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x569d96u); f_00771858();
L_00569d96:; BB(0x00569d96);
    /* 00569d96: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x569d9bu); f_00807ac0();
    /* 00569d9b: push 0x226 */ { u32 v = 0x226u; r_esp -= 4; W32(r_esp, v); }
    /* 00569da0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569da2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x569da7u); f_007879b8();
    /* 00569da7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00569da9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569dab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569dac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569dae: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x569db3u); f_008144b0();
    /* 00569db3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569db8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569db9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569dbb: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x569dc0u); f_007b4c58();
L_00569dc0:; BB(0x00569dc0);
    /* 00569dc0: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00569dc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569dc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569dc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569dc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00569dc7: ret  */ FN_RET(0x00569a64); r_esp += 4; return;
L_00569dc8:; BB(0x00569dc8);
    /* 00569dc8: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569dcb: jmp 0x569bf5 */ goto L_00569bf5;
L_00569dd0:; BB(0x00569dd0);
    /* 00569dd0: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569dd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569dd4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569dd6: call 0x56a2a0 */ r_esp -= 4; W32(r_esp, 0x569ddbu); f_0056a2a0();
    /* 00569ddb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569ddd: je 0x569bf5 */ if (fZ) goto L_00569bf5;
L_00569de3:; BB(0x00569de3);
    /* 00569de3: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569de8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569de9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x569deeu); f_0050b510();
    /* 00569dee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569df1: jmp 0x569bf5 */ goto L_00569bf5;
L_00569df6:; BB(0x00569df6);
    /* 00569df6: fld dword ptr [0x926350] */ FPUSH(R_F32((u32)(0x926350u)));
    /* 00569dfc: fdiv dword ptr [ebp + 0xcc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xccu));
    /* 00569e02: fadd dword ptr [0x92635c] */ ST(0) = ST(0) + R_F32((u32)(0x92635cu));
    /* 00569e08: fmul dword ptr [0x926354] */ ST(0) = ST(0) * R_F32((u32)(0x926354u));
    /* 00569e0e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00569e10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569e12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569e13: jb 0x569e29 */ if (fC) goto L_00569e29;
L_00569e15:; BB(0x00569e15);
    /* 00569e15: mov eax, 8 */ r_eax = 0x8u;
    /* 00569e1a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00569e21: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569e24: jmp 0x569bf5 */ goto L_00569bf5;
L_00569e29:; BB(0x00569e29);
    /* 00569e29: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569e2c: jmp 0x569bf5 */ goto L_00569bf5;
L_00569e31:; BB(0x00569e31);
    /* 00569e31: lea eax, [ebp + 0x398] */ r_eax = (u32)(r_ebp+0x398u);
    /* 00569e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569e38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569e39: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x569e3eu); f_0078ea50();
    /* 00569e3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569e41: fld dword ptr [0x92634c] */ FPUSH(R_F32((u32)(0x92634cu)));
    /* 00569e47: fld dword ptr [ebp + 0x3ec] */ FPUSH(R_F32((u32)(r_ebp+0x3ecu)));
    /* 00569e4d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00569e4f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00569e51: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00569e53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00569e55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569e57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569e59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569e5a: jb 0x569d41 */ if (fC) goto L_00569d41;
L_00569e60:; BB(0x00569e60);
    /* 00569e60: mov dword ptr [ebp + 0x384], 4 */ W32((u32)(r_ebp+0x384u), 0x4u);
    /* 00569e6a: mov dword ptr [ebp + 0x314], 0 */ W32((u32)(r_ebp+0x314u), 0x0u);
    /* 00569e74: mov dword ptr [ebp + 0x30c], 0 */ W32((u32)(r_ebp+0x30cu), 0x0u);
    /* 00569e7e: jmp 0x569d41 */ goto L_00569d41;
L_00569e83:; BB(0x00569e83);
    /* 00569e83: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00569e86: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00569e8b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00569e8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569e90: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x569e95u); f_007aa094();
    /* 00569e95: mov eax, dword ptr [0xa73d9c] */ r_eax = R32((u32)(0xa73d9cu));
    /* 00569e9a: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569ea0: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00569ea6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569ea8: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569eae: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569eb1: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00569eb4: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569eb7: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00569eb9: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x569ebeu); f_00771f5c();
    /* 00569ebe: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00569ec5: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569ec8: je 0x569f88 */ if (fZ) goto L_00569f88;
L_00569ece:; BB(0x00569ece);
    /* 00569ece: fld dword ptr [0x926334] */ FPUSH(R_F32((u32)(0x926334u)));
    /* 00569ed4: fadd dword ptr [ebp + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f4u));
    /* 00569eda: fstp dword ptr [ebp + 0x3f4] */ W_F32((u32)(r_ebp+0x3f4u), ST(0)); FPOP();
L_00569ee0:; BB(0x00569ee0);
    /* 00569ee0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569ee2: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x569ee7u); f_007b6880();
    /* 00569ee7: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00569eee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569ef1: jne 0x569f42 */ if (!fZ) goto L_00569f42;
L_00569ef3:; BB(0x00569ef3);
    /* 00569ef3: fld dword ptr [0x926344] */ FPUSH(R_F32((u32)(0x926344u)));
    /* 00569ef9: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00569eff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00569f01: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569f03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569f04: jb 0x569f39 */ if (fC) goto L_00569f39;
L_00569f06:; BB(0x00569f06);
    /* 00569f06: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 00569f0c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00569f0e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00569f10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569f12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569f13: jae 0x569f34 */ if (!fC) goto L_00569f34;
L_00569f15:; BB(0x00569f15);
    /* 00569f15: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569f18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569f19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569f1b: call 0x56a2a0 */ r_esp -= 4; W32(r_esp, 0x569f20u); f_0056a2a0();
    /* 00569f20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569f22: je 0x569f45 */ if (fZ) goto L_00569f45;
L_00569f24:; BB(0x00569f24);
    /* 00569f24: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569f29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569f2a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x569f2fu); f_0050b510();
    /* 00569f2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569f32: jmp 0x569f45 */ goto L_00569f45;
L_00569f34:; BB(0x00569f34);
    /* 00569f34: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569f37: jmp 0x569f45 */ goto L_00569f45;
L_00569f39:; BB(0x00569f39);
    /* 00569f39: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00569f3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569f3d: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00569f40: jmp 0x569f45 */ goto L_00569f45;
L_00569f42:; BB(0x00569f42);
    /* 00569f42: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_00569f45:; BB(0x00569f45);
    /* 00569f45: fld dword ptr [ebp + 0x3f4] */ FPUSH(R_F32((u32)(r_ebp+0x3f4u)));
    /* 00569f4b: fcomp dword ptr [0x926330] */ fx_compare(ST(0), R_F32((u32)(0x926330u))); FPOP();
    /* 00569f51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569f53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569f54: jb 0x569f60 */ if (fC) goto L_00569f60;
L_00569f56:; BB(0x00569f56);
    /* 00569f56: mov dword ptr [ebp + 0x384], 3 */ W32((u32)(r_ebp+0x384u), 0x3u);
L_00569f60:; BB(0x00569f60);
    /* 00569f60: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x569f65u); f_00807ac0();
    /* 00569f65: push 0x226 */ { u32 v = 0x226u; r_esp -= 4; W32(r_esp, v); }
    /* 00569f6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569f6c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x569f71u); f_007879b8();
    /* 00569f71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00569f73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569f74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569f75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00569f76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569f77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569f78: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x569f7du); f_008144b0();
    /* 00569f7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569f80: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00569f83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00569f84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569f85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569f86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00569f87: ret  */ FN_RET(0x00569a64); r_esp += 4; return;
L_00569f88:; BB(0x00569f88);
    /* 00569f88: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00569f8e: fcomp dword ptr [0x926344] */ fx_compare(ST(0), R_F32((u32)(0x926344u))); FPOP();
    /* 00569f94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00569f96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00569f97: jb 0x569ee0 */ if (fC) goto L_00569ee0;
L_00569f9d:; BB(0x00569f9d);
    /* 00569f9d: jmp 0x569ece */ goto L_00569ece;
L_00569fa2:; BB(0x00569fa2);
    /* 00569fa2: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00569fa5: mov ebx, dword ptr [ebp + 0x358] */ r_ebx = R32((u32)(r_ebp+0x358u));
    /* 00569fab: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00569fb1: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00569fb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569fb6: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569fb9: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00569fbe: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00569fc3: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00569fc9: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x569fceu); f_00772054();
    /* 00569fce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00569fd0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569fd2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x569fd7u); f_007aa094();
    /* 00569fd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569fd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569fdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569fdd: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x569fe2u); f_00772b44();
    /* 00569fe2: mov eax, dword ptr [ebp + 0x45c] */ r_eax = R32((u32)(r_ebp+0x45cu));
    /* 00569fe8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00569feb: mov dword ptr [ebp + 0x45c], eax */ W32((u32)(r_ebp+0x45cu), r_eax);
    /* 00569ff1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00569ff3: jle 0x56a012 */ if ((fZ||fS!=fO)) goto L_0056a012;
L_00569ff5:; BB(0x00569ff5);
    /* 00569ff5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569ff7: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x569ffcu); f_007b6894();
    /* 00569ffc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00569ffe: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x56a003u); f_007b798c();
    /* 0056a003: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a005: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x56a00au); f_007b7e9c();
    /* 0056a00a: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056a00d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a00e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a00f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056a010: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056a011: ret  */ FN_RET(0x00569a64); r_esp += 4; return;
L_0056a012:; BB(0x0056a012);
    /* 0056a012: mov dword ptr [ebp + 0x384], 2 */ W32((u32)(r_ebp+0x384u), 0x2u);
    /* 0056a01c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56a021u); f_00807ac0();
    /* 0056a021: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a026: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a028: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56a02du); f_007879b8();
    /* 0056a02d: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0056a030: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056a032: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a035: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a036: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56a03bu); f_00814298();
    /* 0056a03b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a03e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0056a041: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056a046: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0056a04c: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056a051: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0056a054: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a056: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a058: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x56a05du); f_0052ccd8();
    /* 0056a05d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a05f: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56a064u); f_00770738();
    /* 0056a064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a066: je 0x56a221 */ if (fZ) goto L_0056a221;
L_0056a06c:; BB(0x0056a06c);
    /* 0056a06c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0056a06f: mov ebx, dword ptr [ebp + 0x38] */ r_ebx = R32((u32)(r_ebp+0x38u));
    /* 0056a072: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 0056a075: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0056a078: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 0056a07b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0056a07f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0056a083: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a086: mov edx, eax */ r_edx = r_eax;
    /* 0056a088: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56a08du); f_0082f9c4();
    /* 0056a08d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056a090: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056a094: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0056a096: fmul qword ptr [0x926258] */ ST(0) = ST(0) * R_F64((u32)(0x926258u));
    /* 0056a09c: fdiv qword ptr [0x926250] */ ST(0) = ST(0) / R_F64((u32)(0x926250u));
    /* 0056a0a2: fld dword ptr [0x926358] */ FPUSH(R_F32((u32)(0x926358u)));
    /* 0056a0a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056a0aa: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0056a0ae: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0056a0b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056a0b8: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0056a0bc: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0056a0c0: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056a0c4: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0056a0c8: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0056a0cc: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0056a0d0: mov ebx, esi */ r_ebx = r_esi;
    /* 0056a0d2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056a0d7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56a0dcu); f_0082d990();
    /* 0056a0dc: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0056a0e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a0e6: mov edx, esi */ r_edx = r_esi;
    /* 0056a0e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0056a0f0: mov dword ptr [esp + 0xc], 0x43480000 */ W32((u32)(r_esp+0xcu), 0x43480000u);
    /* 0056a0f8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56a0fdu); f_0082d8bc();
    /* 0056a0fd: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 0056a101: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0056a105: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056a107: lea edx, [ebp + 0x398] */ r_edx = (u32)(r_ebp+0x398u);
    /* 0056a10d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0056a111: mov edi, edx */ r_edi = r_edx;
    /* 0056a113: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0056a119: mov ebp, esi */ r_ebp = r_esi;
    /* 0056a11b: mov esi, eax */ r_esi = r_eax;
    /* 0056a11d: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
L_0056a121:; BB(0x0056a121);
    /* 0056a121: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a122: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0056a126: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a128: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x56a12du); f_00830aa0();
    /* 0056a12d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0056a131: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a133: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x56a138u); f_0082ebac();
    /* 0056a138: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a13a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a13b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0056a13f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a140: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x56a145u); f_0077fffc();
    /* 0056a145: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a14a: je 0x56a216 */ if (fZ) goto L_0056a216;
L_0056a150:; BB(0x0056a150);
    /* 0056a150: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a153: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0056a157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a158: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x56a15du); f_0078ea6c();
    /* 0056a15d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a160: fadd dword ptr [0x926338] */ ST(0) = ST(0) + R_F32((u32)(0x926338u));
    /* 0056a166: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0056a16a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0056a16c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a16e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a16f: jae 0x56a177 */ if (!fC) goto L_0056a177;
L_0056a171:; BB(0x0056a171);
    /* 0056a171: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0056a175: mov ebx, ebp */ r_ebx = r_ebp;
L_0056a177:; BB(0x0056a177);
    /* 0056a177: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056a179: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a17b: mov edx, 0x5555 */ r_edx = 0x5555u;
    /* 0056a180: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56a185u); f_0082d8bc();
    /* 0056a185: add ebp, 0x5555 */ {  u32 a = r_ebp; u32 b = 0x5555u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056a18b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056a18e: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a191: jl 0x56a121 */ if ((fS!=fO)) goto L_0056a121;
L_0056a193:; BB(0x0056a193);
    /* 0056a193: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0056a197: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56a19cu); f_0082da80();
    /* 0056a19c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056a1a1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56a1a6u); f_0082d990();
    /* 0056a1a6: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0056a1aa: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0056a1ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a1b0: mov edx, ebx */ r_edx = r_ebx;
    /* 0056a1b2: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0056a1ba: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0056a1c2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56a1c7u); f_0082d8bc();
    /* 0056a1c7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0056a1cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a1cc: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0056a1d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a1d2: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x56a1d7u); f_00830aa0();
    /* 0056a1d7: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0056a1db: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0056a1df: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x56a1e4u); f_0082ebac();
    /* 0056a1e4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56a1e9u); f_0082da80();
L_0056a1e9:; BB(0x0056a1e9);
    /* 0056a1e9: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a1ef: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a1f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a1f7: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a1fd: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a200: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a203: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a206: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a20c: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x56a211u); f_00771f5c();
    /* 0056a211: jmp 0x569ff5 */ goto L_00569ff5;
L_0056a216:; BB(0x0056a216);
    /* 0056a216: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0056a21a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56a21fu); f_0082da80();
    /* 0056a21f: jmp 0x56a1e9 */ goto L_0056a1e9;
L_0056a221:; BB(0x0056a221);
    /* 0056a221: mov ebx, dword ptr [ebp + 0x50] */ r_ebx = R32((u32)(r_ebp+0x50u));
    /* 0056a224: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 0056a227: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 0056a22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a22b: mov dword ptr [ebp + 0x398], ebx */ W32((u32)(r_ebp+0x398u), r_ebx);
    /* 0056a231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a232: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a233: mov dword ptr [ebp + 0x39c], edx */ W32((u32)(r_ebp+0x39cu), r_edx);
    /* 0056a239: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0056a23f: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a242: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a245: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a247: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a24a: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a250: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x56a255u); f_00771f5c();
    /* 0056a255: jmp 0x569ff5 */ goto L_00569ff5;
L_0056a25a:; BB(0x0056a25a);
    /* 0056a25a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0056a25d: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
    /* 0056a267: mov eax, 1 */ r_eax = 0x1u;
    /* 0056a26c: mov dword ptr [ebp + 0x384], eax */ W32((u32)(r_ebp+0x384u), r_eax);
    /* 0056a272: mov dword ptr [ebp + 0x45c], 0x3c */ W32((u32)(r_ebp+0x45cu), 0x3cu);
    /* 0056a27c: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056a282: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056a288: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0056a28f: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056a295: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0056a298: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056a29b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a29c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a29d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056a29e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056a29f: ret  */ FN_RET(0x00569a64); r_esp += 4; return;
}

