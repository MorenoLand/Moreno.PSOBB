#include "protos.h"

void f_004e2e74(void) /* sub_4E2E74 */
{
    FN_ENTER(0x004e2e74);
    /* 004e2e74: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2e7a: call 0x4ed18c */ r_esp -= 4; W32(r_esp, 0x4e2e7fu); f_004ed18c();
    /* 004e2e7f: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2e85: mov dword ptr [0xa4d84c], eax */ W32((u32)(0xa4d84cu), r_eax);
    /* 004e2e8a: call 0x4eccc8 */ r_esp -= 4; W32(r_esp, 0x4e2e8fu); f_004eccc8();
    /* 004e2e8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e2e92: mov dword ptr [0xa4d854], 0 */ W32((u32)(0xa4d854u), 0x0u);
    /* 004e2e9c: mov dword ptr [0xa4d850], eax */ W32((u32)(0xa4d850u), r_eax);
    /* 004e2ea1: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e2ea6u); f_006dc358();
    /* 004e2ea6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e2ea8: je 0x4e2ebb */ if (fZ) goto L_004e2ebb;
L_004e2eaa:; BB(0x004e2eaa);
    /* 004e2eaa: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2eb0: call 0x4ebdcc */ r_esp -= 4; W32(r_esp, 0x4e2eb5u); f_004ebdcc();
    /* 004e2eb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2eb6: mov dword ptr [0xa4d854], eax */ W32((u32)(0xa4d854u), r_eax);
L_004e2ebb:; BB(0x004e2ebb);
    /* 004e2ebb: ret  */ FN_RET(0x004e2e74); r_esp += 4; return;
}

void f_004e2ebc(void) /* sub_4E2EBC */
{
    FN_ENTER(0x004e2ebc);
    /* 004e2ebc: mov dword ptr [0x9b131c], 0xffffffff */ W32((u32)(0x9b131cu), 0xffffffffu);
    /* 004e2ec6: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2ecb: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4e2ed0u); f_006c1bcc();
    /* 004e2ed0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2ed1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e2ed3: je 0x4e2eda */ if (fZ) goto L_004e2eda;
L_004e2ed5:; BB(0x004e2ed5);
    /* 004e2ed5: call 0x4e2edc */ r_esp -= 4; W32(r_esp, 0x4e2edau); f_004e2edc();
L_004e2eda:; BB(0x004e2eda);
    /* 004e2eda: ret  */ FN_RET(0x004e2ebc); r_esp += 4; return;
}

void f_004e2edc(void) /* sub_4E2EDC */
{
    FN_ENTER(0x004e2edc);
    /* 004e2edc: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2ee1: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4e2ee6u); f_006c1bcc();
    /* 004e2ee6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e2ee9: je 0x4e2f05 */ if (fZ) goto L_004e2f05;
L_004e2eeb:; BB(0x004e2eeb);
    /* 004e2eeb: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2ef0: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4e2ef5u); f_006c1bcc();
    /* 004e2ef5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2ef6: movsx eax, byte ptr [eax + 0x3a0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x3a0u));
    /* 004e2efd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e2f00: je 0x4e2f05 */ if (fZ) goto L_004e2f05;
L_004e2f02:; BB(0x004e2f02);
    /* 004e2f02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e2f04: ret  */ FN_RET(0x004e2edc); r_esp += 4; return;
L_004e2f05:; BB(0x004e2f05);
    /* 004e2f05: mov eax, 1 */ r_eax = 0x1u;
    /* 004e2f0a: ret  */ FN_RET(0x004e2edc); r_esp += 4; return;
}

void f_004e2f0c(void) /* sub_4E2F0C */
{
    FN_ENTER(0x004e2f0c);
    /* 004e2f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f0d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f12: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4e2f17u); f_006c1bcc();
    /* 004e2f17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2f18: add eax, 0x3c0 */ {  u32 a = r_eax; u32 b = 0x3c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e2f1d: call 0x4e2f28 */ r_esp -= 4; W32(r_esp, 0x4e2f22u); f_004e2f28();
    /* 004e2f22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2f23: ret  */ FN_RET(0x004e2f0c); r_esp += 4; return;
}

void f_004e2f24(void) /* sub_4E2F24 */
{
    FN_ENTER(0x004e2f24);
    /* 004e2f24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e2f28: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f2b: push 0xa4d800 */ { u32 v = 0xa4d800u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f30: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4e2f35u); f_00857dec();
    /* 004e2f35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e2f37: mov word ptr [0xa4d818], ax */ W16((u32)(0xa4d818u), (u16)r_eax);
    /* 004e2f3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e2f40: ret  */ FN_RET(0x004e2f24); r_esp += 4; return;
}

void f_004e2f28(void) /* sub_4E2F28 */
{
    FN_ENTER(0x004e2f28);
    /* 004e2f28: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f2b: push 0xa4d800 */ { u32 v = 0xa4d800u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f30: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4e2f35u); f_00857dec();
    /* 004e2f35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e2f37: mov word ptr [0xa4d818], ax */ W16((u32)(0xa4d818u), (u16)r_eax);
    /* 004e2f3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e2f40: ret  */ FN_RET(0x004e2f28); r_esp += 4; return;
}

void f_004e2f44(void) /* sub_4E2F44 */
{
    FN_ENTER(0x004e2f44);
    /* 004e2f44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f45: mov ebp, esp */ r_ebp = r_esp;
    /* 004e2f47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f49: push 0x8d2728 */ { u32 v = 0x8d2728u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004e2f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004e2f5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e2f5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004e2f62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004e2f65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004e2f68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004e2f6b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004e2f6e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004e2f75: mov dword ptr [0xa4d7f8], eax */ W32((u32)(0xa4d7f8u), r_eax);
    /* 004e2f7a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2f7c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4e2f81u); f_005caba4();
    /* 004e2f81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2f82: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004e2f85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e2f87: je 0x4e2fba */ if (fZ) goto L_004e2fba;
L_004e2f89:; BB(0x004e2f89);
    /* 004e2f89: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004e2f90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e2f97: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2f9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e2f9d: call 0x4e2fc0 */ r_esp -= 4; W32(r_esp, 0x4e2fa2u); f_004e2fc0();
    /* 004e2fa2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e2fa5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004e2fac:; BB(0x004e2fac);
    /* 004e2fac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e2faf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e2fb6: mov esp, ebp */ r_esp = r_ebp;
    /* 004e2fb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e2fb9: ret  */ FN_RET(0x004e2f44); r_esp += 4; return;
L_004e2fba:; BB(0x004e2fba);
    /* 004e2fba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e2fbc: jmp 0x4e2fac */ goto L_004e2fac;
}

void f_004e2fc0(void) /* sub_4E2FC0 */
{
    FN_ENTER(0x004e2fc0);
    /* 004e2fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e2fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004e2fc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2fc5: push 0x8d275e */ { u32 v = 0x8d275eu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2fca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004e2fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2fd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004e2fd8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e2fdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004e2fde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004e2fe1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004e2fe4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004e2fe7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2fea: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004e2fed: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4e2ff2u); f_008193cc();
    /* 004e2ff2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e2ff9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e2ffc: mov dword ptr [edx], 0xafd1d8 */ W32((u32)(r_edx), 0xafd1d8u);
    /* 004e3002: mov eax, dword ptr [0x9b1318] */ r_eax = R32((u32)(0x9b1318u));
    /* 004e3007: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004e300e: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 004e3013: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004e3016: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4e301bu); f_005caba4();
    /* 004e301b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e301c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004e301f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e3021: je 0x4e3043 */ if (fZ) goto L_004e3043;
L_004e3023:; BB(0x004e3023);
    /* 004e3023: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004e302a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004e3031: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e3034: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004e3037: call 0x4e90c8 */ r_esp -= 4; W32(r_esp, 0x4e303cu); f_004e90c8();
    /* 004e303c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004e3043:; BB(0x004e3043);
    /* 004e3043: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e304a: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e304d: call 0x4f0c10 */ r_esp -= 4; W32(r_esp, 0x4e3052u); f_004f0c10();
    /* 004e3052: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e3053: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e3056: mov dword ptr [ecx + 0x1c], 0x1555 */ W32((u32)(r_ecx+0x1cu), 0x1555u);
    /* 004e305d: mov dword ptr [0xa4d848], eax */ W32((u32)(0xa4d848u), r_eax);
    /* 004e3062: mov dword ptr [ecx + 0x20], 0x9000 */ W32((u32)(r_ecx+0x20u), 0x9000u);
    /* 004e3069: call 0x4e3084 */ r_esp -= 4; W32(r_esp, 0x4e306eu); f_004e3084();
    /* 004e306e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e3071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e3074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e307b: mov esp, ebp */ r_esp = r_ebp;
    /* 004e307d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e307e: ret 4 */ FN_RET(0x004e2fc0); r_esp += 8; return;
}

