#include "protos.h"

void f_004a9174(void) /* sub_4A9174 */
{
    FN_ENTER(0x004a9174);
    /* 004a9174: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9175: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9176: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004a917a: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 004a917d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a9182u); f_0082d7b0();
    /* 004a9182: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a9184: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4a9189u); f_00830cd8();
    /* 004a9189: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004a918d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4a9192u); f_0082d838();
    /* 004a9192: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a9194: mov edx, esi */ r_edx = r_esi;
    /* 004a9196: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a919bu); f_0082d8bc();
    /* 004a919b: lea edx, [ebx + 0xac] */ r_edx = (u32)(r_ebx+0xacu);
    /* 004a91a1: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004a91a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a91a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a91a7: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4a91acu); f_00830aa0();
    /* 004a91ac: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a91b1u); f_0082da80();
    /* 004a91b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a91b2: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 004a91b5: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4a91bau); f_007b999c();
    /* 004a91ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a91bb: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 004a91c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a91c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a91c5: jle 0x4a91f7 */ if ((fZ||fS!=fO)) goto L_004a91f7;
L_004a91c7:; BB(0x004a91c7);
    /* 004a91c7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a91ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a91cc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a91ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a91d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a91d2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a91d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a91d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004a91d8:; BB(0x004a91d8);
    /* 004a91d8: mov esi, dword ptr [ebx + 0xa4] */ r_esi = R32((u32)(r_ebx+0xa4u));
    /* 004a91de: mov ecx, dword ptr [edx + esi + 0x18] */ r_ecx = R32((u32)(r_edx+r_esi+0x18u));
    /* 004a91e2: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004a91e5: mov dword ptr [edx + esi + 0x18], ecx */ W32((u32)(r_edx+r_esi+0x18u), r_ecx);
    /* 004a91e9: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a91ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a91ef: cmp eax, dword ptr [ebx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a91f5: jl 0x4a91d8 */ if ((fS!=fO)) goto L_004a91d8;
L_004a91f7:; BB(0x004a91f7);
    /* 004a91f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a91f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a91f9: ret 8 */ FN_RET(0x004a9174); r_esp += 12; return;
}

void f_004a91fc(void) /* sub_4A91FC */
{
    FN_ENTER(0x004a91fc);
    /* 004a91fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a91fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a91fe: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 004a9201: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 004a9207: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a9209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a920b: jle 0x4a923d */ if ((fZ||fS!=fO)) goto L_004a923d;
L_004a920d:; BB(0x004a920d);
    /* 004a920d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004a9210: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9212: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a9214: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9216: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9218: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a921a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a921c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004a921e:; BB(0x004a921e);
    /* 004a921e: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 004a9224: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 004a9228: and ebx, 0xfffffffe */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004a922b: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 004a922f: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9232: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a9235: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a923b: jl 0x4a921e */ if ((fS!=fO)) goto L_004a921e;
L_004a923d:; BB(0x004a923d);
    /* 004a923d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a923e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a923f: ret  */ FN_RET(0x004a91fc); r_esp += 4; return;
}

void f_004a9240(void) /* sub_4A9240 */
{
    FN_ENTER(0x004a9240);
    /* 004a9240: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9241: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a9243: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a9245: call 0x4a9264 */ r_esp -= 4; W32(r_esp, 0x4a924au); f_004a9264();
    /* 004a924a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a924e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9250: jne 0x4a9256 */ if (!fZ) goto L_004a9256;
L_004a9252:; BB(0x004a9252);
    /* 004a9252: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a9253: ret 4 */ FN_RET(0x004a9240); r_esp += 8; return;
L_004a9256:; BB(0x004a9256);
    /* 004a9256: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9257: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a925cu); f_005c2f74();
    /* 004a925c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a925d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a925e: ret 4 */ FN_RET(0x004a9240); r_esp += 8; return;
}

void f_004a9264(void) /* sub_4A9264 */
{
    FN_ENTER(0x004a9264);
    /* 004a9264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9265: mov ebp, esp */ r_ebp = r_esp;
    /* 004a9267: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9269: push 0x8d0608 */ { u32 v = 0x8d0608u; r_esp -= 4; W32(r_esp, v); }
    /* 004a926e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a9274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9275: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a927c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a927f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a9282: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a9285: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a9288: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a928b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004a928e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9291: mov dword ptr [ecx], 0xafa018 */ W32((u32)(r_ecx), 0xafa018u);
    /* 004a9297: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a929e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4a92a3u); f_008171e8();
    /* 004a92a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a92a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a92ad: mov esp, ebp */ r_esp = r_ebp;
    /* 004a92af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a92b0: ret  */ FN_RET(0x004a9264); r_esp += 4; return;
}

void f_004a92b4(void) /* sub_4A92B4 */
{
    FN_ENTER(0x004a92b4);
    /* 004a92b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a92b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004a92b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a92b9: push 0x8d0624 */ { u32 v = 0x8d0624u; r_esp -= 4; W32(r_esp, v); }
    /* 004a92be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a92c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a92c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a92cc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a92cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a92d2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004a92d5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004a92d8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004a92db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a92de: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a92e1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004a92e4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004a92e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a92ea: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004a92ed: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4a92f2u); f_008193cc();
    /* 004a92f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a92f9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a92fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a92ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a9302: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004a9305: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004a9308: mov dword ptr [ebx], 0xafa018 */ W32((u32)(r_ebx), 0xafa018u);
    /* 004a930e: mov eax, dword ptr [0x9a8194] */ r_eax = R32((u32)(0x9a8194u));
    /* 004a9313: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004a9316: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 004a931d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4a9322u); f_006dc358();
    /* 004a9322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9324: jne 0x4a935a */ if (!fZ) goto L_004a935a;
L_004a9326:; BB(0x004a9326);
    /* 004a9326: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a9329: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004a932c: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 004a932f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004a9332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a9334: mov byte ptr [ebp - 0x34], 1 */ W8((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004a9338: mov byte ptr [ebp - 0x33], al */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_eax);
    /* 004a933b: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 004a933f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 004a9342: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9344: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4a9349u); f_004d31f4();
    /* 004a9349: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004a934c: push 0x238e */ { u32 v = 0x238eu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9352: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4a9357u); f_004d6770();
    /* 004a9357: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004a935a:; BB(0x004a935a);
    /* 004a935a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a935d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a9360: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a9363: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a936a: mov esp, ebp */ r_esp = r_ebp;
    /* 004a936c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a936d: ret 0xc */ FN_RET(0x004a92b4); r_esp += 16; return;
}

void f_004a9370(void) /* sub_4A9370 */
{
    FN_ENTER(0x004a9370);
    /* 004a9370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9371: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a9373: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x4a9378u); f_004d6864();
    /* 004a9378: movzx edx, byte ptr [0xa72ae4] */ r_edx = (u32)R8((u32)(0xa72ae4u));
    /* 004a937f: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004a9383: mov byte ptr [0x9ba3fc], 0x8f */ W8((u32)(0x9ba3fcu), 0x8fu);
    /* 004a938a: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a9390: mov byte ptr [0xa72ae4], dl */ W8((u32)(0xa72ae4u), (u8)r_edx);
    /* 004a9396: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a9398: jne 0x4a93a3 */ if (!fZ) goto L_004a93a3;
L_004a939a:; BB(0x004a939a);
    /* 004a939a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004a939d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004a939f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a93a1: jne 0x4a93b5 */ if (!fZ) goto L_004a93b5;
L_004a93a3:; BB(0x004a93a3);
    /* 004a93a3: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4a93a8u); f_004d3250();
    /* 004a93a8: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004a93ac: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a93b1: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004a93b5:; BB(0x004a93b5);
    /* 004a93b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a93b6: ret  */ FN_RET(0x004a9370); r_esp += 4; return;
}

void f_004a93b8(void) /* sub_4A93B8 */
{
    FN_ENTER(0x004a93b8);
    /* 004a93b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a93b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a93bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a93bd: call 0x4a93dc */ r_esp -= 4; W32(r_esp, 0x4a93c2u); f_004a93dc();
    /* 004a93c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a93c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a93c8: jne 0x4a93ce */ if (!fZ) goto L_004a93ce;
L_004a93ca:; BB(0x004a93ca);
    /* 004a93ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a93cb: ret 4 */ FN_RET(0x004a93b8); r_esp += 8; return;
L_004a93ce:; BB(0x004a93ce);
    /* 004a93ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a93cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a93d4u); f_005c2f74();
    /* 004a93d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a93d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a93d6: ret 4 */ FN_RET(0x004a93b8); r_esp += 8; return;
}

void f_004a93dc(void) /* sub_4A93DC */
{
    FN_ENTER(0x004a93dc);
    /* 004a93dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a93dd: mov ebp, esp */ r_ebp = r_esp;
    /* 004a93df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a93e1: push 0x8d0640 */ { u32 v = 0x8d0640u; r_esp -= 4; W32(r_esp, v); }
    /* 004a93e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a93ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a93ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a93f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a93f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a93fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a93fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a9400: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a9403: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004a9406: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9409: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004a940c: mov dword ptr [ecx], 0xafa0a0 */ W32((u32)(r_ecx), 0xafa0a0u);
    /* 004a9412: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9414: je 0x4a942d */ if (fZ) goto L_004a942d;
L_004a9416:; BB(0x004a9416);
    /* 004a9416: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9419: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a941d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a9422: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a9426: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_004a942d:; BB(0x004a942d);
    /* 004a942d: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004a9430: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9432: je 0x4a944b */ if (fZ) goto L_004a944b;
L_004a9434:; BB(0x004a9434);
    /* 004a9434: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9437: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a943b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a9440: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a9444: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_004a944b:; BB(0x004a944b);
    /* 004a944b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004a944e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9450: je 0x4a9469 */ if (fZ) goto L_004a9469;
L_004a9452:; BB(0x004a9452);
    /* 004a9452: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9455: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a9459: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a945e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a9462: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_004a9469:; BB(0x004a9469);
    /* 004a9469: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004a946c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a946e: je 0x4a9487 */ if (fZ) goto L_004a9487;
L_004a9470:; BB(0x004a9470);
    /* 004a9470: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9473: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a9477: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a947c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a9480: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_004a9487:; BB(0x004a9487);
    /* 004a9487: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a948e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4a9493u); f_008171e8();
    /* 004a9493: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a9496: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a949d: mov esp, ebp */ r_esp = r_ebp;
    /* 004a949f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a94a0: ret  */ FN_RET(0x004a93dc); r_esp += 4; return;
}

void f_004a94a4(void) /* sub_4A94A4 */
{
    FN_ENTER(0x004a94a4);
    /* 004a94a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a94a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004a94a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a94a9: push 0x8d0668 */ { u32 v = 0x8d0668u; r_esp -= 4; W32(r_esp, v); }
    /* 004a94ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a94b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a94b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a94bc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a94bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a94c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a94c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a94c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a94cb: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 004a94d1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a94d4: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004a94d7: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 004a94dd: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a94e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a94e2: jne 0x4a954b */ if (!fZ) goto L_004a954b;
L_004a94e4:; BB(0x004a94e4);
    /* 004a94e4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a94eb: push 0x264 */ { u32 v = 0x264u; r_esp -= 4; W32(r_esp, v); }
    /* 004a94f0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a94f5u); f_005caba4();
    /* 004a94f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a94f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004a94f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a94fb: je 0x4a9559 */ if (fZ) goto L_004a9559;
L_004a94fd:; BB(0x004a94fd);
    /* 004a94fd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004a9504: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a950b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a950e: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9511: push dword ptr [eax + 0x8c] */ { u32 v = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9517: lea edx, [eax + 0x48] */ r_edx = (u32)(r_eax+0x48u);
    /* 004a951a: push dword ptr [eax + 0x88] */ { u32 v = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9520: push dword ptr [eax + 0x90] */ { u32 v = R32((u32)(r_eax+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9526: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a9529: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a952a: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9530: call 0x4a980c */ r_esp -= 4; W32(r_esp, 0x4a9535u); f_004a980c();
    /* 004a9535: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a9538: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004a953f:; BB(0x004a953f);
    /* 004a953f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a9546: call 0x4a9d50 */ r_esp -= 4; W32(r_esp, 0x4a954bu); f_004a9d50();
L_004a954b:; BB(0x004a954b);
    /* 004a954b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a954e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a9555: mov esp, ebp */ r_esp = r_ebp;
    /* 004a9557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a9558: ret  */ FN_RET(0x004a94a4); r_esp += 4; return;
L_004a9559:; BB(0x004a9559);
    /* 004a9559: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a955b: jmp 0x4a953f */ goto L_004a953f;
}

void f_004a9560(void) /* sub_4A9560 */
{
    FN_ENTER(0x004a9560);
    /* 004a9560: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9561: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9562: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9563: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9564: mov esi, ecx */ r_esi = r_ecx;
    /* 004a9566: lea edi, [esi + 0x48] */ r_edi = (u32)(r_esi+0x48u);
    /* 004a9569: lea ebp, [esi + 0x20] */ r_ebp = (u32)(r_esi+0x20u);
    /* 004a956c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a956d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a956f: push dword ptr [esi + 0x88] */ { u32 v = R32((u32)(r_esi+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9575: push dword ptr [esi + 0x90] */ { u32 v = R32((u32)(r_esi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a957b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a957c: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a9581u); f_007be6b8();
    /* 004a9581: lea ebx, [esi + 0x2c] */ r_ebx = (u32)(r_esi+0x2cu);
    /* 004a9584: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9585: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9587: push dword ptr [esi + 0x8c] */ { u32 v = R32((u32)(r_esi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a958d: push dword ptr [esi + 0x90] */ { u32 v = R32((u32)(r_esi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9593: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9594: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a9599u); f_007be6b8();
    /* 004a9599: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a959c: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 004a959f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a95a1: je 0x4a95a9 */ if (fZ) goto L_004a95a9;
L_004a95a3:; BB(0x004a95a3);
    /* 004a95a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a95a4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a95a9u); f_00508db8();
L_004a95a9:; BB(0x004a95a9);
    /* 004a95a9: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 004a95ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a95ae: je 0x4a95b6 */ if (fZ) goto L_004a95b6;
L_004a95b0:; BB(0x004a95b0);
    /* 004a95b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a95b1: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a95b6u); f_00508db8();
L_004a95b6:; BB(0x004a95b6);
    /* 004a95b6: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004a95b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a95bb: je 0x4a95c3 */ if (fZ) goto L_004a95c3;
L_004a95bd:; BB(0x004a95bd);
    /* 004a95bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a95be: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a95c3u); f_00508db8();
L_004a95c3:; BB(0x004a95c3);
    /* 004a95c3: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 004a95c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a95c8: je 0x4a95d0 */ if (fZ) goto L_004a95d0;
L_004a95ca:; BB(0x004a95ca);
    /* 004a95ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a95cb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a95d0u); f_00508db8();
L_004a95d0:; BB(0x004a95d0);
    /* 004a95d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a95d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a95d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a95d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a95d4: ret  */ FN_RET(0x004a9560); r_esp += 4; return;
}

void f_004a95d8(void) /* sub_4A95D8 */
{
    FN_ENTER(0x004a95d8);
    /* 004a95d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a95d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004a95db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a95dd: push 0x8d0684 */ { u32 v = 0x8d0684u; r_esp -= 4; W32(r_esp, v); }
    /* 004a95e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a95e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a95e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a95f0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a95f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a95f6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004a95f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004a95fc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004a95ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a9602: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9605: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004a9608: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004a960b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a960e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004a9611: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4a9616u); f_008193cc();
    /* 004a9616: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a961d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a9620: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a9623: mov dword ptr [eax], 0xafa0a0 */ W32((u32)(r_eax), 0xafa0a0u);
    /* 004a9629: mov edx, dword ptr [0x9a8198] */ r_edx = R32((u32)(0x9a8198u));
    /* 004a962f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9631: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9636: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004a9639: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a963c: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 004a963e: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 004a9641: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 004a9644: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 004a9647: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 004a964a: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 004a9654: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 004a9657: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 004a965a: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 004a965d: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 004a9660: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004a9663: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9667: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a966cu); f_0050981c();
    /* 004a966c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a966f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9671: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9676: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004a9679: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a967c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a967d: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a9682u); f_0050981c();
    /* 004a9682: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a9685: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9687: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 004a968c: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004a968f: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a9692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9693: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a9698u); f_0050981c();
    /* 004a9698: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a969b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a969d: push 0x216 */ { u32 v = 0x216u; r_esp -= 4; W32(r_esp, v); }
    /* 004a96a2: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 004a96a5: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a96a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a96a9: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a96aeu); f_0050981c();
    /* 004a96ae: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a96b1: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a96b4: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a96b7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a96ba: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004a96bd: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004a96c0: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004a96c3: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004a96c6: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 004a96cd: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004a96d0: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 004a96d3: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
    /* 004a96da: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 004a96dd: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 004a96e0: mov dword ptr [ebx + 0x5c], ecx */ W32((u32)(r_ebx+0x5cu), r_ecx);
    /* 004a96e3: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
    /* 004a96ea: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004a96ed: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 004a96f0: mov dword ptr [ebx + 0x6c], ecx */ W32((u32)(r_ebx+0x6cu), r_ecx);
    /* 004a96f3: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
    /* 004a96fd: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 004a9700: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 004a9703: mov dword ptr [ebx + 0x7c], ecx */ W32((u32)(r_ebx+0x7cu), r_ecx);
    /* 004a9706: mov dword ptr [ebx + 0x88], 0 */ W32((u32)(r_ebx+0x88u), 0x0u);
    /* 004a9710: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 004a9716: mov eax, ebx */ r_eax = r_ebx;
    /* 004a9718: mov dword ptr [ebx + 0x8c], 0 */ W32((u32)(r_ebx+0x8cu), 0x0u);
    /* 004a9722: mov dword ptr [ebx + 0x90], 1 */ W32((u32)(r_ebx+0x90u), 0x1u);
    /* 004a972c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a972f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a9732: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a9739: mov esp, ebp */ r_esp = r_ebp;
    /* 004a973b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a973c: ret 0xc */ FN_RET(0x004a95d8); r_esp += 16; return;
}

void f_004a9740(void) /* sub_4A9740 */
{
    FN_ENTER(0x004a9740);
    /* 004a9740: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a9744: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004a9747: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004a9749: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004a974c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004a974f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004a9752: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004a9755: ret 4 */ FN_RET(0x004a9740); r_esp += 8; return;
}

void f_004a9758(void) /* sub_4A9758 */
{
    FN_ENTER(0x004a9758);
    /* 004a9758: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a975c: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004a975f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004a9761: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004a9764: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004a9767: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004a976a: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004a976d: ret 4 */ FN_RET(0x004a9758); r_esp += 8; return;
}

void f_004a9770(void) /* sub_4A9770 */
{
    FN_ENTER(0x004a9770);
    /* 004a9770: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9771: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a9773: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a9775: call 0x4a9794 */ r_esp -= 4; W32(r_esp, 0x4a977au); f_004a9794();
    /* 004a977a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a977e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9780: jne 0x4a9786 */ if (!fZ) goto L_004a9786;
L_004a9782:; BB(0x004a9782);
    /* 004a9782: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a9783: ret 4 */ FN_RET(0x004a9770); r_esp += 8; return;
L_004a9786:; BB(0x004a9786);
    /* 004a9786: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9787: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a978cu); f_005c2f74();
    /* 004a978c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a978d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a978e: ret 4 */ FN_RET(0x004a9770); r_esp += 8; return;
}

void f_004a9794(void) /* sub_4A9794 */
{
    FN_ENTER(0x004a9794);
    /* 004a9794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9795: mov ebp, esp */ r_ebp = r_esp;
    /* 004a9797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9799: push 0x8d06a0 */ { u32 v = 0x8d06a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a979e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a97a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a97a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a97ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a97af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a97b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a97b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a97b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a97bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004a97be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a97c1: mov dword ptr [ecx], 0xafa100 */ W32((u32)(r_ecx), 0xafa100u);
    /* 004a97c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a97ce: call 0x6f30a8 */ r_esp -= 4; W32(r_esp, 0x4a97d3u); f_006f30a8();
    /* 004a97d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a97d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a97dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004a97df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a97e0: ret  */ FN_RET(0x004a9794); r_esp += 4; return;
}

void f_004a97e4(void) /* sub_4A97E4 */
{
    FN_ENTER(0x004a97e4);
    /* 004a97e4: mov ecx, dword ptr [0xa476d0] */ r_ecx = R32((u32)(0xa476d0u));
    /* 004a97ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a97ec: je 0x4a9809 */ if (fZ) goto L_004a9809;
L_004a97ee:; BB(0x004a97ee);
    /* 004a97ee: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4a97f3u); f_00829de0();
    /* 004a97f3: push dword ptr [0xa476d0] */ { u32 v = R32((u32)(0xa476d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a97f9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4a97feu); f_0082e960();
    /* 004a97fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a97ff: mov dword ptr [0xa476d0], 0 */ W32((u32)(0xa476d0u), 0x0u);
L_004a9809:; BB(0x004a9809);
    /* 004a9809: ret  */ FN_RET(0x004a97e4); r_esp += 4; return;
}

void f_004a980c(void) /* sub_4A980C */
{
    FN_ENTER(0x004a980c);
    /* 004a980c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a980d: mov ebp, esp */ r_ebp = r_esp;
    /* 004a980f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9811: push 0x8d06bc */ { u32 v = 0x8d06bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9816: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a981c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a981d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a9824: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a9827: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a982a: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 004a982d: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004a9830: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004a9833: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a9836: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004a9839: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 004a983c: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 004a983f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9841: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 004a9844: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004a9847: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004a984a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004a984d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004a9850: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004a9853: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004a9856: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004a9859: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004a985c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a985e: push 0x30000000 */ { u32 v = 0x30000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9863: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9866: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9869: call 0x6f3f94 */ r_esp -= 4; W32(r_esp, 0x4a986eu); f_006f3f94();
    /* 004a986e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a9875: mov edi, dword ptr [ebp - 0x5c] */ r_edi = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a9878: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004a987b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a987e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a9881: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a9883: mov byte ptr [edi + 0x260], al */ W8((u32)(r_edi+0x260u), (u8)r_eax);
    /* 004a9889: mov dword ptr [edi], 0xafa100 */ W32((u32)(r_edi), 0xafa100u);
    /* 004a988f: mov esi, dword ptr [0x9a819c] */ r_esi = R32((u32)(0x9a819cu));
    /* 004a9895: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004a9898: mov word ptr [edi + 0x25c], ax */ W16((u32)(r_edi+0x25cu), (u16)r_eax);
    /* 004a989f: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a98a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a98a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a98a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a98a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a98a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a98a7: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a98acu); f_007be6b8();
    /* 004a98ac: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a98af: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a98b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a98b5: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a98b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a98b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a98bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a98bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a98bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a98be: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a98c3u); f_007be6b8();
    /* 004a98c3: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a98c6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a98c9: lea ecx, [edx + 0x28] */ r_ecx = (u32)(r_edx+0x28u);
    /* 004a98cc: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a98cf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4a98d4u); f_0082f9c4();
    /* 004a98d4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a98d7: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a98da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a98db: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4a98e0u); f_00782868();
    /* 004a98e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a98e1: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a98e4: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 004a98e7: fsub dword ptr [ebp - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffdcu));
    /* 004a98ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a98ec: fst dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0));
    /* 004a98ef: fdiv dword ptr [0x9043b0] */ ST(0) = ST(0) / R_F32((u32)(0x9043b0u));
    /* 004a98f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a98f7: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004a98fa: fnstcw word ptr [ebp - 0x58] */ W16((u32)(r_ebp+0xffffffa8u), fcw);
    /* 004a98fd: movzx eax, word ptr [ebp - 0x58] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a9901: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a9906: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004a9909: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 004a990c: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a990f: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 004a9912: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
    /* 004a9915: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a9918: mov ebx, 2 */ r_ebx = 0x2u;
    /* 004a991d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a9920: mov eax, 0xd */ r_eax = 0xdu;
    /* 004a9925: jg 0x4a9929 */ if ((!fZ&&fS==fO)) goto L_004a9929;
L_004a9927:; BB(0x004a9927);
    /* 004a9927: mov esi, ebx */ r_esi = r_ebx;
L_004a9929:; BB(0x004a9929);
    /* 004a9929: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a992c: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004a9931: jl 0x4a9935 */ if ((fS!=fO)) goto L_004a9935;
L_004a9933:; BB(0x004a9933);
    /* 004a9933: mov esi, eax */ r_esi = r_eax;
L_004a9935:; BB(0x004a9935);
    /* 004a9935: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 004a9938: lea edx, [esi - 1] */ r_edx = (u32)(r_esi+0xffffffffu);
    /* 004a993b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004a993e: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004a9941: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 004a9944: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a9946: jle 0x4a9998 */ if ((fZ||fS!=fO)) goto L_004a9998;
L_004a9948:; BB(0x004a9948);
    /* 004a9948: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a994b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a994e: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 004a9951: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004a9954: fdiv dword ptr [ebp - 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffecu));
    /* 004a9957: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 004a995a: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a995d: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 004a9960: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a9964: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004a996c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a996f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004a9972: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a9976: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a9978: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004a997b: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a997d: lea ecx, [ecx + edi + 0x3c] */ r_ecx = (u32)(r_ecx+r_edi+0x3cu);
    /* 004a9981: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004a9985: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a998au); f_007be6b8();
    /* 004a998a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a998d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a9990: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a9993: cmp ebx, dword ptr [ecx + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a9996: jl 0x4a9948 */ if ((fS!=fO)) goto L_004a9948;
L_004a9998:; BB(0x004a9998);
    /* 004a9998: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 004a999b: fcomp dword ptr [0x9043b4] */ fx_compare(ST(0), R_F32((u32)(0x9043b4u))); FPOP();
    /* 004a99a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a99a3: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 004a99aa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004a99ac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a99ad: jbe 0x4a9a04 */ if ((fC||fZ)) goto L_004a9a04;
L_004a99af:; BB(0x004a99af);
    /* 004a99af: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004a99b2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a99b4: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004a99b7: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a99b9: mov edi, dword ptr [eax + ecx + 0x3c] */ r_edi = R32((u32)(r_eax+r_ecx+0x3cu));
    /* 004a99bd: mov edx, dword ptr [eax + ecx + 0x40] */ r_edx = R32((u32)(r_eax+r_ecx+0x40u));
    /* 004a99c1: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 004a99c4: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004a99c7: mov edx, dword ptr [eax + ecx + 0x44] */ r_edx = R32((u32)(r_eax+r_ecx+0x44u));
    /* 004a99cb: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004a99ce: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 004a99d2: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 004a99d5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4a99dau); f_0082f9c4();
    /* 004a99da: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 004a99dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a99de: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4a99e3u); f_00782868();
    /* 004a99e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a99e4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a99e7: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 004a99ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a99ec: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 004a99ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a99f1: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 004a99f4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a99f7: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 004a99fa: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004a99fd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004a99ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a9a01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a9a02: jb 0x4a99af */ if (fC) goto L_004a99af;
L_004a9a04:; BB(0x004a9a04);
    /* 004a9a04: call 0x6f316c */ r_esp -= 4; W32(r_esp, 0x4a9a09u); f_006f316c();
    /* 004a9a09: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004a9a0c: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004a9a0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a9a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9a13: jle 0x4a9a48 */ if ((fZ||fS!=fO)) goto L_004a9a48;
L_004a9a15:; BB(0x004a9a15);
    /* 004a9a15: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004a9a18: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a9a1a: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004a9a1d: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9a1f: mov esi, dword ptr [eax + ecx + 0x3c] */ r_esi = R32((u32)(r_eax+r_ecx+0x3cu));
    /* 004a9a23: mov edi, dword ptr [eax + ecx + 0x40] */ r_edi = R32((u32)(r_eax+r_ecx+0x40u));
    /* 004a9a27: mov ebx, dword ptr [eax + ecx + 0x44] */ r_ebx = R32((u32)(r_eax+r_ecx+0x44u));
    /* 004a9a2b: mov dword ptr [eax + ecx + 0xd8], esi */ W32((u32)(r_eax+r_ecx+0xd8u), r_esi);
    /* 004a9a32: mov dword ptr [eax + ecx + 0xdc], edi */ W32((u32)(r_eax+r_ecx+0xdcu), r_edi);
    /* 004a9a39: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a9a3c: mov dword ptr [eax + ecx + 0xe0], ebx */ W32((u32)(r_eax+r_ecx+0xe0u), r_ebx);
    /* 004a9a43: cmp edx, dword ptr [ecx + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a9a46: jl 0x4a9a15 */ if ((fS!=fO)) goto L_004a9a15;
L_004a9a48:; BB(0x004a9a48);
    /* 004a9a48: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004a9a4b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004a9a4e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a9a51: mov eax, ecx */ r_eax = r_ecx;
    /* 004a9a53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a9a56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a9a5d: mov esp, ebp */ r_esp = r_ebp;
    /* 004a9a5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a9a60: ret 0x18 */ FN_RET(0x004a980c); r_esp += 28; return;
}

void f_004a9a64(void) /* sub_4A9A64 */
{
    FN_ENTER(0x004a9a64);
    /* 004a9a64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9a65: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a9a68: mov edi, ecx */ r_edi = r_ecx;
    /* 004a9a6a: mov ecx, edi */ r_ecx = r_edi;
    /* 004a9a6c: call 0x6f4004 */ r_esp -= 4; W32(r_esp, 0x4a9a71u); f_006f4004();
    /* 004a9a71: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a9a76u); f_008587a5();
    /* 004a9a76: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a9a79: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a9a7c: fdiv dword ptr [0x9043ac] */ ST(0) = ST(0) / R_F32((u32)(0x9043acu));
    /* 004a9a82: fcomp dword ptr [0x9043a8] */ fx_compare(ST(0), R_F32((u32)(0x9043a8u))); FPOP();
    /* 004a9a88: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a9a8a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a9a8b: jbe 0x4a9ae7 */ if ((fC||fZ)) goto L_004a9ae7;
L_004a9a8d:; BB(0x004a9a8d);
    /* 004a9a8d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a9a92u); f_008587a5();
    /* 004a9a92: fild dword ptr [edi + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x38u)));
    /* 004a9a95: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a9a99: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a9a9d: fdiv dword ptr [0x9043ac] */ ST(0) = ST(0) / R_F32((u32)(0x9043acu));
    /* 004a9aa3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a9aa5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004a9aa9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004a9aae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a9ab3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a9ab7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004a9abb: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a9abf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a9ac3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004a9ac7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9ac9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9acb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9acd: push 0x215 */ { u32 v = 0x215u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9ad2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a9ad5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a9ad7: lea eax, [edi + edx + 0xd8] */ r_eax = (u32)(r_edi+r_edx+0xd8u);
    /* 004a9ade: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9adf: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a9ae4u); f_0050b7a4();
    /* 004a9ae4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a9ae7:; BB(0x004a9ae7);
    /* 004a9ae7: add word ptr [edi + 0x25c], 1 */ { u32 ad = (u32)(r_edi+0x25cu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 004a9aef: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a9af2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a9af3: ret  */ FN_RET(0x004a9a64); r_esp += 4; return;
}

void f_004a9af4(void) /* sub_4A9AF4 */
{
    FN_ENTER(0x004a9af4);
    /* 004a9af4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9af5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9af6: sub esp, 0x384 */ {  u32 a = r_esp; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a9afc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a9afe: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004a9b03: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004a9b08: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a9b0b: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004a9b10: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4a9b15u); f_0082dbac();
    /* 004a9b15: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4a9b1au); f_007a9380();
    /* 004a9b1a: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x4a9b1fu); f_007a902c();
    /* 004a9b1f: lea edi, [esp + 0x78] */ r_edi = (u32)(r_esp+0x78u);
    /* 004a9b23: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 004a9b27: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004a9b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b2c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a9b2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b2f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b30: call 0x6f3454 */ r_esp -= 4; W32(r_esp, 0x4a9b35u); f_006f3454();
    /* 004a9b35: lea ecx, [esp + 0x114] */ r_ecx = (u32)(r_esp+0x114u);
    /* 004a9b3c: lea edi, [esp + 0x78] */ r_edi = (u32)(r_esp+0x78u);
    /* 004a9b40: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 004a9b44: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004a9b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b4a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9b4c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a9b4e: call 0x6f3588 */ r_esp -= 4; W32(r_esp, 0x4a9b53u); f_006f3588();
    /* 004a9b53: fld dword ptr [0x9043a4] */ FPUSH(R_F32((u32)(0x9043a4u)));
    /* 004a9b59: fld dword ptr [0x9043bc] */ FPUSH(R_F32((u32)(0x9043bcu)));
    /* 004a9b5f: fld dword ptr [0x9043b8] */ FPUSH(R_F32((u32)(0x9043b8u)));
    /* 004a9b65: fld dword ptr [0x9043b8] */ FPUSH(R_F32((u32)(0x9043b8u)));
    /* 004a9b6b: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004a9b6e: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 004a9b71: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 004a9b78: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a9b7b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a9b7e: fdivr dword ptr [ebp + 0x34] */ ST(0) = R_F32((u32)(r_ebp+0x34u)) / ST(0);
    /* 004a9b81: movsx eax, word ptr [ebp + 0x25c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x25cu));
    /* 004a9b88: mov edi, eax */ r_edi = r_eax;
    /* 004a9b8a: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004a9b8d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004a9b91: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a9b95: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a9b97: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004a9b99: fdivr st(2), st(0) */ ST(2) = ST(0) / ST(2);
    /* 004a9b9b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004a9b9d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9b9f: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 004a9ba1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a9ba3: jle 0x4a9d35 */ if ((fZ||fS!=fO)) goto L_004a9d35;
L_004a9ba9:; BB(0x004a9ba9);
    /* 004a9ba9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9bab: fst dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0));
    /* 004a9bae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a9bb0: fst dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0));
    /* 004a9bb3: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 004a9bb5: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a9bb7: fst dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0));
    /* 004a9bba: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 004a9bbd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9bbf: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 004a9bc1: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004a9bc4: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a9bc7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a9bca: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a9bcc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9bce: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a9bd0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9bd2: jl 0x4a9ba9 */ if ((fS!=fO)) goto L_004a9ba9;
L_004a9bd4:; BB(0x004a9bd4);
    /* 004a9bd4: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004a9bd6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9bd8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9bda: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9bdc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a9bde:; BB(0x004a9bde);
    /* 004a9bde: mov edx, dword ptr [0xa476d0] */ r_edx = R32((u32)(0xa476d0u));
    /* 004a9be4: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a9be6: je 0x4a9bf4 */ if (fZ) goto L_004a9bf4;
L_004a9be8:; BB(0x004a9be8);
    /* 004a9be8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004a9bea: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a9bed: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a9bf0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004a9bf2: jmp 0x4a9bfe */ goto L_004a9bfe;
L_004a9bf4:; BB(0x004a9bf4);
    /* 004a9bf4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004a9bf6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004a9bf9: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a9bfc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
L_004a9bfe:; BB(0x004a9bfe);
    /* 004a9bfe: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 004a9c05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c08: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a9c0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c0c: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x4a9c11u); f_0082b158();
    /* 004a9c11: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a9c14: movzx eax, byte ptr [ebp + 0x260] */ r_eax = (u32)R8((u32)(r_ebp+0x260u));
    /* 004a9c1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9c1e: je 0x4a9c4d */ if (fZ) goto L_004a9c4d;
L_004a9c20:; BB(0x004a9c20);
    /* 004a9c20: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x4a9c25u); f_007a9044();
    /* 004a9c25: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4a9c2au); f_0082dab0();
    /* 004a9c2a: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c2f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x4a9c34u); f_0082d710();
    /* 004a9c34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a9c35: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004a9c3a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004a9c3f: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4a9c44u); f_007a9318();
    /* 004a9c44: add esp, 0x384 */ {  u32 a = r_esp; u32 b = 0x384u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a9c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a9c4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a9c4c: ret  */ FN_RET(0x004a9af4); r_esp += 4; return;
L_004a9c4d:; BB(0x004a9c4d);
    /* 004a9c4d: lea ecx, [esp + 0x114] */ r_ecx = (u32)(r_esp+0x114u);
    /* 004a9c54: lea edi, [esp + 0x78] */ r_edi = (u32)(r_esp+0x78u);
    /* 004a9c58: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004a9c5c: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 004a9c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9c64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a9c66: call 0x6f3588 */ r_esp -= 4; W32(r_esp, 0x4a9c6bu); f_006f3588();
    /* 004a9c6b: fld dword ptr [0x9043a4] */ FPUSH(R_F32((u32)(0x9043a4u)));
    /* 004a9c71: fld dword ptr [0x9043bc] */ FPUSH(R_F32((u32)(0x9043bcu)));
    /* 004a9c77: fld dword ptr [0x9043b8] */ FPUSH(R_F32((u32)(0x9043b8u)));
    /* 004a9c7d: fld dword ptr [0x9043b8] */ FPUSH(R_F32((u32)(0x9043b8u)));
    /* 004a9c83: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004a9c86: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 004a9c89: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 004a9c90: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a9c94: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a9c98: fdivr dword ptr [ebp + 0x34] */ ST(0) = R_F32((u32)(r_ebp+0x34u)) / ST(0);
    /* 004a9c9b: movsx eax, word ptr [ebp + 0x25c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x25cu));
    /* 004a9ca2: mov edi, eax */ r_edi = r_eax;
    /* 004a9ca4: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004a9ca7: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004a9cab: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a9caf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a9cb1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004a9cb3: fdivr st(2), st(0) */ ST(2) = ST(0) / ST(2);
    /* 004a9cb5: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004a9cb7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9cb9: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 004a9cbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a9cbd: jle 0x4a9d44 */ if ((fZ||fS!=fO)) goto L_004a9d44;
L_004a9cc3:; BB(0x004a9cc3);
    /* 004a9cc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9cc5: fst dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0));
    /* 004a9cc8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a9cca: fst dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0));
    /* 004a9ccd: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 004a9ccf: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a9cd1: fst dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0));
    /* 004a9cd4: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 004a9cd7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9cd9: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 004a9cdb: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004a9cde: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a9ce1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a9ce4: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a9ce6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9ce8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a9cea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9cec: jl 0x4a9cc3 */ if ((fS!=fO)) goto L_004a9cc3;
L_004a9cee:; BB(0x004a9cee);
    /* 004a9cee: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004a9cf0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9cf2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9cf4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9cf6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a9cf8:; BB(0x004a9cf8);
    /* 004a9cf8: mov edx, dword ptr [0xa476d0] */ r_edx = R32((u32)(0xa476d0u));
    /* 004a9cfe: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a9d00: je 0x4a9d0f */ if (fZ) goto L_004a9d0f;
L_004a9d02:; BB(0x004a9d02);
    /* 004a9d02: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004a9d04: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a9d07: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 004a9d0a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004a9d0d: jmp 0x4a9d1a */ goto L_004a9d1a;
L_004a9d0f:; BB(0x004a9d0f);
    /* 004a9d0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004a9d11: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004a9d14: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 004a9d17: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
L_004a9d1a:; BB(0x004a9d1a);
    /* 004a9d1a: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 004a9d21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a9d26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d28: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x4a9d2du); f_0082b158();
    /* 004a9d2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a9d30: jmp 0x4a9c20 */ goto L_004a9c20;
L_004a9d35:; BB(0x004a9d35);
    /* 004a9d35: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004a9d37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9d39: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9d3b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9d3d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9d3f: jmp 0x4a9bde */ goto L_004a9bde;
L_004a9d44:; BB(0x004a9d44);
    /* 004a9d44: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004a9d46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9d48: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9d4a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a9d4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9d4e: jmp 0x4a9cf8 */ goto L_004a9cf8;
}

void f_004a9d50(void) /* sub_4A9D50 */
{
    FN_ENTER(0x004a9d50);
    /* 004a9d50: mov byte ptr [ecx + 0x260], 1 */ W8((u32)(r_ecx+0x260u), 0x1u);
    /* 004a9d57: ret  */ FN_RET(0x004a9d50); r_esp += 4; return;
}

void f_004a9d58(void) /* sub_4A9D58 */
{
    FN_ENTER(0x004a9d58);
    /* 004a9d58: push 0x9043d4 */ { u32 v = 0x9043d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d5d: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x4a9d62u); f_008009dc();
    /* 004a9d62: mov dword ptr [0xa476d0], eax */ W32((u32)(0xa476d0u), r_eax);
    /* 004a9d67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a9d68: ret  */ FN_RET(0x004a9d58); r_esp += 4; return;
}

void f_004a9d6c(void) /* sub_4A9D6C */
{
    FN_ENTER(0x004a9d6c);
    /* 004a9d6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a9d6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a9d71: call 0x4a9d90 */ r_esp -= 4; W32(r_esp, 0x4a9d76u); f_004a9d90();
    /* 004a9d76: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a9d7a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9d7c: jne 0x4a9d82 */ if (!fZ) goto L_004a9d82;
L_004a9d7e:; BB(0x004a9d7e);
    /* 004a9d7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a9d7f: ret 4 */ FN_RET(0x004a9d6c); r_esp += 8; return;
L_004a9d82:; BB(0x004a9d82);
    /* 004a9d82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d83: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a9d88u); f_005c2f74();
    /* 004a9d88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a9d89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a9d8a: ret 4 */ FN_RET(0x004a9d6c); r_esp += 8; return;
}

void f_004a9d90(void) /* sub_4A9D90 */
{
    FN_ENTER(0x004a9d90);
    /* 004a9d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d91: mov ebp, esp */ r_ebp = r_esp;
    /* 004a9d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d95: push 0x8d06d8 */ { u32 v = 0x8d06d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9d9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a9da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9da1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a9da8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a9dab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a9dae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a9db1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a9db4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a9db7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004a9dba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9dbd: mov dword ptr [ecx], 0xafa160 */ W32((u32)(r_ecx), 0xafa160u);
    /* 004a9dc3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a9dca: call 0x4a93dc */ r_esp -= 4; W32(r_esp, 0x4a9dcfu); f_004a93dc();
    /* 004a9dcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a9dd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a9dd9: mov esp, ebp */ r_esp = r_ebp;
    /* 004a9ddb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a9ddc: ret  */ FN_RET(0x004a9d90); r_esp += 4; return;
}

void f_004a9de0(void) /* sub_4A9DE0 */
{
    FN_ENTER(0x004a9de0);
    /* 004a9de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a9de1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a9de3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9de5: push 0x8d0700 */ { u32 v = 0x8d0700u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9dea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a9df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9df1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a9df8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a9dfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a9dfe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a9e01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a9e04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a9e07: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004a9e0a: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9e0f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004a9e11: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a9e14: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004a9e17: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004a9e1a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004a9e1d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004a9e20: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 004a9e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9e24: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a9e29u); f_00780630();
    /* 004a9e29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a9e2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9e2e: je 0x4a9eb9 */ if (fZ) goto L_004a9eb9;
L_004a9e34:; BB(0x004a9e34);
    /* 004a9e34: fld dword ptr [0x903ae0] */ FPUSH(R_F32((u32)(0x903ae0u)));
    /* 004a9e3a: fld dword ptr [0x903ae0] */ FPUSH(R_F32((u32)(0x903ae0u)));
    /* 004a9e40: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a9e43: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a9e46: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004a9e48: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a9e4a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9e4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a9e4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a9e4f: jb 0x4a9e53 */ if (fC) goto L_004a9e53;
L_004a9e51:; BB(0x004a9e51);
    /* 004a9e51: fst st(1) */ ST(1) = ST(0);
L_004a9e53:; BB(0x004a9e53);
    /* 004a9e53: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a9e55: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
L_004a9e58:; BB(0x004a9e58);
    /* 004a9e58: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004a9e5b: fadd dword ptr [0x90441c] */ ST(0) = ST(0) + R_F32((u32)(0x90441cu));
    /* 004a9e61: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004a9e64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004a9e6b: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9e70: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a9e75u); f_005caba4();
    /* 004a9e75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a9e76: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004a9e79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9e7b: je 0x4a9eb5 */ if (fZ) goto L_004a9eb5;
L_004a9e7d:; BB(0x004a9e7d);
    /* 004a9e7d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004a9e84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a9e8b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9e8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9e91: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 004a9e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9e95: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9e98: call 0x4a9ec4 */ r_esp -= 4; W32(r_esp, 0x4a9e9du); f_004a9ec4();
    /* 004a9e9d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a9ea0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004a9ea7:; BB(0x004a9ea7);
    /* 004a9ea7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a9eaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a9eb1: mov esp, ebp */ r_esp = r_ebp;
    /* 004a9eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a9eb4: ret  */ FN_RET(0x004a9de0); r_esp += 4; return;
L_004a9eb5:; BB(0x004a9eb5);
    /* 004a9eb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9eb7: jmp 0x4a9ea7 */ goto L_004a9ea7;
L_004a9eb9:; BB(0x004a9eb9);
    /* 004a9eb9: mov eax, dword ptr [0x903ae0] */ r_eax = R32((u32)(0x903ae0u));
    /* 004a9ebe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004a9ec1: jmp 0x4a9e58 */ goto L_004a9e58;
}

void f_004a9ec4(void) /* sub_4A9EC4 */
{
    FN_ENTER(0x004a9ec4);
    /* 004a9ec4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9ec5: mov edi, ecx */ r_edi = r_ecx;
    /* 004a9ec7: mov ecx, edi */ r_ecx = r_edi;
    /* 004a9ec9: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9ece: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9ed2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a9ed6: call 0x4a95d8 */ r_esp -= 4; W32(r_esp, 0x4a9edbu); f_004a95d8();
    /* 004a9edb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a9edf: mov dword ptr [edi], 0xafa160 */ W32((u32)(r_edi), 0xafa160u);
    /* 004a9ee5: mov eax, dword ptr [0x9a81a0] */ r_eax = R32((u32)(0x9a81a0u));
    /* 004a9eea: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004a9eed: mov dword ptr [edi + 0xa4], ecx */ W32((u32)(r_edi+0xa4u), r_ecx);
    /* 004a9ef3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a9ef8u); f_0082dcbc();
    /* 004a9ef8: fld dword ptr [0x90440c] */ FPUSH(R_F32((u32)(0x90440cu)));
    /* 004a9efe: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 004a9f04: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a9f06: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 004a9f0c: mov dword ptr [edi + 0x9c], 0 */ W32((u32)(r_edi+0x9cu), 0x0u);
    /* 004a9f16: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a9f1bu); f_0082ddd8();
    /* 004a9f1b: fmul dword ptr [0x90440c] */ ST(0) = ST(0) * R_F32((u32)(0x90440cu));
    /* 004a9f21: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 004a9f27: mov eax, edi */ r_eax = r_edi;
    /* 004a9f29: mov dword ptr [edi + 0x8c], 0x3f800000 */ W32((u32)(r_edi+0x8cu), 0x3f800000u);
    /* 004a9f33: mov dword ptr [edi + 0x90], 4 */ W32((u32)(r_edi+0x90u), 0x4u);
    /* 004a9f3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a9f3e: ret 0xc */ FN_RET(0x004a9ec4); r_esp += 16; return;
}

void f_004a9f44(void) /* sub_4A9F44 */
{
    FN_ENTER(0x004a9f44);
    /* 004a9f44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9f45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a9f46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a9f47: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a9f4d: mov edi, ecx */ r_edi = r_ecx;
    /* 004a9f4f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a9f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9f53: mov ecx, edi */ r_ecx = r_edi;
    /* 004a9f55: call 0x4a9758 */ r_esp -= 4; W32(r_esp, 0x4a9f5au); f_004a9758();
    /* 004a9f5a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004a9f5d: fadd dword ptr [edi + 0x98] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x98u));
    /* 004a9f63: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004a9f67: fadd dword ptr [edi + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xa0u));
    /* 004a9f6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9f6f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a9f72: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a9f76: mov dword ptr [esp + 4], 0x42700000 */ W32((u32)(r_esp+0x4u), 0x42700000u);
    /* 004a9f7e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a9f81: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9f87: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a9f8cu); f_00780630();
    /* 004a9f8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a9f8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a9f91: je 0x4a9fad */ if (fZ) goto L_004a9fad;
L_004a9f93:; BB(0x004a9f93);
    /* 004a9f93: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a9f96: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a9f99: fcomp dword ptr [0x903ae0] */ fx_compare(ST(0), R_F32((u32)(0x903ae0u))); FPOP();
    /* 004a9f9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a9fa1: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004a9fa4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a9fa5: ja 0x4a9fad */ if ((!fC&&!fZ)) goto L_004a9fad;
L_004a9fa7:; BB(0x004a9fa7);
    /* 004a9fa7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a9fab: jmp 0x4a9ff0 */ goto L_004a9ff0;
L_004a9fad:; BB(0x004a9fad);
    /* 004a9fad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a9fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9fb1: mov ecx, edi */ r_ecx = r_edi;
    /* 004a9fb3: call 0x4a9758 */ r_esp -= 4; W32(r_esp, 0x4a9fb8u); f_004a9758();
    /* 004a9fb8: fld dword ptr [0x904404] */ FPUSH(R_F32((u32)(0x904404u)));
    /* 004a9fbe: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 004a9fc4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a9fc6: fld dword ptr [edi + 0x9c] */ FPUSH(R_F32((u32)(r_edi+0x9cu)));
    /* 004a9fcc: fld dword ptr [edi + 0xa0] */ FPUSH(R_F32((u32)(r_edi+0xa0u)));
    /* 004a9fd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9fd4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a9fd6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a9fd8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a9fda: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9fdc: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 004a9fe2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a9fe4: fstp dword ptr [edi + 0x9c] */ W_F32((u32)(r_edi+0x9cu), ST(0)); FPOP();
    /* 004a9fea: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
L_004a9ff0:; BB(0x004a9ff0);
    /* 004a9ff0: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a9ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a9ff5: mov ecx, edi */ r_ecx = r_edi;
    /* 004a9ff7: call 0x4a9740 */ r_esp -= 4; W32(r_esp, 0x4a9ffcu); f_004a9740();
    /* 004a9ffc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004a9fff: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004aa003: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004aa007: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004aa00b: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 004aa00f: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004aa013: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004aa017: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004aa01b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4aa020u); f_0082f9c4();
    /* 004aa020: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004aa024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa025: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4aa02au); f_00782868();
    /* 004aa02a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aa02b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004aa02f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004aa033: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004aa037: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004aa03b: mov ebx, dword ptr [edi + 0x90] */ r_ebx = R32((u32)(r_edi+0x90u));
    /* 004aa041: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004aa045: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004aa048: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004aa04a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004aa04e: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 004aa051: mov esi, 0 */ r_esi = 0x0u;
    /* 004aa056: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004aa05d: fild dword ptr [esp + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x84u)));
    /* 004aa064: fdivp st(4) */ ST(4) = ST(4) / ST(0); FPOP();
    /* 004aa066: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004aa068: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004aa06a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004aa06e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa070: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004aa072: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004aa074: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004aa076: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004aa07a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa07c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004aa080: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004aa084: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004aa088: jle 0x4aa0c6 */ if ((fZ||fS!=fO)) goto L_004aa0c6;
L_004aa08a:; BB(0x004aa08a);
    /* 004aa08a: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004aa08d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aa08f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aa091: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aa093: lea ebx, [edi + ebx + 0x48] */ r_ebx = (u32)(r_edi+r_ebx+0x48u);
    /* 004aa097: jmp 0x4aa0a4 */ goto L_004aa0a4;
L_004aa099:; BB(0x004aa099);
    /* 004aa099: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 004aa09c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004aa0a0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_004aa0a4:; BB(0x004aa0a4);
    /* 004aa0a4: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 004aa0a6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004aa0a9: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004aa0ac: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004aa0b0: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004aa0b3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4aa0b8u); f_0082ebac();
    /* 004aa0b8: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aa0bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aa0be: cmp esi, dword ptr [edi + 0x90] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x90u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aa0c4: jl 0x4aa099 */ if ((fS!=fO)) goto L_004aa099;
L_004aa0c6:; BB(0x004aa0c6);
    /* 004aa0c6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4aa0cbu); f_008587a5();
    /* 004aa0cb: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 004aa0d2: fild dword ptr [esp + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8cu)));
    /* 004aa0d9: fdiv dword ptr [0x904400] */ ST(0) = ST(0) / R_F32((u32)(0x904400u));
    /* 004aa0df: fmul dword ptr [0x904434] */ ST(0) = ST(0) * R_F32((u32)(0x904434u));
    /* 004aa0e5: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 004aa0eb: fadd dword ptr [0x904438] */ ST(0) = ST(0) + R_F32((u32)(0x904438u));
    /* 004aa0f1: mov edx, 1 */ r_edx = 0x1u;
    /* 004aa0f6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa0f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aa0fc: jle 0x4aa412 */ if ((fZ||fS!=fO)) goto L_004aa412;
L_004aa102:; BB(0x004aa102);
    /* 004aa102: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004aa105: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa107: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa109: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa10b: lea eax, [edi + eax + 0x4c] */ r_eax = (u32)(r_edi+r_eax+0x4cu);
L_004aa10f:; BB(0x004aa10f);
    /* 004aa10f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004aa111: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004aa113: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004aa115: mov ebx, dword ptr [edi + 0x90] */ r_ebx = R32((u32)(r_edi+0x90u));
    /* 004aa11b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aa11e: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa121: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004aa124: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aa126: jl 0x4aa10f */ if ((fS!=fO)) goto L_004aa10f;
L_004aa128:; BB(0x004aa128);
    /* 004aa128: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004aa12a:; BB(0x004aa12a);
    /* 004aa12a: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa12c: call 0x4a9560 */ r_esp -= 4; W32(r_esp, 0x4aa131u); f_004a9560();
    /* 004aa131: call 0x4a6edc */ r_esp -= 4; W32(r_esp, 0x4aa136u); f_004a6edc();
    /* 004aa136: mov esi, eax */ r_esi = r_eax;
    /* 004aa138: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa13a: je 0x4aa327 */ if (fZ) goto L_004aa327;
L_004aa140:; BB(0x004aa140);
    /* 004aa140: mov dword ptr [esp + 0x94], ebp */ W32((u32)(r_esp+0x94u), r_ebp);
    /* 004aa147: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004aa149:; BB(0x004aa149);
    /* 004aa149: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa14a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4aa14fu); f_0068d5a8();
    /* 004aa14f: mov ebp, eax */ r_ebp = r_eax;
    /* 004aa151: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aa154: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa156: je 0x4aa314 */ if (fZ) goto L_004aa314;
L_004aa15c:; BB(0x004aa15c);
    /* 004aa15c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004aa160: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa161: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa163: call 0x4a9740 */ r_esp -= 4; W32(r_esp, 0x4aa168u); f_004a9740();
    /* 004aa168: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004aa16c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa16d: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa16f: call 0x4a9758 */ r_esp -= 4; W32(r_esp, 0x4aa174u); f_004a9758();
    /* 004aa174: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004aa178: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004aa17c: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 004aa180: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004aa184: fsub dword ptr [esp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x2cu));
    /* 004aa188: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa18a: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004aa18e: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004aa192: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 004aa19a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004aa19e: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004aa1a2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004aa1a5: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004aa1a8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004aa1ac: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004aa1b0: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 004aa1b4: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 004aa1b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa1b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa1ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aa1bb: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x4aa1c0u); f_0083a0dc();
    /* 004aa1c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa1c2: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 004aa1c6: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 004aa1ca: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004aa1ce: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 004aa1d2: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004aa1d6: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 004aa1da: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 004aa1de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa1df: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4aa1e4u); f_00782868();
    /* 004aa1e4: fstp dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0)); FPOP();
    /* 004aa1eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aa1ee: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004aa1f2: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 004aa1f6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004aa1fa: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 004aa1fe: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004aa202: fsub dword ptr [esp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x2cu));
    /* 004aa206: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004aa208: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004aa20c: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 004aa210: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004aa214: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 004aa218: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 004aa21c: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4aa221u); f_0082f9e0();
    /* 004aa221: fcom dword ptr [0x9043fc] */ fx_compare(ST(0), R_F32((u32)(0x9043fcu))); 
    /* 004aa227: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa229: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa22a: jb 0x4aa2e9 */ if (fC) goto L_004aa2e9;
L_004aa230:; BB(0x004aa230);
    /* 004aa230: fcomp dword ptr [0x9043f8] */ fx_compare(ST(0), R_F32((u32)(0x9043f8u))); FPOP();
    /* 004aa236: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa238: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa239: je 0x4aa3a3 */ if (fZ) goto L_004aa3a3;
L_004aa23f:; BB(0x004aa23f);
    /* 004aa23f: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004aa243: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 004aa247: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004aa24b: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 004aa24f: mov dword ptr [esp + 0x7c], ebp */ W32((u32)(r_esp+0x7cu), r_ebp);
    /* 004aa253: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 004aa25a: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 004aa25e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4aa263u); f_0082df08();
    /* 004aa263: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa265: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 004aa269: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 004aa26d: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4aa272u); f_0082f9e0();
    /* 004aa272: fcomp dword ptr [0x9043f8] */ fx_compare(ST(0), R_F32((u32)(0x9043f8u))); FPOP();
    /* 004aa278: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa27a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa27b: je 0x4aa338 */ if (fZ) goto L_004aa338;
L_004aa281:; BB(0x004aa281);
    /* 004aa281: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004aa285: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa287: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 004aa28b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa28d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004aa28f: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004aa293: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa295: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004aa297: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa298: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aa29b: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4aa2a0u); f_0082dc9c();
    /* 004aa2a0: fcomp dword ptr [esp + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x98u))); FPOP();
    /* 004aa2a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa2a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa2aa: jbe 0x4aa303 */ if ((fC||fZ)) goto L_004aa303;
L_004aa2ac:; BB(0x004aa2ac);
    /* 004aa2ac: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004aa2b0: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 004aa2b7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004aa2b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa2bb: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aa2bf: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004aa2c3: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 004aa2c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa2c9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004aa2cb: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004aa2cf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004aa2d1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aa2d3: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004aa2d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa2d9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004aa2dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa2df: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004aa2e3: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004aa2e7: jmp 0x4aa303 */ goto L_004aa303;
L_004aa2e9:; BB(0x004aa2e9);
    /* 004aa2e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa2eb: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004aa2ef: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004aa2f3: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 004aa2f7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004aa2fb: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 004aa2ff: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
L_004aa303:; BB(0x004aa303);
    /* 004aa303: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 004aa307: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa30c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa30d: mov ecx, esi */ r_ecx = r_esi;
    /* 004aa30f: call 0x4a51c0 */ r_esp -= 4; W32(r_esp, 0x4aa314u); f_004a51c0();
L_004aa314:; BB(0x004aa314);
    /* 004aa314: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aa317: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aa31a: jl 0x4aa149 */ if ((fS!=fO)) goto L_004aa149;
L_004aa320:; BB(0x004aa320);
    /* 004aa320: mov ebp, dword ptr [esp + 0x94] */ r_ebp = R32((u32)(r_esp+0x94u));
L_004aa327:; BB(0x004aa327);
    /* 004aa327: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa329: call 0x4a94a4 */ r_esp -= 4; W32(r_esp, 0x4aa32eu); f_004a94a4();
    /* 004aa32e: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aa334: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aa335: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aa336: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aa337: ret  */ FN_RET(0x004a9f44); r_esp += 4; return;
L_004aa338:; BB(0x004aa338);
    /* 004aa338: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004aa33c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa33e: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 004aa342: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa344: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004aa346: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004aa34a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa34c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004aa34e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa34f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aa352: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4aa357u); f_0082dc9c();
    /* 004aa357: fcomp dword ptr [esp + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x98u))); FPOP();
    /* 004aa35e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa360: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa361: jbe 0x4aa303 */ if ((fC||fZ)) goto L_004aa303;
L_004aa363:; BB(0x004aa363);
    /* 004aa363: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004aa367: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 004aa36e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004aa370: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa372: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aa376: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004aa37a: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 004aa37e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa380: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004aa382: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004aa386: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004aa388: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aa38a: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004aa38e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa390: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004aa394: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa396: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004aa39a: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004aa39e: jmp 0x4aa303 */ goto L_004aa303;
L_004aa3a3:; BB(0x004aa3a3);
    /* 004aa3a3: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004aa3a7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa3a9: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 004aa3ad: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa3af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004aa3b1: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004aa3b5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004aa3b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004aa3b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa3ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aa3bd: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4aa3c2u); f_0082dc9c();
    /* 004aa3c2: fcomp dword ptr [esp + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x98u))); FPOP();
    /* 004aa3c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa3cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa3cc: jbe 0x4aa303 */ if ((fC||fZ)) goto L_004aa303;
L_004aa3d2:; BB(0x004aa3d2);
    /* 004aa3d2: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004aa3d6: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 004aa3dd: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004aa3df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa3e1: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aa3e5: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004aa3e9: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 004aa3ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa3ef: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004aa3f1: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004aa3f5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004aa3f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aa3f9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004aa3fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa3ff: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004aa403: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa405: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004aa409: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004aa40d: jmp 0x4aa303 */ goto L_004aa303;
L_004aa412:; BB(0x004aa412);
    /* 004aa412: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa414: jmp 0x4aa12a */ goto L_004aa12a;
}

