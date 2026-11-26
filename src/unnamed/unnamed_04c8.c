#include "protos.h"

void f_004c8059(void)
{
    FN_ENTER(0x004c8059);
    /* 004c8059: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c805f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c8062: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8065: jge 0x4c8077 */ if ((fS==fO)) goto L_004c8077;
L_004c8067:; BB(0x004c8067);
    /* 004c8067: mov dword ptr [ebp + 0x85c], eax */ W32((u32)(r_ebp+0x85cu), r_eax);
    /* 004c806d: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8074: ret 4 */ FN_RET(0x004c8059); r_esp += 8; return;
L_004c8077:; BB(0x004c8077);
    /* 004c8077: mov edx, dword ptr [ebp + 0x6e0] */ r_edx = R32((u32)(r_ebp+0x6e0u));
    /* 004c807d: mov dword ptr [ebp + 0x85c], 0 */ W32((u32)(r_ebp+0x85cu), 0x0u);
    /* 004c8087: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c808a: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c8090: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8092: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8093: ja 0x4c80a9 */ if ((!fC&&!fZ)) goto L_004c80a9;
L_004c8095:; BB(0x004c8095);
    /* 004c8095: mov dword ptr [ebp + 0x860], 1 */ W32((u32)(r_ebp+0x860u), 0x1u);
    /* 004c809f: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c80a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c80a6: ret 4 */ FN_RET(0x004c8059); r_esp += 8; return;
L_004c80a9:; BB(0x004c80a9);
    /* 004c80a9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c80ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c80ad: mov dword ptr [ebp + 0x86c], eax */ W32((u32)(r_ebp+0x86cu), r_eax);
    /* 004c80b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c80b5: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4c80bau); f_004c7670();
    /* 004c80ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c80bc: call 0x4c0a9c */ r_esp -= 4; W32(r_esp, 0x4c80c1u); f_004c0a9c();
    /* 004c80c1: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c80c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c80c8: ret 4 */ FN_RET(0x004c8059); r_esp += 8; return;
}

void f_004c80cb(void)
{
    FN_ENTER(0x004c80cb);
    /* 004c80cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c80cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c80ce: call 0x4c7644 */ r_esp -= 4; W32(r_esp, 0x4c80d3u); f_004c7644();
    /* 004c80d3: jmp 0x4c8467 */ goto L_004c8467;
L_004c8467:; BB(0x004c8467);
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c80cb); r_esp += 8; return;
}

void f_004c80d8(void)
{
    FN_ENTER(0x004c80d8);
    /* 004c80d8: push dword ptr [ebp + 0x86c] */ { u32 v = R32((u32)(r_ebp+0x86cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c80de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c80e0: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4c80e5u); f_004c7670();
    /* 004c80e5: jmp 0x4c8467 */ goto L_004c8467;
L_004c8467:; BB(0x004c8467);
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c80d8); r_esp += 8; return;
}

void f_004c80ea(void)
{
    FN_ENTER(0x004c80ea);
    /* 004c80ea: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c80ed: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004c80f2: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004c80f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c80fb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c8101u); call_ind(t); }
    /* 004c8101: mov dword ptr [ebp + 0x3ec], 1 */ W32((u32)(r_ebp+0x3ecu), 0x1u);
    /* 004c810b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c810d: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c8112u); f_004c1f00();
    /* 004c8112: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c8118: mov dword ptr [ebp + 0x85c], 0x64 */ W32((u32)(r_ebp+0x85cu), 0x64u);
    /* 004c8122: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c8125: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c812b: mov dword ptr [ebp + 0x860], 0 */ W32((u32)(r_ebp+0x860u), 0x0u);
    /* 004c8135: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c813b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c813c: ret 4 */ FN_RET(0x004c80ea); r_esp += 8; return;
}

void f_004c813f(void)
{
    FN_ENTER(0x004c813f);
    /* 004c813f: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c8145: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8148: je 0x4c8519 */ if (fZ) goto L_004c8519;
L_004c814e:; BB(0x004c814e);
    /* 004c814e: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c8154: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004c8157: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c815d: jne 0x4c8307 */ if (!fZ) goto L_004c8307;
L_004c8163:; BB(0x004c8163);
    /* 004c8163: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8169: jne 0x4c8241 */ if (!fZ) goto L_004c8241;
L_004c816f:; BB(0x004c816f);
    /* 004c816f: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8175: je 0x4c8467 */ if (fZ) goto L_004c8467;
L_004c817b:; BB(0x004c817b);
    /* 004c817b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c817d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c817f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c8182: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c8184: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c818au); call_ind(t); }
    /* 004c818a: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c818e: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c8194: mov byte ptr [esp + 0x90], 0xa8 */ W8((u32)(r_esp+0x90u), 0xa8u);
    /* 004c819c: mov edx, 8 */ r_edx = 0x8u;
    /* 004c81a1: mov byte ptr [esp + 0x91], 6 */ W8((u32)(r_esp+0x91u), 0x6u);
    /* 004c81a9: mov word ptr [esp + 0x92], ax */ W16((u32)(r_esp+0x92u), (u16)r_eax);
    /* 004c81b1: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c81b7: mov word ptr [esp + 0x94], dx */ W16((u32)(r_esp+0x94u), (u16)r_edx);
    /* 004c81bf: mov word ptr [esp + 0x96], ax */ W16((u32)(r_esp+0x96u), (u16)r_eax);
    /* 004c81c7: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c81ce: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 004c81d5: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c81db: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c81e2: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
    /* 004c81e9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c81eeu); f_008587a5();
    /* 004c81ee: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c81f2: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c81f6: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c81fc: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c8202: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 004c8209: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c820d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c8212: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8217: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c821b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c821f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8223: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c8227: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c822b: mov byte ptr [esp + 0xa4], al */ W8((u32)(r_esp+0xa4u), (u8)r_eax);
    /* 004c8232: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c8237u); f_008003e0();
    /* 004c8237: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c823d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c823e: ret 4 */ FN_RET(0x004c813f); r_esp += 8; return;
L_004c8241:; BB(0x004c8241);
    /* 004c8241: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8243: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c8245: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c8248: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c824a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8250u); call_ind(t); }
    /* 004c8250: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c8254: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c825a: mov byte ptr [esp + 0xa8], 0xa8 */ W8((u32)(r_esp+0xa8u), 0xa8u);
    /* 004c8262: mov edx, 0xf */ r_edx = 0xfu;
    /* 004c8267: mov byte ptr [esp + 0xa9], 6 */ W8((u32)(r_esp+0xa9u), 0x6u);
    /* 004c826f: mov word ptr [esp + 0xaa], ax */ W16((u32)(r_esp+0xaau), (u16)r_eax);
    /* 004c8277: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c827d: mov word ptr [esp + 0xac], dx */ W16((u32)(r_esp+0xacu), (u16)r_edx);
    /* 004c8285: mov word ptr [esp + 0xae], ax */ W16((u32)(r_esp+0xaeu), (u16)r_eax);
    /* 004c828d: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c8294: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 004c829b: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c82a1: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 004c82a8: mov dword ptr [esp + 0xb8], ecx */ W32((u32)(r_esp+0xb8u), r_ecx);
    /* 004c82af: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c82b4u); f_008587a5();
    /* 004c82b4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c82b8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c82bc: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c82c2: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c82c8: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 004c82cf: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c82d3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c82d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c82dd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c82e1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c82e5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c82e9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c82ed: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c82f1: mov byte ptr [esp + 0xbc], al */ W8((u32)(r_esp+0xbcu), (u8)r_eax);
    /* 004c82f8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c82fdu); f_008003e0();
    /* 004c82fd: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8304: ret 4 */ FN_RET(0x004c813f); r_esp += 8; return;
L_004c8307:; BB(0x004c8307);
    /* 004c8307: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8309: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c830b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c830e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c8310: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8316u); call_ind(t); }
    /* 004c8316: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c831a: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c8320: mov byte ptr [esp + 0xc0], 0xa8 */ W8((u32)(r_esp+0xc0u), 0xa8u);
    /* 004c8328: mov edx, 7 */ r_edx = 0x7u;
    /* 004c832d: mov byte ptr [esp + 0xc1], 6 */ W8((u32)(r_esp+0xc1u), 0x6u);
    /* 004c8335: mov word ptr [esp + 0xc2], ax */ W16((u32)(r_esp+0xc2u), (u16)r_eax);
    /* 004c833d: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c8343: mov word ptr [esp + 0xc4], dx */ W16((u32)(r_esp+0xc4u), (u16)r_edx);
    /* 004c834b: mov word ptr [esp + 0xc6], ax */ W16((u32)(r_esp+0xc6u), (u16)r_eax);
    /* 004c8353: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c835a: mov dword ptr [esp + 0xc8], eax */ W32((u32)(r_esp+0xc8u), r_eax);
    /* 004c8361: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c8367: mov dword ptr [esp + 0xcc], eax */ W32((u32)(r_esp+0xccu), r_eax);
    /* 004c836e: mov dword ptr [esp + 0xd0], ecx */ W32((u32)(r_esp+0xd0u), r_ecx);
    /* 004c8375: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c837au); f_008587a5();
    /* 004c837a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c837e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c8382: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c8388: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c838e: lea ecx, [esp + 0xc0] */ r_ecx = (u32)(r_esp+0xc0u);
    /* 004c8395: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c8399: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c839e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c83a3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c83a7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c83ab: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c83af: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c83b3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c83b7: mov byte ptr [esp + 0xd4], al */ W8((u32)(r_esp+0xd4u), (u8)r_eax);
    /* 004c83be: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c83c3u); f_008003e0();
    /* 004c83c3: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c83c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c83ca: ret 4 */ FN_RET(0x004c813f); r_esp += 8; return;
L_004c8467:; BB(0x004c8467);
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c813f); r_esp += 8; return;
L_004c8519:; BB(0x004c8519);
    /* 004c8519: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c851b: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004c851d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c8520: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c8522: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8528u); call_ind(t); }
    /* 004c8528: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c852c: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c8532: mov byte ptr [esp + 0xd8], 0xa8 */ W8((u32)(r_esp+0xd8u), 0xa8u);
    /* 004c853a: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c853f: mov byte ptr [esp + 0xd9], 6 */ W8((u32)(r_esp+0xd9u), 0x6u);
    /* 004c8547: mov word ptr [esp + 0xda], ax */ W16((u32)(r_esp+0xdau), (u16)r_eax);
    /* 004c854f: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c8555: mov word ptr [esp + 0xdc], dx */ W16((u32)(r_esp+0xdcu), (u16)r_edx);
    /* 004c855d: mov word ptr [esp + 0xde], ax */ W16((u32)(r_esp+0xdeu), (u16)r_eax);
    /* 004c8565: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c856c: mov dword ptr [esp + 0xe0], eax */ W32((u32)(r_esp+0xe0u), r_eax);
    /* 004c8573: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c8579: mov dword ptr [esp + 0xe4], eax */ W32((u32)(r_esp+0xe4u), r_eax);
    /* 004c8580: mov dword ptr [esp + 0xe8], ecx */ W32((u32)(r_esp+0xe8u), r_ecx);
    /* 004c8587: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c858cu); f_008587a5();
    /* 004c858c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c8590: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c8594: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c859a: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c85a0: lea ecx, [esp + 0xd8] */ r_ecx = (u32)(r_esp+0xd8u);
    /* 004c85a7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c85ab: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c85b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c85b5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c85b9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c85bd: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c85c1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c85c5: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c85c9: mov byte ptr [esp + 0xec], al */ W8((u32)(r_esp+0xecu), (u8)r_eax);
    /* 004c85d0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c85d5u); f_008003e0();
    /* 004c85d5: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c85db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c85dc: ret 4 */ FN_RET(0x004c813f); r_esp += 8; return;
}

void f_004c83cd(void)
{
    FN_ENTER(0x004c83cd);
    /* 004c83cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c83cf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c83d4u); f_007aa094();
    /* 004c83d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c83d6: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c83dbu); f_004c53d8();
    /* 004c83db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c83dd: call 0x4c1f18 */ r_esp -= 4; W32(r_esp, 0x4c83e2u); f_004c1f18();
    /* 004c83e2: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004c83e7: push dword ptr [ebp + 0x86c] */ { u32 v = R32((u32)(r_ebp+0x86cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c83ed: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c83f0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c83f5u); f_007a8c74();
    /* 004c83f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c83f8: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 004c83fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c83fd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c8402u); f_0082dcbc();
    /* 004c8402: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004c8406: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c8409: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c840eu); f_0082ddd8();
    /* 004c840e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004c8412: fld dword ptr [0x908580] */ FPUSH(R_F32((u32)(0x908580u)));
    /* 004c8418: mov eax, dword ptr [ebp + 0x75c] */ r_eax = R32((u32)(r_ebp+0x75cu));
    /* 004c841e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8420: je 0x4c8448 */ if (fZ) goto L_004c8448;
L_004c8422:; BB(0x004c8422);
    /* 004c8422: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8424: mov eax, 0x40000000 */ r_eax = 0x40000000u;
    /* 004c8429: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c842c: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004c8430: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c8434: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8436: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c8439: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c843d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c843f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c8443: call 0x4c32d8 */ r_esp -= 4; W32(r_esp, 0x4c8448u); f_004c32d8();
L_004c8448:; BB(0x004c8448);
    /* 004c8448: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c844b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004c844f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c8453: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8455: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c8458: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c845c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c8460: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c8462: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x4c8467u); f_00520aa8();
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c83cd); r_esp += 8; return;
}

void f_004c8467(void)
{
    FN_ENTER(0x004c8467);
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c8467); r_esp += 8; return;
}

void f_004c85e0(void) /* sub_4C85E0 */
{
    FN_ENTER(0x004c85e0);
    /* 004c85e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c85e1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c85e4: mov esi, ecx */ r_esi = r_ecx;
    /* 004c85e6: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004c85ea: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c85ed: ja 0x4c87f8 */ if ((!fC&&!fZ)) goto L_004c87f8;
L_004c85f3:; BB(0x004c85f3);
    /* 004c85f3: mov eax, dword ptr [eax*4 + 0x907c9c] */ r_eax = R32((u32)(r_eax*4+0x907c9cu));
    /* 004c85fa: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c87f8:; BB(0x004c87f8);
    /* 004c87f8: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87fc: ret 4 */ FN_RET(0x004c85e0); r_esp += 8; return;
}

void f_004c85fc(void)
{
    FN_ENTER(0x004c85fc);
    /* 004c85fc: mov ecx, esi */ r_ecx = r_esi;
    /* 004c85fe: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c8603u); f_004c32b0();
    /* 004c8603: jmp 0x4c87f8 */ goto L_004c87f8;
L_004c87f8:; BB(0x004c87f8);
    /* 004c87f8: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87fc: ret 4 */ FN_RET(0x004c85fc); r_esp += 8; return;
}

void f_004c8608(void)
{
    FN_ENTER(0x004c8608);
    /* 004c8608: mov ecx, esi */ r_ecx = r_esi;
    /* 004c860a: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c860fu); f_004c32c4();
    /* 004c860f: jmp 0x4c87f8 */ goto L_004c87f8;
L_004c87f8:; BB(0x004c87f8);
    /* 004c87f8: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87fc: ret 4 */ FN_RET(0x004c8608); r_esp += 8; return;
}

void f_004c8614(void)
{
    FN_ENTER(0x004c8614);
    /* 004c8614: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c8616: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8618: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4c861eu); call_ind(t); }
    /* 004c861e: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
    /* 004c8628: mov ecx, esi */ r_ecx = r_esi;
    /* 004c862a: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c862fu); f_004c473c();
    /* 004c862f: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c8635: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c8637: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c863a: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c863d: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c8643: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8645: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c864bu); call_ind(t); }
    /* 004c864b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c864d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c864f: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c8655u); call_ind(t); }
    /* 004c8655: mov dword ptr [esi + 0x85c], 0 */ W32((u32)(r_esi+0x85cu), 0x0u);
    /* 004c865f: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8662: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8663: ret 4 */ FN_RET(0x004c8614); r_esp += 8; return;
}

void f_004c8666(void)
{
    FN_ENTER(0x004c8666);
    /* 004c8666: mov edx, dword ptr [esi + 0x6e0] */ r_edx = R32((u32)(r_esi+0x6e0u));
    /* 004c866c: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c866f: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c8675: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8677: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8678: ja 0x4c872f */ if ((!fC&&!fZ)) goto L_004c872f;
L_004c867e:; BB(0x004c867e);
    /* 004c867e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c8681: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8687: je 0x4c87f8 */ if (fZ) goto L_004c87f8;
L_004c868d:; BB(0x004c868d);
    /* 004c868d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c868f: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8691: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c8693: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8695: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c869bu); call_ind(t); }
    /* 004c869b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c869f: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c86a5: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c86a9: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004c86ae: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c86b3: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c86b8: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c86be: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c86c3: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c86c8: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c86cf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c86d3: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c86d9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c86dd: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c86e1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c86e6u); f_008587a5();
    /* 004c86e6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c86ea: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c86ee: fdiv dword ptr [0x908578] */ ST(0) = ST(0) / R_F32((u32)(0x908578u));
    /* 004c86f4: fmul dword ptr [0x90857c] */ ST(0) = ST(0) * R_F32((u32)(0x90857cu));
    /* 004c86fa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c86fd: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c8701: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c8706: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c870b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c870f: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c8713: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8717: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c871b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c871f: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c8723: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c8728u); f_008003e0();
    /* 004c8728: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c872b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c872c: ret 4 */ FN_RET(0x004c8666); r_esp += 8; return;
L_004c872f:; BB(0x004c872f);
    /* 004c872f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8731: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004c8733: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c8735: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8737: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c873du); call_ind(t); }
    /* 004c873d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c8741: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c8747: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c874c: mov edx, 0x1d */ r_edx = 0x1du;
    /* 004c8751: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c8756: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c875b: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c8761: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c8766: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004c876b: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c8772: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c8776: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c877c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c8780: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c8784: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c8789u); f_008587a5();
    /* 004c8789: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c878d: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004c8791: fdiv dword ptr [0x908578] */ ST(0) = ST(0) / R_F32((u32)(0x908578u));
    /* 004c8797: fmul dword ptr [0x90857c] */ ST(0) = ST(0) * R_F32((u32)(0x90857cu));
    /* 004c879d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c87a1: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c87a5: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c87aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c87af: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c87b3: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c87b7: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c87bb: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c87bf: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c87c3: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c87c7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c87ccu); f_008003e0();
    /* 004c87cc: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87d0: ret 4 */ FN_RET(0x004c8666); r_esp += 8; return;
L_004c87f8:; BB(0x004c87f8);
    /* 004c87f8: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87fc: ret 4 */ FN_RET(0x004c8666); r_esp += 8; return;
}

void f_004c87d3(void)
{
    FN_ENTER(0x004c87d3);
    /* 004c87d3: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c87d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c87dc: mov dword ptr [esi + 0x85c], eax */ W32((u32)(r_esi+0x85cu), r_eax);
    /* 004c87e2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c87e5: jle 0x4c87f8 */ if ((fZ||fS!=fO)) goto L_004c87f8;
L_004c87e7:; BB(0x004c87e7);
    /* 004c87e7: mov ecx, esi */ r_ecx = r_esi;
    /* 004c87e9: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x4c87eeu); f_0041a874();
    /* 004c87ee: mov dword ptr [esi + 0x85c], 0 */ W32((u32)(r_esi+0x85cu), 0x0u);
L_004c87f8:; BB(0x004c87f8);
    /* 004c87f8: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87fc: ret 4 */ FN_RET(0x004c87d3); r_esp += 8; return;
}

void f_004c87f8(void)
{
    FN_ENTER(0x004c87f8);
    /* 004c87f8: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c87fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c87fc: ret 4 */ FN_RET(0x004c87f8); r_esp += 8; return;
}

void f_004c8800(void) /* sub_4C8800 */
{
    FN_ENTER(0x004c8800);
    /* 004c8800: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c8801: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c8802: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c8805: mov esi, ecx */ r_esi = r_ecx;
    /* 004c8807: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 004c880b: lea edi, [esi + 0x888] */ r_edi = (u32)(r_esi+0x888u);
    /* 004c8811: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c8814: ja 0x4c8a7e */ if ((!fC&&!fZ)) goto L_004c8a7e;
L_004c881a:; BB(0x004c881a);
    /* 004c881a: mov eax, dword ptr [eax*4 + 0x907ccc] */ r_eax = R32((u32)(r_eax*4+0x907cccu));
    /* 004c8821: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c8a7e:; BB(0x004c8a7e);
    /* 004c8a7e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a83: ret 4 */ FN_RET(0x004c8800); r_esp += 8; return;
}

void f_004c8823(void)
{
    FN_ENTER(0x004c8823);
    /* 004c8823: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c8829: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c882c: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c882f: jge 0x4c883f */ if ((fS==fO)) goto L_004c883f;
L_004c8831:; BB(0x004c8831);
    /* 004c8831: mov dword ptr [esi + 0x85c], eax */ W32((u32)(r_esi+0x85cu), r_eax);
    /* 004c8837: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c883a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c883b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c883c: ret 4 */ FN_RET(0x004c8823); r_esp += 8; return;
L_004c883f:; BB(0x004c883f);
    /* 004c883f: mov edx, dword ptr [esi + 0x6e0] */ r_edx = R32((u32)(r_esi+0x6e0u));
    /* 004c8845: mov dword ptr [esi + 0x85c], 0 */ W32((u32)(r_esi+0x85cu), 0x0u);
    /* 004c884f: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c8852: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c8858: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c885a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c885b: ja 0x4c886f */ if ((!fC&&!fZ)) goto L_004c886f;
L_004c885d:; BB(0x004c885d);
    /* 004c885d: mov dword ptr [esi + 0x860], 1 */ W32((u32)(r_esi+0x860u), 0x1u);
    /* 004c8867: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c886a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c886b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c886c: ret 4 */ FN_RET(0x004c8823); r_esp += 8; return;
L_004c886f:; BB(0x004c886f);
    /* 004c886f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c8872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8873: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 004c8876: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8878: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4c887du); f_004c7670();
    /* 004c887d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c887f: call 0x4c0a9c */ r_esp -= 4; W32(r_esp, 0x4c8884u); f_004c0a9c();
    /* 004c8884: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8887: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8888: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8889: ret 4 */ FN_RET(0x004c8823); r_esp += 8; return;
}

void f_004c888c(void)
{
    FN_ENTER(0x004c888c);
    /* 004c888c: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 004c888f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8890: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8892: call 0x4c7644 */ r_esp -= 4; W32(r_esp, 0x4c8897u); f_004c7644();
    /* 004c8897: jmp 0x4c8a7e */ goto L_004c8a7e;
L_004c8a7e:; BB(0x004c8a7e);
    /* 004c8a7e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a83: ret 4 */ FN_RET(0x004c888c); r_esp += 8; return;
}

void f_004c889c(void)
{
    FN_ENTER(0x004c889c);
    /* 004c889c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c889f: mov ecx, esi */ r_ecx = r_esi;
    /* 004c88a1: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4c88a6u); f_004c7670();
    /* 004c88a6: jmp 0x4c8a7e */ goto L_004c8a7e;
L_004c8a7e:; BB(0x004c8a7e);
    /* 004c8a7e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a83: ret 4 */ FN_RET(0x004c889c); r_esp += 8; return;
}

void f_004c88ab(void)
{
    FN_ENTER(0x004c88ab);
    /* 004c88ab: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c88ad: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004c88b2: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c88b9: mov ecx, esi */ r_ecx = r_esi;
    /* 004c88bb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c88c1u); call_ind(t); }
    /* 004c88c1: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
    /* 004c88cb: mov ecx, esi */ r_ecx = r_esi;
    /* 004c88cd: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c88d2u); f_004c473c();
    /* 004c88d2: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c88d8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c88da: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c88dd: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c88e0: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c88e6: mov ecx, esi */ r_ecx = r_esi;
    /* 004c88e8: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c88eeu); call_ind(t); }
    /* 004c88ee: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c88f0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c88f2: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c88f8u); call_ind(t); }
    /* 004c88f8: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004c88fb: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004c88fe: mov dword ptr [esi + 0x85c], 0x64 */ W32((u32)(r_esi+0x85cu), 0x64u);
    /* 004c8908: mov dword ptr [esi + 0x888], eax */ W32((u32)(r_esi+0x888u), r_eax);
    /* 004c890e: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004c8918: mov dword ptr [esi + 0x890], edx */ W32((u32)(r_esi+0x890u), r_edx);
    /* 004c891e: mov dword ptr [esi + 0x88c], 0 */ W32((u32)(r_esi+0x88cu), 0x0u);
    /* 004c8928: mov dword ptr [esi + 0x874], 0 */ W32((u32)(r_esi+0x874u), 0x0u);
    /* 004c8932: mov dword ptr [esi + 0x878], 0 */ W32((u32)(r_esi+0x878u), 0x0u);
    /* 004c893c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c893f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8940: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8941: ret 4 */ FN_RET(0x004c88ab); r_esp += 8; return;
}

void f_004c8944(void)
{
    FN_ENTER(0x004c8944);
    /* 004c8944: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c894a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c894d: je 0x4c8a86 */ if (fZ) goto L_004c8a86;
L_004c8953:; BB(0x004c8953);
    /* 004c8953: mov eax, dword ptr [esi + 0x6e0] */ r_eax = R32((u32)(r_esi+0x6e0u));
    /* 004c8959: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004c895c: test dword ptr [0xa0f678], edx */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8962: je 0x4c8a7e */ if (fZ) goto L_004c8a7e;
L_004c8968:; BB(0x004c8968);
    /* 004c8968: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c896a: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004c896c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c896e: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8970: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8976u); call_ind(t); }
    /* 004c8976: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c897a: mov edi, dword ptr [esi + 0x67c] */ r_edi = R32((u32)(r_esi+0x67cu));
    /* 004c8980: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c8986: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c898b: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c8992: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c8996: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 004c899b: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004c89a0: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c89a5: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c89aa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c89ae: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c89b4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c89b8: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c89bc: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c89c1u); f_008587a5();
    /* 004c89c1: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c89c5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c89c9: fdiv dword ptr [0x90856c] */ ST(0) = ST(0) / R_F32((u32)(0x90856cu));
    /* 004c89cf: fmul dword ptr [0x908570] */ ST(0) = ST(0) * R_F32((u32)(0x908570u));
    /* 004c89d5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c89d8: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c89dc: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c89e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c89e6: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c89ea: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c89ee: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c89f2: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c89f6: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c89fa: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c89fe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c8a03u); f_008003e0();
    /* 004c8a03: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a08: ret 4 */ FN_RET(0x004c8944); r_esp += 8; return;
L_004c8a7e:; BB(0x004c8a7e);
    /* 004c8a7e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a83: ret 4 */ FN_RET(0x004c8944); r_esp += 8; return;
L_004c8a86:; BB(0x004c8a86);
    /* 004c8a86: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8a88: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c8a8a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c8a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004c8a8e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8a94u); call_ind(t); }
    /* 004c8a94: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c8a98: mov edi, dword ptr [esi + 0x67c] */ r_edi = R32((u32)(r_esi+0x67cu));
    /* 004c8a9e: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c8aa4: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c8aa9: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c8ab0: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c8ab5: mov word ptr [esp + 0x1e], di */ W16((u32)(r_esp+0x1eu), (u16)r_edi);
    /* 004c8aba: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004c8abf: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c8ac4: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c8ac9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c8acd: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c8ad3: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c8ad7: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c8adb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c8ae0u); f_008587a5();
    /* 004c8ae0: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c8ae4: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004c8ae8: fdiv dword ptr [0x90856c] */ ST(0) = ST(0) / R_F32((u32)(0x90856cu));
    /* 004c8aee: fmul dword ptr [0x908570] */ ST(0) = ST(0) * R_F32((u32)(0x908570u));
    /* 004c8af4: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c8af8: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c8afc: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c8b01: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8b06: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c8b0a: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c8b0e: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8b12: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c8b16: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c8b1a: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c8b1e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c8b23u); f_008003e0();
    /* 004c8b23: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8b26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8b27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8b28: ret 4 */ FN_RET(0x004c8944); r_esp += 8; return;
}

void f_004c8a0b(void)
{
    FN_ENTER(0x004c8a0b);
    /* 004c8a0b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004c8a0e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c8a13u); f_0082dcbc();
    /* 004c8a13: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c8a17: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004c8a1a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c8a1fu); f_0082ddd8();
    /* 004c8a1f: fld dword ptr [0x908568] */ FPUSH(R_F32((u32)(0x908568u)));
    /* 004c8a25: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004c8a27: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8a29: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004c8a2c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004c8a30: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c8a32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8a34: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004c8a37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8a39: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004c8a3c: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004c8a3f: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004c8a42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c8a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8a44: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4c8a49u); f_007a9180();
    /* 004c8a49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c8a4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c8a4d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c8a50: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4c8a55u); f_0082dc9c();
    /* 004c8a55: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004c8a58: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004c8a5b: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 004c8a5e: fld dword ptr [esi + 0x874] */ FPUSH(R_F32((u32)(r_esi+0x874u)));
    /* 004c8a64: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c8a66: fstp dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0)); FPOP();
    /* 004c8a6c: mov dword ptr [esi + 0x888], eax */ W32((u32)(r_esi+0x888u), r_eax);
    /* 004c8a72: mov dword ptr [esi + 0x88c], edx */ W32((u32)(r_esi+0x88cu), r_edx);
    /* 004c8a78: mov dword ptr [esi + 0x890], edi */ W32((u32)(r_esi+0x890u), r_edi);
    /* 004c8a7e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a83: ret 4 */ FN_RET(0x004c8a0b); r_esp += 8; return;
}

void f_004c8a7e(void)
{
    FN_ENTER(0x004c8a7e);
    /* 004c8a7e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c8a83: ret 4 */ FN_RET(0x004c8a7e); r_esp += 8; return;
}

void f_004c8b2c(void)
{
    FN_ENTER(0x004c8b2c);
    /* 004c8b2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c8b2d: mov ebp, esp */ r_ebp = r_esp;
    /* 004c8b2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c8b31: push 0x8d15f8 */ { u32 v = 0x8d15f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8b36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c8b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8b3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c8b44: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c8b47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c8b4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004c8b4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004c8b50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004c8b53: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004c8b56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c8b59: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c8b5c: ja 0x4c8f25 */ if ((!fC&&!fZ)) goto L_004c8f25;
L_004c8b62:; BB(0x004c8b62);
    /* 004c8b62: mov eax, dword ptr [eax*4 + 0x907cfc] */ r_eax = R32((u32)(r_eax*4+0x907cfcu));
    /* 004c8b69: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8b2c); r_esp += 8; return;
}

void f_004c8b6b(void)
{
    FN_ENTER(0x004c8b6b);
    /* 004c8b6b: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8b6d: mov edx, dword ptr [eax + 0x85c] */ r_edx = R32((u32)(r_eax+0x85cu));
    /* 004c8b73: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c8b76: je 0x4c8f3e */ if (fZ) goto L_004c8f3e;
L_004c8b7c:; BB(0x004c8b7c);
    /* 004c8b7c: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8b6b); r_esp += 8; return;
L_004c8f3e:; BB(0x004c8f3e);
    /* 004c8f3e: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 004c8f44: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c8f47: je 0x4c8f58 */ if (fZ) goto L_004c8f58;
L_004c8f49:; BB(0x004c8f49);
    /* 004c8f49: mov eax, dword ptr [eax + 0x67c] */ r_eax = R32((u32)(r_eax+0x67cu));
    /* 004c8f4f: mov edx, eax */ r_edx = r_eax;
    /* 004c8f51: mov ecx, 0x9080e0 */ r_ecx = 0x9080e0u;
    /* 004c8f56: jmp 0x4c8f74 */ goto L_004c8f74;
L_004c8f58:; BB(0x004c8f58);
    /* 004c8f58: mov eax, dword ptr [eax + 0x67c] */ r_eax = R32((u32)(r_eax+0x67cu));
    /* 004c8f5e: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8f61: jge 0x4c8f6c */ if ((fS==fO)) goto L_004c8f6c;
L_004c8f63:; BB(0x004c8f63);
    /* 004c8f63: mov edx, eax */ r_edx = r_eax;
    /* 004c8f65: mov ecx, 0x9088c0 */ r_ecx = 0x9088c0u;
    /* 004c8f6a: jmp 0x4c8f74 */ goto L_004c8f74;
L_004c8f6c:; BB(0x004c8f6c);
    /* 004c8f6c: lea edx, [eax - 0x32] */ r_edx = (u32)(r_eax+0xffffffceu);
    /* 004c8f6f: mov ecx, 0x908160 */ r_ecx = 0x908160u;
L_004c8f74:; BB(0x004c8f74);
    /* 004c8f74: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004c8f77: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c8f7a: cmp edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8f7d: jne 0x4c8f92 */ if (!fZ) goto L_004c8f92;
L_004c8f7f:; BB(0x004c8f7f);
    /* 004c8f7f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8f82: mov dword ptr [edx + 0x67c], 0 */ W32((u32)(r_edx+0x67cu), 0x0u);
    /* 004c8f8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c8f8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c8f90: jmp 0x4c8f74 */ goto L_004c8f74;
L_004c8f92:; BB(0x004c8f92);
    /* 004c8f92: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8f95: je 0x4c8fab */ if (fZ) goto L_004c8fab;
L_004c8f97:; BB(0x004c8f97);
    /* 004c8f97: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c8f9b: mov dword ptr [ecx + 0x67c], eax */ W32((u32)(r_ecx+0x67cu), r_eax);
    /* 004c8fa1: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c8fa6u); f_004c3074();
    /* 004c8fa6: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8fab:; BB(0x004c8fab);
    /* 004c8fab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8fae: mov dword ptr [edx + 0x67c], 0x32 */ W32((u32)(r_edx+0x67cu), 0x32u);
    /* 004c8fb8: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c8fbd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c8fbf: jmp 0x4c8f74 */ goto L_004c8f74;
}

void f_004c8b81(void)
{
    FN_ENTER(0x004c8b81);
    /* 004c8b81: fld dword ptr [0x90855c] */ FPUSH(R_F32((u32)(0x90855cu)));
    /* 004c8b87: fld dword ptr [ecx + 0x698] */ FPUSH(R_F32((u32)(r_ecx+0x698u)));
    /* 004c8b8d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c8b8f: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004c8b92: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8b96: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8b9b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c8b9e: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004c8ba1: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8ba4: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8ba7: fld dword ptr [ecx + 0x69c] */ FPUSH(R_F32((u32)(r_ecx+0x69cu)));
    /* 004c8bad: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c8baf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c8bb2: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004c8bb5: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8bb9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8bbe: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c8bc1: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004c8bc4: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8bc7: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8bca: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 004c8bce: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004c8bd1: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c8bd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c8bd4: add ecx, 0x774 */ {  u32 a = r_ecx; u32 b = 0x774u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c8bda: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x4c8bdfu); f_0084c390();
    /* 004c8bdf: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8b81); r_esp += 8; return;
}

void f_004c8bee(void)
{
    FN_ENTER(0x004c8bee);
    /* 004c8bee: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 004c8bf4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c8bf6: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 004c8bf9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c8bfc: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 004c8c02: mov dword ptr [ecx + 0x654], edx */ W32((u32)(r_ecx+0x654u), r_edx);
    /* 004c8c08: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8bee); r_esp += 8; return;
}

void f_004c8c0d(void)
{
    FN_ENTER(0x004c8c0d);
    /* 004c8c0d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c8c0f: mov eax, 0x19 */ r_eax = 0x19u;
    /* 004c8c14: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c8c1b: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c8c21u); call_ind(t); }
    /* 004c8c21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8c24: mov dword ptr [ecx + 0x3ec], 1 */ W32((u32)(r_ecx+0x3ecu), 0x1u);
    /* 004c8c2e: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c8c33u); f_004c1f00();
    /* 004c8c33: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8c36: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004c8c3c: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8c3f: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c8c42: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004c8c48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c8c4a: mov dword ptr [ebx + 0x85c], edx */ W32((u32)(r_ebx+0x85cu), r_edx);
    /* 004c8c50: mov dword ptr [ebx + 0x860], edx */ W32((u32)(r_ebx+0x860u), r_edx);
    /* 004c8c56: mov dword ptr [ebx + 0x864], edx */ W32((u32)(r_ebx+0x864u), r_edx);
    /* 004c8c5c: mov dword ptr [ebx + 0x86c], edx */ W32((u32)(r_ebx+0x86cu), r_edx);
    /* 004c8c62: mov ecx, dword ptr [0xa48568] */ r_ecx = R32((u32)(0xa48568u));
    /* 004c8c68: mov dword ptr [ebx + 0x874], ecx */ W32((u32)(r_ebx+0x874u), r_ecx);
    /* 004c8c6e: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8c0d); r_esp += 8; return;
}

void f_004c8c73(void)
{
    FN_ENTER(0x004c8c73);
    /* 004c8c73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8c75: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004c8c77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c8c79: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8c7fu); call_ind(t); }
    /* 004c8c7f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8c82: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c8c86: mov ecx, dword ptr [edi + 0x67c] */ r_ecx = R32((u32)(r_edi+0x67cu));
    /* 004c8c8c: movzx ebx, word ptr [edi + 0x394] */ r_ebx = (u32)R16((u32)(r_edi+0x394u));
    /* 004c8c93: mov esi, dword ptr [edi + 0x690] */ r_esi = R32((u32)(r_edi+0x690u));
    /* 004c8c99: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c8c9e: mov byte ptr [ebp - 0x6c], 0xa8 */ W8((u32)(r_ebp+0xffffff94u), 0xa8u);
    /* 004c8ca2: mov word ptr [ebp - 0x6a], ax */ W16((u32)(r_ebp+0xffffff96u), (u16)r_eax);
    /* 004c8ca6: mov eax, dword ptr [edi + 0x694] */ r_eax = R32((u32)(r_edi+0x694u));
    /* 004c8cac: mov byte ptr [ebp - 0x6b], 6 */ W8((u32)(r_ebp+0xffffff95u), 0x6u);
    /* 004c8cb0: mov word ptr [ebp - 0x68], dx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_edx);
    /* 004c8cb4: mov word ptr [ebp - 0x66], cx */ W16((u32)(r_ebp+0xffffff9au), (u16)r_ecx);
    /* 004c8cb8: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 004c8cbb: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 004c8cbe: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004c8cc1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c8cc6u); f_008587a5();
    /* 004c8cc6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c8cc9: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004c8ccc: fdiv dword ptr [0x908560] */ ST(0) = ST(0) / R_F32((u32)(0x908560u));
    /* 004c8cd2: fmul dword ptr [0x908564] */ ST(0) = ST(0) * R_F32((u32)(0x908564u));
    /* 004c8cd8: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 004c8cdb: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004c8cde: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8ce2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8ce7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c8cea: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004c8ced: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8cf0: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8cf3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c8cf6: mov byte ptr [ebp - 0x58], al */ W8((u32)(r_ebp+0xffffffa8u), (u8)r_eax);
    /* 004c8cf9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c8cfeu); f_008003e0();
    /* 004c8cfe: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8c73); r_esp += 8; return;
}

void f_004c8d03(void)
{
    FN_ENTER(0x004c8d03);
    /* 004c8d03: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8d05: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c8d0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8d0d: je 0x4c929e */ if (fZ) goto L_004c929e;
L_004c8d13:; BB(0x004c8d13);
    /* 004c8d13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8d16: je 0x4c9217 */ if (fZ) goto L_004c9217;
L_004c8d1c:; BB(0x004c8d1c);
    /* 004c8d1c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8d1f: je 0x4c91c0 */ if (fZ) goto L_004c91c0;
L_004c8d25:; BB(0x004c8d25);
    /* 004c8d25: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8d28: je 0x4c8fc1 */ if (fZ) goto L_004c8fc1;
L_004c8d2e:; BB(0x004c8d2e);
    /* 004c8d2e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8d31: je 0x4c8df2 */ if (fZ) goto L_004c8df2;
L_004c8d37:; BB(0x004c8d37);
    /* 004c8d37: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8d3a: jne 0x4c8dd6 */ if (!fZ) goto L_004c8dd6;
L_004c8d40:; BB(0x004c8d40);
    /* 004c8d40: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c8d45u); f_007aa094();
    /* 004c8d45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8d48: push dword ptr [eax + 0x870] */ { u32 v = R32((u32)(r_eax+0x870u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c8d4e: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c8d51: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4c8d56u); f_007a900c();
    /* 004c8d56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c8d59: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c8d5c: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004c8d5f: fmul dword ptr [0x908558] */ ST(0) = ST(0) * R_F32((u32)(0x908558u));
    /* 004c8d65: fcom dword ptr [0x908554] */ fx_compare(ST(0), R_F32((u32)(0x908554u))); 
    /* 004c8d6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8d6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8d6e: jae 0x4c8d7b */ if (!fC) goto L_004c8d7b;
L_004c8d70:; BB(0x004c8d70);
    /* 004c8d70: fcom dword ptr [0x908550] */ fx_compare(ST(0), R_F32((u32)(0x908550u))); 
    /* 004c8d76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8d78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8d79: jae 0x4c8d89 */ if (!fC) goto L_004c8d89;
L_004c8d7b:; BB(0x004c8d7b);
    /* 004c8d7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8d7e: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004c8d84: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c8d87: je 0x4c8dab */ if (fZ) goto L_004c8dab;
L_004c8d89:; BB(0x004c8d89);
    /* 004c8d89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8d8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8d8e: mov eax, dword ptr [edx + 0x870] */ r_eax = R32((u32)(r_edx+0x870u));
    /* 004c8d94: mov dword ptr [edx + 0x85c], 6 */ W32((u32)(r_edx+0x85cu), 0x6u);
    /* 004c8d9e: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 004c8da1: mov eax, 6 */ r_eax = 0x6u;
    /* 004c8da6: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c8dab:; BB(0x004c8dab);
    /* 004c8dab: mov edx, eax */ r_edx = r_eax;
    /* 004c8dad: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004c8db0: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8db4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8db9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c8dbc: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004c8dbf: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8dc2: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8dc5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c8dc8: add dword ptr [edx + 0x60], eax */ { u32 ad = (u32)(r_edx+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c8dcb: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 004c8dd1: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c8dd6:; BB(0x004c8dd6);
    /* 004c8dd6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8dd9: jne 0x4c8ea3 */ if (!fZ) goto L_004c8ea3;
L_004c8ddf:; BB(0x004c8ddf);
    /* 004c8ddf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c8de4u); f_007aa094();
    /* 004c8de4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8de7: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c8ded: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c8df2:; BB(0x004c8df2);
    /* 004c8df2: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8df4: mov eax, dword ptr [eax + 0x86c] */ r_eax = R32((u32)(r_eax+0x86cu));
    /* 004c8dfa: add eax, -0x50 */ {  u32 a = r_eax; u32 b = 0xffffffb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c8dfd: cmp eax, 0x1300 */ {  u32 a = r_eax; u32 b = 0x1300u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8e02: jge 0x4c8e8f */ if ((fS==fO)) goto L_004c8e8f;
L_004c8e08:; BB(0x004c8e08);
    /* 004c8e08: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8e0a: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004c8e0d: mov dword ptr [eax + 0x86c], 0x1300 */ W32((u32)(r_eax+0x86cu), 0x1300u);
    /* 004c8e17: add edx, 0xffffed00 */ {  u32 a = r_edx; u32 b = 0xffffed00u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c8e1d: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 004c8e20: cmp eax, 0x1300 */ {  u32 a = r_eax; u32 b = 0x1300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8e25: jle 0x4c8e2e */ if ((fZ||fS!=fO)) goto L_004c8e2e;
L_004c8e27:; BB(0x004c8e27);
    /* 004c8e27: cmp eax, 0xed00 */ {  u32 a = r_eax; u32 b = 0xed00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8e2c: jl 0x4c8e82 */ if ((fS!=fO)) goto L_004c8e82;
L_004c8e2e:; BB(0x004c8e2e);
    /* 004c8e2e: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8e30: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004c8e33: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004c8e36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8e38: fchs  */ ST(0) = -ST(0);
    /* 004c8e3a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c8e3c: fchs  */ ST(0) = -ST(0);
    /* 004c8e3e: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 004c8e45: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c8e47: fmul qword ptr [0x908220] */ ST(0) = ST(0) * R_F64((u32)(0x908220u));
    /* 004c8e4d: fdiv qword ptr [0x908218] */ ST(0) = ST(0) / R_F64((u32)(0x908218u));
    /* 004c8e53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8e56: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004c8e59: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8e5d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c8e62: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c8e65: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004c8e68: fistp dword ptr [edx + 0x870] */ W32((u32)(r_edx+0x870u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c8e6e: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004c8e71: mov dword ptr [edx + 0x85c], 5 */ W32((u32)(r_edx+0x85cu), 0x5u);
    /* 004c8e7b: mov eax, 5 */ r_eax = 0x5u;
    /* 004c8e80: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c8e82:; BB(0x004c8e82);
    /* 004c8e82: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8e84: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 004c8e87: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c8e8d: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c8e8f:; BB(0x004c8e8f);
    /* 004c8e8f: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004c8e92: mov dword ptr [ecx + 0x86c], eax */ W32((u32)(r_ecx+0x86cu), r_eax);
    /* 004c8e98: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c8e9a: mov eax, dword ptr [ecx + 0x85c] */ r_eax = R32((u32)(r_ecx+0x85cu));
    /* 004c8ea0: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
L_004c8ea3:; BB(0x004c8ea3);
    /* 004c8ea3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8ea6: je 0x4c8ead */ if (fZ) goto L_004c8ead;
L_004c8ea8:; BB(0x004c8ea8);
    /* 004c8ea8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8eab: jne 0x4c8ef6 */ if (!fZ) goto L_004c8ef6;
L_004c8ead:; BB(0x004c8ead);
    /* 004c8ead: fld dword ptr [0xa4856c] */ FPUSH(R_F32((u32)(0xa4856cu)));
    /* 004c8eb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8eb6: fadd dword ptr [edx + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x874u));
    /* 004c8ebc: fld dword ptr [0x908540] */ FPUSH(R_F32((u32)(0x908540u)));
    /* 004c8ec2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c8ec4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8ec6: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 004c8ec9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8eca: fld dword ptr [0x908814] */ FPUSH(R_F32((u32)(0x908814u)));
    /* 004c8ed0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c8ed2: jb 0x4c8ed6 */ if (fC) goto L_004c8ed6;
L_004c8ed4:; BB(0x004c8ed4);
    /* 004c8ed4: fst st(3) */ ST(3) = ST(0);
L_004c8ed6:; BB(0x004c8ed6);
    /* 004c8ed6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8ed8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c8eda: fst dword ptr [edx + 0x874] */ W_F32((u32)(r_edx+0x874u), ST(0));
    /* 004c8ee0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004c8ee2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c8ee4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8ee6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8ee7: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 004c8eed: jb 0x4c8ef1 */ if (fC) goto L_004c8ef1;
L_004c8eef:; BB(0x004c8eef);
    /* 004c8eef: fst st(1) */ ST(1) = ST(0);
L_004c8ef1:; BB(0x004c8ef1);
    /* 004c8ef1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8ef3: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_004c8ef6:; BB(0x004c8ef6);
    /* 004c8ef6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8ef9: je 0x4c8f05 */ if (fZ) goto L_004c8f05;
L_004c8efb:; BB(0x004c8efb);
    /* 004c8efb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8efe: je 0x4c8f05 */ if (fZ) goto L_004c8f05;
L_004c8f00:; BB(0x004c8f00);
    /* 004c8f00: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c8f03: jne 0x4c8f25 */ if (!fZ) goto L_004c8f25;
L_004c8f05:; BB(0x004c8f05);
    /* 004c8f05: fld dword ptr [0x908534] */ FPUSH(R_F32((u32)(0x908534u)));
    /* 004c8f0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8f0e: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 004c8f11: fld dword ptr [0x908814] */ FPUSH(R_F32((u32)(0x908814u)));
    /* 004c8f17: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c8f19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8f1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8f1c: jb 0x4c8f20 */ if (fC) goto L_004c8f20;
L_004c8f1e:; BB(0x004c8f1e);
    /* 004c8f1e: fst st(1) */ ST(1) = ST(0);
L_004c8f20:; BB(0x004c8f20);
    /* 004c8f20: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8f22: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8d03); r_esp += 8; return;
L_004c8fc1:; BB(0x004c8fc1);
    /* 004c8fc1: mov edx, dword ptr [ecx + 0x86c] */ r_edx = R32((u32)(r_ecx+0x86cu));
    /* 004c8fc7: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c8fca: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 004c8fcf: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8fd5: jl 0x4c8fd9 */ if ((fS!=fO)) goto L_004c8fd9;
L_004c8fd7:; BB(0x004c8fd7);
    /* 004c8fd7: mov edx, eax */ r_edx = r_eax;
L_004c8fd9:; BB(0x004c8fd9);
    /* 004c8fd9: mov eax, dword ptr [ecx + 0x860] */ r_eax = R32((u32)(r_ecx+0x860u));
    /* 004c8fdf: mov dword ptr [ecx + 0x86c], edx */ W32((u32)(r_ecx+0x86cu), r_edx);
    /* 004c8fe5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c8fe8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8feb: jl 0x4c919e */ if ((fS!=fO)) goto L_004c919e;
L_004c8ff1:; BB(0x004c8ff1);
    /* 004c8ff1: mov eax, ecx */ r_eax = r_ecx;
    /* 004c8ff3: mov edx, dword ptr [eax + 0x864] */ r_edx = R32((u32)(r_eax+0x864u));
    /* 004c8ff9: mov dword ptr [eax + 0x860], 0 */ W32((u32)(r_eax+0x860u), 0x0u);
    /* 004c9003: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c9006: mov dword ptr [eax + 0x864], edx */ W32((u32)(r_eax+0x864u), r_edx);
    /* 004c900c: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c900f: jl 0x4c902b */ if ((fS!=fO)) goto L_004c902b;
L_004c9011:; BB(0x004c9011);
    /* 004c9011: mov edx, dword ptr [eax + 0x864] */ r_edx = R32((u32)(r_eax+0x864u));
    /* 004c9017: mov dword ptr [eax + 0x85c], 4 */ W32((u32)(r_eax+0x85cu), 0x4u);
    /* 004c9021: mov dword ptr [eax + 0x654], 0 */ W32((u32)(r_eax+0x654u), 0x0u);
L_004c902b:; BB(0x004c902b);
    /* 004c902b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c902e: jne 0x4c9058 */ if (!fZ) goto L_004c9058;
L_004c9030:; BB(0x004c9030);
    /* 004c9030: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004c9032: mov eax, edx */ r_eax = r_edx;
    /* 004c9034: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c9035: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9037: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c9039: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c903c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c903e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c9040: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 004c9043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c9044: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c9049u); f_0068d5a8();
    /* 004c9049: mov ebx, eax */ r_ebx = r_eax;
    /* 004c904b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c904c: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4c9051u); f_00520f3c();
    /* 004c9051: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9056: jne 0x4c90cb */ if (!fZ) goto L_004c90cb;
L_004c9058:; BB(0x004c9058);
    /* 004c9058: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c905b: lea ebx, [eax + 0x774] */ r_ebx = (u32)(r_eax+0x774u);
    /* 004c9061: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c9063: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4c9068u); f_00763498();
    /* 004c9068: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 004c906f: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c9072: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c9074: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c9077: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004c907a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c907d: fadd dword ptr [eax*4 + 0x908210] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908210u));
    /* 004c9084: fdiv dword ptr [0x90854c] */ ST(0) = ST(0) / R_F32((u32)(0x90854cu));
    /* 004c908a: fadd dword ptr [0x908548] */ ST(0) = ST(0) + R_F32((u32)(0x908548u));
    /* 004c9090: fmul dword ptr [0x908544] */ ST(0) = ST(0) * R_F32((u32)(0x908544u));
    /* 004c9096: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 004c9099: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4c909eu); f_00763498();
    /* 004c909e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c90a1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c90a4: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004c90a7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c90aa: fadd dword ptr [eax*4 + 0x908210] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908210u));
    /* 004c90b1: fdiv dword ptr [0x90854c] */ ST(0) = ST(0) / R_F32((u32)(0x90854cu));
    /* 004c90b7: fadd dword ptr [0x908548] */ ST(0) = ST(0) + R_F32((u32)(0x908548u));
    /* 004c90bd: fmul dword ptr [0x908544] */ ST(0) = ST(0) * R_F32((u32)(0x908544u));
    /* 004c90c3: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 004c90c6: jmp 0x4c914a */ f_004c914a(); return;
L_004c90cb:; BB(0x004c90cb);
    /* 004c90cb: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004c90ce: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 004c90d1: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004c90d4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c90d7: lea ebx, [ebx + 0x774] */ r_ebx = (u32)(r_ebx+0x774u);
    /* 004c90dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c90df: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004c90e2: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 004c90e5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004c90e8: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4c90edu); f_00763498();
    /* 004c90ed: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c90f0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c90f3: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004c90f6: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c90f9: fadd dword ptr [eax*4 + 0x908210] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908210u));
    /* 004c9100: fdiv dword ptr [0x90854c] */ ST(0) = ST(0) / R_F32((u32)(0x90854cu));
    /* 004c9106: fadd dword ptr [0x908548] */ ST(0) = ST(0) + R_F32((u32)(0x908548u));
    /* 004c910c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c910e: fmul dword ptr [0x908530] */ ST(0) = ST(0) * R_F32((u32)(0x908530u));
    /* 004c9114: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 004c9117: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 004c911a: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4c911fu); f_00763498();
    /* 004c911f: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c9122: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c9125: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004c9128: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004c912b: fadd dword ptr [eax*4 + 0x908210] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908210u));
    /* 004c9132: fdiv dword ptr [0x90854c] */ ST(0) = ST(0) / R_F32((u32)(0x90854cu));
    /* 004c9138: fadd dword ptr [0x908548] */ ST(0) = ST(0) + R_F32((u32)(0x908548u));
    /* 004c913e: fmul dword ptr [0x908530] */ ST(0) = ST(0) * R_F32((u32)(0x908530u));
    /* 004c9144: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 004c9147: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 004c914a: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004c9151: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9153: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c9158u); f_005caba4();
    /* 004c9158: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c9159: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004c915c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c915e: je 0x4c91a6 */ if (fZ) goto L_004c91a6;
L_004c9160:; BB(0x004c9160);
    /* 004c9160: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 004c9167: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c916e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c9171: lea esi, [ebp - 0x54] */ r_esi = (u32)(r_ebp+0xffffffacu);
    /* 004c9174: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004c9178: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c9179: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 004c917f: push dword ptr [ebx + 0x76c] */ { u32 v = R32((u32)(r_ebx+0x76cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c9185: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c9186: lea edi, [ebx + 0x418] */ r_edi = (u32)(r_ebx+0x418u);
    /* 004c918c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c918d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c918e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9190: call 0x4cf34c */ r_esp -= 4; W32(r_esp, 0x4c9195u); f_004cf34c();
    /* 004c9195: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004c919c: jmp 0x4c91a6 */ goto L_004c91a6;
L_004c919e:; BB(0x004c919e);
    /* 004c919e: mov edx, ecx */ r_edx = r_ecx;
    /* 004c91a0: mov dword ptr [edx + 0x860], eax */ W32((u32)(r_edx+0x860u), r_eax);
L_004c91a6:; BB(0x004c91a6);
    /* 004c91a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c91a9: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004c91ac: sub eax, dword ptr [edx + 0x86c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x86cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c91b2: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 004c91b5: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 004c91bb: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c91c0:; BB(0x004c91c0);
    /* 004c91c0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c91c5u); f_007aa094();
    /* 004c91c5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c91c8: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004c91ce: fcomp dword ptr [0x90852c] */ fx_compare(ST(0), R_F32((u32)(0x90852cu))); FPOP();
    /* 004c91d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c91d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c91d7: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 004c91de: jbe 0x4c920a */ if ((fC||fZ)) goto L_004c920a;
L_004c91e0:; BB(0x004c91e0);
    /* 004c91e0: mov eax, edx */ r_eax = r_edx;
    /* 004c91e2: mov dword ptr [eax + 0x86c], 0x1000 */ W32((u32)(r_eax+0x86cu), 0x1000u);
    /* 004c91ec: mov dword ptr [eax + 0x85c], 3 */ W32((u32)(r_eax+0x85cu), 0x3u);
    /* 004c91f6: mov dword ptr [eax + 0x654], 1 */ W32((u32)(r_eax+0x654u), 0x1u);
    /* 004c9200: mov eax, 3 */ r_eax = 0x3u;
    /* 004c9205: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c920a:; BB(0x004c920a);
    /* 004c920a: mov eax, edx */ r_eax = r_edx;
    /* 004c920c: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c9212: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c9217:; BB(0x004c9217);
    /* 004c9217: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c921cu); f_007aa094();
    /* 004c921c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c921f: fld dword ptr [0x908528] */ FPUSH(R_F32((u32)(0x908528u)));
    /* 004c9225: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004c922b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c922d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c922f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c9230: jbe 0x4c9260 */ if ((fC||fZ)) goto L_004c9260;
L_004c9232:; BB(0x004c9232);
    /* 004c9232: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004c9234: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 004c923a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004c923c: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004c923e: fmul dword ptr [0x90853c] */ ST(0) = ST(0) * R_F32((u32)(0x90853cu));
    /* 004c9244: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004c9246: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004c9249: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004c924d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9252: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c9255: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004c9258: fist dword ptr [edx + 0x5c] */ W32((u32)(r_edx+0x5cu), (u32)fx_int32(ST(0)));
    /* 004c925b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004c925e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004c9260:; BB(0x004c9260);
    /* 004c9260: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c9262: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c9264: mov eax, edx */ r_eax = r_edx;
    /* 004c9266: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004c926c: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c926f: je 0x4c9293 */ if (fZ) goto L_004c9293;
L_004c9271:; BB(0x004c9271);
    /* 004c9271: mov edx, eax */ r_edx = r_eax;
    /* 004c9273: mov dword ptr [edx + 0x85c], 2 */ W32((u32)(r_edx+0x85cu), 0x2u);
    /* 004c927d: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004c9282: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004c9289: mov eax, 2 */ r_eax = 0x2u;
    /* 004c928e: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c9293:; BB(0x004c9293);
    /* 004c9293: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c9299: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c929e:; BB(0x004c929e);
    /* 004c929e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c92a3u); f_007aa094();
    /* 004c92a3: push 0x421c0000 */ { u32 v = 0x421c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c92a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c92ab: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c92b0u); f_007aaa30();
    /* 004c92b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c92b2: jne 0x4c92c2 */ if (!fZ) goto L_004c92c2;
L_004c92b4:; BB(0x004c92b4);
    /* 004c92b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c92b7: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c92bd: jmp 0x4c8ea3 */ f_004c8ea3(); return;
L_004c92c2:; BB(0x004c92c2);
    /* 004c92c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c92c5: mov dword ptr [eax + 0x85c], 1 */ W32((u32)(r_eax+0x85cu), 0x1u);
    /* 004c92cf: lea ecx, [eax + 0x63c] */ r_ecx = (u32)(r_eax+0x63cu);
    /* 004c92d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c92d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c92d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c92d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c92da: push 0x411 */ { u32 v = 0x411u; r_esp -= 4; W32(r_esp, v); }
    /* 004c92df: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c92e4u); f_00814298();
    /* 004c92e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c92e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c92ea: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c92f0: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c8f25(void)
{
    FN_ENTER(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8f25); r_esp += 8; return;
}

