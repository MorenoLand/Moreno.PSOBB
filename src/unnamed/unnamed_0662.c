#include "protos.h"

void f_00662060(void) /* sub_662060 */
{
    FN_ENTER(0x00662060);
    /* 00662060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662061: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662062: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00662064: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066206a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66206fu); f_0068d5a8();
    /* 0066206f: mov ebx, eax */ r_ebx = r_eax;
    /* 00662071: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662074: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662076: je 0x6620ec */ if (fZ) goto L_006620ec;
L_00662078:; BB(0x00662078);
    /* 00662078: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066207a: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x66207fu); f_00689410();
    /* 0066207f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662081: je 0x66208f */ if (fZ) goto L_0066208f;
L_00662083:; BB(0x00662083);
    /* 00662083: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662085: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x66208au); f_00688d3c();
    /* 0066208a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066208c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066208d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066208e: ret  */ FN_RET(0x00662060); r_esp += 4; return;
L_0066208f:; BB(0x0066208f);
    /* 0066208f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662091: call 0x68cec0 */ r_esp -= 4; W32(r_esp, 0x662096u); f_0068cec0();
    /* 00662096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662098: je 0x6620a6 */ if (fZ) goto L_006620a6;
L_0066209a:; BB(0x0066209a);
    /* 0066209a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066209c: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x6620a1u); f_00688d3c();
    /* 006620a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006620a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006620a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006620a5: ret  */ FN_RET(0x00662060); r_esp += 4; return;
L_006620a6:; BB(0x006620a6);
    /* 006620a6: push dword ptr [ebp + 0xac] */ { u32 v = R32((u32)(r_ebp+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006620ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006620ae: call 0x661da8 */ r_esp -= 4; W32(r_esp, 0x6620b3u); f_00661da8();
    /* 006620b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006620b6: je 0x662102 */ if (fZ) goto L_00662102;
L_006620b8:; BB(0x006620b8);
    /* 006620b8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006620bb: je 0x6620f9 */ if (fZ) goto L_006620f9;
L_006620bd:; BB(0x006620bd);
    /* 006620bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006620bf: jne 0x6620ec */ if (!fZ) goto L_006620ec;
L_006620c1:; BB(0x006620c1);
    /* 006620c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006620c3: call 0x693684 */ r_esp -= 4; W32(r_esp, 0x6620c8u); f_00693684();
    /* 006620c8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6620cdu); f_00694c6c();
    /* 006620cd: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006620d3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006620d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006620d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006620da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006620dc: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006620e3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6620e8u); f_007c1160();
    /* 006620e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006620ea: jne 0x6620f1 */ if (!fZ) goto L_006620f1;
L_006620ec:; BB(0x006620ec);
    /* 006620ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006620ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006620ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006620f0: ret  */ FN_RET(0x00662060); r_esp += 4; return;
L_006620f1:; BB(0x006620f1);
    /* 006620f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006620f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006620f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006620f8: ret  */ FN_RET(0x00662060); r_esp += 4; return;
L_006620f9:; BB(0x006620f9);
    /* 006620f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006620fb: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x662100u); f_00688d3c();
    /* 00662100: jmp 0x6620ec */ goto L_006620ec;
L_00662102:; BB(0x00662102);
    /* 00662102: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662104: call 0x693684 */ r_esp -= 4; W32(r_esp, 0x662109u); f_00693684();
    /* 00662109: jmp 0x6620ec */ goto L_006620ec;
}

void f_0066210c(void)
{
    FN_ENTER(0x0066210c);
    /* 0066210c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066210d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066210f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662111: push 0x8e803c */ { u32 v = 0x8e803cu; r_esp -= 4; W32(r_esp, v); }
    /* 00662116: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066211c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066211d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662124: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662127: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066212a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066212d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662130: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00662133: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00662138: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066213f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662144u); f_005caba4();
    /* 00662144: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662145: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066214a: je 0x662183 */ if (fZ) goto L_00662183;
L_0066214c:; BB(0x0066214c);
    /* 0066214c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00662153: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066215a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066215d: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662163: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662166: call 0x662188 */ r_esp -= 4; W32(r_esp, 0x66216bu); f_00662188();
    /* 0066216b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066216e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662175:; BB(0x00662175);
    /* 00662175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662178: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066217f: mov esp, ebp */ r_esp = r_ebp;
    /* 00662181: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662182: ret  */ FN_RET(0x0066210c); r_esp += 4; return;
L_00662183:; BB(0x00662183);
    /* 00662183: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662185: jmp 0x662175 */ goto L_00662175;
}

void f_00662188(void) /* sub_662188 */
{
    FN_ENTER(0x00662188);
    /* 00662188: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662189: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066218b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066218f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662193: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662195: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x66219au); f_00661eec();
    /* 0066219a: mov dword ptr [ebx], 0xb33f10 */ W32((u32)(r_ebx), 0xb33f10u);
    /* 006621a0: mov edx, dword ptr [0x9c884c] */ r_edx = R32((u32)(0x9c884cu));
    /* 006621a6: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006621a9: mov eax, ebx */ r_eax = r_ebx;
    /* 006621ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006621ac: ret 8 */ FN_RET(0x00662188); r_esp += 12; return;
}

void f_006621b0(void) /* sub_6621B0 */
{
    FN_ENTER(0x006621b0);
    /* 006621b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006621b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006621b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006621b5: push 0x8e8064 */ { u32 v = 0x8e8064u; r_esp -= 4; W32(r_esp, v); }
    /* 006621ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006621c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006621c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006621c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006621cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006621ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006621d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006621d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006621d7: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006621dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006621e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6621e8u); f_005caba4();
    /* 006621e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006621e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006621ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006621ee: je 0x662241 */ if (fZ) goto L_00662241;
L_006621f0:; BB(0x006621f0);
    /* 006621f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006621f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006621fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662201: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662207: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066220a: call 0x662188 */ r_esp -= 4; W32(r_esp, 0x66220fu); f_00662188();
    /* 0066220f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662212: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662219:; BB(0x00662219);
    /* 00662219: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066221b: je 0x662236 */ if (fZ) goto L_00662236;
L_0066221d:; BB(0x0066221d);
    /* 0066221d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662220: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 00662224: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00662226:; BB(0x00662226);
    /* 00662226: mov eax, ecx */ r_eax = r_ecx;
    /* 00662228: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066222b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662232: mov esp, ebp */ r_esp = r_ebp;
    /* 00662234: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662235: ret  */ FN_RET(0x006621b0); r_esp += 4; return;
L_00662236:; BB(0x00662236);
    /* 00662236: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662239: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 0066223f: jmp 0x662226 */ goto L_00662226;
L_00662241:; BB(0x00662241);
    /* 00662241: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00662243: jmp 0x662219 */ goto L_00662219;
}

void f_00662248(void) /* sub_662248 */
{
    FN_ENTER(0x00662248);
    /* 00662248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662249: mov ebp, esp */ r_ebp = r_esp;
    /* 0066224b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066224d: push 0x8e8080 */ { u32 v = 0x8e8080u; r_esp -= 4; W32(r_esp, v); }
    /* 00662252: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662259: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662260: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662263: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662266: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662269: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066226c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066226f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662272: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662275: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00662278: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x66227du); f_00661eec();
    /* 0066227d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662284: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662287: mov dword ptr [ecx], 0xb3403c */ W32((u32)(r_ecx), 0xb3403cu);
    /* 0066228d: mov eax, dword ptr [0x9c8850] */ r_eax = R32((u32)(0x9c8850u));
    /* 00662292: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00662294: push 0x93902c */ { u32 v = 0x93902cu; r_esp -= 4; W32(r_esp, v); }
    /* 00662299: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0066229c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6622a1u); f_007b9a88();
    /* 006622a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006622a4: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006622a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006622ab: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6622b0u); f_007b52c4();
    /* 006622b0: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006622b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006622b6: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 006622bc: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 006622bf: fadd dword ptr [eax + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6cu));
    /* 006622c2: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 006622c5: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6622cau); f_007b999c();
    /* 006622ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006622cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006622ce: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006622d1: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006622d6: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006622d9: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6622deu); f_007b4f54();
    /* 006622de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006622e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006622e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006622eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006622ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006622ee: ret 8 */ FN_RET(0x00662248); r_esp += 12; return;
}

void f_006622f4(void) /* sub_6622F4 */
{
    FN_ENTER(0x006622f4);
    /* 006622f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006622f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006622f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006622f9: push 0x8e80a8 */ { u32 v = 0x8e80a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006622fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662305: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066230c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066230f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662312: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662315: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662318: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066231b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00662320: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00662327: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66232cu); f_005caba4();
    /* 0066232c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066232d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662332: je 0x662385 */ if (fZ) goto L_00662385;
L_00662334:; BB(0x00662334);
    /* 00662334: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066233b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662342: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662345: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066234b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066234e: call 0x662248 */ r_esp -= 4; W32(r_esp, 0x662353u); f_00662248();
    /* 00662353: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662356: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066235d:; BB(0x0066235d);
    /* 0066235d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066235f: je 0x66237a */ if (fZ) goto L_0066237a;
L_00662361:; BB(0x00662361);
    /* 00662361: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662364: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 00662368: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0066236a:; BB(0x0066236a);
    /* 0066236a: mov eax, ecx */ r_eax = r_ecx;
    /* 0066236c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066236f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662376: mov esp, ebp */ r_esp = r_ebp;
    /* 00662378: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662379: ret  */ FN_RET(0x006622f4); r_esp += 4; return;
L_0066237a:; BB(0x0066237a);
    /* 0066237a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0066237d: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00662383: jmp 0x66236a */ goto L_0066236a;
L_00662385:; BB(0x00662385);
    /* 00662385: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00662387: jmp 0x66235d */ goto L_0066235d;
}

void f_0066238c(void) /* sub_66238C */
{
    FN_ENTER(0x0066238c);
    /* 0066238c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066238d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066238e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662391: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00662393: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00662398: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066239a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0066239c: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 006623a1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6623a4u); call_ind(t); }
    /* 006623a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006623a6: je 0x6623ee */ if (fZ) goto L_006623ee;
L_006623a8:; BB(0x006623a8);
    /* 006623a8: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 006623ae: fmul dword ptr [0x939020] */ ST(0) = ST(0) * R_F32((u32)(0x939020u));
    /* 006623b4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006623b8: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 006623bb: mov dword ptr [esp + 8], 0x9ff9e0 */ W32((u32)(r_esp+0x8u), 0x9ff9e0u);
    /* 006623c3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006623c6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6623cbu); f_0061cdb0();
    /* 006623cb: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 006623d1: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 006623d4: fmul dword ptr [0x939020] */ ST(0) = ST(0) * R_F32((u32)(0x939020u));
    /* 006623da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006623de: mov dword ptr [esp + 8], 0x9ff9c0 */ W32((u32)(r_esp+0x8u), 0x9ff9c0u);
    /* 006623e6: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006623e9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6623eeu); f_0061cdb0();
L_006623ee:; BB(0x006623ee);
    /* 006623ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006623f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006623f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006623f3: ret  */ FN_RET(0x0066238c); r_esp += 4; return;
}

void f_006623f4(void) /* sub_6623F4 */
{
    FN_ENTER(0x006623f4);
    /* 006623f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006623f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006623f6: mov edx, ecx */ r_edx = r_ecx;
    /* 006623f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006623fa: mov ebx, eax */ r_ebx = r_eax;
    /* 006623fc: mov esi, edx */ r_esi = r_edx;
L_006623fe:; BB(0x006623fe);
    /* 006623fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006623ff: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x662404u); f_0068d5a8();
    /* 00662404: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662407: je 0x662434 */ if (fZ) goto L_00662434;
L_00662409:; BB(0x00662409);
    /* 00662409: movsx ecx, word ptr [eax + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00662410: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662413: jne 0x662434 */ if (!fZ) goto L_00662434;
L_00662415:; BB(0x00662415);
    /* 00662415: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662418: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0066241b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066241c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066241d: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x662422u); f_0078ea2c();
    /* 00662422: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00662425: fld dword ptr [esi + 0xac] */ FPUSH(R_F32((u32)(r_esi+0xacu)));
    /* 0066242b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066242d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066242f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00662431: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00662432: ja 0x662441 */ if ((!fC&&!fZ)) goto L_00662441;
L_00662434:; BB(0x00662434);
    /* 00662434: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00662437: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066243a: jl 0x6623fe */ if ((fS!=fO)) goto L_006623fe;
L_0066243c:; BB(0x0066243c);
    /* 0066243c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066243e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066243f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662440: ret  */ FN_RET(0x006623f4); r_esp += 4; return;
L_00662441:; BB(0x00662441);
    /* 00662441: mov eax, 1 */ r_eax = 0x1u;
    /* 00662446: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662448: ret  */ FN_RET(0x006623f4); r_esp += 4; return;
}

void f_0066244c(void) /* sub_66244C */
{
    FN_ENTER(0x0066244c);
    /* 0066244c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066244d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066244f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662453: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662457: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662459: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x66245eu); f_00661eec();
    /* 0066245e: mov dword ptr [ebx], 0xb33f4c */ W32((u32)(r_ebx), 0xb33f4cu);
    /* 00662464: mov edx, dword ptr [0x9c8854] */ r_edx = R32((u32)(0x9c8854u));
    /* 0066246a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0066246d: mov eax, ebx */ r_eax = r_ebx;
    /* 0066246f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662470: ret 8 */ FN_RET(0x0066244c); r_esp += 12; return;
}

void f_00662474(void) /* sub_662474 */
{
    FN_ENTER(0x00662474);
    /* 00662474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662475: mov ebp, esp */ r_ebp = r_esp;
    /* 00662477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662479: push 0x8e80d0 */ { u32 v = 0x8e80d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066247e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662485: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066248c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066248f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662492: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662495: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662498: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066249b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006624a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006624a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6624acu); f_005caba4();
    /* 006624ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006624ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006624b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006624b2: je 0x662505 */ if (fZ) goto L_00662505;
L_006624b4:; BB(0x006624b4);
    /* 006624b4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006624bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006624c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006624c5: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 006624cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006624ce: call 0x66244c */ r_esp -= 4; W32(r_esp, 0x6624d3u); f_0066244c();
    /* 006624d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006624d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006624dd:; BB(0x006624dd);
    /* 006624dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006624df: je 0x6624fa */ if (fZ) goto L_006624fa;
L_006624e1:; BB(0x006624e1);
    /* 006624e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006624e4: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 006624e8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_006624ea:; BB(0x006624ea);
    /* 006624ea: mov eax, ecx */ r_eax = r_ecx;
    /* 006624ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006624ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006624f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006624f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006624f9: ret  */ FN_RET(0x00662474); r_esp += 4; return;
L_006624fa:; BB(0x006624fa);
    /* 006624fa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006624fd: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00662503: jmp 0x6624ea */ goto L_006624ea;
L_00662505:; BB(0x00662505);
    /* 00662505: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00662507: jmp 0x6624dd */ goto L_006624dd;
}

void f_0066250c(void) /* sub_66250C */
{
    FN_ENTER(0x0066250c);
    /* 0066250c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066250d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066250e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066250f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00662511: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662517: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66251cu); f_0068d5a8();
    /* 0066251c: mov esi, eax */ r_esi = r_eax;
    /* 0066251e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662521: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662523: je 0x662560 */ if (fZ) goto L_00662560;
L_00662525:; BB(0x00662525);
    /* 00662525: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00662528: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066252b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066252c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066252d: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x662532u); f_0078ea2c();
    /* 00662532: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662535: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0066253b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066253d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066253f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00662541: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00662542: jbe 0x662560 */ if ((fC||fZ)) goto L_00662560;
L_00662544:; BB(0x00662544);
    /* 00662544: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00662547: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662549: mov edi, ebx */ r_edi = r_ebx;
    /* 0066254b: mov ebx, eax */ r_ebx = r_eax;
L_0066254d:; BB(0x0066254d);
    /* 0066254d: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662553: jne 0x662566 */ if (!fZ) goto L_00662566;
L_00662555:; BB(0x00662555);
    /* 00662555: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00662558: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066255b: jl 0x66254d */ if ((fS!=fO)) goto L_0066254d;
L_0066255d:; BB(0x0066255d);
    /* 0066255d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00662560:; BB(0x00662560);
    /* 00662560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662562: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662563: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662564: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662565: ret  */ FN_RET(0x0066250c); r_esp += 4; return;
L_00662566:; BB(0x00662566);
    /* 00662566: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662567: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66256cu); f_0068d5a8();
    /* 0066256c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066256d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066256f: je 0x662555 */ if (fZ) goto L_00662555;
L_00662571:; BB(0x00662571);
    /* 00662571: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662575: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00662576: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x66257bu); f_0078ea2c();
    /* 0066257b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0066257e: fld dword ptr [edi + 0xbc] */ FPUSH(R_F32((u32)(r_edi+0xbcu)));
    /* 00662584: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00662586: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00662588: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066258a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066258b: jbe 0x662555 */ if ((fC||fZ)) goto L_00662555;
L_0066258d:; BB(0x0066258d);
    /* 0066258d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00662590: mov eax, 1 */ r_eax = 0x1u;
    /* 00662595: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662597: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662598: ret  */ FN_RET(0x0066250c); r_esp += 4; return;
}

void f_00662520(void)
{
    FN_ENTER(0x00662520);
    /* 00662520: add al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00662522: div byte ptr [ebx + edi - 0x7d] */ { u32 d = R8((u32)(r_ebx+r_edi+0xffffff83u)); if (!d) UNSUP(0x00662522, "divide by zero"); { u32 n = r_eax & 0xffffu; u32 q = n / d; if (q >> 8) UNSUP(0x00662522, "divide overflow"); r_eax = (r_eax & 0xffff0000u) | ((n % d) << 8) | q; } }
    UNSUP(0x00662526, "falls out of decoded code");
}

void f_0066259c(void) /* sub_66259C */
{
    FN_ENTER(0x0066259c);
    /* 0066259c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066259d: mov edi, ecx */ r_edi = r_ecx;
    /* 0066259f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006625a3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006625a7: mov ecx, edi */ r_ecx = r_edi;
    /* 006625a9: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x6625aeu); f_00661eec();
    /* 006625ae: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
    /* 006625b1: mov dword ptr [edi], 0xb33f88 */ W32((u32)(r_edi), 0xb33f88u);
    /* 006625b7: mov edx, dword ptr [0x9c8858] */ r_edx = R32((u32)(0x9c8858u));
    /* 006625bd: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006625c0: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 006625c6: mov eax, edi */ r_eax = r_edi;
    /* 006625c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006625c9: ret 8 */ FN_RET(0x0066259c); r_esp += 12; return;
}

void f_006625cc(void) /* sub_6625CC */
{
    FN_ENTER(0x006625cc);
    /* 006625cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006625cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006625cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006625d1: push 0x8e80f8 */ { u32 v = 0x8e80f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006625d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006625dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006625dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006625e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006625e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006625ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006625ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006625f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006625f3: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006625f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006625ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662604u); f_005caba4();
    /* 00662604: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662605: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066260a: je 0x66265d */ if (fZ) goto L_0066265d;
L_0066260c:; BB(0x0066260c);
    /* 0066260c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00662613: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066261a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066261d: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662623: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662626: call 0x66259c */ r_esp -= 4; W32(r_esp, 0x66262bu); f_0066259c();
    /* 0066262b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066262e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662635:; BB(0x00662635);
    /* 00662635: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662637: je 0x662652 */ if (fZ) goto L_00662652;
L_00662639:; BB(0x00662639);
    /* 00662639: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0066263c: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 00662640: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00662642:; BB(0x00662642);
    /* 00662642: mov eax, ecx */ r_eax = r_ecx;
    /* 00662644: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662647: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066264e: mov esp, ebp */ r_esp = r_ebp;
    /* 00662650: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662651: ret  */ FN_RET(0x006625cc); r_esp += 4; return;
L_00662652:; BB(0x00662652);
    /* 00662652: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662655: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 0066265b: jmp 0x662642 */ goto L_00662642;
L_0066265d:; BB(0x0066265d);
    /* 0066265d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066265f: jmp 0x662635 */ goto L_00662635;
}

void f_00662664(void) /* sub_662664 */
{
    FN_ENTER(0x00662664);
    /* 00662664: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662665: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662668: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066266a: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662670: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662672: call 0x661da8 */ r_esp -= 4; W32(r_esp, 0x662677u); f_00661da8();
    /* 00662677: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066267a: je 0x662683 */ if (fZ) goto L_00662683;
L_0066267c:; BB(0x0066267c);
    /* 0066267c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066267e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00662681: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662682: ret  */ FN_RET(0x00662664); r_esp += 4; return;
L_00662683:; BB(0x00662683);
    /* 00662683: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662689: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66268eu); f_0068d5a8();
    /* 0066268e: mov edx, eax */ r_edx = r_eax;
    /* 00662690: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662693: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662695: je 0x66267c */ if (fZ) goto L_0066267c;
L_00662697:; BB(0x00662697);
    /* 00662697: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0066269b: mov esi, edx */ r_esi = r_edx;
    /* 0066269d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006626a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006626a2: mov edi, ebx */ r_edi = r_ebx;
    /* 006626a4: mov ebx, eax */ r_ebx = r_eax;
L_006626a6:; BB(0x006626a6);
    /* 006626a6: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006626ac: jne 0x6626c7 */ if (!fZ) goto L_006626c7;
L_006626ae:; BB(0x006626ae);
    /* 006626ae: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006626b1: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006626b4: jl 0x6626a6 */ if ((fS!=fO)) goto L_006626a6;
L_006626b6:; BB(0x006626b6);
    /* 006626b6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006626ba: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006626bd: mov eax, 1 */ r_eax = 0x1u;
    /* 006626c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006626c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006626c6: ret  */ FN_RET(0x00662664); r_esp += 4; return;
L_006626c7:; BB(0x006626c7);
    /* 006626c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006626c8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6626cdu); f_0068d5a8();
    /* 006626cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006626ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006626d0: je 0x6626ae */ if (fZ) goto L_006626ae;
L_006626d2:; BB(0x006626d2);
    /* 006626d2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006626d5: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006626d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006626d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006626da: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6626dfu); f_0078ea50();
    /* 006626df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006626e2: fld dword ptr [edi + 0xbc] */ FPUSH(R_F32((u32)(r_edi+0xbcu)));
    /* 006626e8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006626ea: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006626ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006626ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006626ef: jae 0x6626ae */ if (!fC) goto L_006626ae;
L_006626f1:; BB(0x006626f1);
    /* 006626f1: mov ecx, dword ptr [edi + 0xc0] */ r_ecx = R32((u32)(r_edi+0xc0u));
    /* 006626f7: mov dword ptr [0xa8fa90], 1 */ W32((u32)(0xa8fa90u), 0x1u);
    /* 00662701: mov dword ptr [0xa8fa84], ecx */ W32((u32)(0xa8fa84u), r_ecx);
    /* 00662707: mov ecx, dword ptr [edi + 0xc4] */ r_ecx = R32((u32)(r_edi+0xc4u));
    /* 0066270d: mov dword ptr [0xa8fa88], ecx */ W32((u32)(0xa8fa88u), r_ecx);
    /* 00662713: mov ecx, dword ptr [edi + 0xc8] */ r_ecx = R32((u32)(r_edi+0xc8u));
    /* 00662719: mov dword ptr [0xa8fa8c], ecx */ W32((u32)(0xa8fa8cu), r_ecx);
    /* 0066271f: jmp 0x6626ae */ goto L_006626ae;
}

void f_00662724(void) /* sub_662724 */
{
    FN_ENTER(0x00662724);
    /* 00662724: mov edx, dword ptr [0xa95aa0] */ r_edx = R32((u32)(0xa95aa0u));
    /* 0066272a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066272c: je 0x66273b */ if (fZ) goto L_0066273b;
L_0066272e:; BB(0x0066272e);
    /* 0066272e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00662732: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00662737: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0066273b:; BB(0x0066273b);
    /* 0066273b: push dword ptr [ecx + 0xb0] */ { u32 v = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662741: call 0x6bc86c */ r_esp -= 4; W32(r_esp, 0x662746u); f_006bc86c();
    /* 00662746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662747: ret  */ FN_RET(0x00662724); r_esp += 4; return;
}

void f_00662748(void) /* sub_662748 */
{
    FN_ENTER(0x00662748);
    /* 00662748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00662749: mov edi, ecx */ r_edi = r_ecx;
    /* 0066274b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066274f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662753: mov ecx, edi */ r_ecx = r_edi;
    /* 00662755: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x66275au); f_00661eec();
    /* 0066275a: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
    /* 0066275d: mov dword ptr [edi], 0xb33fc4 */ W32((u32)(r_edi), 0xb33fc4u);
    /* 00662763: mov edx, dword ptr [0x9c885c] */ r_edx = R32((u32)(0x9c885cu));
    /* 00662769: mov dword ptr [edi + 0xc8], 0 */ W32((u32)(r_edi+0xc8u), 0x0u);
    /* 00662773: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00662776: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0066277c: mov eax, edi */ r_eax = r_edi;
    /* 0066277e: mov dword ptr [edi + 0xc4], 0 */ W32((u32)(r_edi+0xc4u), 0x0u);
    /* 00662788: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
    /* 00662792: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00662793: ret 8 */ FN_RET(0x00662748); r_esp += 12; return;
}

void f_00662798(void) /* sub_662798 */
{
    FN_ENTER(0x00662798);
    /* 00662798: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662799: mov ebp, esp */ r_ebp = r_esp;
    /* 0066279b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066279d: push 0x8e8120 */ { u32 v = 0x8e8120u; r_esp -= 4; W32(r_esp, v); }
    /* 006627a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006627a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006627a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006627b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006627b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006627b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006627b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006627bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006627bf: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 006627c4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006627cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6627d0u); f_005caba4();
    /* 006627d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006627d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006627d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006627d6: je 0x66281c */ if (fZ) goto L_0066281c;
L_006627d8:; BB(0x006627d8);
    /* 006627d8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006627df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006627e6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006627e9: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 006627ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006627f2: call 0x662748 */ r_esp -= 4; W32(r_esp, 0x6627f7u); f_00662748();
    /* 006627f7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006627fa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662801:; BB(0x00662801);
    /* 00662801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662803: je 0x662820 */ if (fZ) goto L_00662820;
L_00662805:; BB(0x00662805);
    /* 00662805: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00662808: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0066280c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0066280e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662811: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662818: mov esp, ebp */ r_esp = r_ebp;
    /* 0066281a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066281b: ret  */ FN_RET(0x00662798); r_esp += 4; return;
L_0066281c:; BB(0x0066281c);
    /* 0066281c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066281e: jmp 0x662801 */ goto L_00662801;
L_00662820:; BB(0x00662820);
    /* 00662820: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662823: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662825: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 0066282b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066282e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662835: mov esp, ebp */ r_esp = r_ebp;
    /* 00662837: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662838: ret  */ FN_RET(0x00662798); r_esp += 4; return;
}

void f_0066283c(void) /* sub_66283C */
{
    FN_ENTER(0x0066283c);
    /* 0066283c: mov eax, dword ptr [0xa8fa90] */ r_eax = R32((u32)(0xa8fa90u));
    /* 00662841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662843: je 0x662854 */ if (fZ) goto L_00662854;
L_00662845:; BB(0x00662845);
    /* 00662845: push 0xa8fa84 */ { u32 v = 0xa8fa84u; r_esp -= 4; W32(r_esp, v); }
    /* 0066284a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066284c: call 0x7b3d2c */ r_esp -= 4; W32(r_esp, 0x662851u); f_007b3d2c();
    /* 00662851: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00662854:; BB(0x00662854);
    /* 00662854: ret  */ FN_RET(0x0066283c); r_esp += 4; return;
}

void f_00662858(void) /* sub_662858 */
{
    FN_ENTER(0x00662858);
    /* 00662858: mov ecx, dword ptr [0xa8fa80] */ r_ecx = R32((u32)(0xa8fa80u));
    /* 0066285e: mov dword ptr [0xa8fa90], 0 */ W32((u32)(0xa8fa90u), 0x0u);
    /* 00662868: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066286a: je 0x662871 */ if (fZ) goto L_00662871;
L_0066286c:; BB(0x0066286c);
    /* 0066286c: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x662871u); f_00817574();
L_00662871:; BB(0x00662871);
    /* 00662871: ret  */ FN_RET(0x00662858); r_esp += 4; return;
}

void f_00662874(void) /* sub_662874 */
{
    FN_ENTER(0x00662874);
    /* 00662874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662875: mov ebp, esp */ r_ebp = r_esp;
    /* 00662877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662879: push 0x8e8162 */ { u32 v = 0x8e8162u; r_esp -= 4; W32(r_esp, v); }
    /* 0066287e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662885: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066288c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066288f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662892: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662895: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662898: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066289b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066289d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006628a4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6628a9u); f_005caba4();
    /* 006628a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006628aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006628ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006628af: je 0x662926 */ if (fZ) goto L_00662926;
L_006628b1:; BB(0x006628b1);
    /* 006628b1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006628b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006628bf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006628c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006628c4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6628c9u); f_008193cc();
    /* 006628c9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006628cc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006628d3:; BB(0x006628d3);
    /* 006628d3: mov dword ptr [0xa8fa80], eax */ W32((u32)(0xa8fa80u), r_eax);
    /* 006628d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006628df: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006628e6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006628e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6628edu); f_005caba4();
    /* 006628ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006628ee: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006628f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006628f3: je 0x662918 */ if (fZ) goto L_00662918;
L_006628f5:; BB(0x006628f5);
    /* 006628f5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006628fc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00662903: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662909: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066290c: call 0x66292c */ r_esp -= 4; W32(r_esp, 0x662911u); f_0066292c();
    /* 00662911: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662918:; BB(0x00662918);
    /* 00662918: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066291b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662922: mov esp, ebp */ r_esp = r_ebp;
    /* 00662924: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662925: ret  */ FN_RET(0x00662874); r_esp += 4; return;
L_00662926:; BB(0x00662926);
    /* 00662926: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662928: jmp 0x6628d3 */ goto L_006628d3;
}

void f_0066292c(void) /* sub_66292C */
{
    FN_ENTER(0x0066292c);
    /* 0066292c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066292d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066292f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662933: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662935: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x66293au); f_008193cc();
    /* 0066293a: mov dword ptr [ebx], 0xb34078 */ W32((u32)(r_ebx), 0xb34078u);
    /* 00662940: mov edx, dword ptr [0x9c8860] */ r_edx = R32((u32)(0x9c8860u));
    /* 00662946: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00662949: mov eax, ebx */ r_eax = r_ebx;
    /* 0066294b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066294c: ret 4 */ FN_RET(0x0066292c); r_esp += 8; return;
}

void f_00662950(void) /* sub_662950 */
{
    FN_ENTER(0x00662950);
    /* 00662950: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00662951: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00662952: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662953: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00662957: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662959: jl 0x6629f1 */ if ((fS!=fO)) goto L_006629f1;
L_0066295f:; BB(0x0066295f);
    /* 0066295f: mov eax, dword ptr [0xa8fa80] */ r_eax = R32((u32)(0xa8fa80u));
    /* 00662964: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00662967: mov eax, edx */ r_eax = r_edx;
    /* 00662969: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066296b: je 0x6629f1 */ if (fZ) goto L_006629f1;
L_00662971:; BB(0x00662971);
    /* 00662971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662973: je 0x6629f1 */ if (fZ) goto L_006629f1;
L_00662979:; BB(0x00662979);
    /* 00662979: mov ebx, eax */ r_ebx = r_eax;
    /* 0066297b: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0066297e: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00662981: cmp esi, dword ptr [0x9c8848] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8848u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662987: je 0x6629e5 */ if (fZ) goto L_006629e5;
L_00662989:; BB(0x00662989);
    /* 00662989: cmp esi, dword ptr [0x9c884c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c884cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066298f: je 0x6629e5 */ if (fZ) goto L_006629e5;
L_00662991:; BB(0x00662991);
    /* 00662991: cmp esi, dword ptr [0x9c8850] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8850u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662997: jne 0x6629a0 */ if (!fZ) goto L_006629a0;
L_00662999:; BB(0x00662999);
    /* 00662999: mov edi, 1 */ r_edi = 0x1u;
    /* 0066299e: jmp 0x6629a2 */ goto L_006629a2;
L_006629a0:; BB(0x006629a0);
    /* 006629a0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006629a2:; BB(0x006629a2);
    /* 006629a2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629a4: jne 0x6629e5 */ if (!fZ) goto L_006629e5;
L_006629a6:; BB(0x006629a6);
    /* 006629a6: cmp esi, dword ptr [0x9c8854] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8854u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629ac: jne 0x6629b5 */ if (!fZ) goto L_006629b5;
L_006629ae:; BB(0x006629ae);
    /* 006629ae: mov edi, 1 */ r_edi = 0x1u;
    /* 006629b3: jmp 0x6629b7 */ goto L_006629b7;
L_006629b5:; BB(0x006629b5);
    /* 006629b5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006629b7:; BB(0x006629b7);
    /* 006629b7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629b9: jne 0x6629e5 */ if (!fZ) goto L_006629e5;
L_006629bb:; BB(0x006629bb);
    /* 006629bb: cmp esi, dword ptr [0x9c8858] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8858u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629c1: jne 0x6629ca */ if (!fZ) goto L_006629ca;
L_006629c3:; BB(0x006629c3);
    /* 006629c3: mov edi, 1 */ r_edi = 0x1u;
    /* 006629c8: jmp 0x6629cc */ goto L_006629cc;
L_006629ca:; BB(0x006629ca);
    /* 006629ca: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006629cc:; BB(0x006629cc);
    /* 006629cc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629ce: jne 0x6629e5 */ if (!fZ) goto L_006629e5;
L_006629d0:; BB(0x006629d0);
    /* 006629d0: cmp esi, dword ptr [0x9c885c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c885cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629d6: jne 0x6629df */ if (!fZ) goto L_006629df;
L_006629d8:; BB(0x006629d8);
    /* 006629d8: mov esi, 1 */ r_esi = 0x1u;
    /* 006629dd: jmp 0x6629e1 */ goto L_006629e1;
L_006629df:; BB(0x006629df);
    /* 006629df: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006629e1:; BB(0x006629e1);
    /* 006629e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629e3: je 0x6629ed */ if (fZ) goto L_006629ed;
L_006629e5:; BB(0x006629e5);
    /* 006629e5: movzx esi, word ptr [ebx + 0xa] */ r_esi = (u32)R16((u32)(r_ebx+0xau));
    /* 006629e9: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006629eb: je 0x6629f5 */ if (fZ) goto L_006629f5;
L_006629ed:; BB(0x006629ed);
    /* 006629ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006629ef: jne 0x662971 */ if (!fZ) goto L_00662971;
L_006629f1:; BB(0x006629f1);
    /* 006629f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006629f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006629f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006629f4: ret  */ FN_RET(0x00662950); r_esp += 4; return;
L_006629f5:; BB(0x006629f5);
    /* 006629f5: mov eax, ebx */ r_eax = r_ebx;
    /* 006629f7: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006629fb: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662a01: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00662a05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662a06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662a07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00662a08: ret  */ FN_RET(0x00662950); r_esp += 4; return;
}

void f_00662a0c(void) /* sub_662A0C */
{
    FN_ENTER(0x00662a0c);
    /* 00662a0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00662a0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00662a0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662a0f: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 00662a14: mov eax, dword ptr [0xa8fa80] */ r_eax = R32((u32)(0xa8fa80u));
    /* 00662a19: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00662a1c: mov eax, edx */ r_eax = r_edx;
    /* 00662a1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a20: je 0x662aa6 */ if (fZ) goto L_00662aa6;
L_00662a26:; BB(0x00662a26);
    /* 00662a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a28: je 0x662aa6 */ if (fZ) goto L_00662aa6;
L_00662a2e:; BB(0x00662a2e);
    /* 00662a2e: mov ebx, eax */ r_ebx = r_eax;
    /* 00662a30: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00662a33: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00662a36: cmp esi, dword ptr [0x9c8848] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8848u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a3c: je 0x662a9a */ if (fZ) goto L_00662a9a;
L_00662a3e:; BB(0x00662a3e);
    /* 00662a3e: cmp esi, dword ptr [0x9c884c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c884cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a44: je 0x662a9a */ if (fZ) goto L_00662a9a;
L_00662a46:; BB(0x00662a46);
    /* 00662a46: cmp esi, dword ptr [0x9c8850] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8850u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a4c: jne 0x662a55 */ if (!fZ) goto L_00662a55;
L_00662a4e:; BB(0x00662a4e);
    /* 00662a4e: mov edi, 1 */ r_edi = 0x1u;
    /* 00662a53: jmp 0x662a57 */ goto L_00662a57;
L_00662a55:; BB(0x00662a55);
    /* 00662a55: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00662a57:; BB(0x00662a57);
    /* 00662a57: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a59: jne 0x662a9a */ if (!fZ) goto L_00662a9a;
L_00662a5b:; BB(0x00662a5b);
    /* 00662a5b: cmp esi, dword ptr [0x9c8854] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8854u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a61: jne 0x662a6a */ if (!fZ) goto L_00662a6a;
L_00662a63:; BB(0x00662a63);
    /* 00662a63: mov edi, 1 */ r_edi = 0x1u;
    /* 00662a68: jmp 0x662a6c */ goto L_00662a6c;
L_00662a6a:; BB(0x00662a6a);
    /* 00662a6a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00662a6c:; BB(0x00662a6c);
    /* 00662a6c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a6e: jne 0x662a9a */ if (!fZ) goto L_00662a9a;
L_00662a70:; BB(0x00662a70);
    /* 00662a70: cmp esi, dword ptr [0x9c8858] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c8858u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a76: jne 0x662a7f */ if (!fZ) goto L_00662a7f;
L_00662a78:; BB(0x00662a78);
    /* 00662a78: mov edi, 1 */ r_edi = 0x1u;
    /* 00662a7d: jmp 0x662a81 */ goto L_00662a81;
L_00662a7f:; BB(0x00662a7f);
    /* 00662a7f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00662a81:; BB(0x00662a81);
    /* 00662a81: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a83: jne 0x662a9a */ if (!fZ) goto L_00662a9a;
L_00662a85:; BB(0x00662a85);
    /* 00662a85: cmp esi, dword ptr [0x9c885c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c885cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a8b: jne 0x662a94 */ if (!fZ) goto L_00662a94;
L_00662a8d:; BB(0x00662a8d);
    /* 00662a8d: mov esi, 1 */ r_esi = 0x1u;
    /* 00662a92: jmp 0x662a96 */ goto L_00662a96;
L_00662a94:; BB(0x00662a94);
    /* 00662a94: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00662a96:; BB(0x00662a96);
    /* 00662a96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662a98: je 0x662aa2 */ if (fZ) goto L_00662aa2;
L_00662a9a:; BB(0x00662a9a);
    /* 00662a9a: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00662a9e: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00662aa0: je 0x662aac */ if (fZ) goto L_00662aac;
L_00662aa2:; BB(0x00662aa2);
    /* 00662aa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662aa4: jne 0x662a26 */ if (!fZ) goto L_00662a26;
L_00662aa6:; BB(0x00662aa6);
    /* 00662aa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662aa8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662aa9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662aaa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00662aab: ret  */ FN_RET(0x00662a0c); r_esp += 4; return;
L_00662aac:; BB(0x00662aac);
    /* 00662aac: mov eax, ebx */ r_eax = r_ebx;
    /* 00662aae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00662ab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00662ab1: ret  */ FN_RET(0x00662a0c); r_esp += 4; return;
}

void f_00662ab4(void) /* sub_662AB4 */
{
    FN_ENTER(0x00662ab4);
    /* 00662ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662ab5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662ab6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00662ab8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662abe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x662ac3u); f_0068d5a8();
    /* 00662ac3: mov ebx, eax */ r_ebx = r_eax;
    /* 00662ac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662ac8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662aca: je 0x662b4f */ if (fZ) goto L_00662b4f;
L_00662ad0:; BB(0x00662ad0);
    /* 00662ad0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662ad2: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x662ad7u); f_00689410();
    /* 00662ad7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662ad9: je 0x662ae7 */ if (fZ) goto L_00662ae7;
L_00662adb:; BB(0x00662adb);
    /* 00662adb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662add: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x662ae2u); f_00688d3c();
    /* 00662ae2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662ae4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662ae5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662ae6: ret  */ FN_RET(0x00662ab4); r_esp += 4; return;
L_00662ae7:; BB(0x00662ae7);
    /* 00662ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662ae9: call 0x68cec0 */ r_esp -= 4; W32(r_esp, 0x662aeeu); f_0068cec0();
    /* 00662aee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662af0: je 0x662afe */ if (fZ) goto L_00662afe;
L_00662af2:; BB(0x00662af2);
    /* 00662af2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662af4: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x662af9u); f_00688d3c();
    /* 00662af9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662afb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662afc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662afd: ret  */ FN_RET(0x00662ab4); r_esp += 4; return;
L_00662afe:; BB(0x00662afe);
    /* 00662afe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662b01: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x662b06u); f_006946a8();
    /* 00662b06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662b09: push dword ptr [ebp + 0xac] */ { u32 v = R32((u32)(r_ebp+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662b0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00662b11: call 0x661da8 */ r_esp -= 4; W32(r_esp, 0x662b16u); f_00661da8();
    /* 00662b16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662b19: je 0x662b65 */ if (fZ) goto L_00662b65;
L_00662b1b:; BB(0x00662b1b);
    /* 00662b1b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662b1e: je 0x662b5c */ if (fZ) goto L_00662b5c;
L_00662b20:; BB(0x00662b20);
    /* 00662b20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662b22: jne 0x662b4f */ if (!fZ) goto L_00662b4f;
L_00662b24:; BB(0x00662b24);
    /* 00662b24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662b26: call 0x693684 */ r_esp -= 4; W32(r_esp, 0x662b2bu); f_00693684();
    /* 00662b2b: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x662b30u); f_00694c6c();
    /* 00662b30: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662b36: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00662b39: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662b3b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662b3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662b3f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00662b46: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x662b4bu); f_007c1160();
    /* 00662b4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662b4d: jne 0x662b54 */ if (!fZ) goto L_00662b54;
L_00662b4f:; BB(0x00662b4f);
    /* 00662b4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662b53: ret  */ FN_RET(0x00662ab4); r_esp += 4; return;
L_00662b54:; BB(0x00662b54);
    /* 00662b54: mov eax, 1 */ r_eax = 0x1u;
    /* 00662b59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662b5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662b5b: ret  */ FN_RET(0x00662ab4); r_esp += 4; return;
L_00662b5c:; BB(0x00662b5c);
    /* 00662b5c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662b5e: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x662b63u); f_00688d3c();
    /* 00662b63: jmp 0x662b4f */ goto L_00662b4f;
L_00662b65:; BB(0x00662b65);
    /* 00662b65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662b67: call 0x693684 */ r_esp -= 4; W32(r_esp, 0x662b6cu); f_00693684();
    /* 00662b6c: jmp 0x662b4f */ goto L_00662b4f;
}

void f_00662b70(void) /* sub_662B70 */
{
    FN_ENTER(0x00662b70);
    /* 00662b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00662b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662b75: push 0x8e8188 */ { u32 v = 0x8e8188u; r_esp -= 4; W32(r_esp, v); }
    /* 00662b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662b81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662b88: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662b8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662b8e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00662b91: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00662b94: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00662b97: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00662b9a: mov edx, dword ptr [0xa95aa0] */ r_edx = R32((u32)(0xa95aa0u));
    /* 00662ba0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662ba2: je 0x662bb1 */ if (fZ) goto L_00662bb1;
L_00662ba4:; BB(0x00662ba4);
    /* 00662ba4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00662ba8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00662bad: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00662bb1:; BB(0x00662bb1);
    /* 00662bb1: mov edx, ecx */ r_edx = r_ecx;
    /* 00662bb3: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00662bb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662bbb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662bbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662bc0: je 0x662c27 */ if (fZ) goto L_00662c27;
L_00662bc2:; BB(0x00662bc2);
    /* 00662bc2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00662bc9: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00662bce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662bd3u); f_005caba4();
    /* 00662bd3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662bd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662bd9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00662bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662bde: je 0x662c38 */ if (fZ) goto L_00662c38;
L_00662be0:; BB(0x00662be0);
    /* 00662be0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00662be7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662bee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662bf1: push dword ptr [eax + 0xb0] */ { u32 v = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662bf7: push dword ptr [eax + 0xbc] */ { u32 v = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662bfd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662c00: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x662c05u); f_006bc800();
    /* 00662c05: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00662c0c:; BB(0x00662c0c);
    /* 00662c0c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00662c13: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00662c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662c18: je 0x662c27 */ if (fZ) goto L_00662c27;
L_00662c1a:; BB(0x00662c1a);
    /* 00662c1a: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662c20: mov ecx, eax */ r_ecx = r_eax;
    /* 00662c22: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x662c27u); f_008172d4();
L_00662c27:; BB(0x00662c27);
    /* 00662c27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00662c2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662c2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662c34: mov esp, ebp */ r_esp = r_ebp;
    /* 00662c36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662c37: ret  */ FN_RET(0x00662b70); r_esp += 4; return;
L_00662c38:; BB(0x00662c38);
    /* 00662c38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662c3a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662c3d: jmp 0x662c0c */ goto L_00662c0c;
}

void f_00662c40(void)
{
    FN_ENTER(0x00662c40);
    /* 00662c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00662c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662c45: push 0x8e81b0 */ { u32 v = 0x8e81b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662c4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662c51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662c58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662c5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662c5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662c61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662c64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00662c67: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00662c6c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00662c73: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662c78u); f_005caba4();
    /* 00662c78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662c79: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662c7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662c7e: je 0x662cb7 */ if (fZ) goto L_00662cb7;
L_00662c80:; BB(0x00662c80);
    /* 00662c80: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00662c87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662c8e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662c91: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662c97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662c9a: call 0x662cbc */ r_esp -= 4; W32(r_esp, 0x662c9fu); f_00662cbc();
    /* 00662c9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662ca2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662ca9:; BB(0x00662ca9);
    /* 00662ca9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662cac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662cb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00662cb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662cb6: ret  */ FN_RET(0x00662c40); r_esp += 4; return;
L_00662cb7:; BB(0x00662cb7);
    /* 00662cb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662cb9: jmp 0x662ca9 */ goto L_00662ca9;
}

void f_00662cbc(void) /* sub_662CBC */
{
    FN_ENTER(0x00662cbc);
    /* 00662cbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662cbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00662cbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662cc1: push 0x8e81cc */ { u32 v = 0x8e81ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00662cc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662ccd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662cd4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662cd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662cda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662cdd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662ce0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00662ce3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662ce6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662ce9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00662cec: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x662cf1u); f_00661eec();
    /* 00662cf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662cf8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662cfb: mov dword ptr [ecx], 0xb34088 */ W32((u32)(r_ecx), 0xb34088u);
    /* 00662d01: mov eax, dword ptr [0x9c8864] */ r_eax = R32((u32)(0x9c8864u));
    /* 00662d06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00662d08: push 0x93902c */ { u32 v = 0x93902cu; r_esp -= 4; W32(r_esp, v); }
    /* 00662d0d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00662d10: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x662d15u); f_007b9a88();
    /* 00662d15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662d18: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662d1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662d1f: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x662d24u); f_007b52c4();
    /* 00662d24: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662d27: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662d2a: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00662d30: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00662d33: fadd dword ptr [eax + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x6cu));
    /* 00662d36: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00662d39: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x662d3eu); f_007b999c();
    /* 00662d3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662d3f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662d42: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00662d45: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00662d4a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00662d4d: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x662d52u); f_007b4f54();
    /* 00662d52: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662d55: mov ecx, dword ptr [ebx + 0x88] */ r_ecx = R32((u32)(r_ebx+0x88u));
    /* 00662d5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662d5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00662d5f: mov edx, 1 */ r_edx = 0x1u;
    /* 00662d64: jg 0x662d68 */ if ((!fZ&&fS==fO)) goto L_00662d68;
L_00662d66:; BB(0x00662d66);
    /* 00662d66: mov ecx, eax */ r_ecx = r_eax;
L_00662d68:; BB(0x00662d68);
    /* 00662d68: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662d6b: jl 0x662d6f */ if ((fS!=fO)) goto L_00662d6f;
L_00662d6d:; BB(0x00662d6d);
    /* 00662d6d: mov ecx, edx */ r_ecx = r_edx;
L_00662d6f:; BB(0x00662d6f);
    /* 00662d6f: mov dword ptr [ebx + 0xc0], ecx */ W32((u32)(r_ebx+0xc0u), r_ecx);
    /* 00662d75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662d77: jne 0x662d86 */ if (!fZ) goto L_00662d86;
L_00662d79:; BB(0x00662d79);
    /* 00662d79: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 00662d7e: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 00662d84: jmp 0x662da2 */ goto L_00662da2;
L_00662d86:; BB(0x00662d86);
    /* 00662d86: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00662d89: jne 0x662d98 */ if (!fZ) goto L_00662d98;
L_00662d8b:; BB(0x00662d8b);
    /* 00662d8b: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 00662d90: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 00662d96: jmp 0x662da2 */ goto L_00662da2;
L_00662d98:; BB(0x00662d98);
    /* 00662d98: mov dword ptr [ebx + 0xbc], 0 */ W32((u32)(r_ebx+0xbcu), 0x0u);
L_00662da2:; BB(0x00662da2);
    /* 00662da2: mov eax, ebx */ r_eax = r_ebx;
    /* 00662da4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662da7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662daa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662db1: mov esp, ebp */ r_esp = r_ebp;
    /* 00662db3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662db4: ret 8 */ FN_RET(0x00662cbc); r_esp += 12; return;
}

void f_00662db8(void) /* sub_662DB8 */
{
    FN_ENTER(0x00662db8);
    /* 00662db8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662db9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00662dba: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662dbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00662dbf: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00662dc4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00662dc6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00662dc8: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00662dcd: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x662dd0u); call_ind(t); }
    /* 00662dd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662dd2: je 0x662e1a */ if (fZ) goto L_00662e1a;
L_00662dd4:; BB(0x00662dd4);
    /* 00662dd4: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 00662dda: fmul dword ptr [0x939010] */ ST(0) = ST(0) * R_F32((u32)(0x939010u));
    /* 00662de0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00662de4: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 00662de7: mov dword ptr [esp + 8], 0x9ff9e0 */ W32((u32)(r_esp+0x8u), 0x9ff9e0u);
    /* 00662def: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00662df2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x662df7u); f_0061cdb0();
    /* 00662df7: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00662dfd: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00662e00: fmul dword ptr [0x939010] */ ST(0) = ST(0) * R_F32((u32)(0x939010u));
    /* 00662e06: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00662e0a: mov dword ptr [esp + 8], 0x9ff9c0 */ W32((u32)(r_esp+0x8u), 0x9ff9c0u);
    /* 00662e12: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00662e15: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x662e1au); f_0061cdb0();
L_00662e1a:; BB(0x00662e1a);
    /* 00662e1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00662e1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00662e1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662e1f: ret  */ FN_RET(0x00662db8); r_esp += 4; return;
}

void f_00662e20(void) /* sub_662E20 */
{
    FN_ENTER(0x00662e20);
    /* 00662e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00662e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662e25: push 0x8e81f4 */ { u32 v = 0x8e81f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00662e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662e31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662e38: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662e3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662e3e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00662e41: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00662e44: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00662e47: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00662e4a: mov edx, dword ptr [0xa95aa0] */ r_edx = R32((u32)(0xa95aa0u));
    /* 00662e50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662e52: je 0x662e61 */ if (fZ) goto L_00662e61;
L_00662e54:; BB(0x00662e54);
    /* 00662e54: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00662e58: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00662e5d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00662e61:; BB(0x00662e61);
    /* 00662e61: mov edx, ecx */ r_edx = r_ecx;
    /* 00662e63: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00662e69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662e6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662e6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662e70: je 0x662ed7 */ if (fZ) goto L_00662ed7;
L_00662e72:; BB(0x00662e72);
    /* 00662e72: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00662e79: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00662e7e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662e83u); f_005caba4();
    /* 00662e83: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662e86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662e89: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00662e8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662e8e: je 0x662ee8 */ if (fZ) goto L_00662ee8;
L_00662e90:; BB(0x00662e90);
    /* 00662e90: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00662e97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662e9e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662ea1: push dword ptr [eax + 0xb0] */ { u32 v = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662ea7: push dword ptr [eax + 0xbc] */ { u32 v = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662ead: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662eb0: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x662eb5u); f_006bc800();
    /* 00662eb5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00662ebc:; BB(0x00662ebc);
    /* 00662ebc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00662ec3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00662ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662ec8: je 0x662ed7 */ if (fZ) goto L_00662ed7;
L_00662eca:; BB(0x00662eca);
    /* 00662eca: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662ed0: mov ecx, eax */ r_ecx = r_eax;
    /* 00662ed2: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x662ed7u); f_008172d4();
L_00662ed7:; BB(0x00662ed7);
    /* 00662ed7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00662eda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662edd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662ee4: mov esp, ebp */ r_esp = r_ebp;
    /* 00662ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662ee7: ret  */ FN_RET(0x00662e20); r_esp += 4; return;
L_00662ee8:; BB(0x00662ee8);
    /* 00662ee8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662eea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662eed: jmp 0x662ebc */ goto L_00662ebc;
}

void f_00662ef0(void)
{
    FN_ENTER(0x00662ef0);
    /* 00662ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00662ef3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662ef5: push 0x8e821c */ { u32 v = 0x8e821cu; r_esp -= 4; W32(r_esp, v); }
    /* 00662efa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662f01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00662f08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662f0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00662f0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00662f11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00662f14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00662f17: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00662f1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00662f23: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662f28u); f_005caba4();
    /* 00662f28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662f29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662f2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662f2e: je 0x662f67 */ if (fZ) goto L_00662f67;
L_00662f30:; BB(0x00662f30);
    /* 00662f30: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00662f37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662f3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662f41: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662f47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662f4a: call 0x662f6c */ r_esp -= 4; W32(r_esp, 0x662f4fu); f_00662f6c();
    /* 00662f4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662f52: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662f59:; BB(0x00662f59);
    /* 00662f59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662f5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00662f63: mov esp, ebp */ r_esp = r_ebp;
    /* 00662f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662f66: ret  */ FN_RET(0x00662ef0); r_esp += 4; return;
L_00662f67:; BB(0x00662f67);
    /* 00662f67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662f69: jmp 0x662f59 */ goto L_00662f59;
}

void f_00662f6c(void) /* sub_662F6C */
{
    FN_ENTER(0x00662f6c);
    /* 00662f6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662f6d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00662f6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662f73: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00662f77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00662f79: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x662f7eu); f_00661eec();
    /* 00662f7e: mov ecx, dword ptr [ebp + 0x88] */ r_ecx = R32((u32)(r_ebp+0x88u));
    /* 00662f84: mov dword ptr [ebp], 0xb34000 */ W32((u32)(r_ebp), 0xb34000u);
    /* 00662f8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00662f8d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00662f8f: mov eax, dword ptr [0x9c8868] */ r_eax = R32((u32)(0x9c8868u));
    /* 00662f94: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00662f97: mov eax, 1 */ r_eax = 0x1u;
    /* 00662f9c: jg 0x662fa0 */ if ((!fZ&&fS==fO)) goto L_00662fa0;
L_00662f9e:; BB(0x00662f9e);
    /* 00662f9e: mov ecx, edx */ r_ecx = r_edx;
L_00662fa0:; BB(0x00662fa0);
    /* 00662fa0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662fa3: jl 0x662fa7 */ if ((fS!=fO)) goto L_00662fa7;
L_00662fa5:; BB(0x00662fa5);
    /* 00662fa5: mov ecx, eax */ r_ecx = r_eax;
L_00662fa7:; BB(0x00662fa7);
    /* 00662fa7: mov dword ptr [ebp + 0xc0], ecx */ W32((u32)(r_ebp+0xc0u), r_ecx);
    /* 00662fad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662faf: jne 0x662fbe */ if (!fZ) goto L_00662fbe;
L_00662fb1:; BB(0x00662fb1);
    /* 00662fb1: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 00662fb6: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 00662fbc: jmp 0x662fda */ goto L_00662fda;
L_00662fbe:; BB(0x00662fbe);
    /* 00662fbe: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00662fc1: jne 0x662fd0 */ if (!fZ) goto L_00662fd0;
L_00662fc3:; BB(0x00662fc3);
    /* 00662fc3: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 00662fc8: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 00662fce: jmp 0x662fda */ goto L_00662fda;
L_00662fd0:; BB(0x00662fd0);
    /* 00662fd0: mov dword ptr [ebp + 0xbc], 0 */ W32((u32)(r_ebp+0xbcu), 0x0u);
L_00662fda:; BB(0x00662fda);
    /* 00662fda: mov eax, ebp */ r_eax = r_ebp;
    /* 00662fdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662fdd: ret 8 */ FN_RET(0x00662f6c); r_esp += 12; return;
}

void f_00662fe0(void) /* sub_662FE0 */
{
    FN_ENTER(0x00662fe0);
    /* 00662fe0: mov dword ptr [0xa8fa70], 0x3f800000 */ W32((u32)(0xa8fa70u), 0x3f800000u);
    /* 00662fea: mov dword ptr [0xa8fa74], 0x41000000 */ W32((u32)(0xa8fa74u), 0x41000000u);
    /* 00662ff4: mov dword ptr [0xa8fa78], 0x3fc00000 */ W32((u32)(0xa8fa78u), 0x3fc00000u);
    /* 00662ffe: ret  */ FN_RET(0x00662fe0); r_esp += 4; return;
}

