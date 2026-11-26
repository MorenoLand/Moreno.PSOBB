#include "protos.h"

void f_006d911c(void) /* sub_6D911C */
{
    FN_ENTER(0x006d911c);
    /* 006d911c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d911e: mov dword ptr [0xa962e8], eax */ W32((u32)(0xa962e8u), r_eax);
    /* 006d9123: mov dword ptr [0xa962ec], eax */ W32((u32)(0xa962ecu), r_eax);
    /* 006d9128: mov dword ptr [0xa962f0], eax */ W32((u32)(0xa962f0u), r_eax);
    /* 006d912d: mov dword ptr [0xa962f4], eax */ W32((u32)(0xa962f4u), r_eax);
    /* 006d9132: ret  */ FN_RET(0x006d911c); r_esp += 4; return;
}

void f_006d9134(void) /* sub_6D9134 */
{
    FN_ENTER(0x006d9134);
    /* 006d9134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d9135: mov ebp, esp */ r_ebp = r_esp;
    /* 006d9137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9139: push 0x8ee358 */ { u32 v = 0x8ee358u; r_esp -= 4; W32(r_esp, v); }
    /* 006d913e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d9144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d914c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d914f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d9152: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006d9155: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006d9158: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006d915b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d915e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9161: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006d9164: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d9167: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6d916cu); f_006dc410();
    /* 006d916c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d9173: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d9176: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9179: mov dword ptr [ecx], 0xb3c9e0 */ W32((u32)(r_ecx), 0xb3c9e0u);
    /* 006d917f: mov eax, dword ptr [0x9cf1f4] */ r_eax = R32((u32)(0x9cf1f4u));
    /* 006d9184: mov dword ptr [0xa962e4], ecx */ W32((u32)(0xa962e4u), r_ecx);
    /* 006d918a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006d918d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d918f: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006d9192: mov dword ptr [0xa962e0], ebx */ W32((u32)(0xa962e0u), r_ebx);
    /* 006d9198: mov dword ptr [0xa962dc], ebx */ W32((u32)(0xa962dcu), r_ebx);
    /* 006d919e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006d91a1: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006d91a4: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006d91a7: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006d91aa: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d91afu); f_006dc9fc();
    /* 006d91af: mov dword ptr [eax*4 + 0xa962e8], 1 */ W32((u32)(r_eax*4+0xa962e8u), 0x1u);
    /* 006d91ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d91bc: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d91c1u); f_00791748();
    /* 006d91c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d91c2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d91c5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d91c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d91cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d91d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006d91d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d91d5: ret 8 */ FN_RET(0x006d9134); r_esp += 12; return;
}

void f_006d91d8(void) /* sub_6D91D8 */
{
    FN_ENTER(0x006d91d8);
    /* 006d91d8: mov dword ptr [0xa962d0], 0x3f800000 */ W32((u32)(0xa962d0u), 0x3f800000u);
    /* 006d91e2: mov dword ptr [0xa962d4], 0x41000000 */ W32((u32)(0xa962d4u), 0x41000000u);
    /* 006d91ec: mov dword ptr [0xa962d8], 0x3fc00000 */ W32((u32)(0xa962d8u), 0x3fc00000u);
    /* 006d91f6: ret  */ FN_RET(0x006d91d8); r_esp += 4; return;
}

void f_006d91f8(void) /* sub_6D91F8 */
{
    FN_ENTER(0x006d91f8);
    /* 006d91f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d91f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d91fb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d91fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d91ff: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d9202u); call_ind(t); }
    /* 006d9202: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9204: jne 0x6d9208 */ if (!fZ) goto L_006d9208;
L_006d9206:; BB(0x006d9206);
    /* 006d9206: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9207: ret  */ FN_RET(0x006d91f8); r_esp += 4; return;
L_006d9208:; BB(0x006d9208);
    /* 006d9208: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d920a: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d920fu); f_006dc988();
    /* 006d920f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9211: je 0x6d922a */ if (fZ) goto L_006d922a;
L_006d9213:; BB(0x006d9213);
    /* 006d9213: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9215: push dword ptr [0xa962e0] */ { u32 v = R32((u32)(0xa962e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d921b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d921d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d921f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d9222u); call_ind(t); }
    /* 006d9222: mov eax, dword ptr [0xa962dc] */ r_eax = R32((u32)(0xa962dcu));
    /* 006d9227: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006d922a:; BB(0x006d922a);
    /* 006d922a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d922b: ret  */ FN_RET(0x006d91f8); r_esp += 4; return;
}

void f_006d922c(void) /* sub_6D922C */
{
    FN_ENTER(0x006d922c);
    /* 006d922c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d922d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d9230: mov edi, ecx */ r_edi = r_ecx;
    /* 006d9232: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006d9239: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006d9241: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9243: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9248u); f_0073ec50();
    /* 006d9248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9249: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d924c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d924d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d924e: mov ecx, edi */ r_ecx = r_edi;
    /* 006d9250: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6d9255u); f_006dc794();
    /* 006d9255: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9257: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9259: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d925b: mov ecx, edi */ r_ecx = r_edi;
    /* 006d925d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d9260u); call_ind(t); }
    /* 006d9260: mov ecx, edi */ r_ecx = r_edi;
    /* 006d9262: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d9267u); f_006dc9ec();
    /* 006d9267: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d926a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d926b: call 0x73a33c */ r_esp -= 4; W32(r_esp, 0x6d9270u); f_0073a33c();
    /* 006d9270: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9271: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 006d9278: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d927a: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d927d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d927f: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6d9284u); f_006dc62c();
    /* 006d9284: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006d9287: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d928a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d928b: ret  */ FN_RET(0x006d922c); r_esp += 4; return;
}

void f_006d928c(void) /* sub_6D928C */
{
    FN_ENTER(0x006d928c);
    /* 006d928c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d928d: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006d9291: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9293: je 0x6d92bc */ if (fZ) goto L_006d92bc;
L_006d9295:; BB(0x006d9295);
    /* 006d9295: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9297: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9299: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d929c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d929e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d92a1u); call_ind(t); }
    /* 006d92a1: mov dword ptr [ebp + 0x20], 6 */ W32((u32)(r_ebp+0x20u), 0x6u);
    /* 006d92a8: mov dword ptr [0xa962e0], 0x1a */ W32((u32)(0xa962e0u), 0x1au);
    /* 006d92b2: mov dword ptr [0xa962dc], 2 */ W32((u32)(0xa962dcu), 0x2u);
L_006d92bc:; BB(0x006d92bc);
    /* 006d92bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d92bd: ret  */ FN_RET(0x006d928c); r_esp += 4; return;
}

void f_006d92c0(void) /* sub_6D92C0 */
{
    FN_ENTER(0x006d92c0);
    /* 006d92c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d92c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d92c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d92c5: call 0x6d92e4 */ r_esp -= 4; W32(r_esp, 0x6d92cau); f_006d92e4();
    /* 006d92ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d92ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d92d0: jne 0x6d92d6 */ if (!fZ) goto L_006d92d6;
L_006d92d2:; BB(0x006d92d2);
    /* 006d92d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d92d3: ret 4 */ FN_RET(0x006d92c0); r_esp += 8; return;
L_006d92d6:; BB(0x006d92d6);
    /* 006d92d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d92d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d92dcu); f_005c2f74();
    /* 006d92dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d92dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d92de: ret 4 */ FN_RET(0x006d92c0); r_esp += 8; return;
}

void f_006d92e4(void) /* sub_6D92E4 */
{
    FN_ENTER(0x006d92e4);
    /* 006d92e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d92e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006d92e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d92e9: push 0x8ee374 */ { u32 v = 0x8ee374u; r_esp -= 4; W32(r_esp, v); }
    /* 006d92ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d92f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d92f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d92fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d92ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d9302: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d9305: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d9308: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d930b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d930e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d9315: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d9318: mov ecx, dword ptr [eax + 0x154] */ r_ecx = R32((u32)(r_eax+0x154u));
    /* 006d931e: mov dword ptr [eax], 0xb3ca60 */ W32((u32)(r_eax), 0xb3ca60u);
    /* 006d9324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9326: je 0x6d933a */ if (fZ) goto L_006d933a;
L_006d9328:; BB(0x006d9328);
    /* 006d9328: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d932du); f_007127b0();
    /* 006d932d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d9330: mov dword ptr [eax + 0x154], 0 */ W32((u32)(r_eax+0x154u), 0x0u);
L_006d933a:; BB(0x006d933a);
    /* 006d933a: mov ecx, dword ptr [eax + 0x160] */ r_ecx = R32((u32)(r_eax+0x160u));
    /* 006d9340: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9342: je 0x6d9356 */ if (fZ) goto L_006d9356;
L_006d9344:; BB(0x006d9344);
    /* 006d9344: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9349u); f_007127b0();
    /* 006d9349: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d934c: mov dword ptr [eax + 0x160], 0 */ W32((u32)(r_eax+0x160u), 0x0u);
L_006d9356:; BB(0x006d9356);
    /* 006d9356: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 006d935c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d935e: je 0x6d9372 */ if (fZ) goto L_006d9372;
L_006d9360:; BB(0x006d9360);
    /* 006d9360: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9365u); f_007127b0();
    /* 006d9365: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d9368: mov dword ptr [eax + 0x158], 0 */ W32((u32)(r_eax+0x158u), 0x0u);
L_006d9372:; BB(0x006d9372);
    /* 006d9372: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 006d9375: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9377: je 0x6d9390 */ if (fZ) goto L_006d9390;
L_006d9379:; BB(0x006d9379);
    /* 006d9379: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d937d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d9382: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d9386: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d9389: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_006d9390:; BB(0x006d9390);
    /* 006d9390: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d9397: mov ecx, eax */ r_ecx = r_eax;
    /* 006d9399: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d939eu); f_006dc848();
    /* 006d939e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d93a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d93a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006d93aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d93ab: ret  */ FN_RET(0x006d92e4); r_esp += 4; return;
}

void f_006d93ac(void) /* sub_6D93AC */
{
    FN_ENTER(0x006d93ac);
    /* 006d93ac: mov ecx, dword ptr [ecx + 0x164] */ r_ecx = R32((u32)(r_ecx+0x164u));
    /* 006d93b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d93b4: je 0x6d93c3 */ if (fZ) goto L_006d93c3;
L_006d93b6:; BB(0x006d93b6);
    /* 006d93b6: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d93ba: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d93be: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d93c0: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d93c3u); call_ind(t); }
L_006d93c3:; BB(0x006d93c3);
    /* 006d93c3: ret 8 */ FN_RET(0x006d93ac); r_esp += 12; return;
}

void f_006d93c8(void) /* sub_6D93C8 */
{
    FN_ENTER(0x006d93c8);
    /* 006d93c8: mov ecx, dword ptr [ecx + 0x164] */ r_ecx = R32((u32)(r_ecx+0x164u));
    /* 006d93ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d93d0: je 0x6d93df */ if (fZ) goto L_006d93df;
L_006d93d2:; BB(0x006d93d2);
    /* 006d93d2: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d93d6: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d93da: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d93dc: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d93dfu); call_ind(t); }
L_006d93df:; BB(0x006d93df);
    /* 006d93df: ret 8 */ FN_RET(0x006d93c8); r_esp += 12; return;
}

void f_006d93e4(void) /* sub_6D93E4 */
{
    FN_ENTER(0x006d93e4);
    /* 006d93e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d93e5: mov esi, ecx */ r_esi = r_ecx;
    /* 006d93e7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d93eb: mov ecx, esi */ r_ecx = r_esi;
    /* 006d93ed: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d93f2u); f_006dc898();
    /* 006d93f2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006d93f6: mov dword ptr [esi], 0xb3ca60 */ W32((u32)(r_esi), 0xb3ca60u);
    /* 006d93fc: mov edx, dword ptr [0x9cf1f8] */ r_edx = R32((u32)(0x9cf1f8u));
    /* 006d9402: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 006d9405: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9407: mov dword ptr [esi + 0x144], edx */ W32((u32)(r_esi+0x144u), r_edx);
    /* 006d940d: mov dword ptr [esi + 0x148], edx */ W32((u32)(r_esi+0x148u), r_edx);
    /* 006d9413: mov dword ptr [esi + 0x150], edx */ W32((u32)(r_esi+0x150u), r_edx);
    /* 006d9419: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006d941c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006d9420: mov dword ptr [esi + 0x154], edx */ W32((u32)(r_esi+0x154u), r_edx);
    /* 006d9426: mov dword ptr [esi + 0x158], edx */ W32((u32)(r_esi+0x158u), r_edx);
    /* 006d942c: mov dword ptr [esi + 0x15c], edx */ W32((u32)(r_esi+0x15cu), r_edx);
    /* 006d9432: mov dword ptr [esi + 0x160], edx */ W32((u32)(r_esi+0x160u), r_edx);
    /* 006d9438: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 006d943b: mov dword ptr [esi + 0x164], eax */ W32((u32)(r_esi+0x164u), r_eax);
    /* 006d9441: mov dword ptr [esi + 0x170], edx */ W32((u32)(r_esi+0x170u), r_edx);
    /* 006d9447: mov dword ptr [esi + 0x174], edx */ W32((u32)(r_esi+0x174u), r_edx);
    /* 006d944d: mov dword ptr [esi + 0x178], edx */ W32((u32)(r_esi+0x178u), r_edx);
    /* 006d9453: mov eax, esi */ r_eax = r_esi;
    /* 006d9455: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d9456: ret 0xc */ FN_RET(0x006d93e4); r_esp += 16; return;
}

void f_006d945c(void) /* sub_6D945C */
{
    FN_ENTER(0x006d945c);
    /* 006d945c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d945d: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d9463: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d9465: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006d9468: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006d946b: ja 0x6d9618 */ if ((!fC&&!fZ)) goto L_006d9618;
L_006d9471:; BB(0x006d9471);
    /* 006d9471: mov eax, dword ptr [eax*4 + 0x96c3e8] */ r_eax = R32((u32)(r_eax*4+0x96c3e8u));
    /* 006d9478: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d945c); r_esp += 4; return;
}

void f_006d947a(void)
{
    FN_ENTER(0x006d947a);
    /* 006d947a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d947c: call 0x6da2f4 */ r_esp -= 4; W32(r_esp, 0x6d9481u); f_006da2f4();
    /* 006d9481: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d947a); r_esp += 4; return;
}

void f_006d9486(void)
{
    FN_ENTER(0x006d9486);
    /* 006d9486: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d9488: call 0x6d9688 */ r_esp -= 4; W32(r_esp, 0x6d948du); f_006d9688();
    /* 006d948d: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d9486); r_esp += 4; return;
}

void f_006d9492(void)
{
    FN_ENTER(0x006d9492);
    /* 006d9492: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d9494: call 0x6d96b0 */ r_esp -= 4; W32(r_esp, 0x6d9499u); f_006d96b0();
    /* 006d9499: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d9492); r_esp += 4; return;
}

void f_006d949e(void)
{
    FN_ENTER(0x006d949e);
    /* 006d949e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94a0: call 0x6d96d8 */ r_esp -= 4; W32(r_esp, 0x6d94a5u); f_006d96d8();
    /* 006d94a5: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d949e); r_esp += 4; return;
}

void f_006d94aa(void)
{
    FN_ENTER(0x006d94aa);
    /* 006d94aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94ac: call 0x6d999c */ r_esp -= 4; W32(r_esp, 0x6d94b1u); f_006d999c();
    /* 006d94b1: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94aa); r_esp += 4; return;
}

void f_006d94b6(void)
{
    FN_ENTER(0x006d94b6);
    /* 006d94b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94b8: call 0x6d9b50 */ r_esp -= 4; W32(r_esp, 0x6d94bdu); f_006d9b50();
    /* 006d94bd: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94b6); r_esp += 4; return;
}

void f_006d94c2(void)
{
    FN_ENTER(0x006d94c2);
    /* 006d94c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94c4: call 0x6d9b98 */ r_esp -= 4; W32(r_esp, 0x6d94c9u); f_006d9b98();
    /* 006d94c9: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94c2); r_esp += 4; return;
}

void f_006d94ce(void)
{
    FN_ENTER(0x006d94ce);
    /* 006d94ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94d0: call 0x6d9d94 */ r_esp -= 4; W32(r_esp, 0x6d94d5u); f_006d9d94();
    /* 006d94d5: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94ce); r_esp += 4; return;
}

void f_006d94da(void)
{
    FN_ENTER(0x006d94da);
    /* 006d94da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94dc: call 0x6da050 */ r_esp -= 4; W32(r_esp, 0x6d94e1u); f_006da050();
    /* 006d94e1: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94da); r_esp += 4; return;
}

void f_006d94e6(void)
{
    FN_ENTER(0x006d94e6);
    /* 006d94e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94e8: call 0x6da230 */ r_esp -= 4; W32(r_esp, 0x6d94edu); f_006da230();
    /* 006d94ed: jmp 0x6d9618 */ goto L_006d9618;
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94e6); r_esp += 4; return;
}

void f_006d94f2(void)
{
    FN_ENTER(0x006d94f2);
    /* 006d94f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d94f4: call 0x6da31c */ r_esp -= 4; W32(r_esp, 0x6d94f9u); f_006da31c();
    /* 006d94f9: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d94fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9500: lea eax, [ebx + 0x54] */ r_eax = (u32)(r_ebx+0x54u);
    /* 006d9503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9504: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6d9509u); f_0086b688();
    /* 006d9509: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d950c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006d9510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9511: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d9514: mov ecx, dword ptr [edx + 0xdf4] */ r_ecx = R32((u32)(r_edx+0xdf4u));
    /* 006d951a: call 0x6a50fc */ r_esp -= 4; W32(r_esp, 0x6d951fu); f_006a50fc();
    /* 006d951f: mov edx, eax */ r_edx = r_eax;
    /* 006d9521: mov dword ptr [ebx + 0x148], 0 */ W32((u32)(r_ebx+0x148u), 0x0u);
    /* 006d952b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d952d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d952f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d9531: jle 0x6d9581 */ if ((fZ||fS!=fO)) goto L_006d9581;
L_006d9533:; BB(0x006d9533);
    /* 006d9533: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006d9536: mov esi, eax */ r_esi = r_eax;
    /* 006d9538: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006d953c: mov edi, edx */ r_edi = r_edx;
L_006d953e:; BB(0x006d953e);
    /* 006d953e: mov ecx, dword ptr [esp + esi*4 + 8] */ r_ecx = R32((u32)(r_esp+r_esi*4+0x8u));
    /* 006d9542: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9544: je 0x6d956d */ if (fZ) goto L_006d956d;
L_006d9546:; BB(0x006d9546);
    /* 006d9546: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d9548: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x6d954eu); call_ind(t); }
    /* 006d954e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9550: jne 0x6d956d */ if (!fZ) goto L_006d956d;
L_006d9552:; BB(0x006d9552);
    /* 006d9552: mov edx, dword ptr [ebx + 0x148] */ r_edx = R32((u32)(r_ebx+0x148u));
    /* 006d9558: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006d955b: mov dword ptr [ebx + 0x148], eax */ W32((u32)(r_ebx+0x148u), r_eax);
    /* 006d9561: mov eax, dword ptr [esp + esi*4 + 8] */ r_eax = R32((u32)(r_esp+r_esi*4+0x8u));
    /* 006d9565: mov dword ptr [ebx + edx*8 + 0x58], esi */ W32((u32)(r_ebx+r_edx*8+0x58u), r_esi);
    /* 006d9569: mov dword ptr [ebx + edx*8 + 0x54], eax */ W32((u32)(r_ebx+r_edx*8+0x54u), r_eax);
L_006d956d:; BB(0x006d956d);
    /* 006d956d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d9570: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d9572: jl 0x6d953e */ if ((fS!=fO)) goto L_006d953e;
L_006d9574:; BB(0x006d9574);
    /* 006d9574: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006d9577: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006d957b: mov ecx, dword ptr [ebx + 0x148] */ r_ecx = R32((u32)(r_ebx+0x148u));
L_006d9581:; BB(0x006d9581);
    /* 006d9581: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9583: je 0x6d9606 */ if (fZ) goto L_006d9606;
L_006d9589:; BB(0x006d9589);
    /* 006d9589: mov ecx, dword ptr [ebx + 0x154] */ r_ecx = R32((u32)(r_ebx+0x154u));
    /* 006d958f: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 006d9596: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9598: je 0x6d9620 */ if (fZ) goto L_006d9620;
L_006d959e:; BB(0x006d959e);
    /* 006d959e: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d95a3u); f_00737d1c();
    /* 006d95a3: mov edx, dword ptr [ebx + 0x148] */ r_edx = R32((u32)(r_ebx+0x148u));
    /* 006d95a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d95ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d95ad: jle 0x6d95d2 */ if ((fZ||fS!=fO)) goto L_006d95d2;
L_006d95af:; BB(0x006d95af);
    /* 006d95af: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006d95b2: mov esi, eax */ r_esi = r_eax;
L_006d95b4:; BB(0x006d95b4);
    /* 006d95b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d95b5: push dword ptr [ebx + esi*8 + 0x54] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d95b9: mov ecx, dword ptr [ebx + 0x154] */ r_ecx = R32((u32)(r_ebx+0x154u));
    /* 006d95bf: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x6d95c4u); f_00737620();
    /* 006d95c4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d95c7: cmp esi, dword ptr [ebx + 0x148] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x148u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d95cd: jl 0x6d95b4 */ if ((fS!=fO)) goto L_006d95b4;
L_006d95cf:; BB(0x006d95cf);
    /* 006d95cf: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006d95d2:; BB(0x006d95d2);
    /* 006d95d2: mov ecx, dword ptr [ebx + 0x154] */ r_ecx = R32((u32)(r_ebx+0x154u));
    /* 006d95d8: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d95ddu); f_00737cdc();
    /* 006d95dd: mov edx, dword ptr [ebx + 0x154] */ r_edx = R32((u32)(r_ebx+0x154u));
    /* 006d95e3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d95ea: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d95ef: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d95f2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d95f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d95fb: je 0x6d9618 */ if (fZ) goto L_006d9618;
L_006d95fd:; BB(0x006d95fd);
    /* 006d95fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d95ff: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d9604u); f_00760acc();
    /* 006d9604: jmp 0x6d9618 */ goto L_006d9618;
L_006d9606:; BB(0x006d9606);
    /* 006d9606: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9608: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d960a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d960c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d960e: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9611u); call_ind(t); }
    /* 006d9611: mov dword ptr [ebx + 0x20], 0xb */ W32((u32)(r_ebx+0x20u), 0xbu);
L_006d9618:; BB(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d94f2); r_esp += 4; return;
L_006d9620:; BB(0x006d9620);
    /* 006d9620: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9622: call 0x6dbe14 */ r_esp -= 4; W32(r_esp, 0x6d9627u); f_006dbe14();
    /* 006d9627: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d962a: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d962e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d962f: push dword ptr [ebx + 0x148] */ { u32 v = R32((u32)(r_ebx+0x148u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9635: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9636: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d963bu); f_0073ff34();
    /* 006d963b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d963e: mov ecx, dword ptr [ebx + 0x148] */ r_ecx = R32((u32)(r_ebx+0x148u));
    /* 006d9644: mov dword ptr [ebx + 0x154], eax */ W32((u32)(r_ebx+0x154u), r_eax);
    /* 006d964a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d964c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d964e: jle 0x6d967d */ if ((fZ||fS!=fO)) goto L_006d967d;
L_006d9650:; BB(0x006d9650);
    /* 006d9650: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006d9653: mov esi, edx */ r_esi = r_edx;
    /* 006d9655: jmp 0x6d965d */ goto L_006d965d;
L_006d9657:; BB(0x006d9657);
    /* 006d9657: mov eax, dword ptr [ebx + 0x154] */ r_eax = R32((u32)(r_ebx+0x154u));
L_006d965d:; BB(0x006d965d);
    /* 006d965d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d965e: push dword ptr [ebx + esi*8 + 0x54] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9662: mov ecx, eax */ r_ecx = r_eax;
    /* 006d9664: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x6d9669u); f_00737620();
    /* 006d9669: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d966c: cmp esi, dword ptr [ebx + 0x148] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x148u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d9672: jl 0x6d9657 */ if ((fS!=fO)) goto L_006d9657;
L_006d9674:; BB(0x006d9674);
    /* 006d9674: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006d9677: mov eax, dword ptr [ebx + 0x154] */ r_eax = R32((u32)(r_ebx+0x154u));
L_006d967d:; BB(0x006d967d);
    /* 006d967d: mov ecx, eax */ r_ecx = r_eax;
    /* 006d967f: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d9684u); f_00737cdc();
    /* 006d9684: jmp 0x6d9618 */ goto L_006d9618;
}

void f_006d9618(void)
{
    FN_ENTER(0x006d9618);
    /* 006d9618: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d961e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d961f: ret  */ FN_RET(0x006d9618); r_esp += 4; return;
}

void f_006d9688(void) /* sub_6D9688 */
{
    FN_ENTER(0x006d9688);
    /* 006d9688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9689: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d968b: mov eax, dword ptr [ebx + 0x174] */ r_eax = R32((u32)(r_ebx+0x174u));
    /* 006d9691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9693: je 0x6d96ab */ if (fZ) goto L_006d96ab;
L_006d9695:; BB(0x006d9695);
    /* 006d9695: push dword ptr [ebx + 0x164] */ { u32 v = R32((u32)(r_ebx+0x164u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d969b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d969du); call_ind(t); }
    /* 006d969d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d969e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d96a2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d96a7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006d96ab:; BB(0x006d96ab);
    /* 006d96ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d96ac: ret  */ FN_RET(0x006d9688); r_esp += 4; return;
}

void f_006d96b0(void) /* sub_6D96B0 */
{
    FN_ENTER(0x006d96b0);
    /* 006d96b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d96b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d96b3: mov eax, dword ptr [ebx + 0x170] */ r_eax = R32((u32)(r_ebx+0x170u));
    /* 006d96b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d96bb: je 0x6d96d3 */ if (fZ) goto L_006d96d3;
L_006d96bd:; BB(0x006d96bd);
    /* 006d96bd: push dword ptr [ebx + 0x164] */ { u32 v = R32((u32)(r_ebx+0x164u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d96c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d96c5u); call_ind(t); }
    /* 006d96c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d96c6: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d96ca: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d96cf: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006d96d3:; BB(0x006d96d3);
    /* 006d96d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d96d4: ret  */ FN_RET(0x006d96b0); r_esp += 4; return;
}

void f_006d96d8(void) /* sub_6D96D8 */
{
    FN_ENTER(0x006d96d8);
    /* 006d96d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d96d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d96da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d96db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d96dc: mov esi, ecx */ r_esi = r_ecx;
    /* 006d96de: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d96e0: mov ecx, esi */ r_ecx = r_esi;
    /* 006d96e2: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d96e5u); call_ind(t); }
    /* 006d96e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d96e7: je 0x6d988a */ if (fZ) goto L_006d988a;
L_006d96ed:; BB(0x006d96ed);
    /* 006d96ed: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d96f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d96f5: je 0x6d98fc */ if (fZ) goto L_006d98fc;
L_006d96fb:; BB(0x006d96fb);
    /* 006d96fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d96fd: je 0x6d981f */ if (fZ) goto L_006d981f;
L_006d9703:; BB(0x006d9703);
    /* 006d9703: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d970a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d970c: je 0x6d981f */ if (fZ) goto L_006d981f;
L_006d9712:; BB(0x006d9712);
    /* 006d9712: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d9717u); f_007365f4();
    /* 006d9717: mov ebx, eax */ r_ebx = r_eax;
    /* 006d9719: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d971b: jne 0x6d9814 */ if (!fZ) goto L_006d9814;
L_006d9721:; BB(0x006d9721);
    /* 006d9721: mov ecx, dword ptr [esi + 0x160] */ r_ecx = R32((u32)(r_esi+0x160u));
    /* 006d9727: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9729: je 0x6d973a */ if (fZ) goto L_006d973a;
L_006d972b:; BB(0x006d972b);
    /* 006d972b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9730u); f_007127b0();
    /* 006d9730: mov dword ptr [esi + 0x160], 0 */ W32((u32)(r_esi+0x160u), 0x0u);
L_006d973a:; BB(0x006d973a);
    /* 006d973a: mov ecx, dword ptr [esi + 0x154] */ r_ecx = R32((u32)(r_esi+0x154u));
    /* 006d9740: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9742: je 0x6d9753 */ if (fZ) goto L_006d9753;
L_006d9744:; BB(0x006d9744);
    /* 006d9744: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9749u); f_007127b0();
    /* 006d9749: mov dword ptr [esi + 0x154], 0 */ W32((u32)(r_esi+0x154u), 0x0u);
L_006d9753:; BB(0x006d9753);
    /* 006d9753: mov ecx, dword ptr [esi + 0x15c] */ r_ecx = R32((u32)(r_esi+0x15cu));
    /* 006d9759: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d975b: je 0x6d976c */ if (fZ) goto L_006d976c;
L_006d975d:; BB(0x006d975d);
    /* 006d975d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9762u); f_007127b0();
    /* 006d9762: mov dword ptr [esi + 0x15c], 0 */ W32((u32)(r_esi+0x15cu), 0x0u);
L_006d976c:; BB(0x006d976c);
    /* 006d976c: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9772: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9777u); f_007127b0();
    /* 006d9777: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d977a: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d9784: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9786: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9789: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6d978eu); f_0068ee54();
    /* 006d978e: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 006d9791: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d9794: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 006d9797: lea edi, [esi + 0x28] */ r_edi = (u32)(r_esi+0x28u);
    /* 006d979a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d979b: call 0x68f48c */ r_esp -= 4; W32(r_esp, 0x6d97a0u); f_0068f48c();
    /* 006d97a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d97a1: mov ecx, esi */ r_ecx = r_esi;
    /* 006d97a3: call 0x6d9958 */ r_esp -= 4; W32(r_esp, 0x6d97a8u); f_006d9958();
    /* 006d97a8: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d97ab: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6d97b0u); f_005c5528();
    /* 006d97b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d97b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d97b3: je 0x6d97e0 */ if (fZ) goto L_006d97e0;
L_006d97b5:; BB(0x006d97b5);
    /* 006d97b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d97b7: mov ecx, eax */ r_ecx = r_eax;
    /* 006d97b9: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6d97bcu); call_ind(t); }
    /* 006d97bc: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d97bf: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006d97c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d97c3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d97c9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6d97ceu); f_0069792c();
    /* 006d97ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d97d0: je 0x6d97e0 */ if (fZ) goto L_006d97e0;
L_006d97d2:; BB(0x006d97d2);
    /* 006d97d2: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d97d8: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d97db: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x6d97e0u); f_0068dfd8();
L_006d97e0:; BB(0x006d97e0);
    /* 006d97e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d97e2: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d97e5: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d97e8: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x6d97edu); f_0068de54();
    /* 006d97ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d97ef: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d97f1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006d97f3: mov ecx, esi */ r_ecx = r_esi;
    /* 006d97f5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6d97f8u); call_ind(t); }
    /* 006d97f8: mov edx, dword ptr [0xa960ac] */ r_edx = R32((u32)(0xa960acu));
    /* 006d97fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d9800: jle 0x6d980d */ if ((fZ||fS!=fO)) goto L_006d980d;
L_006d9802:; BB(0x006d9802);
    /* 006d9802: push 0x9699ac */ { u32 v = 0x9699acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9807: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6d980cu); f_00814f0c();
    /* 006d980c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d980d:; BB(0x006d980d);
    /* 006d980d: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_006d9814:; BB(0x006d9814);
    /* 006d9814: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9817: je 0x6d988f */ if (fZ) goto L_006d988f;
L_006d9819:; BB(0x006d9819);
    /* 006d9819: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
L_006d981f:; BB(0x006d981f);
    /* 006d981f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9821: je 0x6d988a */ if (fZ) goto L_006d988a;
L_006d9823:; BB(0x006d9823);
    /* 006d9823: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d982a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d982c: je 0x6d988a */ if (fZ) goto L_006d988a;
L_006d982e:; BB(0x006d982e);
    /* 006d982e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9833u); f_007127b0();
    /* 006d9833: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d9836: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d9840: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9842: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9845: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6d984au); f_0068ee54();
    /* 006d984a: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006d984d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d9850: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006d9853: lea ebx, [esi + 0x28] */ r_ebx = (u32)(r_esi+0x28u);
    /* 006d9856: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9857: call 0x68f48c */ r_esp -= 4; W32(r_esp, 0x6d985cu); f_0068f48c();
    /* 006d985c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d985d: mov ecx, esi */ r_ecx = r_esi;
    /* 006d985f: call 0x6d9958 */ r_esp -= 4; W32(r_esp, 0x6d9864u); f_006d9958();
    /* 006d9864: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9866: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9868: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d986a: mov ecx, esi */ r_ecx = r_esi;
    /* 006d986c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d986fu); call_ind(t); }
    /* 006d986f: mov eax, dword ptr [0xa960ac] */ r_eax = R32((u32)(0xa960acu));
    /* 006d9874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9876: jle 0x6d9883 */ if ((fZ||fS!=fO)) goto L_006d9883;
L_006d9878:; BB(0x006d9878);
    /* 006d9878: push 0x9699ac */ { u32 v = 0x9699acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d987d: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6d9882u); f_00814f0c();
    /* 006d9882: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d9883:; BB(0x006d9883);
    /* 006d9883: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_006d988a:; BB(0x006d988a);
    /* 006d988a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d988b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d988c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d988d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d988e: ret  */ FN_RET(0x006d96d8); r_esp += 4; return;
L_006d988f:; BB(0x006d988f);
    /* 006d988f: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9895: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d989au); f_007127b0();
    /* 006d989a: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d989d: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d98a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d98a9: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d98ac: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6d98b1u); f_0068ee54();
    /* 006d98b1: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006d98b4: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d98b7: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006d98ba: lea ebx, [esi + 0x28] */ r_ebx = (u32)(r_esi+0x28u);
    /* 006d98bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d98be: call 0x68f48c */ r_esp -= 4; W32(r_esp, 0x6d98c3u); f_0068f48c();
    /* 006d98c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d98c4: mov ecx, esi */ r_ecx = r_esi;
    /* 006d98c6: call 0x6d9958 */ r_esp -= 4; W32(r_esp, 0x6d98cbu); f_006d9958();
    /* 006d98cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d98cd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d98cf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d98d1: mov ecx, esi */ r_ecx = r_esi;
    /* 006d98d3: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d98d6u); call_ind(t); }
    /* 006d98d6: mov eax, dword ptr [0xa960ac] */ r_eax = R32((u32)(0xa960acu));
    /* 006d98db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d98dd: jle 0x6d98ea */ if ((fZ||fS!=fO)) goto L_006d98ea;
L_006d98df:; BB(0x006d98df);
    /* 006d98df: push 0x9699ac */ { u32 v = 0x9699acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d98e4: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6d98e9u); f_00814f0c();
    /* 006d98e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d98ea:; BB(0x006d98ea);
    /* 006d98ea: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d98f0: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 006d98f7: jmp 0x6d981f */ goto L_006d981f;
L_006d98fc:; BB(0x006d98fc);
    /* 006d98fc: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d98fe: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9903u); f_0073ec50();
    /* 006d9903: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006d9906: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d990a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d990b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d990c: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d9911u); f_00735884();
    /* 006d9911: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9916: mov dword ptr [esi + 0x158], eax */ W32((u32)(r_esi+0x158u), r_eax);
    /* 006d991c: mov ecx, eax */ r_ecx = r_eax;
    /* 006d991e: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6d9923u); f_00736510();
    /* 006d9923: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9925: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d992au); f_006dc8d8();
    /* 006d992a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d992d: mov ecx, esi */ r_ecx = r_esi;
    /* 006d992f: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d9934u); f_006dc8d8();
    /* 006d9934: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d993a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d993d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d9941: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d9944: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d9948: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d994du); f_0070f5a4();
    /* 006d994d: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9953: jmp 0x6d96fb */ goto L_006d96fb;
}

void f_006d9958(void) /* sub_6D9958 */
{
    FN_ENTER(0x006d9958);
    /* 006d9958: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9959: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d995b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d9960u); f_006dc358();
    /* 006d9960: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d9963: je 0x6d9969 */ if (fZ) goto L_006d9969;
L_006d9965:; BB(0x006d9965);
    /* 006d9965: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9966: ret 4 */ FN_RET(0x006d9958); r_esp += 8; return;
L_006d9969:; BB(0x006d9969);
    /* 006d9969: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d996d: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9970: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6d9975u); f_005c5528();
    /* 006d9975: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9976: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9978: je 0x6d9965 */ if (fZ) goto L_006d9965;
L_006d997a:; BB(0x006d997a);
    /* 006d997a: mov edx, dword ptr [ebx + 0x168] */ r_edx = R32((u32)(r_ebx+0x168u));
    /* 006d9980: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9982: je 0x6d9965 */ if (fZ) goto L_006d9965;
L_006d9984:; BB(0x006d9984);
    /* 006d9984: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006d998a: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9990: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 006d9996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9997: ret 4 */ FN_RET(0x006d9958); r_esp += 8; return;
}

void f_006d999c(void) /* sub_6D999C */
{
    FN_ENTER(0x006d999c);
    /* 006d999c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d999d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d999e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d99a0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d99a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d99a5: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d99a8u); call_ind(t); }
    /* 006d99a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d99aa: je 0x6d9ac6 */ if (fZ) goto L_006d9ac6;
L_006d99b0:; BB(0x006d99b0);
    /* 006d99b0: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
    /* 006d99b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d99b8: je 0x6d9af4 */ if (fZ) goto L_006d9af4;
L_006d99be:; BB(0x006d99be);
    /* 006d99be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d99c0: je 0x6d9a92 */ if (fZ) goto L_006d9a92;
L_006d99c6:; BB(0x006d99c6);
    /* 006d99c6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d99cd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d99cf: je 0x6d9a92 */ if (fZ) goto L_006d9a92;
L_006d99d5:; BB(0x006d99d5);
    /* 006d99d5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d99dau); f_007365f4();
    /* 006d99da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d99dc: jne 0x6d9a87 */ if (!fZ) goto L_006d9a87;
L_006d99e2:; BB(0x006d99e2);
    /* 006d99e2: mov ecx, dword ptr [ebp + 0x160] */ r_ecx = R32((u32)(r_ebp+0x160u));
    /* 006d99e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d99ea: je 0x6d99fb */ if (fZ) goto L_006d99fb;
L_006d99ec:; BB(0x006d99ec);
    /* 006d99ec: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d99f1u); f_007127b0();
    /* 006d99f1: mov dword ptr [ebp + 0x160], 0 */ W32((u32)(r_ebp+0x160u), 0x0u);
L_006d99fb:; BB(0x006d99fb);
    /* 006d99fb: mov ecx, dword ptr [ebp + 0x154] */ r_ecx = R32((u32)(r_ebp+0x154u));
    /* 006d9a01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9a03: je 0x6d9a14 */ if (fZ) goto L_006d9a14;
L_006d9a05:; BB(0x006d9a05);
    /* 006d9a05: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9a0au); f_007127b0();
    /* 006d9a0a: mov dword ptr [ebp + 0x154], 0 */ W32((u32)(r_ebp+0x154u), 0x0u);
L_006d9a14:; BB(0x006d9a14);
    /* 006d9a14: mov ecx, dword ptr [ebp + 0x15c] */ r_ecx = R32((u32)(r_ebp+0x15cu));
    /* 006d9a1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9a1c: je 0x6d9a2d */ if (fZ) goto L_006d9a2d;
L_006d9a1e:; BB(0x006d9a1e);
    /* 006d9a1e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9a23u); f_007127b0();
    /* 006d9a23: mov dword ptr [ebp + 0x15c], 0 */ W32((u32)(r_ebp+0x15cu), 0x0u);
L_006d9a2d:; BB(0x006d9a2d);
    /* 006d9a2d: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 006d9a30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9a32: je 0x6d9a48 */ if (fZ) goto L_006d9a48;
L_006d9a34:; BB(0x006d9a34);
    /* 006d9a34: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d9a38: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d9a3d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d9a41: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
L_006d9a48:; BB(0x006d9a48);
    /* 006d9a48: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
    /* 006d9a4e: mov dword ptr [ebp + 0x14c], 3 */ W32((u32)(r_ebp+0x14cu), 0x3u);
    /* 006d9a58: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9a5du); f_007127b0();
    /* 006d9a5d: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006d9a60: mov dword ptr [ebp + 0x158], 0 */ W32((u32)(r_ebp+0x158u), 0x0u);
    /* 006d9a6a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9a6c: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6d9a71u); f_007772bc();
    /* 006d9a71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9a73: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006d9a75: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d9a78: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9a7a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9a7du); call_ind(t); }
    /* 006d9a7d: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
    /* 006d9a84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9a85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9a86: ret  */ FN_RET(0x006d999c); r_esp += 4; return;
L_006d9a87:; BB(0x006d9a87);
    /* 006d9a87: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9a8a: je 0x6d9ac9 */ if (fZ) goto L_006d9ac9;
L_006d9a8c:; BB(0x006d9a8c);
    /* 006d9a8c: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
L_006d9a92:; BB(0x006d9a92);
    /* 006d9a92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9a94: je 0x6d9ac6 */ if (fZ) goto L_006d9ac6;
L_006d9a96:; BB(0x006d9a96);
    /* 006d9a96: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d9a9d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9a9f: je 0x6d9ac6 */ if (fZ) goto L_006d9ac6;
L_006d9aa1:; BB(0x006d9aa1);
    /* 006d9aa1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9aa6u); f_007127b0();
    /* 006d9aa6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d9aa9: mov dword ptr [ebp + 0x158], 0 */ W32((u32)(r_ebp+0x158u), 0x0u);
    /* 006d9ab3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9ab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9ab7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9ab9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9abcu); call_ind(t); }
    /* 006d9abc: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006d9ac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9ac4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9ac5: ret  */ FN_RET(0x006d999c); r_esp += 4; return;
L_006d9ac6:; BB(0x006d9ac6);
    /* 006d9ac6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9ac7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9ac8: ret  */ FN_RET(0x006d999c); r_esp += 4; return;
L_006d9ac9:; BB(0x006d9ac9);
    /* 006d9ac9: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
    /* 006d9acf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9ad4u); f_007127b0();
    /* 006d9ad4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d9ad7: mov dword ptr [ebp + 0x158], 0 */ W32((u32)(r_ebp+0x158u), 0x0u);
    /* 006d9ae1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9ae3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9ae5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9ae7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9aeau); call_ind(t); }
    /* 006d9aea: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006d9af1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9af3: ret  */ FN_RET(0x006d999c); r_esp += 4; return;
L_006d9af4:; BB(0x006d9af4);
    /* 006d9af4: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d9af6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9afbu); f_0073ec50();
    /* 006d9afb: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d9afe: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d9b02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b04: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d9b09u); f_00735884();
    /* 006d9b09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9b0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b0e: mov dword ptr [ebp + 0x158], eax */ W32((u32)(r_ebp+0x158u), r_eax);
    /* 006d9b14: mov ecx, eax */ r_ecx = r_eax;
    /* 006d9b16: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6d9b1bu); f_00736510();
    /* 006d9b1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9b1d: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d9b22u); f_006dc8d8();
    /* 006d9b22: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d9b25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9b27: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d9b2cu); f_006dc8d8();
    /* 006d9b2c: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
    /* 006d9b32: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9b35: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d9b39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d9b3c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d9b40: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d9b45u); f_0070f5a4();
    /* 006d9b45: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
    /* 006d9b4b: jmp 0x6d99be */ goto L_006d99be;
}

void f_006d9b50(void) /* sub_6D9B50 */
{
    FN_ENTER(0x006d9b50);
    /* 006d9b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b51: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d9b53: mov eax, dword ptr [ebp + 0x14c] */ r_eax = R32((u32)(r_ebp+0x14cu));
    /* 006d9b59: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d9b5c: mov dword ptr [ebp + 0x14c], eax */ W32((u32)(r_ebp+0x14cu), r_eax);
    /* 006d9b62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9b64: jle 0x6d9b68 */ if ((fZ||fS!=fO)) goto L_006d9b68;
L_006d9b66:; BB(0x006d9b66);
    /* 006d9b66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9b67: ret  */ FN_RET(0x006d9b50); r_esp += 4; return;
L_006d9b68:; BB(0x006d9b68);
    /* 006d9b68: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d9b6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9b6d: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d9b70u); call_ind(t); }
    /* 006d9b70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9b72: jne 0x6d9b76 */ if (!fZ) goto L_006d9b76;
L_006d9b74:; BB(0x006d9b74);
    /* 006d9b74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9b75: ret  */ FN_RET(0x006d9b50); r_esp += 4; return;
L_006d9b76:; BB(0x006d9b76);
    /* 006d9b76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9b78: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d9b7du); f_006dc988();
    /* 006d9b7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9b7f: je 0x6d9b94 */ if (fZ) goto L_006d9b94;
L_006d9b81:; BB(0x006d9b81);
    /* 006d9b81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b83: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b85: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d9b88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d9b8a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9b8du); call_ind(t); }
    /* 006d9b8d: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_006d9b94:; BB(0x006d9b94);
    /* 006d9b94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9b95: ret  */ FN_RET(0x006d9b50); r_esp += 4; return;
}

void f_006d9b98(void) /* sub_6D9B98 */
{
    FN_ENTER(0x006d9b98);
    /* 006d9b98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d9b9b: mov esi, ecx */ r_esi = r_ecx;
    /* 006d9b9d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d9b9f: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9ba1: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d9ba4u); call_ind(t); }
    /* 006d9ba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9ba6: je 0x6d9cd2 */ if (fZ) goto L_006d9cd2;
L_006d9bac:; BB(0x006d9bac);
    /* 006d9bac: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9bb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9bb4: je 0x6d9d40 */ if (fZ) goto L_006d9d40;
L_006d9bba:; BB(0x006d9bba);
    /* 006d9bba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9bbc: je 0x6d9ce1 */ if (fZ) goto L_006d9ce1;
L_006d9bc2:; BB(0x006d9bc2);
    /* 006d9bc2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d9bc9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d9bcb: je 0x6d9ce1 */ if (fZ) goto L_006d9ce1;
L_006d9bd1:; BB(0x006d9bd1);
    /* 006d9bd1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d9bd6u); f_007365f4();
    /* 006d9bd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9bd8: jne 0x6d9cd6 */ if (!fZ) goto L_006d9cd6;
L_006d9bde:; BB(0x006d9bde);
    /* 006d9bde: mov ecx, dword ptr [esi + 0x160] */ r_ecx = R32((u32)(r_esi+0x160u));
    /* 006d9be4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9be6: je 0x6d9bf7 */ if (fZ) goto L_006d9bf7;
L_006d9be8:; BB(0x006d9be8);
    /* 006d9be8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9bedu); f_007127b0();
    /* 006d9bed: mov dword ptr [esi + 0x160], 0 */ W32((u32)(r_esi+0x160u), 0x0u);
L_006d9bf7:; BB(0x006d9bf7);
    /* 006d9bf7: mov ecx, dword ptr [esi + 0x154] */ r_ecx = R32((u32)(r_esi+0x154u));
    /* 006d9bfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9bff: je 0x6d9c10 */ if (fZ) goto L_006d9c10;
L_006d9c01:; BB(0x006d9c01);
    /* 006d9c01: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9c06u); f_007127b0();
    /* 006d9c06: mov dword ptr [esi + 0x154], 0 */ W32((u32)(r_esi+0x154u), 0x0u);
L_006d9c10:; BB(0x006d9c10);
    /* 006d9c10: mov ecx, dword ptr [esi + 0x15c] */ r_ecx = R32((u32)(r_esi+0x15cu));
    /* 006d9c16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9c18: je 0x6d9c29 */ if (fZ) goto L_006d9c29;
L_006d9c1a:; BB(0x006d9c1a);
    /* 006d9c1a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9c1fu); f_007127b0();
    /* 006d9c1f: mov dword ptr [esi + 0x15c], 0 */ W32((u32)(r_esi+0x15cu), 0x0u);
L_006d9c29:; BB(0x006d9c29);
    /* 006d9c29: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c2b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d9c2e: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6d9c33u); f_007772bc();
    /* 006d9c33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c35: lea ebx, [esi + 0x28] */ r_ebx = (u32)(r_esi+0x28u);
    /* 006d9c38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c39: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9c3c: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x6d9c41u); f_005c9e40();
    /* 006d9c41: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9c44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9c46: je 0x6d9c73 */ if (fZ) goto L_006d9c73;
L_006d9c48:; BB(0x006d9c48);
    /* 006d9c48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c4a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c4c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d9c4e: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9c50: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9c53u); call_ind(t); }
    /* 006d9c53: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9c59: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9c5eu); f_007127b0();
    /* 006d9c5e: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d9c68: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
    /* 006d9c6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9c71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d9c72: ret  */ FN_RET(0x006d9b98); r_esp += 4; return;
L_006d9c73:; BB(0x006d9c73);
    /* 006d9c73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c75: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d9c78: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d9c7b: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6d9c80u); f_0068ee54();
    /* 006d9c80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c81: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006d9c84: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d9c87: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006d9c8a: call 0x68f48c */ r_esp -= 4; W32(r_esp, 0x6d9c8fu); f_0068f48c();
    /* 006d9c8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c90: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9c92: call 0x6d9958 */ r_esp -= 4; W32(r_esp, 0x6d9c97u); f_006d9958();
    /* 006d9c97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c99: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9c9b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d9c9d: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9c9f: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9ca2u); call_ind(t); }
    /* 006d9ca2: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9ca8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9cadu); f_007127b0();
    /* 006d9cad: mov eax, dword ptr [0xa960ac] */ r_eax = R32((u32)(0xa960acu));
    /* 006d9cb2: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d9cbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9cbe: jle 0x6d9ccb */ if ((fZ||fS!=fO)) goto L_006d9ccb;
L_006d9cc0:; BB(0x006d9cc0);
    /* 006d9cc0: push 0x9699ac */ { u32 v = 0x9699acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9cc5: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6d9ccau); f_00814f0c();
    /* 006d9cca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d9ccb:; BB(0x006d9ccb);
    /* 006d9ccb: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_006d9cd2:; BB(0x006d9cd2);
    /* 006d9cd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9cd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9cd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d9cd5: ret  */ FN_RET(0x006d9b98); r_esp += 4; return;
L_006d9cd6:; BB(0x006d9cd6);
    /* 006d9cd6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9cd9: je 0x6d9d15 */ if (fZ) goto L_006d9d15;
L_006d9cdb:; BB(0x006d9cdb);
    /* 006d9cdb: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
L_006d9ce1:; BB(0x006d9ce1);
    /* 006d9ce1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9ce3: je 0x6d9cd2 */ if (fZ) goto L_006d9cd2;
L_006d9ce5:; BB(0x006d9ce5);
    /* 006d9ce5: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d9cec: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9cee: je 0x6d9cd2 */ if (fZ) goto L_006d9cd2;
L_006d9cf0:; BB(0x006d9cf0);
    /* 006d9cf0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9cf5u); f_007127b0();
    /* 006d9cf5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d9cf7: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d9d01: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9d03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d05: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d07: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9d0au); call_ind(t); }
    /* 006d9d0a: mov dword ptr [esi + 0x20], 6 */ W32((u32)(r_esi+0x20u), 0x6u);
    /* 006d9d11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9d12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9d13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d9d14: ret  */ FN_RET(0x006d9b98); r_esp += 4; return;
L_006d9d15:; BB(0x006d9d15);
    /* 006d9d15: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9d1b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9d20u); f_007127b0();
    /* 006d9d20: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d9d22: mov dword ptr [esi + 0x158], 0 */ W32((u32)(r_esi+0x158u), 0x0u);
    /* 006d9d2c: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9d2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d30: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d32: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9d35u); call_ind(t); }
    /* 006d9d35: mov dword ptr [esi + 0x20], 6 */ W32((u32)(r_esi+0x20u), 0x6u);
    /* 006d9d3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9d3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d9d3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d9d3f: ret  */ FN_RET(0x006d9b98); r_esp += 4; return;
L_006d9d40:; BB(0x006d9d40);
    /* 006d9d40: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d42: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9d47u); f_0073ec50();
    /* 006d9d47: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006d9d4a: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d9d4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d50: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d9d55u); f_00735884();
    /* 006d9d55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9d58: mov dword ptr [esi + 0x158], eax */ W32((u32)(r_esi+0x158u), r_eax);
    /* 006d9d5e: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9d60: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d9d65u); f_006dc8d8();
    /* 006d9d65: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d9d68: mov ecx, esi */ r_ecx = r_esi;
    /* 006d9d6a: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d9d6fu); f_006dc8d8();
    /* 006d9d6f: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9d75: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9d78: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d9d7c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d9d7f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d9d83: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d9d88u); f_0070f5a4();
    /* 006d9d88: mov ecx, dword ptr [esi + 0x158] */ r_ecx = R32((u32)(r_esi+0x158u));
    /* 006d9d8e: jmp 0x6d9bba */ goto L_006d9bba;
}

void f_006d9d94(void) /* sub_6D9D94 */
{
    FN_ENTER(0x006d9d94);
    /* 006d9d94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d95: mov ebp, esp */ r_ebp = r_esp;
    /* 006d9d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d99: push 0x8ee39c */ { u32 v = 0x8ee39cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9d9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d9da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9da5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d9dac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d9daf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d9db2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d9db5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d9db8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d9dbb: mov eax, dword ptr [ecx + 0x14c] */ r_eax = R32((u32)(r_ecx+0x14cu));
    /* 006d9dc1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d9dc4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d9dc7: mov dword ptr [ecx + 0x14c], eax */ W32((u32)(r_ecx+0x14cu), r_eax);
    /* 006d9dcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9dcf: jle 0x6d9ddf */ if ((fZ||fS!=fO)) goto L_006d9ddf;
L_006d9dd1:; BB(0x006d9dd1);
    /* 006d9dd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d9dd4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d9ddb: mov esp, ebp */ r_esp = r_ebp;
    /* 006d9ddd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9dde: ret  */ FN_RET(0x006d9d94); r_esp += 4; return;
L_006d9ddf:; BB(0x006d9ddf);
    /* 006d9ddf: mov eax, dword ptr [0xa960ec] */ r_eax = R32((u32)(0xa960ecu));
    /* 006d9de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9de6: jne 0x6d9dd1 */ if (!fZ) goto L_006d9dd1;
L_006d9de8:; BB(0x006d9de8);
    /* 006d9de8: mov eax, dword ptr [0xa960d8] */ r_eax = R32((u32)(0xa960d8u));
    /* 006d9ded: mov edi, ecx */ r_edi = r_ecx;
    /* 006d9def: mov edx, dword ptr [0xa960dc] */ r_edx = R32((u32)(0xa960dcu));
    /* 006d9df5: mov ecx, dword ptr [0xa960e0] */ r_ecx = R32((u32)(0xa960e0u));
    /* 006d9dfb: mov ebx, dword ptr [0xa960e4] */ r_ebx = R32((u32)(0xa960e4u));
    /* 006d9e01: mov esi, dword ptr [0xa960e8] */ r_esi = R32((u32)(0xa960e8u));
    /* 006d9e07: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006d9e0a: mov eax, dword ptr [edi + 0x154] */ r_eax = R32((u32)(r_edi+0x154u));
    /* 006d9e10: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 006d9e13: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 006d9e16: mov dword ptr [edi + 0x34], ebx */ W32((u32)(r_edi+0x34u), r_ebx);
    /* 006d9e19: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 006d9e1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9e1e: je 0x6d9f66 */ if (fZ) goto L_006d9f66;
L_006d9e24:; BB(0x006d9e24);
    /* 006d9e24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9e27: mov edx, dword ptr [eax + 0x160] */ r_edx = R32((u32)(r_eax+0x160u));
    /* 006d9e2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9e2f: je 0x6d9f32 */ if (fZ) goto L_006d9f32;
L_006d9e35:; BB(0x006d9e35);
    /* 006d9e35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9e38: mov edx, dword ptr [eax + 0x15c] */ r_edx = R32((u32)(r_eax+0x15cu));
    /* 006d9e3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9e40: je 0x6d9e6f */ if (fZ) goto L_006d9e6f;
L_006d9e42:; BB(0x006d9e42);
    /* 006d9e42: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9e45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9e47: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9e49: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d9e4b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6d9e4eu); call_ind(t); }
    /* 006d9e4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9e51: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d9e54: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d9e57: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d9e5a: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006d9e61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d9e64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d9e6b: mov esp, ebp */ r_esp = r_ebp;
    /* 006d9e6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d9e6e: ret  */ FN_RET(0x006d9d94); r_esp += 4; return;
L_006d9e6f:; BB(0x006d9e6f);
    /* 006d9e6f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d9e76: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9e7b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d9e80u); f_005caba4();
    /* 006d9e80: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d9e83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9e86: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d9e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9e8b: je 0x6d9f2b */ if (fZ) goto L_006d9f2b;
L_006d9e91:; BB(0x006d9e91);
    /* 006d9e91: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d9e98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d9e9f: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9ea1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9ea6u); f_0073ec50();
    /* 006d9ea6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9ea7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9eaa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d9ead: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d9eb0: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d9eb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d9eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9eb6: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d9ebbu); f_00725d18();
    /* 006d9ebb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d9ec2:; BB(0x006d9ec2);
    /* 006d9ec2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d9ec5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9ec8: mov dword ptr [edx + 0x15c], eax */ W32((u32)(r_edx+0x15cu), r_eax);
    /* 006d9ece: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d9ed5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9ed7: je 0x6d9f17 */ if (fZ) goto L_006d9f17;
L_006d9ed9:; BB(0x006d9ed9);
    /* 006d9ed9: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d9edeu); f_0078b208();
    /* 006d9ede: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d9ee1: jg 0x6d9ef1 */ if ((!fZ&&fS==fO)) goto L_006d9ef1;
L_006d9ee3:; BB(0x006d9ee3);
    /* 006d9ee3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9ee6: mov edx, dword ptr [eax + 0x15c] */ r_edx = R32((u32)(r_eax+0x15cu));
    /* 006d9eec: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006d9eef: jmp 0x6d9f17 */ goto L_006d9f17;
L_006d9ef1:; BB(0x006d9ef1);
    /* 006d9ef1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9ef4: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 006d9efa: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d9f04: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d9f0e: mov ecx, dword ptr [edx + 0x15c] */ r_ecx = R32((u32)(r_edx+0x15cu));
    /* 006d9f14: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006d9f17:; BB(0x006d9f17);
    /* 006d9f17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9f1a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d9f1d: lea edx, [eax + 0x28] */ r_edx = (u32)(r_eax+0x28u);
    /* 006d9f20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f21: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d9f26u); f_00725fa8();
    /* 006d9f26: jmp 0x6d9e42 */ goto L_006d9e42;
L_006d9f2b:; BB(0x006d9f2b);
    /* 006d9f2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d9f2d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d9f30: jmp 0x6d9ec2 */ goto L_006d9ec2;
L_006d9f32:; BB(0x006d9f32);
    /* 006d9f32: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f34: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9f39u); f_0073ec50();
    /* 006d9f39: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9f3c: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d9f3f: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d9f43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f45: call 0x731460 */ r_esp -= 4; W32(r_esp, 0x6d9f4au); f_00731460();
    /* 006d9f4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9f4d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d9f50: mov dword ptr [edx + 0x160], eax */ W32((u32)(r_edx+0x160u), r_eax);
    /* 006d9f56: lea ebx, [edx + 0x28] */ r_ebx = (u32)(r_edx+0x28u);
    /* 006d9f59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f5a: mov ecx, eax */ r_ecx = r_eax;
    /* 006d9f5c: call 0x73175c */ r_esp -= 4; W32(r_esp, 0x6d9f61u); f_0073175c();
    /* 006d9f61: jmp 0x6d9e35 */ goto L_006d9e35;
L_006d9f66:; BB(0x006d9f66);
    /* 006d9f66: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006d9f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d9f6d: jne 0x6d9f92 */ if (!fZ) goto L_006d9f92;
L_006d9f6f:; BB(0x006d9f6f);
    /* 006d9f6f: mov eax, edi */ r_eax = r_edi;
    /* 006d9f71: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006d9f74: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d9f78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f7b: push 0x96c438 */ { u32 v = 0x96c438u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f80: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d9f85u); f_0073ff34();
    /* 006d9f85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9f88: mov edx, edi */ r_edx = r_edi;
    /* 006d9f8a: mov dword ptr [edx + 0x154], eax */ W32((u32)(r_edx+0x154u), r_eax);
    /* 006d9f90: jmp 0x6d9fb3 */ goto L_006d9fb3;
L_006d9f92:; BB(0x006d9f92);
    /* 006d9f92: mov eax, edi */ r_eax = r_edi;
    /* 006d9f94: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006d9f97: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d9f9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9f9e: push 0x96c444 */ { u32 v = 0x96c444u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9fa3: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d9fa8u); f_0073ff34();
    /* 006d9fa8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9fab: mov edx, edi */ r_edx = r_edi;
    /* 006d9fad: mov dword ptr [edx + 0x154], eax */ W32((u32)(r_edx+0x154u), r_eax);
L_006d9fb3:; BB(0x006d9fb3);
    /* 006d9fb3: mov eax, edx */ r_eax = r_edx;
    /* 006d9fb5: lea ebx, [eax + 0x28] */ r_ebx = (u32)(r_eax+0x28u);
    /* 006d9fb8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d9fba: call 0x5d29d0 */ r_esp -= 4; W32(r_esp, 0x6d9fbfu); f_005d29d0();
    /* 006d9fbf: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006d9fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9fc7: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d9fccu); f_005e3aac();
    /* 006d9fcc: mov edx, edi */ r_edx = r_edi;
    /* 006d9fce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9fcf: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006d9fd2: call 0x5c9a40 */ r_esp -= 4; W32(r_esp, 0x6d9fd7u); f_005c9a40();
    /* 006d9fd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9fda: mov edx, edi */ r_edx = r_edi;
    /* 006d9fdc: mov ecx, dword ptr [edx + 0x154] */ r_ecx = R32((u32)(r_edx+0x154u));
    /* 006d9fe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9fe4: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006d9fe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9fe8: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x6d9fedu); f_00737620();
    /* 006d9fed: mov eax, edi */ r_eax = r_edi;
    /* 006d9fef: mov ebx, dword ptr [eax + 0x154] */ r_ebx = R32((u32)(r_eax+0x154u));
    /* 006d9ff5: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 006d9ffc: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006da002: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 006da009: mov edi, dword ptr [eax + 0x154] */ r_edi = R32((u32)(r_eax+0x154u));
    /* 006da00f: movzx esi, word ptr [edi + 0x84] */ r_esi = (u32)R16((u32)(r_edi+0x84u));
    /* 006da016: or esi, 0xffff0040 */ {  u32 a = r_esi; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006da01c: mov word ptr [edi + 0x84], si */ W16((u32)(r_edi+0x84u), (u16)r_esi);
    /* 006da023: mov edx, dword ptr [eax + 0x154] */ r_edx = R32((u32)(r_eax+0x154u));
    /* 006da029: movzx ecx, word ptr [edx + 0x84] */ r_ecx = (u32)R16((u32)(r_edx+0x84u));
    /* 006da030: or ecx, 0xffff0080 */ {  u32 a = r_ecx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006da036: mov word ptr [edx + 0x84], cx */ W16((u32)(r_edx+0x84u), (u16)r_ecx);
    /* 006da03d: mov ecx, dword ptr [eax + 0x154] */ r_ecx = R32((u32)(r_eax+0x154u));
    /* 006da043: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6da048u); f_00737cdc();
    /* 006da048: jmp 0x6d9e24 */ goto L_006d9e24;
}

