#include "protos.h"

void f_004ee004(void) /* sub_4EE004 */
{
    FN_ENTER(0x004ee004);
    /* 004ee004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee005: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee007: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee009: push 0x8d2bec */ { u32 v = 0x8d2becu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee00e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ee014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee015: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ee01c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee01f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ee022: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ee025: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ee028: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ee02b: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee02d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ee034: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ee039u); f_005caba4();
    /* 004ee039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee03a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ee03d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee03f: je 0x4ee075 */ if (fZ) goto L_004ee075;
L_004ee041:; BB(0x004ee041);
    /* 004ee041: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ee048: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee04f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee052: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee055: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee058: call 0x4ee07c */ r_esp -= 4; W32(r_esp, 0x4ee05du); f_004ee07c();
    /* 004ee05d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee060: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ee067:; BB(0x004ee067);
    /* 004ee067: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ee06a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ee071: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee074: ret  */ FN_RET(0x004ee004); r_esp += 4; return;
L_004ee075:; BB(0x004ee075);
    /* 004ee075: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee077: jmp 0x4ee067 */ goto L_004ee067;
}

void f_004ee07c(void) /* sub_4EE07C */
{
    FN_ENTER(0x004ee07c);
    /* 004ee07c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee07d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee07e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee07f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ee081: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004ee085: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ee087: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee08b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ee090u); f_008193cc();
    /* 004ee090: mov dword ptr [ebp], 0xafd7e0 */ W32((u32)(r_ebp), 0xafd7e0u);
    /* 004ee097: mov eax, dword ptr [0x9b8e18] */ r_eax = R32((u32)(0x9b8e18u));
    /* 004ee09c: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 004ee09f: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004ee0a2: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee0a4: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 004ee0a7: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 004ee0aa: mov dword ptr [ebp + 0x28], esi */ W32((u32)(r_ebp+0x28u), r_esi);
    /* 004ee0ad: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004ee0b0: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 004ee0b3: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 004ee0b6: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 004ee0b9: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee0bb: lea esi, [ebp + 0x30] */ r_esi = (u32)(r_ebp+0x30u);
    /* 004ee0be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee0bf: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4ee0c4u); f_00858900();
    /* 004ee0c4: mov dword ptr [ebp + 0x70], 0x14fa */ W32((u32)(r_ebp+0x70u), 0x14fau);
    /* 004ee0cb: mov dword ptr [ebp + 0x60], esi */ W32((u32)(r_ebp+0x60u), r_esi);
    /* 004ee0ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ee0d0: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 004ee0d3: mov dword ptr [ebp + 0x68], edx */ W32((u32)(r_ebp+0x68u), r_edx);
    /* 004ee0d6: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 004ee0d9: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 004ee0dc: mov eax, ebp */ r_eax = r_ebp;
    /* 004ee0de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee0e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee0e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee0e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee0e4: ret 8 */ FN_RET(0x004ee07c); r_esp += 12; return;
}

void f_004ee0e8(void) /* sub_4EE0E8 */
{
    FN_ENTER(0x004ee0e8);
    /* 004ee0e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee0e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ee0eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ee0ed: call 0x4ee10c */ r_esp -= 4; W32(r_esp, 0x4ee0f2u); f_004ee10c();
    /* 004ee0f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ee0f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee0f8: jne 0x4ee0fe */ if (!fZ) goto L_004ee0fe;
L_004ee0fa:; BB(0x004ee0fa);
    /* 004ee0fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee0fb: ret 4 */ FN_RET(0x004ee0e8); r_esp += 8; return;
L_004ee0fe:; BB(0x004ee0fe);
    /* 004ee0fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee0ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ee104u); f_005c2f74();
    /* 004ee104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee105: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee106: ret 4 */ FN_RET(0x004ee0e8); r_esp += 8; return;
}

void f_004ee10c(void) /* sub_4EE10C */
{
    FN_ENTER(0x004ee10c);
    /* 004ee10c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee10d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee10f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee111: push 0x8d2c08 */ { u32 v = 0x8d2c08u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee116: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ee11c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee11d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ee124: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee127: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ee12a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ee12d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ee130: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ee133: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ee136: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee13d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee140: mov dword ptr [ecx], 0xafd8b8 */ W32((u32)(r_ecx), 0xafd8b8u);
    /* 004ee146: call 0x4ee168 */ r_esp -= 4; W32(r_esp, 0x4ee14bu); f_004ee168();
    /* 004ee14b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ee152: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee155: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ee15au); f_008171e8();
    /* 004ee15a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ee15d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ee164: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee166: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee167: ret  */ FN_RET(0x004ee10c); r_esp += 4; return;
}

void f_004ee168(void) /* sub_4EE168 */
{
    FN_ENTER(0x004ee168);
    /* 004ee168: mov edx, dword ptr [0xa72330] */ r_edx = R32((u32)(0xa72330u));
    /* 004ee16e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ee171: jg 0x4ee190 */ if ((!fZ&&fS==fO)) goto L_004ee190;
L_004ee173:; BB(0x004ee173);
    /* 004ee173: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 004ee179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee17b: je 0x4ee190 */ if (fZ) goto L_004ee190;
L_004ee17d:; BB(0x004ee17d);
    /* 004ee17d: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 004ee187: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee18a: mov dword ptr [0xa72330], edx */ W32((u32)(0xa72330u), r_edx);
L_004ee190:; BB(0x004ee190);
    /* 004ee190: ret  */ FN_RET(0x004ee168); r_esp += 4; return;
}

void f_004ee194(void) /* sub_4EE194 */
{
    FN_ENTER(0x004ee194);
    /* 004ee194: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 004ee197: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee19a: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 004ee19d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ee19f: jle 0x4ee1ac */ if ((fZ||fS!=fO)) goto L_004ee1ac;
L_004ee1a1:; BB(0x004ee1a1);
    /* 004ee1a1: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 004ee1a4: call dword ptr [eax*4 + 0x9b8e20] */ { u32 t = R32((u32)(r_eax*4+0x9b8e20u)); r_esp -= 4; W32(r_esp, 0x4ee1abu); call_ind(t); }
    /* 004ee1ab: ret  */ FN_RET(0x004ee194); r_esp += 4; return;
L_004ee1ac:; BB(0x004ee1ac);
    /* 004ee1ac: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ee1b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee1b5: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004ee1b9: ret  */ FN_RET(0x004ee194); r_esp += 4; return;
}

void f_004ee1bc(void) /* sub_4EE1BC */
{
    FN_ENTER(0x004ee1bc);
    /* 004ee1bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee1bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ee1bf: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 004ee1c2: cmp eax, 0x1512 */ {  u32 a = r_eax; u32 b = 0x1512u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee1c7: jle 0x4ee1d9 */ if ((fZ||fS!=fO)) goto L_004ee1d9;
L_004ee1c9:; BB(0x004ee1c9);
    /* 004ee1c9: mov eax, dword ptr [0xa72330] */ r_eax = R32((u32)(0xa72330u));
    /* 004ee1ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee1d0: jle 0x4ee1e4 */ if ((fZ||fS!=fO)) goto L_004ee1e4;
L_004ee1d2:; BB(0x004ee1d2);
    /* 004ee1d2: mov dword ptr [ebp + 0x64], 0x1512 */ W32((u32)(r_ebp+0x64u), 0x1512u);
L_004ee1d9:; BB(0x004ee1d9);
    /* 004ee1d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ee1db: call 0x4ee200 */ r_esp -= 4; W32(r_esp, 0x4ee1e0u); f_004ee200();
    /* 004ee1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee1e2: jne 0x4ee1e6 */ if (!fZ) goto L_004ee1e6;
L_004ee1e4:; BB(0x004ee1e4);
    /* 004ee1e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee1e5: ret  */ FN_RET(0x004ee1bc); r_esp += 4; return;
L_004ee1e6:; BB(0x004ee1e6);
    /* 004ee1e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ee1e8: call 0x4ee238 */ r_esp -= 4; W32(r_esp, 0x4ee1edu); f_004ee238();
    /* 004ee1ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ee1ef: call 0x4ee398 */ r_esp -= 4; W32(r_esp, 0x4ee1f4u); f_004ee398();
    /* 004ee1f4: mov dword ptr [ebp + 0x60], 1 */ W32((u32)(r_ebp+0x60u), 0x1u);
    /* 004ee1fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee1fc: ret  */ FN_RET(0x004ee1bc); r_esp += 4; return;
}

void f_004ee200(void) /* sub_4EE200 */
{
    FN_ENTER(0x004ee200);
    /* 004ee200: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 004ee206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee208: jne 0x4ee21c */ if (!fZ) goto L_004ee21c;
L_004ee20a:; BB(0x004ee20a);
    /* 004ee20a: mov eax, dword ptr [0xa72330] */ r_eax = R32((u32)(0xa72330u));
    /* 004ee20f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ee211: jl 0x4ee21c */ if ((fS!=fO)) goto L_004ee21c;
L_004ee213:; BB(0x004ee213);
    /* 004ee213: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee216: jg 0x4ee21c */ if ((!fZ&&fS==fO)) goto L_004ee21c;
L_004ee218:; BB(0x004ee218);
    /* 004ee218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ee21a: jle 0x4ee21f */ if ((fZ||fS!=fO)) goto L_004ee21f;
L_004ee21c:; BB(0x004ee21c);
    /* 004ee21c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee21e: ret  */ FN_RET(0x004ee200); r_esp += 4; return;
L_004ee21f:; BB(0x004ee21f);
    /* 004ee21f: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 004ee229: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee22c: mov dword ptr [0xa72330], eax */ W32((u32)(0xa72330u), r_eax);
    /* 004ee231: mov eax, 1 */ r_eax = 0x1u;
    /* 004ee236: ret  */ FN_RET(0x004ee200); r_esp += 4; return;
}

void f_004ee238(void) /* sub_4EE238 */
{
    FN_ENTER(0x004ee238);
    /* 004ee238: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee239: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee23a: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee23d: mov edi, ecx */ r_edi = r_ecx;
    /* 004ee23f: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee242: call 0x4f3afc */ r_esp -= 4; W32(r_esp, 0x4ee247u); f_004f3afc();
    /* 004ee247: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004ee24a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004ee250: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004ee253: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 004ee256: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004ee259: mov dword ptr [esp + 0x10], 0x40 */ W32((u32)(r_esp+0x10u), 0x40u);
    /* 004ee261: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004ee265: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ee269: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004ee26c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004ee270: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004ee273: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ee277: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004ee27b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee27c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee27d: call 0x4ee004 */ r_esp -= 4; W32(r_esp, 0x4ee282u); f_004ee004();
    /* 004ee282: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee287: je 0x4ee392 */ if (fZ) goto L_004ee392;
L_004ee28d:; BB(0x004ee28d);
    /* 004ee28d: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 004ee290: movsx esi, word ptr [esi + 0x40] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 004ee294: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004ee297: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 004ee29e: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004ee2a1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004ee2a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee2a6: je 0x4ee2eb */ if (fZ) goto L_004ee2eb;
L_004ee2a8:; BB(0x004ee2a8);
    /* 004ee2a8: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 004ee2ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee2ad: je 0x4ee2eb */ if (fZ) goto L_004ee2eb;
L_004ee2af:; BB(0x004ee2af);
    /* 004ee2af: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004ee2b2: mov dword ptr [esp + 0x20], 8 */ W32((u32)(r_esp+0x20u), 0x8u);
    /* 004ee2ba: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ee2be: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004ee2c1: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004ee2c5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee2c8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ee2cc: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004ee2cf: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004ee2d3: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004ee2d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee2d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee2d9: call 0x4ee004 */ r_esp -= 4; W32(r_esp, 0x4ee2deu); f_004ee004();
    /* 004ee2de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee2e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee2e3: je 0x4ee392 */ if (fZ) goto L_004ee392;
L_004ee2e9:; BB(0x004ee2e9);
    /* 004ee2e9: jmp 0x4ee2f1 */ goto L_004ee2f1;
L_004ee2eb:; BB(0x004ee2eb);
    /* 004ee2eb: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004ee2ee: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_004ee2f1:; BB(0x004ee2f1);
    /* 004ee2f1: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004ee2f4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004ee2fa: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004ee2fd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004ee300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee302: je 0x4ee340 */ if (fZ) goto L_004ee340;
L_004ee304:; BB(0x004ee304);
    /* 004ee304: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 004ee307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee309: je 0x4ee340 */ if (fZ) goto L_004ee340;
L_004ee30b:; BB(0x004ee30b);
    /* 004ee30b: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004ee30e: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 004ee311: mov dword ptr [esp + 0x34], 0x10 */ W32((u32)(r_esp+0x34u), 0x10u);
    /* 004ee319: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004ee31d: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004ee320: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ee324: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004ee328: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 004ee32c: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 004ee330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee331: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee332: call 0x4ee004 */ r_esp -= 4; W32(r_esp, 0x4ee337u); f_004ee004();
    /* 004ee337: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee33a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee33c: je 0x4ee392 */ if (fZ) goto L_004ee392;
L_004ee33e:; BB(0x004ee33e);
    /* 004ee33e: jmp 0x4ee346 */ goto L_004ee346;
L_004ee340:; BB(0x004ee340);
    /* 004ee340: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004ee343: and dword ptr [eax], 0xffffffef */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_004ee346:; BB(0x004ee346);
    /* 004ee346: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004ee349: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 004ee350: mov esi, dword ptr [edi + 0x5c] */ r_esi = R32((u32)(r_edi+0x5cu));
    /* 004ee353: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004ee356: movsx edx, word ptr [edx + 0x3e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x3eu));
    /* 004ee35a: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 004ee35d: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 004ee360: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004ee364: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004ee367: mov dword ptr [esp + 0x48], 0x20 */ W32((u32)(r_esp+0x48u), 0x20u);
    /* 004ee36f: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee372: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004ee376: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004ee379: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004ee37d: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004ee380: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004ee384: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004ee388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee389: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee38a: call 0x4ee004 */ r_esp -= 4; W32(r_esp, 0x4ee38fu); f_004ee004();
    /* 004ee38f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee392:; BB(0x004ee392);
    /* 004ee392: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee395: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee396: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee397: ret  */ FN_RET(0x004ee238); r_esp += 4; return;
}

void f_004ee398(void) /* sub_4EE398 */
{
    FN_ENTER(0x004ee398);
    /* 004ee398: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee39a: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee39d: mov edi, ecx */ r_edi = r_ecx;
    /* 004ee39f: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee3a2: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4ee3a7u); f_004e6f24();
    /* 004ee3a7: mov ebp, eax */ r_ebp = r_eax;
    /* 004ee3a9: mov edx, dword ptr [edi + 0x4c] */ r_edx = R32((u32)(r_edi+0x4cu));
    /* 004ee3ac: mov dword ptr [esp + 8], 4 */ W32((u32)(r_esp+0x8u), 0x4u);
    /* 004ee3b4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004ee3b8: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004ee3bb: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004ee3bf: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004ee3c3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004ee3c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee3c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee3c9: call 0x4eda48 */ r_esp -= 4; W32(r_esp, 0x4ee3ceu); f_004eda48();
    /* 004ee3ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee3d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee3d3: je 0x4ee433 */ if (fZ) goto L_004ee433;
L_004ee3d5:; BB(0x004ee3d5);
    /* 004ee3d5: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 004ee3d8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004ee3db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee3dd: je 0x4ee439 */ if (fZ) goto L_004ee439;
L_004ee3df:; BB(0x004ee3df);
    /* 004ee3df: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 004ee3e2: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 004ee3ea: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004ee3ee: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004ee3f1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004ee3f5: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 004ee3f9: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004ee3fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee3fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee3ff: call 0x4eda48 */ r_esp -= 4; W32(r_esp, 0x4ee404u); f_004eda48();
    /* 004ee404: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee407: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee409: je 0x4ee433 */ if (fZ) goto L_004ee433;
L_004ee40b:; BB(0x004ee40b);
    /* 004ee40b: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 004ee40e: mov dword ptr [esp + 0x24], 2 */ W32((u32)(r_esp+0x24u), 0x2u);
    /* 004ee416: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004ee41a: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004ee41d: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004ee421: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 004ee425: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004ee429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee42a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee42b: call 0x4eda48 */ r_esp -= 4; W32(r_esp, 0x4ee430u); f_004eda48();
    /* 004ee430: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee433:; BB(0x004ee433);
    /* 004ee433: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee437: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee438: ret  */ FN_RET(0x004ee398); r_esp += 4; return;
L_004ee439:; BB(0x004ee439);
    /* 004ee439: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004ee43c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee43e: jne 0x4ee3df */ if (!fZ) goto L_004ee3df;
L_004ee440:; BB(0x004ee440);
    /* 004ee440: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004ee443: and dword ptr [edx], 0xfffffffe */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004ee446: jmp 0x4ee40b */ goto L_004ee40b;
}

void f_004ee448(void) /* sub_4EE448 */
{
    FN_ENTER(0x004ee448);
    /* 004ee448: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee449: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee44c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ee44e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ee450: call 0x4ee520 */ r_esp -= 4; W32(r_esp, 0x4ee455u); f_004ee520();
    /* 004ee455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee457: jne 0x4ee45e */ if (!fZ) goto L_004ee45e;
L_004ee459:; BB(0x004ee459);
    /* 004ee459: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee45c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee45d: ret  */ FN_RET(0x004ee448); r_esp += 4; return;
L_004ee45e:; BB(0x004ee45e);
    /* 004ee45e: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004ee461: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ee464: lea eax, [ebx + 0x68] */ r_eax = (u32)(r_ebx+0x68u);
    /* 004ee467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee469: call 0x4e9420 */ r_esp -= 4; W32(r_esp, 0x4ee46eu); f_004e9420();
    /* 004ee46e: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee471: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4ee476u); f_004e6f24();
    /* 004ee476: mov edx, eax */ r_edx = r_eax;
    /* 004ee478: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee47b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ee47f: mov esi, edx */ r_esi = r_edx;
    /* 004ee481: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004ee485: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004ee488: lea eax, [ebx + 0x68] */ r_eax = (u32)(r_ebx+0x68u);
    /* 004ee48b: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 004ee48e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004ee492: mov ebp, eax */ r_ebp = r_eax;
L_004ee494:; BB(0x004ee494);
    /* 004ee494: mov edx, dword ptr [esi*4 + 0x9b8e40] */ r_edx = R32((u32)(r_esi*4+0x9b8e40u));
    /* 004ee49b: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 004ee49e: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee4a1: add edx, dword ptr [esi*4 + 0x9b8ea0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi*4+0x9b8ea0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ee4a8: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004ee4ab: movsx eax, word ptr [eax + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 004ee4af: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ee4b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4b2: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4b8: call 0x4ed478 */ r_esp -= 4; W32(r_esp, 0x4ee4bdu); f_004ed478();
    /* 004ee4bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee4c0: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 004ee4c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee4c5: je 0x4ee510 */ if (fZ) goto L_004ee510;
L_004ee4c7:; BB(0x004ee4c7);
    /* 004ee4c7: mov eax, dword ptr [esi*4 + 0x9b8e40] */ r_eax = R32((u32)(r_esi*4+0x9b8e40u));
    /* 004ee4ce: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee4d1: add edi, dword ptr [esi*4 + 0x9b8ea0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0x9b8ea0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ee4d8: lea edi, [edi + eax - 1] */ r_edi = (u32)(r_edi+r_eax+0xffffffffu);
    /* 004ee4dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4dd: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4e3: call 0x4ed478 */ r_esp -= 4; W32(r_esp, 0x4ee4e8u); f_004ed478();
    /* 004ee4e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee4eb: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004ee4ef: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 004ee4f2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ee4f5: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee4f7: ja 0x4ee494 */ if ((!fC&&!fZ)) goto L_004ee494;
L_004ee4f9:; BB(0x004ee4f9);
    /* 004ee4f9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ee4fd: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ee501: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004ee504:; BB(0x004ee504);
    /* 004ee504: mov dword ptr [ebx + 0x60], 2 */ W32((u32)(r_ebx+0x60u), 0x2u);
    /* 004ee50b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee50e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee50f: ret  */ FN_RET(0x004ee448); r_esp += 4; return;
L_004ee510:; BB(0x004ee510);
    /* 004ee510: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ee514: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ee518: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004ee51b: jmp 0x4ee504 */ goto L_004ee504;
}

void f_004ee520(void) /* sub_4EE520 */
{
    FN_ENTER(0x004ee520);
    /* 004ee520: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004ee523: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ee525: test dl, 0x7f */ {  u32 a = (u8)r_edx; u32 b = 0x7fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee528: je 0x4ee52d */ if (fZ) goto L_004ee52d;
L_004ee52a:; BB(0x004ee52a);
    /* 004ee52a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee52c: ret  */ FN_RET(0x004ee520); r_esp += 4; return;
L_004ee52d:; BB(0x004ee52d);
    /* 004ee52d: mov eax, 1 */ r_eax = 0x1u;
    /* 004ee532: ret  */ FN_RET(0x004ee520); r_esp += 4; return;
}

void f_004ee534(void) /* sub_4EE534 */
{
    FN_ENTER(0x004ee534);
    /* 004ee534: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee535: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee536: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee537: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee53a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ee53c: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004ee53f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ee542: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee545: jne 0x4ee69c */ if (!fZ) goto L_004ee69c;
L_004ee54b:; BB(0x004ee54b);
    /* 004ee54b: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 004ee54e: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ee551: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee554: jne 0x4ee69c */ if (!fZ) goto L_004ee69c;
L_004ee55a:; BB(0x004ee55a);
    /* 004ee55a: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 004ee55d: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ee560: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee563: jne 0x4ee69c */ if (!fZ) goto L_004ee69c;
L_004ee569:; BB(0x004ee569);
    /* 004ee569: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 004ee56f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ee572: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee575: jne 0x4ee69c */ if (!fZ) goto L_004ee69c;
L_004ee57b:; BB(0x004ee57b);
    /* 004ee57b: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 004ee581: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ee584: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee587: jne 0x4ee69c */ if (!fZ) goto L_004ee69c;
L_004ee58d:; BB(0x004ee58d);
    /* 004ee58d: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 004ee593: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ee596: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee599: jne 0x4ee69c */ if (!fZ) goto L_004ee69c;
L_004ee59f:; BB(0x004ee59f);
    /* 004ee59f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ee5a1: mov esi, eax */ r_esi = r_eax;
L_004ee5a3:; BB(0x004ee5a3);
    /* 004ee5a3: mov ecx, dword ptr [ebx + esi*4 + 0x74] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x74u));
    /* 004ee5a7: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004ee5aa: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004ee5b2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee5b5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee5b8: jne 0x4ee5bf */ if (!fZ) goto L_004ee5bf;
L_004ee5ba:; BB(0x004ee5ba);
    /* 004ee5ba: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 004ee5bd: jmp 0x4ee5c1 */ goto L_004ee5c1;
L_004ee5bf:; BB(0x004ee5bf);
    /* 004ee5bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004ee5c1:; BB(0x004ee5c1);
    /* 004ee5c1: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 004ee5c5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004ee5c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee5c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee5c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee5ca: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004ee5ce: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x4ee5d3u); f_0083b124();
    /* 004ee5d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee5d5: je 0x4ee678 */ if (fZ) goto L_004ee678;
L_004ee5db:; BB(0x004ee5db);
    /* 004ee5db: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004ee5df: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee5e5: jne 0x4ee678 */ if (!fZ) goto L_004ee678;
L_004ee5eb:; BB(0x004ee5eb);
    /* 004ee5eb: mov ecx, eax */ r_ecx = r_eax;
    /* 004ee5ed: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x4ee5f2u); f_0083b118();
    /* 004ee5f2: mov ecx, dword ptr [ebx + esi*4 + 0x70] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x70u));
    /* 004ee5f6: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004ee5f9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee5fc: jne 0x4ee603 */ if (!fZ) goto L_004ee603;
L_004ee5fe:; BB(0x004ee5fe);
    /* 004ee5fe: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 004ee601: jmp 0x4ee605 */ goto L_004ee605;
L_004ee603:; BB(0x004ee603);
    /* 004ee603: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004ee605:; BB(0x004ee605);
    /* 004ee605: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 004ee609: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004ee60b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee60c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee60d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee60e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004ee612: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x4ee617u); f_0083b124();
    /* 004ee617: mov edx, eax */ r_edx = r_eax;
    /* 004ee619: mov dword ptr [esp + esi*4 + 8], edx */ W32((u32)(r_esp+r_esi*4+0x8u), r_edx);
    /* 004ee61d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee61f: je 0x4ee663 */ if (fZ) goto L_004ee663;
L_004ee621:; BB(0x004ee621);
    /* 004ee621: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004ee625: cmp ecx, 0x4e4a434d */ {  u32 a = r_ecx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee62b: jne 0x4ee663 */ if (!fZ) goto L_004ee663;
L_004ee62d:; BB(0x004ee62d);
    /* 004ee62d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004ee62f: test ecx, 0xffffe000 */ {  u32 a = r_ecx; u32 b = 0xffffe000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee635: jne 0x4ee64c */ if (!fZ) goto L_004ee64c;
L_004ee637:; BB(0x004ee637);
    /* 004ee637: mov ecx, dword ptr [0xa7231c] */ r_ecx = R32((u32)(0xa7231cu));
    /* 004ee63d: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004ee640: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee642: jbe 0x4ee6a3 */ if ((fC||fZ)) goto L_004ee6a3;
L_004ee644:; BB(0x004ee644);
    /* 004ee644: cmp eax, dword ptr [0x9b8f08] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b8f08u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ee64a: jae 0x4ee6a3 */ if (!fC) goto L_004ee6a3;
L_004ee64c:; BB(0x004ee64c);
    /* 004ee64c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ee64e: mov esi, eax */ r_esi = r_eax;
L_004ee650:; BB(0x004ee650);
    /* 004ee650: mov ecx, dword ptr [esp + esi*4 + 0xc] */ r_ecx = R32((u32)(r_esp+r_esi*4+0xcu));
    /* 004ee654: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x4ee659u); f_0083b118();
    /* 004ee659: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee65c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee65f: jl 0x4ee650 */ if ((fS!=fO)) goto L_004ee650;
L_004ee661:; BB(0x004ee661);
    /* 004ee661: jmp 0x4ee678 */ goto L_004ee678;
L_004ee663:; BB(0x004ee663);
    /* 004ee663: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ee665: mov esi, eax */ r_esi = r_eax;
L_004ee667:; BB(0x004ee667);
    /* 004ee667: mov ecx, dword ptr [esp + esi*4 + 0xc] */ r_ecx = R32((u32)(r_esp+r_esi*4+0xcu));
    /* 004ee66b: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x4ee670u); f_0083b118();
    /* 004ee670: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee673: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee676: jl 0x4ee667 */ if ((fS!=fO)) goto L_004ee667;
L_004ee678:; BB(0x004ee678);
    /* 004ee678: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004ee67b: and dword ptr [eax], 0xffffff7f */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004ee681: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ee683: call 0x4ee168 */ r_esp -= 4; W32(r_esp, 0x4ee688u); f_004ee168();
    /* 004ee688: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004ee68c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ee691: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004ee695: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee698: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee699: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee69a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee69b: ret  */ FN_RET(0x004ee534); r_esp += 4; return;
L_004ee69c:; BB(0x004ee69c);
    /* 004ee69c: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ee69f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ee6a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee6a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee6a2: ret  */ FN_RET(0x004ee534); r_esp += 4; return;
L_004ee6a3:; BB(0x004ee6a3);
    /* 004ee6a3: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 004ee6a6: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee6a8: jbe 0x4ee6b2 */ if ((fC||fZ)) goto L_004ee6b2;
L_004ee6aa:; BB(0x004ee6aa);
    /* 004ee6aa: cmp edi, dword ptr [0x9b8f08] */ {  u32 a = r_edi; u32 b = R32((u32)(0x9b8f08u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ee6b0: jb 0x4ee64c */ if (fC) goto L_004ee64c;
L_004ee6b2:; BB(0x004ee6b2);
    /* 004ee6b2: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004ee6b5: cmp edx, dword ptr [0xa72320] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72320u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee6bb: jbe 0x4ee6c5 */ if ((fC||fZ)) goto L_004ee6c5;
L_004ee6bd:; BB(0x004ee6bd);
    /* 004ee6bd: cmp edx, dword ptr [0x9b8f04] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9b8f04u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ee6c3: jb 0x4ee64c */ if (fC) goto L_004ee64c;
L_004ee6c5:; BB(0x004ee6c5);
    /* 004ee6c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6c7: je 0x4ee6d6 */ if (fZ) goto L_004ee6d6;
L_004ee6c9:; BB(0x004ee6c9);
    /* 004ee6c9: call 0x4ee784 */ r_esp -= 4; W32(r_esp, 0x4ee6ceu); f_004ee784();
    /* 004ee6ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6d0: je 0x4ee64c */ if (fZ) goto L_004ee64c;
L_004ee6d6:; BB(0x004ee6d6);
    /* 004ee6d6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6d8: je 0x4ee6e9 */ if (fZ) goto L_004ee6e9;
L_004ee6da:; BB(0x004ee6da);
    /* 004ee6da: mov eax, edi */ r_eax = r_edi;
    /* 004ee6dc: call 0x4ee784 */ r_esp -= 4; W32(r_esp, 0x4ee6e1u); f_004ee784();
    /* 004ee6e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6e3: je 0x4ee64c */ if (fZ) goto L_004ee64c;
L_004ee6e9:; BB(0x004ee6e9);
    /* 004ee6e9: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee6ec: jl 0x4ee5a3 */ if ((fS!=fO)) goto L_004ee5a3;
L_004ee6f2:; BB(0x004ee6f2);
    /* 004ee6f2: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004ee6f5: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 004ee6f8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004ee6fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004ee6fe: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004ee702: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004ee705: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004ee707: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ee70b: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 004ee70e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004ee712: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004ee716: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004ee71a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004ee71e: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004ee722: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 004ee725: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004ee729: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ee72d: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004ee731: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004ee735: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004ee739: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 004ee73c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004ee740: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004ee744: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004ee748: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004ee74c: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004ee750: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004ee754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee755: call 0x4e94cc */ r_esp -= 4; W32(r_esp, 0x4ee75au); f_004e94cc();
    /* 004ee75a: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004ee75d: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee761: call 0x4e7e50 */ r_esp -= 4; W32(r_esp, 0x4ee766u); f_004e7e50();
    /* 004ee766: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee769: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ee76b: mov esi, eax */ r_esi = r_eax;
L_004ee76d:; BB(0x004ee76d);
    /* 004ee76d: mov ecx, dword ptr [esp + esi*4 + 0xc] */ r_ecx = R32((u32)(r_esp+r_esi*4+0xcu));
    /* 004ee771: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x4ee776u); f_0083b118();
    /* 004ee776: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee779: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee77c: jl 0x4ee76d */ if ((fS!=fO)) goto L_004ee76d;
L_004ee77e:; BB(0x004ee77e);
    /* 004ee77e: jmp 0x4ee678 */ goto L_004ee678;
}

void f_004ee784(void) /* sub_4EE784 */
{
    FN_ENTER(0x004ee784);
    /* 004ee784: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee785: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee786: mov edx, eax */ r_edx = r_eax;
    /* 004ee788: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004ee78a: test ecx, 0xffffe000 */ {  u32 a = r_ecx; u32 b = 0xffffe000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee790: jne 0x4ee7db */ if (!fZ) goto L_004ee7db;
L_004ee792:; BB(0x004ee792);
    /* 004ee792: mov ecx, dword ptr [0xa7231c] */ r_ecx = R32((u32)(0xa7231cu));
    /* 004ee798: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004ee79b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee79d: jbe 0x4ee7ac */ if ((fC||fZ)) goto L_004ee7ac;
L_004ee79f:; BB(0x004ee79f);
    /* 004ee79f: cmp eax, dword ptr [0x9b8f08] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b8f08u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ee7a5: jae 0x4ee7ac */ if (!fC) goto L_004ee7ac;
L_004ee7a7:; BB(0x004ee7a7);
    /* 004ee7a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee7a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee7aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee7ab: ret  */ FN_RET(0x004ee784); r_esp += 4; return;
L_004ee7ac:; BB(0x004ee7ac);
    /* 004ee7ac: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 004ee7af: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee7b1: jbe 0x4ee7bb */ if ((fC||fZ)) goto L_004ee7bb;
L_004ee7b3:; BB(0x004ee7b3);
    /* 004ee7b3: cmp edi, dword ptr [0x9b8f08] */ {  u32 a = r_edi; u32 b = R32((u32)(0x9b8f08u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ee7b9: jb 0x4ee7a7 */ if (fC) goto L_004ee7a7;
L_004ee7bb:; BB(0x004ee7bb);
    /* 004ee7bb: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004ee7be: cmp edx, dword ptr [0xa72320] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72320u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ee7c4: jbe 0x4ee7ce */ if ((fC||fZ)) goto L_004ee7ce;
L_004ee7c6:; BB(0x004ee7c6);
    /* 004ee7c6: cmp edx, dword ptr [0x9b8f04] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9b8f04u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ee7cc: jb 0x4ee7a7 */ if (fC) goto L_004ee7a7;
L_004ee7ce:; BB(0x004ee7ce);
    /* 004ee7ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee7d0: je 0x4ee7e0 */ if (fZ) goto L_004ee7e0;
L_004ee7d2:; BB(0x004ee7d2);
    /* 004ee7d2: call 0x4ee784 */ r_esp -= 4; W32(r_esp, 0x4ee7d7u); f_004ee784();
    /* 004ee7d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee7d9: jne 0x4ee7e0 */ if (!fZ) goto L_004ee7e0;
L_004ee7db:; BB(0x004ee7db);
    /* 004ee7db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee7dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee7df: ret  */ FN_RET(0x004ee784); r_esp += 4; return;
L_004ee7e0:; BB(0x004ee7e0);
    /* 004ee7e0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee7e2: je 0x4ee7ef */ if (fZ) goto L_004ee7ef;
L_004ee7e4:; BB(0x004ee7e4);
    /* 004ee7e4: mov eax, edi */ r_eax = r_edi;
    /* 004ee7e6: call 0x4ee784 */ r_esp -= 4; W32(r_esp, 0x4ee7ebu); f_004ee784();
    /* 004ee7eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee7ed: je 0x4ee7db */ if (fZ) goto L_004ee7db;
L_004ee7ef:; BB(0x004ee7ef);
    /* 004ee7ef: mov eax, 1 */ r_eax = 0x1u;
    /* 004ee7f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee7f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ee7f6: ret  */ FN_RET(0x004ee784); r_esp += 4; return;
}

void f_004ee7f8(void) /* sub_4EE7F8 */
{
    FN_ENTER(0x004ee7f8);
    /* 004ee7f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee7f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee7fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee7fd: push 0x8d2c30 */ { u32 v = 0x8d2c30u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee802: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ee808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee809: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ee810: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee813: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ee816: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ee819: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ee81c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ee81f: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee824: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ee82b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ee830u); f_005caba4();
    /* 004ee830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee831: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ee834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee836: je 0x4ee869 */ if (fZ) goto L_004ee869;
L_004ee838:; BB(0x004ee838);
    /* 004ee838: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ee83f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee846: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee849: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee84c: call 0x4ee870 */ r_esp -= 4; W32(r_esp, 0x4ee851u); f_004ee870();
    /* 004ee851: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee854: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ee85b:; BB(0x004ee85b);
    /* 004ee85b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ee85e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ee865: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee867: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee868: ret  */ FN_RET(0x004ee7f8); r_esp += 4; return;
L_004ee869:; BB(0x004ee869);
    /* 004ee869: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee86b: jmp 0x4ee85b */ goto L_004ee85b;
}

void f_004ee870(void) /* sub_4EE870 */
{
    FN_ENTER(0x004ee870);
    /* 004ee870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee871: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee875: push 0x8d2c4c */ { u32 v = 0x8d2c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee87a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ee880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee881: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ee888: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee88b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ee88e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ee891: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ee894: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ee897: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ee89a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ee89d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee89e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ee8a1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ee8a6u); f_008193cc();
    /* 004ee8a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee8ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ee8b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ee8b3: mov dword ptr [ecx], 0xafd8b8 */ W32((u32)(r_ecx), 0xafd8b8u);
    /* 004ee8b9: lea ebx, [eax + 0x930] */ r_ebx = (u32)(r_eax+0x930u);
    /* 004ee8bf: mov edx, dword ptr [0x9b8efc] */ r_edx = R32((u32)(0x9b8efcu));
    /* 004ee8c5: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ee8c8: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 004ee8cb: lea esi, [eax + 0xdf0] */ r_esi = (u32)(r_eax+0xdf0u);
    /* 004ee8d1: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 004ee8d4: movzx edi, word ptr [eax + 0x1c] */ r_edi = (u32)R16((u32)(r_eax+0x1cu));
    /* 004ee8d8: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 004ee8db: lea edx, [eax + 0x34] */ r_edx = (u32)(r_eax+0x34u);
    /* 004ee8de: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 004ee8e1: lea edx, [eax + 0x9a0] */ r_edx = (u32)(r_eax+0x9a0u);
    /* 004ee8e7: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 004ee8ea: lea edx, [eax + 0xde8] */ r_edx = (u32)(r_eax+0xde8u);
    /* 004ee8f0: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 004ee8f3: lea edx, [eax + 0xc7c] */ r_edx = (u32)(r_eax+0xc7cu);
    /* 004ee8f9: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 004ee8fc: add eax, 0xb10 */ {  u32 a = r_eax; u32 b = 0xb10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee901: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 004ee904: call 0x4eea64 */ r_esp -= 4; W32(r_esp, 0x4ee909u); f_004eea64();
    /* 004ee909: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ee90c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee90f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ee912: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ee915: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ee918: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ee91f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee922: ret 4 */ FN_RET(0x004ee870); r_esp += 8; return;
}

void f_004ee8fe(void)
{
    FN_ENTER(0x004ee8fe);
    goto L_004ee8fe;
L_004ee89b:; BB(0x004ee89b);
    /* 004ee89b: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004ee89c: fcom qword ptr [eax - 0x77] */ fx_compare(ST(0), R_F64((u32)(r_eax+0xffffff89u))); 
    /* 004ee89f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ee8a0: in al, dx */ UNSUP(0x004ee8a0, "in al, dx");
    /* 004ee8a1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ee8a6u); f_008193cc();
    /* 004ee8a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee8ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ee8b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ee8b3: mov dword ptr [ecx], 0xafd8b8 */ W32((u32)(r_ecx), 0xafd8b8u);
    /* 004ee8b9: lea ebx, [eax + 0x930] */ r_ebx = (u32)(r_eax+0x930u);
    /* 004ee8bf: mov edx, dword ptr [0x9b8efc] */ r_edx = R32((u32)(0x9b8efcu));
    /* 004ee8c5: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ee8c8: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 004ee8cb: lea esi, [eax + 0xdf0] */ r_esi = (u32)(r_eax+0xdf0u);
    /* 004ee8d1: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 004ee8d4: movzx edi, word ptr [eax + 0x1c] */ r_edi = (u32)R16((u32)(r_eax+0x1cu));
    /* 004ee8d8: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 004ee8db: lea edx, [eax + 0x34] */ r_edx = (u32)(r_eax+0x34u);
    /* 004ee8de: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 004ee8e1: lea edx, [eax + 0x9a0] */ r_edx = (u32)(r_eax+0x9a0u);
    /* 004ee8e7: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 004ee8ea: lea edx, [eax + 0xde8] */ r_edx = (u32)(r_eax+0xde8u);
    /* 004ee8f0: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 004ee8f3: lea edx, [eax + 0xc7c] */ r_edx = (u32)(r_eax+0xc7cu);
L_004ee8f6:; BB(0x004ee8f6);
    /* 004ee8f6: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004ee8f8: add byte ptr [ecx + 0x10055051], cl */ { u32 ad = (u32)(r_ecx+0x10055051u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004ee8f9: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 004ee8fc: add eax, 0xb10 */ {  u32 a = r_eax; u32 b = 0xb10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004ee8fe:; BB(0x004ee8fe);
    /* 004ee8fe: or eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ee900: add byte ptr [ecx + 0x5be85441], cl */ { u32 ad = (u32)(r_ecx+0x5be85441u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004ee901: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 004ee904: call 0x4eea64 */ r_esp -= 4; W32(r_esp, 0x4ee909u); f_004eea64();
    /* 004ee906: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ee908: add byte ptr [ebx + 0x7d8bdc45], cl */ { u32 ad = (u32)(r_ebx+0x7d8bdc45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004ee909: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ee90c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee90e: loopne 0x4ee89b */ r_ecx--; if (r_ecx && !fZ) goto L_004ee89b;
    /* 004ee90f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ee910: jne 0x4ee8f6 */ if (!fZ) goto L_004ee8f6;
L_004ee912:; BB(0x004ee912);
    /* 004ee912: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ee915: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ee918: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ee91f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee922: ret 4 */ FN_RET(0x004ee8fe); r_esp += 8; return;
}

void f_004ee928(void) /* sub_4EE928 */
{
    FN_ENTER(0x004ee928);
    /* 004ee928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee929: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee92b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee92d: push 0x8d2c74 */ { u32 v = 0x8d2c74u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee932: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ee938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee939: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ee940: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee943: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ee946: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ee949: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ee94c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ee94f: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee954: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ee95b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ee960u); f_005caba4();
    /* 004ee960: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ee961: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ee964: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee966: je 0x4ee99c */ if (fZ) goto L_004ee99c;
L_004ee968:; BB(0x004ee968);
    /* 004ee968: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ee96f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee976: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee979: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee97c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee97f: call 0x4ee9a0 */ r_esp -= 4; W32(r_esp, 0x4ee984u); f_004ee9a0();
    /* 004ee984: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ee987: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ee98e:; BB(0x004ee98e);
    /* 004ee98e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ee991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ee998: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee99a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee99b: ret  */ FN_RET(0x004ee928); r_esp += 4; return;
L_004ee99c:; BB(0x004ee99c);
    /* 004ee99c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ee99e: jmp 0x4ee98e */ goto L_004ee98e;
}

void f_004ee9a0(void) /* sub_4EE9A0 */
{
    FN_ENTER(0x004ee9a0);
    /* 004ee9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee9a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee9a5: push 0x8d2c90 */ { u32 v = 0x8d2c90u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee9aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ee9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ee9b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ee9b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee9bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ee9be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ee9c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ee9c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ee9c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ee9ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ee9cd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ee9d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ee9d3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ee9d8u); f_008193cc();
    /* 004ee9d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee9df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ee9e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ee9e5: mov dword ptr [ecx], 0xafd8b8 */ W32((u32)(r_ecx), 0xafd8b8u);
    /* 004ee9eb: mov edx, dword ptr [0x9b8efc] */ r_edx = R32((u32)(0x9b8efcu));
    /* 004ee9f1: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ee9f4: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 004ee9f6: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 004ee9f9: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004ee9fc: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 004ee9ff: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 004eea02: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 004eea05: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004eea08: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 004eea0b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004eea0e: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 004eea11: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004eea14: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 004eea17: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004eea1a: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 004eea1d: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004eea20: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 004eea23: call 0x4eea64 */ r_esp -= 4; W32(r_esp, 0x4eea28u); f_004eea64();
    /* 004eea28: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004eea2b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eea2e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004eea31: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004eea34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eea37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eea3e: mov esp, ebp */ r_esp = r_ebp;
    /* 004eea40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eea41: ret 8 */ FN_RET(0x004ee9a0); r_esp += 12; return;
}

void f_004eea44(void) /* sub_4EEA44 */
{
    FN_ENTER(0x004eea44);
    /* 004eea44: mov dword ptr [0xa72324], 0x3f800000 */ W32((u32)(0xa72324u), 0x3f800000u);
    /* 004eea4e: mov dword ptr [0xa72328], 0x41000000 */ W32((u32)(0xa72328u), 0x41000000u);
    /* 004eea58: mov dword ptr [0xa7232c], 0x3fc00000 */ W32((u32)(0xa7232cu), 0x3fc00000u);
    /* 004eea62: ret  */ FN_RET(0x004eea44); r_esp += 4; return;
}

void f_004eea64(void) /* sub_4EEA64 */
{
    FN_ENTER(0x004eea64);
    /* 004eea64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eea65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eea67: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 004eea6a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004eea6d: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eea70: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 004eea73: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4eea78u); f_004e6f24();
    /* 004eea78: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eea7b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004eea7e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eea80: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004eea82: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eea84: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eea86: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004eea88: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eea8a: lea eax, [edx + edx + 0x9b5b60] */ r_eax = (u32)(r_edx+r_edx+0x9b5b60u);
    /* 004eea91: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 004eea94: call 0x4f3afc */ r_esp -= 4; W32(r_esp, 0x4eea99u); f_004f3afc();
    /* 004eea99: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004eea9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eea9e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004eeaa0: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 004eeaa3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004eeaa6: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 004eeaa9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004eeaab: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 004eeaae: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004eeab1: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004eeab4: mov dword ptr [ebx + 0x78], eax */ W32((u32)(r_ebx+0x78u), r_eax);
    /* 004eeab7: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 004eeaba: mov dword ptr [ebx + 0x64], 0x1518 */ W32((u32)(r_ebx+0x64u), 0x1518u);
    /* 004eeac1: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 004eeac7: mov dword ptr [ebx + 0x84], eax */ W32((u32)(r_ebx+0x84u), r_eax);
    /* 004eeacd: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eead3: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eead9: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004eeadc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eeadf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eeae0: ret  */ FN_RET(0x004eea64); r_esp += 4; return;
}

void f_004eeae4(void) /* sub_4EEAE4 */
{
    FN_ENTER(0x004eeae4);
    /* 004eeae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eeae5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eeae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eeae9: call 0x4eeb08 */ r_esp -= 4; W32(r_esp, 0x4eeaeeu); f_004eeb08();
    /* 004eeaee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eeaf2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eeaf4: jne 0x4eeafa */ if (!fZ) goto L_004eeafa;
L_004eeaf6:; BB(0x004eeaf6);
    /* 004eeaf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eeaf7: ret 4 */ FN_RET(0x004eeae4); r_esp += 8; return;
L_004eeafa:; BB(0x004eeafa);
    /* 004eeafa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eeafb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eeb00u); f_005c2f74();
    /* 004eeb00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eeb01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eeb02: ret 4 */ FN_RET(0x004eeae4); r_esp += 8; return;
}

void f_004eeb08(void) /* sub_4EEB08 */
{
    FN_ENTER(0x004eeb08);
    /* 004eeb08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb09: mov ebp, esp */ r_ebp = r_esp;
    /* 004eeb0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb0d: push 0x8d2cac */ { u32 v = 0x8d2cacu; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eeb18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eeb20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eeb23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eeb26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eeb29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eeb2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eeb2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eeb32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eeb39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eeb3c: mov dword ptr [ecx], 0xafdb68 */ W32((u32)(r_ecx), 0xafdb68u);
    /* 004eeb42: call 0x4eeb94 */ r_esp -= 4; W32(r_esp, 0x4eeb47u); f_004eeb94();
    /* 004eeb47: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eeb4a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 004eeb4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eeb4f: je 0x4eeb63 */ if (fZ) goto L_004eeb63;
L_004eeb51:; BB(0x004eeb51);
    /* 004eeb51: je 0x4eeb5c */ if (fZ) goto L_004eeb5c;
L_004eeb53:; BB(0x004eeb53);
    /* 004eeb53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb55: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004eeb57: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4eeb59u); call_ind(t); }
    /* 004eeb59: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004eeb5c:; BB(0x004eeb5c);
    /* 004eeb5c: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_004eeb63:; BB(0x004eeb63);
    /* 004eeb63: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eeb66: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004eeb69: mov dword ptr [eax + 0x18], 0xffffffff */ W32((u32)(r_eax+0x18u), 0xffffffffu);
    /* 004eeb70: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004eeb73: mov byte ptr [ecx + 0x33], 3 */ W8((u32)(r_ecx+0x33u), 0x3u);
    /* 004eeb77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eeb7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eeb81: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eeb86u); f_008171e8();
    /* 004eeb86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eeb89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eeb90: mov esp, ebp */ r_esp = r_ebp;
    /* 004eeb92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eeb93: ret  */ FN_RET(0x004eeb08); r_esp += 4; return;
}

void f_004eeb94(void) /* sub_4EEB94 */
{
    FN_ENTER(0x004eeb94);
    /* 004eeb94: mov eax, dword ptr [0xa72568] */ r_eax = R32((u32)(0xa72568u));
    /* 004eeb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eeb9b: je 0x4eeba8 */ if (fZ) goto L_004eeba8;
L_004eeb9d:; BB(0x004eeb9d);
    /* 004eeb9d: mov dword ptr [0xa72568], 0 */ W32((u32)(0xa72568u), 0x0u);
    /* 004eeba7: ret  */ FN_RET(0x004eeb94); r_esp += 4; return;
L_004eeba8:; BB(0x004eeba8);
    /* 004eeba8: ret  */ FN_RET(0x004eeb94); r_esp += 4; return;
}

void f_004eebac(void) /* sub_4EEBAC */
{
    FN_ENTER(0x004eebac);
    /* 004eebac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eebad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eebaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eebb1: call 0x4eebd0 */ r_esp -= 4; W32(r_esp, 0x4eebb6u); f_004eebd0();
    /* 004eebb6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eebba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eebbc: jne 0x4eebc2 */ if (!fZ) goto L_004eebc2;
L_004eebbe:; BB(0x004eebbe);
    /* 004eebbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eebbf: ret 4 */ FN_RET(0x004eebac); r_esp += 8; return;
L_004eebc2:; BB(0x004eebc2);
    /* 004eebc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eebc3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eebc8u); f_005c2f74();
    /* 004eebc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eebc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eebca: ret 4 */ FN_RET(0x004eebac); r_esp += 8; return;
}

void f_004eebd0(void) /* sub_4EEBD0 */
{
    FN_ENTER(0x004eebd0);
    /* 004eebd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eebd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004eebd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eebd5: push 0x8d2cc8 */ { u32 v = 0x8d2cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004eebda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eebe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eebe1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eebe8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eebeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eebee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eebf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eebf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eebf7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eebfa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eebfd: mov dword ptr [ecx], 0xafdb78 */ W32((u32)(r_ecx), 0xafdb78u);
    /* 004eec03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eec0a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eec0fu); f_008171e8();
    /* 004eec0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eec12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eec19: mov esp, ebp */ r_esp = r_ebp;
    /* 004eec1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eec1c: ret  */ FN_RET(0x004eebd0); r_esp += 4; return;
}

void f_004eec20(void) /* sub_4EEC20 */
{
    FN_ENTER(0x004eec20);
    /* 004eec20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eec21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eec23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eec25: call 0x4eec44 */ r_esp -= 4; W32(r_esp, 0x4eec2au); f_004eec44();
    /* 004eec2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eec2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eec30: jne 0x4eec36 */ if (!fZ) goto L_004eec36;
L_004eec32:; BB(0x004eec32);
    /* 004eec32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eec33: ret 4 */ FN_RET(0x004eec20); r_esp += 8; return;
L_004eec36:; BB(0x004eec36);
    /* 004eec36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eec37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eec3cu); f_005c2f74();
    /* 004eec3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eec3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eec3e: ret 4 */ FN_RET(0x004eec20); r_esp += 8; return;
}

void f_004eec44(void) /* sub_4EEC44 */
{
    FN_ENTER(0x004eec44);
    /* 004eec44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eec45: mov ebp, esp */ r_ebp = r_esp;
    /* 004eec47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eec49: push 0x8d2ce4 */ { u32 v = 0x8d2ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 004eec4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eec54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eec55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eec5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eec5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eec62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eec65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eec68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eec6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eec6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eec71: mov dword ptr [ecx], 0xafdb88 */ W32((u32)(r_ecx), 0xafdb88u);
    /* 004eec77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eec7e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eec83u); f_008171e8();
    /* 004eec83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eec86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eec8d: mov esp, ebp */ r_esp = r_ebp;
    /* 004eec8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eec90: ret  */ FN_RET(0x004eec44); r_esp += 4; return;
}

void f_004eec94(void) /* sub_4EEC94 */
{
    FN_ENTER(0x004eec94);
    /* 004eec94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eec95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eec97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eec99: call 0x4eecb8 */ r_esp -= 4; W32(r_esp, 0x4eec9eu); f_004eecb8();
    /* 004eec9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eeca2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eeca4: jne 0x4eecaa */ if (!fZ) goto L_004eecaa;
L_004eeca6:; BB(0x004eeca6);
    /* 004eeca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eeca7: ret 4 */ FN_RET(0x004eec94); r_esp += 8; return;
L_004eecaa:; BB(0x004eecaa);
    /* 004eecaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eecab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eecb0u); f_005c2f74();
    /* 004eecb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eecb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eecb2: ret 4 */ FN_RET(0x004eec94); r_esp += 8; return;
}

void f_004eecb8(void) /* sub_4EECB8 */
{
    FN_ENTER(0x004eecb8);
    /* 004eecb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eecb9: mov ebp, esp */ r_ebp = r_esp;
    /* 004eecbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eecbd: push 0x8d2d00 */ { u32 v = 0x8d2d00u; r_esp -= 4; W32(r_esp, v); }
    /* 004eecc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eecc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eecc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eecd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eecd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eecd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eecd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eecdc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eecdf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eece2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eece9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004eecee: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eecf1: mov dword ptr [eax], 0xafdb98 */ W32((u32)(r_eax), 0xafdb98u);
    /* 004eecf7: call 0x4eb3ac */ r_esp -= 4; W32(r_esp, 0x4eecfcu); f_004eb3ac();
    /* 004eecfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eecfd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eed04: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eed07: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eed0cu); f_008171e8();
    /* 004eed0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eed0f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eed16: mov esp, ebp */ r_esp = r_ebp;
    /* 004eed18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eed19: ret  */ FN_RET(0x004eecb8); r_esp += 4; return;
}

void f_004eed1c(void) /* sub_4EED1C */
{
    FN_ENTER(0x004eed1c);
    /* 004eed1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eed1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eed1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eed21: call 0x4eed40 */ r_esp -= 4; W32(r_esp, 0x4eed26u); f_004eed40();
    /* 004eed26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eed2a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eed2c: jne 0x4eed32 */ if (!fZ) goto L_004eed32;
L_004eed2e:; BB(0x004eed2e);
    /* 004eed2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eed2f: ret 4 */ FN_RET(0x004eed1c); r_esp += 8; return;
L_004eed32:; BB(0x004eed32);
    /* 004eed32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eed33: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eed38u); f_005c2f74();
    /* 004eed38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eed39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eed3a: ret 4 */ FN_RET(0x004eed1c); r_esp += 8; return;
}

void f_004eed40(void) /* sub_4EED40 */
{
    FN_ENTER(0x004eed40);
    /* 004eed40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eed41: mov ebp, esp */ r_ebp = r_esp;
    /* 004eed43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eed45: push 0x8d2d1c */ { u32 v = 0x8d2d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004eed4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eed50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eed51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eed58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eed5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eed5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eed61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eed64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eed67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eed6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eed71: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004eed76: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eed79: mov dword ptr [eax], 0xafdba8 */ W32((u32)(r_eax), 0xafdba8u);
    /* 004eed7f: call 0x4eb3ac */ r_esp -= 4; W32(r_esp, 0x4eed84u); f_004eb3ac();
    /* 004eed84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eed85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eed8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eed8f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eed94u); f_008171e8();
    /* 004eed94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eed97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eed9e: mov esp, ebp */ r_esp = r_ebp;
    /* 004eeda0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eeda1: ret  */ FN_RET(0x004eed40); r_esp += 4; return;
}

void f_004eeda4(void) /* sub_4EEDA4 */
{
    FN_ENTER(0x004eeda4);
    /* 004eeda4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eeda5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eeda7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eeda9: call 0x4eedc8 */ r_esp -= 4; W32(r_esp, 0x4eedaeu); f_004eedc8();
    /* 004eedae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eedb2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eedb4: jne 0x4eedba */ if (!fZ) goto L_004eedba;
L_004eedb6:; BB(0x004eedb6);
    /* 004eedb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eedb7: ret 4 */ FN_RET(0x004eeda4); r_esp += 8; return;
L_004eedba:; BB(0x004eedba);
    /* 004eedba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eedbb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eedc0u); f_005c2f74();
    /* 004eedc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eedc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eedc2: ret 4 */ FN_RET(0x004eeda4); r_esp += 8; return;
}

void f_004eedc8(void) /* sub_4EEDC8 */
{
    FN_ENTER(0x004eedc8);
    /* 004eedc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eedc9: mov ebp, esp */ r_ebp = r_esp;
    /* 004eedcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eedcd: push 0x8d2d38 */ { u32 v = 0x8d2d38u; r_esp -= 4; W32(r_esp, v); }
    /* 004eedd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eedd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eedd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eede0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eede3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eede6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eede9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eedec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eedef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eedf2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eedf5: mov dword ptr [ecx], 0xafdbb8 */ W32((u32)(r_ecx), 0xafdbb8u);
    /* 004eedfb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eee02: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eee07u); f_008171e8();
    /* 004eee07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eee0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eee11: mov esp, ebp */ r_esp = r_ebp;
    /* 004eee13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eee14: ret  */ FN_RET(0x004eedc8); r_esp += 4; return;
}

void f_004eee18(void) /* sub_4EEE18 */
{
    FN_ENTER(0x004eee18);
    /* 004eee18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eee19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eee1a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eee1c: call 0x4f3b9c */ r_esp -= 4; W32(r_esp, 0x4eee21u); f_004f3b9c();
    /* 004eee21: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4eee26u); f_008587a5();
    /* 004eee26: add dword ptr [ebx + 0x34], 1 */ { u32 ad = (u32)(r_ebx+0x34u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004eee2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eee2c: call 0x4ef07c */ r_esp -= 4; W32(r_esp, 0x4eee31u); f_004ef07c();
    /* 004eee31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eee33: call 0x4ef0f0 */ r_esp -= 4; W32(r_esp, 0x4eee38u); f_004ef0f0();
    /* 004eee38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eee3a: call 0x4ef13c */ r_esp -= 4; W32(r_esp, 0x4eee3fu); f_004ef13c();
    /* 004eee3f: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004eee44: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eee46: call dword ptr [eax*4 + 0x9b8f20] */ { u32 t = R32((u32)(r_eax*4+0x9b8f20u)); r_esp -= 4; W32(r_esp, 0x4eee4du); call_ind(t); }
    /* 004eee4d: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004eee50: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004eee53: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 004eee56: mov dword ptr [0xa7256c], eax */ W32((u32)(0xa7256cu), r_eax);
    /* 004eee5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eee5d: call 0x4ef18c */ r_esp -= 4; W32(r_esp, 0x4eee62u); f_004ef18c();
    /* 004eee62: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004eee67: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eee6a: je 0x4eef49 */ if (fZ) goto L_004eef49;
L_004eee70:; BB(0x004eee70);
    /* 004eee70: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eee73: je 0x4eef49 */ if (fZ) goto L_004eef49;
L_004eee79:; BB(0x004eee79);
    /* 004eee79: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eee7eu); f_004e9398();
    /* 004eee7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eee80: je 0x4eef2d */ if (fZ) goto L_004eef2d;
L_004eee86:; BB(0x004eee86);
    /* 004eee86: call 0x4e93ac */ r_esp -= 4; W32(r_esp, 0x4eee8bu); f_004e93ac();
    /* 004eee8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eee8d: je 0x4eef2d */ if (fZ) goto L_004eef2d;
L_004eee93:; BB(0x004eee93);
    /* 004eee93: fld dword ptr [0x91e1f8] */ FPUSH(R_F32((u32)(0x91e1f8u)));
    /* 004eee99: fld dword ptr [ebx + 0x54] */ FPUSH(R_F32((u32)(r_ebx+0x54u)));
    /* 004eee9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eee9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eeea0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eeea1: jae 0x4eef1f */ if (!fC) goto L_004eef1f;
L_004eeea3:; BB(0x004eeea3);
    /* 004eeea3: movzx edx, byte ptr [0xa72340] */ r_edx = (u32)R8((u32)(0xa72340u));
    /* 004eeeaa: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004eeead: jne 0x4eeeca */ if (!fZ) goto L_004eeeca;
L_004eeeaf:; BB(0x004eeeaf);
    /* 004eeeaf: fld dword ptr [0x91e1f4] */ FPUSH(R_F32((u32)(0x91e1f4u)));
    /* 004eeeb5: mov dword ptr [0xa72344], 0x3f155555 */ W32((u32)(0xa72344u), 0x3f155555u);
    /* 004eeebf: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004eeec2: mov byte ptr [0xa72340], dl */ W8((u32)(0xa72340u), (u8)r_edx);
    /* 004eeec8: jmp 0x4eeed0 */ goto L_004eeed0;
L_004eeeca:; BB(0x004eeeca);
    /* 004eeeca: fld dword ptr [0xa72344] */ FPUSH(R_F32((u32)(0xa72344u)));
L_004eeed0:; BB(0x004eeed0);
    /* 004eeed0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eeed2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eeed4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eeed5: fld dword ptr [0x91e1f0] */ FPUSH(R_F32((u32)(0x91e1f0u)));
    /* 004eeedb: jae 0x4eeef3 */ if (!fC) goto L_004eeef3;
L_004eeedd:; BB(0x004eeedd);
    /* 004eeedd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 004eeedf: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004eeee1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eeee3: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 004eeee5: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004eeee7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eeee9: fmul dword ptr [0x91e1ec] */ ST(0) = ST(0) * R_F32((u32)(0x91e1ecu));
    /* 004eeeef: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004eeef1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_004eeef3:; BB(0x004eeef3);
    /* 004eeef3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eeef5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eeef7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eeef9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eeefb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eeefc: jbe 0x4eef15 */ if ((fC||fZ)) goto L_004eef15;
L_004eeefe:; BB(0x004eeefe);
    /* 004eeefe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eef00: fld dword ptr [0x91e1f8] */ FPUSH(R_F32((u32)(0x91e1f8u)));
    /* 004eef06: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004eef0b: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 004eef0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eef10: jmp 0x4eefab */ goto L_004eefab;
L_004eef15:; BB(0x004eef15);
    /* 004eef15: fst dword ptr [ebx + 0x54] */ W_F32((u32)(r_ebx+0x54u), ST(0));
    /* 004eef18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eef1a: jmp 0x4eefab */ goto L_004eefab;
L_004eef1f:; BB(0x004eef1f);
    /* 004eef1f: movzx edx, byte ptr [0xa72340] */ r_edx = (u32)R8((u32)(0xa72340u));
    /* 004eef26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eef28: jmp 0x4eefab */ goto L_004eefab;
L_004eef2d:; BB(0x004eef2d);
    /* 004eef2d: fld dword ptr [0x91e1e8] */ FPUSH(R_F32((u32)(0x91e1e8u)));
    /* 004eef33: fld dword ptr [0x91e1f8] */ FPUSH(R_F32((u32)(0x91e1f8u)));
    /* 004eef39: movzx edx, byte ptr [0xa72340] */ r_edx = (u32)R8((u32)(0xa72340u));
    /* 004eef40: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 004eef47: jmp 0x4eefab */ goto L_004eefab;
L_004eef49:; BB(0x004eef49);
    /* 004eef49: fld dword ptr [0x91e1e8] */ FPUSH(R_F32((u32)(0x91e1e8u)));
    /* 004eef4f: fld dword ptr [ebx + 0x54] */ FPUSH(R_F32((u32)(r_ebx+0x54u)));
    /* 004eef52: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eef54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eef56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eef57: jbe 0x4eef9c */ if ((fC||fZ)) goto L_004eef9c;
L_004eef59:; BB(0x004eef59);
    /* 004eef59: fadd dword ptr [0x91dc48] */ ST(0) = ST(0) + R_F32((u32)(0x91dc48u));
    /* 004eef5f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eef61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eef63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eef65: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eef67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eef68: jae 0x4eef86 */ if (!fC) goto L_004eef86;
L_004eef6a:; BB(0x004eef6a);
    /* 004eef6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eef6c: fld dword ptr [0x91e1e8] */ FPUSH(R_F32((u32)(0x91e1e8u)));
    /* 004eef72: fld dword ptr [0x91e1f8] */ FPUSH(R_F32((u32)(0x91e1f8u)));
    /* 004eef78: movzx edx, byte ptr [0xa72340] */ r_edx = (u32)R8((u32)(0xa72340u));
    /* 004eef7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eef81: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 004eef84: jmp 0x4eefab */ goto L_004eefab;
L_004eef86:; BB(0x004eef86);
    /* 004eef86: fld dword ptr [0x91e1f8] */ FPUSH(R_F32((u32)(0x91e1f8u)));
    /* 004eef8c: movzx edx, byte ptr [0xa72340] */ r_edx = (u32)R8((u32)(0xa72340u));
    /* 004eef93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eef95: fst dword ptr [ebx + 0x54] */ W_F32((u32)(r_ebx+0x54u), ST(0));
    /* 004eef98: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eef9a: jmp 0x4eefab */ goto L_004eefab;
L_004eef9c:; BB(0x004eef9c);
    /* 004eef9c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eef9e: fld dword ptr [0x91e1f8] */ FPUSH(R_F32((u32)(0x91e1f8u)));
    /* 004eefa4: movzx edx, byte ptr [0xa72340] */ r_edx = (u32)R8((u32)(0xa72340u));
L_004eefab:; BB(0x004eefab);
    /* 004eefab: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004eefad: fmul dword ptr [0x91e1e4] */ ST(0) = ST(0) * R_F32((u32)(0x91e1e4u));
    /* 004eefb3: mov eax, dword ptr [0xa720f0] */ r_eax = R32((u32)(0xa720f0u));
    /* 004eefb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eefba: je 0x4eefbf */ if (fZ) goto L_004eefbf;
L_004eefbc:; BB(0x004eefbc);
    /* 004eefbc: fst dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0));
L_004eefbf:; BB(0x004eefbf);
    /* 004eefbf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eefc1: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004eefc4: jne 0x4eefee */ if (!fZ) goto L_004eefee;
L_004eefc6:; BB(0x004eefc6);
    /* 004eefc6: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 004eefcb: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eefd1: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004eefd7: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eefdd: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eefe3: mov dword ptr [0xa72348], eax */ W32((u32)(0xa72348u), r_eax);
    /* 004eefe8: mov byte ptr [0xa72340], dl */ W8((u32)(0xa72340u), (u8)r_edx);
L_004eefee:; BB(0x004eefee);
    /* 004eefee: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004eeff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eeff2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeff4: call 0x4f3ee0 */ r_esp -= 4; W32(r_esp, 0x4eeff9u); f_004f3ee0();
    /* 004eeff9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004eeffc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004eefff: fcomp dword ptr [0x91e1e8] */ fx_compare(ST(0), R_F32((u32)(0x91e1e8u))); FPOP();
    /* 004ef005: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef007: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef008: ja 0x4ef03e */ if ((!fC&&!fZ)) goto L_004ef03e;
L_004ef00a:; BB(0x004ef00a);
    /* 004ef00a: push dword ptr [0xa72348] */ { u32 v = R32((u32)(0xa72348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ef010: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4ef015u); f_004f3ecc();
    /* 004ef015: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef016: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef018: jne 0x4ef03e */ if (!fZ) goto L_004ef03e;
L_004ef01a:; BB(0x004ef01a);
    /* 004ef01a: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 004ef01d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef020: cmp eax, 0x384 */ {  u32 a = r_eax; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef025: je 0x4ef06c */ if (fZ) goto L_004ef06c;
L_004ef027:; BB(0x004ef027);
    /* 004ef027: cmp eax, 0x546 */ {  u32 a = r_eax; u32 b = 0x546u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef02c: je 0x4ef05f */ if (fZ) goto L_004ef05f;
L_004ef02e:; BB(0x004ef02e);
    /* 004ef02e: jle 0x4ef039 */ if ((fZ||fS!=fO)) goto L_004ef039;
L_004ef030:; BB(0x004ef030);
    /* 004ef030: mov dword ptr [ebx + 0x4c], 0x546 */ W32((u32)(r_ebx+0x4cu), 0x546u);
    /* 004ef037: jmp 0x4ef054 */ goto L_004ef054;
L_004ef039:; BB(0x004ef039);
    /* 004ef039: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004ef03c: jmp 0x4ef054 */ goto L_004ef054;
L_004ef03e:; BB(0x004ef03e);
    /* 004ef03e: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 004ef041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ef043: jle 0x4ef04d */ if ((fZ||fS!=fO)) goto L_004ef04d;
L_004ef045:; BB(0x004ef045);
    /* 004ef045: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef047: call 0x4e9640 */ r_esp -= 4; W32(r_esp, 0x4ef04cu); f_004e9640();
    /* 004ef04c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ef04d:; BB(0x004ef04d);
    /* 004ef04d: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
L_004ef054:; BB(0x004ef054);
    /* 004ef054: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 004ef057: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4ef05cu); f_00817574();
    /* 004ef05c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef05d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ef05e: ret  */ FN_RET(0x004eee18); r_esp += 4; return;
L_004ef05f:; BB(0x004ef05f);
    /* 004ef05f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef061: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004ef064: call 0x4e9640 */ r_esp -= 4; W32(r_esp, 0x4ef069u); f_004e9640();
    /* 004ef069: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef06a: jmp 0x4ef054 */ goto L_004ef054;
L_004ef06c:; BB(0x004ef06c);
    /* 004ef06c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef06e: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004ef071: call 0x4e9640 */ r_esp -= 4; W32(r_esp, 0x4ef076u); f_004e9640();
    /* 004ef076: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef077: jmp 0x4ef054 */ goto L_004ef054;
}

