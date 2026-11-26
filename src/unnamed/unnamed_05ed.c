#include "protos.h"

void f_005ed054(void) /* sub_5ED054 */
{
    FN_ENTER(0x005ed054);
    /* 005ed054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed055: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed056: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ed058: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 005ed05c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed05d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed05f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed063: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ed068u); f_005e959c();
    /* 005ed068: mov dword ptr [ebx], 0xb12180 */ W32((u32)(r_ebx), 0xb12180u);
    /* 005ed06e: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ed072: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ed075: jne 0x5ed083 */ if (!fZ) goto L_005ed083;
L_005ed077:; BB(0x005ed077);
    /* 005ed077: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005ed081: jmp 0x5ed08d */ goto L_005ed08d;
L_005ed083:; BB(0x005ed083);
    /* 005ed083: mov dword ptr [ebx + 0x240], 0x3f800000 */ W32((u32)(r_ebx+0x240u), 0x3f800000u);
L_005ed08d:; BB(0x005ed08d);
    /* 005ed08d: mov eax, ebx */ r_eax = r_ebx;
    /* 005ed08f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ed090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed091: ret 8 */ FN_RET(0x005ed054); r_esp += 12; return;
}

void f_005ed094(void) /* sub_5ED094 */
{
    FN_ENTER(0x005ed094);
    /* 005ed094: mov dword ptr [0xa8ddb0], 0x3f800000 */ W32((u32)(0xa8ddb0u), 0x3f800000u);
    /* 005ed09e: mov dword ptr [0xa8ddb4], 0x41000000 */ W32((u32)(0xa8ddb4u), 0x41000000u);
    /* 005ed0a8: mov dword ptr [0xa8ddb8], 0x3fc00000 */ W32((u32)(0xa8ddb8u), 0x3fc00000u);
    /* 005ed0b2: ret  */ FN_RET(0x005ed094); r_esp += 4; return;
}

void f_005ed0b4(void) /* sub_5ED0B4 */
{
    FN_ENTER(0x005ed0b4);
    /* 005ed0b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed0b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0b9: push 0x8dc37c */ { u32 v = 0x8dc37cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed0cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed0cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed0d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed0d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed0d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed0db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed0de: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ed0e1: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed0e3: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed0e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed0f0: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed0f5u); f_005e61c8();
    /* 005ed0f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed0f8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed0fa: jne 0x5ed10c */ if (!fZ) goto L_005ed10c;
L_005ed0fc:; BB(0x005ed0fc);
    /* 005ed0fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed0ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed106: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed109: ret 4 */ FN_RET(0x005ed0b4); r_esp += 8; return;
L_005ed10c:; BB(0x005ed10c);
    /* 005ed10c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed10f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed110: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed115u); f_005c2f74();
    /* 005ed115: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed116: jmp 0x5ed0fc */ goto L_005ed0fc;
}

void f_005ed118(void) /* sub_5ED118 */
{
    FN_ENTER(0x005ed118);
    /* 005ed118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed119: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed11b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed11d: push 0x8dc3a6 */ { u32 v = 0x8dc3a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed122: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed129: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed130: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed133: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed136: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed139: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed13c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed13f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed142: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed145: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed147: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed14a: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed150: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed157: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed15cu); f_005e61c8();
    /* 005ed15c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed15f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed161: jne 0x5ed173 */ if (!fZ) goto L_005ed173;
L_005ed163:; BB(0x005ed163);
    /* 005ed163: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed166: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed16d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed16f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed170: ret 4 */ FN_RET(0x005ed118); r_esp += 8; return;
L_005ed173:; BB(0x005ed173);
    /* 005ed173: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed177: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed17cu); f_005c2f74();
    /* 005ed17c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed17d: jmp 0x5ed163 */ goto L_005ed163;
}

void f_005ed1d0(void) /* sub_5ED1D0 */
{
    FN_ENTER(0x005ed1d0);
    /* 005ed1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed1d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1d5: push 0x8dc3ea */ { u32 v = 0x8dc3eau; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed1e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed1e8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed1eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed1ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed1f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed1f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed1f7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed1fa: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed1fd: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed1ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed202: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed208: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed20f: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed214u); f_005e61c8();
    /* 005ed214: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed217: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed219: jne 0x5ed22b */ if (!fZ) goto L_005ed22b;
L_005ed21b:; BB(0x005ed21b);
    /* 005ed21b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed21e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed225: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed228: ret 4 */ FN_RET(0x005ed1d0); r_esp += 8; return;
L_005ed22b:; BB(0x005ed22b);
    /* 005ed22b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed22e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed22f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed234u); f_005c2f74();
    /* 005ed234: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed235: jmp 0x5ed21b */ goto L_005ed21b;
}

void f_005ed238(void) /* sub_5ED238 */
{
    FN_ENTER(0x005ed238);
    /* 005ed238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed239: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed23b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed23d: push 0x8dc412 */ { u32 v = 0x8dc412u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed250: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed256: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed259: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed25c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed25f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed262: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed265: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed267: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed26a: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed270: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed277: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed27cu); f_005e61c8();
    /* 005ed27c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed27f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed281: jne 0x5ed293 */ if (!fZ) goto L_005ed293;
L_005ed283:; BB(0x005ed283);
    /* 005ed283: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed286: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed28d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed28f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed290: ret 4 */ FN_RET(0x005ed238); r_esp += 8; return;
L_005ed293:; BB(0x005ed293);
    /* 005ed293: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed297: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed29cu); f_005c2f74();
    /* 005ed29c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed29d: jmp 0x5ed283 */ goto L_005ed283;
}

void f_005ed2a0(void) /* sub_5ED2A0 */
{
    FN_ENTER(0x005ed2a0);
    /* 005ed2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed2a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2a5: push 0x8dc43a */ { u32 v = 0x8dc43au; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed2b8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed2bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed2be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed2c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed2c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed2c7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed2ca: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed2cd: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed2cf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed2d2: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed2d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed2df: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed2e4u); f_005e61c8();
    /* 005ed2e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed2e7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed2e9: jne 0x5ed2fb */ if (!fZ) goto L_005ed2fb;
L_005ed2eb:; BB(0x005ed2eb);
    /* 005ed2eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed2ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed2f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed2f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed2f8: ret 4 */ FN_RET(0x005ed2a0); r_esp += 8; return;
L_005ed2fb:; BB(0x005ed2fb);
    /* 005ed2fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed2fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed304u); f_005c2f74();
    /* 005ed304: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed305: jmp 0x5ed2eb */ goto L_005ed2eb;
}

void f_005ed308(void) /* sub_5ED308 */
{
    FN_ENTER(0x005ed308);
    /* 005ed308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed309: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed30b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed30d: push 0x8dc462 */ { u32 v = 0x8dc462u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed312: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed319: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed320: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed323: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed326: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed329: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed32c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed32f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed332: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed335: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed337: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed33a: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed340: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed347: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed34cu); f_005e61c8();
    /* 005ed34c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed34f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed351: jne 0x5ed363 */ if (!fZ) goto L_005ed363;
L_005ed353:; BB(0x005ed353);
    /* 005ed353: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed356: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed35d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed35f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed360: ret 4 */ FN_RET(0x005ed308); r_esp += 8; return;
L_005ed363:; BB(0x005ed363);
    /* 005ed363: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed367: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed36cu); f_005c2f74();
    /* 005ed36c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed36d: jmp 0x5ed353 */ goto L_005ed353;
}

void f_005ed370(void) /* sub_5ED370 */
{
    FN_ENTER(0x005ed370);
    /* 005ed370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed371: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed375: push 0x8dc48a */ { u32 v = 0x8dc48au; r_esp -= 4; W32(r_esp, v); }
    /* 005ed37a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed381: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed388: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed38b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed38e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed391: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed394: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed397: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed39a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed39d: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed39f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed3a2: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed3a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed3af: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed3b4u); f_005e61c8();
    /* 005ed3b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed3b7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed3b9: jne 0x5ed3cb */ if (!fZ) goto L_005ed3cb;
L_005ed3bb:; BB(0x005ed3bb);
    /* 005ed3bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed3be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed3c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed3c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed3c8: ret 4 */ FN_RET(0x005ed370); r_esp += 8; return;
L_005ed3cb:; BB(0x005ed3cb);
    /* 005ed3cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed3ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed3cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed3d4u); f_005c2f74();
    /* 005ed3d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed3d5: jmp 0x5ed3bb */ goto L_005ed3bb;
}

void f_005ed3d8(void) /* sub_5ED3D8 */
{
    FN_ENTER(0x005ed3d8);
    /* 005ed3d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed3d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed3db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed3dd: push 0x8dc4b2 */ { u32 v = 0x8dc4b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed3e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed3e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed3f0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed3f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed3f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed3f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed3fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed3ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed402: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed405: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed407: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed40a: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed410: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed417: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed41cu); f_005e61c8();
    /* 005ed41c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed41f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed421: jne 0x5ed433 */ if (!fZ) goto L_005ed433;
L_005ed423:; BB(0x005ed423);
    /* 005ed423: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed426: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed42d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed42f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed430: ret 4 */ FN_RET(0x005ed3d8); r_esp += 8; return;
L_005ed433:; BB(0x005ed433);
    /* 005ed433: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed437: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed43cu); f_005c2f74();
    /* 005ed43c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed43d: jmp 0x5ed423 */ goto L_005ed423;
}

void f_005ed440(void) /* sub_5ED440 */
{
    FN_ENTER(0x005ed440);
    /* 005ed440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed441: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed445: push 0x8dc4da */ { u32 v = 0x8dc4dau; r_esp -= 4; W32(r_esp, v); }
    /* 005ed44a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed451: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed458: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed45b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed45e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed461: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed464: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed467: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ed46a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ed46d: mov eax, ecx */ r_eax = r_ecx;
    /* 005ed46f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed472: mov dword ptr [eax], 0xb124e0 */ W32((u32)(r_eax), 0xb124e0u);
    /* 005ed478: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed47f: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ed484u); f_005e61c8();
    /* 005ed484: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed487: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed489: jne 0x5ed49b */ if (!fZ) goto L_005ed49b;
L_005ed48b:; BB(0x005ed48b);
    /* 005ed48b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed48e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed495: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed498: ret 4 */ FN_RET(0x005ed440); r_esp += 8; return;
L_005ed49b:; BB(0x005ed49b);
    /* 005ed49b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed49e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed49f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ed4a4u); f_005c2f74();
    /* 005ed4a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed4a5: jmp 0x5ed48b */ goto L_005ed48b;
}

void f_005ed4a8(void) /* sub_5ED4A8 */
{
    FN_ENTER(0x005ed4a8);
    /* 005ed4a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ed4ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed4ad: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ed4b2u); f_005e7f6c();
    /* 005ed4b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed4b5: je 0x5ed4c8 */ if (fZ) goto L_005ed4c8;
L_005ed4b7:; BB(0x005ed4b7);
    /* 005ed4b7: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 005ed4bd: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed4c0: mov dword ptr [ebx + 0x240], eax */ W32((u32)(r_ebx+0x240u), r_eax);
    /* 005ed4c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ed4c7: ret  */ FN_RET(0x005ed4a8); r_esp += 4; return;
L_005ed4c8:; BB(0x005ed4c8);
    /* 005ed4c8: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 005ed4ce: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed4d1: mov dword ptr [ebx + 0x240], eax */ W32((u32)(r_ebx+0x240u), r_eax);
    /* 005ed4d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ed4d8: ret  */ FN_RET(0x005ed4a8); r_esp += 4; return;
}

void f_005ed4dc(void) /* sub_5ED4DC */
{
    FN_ENTER(0x005ed4dc);
    /* 005ed4dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4dd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed4e0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ed4e2: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005ed4e8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ed4ea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ed4ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4ee: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4f0: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ed4f6u); call_ind(t); }
    /* 005ed4f6: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005ed4fc: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed502: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5ed507u); f_006a3250();
    /* 005ed507: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005ed50a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed50d: je 0x5ed562 */ if (fZ) goto L_005ed562;
L_005ed50f:; BB(0x005ed50f);
    /* 005ed50f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ed512: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed514: push dword ptr [ebx + 0xfc] */ { u32 v = R32((u32)(r_ebx+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed51a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed51d: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ed522u); f_005e6df8();
L_005ed522:; BB(0x005ed522);
    /* 005ed522: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005ed529: cmp eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed52e: jne 0x5ed54f */ if (!fZ) goto L_005ed54f;
L_005ed530:; BB(0x005ed530);
    /* 005ed530: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005ed537: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed53a: je 0x5ed55d */ if (fZ) goto L_005ed55d;
L_005ed53c:; BB(0x005ed53c);
    /* 005ed53c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ed53f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed540: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ed542: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed544: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x5ed54au); call_ind(t); }
    /* 005ed54a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ed54d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ed54e: ret  */ FN_RET(0x005ed4dc); r_esp += 4; return;
L_005ed54f:; BB(0x005ed54f);
    /* 005ed54f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ed552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed553: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ed555: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed557: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x5ed55du); call_ind(t); }
L_005ed55d:; BB(0x005ed55d);
    /* 005ed55d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ed560: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ed561: ret  */ FN_RET(0x005ed4dc); r_esp += 4; return;
L_005ed562:; BB(0x005ed562);
    /* 005ed562: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ed565: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed567: push dword ptr [ebx + 0xfc] */ { u32 v = R32((u32)(r_ebx+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed56d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed570: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ed575u); f_005e6df8();
    /* 005ed575: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ed578: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed57d: push dword ptr [ebx + 0xfc] */ { u32 v = R32((u32)(r_ebx+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed583: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed586: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ed58bu); f_005e6df8();
    /* 005ed58b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ed58e: push 0xffffeaab */ { u32 v = 0xffffeaabu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed593: push dword ptr [ebx + 0xfc] */ { u32 v = R32((u32)(r_ebx+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed599: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed59b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed59c: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ed5a1u); f_005e6df8();
    /* 005ed5a1: jmp 0x5ed522 */ goto L_005ed522;
}

void f_005ed5a8(void) /* sub_5ED5A8 */
{
    FN_ENTER(0x005ed5a8);
    /* 005ed5a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ed5a9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed5ac: mov esi, ecx */ r_esi = r_ecx;
    /* 005ed5ae: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ed5b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed5b5: jne 0x5ed626 */ if (!fZ) goto L_005ed626;
L_005ed5b7:; BB(0x005ed5b7);
    /* 005ed5b7: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005ed5be: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005ed5c1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005ed5c9: mov dword ptr [esp + 8], 0x3f000000 */ W32((u32)(r_esp+0x8u), 0x3f000000u);
    /* 005ed5d1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ed5d6u); f_0082d838();
    /* 005ed5d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed5d8: mov edx, 0x18e3 */ r_edx = 0x18e3u;
    /* 005ed5dd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5ed5e2u); f_0082e9e4();
    /* 005ed5e2: mov eax, dword ptr [esi + 0x240] */ r_eax = R32((u32)(r_esi+0x240u));
    /* 005ed5e8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ed5ea: je 0x5ed626 */ if (fZ) goto L_005ed626;
L_005ed5ec:; BB(0x005ed5ec);
    /* 005ed5ec: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ed5f1u); f_0082d7b0();
    /* 005ed5f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed5f3: mov edx, 0x2aaa */ r_edx = 0x2aaau;
    /* 005ed5f8: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5ed5fdu); f_0082e9e4();
    /* 005ed5fd: mov ecx, esi */ r_ecx = r_esi;
    /* 005ed5ff: call 0x5c3384 */ r_esp -= 4; W32(r_esp, 0x5ed604u); f_005c3384();
    /* 005ed604: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ed609u); f_0082da80();
    /* 005ed609: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ed60eu); f_0082d7b0();
    /* 005ed60e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed610: mov edx, 0xffffd556 */ r_edx = 0xffffd556u;
    /* 005ed615: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5ed61au); f_0082e9e4();
    /* 005ed61a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ed61c: call 0x5c3384 */ r_esp -= 4; W32(r_esp, 0x5ed621u); f_005c3384();
    /* 005ed621: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ed626u); f_0082da80();
L_005ed626:; BB(0x005ed626);
    /* 005ed626: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ed629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ed62a: ret  */ FN_RET(0x005ed5a8); r_esp += 4; return;
}

void f_005ed62c(void) /* sub_5ED62C */
{
    FN_ENTER(0x005ed62c);
    /* 005ed62c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed62d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ed62f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ed631: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ed636u); f_005e7f6c();
    /* 005ed636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed638: jne 0x5ed651 */ if (!fZ) goto L_005ed651;
L_005ed63a:; BB(0x005ed63a);
    /* 005ed63a: push dword ptr [ebx + 0x244] */ { u32 v = R32((u32)(r_ebx+0x244u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed640: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed642: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed643: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed649: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x5ed64eu); f_005cc64c();
    /* 005ed64e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ed651:; BB(0x005ed651);
    /* 005ed651: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ed652: ret 4 */ FN_RET(0x005ed62c); r_esp += 8; return;
}

void f_005ed658(void) /* sub_5ED658 */
{
    FN_ENTER(0x005ed658);
    /* 005ed658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed659: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed65b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed65d: push 0x8dc5d8 */ { u32 v = 0x8dc5d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed662: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ed668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed669: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ed670: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ed673: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ed676: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ed679: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ed67c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ed67f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed682: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed684: je 0x5edb0d */ if (fZ) goto L_005edb0d;
L_005ed68a:; BB(0x005ed68a);
    /* 005ed68a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed68d: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 005ed691: cmp eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed696: je 0x5ed8a7 */ if (fZ) goto L_005ed8a7;
L_005ed69c:; BB(0x005ed69c);
    /* 005ed69c: cmp eax, 0x93 */ {  u32 a = r_eax; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed6a1: je 0x5ed84a */ if (fZ) goto L_005ed84a;
L_005ed6a7:; BB(0x005ed6a7);
    /* 005ed6a7: cmp eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed6ac: je 0x5ed7ed */ if (fZ) goto L_005ed7ed;
L_005ed6b2:; BB(0x005ed6b2);
    /* 005ed6b2: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed6b7: je 0x5ed77f */ if (fZ) goto L_005ed77f;
L_005ed6bd:; BB(0x005ed6bd);
    /* 005ed6bd: cmp eax, 0xd5 */ {  u32 a = r_eax; u32 b = 0xd5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed6c2: je 0x5ed6cb */ if (fZ) goto L_005ed6cb;
L_005ed6c4:; BB(0x005ed6c4);
    /* 005ed6c4: cmp eax, 0xd8 */ {  u32 a = r_eax; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed6c9: jne 0x5ed725 */ if (!fZ) goto L_005ed725;
L_005ed6cb:; BB(0x005ed6cb);
    /* 005ed6cb: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005ed6d2: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed6d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed6dcu); f_005caba4();
    /* 005ed6dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed6df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed6e2: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005ed6e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed6e7: je 0x5ed7d5 */ if (fZ) goto L_005ed7d5;
L_005ed6ed:; BB(0x005ed6ed);
    /* 005ed6ed: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 005ed6f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ed6fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed6fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed702: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed708: call 0x5edc4c */ r_esp -= 4; W32(r_esp, 0x5ed70du); f_005edc4c();
    /* 005ed70d: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005ed714:; BB(0x005ed714);
    /* 005ed714: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed717: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed71a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed721: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed723: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed724: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005ed725:; BB(0x005ed725);
    /* 005ed725: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005ed72c: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed731: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed736u); f_005caba4();
    /* 005ed736: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed739: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed73c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ed73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed741: je 0x5ed7df */ if (fZ) goto L_005ed7df;
L_005ed747:; BB(0x005ed747);
    /* 005ed747: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005ed74e: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005ed755: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed758: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed75b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed75c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed762: call 0x5edd50 */ r_esp -= 4; W32(r_esp, 0x5ed767u); f_005edd50();
    /* 005ed767: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005ed76e:; BB(0x005ed76e);
    /* 005ed76e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed771: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed774: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed77b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed77d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed77e: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005ed77f:; BB(0x005ed77f);
    /* 005ed77f: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005ed786: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed78b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed790u); f_005caba4();
    /* 005ed790: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed793: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed796: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005ed799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed79b: je 0x5ed7e6 */ if (fZ) goto L_005ed7e6;
L_005ed79d:; BB(0x005ed79d);
    /* 005ed79d: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 005ed7a4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ed7ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed7ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed7b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed7b2: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed7b8: call 0x5edb80 */ r_esp -= 4; W32(r_esp, 0x5ed7bdu); f_005edb80();
    /* 005ed7bd: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005ed7c4:; BB(0x005ed7c4);
    /* 005ed7c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed7c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed7ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed7d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed7d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed7d4: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005ed7d5:; BB(0x005ed7d5);
    /* 005ed7d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed7d7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed7da: jmp 0x5ed714 */ goto L_005ed714;
L_005ed7df:; BB(0x005ed7df);
    /* 005ed7df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed7e1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed7e4: jmp 0x5ed76e */ goto L_005ed76e;
L_005ed7e6:; BB(0x005ed7e6);
    /* 005ed7e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed7e8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed7eb: jmp 0x5ed7c4 */ goto L_005ed7c4;
L_005ed7ed:; BB(0x005ed7ed);
    /* 005ed7ed: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005ed7f4: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed7f9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed7feu); f_005caba4();
    /* 005ed7fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed801: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed804: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ed807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed809: je 0x5ed843 */ if (fZ) goto L_005ed843;
L_005ed80b:; BB(0x005ed80b);
    /* 005ed80b: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005ed812: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ed819: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed81c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed81f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed820: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed826: call 0x5edbcc */ r_esp -= 4; W32(r_esp, 0x5ed82bu); f_005edbcc();
    /* 005ed82b: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005ed832:; BB(0x005ed832);
    /* 005ed832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed835: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed838: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed83f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed842: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005ed843:; BB(0x005ed843);
    /* 005ed843: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed845: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed848: jmp 0x5ed832 */ goto L_005ed832;
L_005ed84a:; BB(0x005ed84a);
    /* 005ed84a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005ed851: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed856: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed85bu); f_005caba4();
    /* 005ed85b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed85e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed861: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ed864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed866: je 0x5ed8a0 */ if (fZ) goto L_005ed8a0;
L_005ed868:; BB(0x005ed868);
    /* 005ed868: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005ed86f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005ed876: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed879: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed87c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed87d: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed883: call 0x5edc0c */ r_esp -= 4; W32(r_esp, 0x5ed888u); f_005edc0c();
    /* 005ed888: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005ed88f:; BB(0x005ed88f);
    /* 005ed88f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed892: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed895: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed89c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed89e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed89f: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005ed8a0:; BB(0x005ed8a0);
    /* 005ed8a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed8a2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed8a5: jmp 0x5ed88f */ goto L_005ed88f;
L_005ed8a7:; BB(0x005ed8a7);
    /* 005ed8a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed8aa: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 005ed8ae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed8b1: je 0x5edab0 */ if (fZ) goto L_005edab0;
L_005ed8b7:; BB(0x005ed8b7);
    /* 005ed8b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed8ba: je 0x5eda42 */ if (fZ) goto L_005eda42;
L_005ed8c0:; BB(0x005ed8c0);
    /* 005ed8c0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed8c3: jne 0x5ed9df */ if (!fZ) goto L_005ed9df;
L_005ed8c9:; BB(0x005ed8c9);
    /* 005ed8c9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005ed8d0: push 0x29c */ { u32 v = 0x29cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed8d5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed8dau); f_005caba4();
    /* 005ed8da: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed8dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed8e0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ed8e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed8e5: je 0x5eda98 */ if (fZ) goto L_005eda98;
L_005ed8eb:; BB(0x005ed8eb);
    /* 005ed8eb: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005ed8f2: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005ed8f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed8fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed8ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed900: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed906: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5ed90bu); f_005edb20();
    /* 005ed90b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ed90e: mov dword ptr [eax], 0xb127e0 */ W32((u32)(r_eax), 0xb127e0u);
    /* 005ed914: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed916: mov word ptr [eax + 0x290], dx */ W16((u32)(r_eax+0x290u), (u16)r_edx);
    /* 005ed91d: mov dword ptr [eax + 0x254], 0 */ W32((u32)(r_eax+0x254u), 0x0u);
    /* 005ed927: mov word ptr [eax + 0x292], dx */ W16((u32)(r_eax+0x292u), (u16)r_edx);
    /* 005ed92e: mov dword ptr [eax + 0x258], 0 */ W32((u32)(r_eax+0x258u), 0x0u);
    /* 005ed938: mov dword ptr [eax + 0x25c], 0 */ W32((u32)(r_eax+0x25cu), 0x0u);
    /* 005ed942: mov dword ptr [eax + 0x260], 0 */ W32((u32)(r_eax+0x260u), 0x0u);
    /* 005ed94c: mov dword ptr [eax + 0x264], 0 */ W32((u32)(r_eax+0x264u), 0x0u);
    /* 005ed956: mov dword ptr [eax + 0x268], 0 */ W32((u32)(r_eax+0x268u), 0x0u);
    /* 005ed960: mov dword ptr [eax + 0x26c], 0 */ W32((u32)(r_eax+0x26cu), 0x0u);
    /* 005ed96a: mov dword ptr [eax + 0x270], 0 */ W32((u32)(r_eax+0x270u), 0x0u);
    /* 005ed974: mov dword ptr [eax + 0x274], 0 */ W32((u32)(r_eax+0x274u), 0x0u);
    /* 005ed97e: mov dword ptr [eax + 0x278], 0 */ W32((u32)(r_eax+0x278u), 0x0u);
    /* 005ed988: mov dword ptr [eax + 0x27c], 0 */ W32((u32)(r_eax+0x27cu), 0x0u);
    /* 005ed992: mov dword ptr [eax + 0x280], 0 */ W32((u32)(r_eax+0x280u), 0x0u);
    /* 005ed99c: mov dword ptr [eax + 0x284], 0 */ W32((u32)(r_eax+0x284u), 0x0u);
    /* 005ed9a6: mov dword ptr [eax + 0x288], 0 */ W32((u32)(r_eax+0x288u), 0x0u);
    /* 005ed9b0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005ed9b3: mov dword ptr [eax + 0x28c], 0 */ W32((u32)(r_eax+0x28cu), 0x0u);
    /* 005ed9bd: mov dword ptr [eax + 0x24c], 0x5cd5bc */ W32((u32)(r_eax+0x24cu), 0x5cd5bcu);
    /* 005ed9c7: mov dword ptr [eax + 0x250], 0x5cd51c */ W32((u32)(r_eax+0x250u), 0x5cd51cu);
L_005ed9d1:; BB(0x005ed9d1);
    /* 005ed9d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed9d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed9db: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed9dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed9de: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005ed9df:; BB(0x005ed9df);
    /* 005ed9df: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed9e2: jne 0x5ed725 */ if (!fZ) goto L_005ed725;
L_005ed9e8:; BB(0x005ed9e8);
    /* 005ed9e8: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005ed9ef: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed9f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ed9f9u); f_005caba4();
    /* 005ed9f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ed9fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed9ff: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005eda02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eda04: je 0x5edaa2 */ if (fZ) goto L_005edaa2;
L_005eda0a:; BB(0x005eda0a);
    /* 005eda0a: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005eda11: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005eda18: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eda1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eda1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eda1f: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eda25: call 0x5edc4c */ r_esp -= 4; W32(r_esp, 0x5eda2au); f_005edc4c();
    /* 005eda2a: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005eda31:; BB(0x005eda31);
    /* 005eda31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eda34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eda37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eda3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005eda40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eda41: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005eda42:; BB(0x005eda42);
    /* 005eda42: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005eda49: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005eda4e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eda53u); f_005caba4();
    /* 005eda53: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005eda56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eda59: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005eda5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eda5e: je 0x5edaa9 */ if (fZ) goto L_005edaa9;
L_005eda60:; BB(0x005eda60);
    /* 005eda60: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005eda67: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005eda6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eda71: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eda74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eda75: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eda7b: call 0x5edcd0 */ r_esp -= 4; W32(r_esp, 0x5eda80u); f_005edcd0();
    /* 005eda80: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005eda87:; BB(0x005eda87);
    /* 005eda87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eda8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eda8d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eda94: mov esp, ebp */ r_esp = r_ebp;
    /* 005eda96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eda97: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005eda98:; BB(0x005eda98);
    /* 005eda98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eda9a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005eda9d: jmp 0x5ed9d1 */ goto L_005ed9d1;
L_005edaa2:; BB(0x005edaa2);
    /* 005edaa2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005edaa4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005edaa7: jmp 0x5eda31 */ goto L_005eda31;
L_005edaa9:; BB(0x005edaa9);
    /* 005edaa9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005edaab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005edaae: jmp 0x5eda87 */ goto L_005eda87;
L_005edab0:; BB(0x005edab0);
    /* 005edab0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005edab7: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005edabc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5edac1u); f_005caba4();
    /* 005edac1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005edac4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edac7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005edaca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edacc: je 0x5edb06 */ if (fZ) goto L_005edb06;
L_005edace:; BB(0x005edace);
    /* 005edace: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005edad5: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005edadc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005edadf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005edae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edae3: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edae9: call 0x5edd10 */ r_esp -= 4; W32(r_esp, 0x5edaeeu); f_005edd10();
    /* 005edaee: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005edaf5:; BB(0x005edaf5);
    /* 005edaf5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005edaf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005edafb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005edb02: mov esp, ebp */ r_esp = r_ebp;
    /* 005edb04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edb05: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
L_005edb06:; BB(0x005edb06);
    /* 005edb06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005edb08: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005edb0b: jmp 0x5edaf5 */ goto L_005edaf5;
L_005edb0d:; BB(0x005edb0d);
    /* 005edb0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005edb0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005edb12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005edb19: mov esp, ebp */ r_esp = r_ebp;
    /* 005edb1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edb1c: ret  */ FN_RET(0x005ed658); r_esp += 4; return;
}

void f_005edb20(void) /* sub_5EDB20 */
{
    FN_ENTER(0x005edb20);
    /* 005edb20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005edb21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005edb23: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edb27: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edb2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005edb2d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5edb32u); f_005e959c();
    /* 005edb32: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005edb38: mov dword ptr [ebx], 0xb124e0 */ W32((u32)(r_ebx), 0xb124e0u);
    /* 005edb3e: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005edb41: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005edb47: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005edb51: mov eax, ebx */ r_eax = r_ebx;
    /* 005edb53: mov dword ptr [ebx + 0x244], 0x1bd */ W32((u32)(r_ebx+0x244u), 0x1bdu);
    /* 005edb5d: mov dword ptr [ebx + 0x24c], 0x5ccbe0 */ W32((u32)(r_ebx+0x24cu), 0x5ccbe0u);
    /* 005edb67: mov dword ptr [ebx + 0x250], 0x5cca98 */ W32((u32)(r_ebx+0x250u), 0x5cca98u);
    /* 005edb71: mov dword ptr [ebx + 0x248], 0x40800000 */ W32((u32)(r_ebx+0x248u), 0x40800000u);
    /* 005edb7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005edb7c: ret 8 */ FN_RET(0x005edb20); r_esp += 12; return;
}

void f_005edb80(void) /* sub_5EDB80 */
{
    FN_ENTER(0x005edb80);
    /* 005edb80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005edb81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005edb83: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edb87: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edb8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005edb8d: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edb92u); f_005edb20();
    /* 005edb92: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005edb98: mov dword ptr [ebx], 0xb12be0 */ W32((u32)(r_ebx), 0xb12be0u);
    /* 005edb9e: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005edba1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005edba7: mov dword ptr [ebx + 0x248], 0x40a00000 */ W32((u32)(r_ebx+0x248u), 0x40a00000u);
    /* 005edbb1: mov eax, ebx */ r_eax = r_ebx;
    /* 005edbb3: mov dword ptr [ebx + 0x250], 0x5ee310 */ W32((u32)(r_ebx+0x250u), 0x5ee310u);
    /* 005edbbd: mov dword ptr [ebx + 0x24c], 0x5cfec4 */ W32((u32)(r_ebx+0x24cu), 0x5cfec4u);
    /* 005edbc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005edbc8: ret 8 */ FN_RET(0x005edb80); r_esp += 12; return;
}

void f_005edbcc(void) /* sub_5EDBCC */
{
    FN_ENTER(0x005edbcc);
    /* 005edbcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edbcd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005edbcf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edbd3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edbd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005edbd9: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edbdeu); f_005edb20();
    /* 005edbde: mov dword ptr [ebp], 0xb12ae0 */ W32((u32)(r_ebp), 0xb12ae0u);
    /* 005edbe5: mov eax, ebp */ r_eax = r_ebp;
    /* 005edbe7: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005edbf1: mov dword ptr [ebp + 0x24c], 0x5cfec4 */ W32((u32)(r_ebp+0x24cu), 0x5cfec4u);
    /* 005edbfb: mov dword ptr [ebp + 0x250], 0x5cfa40 */ W32((u32)(r_ebp+0x250u), 0x5cfa40u);
    /* 005edc05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edc06: ret 8 */ FN_RET(0x005edbcc); r_esp += 12; return;
}

void f_005edc0c(void) /* sub_5EDC0C */
{
    FN_ENTER(0x005edc0c);
    /* 005edc0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edc0d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005edc0f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edc13: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edc17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005edc19: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edc1eu); f_005edb20();
    /* 005edc1e: mov dword ptr [ebp], 0xb129e0 */ W32((u32)(r_ebp), 0xb129e0u);
    /* 005edc25: mov eax, ebp */ r_eax = r_ebp;
    /* 005edc27: mov dword ptr [ebp + 0x244], 0x155 */ W32((u32)(r_ebp+0x244u), 0x155u);
    /* 005edc31: mov dword ptr [ebp + 0x250], 0x5ee150 */ W32((u32)(r_ebp+0x250u), 0x5ee150u);
    /* 005edc3b: mov dword ptr [ebp + 0x24c], 0x5ee288 */ W32((u32)(r_ebp+0x24cu), 0x5ee288u);
    /* 005edc45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edc46: ret 8 */ FN_RET(0x005edc0c); r_esp += 12; return;
}

void f_005edc4c(void) /* sub_5EDC4C */
{
    FN_ENTER(0x005edc4c);
    /* 005edc4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005edc4d: mov esi, ecx */ r_esi = r_ecx;
    /* 005edc4f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edc53: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edc57: mov ecx, esi */ r_ecx = r_esi;
    /* 005edc59: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edc5eu); f_005edb20();
    /* 005edc5e: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005edc65: mov dword ptr [esi], 0xb128e0 */ W32((u32)(r_esi), 0xb128e0u);
    /* 005edc6b: cmp eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edc70: mov dword ptr [esi + 0x24c], 0x5cffb8 */ W32((u32)(r_esi+0x24cu), 0x5cffb8u);
    /* 005edc7a: mov dword ptr [esi + 0x250], 0x5cfb7c */ W32((u32)(r_esi+0x250u), 0x5cfb7cu);
    /* 005edc84: jne 0x5edcab */ if (!fZ) goto L_005edcab;
L_005edc86:; BB(0x005edc86);
    /* 005edc86: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005edc8d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005edc90: jne 0x5edc9e */ if (!fZ) goto L_005edc9e;
L_005edc92:; BB(0x005edc92);
    /* 005edc92: mov dword ptr [esi + 0x248], 0x40000000 */ W32((u32)(r_esi+0x248u), 0x40000000u);
    /* 005edc9c: jmp 0x5edcc9 */ goto L_005edcc9;
L_005edc9e:; BB(0x005edc9e);
    /* 005edc9e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005edca3: mov dword ptr [esi + 0x248], eax */ W32((u32)(r_esi+0x248u), r_eax);
    /* 005edca9: jmp 0x5edcc9 */ goto L_005edcc9;
L_005edcab:; BB(0x005edcab);
    /* 005edcab: cmp eax, 0xd5 */ {  u32 a = r_eax; u32 b = 0xd5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005edcb0: jne 0x5edcbe */ if (!fZ) goto L_005edcbe;
L_005edcb2:; BB(0x005edcb2);
    /* 005edcb2: mov dword ptr [esi + 0x248], 0x40000000 */ W32((u32)(r_esi+0x248u), 0x40000000u);
    /* 005edcbc: jmp 0x5edcc9 */ goto L_005edcc9;
L_005edcbe:; BB(0x005edcbe);
    /* 005edcbe: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005edcc3: mov dword ptr [esi + 0x248], eax */ W32((u32)(r_esi+0x248u), r_eax);
L_005edcc9:; BB(0x005edcc9);
    /* 005edcc9: mov eax, esi */ r_eax = r_esi;
    /* 005edccb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005edccc: ret 8 */ FN_RET(0x005edc4c); r_esp += 12; return;
}

void f_005edcc0(void)
{
    FN_ENTER(0x005edcc0);
    /* 005edcc0: add byte ptr [eax + 0x4886893f], al */ { u32 ad = (u32)(r_eax+0x4886893fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005edcc6: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005edcc8: add byte ptr [ebx + 0x8c25ec6], cl */ { u32 ad = (u32)(r_ebx+0x8c25ec6u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005edcce: add byte ptr [eax - 0x1674ab], dl */ { u32 ad = (u32)(r_eax+0xffe98b55u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 005edcd4: je 0x5edcfa */ if (fZ) goto L_005edcfa;
L_005edcd6:; BB(0x005edcd6);
    /* 005edcd6: or al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005edcd8: je 0x5edcfe */ if (fZ) goto L_005edcfe;
L_005edcda:; BB(0x005edcda);
    /* 005edcda: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005edcdc: int 0xe8 */ UNSUP(0x005edcdc, "int 0xe8");
    UNSUP(0x005edcde, "falls out of decoded code");
L_005edcfa:; BB(0x005edcfa);
    /* 005edcfa: add byte ptr [ebp + edx*8 - 0x7a38ffa4], bh */ { u32 ad = (u32)(r_ebp+r_edx*8+0x85c7005cu);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_005edcfe:; BB(0x005edcfe);
    /* 005edcfe: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005edd00: test dword ptr [eax + 2], edx */ {  u32 a = R32((u32)(r_eax+0x2u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;   }
    /* 005edd01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edd02: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005edd03: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 005edd04: add byte ptr [edx*8 - 0x3da2ffa4], bl */ { u32 ad = (u32)(r_edx*8+0xc25d005cu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005edd05: sbb al, 0xd5 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xd5u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005edd07: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 005edd08: add byte ptr [ebp - 0x3e], bl */ { u32 ad = (u32)(r_ebp+0xffffffc2u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005edd0b: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005edd0d: nop  */ ;
    /* 005edd0e: nop  */ ;
    /* 005edd0f: nop  */ ;
    /* 005edd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edd11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005edd13: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edd17: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edd1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005edd1d: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edd22u); f_005edb20();
    /* 005edd22: mov dword ptr [ebp], 0xb125e0 */ W32((u32)(r_ebp), 0xb125e0u);
    /* 005edd29: mov eax, ebp */ r_eax = r_ebp;
    /* 005edd2b: mov dword ptr [ebp + 0x244], 0x155 */ W32((u32)(r_ebp+0x244u), 0x155u);
    /* 005edd35: mov dword ptr [ebp + 0x24c], 0x5cce34 */ W32((u32)(r_ebp+0x24cu), 0x5cce34u);
    /* 005edd3f: mov dword ptr [ebp + 0x250], 0x5cccec */ W32((u32)(r_ebp+0x250u), 0x5cccecu);
    /* 005edd49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edd4a: ret 8 */ FN_RET(0x005edcc0); r_esp += 12; return;
}

void f_005edcd0(void) /* sub_5EDCD0 */
{
    FN_ENTER(0x005edcd0);
    /* 005edcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edcd1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005edcd3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edcd7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edcdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005edcdd: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edce2u); f_005edb20();
    /* 005edce2: mov dword ptr [ebp], 0xb126e0 */ W32((u32)(r_ebp), 0xb126e0u);
    /* 005edce9: mov eax, ebp */ r_eax = r_ebp;
    /* 005edceb: mov dword ptr [ebp + 0x244], 0x1bf */ W32((u32)(r_ebp+0x244u), 0x1bfu);
    /* 005edcf5: mov dword ptr [ebp + 0x24c], 0x5cd5bc */ W32((u32)(r_ebp+0x24cu), 0x5cd5bcu);
    /* 005edcff: mov dword ptr [ebp + 0x250], 0x5cd51c */ W32((u32)(r_ebp+0x250u), 0x5cd51cu);
    /* 005edd09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edd0a: ret 8 */ FN_RET(0x005edcd0); r_esp += 12; return;
}

void f_005edd10(void) /* sub_5EDD10 */
{
    FN_ENTER(0x005edd10);
    /* 005edd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edd11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005edd13: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edd17: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edd1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005edd1d: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edd22u); f_005edb20();
    /* 005edd22: mov dword ptr [ebp], 0xb125e0 */ W32((u32)(r_ebp), 0xb125e0u);
    /* 005edd29: mov eax, ebp */ r_eax = r_ebp;
    /* 005edd2b: mov dword ptr [ebp + 0x244], 0x155 */ W32((u32)(r_ebp+0x244u), 0x155u);
    /* 005edd35: mov dword ptr [ebp + 0x24c], 0x5cce34 */ W32((u32)(r_ebp+0x24cu), 0x5cce34u);
    /* 005edd3f: mov dword ptr [ebp + 0x250], 0x5cccec */ W32((u32)(r_ebp+0x250u), 0x5cccecu);
    /* 005edd49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edd4a: ret 8 */ FN_RET(0x005edd10); r_esp += 12; return;
}

void f_005edd50(void) /* sub_5EDD50 */
{
    FN_ENTER(0x005edd50);
    /* 005edd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edd51: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005edd53: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edd57: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005edd5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005edd5d: call 0x5edb20 */ r_esp -= 4; W32(r_esp, 0x5edd62u); f_005edb20();
    /* 005edd62: mov dword ptr [ebp], 0xb12ce0 */ W32((u32)(r_ebp), 0xb12ce0u);
    /* 005edd69: mov eax, ebp */ r_eax = r_ebp;
    /* 005edd6b: mov dword ptr [ebp + 0x248], 0x40a00000 */ W32((u32)(r_ebp+0x248u), 0x40a00000u);
    /* 005edd75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edd76: ret 8 */ FN_RET(0x005edd50); r_esp += 12; return;
}

void f_005edd7c(void) /* sub_5EDD7C */
{
    FN_ENTER(0x005edd7c);
    /* 005edd7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005edd7d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005edd81: call 0x5edd90 */ r_esp -= 4; W32(r_esp, 0x5edd86u); f_005edd90();
    /* 005edd86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005edd87: ret 4 */ FN_RET(0x005edd7c); r_esp += 8; return;
}

void f_005edd90(void) /* sub_5EDD90 */
{
    FN_ENTER(0x005edd90);
    /* 005edd90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005edd91: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005edd94: push 0x1bf */ { u32 v = 0x1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005edd99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edd9a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5edd9fu); f_0050b510();
    /* 005edd9f: mov ebx, eax */ r_ebx = r_eax;
    /* 005edda1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edda4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edda6: je 0x5eddf9 */ if (fZ) goto L_005eddf9;
L_005edda8:; BB(0x005edda8);
    /* 005edda8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005eddab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eddac: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005eddae: call 0x5d7ab8 */ r_esp -= 4; W32(r_esp, 0x5eddb3u); f_005d7ab8();
    /* 005eddb3: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005eddb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eddb8: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005eddba: call 0x5d7ad4 */ r_esp -= 4; W32(r_esp, 0x5eddbfu); f_005d7ad4();
    /* 005eddbf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eddc2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005eddc5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005eddc9: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 005eddd0: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 005eddd3: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 005eddd7: mov dword ptr [ebx + 0x60], 0x3f800000 */ W32((u32)(r_ebx+0x60u), 0x3f800000u);
    /* 005eddde: mov dword ptr [ebx + 0x54], ecx */ W32((u32)(r_ebx+0x54u), r_ecx);
    /* 005edde1: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005edde7: mov dword ptr [ebx + 0x44], 0x41200000 */ W32((u32)(r_ebx+0x44u), 0x41200000u);
    /* 005eddee: mov word ptr [ebx + 0x2c], dx */ W16((u32)(r_ebx+0x2cu), (u16)r_edx);
    /* 005eddf2: mov dword ptr [ebx + 0x48], 0x41200000 */ W32((u32)(r_ebx+0x48u), 0x41200000u);
L_005eddf9:; BB(0x005eddf9);
    /* 005eddf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eddfc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eddfd: ret  */ FN_RET(0x005edd90); r_esp += 4; return;
}

void f_005ede00(void) /* sub_5EDE00 */
{
    FN_ENTER(0x005ede00);
    /* 005ede00: fld dword ptr [0x92d888] */ FPUSH(R_F32((u32)(0x92d888u)));
    /* 005ede06: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005ede0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ede0e: mov word ptr [ecx + 0x290], ax */ W16((u32)(r_ecx+0x290u), (u16)r_eax);
    /* 005ede15: mov word ptr [ecx + 0x292], ax */ W16((u32)(r_ecx+0x292u), (u16)r_eax);
    /* 005ede1c: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005ede22: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 005ede25: fstp dword ptr [ecx + 0x294] */ W_F32((u32)(r_ecx+0x294u), ST(0)); FPOP();
    /* 005ede2b: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 005ede31: ret  */ FN_RET(0x005ede00); r_esp += 4; return;
}

void f_005ede34(void) /* sub_5EDE34 */
{
    FN_ENTER(0x005ede34);
    /* 005ede34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ede35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ede36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ede37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ede38: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ede3b: mov edi, ecx */ r_edi = r_ecx;
    /* 005ede3d: movsx edx, word ptr [edi + 0x290] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x290u));
    /* 005ede44: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ede47: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005ede4a: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ede4f: je 0x5edf6a */ if (fZ) goto L_005edf6a;
L_005ede55:; BB(0x005ede55);
    /* 005ede55: movsx esi, word ptr [edi + 0x292] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x292u));
    /* 005ede5c: mov word ptr [edi + 0x290], dx */ W16((u32)(r_edi+0x290u), (u16)r_edx);
L_005ede63:; BB(0x005ede63);
    /* 005ede63: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ede65: je 0x5edf62 */ if (fZ) goto L_005edf62;
L_005ede6b:; BB(0x005ede6b);
    /* 005ede6b: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005ede70: mov ebx, dword ptr [edi + 0x298] */ r_ebx = R32((u32)(r_edi+0x298u));
    /* 005ede76: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005ede7c: lea ebp, [edi + 0x254] */ r_ebp = (u32)(r_edi+0x254u);
    /* 005ede82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ede84: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x005ede84, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ede84, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ede86: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005ede8a: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ede90: mov eax, 0x31c7 */ r_eax = 0x31c7u;
    /* 005ede95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ede97: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005ede9b: mov eax, 0x238e */ r_eax = 0x238eu;
    /* 005edea0: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x005edea0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005edea0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005edea2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edea4: je 0x5edf56 */ if (fZ) goto L_005edf56;
L_005edeaa:; BB(0x005edeaa);
    /* 005edeaa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005edeae: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 005edeb2: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 005edeb6: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_005edeba:; BB(0x005edeba);
    /* 005edeba: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005edebe: mov edx, dword ptr [eax + 0x294] */ r_edx = R32((u32)(r_eax+0x294u));
    /* 005edec4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005edecb: mov ecx, edi */ r_ecx = r_edi;
    /* 005edecd: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005eded5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005eded9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005edee1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005edee9: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005edef1: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5edef6u); f_0082ddd8();
    /* 005edef6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005edefa: mov ecx, edi */ r_ecx = r_edi;
    /* 005edefc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5edf01u); f_0082dcbc();
    /* 005edf01: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005edf05: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5edf0au); f_0082d7b0();
    /* 005edf0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf0c: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5edf11u); f_00830cd8();
    /* 005edf11: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005edf15: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5edf1au); f_0082d838();
    /* 005edf1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005edf1b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005edf1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf21: call 0x83cdb0 */ r_esp -= 4; W32(r_esp, 0x5edf26u); f_0083cdb0();
    /* 005edf26: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005edf29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005edf2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edf2b: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5edf30u); f_00835c3c();
    /* 005edf30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edf33: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5edf38u); f_0082da80();
    /* 005edf38: add ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005edf3c: add edi, dword ptr [esp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005edf40: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005edf43: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 005edf46: jne 0x5edeba */ if (!fZ) goto L_005edeba;
L_005edf4c:; BB(0x005edf4c);
    /* 005edf4c: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 005edf50: mov ebx, dword ptr [edi + 0x298] */ r_ebx = R32((u32)(r_edi+0x298u));
L_005edf56:; BB(0x005edf56);
    /* 005edf56: add ebx, 0x38e */ {  u32 a = r_ebx; u32 b = 0x38eu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005edf5c: mov dword ptr [edi + 0x298], ebx */ W32((u32)(r_edi+0x298u), r_ebx);
L_005edf62:; BB(0x005edf62);
    /* 005edf62: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005edf65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005edf66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005edf67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005edf68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005edf69: ret  */ FN_RET(0x005ede34); r_esp += 4; return;
L_005edf6a:; BB(0x005edf6a);
    /* 005edf6a: movsx esi, word ptr [edi + 0x292] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x292u));
    /* 005edf71: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edf74: jge 0x5edf99 */ if ((fS==fO)) goto L_005edf99;
L_005edf76:; BB(0x005edf76);
    /* 005edf76: mov word ptr [edi + 0x290], dx */ W16((u32)(r_edi+0x290u), (u16)r_edx);
    /* 005edf7d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005edf80: mov word ptr [edi + 0x292], si */ W16((u32)(r_edi+0x292u), (u16)r_esi);
    /* 005edf87: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 005edf8a: mov ecx, edi */ r_ecx = r_edi;
    /* 005edf8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edf8d: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5edf92u); f_005c36cc();
    /* 005edf92: movsx esi, word ptr [edi + 0x292] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x292u));
L_005edf99:; BB(0x005edf99);
    /* 005edf99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005edf9b: mov word ptr [edi + 0x290], ax */ W16((u32)(r_edi+0x290u), (u16)r_eax);
    /* 005edfa2: jmp 0x5ede63 */ goto L_005ede63;
}

void f_005edfa8(void) /* sub_5EDFA8 */
{
    FN_ENTER(0x005edfa8);
    /* 005edfa8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005edfac: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005edfaf: jge 0x5edfb8 */ if ((fS==fO)) goto L_005edfb8;
L_005edfb1:; BB(0x005edfb1);
    /* 005edfb1: mov word ptr [ecx + 0x292], ax */ W16((u32)(r_ecx+0x292u), (u16)r_eax);
L_005edfb8:; BB(0x005edfb8);
    /* 005edfb8: ret 4 */ FN_RET(0x005edfa8); r_esp += 8; return;
}

void f_005edfbc(void) /* sub_5EDFBC */
{
    FN_ENTER(0x005edfbc);
    /* 005edfbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005edfbd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005edfc0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005edfc2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005edfc4: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5edfc9u); f_005e84a8();
    /* 005edfc9: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 005edfcf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005edfd1: jne 0x5ee028 */ if (!fZ) goto L_005ee028;
L_005edfd3:; BB(0x005edfd3);
    /* 005edfd3: movsx eax, word ptr [ebx + 0x292] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x292u));
    /* 005edfda: lea edx, [ebx + 0x254] */ r_edx = (u32)(r_ebx+0x254u);
    /* 005edfe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edfe2: je 0x5ee028 */ if (fZ) goto L_005ee028;
L_005edfe4:; BB(0x005edfe4);
    /* 005edfe4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005edfe8: mov esi, edx */ r_esi = r_edx;
    /* 005edfea: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005edfed: mov edi, ebx */ r_edi = r_ebx;
    /* 005edfef: mov ebx, eax */ r_ebx = r_eax;
L_005edff1:; BB(0x005edff1);
    /* 005edff1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5edff6u); f_0082d7b0();
    /* 005edff6: mov ecx, esi */ r_ecx = r_esi;
    /* 005edff8: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005edffb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ee000u); f_0082d838();
    /* 005ee000: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee002: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005ee007: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5ee00cu); f_0082e9e4();
    /* 005ee00c: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 005ee012: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5ee017u); f_00831758();
    /* 005ee017: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ee01cu); f_0082da80();
    /* 005ee01c: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005ee01f: jne 0x5edff1 */ if (!fZ) goto L_005edff1;
L_005ee021:; BB(0x005ee021);
    /* 005ee021: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005ee025: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005ee028:; BB(0x005ee028);
    /* 005ee028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee02b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee02c: ret  */ FN_RET(0x005edfbc); r_esp += 4; return;
}

