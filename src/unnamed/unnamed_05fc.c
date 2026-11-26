#include "protos.h"

void f_005fc058(void) /* sub_5FC058 */
{
    FN_ENTER(0x005fc058);
    /* 005fc058: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fc059: mov edi, ecx */ r_edi = r_ecx;
    /* 005fc05b: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005fc062: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc065: jne 0x5fc09c */ if (!fZ) goto L_005fc09c;
L_005fc067:; BB(0x005fc067);
    /* 005fc067: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fc06e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc071: jne 0x5fc09c */ if (!fZ) goto L_005fc09c;
L_005fc073:; BB(0x005fc073);
    /* 005fc073: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5fc078u); f_0077bab4();
    /* 005fc078: cmp eax, 0x177 */ {  u32 a = r_eax; u32 b = 0x177u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc07d: jl 0x5fc092 */ if ((fS!=fO)) goto L_005fc092;
L_005fc07f:; BB(0x005fc07f);
    /* 005fc07f: cmp eax, 0x2ee */ {  u32 a = r_eax; u32 b = 0x2eeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc084: jge 0x5fc092 */ if ((fS==fO)) goto L_005fc092;
L_005fc086:; BB(0x005fc086);
    /* 005fc086: mov dword ptr [edi + 0x240], 1 */ W32((u32)(r_edi+0x240u), 0x1u);
    /* 005fc090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fc091: ret  */ FN_RET(0x005fc058); r_esp += 4; return;
L_005fc092:; BB(0x005fc092);
    /* 005fc092: mov dword ptr [edi + 0x240], 0 */ W32((u32)(r_edi+0x240u), 0x0u);
L_005fc09c:; BB(0x005fc09c);
    /* 005fc09c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fc09d: ret  */ FN_RET(0x005fc058); r_esp += 4; return;
}

void f_005fc0a0(void) /* sub_5FC0A0 */
{
    FN_ENTER(0x005fc0a0);
    /* 005fc0a0: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fc0a5: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fc0ac: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc0af: jne 0x5fc100 */ if (!fZ) goto L_005fc100;
L_005fc0b1:; BB(0x005fc0b1);
    /* 005fc0b1: movzx edx, byte ptr [ecx + 0xf4] */ r_edx = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fc0b8: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc0bb: jne 0x5fc100 */ if (!fZ) goto L_005fc100;
L_005fc0bd:; BB(0x005fc0bd);
    /* 005fc0bd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc0c0: jl 0x5fc100 */ if ((fS!=fO)) goto L_005fc100;
L_005fc0c2:; BB(0x005fc0c2);
    /* 005fc0c2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fc0c5: jg 0x5fc0df */ if ((!fZ&&fS==fO)) goto L_005fc0df;
L_005fc0c7:; BB(0x005fc0c7);
    /* 005fc0c7: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005fc0cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc0cf: jne 0x5fc100 */ if (!fZ) goto L_005fc100;
L_005fc0d1:; BB(0x005fc0d1);
    /* 005fc0d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fc0d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0d9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5fc0deu); f_0082fa0c();
    /* 005fc0de: ret  */ FN_RET(0x005fc0a0); r_esp += 4; return;
L_005fc0df:; BB(0x005fc0df);
    /* 005fc0df: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc0e2: jl 0x5fc100 */ if ((fS!=fO)) goto L_005fc100;
L_005fc0e4:; BB(0x005fc0e4);
    /* 005fc0e4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc0e7: jg 0x5fc100 */ if ((!fZ&&fS==fO)) goto L_005fc100;
L_005fc0e9:; BB(0x005fc0e9);
    /* 005fc0e9: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005fc0ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc0f1: je 0x5fc100 */ if (fZ) goto L_005fc100;
L_005fc0f3:; BB(0x005fc0f3);
    /* 005fc0f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fc0f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0fb: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5fc100u); f_0082fa0c();
L_005fc100:; BB(0x005fc100);
    /* 005fc100: ret  */ FN_RET(0x005fc0a0); r_esp += 4; return;
}

void f_005fc104(void) /* sub_5FC104 */
{
    FN_ENTER(0x005fc104);
    /* 005fc104: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fc10b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc10e: jne 0x5fc12c */ if (!fZ) goto L_005fc12c;
L_005fc110:; BB(0x005fc110);
    /* 005fc110: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fc117: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc11a: jne 0x5fc12c */ if (!fZ) goto L_005fc12c;
L_005fc11c:; BB(0x005fc11c);
    /* 005fc11c: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005fc122: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc124: jne 0x5fc12c */ if (!fZ) goto L_005fc12c;
L_005fc126:; BB(0x005fc126);
    /* 005fc126: mov eax, 0xff4000ff */ r_eax = 0xff4000ffu;
    /* 005fc12b: ret  */ FN_RET(0x005fc104); r_esp += 4; return;
L_005fc12c:; BB(0x005fc12c);
    /* 005fc12c: call 0x5e7c88 */ r_esp -= 4; W32(r_esp, 0x5fc131u); f_005e7c88();
    /* 005fc131: ret  */ FN_RET(0x005fc104); r_esp += 4; return;
}

void f_005fc134(void) /* sub_5FC134 */
{
    FN_ENTER(0x005fc134);
    /* 005fc134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc135: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc139: push 0x8de140 */ { u32 v = 0x8de140u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc13e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc14c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc14f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc152: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fc155: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fc158: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fc15b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc15e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc160: je 0x5fc1b7 */ if (fZ) goto L_005fc1b7;
L_005fc162:; BB(0x005fc162);
    /* 005fc162: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fc169: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc16e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc173u); f_005caba4();
    /* 005fc173: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc174: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fc177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc179: je 0x5fc1b3 */ if (fZ) goto L_005fc1b3;
L_005fc17b:; BB(0x005fc17b);
    /* 005fc17b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fc182: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc189: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc18c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc18f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc190: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc196: call 0x5fc1c8 */ r_esp -= 4; W32(r_esp, 0x5fc19bu); f_005fc1c8();
    /* 005fc19b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc19e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fc1a5:; BB(0x005fc1a5);
    /* 005fc1a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc1a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc1af: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc1b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc1b2: ret  */ FN_RET(0x005fc134); r_esp += 4; return;
L_005fc1b3:; BB(0x005fc1b3);
    /* 005fc1b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc1b5: jmp 0x5fc1a5 */ goto L_005fc1a5;
L_005fc1b7:; BB(0x005fc1b7);
    /* 005fc1b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc1b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc1bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc1c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc1c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc1c6: ret  */ FN_RET(0x005fc134); r_esp += 4; return;
}

void f_005fc1c8(void) /* sub_5FC1C8 */
{
    FN_ENTER(0x005fc1c8);
    /* 005fc1c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc1c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fc1cb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc1cf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc1d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fc1d5: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fc1dau); f_005e959c();
    /* 005fc1da: mov dword ptr [ebp], 0xb1a580 */ W32((u32)(r_ebp), 0xb1a580u);
    /* 005fc1e1: mov eax, ebp */ r_eax = r_ebp;
    /* 005fc1e3: mov dword ptr [ebp + 0x240], 1 */ W32((u32)(r_ebp+0x240u), 0x1u);
    /* 005fc1ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc1ee: ret 8 */ FN_RET(0x005fc1c8); r_esp += 12; return;
}

void f_005fc1f4(void) /* sub_5FC1F4 */
{
    FN_ENTER(0x005fc1f4);
    /* 005fc1f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc1f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fc1f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fc1f9: call 0x5fc218 */ r_esp -= 4; W32(r_esp, 0x5fc1feu); f_005fc218();
    /* 005fc1fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fc202: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc204: jne 0x5fc20a */ if (!fZ) goto L_005fc20a;
L_005fc206:; BB(0x005fc206);
    /* 005fc206: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc207: ret 4 */ FN_RET(0x005fc1f4); r_esp += 8; return;
L_005fc20a:; BB(0x005fc20a);
    /* 005fc20a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc20b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fc210u); f_005c2f74();
    /* 005fc210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc211: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc212: ret 4 */ FN_RET(0x005fc1f4); r_esp += 8; return;
}

void f_005fc218(void) /* sub_5FC218 */
{
    FN_ENTER(0x005fc218);
    /* 005fc218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc219: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc21b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc21d: push 0x8de15c */ { u32 v = 0x8de15cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc230: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc233: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc236: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fc239: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fc23c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fc23f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fc242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc245: mov dword ptr [ecx], 0xb1a6e0 */ W32((u32)(r_ecx), 0xb1a6e0u);
    /* 005fc24b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc252: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fc257u); f_005e61c8();
    /* 005fc257: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc25a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc261: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc264: ret  */ FN_RET(0x005fc218); r_esp += 4; return;
}

void f_005fc268(void) /* sub_5FC268 */
{
    FN_ENTER(0x005fc268);
    /* 005fc268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc269: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc26b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc26d: push 0x8de184 */ { u32 v = 0x8de184u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc280: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc286: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fc289: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fc28c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fc28f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc294: je 0x5fc2eb */ if (fZ) goto L_005fc2eb;
L_005fc296:; BB(0x005fc296);
    /* 005fc296: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fc29d: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc2a2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc2a7u); f_005caba4();
    /* 005fc2a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc2a8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fc2ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc2ad: je 0x5fc2e7 */ if (fZ) goto L_005fc2e7;
L_005fc2af:; BB(0x005fc2af);
    /* 005fc2af: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fc2b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc2bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc2c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc2c4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc2ca: call 0x5fc2fc */ r_esp -= 4; W32(r_esp, 0x5fc2cfu); f_005fc2fc();
    /* 005fc2cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc2d2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fc2d9:; BB(0x005fc2d9);
    /* 005fc2d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc2dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc2e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc2e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc2e6: ret  */ FN_RET(0x005fc268); r_esp += 4; return;
L_005fc2e7:; BB(0x005fc2e7);
    /* 005fc2e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc2e9: jmp 0x5fc2d9 */ goto L_005fc2d9;
L_005fc2eb:; BB(0x005fc2eb);
    /* 005fc2eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc2ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc2f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc2f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc2f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc2fa: ret  */ FN_RET(0x005fc268); r_esp += 4; return;
}

void f_005fc2fc(void) /* sub_5FC2FC */
{
    FN_ENTER(0x005fc2fc);
    /* 005fc2fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc2fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fc2ff: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc303: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc307: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fc309: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fc30eu); f_005e959c();
    /* 005fc30e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fc314: mov dword ptr [ebx], 0xb1a6e0 */ W32((u32)(r_ebx), 0xb1a6e0u);
    /* 005fc31a: or edx, 0x203 */ {  u32 a = r_edx; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc320: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fc326: mov byte ptr [ebx + 0x1f4], 3 */ W8((u32)(r_ebx+0x1f4u), 0x3u);
    /* 005fc32d: mov eax, ebx */ r_eax = r_ebx;
    /* 005fc32f: mov dword ptr [ebx + 0x238], 0x5e4264 */ W32((u32)(r_ebx+0x238u), 0x5e4264u);
    /* 005fc339: mov dword ptr [ebx + 0x208], 0x41300000 */ W32((u32)(r_ebx+0x208u), 0x41300000u);
    /* 005fc343: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc344: ret 8 */ FN_RET(0x005fc2fc); r_esp += 12; return;
}

void f_005fc348(void) /* sub_5FC348 */
{
    FN_ENTER(0x005fc348);
    /* 005fc348: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc349: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fc34b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005fc34e: lea ecx, [ebp + 0x240] */ r_ecx = (u32)(r_ebp+0x240u);
    /* 005fc354: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc356: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fc358: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc359: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc35a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc35b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fc35d: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fc363u); call_ind(t); }
    /* 005fc363: lea edx, [ebp + 0x24c] */ r_edx = (u32)(r_ebp+0x24cu);
    /* 005fc369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc36b: je 0x5fc380 */ if (fZ) goto L_005fc380;
L_005fc36d:; BB(0x005fc36d);
    /* 005fc36d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005fc370: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fc372: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc376: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fc378: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fc37eu); call_ind(t); }
    /* 005fc37e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc37f: ret  */ FN_RET(0x005fc348); r_esp += 4; return;
L_005fc380:; BB(0x005fc380);
    /* 005fc380: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc382: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005fc385: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fc387: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc388: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc38a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fc38c: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fc392u); call_ind(t); }
    /* 005fc392: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc393: ret  */ FN_RET(0x005fc348); r_esp += 4; return;
}

void f_005fc394(void) /* sub_5FC394 */
{
    FN_ENTER(0x005fc394);
    /* 005fc394: mov dword ptr [0xa8e1bc], 0x3f800000 */ W32((u32)(0xa8e1bcu), 0x3f800000u);
    /* 005fc39e: mov dword ptr [0xa8e1c0], 0x41000000 */ W32((u32)(0xa8e1c0u), 0x41000000u);
    /* 005fc3a8: mov dword ptr [0xa8e1c4], 0x3fc00000 */ W32((u32)(0xa8e1c4u), 0x3fc00000u);
    /* 005fc3b2: ret  */ FN_RET(0x005fc394); r_esp += 4; return;
}

void f_005fc3b4(void) /* sub_5FC3B4 */
{
    FN_ENTER(0x005fc3b4);
    /* 005fc3b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc3b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3b9: push 0x8de1a0 */ { u32 v = 0x8de1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc3cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc3cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc3d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fc3d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fc3d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fc3db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fc3de: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fc3e1: mov eax, ecx */ r_eax = r_ecx;
    /* 005fc3e3: mov dword ptr [eax], 0xb1a840 */ W32((u32)(r_eax), 0xb1a840u);
    /* 005fc3e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc3f0: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fc3f5u); f_005e61c8();
    /* 005fc3f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc3f8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc3fa: jne 0x5fc40c */ if (!fZ) goto L_005fc40c;
L_005fc3fc:; BB(0x005fc3fc);
    /* 005fc3fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc3ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc406: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc409: ret 4 */ FN_RET(0x005fc3b4); r_esp += 8; return;
L_005fc40c:; BB(0x005fc40c);
    /* 005fc40c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fc40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc410: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fc415u); f_005c2f74();
    /* 005fc415: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc416: jmp 0x5fc3fc */ goto L_005fc3fc;
}

void f_005fc418(void) /* sub_5FC418 */
{
    FN_ENTER(0x005fc418);
    /* 005fc418: mov edx, ecx */ r_edx = r_ecx;
    /* 005fc41a: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fc41f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc421: jle 0x5fc430 */ if ((fZ||fS!=fO)) goto L_005fc430;
L_005fc423:; BB(0x005fc423);
    /* 005fc423: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005fc429: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fc42b: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fc430u); f_0082e9e4();
L_005fc430:; BB(0x005fc430);
    /* 005fc430: ret  */ FN_RET(0x005fc418); r_esp += 4; return;
}

void f_005fc434(void) /* sub_5FC434 */
{
    FN_ENTER(0x005fc434);
    /* 005fc434: push 0x2aaa */ { u32 v = 0x2aaau; r_esp -= 4; W32(r_esp, v); }
    /* 005fc439: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fc43f: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc444: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc445: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fc44au); f_005dd6f8();
    /* 005fc44a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc44d: ret  */ FN_RET(0x005fc434); r_esp += 4; return;
}

void f_005fc450(void) /* sub_5FC450 */
{
    FN_ENTER(0x005fc450);
    /* 005fc450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc451: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc455: push 0x8de1c8 */ { u32 v = 0x8de1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc45a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc461: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc468: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc46b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc46e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fc471: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fc474: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fc477: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc47a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc47c: je 0x5fc4d3 */ if (fZ) goto L_005fc4d3;
L_005fc47e:; BB(0x005fc47e);
    /* 005fc47e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fc485: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc48a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc48fu); f_005caba4();
    /* 005fc48f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc490: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fc493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc495: je 0x5fc4cf */ if (fZ) goto L_005fc4cf;
L_005fc497:; BB(0x005fc497);
    /* 005fc497: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fc49e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc4a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc4a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc4ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc4ac: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc4b2: call 0x5fc4e4 */ r_esp -= 4; W32(r_esp, 0x5fc4b7u); f_005fc4e4();
    /* 005fc4b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc4ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fc4c1:; BB(0x005fc4c1);
    /* 005fc4c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc4c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc4cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc4cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc4ce: ret  */ FN_RET(0x005fc450); r_esp += 4; return;
L_005fc4cf:; BB(0x005fc4cf);
    /* 005fc4cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc4d1: jmp 0x5fc4c1 */ goto L_005fc4c1;
L_005fc4d3:; BB(0x005fc4d3);
    /* 005fc4d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc4d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc4d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc4df: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc4e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc4e2: ret  */ FN_RET(0x005fc450); r_esp += 4; return;
}

void f_005fc4e4(void) /* sub_5FC4E4 */
{
    FN_ENTER(0x005fc4e4);
    /* 005fc4e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc4e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fc4e7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc4eb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc4ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fc4f1: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fc4f6u); f_005e959c();
    /* 005fc4f6: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fc4fc: mov dword ptr [ebx], 0xb1a840 */ W32((u32)(r_ebx), 0xb1a840u);
    /* 005fc502: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc508: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fc50e: mov dword ptr [ebx + 0x240], 0x2aaa */ W32((u32)(r_ebx+0x240u), 0x2aaau);
    /* 005fc518: mov eax, ebx */ r_eax = r_ebx;
    /* 005fc51a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc51b: ret 8 */ FN_RET(0x005fc4e4); r_esp += 12; return;
}

void f_005fc520(void) /* sub_5FC520 */
{
    FN_ENTER(0x005fc520);
    /* 005fc520: mov dword ptr [0xa8e1c8], 0x3f800000 */ W32((u32)(0xa8e1c8u), 0x3f800000u);
    /* 005fc52a: mov dword ptr [0xa8e1cc], 0x41000000 */ W32((u32)(0xa8e1ccu), 0x41000000u);
    /* 005fc534: mov dword ptr [0xa8e1d0], 0x3fc00000 */ W32((u32)(0xa8e1d0u), 0x3fc00000u);
    /* 005fc53e: ret  */ FN_RET(0x005fc520); r_esp += 4; return;
}

void f_005fc540(void) /* sub_5FC540 */
{
    FN_ENTER(0x005fc540);
    /* 005fc540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc541: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc545: push 0x8de1e4 */ { u32 v = 0x8de1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc54a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc551: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc558: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc55b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc55e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fc561: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fc564: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fc567: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fc56a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fc56d: mov eax, ecx */ r_eax = r_ecx;
    /* 005fc56f: mov dword ptr [eax], 0xb1a9c0 */ W32((u32)(r_eax), 0xb1a9c0u);
    /* 005fc575: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc57c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fc581u); f_005e61c8();
    /* 005fc581: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc584: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc586: jne 0x5fc598 */ if (!fZ) goto L_005fc598;
L_005fc588:; BB(0x005fc588);
    /* 005fc588: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc58b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc592: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc594: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc595: ret 4 */ FN_RET(0x005fc540); r_esp += 8; return;
L_005fc598:; BB(0x005fc598);
    /* 005fc598: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fc59b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc59c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fc5a1u); f_005c2f74();
    /* 005fc5a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc5a2: jmp 0x5fc588 */ goto L_005fc588;
}

void f_005fc5a4(void) /* sub_5FC5A4 */
{
    FN_ENTER(0x005fc5a4);
    /* 005fc5a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5a5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc5a8: mov edi, ecx */ r_edi = r_ecx;
    /* 005fc5aa: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fc5b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc5b4: je 0x5fc5bb */ if (fZ) goto L_005fc5bb;
L_005fc5b6:; BB(0x005fc5b6);
    /* 005fc5b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc5b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fc5ba: ret  */ FN_RET(0x005fc5a4); r_esp += 4; return;
L_005fc5bb:; BB(0x005fc5bb);
    /* 005fc5bb: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5c0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5c3: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc5c9: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x5fc5ceu); f_005cc64c();
    /* 005fc5ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fc5d1: mov ecx, edi */ r_ecx = r_edi;
    /* 005fc5d3: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5fc5d8u); f_005e90b0();
    /* 005fc5d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc5da: je 0x5fc616 */ if (fZ) goto L_005fc616;
L_005fc5dc:; BB(0x005fc5dc);
    /* 005fc5dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fc5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5e0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 005fc5e4: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fc5e9u); f_005e83c8();
    /* 005fc5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc5eb: je 0x5fc5b6 */ if (fZ) goto L_005fc5b6;
L_005fc5ed:; BB(0x005fc5ed);
    /* 005fc5ed: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fc5f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5f2: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005fc5f8: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc5fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc5fd: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x5fc602u); f_006e9848();
    /* 005fc602: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fc605: push 0x3d8f5c29 */ { u32 v = 0x3d8f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc60a: mov ecx, edi */ r_ecx = r_edi;
    /* 005fc60c: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5fc611u); f_005e75bc();
    /* 005fc611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc614: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fc615: ret  */ FN_RET(0x005fc5a4); r_esp += 4; return;
L_005fc616:; BB(0x005fc616);
    /* 005fc616: mov ecx, edi */ r_ecx = r_edi;
    /* 005fc618: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fc61du); f_005e90e8();
    /* 005fc61d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc620: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fc621: ret  */ FN_RET(0x005fc5a4); r_esp += 4; return;
}

void f_005fc624(void) /* sub_5FC624 */
{
    FN_ENTER(0x005fc624);
    /* 005fc624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc625: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc629: push 0x8de226 */ { u32 v = 0x8de226u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc62e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc63c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc63f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc642: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005fc645: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005fc648: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005fc64b: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005fc651: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fc654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc656: je 0x5fc718 */ if (fZ) goto L_005fc718;
L_005fc65c:; BB(0x005fc65c);
    /* 005fc65c: mov eax, ecx */ r_eax = r_ecx;
    /* 005fc65e: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005fc665: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc667: jne 0x5fc6c5 */ if (!fZ) goto L_005fc6c5;
L_005fc669:; BB(0x005fc669);
    /* 005fc669: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005fc670: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc672: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc677u); f_005caba4();
    /* 005fc677: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fc67a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fc67d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fc680: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc682: je 0x5fc718 */ if (fZ) goto L_005fc718;
L_005fc688:; BB(0x005fc688);
    /* 005fc688: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005fc68f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fc696: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fc699: mov ecx, eax */ r_ecx = r_eax;
    /* 005fc69b: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6a0: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005fc6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6a8: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc6ae: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5fc6b3u); f_005e5cac();
    /* 005fc6b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fc6b6: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005fc6bc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005fc6c3: jmp 0x5fc718 */ goto L_005fc718;
L_005fc6c5:; BB(0x005fc6c5);
    /* 005fc6c5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005fc6cc: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6ce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc6d3u); f_005caba4();
    /* 005fc6d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fc6d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fc6d9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005fc6dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc6de: je 0x5fc718 */ if (fZ) goto L_005fc718;
L_005fc6e0:; BB(0x005fc6e0);
    /* 005fc6e0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005fc6e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc6ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fc6f1: mov ecx, eax */ r_ecx = r_eax;
    /* 005fc6f3: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6f5: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005fc6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6fd: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc703: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5fc708u); f_005e5cac();
    /* 005fc708: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fc70b: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005fc711: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005fc718:; BB(0x005fc718);
    /* 005fc718: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc71b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc722: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc725: ret  */ FN_RET(0x005fc624); r_esp += 4; return;
}

void f_005fc728(void) /* sub_5FC728 */
{
    FN_ENTER(0x005fc728);
    /* 005fc728: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc729: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc72c: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005fc732: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc734: je 0x5fc834 */ if (fZ) goto L_005fc834;
L_005fc73a:; BB(0x005fc73a);
    /* 005fc73a: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 005fc740: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fc746: mov edx, dword ptr [edx + 0x328] */ r_edx = R32((u32)(r_edx+0x328u));
    /* 005fc74c: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fc74f: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005fc752: je 0x5fc769 */ if (fZ) goto L_005fc769;
L_005fc754:; BB(0x005fc754);
    /* 005fc754: fld dword ptr [0x92df14] */ FPUSH(R_F32((u32)(0x92df14u)));
    /* 005fc75a: fld dword ptr [0x92df10] */ FPUSH(R_F32((u32)(0x92df10u)));
    /* 005fc760: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fc762: mov ebx, 0x4000 */ r_ebx = 0x4000u;
    /* 005fc767: jmp 0x5fc7a8 */ goto L_005fc7a8;
L_005fc769:; BB(0x005fc769);
    /* 005fc769: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005fc76c: je 0x5fc786 */ if (fZ) goto L_005fc786;
L_005fc76e:; BB(0x005fc76e);
    /* 005fc76e: fld dword ptr [0x92df0c] */ FPUSH(R_F32((u32)(0x92df0cu)));
    /* 005fc774: fld dword ptr [0x92df08] */ FPUSH(R_F32((u32)(0x92df08u)));
    /* 005fc77a: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 005fc77f: mov ebx, 0xffffc000 */ r_ebx = 0xffffc000u;
    /* 005fc784: jmp 0x5fc7a8 */ goto L_005fc7a8;
L_005fc786:; BB(0x005fc786);
    /* 005fc786: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc78c: je 0x5fc839 */ if (fZ) goto L_005fc839;
L_005fc792:; BB(0x005fc792);
    /* 005fc792: fld dword ptr [0x92df04] */ FPUSH(R_F32((u32)(0x92df04u)));
    /* 005fc798: fld dword ptr [0x92df00] */ FPUSH(R_F32((u32)(0x92df00u)));
    /* 005fc79e: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005fc7a3: mov ebx, 0x2000 */ r_ebx = 0x2000u;
L_005fc7a8:; BB(0x005fc7a8);
    /* 005fc7a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc7aa: jne 0x5fc828 */ if (!fZ) goto L_005fc828;
L_005fc7ac:; BB(0x005fc7ac);
    /* 005fc7ac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005fc7ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005fc7b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fc7b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fc7b3: jae 0x5fc7c6 */ if (!fC) goto L_005fc7c6;
L_005fc7b5:; BB(0x005fc7b5);
    /* 005fc7b5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005fc7b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc7b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc7bb: mov dword ptr [ecx + 0x240], edx */ W32((u32)(r_ecx+0x240u), r_edx);
    /* 005fc7c1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc7c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc7c5: ret  */ FN_RET(0x005fc728); r_esp += 4; return;
L_005fc7c6:; BB(0x005fc7c6);
    /* 005fc7c6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005fc7c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fc7ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fc7cb: jb 0x5fc817 */ if (fC) goto L_005fc817;
L_005fc7cd:; BB(0x005fc7cd);
    /* 005fc7cd: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005fc7cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fc7d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fc7d2: ja 0x5fc817 */ if ((!fC&&!fZ)) goto L_005fc817;
L_005fc7d4:; BB(0x005fc7d4);
    /* 005fc7d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005fc7d6: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 005fc7d8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005fc7da: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005fc7dd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005fc7e0: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005fc7e2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005fc7e6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005fc7ea: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 005fc7ec: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005fc7ee: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005fc7f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005fc7f2: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005fc7f6: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005fc7fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fc800: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005fc804: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005fc808: fistp dword ptr [ecx + 0x240] */ W32((u32)(r_ecx+0x240u), (u32)fx_int32(ST(0))); FPOP();
    /* 005fc80e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005fc812: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc815: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc816: ret  */ FN_RET(0x005fc728); r_esp += 4; return;
L_005fc817:; BB(0x005fc817);
    /* 005fc817: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc819: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc81b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc81d: mov dword ptr [ecx + 0x240], ebx */ W32((u32)(r_ecx+0x240u), r_ebx);
    /* 005fc823: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc826: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc827: ret  */ FN_RET(0x005fc728); r_esp += 4; return;
L_005fc828:; BB(0x005fc828);
    /* 005fc828: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc82a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc82c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc82e: mov dword ptr [ecx + 0x240], ebx */ W32((u32)(r_ecx+0x240u), r_ebx);
L_005fc834:; BB(0x005fc834);
    /* 005fc834: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc837: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc838: ret  */ FN_RET(0x005fc728); r_esp += 4; return;
L_005fc839:; BB(0x005fc839);
    /* 005fc839: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fc83b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc83e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc83f: ret  */ FN_RET(0x005fc728); r_esp += 4; return;
}

void f_005fc840(void) /* sub_5FC840 */
{
    FN_ENTER(0x005fc840);
    /* 005fc840: mov dword ptr [ecx + 0x240], 0 */ W32((u32)(r_ecx+0x240u), 0x0u);
    /* 005fc84a: ret  */ FN_RET(0x005fc840); r_esp += 4; return;
}

void f_005fc84c(void) /* sub_5FC84C */
{
    FN_ENTER(0x005fc84c);
    /* 005fc84c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc84d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc84f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc851: push 0x8de24c */ { u32 v = 0x8de24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc856: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc85d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc864: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc867: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc86a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fc86d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fc870: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fc873: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc878: je 0x5fc8cf */ if (fZ) goto L_005fc8cf;
L_005fc87a:; BB(0x005fc87a);
    /* 005fc87a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fc881: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc886: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc88bu); f_005caba4();
    /* 005fc88b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc88c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fc88f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc891: je 0x5fc8cb */ if (fZ) goto L_005fc8cb;
L_005fc893:; BB(0x005fc893);
    /* 005fc893: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fc89a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc8a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc8a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc8a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc8a8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc8ae: call 0x5fc8e0 */ r_esp -= 4; W32(r_esp, 0x5fc8b3u); f_005fc8e0();
    /* 005fc8b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc8b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fc8bd:; BB(0x005fc8bd);
    /* 005fc8bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc8c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc8c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc8c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc8ca: ret  */ FN_RET(0x005fc84c); r_esp += 4; return;
L_005fc8cb:; BB(0x005fc8cb);
    /* 005fc8cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc8cd: jmp 0x5fc8bd */ goto L_005fc8bd;
L_005fc8cf:; BB(0x005fc8cf);
    /* 005fc8cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc8d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc8d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc8db: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc8dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc8de: ret  */ FN_RET(0x005fc84c); r_esp += 4; return;
}

void f_005fc8e0(void) /* sub_5FC8E0 */
{
    FN_ENTER(0x005fc8e0);
    /* 005fc8e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc8e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fc8e3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc8e7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc8eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fc8ed: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fc8f2u); f_005e959c();
    /* 005fc8f2: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005fc8f9: mov dword ptr [ebx], 0xb1a9c0 */ W32((u32)(r_ebx), 0xb1a9c0u);
    /* 005fc8ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc902: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005fc90c: je 0x5fc914 */ if (fZ) goto L_005fc914;
L_005fc90e:; BB(0x005fc90e);
    /* 005fc90e: mov eax, ebx */ r_eax = r_ebx;
    /* 005fc910: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc911: ret 8 */ FN_RET(0x005fc8e0); r_esp += 12; return;
L_005fc914:; BB(0x005fc914);
    /* 005fc914: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fc91a: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc91d: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fc923: jmp 0x5fc90e */ goto L_005fc90e;
}

void f_005fc928(void) /* sub_5FC928 */
{
    FN_ENTER(0x005fc928);
    /* 005fc928: mov dword ptr [0xa8e1d4], 0x3f800000 */ W32((u32)(0xa8e1d4u), 0x3f800000u);
    /* 005fc932: mov dword ptr [0xa8e1d8], 0x41000000 */ W32((u32)(0xa8e1d8u), 0x41000000u);
    /* 005fc93c: mov dword ptr [0xa8e1dc], 0x3fc00000 */ W32((u32)(0xa8e1dcu), 0x3fc00000u);
    /* 005fc946: ret  */ FN_RET(0x005fc928); r_esp += 4; return;
}

void f_005fc948(void) /* sub_5FC948 */
{
    FN_ENTER(0x005fc948);
    /* 005fc948: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc949: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fc94b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fc94d: call 0x5fc96c */ r_esp -= 4; W32(r_esp, 0x5fc952u); f_005fc96c();
    /* 005fc952: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fc956: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc958: jne 0x5fc95e */ if (!fZ) goto L_005fc95e;
L_005fc95a:; BB(0x005fc95a);
    /* 005fc95a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc95b: ret 4 */ FN_RET(0x005fc948); r_esp += 8; return;
L_005fc95e:; BB(0x005fc95e);
    /* 005fc95e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc95f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fc964u); f_005c2f74();
    /* 005fc964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc965: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fc966: ret 4 */ FN_RET(0x005fc948); r_esp += 8; return;
}

void f_005fc96c(void) /* sub_5FC96C */
{
    FN_ENTER(0x005fc96c);
    /* 005fc96c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc96d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc96f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc971: push 0x8de268 */ { u32 v = 0x8de268u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc976: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc97c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc97d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc984: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc987: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc98a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fc98d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fc990: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fc993: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fc996: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fc999: mov dword ptr [ecx], 0xb1ab40 */ W32((u32)(r_ecx), 0xb1ab40u);
    /* 005fc99f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc9a6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fc9abu); f_005e61c8();
    /* 005fc9ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc9ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc9b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc9b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc9b8: ret  */ FN_RET(0x005fc96c); r_esp += 4; return;
}

void f_005fc9bc(void) /* sub_5FC9BC */
{
    FN_ENTER(0x005fc9bc);
    /* 005fc9bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc9bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc9bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc9c1: push 0x8de290 */ { u32 v = 0x8de290u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc9c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc9cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fc9d4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc9d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fc9da: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005fc9dd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005fc9e0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005fc9e3: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005fc9e9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fc9ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc9ee: je 0x5fca4d */ if (fZ) goto L_005fca4d;
L_005fc9f0:; BB(0x005fc9f0);
    /* 005fc9f0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005fc9f7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc9f9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fc9feu); f_005caba4();
    /* 005fc9fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fca01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fca04: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fca07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fca09: je 0x5fca4d */ if (fZ) goto L_005fca4d;
L_005fca0b:; BB(0x005fca0b);
    /* 005fca0b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005fca12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fca19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fca1c: mov ecx, eax */ r_ecx = r_eax;
    /* 005fca1e: push 0xe10 */ { u32 v = 0xe10u; r_esp -= 4; W32(r_esp, v); }
    /* 005fca23: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005fca2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fca2b: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fca31: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5fca36u); f_005e5cac();
    /* 005fca36: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fca39: mov dword ptr [eax], 0xb0f820 */ W32((u32)(r_eax), 0xb0f820u);
    /* 005fca3f: mov dword ptr [eax + 0x2c], 0x3e800000 */ W32((u32)(r_eax+0x2cu), 0x3e800000u);
    /* 005fca46: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fca4d:; BB(0x005fca4d);
    /* 005fca4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fca50: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005fca56: movzx edx, word ptr [eax + 0x11a] */ r_edx = (u32)R16((u32)(r_eax+0x11au));
    /* 005fca5d: mov word ptr [ecx + 0x240], dx */ W16((u32)(r_ecx+0x240u), (u16)r_edx);
    /* 005fca64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fca67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fca6e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fca70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fca71: ret  */ FN_RET(0x005fc9bc); r_esp += 4; return;
}

void f_005fca74(void) /* sub_5FCA74 */
{
    FN_ENTER(0x005fca74);
    /* 005fca74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fca75: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fca77: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005fca7d: movsx eax, word ptr [ebp + 0x240] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x240u));
    /* 005fca84: cmp ax, word ptr [edx + 0x11a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x11au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005fca8b: jge 0x5fcab6 */ if ((fS==fO)) goto L_005fcab6;
L_005fca8d:; BB(0x005fca8d);
    /* 005fca8d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fca8f: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5fca94u); f_005c37bc();
    /* 005fca94: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fca97: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005fca9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fca9b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fca9d: call 0x5c37a0 */ r_esp -= 4; W32(r_esp, 0x5fcaa2u); f_005c37a0();
    /* 005fcaa2: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005fcaa8: movzx edx, word ptr [eax + 0x11a] */ r_edx = (u32)R16((u32)(r_eax+0x11au));
    /* 005fcaaf: mov word ptr [ebp + 0x240], dx */ W16((u32)(r_ebp+0x240u), (u16)r_edx);
L_005fcab6:; BB(0x005fcab6);
    /* 005fcab6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fcab8: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5fcabdu); f_005c37bc();
    /* 005fcabd: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005fcac0: cmp eax, 0x59d8 */ {  u32 a = r_eax; u32 b = 0x59d8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fcac5: jl 0x5fcadf */ if ((fS!=fO)) goto L_005fcadf;
L_005fcac7:; BB(0x005fcac7);
    /* 005fcac7: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005fcacd: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcad2: jne 0x5fcadf */ if (!fZ) goto L_005fcadf;
L_005fcad4:; BB(0x005fcad4);
    /* 005fcad4: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcad9: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
L_005fcadf:; BB(0x005fcadf);
    /* 005fcadf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcae0: ret  */ FN_RET(0x005fca74); r_esp += 4; return;
}

void f_005fcae4(void) /* sub_5FCAE4 */
{
    FN_ENTER(0x005fcae4);
    /* 005fcae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fcae5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcae8: mov esi, ecx */ r_esi = r_ecx;
    /* 005fcaea: mov ecx, esi */ r_ecx = r_esi;
    /* 005fcaec: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5fcaf1u); f_005c37bc();
    /* 005fcaf1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005fcaf4: cmp eax, 0x59d8 */ {  u32 a = r_eax; u32 b = 0x59d8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fcaf9: jl 0x5fcb16 */ if ((fS!=fO)) goto L_005fcb16;
L_005fcafb:; BB(0x005fcafb);
    /* 005fcafb: mov byte ptr [esp + 1], 0x32 */ W8((u32)(r_esp+0x1u), 0x32u);
    /* 005fcb00: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fcb03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fcb05: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005fcb08: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005fcb0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb0e: call 0x5c4600 */ r_esp -= 4; W32(r_esp, 0x5fcb13u); f_005c4600();
    /* 005fcb13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fcb16:; BB(0x005fcb16);
    /* 005fcb16: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fcb19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fcb1a: ret  */ FN_RET(0x005fcae4); r_esp += 4; return;
}

void f_005fcb1c(void) /* sub_5FCB1C */
{
    FN_ENTER(0x005fcb1c);
    /* 005fcb1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb1d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcb1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb21: push 0x8de2b8 */ { u32 v = 0x8de2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fcb2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fcb34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcb37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fcb3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fcb3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fcb40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fcb43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcb46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb48: je 0x5fcb9f */ if (fZ) goto L_005fcb9f;
L_005fcb4a:; BB(0x005fcb4a);
    /* 005fcb4a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fcb51: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb56: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fcb5bu); f_005caba4();
    /* 005fcb5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fcb5c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fcb5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb61: je 0x5fcb9b */ if (fZ) goto L_005fcb9b;
L_005fcb63:; BB(0x005fcb63);
    /* 005fcb63: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fcb6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fcb71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcb74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fcb77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb78: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcb7e: call 0x5fcbb0 */ r_esp -= 4; W32(r_esp, 0x5fcb83u); f_005fcbb0();
    /* 005fcb83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fcb86: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fcb8d:; BB(0x005fcb8d);
    /* 005fcb8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcb90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcb97: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcb99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcb9a: ret  */ FN_RET(0x005fcb1c); r_esp += 4; return;
L_005fcb9b:; BB(0x005fcb9b);
    /* 005fcb9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcb9d: jmp 0x5fcb8d */ goto L_005fcb8d;
L_005fcb9f:; BB(0x005fcb9f);
    /* 005fcb9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcba1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcba4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcbab: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcbad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcbae: ret  */ FN_RET(0x005fcb1c); r_esp += 4; return;
}

void f_005fcbb0(void) /* sub_5FCBB0 */
{
    FN_ENTER(0x005fcbb0);
    /* 005fcbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbb1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fcbb3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcbb7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcbbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fcbbd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fcbc2u); f_005e959c();
    /* 005fcbc2: mov dword ptr [ebp], 0xb1ab40 */ W32((u32)(r_ebp), 0xb1ab40u);
    /* 005fcbc9: mov eax, ebp */ r_eax = r_ebp;
    /* 005fcbcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcbcc: ret 8 */ FN_RET(0x005fcbb0); r_esp += 12; return;
}

void f_005fcbd0(void) /* sub_5FCBD0 */
{
    FN_ENTER(0x005fcbd0);
    /* 005fcbd0: mov dword ptr [0xa8e1e0], 0x3f800000 */ W32((u32)(0xa8e1e0u), 0x3f800000u);
    /* 005fcbda: mov dword ptr [0xa8e1e4], 0x41000000 */ W32((u32)(0xa8e1e4u), 0x41000000u);
    /* 005fcbe4: mov dword ptr [0xa8e1e8], 0x3fc00000 */ W32((u32)(0xa8e1e8u), 0x3fc00000u);
    /* 005fcbee: ret  */ FN_RET(0x005fcbd0); r_esp += 4; return;
}

void f_005fcbf0(void) /* sub_5FCBF0 */
{
    FN_ENTER(0x005fcbf0);
    /* 005fcbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcbf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbf5: push 0x8de2d4 */ { u32 v = 0x8de2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fcc00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fcc08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcc0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fcc0e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fcc11: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fcc14: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fcc17: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fcc1a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fcc1d: mov eax, ecx */ r_eax = r_ecx;
    /* 005fcc1f: mov dword ptr [eax], 0xb1acc0 */ W32((u32)(r_eax), 0xb1acc0u);
    /* 005fcc25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fcc2c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fcc31u); f_005e61c8();
    /* 005fcc31: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcc34: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcc36: jne 0x5fcc48 */ if (!fZ) goto L_005fcc48;
L_005fcc38:; BB(0x005fcc38);
    /* 005fcc38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcc3b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcc42: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcc44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcc45: ret 4 */ FN_RET(0x005fcbf0); r_esp += 8; return;
L_005fcc48:; BB(0x005fcc48);
    /* 005fcc48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fcc4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc4c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fcc51u); f_005c2f74();
    /* 005fcc51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fcc52: jmp 0x5fcc38 */ goto L_005fcc38;
}

void f_005fcc54(void) /* sub_5FCC54 */
{
    FN_ENTER(0x005fcc54);
    /* 005fcc54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fcc57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fcc59: mov dword ptr [0xa8e1f8], 0 */ W32((u32)(0xa8e1f8u), 0x0u);
    /* 005fcc63: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5fcc68u); f_005e84a8();
    /* 005fcc68: mov dword ptr [0xa8e1f8], 1 */ W32((u32)(0xa8e1f8u), 0x1u);
    /* 005fcc72: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fcc76: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5fcc7bu); f_005e6334();
    /* 005fcc7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fcc7c: ret  */ FN_RET(0x005fcc54); r_esp += 4; return;
}

void f_005fcc80(void) /* sub_5FCC80 */
{
    FN_ENTER(0x005fcc80);
    /* 005fcc80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc82: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcc85: mov esi, ecx */ r_esi = r_ecx;
    /* 005fcc87: mov ecx, esi */ r_ecx = r_esi;
    /* 005fcc89: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5fcc8eu); f_005e7f6c();
    /* 005fcc8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcc90: jne 0x5fcca5 */ if (!fZ) goto L_005fcca5;
L_005fcc92:; BB(0x005fcc92);
    /* 005fcc92: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc97: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcc9d: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5fcca2u); f_005cc3b0();
    /* 005fcca2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fcca5:; BB(0x005fcca5);
    /* 005fcca5: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fccab: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x5fccb0u); f_00687660();
    /* 005fccb0: mov ebp, eax */ r_ebp = r_eax;
    /* 005fccb2: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fccb8: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fccbe: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5fccc3u); f_006a3250();
    /* 005fccc3: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fccc9: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005fcccb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005fcccd: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005fcccf: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005fccd3: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fccd5: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 005fccd8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fccdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fccdc: push dword ptr [edx + ebp*4 + 0x9c2900] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9c2900u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcce3: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5fcce9u); call_ind(t); }
    /* 005fcce9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fccec: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fccf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fccf2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fccf7u); f_0050b510();
    /* 005fccf7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fccfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fccfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fccfc: ret  */ FN_RET(0x005fcc80); r_esp += 4; return;
}

void f_005fcd00(void) /* sub_5FCD00 */
{
    FN_ENTER(0x005fcd00);
    /* 005fcd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd01: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcd03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd05: push 0x8de2fc */ { u32 v = 0x8de2fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fcd10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fcd18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcd1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fcd1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fcd21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fcd24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fcd27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcd2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcd2c: je 0x5fcd83 */ if (fZ) goto L_005fcd83;
L_005fcd2e:; BB(0x005fcd2e);
    /* 005fcd2e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fcd35: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd3a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fcd3fu); f_005caba4();
    /* 005fcd3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fcd40: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fcd43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcd45: je 0x5fcd7f */ if (fZ) goto L_005fcd7f;
L_005fcd47:; BB(0x005fcd47);
    /* 005fcd47: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fcd4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fcd55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcd58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fcd5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd5c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcd62: call 0x5fcd94 */ r_esp -= 4; W32(r_esp, 0x5fcd67u); f_005fcd94();
    /* 005fcd67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fcd6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fcd71:; BB(0x005fcd71);
    /* 005fcd71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcd7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcd7e: ret  */ FN_RET(0x005fcd00); r_esp += 4; return;
L_005fcd7f:; BB(0x005fcd7f);
    /* 005fcd7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcd81: jmp 0x5fcd71 */ goto L_005fcd71;
L_005fcd83:; BB(0x005fcd83);
    /* 005fcd83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fcd85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcd8f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcd91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcd92: ret  */ FN_RET(0x005fcd00); r_esp += 4; return;
}

void f_005fcd94(void) /* sub_5FCD94 */
{
    FN_ENTER(0x005fcd94);
    /* 005fcd94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd95: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcd97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd99: push 0x8de318 */ { u32 v = 0x8de318u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fcda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcda5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fcdac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcdaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fcdb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fcdb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fcdb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fcdbb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcdbe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fcdc1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fcdc4: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fcdc9u); f_005e959c();
    /* 005fcdc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fcdd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fcdd3: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005fcdd9: mov dword ptr [ecx], 0xb1acc0 */ W32((u32)(r_ecx), 0xb1acc0u);
    /* 005fcddf: or eax, 0x241 */ {  u32 a = r_eax; u32 b = 0x241u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fcde4: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 005fcdea: call 0x6a76d4 */ r_esp -= 4; W32(r_esp, 0x5fcdefu); f_006a76d4();
    /* 005fcdef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fcdf2: mov byte ptr [edx + 0x210], al */ W8((u32)(r_edx+0x210u), (u8)r_eax);
    /* 005fcdf8: mov eax, edx */ r_eax = r_edx;
    /* 005fcdfa: mov dword ptr [edx + 0x214], 0xbf800000 */ W32((u32)(r_edx+0x214u), 0xbf800000u);
    /* 005fce04: mov dword ptr [edx + 0x1a0], 0x3e19999a */ W32((u32)(r_edx+0x1a0u), 0x3e19999au);
    /* 005fce0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fce18: mov esp, ebp */ r_esp = r_ebp;
    /* 005fce1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fce1b: ret 8 */ FN_RET(0x005fcd94); r_esp += 12; return;
}

void f_005fce20(void) /* sub_5FCE20 */
{
    FN_ENTER(0x005fce20);
    /* 005fce20: mov dword ptr [0xa8e1ec], 0x3f800000 */ W32((u32)(0xa8e1ecu), 0x3f800000u);
    /* 005fce2a: mov dword ptr [0xa8e1f0], 0x41000000 */ W32((u32)(0xa8e1f0u), 0x41000000u);
    /* 005fce34: mov dword ptr [0xa8e1f4], 0x3fc00000 */ W32((u32)(0xa8e1f4u), 0x3fc00000u);
    /* 005fce3e: ret  */ FN_RET(0x005fce20); r_esp += 4; return;
}

void f_005fce40(void) /* sub_5FCE40 */
{
    FN_ENTER(0x005fce40);
    /* 005fce40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fce41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fce43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fce45: call 0x5fce64 */ r_esp -= 4; W32(r_esp, 0x5fce4au); f_005fce64();
    /* 005fce4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fce4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fce50: jne 0x5fce56 */ if (!fZ) goto L_005fce56;
L_005fce52:; BB(0x005fce52);
    /* 005fce52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fce53: ret 4 */ FN_RET(0x005fce40); r_esp += 8; return;
L_005fce56:; BB(0x005fce56);
    /* 005fce56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fce57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fce5cu); f_005c2f74();
    /* 005fce5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fce5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fce5e: ret 4 */ FN_RET(0x005fce40); r_esp += 8; return;
}

void f_005fce64(void) /* sub_5FCE64 */
{
    FN_ENTER(0x005fce64);
    /* 005fce64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fce65: mov ebp, esp */ r_ebp = r_esp;
    /* 005fce67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fce69: push 0x8de334 */ { u32 v = 0x8de334u; r_esp -= 4; W32(r_esp, v); }
    /* 005fce6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fce74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fce75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fce7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fce7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fce82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fce85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fce88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fce8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fce8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fce91: mov dword ptr [ecx], 0xb1ae60 */ W32((u32)(r_ecx), 0xb1ae60u);
    /* 005fce97: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fce9e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fcea3u); f_005e61c8();
    /* 005fcea3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcea6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcead: mov esp, ebp */ r_esp = r_ebp;
    /* 005fceaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fceb0: ret  */ FN_RET(0x005fce64); r_esp += 4; return;
}

void f_005fceb4(void) /* sub_5FCEB4 */
{
    FN_ENTER(0x005fceb4);
    /* 005fceb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fceb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fceb6: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fceb9: mov edi, ecx */ r_edi = r_ecx;
    /* 005fcebb: mov ecx, edi */ r_ecx = r_edi;
    /* 005fcebd: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5fcec2u); f_005e90b0();
    /* 005fcec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcec4: je 0x5fd02e */ if (fZ) goto L_005fd02e;
L_005fceca:; BB(0x005fceca);
    /* 005fceca: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005fced0: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005fced6: mov dword ptr [edi + 0x240], edx */ W32((u32)(r_edi+0x240u), r_edx);
    /* 005fcedc: mov ebp, dword ptr [eax + 0x8d4] */ r_ebp = R32((u32)(r_eax+0x8d4u));
    /* 005fcee2: mov dword ptr [edi + 0x244], ebp */ W32((u32)(r_edi+0x244u), r_ebp);
    /* 005fcee8: mov ebp, dword ptr [eax + 0x8d8] */ r_ebp = R32((u32)(r_eax+0x8d8u));
    /* 005fceee: mov dword ptr [edi + 0x248], ebp */ W32((u32)(r_edi+0x248u), r_ebp);
    /* 005fcef4: mov ebp, dword ptr [eax + 0x8dc] */ r_ebp = R32((u32)(r_eax+0x8dcu));
    /* 005fcefa: mov dword ptr [edi + 0x24c], ebp */ W32((u32)(r_edi+0x24cu), r_ebp);
    /* 005fcf00: mov ebp, dword ptr [eax + 0x8e0] */ r_ebp = R32((u32)(r_eax+0x8e0u));
    /* 005fcf06: mov dword ptr [edi + 0x250], ebp */ W32((u32)(r_edi+0x250u), r_ebp);
    /* 005fcf0c: mov ebp, dword ptr [eax + 0x8e4] */ r_ebp = R32((u32)(r_eax+0x8e4u));
    /* 005fcf12: mov dword ptr [edi + 0x254], ebp */ W32((u32)(r_edi+0x254u), r_ebp);
    /* 005fcf18: mov ebp, dword ptr [eax + 0x8e8] */ r_ebp = R32((u32)(r_eax+0x8e8u));
    /* 005fcf1e: mov dword ptr [edi + 0x258], ebp */ W32((u32)(r_edi+0x258u), r_ebp);
    /* 005fcf24: mov ebp, dword ptr [eax + 0x8ec] */ r_ebp = R32((u32)(r_eax+0x8ecu));
    /* 005fcf2a: mov dword ptr [edi + 0x25c], ebp */ W32((u32)(r_edi+0x25cu), r_ebp);
    /* 005fcf30: mov ebp, dword ptr [eax + 0x8f0] */ r_ebp = R32((u32)(r_eax+0x8f0u));
    /* 005fcf36: mov dword ptr [edi + 0x260], ebp */ W32((u32)(r_edi+0x260u), r_ebp);
    /* 005fcf3c: mov ebp, dword ptr [eax + 0x8f4] */ r_ebp = R32((u32)(r_eax+0x8f4u));
    /* 005fcf42: mov dword ptr [edi + 0x264], ebp */ W32((u32)(r_edi+0x264u), r_ebp);
    /* 005fcf48: mov eax, dword ptr [eax + 0x8f8] */ r_eax = R32((u32)(r_eax+0x8f8u));
    /* 005fcf4e: mov dword ptr [edi + 0x268], eax */ W32((u32)(r_edi+0x268u), r_eax);
    /* 005fcf54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005fcf56: jl 0x5fd035 */ if ((fS!=fO)) goto L_005fd035;
L_005fcf5c:; BB(0x005fcf5c);
    /* 005fcf5c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fcf5f: jg 0x5fd035 */ if ((!fZ&&fS==fO)) goto L_005fd035;
L_005fcf65:; BB(0x005fcf65);
    /* 005fcf65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005fcf67: jle 0x5fd035 */ if ((fZ||fS!=fO)) goto L_005fd035;
L_005fcf6d:; BB(0x005fcf6d);
    /* 005fcf6d: lea ebp, [edi + 0x26c] */ r_ebp = (u32)(r_edi+0x26cu);
    /* 005fcf73: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf76: mov ecx, edi */ r_ecx = r_edi;
    /* 005fcf78: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fcf7du); f_005e83c8();
    /* 005fcf7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcf7f: je 0x5fd035 */ if (fZ) goto L_005fd035;
L_005fcf85:; BB(0x005fcf85);
    /* 005fcf85: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005fcf89: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005fcf8c: mov edx, 0xb */ r_edx = 0xbu;
    /* 005fcf91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fcf93:; BB(0x005fcf93);
    /* 005fcf93: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 005fcf98: mov word ptr [ecx], si */ W16((u32)(r_ecx), (u16)r_esi);
    /* 005fcf9b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005fcf9d: mov word ptr [ecx + 2], si */ W16((u32)(r_ecx+0x2u), (u16)r_esi);
    /* 005fcfa1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005fcfa4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fcfa7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005fcfaa: jne 0x5fcf93 */ if (!fZ) goto L_005fcf93;
L_005fcfac:; BB(0x005fcfac);
    /* 005fcfac: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005fcfaf: mov eax, dword ptr [edi + 0x240] */ r_eax = R32((u32)(r_edi+0x240u));
    /* 005fcfb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005fcfb7: jl 0x5fcfbe */ if ((fS!=fO)) goto L_005fcfbe;
L_005fcfb9:; BB(0x005fcfb9);
    /* 005fcfb9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fcfbc: jle 0x5fcfc0 */ if ((fZ||fS!=fO)) goto L_005fcfc0;
L_005fcfbe:; BB(0x005fcfbe);
    /* 005fcfbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fcfc0:; BB(0x005fcfc0);
    /* 005fcfc0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005fcfc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fcfc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcfc8: je 0x5fd016 */ if (fZ) goto L_005fd016;
L_005fcfca:; BB(0x005fcfca);
    /* 005fcfca: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005fcfcd: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005fcfd0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fcfd2: lea edx, [edi + edx + 0x246] */ r_edx = (u32)(r_edi+r_edx+0x246u);
    /* 005fcfd9: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005fcfdc: lea eax, [eax + eax + 4] */ r_eax = (u32)(r_eax+r_eax+0x4u);
    /* 005fcfe0: lea eax, [eax + edi + 0x240] */ r_eax = (u32)(r_eax+r_edi+0x240u);
L_005fcfe7:; BB(0x005fcfe7);
    /* 005fcfe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcfe9: je 0x5fd040 */ if (fZ) goto L_005fd040;
L_005fcfeb:; BB(0x005fcfeb);
    /* 005fcfeb: movzx esi, word ptr [edx - 2] */ r_esi = (u32)R16((u32)(r_edx+0xfffffffeu));
    /* 005fcfef: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcff5: je 0x5fd03b */ if (fZ) goto L_005fd03b;
L_005fcff7:; BB(0x005fcff7);
    /* 005fcff7: mov word ptr [esp + ecx*8 + 8], si */ W16((u32)(r_esp+r_ecx*8+0x8u), (u16)r_esi);
    /* 005fcffc: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 005fcfff: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fd002: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd005: mov word ptr [esp + ecx*8 + 0xa], si */ W16((u32)(r_esp+r_ecx*8+0xau), (u16)r_esi);
    /* 005fd00a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd00d: cmp ecx, dword ptr [esp + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd011: jne 0x5fcfe7 */ if (!fZ) goto L_005fcfe7;
L_005fd013:; BB(0x005fd013);
    /* 005fd013: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005fd016:; BB(0x005fd016);
    /* 005fd016: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005fd01a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd01c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd01d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd01e: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd024: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x5fd029u); f_006e6bf4();
    /* 005fd029: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd02c: jmp 0x5fd035 */ goto L_005fd035;
L_005fd02e:; BB(0x005fd02e);
    /* 005fd02e: mov ecx, edi */ r_ecx = r_edi;
    /* 005fd030: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fd035u); f_005e90e8();
L_005fd035:; BB(0x005fd035);
    /* 005fd035: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fd038: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd039: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fd03a: ret  */ FN_RET(0x005fceb4); r_esp += 4; return;
L_005fd03b:; BB(0x005fd03b);
    /* 005fd03b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005fd03e: jmp 0x5fd016 */ goto L_005fd016;
L_005fd040:; BB(0x005fd040);
    /* 005fd040: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005fd043: jmp 0x5fd016 */ goto L_005fd016;
}

