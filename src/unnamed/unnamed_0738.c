#include "protos.h"

void f_00738144(void) /* sub_738144 */
{
    FN_ENTER(0x00738144);
    /* 00738144: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738145: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00738147: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00738149: call 0x738168 */ r_esp -= 4; W32(r_esp, 0x73814eu); f_00738168();
    /* 0073814e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00738152: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738154: jne 0x73815a */ if (!fZ) goto L_0073815a;
L_00738156:; BB(0x00738156);
    /* 00738156: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738157: ret 4 */ FN_RET(0x00738144); r_esp += 8; return;
L_0073815a:; BB(0x0073815a);
    /* 0073815a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073815b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x738160u); f_005c2f74();
    /* 00738160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00738161: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738162: ret 4 */ FN_RET(0x00738144); r_esp += 8; return;
}

void f_00738168(void) /* sub_738168 */
{
    FN_ENTER(0x00738168);
    /* 00738168: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738169: mov ebp, esp */ r_ebp = r_esp;
    /* 0073816b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073816d: push 0x8f1a7c */ { u32 v = 0x8f1a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00738172: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00738178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738179: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00738180: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738183: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00738186: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00738189: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073818c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073818f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00738192: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00738199: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073819c: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0073819f: mov dword ptr [eax], 0xb40bc8 */ W32((u32)(r_eax), 0xb40bc8u);
    /* 007381a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007381a7: je 0x7381b3 */ if (fZ) goto L_007381b3;
L_007381a9:; BB(0x007381a9);
    /* 007381a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007381ab: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x7381b0u); f_00721474();
    /* 007381b0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_007381b3:; BB(0x007381b3);
    /* 007381b3: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007381b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007381b8: je 0x7381c4 */ if (fZ) goto L_007381c4;
L_007381ba:; BB(0x007381ba);
    /* 007381ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007381bc: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x7381c1u); f_00728a10();
    /* 007381c1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_007381c4:; BB(0x007381c4);
    /* 007381c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007381cb: mov ecx, eax */ r_ecx = r_eax;
    /* 007381cd: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x7381d2u); f_00710788();
    /* 007381d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007381d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007381dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007381de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007381df: ret  */ FN_RET(0x00738168); r_esp += 4; return;
}

void f_007381e0(void) /* sub_7381E0 */
{
    FN_ENTER(0x007381e0);
    /* 007381e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007381e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007381e2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007381e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007381e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007381e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007381e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007381e9: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007381ee: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7381f3u); f_00814298();
    /* 007381f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007381f6: movsx edx, word ptr [ebx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x88u));
    /* 007381fd: mov eax, edx */ r_eax = r_edx;
L_007381ff:; BB(0x007381ff);
    /* 007381ff: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738202: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00738205: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00738207: jl 0x738229 */ if ((fS!=fO)) goto L_00738229;
L_00738209:; BB(0x00738209);
    /* 00738209: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073820b: je 0x738245 */ if (fZ) goto L_00738245;
L_0073820d:; BB(0x0073820d);
    /* 0073820d: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 00738210: mov esi, dword ptr [esi + ecx*4] */ r_esi = R32((u32)(r_esi+r_ecx*4));
    /* 00738213: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 00738217: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073821d: je 0x7381ff */ if (fZ) goto L_007381ff;
L_0073821f:; BB(0x0073821f);
    /* 0073821f: mov word ptr [ebx + 0x88], ax */ W16((u32)(r_ebx+0x88u), (u16)r_eax);
    /* 00738226: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738227: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00738228: ret  */ FN_RET(0x007381e0); r_esp += 4; return;
L_00738229:; BB(0x00738229);
    /* 00738229: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 00738230: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738232: jne 0x738248 */ if (!fZ) goto L_00738248;
L_00738234:; BB(0x00738234);
    /* 00738234: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 0073823b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073823e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00738241: mov ecx, eax */ r_ecx = r_eax;
    /* 00738243: jmp 0x738209 */ goto L_00738209;
L_00738245:; BB(0x00738245);
    /* 00738245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738246: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00738247: ret  */ FN_RET(0x007381e0); r_esp += 4; return;
L_00738248:; BB(0x00738248);
    /* 00738248: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738249: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073824a: ret  */ FN_RET(0x007381e0); r_esp += 4; return;
}

void f_0073824c(void) /* sub_73824C */
{
    FN_ENTER(0x0073824c);
    /* 0073824c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073824d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073824f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00738251: push 0x8f1aa4 */ { u32 v = 0x8f1aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00738256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073825c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073825d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00738264: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738267: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073826a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073826d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00738270: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00738273: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00738276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738277: push 0x9715d8 */ { u32 v = 0x9715d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073827c: call 0x738bfc */ r_esp -= 4; W32(r_esp, 0x738281u); f_00738bfc();
    /* 00738281: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00738288: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073828d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x738292u); f_005caba4();
    /* 00738292: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00738295: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00738298: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073829a: je 0x7382f2 */ if (fZ) goto L_007382f2;
L_0073829c:; BB(0x0073829c);
    /* 0073829c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007382a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007382aa: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 007382af: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7382b4u); f_0073ec50();
    /* 007382b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007382b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007382b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007382bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007382bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007382bd: call 0x7382f8 */ r_esp -= 4; W32(r_esp, 0x7382c2u); f_007382f8();
    /* 007382c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007382c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007382cc:; BB(0x007382cc);
    /* 007382cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007382d3: push 0x971640 */ { u32 v = 0x971640u; r_esp -= 4; W32(r_esp, v); }
    /* 007382d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007382da: call 0x738364 */ r_esp -= 4; W32(r_esp, 0x7382dfu); f_00738364();
    /* 007382df: mov eax, ebx */ r_eax = r_ebx;
    /* 007382e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007382e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007382e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007382ee: mov esp, ebp */ r_esp = r_ebp;
    /* 007382f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007382f1: ret  */ FN_RET(0x0073824c); r_esp += 4; return;
L_007382f2:; BB(0x007382f2);
    /* 007382f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007382f4: jmp 0x7382cc */ goto L_007382cc;
}

void f_007382f8(void) /* sub_7382F8 */
{
    FN_ENTER(0x007382f8);
    /* 007382f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007382f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007382fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007382fd: push 0x8f1ac0 */ { u32 v = 0x8f1ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00738302: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00738308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738309: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00738310: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738313: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00738316: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00738319: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073831c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073831f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00738322: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00738325: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00738328: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073832b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073832d: push 0x9f3154 */ { u32 v = 0x9f3154u; r_esp -= 4; W32(r_esp, v); }
    /* 00738332: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x738337u); f_007108c4();
    /* 00738337: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073833e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00738341: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00738344: mov dword ptr [ecx], 0xb40bc8 */ W32((u32)(r_ecx), 0xb40bc8u);
    /* 0073834a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073834b: call 0x738c1c */ r_esp -= 4; W32(r_esp, 0x738350u); f_00738c1c();
    /* 00738350: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00738353: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00738356: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073835d: mov esp, ebp */ r_esp = r_ebp;
    /* 0073835f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00738360: ret 8 */ FN_RET(0x007382f8); r_esp += 12; return;
}

void f_00738364(void) /* sub_738364 */
{
    FN_ENTER(0x00738364);
    /* 00738364: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738365: mov ebp, esp */ r_ebp = r_esp;
    /* 00738367: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00738369: push 0x8f1ae8 */ { u32 v = 0x8f1ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073836e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00738374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738375: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073837c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073837f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00738382: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00738385: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00738388: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073838b: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0073838e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00738391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738393: je 0x7383a5 */ if (fZ) goto L_007383a5;
L_00738395:; BB(0x00738395);
    /* 00738395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00738398: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073839f: mov esp, ebp */ r_esp = r_ebp;
    /* 007383a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007383a2: ret 4 */ FN_RET(0x00738364); r_esp += 8; return;
L_007383a5:; BB(0x007383a5);
    /* 007383a5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007383ac: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007383ae: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7383b3u); f_008581c5();
    /* 007383b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007383b4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007383b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007383b9: je 0x738405 */ if (fZ) goto L_00738405;
L_007383bb:; BB(0x007383bb);
    /* 007383bb: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007383c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007383c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007383cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007383cf: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007383d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007383d4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007383d7: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x7383dcu); f_00761320();
    /* 007383dc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007383df: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007383e6:; BB(0x007383e6);
    /* 007383e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007383e9: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 007383ec: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 007383ef: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007383f2: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007383f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007383f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007383ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00738401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00738402: ret 4 */ FN_RET(0x00738364); r_esp += 8; return;
L_00738405:; BB(0x00738405);
    /* 00738405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738407: jmp 0x7383e6 */ goto L_007383e6;
}

void f_00738380(void)
{
    FN_ENTER(0x00738380);
}

void f_0073840c(void) /* sub_73840C */
{
    FN_ENTER(0x0073840c);
    /* 0073840c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073840d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073840f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00738411: push 0x8f1b10 */ { u32 v = 0x8f1b10u; r_esp -= 4; W32(r_esp, v); }
    /* 00738416: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073841d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00738424: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738427: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073842a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073842d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00738430: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00738433: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00738436: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00738439: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0073843c: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0073843f: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 00738442: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00738445: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00738446: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00738449: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0073844c: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0073844f: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00738452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738453: call 0x738bfc */ r_esp -= 4; W32(r_esp, 0x738458u); f_00738bfc();
    /* 00738458: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073845f: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00738464: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x738469u); f_005caba4();
    /* 00738469: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073846c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073846f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738471: je 0x7384af */ if (fZ) goto L_007384af;
L_00738473:; BB(0x00738473);
    /* 00738473: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073847a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00738481: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00738484: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00738487: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0073848a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073848b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073848c: call 0x7382f8 */ r_esp -= 4; W32(r_esp, 0x738491u); f_007382f8();
    /* 00738491: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00738494: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073849b:; BB(0x0073849b);
    /* 0073849b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073849e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007384a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007384a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007384ab: mov esp, ebp */ r_esp = r_ebp;
    /* 007384ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007384ae: ret  */ FN_RET(0x0073840c); r_esp += 4; return;
L_007384af:; BB(0x007384af);
    /* 007384af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007384b1: jmp 0x73849b */ goto L_0073849b;
}

void f_007384b4(void) /* sub_7384B4 */
{
    FN_ENTER(0x007384b4);
    /* 007384b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007384b5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007384b8: mov esi, ecx */ r_esi = r_ecx;
    /* 007384ba: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007384c1: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007384c3: jne 0x738779 */ if (!fZ) goto L_00738779;
L_007384c9:; BB(0x007384c9);
    /* 007384c9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007384cb: jne 0x738779 */ if (!fZ) goto L_00738779;
L_007384d1:; BB(0x007384d1);
    /* 007384d1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007384d3: je 0x7385f7 */ if (fZ) goto L_007385f7;
L_007384d9:; BB(0x007384d9);
    /* 007384d9: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7384deu); f_00694c6c();
    /* 007384de: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007384e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007384e2: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007384e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007384e7: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007384ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007384ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007384f1: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007384f8: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7384fdu); f_007c09fc();
    /* 007384fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007384ff: je 0x73855b */ if (fZ) goto L_0073855b;
L_00738501:; BB(0x00738501);
    /* 00738501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738505: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738506: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073850b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x738510u); f_00814298();
    /* 00738510: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00738513: movsx edx, word ptr [esi + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 0073851a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0073851d: mov eax, edx */ r_eax = r_edx;
L_0073851f:; BB(0x0073851f);
    /* 0073851f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738522: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 00738525: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00738527: jl 0x7387df */ if ((fS!=fO)) goto L_007387df;
L_0073852d:; BB(0x0073852d);
    /* 0073852d: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073852f: je 0x7387d7 */ if (fZ) goto L_007387d7;
L_00738535:; BB(0x00738535);
    /* 00738535: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00738538: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 0073853b: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073853f: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738542: je 0x73854b */ if (fZ) goto L_0073854b;
L_00738544:; BB(0x00738544);
    /* 00738544: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00738549: jmp 0x73854d */ goto L_0073854d;
L_0073854b:; BB(0x0073854b);
    /* 0073854b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0073854d:; BB(0x0073854d);
    /* 0073854d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073854f: je 0x73851f */ if (fZ) goto L_0073851f;
L_00738551:; BB(0x00738551);
    /* 00738551: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738554: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_0073855b:; BB(0x0073855b);
    /* 0073855b: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x738560u); f_00694c6c();
    /* 00738560: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00738562: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00738564: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00738567: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738569: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073856f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738571: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738573: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0073857a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x73857fu); f_007c09fc();
    /* 0073857f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738581: je 0x738719 */ if (fZ) goto L_00738719;
L_00738587:; BB(0x00738587);
    /* 00738587: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073858a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073858b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073858c: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00738591: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x738596u); f_00814298();
    /* 00738596: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00738599: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 007385a0: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007385a7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007385aa: mov eax, ecx */ r_eax = r_ecx;
    /* 007385ac: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_007385b0:; BB(0x007385b0);
    /* 007385b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007385b3: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007385b6: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007385b8: jl 0x7385cd */ if ((fS!=fO)) goto L_007385cd;
L_007385ba:; BB(0x007385ba);
    /* 007385ba: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007385c1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007385c3: jne 0x73884d */ if (!fZ) goto L_0073884d;
L_007385c9:; BB(0x007385c9);
    /* 007385c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007385cb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007385cd:; BB(0x007385cd);
    /* 007385cd: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007385cf: je 0x7387cb */ if (fZ) goto L_007387cb;
L_007385d5:; BB(0x007385d5);
    /* 007385d5: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 007385d8: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 007385db: movzx ebx, word ptr [edi + 4] */ r_ebx = (u32)R16((u32)(r_edi+0x4u));
    /* 007385df: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007385e2: je 0x7385b0 */ if (fZ) goto L_007385b0;
L_007385e4:; BB(0x007385e4);
    /* 007385e4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007385e7: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007385eb: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 007385f2: jmp 0x738719 */ goto L_00738719;
L_007385f7:; BB(0x007385f7);
    /* 007385f7: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7385fcu); f_00694c6c();
    /* 007385fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007385fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00738600: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00738603: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738605: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073860b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073860d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073860f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00738616: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x73861bu); f_007c0c6c();
    /* 0073861b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073861d: je 0x738679 */ if (fZ) goto L_00738679;
L_0073861f:; BB(0x0073861f);
    /* 0073861f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738624: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00738629: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73862eu); f_00814298();
    /* 0073862e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00738631: movsx edx, word ptr [esi + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00738638: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0073863b: mov eax, edx */ r_eax = r_edx;
L_0073863d:; BB(0x0073863d);
    /* 0073863d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738640: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 00738643: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00738645: jl 0x73881a */ if ((fS!=fO)) goto L_0073881a;
L_0073864b:; BB(0x0073864b);
    /* 0073864b: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073864d: je 0x738812 */ if (fZ) goto L_00738812;
L_00738653:; BB(0x00738653);
    /* 00738653: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00738656: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 00738659: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073865d: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738660: je 0x738669 */ if (fZ) goto L_00738669;
L_00738662:; BB(0x00738662);
    /* 00738662: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00738667: jmp 0x73866b */ goto L_0073866b;
L_00738669:; BB(0x00738669);
    /* 00738669: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0073866b:; BB(0x0073866b);
    /* 0073866b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073866d: je 0x73863d */ if (fZ) goto L_0073863d;
L_0073866f:; BB(0x0073866f);
    /* 0073866f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738672: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00738679:; BB(0x00738679);
    /* 00738679: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x73867eu); f_00694c6c();
    /* 0073867e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00738680: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00738682: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00738685: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738687: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073868d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073868f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738691: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00738698: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x73869du); f_007c0c6c();
    /* 0073869d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073869f: je 0x738719 */ if (fZ) goto L_00738719;
L_007386a1:; BB(0x007386a1);
    /* 007386a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007386a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007386a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007386a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007386a6: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007386ab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7386b0u); f_00814298();
    /* 007386b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007386b3: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 007386ba: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007386c1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007386c4: mov eax, ecx */ r_eax = r_ecx;
    /* 007386c6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_007386ca:; BB(0x007386ca);
    /* 007386ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007386cd: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007386d0: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007386d2: jl 0x7386e7 */ if ((fS!=fO)) goto L_007386e7;
L_007386d4:; BB(0x007386d4);
    /* 007386d4: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007386db: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007386dd: jne 0x738841 */ if (!fZ) goto L_00738841;
L_007386e3:; BB(0x007386e3);
    /* 007386e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007386e5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007386e7:; BB(0x007386e7);
    /* 007386e7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007386e9: je 0x738806 */ if (fZ) goto L_00738806;
L_007386ef:; BB(0x007386ef);
    /* 007386ef: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 007386f2: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 007386f5: movzx ebx, word ptr [edi + 4] */ r_ebx = (u32)R16((u32)(r_edi+0x4u));
    /* 007386f9: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007386fc: je 0x738705 */ if (fZ) goto L_00738705;
L_007386fe:; BB(0x007386fe);
    /* 007386fe: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00738703: jmp 0x738707 */ goto L_00738707;
L_00738705:; BB(0x00738705);
    /* 00738705: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00738707:; BB(0x00738707);
    /* 00738707: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738709: je 0x7386ca */ if (fZ) goto L_007386ca;
L_0073870b:; BB(0x0073870b);
    /* 0073870b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0073870e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00738712: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00738719:; BB(0x00738719);
    /* 00738719: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x73871eu); f_00694c6c();
    /* 0073871e: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00738724: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073872a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073872b: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0073872e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738730: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738732: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738734: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0073873b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x738740u); f_007c1160();
    /* 00738740: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738742: je 0x73874b */ if (fZ) goto L_0073874b;
L_00738744:; BB(0x00738744);
    /* 00738744: mov ecx, esi */ r_ecx = r_esi;
    /* 00738746: call 0x73885c */ r_esp -= 4; W32(r_esp, 0x73874bu); f_0073885c();
L_0073874b:; BB(0x0073874b);
    /* 0073874b: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x738750u); f_00694c6c();
    /* 00738750: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00738756: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00738759: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073875b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073875d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073875f: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00738761: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00738768: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00738769: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x73876eu); f_007c1160();
    /* 0073876e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738770: je 0x738779 */ if (fZ) goto L_00738779;
L_00738772:; BB(0x00738772);
    /* 00738772: mov ecx, esi */ r_ecx = r_esi;
    /* 00738774: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x738779u); f_007388b0();
L_00738779:; BB(0x00738779);
    /* 00738779: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 0073877c: fcomp dword ptr [0x971620] */ fx_compare(ST(0), R_F32((u32)(0x971620u))); FPOP();
    /* 00738782: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00738784: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00738785: jb 0x73879f */ if (fC) goto L_0073879f;
L_00738787:; BB(0x00738787);
    /* 00738787: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073878a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073878c: je 0x738793 */ if (fZ) goto L_00738793;
L_0073878e:; BB(0x0073878e);
    /* 0073878e: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x738793u); f_00761388();
L_00738793:; BB(0x00738793);
    /* 00738793: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 00738796: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738798: je 0x73879f */ if (fZ) goto L_0073879f;
L_0073879a:; BB(0x0073879a);
    /* 0073879a: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x73879fu); f_0073f68c();
L_0073879f:; BB(0x0073879f);
    /* 0073879f: mov ecx, esi */ r_ecx = r_esi;
    /* 007387a1: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7387a6u); f_00710db4();
    /* 007387a6: mov ecx, esi */ r_ecx = r_esi;
    /* 007387a8: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x7387adu); f_007107d8();
    /* 007387ad: mov ecx, esi */ r_ecx = r_esi;
    /* 007387af: call 0x7388f0 */ r_esp -= 4; W32(r_esp, 0x7387b4u); f_007388f0();
    /* 007387b4: mov ecx, esi */ r_ecx = r_esi;
    /* 007387b6: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x7387bbu); f_0071087c();
    /* 007387bb: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 007387be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007387bf: mov ecx, esi */ r_ecx = r_esi;
    /* 007387c1: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7387c6u); f_0072a5ec();
    /* 007387c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007387c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007387ca: ret  */ FN_RET(0x007384b4); r_esp += 4; return;
L_007387cb:; BB(0x007387cb);
    /* 007387cb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007387ce: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007387d2: jmp 0x738719 */ goto L_00738719;
L_007387d7:; BB(0x007387d7);
    /* 007387d7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007387da: jmp 0x73855b */ goto L_0073855b;
L_007387df:; BB(0x007387df);
    /* 007387df: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007387e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007387e8: jne 0x7387fe */ if (!fZ) goto L_007387fe;
L_007387ea:; BB(0x007387ea);
    /* 007387ea: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 007387f1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007387f4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007387f7: mov ebx, eax */ r_ebx = r_eax;
    /* 007387f9: jmp 0x73852d */ goto L_0073852d;
L_007387fe:; BB(0x007387fe);
    /* 007387fe: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738801: jmp 0x73855b */ goto L_0073855b;
L_00738806:; BB(0x00738806);
    /* 00738806: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738809: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0073880d: jmp 0x738719 */ goto L_00738719;
L_00738812:; BB(0x00738812);
    /* 00738812: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738815: jmp 0x738679 */ goto L_00738679;
L_0073881a:; BB(0x0073881a);
    /* 0073881a: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00738821: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738823: jne 0x738839 */ if (!fZ) goto L_00738839;
L_00738825:; BB(0x00738825);
    /* 00738825: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 0073882c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073882f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00738832: mov ebx, eax */ r_ebx = r_eax;
    /* 00738834: jmp 0x73864b */ goto L_0073864b;
L_00738839:; BB(0x00738839);
    /* 00738839: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0073883c: jmp 0x738679 */ goto L_00738679;
L_00738841:; BB(0x00738841);
    /* 00738841: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738844: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00738848: jmp 0x738719 */ goto L_00738719;
L_0073884d:; BB(0x0073884d);
    /* 0073884d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00738850: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00738854: jmp 0x738719 */ goto L_00738719;
}

void f_0073885c(void) /* sub_73885C */
{
    FN_ENTER(0x0073885c);
    /* 0073885c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073885d: mov edi, ecx */ r_edi = r_ecx;
    /* 0073885f: movsx edx, word ptr [edi + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x88u));
    /* 00738866: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00738869: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0073886c: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00738870: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738875: je 0x738879 */ if (fZ) goto L_00738879;
L_00738877:; BB(0x00738877);
    /* 00738877: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00738878: ret  */ FN_RET(0x0073885c); r_esp += 4; return;
L_00738879:; BB(0x00738879);
    /* 00738879: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073887b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073887c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073887d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073887e: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00738883: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x738888u); f_00814298();
    /* 00738888: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073888b: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00738892: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00738895: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073889a: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 007388a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007388a3: je 0x7388ac */ if (fZ) goto L_007388ac;
L_007388a5:; BB(0x007388a5);
    /* 007388a5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007388a7: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7388acu); f_00760acc();
L_007388ac:; BB(0x007388ac);
    /* 007388ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007388ad: ret  */ FN_RET(0x0073885c); r_esp += 4; return;
}

void f_007388b0(void) /* sub_7388B0 */
{
    FN_ENTER(0x007388b0);
    /* 007388b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007388b1: mov edi, ecx */ r_edi = r_ecx;
    /* 007388b3: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 007388ba: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007388bc: je 0x7388c0 */ if (fZ) goto L_007388c0;
L_007388be:; BB(0x007388be);
    /* 007388be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007388bf: ret  */ FN_RET(0x007388b0); r_esp += 4; return;
L_007388c0:; BB(0x007388c0);
    /* 007388c0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007388c2: je 0x7388c6 */ if (fZ) goto L_007388c6;
L_007388c4:; BB(0x007388c4);
    /* 007388c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007388c5: ret  */ FN_RET(0x007388b0); r_esp += 4; return;
L_007388c6:; BB(0x007388c6);
    /* 007388c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007388c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007388c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007388ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007388cb: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007388d0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7388d5u); f_00814298();
    /* 007388d5: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 007388dc: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007388e1: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 007388e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007388eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007388ec: ret  */ FN_RET(0x007388b0); r_esp += 4; return;
}

void f_007388f0(void) /* sub_7388F0 */
{
    FN_ENTER(0x007388f0);
    /* 007388f0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007388f3: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 007388f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007388f8: je 0x738901 */ if (fZ) goto L_00738901;
L_007388fa:; BB(0x007388fa);
    /* 007388fa: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 007388fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007388ff: jbe 0x738905 */ if ((fC||fZ)) goto L_00738905;
L_00738901:; BB(0x00738901);
    /* 00738901: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00738904: ret  */ FN_RET(0x007388f0); r_esp += 4; return;
L_00738905:; BB(0x00738905);
    /* 00738905: fld dword ptr [0x971618] */ FPUSH(R_F32((u32)(0x971618u)));
    /* 0073890b: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0073890e: fmul dword ptr [0x971614] */ ST(0) = ST(0) * R_F32((u32)(0x971614u));
    /* 00738914: movsx eax, word ptr [ecx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 0073891b: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0073891e: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00738921: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00738923: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00738925: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00738928: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0073892b: fadd dword ptr [0x97161c] */ ST(0) = ST(0) + R_F32((u32)(0x97161cu));
    /* 00738931: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00738933: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00738935: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00738937: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0073893a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073893d: ret  */ FN_RET(0x007388f0); r_esp += 4; return;
}

void f_00738940(void) /* sub_738940 */
{
    FN_ENTER(0x00738940);
    /* 00738940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738941: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738942: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00738944: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00738946: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x73894bu); f_007108f4();
    /* 0073894b: mov ebp, eax */ r_ebp = r_eax;
    /* 0073894d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073894e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00738950: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x738955u); f_00710f80();
    /* 00738955: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738956: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00738959: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073895a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073895c: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x738961u); f_0072a648();
    /* 00738961: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738962: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00738964: call 0x73898c */ r_esp -= 4; W32(r_esp, 0x738969u); f_0073898c();
    /* 00738969: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0073896c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073896e: je 0x738976 */ if (fZ) goto L_00738976;
L_00738970:; BB(0x00738970);
    /* 00738970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738971: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x738976u); f_00761390();
L_00738976:; BB(0x00738976);
    /* 00738976: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 00738979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073897b: je 0x738989 */ if (fZ) goto L_00738989;
L_0073897d:; BB(0x0073897d);
    /* 0073897d: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00738980: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738981: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738982: mov ecx, eax */ r_ecx = r_eax;
    /* 00738984: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x738989u); f_0073f694();
L_00738989:; BB(0x00738989);
    /* 00738989: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073898a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073898b: ret  */ FN_RET(0x00738940); r_esp += 4; return;
}

void f_0073898c(void) /* sub_73898C */
{
    FN_ENTER(0x0073898c);
    /* 0073898c: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00738993: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00738996: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00738999: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0073899d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007389a0: jne 0x7389a5 */ if (!fZ) goto L_007389a5;
L_007389a2:; BB(0x007389a2);
    /* 007389a2: ret 4 */ FN_RET(0x0073898c); r_esp += 8; return;
L_007389a5:; BB(0x007389a5);
    /* 007389a5: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 007389ac: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007389af: je 0x7389b8 */ if (fZ) goto L_007389b8;
L_007389b1:; BB(0x007389b1);
    /* 007389b1: mov edx, 1 */ r_edx = 0x1u;
    /* 007389b6: jmp 0x7389ba */ goto L_007389ba;
L_007389b8:; BB(0x007389b8);
    /* 007389b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007389ba:; BB(0x007389ba);
    /* 007389ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007389bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007389bc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007389c0: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x7389c5u); f_007120ec();
    /* 007389c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007389c8: ret 4 */ FN_RET(0x0073898c); r_esp += 8; return;
}

void f_007389cc(void) /* sub_7389CC */
{
    FN_ENTER(0x007389cc);
    /* 007389cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007389cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007389cf: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 007389d6: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 007389dd: jl 0x7389e3 */ if ((fS!=fO)) goto L_007389e3;
L_007389df:; BB(0x007389df);
    /* 007389df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007389e0: ret 8 */ FN_RET(0x007389cc); r_esp += 12; return;
L_007389e3:; BB(0x007389e3);
    /* 007389e3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007389e7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007389eb: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007389ee: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 007389f1: call 0x72ea1c */ r_esp -= 4; W32(r_esp, 0x7389f6u); f_0072ea1c();
    /* 007389f6: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007389fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007389ff: ret 8 */ FN_RET(0x007389cc); r_esp += 12; return;
}

void f_00738a04(void) /* sub_738A04 */
{
    FN_ENTER(0x00738a04);
    /* 00738a04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738a05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00738a07: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00738a0e: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00738a15: jl 0x738a1b */ if ((fS!=fO)) goto L_00738a1b;
L_00738a17:; BB(0x00738a17);
    /* 00738a17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738a18: ret 0xc */ FN_RET(0x00738a04); r_esp += 16; return;
L_00738a1b:; BB(0x00738a1b);
    /* 00738a1b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00738a1f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00738a23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00738a27: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00738a2a: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00738a2d: call 0x72eaa4 */ r_esp -= 4; W32(r_esp, 0x738a32u); f_0072eaa4();
    /* 00738a32: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00738a3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738a3b: ret 0xc */ FN_RET(0x00738a04); r_esp += 16; return;
}

void f_00738a40(void) /* sub_738A40 */
{
    FN_ENTER(0x00738a40);
    /* 00738a40: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738a43: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00738a4a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00738a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00738a4e: jle 0x738a95 */ if ((fZ||fS!=fO)) goto L_00738a95;
L_00738a50:; BB(0x00738a50);
    /* 00738a50: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00738a54: mov ebx, edx */ r_ebx = r_edx;
    /* 00738a56: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00738a59: mov esi, ecx */ r_esi = r_ecx;
L_00738a5b:; BB(0x00738a5b);
    /* 00738a5b: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00738a5e: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00738a61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738a63: je 0x738a87 */ if (fZ) goto L_00738a87;
L_00738a65:; BB(0x00738a65);
    /* 00738a65: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00738a69: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738a6c: je 0x738a87 */ if (fZ) goto L_00738a87;
L_00738a6e:; BB(0x00738a6e);
    /* 00738a6e: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00738a71: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738a75: jne 0x738a87 */ if (!fZ) goto L_00738a87;
L_00738a77:; BB(0x00738a77);
    /* 00738a77: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00738a7b: call 0x72eb10 */ r_esp -= 4; W32(r_esp, 0x738a80u); f_0072eb10();
    /* 00738a80: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_00738a87:; BB(0x00738a87);
    /* 00738a87: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00738a8a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00738a8c: jl 0x738a5b */ if ((fS!=fO)) goto L_00738a5b;
L_00738a8e:; BB(0x00738a8e);
    /* 00738a8e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00738a92: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00738a95:; BB(0x00738a95);
    /* 00738a95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00738a98: ret 8 */ FN_RET(0x00738a40); r_esp += 12; return;
}

void f_00738a9c(void) /* sub_738A9C */
{
    FN_ENTER(0x00738a9c);
    /* 00738a9c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738a9f: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00738aa6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00738aa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00738aaa: jle 0x738b00 */ if ((fZ||fS!=fO)) goto L_00738b00;
L_00738aac:; BB(0x00738aac);
    /* 00738aac: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00738ab0: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00738ab4: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00738ab7:; BB(0x00738ab7);
    /* 00738ab7: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00738aba: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 00738abd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738abf: je 0x738aee */ if (fZ) goto L_00738aee;
L_00738ac1:; BB(0x00738ac1);
    /* 00738ac1: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 00738ac5: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738acb: je 0x738aee */ if (fZ) goto L_00738aee;
L_00738acd:; BB(0x00738acd);
    /* 00738acd: mov ebx, dword ptr [edi + 0x18] */ r_ebx = R32((u32)(r_edi+0x18u));
    /* 00738ad0: cmp ebx, dword ptr [esp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738ad4: jne 0x738aee */ if (!fZ) goto L_00738aee;
L_00738ad6:; BB(0x00738ad6);
    /* 00738ad6: mov dword ptr [edi + 0x24], 0xff909090 */ W32((u32)(r_edi+0x24u), 0xff909090u);
    /* 00738add: and esi, 0xfffe */ {  u32 a = r_esi; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00738ae3: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00738ae7: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_00738aee:; BB(0x00738aee);
    /* 00738aee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00738af1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00738af3: jl 0x738ab7 */ if ((fS!=fO)) goto L_00738ab7;
L_00738af5:; BB(0x00738af5);
    /* 00738af5: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00738af9: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00738afd: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00738b00:; BB(0x00738b00);
    /* 00738b00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00738b03: ret 4 */ FN_RET(0x00738a9c); r_esp += 8; return;
}

void f_00738b08(void) /* sub_738B08 */
{
    FN_ENTER(0x00738b08);
    /* 00738b08: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738b0b: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00738b12: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00738b14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00738b16: jle 0x738b6c */ if ((fZ||fS!=fO)) goto L_00738b6c;
L_00738b18:; BB(0x00738b18);
    /* 00738b18: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00738b1c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00738b20: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00738b23:; BB(0x00738b23);
    /* 00738b23: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00738b26: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 00738b29: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738b2b: je 0x738b5a */ if (fZ) goto L_00738b5a;
L_00738b2d:; BB(0x00738b2d);
    /* 00738b2d: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 00738b31: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738b37: je 0x738b5a */ if (fZ) goto L_00738b5a;
L_00738b39:; BB(0x00738b39);
    /* 00738b39: mov ebx, dword ptr [edi + 0x18] */ r_ebx = R32((u32)(r_edi+0x18u));
    /* 00738b3c: cmp ebx, dword ptr [esp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738b40: jne 0x738b5a */ if (!fZ) goto L_00738b5a;
L_00738b42:; BB(0x00738b42);
    /* 00738b42: mov dword ptr [edi + 0x24], 0xffffffff */ W32((u32)(r_edi+0x24u), 0xffffffffu);
    /* 00738b49: or esi, 0xffff0001 */ {  u32 a = r_esi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00738b4f: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00738b53: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_00738b5a:; BB(0x00738b5a);
    /* 00738b5a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00738b5d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00738b5f: jl 0x738b23 */ if ((fS!=fO)) goto L_00738b23;
L_00738b61:; BB(0x00738b61);
    /* 00738b61: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00738b65: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00738b69: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00738b6c:; BB(0x00738b6c);
    /* 00738b6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00738b6f: ret 4 */ FN_RET(0x00738b08); r_esp += 8; return;
}

void f_00738b74(void) /* sub_738B74 */
{
    FN_ENTER(0x00738b74);
    /* 00738b74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00738b75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738b76: mov eax, ecx */ r_eax = r_ecx;
    /* 00738b78: movsx edx, word ptr [eax + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
    /* 00738b7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00738b81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00738b83: jle 0x738bab */ if ((fZ||fS!=fO)) goto L_00738bab;
L_00738b85:; BB(0x00738b85);
    /* 00738b85: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_00738b88:; BB(0x00738b88);
    /* 00738b88: mov ebx, dword ptr [eax + ecx*4] */ r_ebx = R32((u32)(r_eax+r_ecx*4));
    /* 00738b8b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738b8e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738b90: je 0x738ba7 */ if (fZ) goto L_00738ba7;
L_00738b92:; BB(0x00738b92);
    /* 00738b92: movzx esi, word ptr [ebx + 4] */ r_esi = (u32)R16((u32)(r_ebx+0x4u));
    /* 00738b96: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738b9c: je 0x738ba7 */ if (fZ) goto L_00738ba7;
L_00738b9e:; BB(0x00738b9e);
    /* 00738b9e: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00738ba1: cmp esi, dword ptr [esp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00738ba5: je 0x738bb2 */ if (fZ) goto L_00738bb2;
L_00738ba7:; BB(0x00738ba7);
    /* 00738ba7: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00738ba9: jl 0x738b88 */ if ((fS!=fO)) goto L_00738b88;
L_00738bab:; BB(0x00738bab);
    /* 00738bab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738bad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738bae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00738baf: ret 4 */ FN_RET(0x00738b74); r_esp += 8; return;
L_00738bb2:; BB(0x00738bb2);
    /* 00738bb2: mov eax, ebx */ r_eax = r_ebx;
    /* 00738bb4: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00738bb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738bb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00738bb9: ret 4 */ FN_RET(0x00738b74); r_esp += 8; return;
}

void f_00738bbc(void) /* sub_738BBC */
{
    FN_ENTER(0x00738bbc);
    /* 00738bbc: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00738bc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738bc3: jl 0x738bce */ if ((fS!=fO)) goto L_00738bce;
L_00738bc5:; BB(0x00738bc5);
    /* 00738bc5: cmp ax, word ptr [ecx + 0x8a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00738bcc: jl 0x738bd1 */ if ((fS!=fO)) goto L_00738bd1;
L_00738bce:; BB(0x00738bce);
    /* 00738bce: ret 4 */ FN_RET(0x00738bbc); r_esp += 8; return;
L_00738bd1:; BB(0x00738bd1);
    /* 00738bd1: mov word ptr [ecx + 0x88], ax */ W16((u32)(r_ecx+0x88u), (u16)r_eax);
    /* 00738bd8: ret 4 */ FN_RET(0x00738bbc); r_esp += 8; return;
}

void f_00738bdc(void) /* sub_738BDC */
{
    FN_ENTER(0x00738bdc);
    /* 00738bdc: mov dword ptr [0xa9a8d0], 0x3f800000 */ W32((u32)(0xa9a8d0u), 0x3f800000u);
    /* 00738be6: mov dword ptr [0xa9a8d4], 0x41000000 */ W32((u32)(0xa9a8d4u), 0x41000000u);
    /* 00738bf0: mov dword ptr [0xa9a8d8], 0x3fc00000 */ W32((u32)(0xa9a8d8u), 0x3fc00000u);
    /* 00738bfa: ret  */ FN_RET(0x00738bdc); r_esp += 4; return;
}

void f_00738bfc(void) /* sub_738BFC */
{
    FN_ENTER(0x00738bfc);
    /* 00738bfc: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00738c00: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00738c04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00738c06: mov dword ptr [0x9f3154], edx */ W32((u32)(0x9f3154u), r_edx);
    /* 00738c0c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00738c0f: mov dword ptr [0x9f3158], edx */ W32((u32)(0x9f3158u), r_edx);
    /* 00738c15: mov dword ptr [0x9f314c], eax */ W32((u32)(0x9f314cu), r_eax);
    /* 00738c1a: ret  */ FN_RET(0x00738bfc); r_esp += 4; return;
}

void f_00738c1c(void) /* sub_738C1C */
{
    FN_ENTER(0x00738c1c);
    /* 00738c1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00738c1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00738c1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738c1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738c20: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738c23: mov esi, ecx */ r_esi = r_ecx;
    /* 00738c25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00738c27: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00738c2b: mov eax, dword ptr [0x9f3144] */ r_eax = R32((u32)(0x9f3144u));
    /* 00738c30: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00738c33: mov word ptr [esi + 0x86], dx */ W16((u32)(r_esi+0x86u), (u16)r_edx);
    /* 00738c3a: mov word ptr [esi + 0x88], dx */ W16((u32)(r_esi+0x88u), (u16)r_edx);
    /* 00738c41: mov word ptr [esi + 0x8a], bp */ W16((u32)(r_esi+0x8au), (u16)r_ebp);
    /* 00738c48: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00738c4f: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 00738c52: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 00738c55: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00738c57: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00738c59: jbe 0x738d9f */ if ((fC||fZ)) goto L_00738d9f;
L_00738c5f:; BB(0x00738c5f);
    /* 00738c5f: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00738c62: jb 0x738d71 */ if (fC) goto L_00738d71;
L_00738c68:; BB(0x00738c68);
    /* 00738c68: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00738c6c: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00738c6f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00738c73: lea ecx, [ebx + ebx*4] */ r_ecx = (u32)(r_ebx+r_ebx*4);
    /* 00738c76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738c78: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738c7a: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00738c7d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738c7f: lea edi, [eax + eax + 0x14] */ r_edi = (u32)(r_eax+r_eax+0x14u);
    /* 00738c83: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00738c86: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00738c8a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738c8c: lea edx, [eax + eax + 0x28] */ r_edx = (u32)(r_eax+r_eax+0x28u);
    /* 00738c90: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00738c93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738c95: lea eax, [eax + eax + 0x3c] */ r_eax = (u32)(r_eax+r_eax+0x3cu);
    /* 00738c99: lea edi, [ebx + ebx*4] */ r_edi = (u32)(r_ebx+r_ebx*4);
    /* 00738c9c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00738c9e: lea edi, [edi + edi + 0x50] */ r_edi = (u32)(r_edi+r_edi+0x50u);
    /* 00738ca2: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_00738ca6:; BB(0x00738ca6);
    /* 00738ca6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00738caa: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00738cad: mov edi, dword ptr [edi + ebx*4] */ r_edi = R32((u32)(r_edi+r_ebx*4));
    /* 00738cb0: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00738cb3: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00738cb6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00738cb8: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00738cbb: fadd dword ptr [ebp*4 + 0x9715e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x9715e0u));
    /* 00738cc2: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00738cc5: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00738cc9: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 00738ccc: mov ebp, dword ptr [ebp + ebx*4 + 4] */ r_ebp = R32((u32)(r_ebp+r_ebx*4+0x4u));
    /* 00738cd0: add dword ptr [esp + 0x1c], 0x64 */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00738cd5: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00738cd9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738cdd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00738ce1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738ce5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00738ce9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738ced: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00738cf0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00738cf2: fadd dword ptr [edi*4 + 0x9715e0] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x9715e0u));
    /* 00738cf9: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00738cfc: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738cff: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 00738d02: mov edi, dword ptr [ebp + ebx*4 + 8] */ r_edi = R32((u32)(r_ebp+r_ebx*4+0x8u));
    /* 00738d06: mov ebp, edx */ r_ebp = r_edx;
    /* 00738d08: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00738d0b: fadd dword ptr [ebp*4 + 0x9715e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x9715e0u));
    /* 00738d12: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00738d15: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00738d18: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 00738d1b: mov edi, dword ptr [ebp + ebx*4 + 0xc] */ r_edi = R32((u32)(r_ebp+r_ebx*4+0xcu));
    /* 00738d1f: mov ebp, eax */ r_ebp = r_eax;
    /* 00738d21: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00738d24: fadd dword ptr [ebp*4 + 0x9715e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x9715e0u));
    /* 00738d2b: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00738d2e: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00738d32: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 00738d35: mov esi, dword ptr [ebp + ebx*4 + 0x10] */ r_esi = R32((u32)(r_ebp+r_ebx*4+0x10u));
    /* 00738d39: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00738d3d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738d41: mov ebp, edi */ r_ebp = r_edi;
    /* 00738d43: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00738d46: fadd dword ptr [ebp*4 + 0x9715e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x9715e0u));
    /* 00738d4d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00738d51: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00738d54: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738d57: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00738d5a: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00738d5e: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00738d61: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00738d63: jbe 0x738ca6 */ if ((fC||fZ)) goto L_00738ca6;
L_00738d69:; BB(0x00738d69);
    /* 00738d69: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00738d6d: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_00738d71:; BB(0x00738d71);
    /* 00738d71: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00738d74: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738d76: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00738d78:; BB(0x00738d78);
    /* 00738d78: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00738d7b: mov edi, dword ptr [edx + ebx*4] */ r_edi = R32((u32)(r_edx+r_ebx*4));
    /* 00738d7e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00738d82: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738d86: mov ecx, eax */ r_ecx = r_eax;
    /* 00738d88: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00738d8b: fadd dword ptr [ecx*4 + 0x9715e0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x9715e0u));
    /* 00738d92: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00738d95: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738d98: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00738d9b: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00738d9d: jb 0x738d78 */ if (fC) goto L_00738d78;
L_00738d9f:; BB(0x00738d9f);
    /* 00738d9f: push 0x47185800 */ { u32 v = 0x47185800u; r_esp -= 4; W32(r_esp, v); }
    /* 00738da4: mov ecx, esi */ r_ecx = r_esi;
    /* 00738da6: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x738dabu); f_00712624();
    /* 00738dab: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00738dae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738daf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00738db0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00738db1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00738db2: ret 4 */ FN_RET(0x00738c1c); r_esp += 8; return;
}

void f_00738db8(void) /* sub_738DB8 */
{
    FN_ENTER(0x00738db8);
    /* 00738db8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738db9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00738dbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00738dbd: call 0x738ddc */ r_esp -= 4; W32(r_esp, 0x738dc2u); f_00738ddc();
    /* 00738dc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00738dc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738dc8: jne 0x738dce */ if (!fZ) goto L_00738dce;
L_00738dca:; BB(0x00738dca);
    /* 00738dca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738dcb: ret 4 */ FN_RET(0x00738db8); r_esp += 8; return;
L_00738dce:; BB(0x00738dce);
    /* 00738dce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00738dcf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x738dd4u); f_005c2f74();
    /* 00738dd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00738dd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00738dd6: ret 4 */ FN_RET(0x00738db8); r_esp += 8; return;
}

void f_00738ddc(void) /* sub_738DDC */
{
    FN_ENTER(0x00738ddc);
    /* 00738ddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738ddd: mov ebp, esp */ r_ebp = r_esp;
    /* 00738ddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00738de1: push 0x8f1b2c */ { u32 v = 0x8f1b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00738de6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00738dec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738ded: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00738df4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738df7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00738dfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00738dfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00738e00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00738e03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00738e06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00738e09: mov dword ptr [ecx], 0xb40c30 */ W32((u32)(r_ecx), 0xb40c30u);
    /* 00738e0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00738e16: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x738e1bu); f_00710c28();
    /* 00738e1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00738e1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00738e25: mov esp, ebp */ r_esp = r_ebp;
    /* 00738e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00738e28: ret  */ FN_RET(0x00738ddc); r_esp += 4; return;
}

void f_00738e2c(void) /* sub_738E2C */
{
    FN_ENTER(0x00738e2c);
    /* 00738e2c: movzx eax, byte ptr [ecx + 0x13] */ r_eax = (u32)R8((u32)(r_ecx+0x13u));
    /* 00738e30: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738e32: je 0x738e3a */ if (fZ) goto L_00738e3a;
L_00738e34:; BB(0x00738e34);
    /* 00738e34: mov eax, 1 */ r_eax = 0x1u;
    /* 00738e39: ret  */ FN_RET(0x00738e2c); r_esp += 4; return;
L_00738e3a:; BB(0x00738e3a);
    /* 00738e3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738e3c: ret  */ FN_RET(0x00738e2c); r_esp += 4; return;
}

void f_00738e40(void) /* sub_738E40 */
{
    FN_ENTER(0x00738e40);
    /* 00738e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00738e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00738e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00738e45: push 0x8f1b62 */ { u32 v = 0x8f1b62u; r_esp -= 4; W32(r_esp, v); }
    /* 00738e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00738e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00738e58: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00738e5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00738e61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00738e64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00738e67: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 00738e6c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00738e73: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x738e78u); f_005caba4();
    /* 00738e78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00738e7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00738e7e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00738e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00738e83: je 0x738f69 */ if (fZ) goto L_00738f69;
L_00738e89:; BB(0x00738e89);
    /* 00738e89: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00738e90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00738e97: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00738e9a: mov ecx, eax */ r_ecx = r_eax;
    /* 00738e9c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00738ea0: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00738ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00738ea4: push 0x9f316c */ { u32 v = 0x9f316cu; r_esp -= 4; W32(r_esp, v); }
    /* 00738ea9: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x738eaeu); f_00710d30();
    /* 00738eae: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00738eb5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00738eb8: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00738ebc: mov dword ptr [ecx], 0xb40c30 */ W32((u32)(r_ecx), 0xb40c30u);
    /* 00738ec2: mov esi, dword ptr [0x9f3168] */ r_esi = R32((u32)(0x9f3168u));
    /* 00738ec8: mov byte ptr [ecx + 0x60], 4 */ W8((u32)(r_ecx+0x60u), 0x4u);
    /* 00738ecc: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00738ecf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738ed1: mov dword ptr [ecx + 0x64], 2 */ W32((u32)(r_ecx+0x64u), 0x2u);
    /* 00738ed8: mov byte ptr [ecx + 0x61], al */ W8((u32)(r_ecx+0x61u), (u8)r_eax);
    /* 00738edb: mov word ptr [ecx + 0x62], ax */ W16((u32)(r_ecx+0x62u), (u16)r_eax);
    /* 00738edf: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 00738ee3: lea ebx, [ecx + 0x68] */ r_ebx = (u32)(r_ecx+0x68u);
    /* 00738ee6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00738ee8:; BB(0x00738ee8);
    /* 00738ee8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00738eea: call 0x739fcc */ r_esp -= 4; W32(r_esp, 0x738eefu); f_00739fcc();
    /* 00738eef: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00738ef2: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00738ef5: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00738ef8: jl 0x738ee8 */ if ((fS!=fO)) goto L_00738ee8;
L_00738efa:; BB(0x00738efa);
    /* 00738efa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00738efd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738eff: mov dword ptr [ecx + 0x158], eax */ W32((u32)(r_ecx+0x158u), r_eax);
    /* 00738f05: mov dword ptr [ecx + 0x15c], eax */ W32((u32)(r_ecx+0x15cu), r_eax);
    /* 00738f0b: mov dword ptr [ecx + 0x160], eax */ W32((u32)(r_ecx+0x160u), r_eax);
    /* 00738f11: mov dword ptr [ecx + 0x164], eax */ W32((u32)(r_ecx+0x164u), r_eax);
    /* 00738f17: mov dword ptr [ecx + 0x168], eax */ W32((u32)(r_ecx+0x168u), r_eax);
    /* 00738f1d: mov dword ptr [ecx + 0x16c], eax */ W32((u32)(r_ecx+0x16cu), r_eax);
    /* 00738f23: mov dword ptr [ecx + 0x170], eax */ W32((u32)(r_ecx+0x170u), r_eax);
    /* 00738f29: mov dword ptr [ecx + 0x174], eax */ W32((u32)(r_ecx+0x174u), r_eax);
    /* 00738f2f: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 00738f35: mov dword ptr [ecx + 0x17c], eax */ W32((u32)(r_ecx+0x17cu), r_eax);
    /* 00738f3b: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x738f40u); f_00738f70();
    /* 00738f40: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00738f43: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x738f48u); f_00710f64();
    /* 00738f48: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00738f4f:; BB(0x00738f4f);
    /* 00738f4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00738f52: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00738f55: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00738f58: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00738f5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00738f5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00738f65: mov esp, ebp */ r_esp = r_ebp;
    /* 00738f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00738f68: ret  */ FN_RET(0x00738e40); r_esp += 4; return;
L_00738f69:; BB(0x00738f69);
    /* 00738f69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00738f6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00738f6e: jmp 0x738f4f */ goto L_00738f4f;
}

void f_00738f70(void) /* sub_738F70 */
{
    FN_ENTER(0x00738f70);
    /* 00738f70: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00738f73: movzx edx, byte ptr [ecx + 0x7b] */ r_edx = (u32)R8((u32)(r_ecx+0x7bu));
    /* 00738f77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00738f79: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738f7c: je 0x739028 */ if (fZ) goto L_00739028;
L_00738f82:; BB(0x00738f82);
    /* 00738f82: movzx edx, byte ptr [ecx + 0x93] */ r_edx = (u32)R8((u32)(r_ecx+0x93u));
    /* 00738f89: mov eax, 1 */ r_eax = 0x1u;
    /* 00738f8e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738f91: je 0x739028 */ if (fZ) goto L_00739028;
L_00738f97:; BB(0x00738f97);
    /* 00738f97: movzx edx, byte ptr [ecx + 0xab] */ r_edx = (u32)R8((u32)(r_ecx+0xabu));
    /* 00738f9e: mov eax, 2 */ r_eax = 0x2u;
    /* 00738fa3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738fa6: je 0x739028 */ if (fZ) goto L_00739028;
L_00738fac:; BB(0x00738fac);
    /* 00738fac: movzx edx, byte ptr [ecx + 0xc3] */ r_edx = (u32)R8((u32)(r_ecx+0xc3u));
    /* 00738fb3: mov eax, 3 */ r_eax = 0x3u;
    /* 00738fb8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738fbb: je 0x739028 */ if (fZ) goto L_00739028;
L_00738fbd:; BB(0x00738fbd);
    /* 00738fbd: movzx edx, byte ptr [ecx + 0xdb] */ r_edx = (u32)R8((u32)(r_ecx+0xdbu));
    /* 00738fc4: mov eax, 4 */ r_eax = 0x4u;
    /* 00738fc9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738fcc: je 0x739028 */ if (fZ) goto L_00739028;
L_00738fce:; BB(0x00738fce);
    /* 00738fce: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 00738fd5: mov eax, 5 */ r_eax = 0x5u;
    /* 00738fda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738fdd: je 0x739028 */ if (fZ) goto L_00739028;
L_00738fdf:; BB(0x00738fdf);
    /* 00738fdf: movzx edx, byte ptr [ecx + 0x10b] */ r_edx = (u32)R8((u32)(r_ecx+0x10bu));
    /* 00738fe6: mov eax, 6 */ r_eax = 0x6u;
    /* 00738feb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738fee: je 0x739028 */ if (fZ) goto L_00739028;
L_00738ff0:; BB(0x00738ff0);
    /* 00738ff0: movzx edx, byte ptr [ecx + 0x123] */ r_edx = (u32)R8((u32)(r_ecx+0x123u));
    /* 00738ff7: mov eax, 7 */ r_eax = 0x7u;
    /* 00738ffc: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00738fff: je 0x739028 */ if (fZ) goto L_00739028;
L_00739001:; BB(0x00739001);
    /* 00739001: movzx edx, byte ptr [ecx + 0x13b] */ r_edx = (u32)R8((u32)(r_ecx+0x13bu));
    /* 00739008: mov eax, 8 */ r_eax = 0x8u;
    /* 0073900d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739010: je 0x739028 */ if (fZ) goto L_00739028;
L_00739012:; BB(0x00739012);
    /* 00739012: movzx edx, byte ptr [ecx + 0x153] */ r_edx = (u32)R8((u32)(r_ecx+0x153u));
    /* 00739019: mov eax, 9 */ r_eax = 0x9u;
    /* 0073901e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739021: je 0x739028 */ if (fZ) goto L_00739028;
L_00739023:; BB(0x00739023);
    /* 00739023: mov eax, 0xa */ r_eax = 0xau;
L_00739028:; BB(0x00739028);
    /* 00739028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739029: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0073902d: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00739031: fmul dword ptr [0xa9a8e0] */ ST(0) = ST(0) * R_F32((u32)(0xa9a8e0u));
    /* 00739037: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073903a: call 0x739044 */ r_esp -= 4; W32(r_esp, 0x73903fu); f_00739044();
    /* 0073903f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739042: ret  */ FN_RET(0x00738f70); r_esp += 4; return;
}

