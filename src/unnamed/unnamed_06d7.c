#include "protos.h"

void f_006d7138(void) /* sub_6D7138 */
{
    FN_ENTER(0x006d7138);
    /* 006d7138: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d713c: movzx eax, byte ptr [edx + 0xa96264] */ r_eax = (u32)R8((u32)(r_edx+0xa96264u));
    /* 006d7143: mov byte ptr [edx + 0xa96264], 0 */ W8((u32)(r_edx+0xa96264u), 0x0u);
    /* 006d714a: ret 4 */ FN_RET(0x006d7138); r_esp += 8; return;
}

void f_006d7155(void) /* sub_6D7155 */
{
    FN_ENTER(0x006d7155);
    /* 006d7155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7156: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d715bu); f_006dc358();
    /* 006d715b: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006d715e: mov ecx, dword ptr [edx*4 + 0xa9627c] */ r_ecx = R32((u32)(r_edx*4+0xa9627cu));
    /* 006d7165: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d7168: mov eax, 0 */ r_eax = 0x0u;
    /* 006d716d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006d7170: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7171: ret  */ FN_RET(0x006d7155); r_esp += 4; return;
}

void f_006d7174(void) /* sub_6D7174 */
{
    FN_ENTER(0x006d7174);
    /* 006d7174: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7175: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7176: call 0x6cef00 */ r_esp -= 4; W32(r_esp, 0x6d717bu); f_006cef00();
    /* 006d717b: mov eax, 9 */ r_eax = 0x9u;
    /* 006d7180: mov edx, 0x9cf1b4 */ r_edx = 0x9cf1b4u;
    /* 006d7185: mov ebx, eax */ r_ebx = r_eax;
    /* 006d7187: mov esi, edx */ r_esi = r_edx;
L_006d7189:; BB(0x006d7189);
    /* 006d7189: add esi, -0x14 */ {  u32 a = r_esi; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d718c: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006d718f: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d7192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7194: je 0x6d7198 */ if (fZ) goto L_006d7198;
L_006d7196:; BB(0x006d7196);
    /* 006d7196: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x6d7198u); call_ind(t); }
L_006d7198:; BB(0x006d7198);
    /* 006d7198: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d719a: jg 0x6d7189 */ if ((!fZ&&fS==fO)) goto L_006d7189;
L_006d719c:; BB(0x006d719c);
    /* 006d719c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d719e: mov dword ptr [0xa9627c], eax */ W32((u32)(0xa9627cu), r_eax);
    /* 006d71a3: mov dword ptr [0xa96280], eax */ W32((u32)(0xa96280u), r_eax);
    /* 006d71a8: mov dword ptr [0xa96284], eax */ W32((u32)(0xa96284u), r_eax);
    /* 006d71ad: mov dword ptr [0xa96288], eax */ W32((u32)(0xa96288u), r_eax);
    /* 006d71b2: mov byte ptr [0xa96264], al */ W8((u32)(0xa96264u), (u8)r_eax);
    /* 006d71b7: mov byte ptr [0xa96265], al */ W8((u32)(0xa96265u), (u8)r_eax);
    /* 006d71bc: mov byte ptr [0xa96266], al */ W8((u32)(0xa96266u), (u8)r_eax);
    /* 006d71c1: mov byte ptr [0xa96267], al */ W8((u32)(0xa96267u), (u8)r_eax);
    /* 006d71c6: mov byte ptr [0xa96268], al */ W8((u32)(0xa96268u), (u8)r_eax);
    /* 006d71cb: mov byte ptr [0xa96269], al */ W8((u32)(0xa96269u), (u8)r_eax);
    /* 006d71d0: mov byte ptr [0xa9626a], al */ W8((u32)(0xa9626au), (u8)r_eax);
    /* 006d71d5: mov byte ptr [0xa9626b], al */ W8((u32)(0xa9626bu), (u8)r_eax);
    /* 006d71da: mov byte ptr [0xa9626c], al */ W8((u32)(0xa9626cu), (u8)r_eax);
    /* 006d71df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d71e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d71e1: ret  */ FN_RET(0x006d7174); r_esp += 4; return;
}

void f_006d71e4(void)
{
    FN_ENTER(0x006d71e4);
    /* 006d71e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d71e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006d71e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d71e9: push 0x8ee1a4 */ { u32 v = 0x8ee1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d71ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d71f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d71f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d71fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d71ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d7202: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d7205: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d7208: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d720b: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7210: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d7217: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d721cu); f_005caba4();
    /* 006d721c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d721d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d7220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7222: je 0x6d7255 */ if (fZ) goto L_006d7255;
L_006d7224:; BB(0x006d7224);
    /* 006d7224: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d722b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d7232: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d7235: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7238: call 0x6d725c */ r_esp -= 4; W32(r_esp, 0x6d723du); f_006d725c();
    /* 006d723d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7240: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d7247:; BB(0x006d7247);
    /* 006d7247: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d724a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7251: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7254: ret  */ FN_RET(0x006d71e4); r_esp += 4; return;
L_006d7255:; BB(0x006d7255);
    /* 006d7255: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7257: jmp 0x6d7247 */ goto L_006d7247;
}

void f_006d725c(void) /* sub_6D725C */
{
    FN_ENTER(0x006d725c);
    /* 006d725c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d725d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d725f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d7261: push 0x8ee1c0 */ { u32 v = 0x8ee1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7266: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d726c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d726d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d7274: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d7277: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d727a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006d727d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006d7280: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006d7283: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006d7286: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d728c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006d728f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d7292: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6d7297u); f_007ba278();
    /* 006d7297: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d729e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d72a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d72a4: mov dword ptr [ecx], 0xb3c780 */ W32((u32)(r_ecx), 0xb3c780u);
    /* 006d72aa: mov eax, dword ptr [0x9cf1b4] */ r_eax = R32((u32)(0x9cf1b4u));
    /* 006d72af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d72b0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006d72b3: call dword ptr [0xb3c794] */ { u32 t = R32((u32)(0xb3c794u)); r_esp -= 4; W32(r_esp, 0x6d72b9u); call_ind(t); }
    /* 006d72b9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d72bc: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 006d72c2: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 006d72cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d72ce: mov dword ptr [ecx + 0x94], 5 */ W32((u32)(r_ecx+0x94u), 0x5u);
    /* 006d72d8: jl 0x6d7318 */ if ((fS!=fO)) goto L_006d7318;
L_006d72da:; BB(0x006d72da);
    /* 006d72da: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d72dd: jg 0x6d72f8 */ if ((!fZ&&fS==fO)) goto L_006d72f8;
L_006d72df:; BB(0x006d72df);
    /* 006d72df: mov byte ptr [eax + 0xa96264], 0 */ W8((u32)(r_eax+0xa96264u), 0x0u);
    /* 006d72e6: mov eax, ecx */ r_eax = r_ecx;
    /* 006d72e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d72eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d72f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006d72f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d72f5: ret 4 */ FN_RET(0x006d725c); r_esp += 8; return;
L_006d72f8:; BB(0x006d72f8);
    /* 006d72f8: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006d72fc: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7302: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006d7306: mov eax, ecx */ r_eax = r_ecx;
    /* 006d7308: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d730b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7312: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7315: ret 4 */ FN_RET(0x006d725c); r_esp += 8; return;
L_006d7318:; BB(0x006d7318);
    /* 006d7318: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006d731c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7322: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006d7326: mov eax, ecx */ r_eax = r_ecx;
    /* 006d7328: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d732b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7332: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7335: ret 4 */ FN_RET(0x006d725c); r_esp += 8; return;
}

void f_006d7338(void) /* sub_6D7338 */
{
    FN_ENTER(0x006d7338);
    /* 006d7338: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006d733d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d733e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d7343u); f_006dc358();
    /* 006d7343: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d7346: mov dword ptr [eax*4 + 0xa9627c], 1 */ W32((u32)(r_eax*4+0xa9627cu), 0x1u);
    /* 006d7351: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7352: ret  */ FN_RET(0x006d7338); r_esp += 4; return;
}

void f_006d7354(void) /* sub_6D7354 */
{
    FN_ENTER(0x006d7354);
    /* 006d7354: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006d7359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d735a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d735fu); f_006dc358();
    /* 006d735f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d7362: mov dword ptr [eax*4 + 0xa9627c], 0 */ W32((u32)(r_eax*4+0xa9627cu), 0x0u);
    /* 006d736d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d736e: ret  */ FN_RET(0x006d7354); r_esp += 4; return;
}

void f_006d7370(void) /* sub_6D7370 */
{
    FN_ENTER(0x006d7370);
    /* 006d7370: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006d7374: mov byte ptr [eax + 0xa96264], 1 */ W8((u32)(r_eax+0xa96264u), 0x1u);
    /* 006d737b: ret  */ FN_RET(0x006d7370); r_esp += 4; return;
}

void f_006d737c(void) /* sub_6D737C */
{
    FN_ENTER(0x006d737c);
    /* 006d737c: mov dword ptr [0xa96270], 0x3f800000 */ W32((u32)(0xa96270u), 0x3f800000u);
    /* 006d7386: mov dword ptr [0xa96274], 0x41000000 */ W32((u32)(0xa96274u), 0x41000000u);
    /* 006d7390: mov dword ptr [0xa96278], 0x3fc00000 */ W32((u32)(0xa96278u), 0x3fc00000u);
    /* 006d739a: ret  */ FN_RET(0x006d737c); r_esp += 4; return;
}

void f_006d739c(void) /* sub_6D739C */
{
    FN_ENTER(0x006d739c);
    /* 006d739c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d739d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d739e: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d73a1: mov esi, ecx */ r_esi = r_ecx;
    /* 006d73a3: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006d73a7: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 006d73ab: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006d73af: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006d73b2: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 006d73b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d73b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d73b7: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x6d73bcu); f_0078ea2c();
    /* 006d73bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d73bf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006d73c3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006d73c5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006d73c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006d73c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006d73ca: jae 0x6d73d6 */ if (!fC) goto L_006d73d6;
L_006d73cc:; BB(0x006d73cc);
    /* 006d73cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d73ce: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d73d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d73d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d73d3: ret 8 */ FN_RET(0x006d739c); r_esp += 12; return;
L_006d73d6:; BB(0x006d73d6);
    /* 006d73d6: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006d73dd: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006d73e2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006d73ea: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 006d73f2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6d73f7u); f_0082d990();
    /* 006d73f7: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006d73fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d73fc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6d7401u); f_0082d8bc();
    /* 006d7401: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d7404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7405: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006d7409: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d740b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6d7410u); f_0082eab8();
    /* 006d7410: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6d7415u); f_0082da80();
    /* 006d7415: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006d7419: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 006d741c: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 006d741f: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 006d7422: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 006d7425: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 006d7428: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 006d742b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006d742d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006d7431: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006d7435: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006d7439: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6d743eu); f_0082df08();
    /* 006d743e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006d7440: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006d7443: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006d7447: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6d744cu); f_0082f9e0();
    /* 006d744c: fcomp dword ptr [0x96c2a0] */ fx_compare(ST(0), R_F32((u32)(0x96c2a0u))); FPOP();
    /* 006d7452: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006d7454: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006d7455: jbe 0x6d7461 */ if ((fC||fZ)) goto L_006d7461;
L_006d7457:; BB(0x006d7457);
    /* 006d7457: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d7459: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d745c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d745d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d745e: ret 8 */ FN_RET(0x006d739c); r_esp += 12; return;
L_006d7461:; BB(0x006d7461);
    /* 006d7461: mov eax, 1 */ r_eax = 0x1u;
    /* 006d7466: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7469: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d746a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d746b: ret 8 */ FN_RET(0x006d739c); r_esp += 12; return;
}

void f_006d7470(void) /* sub_6D7470 */
{
    FN_ENTER(0x006d7470);
    /* 006d7470: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7471: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7472: mov edx, 0x9cf100 */ r_edx = 0x9cf100u;
    /* 006d7477: mov eax, 9 */ r_eax = 0x9u;
    /* 006d747c: mov ebx, eax */ r_ebx = r_eax;
    /* 006d747e: mov esi, edx */ r_esi = r_edx;
L_006d7480:; BB(0x006d7480);
    /* 006d7480: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 006d7483: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7485: je 0x6d7489 */ if (fZ) goto L_006d7489;
L_006d7487:; BB(0x006d7487);
    /* 006d7487: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x6d7489u); call_ind(t); }
L_006d7489:; BB(0x006d7489);
    /* 006d7489: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d748c: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d748f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d7491: jg 0x6d7480 */ if ((!fZ&&fS==fO)) goto L_006d7480;
L_006d7493:; BB(0x006d7493);
    /* 006d7493: call 0x6cef00 */ r_esp -= 4; W32(r_esp, 0x6d7498u); f_006cef00();
    /* 006d7498: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d749a: mov dword ptr [0xa9627c], eax */ W32((u32)(0xa9627cu), r_eax);
    /* 006d749f: mov dword ptr [0xa96280], eax */ W32((u32)(0xa96280u), r_eax);
    /* 006d74a4: mov dword ptr [0xa96284], eax */ W32((u32)(0xa96284u), r_eax);
    /* 006d74a9: mov dword ptr [0xa96288], eax */ W32((u32)(0xa96288u), r_eax);
    /* 006d74ae: mov byte ptr [0xa96264], al */ W8((u32)(0xa96264u), (u8)r_eax);
    /* 006d74b3: mov byte ptr [0xa96265], al */ W8((u32)(0xa96265u), (u8)r_eax);
    /* 006d74b8: mov byte ptr [0xa96266], al */ W8((u32)(0xa96266u), (u8)r_eax);
    /* 006d74bd: mov byte ptr [0xa96267], al */ W8((u32)(0xa96267u), (u8)r_eax);
    /* 006d74c2: mov byte ptr [0xa96268], al */ W8((u32)(0xa96268u), (u8)r_eax);
    /* 006d74c7: mov byte ptr [0xa96269], al */ W8((u32)(0xa96269u), (u8)r_eax);
    /* 006d74cc: mov byte ptr [0xa9626a], al */ W8((u32)(0xa9626au), (u8)r_eax);
    /* 006d74d1: mov byte ptr [0xa9626b], al */ W8((u32)(0xa9626bu), (u8)r_eax);
    /* 006d74d6: mov byte ptr [0xa9626c], al */ W8((u32)(0xa9626cu), (u8)r_eax);
    /* 006d74db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d74dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d74dd: ret  */ FN_RET(0x006d7470); r_esp += 4; return;
}

void f_006d74e0(void) /* sub_6D74E0 */
{
    FN_ENTER(0x006d74e0);
    /* 006d74e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d74e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d74e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d74e5: call 0x6d7504 */ r_esp -= 4; W32(r_esp, 0x6d74eau); f_006d7504();
    /* 006d74ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d74ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d74f0: jne 0x6d74f6 */ if (!fZ) goto L_006d74f6;
L_006d74f2:; BB(0x006d74f2);
    /* 006d74f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d74f3: ret 4 */ FN_RET(0x006d74e0); r_esp += 8; return;
L_006d74f6:; BB(0x006d74f6);
    /* 006d74f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d74f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d74fcu); f_005c2f74();
    /* 006d74fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d74fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d74fe: ret 4 */ FN_RET(0x006d74e0); r_esp += 8; return;
}

void f_006d7504(void) /* sub_6D7504 */
{
    FN_ENTER(0x006d7504);
    /* 006d7504: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d7505: mov ebp, esp */ r_ebp = r_esp;
    /* 006d7507: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d7509: push 0x8ee1dc */ { u32 v = 0x8ee1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d750e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d7514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7515: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d751c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d751f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d7522: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d7525: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d7528: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d752b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d752e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d7535: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7538: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d753b: mov dword ptr [eax], 0xb3c850 */ W32((u32)(r_eax), 0xb3c850u);
    /* 006d7541: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7543: je 0x6d7554 */ if (fZ) goto L_006d7554;
L_006d7545:; BB(0x006d7545);
    /* 006d7545: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d754au); f_007127b0();
    /* 006d754a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d754d: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_006d7554:; BB(0x006d7554);
    /* 006d7554: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d7557: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7559: je 0x6d756a */ if (fZ) goto L_006d756a;
L_006d755b:; BB(0x006d755b);
    /* 006d755b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d7560u); f_007127b0();
    /* 006d7560: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7563: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d756a:; BB(0x006d756a);
    /* 006d756a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d756d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d756f: je 0x6d7580 */ if (fZ) goto L_006d7580;
L_006d7571:; BB(0x006d7571);
    /* 006d7571: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d7576u); f_007127b0();
    /* 006d7576: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7579: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d7580:; BB(0x006d7580);
    /* 006d7580: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d7583: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7585: je 0x6d7596 */ if (fZ) goto L_006d7596;
L_006d7587:; BB(0x006d7587);
    /* 006d7587: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d758cu); f_007127b0();
    /* 006d758c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d758f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d7596:; BB(0x006d7596);
    /* 006d7596: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d759d: mov ecx, eax */ r_ecx = r_eax;
    /* 006d759f: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d75a4u); f_006dc848();
    /* 006d75a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d75a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d75ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006d75b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d75b1: ret  */ FN_RET(0x006d7504); r_esp += 4; return;
}

void f_006d7569(void)
{
    FN_ENTER(0x006d7569);
    /* 006d7569: add byte ptr [ebx - 0x367acfb8], cl */ { u32 ad = (u32)(r_ebx+0xc9853048u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 006d756f: je 0x6d7580 */ if (fZ) goto L_006d7580;
L_006d7571:; BB(0x006d7571);
    /* 006d7571: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d7576u); f_007127b0();
    /* 006d7576: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7579: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d7580:; BB(0x006d7580);
    /* 006d7580: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d7583: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7585: je 0x6d7596 */ if (fZ) goto L_006d7596;
L_006d7587:; BB(0x006d7587);
    /* 006d7587: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d758cu); f_007127b0();
    /* 006d758c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d758f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d7596:; BB(0x006d7596);
    /* 006d7596: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d759d: mov ecx, eax */ r_ecx = r_eax;
    /* 006d759f: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d75a4u); f_006dc848();
    /* 006d75a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d75a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d75ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006d75b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d75b1: ret  */ FN_RET(0x006d7569); r_esp += 4; return;
}

void f_006d75b4(void) /* sub_6D75B4 */
{
    FN_ENTER(0x006d75b4);
    /* 006d75b4: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006d75b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d75b9: je 0x6d75c8 */ if (fZ) goto L_006d75c8;
L_006d75bb:; BB(0x006d75bb);
    /* 006d75bb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d75bf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d75c3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d75c5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d75c8u); call_ind(t); }
L_006d75c8:; BB(0x006d75c8);
    /* 006d75c8: ret 8 */ FN_RET(0x006d75b4); r_esp += 12; return;
}

void f_006d75cc(void) /* sub_6D75CC */
{
    FN_ENTER(0x006d75cc);
    /* 006d75cc: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006d75cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d75d1: je 0x6d75e0 */ if (fZ) goto L_006d75e0;
L_006d75d3:; BB(0x006d75d3);
    /* 006d75d3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d75d7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d75db: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d75dd: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d75e0u); call_ind(t); }
L_006d75e0:; BB(0x006d75e0);
    /* 006d75e0: ret 8 */ FN_RET(0x006d75cc); r_esp += 12; return;
}

void f_006d75e4(void) /* sub_6D75E4 */
{
    FN_ENTER(0x006d75e4);
    /* 006d75e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d75e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006d75e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d75e9: push 0x8ee1f8 */ { u32 v = 0x8ee1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d75ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d75f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d75f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d75fc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d75ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d7602: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d7605: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d7608: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d760b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d760e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d7611: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d7614: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006d7617: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d761a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006d761d: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d7622u); f_006dc898();
    /* 006d7622: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d7629: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d762c: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d762f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d7632: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d7634: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006d7637: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 006d763a: mov dword ptr [ecx], 0xb3c850 */ W32((u32)(r_ecx), 0xb3c850u);
    /* 006d7640: mov esi, dword ptr [0x9cf1c0] */ r_esi = R32((u32)(0x9cf1c0u));
    /* 006d7646: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 006d7649: mov byte ptr [ecx + 0x4c], al */ W8((u32)(r_ecx+0x4cu), (u8)r_eax);
    /* 006d764c: mov dword ptr [ecx + 0x54], 1 */ W32((u32)(r_ecx+0x54u), 0x1u);
    /* 006d7653: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 006d7656: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 006d7659: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 006d765c: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006d765f: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006d7662: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006d7665: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006d7668: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 006d766b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d766e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6d7673u); f_005d6a3c();
    /* 006d7673: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d7676: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d7679: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d767c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d767f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7686: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7689: ret 0xc */ FN_RET(0x006d75e4); r_esp += 16; return;
}

void f_006d7667(void)
{
    FN_ENTER(0x006d7667);
    /* 006d7667: xor al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006d7669: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d766a: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 006d766b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d766e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6d7673u); f_005d6a3c();
    /* 006d7673: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d7676: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d7679: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d767c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d767f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7686: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7689: ret 0xc */ FN_RET(0x006d7667); r_esp += 16; return;
}

void f_006d7670(void)
{
    FN_ENTER(0x006d7670);
    /* 006d7670: out dx, eax */ UNSUP(0x006d7670, "out dx, eax");
    /* 006d7672: dec dword ptr [ebx + 0x7d8bd845] */ { u32 ad = (u32)(r_ebx+0x7d8bd845u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 006d7678: fmul qword ptr [ebx + 0x4d8be075] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x4d8be075u));
    /* 006d767e: hlt  */ UNSUP(0x006d767e, "hlt");
}

void f_006d7678(void)
{
    FN_ENTER(0x006d7678);
    /* 006d7678: fmul qword ptr [ebx + 0x4d8be075] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x4d8be075u));
    /* 006d767e: hlt  */ UNSUP(0x006d767e, "hlt");
}

void f_006d768c(void) /* sub_6D768C */
{
    FN_ENTER(0x006d768c);
    /* 006d768c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d768d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d768f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006d7692: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d7695: ja 0x6d7703 */ if ((!fC&&!fZ)) goto L_006d7703;
L_006d7697:; BB(0x006d7697);
    /* 006d7697: mov eax, dword ptr [eax*4 + 0x96c33c] */ r_eax = R32((u32)(r_eax*4+0x96c33cu));
    /* 006d769e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d7703:; BB(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d768c); r_esp += 4; return;
}

void f_006d7692(void)
{
    FN_ENTER(0x006d7692);
    /* 006d7692: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d7695: ja 0x6d7703 */ if ((!fC&&!fZ)) goto L_006d7703;
L_006d7697:; BB(0x006d7697);
    /* 006d7697: mov eax, dword ptr [eax*4 + 0x96c33c] */ r_eax = R32((u32)(r_eax*4+0x96c33cu));
    /* 006d769e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d7703:; BB(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d7692); r_esp += 4; return;
}

void f_006d76a0(void)
{
    FN_ENTER(0x006d76a0);
    /* 006d76a0: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006d76a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d76a5: je 0x6d76ad */ if (fZ) goto L_006d76ad;
L_006d76a7:; BB(0x006d76a7);
    /* 006d76a7: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d76aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d76acu); call_ind(t); }
    /* 006d76ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d76ad:; BB(0x006d76ad);
    /* 006d76ad: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d76b1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d76b6: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d76ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d76bb: ret  */ FN_RET(0x006d76a0); r_esp += 4; return;
}

void f_006d76bc(void)
{
    FN_ENTER(0x006d76bc);
    /* 006d76bc: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 006d76bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d76c1: je 0x6d76c9 */ if (fZ) goto L_006d76c9;
L_006d76c3:; BB(0x006d76c3);
    /* 006d76c3: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d76c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d76c8u); call_ind(t); }
    /* 006d76c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d76c9:; BB(0x006d76c9);
    /* 006d76c9: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d76cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d76d2: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d76d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d76d7: ret  */ FN_RET(0x006d76bc); r_esp += 4; return;
}

void f_006d76d8(void)
{
    FN_ENTER(0x006d76d8);
    /* 006d76d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d76da: call 0x6d7708 */ r_esp -= 4; W32(r_esp, 0x6d76dfu); f_006d7708();
    /* 006d76df: jmp 0x6d7703 */ goto L_006d7703;
L_006d7703:; BB(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d76d8); r_esp += 4; return;
}

void f_006d76e1(void)
{
    FN_ENTER(0x006d76e1);
    /* 006d76e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d76e3: call 0x6d773c */ r_esp -= 4; W32(r_esp, 0x6d76e8u); f_006d773c();
    /* 006d76e8: jmp 0x6d7703 */ goto L_006d7703;
L_006d7703:; BB(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d76e1); r_esp += 4; return;
}

void f_006d76ea(void)
{
    FN_ENTER(0x006d76ea);
    /* 006d76ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d76ec: call 0x6d7860 */ r_esp -= 4; W32(r_esp, 0x6d76f1u); f_006d7860();
    /* 006d76f1: jmp 0x6d7703 */ goto L_006d7703;
L_006d7703:; BB(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d76ea); r_esp += 4; return;
}

void f_006d76f3(void)
{
    FN_ENTER(0x006d76f3);
    /* 006d76f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d76f5: call 0x6d791c */ r_esp -= 4; W32(r_esp, 0x6d76fau); f_006d791c();
    /* 006d76fa: jmp 0x6d7703 */ goto L_006d7703;
L_006d7703:; BB(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d76f3); r_esp += 4; return;
}

void f_006d76fc(void)
{
    FN_ENTER(0x006d76fc);
    /* 006d76fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d76fe: call 0x6d7b50 */ r_esp -= 4; W32(r_esp, 0x6d7703u); f_006d7b50();
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d76fc); r_esp += 4; return;
}

void f_006d7703(void)
{
    FN_ENTER(0x006d7703);
    /* 006d7703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7704: ret  */ FN_RET(0x006d7703); r_esp += 4; return;
}

void f_006d7708(void) /* sub_6D7708 */
{
    FN_ENTER(0x006d7708);
    /* 006d7708: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7709: mov edi, ecx */ r_edi = r_ecx;
    /* 006d770b: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 006d770e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7710: je 0x6d7733 */ if (fZ) goto L_006d7733;
L_006d7712:; BB(0x006d7712);
    /* 006d7712: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d7719: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d771e: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d7721: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d7728: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d772a: je 0x6d7733 */ if (fZ) goto L_006d7733;
L_006d772c:; BB(0x006d772c);
    /* 006d772c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d772e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d7733u); f_00760acc();
L_006d7733:; BB(0x006d7733);
    /* 006d7733: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d773a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d773b: ret  */ FN_RET(0x006d7708); r_esp += 4; return;
}

void f_006d773c(void) /* sub_6D773C */
{
    FN_ENTER(0x006d773c);
    /* 006d773c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d773d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d773e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d7741: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d7743: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d7746: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7748: je 0x6d7815 */ if (fZ) goto L_006d7815;
L_006d774e:; BB(0x006d774e);
    /* 006d774e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d7755: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d7757: je 0x6d7815 */ if (fZ) goto L_006d7815;
L_006d775d:; BB(0x006d775d);
    /* 006d775d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d7762u); f_007365f4();
    /* 006d7762: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7764: je 0x6d7777 */ if (fZ) goto L_006d7777;
L_006d7766:; BB(0x006d7766);
    /* 006d7766: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7769: je 0x6d7843 */ if (fZ) goto L_006d7843;
L_006d776f:; BB(0x006d776f);
    /* 006d776f: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d7772: jmp 0x6d7815 */ goto L_006d7815;
L_006d7777:; BB(0x006d7777);
    /* 006d7777: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 006d777a: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d777fu); f_00737d90();
    /* 006d777f: mov ebx, eax */ r_ebx = r_eax;
    /* 006d7781: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d7784: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7785: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7786: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d778bu); f_006c8e50();
    /* 006d778b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d778e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7790: je 0x6d7800 */ if (fZ) goto L_006d7800;
L_006d7792:; BB(0x006d7792);
    /* 006d7792: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d7795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7796: call 0x6dc1e4 */ r_esp -= 4; W32(r_esp, 0x6d779bu); f_006dc1e4();
    /* 006d779b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d779c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d779e: je 0x6d77ae */ if (fZ) goto L_006d77ae;
L_006d77a0:; BB(0x006d77a0);
    /* 006d77a0: movzx edx, byte ptr [ebp + 0x54] */ r_edx = (u32)R8((u32)(r_ebp+0x54u));
    /* 006d77a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d77a5: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d77a9: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x6d77aeu); f_005d2484();
L_006d77ae:; BB(0x006d77ae);
    /* 006d77ae: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d77b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d77b2: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006d77b5: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6d77bau); f_0068ec44();
    /* 006d77ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d77bc: jne 0x6d77d3 */ if (!fZ) goto L_006d77d3;
L_006d77be:; BB(0x006d77be);
    /* 006d77be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d77c0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d77c2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d77c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d77c7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d77cau); call_ind(t); }
    /* 006d77ca: mov dword ptr [ebp + 0x20], 6 */ W32((u32)(r_ebp+0x20u), 0x6u);
    /* 006d77d1: jmp 0x6d7800 */ goto L_006d7800;
L_006d77d3:; BB(0x006d77d3);
    /* 006d77d3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d77d6: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d77d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d77da: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006d77dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d77de: call 0x68f6c4 */ r_esp -= 4; W32(r_esp, 0x6d77e3u); f_0068f6c4();
    /* 006d77e3: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d77e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d77e7: call 0x6c8d08 */ r_esp -= 4; W32(r_esp, 0x6d77ecu); f_006c8d08();
    /* 006d77ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d77ef: call 0x6c9100 */ r_esp -= 4; W32(r_esp, 0x6d77f4u); f_006c9100();
    /* 006d77f4: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6d77f9u); f_006c8db4();
    /* 006d77f9: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_006d7800:; BB(0x006d7800);
    /* 006d7800: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d7803: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d7808u); f_007127b0();
    /* 006d7808: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006d780f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7812: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d7813: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7814: ret  */ FN_RET(0x006d773c); r_esp += 4; return;
L_006d7815:; BB(0x006d7815);
    /* 006d7815: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7817: je 0x6d783d */ if (fZ) goto L_006d783d;
L_006d7819:; BB(0x006d7819);
    /* 006d7819: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d7820: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d7822: je 0x6d783d */ if (fZ) goto L_006d783d;
L_006d7824:; BB(0x006d7824);
    /* 006d7824: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d7829u); f_007127b0();
    /* 006d7829: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006d7830: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006d7837: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d783a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d783b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d783c: ret  */ FN_RET(0x006d773c); r_esp += 4; return;
L_006d783d:; BB(0x006d783d);
    /* 006d783d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7840: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d7841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7842: ret  */ FN_RET(0x006d773c); r_esp += 4; return;
L_006d7843:; BB(0x006d7843);
    /* 006d7843: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d7846: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d784bu); f_007127b0();
    /* 006d784b: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006d7852: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006d7859: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d785c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d785d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d785e: ret  */ FN_RET(0x006d773c); r_esp += 4; return;
}

void f_006d7860(void) /* sub_6D7860 */
{
    FN_ENTER(0x006d7860);
    /* 006d7860: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7861: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7862: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d7864: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d7867: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7869: je 0x6d7896 */ if (fZ) goto L_006d7896;
L_006d786b:; BB(0x006d786b);
    /* 006d786b: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d786f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d7871: je 0x6d7896 */ if (fZ) goto L_006d7896;
L_006d7873:; BB(0x006d7873);
    /* 006d7873: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 006d7876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7878: je 0x6d78bb */ if (fZ) goto L_006d78bb;
L_006d787a:; BB(0x006d787a);
    /* 006d787a: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 006d787d: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 006d7880: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d7885u); f_007127b0();
    /* 006d7885: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 006d788c: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d7893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7894: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d7895: ret  */ FN_RET(0x006d7860); r_esp += 4; return;
L_006d7896:; BB(0x006d7896);
    /* 006d7896: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7898: je 0x6d78b8 */ if (fZ) goto L_006d78b8;
L_006d789a:; BB(0x006d789a);
    /* 006d789a: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d789e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d78a0: je 0x6d78b8 */ if (fZ) goto L_006d78b8;
L_006d78a2:; BB(0x006d78a2);
    /* 006d78a2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d78a7u); f_007127b0();
    /* 006d78a7: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 006d78ae: mov dword ptr [ebx + 0x20], 4 */ W32((u32)(r_ebx+0x20u), 0x4u);
    /* 006d78b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d78b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d78b7: ret  */ FN_RET(0x006d7860); r_esp += 4; return;
L_006d78b8:; BB(0x006d78b8);
    /* 006d78b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d78b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d78ba: ret  */ FN_RET(0x006d7860); r_esp += 4; return;
L_006d78bb:; BB(0x006d78bb);
    /* 006d78bb: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d78bd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d78c2u); f_0073ec50();
    /* 006d78c2: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d78c5: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d78c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d78ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d78cb: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d78d0u); f_00735884();
    /* 006d78d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d78d3: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 006d78d6: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006d78dd: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006d78e3: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006d78ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d78ec: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d78f1u); f_006dc8d8();
    /* 006d78f1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d78f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d78f6: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d78fbu); f_006dc8d8();
    /* 006d78fb: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d78fe: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7901: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d7905: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d7908: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d790c: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d7911u); f_0070f5a4();
    /* 006d7911: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d7914: jmp 0x6d787a */ goto L_006d787a;
}

void f_006d791c(void) /* sub_6D791C */
{
    FN_ENTER(0x006d791c);
    /* 006d791c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d791d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d791f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d7921: push 0x8ee220 */ { u32 v = 0x8ee220u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7926: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d792c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d792d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d7934: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d7937: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d793a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006d793d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006d7940: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006d7943: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d7946: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006d7949: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d794b: je 0x6d7994 */ if (fZ) goto L_006d7994;
L_006d794d:; BB(0x006d794d);
    /* 006d794d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d7952u); f_00737d90();
    /* 006d7952: mov ebx, eax */ r_ebx = r_eax;
    /* 006d7954: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7957: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006d795a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d795c: je 0x6d7a6e */ if (fZ) goto L_006d7a6e;
L_006d7962:; BB(0x006d7962);
    /* 006d7962: cmp ebx, dword ptr [edx + 0x58] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7965: jne 0x6d796e */ if (!fZ) goto L_006d796e;
L_006d7967:; BB(0x006d7967);
    /* 006d7967: mov eax, edx */ r_eax = r_edx;
    /* 006d7969: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d796c: jmp 0x6d7994 */ goto L_006d7994;
L_006d796e:; BB(0x006d796e);
    /* 006d796e: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 006d7971: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7972: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7973: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d7978u); f_006c8e50();
    /* 006d7978: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d797b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d797d: je 0x6d798b */ if (fZ) goto L_006d798b;
L_006d797f:; BB(0x006d797f);
    /* 006d797f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7982: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7983: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006d7986: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d798bu); f_00725fa8();
L_006d798b:; BB(0x006d798b);
    /* 006d798b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d798e: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 006d7991: mov dword ptr [edx + 0x58], ebx */ W32((u32)(r_edx+0x58u), r_ebx);
L_006d7994:; BB(0x006d7994);
    /* 006d7994: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d799b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d799d: je 0x6d79bd */ if (fZ) goto L_006d79bd;
L_006d799f:; BB(0x006d799f);
    /* 006d799f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d79a2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d79a5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d79a8: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006d79af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d79b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d79b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006d79bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d79bc: ret  */ FN_RET(0x006d791c); r_esp += 4; return;
L_006d79bd:; BB(0x006d79bd);
    /* 006d79bd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d79bf: je 0x6d7a5a */ if (fZ) goto L_006d7a5a;
L_006d79c5:; BB(0x006d79c5);
    /* 006d79c5: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d79cau); f_00737d90();
    /* 006d79ca: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006d79cd: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006d79d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d79d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d79d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d79d3: call 0x6c8f1c */ r_esp -= 4; W32(r_esp, 0x6d79d8u); f_006c8f1c();
    /* 006d79d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d79db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d79dd: je 0x6d7a5a */ if (fZ) goto L_006d7a5a;
L_006d79df:; BB(0x006d79df);
    /* 006d79df: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 006d79e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d79e6: je 0x6d7a78 */ if (fZ) goto L_006d7a78;
L_006d79ec:; BB(0x006d79ec);
    /* 006d79ec: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d79ee: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d79f3u); f_0073ec50();
    /* 006d79f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d79f6: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d79f9: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d79fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d79fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d79ff: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d7a04u); f_00735884();
    /* 006d7a04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7a07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7a0a: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006d7a0d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006d7a14: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006d7a1a: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006d7a21: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d7a26u); f_006dc8d8();
    /* 006d7a26: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006d7a29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7a2c: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d7a31u); f_006dc8d8();
    /* 006d7a31: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006d7a34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7a37: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d7a3a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7a3d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d7a40: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d7a44: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d7a49u); f_0070f5a4();
    /* 006d7a49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7a4c: mov dword ptr [eax + 0x54], 1 */ W32((u32)(r_eax+0x54u), 0x1u);
    /* 006d7a53: mov dword ptr [eax + 0x20], 3 */ W32((u32)(r_eax+0x20u), 0x3u);
L_006d7a5a:; BB(0x006d7a5a);
    /* 006d7a5a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d7a5d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7a60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d7a63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7a6a: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7a6d: ret  */ FN_RET(0x006d791c); r_esp += 4; return;
L_006d7a6e:; BB(0x006d7a6e);
    /* 006d7a6e: mov eax, edx */ r_eax = r_edx;
    /* 006d7a70: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7a73: jmp 0x6d7994 */ goto L_006d7994;
L_006d7a78:; BB(0x006d7a78);
    /* 006d7a78: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006d7a7b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7a7e: jle 0x6d79ec */ if ((fZ||fS!=fO)) goto L_006d79ec;
L_006d7a84:; BB(0x006d7a84);
    /* 006d7a84: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006d7a8b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7a90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d7a95u); f_005caba4();
    /* 006d7a95: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d7a98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7a9b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006d7a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7aa0: je 0x6d7b27 */ if (fZ) goto L_006d7b27;
L_006d7aa6:; BB(0x006d7aa6);
    /* 006d7aa6: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006d7aad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d7ab4: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ab6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d7abbu); f_0073ec50();
    /* 006d7abb: mov ebx, eax */ r_ebx = r_eax;
    /* 006d7abd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7ac0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7ac3: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d7ac8u); f_006dc9ec();
    /* 006d7ac8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d7acb: mov esi, 1 */ r_esi = 0x1u;
    /* 006d7ad0: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006d7ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ad4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ad5: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d7ad8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ad9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ada: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6d7adfu); f_00728ac4();
    /* 006d7adf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006d7ae6:; BB(0x006d7ae6);
    /* 006d7ae6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d7ae9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7aec: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006d7aef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d7af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7af8: je 0x6d7b18 */ if (fZ) goto L_006d7b18;
L_006d7afa:; BB(0x006d7afa);
    /* 006d7afa: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d7affu); f_0078b208();
    /* 006d7aff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d7b02: jle 0x6d7b18 */ if ((fZ||fS!=fO)) goto L_006d7b18;
L_006d7b04:; BB(0x006d7b04);
    /* 006d7b04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7b07: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006d7b0a: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006d7b11: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
L_006d7b18:; BB(0x006d7b18);
    /* 006d7b18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7b1b: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006d7b22: jmp 0x6d7a5a */ goto L_006d7a5a;
L_006d7b27:; BB(0x006d7b27);
    /* 006d7b27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d7b29: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d7b2c: jmp 0x6d7ae6 */ goto L_006d7ae6;
}

void f_006d7b30(void) /* sub_6D7B30 */
{
    FN_ENTER(0x006d7b30);
    /* 006d7b30: mov dword ptr [0xa96290], 0x3f800000 */ W32((u32)(0xa96290u), 0x3f800000u);
    /* 006d7b3a: mov dword ptr [0xa96294], 0x41000000 */ W32((u32)(0xa96294u), 0x41000000u);
    /* 006d7b44: mov dword ptr [0xa96298], 0x3fc00000 */ W32((u32)(0xa96298u), 0x3fc00000u);
    /* 006d7b4e: ret  */ FN_RET(0x006d7b30); r_esp += 4; return;
}

void f_006d7b50(void) /* sub_6D7B50 */
{
    FN_ENTER(0x006d7b50);
    /* 006d7b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d7b51: mov ebp, esp */ r_ebp = r_esp;
    /* 006d7b53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d7b55: push 0x8ee248 */ { u32 v = 0x8ee248u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7b5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d7b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7b61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d7b68: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d7b6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d7b6e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006d7b71: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006d7b74: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006d7b77: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006d7b7c: mov dword ptr [ecx + 0x54], 1 */ W32((u32)(r_ecx+0x54u), 0x1u);
    /* 006d7b83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d7b85: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 006d7b88: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d7b8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7b8d: je 0x6d7bfd */ if (fZ) goto L_006d7bfd;
L_006d7b8f:; BB(0x006d7b8f);
    /* 006d7b8f: mov eax, ecx */ r_eax = r_ecx;
    /* 006d7b91: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7b94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7b96: je 0x6d7d99 */ if (fZ) goto L_006d7d99;
L_006d7b9c:; BB(0x006d7b9c);
    /* 006d7b9c: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d7ba1u); f_00737d70();
    /* 006d7ba1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7ba4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7ba7: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d7bacu); f_00737d1c();
    /* 006d7bac: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006d7bae:; BB(0x006d7bae);
    /* 006d7bae: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 006d7bb1: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 006d7bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bb7: call 0x6c8f1c */ r_esp -= 4; W32(r_esp, 0x6d7bbcu); f_006c8f1c();
    /* 006d7bbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7bbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7bc1: je 0x6d7bf0 */ if (fZ) goto L_006d7bf0;
L_006d7bc3:; BB(0x006d7bc3);
    /* 006d7bc3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006d7bc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7bc9: jle 0x6d7bde */ if ((fZ||fS!=fO)) goto L_006d7bde;
L_006d7bcb:; BB(0x006d7bcb);
    /* 006d7bcb: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 006d7bce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7bd2: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7bd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bd7: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d7bdcu); f_007375e0();
    /* 006d7bdc: jmp 0x6d7bf0 */ goto L_006d7bf0;
L_006d7bde:; BB(0x006d7bde);
    /* 006d7bde: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7be1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006d7be4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7be6: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 006d7be9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7beb: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d7bf0u); f_007375e0();
L_006d7bf0:; BB(0x006d7bf0);
    /* 006d7bf0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d7bf3: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7bf9: jl 0x6d7bae */ if ((fS!=fO)) goto L_006d7bae;
L_006d7bfb:; BB(0x006d7bfb);
    /* 006d7bfb: jmp 0x6d7c2a */ goto L_006d7c2a;
L_006d7bfd:; BB(0x006d7bfd);
    /* 006d7bfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7bff: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d7c01: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d7c03: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d7c06u); call_ind(t); }
    /* 006d7c06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7c09: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7c0c: mov dword ptr [eax + 0x20], 6 */ W32((u32)(r_eax+0x20u), 0x6u);
    /* 006d7c13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7c15: je 0x6d7c1c */ if (fZ) goto L_006d7c1c;
L_006d7c17:; BB(0x006d7c17);
    /* 006d7c17: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d7c1cu); f_00737d1c();
L_006d7c1c:; BB(0x006d7c1c);
    /* 006d7c1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d7c1f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7c26: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7c28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7c29: ret  */ FN_RET(0x006d7b50); r_esp += 4; return;
L_006d7c2a:; BB(0x006d7c2a);
    /* 006d7c2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7c2d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7c30: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x6d7c35u); f_00737da4();
    /* 006d7c35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7c38: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7c3b: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d7c40u); f_00737cdc();
    /* 006d7c40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7c43: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7c46: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d7c4d: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d7c53: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006d7c5a: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006d7c5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7c5f: je 0x6d7c68 */ if (fZ) goto L_006d7c68;
L_006d7c61:; BB(0x006d7c61);
    /* 006d7c61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7c63: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d7c68u); f_00760acc();
L_006d7c68:; BB(0x006d7c68);
    /* 006d7c68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7c6b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006d7c6e: movsx ecx, word ptr [edx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 006d7c75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006d7c78:; BB(0x006d7c78);
    /* 006d7c78: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d7c7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7c7d: je 0x6d7cc8 */ if (fZ) goto L_006d7cc8;
L_006d7c7f:; BB(0x006d7c7f);
    /* 006d7c7f: mov edx, ecx */ r_edx = r_ecx;
    /* 006d7c81: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 006d7c84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7c85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7c86: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d7c8bu); f_006c8e50();
    /* 006d7c8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7c90: je 0x6d7ca7 */ if (fZ) goto L_006d7ca7;
L_006d7c92:; BB(0x006d7c92);
    /* 006d7c92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7c95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7c96: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d7c99: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d7c9eu); f_00725fa8();
    /* 006d7c9e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d7ca1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7ca4: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
L_006d7ca7:; BB(0x006d7ca7);
    /* 006d7ca7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7caa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d7cad: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d7cb0: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d7cb3: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006d7cba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d7cbd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d7cc4: mov esp, ebp */ r_esp = r_ebp;
    /* 006d7cc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7cc7: ret  */ FN_RET(0x006d7b50); r_esp += 4; return;
L_006d7cc8:; BB(0x006d7cc8);
    /* 006d7cc8: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 006d7ccb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006d7cce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ccf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7cd0: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d7cd5u); f_006c8e50();
    /* 006d7cd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7cd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d7cda: je 0x6d7ca7 */ if (fZ) goto L_006d7ca7;
L_006d7cdc:; BB(0x006d7cdc);
    /* 006d7cdc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006d7ce3: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ce8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d7cedu); f_005caba4();
    /* 006d7ced: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d7cf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7cf3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006d7cf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7cf8: je 0x6d7d92 */ if (fZ) goto L_006d7d92;
L_006d7cfe:; BB(0x006d7cfe);
    /* 006d7cfe: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006d7d05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d7d0c: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7d0e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d7d13u); f_0073ec50();
    /* 006d7d13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7d14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7d17: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d7d1a: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d7d1d: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d7d21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7d23: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d7d28u); f_00725d18();
    /* 006d7d28: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006d7d2f:; BB(0x006d7d2f);
    /* 006d7d2f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d7d32: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7d35: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006d7d38: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d7d3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7d41: je 0x6d7d78 */ if (fZ) goto L_006d7d78;
L_006d7d43:; BB(0x006d7d43);
    /* 006d7d43: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d7d48u); f_0078b208();
    /* 006d7d48: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7d4b: jg 0x6d7d58 */ if ((!fZ&&fS==fO)) goto L_006d7d58;
L_006d7d4d:; BB(0x006d7d4d);
    /* 006d7d4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7d50: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d7d53: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006d7d56: jmp 0x6d7d78 */ goto L_006d7d78;
L_006d7d58:; BB(0x006d7d58);
    /* 006d7d58: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7d5b: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006d7d5e: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d7d68: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d7d72: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006d7d75: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_006d7d78:; BB(0x006d7d78);
    /* 006d7d78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d7d7b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d7d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7d7f: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d7d84u); f_00725fa8();
    /* 006d7d84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d7d87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7d8a: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006d7d8d: jmp 0x6d7ca7 */ goto L_006d7ca7;
L_006d7d92:; BB(0x006d7d92);
    /* 006d7d92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d7d94: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d7d97: jmp 0x6d7d2f */ goto L_006d7d2f;
L_006d7d99:; BB(0x006d7d99);
    /* 006d7d99: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7d9b: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d7da0u); f_006dbdb8();
    /* 006d7da0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7da3: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d7da6: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d7daa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7dab: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7db1: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d7db6u); f_0073ff34();
    /* 006d7db6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7db9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7dbc: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7dc1: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006d7dc4: mov ecx, eax */ r_ecx = r_eax;
    /* 006d7dc6: call 0x7400c0 */ r_esp -= 4; W32(r_esp, 0x6d7dcbu); f_007400c0();
    /* 006d7dcb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006d7dcd:; BB(0x006d7dcd);
    /* 006d7dcd: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006d7dd0: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 006d7dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7dd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7dd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7dd6: call 0x6c8f1c */ r_esp -= 4; W32(r_esp, 0x6d7ddbu); f_006c8f1c();
    /* 006d7ddb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7dde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7de0: je 0x6d7e0f */ if (fZ) goto L_006d7e0f;
L_006d7de2:; BB(0x006d7de2);
    /* 006d7de2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006d7de5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7de8: jle 0x6d7dfd */ if ((fZ||fS!=fO)) goto L_006d7dfd;
L_006d7dea:; BB(0x006d7dea);
    /* 006d7dea: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006d7ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7dee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7df1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7df4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7df5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7df6: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d7dfbu); f_007375e0();
    /* 006d7dfb: jmp 0x6d7e0f */ goto L_006d7e0f;
L_006d7dfd:; BB(0x006d7dfd);
    /* 006d7dfd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7e00: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 006d7e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7e05: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 006d7e08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7e0a: call 0x7375e0 */ r_esp -= 4; W32(r_esp, 0x6d7e0fu); f_007375e0();
L_006d7e0f:; BB(0x006d7e0f);
    /* 006d7e0f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d7e12: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7e18: jl 0x6d7dcd */ if ((fS!=fO)) goto L_006d7dcd;
L_006d7e1a:; BB(0x006d7e1a);
    /* 006d7e1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7e1d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d7e20: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d7e25u); f_00737cdc();
    /* 006d7e25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d7e28: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006d7e2b: movsx ecx, word ptr [edx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 006d7e32: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d7e35: jmp 0x6d7c78 */ goto L_006d7c78;
}

void f_006d7e3c(void) /* sub_6D7E3C */
{
    FN_ENTER(0x006d7e3c);
    /* 006d7e3c: call 0x6dcc44 */ r_esp -= 4; W32(r_esp, 0x6d7e41u); f_006dcc44();
    /* 006d7e41: call 0x6c86ec */ r_esp -= 4; W32(r_esp, 0x6d7e46u); f_006c86ec();
    /* 006d7e46: call 0x6dcab0 */ r_esp -= 4; W32(r_esp, 0x6d7e4bu); f_006dcab0();
    /* 006d7e4b: mov dword ptr [0xa962ac], 0 */ W32((u32)(0xa962acu), 0x0u);
    /* 006d7e55: ret  */ FN_RET(0x006d7e3c); r_esp += 4; return;
}

void f_006d7e58(void) /* sub_6D7E58 */
{
    FN_ENTER(0x006d7e58);
    /* 006d7e58: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d7e5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6d7e63u); f_0068d5a8();
    /* 006d7e63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7e64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7e66: je 0x6d7e74 */ if (fZ) goto L_006d7e74;
L_006d7e68:; BB(0x006d7e68);
    /* 006d7e68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d7e6a: mov ecx, eax */ r_ecx = r_eax;
    /* 006d7e6c: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x6d7e6fu); call_ind(t); }
    /* 006d7e6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d7e72: jmp 0x6d7e79 */ goto L_006d7e79;
L_006d7e74:; BB(0x006d7e74);
    /* 006d7e74: mov eax, 1 */ r_eax = 0x1u;
L_006d7e79:; BB(0x006d7e79);
    /* 006d7e79: mov edx, 1 */ r_edx = 0x1u;
    /* 006d7e7e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7e81: mov ecx, 0xc7 */ r_ecx = 0xc7u;
    /* 006d7e86: jge 0x6d7e8a */ if ((fS==fO)) goto L_006d7e8a;
L_006d7e88:; BB(0x006d7e88);
    /* 006d7e88: mov eax, edx */ r_eax = r_edx;
L_006d7e8a:; BB(0x006d7e8a);
    /* 006d7e8a: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7e8f: jle 0x6d7e93 */ if ((fZ||fS!=fO)) goto L_006d7e93;
L_006d7e91:; BB(0x006d7e91);
    /* 006d7e91: mov eax, ecx */ r_eax = r_ecx;
L_006d7e93:; BB(0x006d7e93);
    /* 006d7e93: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 006d7e98: mov dword ptr [0xa962b8], eax */ W32((u32)(0xa962b8u), r_eax);
    /* 006d7e9d: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x6d7ea2u); f_00827374();
    /* 006d7ea2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d7ea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d7ea6: mov ecx, 9 */ r_ecx = 0x9u;
    /* 006d7eab: jge 0x6d7eaf */ if ((fS==fO)) goto L_006d7eaf;
L_006d7ead:; BB(0x006d7ead);
    /* 006d7ead: mov eax, edx */ r_eax = r_edx;
L_006d7eaf:; BB(0x006d7eaf);
    /* 006d7eaf: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006d7eb5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7eb8: jle 0x6d7ebc */ if ((fZ||fS!=fO)) goto L_006d7ebc;
L_006d7eba:; BB(0x006d7eba);
    /* 006d7eba: mov eax, ecx */ r_eax = r_ecx;
L_006d7ebc:; BB(0x006d7ebc);
    /* 006d7ebc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d7ebe: mov dword ptr [0xa962bc], eax */ W32((u32)(0xa962bcu), r_eax);
    /* 006d7ec3: mov eax, 0 */ r_eax = 0x0u;
    /* 006d7ec8: jge 0x6d7ecc */ if ((fS==fO)) goto L_006d7ecc;
L_006d7eca:; BB(0x006d7eca);
    /* 006d7eca: mov edx, eax */ r_edx = r_eax;
L_006d7ecc:; BB(0x006d7ecc);
    /* 006d7ecc: mov eax, 3 */ r_eax = 0x3u;
    /* 006d7ed1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7ed4: jle 0x6d7ed8 */ if ((fZ||fS!=fO)) goto L_006d7ed8;
L_006d7ed6:; BB(0x006d7ed6);
    /* 006d7ed6: mov edx, eax */ r_edx = r_eax;
L_006d7ed8:; BB(0x006d7ed8);
    /* 006d7ed8: mov dword ptr [0xa962b4], edx */ W32((u32)(0xa962b4u), r_edx);
    /* 006d7ede: call 0x6dcc44 */ r_esp -= 4; W32(r_esp, 0x6d7ee3u); f_006dcc44();
    /* 006d7ee3: call 0x6c86ec */ r_esp -= 4; W32(r_esp, 0x6d7ee8u); f_006c86ec();
    /* 006d7ee8: call 0x6dcab0 */ r_esp -= 4; W32(r_esp, 0x6d7eedu); f_006dcab0();
    /* 006d7eed: mov dword ptr [0xa962ac], 0 */ W32((u32)(0xa962acu), 0x0u);
    /* 006d7ef7: ret  */ FN_RET(0x006d7e58); r_esp += 4; return;
}

void f_006d7ef8(void) /* sub_6D7EF8 */
{
    FN_ENTER(0x006d7ef8);
    /* 006d7ef8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7ef9: mov esi, 1 */ r_esi = 0x1u;
    /* 006d7efe: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d7f03u); f_006dc358();
    /* 006d7f03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7f06: je 0x6d7f47 */ if (fZ) goto L_006d7f47;
L_006d7f08:; BB(0x006d7f08);
    /* 006d7f08: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d7f0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6d7f13u); f_0068d5a8();
    /* 006d7f13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7f14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7f16: je 0x6d7f24 */ if (fZ) goto L_006d7f24;
L_006d7f18:; BB(0x006d7f18);
    /* 006d7f18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d7f1a: mov ecx, eax */ r_ecx = r_eax;
    /* 006d7f1c: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x6d7f1fu); call_ind(t); }
    /* 006d7f1f: mov esi, eax */ r_esi = r_eax;
    /* 006d7f21: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006d7f24:; BB(0x006d7f24);
    /* 006d7f24: mov edx, 1 */ r_edx = 0x1u;
    /* 006d7f29: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7f2c: mov ecx, 0xc7 */ r_ecx = 0xc7u;
    /* 006d7f31: jge 0x6d7f35 */ if ((fS==fO)) goto L_006d7f35;
L_006d7f33:; BB(0x006d7f33);
    /* 006d7f33: mov esi, edx */ r_esi = r_edx;
L_006d7f35:; BB(0x006d7f35);
    /* 006d7f35: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006d7f39: cmp esi, 0xc7 */ {  u32 a = r_esi; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d7f3f: jle 0x6d7f43 */ if ((fZ||fS!=fO)) goto L_006d7f43;
L_006d7f41:; BB(0x006d7f41);
    /* 006d7f41: mov esi, ecx */ r_esi = r_ecx;
L_006d7f43:; BB(0x006d7f43);
    /* 006d7f43: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 006d7f45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d7f46: ret  */ FN_RET(0x006d7ef8); r_esp += 4; return;
L_006d7f47:; BB(0x006d7f47);
    /* 006d7f47: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d7f4b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006d7f4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d7f51: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x6d7f54u); call_ind(t); }
    /* 006d7f54: mov esi, eax */ r_esi = r_eax;
    /* 006d7f56: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d7f59: jmp 0x6d7f24 */ goto L_006d7f24;
}

void f_006d7f5c(void) /* sub_6D7F5C */
{
    FN_ENTER(0x006d7f5c);
    /* 006d7f5c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d7f5f: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006d7f64: mov byte ptr [esp], 0xb5 */ W8((u32)(r_esp), 0xb5u);
    /* 006d7f68: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d7f6a: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006d7f6f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006d7f74: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006d7f79: mov byte ptr [esp + 5], dl */ W8((u32)(r_esp+0x5u), (u8)r_edx);
    /* 006d7f7d: mov byte ptr [esp + 6], dl */ W8((u32)(r_esp+0x6u), (u8)r_edx);
    /* 006d7f81: mov byte ptr [esp + 7], dl */ W8((u32)(r_esp+0x7u), (u8)r_edx);
    /* 006d7f85: mov byte ptr [esp + 4], cl */ W8((u32)(r_esp+0x4u), (u8)r_ecx);
    /* 006d7f89: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006d7f8c: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6d7f91u); f_00800518();
    /* 006d7f91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7f94: ret  */ FN_RET(0x006d7f5c); r_esp += 4; return;
}

void f_006d7f98(void)
{
    FN_ENTER(0x006d7f98);
    /* 006d7f98: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006d7f9c: movzx edx, byte ptr [eax + 4] */ r_edx = (u32)R8((u32)(r_eax+0x4u));
    /* 006d7fa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7fa2: je 0x6d7fd2 */ if (fZ) goto L_006d7fd2;
L_006d7fa4:; BB(0x006d7fa4);
    /* 006d7fa4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7fa7: jne 0x6d7fbb */ if (!fZ) goto L_006d7fbb;
L_006d7fa9:; BB(0x006d7fa9);
    /* 006d7fa9: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 006d7fac: movzx eax, byte ptr [eax + 5] */ r_eax = (u32)R8((u32)(r_eax+0x5u));
    /* 006d7fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fb2: call 0x6dcc50 */ r_esp -= 4; W32(r_esp, 0x6d7fb7u); f_006dcc50();
    /* 006d7fb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7fba: ret  */ FN_RET(0x006d7f98); r_esp += 4; return;
L_006d7fbb:; BB(0x006d7fbb);
    /* 006d7fbb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d7fbe: jne 0x6d7fe3 */ if (!fZ) goto L_006d7fe3;
L_006d7fc0:; BB(0x006d7fc0);
    /* 006d7fc0: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 006d7fc3: movzx eax, byte ptr [eax + 5] */ r_eax = (u32)R8((u32)(r_eax+0x5u));
    /* 006d7fc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fc9: call 0x6c86f8 */ r_esp -= 4; W32(r_esp, 0x6d7fceu); f_006c86f8();
    /* 006d7fce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7fd1: ret  */ FN_RET(0x006d7f98); r_esp += 4; return;
L_006d7fd2:; BB(0x006d7fd2);
    /* 006d7fd2: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 006d7fd5: movzx eax, byte ptr [eax + 5] */ r_eax = (u32)R8((u32)(r_eax+0x5u));
    /* 006d7fd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fdb: call 0x6dcabc */ r_esp -= 4; W32(r_esp, 0x6d7fe0u); f_006dcabc();
    /* 006d7fe0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006d7fe3:; BB(0x006d7fe3);
    /* 006d7fe3: ret  */ FN_RET(0x006d7f98); r_esp += 4; return;
}

void f_006d7fe4(void) /* sub_6D7FE4 */
{
    FN_ENTER(0x006d7fe4);
    /* 006d7fe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7fe5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d7fe8: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 006d7fec: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006d7ff0: mov byte ptr [esp], 0xb7 */ W8((u32)(r_esp), 0xb7u);
    /* 006d7ff4: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006d7ff9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d7ffb: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006d8000: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006d8005: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 006d8008: mov byte ptr [esp + 0xa], cl */ W8((u32)(r_esp+0xau), (u8)r_ecx);
    /* 006d800c: mov byte ptr [esp + 0xb], cl */ W8((u32)(r_esp+0xbu), (u8)r_ecx);
    /* 006d8010: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8012: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006d8016: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 006d801a: mov byte ptr [esp + 8], dl */ W8((u32)(r_esp+0x8u), (u8)r_edx);
    /* 006d801e: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 006d8022: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x6d8027u); f_005d29b0();
    /* 006d8027: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 006d802b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006d802e: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6d8033u); f_00800518();
    /* 006d8033: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 006d8038: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006d803a: mov byte ptr [esp + 0xc], 0x5e */ W8((u32)(r_esp+0xcu), 0x5eu);
    /* 006d803f: mov byte ptr [esp + 0xd], 6 */ W8((u32)(r_esp+0xdu), 0x6u);
    /* 006d8044: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 006d8049: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 006d804c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006d8050: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006d8054: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006d8058: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 006d805b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006d805f: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 006d8062: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006d8065: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006d8069: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 006d806d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6d8072u); f_0061cdb0();
    /* 006d8072: mov dword ptr [0xaaecf0], 1 */ W32((u32)(0xaaecf0u), 0x1u);
    /* 006d807c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006d8080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8081: call 0x5c4edc */ r_esp -= 4; W32(r_esp, 0x6d8086u); f_005c4edc();
    /* 006d8086: mov dword ptr [0xaaecf0], 0 */ W32((u32)(0xaaecf0u), 0x0u);
    /* 006d8090: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d8093: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8094: ret  */ FN_RET(0x006d7fe4); r_esp += 4; return;
}

