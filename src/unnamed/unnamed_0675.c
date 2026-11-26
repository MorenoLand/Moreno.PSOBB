#include "protos.h"

void f_00675008(void) /* sub_675008 */
{
    FN_ENTER(0x00675008);
    /* 00675008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675009: mov ebp, esp */ r_ebp = r_esp;
    /* 0067500b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067500d: push 0x8e96e4 */ { u32 v = 0x8e96e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00675012: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675019: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675020: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675023: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675026: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00675029: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067502c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067502f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00675032: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675035: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00675038: call 0x6750e8 */ r_esp -= 4; W32(r_esp, 0x67503du); f_006750e8();
    /* 0067503d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675044: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675047: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 0067504d: mov dword ptr [ebx], 0xb366e0 */ W32((u32)(r_ebx), 0xb366e0u);
    /* 00675053: mov eax, dword ptr [0x9c9924] */ r_eax = R32((u32)(0x9c9924u));
    /* 00675058: mov dword ptr [ebx + 0xe4], 0 */ W32((u32)(r_ebx+0xe4u), 0x0u);
    /* 00675062: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00675065: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00675067: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
    /* 00675071: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675076: mov word ptr [ebx + 0xc8], cx */ W16((u32)(r_ebx+0xc8u), (u16)r_ecx);
    /* 0067507d: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
    /* 00675087: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675089: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 0067508f: mov dword ptr [ebx + 0xf0], ecx */ W32((u32)(r_ebx+0xf0u), r_ecx);
    /* 00675095: mov dword ptr [ebx + 0xf4], ecx */ W32((u32)(r_ebx+0xf4u), r_ecx);
    /* 0067509b: mov dword ptr [ebx + 0xf8], ecx */ W32((u32)(r_ebx+0xf8u), r_ecx);
    /* 006750a1: mov dword ptr [ebx + 0xfc], ecx */ W32((u32)(r_ebx+0xfcu), r_ecx);
    /* 006750a7: mov dword ptr [ebx + 0x100], ecx */ W32((u32)(r_ebx+0x100u), r_ecx);
    /* 006750ad: mov dword ptr [ebx + 0x104], ecx */ W32((u32)(r_ebx+0x104u), r_ecx);
    /* 006750b3: add ebx, 0x108 */ {  u32 a = r_ebx; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006750b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006750ba: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6750bfu); f_0086b688();
    /* 006750bf: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006750c2: call 0x6751a8 */ r_esp -= 4; W32(r_esp, 0x6750c7u); f_006751a8();
    /* 006750c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006750ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006750cd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006750d0: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006750d3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006750d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006750d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006750e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006750e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006750e3: ret 8 */ FN_RET(0x00675008); r_esp += 12; return;
}

void f_006750e8(void) /* sub_6750E8 */
{
    FN_ENTER(0x006750e8);
    /* 006750e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006750e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006750eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006750ed: push 0x8e9700 */ { u32 v = 0x8e9700u; r_esp -= 4; W32(r_esp, v); }
    /* 006750f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006750f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006750f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675100: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675106: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00675109: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0067510c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067510f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675112: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675115: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00675118: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067511b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x675120u); f_006132e4();
    /* 00675120: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675127: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067512a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067512d: mov dword ptr [ecx], 0xb36660 */ W32((u32)(r_ecx), 0xb36660u);
    /* 00675133: mov eax, dword ptr [0x9c9920] */ r_eax = R32((u32)(0x9c9920u));
    /* 00675138: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675139: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067513c: call dword ptr [0xb36674] */ { u32 t = R32((u32)(0xb36674u)); r_esp -= 4; W32(r_esp, 0x675142u); call_ind(t); }
    /* 00675142: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675145: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00675148: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067514a: mov dword ptr [eax + 0xd0], 0x10 */ W32((u32)(r_eax+0xd0u), 0x10u);
    /* 00675154: or ecx, 0x40000000 */ {  u32 a = r_ecx; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067515a: mov word ptr [eax + 0xc8], dx */ W16((u32)(r_eax+0xc8u), (u16)r_edx);
    /* 00675161: mov dword ptr [eax + 0xe0], 0x43fa0000 */ W32((u32)(r_eax+0xe0u), 0x43fa0000u);
    /* 0067516b: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 00675171: mov word ptr [eax + 0xd4], dx */ W16((u32)(r_eax+0xd4u), (u16)r_edx);
    /* 00675178: mov word ptr [eax + 0xd6], dx */ W16((u32)(r_eax+0xd6u), (u16)r_edx);
    /* 0067517f: mov dword ptr [eax + 0x98], 3 */ W32((u32)(r_eax+0x98u), 0x3u);
    /* 00675189: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 0067518f: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 00675195: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00675198: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067519b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006751a2: mov esp, ebp */ r_esp = r_ebp;
    /* 006751a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006751a5: ret 8 */ FN_RET(0x006750e8); r_esp += 12; return;
}

void f_006751a8(void) /* sub_6751A8 */
{
    FN_ENTER(0x006751a8);
    /* 006751a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006751a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006751aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006751ab: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006751af: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006751b1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006751b3: je 0x6751e9 */ if (fZ) goto L_006751e9;
L_006751b5:; BB(0x006751b5);
    /* 006751b5: mov ebp, dword ptr [edi + 0xcc] */ r_ebp = R32((u32)(r_edi+0xccu));
    /* 006751bb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006751bd: jl 0x6751cb */ if ((fS!=fO)) goto L_006751cb;
L_006751bf:; BB(0x006751bf);
    /* 006751bf: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006751c2: jge 0x6751cb */ if ((fS==fO)) goto L_006751cb;
L_006751c4:; BB(0x006751c4);
    /* 006751c4: mov eax, 1 */ r_eax = 0x1u;
    /* 006751c9: jmp 0x6751cd */ goto L_006751cd;
L_006751cb:; BB(0x006751cb);
    /* 006751cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006751cd:; BB(0x006751cd);
    /* 006751cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006751cf: je 0x6751e9 */ if (fZ) goto L_006751e9;
L_006751d1:; BB(0x006751d1);
    /* 006751d1: mov eax, dword ptr [ebp*4 + 0xa8fe80] */ r_eax = R32((u32)(r_ebp*4+0xa8fe80u));
    /* 006751d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006751da: je 0x6751ef */ if (fZ) goto L_006751ef;
L_006751dc:; BB(0x006751dc);
    /* 006751dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006751de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006751e0: jne 0x6751e9 */ if (!fZ) goto L_006751e9;
L_006751e2:; BB(0x006751e2);
    /* 006751e2: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 006751e4: mov ebx, 1 */ r_ebx = 0x1u;
L_006751e9:; BB(0x006751e9);
    /* 006751e9: mov eax, ebx */ r_eax = r_ebx;
    /* 006751eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006751ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006751ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006751ee: ret  */ FN_RET(0x006751a8); r_esp += 4; return;
L_006751ef:; BB(0x006751ef);
    /* 006751ef: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006751f1: jl 0x6751ff */ if ((fS!=fO)) goto L_006751ff;
L_006751f3:; BB(0x006751f3);
    /* 006751f3: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006751f6: jge 0x6751ff */ if ((fS==fO)) goto L_006751ff;
L_006751f8:; BB(0x006751f8);
    /* 006751f8: mov edx, 1 */ r_edx = 0x1u;
    /* 006751fd: jmp 0x675201 */ goto L_00675201;
L_006751ff:; BB(0x006751ff);
    /* 006751ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00675201:; BB(0x00675201);
    /* 00675201: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675203: je 0x67520d */ if (fZ) goto L_0067520d;
L_00675205:; BB(0x00675205);
    /* 00675205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675207: je 0x675218 */ if (fZ) goto L_00675218;
L_00675209:; BB(0x00675209);
    /* 00675209: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067520b: jmp 0x67520f */ goto L_0067520f;
L_0067520d:; BB(0x0067520d);
    /* 0067520d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0067520f:; BB(0x0067520f);
    /* 0067520f: mov dword ptr [ebp*4 + 0xa8fe80], eax */ W32((u32)(r_ebp*4+0xa8fe80u), r_eax);
    /* 00675216: jmp 0x6751dc */ goto L_006751dc;
L_00675218:; BB(0x00675218);
    /* 00675218: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067521a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67521fu); f_008581c5();
    /* 0067521f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675222: je 0x675243 */ if (fZ) goto L_00675243;
L_00675224:; BB(0x00675224);
    /* 00675224: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0067522a: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 0067522d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067522f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00675231: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00675234: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00675237: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0067523a: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 00675241: jmp 0x67520f */ goto L_0067520f;
L_00675243:; BB(0x00675243);
    /* 00675243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675245: jmp 0x67520f */ goto L_0067520f;
}

void f_00675248(void) /* sub_675248 */
{
    FN_ENTER(0x00675248);
    /* 00675248: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0067524d: push dword ptr [ecx + 0xe4] */ { u32 v = R32((u32)(r_ecx+0xe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675254: call 0x674ab4 */ r_esp -= 4; W32(r_esp, 0x675259u); f_00674ab4();
    /* 00675259: ret 4 */ FN_RET(0x00675248); r_esp += 8; return;
}

void f_0067525c(void) /* sub_67525C */
{
    FN_ENTER(0x0067525c);
    /* 0067525c: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 00675262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675264: je 0x675273 */ if (fZ) goto L_00675273;
L_00675266:; BB(0x00675266);
    /* 00675266: push dword ptr [ecx + 0xe4] */ { u32 v = R32((u32)(r_ecx+0xe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067526c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067526e: call 0x674ab4 */ r_esp -= 4; W32(r_esp, 0x675273u); f_00674ab4();
L_00675273:; BB(0x00675273);
    /* 00675273: ret 4 */ FN_RET(0x0067525c); r_esp += 8; return;
}

void f_00675278(void) /* sub_675278 */
{
    FN_ENTER(0x00675278);
    /* 00675278: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067527b: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00675281: mov eax, 1 */ r_eax = 0x1u;
    /* 00675286: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675289: jle 0x6752b5 */ if ((fZ||fS!=fO)) goto L_006752b5;
L_0067528b:; BB(0x0067528b);
    /* 0067528b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0067528f: mov ebx, eax */ r_ebx = r_eax;
    /* 00675291: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00675294: mov esi, ecx */ r_esi = r_ecx;
L_00675296:; BB(0x00675296);
    /* 00675296: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0067529b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067529c: mov ecx, esi */ r_ecx = r_esi;
    /* 0067529e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6752a3u); f_007b52c4();
    /* 006752a3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006752a6: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006752ac: jl 0x675296 */ if ((fS!=fO)) goto L_00675296;
L_006752ae:; BB(0x006752ae);
    /* 006752ae: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006752b2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006752b5:; BB(0x006752b5);
    /* 006752b5: mov eax, 1 */ r_eax = 0x1u;
    /* 006752ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006752bd: ret  */ FN_RET(0x00675278); r_esp += 4; return;
}

void f_006752c0(void) /* sub_6752C0 */
{
    FN_ENTER(0x006752c0);
    /* 006752c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006752c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006752c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006752c5: push 0x8e971c */ { u32 v = 0x8e971cu; r_esp -= 4; W32(r_esp, v); }
    /* 006752ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006752d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006752d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006752d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006752db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006752de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006752e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006752e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006752e7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006752ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006752ed: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006752f0: call 0x6750e8 */ r_esp -= 4; W32(r_esp, 0x6752f5u); f_006750e8();
    /* 006752f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006752fc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006752ff: mov ecx, dword ptr [esi + 0x84] */ r_ecx = R32((u32)(r_esi+0x84u));
    /* 00675305: mov ebx, dword ptr [esi + 0x88] */ r_ebx = R32((u32)(r_esi+0x88u));
    /* 0067530b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067530c: mov edx, 1 */ r_edx = 0x1u;
    /* 00675311: mov dword ptr [esi], 0xb36760 */ W32((u32)(r_esi), 0xb36760u);
    /* 00675317: mov eax, dword ptr [0x9c9928] */ r_eax = R32((u32)(0x9c9928u));
    /* 0067531c: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0067531f: mov word ptr [esi + 0xc8], dx */ W16((u32)(r_esi+0xc8u), (u16)r_edx);
    /* 00675326: mov dword ptr [esi + 0xcc], ecx */ W32((u32)(r_esi+0xccu), r_ecx);
    /* 0067532c: mov dword ptr [esi + 0xe4], ebx */ W32((u32)(r_esi+0xe4u), r_ebx);
    /* 00675332: call 0x675354 */ r_esp -= 4; W32(r_esp, 0x675337u); f_00675354();
    /* 00675337: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675338: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067533b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067533e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00675341: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675344: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067534b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067534d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067534e: ret 8 */ FN_RET(0x006752c0); r_esp += 12; return;
}

void f_00675354(void) /* sub_675354 */
{
    FN_ENTER(0x00675354);
    /* 00675354: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00675355: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00675356: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675357: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675358: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0067535c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067535e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675360: je 0x6753ba */ if (fZ) goto L_006753ba;
L_00675362:; BB(0x00675362);
    /* 00675362: mov esi, dword ptr [edi + 0xcc] */ r_esi = R32((u32)(r_edi+0xccu));
    /* 00675368: mov ebp, dword ptr [edi + 0xe4] */ r_ebp = R32((u32)(r_edi+0xe4u));
    /* 0067536e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00675370: jl 0x67537e */ if ((fS!=fO)) goto L_0067537e;
L_00675372:; BB(0x00675372);
    /* 00675372: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675375: jge 0x67537e */ if ((fS==fO)) goto L_0067537e;
L_00675377:; BB(0x00675377);
    /* 00675377: mov eax, 1 */ r_eax = 0x1u;
    /* 0067537c: jmp 0x675380 */ goto L_00675380;
L_0067537e:; BB(0x0067537e);
    /* 0067537e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00675380:; BB(0x00675380);
    /* 00675380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675382: je 0x6753ba */ if (fZ) goto L_006753ba;
L_00675384:; BB(0x00675384);
    /* 00675384: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00675386: jl 0x675394 */ if ((fS!=fO)) goto L_00675394;
L_00675388:; BB(0x00675388);
    /* 00675388: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067538b: jge 0x675394 */ if ((fS==fO)) goto L_00675394;
L_0067538d:; BB(0x0067538d);
    /* 0067538d: mov eax, 1 */ r_eax = 0x1u;
    /* 00675392: jmp 0x675396 */ goto L_00675396;
L_00675394:; BB(0x00675394);
    /* 00675394: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00675396:; BB(0x00675396);
    /* 00675396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675398: je 0x6753ba */ if (fZ) goto L_006753ba;
L_0067539a:; BB(0x0067539a);
    /* 0067539a: mov eax, dword ptr [esi*4 + 0xa8fe80] */ r_eax = R32((u32)(r_esi*4+0xa8fe80u));
    /* 006753a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006753a3: je 0x6753c1 */ if (fZ) goto L_006753c1;
L_006753a5:; BB(0x006753a5);
    /* 006753a5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006753a7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006753a9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006753ab: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006753ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006753b0: jne 0x6753ba */ if (!fZ) goto L_006753ba;
L_006753b2:; BB(0x006753b2);
    /* 006753b2: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 006753b5: mov ebx, 1 */ r_ebx = 0x1u;
L_006753ba:; BB(0x006753ba);
    /* 006753ba: mov eax, ebx */ r_eax = r_ebx;
    /* 006753bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006753bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006753be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006753bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006753c0: ret  */ FN_RET(0x00675354); r_esp += 4; return;
L_006753c1:; BB(0x006753c1);
    /* 006753c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006753c3: jl 0x6753d1 */ if ((fS!=fO)) goto L_006753d1;
L_006753c5:; BB(0x006753c5);
    /* 006753c5: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006753c8: jge 0x6753d1 */ if ((fS==fO)) goto L_006753d1;
L_006753ca:; BB(0x006753ca);
    /* 006753ca: mov edx, 1 */ r_edx = 0x1u;
    /* 006753cf: jmp 0x6753d3 */ goto L_006753d3;
L_006753d1:; BB(0x006753d1);
    /* 006753d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006753d3:; BB(0x006753d3);
    /* 006753d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006753d5: je 0x6753df */ if (fZ) goto L_006753df;
L_006753d7:; BB(0x006753d7);
    /* 006753d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006753d9: je 0x6753ea */ if (fZ) goto L_006753ea;
L_006753db:; BB(0x006753db);
    /* 006753db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006753dd: jmp 0x6753e1 */ goto L_006753e1;
L_006753df:; BB(0x006753df);
    /* 006753df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006753e1:; BB(0x006753e1);
    /* 006753e1: mov dword ptr [esi*4 + 0xa8fe80], eax */ W32((u32)(r_esi*4+0xa8fe80u), r_eax);
    /* 006753e8: jmp 0x6753a5 */ goto L_006753a5;
L_006753ea:; BB(0x006753ea);
    /* 006753ea: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006753ec: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6753f1u); f_008581c5();
    /* 006753f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006753f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006753f4: je 0x675415 */ if (fZ) goto L_00675415;
L_006753f6:; BB(0x006753f6);
    /* 006753f6: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006753fc: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 006753ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00675401: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00675403: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00675406: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00675409: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0067540c: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 00675413: jmp 0x6753e1 */ goto L_006753e1;
L_00675415:; BB(0x00675415);
    /* 00675415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675417: jmp 0x6753e1 */ goto L_006753e1;
}

void f_0067541c(void) /* sub_67541C */
{
    FN_ENTER(0x0067541c);
    /* 0067541c: mov dword ptr [0xa8fec0], 0x3f800000 */ W32((u32)(0xa8fec0u), 0x3f800000u);
    /* 00675426: mov dword ptr [0xa8fec4], 0x41000000 */ W32((u32)(0xa8fec4u), 0x41000000u);
    /* 00675430: mov dword ptr [0xa8fec8], 0x3fc00000 */ W32((u32)(0xa8fec8u), 0x3fc00000u);
    /* 0067543a: ret  */ FN_RET(0x0067541c); r_esp += 4; return;
}

void f_0067543c(void) /* sub_67543C */
{
    FN_ENTER(0x0067543c);
    /* 0067543c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067543d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067543e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00675440: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675446: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67544bu); f_0068d5a8();
    /* 0067544b: mov esi, eax */ r_esi = r_eax;
    /* 0067544d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675450: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675452: je 0x6754ca */ if (fZ) goto L_006754ca;
L_00675454:; BB(0x00675454);
    /* 00675454: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 0067545b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067545c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067545e: call 0x674d00 */ r_esp -= 4; W32(r_esp, 0x675463u); f_00674d00();
    /* 00675463: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675465: je 0x6754ca */ if (fZ) goto L_006754ca;
L_00675467:; BB(0x00675467);
    /* 00675467: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 0067546d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00675470: je 0x675479 */ if (fZ) goto L_00675479;
L_00675472:; BB(0x00675472);
    /* 00675472: mov edx, 1 */ r_edx = 0x1u;
    /* 00675477: jmp 0x67547b */ goto L_0067547b;
L_00675479:; BB(0x00675479);
    /* 00675479: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0067547b:; BB(0x0067547b);
    /* 0067547b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067547d: jne 0x675488 */ if (!fZ) goto L_00675488;
L_0067547f:; BB(0x0067547f);
    /* 0067547f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675481: mov ecx, esi */ r_ecx = r_esi;
    /* 00675483: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x675488u); f_006854a8();
L_00675488:; BB(0x00675488);
    /* 00675488: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067548a: mov ecx, esi */ r_ecx = r_esi;
    /* 0067548c: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x675491u); f_00694c24();
    /* 00675491: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675493: mov ecx, esi */ r_ecx = r_esi;
    /* 00675495: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x67549au); f_00694c24();
    /* 0067549a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067549c: mov ecx, esi */ r_ecx = r_esi;
    /* 0067549e: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x6754a3u); f_00694c24();
    /* 006754a3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006754a5: mov ecx, esi */ r_ecx = r_esi;
    /* 006754a7: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x6754acu); f_00694c24();
    /* 006754ac: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6754b1u); f_00717d68();
    /* 006754b1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006754b7: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6754bcu); f_00718078();
    /* 006754bc: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006754c2: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6754c7u); f_00717f08();
    /* 006754c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006754ca:; BB(0x006754ca);
    /* 006754ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006754cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006754cc: ret  */ FN_RET(0x0067543c); r_esp += 4; return;
}

void f_006754d0(void) /* sub_6754D0 */
{
    FN_ENTER(0x006754d0);
    /* 006754d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006754d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006754d2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006754d4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006754da: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6754dfu); f_0068d5a8();
    /* 006754df: mov ebp, eax */ r_ebp = r_eax;
    /* 006754e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006754e4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006754e6: je 0x67553f */ if (fZ) goto L_0067553f;
L_006754e8:; BB(0x006754e8);
    /* 006754e8: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006754ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006754f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006754f2: call 0x674d00 */ r_esp -= 4; W32(r_esp, 0x6754f7u); f_00674d00();
    /* 006754f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006754f9: je 0x67553f */ if (fZ) goto L_0067553f;
L_006754fb:; BB(0x006754fb);
    /* 006754fb: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 00675501: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00675504: je 0x67550d */ if (fZ) goto L_0067550d;
L_00675506:; BB(0x00675506);
    /* 00675506: mov edx, 1 */ r_edx = 0x1u;
    /* 0067550b: jmp 0x67550f */ goto L_0067550f;
L_0067550d:; BB(0x0067550d);
    /* 0067550d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0067550f:; BB(0x0067550f);
    /* 0067550f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675511: je 0x675521 */ if (fZ) goto L_00675521;
L_00675513:; BB(0x00675513);
    /* 00675513: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00675515: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x67551au); f_00685514();
    /* 0067551a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067551c: call 0x688d54 */ r_esp -= 4; W32(r_esp, 0x675521u); f_00688d54();
L_00675521:; BB(0x00675521);
    /* 00675521: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x675526u); f_00717d48();
    /* 00675526: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067552c: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x675531u); f_00718048();
    /* 00675531: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675537: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x67553cu); f_00717ed8();
    /* 0067553c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0067553f:; BB(0x0067553f);
    /* 0067553f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00675540: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675541: ret  */ FN_RET(0x006754d0); r_esp += 4; return;
}

void f_00675544(void) /* sub_675544 */
{
    FN_ENTER(0x00675544);
    /* 00675544: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675547: mov eax, ecx */ r_eax = r_ecx;
    /* 00675549: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 0067554f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675551: jne 0x67558d */ if (!fZ) goto L_0067558d;
L_00675553:; BB(0x00675553);
    /* 00675553: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00675559: mov edx, 1 */ r_edx = 0x1u;
    /* 0067555e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675561: jle 0x67558d */ if ((fZ||fS!=fO)) goto L_0067558d;
L_00675563:; BB(0x00675563);
    /* 00675563: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00675567: mov ebx, edx */ r_ebx = r_edx;
    /* 00675569: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0067556c: mov esi, eax */ r_esi = r_eax;
L_0067556e:; BB(0x0067556e);
    /* 0067556e: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 00675573: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675574: mov ecx, esi */ r_ecx = r_esi;
    /* 00675576: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x67557bu); f_007b52ec();
    /* 0067557b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067557e: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00675584: jl 0x67556e */ if ((fS!=fO)) goto L_0067556e;
L_00675586:; BB(0x00675586);
    /* 00675586: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0067558a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0067558d:; BB(0x0067558d);
    /* 0067558d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00675590: ret  */ FN_RET(0x00675544); r_esp += 4; return;
}

void f_00675594(void) /* sub_675594 */
{
    FN_ENTER(0x00675594);
    /* 00675594: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 0067559a: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067559d: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 006755a3: ret  */ FN_RET(0x00675594); r_esp += 4; return;
}

void f_006755a4(void) /* sub_6755A4 */
{
    FN_ENTER(0x006755a4);
    /* 006755a4: call 0x67543c */ r_esp -= 4; W32(r_esp, 0x6755a9u); f_0067543c();
    /* 006755a9: ret  */ FN_RET(0x006755a4); r_esp += 4; return;
}

void f_006755ac(void) /* sub_6755AC */
{
    FN_ENTER(0x006755ac);
    /* 006755ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006755ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006755af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006755b1: call 0x6754d0 */ r_esp -= 4; W32(r_esp, 0x6755b6u); f_006754d0();
    /* 006755b6: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 006755bc: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006755bf: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 006755c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006755c6: ret  */ FN_RET(0x006755ac); r_esp += 4; return;
}

void f_006755c8(void) /* sub_6755C8 */
{
    FN_ENTER(0x006755c8);
    /* 006755c8: mov edx, 0xa8fe80 */ r_edx = 0xa8fe80u;
    /* 006755cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006755cf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006755d1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006755d4: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006755d7: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006755da: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006755dd: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006755e0: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006755e3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006755e6: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006755e9: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006755ec: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006755ef: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006755f2: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006755f5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006755f8: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006755fb: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006755fe: ret  */ FN_RET(0x006755c8); r_esp += 4; return;
}

void f_00675600(void) /* sub_675600 */
{
    FN_ENTER(0x00675600);
    /* 00675600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675601: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00675603: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00675605: call 0x675624 */ r_esp -= 4; W32(r_esp, 0x67560au); f_00675624();
    /* 0067560a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067560e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675610: jne 0x675616 */ if (!fZ) goto L_00675616;
L_00675612:; BB(0x00675612);
    /* 00675612: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00675613: ret 4 */ FN_RET(0x00675600); r_esp += 8; return;
L_00675616:; BB(0x00675616);
    /* 00675616: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675617: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67561cu); f_005c2f74();
    /* 0067561c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067561d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067561e: ret 4 */ FN_RET(0x00675600); r_esp += 8; return;
}

void f_00675624(void) /* sub_675624 */
{
    FN_ENTER(0x00675624);
    /* 00675624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675625: mov ebp, esp */ r_ebp = r_esp;
    /* 00675627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675629: push 0x8e9738 */ { u32 v = 0x8e9738u; r_esp -= 4; W32(r_esp, v); }
    /* 0067562e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067563c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067563f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00675645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00675648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067564b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067564e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675655: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675658: mov dword ptr [eax], 0xb36880 */ W32((u32)(r_eax), 0xb36880u);
    /* 0067565e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067565f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x675664u); f_007b4e84();
    /* 00675664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675665: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675668: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x67566du); f_007b9c8c();
    /* 0067566d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00675674: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675677: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67567cu); f_006131f4();
    /* 0067567c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067567f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675686: mov esp, ebp */ r_esp = r_ebp;
    /* 00675688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675689: ret  */ FN_RET(0x00675624); r_esp += 4; return;
}

void f_0067568c(void) /* sub_67568C */
{
    FN_ENTER(0x0067568c);
    /* 0067568c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067568d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067568e: mov esi, ecx */ r_esi = r_ecx;
    /* 00675690: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00675696: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00675699: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0067569c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067569e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006756a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006756a1: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006756a4: jb 0x6756a8 */ if (fC) goto L_006756a8;
L_006756a6:; BB(0x006756a6);
    /* 006756a6: fst st(1) */ ST(1) = ST(0);
L_006756a8:; BB(0x006756a8);
    /* 006756a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006756aa: fmul dword ptr [0x93a9f4] */ ST(0) = ST(0) * R_F32((u32)(0x93a9f4u));
    /* 006756b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006756b2: je 0x675723 */ if (fZ) goto L_00675723;
L_006756b4:; BB(0x006756b4);
    /* 006756b4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006756b6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006756b9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006756bd: mov ecx, esi */ r_ecx = r_esi;
    /* 006756bf: mov dword ptr [esp], 0x43c80000 */ W32((u32)(r_esp), 0x43c80000u);
    /* 006756c6: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6756c9u); call_ind(t); }
    /* 006756c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006756cb: je 0x675720 */ if (fZ) goto L_00675720;
L_006756cd:; BB(0x006756cd);
    /* 006756cd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6756d2u); f_0082d7b0();
    /* 006756d2: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006756d5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6756dau); f_0082d838();
    /* 006756da: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006756dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006756df: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6756e4u); f_0082d8bc();
    /* 006756e4: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006756e7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6756ecu); f_00829cc8();
    /* 006756ec: push dword ptr [esi + 0x70] */ { u32 v = R32((u32)(r_esi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 006756ef: push dword ptr [esi + 0x6c] */ { u32 v = R32((u32)(r_esi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006756f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006756f4: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 006756f7: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6756fcu); f_0082fa0c();
    /* 006756fc: fld dword ptr [0x93a9ec] */ FPUSH(R_F32((u32)(0x93a9ecu)));
    /* 00675702: fdiv dword ptr [esi + 0x6c] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x6cu));
    /* 00675705: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00675708: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x67570du); f_0061cdb0();
    /* 0067570d: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675710: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x675715u); f_0082e760();
    /* 00675715: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675716: call 0x520e88 */ r_esp -= 4; W32(r_esp, 0x67571bu); f_00520e88();
    /* 0067571b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x675720u); f_0082da80();
L_00675720:; BB(0x00675720);
    /* 00675720: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675721: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00675722: ret  */ FN_RET(0x0067568c); r_esp += 4; return;
L_00675723:; BB(0x00675723);
    /* 00675723: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00675725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675726: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00675727: ret  */ FN_RET(0x0067568c); r_esp += 4; return;
}

void f_00675728(void) /* sub_675728 */
{
    FN_ENTER(0x00675728);
    /* 00675728: mov ecx, dword ptr [0xa8fee0] */ r_ecx = R32((u32)(0xa8fee0u));
    /* 0067572e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675730: je 0x675745 */ if (fZ) goto L_00675745;
L_00675732:; BB(0x00675732);
    /* 00675732: je 0x67573b */ if (fZ) goto L_0067573b;
L_00675734:; BB(0x00675734);
    /* 00675734: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675736: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67573bu); f_004066a8();
L_0067573b:; BB(0x0067573b);
    /* 0067573b: mov dword ptr [0xa8fee0], 0 */ W32((u32)(0xa8fee0u), 0x0u);
L_00675745:; BB(0x00675745);
    /* 00675745: ret  */ FN_RET(0x00675728); r_esp += 4; return;
}

void f_00675748(void)
{
    FN_ENTER(0x00675748);
    /* 00675748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675749: mov ebp, esp */ r_ebp = r_esp;
    /* 0067574b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067574d: push 0x8e9760 */ { u32 v = 0x8e9760u; r_esp -= 4; W32(r_esp, v); }
    /* 00675752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675760: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675766: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00675769: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067576c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067576f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00675774: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067577b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x675780u); f_005caba4();
    /* 00675780: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675781: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00675784: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675786: je 0x6757bf */ if (fZ) goto L_006757bf;
L_00675788:; BB(0x00675788);
    /* 00675788: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067578f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675796: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675799: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067579f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006757a2: call 0x6757c4 */ r_esp -= 4; W32(r_esp, 0x6757a7u); f_006757c4();
    /* 006757a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006757aa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006757b1:; BB(0x006757b1);
    /* 006757b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006757b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006757bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006757bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006757be: ret  */ FN_RET(0x00675748); r_esp += 4; return;
L_006757bf:; BB(0x006757bf);
    /* 006757bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006757c1: jmp 0x6757b1 */ goto L_006757b1;
}

void f_006757c4(void) /* sub_6757C4 */
{
    FN_ENTER(0x006757c4);
    /* 006757c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006757c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006757c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006757c9: push 0x8e977c */ { u32 v = 0x8e977cu; r_esp -= 4; W32(r_esp, v); }
    /* 006757ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006757d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006757d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006757dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006757df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006757e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006757e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006757e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006757eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006757ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006757f1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006757f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006757f7: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x6757fcu); f_006132e4();
    /* 006757fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675803: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675806: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00675809: mov dword ptr [ecx], 0xb36880 */ W32((u32)(r_ecx), 0xb36880u);
    /* 0067580f: mov eax, dword ptr [0x9c99e4] */ r_eax = R32((u32)(0x9c99e4u));
    /* 00675814: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675815: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00675818: call dword ptr [0xb36894] */ { u32 t = R32((u32)(0xb36894u)); r_esp -= 4; W32(r_esp, 0x67581eu); call_ind(t); }
    /* 0067581e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675821: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675823: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00675829: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067582c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067582e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00675830: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675832: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675834: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00675836: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675838: lea ebx, [edx + edx + 0x9c9940] */ r_ebx = (u32)(r_edx+r_edx+0x9c9940u);
    /* 0067583f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675840: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x675845u); f_007b9a88();
    /* 00675845: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675848: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x67584du); f_007b4f54();
    /* 0067584d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675850: call 0x675874 */ r_esp -= 4; W32(r_esp, 0x675855u); f_00675874();
    /* 00675855: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675858: call 0x675894 */ r_esp -= 4; W32(r_esp, 0x67585du); f_00675894();
    /* 0067585d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675860: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00675863: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675866: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067586d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067586f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675870: ret 8 */ FN_RET(0x006757c4); r_esp += 12; return;
}

void f_00675874(void) /* sub_675874 */
{
    FN_ENTER(0x00675874);
    /* 00675874: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0067587a: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0067587d: fmul dword ptr [ecx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x70u));
    /* 00675880: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00675883: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00675889: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0067588c: fmul dword ptr [ecx + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x68u));
    /* 0067588f: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00675892: ret  */ FN_RET(0x00675874); r_esp += 4; return;
}

void f_00675894(void) /* sub_675894 */
{
    FN_ENTER(0x00675894);
    /* 00675894: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675895: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00675897: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067589d: mov ecx, dword ptr [0xa8fee0] */ r_ecx = R32((u32)(0xa8fee0u));
    /* 006758a3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6758a8u); f_005b8610();
    /* 006758a8: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006758ae: mov ecx, dword ptr [0xa8fee0] */ r_ecx = R32((u32)(0xa8fee0u));
    /* 006758b4: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006758b7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6758bcu); f_005b8624();
    /* 006758bc: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006758bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006758c0: ret  */ FN_RET(0x00675894); r_esp += 4; return;
}

void f_006758c4(void) /* sub_6758C4 */
{
    FN_ENTER(0x006758c4);
    /* 006758c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006758c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006758c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006758c9: push 0x8e97a4 */ { u32 v = 0x8e97a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006758ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006758d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006758d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006758dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006758df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006758e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006758e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006758e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006758eb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006758f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006758f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6758fcu); f_008581c5();
    /* 006758fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006758fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00675900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675902: je 0x675943 */ if (fZ) goto L_00675943;
L_00675904:; BB(0x00675904);
    /* 00675904: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067590b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675912: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675915: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067591a: push 0x9c99d4 */ { u32 v = 0x9c99d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067591f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675921: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x675926u); f_005b7a84();
    /* 00675926: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675929: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00675930:; BB(0x00675930);
    /* 00675930: mov dword ptr [0xa8fee0], eax */ W32((u32)(0xa8fee0u), r_eax);
    /* 00675935: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675938: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067593f: mov esp, ebp */ r_esp = r_ebp;
    /* 00675941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675942: ret  */ FN_RET(0x006758c4); r_esp += 4; return;
L_00675943:; BB(0x00675943);
    /* 00675943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675945: jmp 0x675930 */ goto L_00675930;
}

void f_00675948(void) /* sub_675948 */
{
    FN_ENTER(0x00675948);
    /* 00675948: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675949: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067594b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067594d: call 0x67596c */ r_esp -= 4; W32(r_esp, 0x675952u); f_0067596c();
    /* 00675952: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00675956: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675958: jne 0x67595e */ if (!fZ) goto L_0067595e;
L_0067595a:; BB(0x0067595a);
    /* 0067595a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067595b: ret 4 */ FN_RET(0x00675948); r_esp += 8; return;
L_0067595e:; BB(0x0067595e);
    /* 0067595e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067595f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x675964u); f_005c2f74();
    /* 00675964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675965: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00675966: ret 4 */ FN_RET(0x00675948); r_esp += 8; return;
}

void f_0067596c(void) /* sub_67596C */
{
    FN_ENTER(0x0067596c);
    /* 0067596c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067596d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067596f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675971: push 0x8e97c0 */ { u32 v = 0x8e97c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675976: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067597c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067597d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675984: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675987: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067598a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067598d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00675990: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00675993: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00675996: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067599d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006759a0: mov dword ptr [eax], 0xb36980 */ W32((u32)(r_eax), 0xb36980u);
    /* 006759a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006759a7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6759acu); f_007b4e84();
    /* 006759ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006759ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006759b0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6759b5u); f_007b9c8c();
    /* 006759b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006759bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006759bf: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x6759c4u); f_0063323c();
    /* 006759c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006759c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006759ce: mov esp, ebp */ r_esp = r_ebp;
    /* 006759d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006759d1: ret  */ FN_RET(0x0067596c); r_esp += 4; return;
}

void f_006759d4(void) /* sub_6759D4 */
{
    FN_ENTER(0x006759d4);
    /* 006759d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006759d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006759d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006759d9: push 0x8e97e8 */ { u32 v = 0x8e97e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006759de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006759e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006759e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006759ec: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006759ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006759f2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006759f5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006759f8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006759fb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006759fe: mov eax, 0x93aa40 */ r_eax = 0x93aa40u;
    /* 00675a03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00675a05: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00675a0b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00675a0e: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00675a11: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00675a14: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00675a17: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00675a1a: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00675a1d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00675a20: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00675a23: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00675a26: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00675a29: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00675a2c: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00675a2f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00675a32: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00675a35: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00675a38: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00675a3b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00675a3e: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00675a41: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00675a44: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00675a47: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00675a4a: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00675a4d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00675a50: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00675a53: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00675a56: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00675a59: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00675a5c: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00675a5f: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00675a62: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00675a65: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00675a68: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00675a6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00675a6e: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00675a71: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00675a74: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00675a77: mov eax, ecx */ r_eax = r_ecx;
    /* 00675a79: mov ecx, dword ptr [0xa8feec] */ r_ecx = R32((u32)(0xa8feecu));
    /* 00675a7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a81: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00675a84: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00675a87: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x675a8cu); f_005b8610();
    /* 00675a8c: mov ecx, dword ptr [0xa8feec] */ r_ecx = R32((u32)(0xa8feecu));
    /* 00675a92: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00675a95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675a97: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x675a9cu); f_005b8624();
    /* 00675a9c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00675a9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675aa1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00675aa4:; BB(0x00675aa4);
    /* 00675aa4: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00675aa7: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00675aaa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00675aac: mov eax, dword ptr [ebx + esi*8 + 0x9c9a00] */ r_eax = R32((u32)(r_ebx+r_esi*8+0x9c9a00u));
    /* 00675ab3: mov edx, dword ptr [ebx + esi*8 + 0x9c9a04] */ r_edx = R32((u32)(r_ebx+r_esi*8+0x9c9a04u));
    /* 00675aba: mov edi, dword ptr [ebx + esi*8 + 0x9c9a08] */ r_edi = R32((u32)(r_ebx+r_esi*8+0x9c9a08u));
    /* 00675ac1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00675ac4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00675ac7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00675acc: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00675acf: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x675ad4u); f_0082d990();
    /* 00675ad4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00675ad7: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00675ada: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00675adc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x675ae1u); f_0082d8bc();
    /* 00675ae1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00675ae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675ae5: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00675ae8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00675aea: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x675aefu); f_0082eab8();
    /* 00675aef: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00675af4: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x675af9u); f_0082eb80();
    /* 00675af9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00675afc: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00675aff: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00675b02: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00675b05: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00675b08: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00675b0b: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 00675b0e: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00675b11: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 00675b14: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x675b19u); f_0082ebac();
    /* 00675b19: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00675b20: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00675b25: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x675b2au); f_005caba4();
    /* 00675b2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675b2b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00675b2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675b30: je 0x675b5c */ if (fZ) goto L_00675b5c;
L_00675b32:; BB(0x00675b32);
    /* 00675b32: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00675b39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675b40: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00675b43: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 00675b49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675b4a: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675b50: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x675b55u); f_006441f4();
    /* 00675b55: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00675b5c:; BB(0x00675b5c);
    /* 00675b5c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00675b63: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00675b66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00675b69: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00675b6c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00675b6f: jl 0x675aa4 */ if ((fS!=fO)) goto L_00675aa4;
L_00675b75:; BB(0x00675b75);
    /* 00675b75: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675b78: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675b7b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00675b7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675b81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675b88: mov esp, ebp */ r_esp = r_ebp;
    /* 00675b8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675b8b: ret  */ FN_RET(0x006759d4); r_esp += 4; return;
}

void f_00675b8c(void) /* sub_675B8C */
{
    FN_ENTER(0x00675b8c);
    /* 00675b8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00675b8d: mov edi, ecx */ r_edi = r_ecx;
    /* 00675b8f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00675b91: mov ecx, edi */ r_ecx = r_edi;
    /* 00675b93: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675b99: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00675b9f: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x675ba2u); call_ind(t); }
    /* 00675ba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675ba4: jne 0x675ba8 */ if (!fZ) goto L_00675ba8;
L_00675ba6:; BB(0x00675ba6);
    /* 00675ba6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00675ba7: ret  */ FN_RET(0x00675b8c); r_esp += 4; return;
L_00675ba8:; BB(0x00675ba8);
    /* 00675ba8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x675badu); f_0082d7b0();
    /* 00675bad: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00675bb0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x675bb5u); f_0082d838();
    /* 00675bb5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00675bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00675bba: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x675bbfu); f_0082d8bc();
    /* 00675bbf: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00675bc2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x675bc7u); f_00829cc8();
    /* 00675bc7: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675bca: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x675bcfu); f_0082e1e8();
    /* 00675bcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675bd0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x675bd5u); f_0082da80();
    /* 00675bd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00675bd6: ret  */ FN_RET(0x00675b8c); r_esp += 4; return;
}

void f_00675bd8(void) /* sub_675BD8 */
{
    FN_ENTER(0x00675bd8);
    /* 00675bd8: mov ecx, dword ptr [0xa8feec] */ r_ecx = R32((u32)(0xa8feecu));
    /* 00675bde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675be0: je 0x675bf5 */ if (fZ) goto L_00675bf5;
L_00675be2:; BB(0x00675be2);
    /* 00675be2: je 0x675beb */ if (fZ) goto L_00675beb;
L_00675be4:; BB(0x00675be4);
    /* 00675be4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675be6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x675bebu); f_004066a8();
L_00675beb:; BB(0x00675beb);
    /* 00675beb: mov dword ptr [0xa8feec], 0 */ W32((u32)(0xa8feecu), 0x0u);
L_00675bf5:; BB(0x00675bf5);
    /* 00675bf5: ret  */ FN_RET(0x00675bd8); r_esp += 4; return;
}

void f_00675bf8(void)
{
    FN_ENTER(0x00675bf8);
    /* 00675bf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675bf9: mov ebp, esp */ r_ebp = r_esp;
    /* 00675bfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675bfd: push 0x8e9810 */ { u32 v = 0x8e9810u; r_esp -= 4; W32(r_esp, v); }
    /* 00675c02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675c09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675c10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675c13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675c16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00675c19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00675c1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00675c1f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00675c24: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00675c2b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x675c30u); f_005caba4();
    /* 00675c30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675c31: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00675c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675c36: je 0x675c6f */ if (fZ) goto L_00675c6f;
L_00675c38:; BB(0x00675c38);
    /* 00675c38: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00675c3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675c46: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675c49: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675c4f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675c52: call 0x675c74 */ r_esp -= 4; W32(r_esp, 0x675c57u); f_00675c74();
    /* 00675c57: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675c5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00675c61:; BB(0x00675c61);
    /* 00675c61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675c64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675c6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00675c6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675c6e: ret  */ FN_RET(0x00675bf8); r_esp += 4; return;
L_00675c6f:; BB(0x00675c6f);
    /* 00675c6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675c71: jmp 0x675c61 */ goto L_00675c61;
}

void f_00675c74(void) /* sub_675C74 */
{
    FN_ENTER(0x00675c74);
    /* 00675c74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675c75: mov ebp, esp */ r_ebp = r_esp;
    /* 00675c77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675c79: push 0x8e982c */ { u32 v = 0x8e982cu; r_esp -= 4; W32(r_esp, v); }
    /* 00675c7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675c84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675c85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675c8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675c8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675c92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00675c95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00675c98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00675c9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00675c9e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00675ca1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00675ca4: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x675ca9u); f_006347a4();
    /* 00675ca9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675cb0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675cb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00675cb6: mov dword ptr [ecx], 0xb36980 */ W32((u32)(r_ecx), 0xb36980u);
    /* 00675cbc: mov eax, dword ptr [0x9c9a64] */ r_eax = R32((u32)(0x9c9a64u));
    /* 00675cc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675cc2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00675cc5: call dword ptr [0xb36994] */ { u32 t = R32((u32)(0xb36994u)); r_esp -= 4; W32(r_esp, 0x675ccbu); call_ind(t); }
    /* 00675ccb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675cce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675cd0: push 0x9c9a68 */ { u32 v = 0x9c9a68u; r_esp -= 4; W32(r_esp, v); }
    /* 00675cd5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x675cdau); f_007b9a88();
    /* 00675cda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675cdd: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x675ce2u); f_007b4f54();
    /* 00675ce2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675ce5: call 0x675d50 */ r_esp -= 4; W32(r_esp, 0x675ceau); f_00675d50();
    /* 00675cea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675ced: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00675cf3: mov dword ptr [ecx + 0xac], 0x43c80000 */ W32((u32)(r_ecx+0xacu), 0x43c80000u);
    /* 00675cfd: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00675d00: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00675d03: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00675d05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00675d07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00675d08: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00675d0e: jb 0x675d12 */ if (fC) goto L_00675d12;
L_00675d10:; BB(0x00675d10);
    /* 00675d10: fst st(1) */ ST(1) = ST(0);
L_00675d12:; BB(0x00675d12);
    /* 00675d12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00675d14: fmul dword ptr [0x93aa8c] */ ST(0) = ST(0) * R_F32((u32)(0x93aa8cu));
    /* 00675d1a: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00675d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675d22: jl 0x675d33 */ if ((fS!=fO)) goto L_00675d33;
L_00675d24:; BB(0x00675d24);
    /* 00675d24: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00675d29: jg 0x675d33 */ if ((!fZ&&fS==fO)) goto L_00675d33;
L_00675d2b:; BB(0x00675d2b);
    /* 00675d2b: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00675d31: jmp 0x675d3d */ goto L_00675d3d;
L_00675d33:; BB(0x00675d33);
    /* 00675d33: mov dword ptr [ecx + 0xb8], 0xffffffff */ W32((u32)(r_ecx+0xb8u), 0xffffffffu);
L_00675d3d:; BB(0x00675d3d);
    /* 00675d3d: mov eax, ecx */ r_eax = r_ecx;
    /* 00675d3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675d42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675d49: mov esp, ebp */ r_esp = r_ebp;
    /* 00675d4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675d4c: ret 8 */ FN_RET(0x00675c74); r_esp += 12; return;
}

void f_00675ca0(void)
{
    FN_ENTER(0x00675ca0);
    /* 00675ca0: fmul qword ptr [ecx - 0x41713bb] */ ST(0) = ST(0) * R_F64((u32)(r_ecx+0xfbe8ec45u));
    /* 00675ca6: ljmp 0xfc:0x45c7fffb */ UNSUP(0x00675ca6, "ljmp 0xfc:0x45c7fffb");
    /* 00675cad: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00675caf: add byte ptr [ebx + 0x558bdc4d], cl */ { u32 ad = (u32)(r_ebx+0x558bdc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00675cb5: in al, dx */ UNSUP(0x00675cb5, "in al, dx");
    /* 00675cb6: mov dword ptr [ecx], 0xb36980 */ W32((u32)(r_ecx), 0xb36980u);
    /* 00675cbc: mov eax, dword ptr [0x9c9a64] */ r_eax = R32((u32)(0x9c9a64u));
    /* 00675cc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675cc2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00675cc5: call dword ptr [0xb36994] */ { u32 t = R32((u32)(0xb36994u)); r_esp -= 4; W32(r_esp, 0x675ccbu); call_ind(t); }
    /* 00675ccb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675cce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675cd0: push 0x9c9a68 */ { u32 v = 0x9c9a68u; r_esp -= 4; W32(r_esp, v); }
    /* 00675cd5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x675cdau); f_007b9a88();
    /* 00675cda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675cdd: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x675ce2u); f_007b4f54();
    /* 00675ce2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675ce5: call 0x675d50 */ r_esp -= 4; W32(r_esp, 0x675ceau); f_00675d50();
    /* 00675cea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00675ced: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00675cf3: mov dword ptr [ecx + 0xac], 0x43c80000 */ W32((u32)(r_ecx+0xacu), 0x43c80000u);
    /* 00675cfd: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00675d00: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00675d03: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00675d05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00675d07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00675d08: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00675d0e: jb 0x675d12 */ if (fC) goto L_00675d12;
L_00675d10:; BB(0x00675d10);
    /* 00675d10: fst st(1) */ ST(1) = ST(0);
L_00675d12:; BB(0x00675d12);
    /* 00675d12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00675d14: fmul dword ptr [0x93aa8c] */ ST(0) = ST(0) * R_F32((u32)(0x93aa8cu));
    /* 00675d1a: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00675d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675d22: jl 0x675d33 */ if ((fS!=fO)) goto L_00675d33;
L_00675d24:; BB(0x00675d24);
    /* 00675d24: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00675d29: jg 0x675d33 */ if ((!fZ&&fS==fO)) goto L_00675d33;
L_00675d2b:; BB(0x00675d2b);
    /* 00675d2b: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00675d31: jmp 0x675d3d */ goto L_00675d3d;
L_00675d33:; BB(0x00675d33);
    /* 00675d33: mov dword ptr [ecx + 0xb8], 0xffffffff */ W32((u32)(r_ecx+0xb8u), 0xffffffffu);
L_00675d3d:; BB(0x00675d3d);
    /* 00675d3d: mov eax, ecx */ r_eax = r_ecx;
    /* 00675d3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675d42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675d49: mov esp, ebp */ r_esp = r_ebp;
    /* 00675d4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675d4c: ret 8 */ FN_RET(0x00675ca0); r_esp += 12; return;
}

void f_00675d50(void) /* sub_675D50 */
{
    FN_ENTER(0x00675d50);
    /* 00675d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675d51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00675d53: mov ecx, dword ptr [0xa8feec] */ r_ecx = R32((u32)(0xa8feecu));
    /* 00675d59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675d5b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x675d60u); f_005b8610();
    /* 00675d60: mov ecx, dword ptr [0xa8feec] */ r_ecx = R32((u32)(0xa8feecu));
    /* 00675d66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675d68: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00675d6b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x675d70u); f_005b8624();
    /* 00675d70: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00675d73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00675d74: ret  */ FN_RET(0x00675d50); r_esp += 4; return;
}

void f_00675d78(void) /* sub_675D78 */
{
    FN_ENTER(0x00675d78);
    /* 00675d78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675d79: mov ebp, esp */ r_ebp = r_esp;
    /* 00675d7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675d7d: push 0x8e9854 */ { u32 v = 0x8e9854u; r_esp -= 4; W32(r_esp, v); }
    /* 00675d82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675d89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675d90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675d93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675d96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00675d99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00675d9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00675d9f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00675da4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00675dab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x675db0u); f_008581c5();
    /* 00675db0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675db1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00675db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675db6: je 0x675df7 */ if (fZ) goto L_00675df7;
L_00675db8:; BB(0x00675db8);
    /* 00675db8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00675dbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675dc6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675dc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00675dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675dce: push 0x9c9a54 */ { u32 v = 0x9c9a54u; r_esp -= 4; W32(r_esp, v); }
    /* 00675dd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675dd5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x675ddau); f_005b7a84();
    /* 00675dda: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675ddd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00675de4:; BB(0x00675de4);
    /* 00675de4: mov dword ptr [0xa8feec], eax */ W32((u32)(0xa8feecu), r_eax);
    /* 00675de9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675dec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675df3: mov esp, ebp */ r_esp = r_ebp;
    /* 00675df5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675df6: ret  */ FN_RET(0x00675d78); r_esp += 4; return;
L_00675df7:; BB(0x00675df7);
    /* 00675df7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675df9: jmp 0x675de4 */ goto L_00675de4;
}

void f_00675dfc(void) /* sub_675DFC */
{
    FN_ENTER(0x00675dfc);
    /* 00675dfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675dfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00675dff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00675e01: call 0x675e20 */ r_esp -= 4; W32(r_esp, 0x675e06u); f_00675e20();
    /* 00675e06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00675e0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675e0c: jne 0x675e12 */ if (!fZ) goto L_00675e12;
L_00675e0e:; BB(0x00675e0e);
    /* 00675e0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00675e0f: ret 4 */ FN_RET(0x00675dfc); r_esp += 8; return;
L_00675e12:; BB(0x00675e12);
    /* 00675e12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675e13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x675e18u); f_005c2f74();
    /* 00675e18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675e19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00675e1a: ret 4 */ FN_RET(0x00675dfc); r_esp += 8; return;
}

void f_00675e20(void) /* sub_675E20 */
{
    FN_ENTER(0x00675e20);
    /* 00675e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00675e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675e25: push 0x8e9870 */ { u32 v = 0x8e9870u; r_esp -= 4; W32(r_esp, v); }
    /* 00675e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675e31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00675e38: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675e3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00675e3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00675e41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00675e44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00675e47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00675e4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675e51: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675e54: mov dword ptr [eax], 0xb36a80 */ W32((u32)(r_eax), 0xb36a80u);
    /* 00675e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675e5b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x675e60u); f_007b4e84();
    /* 00675e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675e61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675e64: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x675e69u); f_007b9c8c();
    /* 00675e69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00675e70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675e73: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x675e78u); f_00770660();
    /* 00675e78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675e7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00675e82: mov esp, ebp */ r_esp = r_ebp;
    /* 00675e84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675e85: ret  */ FN_RET(0x00675e20); r_esp += 4; return;
}

void f_00675e88(void) /* sub_675E88 */
{
    FN_ENTER(0x00675e88);
    /* 00675e88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00675e89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675e8a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675e8d: mov esi, ecx */ r_esi = r_ecx;
    /* 00675e8f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675e95: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x675e9au); f_0068d5a8();
    /* 00675e9a: mov ebp, eax */ r_ebp = r_eax;
    /* 00675e9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675e9f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675ea1: je 0x675f15 */ if (fZ) goto L_00675f15;
L_00675ea3:; BB(0x00675ea3);
    /* 00675ea3: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 00675ea9: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675eaf: jne 0x675f15 */ if (!fZ) goto L_00675f15;
L_00675eb1:; BB(0x00675eb1);
    /* 00675eb1: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00675eb5: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00675eb9: call 0x675f25 */ r_esp -= 4; W32(r_esp, 0x675ebeu); f_00675f25();
    /* 00675ebe: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00675ec1: test edx, 0x4000e00 */ {  u32 a = r_edx; u32 b = 0x4000e00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675ec7: jne 0x675efa */ if (!fZ) goto L_00675efa;
L_00675ec9:; BB(0x00675ec9);
    /* 00675ec9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675ecb: jne 0x675efa */ if (!fZ) goto L_00675efa;
L_00675ecd:; BB(0x00675ecd);
    /* 00675ecd: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00675ed2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675ed4: mov ecx, esi */ r_ecx = r_esi;
    /* 00675ed6: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x675edbu); f_007b52c4();
    /* 00675edb: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00675ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675ee1: mov ecx, esi */ r_ecx = r_esi;
    /* 00675ee3: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x675ee8u); f_007b8338();
    /* 00675ee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675eea: je 0x675f15 */ if (fZ) goto L_00675f15;
L_00675eec:; BB(0x00675eec);
    /* 00675eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675eed: mov ecx, esi */ r_ecx = r_esi;
    /* 00675eef: call 0x675f9c */ r_esp -= 4; W32(r_esp, 0x675ef4u); f_00675f9c();
    /* 00675ef4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00675ef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675ef8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00675ef9: ret  */ FN_RET(0x00675e88); r_esp += 4; return;
L_00675efa:; BB(0x00675efa);
    /* 00675efa: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00675eff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675f01: mov ecx, esi */ r_ecx = r_esi;
    /* 00675f03: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x675f08u); f_007b52ec();
    /* 00675f08: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00675f0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675f0e: mov ecx, esi */ r_ecx = r_esi;
    /* 00675f10: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x675f15u); f_007b65b4();
L_00675f15:; BB(0x00675f15);
    /* 00675f15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00675f18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675f19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00675f1a: ret  */ FN_RET(0x00675e88); r_esp += 4; return;
}

void f_00675f25(void) /* sub_675F25 */
{
    FN_ENTER(0x00675f25);
    /* 00675f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00675f26: mov ecx, eax */ r_ecx = r_eax;
    /* 00675f28: mov eax, 1 */ r_eax = 0x1u;
    /* 00675f2d: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00675f2f: test dword ptr [0xa8ff1c], eax */ {  u32 a = R32((u32)(0xa8ff1cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675f35: je 0x675f74 */ if (fZ) goto L_00675f74;
L_00675f37:; BB(0x00675f37);
    /* 00675f37: movzx eax, word ptr [ecx*2 + 0xa8ff04] */ r_eax = (u32)R16((u32)(r_ecx*2+0xa8ff04u));
    /* 00675f3f: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00675f42: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00675f44: jne 0x675f5b */ if (!fZ) goto L_00675f5b;
L_00675f46:; BB(0x00675f46);
    /* 00675f46: mov edx, dword ptr [ecx*4 + 0xa8ff0c] */ r_edx = R32((u32)(r_ecx*4+0xa8ff0cu));
    /* 00675f4d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00675f50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675f52: jle 0x675f62 */ if ((fZ||fS!=fO)) goto L_00675f62;
L_00675f54:; BB(0x00675f54);
    /* 00675f54: mov dword ptr [ecx*4 + 0xa8ff0c], edx */ W32((u32)(r_ecx*4+0xa8ff0cu), r_edx);
L_00675f5b:; BB(0x00675f5b);
    /* 00675f5b: mov eax, 1 */ r_eax = 0x1u;
    /* 00675f60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675f61: ret  */ FN_RET(0x00675f25); r_esp += 4; return;
L_00675f62:; BB(0x00675f62);
    /* 00675f62: mov dword ptr [ecx*4 + 0xa8ff0c], 0 */ W32((u32)(r_ecx*4+0xa8ff0cu), 0x0u);
    /* 00675f6d: mov eax, ecx */ r_eax = r_ecx;
    /* 00675f6f: call 0x675f7c */ r_esp -= 4; W32(r_esp, 0x675f74u); f_00675f7c();
L_00675f74:; BB(0x00675f74);
    /* 00675f74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675f76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00675f77: ret  */ FN_RET(0x00675f25); r_esp += 4; return;
}

void f_00675f7c(void) /* sub_675F7C */
{
    FN_ENTER(0x00675f7c);
    /* 00675f7c: mov ecx, eax */ r_ecx = r_eax;
    /* 00675f7e: mov edx, 1 */ r_edx = 0x1u;
    /* 00675f83: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00675f85: not edx */ r_edx = ~r_edx;
    /* 00675f87: and dword ptr [0xa8ff1c], edx */ { u32 ad = (u32)(0xa8ff1cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00675f8d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00675f92: mov word ptr [eax*2 + 0xa8ff04], dx */ W16((u32)(r_eax*2+0xa8ff04u), (u16)r_edx);
    /* 00675f9a: ret  */ FN_RET(0x00675f7c); r_esp += 4; return;
}

void f_00675f9c(void) /* sub_675F9C */
{
    FN_ENTER(0x00675f9c);
    /* 00675f9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00675f9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00675f9e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675fa1: mov edi, ecx */ r_edi = r_ecx;
    /* 00675fa3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00675fa7: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00675faf: mov ecx, edi */ r_ecx = r_edi;
    /* 00675fb1: call 0x676008 */ r_esp -= 4; W32(r_esp, 0x675fb6u); f_00676008();
    /* 00675fb6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00675fb8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00675fbc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00675fc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00675fc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675fc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00675fc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675fc7: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675fcb: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00675fcf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00675fd0: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x675fd3u); call_ind(t); }
    /* 00675fd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00675fd5: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00675fd8: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 00675fde: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00675fe4: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00675fe7: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00675fec: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00675ff2: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00675ff6: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00675ffa: call 0x67604d */ r_esp -= 4; W32(r_esp, 0x675fffu); f_0067604d();
    /* 00675fff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00676002: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00676003: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00676004: ret 4 */ FN_RET(0x00675f9c); r_esp += 8; return;
}

