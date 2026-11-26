#include "protos.h"

void f_007bc020(void) /* sub_7BC020 */
{
    FN_ENTER(0x007bc020);
    /* 007bc020: mov eax, 1 */ r_eax = 0x1u;
    /* 007bc025: mov dword ptr [0xa0f45c], eax */ W32((u32)(0xa0f45cu), r_eax);
    /* 007bc02a: mov dword ptr [0xa48a3c], eax */ W32((u32)(0xa48a3cu), r_eax);
    /* 007bc02f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bc031: mov word ptr [0xa48a38], dx */ W16((u32)(0xa48a38u), (u16)r_edx);
    /* 007bc038: ret  */ FN_RET(0x007bc020); r_esp += 4; return;
}

void f_007bc03c(void)
{
    FN_ENTER(0x007bc03c);
    /* 007bc03c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bc03d: mov ebp, esp */ r_ebp = r_esp;
    /* 007bc03f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc041: push 0x8f6542 */ { u32 v = 0x8f6542u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc046: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bc04c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc04d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bc054: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bc057: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bc05a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bc05d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bc060: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bc063: mov dword ptr [0xaae69c], 0x3f800000 */ W32((u32)(0xaae69cu), 0x3f800000u);
    /* 007bc06d: mov dword ptr [0xaae6a0], 0x41000000 */ W32((u32)(0xaae6a0u), 0x41000000u);
    /* 007bc077: mov dword ptr [0xaae6a4], 0x3fc00000 */ W32((u32)(0xaae6a4u), 0x3fc00000u);
    /* 007bc081: mov dword ptr [ebp - 0x38], 0xaae1c0 */ W32((u32)(r_ebp+0xffffffc8u), 0xaae1c0u);
    /* 007bc088: mov dword ptr [ebp - 0x30], 0xaae5a0 */ W32((u32)(r_ebp+0xffffffd0u), 0xaae5a0u);
    /* 007bc08f: mov dword ptr [ebp - 0x28], 0xaae5a0 */ W32((u32)(r_ebp+0xffffffd8u), 0xaae5a0u);
    /* 007bc096: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc09b: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0a0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0a4: push 0xaae5a4 */ { u32 v = 0xaae5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0a9: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7bc0aeu); f_00858736();
    /* 007bc0ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bc0b5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0ba: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0bf: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0c1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0c3: push 0xaae5dc */ { u32 v = 0xaae5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0c8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7bc0cdu); f_00858736();
    /* 007bc0cd: mov dword ptr [0xaae5a0], 0 */ W32((u32)(0xaae5a0u), 0x0u);
    /* 007bc0d7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bc0de: mov dword ptr [ebp - 0x20], 0xaae614 */ W32((u32)(r_ebp+0xffffffe0u), 0xaae614u);
    /* 007bc0e5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0ea: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0ef: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0f1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0f3: push 0xaae618 */ { u32 v = 0xaae618u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc0f8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7bc0fdu); f_00858736();
    /* 007bc0fd: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bc104: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc109: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc10e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc110: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc112: push 0xaae650 */ { u32 v = 0xaae650u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc117: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7bc11cu); f_00858736();
    /* 007bc11c: mov dword ptr [0xaae614], 0 */ W32((u32)(0xaae614u), 0x0u);
    /* 007bc126: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007bc12d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007bc12f:; BB(0x007bc12f);
    /* 007bc12f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007bc132: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bc134: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007bc137: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bc139: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bc13b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007bc13d: mov byte ptr [edx + 0xaae1c5], 0xff */ W8((u32)(r_edx+0xaae1c5u), 0xffu);
    /* 007bc144: lea ecx, [edx + 0xaae1cc] */ r_ecx = (u32)(r_edx+0xaae1ccu);
    /* 007bc14a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bc14c: mov byte ptr [edx + 0xaae1c4], al */ W8((u32)(r_edx+0xaae1c4u), (u8)r_eax);
    /* 007bc152: mov dword ptr [edx + 0xaae1c8], eax */ W32((u32)(r_edx+0xaae1c8u), r_eax);
    /* 007bc158: mov byte ptr [edx + 0xaae1c7], al */ W8((u32)(r_edx+0xaae1c7u), (u8)r_eax);
    /* 007bc15e: mov byte ptr [edx + 0xaae1c6], al */ W8((u32)(r_edx+0xaae1c6u), (u8)r_eax);
    /* 007bc164: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7bc169u); f_005d6a3c();
    /* 007bc169: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bc16c: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bc16f: jl 0x7bc12f */ if ((fS!=fO)) goto L_007bc12f;
L_007bc171:; BB(0x007bc171);
    /* 007bc171: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bc178: push 0x7bc19c */ { u32 v = 0x7bc19cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc17d: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x7bc182u); f_0085909d();
    /* 007bc182: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc183: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bc186: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bc189: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bc18c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bc18f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bc196: mov esp, ebp */ r_esp = r_ebp;
    /* 007bc198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bc199: ret  */ FN_RET(0x007bc03c); r_esp += 4; return;
}

void f_007bc19c(void) /* sub_7BC19C */
{
    FN_ENTER(0x007bc19c);
    /* 007bc19c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bc19d: mov ebp, esp */ r_ebp = r_esp;
    /* 007bc19f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1a1: push 0x8f65aa */ { u32 v = 0x8f65aau; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bc1ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bc1b4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bc1b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bc1ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bc1bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bc1c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bc1c3: mov dword ptr [ebp - 0x38], 0xaae1c0 */ W32((u32)(r_ebp+0xffffffc8u), 0xaae1c0u);
    /* 007bc1ca: mov dword ptr [ebp - 0x30], 0xaae5a0 */ W32((u32)(r_ebp+0xffffffd0u), 0xaae5a0u);
    /* 007bc1d1: mov dword ptr [ebp - 0x28], 0xaae614 */ W32((u32)(r_ebp+0xffffffd8u), 0xaae614u);
    /* 007bc1d8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bc1df: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1e4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1e6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1e8: push 0xaae650 */ { u32 v = 0xaae650u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1ed: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7bc1f2u); f_008586d6();
    /* 007bc1f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bc1f9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc1fe: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc200: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc202: push 0xaae618 */ { u32 v = 0xaae618u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc207: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7bc20cu); f_008586d6();
    /* 007bc20c: mov dword ptr [ebp - 0x20], 0xaae5a0 */ W32((u32)(r_ebp+0xffffffe0u), 0xaae5a0u);
    /* 007bc213: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007bc21a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc21f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc221: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc223: push 0xaae5dc */ { u32 v = 0xaae5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc228: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7bc22du); f_008586d6();
    /* 007bc22d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bc234: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc239: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc23b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc23d: push 0xaae5a4 */ { u32 v = 0xaae5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc242: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7bc247u); f_008586d6();
    /* 007bc247: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bc24a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bc251: mov esp, ebp */ r_esp = r_ebp;
    /* 007bc253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bc254: ret  */ FN_RET(0x007bc19c); r_esp += 4; return;
}

void f_007bc258(void) /* sub_7BC258 */
{
    FN_ENTER(0x007bc258);
    /* 007bc258: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bc25e: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7bc263u); f_006c1bcc();
    /* 007bc263: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bc266: je 0x7bc279 */ if (fZ) goto L_007bc279;
L_007bc268:; BB(0x007bc268);
    /* 007bc268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc269: push dword ptr [0xa9c4e4] */ { u32 v = R32((u32)(0xa9c4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bc26f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc271: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7bc276u); f_00686258();
    /* 007bc276: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007bc279:; BB(0x007bc279);
    /* 007bc279: ret  */ FN_RET(0x007bc258); r_esp += 4; return;
}

void f_007bc27c(void) /* sub_7BC27C */
{
    FN_ENTER(0x007bc27c);
    /* 007bc27c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bc27d: mov ebp, esp */ r_ebp = r_esp;
    /* 007bc27f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bc281: push 0x8f65d0 */ { u32 v = 0x8f65d0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc286: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bc28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc28d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bc294: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bc297: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bc29a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bc29d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bc2a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bc2a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bc2a5: mov dword ptr [0xaae6ac], eax */ W32((u32)(0xaae6acu), r_eax);
    /* 007bc2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc2ab: mov dword ptr [0xaaecbc], eax */ W32((u32)(0xaaecbcu), r_eax);
    /* 007bc2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bc2b2: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x7bc2b7u); f_0082acd8();
    /* 007bc2b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bc2ba: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bc2bfu); f_0061cdb0();
    /* 007bc2bf: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bc2c4u); f_007bebe8();
    /* 007bc2c4: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bc2c9u); f_007a6108();
    /* 007bc2c9: call 0x5b9380 */ r_esp -= 4; W32(r_esp, 0x7bc2ceu); f_005b9380();
    /* 007bc2ce: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bc2d3u); f_007a7c90();
    /* 007bc2d3: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bc2d8u); f_008013bc();
    /* 007bc2d8: call 0x4178f8 */ r_esp -= 4; W32(r_esp, 0x7bc2ddu); f_004178f8();
    /* 007bc2dd: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bc2e2u); f_00692748();
    /* 007bc2e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc2e4: call 0x806fa0 */ r_esp -= 4; W32(r_esp, 0x7bc2e9u); f_00806fa0();
    /* 007bc2e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc2ea: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007bc2f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bc2f6: mov eax, 1 */ r_eax = 0x1u;
    /* 007bc2fb: mov dword ptr [0xaafc98], edx */ W32((u32)(0xaafc98u), r_edx);
    /* 007bc301: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 007bc307: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 007bc30c: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 007bc311: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 007bc317: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 007bc31d: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 007bc323: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 007bc329: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 007bc32f: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bc334u); f_005ba204();
    /* 007bc334: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x7bc339u); f_005ba174();
    /* 007bc339: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc33e: push 0xa0f2e0 */ { u32 v = 0xa0f2e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc343: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7bc348u); f_0078b184();
    /* 007bc348: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bc34b: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x7bc350u); f_005ba1f0();
    /* 007bc350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc352: je 0x7bc37b */ if (fZ) goto L_007bc37b;
L_007bc354:; BB(0x007bc354);
    /* 007bc354: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bc359u); f_005ba204();
    /* 007bc359: call 0x5ba168 */ r_esp -= 4; W32(r_esp, 0x7bc35eu); f_005ba168();
    /* 007bc35e: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bc363u); f_005ba1e0();
    /* 007bc363: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bc368u); f_00417c10();
    /* 007bc368: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bc36du); f_0069281c();
    /* 007bc36d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bc370: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bc377: mov esp, ebp */ r_esp = r_ebp;
    /* 007bc379: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bc37a: ret  */ FN_RET(0x007bc27c); r_esp += 4; return;
L_007bc37b:; BB(0x007bc37b);
    /* 007bc37b: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bc380u); f_005ba1e0();
    /* 007bc380: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bc385u); f_0061cdb0();
    /* 007bc385: call 0x7bc258 */ r_esp -= 4; W32(r_esp, 0x7bc38au); f_007bc258();
    /* 007bc38a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc38c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bc38e: mov dword ptr [0xa9c4ec], eax */ W32((u32)(0xa9c4ecu), r_eax);
    /* 007bc393: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bc398: mov dword ptr [0xa9c4f4], eax */ W32((u32)(0xa9c4f4u), r_eax);
    /* 007bc39d: mov dword ptr [0xa9c4dc], eax */ W32((u32)(0xa9c4dcu), r_eax);
    /* 007bc3a2: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bc3a7u); f_0078b0e4();
    /* 007bc3a7: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bc3ac: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bc3b1u); f_00815730();
    /* 007bc3b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc3b3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7bc3b8u); f_00791748();
    /* 007bc3b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc3b9: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bc3beu); f_00417c10();
    /* 007bc3be: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bc3c3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bc3c8u); f_0061cdb0();
    /* 007bc3c8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bc3cd: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bc3d2u); f_0081745c();
    /* 007bc3d2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bc3d7: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bc3dcu); f_00818f80();
    /* 007bc3dc: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 007bc3e2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bc3e4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bc3e6: jle 0x7bc3ff */ if ((fZ||fS!=fO)) goto L_007bc3ff;
L_007bc3e8:; BB(0x007bc3e8);
    /* 007bc3e8: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bc3ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc3f1: je 0x7bc3f8 */ if (fZ) goto L_007bc3f8;
L_007bc3f3:; BB(0x007bc3f3);
    /* 007bc3f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007bc3f5: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bc3f8u); call_ind(t); }
L_007bc3f8:; BB(0x007bc3f8);
    /* 007bc3f8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bc3fb: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bc3fd: jl 0x7bc3e8 */ if ((fS!=fO)) goto L_007bc3e8;
L_007bc3ff:; BB(0x007bc3ff);
    /* 007bc3ff: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bc404u); f_0069281c();
    /* 007bc404: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 007bc409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc40b: je 0x7bc451 */ if (fZ) goto L_007bc451;
L_007bc40d:; BB(0x007bc40d);
    /* 007bc40d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bc414: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc419: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bc41eu); f_005caba4();
    /* 007bc41e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc41f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bc422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc424: je 0x7bc44a */ if (fZ) goto L_007bc44a;
L_007bc426:; BB(0x007bc426);
    /* 007bc426: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bc42d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bc434: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc436: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bc43c: mov ecx, eax */ r_ecx = r_eax;
    /* 007bc43e: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bc443u); f_006bc800();
    /* 007bc443: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bc44a:; BB(0x007bc44a);
    /* 007bc44a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_007bc451:; BB(0x007bc451);
    /* 007bc451: call 0x6c324c */ r_esp -= 4; W32(r_esp, 0x7bc456u); f_006c324c();
    /* 007bc456: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc458: jne 0x7bc46f */ if (!fZ) goto L_007bc46f;
L_007bc45a:; BB(0x007bc45a);
    /* 007bc45a: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007bc45f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc461: je 0x7bc46a */ if (fZ) goto L_007bc46a;
L_007bc463:; BB(0x007bc463);
    /* 007bc463: call 0x7bbf8c */ r_esp -= 4; W32(r_esp, 0x7bc468u); f_007bbf8c();
    /* 007bc468: jmp 0x7bc46f */ goto L_007bc46f;
L_007bc46a:; BB(0x007bc46a);
    /* 007bc46a: call 0x7bbb88 */ r_esp -= 4; W32(r_esp, 0x7bc46fu); f_007bbb88();
L_007bc46f:; BB(0x007bc46f);
    /* 007bc46f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc471: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7bc476u); f_007a6198();
    /* 007bc476: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007bc478: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x7bc47du); f_007a618c();
    /* 007bc47d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bc480: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bc485u); f_0080030c();
    /* 007bc485: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bc488: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bc48b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bc48e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bc491: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bc498: mov esp, ebp */ r_esp = r_ebp;
    /* 007bc49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bc49b: ret  */ FN_RET(0x007bc27c); r_esp += 4; return;
}

void f_007bc49c(void) /* sub_7BC49C */
{
    FN_ENTER(0x007bc49c);
    /* 007bc49c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bc49d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bc4a2u); f_006dc358();
    /* 007bc4a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007bc4a5: je 0x7bc4a9 */ if (fZ) goto L_007bc4a9;
L_007bc4a7:; BB(0x007bc4a7);
    /* 007bc4a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc4a8: ret  */ FN_RET(0x007bc49c); r_esp += 4; return;
L_007bc4a9:; BB(0x007bc4a9);
    /* 007bc4a9: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x7bc4aeu); f_0078b1c4();
    /* 007bc4ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bc4b0: jle 0x7bc4a7 */ if ((fZ||fS!=fO)) goto L_007bc4a7;
L_007bc4b2:; BB(0x007bc4b2);
    /* 007bc4b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007bc4b5: jg 0x7bc4a7 */ if ((!fZ&&fS==fO)) goto L_007bc4a7;
L_007bc4b7:; BB(0x007bc4b7);
    /* 007bc4b7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007bc4ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bc4bc: mov ebx, eax */ r_ebx = r_eax;
L_007bc4be:; BB(0x007bc4be);
    /* 007bc4be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bc4bf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bc4c4u); f_0068d5a8();
    /* 007bc4c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bc4c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bc4c7: je 0x7bc4d3 */ if (fZ) goto L_007bc4d3;
L_007bc4c9:; BB(0x007bc4c9);
    /* 007bc4c9: je 0x7bc4d3 */ if (fZ) goto L_007bc4d3;
L_007bc4cb:; BB(0x007bc4cb);
    /* 007bc4cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc4cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007bc4cf: mov ecx, eax */ r_ecx = r_eax;
    /* 007bc4d1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7bc4d3u); call_ind(t); }
L_007bc4d3:; BB(0x007bc4d3);
    /* 007bc4d3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bc4d6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bc4d9: jl 0x7bc4be */ if ((fS!=fO)) goto L_007bc4be;
L_007bc4db:; BB(0x007bc4db);
    /* 007bc4db: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007bc4de: call 0x7bc258 */ r_esp -= 4; W32(r_esp, 0x7bc4e3u); f_007bc258();
    /* 007bc4e3: jmp 0x7bc4a7 */ goto L_007bc4a7;
}

void f_007bc4e8(void) /* sub_7BC4E8 */
{
    FN_ENTER(0x007bc4e8);
    /* 007bc4e8: mov eax, dword ptr [0xaae6c0] */ r_eax = R32((u32)(0xaae6c0u));
    /* 007bc4ed: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007bc4f0: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007bc4f3: jl 0x7bc4fe */ if ((fS!=fO)) goto L_007bc4fe;
L_007bc4f5:; BB(0x007bc4f5);
    /* 007bc4f5: add eax, -0x1d */ {  u32 a = r_eax; u32 b = 0xffffffe3u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bc4f8: mov dword ptr [0xaae6c0], eax */ W32((u32)(0xaae6c0u), r_eax);
    /* 007bc4fd: ret  */ FN_RET(0x007bc4e8); r_esp += 4; return;
L_007bc4fe:; BB(0x007bc4fe);
    /* 007bc4fe: mov dword ptr [0xaae6c0], edx */ W32((u32)(0xaae6c0u), r_edx);
    /* 007bc504: ret  */ FN_RET(0x007bc4e8); r_esp += 4; return;
}

void f_007bc508(void) /* sub_7BC508 */
{
    FN_ENTER(0x007bc508);
    /* 007bc508: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bc509: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bc50f: mov ecx, dword ptr [0xaae6c0] */ r_ecx = R32((u32)(0xaae6c0u));
    /* 007bc515: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007bc518: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007bc51a: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 007bc51f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007bc521: mov ebp, edx */ r_ebp = r_edx;
    /* 007bc523: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007bc525: sar ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 007bc528: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007bc52b: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007bc52d: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x7bc532u); f_007a902c();
    /* 007bc532: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7bc537u); f_0082dbac();
    /* 007bc537: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x7bc53cu); f_004d28a4();
    /* 007bc53c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007bc541: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7bc546u); f_0082bb30();
    /* 007bc546: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 007bc54c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7bc551u); f_00829cc8();
    /* 007bc551: mov ecx, 7 */ r_ecx = 0x7u;
    /* 007bc556: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007bc55b: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7bc560u); f_0082bb60();
    /* 007bc560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007bc562: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc567u); f_0082dcbc();
    /* 007bc567: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc56a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc56d: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc573: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc576: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007bc578: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc57du); f_0082ddd8();
    /* 007bc57d: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc583: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc589: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc58c: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc592: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc598: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc59e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc5a0: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 007bc5a2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc5a4: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 007bc5a6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc5a8: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 007bc5ac: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007bc5b0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc5b3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc5b5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007bc5b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc5b9: fadd dword ptr [0x97e468] */ ST(0) = ST(0) + R_F32((u32)(0x97e468u));
    /* 007bc5bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc5c1: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007bc5c3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc5c5: fadd dword ptr [0x97e458] */ ST(0) = ST(0) + R_F32((u32)(0x97e458u));
    /* 007bc5cb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc5cd: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007bc5d1: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 007bc5d3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007bc5d7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007bc5d9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007bc5db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc5dd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007bc5e1: mov dword ptr [esp + 0xc], 0x3f000000 */ W32((u32)(r_esp+0xcu), 0x3f000000u);
    /* 007bc5e9: fchs  */ ST(0) = -ST(0);
    /* 007bc5eb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007bc5ed: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007bc5f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc5f3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc5f8u); f_0082dcbc();
    /* 007bc5f8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc5fb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc5fe: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc604: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc607: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc609: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc60eu); f_0082ddd8();
    /* 007bc60e: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc614: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc61a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc61c: fld dword ptr [0x97e44c] */ FPUSH(R_F32((u32)(0x97e44cu)));
    /* 007bc622: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bc624: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc62a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc62d: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc633: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc635: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 007bc637: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc639: fadd dword ptr [0x97e448] */ ST(0) = ST(0) + R_F32((u32)(0x97e448u));
    /* 007bc63f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc641: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc643: fadd dword ptr [0x97e444] */ ST(0) = ST(0) + R_F32((u32)(0x97e444u));
    /* 007bc649: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc64b: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 007bc64f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007bc653: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007bc655: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bc657: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007bc65b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc65d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007bc65f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bc661: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc663: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007bc667: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc66a: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bc66c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007bc670: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007bc674: fchs  */ ST(0) = -ST(0);
    /* 007bc676: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007bc678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007bc67c: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7bc681u); f_0082bb74();
    /* 007bc681: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007bc683: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc688u); f_0082dcbc();
    /* 007bc688: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc68b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc68e: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc694: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc697: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007bc699: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc69eu); f_0082ddd8();
    /* 007bc69e: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc6a4: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc6aa: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc6b0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc6b3: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc6b9: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc6bf: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc6c5: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc6c7: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007bc6c9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc6cb: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 007bc6cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc6cf: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 007bc6d1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc6d3: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007bc6d5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc6d7: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007bc6db: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc6dd: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 007bc6e1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc6e4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc6e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc6e8: fadd dword ptr [0x97e468] */ ST(0) = ST(0) + R_F32((u32)(0x97e468u));
    /* 007bc6ee: mov dword ptr [esp + 0x4c], 0x3f000000 */ W32((u32)(r_esp+0x4cu), 0x3f000000u);
    /* 007bc6f6: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 007bc6f8: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc6fe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc700: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 007bc702: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc704: fadd dword ptr [0x97e458] */ ST(0) = ST(0) + R_F32((u32)(0x97e458u));
    /* 007bc70a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc70c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007bc710: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc712: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007bc716: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc718: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007bc71a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc71c: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007bc720: fchs  */ ST(0) = -ST(0);
    /* 007bc722: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007bc724: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007bc728: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc72a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc72fu); f_0082dcbc();
    /* 007bc72f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc732: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc735: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc73b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc73e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc740: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc745u); f_0082ddd8();
    /* 007bc745: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc74b: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc751: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc753: fld dword ptr [0x97e44c] */ FPUSH(R_F32((u32)(0x97e44cu)));
    /* 007bc759: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bc75b: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc761: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc764: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc76a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc76c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 007bc76e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc770: fadd dword ptr [0x97e448] */ ST(0) = ST(0) + R_F32((u32)(0x97e448u));
    /* 007bc776: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc778: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc77a: fadd dword ptr [0x97e444] */ ST(0) = ST(0) + R_F32((u32)(0x97e444u));
    /* 007bc780: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc782: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 007bc786: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 007bc78a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007bc78c: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bc78e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007bc792: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc794: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007bc796: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bc798: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc79a: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007bc79e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc7a1: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bc7a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 007bc7a7: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 007bc7ab: fchs  */ ST(0) = -ST(0);
    /* 007bc7ad: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007bc7af: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007bc7b3: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7bc7b8u); f_0082bb74();
    /* 007bc7b8: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 007bc7bd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc7c2u); f_0082dcbc();
    /* 007bc7c2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc7c5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc7c8: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc7ce: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc7d1: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 007bc7d6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc7dbu); f_0082ddd8();
    /* 007bc7db: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc7e1: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc7e7: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc7ed: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc7f0: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc7f6: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc7fc: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc802: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc804: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007bc806: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc808: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 007bc80a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc80c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 007bc80e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc810: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007bc812: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc814: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 007bc81b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc81d: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 007bc824: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc827: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc829: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc82b: fadd dword ptr [0x97e468] */ ST(0) = ST(0) + R_F32((u32)(0x97e468u));
    /* 007bc831: mov dword ptr [esp + 0x8c], 0x3f000000 */ W32((u32)(r_esp+0x8cu), 0x3f000000u);
    /* 007bc83c: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 007bc83e: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc844: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc846: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 007bc848: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc84a: fadd dword ptr [0x97e458] */ ST(0) = ST(0) + R_F32((u32)(0x97e458u));
    /* 007bc850: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc852: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 007bc859: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc85b: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 007bc862: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc864: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007bc866: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc868: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 007bc86f: fchs  */ ST(0) = -ST(0);
    /* 007bc871: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007bc873: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 007bc87a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc87c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc881u); f_0082dcbc();
    /* 007bc881: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc884: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc887: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc88d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc892: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc897u); f_0082ddd8();
    /* 007bc897: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc89d: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc8a3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc8a5: fld dword ptr [0x97e44c] */ FPUSH(R_F32((u32)(0x97e44cu)));
    /* 007bc8ab: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bc8ad: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc8b3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc8b6: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc8bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc8be: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 007bc8c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc8c2: fadd dword ptr [0x97e448] */ ST(0) = ST(0) + R_F32((u32)(0x97e448u));
    /* 007bc8c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc8ca: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc8cc: fadd dword ptr [0x97e444] */ ST(0) = ST(0) + R_F32((u32)(0x97e444u));
    /* 007bc8d2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc8d4: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 007bc8db: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 007bc8e2: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007bc8e4: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bc8e6: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 007bc8ed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc8ef: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007bc8f1: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bc8f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc8f5: fstp dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0)); FPOP();
    /* 007bc8fc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc8ff: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bc901: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 007bc908: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 007bc90f: fchs  */ ST(0) = -ST(0);
    /* 007bc911: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007bc913: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 007bc91a: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7bc91fu); f_0082bb74();
    /* 007bc91f: mov ecx, 0xffffe000 */ r_ecx = 0xffffe000u;
    /* 007bc924: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc929u); f_0082dcbc();
    /* 007bc929: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc92c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc92f: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc935: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc938: mov ecx, 0xffffe000 */ r_ecx = 0xffffe000u;
    /* 007bc93d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc942u); f_0082ddd8();
    /* 007bc942: fmul dword ptr [0x97e454] */ ST(0) = ST(0) * R_F32((u32)(0x97e454u));
    /* 007bc948: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc94e: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bc954: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc957: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc95d: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc963: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bc969: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc96b: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007bc96d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc96f: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 007bc971: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bc973: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 007bc975: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc977: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007bc979: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc97b: fstp dword ptr [esp + 0xd0] */ W_F32((u32)(r_esp+0xd0u), ST(0)); FPOP();
    /* 007bc982: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc984: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 007bc98b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc98e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc990: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bc992: fadd dword ptr [0x97e468] */ ST(0) = ST(0) + R_F32((u32)(0x97e468u));
    /* 007bc998: mov dword ptr [esp + 0xcc], 0x3f000000 */ W32((u32)(r_esp+0xccu), 0x3f000000u);
    /* 007bc9a3: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 007bc9a5: fld dword ptr [0x97e464] */ FPUSH(R_F32((u32)(0x97e464u)));
    /* 007bc9ab: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bc9ad: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 007bc9af: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bc9b1: fadd dword ptr [0x97e458] */ ST(0) = ST(0) + R_F32((u32)(0x97e458u));
    /* 007bc9b7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc9b9: fstp dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0)); FPOP();
    /* 007bc9c0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007bc9c2: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 007bc9c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc9cb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007bc9cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bc9cf: fstp dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0)); FPOP();
    /* 007bc9d6: fchs  */ ST(0) = -ST(0);
    /* 007bc9d8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007bc9da: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 007bc9e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc9e3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7bc9e8u); f_0082dcbc();
    /* 007bc9e8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc9eb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bc9ee: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bc9f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bc9f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007bc9f9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7bc9feu); f_0082ddd8();
    /* 007bc9fe: fmul dword ptr [0x97e450] */ ST(0) = ST(0) * R_F32((u32)(0x97e450u));
    /* 007bca04: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bca0a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bca0c: fld dword ptr [0x97e44c] */ FPUSH(R_F32((u32)(0x97e44cu)));
    /* 007bca12: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bca14: fld dword ptr [0x97e460] */ FPUSH(R_F32((u32)(0x97e460u)));
    /* 007bca1a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bca1d: fld dword ptr [0x97e45c] */ FPUSH(R_F32((u32)(0x97e45cu)));
    /* 007bca23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bca25: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 007bca27: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bca29: fadd dword ptr [0x97e448] */ ST(0) = ST(0) + R_F32((u32)(0x97e448u));
    /* 007bca2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bca31: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007bca33: fadd dword ptr [0x97e444] */ ST(0) = ST(0) + R_F32((u32)(0x97e444u));
    /* 007bca39: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007bca3b: fst dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0));
    /* 007bca42: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007bca49: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007bca4b: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bca4d: fstp dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0)); FPOP();
    /* 007bca54: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bca56: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007bca58: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 007bca5a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007bca5c: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 007bca63: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007bca66: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007bca68: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 007bca6f: lea ecx, [esp + 0xc4] */ r_ecx = (u32)(r_esp+0xc4u);
    /* 007bca76: fchs  */ ST(0) = -ST(0);
    /* 007bca78: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007bca7a: fstp dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0)); FPOP();
    /* 007bca81: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7bca86u); f_0082bb74();
    /* 007bca86: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7bca8bu); f_004ac444();
    /* 007bca8b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7bca90u); f_007a9044();
    /* 007bca90: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bca96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bca97: ret  */ FN_RET(0x007bc508); r_esp += 4; return;
}

void f_007bca98(void) /* sub_7BCA98 */
{
    FN_ENTER(0x007bca98);
    /* 007bca98: call 0x8059a8 */ r_esp -= 4; W32(r_esp, 0x7bca9du); f_008059a8();
    /* 007bca9d: call 0x816fe0 */ r_esp -= 4; W32(r_esp, 0x7bcaa2u); f_00816fe0();
    /* 007bcaa2: mov eax, dword ptr [0xaab1c8] */ r_eax = R32((u32)(0xaab1c8u));
    /* 007bcaa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcaa9: jne 0x7bcab0 */ if (!fZ) goto L_007bcab0;
L_007bcaab:; BB(0x007bcaab);
    /* 007bcaab: call 0x6e96e0 */ r_esp -= 4; W32(r_esp, 0x7bcab0u); f_006e96e0();
L_007bcab0:; BB(0x007bcab0);
    /* 007bcab0: call 0x5c7598 */ r_esp -= 4; W32(r_esp, 0x7bcab5u); f_005c7598();
    /* 007bcab5: call 0x7b39c8 */ r_esp -= 4; W32(r_esp, 0x7bcabau); f_007b39c8();
    /* 007bcaba: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 007bcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcac2: je 0x7bcad1 */ if (fZ) goto L_007bcad1;
L_007bcac4:; BB(0x007bcac4);
    /* 007bcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007bcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007bcad1:; BB(0x007bcad1);
    /* 007bcad1: call 0x64ab00 */ r_esp -= 4; W32(r_esp, 0x7bcad6u); f_0064ab00();
    /* 007bcad6: call 0x6cc6ec */ r_esp -= 4; W32(r_esp, 0x7bcadbu); f_006cc6ec();
    /* 007bcadb: mov dword ptr [0x9c9558], 1 */ W32((u32)(0x9c9558u), 0x1u);
    /* 007bcae5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bcae7: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 007bcaec: mov dword ptr [0xa8eba4], eax */ W32((u32)(0xa8eba4u), r_eax);
    /* 007bcaf1: mov dword ptr [0xa8f744], eax */ W32((u32)(0xa8f744u), r_eax);
    /* 007bcaf6: mov dword ptr [0xa8fcb4], eax */ W32((u32)(0xa8fcb4u), r_eax);
    /* 007bcafb: mov dword ptr [0xaafc90], eax */ W32((u32)(0xaafc90u), r_eax);
    /* 007bcb00: ret  */ FN_RET(0x007bca98); r_esp += 4; return;
}

void f_007bcb04(void) /* sub_7BCB04 */
{
    FN_ENTER(0x007bcb04);
    /* 007bcb04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bcb05: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bcb0au); f_006ffa24();
    /* 007bcb0a: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bcb0fu); f_00815434();
    /* 007bcb0f: call 0x8148e4 */ r_esp -= 4; W32(r_esp, 0x7bcb14u); f_008148e4();
    /* 007bcb14: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x7bcb19u); f_0079f1d8();
    /* 007bcb19: mov dword ptr [0xaaecbc], 0 */ W32((u32)(0xaaecbcu), 0x0u);
    /* 007bcb23: call 0x7bca98 */ r_esp -= 4; W32(r_esp, 0x7bcb28u); f_007bca98();
    /* 007bcb28: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bcb2du); f_005badd0();
    /* 007bcb2d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcb32: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bcb37u); f_00818560();
    /* 007bcb37: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcb3c: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x7bcb41u); f_008181c4();
    /* 007bcb41: mov ecx, dword ptr [0xaca388] */ r_ecx = R32((u32)(0xaca388u));
    /* 007bcb47: call 0x817284 */ r_esp -= 4; W32(r_esp, 0x7bcb4cu); f_00817284();
    /* 007bcb4c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bcb51u); f_0061cdb0();
    /* 007bcb51: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bcb56u); f_0061cdb0();
    /* 007bcb56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bcb58: mov ebx, eax */ r_ebx = r_eax;
L_007bcb5a:; BB(0x007bcb5a);
    /* 007bcb5a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcb5fu); f_0080030c();
    /* 007bcb5f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bcb62: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bcb65: jl 0x7bcb5a */ if ((fS!=fO)) goto L_007bcb5a;
L_007bcb67:; BB(0x007bcb67);
    /* 007bcb67: call 0x7ad734 */ r_esp -= 4; W32(r_esp, 0x7bcb6cu); f_007ad734();
    /* 007bcb6c: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bcb71: call 0x8155fc */ r_esp -= 4; W32(r_esp, 0x7bcb76u); f_008155fc();
    /* 007bcb76: call 0x4f39e0 */ r_esp -= 4; W32(r_esp, 0x7bcb7bu); f_004f39e0();
    /* 007bcb7b: call 0x6a7748 */ r_esp -= 4; W32(r_esp, 0x7bcb80u); f_006a7748();
    /* 007bcb80: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcb82: push 0xa0f5e0 */ { u32 v = 0xa0f5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcb87: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7bcb8cu); f_0078b0a0();
    /* 007bcb8c: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcb91: push 0xa0f460 */ { u32 v = 0xa0f460u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcb96: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7bcb9bu); f_0078b0a0();
    /* 007bcb9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bcb9e: mov dword ptr [0xa9c4f4], 0 */ W32((u32)(0xa9c4f4u), 0x0u);
    /* 007bcba8: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 007bcbad: call 0x5bc014 */ r_esp -= 4; W32(r_esp, 0x7bcbb2u); f_005bc014();
    /* 007bcbb2: call 0x5b9380 */ r_esp -= 4; W32(r_esp, 0x7bcbb7u); f_005b9380();
    /* 007bcbb7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bcbbcu); f_0061cdb0();
    /* 007bcbbc: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcbc1u); f_0080030c();
    /* 007bcbc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bcbc2: ret  */ FN_RET(0x007bcb04); r_esp += 4; return;
}

void f_007bcbc4(void) /* sub_7BCBC4 */
{
    FN_ENTER(0x007bcbc4);
    /* 007bcbc4: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007bcbc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcbcb: je 0x7bcbd4 */ if (fZ) goto L_007bcbd4;
L_007bcbcd:; BB(0x007bcbcd);
    /* 007bcbcd: call 0x7bd2f0 */ r_esp -= 4; W32(r_esp, 0x7bcbd2u); f_007bd2f0();
    /* 007bcbd2: jmp 0x7bcbd9 */ goto L_007bcbd9;
L_007bcbd4:; BB(0x007bcbd4);
    /* 007bcbd4: call 0x7bcbf0 */ r_esp -= 4; W32(r_esp, 0x7bcbd9u); f_007bcbf0();
L_007bcbd9:; BB(0x007bcbd9);
    /* 007bcbd9: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcbdb: call 0x7c0044 */ r_esp -= 4; W32(r_esp, 0x7bcbe0u); f_007c0044();
    /* 007bcbe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bcbe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bcbe3: je 0x7bcbed */ if (fZ) goto L_007bcbed;
L_007bcbe5:; BB(0x007bcbe5);
    /* 007bcbe5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcbe7: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bcbecu); f_007a60dc();
    /* 007bcbec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bcbed:; BB(0x007bcbed);
    /* 007bcbed: ret  */ FN_RET(0x007bcbc4); r_esp += 4; return;
}

void f_007bcbf0(void) /* sub_7BCBF0 */
{
    FN_ENTER(0x007bcbf0);
    /* 007bcbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bcbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 007bcbf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bcbf5: push 0x8f6642 */ { u32 v = 0x8f6642u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcbfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bcc00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bcc01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bcc08: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bcc0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bcc0e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007bcc11: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007bcc14: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007bcc17: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x7bcc1cu); f_0083adbc();
    /* 007bcc1c: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7bcc21u); f_007bfba0();
    /* 007bcc21: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7bcc26u); f_007becd4();
    /* 007bcc26: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcc2b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bcc30u); f_0061cdb0();
    /* 007bcc30: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcc35: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bcc3au); f_0081745c();
    /* 007bcc3a: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcc3f: call 0x817d74 */ r_esp -= 4; W32(r_esp, 0x7bcc44u); f_00817d74();
    /* 007bcc44: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcc49: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x7bcc4eu); f_00817604();
    /* 007bcc4e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcc53: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bcc58u); f_00818f80();
    /* 007bcc58: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7bcc5du); f_005ba748();
    /* 007bcc5d: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7bcc62u); f_00814168();
    /* 007bcc62: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x7bcc67u); f_006c38bc();
    /* 007bcc67: call 0x77ca4c */ r_esp -= 4; W32(r_esp, 0x7bcc6cu); f_0077ca4c();
    /* 007bcc6c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bcc71u); f_006dc358();
    /* 007bcc71: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 007bcc76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcc78: jne 0x7bcccd */ if (!fZ) goto L_007bcccd;
L_007bcc7a:; BB(0x007bcc7a);
    /* 007bcc7a: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x7bcc7fu); f_00415cec();
    /* 007bcc7f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bcc82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bcc83: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bcc88u); f_006dc358();
    /* 007bcc88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bcc89: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcc8c: je 0x7bcccd */ if (fZ) goto L_007bcccd;
L_007bcc8e:; BB(0x007bcc8e);
    /* 007bcc8e: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x7bcc93u); f_00415cec();
    /* 007bcc93: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bcc96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bcc97: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x7bcc9cu); f_0082c204();
    /* 007bcc9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bcc9d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcca0: je 0x7bd272 */ if (fZ) goto L_007bd272;
L_007bcca6:; BB(0x007bcca6);
    /* 007bcca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcca8: je 0x7bccb6 */ if (fZ) goto L_007bccb6;
L_007bccaa:; BB(0x007bccaa);
    /* 007bccaa: mov dword ptr [0xaae6dc], 0 */ W32((u32)(0xaae6dcu), 0x0u);
    /* 007bccb4: jmp 0x7bcccd */ goto L_007bcccd;
L_007bccb6:; BB(0x007bccb6);
    /* 007bccb6: mov eax, dword ptr [0xaae6dc] */ r_eax = R32((u32)(0xaae6dcu));
    /* 007bccbb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bccbe: mov dword ptr [0xaae6dc], eax */ W32((u32)(0xaae6dcu), r_eax);
    /* 007bccc3: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bccc6: jle 0x7bcccd */ if ((fZ||fS!=fO)) goto L_007bcccd;
L_007bccc8:; BB(0x007bccc8);
    /* 007bccc8: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x7bcccdu); f_007a0118();
L_007bcccd:; BB(0x007bcccd);
    /* 007bcccd: call 0x7a616c */ r_esp -= 4; W32(r_esp, 0x7bccd2u); f_007a616c();
    /* 007bccd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bccd4: jne 0x7bce27 */ if (!fZ) goto L_007bce27;
L_007bccda:; BB(0x007bccda);
    /* 007bccda: call 0x7bd288 */ r_esp -= 4; W32(r_esp, 0x7bccdfu); f_007bd288();
    /* 007bccdf: call 0x7a6120 */ r_esp -= 4; W32(r_esp, 0x7bcce4u); f_007a6120();
    /* 007bcce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcce6: jne 0x7bcdb9 */ if (!fZ) goto L_007bcdb9;
L_007bccec:; BB(0x007bccec);
    /* 007bccec: call 0x7a6140 */ r_esp -= 4; W32(r_esp, 0x7bccf1u); f_007a6140();
    /* 007bccf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bccf3: jne 0x7bcd56 */ if (!fZ) goto L_007bcd56;
L_007bccf5:; BB(0x007bccf5);
    /* 007bccf5: movsx eax, word ptr [0xaae6d4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae6d4u));
    /* 007bccfc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bccff: je 0x7bd015 */ if (fZ) goto L_007bd015;
L_007bcd05:; BB(0x007bcd05);
    /* 007bcd05: mov eax, dword ptr [0xaab20c] */ r_eax = R32((u32)(0xaab20cu));
    /* 007bcd0a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcd0d: je 0x7bd008 */ if (fZ) goto L_007bd008;
L_007bcd13:; BB(0x007bcd13);
    /* 007bcd13: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7bcd18u); f_007bfedc();
    /* 007bcd18: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bcd1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcd1d: je 0x7bcd24 */ if (fZ) goto L_007bcd24;
L_007bcd1f:; BB(0x007bcd1f);
    /* 007bcd1f: call 0x7bd2dc */ r_esp -= 4; W32(r_esp, 0x7bcd24u); f_007bd2dc();
L_007bcd24:; BB(0x007bcd24);
    /* 007bcd24: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bcd29u); f_006dc358();
    /* 007bcd29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcd2b: je 0x7bcd3a */ if (fZ) goto L_007bcd3a;
L_007bcd2d:; BB(0x007bcd2d);
    /* 007bcd2d: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x7bcd32u); f_0079f1d8();
    /* 007bcd32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcd34: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bcd39u); f_007a60dc();
    /* 007bcd39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bcd3a:; BB(0x007bcd3a);
    /* 007bcd3a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcd3fu); f_0080030c();
    /* 007bcd3f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bcd42: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bcd45: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bcd48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bcd4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bcd52: mov esp, ebp */ r_esp = r_ebp;
    /* 007bcd54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bcd55: ret  */ FN_RET(0x007bcbf0); r_esp += 4; return;
L_007bcd56:; BB(0x007bcd56);
    /* 007bcd56: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x7bcd5bu); f_004d28a4();
    /* 007bcd5b: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bcd60u); f_0079eb30();
    /* 007bcd60: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bcd65u); f_00692748();
    /* 007bcd65: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bcd6au); f_00815434();
    /* 007bcd6a: call 0x8148e4 */ r_esp -= 4; W32(r_esp, 0x7bcd6fu); f_008148e4();
    /* 007bcd6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcd71: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 007bcd74: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bcd79u); f_008193cc();
    /* 007bcd79: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007bcd80: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bcd85u); f_005badd0();
    /* 007bcd85: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bcd8au); f_007bebe8();
    /* 007bcd8a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcd8fu); f_0080030c();
    /* 007bcd8f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcd94u); f_0080030c();
    /* 007bcd94: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007bcd96:; BB(0x007bcd96);
    /* 007bcd96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bcd97: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bcd9cu); f_0068d5a8();
    /* 007bcd9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bcd9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcd9f: je 0x7bcdac */ if (fZ) goto L_007bcdac;
L_007bcda1:; BB(0x007bcda1);
    /* 007bcda1: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 007bcda4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bcda5: mov ecx, eax */ r_ecx = r_eax;
    /* 007bcda7: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bcdacu); f_008172d4();
L_007bcdac:; BB(0x007bcdac);
    /* 007bcdac: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bcdaf: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bcdb2: jl 0x7bcd96 */ if ((fS!=fO)) goto L_007bcd96;
L_007bcdb4:; BB(0x007bcdb4);
    /* 007bcdb4: jmp 0x7bd01f */ goto L_007bd01f;
L_007bcdb9:; BB(0x007bcdb9);
    /* 007bcdb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcdbb: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 007bcdbe: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bcdc3u); f_008193cc();
    /* 007bcdc3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bcdca: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bcdcfu); f_006ffa24();
    /* 007bcdcf: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bcdd4u); f_0079eb30();
    /* 007bcdd4: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bcdd9u); f_00692748();
    /* 007bcdd9: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bcddeu); f_00815434();
    /* 007bcdde: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bcde3u); f_005badd0();
    /* 007bcde3: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bcde8u); f_007bebe8();
    /* 007bcde8: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcdedu); f_0080030c();
    /* 007bcded: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bcdf2u); f_0080030c();
    /* 007bcdf2: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bcdf8: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bcdfd: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bce02u); f_0078b0e4();
    /* 007bce02: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007bce04:; BB(0x007bce04);
    /* 007bce04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bce05: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bce0au); f_0068d5a8();
    /* 007bce0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bce0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bce0d: je 0x7bce1a */ if (fZ) goto L_007bce1a;
L_007bce0f:; BB(0x007bce0f);
    /* 007bce0f: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 007bce12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bce13: mov ecx, eax */ r_ecx = r_eax;
    /* 007bce15: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bce1au); f_008172d4();
L_007bce1a:; BB(0x007bce1a);
    /* 007bce1a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bce1d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bce20: jl 0x7bce04 */ if ((fS!=fO)) goto L_007bce04;
L_007bce22:; BB(0x007bce22);
    /* 007bce22: jmp 0x7bd0e5 */ goto L_007bd0e5;
L_007bce27:; BB(0x007bce27);
    /* 007bce27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bce29: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 007bce2f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bce34u); f_008193cc();
    /* 007bce34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bce3b: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bce40u); f_0079eb30();
    /* 007bce40: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bce45u); f_00692748();
    /* 007bce45: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bce4au); f_00815434();
    /* 007bce4a: call 0x8148e4 */ r_esp -= 4; W32(r_esp, 0x7bce4fu); f_008148e4();
    /* 007bce4f: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bce54u); f_005badd0();
    /* 007bce54: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bce59u); f_007bebe8();
    /* 007bce59: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bce5eu); f_0080030c();
    /* 007bce5e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bce63u); f_0080030c();
    /* 007bce63: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bce69: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bce6e: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bce73u); f_0078b0e4();
    /* 007bce73: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007bce75:; BB(0x007bce75);
    /* 007bce75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bce76: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bce7bu); f_0068d5a8();
    /* 007bce7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bce7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bce7e: je 0x7bce8e */ if (fZ) goto L_007bce8e;
L_007bce80:; BB(0x007bce80);
    /* 007bce80: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 007bce86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bce87: mov ecx, eax */ r_ecx = r_eax;
    /* 007bce89: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bce8eu); f_008172d4();
L_007bce8e:; BB(0x007bce8e);
    /* 007bce8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bce91: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bce94: jl 0x7bce75 */ if ((fS!=fO)) goto L_007bce75;
L_007bce96:; BB(0x007bce96);
    /* 007bce96: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bce9b: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bcea0u); f_00818560();
    /* 007bcea0: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bcea5: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bceaau); f_008155a8();
    /* 007bceaa: call 0x80c3c4 */ r_esp -= 4; W32(r_esp, 0x7bceafu); f_0080c3c4();
    /* 007bceaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bceb1: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7bceb6u); f_0080c79c();
    /* 007bceb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bceb7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bcebcu); f_0061cdb0();
    /* 007bcebc: call 0x7bca98 */ r_esp -= 4; W32(r_esp, 0x7bcec1u); f_007bca98();
    /* 007bcec1: call 0x80cf44 */ r_esp -= 4; W32(r_esp, 0x7bcec6u); f_0080cf44();
    /* 007bcec6: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bcecbu); f_00810550();
    /* 007bcecb: call 0x6bd514 */ r_esp -= 4; W32(r_esp, 0x7bced0u); f_006bd514();
    /* 007bced0: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bced5u); f_007a7c90();
    /* 007bced5: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bcedau); f_008013bc();
    /* 007bceda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcedc: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bcee1u); f_00417a9c();
    /* 007bcee1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bcee2: call 0x6bbe4c */ r_esp -= 4; W32(r_esp, 0x7bcee7u); f_006bbe4c();
    /* 007bcee7: call 0x6ba3e8 */ r_esp -= 4; W32(r_esp, 0x7bceecu); f_006ba3e8();
    /* 007bceec: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 007bcef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcef3: je 0x7bcf4a */ if (fZ) goto L_007bcf4a;
L_007bcef5:; BB(0x007bcef5);
    /* 007bcef5: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 007bcefc: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcf01: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bcf06u); f_005caba4();
    /* 007bcf06: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bcf09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bcf0c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 007bcf0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcf11: je 0x7bcffe */ if (fZ) goto L_007bcffe;
L_007bcf17:; BB(0x007bcf17);
    /* 007bcf17: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 007bcf1e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bcf25: mov ecx, eax */ r_ecx = r_eax;
    /* 007bcf27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bcf29: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bcf2f: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bcf34u); f_006bc800();
    /* 007bcf34: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_007bcf3b:; BB(0x007bcf3b);
    /* 007bcf3b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bcf42: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bcf45: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007bcf47: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x7bcf4au); call_ind(t); }
L_007bcf4a:; BB(0x007bcf4a);
    /* 007bcf4a: call 0x6b9c0c */ r_esp -= 4; W32(r_esp, 0x7bcf4fu); f_006b9c0c();
    /* 007bcf4f: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 007bcf59: call 0x6d050c */ r_esp -= 4; W32(r_esp, 0x7bcf5eu); f_006d050c();
    /* 007bcf5e: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bcf63: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bcf68u); f_00815730();
    /* 007bcf68: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bcf6e: call 0x64ab0c */ r_esp -= 4; W32(r_esp, 0x7bcf73u); f_0064ab0c();
    /* 007bcf73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bcf74: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bcf79u); f_00417c10();
    /* 007bcf79: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcf7e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bcf83u); f_0061cdb0();
    /* 007bcf83: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcf88: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bcf8du); f_0081745c();
    /* 007bcf8d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bcf92: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bcf97u); f_00818f80();
    /* 007bcf97: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007bcf99:; BB(0x007bcf99);
    /* 007bcf99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bcf9a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bcf9fu); f_0068d5a8();
    /* 007bcf9f: mov ebx, eax */ r_ebx = r_eax;
    /* 007bcfa1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bcfa4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcfa6: je 0x7bcfbc */ if (fZ) goto L_007bcfbc;
L_007bcfa8:; BB(0x007bcfa8);
    /* 007bcfa8: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bcfae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bcfb0: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bcfb5u); f_008172d4();
    /* 007bcfb5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007bcfb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bcfb9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7bcfbcu); call_ind(t); }
L_007bcfbc:; BB(0x007bcfbc);
    /* 007bcfbc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bcfbf: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bcfc2: jl 0x7bcf99 */ if ((fS!=fO)) goto L_007bcf99;
L_007bcfc4:; BB(0x007bcfc4);
    /* 007bcfc4: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bcfc9u); f_0079eb78();
    /* 007bcfc9: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bcfceu); f_0069281c();
    /* 007bcfce: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bcfd3u); f_006bc920();
    /* 007bcfd3: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007bcfd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bcfdb: je 0x7bcfe2 */ if (fZ) goto L_007bcfe2;
L_007bcfdd:; BB(0x007bcfdd);
    /* 007bcfdd: call 0x7f9c28 */ r_esp -= 4; W32(r_esp, 0x7bcfe2u); f_007f9c28();
L_007bcfe2:; BB(0x007bcfe2);
    /* 007bcfe2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bcfe9: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 007bcfef: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bcff4u); f_008171e8();
    /* 007bcff4: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bcff9u); f_007a6154();
    /* 007bcff9: jmp 0x7bccda */ goto L_007bccda;
L_007bcffe:; BB(0x007bcffe);
    /* 007bcffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bd000: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bd003: jmp 0x7bcf3b */ goto L_007bcf3b;
L_007bd008:; BB(0x007bd008);
    /* 007bd008: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd00a: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bd00fu); f_007a60dc();
    /* 007bd00f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd010: jmp 0x7bcd13 */ goto L_007bcd13;
L_007bd015:; BB(0x007bd015);
    /* 007bd015: call 0x7bd7c8 */ r_esp -= 4; W32(r_esp, 0x7bd01au); f_007bd7c8();
    /* 007bd01a: jmp 0x7bcd05 */ goto L_007bcd05;
L_007bd01f:; BB(0x007bd01f);
    /* 007bd01f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd024: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bd029u); f_00818560();
    /* 007bd029: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd02eu); f_0061cdb0();
    /* 007bd02e: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bd033u); f_007a7c90();
    /* 007bd033: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bd038u); f_008013bc();
    /* 007bd038: call 0x4178f8 */ r_esp -= 4; W32(r_esp, 0x7bd03du); f_004178f8();
    /* 007bd03d: call 0x806fcc */ r_esp -= 4; W32(r_esp, 0x7bd042u); f_00806fcc();
    /* 007bd042: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7bd047u); f_00793f64();
    /* 007bd047: call 0x8103dc */ r_esp -= 4; W32(r_esp, 0x7bd04cu); f_008103dc();
    /* 007bd04c: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bd051u); f_00810550();
    /* 007bd051: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd053: call 0x80ef20 */ r_esp -= 4; W32(r_esp, 0x7bd058u); f_0080ef20();
    /* 007bd058: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd059: call 0x8130b0 */ r_esp -= 4; W32(r_esp, 0x7bd05eu); f_008130b0();
    /* 007bd05e: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7bd063u); f_00782098();
    /* 007bd063: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bd068u); f_00417c10();
    /* 007bd068: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd06d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd072u); f_0061cdb0();
    /* 007bd072: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd077: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bd07cu); f_0081745c();
    /* 007bd07c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd081: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bd086u); f_00818f80();
    /* 007bd086: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007bd088:; BB(0x007bd088);
    /* 007bd088: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bd089: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bd08eu); f_0068d5a8();
    /* 007bd08e: mov ebx, eax */ r_ebx = r_eax;
    /* 007bd090: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd093: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd095: je 0x7bd0ab */ if (fZ) goto L_007bd0ab;
L_007bd097:; BB(0x007bd097);
    /* 007bd097: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd09d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd09f: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bd0a4u); f_008172d4();
    /* 007bd0a4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007bd0a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd0a8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7bd0abu); call_ind(t); }
L_007bd0ab:; BB(0x007bd0ab);
    /* 007bd0ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bd0ae: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd0b1: jl 0x7bd088 */ if ((fS!=fO)) goto L_007bd088;
L_007bd0b3:; BB(0x007bd0b3);
    /* 007bd0b3: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bd0b8u); f_0079eb78();
    /* 007bd0b8: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bd0bdu); f_0069281c();
    /* 007bd0bd: call 0x6428bc */ r_esp -= 4; W32(r_esp, 0x7bd0c2u); f_006428bc();
    /* 007bd0c2: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x7bd0c7u); f_004d2968();
    /* 007bd0c7: call 0x671268 */ r_esp -= 4; W32(r_esp, 0x7bd0ccu); f_00671268();
    /* 007bd0cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bd0d3: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 007bd0d6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bd0dbu); f_008171e8();
    /* 007bd0db: call 0x7a6128 */ r_esp -= 4; W32(r_esp, 0x7bd0e0u); f_007a6128();
    /* 007bd0e0: jmp 0x7bccf5 */ goto L_007bccf5;
L_007bd0e5:; BB(0x007bd0e5);
    /* 007bd0e5: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd0ea: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bd0efu); f_00818560();
    /* 007bd0ef: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd0f4: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bd0f9u); f_008155a8();
    /* 007bd0f9: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd0fe: call 0x8156b0 */ r_esp -= 4; W32(r_esp, 0x7bd103u); f_008156b0();
    /* 007bd103: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd108u); f_0061cdb0();
    /* 007bd108: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bd10du); f_007a7c90();
    /* 007bd10d: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bd112u); f_008013bc();
    /* 007bd112: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd114: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bd119u); f_00417a9c();
    /* 007bd119: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd11a: mov eax, dword ptr [0xaae6d0] */ r_eax = R32((u32)(0xaae6d0u));
    /* 007bd11f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007bd121: je 0x7bd171 */ if (fZ) goto L_007bd171;
L_007bd123:; BB(0x007bd123);
    /* 007bd123: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007bd126: mov dword ptr [0xaae6d0], eax */ W32((u32)(0xaae6d0u), r_eax);
    /* 007bd12b: call 0x7ba3b4 */ r_esp -= 4; W32(r_esp, 0x7bd130u); f_007ba3b4();
    /* 007bd130: mov dword ptr [0xa943cc], 1 */ W32((u32)(0xa943ccu), 0x1u);
    /* 007bd13a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd13f: push 0xaaeba0 */ { u32 v = 0xaaeba0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd144: call 0x80c12c */ r_esp -= 4; W32(r_esp, 0x7bd149u); f_0080c12c();
    /* 007bd149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd14b: call 0x6bb754 */ r_esp -= 4; W32(r_esp, 0x7bd150u); f_006bb754();
    /* 007bd150: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd153: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x7bd158u); f_005ba174();
    /* 007bd158: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd15a: push 0xa0f5e0 */ { u32 v = 0xa0f5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd15f: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7bd164u); f_0078b184();
    /* 007bd164: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd167: call 0x5e3c98 */ r_esp -= 4; W32(r_esp, 0x7bd16cu); f_005e3c98();
    /* 007bd16c: call 0x5c7598 */ r_esp -= 4; W32(r_esp, 0x7bd171u); f_005c7598();
L_007bd171:; BB(0x007bd171);
    /* 007bd171: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd176: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bd17bu); f_00815730();
    /* 007bd17b: mov edi, eax */ r_edi = r_eax;
    /* 007bd17d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd183: call 0x64ab0c */ r_esp -= 4; W32(r_esp, 0x7bd188u); f_0064ab0c();
    /* 007bd188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd189: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bd18eu); f_00417c10();
    /* 007bd18e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd193: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd198u); f_0061cdb0();
    /* 007bd198: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd19d: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bd1a2u); f_0081745c();
    /* 007bd1a2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd1a7: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bd1acu); f_00818f80();
    /* 007bd1ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007bd1ae:; BB(0x007bd1ae);
    /* 007bd1ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bd1af: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bd1b4u); f_0068d5a8();
    /* 007bd1b4: mov ebx, eax */ r_ebx = r_eax;
    /* 007bd1b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd1b9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd1bb: je 0x7bd1d1 */ if (fZ) goto L_007bd1d1;
L_007bd1bd:; BB(0x007bd1bd);
    /* 007bd1bd: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd1c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd1c5: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bd1cau); f_008172d4();
    /* 007bd1ca: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007bd1cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd1ce: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7bd1d1u); call_ind(t); }
L_007bd1d1:; BB(0x007bd1d1);
    /* 007bd1d1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bd1d4: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd1d7: jl 0x7bd1ae */ if ((fS!=fO)) goto L_007bd1ae;
L_007bd1d9:; BB(0x007bd1d9);
    /* 007bd1d9: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bd1deu); f_0069281c();
    /* 007bd1de: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bd1e3u); f_0079eb78();
    /* 007bd1e3: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bd1e8u); f_006bc920();
    /* 007bd1e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd1ea: je 0x7bd1f4 */ if (fZ) goto L_007bd1f4;
L_007bd1ec:; BB(0x007bd1ec);
    /* 007bd1ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd1ee: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x7bd1f3u); f_006a758c();
    /* 007bd1f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bd1f4:; BB(0x007bd1f4);
    /* 007bd1f4: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 007bd1f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd1fb: je 0x7bd241 */ if (fZ) goto L_007bd241;
L_007bd1fd:; BB(0x007bd1fd);
    /* 007bd1fd: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 007bd204: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd209: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bd20eu); f_005caba4();
    /* 007bd20e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd20f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007bd212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd214: je 0x7bd23a */ if (fZ) goto L_007bd23a;
L_007bd216:; BB(0x007bd216);
    /* 007bd216: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 007bd21d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007bd224: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd226: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd22c: mov ecx, eax */ r_ecx = r_eax;
    /* 007bd22e: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bd233u); f_006bc800();
    /* 007bd233: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_007bd23a:; BB(0x007bd23a);
    /* 007bd23a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
L_007bd241:; BB(0x007bd241);
    /* 007bd241: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x7bd246u); f_005ba1f0();
    /* 007bd246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd248: je 0x7bd254 */ if (fZ) goto L_007bd254;
L_007bd24a:; BB(0x007bd24a);
    /* 007bd24a: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bd24fu); f_005ba204();
    /* 007bd24f: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bd254u); f_005ba1e0();
L_007bd254:; BB(0x007bd254);
    /* 007bd254: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bd259u); f_005ba1e0();
    /* 007bd259: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bd260: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 007bd263: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bd268u); f_008171e8();
    /* 007bd268: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bd26du); f_007a6108();
    /* 007bd26d: jmp 0x7bccec */ goto L_007bccec;
L_007bd272:; BB(0x007bd272);
    /* 007bd272: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x7bd277u); f_00415cec();
    /* 007bd277: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bd27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd27b: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7bd280u); f_007083d4();
    /* 007bd280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd281: jmp 0x7bcca6 */ goto L_007bcca6;
}

