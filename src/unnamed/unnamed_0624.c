#include "protos.h"

void f_006240ec(void) /* sub_6240EC */
{
    FN_ENTER(0x006240ec);
    /* 006240ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006240ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006240ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006240f1: call 0x624110 */ r_esp -= 4; W32(r_esp, 0x6240f6u); f_00624110();
    /* 006240f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006240fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006240fc: jne 0x624102 */ if (!fZ) goto L_00624102;
L_006240fe:; BB(0x006240fe);
    /* 006240fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006240ff: ret 4 */ FN_RET(0x006240ec); r_esp += 8; return;
L_00624102:; BB(0x00624102);
    /* 00624102: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624103: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x624108u); f_005c2f74();
    /* 00624108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624109: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062410a: ret 4 */ FN_RET(0x006240ec); r_esp += 8; return;
}

void f_00624110(void) /* sub_624110 */
{
    FN_ENTER(0x00624110);
    /* 00624110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624111: mov ebp, esp */ r_ebp = r_esp;
    /* 00624113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624115: push 0x8e2644 */ { u32 v = 0x8e2644u; r_esp -= 4; W32(r_esp, v); }
    /* 0062411a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624128: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062412b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062412e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00624131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00624134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00624137: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062413a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062413d: mov dword ptr [ecx], 0xb28400 */ W32((u32)(r_ecx), 0xb28400u);
    /* 00624143: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062414a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x62414fu); f_007ba1f0();
    /* 0062414f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624152: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624159: mov esp, ebp */ r_esp = r_ebp;
    /* 0062415b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062415c: ret  */ FN_RET(0x00624110); r_esp += 4; return;
}

void f_00624160(void) /* sub_624160 */
{
    FN_ENTER(0x00624160);
    /* 00624160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624161: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00624163: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00624165: call 0x624184 */ r_esp -= 4; W32(r_esp, 0x62416au); f_00624184();
    /* 0062416a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062416e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624170: jne 0x624176 */ if (!fZ) goto L_00624176;
L_00624172:; BB(0x00624172);
    /* 00624172: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624173: ret 4 */ FN_RET(0x00624160); r_esp += 8; return;
L_00624176:; BB(0x00624176);
    /* 00624176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624177: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62417cu); f_005c2f74();
    /* 0062417c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062417d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062417e: ret 4 */ FN_RET(0x00624160); r_esp += 8; return;
}

void f_00624184(void) /* sub_624184 */
{
    FN_ENTER(0x00624184);
    /* 00624184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624185: mov ebp, esp */ r_ebp = r_esp;
    /* 00624187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624189: push 0x8e2660 */ { u32 v = 0x8e2660u; r_esp -= 4; W32(r_esp, v); }
    /* 0062418e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624195: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062419c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062419f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006241a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006241a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006241a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006241ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006241ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006241b1: mov dword ptr [ecx], 0xb2842c */ W32((u32)(r_ecx), 0xb2842cu);
    /* 006241b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006241be: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6241c3u); f_008171e8();
    /* 006241c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006241c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006241cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006241cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006241d0: ret  */ FN_RET(0x00624184); r_esp += 4; return;
}

void f_006241d4(void)
{
    FN_ENTER(0x006241d4);
    /* 006241d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006241d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006241d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006241d9: push 0x8e2688 */ { u32 v = 0x8e2688u; r_esp -= 4; W32(r_esp, v); }
    /* 006241de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006241e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006241e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006241ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006241ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006241f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006241f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006241f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006241fb: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00624200: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00624207: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62420cu); f_005caba4();
    /* 0062420c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062420d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00624210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624212: je 0x62424b */ if (fZ) goto L_0062424b;
L_00624214:; BB(0x00624214);
    /* 00624214: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062421b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00624222: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624225: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062422b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062422e: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x624233u); f_00624250();
    /* 00624233: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624236: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062423d:; BB(0x0062423d);
    /* 0062423d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624240: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624247: mov esp, ebp */ r_esp = r_ebp;
    /* 00624249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062424a: ret  */ FN_RET(0x006241d4); r_esp += 4; return;
L_0062424b:; BB(0x0062424b);
    /* 0062424b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062424d: jmp 0x62423d */ goto L_0062423d;
}

void f_00624250(void) /* sub_624250 */
{
    FN_ENTER(0x00624250);
    /* 00624250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624251: mov ebp, esp */ r_ebp = r_esp;
    /* 00624253: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624255: push 0x8e26a4 */ { u32 v = 0x8e26a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062425a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624261: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624268: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062426b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062426e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00624271: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00624274: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00624277: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062427a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062427d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00624280: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00624283: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x624288u); f_007ba278();
    /* 00624288: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062428f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00624292: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624295: mov dword ptr [ecx], 0xb28400 */ W32((u32)(r_ecx), 0xb28400u);
    /* 0062429b: mov eax, dword ptr [0x9c5680] */ r_eax = R32((u32)(0x9c5680u));
    /* 006242a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006242a1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006242a4: call dword ptr [0xb28414] */ { u32 t = R32((u32)(0xb28414u)); r_esp -= 4; W32(r_esp, 0x6242aau); call_ind(t); }
    /* 006242aa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006242ad: mov dword ptr [ecx + 0xa8], 0x3f800000 */ W32((u32)(r_ecx+0xa8u), 0x3f800000u);
    /* 006242b7: mov dword ptr [ecx + 0xa4], 0x3f800000 */ W32((u32)(r_ecx+0xa4u), 0x3f800000u);
    /* 006242c1: mov dword ptr [ecx + 0xa0], 0x3f800000 */ W32((u32)(r_ecx+0xa0u), 0x3f800000u);
    /* 006242cb: mov dword ptr [ecx + 0x9c], 0x3f800000 */ W32((u32)(r_ecx+0x9cu), 0x3f800000u);
    /* 006242d5: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 006242df: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 006242e9: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 006242f3: mov dword ptr [ecx + 0xb8], 1 */ W32((u32)(r_ecx+0xb8u), 0x1u);
    /* 006242fd: call 0x624320 */ r_esp -= 4; W32(r_esp, 0x624302u); f_00624320();
    /* 00624302: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00624305: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 0062430f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624312: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624319: mov esp, ebp */ r_esp = r_ebp;
    /* 0062431b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062431c: ret 8 */ FN_RET(0x00624250); r_esp += 12; return;
}

void f_00624320(void) /* sub_624320 */
{
    FN_ENTER(0x00624320);
    /* 00624320: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00624321: mov esi, ecx */ r_esi = r_ecx;
    /* 00624323: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0062432a: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062432f: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 00624339: jl 0x624355 */ if ((fS!=fO)) goto L_00624355;
L_0062433b:; BB(0x0062433b);
    /* 0062433b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00624340: mov word ptr [esi + 0x98], ax */ W16((u32)(r_esi+0x98u), (u16)r_eax);
    /* 00624347: mov edx, 1 */ r_edx = 0x1u;
    /* 0062434c: mov word ptr [esi + 0x9a], dx */ W16((u32)(r_esi+0x9au), (u16)r_edx);
    /* 00624353: jmp 0x62436d */ goto L_0062436d;
L_00624355:; BB(0x00624355);
    /* 00624355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624356: mov word ptr [esi + 0x98], ax */ W16((u32)(r_esi+0x98u), (u16)r_eax);
    /* 0062435d: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x624362u); f_00816eec();
    /* 00624362: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624363: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00624366: mov word ptr [esi + 0x9a], ax */ W16((u32)(r_esi+0x9au), (u16)r_eax);
L_0062436d:; BB(0x0062436d);
    /* 0062436d: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 00624373: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00624376: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 0062437c: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0062437f: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00624382: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 00624388: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 0062438e: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00624391: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624394: jle 0x6243a2 */ if ((fZ||fS!=fO)) goto L_006243a2;
L_00624396:; BB(0x00624396);
    /* 00624396: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 006243a0: jmp 0x6243a8 */ goto L_006243a8;
L_006243a2:; BB(0x006243a2);
    /* 006243a2: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
L_006243a8:; BB(0x006243a8);
    /* 006243a8: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006243ab: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 006243ae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006243b1: jle 0x6243bf */ if ((fZ||fS!=fO)) goto L_006243bf;
L_006243b3:; BB(0x006243b3);
    /* 006243b3: mov dword ptr [esi + 0xc4], 0 */ W32((u32)(r_esi+0xc4u), 0x0u);
    /* 006243bd: jmp 0x6243c5 */ goto L_006243c5;
L_006243bf:; BB(0x006243bf);
    /* 006243bf: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
L_006243c5:; BB(0x006243c5);
    /* 006243c5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6243cau); f_00807ac0();
    /* 006243ca: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 006243cd: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006243d0: ja 0x624501 */ if ((!fC&&!fZ)) goto L_00624501;
L_006243d6:; BB(0x006243d6);
    /* 006243d6: mov eax, dword ptr [eax*4 + 0x93185c] */ r_eax = R32((u32)(r_eax*4+0x93185cu));
    /* 006243dd: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00624501:; BB(0x00624501);
    /* 00624501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624503: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00624506: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 0062450c: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 00624512: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624513: ret  */ FN_RET(0x00624320); r_esp += 4; return;
}

void f_006243df(void)
{
    FN_ENTER(0x006243df);
    /* 006243df: mov ecx, dword ptr [0xa8ee2c] */ r_ecx = R32((u32)(0xa8ee2cu));
    /* 006243e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006243e7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6243ecu); f_005b8610();
    /* 006243ec: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006243ef: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 006243f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006243f6: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 006243fc: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 00624401: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00624404: mov dword ptr [esi + 0xd0], 1 */ W32((u32)(r_esi+0xd0u), 0x1u);
    /* 0062440e: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 00624414: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624415: ret  */ FN_RET(0x006243df); r_esp += 4; return;
}

void f_00624416(void)
{
    FN_ENTER(0x00624416);
    /* 00624416: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0062441c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062441e: jne 0x62444d */ if (!fZ) goto L_0062444d;
L_00624420:; BB(0x00624420);
    /* 00624420: mov ecx, dword ptr [0xa8ee2c] */ r_ecx = R32((u32)(0xa8ee2cu));
    /* 00624426: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624428: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62442du); f_005b8610();
    /* 0062442d: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00624430: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 00624435: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00624437: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 0062443d: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 00624442: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00624445: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 0062444b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062444c: ret  */ FN_RET(0x00624416); r_esp += 4; return;
L_0062444d:; BB(0x0062444d);
    /* 0062444d: mov ecx, dword ptr [0xa8ee64] */ r_ecx = R32((u32)(0xa8ee64u));
    /* 00624453: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624455: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62445au); f_005b8610();
    /* 0062445a: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0062445d: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 00624462: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00624464: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 0062446a: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 0062446f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00624472: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 00624478: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624479: ret  */ FN_RET(0x00624416); r_esp += 4; return;
}

void f_0062447a(void)
{
    FN_ENTER(0x0062447a);
    /* 0062447a: mov ecx, dword ptr [0xa8ee18] */ r_ecx = R32((u32)(0xa8ee18u));
    /* 00624480: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624482: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x624487u); f_005b8610();
    /* 00624487: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0062448a: mov eax, dword ptr [0xa8ee14] */ r_eax = R32((u32)(0xa8ee14u));
    /* 0062448f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00624491: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 00624497: mov eax, dword ptr [0xa8ee14] */ r_eax = R32((u32)(0xa8ee14u));
    /* 0062449c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0062449f: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 006244a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006244a6: ret  */ FN_RET(0x0062447a); r_esp += 4; return;
}

void f_006244a7(void)
{
    FN_ENTER(0x006244a7);
    /* 006244a7: mov ecx, dword ptr [0xa8ee2c] */ r_ecx = R32((u32)(0xa8ee2cu));
    /* 006244ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006244af: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6244b4u); f_005b8610();
    /* 006244b4: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006244b7: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 006244bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006244be: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 006244c4: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 006244c9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006244cc: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 006244d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006244d3: ret  */ FN_RET(0x006244a7); r_esp += 4; return;
}

void f_006244d4(void)
{
    FN_ENTER(0x006244d4);
    /* 006244d4: mov ecx, dword ptr [0xa8ee64] */ r_ecx = R32((u32)(0xa8ee64u));
    /* 006244da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006244dc: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6244e1u); f_005b8610();
    /* 006244e1: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006244e4: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 006244e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006244eb: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 006244f1: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 006244f6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006244f9: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 006244ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624500: ret  */ FN_RET(0x006244d4); r_esp += 4; return;
}

void f_00624501(void)
{
    FN_ENTER(0x00624501);
    /* 00624501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624503: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00624506: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 0062450c: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 00624512: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624513: ret  */ FN_RET(0x00624501); r_esp += 4; return;
}

void f_00624514(void) /* sub_624514 */
{
    FN_ENTER(0x00624514);
    /* 00624514: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00624515: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624516: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00624518: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062451d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062451f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00624522: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00624527: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62452au); call_ind(t); }
    /* 0062452a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062452c: je 0x624625 */ if (fZ) goto L_00624625;
L_00624532:; BB(0x00624532);
    /* 00624532: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00624535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624537: je 0x624625 */ if (fZ) goto L_00624625;
L_0062453d:; BB(0x0062453d);
    /* 0062453d: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00624540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624542: je 0x624625 */ if (fZ) goto L_00624625;
L_00624548:; BB(0x00624548);
    /* 00624548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624549: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x62454eu); f_0081a9b8();
    /* 0062454e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062454f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x624554u); f_0082d7b0();
    /* 00624554: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00624557: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62455cu); f_0082d838();
    /* 0062455c: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062455f: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624562: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00624565: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00624567: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x62456cu); f_0082df5c();
    /* 0062456c: lea ecx, [ebp + 0x68] */ r_ecx = (u32)(r_ebp+0x68u);
    /* 0062456f: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x624574u); f_00831290();
    /* 00624574: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 00624577: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062457a: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62457fu); f_008321d8();
    /* 0062457f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624580: movzx eax, word ptr [ebp + 0x9a] */ r_eax = (u32)R16((u32)(r_ebp+0x9au));
    /* 00624587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624589: jne 0x6245aa */ if (!fZ) goto L_006245aa;
L_0062458b:; BB(0x0062458b);
    /* 0062458b: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00624590: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00624595: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00624598: lea edx, [ebp + 0x9c] */ r_edx = (u32)(r_ebp+0x9cu);
    /* 0062459e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006245a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006245a4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6245a9u); f_0082d710();
    /* 006245a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006245aa:; BB(0x006245aa);
    /* 006245aa: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6245afu); f_0082dbac();
    /* 006245af: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 006245b2: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 006245b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006245ba: je 0x6245cb */ if (fZ) goto L_006245cb;
L_006245bc:; BB(0x006245bc);
    /* 006245bc: mov edx, dword ptr [ebp + 0xcc] */ r_edx = R32((u32)(r_ebp+0xccu));
    /* 006245c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006245c4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6245c9u); f_0082d8bc();
    /* 006245c9: jmp 0x6245d6 */ goto L_006245d6;
L_006245cb:; BB(0x006245cb);
    /* 006245cb: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 006245d1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6245d6u); f_0082d838();
L_006245d6:; BB(0x006245d6);
    /* 006245d6: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006245d9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6245deu); f_0082d838();
    /* 006245de: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006245e1: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6245e6u); f_008321d8();
    /* 006245e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006245e7: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 006245ea: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006245ed: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6245f2u); f_0082d838();
    /* 006245f2: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006245f5: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6245fau); f_008321d8();
    /* 006245fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006245fb: movzx eax, word ptr [ebp + 0x9a] */ r_eax = (u32)R16((u32)(r_ebp+0x9au));
    /* 00624602: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624604: jne 0x62461b */ if (!fZ) goto L_0062461b;
L_00624606:; BB(0x00624606);
    /* 00624606: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062460b: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x624610u); f_0082d710();
    /* 00624610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624611: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00624616: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0062461b:; BB(0x0062461b);
    /* 0062461b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x624620u); f_0082dab0();
    /* 00624620: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x624625u); f_0082da80();
L_00624625:; BB(0x00624625);
    /* 00624625: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624626: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624627: ret  */ FN_RET(0x00624514); r_esp += 4; return;
}

void f_00624628(void) /* sub_624628 */
{
    FN_ENTER(0x00624628);
    /* 00624628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624629: mov ebp, esp */ r_ebp = r_esp;
    /* 0062462b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062462d: push 0x8e26cc */ { u32 v = 0x8e26ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00624632: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624639: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624640: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624643: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624646: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00624649: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062464c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062464f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00624652: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x624657u); f_004f7c84();
    /* 00624657: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062465a: je 0x62485a */ if (fZ) goto L_0062485a;
L_00624660:; BB(0x00624660);
    /* 00624660: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624663: movzx eax, word ptr [eax + 0x98] */ r_eax = (u32)R16((u32)(r_eax+0x98u));
    /* 0062466a: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062466f: jl 0x62467d */ if ((fS!=fO)) goto L_0062467d;
L_00624671:; BB(0x00624671);
    /* 00624671: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624674: movzx edx, word ptr [eax + 0x9a] */ r_edx = (u32)R16((u32)(r_eax+0x9au));
    /* 0062467b: jmp 0x6246fa */ goto L_006246fa;
L_0062467d:; BB(0x0062467d);
    /* 0062467d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062467e: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x624683u); f_00816eec();
    /* 00624683: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624684: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624687: movzx edx, word ptr [edx + 0x9a] */ r_edx = (u32)R16((u32)(r_edx+0x9au));
    /* 0062468e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00624691: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624693: je 0x6246fa */ if (fZ) goto L_006246fa;
L_00624695:; BB(0x00624695);
    /* 00624695: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624698: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 0062469e: mov word ptr [edx + 0x9a], ax */ W16((u32)(r_edx+0x9au), (u16)r_eax);
    /* 006246a5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006246a8: je 0x6247a8 */ if (fZ) goto L_006247a8;
L_006246ae:; BB(0x006246ae);
    /* 006246ae: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006246b5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006246b7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6246bcu); f_005caba4();
    /* 006246bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006246bd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006246c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006246c2: je 0x6246f0 */ if (fZ) goto L_006246f0;
L_006246c4:; BB(0x006246c4);
    /* 006246c4: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006246cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006246d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006246d5: push dword ptr [edx + 0xc8] */ { u32 v = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006246db: push dword ptr [edx + 0xc0] */ { u32 v = R32((u32)(r_edx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006246e1: mov ecx, eax */ r_ecx = r_eax;
    /* 006246e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006246e4: call 0x624870 */ r_esp -= 4; W32(r_esp, 0x6246e9u); f_00624870();
    /* 006246e9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006246f0:; BB(0x006246f0);
    /* 006246f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006246f3: movzx edx, word ptr [eax + 0x9a] */ r_edx = (u32)R16((u32)(r_eax+0x9au));
L_006246fa:; BB(0x006246fa);
    /* 006246fa: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006246fd: je 0x6247f5 */ if (fZ) goto L_006247f5;
L_00624703:; BB(0x00624703);
    /* 00624703: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624706: fld dword ptr [0x9318fc] */ FPUSH(R_F32((u32)(0x9318fcu)));
    /* 0062470c: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00624712: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 00624718: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062471a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062471c: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0062471f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00624720: jae 0x62473d */ if (!fC) goto L_0062473d;
L_00624722:; BB(0x00624722);
    /* 00624722: fsub dword ptr [0xa8ecf4] */ ST(0) = ST(0) - R_F32((u32)(0xa8ecf4u));
    /* 00624728: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062472a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062472c: mov edx, ecx */ r_edx = r_ecx;
    /* 0062472e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062472f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00624731: jb 0x624735 */ if (fC) goto L_00624735;
L_00624733:; BB(0x00624733);
    /* 00624733: fst st(1) */ ST(1) = ST(0);
L_00624735:; BB(0x00624735);
    /* 00624735: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00624737: fst dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0));
L_0062473d:; BB(0x0062473d);
    /* 0062473d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062473f: mov eax, ecx */ r_eax = r_ecx;
    /* 00624741: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00624747: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062474a: je 0x6247b7 */ if (fZ) goto L_006247b7;
L_0062474c:; BB(0x0062474c);
    /* 0062474c: mov edx, eax */ r_edx = r_eax;
    /* 0062474e: fld dword ptr [edx + 0xa0] */ FPUSH(R_F32((u32)(r_edx+0xa0u)));
    /* 00624754: fsub dword ptr [0x9318f4] */ ST(0) = ST(0) - R_F32((u32)(0x9318f4u));
    /* 0062475a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062475c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062475e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00624760: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00624762: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00624763: ja 0x62477b */ if ((!fC&&!fZ)) goto L_0062477b;
L_00624765:; BB(0x00624765);
    /* 00624765: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00624767: mov dword ptr [edx + 0xb8], 1 */ W32((u32)(r_edx+0xb8u), 0x1u);
    /* 00624771: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624773: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00624779: jmp 0x624783 */ goto L_00624783;
L_0062477b:; BB(0x0062477b);
    /* 0062477b: mov eax, edx */ r_eax = r_edx;
    /* 0062477d: fstp dword ptr [eax + 0xa0] */ W_F32((u32)(r_eax+0xa0u), ST(0)); FPOP();
L_00624783:; BB(0x00624783);
    /* 00624783: mov eax, edx */ r_eax = r_edx;
    /* 00624785: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
    /* 0062478b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062478d: jle 0x62479a */ if ((fZ||fS!=fO)) goto L_0062479a;
L_0062478f:; BB(0x0062478f);
    /* 0062478f: add eax, 0xfffffccd */ {  u32 a = r_eax; u32 b = 0xfffffccdu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00624794: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
L_0062479a:; BB(0x0062479a);
    /* 0062479a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062479d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006247a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006247a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006247a7: ret  */ FN_RET(0x00624628); r_esp += 4; return;
L_006247a8:; BB(0x006247a8);
    /* 006247a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006247aa: jne 0x6246ae */ if (!fZ) goto L_006246ae;
L_006247b0:; BB(0x006247b0);
    /* 006247b0: mov edx, eax */ r_edx = r_eax;
    /* 006247b2: jmp 0x6246fa */ goto L_006246fa;
L_006247b7:; BB(0x006247b7);
    /* 006247b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006247b9: fld dword ptr [0x9318f4] */ FPUSH(R_F32((u32)(0x9318f4u)));
    /* 006247bf: mov edx, eax */ r_edx = r_eax;
    /* 006247c1: fadd dword ptr [edx + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xa0u));
    /* 006247c7: fcom dword ptr [0x9318f8] */ fx_compare(ST(0), R_F32((u32)(0x9318f8u))); 
    /* 006247cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006247cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006247d0: jb 0x6247eb */ if (fC) goto L_006247eb;
L_006247d2:; BB(0x006247d2);
    /* 006247d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006247d4: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 006247de: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 006247e3: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 006247e9: jmp 0x624783 */ goto L_00624783;
L_006247eb:; BB(0x006247eb);
    /* 006247eb: mov eax, edx */ r_eax = r_edx;
    /* 006247ed: fstp dword ptr [eax + 0xa0] */ W_F32((u32)(r_eax+0xa0u), ST(0)); FPOP();
    /* 006247f3: jmp 0x624783 */ goto L_00624783;
L_006247f5:; BB(0x006247f5);
    /* 006247f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006247f8: fld dword ptr [0x9318f0] */ FPUSH(R_F32((u32)(0x9318f0u)));
    /* 006247fe: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00624804: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 0062480a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062480c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062480e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00624811: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00624812: jbe 0x624831 */ if ((fC||fZ)) goto L_00624831;
L_00624814:; BB(0x00624814);
    /* 00624814: fld dword ptr [0xa8ecf4] */ FPUSH(R_F32((u32)(0xa8ecf4u)));
    /* 0062481a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0062481c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0062481e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00624820: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00624821: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00624823: ja 0x624827 */ if ((!fC&&!fZ)) goto L_00624827;
L_00624825:; BB(0x00624825);
    /* 00624825: fst st(2) */ ST(2) = ST(0);
L_00624827:; BB(0x00624827);
    /* 00624827: mov edx, ecx */ r_edx = r_ecx;
    /* 00624829: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062482b: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
L_00624831:; BB(0x00624831);
    /* 00624831: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00624833: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00624835: mov eax, ecx */ r_eax = r_ecx;
    /* 00624837: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
    /* 0062483d: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00624842: jge 0x62479a */ if ((fS==fO)) goto L_0062479a;
L_00624848:; BB(0x00624848);
    /* 00624848: mov edx, ecx */ r_edx = r_ecx;
    /* 0062484a: add eax, 0x333 */ {  u32 a = r_eax; u32 b = 0x333u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062484f: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00624855: jmp 0x62479a */ goto L_0062479a;
L_0062485a:; BB(0x0062485a);
    /* 0062485a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062485d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00624860: and eax, 0xf7ffffff */ {  u32 a = r_eax; u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00624865: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00624868: jmp 0x624660 */ goto L_00624660;
}

void f_00624870(void) /* sub_624870 */
{
    FN_ENTER(0x00624870);
    /* 00624870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624871: mov ebp, esp */ r_ebp = r_esp;
    /* 00624873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624875: push 0x8e26e8 */ { u32 v = 0x8e26e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062487a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624881: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624888: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062488b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062488e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00624891: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00624894: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00624897: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062489a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062489d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006248a0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006248a3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006248a6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006248a9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6248aeu); f_008193cc();
    /* 006248ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006248b5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006248b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006248bb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006248be: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 006248c1: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 006248c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006248c6: mov dword ptr [ebx], 0xb2842c */ W32((u32)(r_ebx), 0xb2842cu);
    /* 006248cc: mov eax, dword ptr [0x9c5684] */ r_eax = R32((u32)(0x9c5684u));
    /* 006248d1: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006248d4: jle 0x6248eb */ if ((fZ||fS!=fO)) goto L_006248eb;
L_006248d6:; BB(0x006248d6);
    /* 006248d6: mov eax, ebx */ r_eax = r_ebx;
    /* 006248d8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006248db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006248de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006248e5: mov esp, ebp */ r_esp = r_ebp;
    /* 006248e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006248e8: ret 0xc */ FN_RET(0x00624870); r_esp += 16; return;
L_006248eb:; BB(0x006248eb);
    /* 006248eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006248ed: call 0x624908 */ r_esp -= 4; W32(r_esp, 0x6248f2u); f_00624908();
    /* 006248f2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006248f5: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 006248f9: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006248ff: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 00624903: jmp 0x6248d6 */ goto L_006248d6;
}

void f_00624908(void) /* sub_624908 */
{
    FN_ENTER(0x00624908);
    /* 00624908: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0062490b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062490e: je 0x6249a7 */ if (fZ) goto L_006249a7;
L_00624914:; BB(0x00624914);
    /* 00624914: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624917: je 0x624994 */ if (fZ) goto L_00624994;
L_00624919:; BB(0x00624919);
    /* 00624919: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062491c: je 0x624972 */ if (fZ) goto L_00624972;
L_0062491e:; BB(0x0062491e);
    /* 0062491e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624921: je 0x624950 */ if (fZ) goto L_00624950;
L_00624923:; BB(0x00624923);
    /* 00624923: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624926: jne 0x624938 */ if (!fZ) goto L_00624938;
L_00624928:; BB(0x00624928);
    /* 00624928: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062492a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062492b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062492c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062492d: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0062492f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x624934u); f_00814298();
    /* 00624934: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00624937: ret  */ FN_RET(0x00624908); r_esp += 4; return;
L_00624938:; BB(0x00624938);
    /* 00624938: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062493b: jne 0x624971 */ if (!fZ) goto L_00624971;
L_0062493d:; BB(0x0062493d);
    /* 0062493d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062493f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624942: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00624947: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62494cu); f_00814298();
    /* 0062494c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062494f: ret  */ FN_RET(0x00624908); r_esp += 4; return;
L_00624950:; BB(0x00624950);
    /* 00624950: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x624955u); f_00807ac0();
    /* 00624955: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00624958: je 0x624971 */ if (fZ) goto L_00624971;
L_0062495a:; BB(0x0062495a);
    /* 0062495a: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062495d: je 0x624971 */ if (fZ) goto L_00624971;
L_0062495f:; BB(0x0062495f);
    /* 0062495f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624964: push 0x582 */ { u32 v = 0x582u; r_esp -= 4; W32(r_esp, v); }
    /* 00624969: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62496eu); f_00814298();
    /* 0062496e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00624971:; BB(0x00624971);
    /* 00624971: ret  */ FN_RET(0x00624908); r_esp += 4; return;
L_00624972:; BB(0x00624972);
    /* 00624972: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x624977u); f_00807ac0();
    /* 00624977: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062497a: je 0x624971 */ if (fZ) goto L_00624971;
L_0062497c:; BB(0x0062497c);
    /* 0062497c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062497f: je 0x624971 */ if (fZ) goto L_00624971;
L_00624981:; BB(0x00624981);
    /* 00624981: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624986: push 0x581 */ { u32 v = 0x581u; r_esp -= 4; W32(r_esp, v); }
    /* 0062498b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x624990u); f_00814298();
    /* 00624990: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00624993: ret  */ FN_RET(0x00624908); r_esp += 4; return;
L_00624994:; BB(0x00624994);
    /* 00624994: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624996: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624999: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 0062499e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6249a3u); f_00814298();
    /* 006249a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006249a6: ret  */ FN_RET(0x00624908); r_esp += 4; return;
L_006249a7:; BB(0x006249a7);
    /* 006249a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006249a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006249aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006249ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006249ac: push 0x58e */ { u32 v = 0x58eu; r_esp -= 4; W32(r_esp, v); }
    /* 006249b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6249b6u); f_00814298();
    /* 006249b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006249b9: ret  */ FN_RET(0x00624908); r_esp += 4; return;
}

void f_006249bc(void) /* sub_6249BC */
{
    FN_ENTER(0x006249bc);
    /* 006249bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006249bd: mov edi, ecx */ r_edi = r_ecx;
    /* 006249bf: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006249c2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006249c5: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006249c8: jne 0x6249de */ if (!fZ) goto L_006249de;
L_006249ca:; BB(0x006249ca);
    /* 006249ca: mov ecx, edi */ r_ecx = r_edi;
    /* 006249cc: call 0x624908 */ r_esp -= 4; W32(r_esp, 0x6249d1u); f_00624908();
    /* 006249d1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006249d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006249da: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006249de:; BB(0x006249de);
    /* 006249de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006249df: ret  */ FN_RET(0x006249bc); r_esp += 4; return;
}

void f_006249e0(void) /* sub_6249E0 */
{
    FN_ENTER(0x006249e0);
    /* 006249e0: mov dword ptr [0xa8ecf4], 0xbcbf258c */ W32((u32)(0xa8ecf4u), 0xbcbf258cu);
    /* 006249ea: ret  */ FN_RET(0x006249e0); r_esp += 4; return;
}

void f_006249ec(void) /* sub_6249EC */
{
    FN_ENTER(0x006249ec);
    /* 006249ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006249ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006249ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006249f1: push 0x8e2704 */ { u32 v = 0x8e2704u; r_esp -= 4; W32(r_esp, v); }
    /* 006249f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006249fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006249fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624a04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624a07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624a0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00624a0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00624a10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00624a13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00624a16: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00624a19: mov edx, ecx */ r_edx = r_ecx;
    /* 00624a1b: mov dword ptr [edx], 0xb28668 */ W32((u32)(r_edx), 0xb28668u);
    /* 00624a21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624a23: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00624a29: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 00624a2f: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00624a35: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 00624a3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624a42: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x624a47u); f_007ba1f0();
    /* 00624a47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624a4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624a4c: jne 0x624a5e */ if (!fZ) goto L_00624a5e;
L_00624a4e:; BB(0x00624a4e);
    /* 00624a4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624a51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624a58: mov esp, ebp */ r_esp = r_ebp;
    /* 00624a5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624a5b: ret 4 */ FN_RET(0x006249ec); r_esp += 8; return;
L_00624a5e:; BB(0x00624a5e);
    /* 00624a5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624a62: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x624a67u); f_005c2f74();
    /* 00624a67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624a68: jmp 0x624a4e */ goto L_00624a4e;
}

void f_00624a6c(void) /* sub_624A6C */
{
    FN_ENTER(0x00624a6c);
    /* 00624a6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624a6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00624a6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00624a71: call 0x624a90 */ r_esp -= 4; W32(r_esp, 0x624a76u); f_00624a90();
    /* 00624a76: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00624a7a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624a7c: jne 0x624a82 */ if (!fZ) goto L_00624a82;
L_00624a7e:; BB(0x00624a7e);
    /* 00624a7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624a7f: ret 4 */ FN_RET(0x00624a6c); r_esp += 8; return;
L_00624a82:; BB(0x00624a82);
    /* 00624a82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624a83: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x624a88u); f_005c2f74();
    /* 00624a88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624a89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624a8a: ret 4 */ FN_RET(0x00624a6c); r_esp += 8; return;
}

void f_00624a90(void) /* sub_624A90 */
{
    FN_ENTER(0x00624a90);
    /* 00624a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00624a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624a95: push 0x8e272e */ { u32 v = 0x8e272eu; r_esp -= 4; W32(r_esp, v); }
    /* 00624a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624aa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624aa8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624aab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624aae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00624ab1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00624ab4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00624ab7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00624aba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624abd: mov dword ptr [eax], 0xb28694 */ W32((u32)(r_eax), 0xb28694u);
    /* 00624ac3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00624ac6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624ac9: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 00624acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624ad1: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 00624ad7: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 00624add: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00624ae3: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 00624ae9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624af0: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x624af5u); f_007ba1f0();
    /* 00624af5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624af8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624aff: mov esp, ebp */ r_esp = r_ebp;
    /* 00624b01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624b02: ret  */ FN_RET(0x00624a90); r_esp += 4; return;
}

void f_00624b6c(void) /* sub_624B6C */
{
    FN_ENTER(0x00624b6c);
    /* 00624b6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624b6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00624b6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00624b71: call 0x624b90 */ r_esp -= 4; W32(r_esp, 0x624b76u); f_00624b90();
    /* 00624b76: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00624b7a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624b7c: jne 0x624b82 */ if (!fZ) goto L_00624b82;
L_00624b7e:; BB(0x00624b7e);
    /* 00624b7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624b7f: ret 4 */ FN_RET(0x00624b6c); r_esp += 8; return;
L_00624b82:; BB(0x00624b82);
    /* 00624b82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624b83: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x624b88u); f_005c2f74();
    /* 00624b88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624b89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624b8a: ret 4 */ FN_RET(0x00624b6c); r_esp += 8; return;
}

void f_00624b90(void) /* sub_624B90 */
{
    FN_ENTER(0x00624b90);
    /* 00624b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00624b93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624b95: push 0x8e2772 */ { u32 v = 0x8e2772u; r_esp -= 4; W32(r_esp, v); }
    /* 00624b9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624ba1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624ba8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624bab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624bae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00624bb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00624bb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00624bb7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00624bba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624bbd: mov dword ptr [eax], 0xb286c0 */ W32((u32)(r_eax), 0xb286c0u);
    /* 00624bc3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00624bc6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624bc9: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 00624bcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624bd1: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 00624bd7: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 00624bdd: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00624be3: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 00624be9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624bf0: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x624bf5u); f_007ba1f0();
    /* 00624bf5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624bf8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624bff: mov esp, ebp */ r_esp = r_ebp;
    /* 00624c01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624c02: ret  */ FN_RET(0x00624b90); r_esp += 4; return;
}

void f_00624c04(void) /* sub_624C04 */
{
    FN_ENTER(0x00624c04);
    /* 00624c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624c05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00624c07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00624c09: call 0x624c28 */ r_esp -= 4; W32(r_esp, 0x624c0eu); f_00624c28();
    /* 00624c0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00624c12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624c14: jne 0x624c1a */ if (!fZ) goto L_00624c1a;
L_00624c16:; BB(0x00624c16);
    /* 00624c16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624c17: ret 4 */ FN_RET(0x00624c04); r_esp += 8; return;
L_00624c1a:; BB(0x00624c1a);
    /* 00624c1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624c1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x624c20u); f_005c2f74();
    /* 00624c20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624c22: ret 4 */ FN_RET(0x00624c04); r_esp += 8; return;
}

void f_00624c28(void) /* sub_624C28 */
{
    FN_ENTER(0x00624c28);
    /* 00624c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624c29: mov ebp, esp */ r_ebp = r_esp;
    /* 00624c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624c2d: push 0x8e279a */ { u32 v = 0x8e279au; r_esp -= 4; W32(r_esp, v); }
    /* 00624c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624c40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624c43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624c46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00624c49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00624c4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00624c4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00624c52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624c55: mov dword ptr [eax], 0xb286ec */ W32((u32)(r_eax), 0xb286ecu);
    /* 00624c5b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00624c5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624c61: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 00624c67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624c69: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 00624c6f: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 00624c75: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00624c7b: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 00624c81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624c88: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x624c8du); f_007ba1f0();
    /* 00624c8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624c90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624c97: mov esp, ebp */ r_esp = r_ebp;
    /* 00624c99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624c9a: ret  */ FN_RET(0x00624c28); r_esp += 4; return;
}

void f_00624c9c(void) /* sub_624C9C */
{
    FN_ENTER(0x00624c9c);
    /* 00624c9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00624c9d: mov esi, ecx */ r_esi = r_ecx;
    /* 00624c9f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00624ca1: mov ecx, esi */ r_ecx = r_esi;
    /* 00624ca3: push dword ptr [esi + 0x94] */ { u32 v = R32((u32)(r_esi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624ca9: push dword ptr [esi + 0x90] */ { u32 v = R32((u32)(r_esi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624caf: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x624cb2u); call_ind(t); }
    /* 00624cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624cb4: je 0x624ce2 */ if (fZ) goto L_00624ce2;
L_00624cb6:; BB(0x00624cb6);
    /* 00624cb6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x624cbbu); f_0082d7b0();
    /* 00624cbb: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00624cbe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x624cc3u); f_0082d838();
    /* 00624cc3: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00624cc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00624cc8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x624ccdu); f_0082d8bc();
    /* 00624ccd: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00624cd0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x624cd5u); f_00829cc8();
    /* 00624cd5: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00624cd8: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x624cddu); f_00831758();
    /* 00624cdd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x624ce2u); f_0082da80();
L_00624ce2:; BB(0x00624ce2);
    /* 00624ce2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624ce3: ret  */ FN_RET(0x00624c9c); r_esp += 4; return;
}

void f_00624ce4(void) /* sub_624CE4 */
{
    FN_ENTER(0x00624ce4);
    /* 00624ce4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624ce5: mov ebp, esp */ r_ebp = r_esp;
    /* 00624ce7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624ce9: push 0x8e27da */ { u32 v = 0x8e27dau; r_esp -= 4; W32(r_esp, v); }
    /* 00624cee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624cf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624cf5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624cfc: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624d02: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624d05: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00624d08: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00624d0b: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00624d0e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00624d11: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00624d16: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00624d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624d1a: jle 0x624d62 */ if ((fZ||fS!=fO)) goto L_00624d62;
L_00624d1c:; BB(0x00624d1c);
    /* 00624d1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00624d1d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x624d22u); f_0068d5a8();
    /* 00624d22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624d23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624d25: je 0x624d57 */ if (fZ) goto L_00624d57;
L_00624d27:; BB(0x00624d27);
    /* 00624d27: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00624d2a: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624d30: jne 0x624d57 */ if (!fZ) goto L_00624d57;
L_00624d32:; BB(0x00624d32);
    /* 00624d32: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d35: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 00624d38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624d39: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624d3d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x624d42u); f_007a9180();
    /* 00624d42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624d45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d48: fld dword ptr [edx + 0x98] */ FPUSH(R_F32((u32)(r_edx+0x98u)));
    /* 00624d4e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00624d50: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00624d52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00624d54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00624d55: jae 0x624d79 */ if (!fC) goto L_00624d79;
L_00624d57:; BB(0x00624d57);
    /* 00624d57: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00624d5a: cmp esi, dword ptr [0xaae168] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00624d60: jl 0x624d1c */ if ((fS!=fO)) goto L_00624d1c;
L_00624d62:; BB(0x00624d62);
    /* 00624d62: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624d65: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624d68: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624d6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624d6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624d75: mov esp, ebp */ r_esp = r_ebp;
    /* 00624d77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624d78: ret  */ FN_RET(0x00624ce4); r_esp += 4; return;
L_00624d79:; BB(0x00624d79);
    /* 00624d79: mov eax, 0x9319a0 */ r_eax = 0x9319a0u;
    /* 00624d7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00624d80: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00624d83: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00624d86: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00624d89: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00624d8f: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00624d92: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 00624d98: mov dword ptr [ebp - 0xbc], esi */ W32((u32)(r_ebp+0xffffff44u), r_esi);
    /* 00624d9e: mov dword ptr [ebp - 0xb8], edi */ W32((u32)(r_ebp+0xffffff48u), r_edi);
    /* 00624da4: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00624daa: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00624dad: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00624db3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00624db6: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00624dbc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00624dbf: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00624dc5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00624dc8: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00624dce: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00624dd1: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00624dd7: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00624dda: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00624de0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00624de3: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00624de9: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00624dec: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00624df2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00624df5: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00624dfb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00624dfe: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00624e04: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00624e07: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00624e0d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00624e10: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00624e16: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00624e19: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00624e1c: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00624e1f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00624e22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624e25: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00624e28: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00624e2b: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 00624e2e: mov edi, dword ptr [eax + 0x9c] */ r_edi = R32((u32)(r_eax+0x9cu));
    /* 00624e34: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00624e3a: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00624e40: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 00624e46: mov dword ptr [ebp - 0xb0], esi */ W32((u32)(r_ebp+0xffffff50u), r_esi);
    /* 00624e4c: mov dword ptr [ebp - 0x84], edi */ W32((u32)(r_ebp+0xffffff7cu), r_edi);
    /* 00624e52: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00624e55: mov eax, 0x931940 */ r_eax = 0x931940u;
    /* 00624e5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00624e5c: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00624e5f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00624e62: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00624e65: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00624e68: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00624e6b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00624e6e: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00624e71: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00624e74: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00624e77: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00624e7a: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00624e7d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00624e80: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00624e83: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00624e86: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00624e89: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00624e8c: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00624e8f: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00624e92: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00624e95: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00624e98: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00624e9b: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00624e9e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00624ea1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00624ea4: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00624ea7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00624eaa: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00624ead: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00624eb0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00624eb3: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00624eb6: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00624eb9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00624ebc: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00624ebf: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00624ec2: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00624ec5: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00624ec8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00624ecb: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00624ece: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00624ed0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624ed1: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00624ed4: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00624ed7: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00624eda: mov esi, dword ptr [edi + 0xa0] */ r_esi = R32((u32)(r_edi+0xa0u));
    /* 00624ee0: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00624ee3: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 00624ee9: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00624eec: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00624eef: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00624ef2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00624ef5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x624efau); f_0050b510();
    /* 00624efa: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00624efc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00624efd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x624f02u); f_0050b510();
    /* 00624f02: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00624f09: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00624f0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x624f13u); f_005caba4();
    /* 00624f13: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624f16: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00624f19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624f1b: je 0x624f47 */ if (fZ) goto L_00624f47;
L_00624f1d:; BB(0x00624f1d);
    /* 00624f1d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00624f24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00624f2b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00624f2e: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 00624f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624f35: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624f3b: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x624f40u); f_006441f4();
    /* 00624f40: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00624f47:; BB(0x00624f47);
    /* 00624f47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624f4e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00624f55: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00624f5a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x624f5fu); f_005caba4();
    /* 00624f5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624f60: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00624f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624f65: je 0x624f8e */ if (fZ) goto L_00624f8e;
L_00624f67:; BB(0x00624f67);
    /* 00624f67: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00624f6e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00624f75: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00624f78: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00624f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624f7c: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624f82: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x624f87u); f_006441f4();
    /* 00624f87: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00624f8e:; BB(0x00624f8e);
    /* 00624f8e: mov edx, edi */ r_edx = r_edi;
    /* 00624f90: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624f93: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624f96: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624f99: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00624f9d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624fa2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00624fa6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624fa9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624fb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00624fb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624fb3: ret  */ FN_RET(0x00624ce4); r_esp += 4; return;
}

void f_00624f54(void)
{
    FN_ENTER(0x00624f54);
    /* 00624f54: add byte ptr [eax + 0x34], ch */ { u32 ad = (u32)(r_eax+0x34u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00624f57: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00624f59: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00624f5b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00624f5c: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00624f5d: cli  */ UNSUP(0x00624f5d, "cli ");
    /* 00624f5e: call ptr [ecx - 0x77] */ { u32 t = R32((u32)(r_ecx+0xffffff89u)); r_esp -= 4; W32(r_esp, 0x624f61u); call_ind(t); }
    /* 00624f61: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00624f62: fadd dword ptr [ebp - 0x38d88b40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc72774c0u));
    /* 00624f68: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00624f69: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 00624f6b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00624f6d: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00624f6f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00624f70: cld  */ rt_df = 0;
    /* 00624f71: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00624f73: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00624f75: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00624f78: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00624f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624f7c: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00624f82: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x624f87u); f_006441f4();
    /* 00624f87: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00624f8e: mov edx, edi */ r_edx = r_edi;
    /* 00624f90: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624f93: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624f96: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624f99: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00624f9d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624fa2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00624fa6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624fa9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00624fb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00624fb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624fb3: ret  */ FN_RET(0x00624f54); r_esp += 4; return;
}

void f_00624fb4(void) /* sub_624FB4 */
{
    FN_ENTER(0x00624fb4);
    /* 00624fb4: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00624fba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00624fbc: je 0x624fd1 */ if (fZ) goto L_00624fd1;
L_00624fbe:; BB(0x00624fbe);
    /* 00624fbe: je 0x624fc7 */ if (fZ) goto L_00624fc7;
L_00624fc0:; BB(0x00624fc0);
    /* 00624fc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00624fc2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x624fc7u); f_004066a8();
L_00624fc7:; BB(0x00624fc7);
    /* 00624fc7: mov dword ptr [0xa8ed0c], 0 */ W32((u32)(0xa8ed0cu), 0x0u);
L_00624fd1:; BB(0x00624fd1);
    /* 00624fd1: ret  */ FN_RET(0x00624fb4); r_esp += 4; return;
}

void f_00624fd4(void)
{
    FN_ENTER(0x00624fd4);
    /* 00624fd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624fd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00624fd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624fd9: push 0x8e2800 */ { u32 v = 0x8e2800u; r_esp -= 4; W32(r_esp, v); }
    /* 00624fde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624fe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624fec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624fef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00624ff2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00624ff5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00624ff8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00624ffb: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00625000: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00625007: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62500cu); f_005caba4();
    /* 0062500c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062500d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625012: je 0x625045 */ if (fZ) goto L_00625045;
L_00625014:; BB(0x00625014);
    /* 00625014: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062501b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625022: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625025: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625028: call 0x62504c */ r_esp -= 4; W32(r_esp, 0x62502du); f_0062504c();
    /* 0062502d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625030: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00625037:; BB(0x00625037);
    /* 00625037: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062503a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625041: mov esp, ebp */ r_esp = r_ebp;
    /* 00625043: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625044: ret  */ FN_RET(0x00624fd4); r_esp += 4; return;
L_00625045:; BB(0x00625045);
    /* 00625045: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625047: jmp 0x625037 */ goto L_00625037;
}

