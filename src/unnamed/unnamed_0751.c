#include "protos.h"

void f_00751041(void)
{
    FN_ENTER(0x00751041);
    /* 00751041: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751044: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00751047: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751049: je 0x75105a */ if (fZ) goto L_0075105a;
L_0075104b:; BB(0x0075104b);
    /* 0075104b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x751050u); f_007127b0();
    /* 00751050: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751053: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075105a:; BB(0x0075105a);
    /* 0075105a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075105d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075105f: je 0x751070 */ if (fZ) goto L_00751070;
L_00751061:; BB(0x00751061);
    /* 00751061: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x751066u); f_007127b0();
    /* 00751066: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751069: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_00751070:; BB(0x00751070);
    /* 00751070: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00751073: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751075: je 0x751086 */ if (fZ) goto L_00751086;
L_00751077:; BB(0x00751077);
    /* 00751077: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75107cu); f_007127b0();
    /* 0075107c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075107f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00751086:; BB(0x00751086);
    /* 00751086: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00751089: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075108b: je 0x7511ba */ if (fZ) goto L_007511ba;
L_00751091:; BB(0x00751091);
    /* 00751091: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00751094: call 0x751ae0 */ r_esp -= 4; W32(r_esp, 0x751099u); f_00751ae0();
    /* 00751099: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075109c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075109f: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 007510a6: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007510ac: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 007510b3: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 007510b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007510b8: je 0x7510c1 */ if (fZ) goto L_007510c1;
L_007510ba:; BB(0x007510ba);
    /* 007510ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007510bc: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7510c1u); f_00760acc();
L_007510c1:; BB(0x007510c1);
    /* 007510c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510c4: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 007510c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510cb: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007510ce: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7510d3u); f_00737d90();
    /* 007510d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007510d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007510d7: call 0x751260 */ r_esp -= 4; W32(r_esp, 0x7510dcu); f_00751260();
    /* 007510dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510df: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007510e2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007510e9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007510eb: je 0x751110 */ if (fZ) goto L_00751110;
L_007510ed:; BB(0x007510ed);
    /* 007510ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510f0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007510f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007510f5: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x7510f8u); call_ind(t); }
    /* 007510f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510fb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007510fe: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 00751102: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751105: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075110c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075110e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075110f: ret  */ FN_RET(0x00751041); r_esp += 4; return;
L_00751110:; BB(0x00751110);
    /* 00751110: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751112: je 0x75111b */ if (fZ) goto L_0075111b;
L_00751114:; BB(0x00751114);
    /* 00751114: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751117: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00751041); r_esp += 4; return;
L_007511ba:; BB(0x007511ba);
    /* 007511ba: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007511c1: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 007511c6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7511cbu); f_005caba4();
    /* 007511cb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007511ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007511d1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007511d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007511d6: je 0x75123e */ if (fZ) goto L_0075123e;
L_007511d8:; BB(0x007511d8);
    /* 007511d8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007511df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007511e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007511e8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7511edu); f_0073ec50();
    /* 007511ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007511ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007511f1: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007511f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007511f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007511f8: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x7511fdu); f_00725d18();
    /* 007511fd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00751204:; BB(0x00751204);
    /* 00751204: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00751207: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075120a: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075120d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00751214: mov eax, edx */ r_eax = r_edx;
    /* 00751216: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00751218: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075121b: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x751220u); f_007336fc();
    /* 00751220: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751223: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00751226: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00751227: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075122a: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75122fu); f_00712624();
    /* 0075122f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751232: mov dword ptr [eax + 0x20], 0xffffffff */ W32((u32)(r_eax+0x20u), 0xffffffffu);
    /* 00751239: jmp 0x751091 */ goto L_00751091;
L_0075123e:; BB(0x0075123e);
    /* 0075123e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00751240: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00751243: jmp 0x751204 */ goto L_00751204;
}

void f_007510c8(void)
{
    FN_ENTER(0x007510c8);
    /* 007510c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510cb: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007510ce: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7510d3u); f_00737d90();
    /* 007510d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007510d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007510d7: call 0x751260 */ r_esp -= 4; W32(r_esp, 0x7510dcu); f_00751260();
    /* 007510dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510df: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007510e2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007510e9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007510eb: je 0x751110 */ if (fZ) goto L_00751110;
L_007510ed:; BB(0x007510ed);
    /* 007510ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510f0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007510f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007510f5: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x7510f8u); call_ind(t); }
    /* 007510f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007510fb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007510fe: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 00751102: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751105: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075110c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075110e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075110f: ret  */ FN_RET(0x007510c8); r_esp += 4; return;
L_00751110:; BB(0x00751110);
    /* 00751110: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751112: je 0x75111b */ if (fZ) goto L_0075111b;
L_00751114:; BB(0x00751114);
    /* 00751114: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751117: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x007510c8); r_esp += 4; return;
}

void f_00751260(void) /* sub_751260 */
{
    FN_ENTER(0x00751260);
    /* 00751260: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00751264: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00751267: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751269: je 0x75127e */ if (fZ) goto L_0075127e;
L_0075126b:; BB(0x0075126b);
    /* 0075126b: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075126e: jne 0x751273 */ if (!fZ) goto L_00751273;
L_00751270:; BB(0x00751270);
    /* 00751270: ret 4 */ FN_RET(0x00751260); r_esp += 8; return;
L_00751273:; BB(0x00751273);
    /* 00751273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751274: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00751277: mov ecx, edx */ r_ecx = r_edx;
    /* 00751279: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x75127eu); f_0072606c();
L_0075127e:; BB(0x0075127e);
    /* 0075127e: ret 4 */ FN_RET(0x00751260); r_esp += 8; return;
}

void f_00751284(void) /* sub_751284 */
{
    FN_ENTER(0x00751284);
    /* 00751284: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751285: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751286: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751287: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00751289: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0075128d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075128f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x751294u); f_0073ec50();
    /* 00751294: mov esi, eax */ r_esi = r_eax;
    /* 00751296: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00751298: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75129du); f_0079317c();
    /* 0075129d: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007512a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007512a1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007512a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007512a4: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x7512a9u); f_0073566c();
    /* 007512a9: mov esi, eax */ r_esi = r_eax;
    /* 007512ab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007512ae: cmp ebx, 0xffffff01 */ {  u32 a = r_ebx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007512b4: je 0x751318 */ if (fZ) goto L_00751318;
L_007512b6:; BB(0x007512b6);
    /* 007512b6: mov edx, ebx */ r_edx = r_ebx;
    /* 007512b8: and edx, 0xfffffff0 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007512bb: cmp edx, -0x10 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007512be: je 0x75130d */ if (fZ) goto L_0075130d;
L_007512c0:; BB(0x007512c0);
    /* 007512c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007512c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007512c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007512c4: call 0x751324 */ r_esp -= 4; W32(r_esp, 0x7512c9u); f_00751324();
L_007512c9:; BB(0x007512c9);
    /* 007512c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007512cb: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 007512ce: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7512d3u); f_007336fc();
    /* 007512d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007512d4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007512d7: mov ecx, esi */ r_ecx = r_esi;
    /* 007512d9: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7512deu); f_00712624();
    /* 007512de: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 007512e3: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007512ea: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007512f0: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007512f7: mov ecx, esi */ r_ecx = r_esi;
    /* 007512f9: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7512feu); f_00736138();
    /* 007512fe: mov ecx, esi */ r_ecx = r_esi;
    /* 00751300: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x751305u); f_00736458();
    /* 00751305: mov eax, esi */ r_eax = r_esi;
    /* 00751307: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075130a: ret 4 */ FN_RET(0x00751284); r_esp += 8; return;
L_0075130d:; BB(0x0075130d);
    /* 0075130d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075130e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075130f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00751311: call 0x7518b0 */ r_esp -= 4; W32(r_esp, 0x751316u); f_007518b0();
    /* 00751316: jmp 0x7512c9 */ goto L_007512c9;
L_00751318:; BB(0x00751318);
    /* 00751318: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075131b: call 0x751548 */ r_esp -= 4; W32(r_esp, 0x751320u); f_00751548();
    /* 00751320: jmp 0x7512c9 */ goto L_007512c9;
}

void f_00751324(void) /* sub_751324 */
{
    FN_ENTER(0x00751324);
    /* 00751324: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751325: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751326: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751327: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751328: mov esi, ecx */ r_esi = r_ecx;
    /* 0075132a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0075132e: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751332: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x751337u); f_005c5528();
    /* 00751337: mov ebx, eax */ r_ebx = r_eax;
    /* 00751339: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075133c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075133e: je 0x7514be */ if (fZ) goto L_007514be;
L_00751344:; BB(0x00751344);
    /* 00751344: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00751346: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00751348: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075134a: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x75134fu); f_005c50b4();
    /* 0075134f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751351: je 0x751395 */ if (fZ) goto L_00751395;
L_00751353:; BB(0x00751353);
    /* 00751353: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00751355: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00751357: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751359: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x75135eu); f_005c50b4();
    /* 0075135e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751360: jne 0x751381 */ if (!fZ) goto L_00751381;
L_00751362:; BB(0x00751362);
    /* 00751362: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x751367u); f_0080a640();
    /* 00751367: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751369: jne 0x751381 */ if (!fZ) goto L_00751381;
L_0075136b:; BB(0x0075136b);
    /* 0075136b: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 0075136d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751372u); f_0079317c();
    /* 00751372: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751373: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00751375: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00751377: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00751379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075137a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75137fu); f_00735c90();
    /* 0075137f: jmp 0x751395 */ goto L_00751395;
L_00751381:; BB(0x00751381);
    /* 00751381: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00751383: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751388u); f_0079317c();
    /* 00751388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751389: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075138b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075138d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075138f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751390: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x751395u); f_00735ee0();
L_00751395:; BB(0x00751395);
    /* 00751395: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00751397: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00751399: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075139b: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x7513a0u); f_005c50b4();
    /* 007513a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007513a2: je 0x751444 */ if (fZ) goto L_00751444;
L_007513a8:; BB(0x007513a8);
    /* 007513a8: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 007513ae: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007513b1: je 0x7513e8 */ if (fZ) goto L_007513e8;
L_007513b3:; BB(0x007513b3);
    /* 007513b3: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x7513b8u); f_0080a640();
    /* 007513b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007513ba: je 0x7513d2 */ if (fZ) goto L_007513d2;
L_007513bc:; BB(0x007513bc);
    /* 007513bc: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 007513be: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7513c3u); f_0079317c();
    /* 007513c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007513c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007513c6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007513c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007513ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007513cb: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7513d0u); f_00735ee0();
    /* 007513d0: jmp 0x751444 */ goto L_00751444;
L_007513d2:; BB(0x007513d2);
    /* 007513d2: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 007513d4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7513d9u); f_0079317c();
    /* 007513d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007513da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007513dc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007513de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007513e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007513e1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7513e6u); f_00735c90();
    /* 007513e6: jmp 0x751444 */ goto L_00751444;
L_007513e8:; BB(0x007513e8);
    /* 007513e8: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007513eb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7513f0u); f_0068d5a8();
    /* 007513f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007513f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007513f3: je 0x751444 */ if (fZ) goto L_00751444;
L_007513f5:; BB(0x007513f5);
    /* 007513f5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007513f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007513f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007513fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007513fc: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x751401u); f_005c4214();
    /* 00751401: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751403: je 0x751430 */ if (fZ) goto L_00751430;
L_00751405:; BB(0x00751405);
    /* 00751405: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751406: mov ecx, esi */ r_ecx = r_esi;
    /* 00751408: call 0x7514c8 */ r_esp -= 4; W32(r_esp, 0x75140du); f_007514c8();
    /* 0075140d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075140f: je 0x751430 */ if (fZ) goto L_00751430;
L_00751411:; BB(0x00751411);
    /* 00751411: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x751416u); f_0080a640();
    /* 00751416: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751418: jne 0x751430 */ if (!fZ) goto L_00751430;
L_0075141a:; BB(0x0075141a);
    /* 0075141a: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 0075141c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751421u); f_0079317c();
    /* 00751421: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751422: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00751424: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00751426: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00751428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751429: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75142eu); f_00735c90();
    /* 0075142e: jmp 0x751444 */ goto L_00751444;
L_00751430:; BB(0x00751430);
    /* 00751430: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 00751432: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751437u); f_0079317c();
    /* 00751437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751438: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075143a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075143c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075143e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075143f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x751444u); f_00735ee0();
L_00751444:; BB(0x00751444);
    /* 00751444: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x751449u); f_0080a640();
    /* 00751449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075144b: jne 0x751472 */ if (!fZ) goto L_00751472;
L_0075144d:; BB(0x0075144d);
    /* 0075144d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075144f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00751451: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751453: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x751458u); f_005c50b4();
    /* 00751458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075145a: jne 0x751472 */ if (!fZ) goto L_00751472;
L_0075145c:; BB(0x0075145c);
    /* 0075145c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075145e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751463u); f_0079317c();
    /* 00751463: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751464: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00751466: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00751468: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075146a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075146b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x751470u); f_00735c90();
    /* 00751470: jmp 0x751486 */ goto L_00751486;
L_00751472:; BB(0x00751472);
    /* 00751472: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00751474: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751479u); f_0079317c();
    /* 00751479: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075147a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075147c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075147e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00751480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751481: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x751486u); f_00735ee0();
L_00751486:; BB(0x00751486);
    /* 00751486: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x75148bu); f_0080a640();
    /* 0075148b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075148d: je 0x7514aa */ if (fZ) goto L_007514aa;
L_0075148f:; BB(0x0075148f);
    /* 0075148f: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 00751491: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751496u); f_0079317c();
    /* 00751496: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751497: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00751499: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075149b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075149d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075149e: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7514a3u); f_00735ee0();
    /* 007514a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007514a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007514a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007514a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007514a7: ret 8 */ FN_RET(0x00751324); r_esp += 12; return;
L_007514aa:; BB(0x007514aa);
    /* 007514aa: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 007514ac: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7514b1u); f_0079317c();
    /* 007514b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007514b2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007514b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007514b6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007514b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007514b9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7514beu); f_00735c90();
L_007514be:; BB(0x007514be);
    /* 007514be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007514bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007514c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007514c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007514c2: ret 8 */ FN_RET(0x00751324); r_esp += 12; return;
}

void f_007514c8(void) /* sub_7514C8 */
{
    FN_ENTER(0x007514c8);
    /* 007514c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007514cb: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007514ce: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7514d3u); f_0068d5a8();
    /* 007514d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007514d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007514d6: je 0x75153f */ if (fZ) goto L_0075153f;
L_007514d8:; BB(0x007514d8);
    /* 007514d8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007514dc: movzx ecx, byte ptr [edx + 0xf2] */ r_ecx = (u32)R8((u32)(r_edx+0xf2u));
    /* 007514e3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007514e6: je 0x7514f3 */ if (fZ) goto L_007514f3;
L_007514e8:; BB(0x007514e8);
    /* 007514e8: mov eax, 1 */ r_eax = 0x1u;
    /* 007514ed: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007514f0: ret 4 */ FN_RET(0x007514c8); r_esp += 8; return;
L_007514f3:; BB(0x007514f3);
    /* 007514f3: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007514f7: movzx ecx, byte ptr [edx + 0xf3] */ r_ecx = (u32)R8((u32)(r_edx+0xf3u));
    /* 007514fe: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751501: je 0x75150e */ if (fZ) goto L_0075150e;
L_00751503:; BB(0x00751503);
    /* 00751503: mov eax, 1 */ r_eax = 0x1u;
    /* 00751508: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075150b: ret 4 */ FN_RET(0x007514c8); r_esp += 8; return;
L_0075150e:; BB(0x0075150e);
    /* 0075150e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00751510: add eax, 0xdf8 */ {  u32 a = r_eax; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00751515: mov ecx, eax */ r_ecx = r_eax;
    /* 00751517: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x75151cu); f_0069792c();
    /* 0075151c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075151e: je 0x75153f */ if (fZ) goto L_0075153f;
L_00751520:; BB(0x00751520);
    /* 00751520: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00751523: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751524: mov ecx, eax */ r_ecx = r_eax;
    /* 00751526: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x75152bu); f_005c425c();
    /* 0075152b: movzx eax, byte ptr [esp + 5] */ r_eax = (u32)R8((u32)(r_esp+0x5u));
    /* 00751530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00751532: jle 0x75153f */ if ((fZ||fS!=fO)) goto L_0075153f;
L_00751534:; BB(0x00751534);
    /* 00751534: mov eax, 1 */ r_eax = 0x1u;
    /* 00751539: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075153c: ret 4 */ FN_RET(0x007514c8); r_esp += 8; return;
L_0075153f:; BB(0x0075153f);
    /* 0075153f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00751541: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00751544: ret 4 */ FN_RET(0x007514c8); r_esp += 8; return;
}

void f_00751548(void) /* sub_751548 */
{
    FN_ENTER(0x00751548);
    /* 00751548: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x75154du); f_0080a640();
    /* 0075154d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075154f: je 0x75156d */ if (fZ) goto L_0075156d;
L_00751551:; BB(0x00751551);
    /* 00751551: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00751553: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751558u); f_0079317c();
    /* 00751558: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751559: mov edx, 6 */ r_edx = 0x6u;
    /* 0075155e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075155f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751561: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00751565: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75156au); f_00735ee0();
    /* 0075156a: ret 4 */ FN_RET(0x00751548); r_esp += 8; return;
L_0075156d:; BB(0x0075156d);
    /* 0075156d: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075156f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751574u); f_0079317c();
    /* 00751574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751575: mov edx, 6 */ r_edx = 0x6u;
    /* 0075157a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075157b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075157c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075157d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00751581: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x751586u); f_00735c90();
    /* 00751586: ret 4 */ FN_RET(0x00751548); r_esp += 8; return;
}

void f_0075158c(void) /* sub_75158C */
{
    FN_ENTER(0x0075158c);
    /* 0075158c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00751590: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00751593: ja 0x7515c0 */ if ((!fC&&!fZ)) goto L_007515c0;
L_00751595:; BB(0x00751595);
    /* 00751595: mov eax, dword ptr [eax*4 + 0x973d1c] */ r_eax = R32((u32)(r_eax*4+0x973d1cu));
    /* 0075159c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007515c0:; BB(0x007515c0);
    /* 007515c0: ret 4 */ FN_RET(0x0075158c); r_esp += 8; return;
}

void f_0075159e(void)
{
    FN_ENTER(0x0075159e);
    /* 0075159e: mov byte ptr [ecx + 0x1c], 6 */ W8((u32)(r_ecx+0x1cu), 0x6u);
    /* 007515a2: jmp 0x7515c0 */ goto L_007515c0;
L_007515c0:; BB(0x007515c0);
    /* 007515c0: ret 4 */ FN_RET(0x0075159e); r_esp += 8; return;
}

void f_007515a4(void)
{
    FN_ENTER(0x007515a4);
    /* 007515a4: mov byte ptr [ecx + 0x1c], 0x13 */ W8((u32)(r_ecx+0x1cu), 0x13u);
    /* 007515a8: jmp 0x7515c0 */ goto L_007515c0;
L_007515c0:; BB(0x007515c0);
    /* 007515c0: ret 4 */ FN_RET(0x007515a4); r_esp += 8; return;
}

void f_007515aa(void)
{
    FN_ENTER(0x007515aa);
    /* 007515aa: mov byte ptr [ecx + 0x1c], 0x11 */ W8((u32)(r_ecx+0x1cu), 0x11u);
    /* 007515ae: jmp 0x7515c0 */ goto L_007515c0;
L_007515c0:; BB(0x007515c0);
    /* 007515c0: ret 4 */ FN_RET(0x007515aa); r_esp += 8; return;
}

void f_007515b0(void)
{
    FN_ENTER(0x007515b0);
    /* 007515b0: mov byte ptr [ecx + 0x1c], 0xf */ W8((u32)(r_ecx+0x1cu), 0xfu);
    /* 007515b4: jmp 0x7515c0 */ goto L_007515c0;
L_007515c0:; BB(0x007515c0);
    /* 007515c0: ret 4 */ FN_RET(0x007515b0); r_esp += 8; return;
}

void f_007515b6(void)
{
    FN_ENTER(0x007515b6);
    /* 007515b6: mov byte ptr [ecx + 0x1c], 0xc */ W8((u32)(r_ecx+0x1cu), 0xcu);
    /* 007515ba: jmp 0x7515c0 */ goto L_007515c0;
L_007515c0:; BB(0x007515c0);
    /* 007515c0: ret 4 */ FN_RET(0x007515b6); r_esp += 8; return;
}

void f_007515bc(void)
{
    FN_ENTER(0x007515bc);
    /* 007515bc: mov byte ptr [ecx + 0x1c], 5 */ W8((u32)(r_ecx+0x1cu), 0x5u);
    /* 007515c0: ret 4 */ FN_RET(0x007515bc); r_esp += 8; return;
}

void f_007515c4(void) /* sub_7515C4 */
{
    FN_ENTER(0x007515c4);
    /* 007515c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007515c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007515c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007515c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007515c8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007515ca: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 007515ce: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 007515d2: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007515d5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7515dau); f_0068d5a8();
    /* 007515da: mov esi, eax */ r_esi = r_eax;
    /* 007515dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007515df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007515e1: je 0x751657 */ if (fZ) goto L_00751657;
L_007515e3:; BB(0x007515e3);
    /* 007515e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007515e4: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x7515e9u); f_005c5528();
    /* 007515e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007515ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007515ec: je 0x751657 */ if (fZ) goto L_00751657;
L_007515ee:; BB(0x007515ee);
    /* 007515ee: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007515f0: je 0x75164b */ if (fZ) goto L_0075164b;
L_007515f2:; BB(0x007515f2);
    /* 007515f2: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007515f5: jne 0x751633 */ if (!fZ) goto L_00751633;
L_007515f7:; BB(0x007515f7);
    /* 007515f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007515f9: mov ecx, eax */ r_ecx = r_eax;
    /* 007515fb: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x7515feu); call_ind(t); }
    /* 007515fe: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 00751604: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00751607: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751608: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x75160du); f_0069792c();
    /* 0075160d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075160f: je 0x75161e */ if (fZ) goto L_0075161e;
L_00751611:; BB(0x00751611);
    /* 00751611: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751617: mov ecx, esi */ r_ecx = r_esi;
    /* 00751619: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x75161eu); f_0068dfd8();
L_0075161e:; BB(0x0075161e);
    /* 0075161e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00751620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751621: mov ecx, esi */ r_ecx = r_esi;
    /* 00751623: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x751628u); f_0068de54();
    /* 00751628: mov byte ptr [ebp + 0x1c], 0x16 */ W8((u32)(r_ebp+0x1cu), 0x16u);
    /* 0075162c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075162d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075162e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075162f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00751630: ret 8 */ FN_RET(0x007515c4); r_esp += 12; return;
L_00751633:; BB(0x00751633);
    /* 00751633: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00751636: jne 0x751657 */ if (!fZ) goto L_00751657;
L_00751638:; BB(0x00751638);
    /* 00751638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751639: mov ecx, esi */ r_ecx = r_esi;
    /* 0075163b: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x751640u); f_0068dfd8();
    /* 00751640: mov byte ptr [ebp + 0x1c], 0x16 */ W8((u32)(r_ebp+0x1cu), 0x16u);
    /* 00751644: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751646: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00751647: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00751648: ret 8 */ FN_RET(0x007515c4); r_esp += 12; return;
L_0075164b:; BB(0x0075164b);
    /* 0075164b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075164c: mov ecx, esi */ r_ecx = r_esi;
    /* 0075164e: call 0x68dbbc */ r_esp -= 4; W32(r_esp, 0x751653u); f_0068dbbc();
    /* 00751653: mov byte ptr [ebp + 0x1c], 0x16 */ W8((u32)(r_ebp+0x1cu), 0x16u);
L_00751657:; BB(0x00751657);
    /* 00751657: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751659: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075165a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075165b: ret 8 */ FN_RET(0x007515c4); r_esp += 12; return;
}

void f_00751660(void) /* sub_751660 */
{
    FN_ENTER(0x00751660);
    /* 00751660: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00751661: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751662: mov esi, ecx */ r_esi = r_ecx;
    /* 00751664: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00751666: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75166bu); f_0073ec50();
    /* 0075166b: mov edi, eax */ r_edi = r_eax;
    /* 0075166d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0075166f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751674u); f_0079317c();
    /* 00751674: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751678: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075167a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075167b: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x751680u); f_0073566c();
    /* 00751680: mov edi, eax */ r_edi = r_eax;
    /* 00751682: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00751684: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751689u); f_0079317c();
    /* 00751689: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075168c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075168e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00751690: mov ecx, edi */ r_ecx = r_edi;
    /* 00751692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751693: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x751698u); f_00735c90();
    /* 00751698: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075169a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75169fu); f_0079317c();
    /* 0075169f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007516a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007516a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007516a4: mov ecx, edi */ r_ecx = r_edi;
    /* 007516a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007516a7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7516acu); f_00735c90();
    /* 007516ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007516ae: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 007516b1: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7516b6u); f_007336fc();
    /* 007516b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007516b7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007516ba: mov ecx, edi */ r_ecx = r_edi;
    /* 007516bc: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7516c1u); f_00712624();
    /* 007516c1: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 007516c6: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 007516cd: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007516d3: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 007516da: mov ecx, edi */ r_ecx = r_edi;
    /* 007516dc: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7516e1u); f_00736138();
    /* 007516e1: mov ecx, edi */ r_ecx = r_edi;
    /* 007516e3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7516e8u); f_00736458();
    /* 007516e8: mov eax, edi */ r_eax = r_edi;
    /* 007516ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007516eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007516ec: ret  */ FN_RET(0x00751660); r_esp += 4; return;
}

void f_007516f0(void) /* sub_7516F0 */
{
    FN_ENTER(0x007516f0);
    /* 007516f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007516f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007516f2: mov edi, ecx */ r_edi = r_ecx;
    /* 007516f4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007516f8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007516fb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x751700u); f_0068d5a8();
    /* 00751700: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751703: je 0x75174f */ if (fZ) goto L_0075174f;
L_00751705:; BB(0x00751705);
    /* 00751705: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751707: jne 0x751720 */ if (!fZ) goto L_00751720;
L_00751709:; BB(0x00751709);
    /* 00751709: mov ecx, eax */ r_ecx = r_eax;
    /* 0075170b: call 0x68fb70 */ r_esp -= 4; W32(r_esp, 0x751710u); f_0068fb70();
    /* 00751710: mov dword ptr [edi + 0x2c], 1 */ W32((u32)(r_edi+0x2cu), 0x1u);
    /* 00751717: mov byte ptr [edi + 0x1c], 0x16 */ W8((u32)(r_edi+0x1cu), 0x16u);
    /* 0075171b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075171c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075171d: ret 4 */ FN_RET(0x007516f0); r_esp += 8; return;
L_00751720:; BB(0x00751720);
    /* 00751720: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00751723: jne 0x75174f */ if (!fZ) goto L_0075174f;
L_00751725:; BB(0x00751725);
    /* 00751725: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00751728: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075172a: je 0x751738 */ if (fZ) goto L_00751738;
L_0075172c:; BB(0x0075172c);
    /* 0075172c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x751731u); f_007127b0();
    /* 00751731: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_00751738:; BB(0x00751738);
    /* 00751738: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075173b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075173d: je 0x75174b */ if (fZ) goto L_0075174b;
L_0075173f:; BB(0x0075173f);
    /* 0075173f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x751744u); f_007127b0();
    /* 00751744: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0075174b:; BB(0x0075174b);
    /* 0075174b: mov byte ptr [edi + 0x1c], 0xa */ W8((u32)(r_edi+0x1cu), 0xau);
L_0075174f:; BB(0x0075174f);
    /* 0075174f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00751750: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00751751: ret 4 */ FN_RET(0x007516f0); r_esp += 8; return;
}

void f_00751754(void) /* sub_751754 */
{
    FN_ENTER(0x00751754);
    /* 00751754: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751755: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751756: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751757: mov esi, ecx */ r_esi = r_ecx;
    /* 00751759: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075175c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x751761u); f_0068d5a8();
    /* 00751761: mov ebp, eax */ r_ebp = r_eax;
    /* 00751763: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00751766: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751768: je 0x751790 */ if (fZ) goto L_00751790;
L_0075176a:; BB(0x0075176a);
    /* 0075176a: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0075176d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x751772u); f_00737d90();
    /* 00751772: mov ebx, eax */ r_ebx = r_eax;
    /* 00751774: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00751777: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x75177cu); f_00751c44();
    /* 0075177c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075177d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075177e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00751780: call 0x68fb3c */ r_esp -= 4; W32(r_esp, 0x751785u); f_0068fb3c();
    /* 00751785: mov dword ptr [esi + 0x2c], 1 */ W32((u32)(r_esi+0x2cu), 0x1u);
    /* 0075178c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075178d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075178e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075178f: ret  */ FN_RET(0x00751754); r_esp += 4; return;
L_00751790:; BB(0x00751790);
    /* 00751790: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751792: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00751793: ret  */ FN_RET(0x00751754); r_esp += 4; return;
}

void f_00751794(void) /* sub_751794 */
{
    FN_ENTER(0x00751794);
    /* 00751794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751795: mov ebp, esp */ r_ebp = r_esp;
    /* 00751797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751799: push 0x8f2c28 */ { u32 v = 0x8f2c28u; r_esp -= 4; W32(r_esp, v); }
    /* 0075179e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007517a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007517a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007517ac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007517af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007517b2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007517b5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007517b8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007517bb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 007517be: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007517c5: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007517ca: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7517cfu); f_005caba4();
    /* 007517cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007517d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007517d5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007517d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007517da: je 0x75187d */ if (fZ) goto L_0075187d;
L_007517e0:; BB(0x007517e0);
    /* 007517e0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007517e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007517ee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007517f0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7517f5u); f_0073ec50();
    /* 007517f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007517f6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007517f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007517fc: movsx ebx, word ptr [edx + 0x24] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x24u));
    /* 00751800: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751801: mov esi, 1 */ r_esi = 0x1u;
    /* 00751806: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751807: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075180a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075180b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075180c: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x751811u); f_00728ac4();
    /* 00751811: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00751818:; BB(0x00751818);
    /* 00751818: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075181f: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00751821: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751826u); f_0079317c();
    /* 00751826: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751827: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075182a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075182b: call 0x729630 */ r_esp -= 4; W32(r_esp, 0x751830u); f_00729630();
    /* 00751830: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00751833: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00751835: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00751838: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75183du); f_007336fc();
    /* 0075183d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00751840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00751841: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00751844: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x751849u); f_00712624();
    /* 00751849: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075184e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00751851: call 0x7296e4 */ r_esp -= 4; W32(r_esp, 0x751856u); f_007296e4();
    /* 00751856: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751859: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075185c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075185f: movzx edx, word ptr [eax + 0x60] */ r_edx = (u32)R16((u32)(r_eax+0x60u));
    /* 00751863: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751869: mov word ptr [eax + 0x60], dx */ W16((u32)(r_eax+0x60u), (u16)r_edx);
    /* 0075186d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751870: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751877: mov esp, ebp */ r_esp = r_ebp;
    /* 00751879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075187a: ret 4 */ FN_RET(0x00751794); r_esp += 8; return;
L_0075187d:; BB(0x0075187d);
    /* 0075187d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075187f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00751882: jmp 0x751818 */ goto L_00751818;
}

void f_007518b0(void) /* sub_7518B0 */
{
    FN_ENTER(0x007518b0);
    /* 007518b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007518b1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007518b5: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007518b8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007518bb: je 0x75190e */ if (fZ) goto L_0075190e;
L_007518bd:; BB(0x007518bd);
    /* 007518bd: mov edi, 4 */ r_edi = 0x4u;
L_007518c2:; BB(0x007518c2);
    /* 007518c2: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x7518c7u); f_00807d60();
    /* 007518c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007518c9: je 0x7518f1 */ if (fZ) goto L_007518f1;
L_007518cb:; BB(0x007518cb);
    /* 007518cb: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x7518d0u); f_00807db8();
    /* 007518d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007518d2: jne 0x7518f1 */ if (!fZ) goto L_007518f1;
L_007518d4:; BB(0x007518d4);
    /* 007518d4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007518d6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007518d8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7518ddu); f_00792fe8();
    /* 007518dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007518e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007518e1: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 007518e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007518e4: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007518e8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7518edu); f_00735c90();
    /* 007518ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007518ee: ret 8 */ FN_RET(0x007518b0); r_esp += 12; return;
L_007518f1:; BB(0x007518f1);
    /* 007518f1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007518f3: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007518f5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7518fau); f_00792fe8();
    /* 007518fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007518fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007518fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00751900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751901: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00751905: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75190au); f_00735ee0();
    /* 0075190a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075190b: ret 8 */ FN_RET(0x007518b0); r_esp += 12; return;
L_0075190e:; BB(0x0075190e);
    /* 0075190e: mov edi, 5 */ r_edi = 0x5u;
    /* 00751913: jmp 0x7518c2 */ goto L_007518c2;
}

void f_00751918(void) /* sub_751918 */
{
    FN_ENTER(0x00751918);
    /* 00751918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751919: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075191b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075191d: call 0x75193c */ r_esp -= 4; W32(r_esp, 0x751922u); f_0075193c();
    /* 00751922: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00751926: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751928: jne 0x75192e */ if (!fZ) goto L_0075192e;
L_0075192a:; BB(0x0075192a);
    /* 0075192a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075192b: ret 4 */ FN_RET(0x00751918); r_esp += 8; return;
L_0075192e:; BB(0x0075192e);
    /* 0075192e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075192f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x751934u); f_005c2f74();
    /* 00751934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751935: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751936: ret 4 */ FN_RET(0x00751918); r_esp += 8; return;
}

void f_0075193c(void) /* sub_75193C */
{
    FN_ENTER(0x0075193c);
    /* 0075193c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075193d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075193f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751941: push 0x8f2c44 */ { u32 v = 0x8f2c44u; r_esp -= 4; W32(r_esp, v); }
    /* 00751946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075194c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075194d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00751954: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075195a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075195d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00751960: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00751963: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00751966: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751969: mov dword ptr [ecx], 0xb42348 */ W32((u32)(r_ecx), 0xb42348u);
    /* 0075196f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00751976: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x75197bu); f_007366bc();
    /* 0075197b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075197e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751985: mov esp, ebp */ r_esp = r_ebp;
    /* 00751987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751988: ret  */ FN_RET(0x0075193c); r_esp += 4; return;
}

void f_0075198c(void) /* sub_75198C */
{
    FN_ENTER(0x0075198c);
    /* 0075198c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075198d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075198f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751991: push 0x8f2c6c */ { u32 v = 0x8f2c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00751996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075199c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075199d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007519a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007519a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007519aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007519ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007519b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007519b3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007519b5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007519b8: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x7519bdu); f_00737f80();
    /* 007519bd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007519c4: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 007519c9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7519ceu); f_005caba4();
    /* 007519ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007519d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007519d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007519d6: je 0x751a0c */ if (fZ) goto L_00751a0c;
L_007519d8:; BB(0x007519d8);
    /* 007519d8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007519df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007519e6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007519e9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007519ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007519ef: call 0x751a10 */ r_esp -= 4; W32(r_esp, 0x7519f4u); f_00751a10();
    /* 007519f4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007519f7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007519fe:; BB(0x007519fe);
    /* 007519fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751a01: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751a08: mov esp, ebp */ r_esp = r_ebp;
    /* 00751a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751a0b: ret  */ FN_RET(0x0075198c); r_esp += 4; return;
L_00751a0c:; BB(0x00751a0c);
    /* 00751a0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751a0e: jmp 0x7519fe */ goto L_007519fe;
}

void f_00751a10(void) /* sub_751A10 */
{
    FN_ENTER(0x00751a10);
    /* 00751a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00751a13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751a15: push 0x8f2c88 */ { u32 v = 0x8f2c88u; r_esp -= 4; W32(r_esp, v); }
    /* 00751a1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00751a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751a21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00751a28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751a2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00751a2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00751a31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00751a34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00751a37: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00751a3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00751a3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751a3f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00751a41: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751a44: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x751a49u); f_00736988();
    /* 00751a49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00751a50: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751a53: mov dword ptr [edx], 0xb42348 */ W32((u32)(r_edx), 0xb42348u);
    /* 00751a59: mov eax, dword ptr [0x9f4408] */ r_eax = R32((u32)(0x9f4408u));
    /* 00751a5e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00751a60: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00751a63: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751a68u); f_0079317c();
    /* 00751a68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751a69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751a6d: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x751a72u); f_00737ae4();
    /* 00751a72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751a75: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x751a7au); f_00737b8c();
    /* 00751a7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751a7d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00751a82: mov word ptr [eax + 0x94], dx */ W16((u32)(r_eax+0x94u), (u16)r_edx);
    /* 00751a89: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 00751a93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751a96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751a9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00751a9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751aa0: ret 8 */ FN_RET(0x00751a10); r_esp += 12; return;
}

void f_00751aa4(void) /* sub_751AA4 */
{
    FN_ENTER(0x00751aa4);
    /* 00751aa4: movsx eax, word ptr [ecx + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x94u));
    /* 00751aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751aad: jl 0x751add */ if ((fS!=fO)) goto L_00751add;
L_00751aaf:; BB(0x00751aaf);
    /* 00751aaf: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 00751ab5: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751ab8: je 0x751abd */ if (fZ) goto L_00751abd;
L_00751aba:; BB(0x00751aba);
    /* 00751aba: ret 4 */ FN_RET(0x00751aa4); r_esp += 8; return;
L_00751abd:; BB(0x00751abd);
    /* 00751abd: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00751ac0: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00751ac3: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00751ac7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751ac9: jne 0x751ace */ if (!fZ) goto L_00751ace;
L_00751acb:; BB(0x00751acb);
    /* 00751acb: ret 4 */ FN_RET(0x00751aa4); r_esp += 8; return;
L_00751ace:; BB(0x00751ace);
    /* 00751ace: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00751ad0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751ad1: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00751ad5: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x751adau); f_007120ec();
    /* 00751ada: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00751add:; BB(0x00751add);
    /* 00751add: ret 4 */ FN_RET(0x00751aa4); r_esp += 8; return;
}

void f_00751ae0(void) /* sub_751AE0 */
{
    FN_ENTER(0x00751ae0);
    /* 00751ae0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00751ae1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751ae2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751ae3: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751ae6: mov edi, ecx */ r_edi = r_ecx;
    /* 00751ae8: mov ecx, edi */ r_ecx = r_edi;
    /* 00751aea: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x751aefu); f_00737d70();
    /* 00751aef: mov ecx, edi */ r_ecx = r_edi;
    /* 00751af1: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x751af6u); f_00737d1c();
    /* 00751af6: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00751afa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751afb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x751b00u); f_0068d5a8();
    /* 00751b00: mov ebp, eax */ r_ebp = r_eax;
    /* 00751b02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00751b05: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751b07: je 0x751ba8 */ if (fZ) goto L_00751ba8;
L_00751b0d:; BB(0x00751b0d);
    /* 00751b0d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00751b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751b11: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 00751b17: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x751b1cu); f_006a54d4();
    /* 00751b1c: mov edx, eax */ r_edx = r_eax;
    /* 00751b1e: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 00751b24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00751b26: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00751b28: jbe 0x751b4f */ if ((fC||fZ)) goto L_00751b4f;
L_00751b2a:; BB(0x00751b2a);
    /* 00751b2a: mov esi, eax */ r_esi = r_eax;
L_00751b2c:; BB(0x00751b2c);
    /* 00751b2c: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00751b2f: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x751b34u); f_005c5528();
    /* 00751b34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751b37: je 0x751b44 */ if (fZ) goto L_00751b44;
L_00751b39:; BB(0x00751b39);
    /* 00751b39: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00751b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751b3d: mov ecx, edi */ r_ecx = r_edi;
    /* 00751b3f: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x751b44u); f_00737620();
L_00751b44:; BB(0x00751b44);
    /* 00751b44: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00751b47: cmp esi, dword ptr [edi + 0x98] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x98u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00751b4d: jb 0x751b2c */ if (fC) goto L_00751b2c;
L_00751b4f:; BB(0x00751b4f);
    /* 00751b4f: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 00751b53: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00751b55: mov eax, 0xfffffff0 */ r_eax = 0xfffffff0u;
    /* 00751b5a: mov ebx, eax */ r_ebx = r_eax;
    /* 00751b5c: mov esi, edx */ r_esi = r_edx;
L_00751b5e:; BB(0x00751b5e);
    /* 00751b5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00751b60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751b61: mov ecx, edi */ r_ecx = r_edi;
    /* 00751b63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00751b64: call 0x737ec4 */ r_esp -= 4; W32(r_esp, 0x751b69u); f_00737ec4();
    /* 00751b69: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00751b6c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00751b6f: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00751b72: jb 0x751b5e */ if (fC) goto L_00751b5e;
L_00751b74:; BB(0x00751b74);
    /* 00751b74: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 00751b78: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00751b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751b80: je 0x751b96 */ if (fZ) goto L_00751b96;
L_00751b82:; BB(0x00751b82);
    /* 00751b82: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00751b85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00751b87: jle 0x751b96 */ if ((fZ||fS!=fO)) goto L_00751b96;
L_00751b89:; BB(0x00751b89);
    /* 00751b89: push 0xffffff01 */ { u32 v = 0xffffff01u; r_esp -= 4; W32(r_esp, v); }
    /* 00751b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751b8f: mov ecx, edi */ r_ecx = r_edi;
    /* 00751b91: call 0x73771c */ r_esp -= 4; W32(r_esp, 0x751b96u); f_0073771c();
L_00751b96:; BB(0x00751b96);
    /* 00751b96: movsx eax, word ptr [edi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00751b9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00751b9f: jle 0x751bc9 */ if ((fZ||fS!=fO)) goto L_00751bc9;
L_00751ba1:; BB(0x00751ba1);
    /* 00751ba1: mov ecx, edi */ r_ecx = r_edi;
    /* 00751ba3: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x751ba8u); f_00737cdc();
L_00751ba8:; BB(0x00751ba8);
    /* 00751ba8: mov ecx, edi */ r_ecx = r_edi;
    /* 00751baa: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x751bafu); f_00737da4();
    /* 00751baf: mov ecx, edi */ r_ecx = r_edi;
    /* 00751bb1: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x751bb6u); f_00737c94();
    /* 00751bb6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00751bbb: mov word ptr [edi + 0x94], ax */ W16((u32)(r_edi+0x94u), (u16)r_eax);
    /* 00751bc2: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00751bc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751bc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00751bc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00751bc8: ret  */ FN_RET(0x00751ae0); r_esp += 4; return;
L_00751bc9:; BB(0x00751bc9);
    /* 00751bc9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751bcb: mov ecx, edi */ r_ecx = r_edi;
    /* 00751bcd: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x751bd2u); f_0073780c();
    /* 00751bd2: jmp 0x751ba1 */ goto L_00751ba1;
}

void f_00751bd4(void) /* sub_751BD4 */
{
    FN_ENTER(0x00751bd4);
    /* 00751bd4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751bd7: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00751bde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00751be0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00751be2: jle 0x751c3d */ if ((fZ||fS!=fO)) goto L_00751c3d;
L_00751be4:; BB(0x00751be4);
    /* 00751be4: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00751be8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00751bec: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00751bef:; BB(0x00751bef);
    /* 00751bef: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00751bf2: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 00751bf5: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 00751bf9: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751bff: je 0x751c2b */ if (fZ) goto L_00751c2b;
L_00751c01:; BB(0x00751c01);
    /* 00751c01: mov ebx, dword ptr [edi + 0x18] */ r_ebx = R32((u32)(r_edi+0x18u));
    /* 00751c04: cmp ebx, 0xffffff01 */ {  u32 a = r_ebx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751c0a: jne 0x751c2b */ if (!fZ) goto L_00751c2b;
L_00751c0c:; BB(0x00751c0c);
    /* 00751c0c: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 00751c13: or esi, 0xffff0080 */ {  u32 a = r_esi; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00751c19: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00751c1d: mov dword ptr [edi + 0x34], 0xff909090 */ W32((u32)(r_edi+0x34u), 0xff909090u);
    /* 00751c24: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_00751c2b:; BB(0x00751c2b);
    /* 00751c2b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00751c2e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00751c30: jl 0x751bef */ if ((fS!=fO)) goto L_00751bef;
L_00751c32:; BB(0x00751c32);
    /* 00751c32: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00751c36: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00751c3a: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00751c3d:; BB(0x00751c3d);
    /* 00751c3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00751c40: ret  */ FN_RET(0x00751bd4); r_esp += 4; return;
}

void f_00751c44(void) /* sub_751C44 */
{
    FN_ENTER(0x00751c44);
    /* 00751c44: movsx eax, word ptr [ecx + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x94u));
    /* 00751c4b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00751c4e: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00751c51: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00751c54: ret  */ FN_RET(0x00751c44); r_esp += 4; return;
}

void f_00751c58(void) /* sub_751C58 */
{
    FN_ENTER(0x00751c58);
    /* 00751c58: mov dword ptr [0xa9ac14], 0x3f800000 */ W32((u32)(0xa9ac14u), 0x3f800000u);
    /* 00751c62: mov dword ptr [0xa9ac18], 0x41000000 */ W32((u32)(0xa9ac18u), 0x41000000u);
    /* 00751c6c: mov dword ptr [0xa9ac1c], 0x3fc00000 */ W32((u32)(0xa9ac1cu), 0x3fc00000u);
    /* 00751c76: ret  */ FN_RET(0x00751c58); r_esp += 4; return;
}

void f_00751c78(void) /* sub_751C78 */
{
    FN_ENTER(0x00751c78);
    /* 00751c78: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00751c7c: lea eax, [edx - 0x10] */ r_eax = (u32)(r_edx+0xfffffff0u);
    /* 00751c7f: ret  */ FN_RET(0x00751c78); r_esp += 4; return;
}

void f_00751c80(void) /* sub_751C80 */
{
    FN_ENTER(0x00751c80);
    /* 00751c80: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751c83: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00751c8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00751c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00751c8e: jle 0x751cea */ if ((fZ||fS!=fO)) goto L_00751cea;
L_00751c90:; BB(0x00751c90);
    /* 00751c90: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00751c94: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00751c98: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00751c9b:; BB(0x00751c9b);
    /* 00751c9b: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00751c9e: mov esi, dword ptr [ebx + edx*4] */ r_esi = R32((u32)(r_ebx+r_edx*4));
    /* 00751ca1: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 00751ca5: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00751ca8: je 0x751cd8 */ if (fZ) goto L_00751cd8;
L_00751caa:; BB(0x00751caa);
    /* 00751caa: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00751cad: and edi, 0xfffffff0 */ {  u32 a = r_edi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00751cb0: cmp edi, -0x10 */ {  u32 a = r_edi; u32 b = 0xfffffff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751cb3: jne 0x751cd8 */ if (!fZ) goto L_00751cd8;
L_00751cb5:; BB(0x00751cb5);
    /* 00751cb5: mov dword ptr [esi + 0x2c], 0xffaaaaaa */ W32((u32)(r_esi+0x2cu), 0xffaaaaaau);
    /* 00751cbc: mov eax, 0xff909090 */ r_eax = 0xff909090u;
    /* 00751cc1: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00751cc4: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00751cc7: or ebx, 0xffff0080 */ {  u32 a = r_ebx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00751ccd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00751cd1: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_00751cd8:; BB(0x00751cd8);
    /* 00751cd8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00751cdb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00751cdd: jl 0x751c9b */ if ((fS!=fO)) goto L_00751c9b;
L_00751cdf:; BB(0x00751cdf);
    /* 00751cdf: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00751ce3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00751ce7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00751cea:; BB(0x00751cea);
    /* 00751cea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00751ced: ret  */ FN_RET(0x00751c80); r_esp += 4; return;
}

void f_00751cf0(void) /* sub_751CF0 */
{
    FN_ENTER(0x00751cf0);
    /* 00751cf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751cf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00751cf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751cf5: call 0x751d14 */ r_esp -= 4; W32(r_esp, 0x751cfau); f_00751d14();
    /* 00751cfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00751cfe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751d00: jne 0x751d06 */ if (!fZ) goto L_00751d06;
L_00751d02:; BB(0x00751d02);
    /* 00751d02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751d03: ret 4 */ FN_RET(0x00751cf0); r_esp += 8; return;
L_00751d06:; BB(0x00751d06);
    /* 00751d06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751d07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x751d0cu); f_005c2f74();
    /* 00751d0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751d0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751d0e: ret 4 */ FN_RET(0x00751cf0); r_esp += 8; return;
}

void f_00751d14(void) /* sub_751D14 */
{
    FN_ENTER(0x00751d14);
    /* 00751d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751d15: mov ebp, esp */ r_ebp = r_esp;
    /* 00751d17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751d19: push 0x8f2ca4 */ { u32 v = 0x8f2ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 00751d1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00751d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751d25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00751d2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751d2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00751d32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00751d35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00751d38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00751d3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00751d3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751d41: mov dword ptr [ecx], 0xb423d8 */ W32((u32)(r_ecx), 0xb423d8u);
    /* 00751d47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00751d4e: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x751d53u); f_007366bc();
    /* 00751d53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751d56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751d5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00751d5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751d60: ret  */ FN_RET(0x00751d14); r_esp += 4; return;
}

void f_00751d64(void) /* sub_751D64 */
{
    FN_ENTER(0x00751d64);
    /* 00751d64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751d65: mov ebp, esp */ r_ebp = r_esp;
    /* 00751d67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751d69: push 0x8f2ccc */ { u32 v = 0x8f2cccu; r_esp -= 4; W32(r_esp, v); }
    /* 00751d6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00751d74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751d75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00751d7c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751d7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00751d82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00751d85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00751d88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00751d8b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00751d8d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00751d90: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x751d95u); f_00737f80();
    /* 00751d95: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00751d9c: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00751da1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x751da6u); f_005caba4();
    /* 00751da6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00751da9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00751dac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751dae: je 0x751de4 */ if (fZ) goto L_00751de4;
L_00751db0:; BB(0x00751db0);
    /* 00751db0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00751db7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00751dbe: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751dc1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751dc4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751dc7: call 0x751de8 */ r_esp -= 4; W32(r_esp, 0x751dccu); f_00751de8();
    /* 00751dcc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751dcf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00751dd6:; BB(0x00751dd6);
    /* 00751dd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751dd9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751de0: mov esp, ebp */ r_esp = r_ebp;
    /* 00751de2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751de3: ret  */ FN_RET(0x00751d64); r_esp += 4; return;
L_00751de4:; BB(0x00751de4);
    /* 00751de4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751de6: jmp 0x751dd6 */ goto L_00751dd6;
}

void f_00751de8(void) /* sub_751DE8 */
{
    FN_ENTER(0x00751de8);
    /* 00751de8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751de9: mov ebp, esp */ r_ebp = r_esp;
    /* 00751deb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751ded: push 0x8f2ce8 */ { u32 v = 0x8f2ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 00751df2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00751df8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751df9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00751e00: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751e03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00751e06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00751e09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00751e0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00751e0f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00751e13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00751e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751e17: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00751e19: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751e1c: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x751e21u); f_00736988();
    /* 00751e21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00751e28: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751e2b: mov dword ptr [edx], 0xb423d8 */ W32((u32)(r_edx), 0xb423d8u);
    /* 00751e31: mov eax, dword ptr [0x9f440c] */ r_eax = R32((u32)(0x9f440cu));
    /* 00751e36: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00751e38: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00751e3b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x751e40u); f_0079317c();
    /* 00751e40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751e41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751e45: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x751e4au); f_00737ae4();
    /* 00751e4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751e4d: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x751e52u); f_00737b8c();
    /* 00751e52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00751e55: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00751e5a: mov word ptr [eax + 0x94], dx */ W16((u32)(r_eax+0x94u), (u16)r_edx);
    /* 00751e61: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 00751e6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751e6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751e75: mov esp, ebp */ r_esp = r_ebp;
    /* 00751e77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751e78: ret 8 */ FN_RET(0x00751de8); r_esp += 12; return;
}

void f_00751e7c(void) /* sub_751E7C */
{
    FN_ENTER(0x00751e7c);
    /* 00751e7c: call 0x7369bc */ r_esp -= 4; W32(r_esp, 0x751e81u); f_007369bc();
    /* 00751e81: ret  */ FN_RET(0x00751e7c); r_esp += 4; return;
}

void f_00751e84(void) /* sub_751E84 */
{
    FN_ENTER(0x00751e84);
    /* 00751e84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751e85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751e86: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00751e88: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751e8a: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x751e8fu); f_007108f4();
    /* 00751e8f: mov ebp, eax */ r_ebp = r_eax;
    /* 00751e91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751e92: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751e94: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x751e99u); f_00710f80();
    /* 00751e99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751e9a: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00751e9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751e9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751ea0: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x751ea5u); f_0072a648();
    /* 00751ea5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751ea6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751ea8: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x751eadu); f_0073746c();
    /* 00751ead: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751eae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751eb0: call 0x751aa4 */ r_esp -= 4; W32(r_esp, 0x751eb5u); f_00751aa4();
    /* 00751eb5: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00751eb7: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751ebd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751ebf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751ec0: call 0x7367d0 */ r_esp -= 4; W32(r_esp, 0x751ec5u); f_007367d0();
    /* 00751ec5: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00751ec8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751eca: je 0x751ed2 */ if (fZ) goto L_00751ed2;
L_00751ecc:; BB(0x00751ecc);
    /* 00751ecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751ecd: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x751ed2u); f_00761390();
L_00751ed2:; BB(0x00751ed2);
    /* 00751ed2: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 00751ed5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751ed7: je 0x751ee5 */ if (fZ) goto L_00751ee5;
L_00751ed9:; BB(0x00751ed9);
    /* 00751ed9: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00751edc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751edd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00751ede: mov ecx, eax */ r_ecx = r_eax;
    /* 00751ee0: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x751ee5u); f_0073f694();
L_00751ee5:; BB(0x00751ee5);
    /* 00751ee5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00751ee7: ret  */ FN_RET(0x00751e84); r_esp += 4; return;
}

void f_00751ee8(void) /* sub_751EE8 */
{
    FN_ENTER(0x00751ee8);
    /* 00751ee8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751ee9: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751eef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00751ef1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751ef3: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x751ef8u); f_00737d70();
    /* 00751ef8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751efa: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x751effu); f_00737d1c();
    /* 00751eff: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00751f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751f04: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x751f09u); f_0068d5a8();
    /* 00751f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751f0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751f0c: je 0x751fb6 */ if (fZ) goto L_00751fb6;
L_00751f12:; BB(0x00751f12);
    /* 00751f12: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00751f16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751f17: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 00751f1d: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x751f22u); f_006a54d4();
    /* 00751f22: mov edx, eax */ r_edx = r_eax;
    /* 00751f24: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 00751f2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00751f2c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00751f2e: jbe 0x751fa4 */ if ((fC||fZ)) goto L_00751fa4;
L_00751f30:; BB(0x00751f30);
    /* 00751f30: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00751f34: mov esi, eax */ r_esi = r_eax;
    /* 00751f36: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00751f39:; BB(0x00751f39);
    /* 00751f39: push dword ptr [esp + esi*4 + 8] */ { u32 v = R32((u32)(r_esp+r_esi*4+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751f3d: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x751f42u); f_005c5528();
    /* 00751f42: mov edi, eax */ r_edi = r_eax;
    /* 00751f44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00751f47: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751f49: je 0x751f92 */ if (fZ) goto L_00751f92;
L_00751f4b:; BB(0x00751f4b);
    /* 00751f4b: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 00751f52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751f53: mov ecx, edi */ r_ecx = r_edi;
    /* 00751f55: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x751f5au); f_005c425c();
    /* 00751f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751f5c: je 0x751f92 */ if (fZ) goto L_00751f92;
L_00751f5e:; BB(0x00751f5e);
    /* 00751f5e: mov ecx, edi */ r_ecx = r_edi;
    /* 00751f60: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x751f65u); f_005c443c();
    /* 00751f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751f67: jne 0x751f92 */ if (!fZ) goto L_00751f92;
L_00751f69:; BB(0x00751f69);
    /* 00751f69: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 00751f70: call 0x5d690c */ r_esp -= 4; W32(r_esp, 0x751f75u); f_005d690c();
    /* 00751f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751f77: je 0x751f92 */ if (fZ) goto L_00751f92;
L_00751f79:; BB(0x00751f79);
    /* 00751f79: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 00751f80: call 0x5d690c */ r_esp -= 4; W32(r_esp, 0x751f85u); f_005d690c();
    /* 00751f85: push dword ptr [esp + esi*4 + 8] */ { u32 v = R32((u32)(r_esp+r_esi*4+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751f8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751f8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00751f8d: call 0x73769c */ r_esp -= 4; W32(r_esp, 0x751f92u); f_0073769c();
L_00751f92:; BB(0x00751f92);
    /* 00751f92: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00751f95: cmp esi, dword ptr [ebx + 0x98] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x98u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00751f9b: jb 0x751f39 */ if (fC) goto L_00751f39;
L_00751f9d:; BB(0x00751f9d);
    /* 00751f9d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00751fa1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00751fa4:; BB(0x00751fa4);
    /* 00751fa4: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00751fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00751fad: jle 0x751fd8 */ if ((fZ||fS!=fO)) goto L_00751fd8;
L_00751faf:; BB(0x00751faf);
    /* 00751faf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751fb1: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x751fb6u); f_00737cdc();
L_00751fb6:; BB(0x00751fb6);
    /* 00751fb6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751fb8: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x751fbdu); f_00737da4();
    /* 00751fbd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751fbf: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x751fc4u); f_00737c94();
    /* 00751fc4: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00751fc9: mov word ptr [ebx + 0x94], ax */ W16((u32)(r_ebx+0x94u), (u16)r_eax);
    /* 00751fd0: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00751fd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00751fd7: ret  */ FN_RET(0x00751ee8); r_esp += 4; return;
L_00751fd8:; BB(0x00751fd8);
    /* 00751fd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00751fda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751fdc: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x751fe1u); f_0073780c();
    /* 00751fe1: jmp 0x751faf */ goto L_00751faf;
}

void f_00751fe4(void) /* sub_751FE4 */
{
    FN_ENTER(0x00751fe4);
    /* 00751fe4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00751fe7: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00751feb: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x751ff0u); f_005c5528();
    /* 00751ff0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751ff1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00751ff3: je 0x752004 */ if (fZ) goto L_00752004;
L_00751ff5:; BB(0x00751ff5);
    /* 00751ff5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00751ff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00751ff9: mov ecx, eax */ r_ecx = r_eax;
    /* 00751ffb: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x752000u); f_005c425c();
    /* 00752000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752002: jne 0x75200c */ if (!fZ) goto L_0075200c;
L_00752004:; BB(0x00752004);
    /* 00752004: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00752006: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00752009: ret 4 */ FN_RET(0x00751fe4); r_esp += 8; return;
L_0075200c:; BB(0x0075200c);
    /* 0075200c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0075200f: call 0x5d690c */ r_esp -= 4; W32(r_esp, 0x752014u); f_005d690c();
    /* 00752014: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00752017: ret 4 */ FN_RET(0x00751fe4); r_esp += 8; return;
}

