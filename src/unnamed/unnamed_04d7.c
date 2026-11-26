#include "protos.h"

void f_004d71c4(void) /* sub_4D71C4 */
{
    FN_ENTER(0x004d71c4);
    /* 004d71c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d71c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004d71c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d71c9: push 0x8d2074 */ { u32 v = 0x8d2074u; r_esp -= 4; W32(r_esp, v); }
    /* 004d71ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d71d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d71d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d71dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d71df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d71e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d71e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d71e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d71eb: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 004d71ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d71f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d71f9u); f_005caba4();
    /* 004d71f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d71fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d71fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d71ff: je 0x4d722f */ if (fZ) goto L_004d722f;
L_004d7201:; BB(0x004d7201);
    /* 004d7201: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d7208: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d720f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d7212: call 0x4d7234 */ r_esp -= 4; W32(r_esp, 0x4d7217u); f_004d7234();
    /* 004d7217: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d721a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d7221:; BB(0x004d7221);
    /* 004d7221: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d7224: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d722b: mov esp, ebp */ r_esp = r_ebp;
    /* 004d722d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d722e: ret  */ FN_RET(0x004d71c4); r_esp += 4; return;
L_004d722f:; BB(0x004d722f);
    /* 004d722f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7231: jmp 0x4d7221 */ goto L_004d7221;
}

void f_004d7234(void) /* sub_4D7234 */
{
    FN_ENTER(0x004d7234);
    /* 004d7234: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7235: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d7237: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d7239: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d723eu); f_004d1f68();
    /* 004d723e: mov dword ptr [ebp], 0xafc9e8 */ W32((u32)(r_ebp), 0xafc9e8u);
    /* 004d7245: mov eax, ebp */ r_eax = r_ebp;
    /* 004d7247: mov dword ptr [ebp + 0x6c], 0x41a00000 */ W32((u32)(r_ebp+0x6cu), 0x41a00000u);
    /* 004d724e: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 004d7255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7256: ret  */ FN_RET(0x004d7234); r_esp += 4; return;
}

void f_004d7258(void) /* sub_4D7258 */
{
    FN_ENTER(0x004d7258);
    /* 004d7258: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7259: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d725b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d725d: call 0x4d727c */ r_esp -= 4; W32(r_esp, 0x4d7262u); f_004d727c();
    /* 004d7262: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d7266: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7268: jne 0x4d726e */ if (!fZ) goto L_004d726e;
L_004d726a:; BB(0x004d726a);
    /* 004d726a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d726b: ret 4 */ FN_RET(0x004d7258); r_esp += 8; return;
L_004d726e:; BB(0x004d726e);
    /* 004d726e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d726f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d7274u); f_005c2f74();
    /* 004d7274: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d7275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d7276: ret 4 */ FN_RET(0x004d7258); r_esp += 8; return;
}

void f_004d727c(void) /* sub_4D727C */
{
    FN_ENTER(0x004d727c);
    /* 004d727c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d727d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d727f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d7281: push 0x8d2090 */ { u32 v = 0x8d2090u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7286: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d728c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d728d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d7294: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d7297: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d729a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d729d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d72a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d72a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d72a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d72a9: mov dword ptr [ecx], 0xafca90 */ W32((u32)(r_ecx), 0xafca90u);
    /* 004d72af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d72b1: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004d72b4: mov dword ptr [ecx + 0x100], eax */ W32((u32)(r_ecx+0x100u), r_eax);
    /* 004d72ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d72c1: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d72c6u); f_004d1f18();
    /* 004d72c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d72c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d72d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004d72d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d72d3: ret  */ FN_RET(0x004d727c); r_esp += 4; return;
}

void f_004d72d4(void) /* sub_4D72D4 */
{
    FN_ENTER(0x004d72d4);
    /* 004d72d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d72d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004d72d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d72d9: push 0x8d20ac */ { u32 v = 0x8d20acu; r_esp -= 4; W32(r_esp, v); }
    /* 004d72de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d72e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d72e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d72ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d72ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d72f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d72f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d72f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d72fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d72fe: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d7303u); f_004d1f68();
    /* 004d7303: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d730a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d730d: mov dword ptr [edx], 0xafca90 */ W32((u32)(r_edx), 0xafca90u);
    /* 004d7313: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7319: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 004d7323: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
    /* 004d732d: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 004d7332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d7334: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
    /* 004d733e: mov byte ptr [0xa48b74], al */ W8((u32)(0xa48b74u), (u8)r_eax);
    /* 004d7343: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 004d7349: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 004d7353: mov word ptr [0x9aced8], si */ W16((u32)(0x9aced8u), (u16)r_esi);
    /* 004d735a: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 004d7360: mov dword ptr [edx + 0xec], 0 */ W32((u32)(r_edx+0xecu), 0x0u);
    /* 004d736a: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004d7370: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 004d737a: mov dword ptr [edx + 0x38], 5 */ W32((u32)(r_edx+0x38u), 0x5u);
    /* 004d7381: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7386u); f_0068d5a8();
    /* 004d7386: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d7387: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d738a: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004d738d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d738f: je 0x4d7399 */ if (fZ) goto L_004d7399;
L_004d7391:; BB(0x004d7391);
    /* 004d7391: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 004d7395: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
L_004d7399:; BB(0x004d7399);
    /* 004d7399: call 0x4d86f4 */ r_esp -= 4; W32(r_esp, 0x4d739eu); f_004d86f4();
    /* 004d739e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d73a1: mov dword ptr [edx + 0x108], 0 */ W32((u32)(r_edx+0x108u), 0x0u);
    /* 004d73ab: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d73ad: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 004d73b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d73b7: mov dword ptr [edx + 0x100], edi */ W32((u32)(r_edx+0x100u), r_edi);
    /* 004d73bd: mov dword ptr [edx + 0x104], edi */ W32((u32)(r_edx+0x104u), r_edi);
    /* 004d73c3: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 004d73ca: mov dword ptr [edx + 0x10c], edi */ W32((u32)(r_edx+0x10cu), r_edi);
    /* 004d73d0: mov dword ptr [edx + 0x84], edi */ W32((u32)(r_edx+0x84u), r_edi);
    /* 004d73d6: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 004d73dd: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 004d73e4: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004d73eb: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 004d73f5: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 004d73ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d7402: mov dword ptr [ecx + 0xa0], edi */ W32((u32)(r_ecx+0xa0u), r_edi);
    /* 004d7408: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 004d7412: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 004d741c: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 004d7426: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 004d7430: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 004d743a: mov dword ptr [eax + 0xbc], edi */ W32((u32)(r_eax+0xbcu), r_edi);
    /* 004d7440: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 004d744a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d744d: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 004d7457: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 004d7461: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 004d746b: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 004d7475: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 004d747f: mov dword ptr [esi + 0xd8], edi */ W32((u32)(r_esi+0xd8u), r_edi);
    /* 004d7485: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d7488: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 004d7492: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d7495: mov dword ptr [esi + 0xc4], 0 */ W32((u32)(r_esi+0xc4u), 0x0u);
    /* 004d749f: mov dword ptr [esi + 0xc8], 0 */ W32((u32)(r_esi+0xc8u), 0x0u);
    /* 004d74a9: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 004d74b3: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 004d74bd: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 004d74c7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d74ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d74cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d74d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004d74d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d74d7: ret  */ FN_RET(0x004d72d4); r_esp += 4; return;
}

void f_004d74d8(void) /* sub_4D74D8 */
{
    FN_ENTER(0x004d74d8);
    /* 004d74d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d74d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d74da: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d74dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d74df: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 004d74e3: mov eax, dword ptr [0x9acedc] */ r_eax = R32((u32)(0x9acedcu));
    /* 004d74e8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d74eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d74ed: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d74ef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d74f1: mov eax, dword ptr [edx*8 + 0x9ace68] */ r_eax = R32((u32)(r_edx*8+0x9ace68u));
    /* 004d74f8: je 0x4d760a */ if (fZ) goto L_004d760a;
L_004d74fe:; BB(0x004d74fe);
    /* 004d74fe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d7502: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d7504: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004d7508: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 004d750b: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d7510: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d7512: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004d7515: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004d7518: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d751d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d7522u); f_0082d990();
    /* 004d7522: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004d7525: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7527: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d752cu); f_0082d8bc();
    /* 004d752c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d752f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7530: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004d7534: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7536: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d753bu); f_00830aa0();
    /* 004d753b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d7540: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d7545u); f_0082eb80();
    /* 004d7545: mov eax, dword ptr [0x9acedc] */ r_eax = R32((u32)(0x9acedcu));
    /* 004d754a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004d754e: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004d7551: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004d7554: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004d7557: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004d755a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d755c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d755e: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004d7561: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004d7564: fadd dword ptr [ecx*8 + 0x9ace70] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0x9ace70u));
    /* 004d756b: fst dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0));
    /* 004d756e: lea edx, [ebx + 0x48] */ r_edx = (u32)(r_ebx+0x48u);
    /* 004d7571: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004d7573: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004d7576: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 004d757a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004d757f: mov esi, dword ptr [esi + 0x40] */ r_esi = R32((u32)(r_esi+0x40u));
    /* 004d7582: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d7584: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004d7587: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d7589: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004d758c: fstp dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0)); FPOP();
    /* 004d758f: mov dword ptr [ebx + 0x50], esi */ W32((u32)(r_ebx+0x50u), r_esi);
    /* 004d7592: lea eax, [ebx + 0x3c] */ r_eax = (u32)(r_ebx+0x3cu);
    /* 004d7595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7596: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7597: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d759cu); f_0077fffc();
    /* 004d759c: mov esi, eax */ r_esi = r_eax;
    /* 004d759e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d75a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d75a3: je 0x4d760a */ if (fZ) goto L_004d760a;
L_004d75a5:; BB(0x004d75a5);
    /* 004d75a5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004d75a9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004d75ac: fsub dword ptr [ebx + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x48u));
    /* 004d75af: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004d75b2: fsub dword ptr [ebx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x4cu));
    /* 004d75b5: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 004d75b8: fsub dword ptr [ebx + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x50u));
    /* 004d75bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d75bd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d75c1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d75c5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004d75c9: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d75ceu); f_0082def4();
    /* 004d75ce: fcomp dword ptr [0x9097a4] */ fx_compare(ST(0), R_F32((u32)(0x9097a4u))); FPOP();
    /* 004d75d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d75d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d75d7: je 0x4d75e4 */ if (fZ) goto L_004d75e4;
L_004d75d9:; BB(0x004d75d9);
    /* 004d75d9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004d75dd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d75e2u); f_0082df08();
    /* 004d75e2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d75e4:; BB(0x004d75e4);
    /* 004d75e4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d75e7: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004d75e9: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 004d75ed: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004d75f0: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d75f3: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004d75f6: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 004d75fa: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004d75fd: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 004d7600: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004d7603: fsub dword ptr [esp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x14u));
    /* 004d7607: fstp dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0)); FPOP();
L_004d760a:; BB(0x004d760a);
    /* 004d760a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d760d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d760e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d760f: ret 4 */ FN_RET(0x004d74d8); r_esp += 8; return;
}

void f_004d7591(void)
{
    FN_ENTER(0x004d7591);
    /* 004d7591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7592: lea eax, [ebx + 0x3c] */ r_eax = (u32)(r_ebx+0x3cu);
    /* 004d7595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7596: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7597: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d759cu); f_0077fffc();
    /* 004d759c: mov esi, eax */ r_esi = r_eax;
    /* 004d759e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d75a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d75a3: je 0x4d760a */ if (fZ) goto L_004d760a;
L_004d75a5:; BB(0x004d75a5);
    /* 004d75a5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004d75a9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004d75ac: fsub dword ptr [ebx + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x48u));
    /* 004d75af: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004d75b2: fsub dword ptr [ebx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x4cu));
    /* 004d75b5: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 004d75b8: fsub dword ptr [ebx + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x50u));
    /* 004d75bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d75bd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d75c1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d75c5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004d75c9: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d75ceu); f_0082def4();
    /* 004d75ce: fcomp dword ptr [0x9097a4] */ fx_compare(ST(0), R_F32((u32)(0x9097a4u))); FPOP();
    /* 004d75d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d75d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d75d7: je 0x4d75e4 */ if (fZ) goto L_004d75e4;
L_004d75d9:; BB(0x004d75d9);
    /* 004d75d9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004d75dd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d75e2u); f_0082df08();
    /* 004d75e2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d75e4:; BB(0x004d75e4);
    /* 004d75e4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d75e7: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004d75e9: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 004d75ed: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004d75f0: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d75f3: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004d75f6: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 004d75fa: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004d75fd: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 004d7600: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004d7603: fsub dword ptr [esp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x14u));
    /* 004d7607: fstp dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0)); FPOP();
L_004d760a:; BB(0x004d760a);
    /* 004d760a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d760d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d760e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d760f: ret 4 */ FN_RET(0x004d7591); r_esp += 8; return;
}

void f_004d7614(void) /* sub_4D7614 */
{
    FN_ENTER(0x004d7614);
    /* 004d7614: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d7615: mov edi, ecx */ r_edi = r_ecx;
    /* 004d7617: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004d761b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d761d: je 0x4d7691 */ if (fZ) goto L_004d7691;
L_004d761f:; BB(0x004d761f);
    /* 004d761f: mov ecx, dword ptr [0x9acedc] */ r_ecx = R32((u32)(0x9acedcu));
    /* 004d7625: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004d7628: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d762b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d762d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d762f: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004d7632: mov dword ptr [edi + 0x48], ecx */ W32((u32)(r_edi+0x48u), r_ecx);
    /* 004d7635: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 004d7638: fadd dword ptr [eax*8 + 0x9ace70] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x9ace70u));
    /* 004d763f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004d7643: fst dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0));
    /* 004d7646: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004d764b: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004d764e: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 004d7651: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 004d7654: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d7656: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 004d7658: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004d765b: lea edx, [edi + 0x48] */ r_edx = (u32)(r_edi+0x48u);
    /* 004d765e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004d7661: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d7663: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004d7666: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 004d7669: lea eax, [edi + 0x3c] */ r_eax = (u32)(r_edi+0x3cu);
    /* 004d766c: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 004d766f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7670: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7671: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d7676u); f_0077fffc();
    /* 004d7676: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7679: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d767b: je 0x4d7691 */ if (fZ) goto L_004d7691;
L_004d767d:; BB(0x004d767d);
    /* 004d767d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004d7680: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d7682: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004d7685: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004d7688: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 004d768b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004d768e: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
L_004d7691:; BB(0x004d7691);
    /* 004d7691: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d7692: ret 8 */ FN_RET(0x004d7614); r_esp += 12; return;
}

void f_004d7698(void) /* sub_4D7698 */
{
    FN_ENTER(0x004d7698);
    /* 004d7698: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d7699: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d769a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d769b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d769d: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 004d76a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d76a2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d76a7u); f_0068d5a8();
    /* 004d76a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d76a8: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004d76ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d76ad: je 0x4d7972 */ if (fZ) goto L_004d7972;
L_004d76b3:; BB(0x004d76b3);
    /* 004d76b3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d76b9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d76beu); f_0068d5a8();
    /* 004d76be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d76bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d76c1: je 0x4d7771 */ if (fZ) goto L_004d7771;
L_004d76c7:; BB(0x004d76c7);
    /* 004d76c7: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 004d76ca: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 004d76d0: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d76d6: jne 0x4d773b */ if (!fZ) goto L_004d773b;
L_004d76d8:; BB(0x004d76d8);
    /* 004d76d8: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004d76de: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 004d76e2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d76e4: je 0x4d7771 */ if (fZ) goto L_004d7771;
L_004d76ea:; BB(0x004d76ea);
    /* 004d76ea: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d76ec: je 0x4d7771 */ if (fZ) goto L_004d7771;
L_004d76f2:; BB(0x004d76f2);
    /* 004d76f2: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 004d76f8: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d76fd: je 0x4d7706 */ if (fZ) goto L_004d7706;
L_004d76ff:; BB(0x004d76ff);
    /* 004d76ff: mov eax, 1 */ r_eax = 0x1u;
    /* 004d7704: jmp 0x4d7708 */ goto L_004d7708;
L_004d7706:; BB(0x004d7706);
    /* 004d7706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d7708:; BB(0x004d7708);
    /* 004d7708: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d770a: je 0x4d7771 */ if (fZ) goto L_004d7771;
L_004d770c:; BB(0x004d770c);
    /* 004d770c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d770d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7712u); f_0068d5a8();
    /* 004d7712: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7715: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x4d771au); f_004d2fb4();
    /* 004d771a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d771d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004d771f:; BB(0x004d771f);
    /* 004d771f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7720: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7725u); f_0068d5a8();
    /* 004d7725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d7726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7728: je 0x4d7731 */ if (fZ) goto L_004d7731;
L_004d772a:; BB(0x004d772a);
    /* 004d772a: mov ecx, eax */ r_ecx = r_eax;
    /* 004d772c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x4d7731u); f_0069357c();
L_004d7731:; BB(0x004d7731);
    /* 004d7731: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d7734: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d7737: jl 0x4d771f */ if ((fS!=fO)) goto L_004d771f;
L_004d7739:; BB(0x004d7739);
    /* 004d7739: jmp 0x4d7771 */ goto L_004d7771;
L_004d773b:; BB(0x004d773b);
    /* 004d773b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7741: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7746u); f_0068d5a8();
    /* 004d7746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7749: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x4d774eu); f_004d2fb4();
    /* 004d774e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7751: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004d7753:; BB(0x004d7753);
    /* 004d7753: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7754: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7759u); f_0068d5a8();
    /* 004d7759: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d775a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d775c: je 0x4d7765 */ if (fZ) goto L_004d7765;
L_004d775e:; BB(0x004d775e);
    /* 004d775e: mov ecx, eax */ r_ecx = r_eax;
    /* 004d7760: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x4d7765u); f_0069357c();
L_004d7765:; BB(0x004d7765);
    /* 004d7765: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d7768: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d776b: jl 0x4d7753 */ if ((fS!=fO)) goto L_004d7753;
L_004d776d:; BB(0x004d776d);
    /* 004d776d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d776e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d776f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d7770: ret  */ FN_RET(0x004d7698); r_esp += 4; return;
L_004d7771:; BB(0x004d7771);
    /* 004d7771: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 004d7777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7779: je 0x4d779f */ if (fZ) goto L_004d779f;
L_004d777b:; BB(0x004d777b);
    /* 004d777b: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
    /* 004d7785: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 004d778a: push 0x22d8 */ { u32 v = 0x22d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d778f: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7792: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4d7797u); f_007a8c74();
    /* 004d7797: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d779a: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 004d779d: jmp 0x4d77da */ goto L_004d77da;
L_004d779f:; BB(0x004d779f);
    /* 004d779f: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x4d77a4u); f_00807e10();
    /* 004d77a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d77a6: je 0x4d77c2 */ if (fZ) goto L_004d77c2;
L_004d77a8:; BB(0x004d77a8);
    /* 004d77a8: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 004d77ad: push 0x36c1 */ { u32 v = 0x36c1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d77b2: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d77b5: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4d77bau); f_007a8c74();
    /* 004d77ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d77bd: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 004d77c0: jmp 0x4d77da */ goto L_004d77da;
L_004d77c2:; BB(0x004d77c2);
    /* 004d77c2: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 004d77c7: push 0x36c1 */ { u32 v = 0x36c1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d77cc: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d77cf: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4d77d4u); f_007a8c74();
    /* 004d77d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d77d7: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
L_004d77da:; BB(0x004d77da);
    /* 004d77da: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x4d77dfu); f_00807e10();
    /* 004d77df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d77e1: je 0x4d77ed */ if (fZ) goto L_004d77ed;
L_004d77e3:; BB(0x004d77e3);
    /* 004d77e3: mov dword ptr [ebx + 0xe0], 0x41a370a4 */ W32((u32)(r_ebx+0xe0u), 0x41a370a4u);
L_004d77ed:; BB(0x004d77ed);
    /* 004d77ed: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004d77ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d77f1: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4d77f4u); call_ind(t); }
    /* 004d77f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d77f6: call 0x4d7998 */ r_esp -= 4; W32(r_esp, 0x4d77fbu); f_004d7998();
    /* 004d77fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d77fd: jne 0x4d795a */ if (!fZ) goto L_004d795a;
L_004d7803:; BB(0x004d7803);
    /* 004d7803: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004d7806: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7808: jne 0x4d7849 */ if (!fZ) goto L_004d7849;
L_004d780a:; BB(0x004d780a);
    /* 004d780a: mov eax, dword ptr [0x9acedc] */ r_eax = R32((u32)(0x9acedcu));
    /* 004d780f: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 004d7812: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d7814: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004d7816: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d7819: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d781c: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004d781f: fld dword ptr [ebp*8 + 0x9ace70] */ FPUSH(R_F32((u32)(r_ebp*8+0x9ace70u)));
    /* 004d7826: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d7829: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 004d782c: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 004d782f: mov dword ptr [ebx + 0x50], esi */ W32((u32)(r_ebx+0x50u), r_esi);
    /* 004d7832: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 004d7835: mov dword ptr [ebx + 0x24], 1 */ W32((u32)(r_ebx+0x24u), 0x1u);
    /* 004d783c: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7841: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004d7844: jmp 0x4d794c */ goto L_004d794c;
L_004d7849:; BB(0x004d7849);
    /* 004d7849: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d784c: jne 0x4d794c */ if (!fZ) goto L_004d794c;
L_004d7852:; BB(0x004d7852);
    /* 004d7852: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x4d7857u); f_007bb6d0();
    /* 004d7857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7858: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x4d785du); f_004d30cc();
    /* 004d785d: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 004d7860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7861: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7866u); f_0068d5a8();
    /* 004d7866: mov esi, eax */ r_esi = r_eax;
    /* 004d7868: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d786b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d786d: je 0x4d787a */ if (fZ) goto L_004d787a;
L_004d786f:; BB(0x004d786f);
    /* 004d786f: mov ecx, esi */ r_ecx = r_esi;
    /* 004d7871: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x4d7876u); f_00689410();
    /* 004d7876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7878: je 0x4d7891 */ if (fZ) goto L_004d7891;
L_004d787a:; BB(0x004d787a);
    /* 004d787a: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 004d7880: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7882: je 0x4d796d */ if (fZ) goto L_004d796d;
L_004d7888:; BB(0x004d7888);
    /* 004d7888: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 004d788c: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d788f: je 0x4d7904 */ if (fZ) goto L_004d7904;
L_004d7891:; BB(0x004d7891);
    /* 004d7891: mov ecx, esi */ r_ecx = r_esi;
    /* 004d7893: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x4d7898u); f_00694780();
    /* 004d7898: mov esi, eax */ r_esi = r_eax;
    /* 004d789a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d789c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d789d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x4d78a2u); f_007be19c();
    /* 004d78a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d78a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d78a7: je 0x4d78b1 */ if (fZ) goto L_004d78b1;
L_004d78a9:; BB(0x004d78a9);
    /* 004d78a9: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
    /* 004d78af: jmp 0x4d78b7 */ goto L_004d78b7;
L_004d78b1:; BB(0x004d78b1);
    /* 004d78b1: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
L_004d78b7:; BB(0x004d78b7);
    /* 004d78b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d78b8: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 004d78bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d78bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d78bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d78c1: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 004d78c8: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d78cdu); f_007c1160();
    /* 004d78cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d78cf: je 0x4d78db */ if (fZ) goto L_004d78db;
L_004d78d1:; BB(0x004d78d1);
    /* 004d78d1: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 004d78d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d78d9: je 0x4d78ea */ if (fZ) goto L_004d78ea;
L_004d78db:; BB(0x004d78db);
    /* 004d78db: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 004d78e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d78e3: jne 0x4d78ea */ if (!fZ) goto L_004d78ea;
L_004d78e5:; BB(0x004d78e5);
    /* 004d78e5: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004d78e8: jmp 0x4d7907 */ goto L_004d7907;
L_004d78ea:; BB(0x004d78ea);
    /* 004d78ea: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004d78ed: mov dword ptr [ebx + 0x104], 0 */ W32((u32)(r_ebx+0x104u), 0x0u);
    /* 004d78f7: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004d78fa: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d78ff: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004d7902: jmp 0x4d7907 */ goto L_004d7907;
L_004d7904:; BB(0x004d7904);
    /* 004d7904: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_004d7907:; BB(0x004d7907);
    /* 004d7907: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004d790a: test eax, 0x100020 */ {  u32 a = r_eax; u32 b = 0x100020u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d790f: je 0x4d791d */ if (fZ) goto L_004d791d;
L_004d7911:; BB(0x004d7911);
    /* 004d7911: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
    /* 004d791b: jmp 0x4d793e */ goto L_004d793e;
L_004d791d:; BB(0x004d791d);
    /* 004d791d: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7922: je 0x4d7937 */ if (fZ) goto L_004d7937;
L_004d7924:; BB(0x004d7924);
    /* 004d7924: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
    /* 004d792e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d7930: call 0x4d7c04 */ r_esp -= 4; W32(r_esp, 0x4d7935u); f_004d7c04();
    /* 004d7935: jmp 0x4d793e */ goto L_004d793e;
L_004d7937:; BB(0x004d7937);
    /* 004d7937: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d7939: call 0x4d7a1c */ r_esp -= 4; W32(r_esp, 0x4d793eu); f_004d7a1c();
L_004d793e:; BB(0x004d793e);
    /* 004d793e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d7940: call 0x4d7ce4 */ r_esp -= 4; W32(r_esp, 0x4d7945u); f_004d7ce4();
    /* 004d7945: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d7947: call 0x4d7d40 */ r_esp -= 4; W32(r_esp, 0x4d794cu); f_004d7d40();
L_004d794c:; BB(0x004d794c);
    /* 004d794c: mov dword ptr [ebx + 0xfc], 0 */ W32((u32)(r_ebx+0xfcu), 0x0u);
    /* 004d7956: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d7957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d7959: ret  */ FN_RET(0x004d7698); r_esp += 4; return;
L_004d795a:; BB(0x004d795a);
    /* 004d795a: call 0x4d7e4c */ r_esp -= 4; W32(r_esp, 0x4d795fu); f_004d7e4c();
    /* 004d795f: mov dword ptr [ebx + 0xfc], 0 */ W32((u32)(r_ebx+0xfcu), 0x0u);
    /* 004d7969: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d796a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d796b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d796c: ret  */ FN_RET(0x004d7698); r_esp += 4; return;
L_004d796d:; BB(0x004d796d);
    /* 004d796d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004d7970: jmp 0x4d7907 */ goto L_004d7907;
L_004d7972:; BB(0x004d7972);
    /* 004d7972: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7978: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d797du); f_0068d5a8();
    /* 004d797d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d797e: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004d7981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7983: je 0x4d798d */ if (fZ) goto L_004d798d;
L_004d7985:; BB(0x004d7985);
    /* 004d7985: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 004d7989: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
L_004d798d:; BB(0x004d798d);
    /* 004d798d: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 004d7994: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d7995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d7997: ret  */ FN_RET(0x004d7698); r_esp += 4; return;
}

void f_004d7998(void) /* sub_4D7998 */
{
    FN_ENTER(0x004d7998);
    /* 004d7998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d7999: mov edi, ecx */ r_edi = r_ecx;
    /* 004d799b: movzx eax, byte ptr [0xa48b74] */ r_eax = (u32)R8((u32)(0xa48b74u));
    /* 004d79a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d79a4: je 0x4d79ec */ if (fZ) goto L_004d79ec;
L_004d79a6:; BB(0x004d79a6);
    /* 004d79a6: mov edx, dword ptr [0xa48b68] */ r_edx = R32((u32)(0xa48b68u));
    /* 004d79ac: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 004d79b3: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004d79b6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d79b8: mov edx, dword ptr [0xa48b6c] */ r_edx = R32((u32)(0xa48b6cu));
    /* 004d79be: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 004d79c1: mov edx, dword ptr [0xa48b70] */ r_edx = R32((u32)(0xa48b70u));
    /* 004d79c7: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 004d79ca: jne 0x4d79f0 */ if (!fZ) goto L_004d79f0;
L_004d79cc:; BB(0x004d79cc);
    /* 004d79cc: mov eax, dword ptr [0xa48b5c] */ r_eax = R32((u32)(0xa48b5cu));
    /* 004d79d1: mov edx, dword ptr [0xa48b60] */ r_edx = R32((u32)(0xa48b60u));
    /* 004d79d7: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004d79da: mov eax, dword ptr [0xa48b64] */ r_eax = R32((u32)(0xa48b64u));
    /* 004d79df: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 004d79e2: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
L_004d79e5:; BB(0x004d79e5);
    /* 004d79e5: mov eax, 1 */ r_eax = 0x1u;
    /* 004d79ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d79eb: ret  */ FN_RET(0x004d7998); r_esp += 4; return;
L_004d79ec:; BB(0x004d79ec);
    /* 004d79ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d79ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d79ef: ret  */ FN_RET(0x004d7998); r_esp += 4; return;
L_004d79f0:; BB(0x004d79f0);
    /* 004d79f0: movzx eax, word ptr [0x9aced8] */ r_eax = (u32)R16((u32)(0x9aced8u));
    /* 004d79f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d79f8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d79fdu); f_0068d5a8();
    /* 004d79fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d79fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7a00: je 0x4d79e5 */ if (fZ) goto L_004d79e5;
L_004d7a02:; BB(0x004d7a02);
    /* 004d7a02: fld dword ptr [0x90979c] */ FPUSH(R_F32((u32)(0x90979cu)));
    /* 004d7a08: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d7a0b: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004d7a0e: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d7a11: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 004d7a14: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004d7a17: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004d7a1a: jmp 0x4d79e5 */ goto L_004d79e5;
}

void f_004d7a1c(void) /* sub_4D7A1C */
{
    FN_ENTER(0x004d7a1c);
    /* 004d7a1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d7a1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7a1e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d7a21: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d7a23: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 004d7a26: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004d7a29: mov eax, edi */ r_eax = r_edi;
    /* 004d7a2b: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004d7a2e: je 0x4d7bfd */ if (fZ) goto L_004d7bfd;
L_004d7a34:; BB(0x004d7a34);
    /* 004d7a34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7a36: je 0x4d7bfd */ if (fZ) goto L_004d7bfd;
L_004d7a3c:; BB(0x004d7a3c);
    /* 004d7a3c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d7a3f: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004d7a42: fsub dword ptr [edi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x44u));
    /* 004d7a45: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d7a48: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004d7a4b: fsub dword ptr [edi + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x48u));
    /* 004d7a4e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d7a52: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004d7a55: fsub dword ptr [edi + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4cu));
    /* 004d7a58: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d7a5c: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d7a61u); f_0082def4();
    /* 004d7a61: fcomp dword ptr [0x909798] */ fx_compare(ST(0), R_F32((u32)(0x909798u))); FPOP();
    /* 004d7a67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d7a69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d7a6a: jae 0x4d7a70 */ if (!fC) goto L_004d7a70;
L_004d7a6c:; BB(0x004d7a6c);
    /* 004d7a6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004d7a6e: jmp 0x4d7a75 */ goto L_004d7a75;
L_004d7a70:; BB(0x004d7a70);
    /* 004d7a70: mov edi, 1 */ r_edi = 0x1u;
L_004d7a75:; BB(0x004d7a75);
    /* 004d7a75: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 004d7a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7a7d: je 0x4d7bb1 */ if (fZ) goto L_004d7bb1;
L_004d7a83:; BB(0x004d7a83);
    /* 004d7a83: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7a86: jne 0x4d7b5f */ if (!fZ) goto L_004d7b5f;
L_004d7a8c:; BB(0x004d7a8c);
    /* 004d7a8c: mov eax, dword ptr [ebp + 0xfc] */ r_eax = R32((u32)(r_ebp+0xfcu));
    /* 004d7a92: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 004d7a9c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d7a9e: je 0x4d7af6 */ if (fZ) goto L_004d7af6;
L_004d7aa0:; BB(0x004d7aa0);
    /* 004d7aa0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d7aa2: je 0x4d7ac9 */ if (fZ) goto L_004d7ac9;
L_004d7aa4:; BB(0x004d7aa4);
    /* 004d7aa4: mov dword ptr [ebp + 0x58], 0x3d4ccccd */ W32((u32)(r_ebp+0x58u), 0x3d4ccccdu);
    /* 004d7aab: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d7ab0: push dword ptr [ebp + 0x10c] */ { u32 v = R32((u32)(r_ebp+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7ab6: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7ab9: call 0x4d6370 */ r_esp -= 4; W32(r_esp, 0x4d7abeu); f_004d6370();
    /* 004d7abe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7ac1: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 004d7ac4: jmp 0x4d7b47 */ goto L_004d7b47;
L_004d7ac9:; BB(0x004d7ac9);
    /* 004d7ac9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d7acc: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004d7acf: mov dword ptr [ebp + 0x58], 0x3f2b851f */ W32((u32)(r_ebp+0x58u), 0x3f2b851fu);
    /* 004d7ad6: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004d7ad9: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d7adf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7ae0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d7ae2: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x4d7ae5u); call_ind(t); }
    /* 004d7ae5: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d7ae8: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004d7aeb: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d7af1: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 004d7af4: jmp 0x4d7b47 */ goto L_004d7b47;
L_004d7af6:; BB(0x004d7af6);
    /* 004d7af6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d7af8: je 0x4d7b01 */ if (fZ) goto L_004d7b01;
L_004d7afa:; BB(0x004d7afa);
    /* 004d7afa: mov edx, 2 */ r_edx = 0x2u;
    /* 004d7aff: jmp 0x4d7b06 */ goto L_004d7b06;
L_004d7b01:; BB(0x004d7b01);
    /* 004d7b01: mov edx, 5 */ r_edx = 0x5u;
L_004d7b06:; BB(0x004d7b06);
    /* 004d7b06: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d7b09: mov ecx, dword ptr [eax + 0x45c] */ r_ecx = R32((u32)(r_eax+0x45cu));
    /* 004d7b0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7b11: je 0x4d7b32 */ if (fZ) goto L_004d7b32;
L_004d7b13:; BB(0x004d7b13);
    /* 004d7b13: movzx eax, word ptr [ecx + 0x10a4] */ r_eax = (u32)R16((u32)(r_ecx+0x10a4u));
    /* 004d7b1a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7b1f: je 0x4d7b32 */ if (fZ) goto L_004d7b32;
L_004d7b21:; BB(0x004d7b21);
    /* 004d7b21: fld dword ptr [ecx + 0x10a8] */ FPUSH(R_F32((u32)(r_ecx+0x10a8u)));
    /* 004d7b27: fcomp dword ptr [0x909794] */ fx_compare(ST(0), R_F32((u32)(0x909794u))); FPOP();
    /* 004d7b2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d7b2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d7b30: jbe 0x4d7b47 */ if ((fC||fZ)) goto L_004d7b47;
L_004d7b32:; BB(0x004d7b32);
    /* 004d7b32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7b33: push dword ptr [ebp + 0x10c] */ { u32 v = R32((u32)(r_ebp+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7b39: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7b3c: call 0x4d6370 */ r_esp -= 4; W32(r_esp, 0x4d7b41u); f_004d6370();
    /* 004d7b41: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7b44: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_004d7b47:; BB(0x004d7b47);
    /* 004d7b47: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7b49: jne 0x4d7bfd */ if (!fZ) goto L_004d7bfd;
L_004d7b4f:; BB(0x004d7b4f);
    /* 004d7b4f: mov dword ptr [ebp + 0xf8], 0 */ W32((u32)(r_ebp+0xf8u), 0x0u);
    /* 004d7b59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7b5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7b5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d7b5e: ret  */ FN_RET(0x004d7a1c); r_esp += 4; return;
L_004d7b5f:; BB(0x004d7b5f);
    /* 004d7b5f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7b62: jne 0x4d7bfd */ if (!fZ) goto L_004d7bfd;
L_004d7b68:; BB(0x004d7b68);
    /* 004d7b68: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d7b6b: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004d7b6e: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004d7b71: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d7b77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d7b79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7b7a: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x4d7b7du); call_ind(t); }
    /* 004d7b7d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7b7f: push dword ptr [ebp + 0x10c] */ { u32 v = R32((u32)(r_ebp+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7b85: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7b88: call 0x4d6370 */ r_esp -= 4; W32(r_esp, 0x4d7b8du); f_004d6370();
    /* 004d7b8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7b90: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 004d7b93: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7b95: je 0x4d7bfd */ if (fZ) goto L_004d7bfd;
L_004d7b97:; BB(0x004d7b97);
    /* 004d7b97: mov dword ptr [ebp + 0xf8], 1 */ W32((u32)(r_ebp+0xf8u), 0x1u);
    /* 004d7ba1: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 004d7bab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7bae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7baf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d7bb0: ret  */ FN_RET(0x004d7a1c); r_esp += 4; return;
L_004d7bb1:; BB(0x004d7bb1);
    /* 004d7bb1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7bb3: je 0x4d7bbf */ if (fZ) goto L_004d7bbf;
L_004d7bb5:; BB(0x004d7bb5);
    /* 004d7bb5: mov dword ptr [ebp + 0xf8], 1 */ W32((u32)(r_ebp+0xf8u), 0x1u);
L_004d7bbf:; BB(0x004d7bbf);
    /* 004d7bbf: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004d7bc2: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004d7bc5: test eax, 0x100020 */ {  u32 a = r_eax; u32 b = 0x100020u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7bca: jne 0x4d7be0 */ if (!fZ) goto L_004d7be0;
L_004d7bcc:; BB(0x004d7bcc);
    /* 004d7bcc: movsx eax, word ptr [edx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32eu));
    /* 004d7bd3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7bd6: je 0x4d7be0 */ if (fZ) goto L_004d7be0;
L_004d7bd8:; BB(0x004d7bd8);
    /* 004d7bd8: mov eax, dword ptr [ebp + 0xf4] */ r_eax = R32((u32)(r_ebp+0xf4u));
    /* 004d7bde: jmp 0x4d7bec */ goto L_004d7bec;
L_004d7be0:; BB(0x004d7be0);
    /* 004d7be0: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 004d7bea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d7bec:; BB(0x004d7bec);
    /* 004d7bec: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d7bf1: jle 0x4d7bfd */ if ((fZ||fS!=fO)) goto L_004d7bfd;
L_004d7bf3:; BB(0x004d7bf3);
    /* 004d7bf3: mov dword ptr [ebp + 0xf8], 2 */ W32((u32)(r_ebp+0xf8u), 0x2u);
L_004d7bfd:; BB(0x004d7bfd);
    /* 004d7bfd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d7c02: ret  */ FN_RET(0x004d7a1c); r_esp += 4; return;
}

void f_004d7c04(void) /* sub_4D7C04 */
{
    FN_ENTER(0x004d7c04);
    /* 004d7c04: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d7c07: mov eax, dword ptr [0xaae96c] */ r_eax = R32((u32)(0xaae96cu));
    /* 004d7c0c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004d7c0f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d7c11: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d7c14: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d7c16: lea edx, [edx + edx + 0xaae75c] */ r_edx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004d7c1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7c1f: je 0x4d7cb1 */ if (fZ) goto L_004d7cb1;
L_004d7c25:; BB(0x004d7c25);
    /* 004d7c25: fld dword ptr [eax*8 + 0xaae780] */ FPUSH(R_F32((u32)(r_eax*8+0xaae780u)));
    /* 004d7c2c: movsx edx, word ptr [eax*8 + 0xaae770] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xaae770u));
    /* 004d7c34: fcom dword ptr [0x909788] */ fx_compare(ST(0), R_F32((u32)(0x909788u))); 
    /* 004d7c3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d7c3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d7c3d: jbe 0x4d7cdd */ if ((fC||fZ)) goto L_004d7cdd;
L_004d7c43:; BB(0x004d7c43);
    /* 004d7c43: fld dword ptr [0x909784] */ FPUSH(R_F32((u32)(0x909784u)));
    /* 004d7c49: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d7c4b: fld dword ptr [0x909780] */ FPUSH(R_F32((u32)(0x909780u)));
    /* 004d7c51: fld dword ptr [0x90977c] */ FPUSH(R_F32((u32)(0x90977cu)));
    /* 004d7c57: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d7c59: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d7c5c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d7c60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d7c65: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d7c69: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d7c6d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d7c71: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d7c74: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004d7c79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d7c7b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d7c7f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d7c83: jle 0x4d7cb5 */ if ((fZ||fS!=fO)) goto L_004d7cb5;
L_004d7c85:; BB(0x004d7c85);
    /* 004d7c85: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d7c87: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d7c89: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d7c8c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d7c90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d7c95: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d7c99: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d7c9d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d7ca1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d7ca4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004d7ca8: add eax, dword ptr [ecx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x30u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004d7cab:; BB(0x004d7cab);
    /* 004d7cab: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004d7cae: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_004d7cb1:; BB(0x004d7cb1);
    /* 004d7cb1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7cb4: ret  */ FN_RET(0x004d7c04); r_esp += 4; return;
L_004d7cb5:; BB(0x004d7cb5);
    /* 004d7cb5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d7cb7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d7cb9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d7cbc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d7cc0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d7cc5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d7cc9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d7ccd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d7cd1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d7cd4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004d7cd7: sub eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d7cdb: jmp 0x4d7cab */ goto L_004d7cab;
L_004d7cdd:; BB(0x004d7cdd);
    /* 004d7cdd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d7cdf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7ce2: ret  */ FN_RET(0x004d7c04); r_esp += 4; return;
}

void f_004d7ce4(void) /* sub_4D7CE4 */
{
    FN_ENTER(0x004d7ce4);
    /* 004d7ce4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7ce5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d7ce8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d7cea: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d7cef: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d7cf4u); f_0082d990();
    /* 004d7cf4: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 004d7cf7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7cf9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d7cfeu); f_0082d8bc();
    /* 004d7cfe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d7d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7d02: lea edx, [ebp + 0xdc] */ r_edx = (u32)(r_ebp+0xdcu);
    /* 004d7d08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7d0a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d7d0fu); f_00830aa0();
    /* 004d7d0f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d7d14: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d7d19u); f_0082eb80();
    /* 004d7d19: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d7d1c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004d7d20: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d7d24: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d7d27: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d7d29: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004d7d2c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004d7d2f: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d7d32: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004d7d35: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004d7d38: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 004d7d3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7d3f: ret  */ FN_RET(0x004d7ce4); r_esp += 4; return;
}

void f_004d7d40(void) /* sub_4D7D40 */
{
    FN_ENTER(0x004d7d40);
    /* 004d7d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7d41: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d7d44: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d7d46: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004d7d49: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004d7d4c: fsub dword ptr [edx + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x44u));
    /* 004d7d4f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d7d52: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d7d55: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 004d7d58: fsub dword ptr [edx + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x48u));
    /* 004d7d5b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d7d5f: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004d7d62: fsub dword ptr [edx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4cu));
    /* 004d7d65: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d7d69: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d7d6eu); f_0082def4();
    /* 004d7d6e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d7d70: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d7d75: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d7d7au); f_0082d990();
    /* 004d7d7a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d7d7d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004d7d80: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d7d86: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7d88: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d7d8du); f_0082d8bc();
    /* 004d7d8d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d7d91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7d92: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 004d7d98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7d9a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d7d9fu); f_00830aa0();
    /* 004d7d9f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d7da4: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d7da9u); f_0082eb80();
    /* 004d7da9: fld dword ptr [0x909750] */ FPUSH(R_F32((u32)(0x909750u)));
    /* 004d7daf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d7db2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d7db4: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004d7db8: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d7dbb: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004d7dbe: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004d7dc2: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d7dc5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d7dc9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004d7dcb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d7dcd: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 004d7dd1: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004d7dd4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d7dd6: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004d7dd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d7ddb: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004d7dde: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 004d7de1: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x4d7de6u); f_00807e10();
    /* 004d7de6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7de8: je 0x4d7e38 */ if (fZ) goto L_004d7e38;
L_004d7dea:; BB(0x004d7dea);
    /* 004d7dea: mov eax, dword ptr [ebp + 0x100] */ r_eax = R32((u32)(r_ebp+0x100u));
    /* 004d7df0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7df2: je 0x4d7e17 */ if (fZ) goto L_004d7e17;
L_004d7df4:; BB(0x004d7df4);
    /* 004d7df4: mov dword ptr [esp + 0x18], 0xc0400000 */ W32((u32)(r_esp+0x18u), 0xc0400000u);
    /* 004d7dfc: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d7e00: lea edx, [ebp + 0x108] */ r_edx = (u32)(r_ebp+0x108u);
    /* 004d7e06: push 0x3fb33333 */ { u32 v = 0x3fb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e0d: call 0x4d64d8 */ r_esp -= 4; W32(r_esp, 0x4d7e12u); f_004d64d8();
    /* 004d7e12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7e15: jmp 0x4d7e38 */ goto L_004d7e38;
L_004d7e17:; BB(0x004d7e17);
    /* 004d7e17: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004d7e1f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d7e23: lea edx, [ebp + 0x108] */ r_edx = (u32)(r_ebp+0x108u);
    /* 004d7e29: push 0x3fb33333 */ { u32 v = 0x3fb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e30: call 0x4d64d8 */ r_esp -= 4; W32(r_esp, 0x4d7e35u); f_004d64d8();
    /* 004d7e35: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d7e38:; BB(0x004d7e38);
    /* 004d7e38: fld dword ptr [ebp + 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0x4cu)));
    /* 004d7e3b: fadd dword ptr [ebp + 0x108] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x108u));
    /* 004d7e41: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004d7e44: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d7e47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7e48: ret  */ FN_RET(0x004d7d40); r_esp += 4; return;
}

void f_004d7e4c(void) /* sub_4D7E4C */
{
    FN_ENTER(0x004d7e4c);
    /* 004d7e4c: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d7e53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7e55: jne 0x4d7e62 */ if (!fZ) goto L_004d7e62;
L_004d7e57:; BB(0x004d7e57);
    /* 004d7e57: mov eax, dword ptr [eax*4 + 0xa48a00] */ r_eax = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d7e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7e60: jne 0x4d7e63 */ if (!fZ) goto L_004d7e63;
L_004d7e62:; BB(0x004d7e62);
    /* 004d7e62: ret  */ FN_RET(0x004d7e4c); r_esp += 4; return;
L_004d7e63:; BB(0x004d7e63);
    /* 004d7e63: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 004d7e6d: ret  */ FN_RET(0x004d7e4c); r_esp += 4; return;
}

void f_004d7e70(void) /* sub_4D7E70 */
{
    FN_ENTER(0x004d7e70);
    /* 004d7e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e71: mov ebp, esp */ r_ebp = r_esp;
    /* 004d7e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e75: push 0x8d20e2 */ { u32 v = 0x8d20e2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d7e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d7e88: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d7e8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d7e8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d7e91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d7e94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d7e97: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 004d7e9c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004d7ea3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d7ea8u); f_005caba4();
    /* 004d7ea8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d7eab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7eae: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004d7eb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7eb3: je 0x4d809c */ if (fZ) goto L_004d809c;
L_004d7eb9:; BB(0x004d7eb9);
    /* 004d7eb9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004d7ec0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d7ec7: mov ecx, eax */ r_ecx = r_eax;
    /* 004d7ec9: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004d7ecc: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d7ed1u); f_004d1f68();
    /* 004d7ed1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004d7ed8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d7edb: mov dword ptr [edx], 0xafca90 */ W32((u32)(r_edx), 0xafca90u);
    /* 004d7ee1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7ee7: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 004d7ef1: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
    /* 004d7efb: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 004d7f00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d7f02: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
    /* 004d7f0c: mov byte ptr [0xa48b74], al */ W8((u32)(0xa48b74u), (u8)r_eax);
    /* 004d7f11: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 004d7f17: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 004d7f21: mov word ptr [0x9aced8], si */ W16((u32)(0x9aced8u), (u16)r_esi);
    /* 004d7f28: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 004d7f2e: mov dword ptr [edx + 0xec], 0 */ W32((u32)(r_edx+0xecu), 0x0u);
    /* 004d7f38: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004d7f3e: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 004d7f48: mov dword ptr [edx + 0x38], 5 */ W32((u32)(r_edx+0x38u), 0x5u);
    /* 004d7f4f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d7f54u); f_0068d5a8();
    /* 004d7f54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d7f55: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d7f58: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004d7f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7f5d: je 0x4d7f67 */ if (fZ) goto L_004d7f67;
L_004d7f5f:; BB(0x004d7f5f);
    /* 004d7f5f: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 004d7f63: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
L_004d7f67:; BB(0x004d7f67);
    /* 004d7f67: mov ecx, edx */ r_ecx = r_edx;
    /* 004d7f69: call 0x4d86f4 */ r_esp -= 4; W32(r_esp, 0x4d7f6eu); f_004d86f4();
    /* 004d7f6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d7f71: mov dword ptr [eax + 0x108], 0 */ W32((u32)(r_eax+0x108u), 0x0u);
    /* 004d7f7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d7f7d: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
    /* 004d7f83: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 004d7f8a: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004d7f90: mov dword ptr [eax + 0x10c], edx */ W32((u32)(r_eax+0x10cu), r_edx);
    /* 004d7f96: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 004d7f9c: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 004d7fa3: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 004d7fa9: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 004d7faf: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 004d7fb5: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 004d7fbc: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 004d7fc3: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 004d7fca: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 004d7fd4: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 004d7fde: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 004d7fe8: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 004d7ff2: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 004d7ffc: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 004d8006: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 004d8010: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 004d801a: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 004d8024: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 004d802e: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 004d8038: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 004d8042: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 004d804c: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 004d8056: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004d8059: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 004d8063: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 004d806d: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 004d8077: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
    /* 004d8081: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_004d808b:; BB(0x004d808b);
    /* 004d808b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d808e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d8091: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d8098: mov esp, ebp */ r_esp = r_ebp;
    /* 004d809a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d809b: ret  */ FN_RET(0x004d7e70); r_esp += 4; return;
L_004d809c:; BB(0x004d809c);
    /* 004d809c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d809e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d80a1: jmp 0x4d808b */ goto L_004d808b;
}

