#include "protos.h"

void f_007430fc(void) /* sub_7430FC */
{
    FN_ENTER(0x007430fc);
    /* 007430fc: mov dword ptr [0xa9aa2c], 0x3f800000 */ W32((u32)(0xa9aa2cu), 0x3f800000u);
    /* 00743106: mov dword ptr [0xa9aa30], 0x41000000 */ W32((u32)(0xa9aa30u), 0x41000000u);
    /* 00743110: mov dword ptr [0xa9aa34], 0x3fc00000 */ W32((u32)(0xa9aa34u), 0x3fc00000u);
    /* 0074311a: ret  */ FN_RET(0x007430fc); r_esp += 4; return;
}

void f_0074311c(void) /* sub_74311C */
{
    FN_ENTER(0x0074311c);
    /* 0074311c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074311d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074311f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743121: call 0x743140 */ r_esp -= 4; W32(r_esp, 0x743126u); f_00743140();
    /* 00743126: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074312a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074312c: jne 0x743132 */ if (!fZ) goto L_00743132;
L_0074312e:; BB(0x0074312e);
    /* 0074312e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074312f: ret 4 */ FN_RET(0x0074311c); r_esp += 8; return;
L_00743132:; BB(0x00743132);
    /* 00743132: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743133: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x743138u); f_005c2f74();
    /* 00743138: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074313a: ret 4 */ FN_RET(0x0074311c); r_esp += 8; return;
}

void f_00743140(void) /* sub_743140 */
{
    FN_ENTER(0x00743140);
    /* 00743140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743141: mov ebp, esp */ r_ebp = r_esp;
    /* 00743143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00743145: push 0x8f2328 */ { u32 v = 0x8f2328u; r_esp -= 4; W32(r_esp, v); }
    /* 0074314a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00743150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00743158: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074315b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074315e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00743161: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00743164: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00743167: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074316a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074316d: mov dword ptr [ecx], 0xb416e0 */ W32((u32)(r_ecx), 0xb416e0u);
    /* 00743173: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074317a: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x74317fu); f_00710c28();
    /* 0074317f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00743182: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00743189: mov esp, ebp */ r_esp = r_ebp;
    /* 0074318b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074318c: ret  */ FN_RET(0x00743140); r_esp += 4; return;
}

void f_00743190(void) /* sub_743190 */
{
    FN_ENTER(0x00743190);
    /* 00743190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743191: mov ebp, esp */ r_ebp = r_esp;
    /* 00743193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00743195: push 0x8f2344 */ { u32 v = 0x8f2344u; r_esp -= 4; W32(r_esp, v); }
    /* 0074319a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007431a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007431a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007431a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007431ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007431ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007431b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007431b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007431b7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007431ba: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007431bd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007431bf: push 0x9f3958 */ { u32 v = 0x9f3958u; r_esp -= 4; W32(r_esp, v); }
    /* 007431c4: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7431c9u); f_00710d30();
    /* 007431c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007431d0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007431d3: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 007431d6: mov dword ptr [edx], 0xb416e0 */ W32((u32)(r_edx), 0xb416e0u);
    /* 007431dc: mov eax, dword ptr [0x9f3954] */ r_eax = R32((u32)(0x9f3954u));
    /* 007431e1: mov byte ptr [edx + 0x60], 0 */ W8((u32)(r_edx+0x60u), 0x0u);
    /* 007431e5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007431e8: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 007431eb: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 007431ed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007431ef: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7431f4u); f_00792fe8();
    /* 007431f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007431f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007431f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007431fa: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x7431ffu); f_0072db50();
    /* 007431ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743202: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00743205: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00743208: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074320f: mov esp, ebp */ r_esp = r_ebp;
    /* 00743211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743212: ret 4 */ FN_RET(0x00743190); r_esp += 8; return;
}

void f_00743218(void) /* sub_743218 */
{
    FN_ENTER(0x00743218);
    /* 00743218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00743219: mov esi, ecx */ r_esi = r_ecx;
    /* 0074321b: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0074321e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00743220: jne 0x743229 */ if (!fZ) goto L_00743229;
L_00743222:; BB(0x00743222);
    /* 00743222: mov dword ptr [esi + 0x5c], 0x1000000 */ W32((u32)(r_esi+0x5cu), 0x1000000u);
L_00743229:; BB(0x00743229);
    /* 00743229: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x74322eu); f_00694c6c();
    /* 0074322e: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00743234: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00743237: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00743239: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074323b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074323d: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074323f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00743246: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00743247: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74324cu); f_007c1160();
    /* 0074324c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074324e: je 0x743257 */ if (fZ) goto L_00743257;
L_00743250:; BB(0x00743250);
    /* 00743250: mov ecx, esi */ r_ecx = r_esi;
    /* 00743252: call 0x743274 */ r_esp -= 4; W32(r_esp, 0x743257u); f_00743274();
L_00743257:; BB(0x00743257);
    /* 00743257: mov ecx, esi */ r_ecx = r_esi;
    /* 00743259: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x74325eu); f_00710db4();
    /* 0074325e: mov ecx, esi */ r_ecx = r_esi;
    /* 00743260: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x743265u); f_00710ee4();
    /* 00743265: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00743268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743269: mov ecx, esi */ r_ecx = r_esi;
    /* 0074326b: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x743270u); f_0072a5ec();
    /* 00743270: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743271: ret  */ FN_RET(0x00743218); r_esp += 4; return;
}

void f_00743274(void) /* sub_743274 */
{
    FN_ENTER(0x00743274);
    /* 00743274: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743275: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00743277: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00743279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074327a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074327b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074327c: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00743281: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x743286u); f_00814298();
    /* 00743286: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 0074328a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074328f: mov byte ptr [ebx + 0x60], al */ W8((u32)(r_ebx+0x60u), (u8)r_eax);
    /* 00743292: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743295: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743296: ret  */ FN_RET(0x00743274); r_esp += 4; return;
}

void f_00743298(void) /* sub_743298 */
{
    FN_ENTER(0x00743298);
    /* 00743298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743299: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074329a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074329d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074329f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007432a1: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7432a6u); f_00712644();
    /* 007432a6: mov edi, eax */ r_edi = r_eax;
    /* 007432a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007432a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007432ab: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7432b0u); f_00710f80();
    /* 007432b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007432b1: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 007432b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007432b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007432b7: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7432bcu); f_0072a648();
    /* 007432bc: call 0x783000 */ r_esp -= 4; W32(r_esp, 0x7432c1u); f_00783000();
    /* 007432c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007432c3: je 0x7432ef */ if (fZ) goto L_007432ef;
L_007432c5:; BB(0x007432c5);
    /* 007432c5: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 007432c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007432ca: jle 0x74330e */ if ((fZ||fS!=fO)) goto L_0074330e;
L_007432cc:; BB(0x007432cc);
    /* 007432cc: fld dword ptr [0x9730bc] */ FPUSH(R_F32((u32)(0x9730bcu)));
    /* 007432d2: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 007432d5: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 007432d8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007432db: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007432df: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007432e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007432e3: call 0x78304c */ r_esp -= 4; W32(r_esp, 0x7432e8u); f_0078304c();
    /* 007432e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007432e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007432ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007432ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007432ee: ret  */ FN_RET(0x00743298); r_esp += 4; return;
L_007432ef:; BB(0x007432ef);
    /* 007432ef: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007432f1: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007432f3: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7432f8u); f_00792fe8();
    /* 007432f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007432fa: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007432ff: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00743302: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00743304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743305: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743306: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x74330bu); f_0071d58c();
    /* 0074330b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074330e:; BB(0x0074330e);
    /* 0074330e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743311: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743312: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743313: ret  */ FN_RET(0x00743298); r_esp += 4; return;
}

void f_00743314(void) /* sub_743314 */
{
    FN_ENTER(0x00743314);
    /* 00743314: mov dword ptr [0xa9aa3c], 0x3f800000 */ W32((u32)(0xa9aa3cu), 0x3f800000u);
    /* 0074331e: mov dword ptr [0xa9aa40], 0x41000000 */ W32((u32)(0xa9aa40u), 0x41000000u);
    /* 00743328: mov dword ptr [0xa9aa44], 0x3fc00000 */ W32((u32)(0xa9aa44u), 0x3fc00000u);
    /* 00743332: ret  */ FN_RET(0x00743314); r_esp += 4; return;
}

void f_00743334(void) /* sub_743334 */
{
    FN_ENTER(0x00743334);
    /* 00743334: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743335: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00743337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743339: call 0x743358 */ r_esp -= 4; W32(r_esp, 0x74333eu); f_00743358();
    /* 0074333e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00743342: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00743344: jne 0x74334a */ if (!fZ) goto L_0074334a;
L_00743346:; BB(0x00743346);
    /* 00743346: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743347: ret 4 */ FN_RET(0x00743334); r_esp += 8; return;
L_0074334a:; BB(0x0074334a);
    /* 0074334a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074334b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x743350u); f_005c2f74();
    /* 00743350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743351: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743352: ret 4 */ FN_RET(0x00743334); r_esp += 8; return;
}

void f_00743358(void) /* sub_743358 */
{
    FN_ENTER(0x00743358);
    /* 00743358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743359: mov ebp, esp */ r_ebp = r_esp;
    /* 0074335b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074335d: push 0x8f2360 */ { u32 v = 0x8f2360u; r_esp -= 4; W32(r_esp, v); }
    /* 00743362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00743368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00743370: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00743376: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00743379: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074337c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074337f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00743382: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743385: mov dword ptr [ecx], 0xb41740 */ W32((u32)(r_ecx), 0xb41740u);
    /* 0074338b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00743392: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x743397u); f_00710c28();
    /* 00743397: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074339a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007433a1: mov esp, ebp */ r_esp = r_ebp;
    /* 007433a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007433a4: ret  */ FN_RET(0x00743358); r_esp += 4; return;
}

void f_007433a8(void) /* sub_7433A8 */
{
    FN_ENTER(0x007433a8);
    /* 007433a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007433a9: mov ebp, esp */ r_ebp = r_esp;
    /* 007433ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007433ad: push 0x8f237c */ { u32 v = 0x8f237cu; r_esp -= 4; W32(r_esp, v); }
    /* 007433b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007433b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007433b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007433c0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007433c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007433c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007433c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007433cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007433cf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007433d2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 007433d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007433d7: push 0x9f3a0c */ { u32 v = 0x9f3a0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007433dc: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7433e1u); f_00710d30();
    /* 007433e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007433e8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007433eb: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 007433ee: mov dword ptr [ecx], 0xb41740 */ W32((u32)(r_ecx), 0xb41740u);
    /* 007433f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007433f6: mov esi, dword ptr [0x9f3a08] */ r_esi = R32((u32)(0x9f3a08u));
    /* 007433fc: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 007433ff: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
    /* 00743402: mov byte ptr [ecx + 0x61], al */ W8((u32)(r_ecx+0x61u), (u8)r_eax);
    /* 00743405: mov edx, 1 */ r_edx = 0x1u;
    /* 0074340a: mov word ptr [ecx + 0x62], dx */ W16((u32)(r_ecx+0x62u), (u16)r_edx);
    /* 0074340e: mov word ptr [ecx + 0x64], dx */ W16((u32)(r_ecx+0x64u), (u16)r_edx);
    /* 00743412: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00743414: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743417: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x74341cu); f_007ac344();
    /* 0074341c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074341d: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00743422: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743424: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00743427: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0074342a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0074342d: fadd dword ptr [eax*4 + 0x9730c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9730c8u));
    /* 00743434: fmul dword ptr [0x9730f4] */ ST(0) = ST(0) * R_F32((u32)(0x9730f4u));
    /* 0074343a: fadd dword ptr [0x9730f8] */ ST(0) = ST(0) + R_F32((u32)(0x9730f8u));
    /* 00743440: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00743443: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x743448u); f_0072ddf4();
    /* 00743448: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0074344b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0074344e: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00743451: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743454: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x743459u); f_007ac344();
    /* 00743459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074345a: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0074345f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743461: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00743464: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 00743467: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0074346a: fadd dword ptr [eax*4 + 0x9730c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9730c8u));
    /* 00743471: fmul dword ptr [0x9730f4] */ ST(0) = ST(0) * R_F32((u32)(0x9730f4u));
    /* 00743477: fadd dword ptr [0x9730f8] */ ST(0) = ST(0) + R_F32((u32)(0x9730f8u));
    /* 0074347d: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00743480: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x743485u); f_0072ddf4();
    /* 00743485: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00743488: call 0x7434a8 */ r_esp -= 4; W32(r_esp, 0x74348du); f_007434a8();
    /* 0074348d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00743490: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00743493: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00743496: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00743499: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007434a0: mov esp, ebp */ r_esp = r_ebp;
    /* 007434a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007434a3: ret 4 */ FN_RET(0x007433a8); r_esp += 8; return;
}

void f_007434a8(void) /* sub_7434A8 */
{
    FN_ENTER(0x007434a8);
    /* 007434a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007434a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007434aa: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007434ac: mov esi, dword ptr [0xa95df0] */ r_esi = R32((u32)(0xa95df0u));
    /* 007434b2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007434b4: je 0x7434d1 */ if (fZ) goto L_007434d1;
L_007434b6:; BB(0x007434b6);
    /* 007434b6: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 007434ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007434bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007434bd: call 0x743524 */ r_esp -= 4; W32(r_esp, 0x7434c2u); f_00743524();
    /* 007434c2: movsx eax, byte ptr [esi + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x6u));
    /* 007434c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007434c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007434c9: call 0x74356c */ r_esp -= 4; W32(r_esp, 0x7434ceu); f_0074356c();
L_007434ce:; BB(0x007434ce);
    /* 007434ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007434cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007434d0: ret  */ FN_RET(0x007434a8); r_esp += 4; return;
L_007434d1:; BB(0x007434d1);
    /* 007434d1: movsx eax, word ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x62u));
    /* 007434d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007434d7: je 0x7434f8 */ if (fZ) goto L_007434f8;
L_007434d9:; BB(0x007434d9);
    /* 007434d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007434db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007434dc: mov word ptr [ebx + 0x62], ax */ W16((u32)(r_ebx+0x62u), (u16)r_eax);
    /* 007434e0: call 0x814730 */ r_esp -= 4; W32(r_esp, 0x7434e5u); f_00814730();
    /* 007434e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007434e6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007434e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007434ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007434ee: mov dword ptr [ecx + 0x24], 0x437a0000 */ W32((u32)(r_ecx+0x24u), 0x437a0000u);
    /* 007434f5: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x7434f8u); call_ind(t); }
L_007434f8:; BB(0x007434f8);
    /* 007434f8: movsx eax, word ptr [ebx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x64u));
    /* 007434fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007434fe: je 0x7434ce */ if (fZ) goto L_007434ce;
L_00743500:; BB(0x00743500);
    /* 00743500: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00743502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743503: mov word ptr [ebx + 0x64], ax */ W16((u32)(r_ebx+0x64u), (u16)r_eax);
    /* 00743507: call 0x8147c4 */ r_esp -= 4; W32(r_esp, 0x74350cu); f_008147c4();
    /* 0074350c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074350d: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00743510: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00743513: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00743515: mov dword ptr [ecx + 0x24], 0x42c80000 */ W32((u32)(r_ecx+0x24u), 0x42c80000u);
    /* 0074351c: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x74351fu); call_ind(t); }
    /* 0074351f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743520: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743521: ret  */ FN_RET(0x007434a8); r_esp += 4; return;
}

void f_00743524(void) /* sub_743524 */
{
    FN_ENTER(0x00743524);
    /* 00743524: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00743525: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743526: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743529: mov esi, ecx */ r_esi = r_ecx;
    /* 0074352b: movsx ebp, word ptr [esp + 0x14] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00743530: cmp bp, word ptr [esi + 0x62] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_esi+0x62u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00743534: jne 0x74353e */ if (!fZ) goto L_0074353e;
L_00743536:; BB(0x00743536);
    /* 00743536: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074353a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074353b: ret 4 */ FN_RET(0x00743524); r_esp += 8; return;
L_0074353e:; BB(0x0074353e);
    /* 0074353e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074353f: mov word ptr [esi + 0x62], bp */ W16((u32)(r_esi+0x62u), (u16)r_ebp);
    /* 00743543: call 0x814730 */ r_esp -= 4; W32(r_esp, 0x743548u); f_00814730();
    /* 00743548: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743549: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0074354c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0074354f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00743551: lea ebp, [ebp + 0xfa] */ r_ebp = (u32)(r_ebp+0xfau);
    /* 00743557: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074355a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0074355d: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00743560: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x743563u); call_ind(t); }
    /* 00743563: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743567: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743568: ret 4 */ FN_RET(0x00743524); r_esp += 8; return;
}

void f_0074356c(void) /* sub_74356C */
{
    FN_ENTER(0x0074356c);
    /* 0074356c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074356d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074356e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743571: mov esi, ecx */ r_esi = r_ecx;
    /* 00743573: movsx ebp, word ptr [esp + 0x14] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00743578: cmp bp, word ptr [esi + 0x64] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_esi+0x64u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0074357c: jne 0x743586 */ if (!fZ) goto L_00743586;
L_0074357e:; BB(0x0074357e);
    /* 0074357e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743582: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743583: ret 4 */ FN_RET(0x0074356c); r_esp += 8; return;
L_00743586:; BB(0x00743586);
    /* 00743586: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743587: mov word ptr [esi + 0x64], bp */ W16((u32)(r_esi+0x64u), (u16)r_ebp);
    /* 0074358b: call 0x8147c4 */ r_esp -= 4; W32(r_esp, 0x743590u); f_008147c4();
    /* 00743590: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743591: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00743594: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00743597: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00743599: lea ebp, [ebp + 0x64] */ r_ebp = (u32)(r_ebp+0x64u);
    /* 0074359c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074359f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007435a2: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 007435a5: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x7435a8u); call_ind(t); }
    /* 007435a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007435ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007435ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007435ad: ret 4 */ FN_RET(0x0074356c); r_esp += 8; return;
}

void f_007435b0(void) /* sub_7435B0 */
{
    FN_ENTER(0x007435b0);
    /* 007435b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007435b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007435b3: movzx eax, byte ptr [ebp + 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0x60u));
    /* 007435b7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007435b9: jne 0x743607 */ if (!fZ) goto L_00743607;
L_007435bb:; BB(0x007435bb);
    /* 007435bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007435bd: call 0x743624 */ r_esp -= 4; W32(r_esp, 0x7435c2u); f_00743624();
    /* 007435c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007435c4: call 0x7436b8 */ r_esp -= 4; W32(r_esp, 0x7435c9u); f_007436b8();
    /* 007435c9: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007435ce: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007435d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007435d5: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 007435da: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7435dfu); f_007c1160();
    /* 007435df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007435e1: je 0x7435ea */ if (fZ) goto L_007435ea;
L_007435e3:; BB(0x007435e3);
    /* 007435e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007435e5: call 0x743798 */ r_esp -= 4; W32(r_esp, 0x7435eau); f_00743798();
L_007435ea:; BB(0x007435ea);
    /* 007435ea: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 007435ef: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007435f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007435f2: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 007435f7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7435fcu); f_007c1160();
    /* 007435fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007435fe: je 0x743607 */ if (fZ) goto L_00743607;
L_00743600:; BB(0x00743600);
    /* 00743600: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00743602: call 0x7437bc */ r_esp -= 4; W32(r_esp, 0x743607u); f_007437bc();
L_00743607:; BB(0x00743607);
    /* 00743607: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00743609: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x74360eu); f_00710db4();
    /* 0074360e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00743610: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x743615u); f_00710ee4();
    /* 00743615: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 00743618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074361b: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x743620u); f_0072a5ec();
    /* 00743620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743621: ret  */ FN_RET(0x007435b0); r_esp += 4; return;
}

void f_00743624(void) /* sub_743624 */
{
    FN_ENTER(0x00743624);
    /* 00743624: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743625: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00743627: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0074362c: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 00743631: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00743637: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00743639: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074363b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074363c: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x743641u); f_007c0c6c();
    /* 00743641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00743643: jne 0x743647 */ if (!fZ) goto L_00743647;
L_00743645:; BB(0x00743645);
    /* 00743645: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743646: ret  */ FN_RET(0x00743624); r_esp += 4; return;
L_00743647:; BB(0x00743647);
    /* 00743647: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00743649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074364a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074364b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074364c: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00743651: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x743656u); f_00814298();
    /* 00743656: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00743659: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074365b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074365d: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 00743662: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743668: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x74366du); f_007c0c6c();
    /* 0074366d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074366f: je 0x743675 */ if (fZ) goto L_00743675;
L_00743671:; BB(0x00743671);
    /* 00743671: add byte ptr [ebx + 0x61], 0xff */ { u32 ad = (u32)(r_ebx+0x61u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00743675:; BB(0x00743675);
    /* 00743675: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00743677: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00743679: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0074367e: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743684: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x743689u); f_007c0c6c();
    /* 00743689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074368b: jne 0x743693 */ if (!fZ) goto L_00743693;
L_0074368d:; BB(0x0074368d);
    /* 0074368d: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00743691: jmp 0x74369a */ goto L_0074369a;
L_00743693:; BB(0x00743693);
    /* 00743693: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00743697: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0074369a:; BB(0x0074369a);
    /* 0074369a: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0074369d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074369f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007436a1: mov edx, 1 */ r_edx = 0x1u;
    /* 007436a6: jg 0x7436aa */ if ((!fZ&&fS==fO)) goto L_007436aa;
L_007436a8:; BB(0x007436a8);
    /* 007436a8: mov ecx, eax */ r_ecx = r_eax;
L_007436aa:; BB(0x007436aa);
    /* 007436aa: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007436ad: jl 0x7436b1 */ if ((fS!=fO)) goto L_007436b1;
L_007436af:; BB(0x007436af);
    /* 007436af: mov ecx, edx */ r_ecx = r_edx;
L_007436b1:; BB(0x007436b1);
    /* 007436b1: mov byte ptr [ebx + 0x61], cl */ W8((u32)(r_ebx+0x61u), (u8)r_ecx);
    /* 007436b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007436b5: ret  */ FN_RET(0x00743624); r_esp += 4; return;
}

void f_007436b8(void) /* sub_7436B8 */
{
    FN_ENTER(0x007436b8);
    /* 007436b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007436b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007436ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007436bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007436bc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007436bf: mov edi, ecx */ r_edi = r_ecx;
    /* 007436c1: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 007436c6: mov eax, dword ptr [0xa0f670] */ r_eax = R32((u32)(0xa0f670u));
    /* 007436cb: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007436d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007436d2: call 0x7c1140 */ r_esp -= 4; W32(r_esp, 0x7436d7u); f_007c1140();
    /* 007436d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007436d9: jne 0x7436e3 */ if (!fZ) goto L_007436e3;
L_007436db:; BB(0x007436db);
    /* 007436db: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007436de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007436df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007436e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007436e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007436e2: ret  */ FN_RET(0x007436b8); r_esp += 4; return;
L_007436e3:; BB(0x007436e3);
    /* 007436e3: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 007436e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007436e9: je 0x7436f6 */ if (fZ) goto L_007436f6;
L_007436eb:; BB(0x007436eb);
    /* 007436eb: movsx ebp, word ptr [edi + 0x64] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x64u));
    /* 007436ef: mov ebx, 0x64 */ r_ebx = 0x64u;
    /* 007436f4: jmp 0x7436ff */ goto L_007436ff;
L_007436f6:; BB(0x007436f6);
    /* 007436f6: movsx ebp, word ptr [edi + 0x62] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x62u));
    /* 007436fa: mov ebx, 0xfa */ r_ebx = 0xfau;
L_007436ff:; BB(0x007436ff);
    /* 007436ff: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00743702: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00743705: fmul dword ptr [0x9730e4] */ ST(0) = ST(0) * R_F32((u32)(0x9730e4u));
    /* 0074370b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0074370f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00743714: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00743719: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0074371d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00743721: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00743725: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00743729: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0074372e: movsx esi, word ptr [esp + 0x18] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 00743733: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743739: call 0x7c1140 */ r_esp -= 4; W32(r_esp, 0x74373eu); f_007c1140();
    /* 0074373e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743740: je 0x743747 */ if (fZ) goto L_00743747;
L_00743742:; BB(0x00743742);
    /* 00743742: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00743744: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
L_00743747:; BB(0x00743747);
    /* 00743747: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074374d: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 00743752: call 0x7c1140 */ r_esp -= 4; W32(r_esp, 0x743757u); f_007c1140();
    /* 00743757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743759: je 0x743760 */ if (fZ) goto L_00743760;
L_0074375b:; BB(0x0074375b);
    /* 0074375b: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0074375d: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
L_00743760:; BB(0x00743760);
    /* 00743760: movsx edx, byte ptr [edi + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 00743764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00743766: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00743768: jl 0x74376c */ if ((fS!=fO)) goto L_0074376c;
L_0074376a:; BB(0x0074376a);
    /* 0074376a: mov ebp, eax */ r_ebp = r_eax;
L_0074376c:; BB(0x0074376c);
    /* 0074376c: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0074376e: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00743770: jg 0x743774 */ if ((!fZ&&fS==fO)) goto L_00743774;
L_00743772:; BB(0x00743772);
    /* 00743772: mov ebx, ebp */ r_ebx = r_ebp;
L_00743774:; BB(0x00743774);
    /* 00743774: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743776: je 0x743788 */ if (fZ) goto L_00743788;
L_00743778:; BB(0x00743778);
    /* 00743778: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743779: mov ecx, edi */ r_ecx = r_edi;
    /* 0074377b: call 0x74356c */ r_esp -= 4; W32(r_esp, 0x743780u); f_0074356c();
    /* 00743780: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743783: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743785: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743786: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743787: ret  */ FN_RET(0x007436b8); r_esp += 4; return;
L_00743788:; BB(0x00743788);
    /* 00743788: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743789: mov ecx, edi */ r_ecx = r_edi;
    /* 0074378b: call 0x743524 */ r_esp -= 4; W32(r_esp, 0x743790u); f_00743524();
    /* 00743790: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743793: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743795: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743796: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743797: ret  */ FN_RET(0x007436b8); r_esp += 4; return;
}

void f_00743798(void) /* sub_743798 */
{
    FN_ENTER(0x00743798);
    /* 00743798: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743799: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074379b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074379d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074379e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074379f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007437a0: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 007437a5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7437aau); f_00814298();
    /* 007437aa: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 007437ae: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007437b3: mov byte ptr [ebx + 0x60], al */ W8((u32)(r_ebx+0x60u), (u8)r_eax);
    /* 007437b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007437b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007437ba: ret  */ FN_RET(0x00743798); r_esp += 4; return;
}

void f_007437bc(void) /* sub_7437BC */
{
    FN_ENTER(0x007437bc);
    /* 007437bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007437bd: mov edi, ecx */ r_edi = r_ecx;
    /* 007437bf: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 007437c3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007437c5: je 0x7437c9 */ if (fZ) goto L_007437c9;
L_007437c7:; BB(0x007437c7);
    /* 007437c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007437c8: ret  */ FN_RET(0x007437bc); r_esp += 4; return;
L_007437c9:; BB(0x007437c9);
    /* 007437c9: mov ecx, edi */ r_ecx = r_edi;
    /* 007437cb: call 0x7434a8 */ r_esp -= 4; W32(r_esp, 0x7437d0u); f_007434a8();
    /* 007437d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007437d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007437d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007437d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007437d5: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007437da: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7437dfu); f_00814298();
    /* 007437df: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 007437e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007437e8: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 007437eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007437ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007437ef: ret  */ FN_RET(0x007437bc); r_esp += 4; return;
}

void f_007437f0(void) /* sub_7437F0 */
{
    FN_ENTER(0x007437f0);
    /* 007437f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007437f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007437f2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007437f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007437f6: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7437fbu); f_00712644();
    /* 007437fb: mov esi, eax */ r_esi = r_eax;
    /* 007437fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007437fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00743800: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x743805u); f_00710f80();
    /* 00743805: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00743806: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 00743809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074380a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074380c: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x743811u); f_0072a648();
    /* 00743811: fld dword ptr [0x9730e0] */ FPUSH(R_F32((u32)(0x9730e0u)));
    /* 00743817: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 0074381a: fld dword ptr [0x9730dc] */ FPUSH(R_F32((u32)(0x9730dcu)));
    /* 00743820: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00743823: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00743825: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00743828: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0074382b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074382c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074382e: call 0x743838 */ r_esp -= 4; W32(r_esp, 0x743833u); f_00743838();
    /* 00743833: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743834: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743835: ret  */ FN_RET(0x007437f0); r_esp += 4; return;
}

void f_00743838(void) /* sub_743838 */
{
    FN_ENTER(0x00743838);
    /* 00743838: movsx edx, byte ptr [ecx + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 0074383c: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0074383f: movzx ecx, byte ptr [ecx + 0x60] */ r_ecx = (u32)R8((u32)(r_ecx+0x60u));
    /* 00743843: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00743846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00743847: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074384a: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074384e: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x743853u); f_007120ec();
    /* 00743853: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743856: ret 4 */ FN_RET(0x00743838); r_esp += 8; return;
}

void f_0074385c(void) /* sub_74385C */
{
    FN_ENTER(0x0074385c);
    /* 0074385c: mov dword ptr [0xa9aa4c], 0x3f800000 */ W32((u32)(0xa9aa4cu), 0x3f800000u);
    /* 00743866: mov dword ptr [0xa9aa50], 0x41000000 */ W32((u32)(0xa9aa50u), 0x41000000u);
    /* 00743870: mov dword ptr [0xa9aa54], 0x3fc00000 */ W32((u32)(0xa9aa54u), 0x3fc00000u);
    /* 0074387a: ret  */ FN_RET(0x0074385c); r_esp += 4; return;
}

void f_0074387c(void) /* sub_74387C */
{
    FN_ENTER(0x0074387c);
    /* 0074387c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074387d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074387f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743881: call 0x7438a0 */ r_esp -= 4; W32(r_esp, 0x743886u); f_007438a0();
    /* 00743886: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074388a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074388c: jne 0x743892 */ if (!fZ) goto L_00743892;
L_0074388e:; BB(0x0074388e);
    /* 0074388e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074388f: ret 4 */ FN_RET(0x0074387c); r_esp += 8; return;
L_00743892:; BB(0x00743892);
    /* 00743892: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743893: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x743898u); f_005c2f74();
    /* 00743898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743899: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074389a: ret 4 */ FN_RET(0x0074387c); r_esp += 8; return;
}

void f_007438a0(void) /* sub_7438A0 */
{
    FN_ENTER(0x007438a0);
    /* 007438a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007438a1: mov ebp, esp */ r_ebp = r_esp;
    /* 007438a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007438a5: push 0x8f2398 */ { u32 v = 0x8f2398u; r_esp -= 4; W32(r_esp, v); }
    /* 007438aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007438b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007438b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007438b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007438bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007438be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007438c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007438c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007438c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007438ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007438cd: mov dword ptr [ecx], 0xb417a0 */ W32((u32)(r_ecx), 0xb417a0u);
    /* 007438d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007438da: call 0x7421c4 */ r_esp -= 4; W32(r_esp, 0x7438dfu); f_007421c4();
    /* 007438df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007438e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007438e9: mov esp, ebp */ r_esp = r_ebp;
    /* 007438eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007438ec: ret  */ FN_RET(0x007438a0); r_esp += 4; return;
}

void f_007438f0(void) /* sub_7438F0 */
{
    FN_ENTER(0x007438f0);
    /* 007438f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007438f1: mov ebp, esp */ r_ebp = r_esp;
    /* 007438f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007438f5: push 0x8f23c0 */ { u32 v = 0x8f23c0u; r_esp -= 4; W32(r_esp, v); }
    /* 007438fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00743900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743901: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00743908: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074390b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074390e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00743911: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00743914: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00743917: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00743919: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74391eu); f_0073ec50();
    /* 0074391e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00743921: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00743928: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074392a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74392fu); f_005caba4();
    /* 0074392f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00743932: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00743935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743937: je 0x743973 */ if (fZ) goto L_00743973;
L_00743939:; BB(0x00743939);
    /* 00743939: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00743940: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00743947: push 0x9f3c04 */ { u32 v = 0x9f3c04u; r_esp -= 4; W32(r_esp, v); }
    /* 0074394c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074394f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00743952: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00743955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743956: call 0x743978 */ r_esp -= 4; W32(r_esp, 0x74395bu); f_00743978();
    /* 0074395b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074395e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00743965:; BB(0x00743965);
    /* 00743965: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00743968: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074396f: mov esp, ebp */ r_esp = r_ebp;
    /* 00743971: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743972: ret  */ FN_RET(0x007438f0); r_esp += 4; return;
L_00743973:; BB(0x00743973);
    /* 00743973: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00743975: jmp 0x743965 */ goto L_00743965;
}

void f_00743978(void) /* sub_743978 */
{
    FN_ENTER(0x00743978);
    /* 00743978: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743979: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074397b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074397f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743983: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00743987: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743989: call 0x742174 */ r_esp -= 4; W32(r_esp, 0x74398eu); f_00742174();
    /* 0074398e: mov dword ptr [ebx], 0xb417a0 */ W32((u32)(r_ebx), 0xb417a0u);
    /* 00743994: mov edx, dword ptr [0x9f3c00] */ r_edx = R32((u32)(0x9f3c00u));
    /* 0074399a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0074399d: mov eax, ebx */ r_eax = r_ebx;
    /* 0074399f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007439a0: ret 0xc */ FN_RET(0x00743978); r_esp += 16; return;
}

void f_007439a4(void) /* sub_7439A4 */
{
    FN_ENTER(0x007439a4);
    /* 007439a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007439a5: mov esi, ecx */ r_esi = r_ecx;
    /* 007439a7: mov ecx, esi */ r_ecx = r_esi;
    /* 007439a9: call 0x7439e8 */ r_esp -= 4; W32(r_esp, 0x7439aeu); f_007439e8();
    /* 007439ae: mov ecx, esi */ r_ecx = r_esi;
    /* 007439b0: call 0x742430 */ r_esp -= 4; W32(r_esp, 0x7439b5u); f_00742430();
    /* 007439b5: mov ecx, esi */ r_ecx = r_esi;
    /* 007439b7: call 0x74253c */ r_esp -= 4; W32(r_esp, 0x7439bcu); f_0074253c();
    /* 007439bc: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 007439be: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7439c3u); f_0073ec50();
    /* 007439c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007439c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007439c5: mov ecx, esi */ r_ecx = r_esi;
    /* 007439c7: call 0x7426d8 */ r_esp -= 4; W32(r_esp, 0x7439ccu); f_007426d8();
    /* 007439cc: mov ecx, esi */ r_ecx = r_esi;
    /* 007439ce: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7439d3u); f_00710db4();
    /* 007439d3: mov ecx, esi */ r_ecx = r_esi;
    /* 007439d5: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x7439dau); f_00710ee4();
    /* 007439da: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 007439dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007439de: mov ecx, esi */ r_ecx = r_esi;
    /* 007439e0: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7439e5u); f_0072a5ec();
    /* 007439e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007439e6: ret  */ FN_RET(0x007439a4); r_esp += 4; return;
}

void f_007439e8(void) /* sub_7439E8 */
{
    FN_ENTER(0x007439e8);
    /* 007439e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007439e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007439ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007439eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007439ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007439ef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007439f1: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 007439f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007439f6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7439fbu); f_0068d5a8();
    /* 007439fb: mov ebp, eax */ r_ebp = r_eax;
    /* 007439fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00743a00: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743a02: je 0x743b14 */ if (fZ) goto L_00743b14;
L_00743a08:; BB(0x00743a08);
    /* 00743a08: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00743a0b: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00743a0e: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 00743a11: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00743a14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743a16: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00743a1a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00743a1d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00743a21: movsx edx, word ptr [ebp + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 00743a28: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00743a2b: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00743a32: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00743a35: call 0x7422c4 */ r_esp -= 4; W32(r_esp, 0x743a3au); f_007422c4();
    /* 00743a3a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00743a3e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00743a41: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00743a44: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00743a48: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00743a4b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00743a4e: mov ecx, esi */ r_ecx = r_esi;
    /* 00743a50: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x743a55u); f_0072cdd0();
    /* 00743a55: mov ecx, edi */ r_ecx = r_edi;
    /* 00743a57: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x743a5cu); f_0072cdd0();
    /* 00743a5c: fld dword ptr [0x973188] */ FPUSH(R_F32((u32)(0x973188u)));
    /* 00743a62: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00743a65: fsub dword ptr [esi + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x10u));
    /* 00743a68: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00743a6c: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00743a6f: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00743a72: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00743a75: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 00743a78: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 00743a7b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00743a7e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00743a82: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00743a85: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00743a89: movsx edx, word ptr [ebp + 0x2be] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2beu));
    /* 00743a90: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00743a93: movsx edx, word ptr [ebp + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x336u));
    /* 00743a9a: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00743a9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743a9f: call 0x742378 */ r_esp -= 4; W32(r_esp, 0x743aa4u); f_00742378();
    /* 00743aa4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00743aa8: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00743aab: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00743aae: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00743ab2: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00743ab5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00743ab8: mov ecx, esi */ r_ecx = r_esi;
    /* 00743aba: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x743abfu); f_0072cdd0();
    /* 00743abf: mov ecx, edi */ r_ecx = r_edi;
    /* 00743ac1: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x743ac6u); f_0072cdd0();
    /* 00743ac6: fld dword ptr [0x973188] */ FPUSH(R_F32((u32)(0x973188u)));
    /* 00743acc: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00743acf: fsub dword ptr [esi + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x10u));
    /* 00743ad2: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00743ad6: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00743ad9: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00743adc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743ade: call 0x742404 */ r_esp -= 4; W32(r_esp, 0x743ae3u); f_00742404();
    /* 00743ae3: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00743ae6: fld dword ptr [ebp + 0x520] */ FPUSH(R_F32((u32)(r_ebp+0x520u)));
    /* 00743aec: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00743aef: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00743af2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00743af6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00743afb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00743aff: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00743b03: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00743b07: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00743b0a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00743b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743b0f: call 0x72d01c */ r_esp -= 4; W32(r_esp, 0x743b14u); f_0072d01c();
L_00743b14:; BB(0x00743b14);
    /* 00743b14: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743b17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743b18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743b19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743b1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743b1b: ret  */ FN_RET(0x007439e8); r_esp += 4; return;
}

void f_00743b1c(void) /* sub_743B1C */
{
    FN_ENTER(0x00743b1c);
    /* 00743b1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00743b1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743b1e: mov esi, ecx */ r_esi = r_ecx;
    /* 00743b20: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00743b23: mov ebp, dword ptr [eax + 0x38] */ r_ebp = R32((u32)(r_eax+0x38u));
    /* 00743b26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00743b28: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x743b2du); f_0072cdd0();
    /* 00743b2d: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00743b30: fmul dword ptr [0x973180] */ ST(0) = ST(0) * R_F32((u32)(0x973180u));
    /* 00743b36: fadd dword ptr [0x973184] */ ST(0) = ST(0) + R_F32((u32)(0x973184u));
    /* 00743b3c: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00743b3f: mov ecx, esi */ r_ecx = r_esi;
    /* 00743b41: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x743b46u); f_00712644();
    /* 00743b46: mov ebp, eax */ r_ebp = r_eax;
    /* 00743b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743b49: mov ecx, esi */ r_ecx = r_esi;
    /* 00743b4b: call 0x743b60 */ r_esp -= 4; W32(r_esp, 0x743b50u); f_00743b60();
    /* 00743b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743b51: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00743b54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00743b55: mov ecx, esi */ r_ecx = r_esi;
    /* 00743b57: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x743b5cu); f_0072a648();
    /* 00743b5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743b5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743b5e: ret  */ FN_RET(0x00743b1c); r_esp += 4; return;
}

void f_00743b60(void) /* sub_743B60 */
{
    FN_ENTER(0x00743b60);
    /* 00743b60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743b61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00743b62: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743b65: mov esi, ecx */ r_esi = r_ecx;
    /* 00743b67: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00743b6b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00743b6e: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00743b71: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 00743b74: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00743b77: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00743b7b: mov dword ptr [esp + 4], 0x97313c */ W32((u32)(r_esp+0x4u), 0x97313cu);
    /* 00743b83: mov ecx, esi */ r_ecx = r_esi;
    /* 00743b85: mov dword ptr [esp + 0xc], 0x41d00000 */ W32((u32)(r_esp+0xcu), 0x41d00000u);
    /* 00743b8d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00743b90: call 0x742bd4 */ r_esp -= 4; W32(r_esp, 0x743b95u); f_00742bd4();
    /* 00743b95: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00743b9a: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x743b9fu); f_0082bb30();
    /* 00743b9f: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00743ba5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x743baau); f_00829cc8();
    /* 00743baa: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00743bad: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00743bb2: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x743bb7u); f_0082bb60();
    /* 00743bb7: mov ecx, esi */ r_ecx = r_esi;
    /* 00743bb9: call 0x710c94 */ r_esp -= 4; W32(r_esp, 0x743bbeu); f_00710c94();
    /* 00743bbe: fsubr dword ptr [0x97316c] */ ST(0) = R_F32((u32)(0x97316cu)) - ST(0);
    /* 00743bc4: fld dword ptr [0x973174] */ FPUSH(R_F32((u32)(0x973174u)));
    /* 00743bca: fadd dword ptr [esi + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x54u));
    /* 00743bcd: fdivr dword ptr [0x973178] */ ST(0) = R_F32((u32)(0x973178u)) / ST(0);
    /* 00743bd3: fld dword ptr [0x973170] */ FPUSH(R_F32((u32)(0x973170u)));
    /* 00743bd9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00743bdb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00743bdd: fmul dword ptr [0x973168] */ ST(0) = ST(0) * R_F32((u32)(0x973168u));
    /* 00743be3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00743be5: fadd dword ptr [0x973138] */ ST(0) = ST(0) + R_F32((u32)(0x973138u));
    /* 00743beb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00743bed: fadd dword ptr [0x973134] */ ST(0) = ST(0) + R_F32((u32)(0x973134u));
    /* 00743bf3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00743bf5: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00743bf9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00743bfb: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00743bfe: fadd dword ptr [0x973130] */ ST(0) = ST(0) + R_F32((u32)(0x973130u));
    /* 00743c04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00743c06: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00743c0a: fadd dword ptr [0x97312c] */ ST(0) = ST(0) + R_F32((u32)(0x97312cu));
    /* 00743c10: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00743c12: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00743c16: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00743c1a: mov dword ptr [esp + 0x10], 0x3eec0000 */ W32((u32)(r_esp+0x10u), 0x3eec0000u);
    /* 00743c22: mov dword ptr [esp + 0x14], 0x3ea00000 */ W32((u32)(r_esp+0x14u), 0x3ea00000u);
    /* 00743c2a: mov dword ptr [esp + 0x18], 0x3f3b0000 */ W32((u32)(r_esp+0x18u), 0x3f3b0000u);
    /* 00743c32: mov dword ptr [esp + 0x1c], 0x3f200000 */ W32((u32)(r_esp+0x1cu), 0x3f200000u);
    /* 00743c3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743c3b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00743c3e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00743c42: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x743c47u); f_0082b440();
    /* 00743c47: fld dword ptr [0x973154] */ FPUSH(R_F32((u32)(0x973154u)));
    /* 00743c4d: fld dword ptr [0x973150] */ FPUSH(R_F32((u32)(0x973150u)));
    /* 00743c53: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 00743c56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00743c58: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00743c5b: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00743c5e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00743c62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00743c64: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00743c66: mov ecx, edi */ r_ecx = r_edi;
    /* 00743c68: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00743c6c: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00743c6f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00743c73: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00743c7b: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00743c83: mov dword ptr [esp + 0x18], 0x3f640000 */ W32((u32)(r_esp+0x18u), 0x3f640000u);
    /* 00743c8b: mov dword ptr [esp + 0x1c], 0x3e980000 */ W32((u32)(r_esp+0x1cu), 0x3e980000u);
    /* 00743c93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00743c94: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x743c99u); f_0071bbb4();
    /* 00743c99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743c9a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00743c9e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00743ca1: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00743ca5: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x743caau); f_0082b440();
    /* 00743caa: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x743cafu); f_004ac444();
    /* 00743caf: lea edx, [edi + 0x10] */ r_edx = (u32)(r_edi+0x10u);
    /* 00743cb2: lea eax, [edi + 0x18] */ r_eax = (u32)(r_edi+0x18u);
    /* 00743cb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743cb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00743cb7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743cb8: call 0x712914 */ r_esp -= 4; W32(r_esp, 0x743cbdu); f_00712914();
    /* 00743cbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00743cc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743cc2: je 0x743ce0 */ if (fZ) goto L_00743ce0;
L_00743cc4:; BB(0x00743cc4);
    /* 00743cc4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00743cc6: call 0x712964 */ r_esp -= 4; W32(r_esp, 0x743ccbu); f_00712964();
    /* 00743ccb: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00743ccf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743cd1: call 0x7129a8 */ r_esp -= 4; W32(r_esp, 0x743cd6u); f_007129a8();
    /* 00743cd6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00743cd8: call 0x712bc0 */ r_esp -= 4; W32(r_esp, 0x743cddu); f_00712bc0();
    /* 00743cdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00743ce0:; BB(0x00743ce0);
    /* 00743ce0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743ce3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00743ce4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743ce5: ret 4 */ FN_RET(0x00743b60); r_esp += 8; return;
}

void f_00743d30(void) /* sub_743D30 */
{
    FN_ENTER(0x00743d30);
    /* 00743d30: mov dword ptr [0xa9aa7c], 0x3f800000 */ W32((u32)(0xa9aa7cu), 0x3f800000u);
    /* 00743d3a: mov dword ptr [0xa9aa80], 0x41000000 */ W32((u32)(0xa9aa80u), 0x41000000u);
    /* 00743d44: mov dword ptr [0xa9aa84], 0x3fc00000 */ W32((u32)(0xa9aa84u), 0x3fc00000u);
    /* 00743d4e: ret  */ FN_RET(0x00743d30); r_esp += 4; return;
}

void f_00743d50(void) /* sub_743D50 */
{
    FN_ENTER(0x00743d50);
    /* 00743d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743d51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00743d53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743d55: call 0x743d74 */ r_esp -= 4; W32(r_esp, 0x743d5au); f_00743d74();
    /* 00743d5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00743d5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00743d60: jne 0x743d66 */ if (!fZ) goto L_00743d66;
L_00743d62:; BB(0x00743d62);
    /* 00743d62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743d63: ret 4 */ FN_RET(0x00743d50); r_esp += 8; return;
L_00743d66:; BB(0x00743d66);
    /* 00743d66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743d67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x743d6cu); f_005c2f74();
    /* 00743d6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743d6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743d6e: ret 4 */ FN_RET(0x00743d50); r_esp += 8; return;
}

void f_00743d74(void) /* sub_743D74 */
{
    FN_ENTER(0x00743d74);
    /* 00743d74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743d75: mov ebp, esp */ r_ebp = r_esp;
    /* 00743d77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00743d79: push 0x8f23dc */ { u32 v = 0x8f23dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00743d7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00743d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743d85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00743d8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743d8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00743d92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00743d95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00743d98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00743d9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00743d9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00743da5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743da8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00743dab: mov dword ptr [eax], 0xb41808 */ W32((u32)(r_eax), 0xb41808u);
    /* 00743db1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743db3: je 0x743dc4 */ if (fZ) goto L_00743dc4;
L_00743db5:; BB(0x00743db5);
    /* 00743db5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x743dbau); f_007127b0();
    /* 00743dba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743dbd: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00743dc4:; BB(0x00743dc4);
    /* 00743dc4: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x743dc9u); f_007917b8();
    /* 00743dc9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00743dcc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743dcf: je 0x743df6 */ if (fZ) goto L_00743df6;
L_00743dd1:; BB(0x00743dd1);
    /* 00743dd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00743dd3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x743dd8u); f_00791748();
    /* 00743dd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00743dd9:; BB(0x00743dd9);
    /* 00743dd9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00743de0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743de3: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x743de8u); f_008171e8();
    /* 00743de8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00743deb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00743df2: mov esp, ebp */ r_esp = r_ebp;
    /* 00743df4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743df5: ret  */ FN_RET(0x00743d74); r_esp += 4; return;
L_00743df6:; BB(0x00743df6);
    /* 00743df6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00743df8: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x743dfdu); f_00791748();
    /* 00743dfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743dfe: jmp 0x743dd9 */ goto L_00743dd9;
}

void f_00743e00(void) /* sub_743E00 */
{
    FN_ENTER(0x00743e00);
    /* 00743e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00743e03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00743e05: push 0x8f2412 */ { u32 v = 0x8f2412u; r_esp -= 4; W32(r_esp, v); }
    /* 00743e0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00743e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743e11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00743e18: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743e1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00743e1e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00743e21: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00743e24: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00743e27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00743e2a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00743e2d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00743e30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00743e31: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00743e34: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00743e37: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x743e3cu); f_008193cc();
    /* 00743e3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00743e43: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00743e46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00743e49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00743e4c: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00743e51: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 00743e54: mov dword ptr [ebx], 0xb41808 */ W32((u32)(r_ebx), 0xb41808u);
    /* 00743e5a: mov eax, dword ptr [0x9f3c5c] */ r_eax = R32((u32)(0x9f3c5cu));
    /* 00743e5f: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00743e62: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 00743e65: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00743e6c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x743e71u); f_005caba4();
    /* 00743e71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743e72: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00743e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743e77: je 0x743ec4 */ if (fZ) goto L_00743ec4;
L_00743e79:; BB(0x00743e79);
    /* 00743e79: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00743e80: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00743e87: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00743e8a: call 0x744010 */ r_esp -= 4; W32(r_esp, 0x743e8fu); f_00744010();
    /* 00743e8f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00743e92: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00743e99:; BB(0x00743e99);
    /* 00743e99: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00743e9c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00743e9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00743ea6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00743ea8: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x743eadu); f_00791748();
    /* 00743ead: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743eae: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00743eb1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00743eb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00743eb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00743ebe: mov esp, ebp */ r_esp = r_ebp;
    /* 00743ec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00743ec1: ret 8 */ FN_RET(0x00743e00); r_esp += 12; return;
L_00743ec4:; BB(0x00743ec4);
    /* 00743ec4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00743ec6: jmp 0x743e99 */ goto L_00743e99;
}

void f_00743ec8(void) /* sub_743EC8 */
{
    FN_ENTER(0x00743ec8);
    /* 00743ec8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743ec9: mov edi, ecx */ r_edi = r_ecx;
    /* 00743ecb: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x743ed0u); f_00694c6c();
    /* 00743ed0: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00743ed6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00743ed9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00743edb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00743edd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00743edf: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00743ee1: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00743ee8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00743ee9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x743eeeu); f_007c1160();
    /* 00743eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743ef0: jne 0x743efe */ if (!fZ) goto L_00743efe;
L_00743ef2:; BB(0x00743ef2);
    /* 00743ef2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00743ef5: call 0x7447c8 */ r_esp -= 4; W32(r_esp, 0x743efau); f_007447c8();
    /* 00743efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00743efc: je 0x743f18 */ if (fZ) goto L_00743f18;
L_00743efe:; BB(0x00743efe);
    /* 00743efe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00743f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743f01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743f02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743f03: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00743f08: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x743f0du); f_00814298();
    /* 00743f0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00743f10: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00743f13: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00743f15: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x743f18u); call_ind(t); }
L_00743f18:; BB(0x00743f18);
    /* 00743f18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743f19: ret  */ FN_RET(0x00743ec8); r_esp += 4; return;
}

void f_00743f1c(void) /* sub_743F1C */
{
    FN_ENTER(0x00743f1c);
    /* 00743f1c: mov dword ptr [0xa9aa8c], 0x3f800000 */ W32((u32)(0xa9aa8cu), 0x3f800000u);
    /* 00743f26: mov dword ptr [0xa9aa90], 0x41000000 */ W32((u32)(0xa9aa90u), 0x41000000u);
    /* 00743f30: mov dword ptr [0xa9aa94], 0x3fc00000 */ W32((u32)(0xa9aa94u), 0x3fc00000u);
    /* 00743f3a: ret  */ FN_RET(0x00743f1c); r_esp += 4; return;
}

void f_00743f3c(void) /* sub_743F3C */
{
    FN_ENTER(0x00743f3c);
    /* 00743f3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743f3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00743f3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743f41: call 0x743f60 */ r_esp -= 4; W32(r_esp, 0x743f46u); f_00743f60();
    /* 00743f46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00743f4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00743f4c: jne 0x743f52 */ if (!fZ) goto L_00743f52;
L_00743f4e:; BB(0x00743f4e);
    /* 00743f4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743f4f: ret 4 */ FN_RET(0x00743f3c); r_esp += 8; return;
L_00743f52:; BB(0x00743f52);
    /* 00743f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00743f53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x743f58u); f_005c2f74();
    /* 00743f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743f59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743f5a: ret 4 */ FN_RET(0x00743f3c); r_esp += 8; return;
}

void f_00743f60(void) /* sub_743F60 */
{
    FN_ENTER(0x00743f60);
    /* 00743f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00743f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00743f63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00743f65: push 0x8f242c */ { u32 v = 0x8f242cu; r_esp -= 4; W32(r_esp, v); }
    /* 00743f6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00743f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743f71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00743f78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00743f7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00743f7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00743f81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00743f84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00743f87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00743f8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00743f91: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743f94: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 00743f97: mov dword ptr [ebx], 0xb41870 */ W32((u32)(r_ebx), 0xb41870u);
    /* 00743f9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743f9f: je 0x743fb2 */ if (fZ) goto L_00743fb2;
L_00743fa1:; BB(0x00743fa1);
    /* 00743fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00743fa2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x743fa7u); f_00857e98();
    /* 00743fa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00743fa8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743fab: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
L_00743fb2:; BB(0x00743fb2);
    /* 00743fb2: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 00743fb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743fb7: je 0x743fdd */ if (fZ) goto L_00743fdd;
L_00743fb9:; BB(0x00743fb9);
    /* 00743fb9: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00743fbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743fc1: je 0x743fd3 */ if (fZ) goto L_00743fd3;
L_00743fc3:; BB(0x00743fc3);
    /* 00743fc3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00743fc6: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00743fca: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00743fcf: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_00743fd3:; BB(0x00743fd3);
    /* 00743fd3: mov dword ptr [0xaafbe4], 0 */ W32((u32)(0xaafbe4u), 0x0u);
L_00743fdd:; BB(0x00743fdd);
    /* 00743fdd: mov ecx, dword ptr [ebx + 0x70] */ r_ecx = R32((u32)(r_ebx+0x70u));
    /* 00743fe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743fe2: je 0x743fee */ if (fZ) goto L_00743fee;
L_00743fe4:; BB(0x00743fe4);
    /* 00743fe4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00743fe6: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x743febu); f_00728a10();
    /* 00743feb: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_00743fee:; BB(0x00743fee);
    /* 00743fee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00743ff5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00743ff7: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x743ffcu); f_00710c28();
    /* 00743ffc: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00743fff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744002: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744009: mov esp, ebp */ r_esp = r_ebp;
    /* 0074400b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074400c: ret  */ FN_RET(0x00743f60); r_esp += 4; return;
}

