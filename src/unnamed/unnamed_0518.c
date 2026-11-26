#include "protos.h"

void f_00518128(void) /* sub_518128 */
{
    FN_ENTER(0x00518128);
    /* 00518128: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00518129: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051812b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051812d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x518132u); f_005213d8();
    /* 00518132: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00518135: fadd dword ptr [ebx + 0x454] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x454u));
    /* 0051813b: fstp dword ptr [ebx + 0x3a0] */ W_F32((u32)(r_ebx+0x3a0u), ST(0)); FPOP();
    /* 00518141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00518142: ret  */ FN_RET(0x00518128); r_esp += 4; return;
}

void f_00518144(void) /* sub_518144 */
{
    FN_ENTER(0x00518144);
    /* 00518144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00518145: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518146: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518147: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00518148: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051814b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051814d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00518151: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518154: je 0x518305 */ if (fZ) goto L_00518305;
L_0051815a:; BB(0x0051815a);
    /* 0051815a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051815d: je 0x5182e2 */ if (fZ) goto L_005182e2;
L_00518163:; BB(0x00518163);
    /* 00518163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518165: jne 0x51829c */ if (!fZ) goto L_0051829c;
L_0051816b:; BB(0x0051816b);
    /* 0051816b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051816d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x518172u); f_007aa094();
    /* 00518172: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00518178: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051817b: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518180: jg 0x51818a */ if ((!fZ&&fS==fO)) goto L_0051818a;
L_00518182:; BB(0x00518182);
    /* 00518182: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 00518188: jmp 0x5181d0 */ goto L_005181d0;
L_0051818a:; BB(0x0051818a);
    /* 0051818a: mov dword ptr [ebx + 0x3cc], 0 */ W32((u32)(r_ebx+0x3ccu), 0x0u);
    /* 00518194: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00518196: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x51819bu); f_00520bf4();
    /* 0051819b: fld dword ptr [0x920be8] */ FPUSH(R_F32((u32)(0x920be8u)));
    /* 005181a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005181a3: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005181a7: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005181ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005181b1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005181b5: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005181b9: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005181bd: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005181c1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005181c5: add eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005181ca: mov dword ptr [ebx + 0x3e0], eax */ W32((u32)(r_ebx+0x3e0u), r_eax);
L_005181d0:; BB(0x005181d0);
    /* 005181d0: mov ecx, dword ptr [ebx + 0x3d4] */ r_ecx = R32((u32)(r_ebx+0x3d4u));
    /* 005181d6: add ecx, dword ptr [ebx + 0x3d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x3d8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005181dc: mov dword ptr [ebx + 0x3d4], ecx */ W32((u32)(r_ebx+0x3d4u), r_ecx);
    /* 005181e2: mov eax, ecx */ r_eax = r_ecx;
    /* 005181e4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005181e7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005181e9: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005181eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5181f0u); f_0082ddd8();
    /* 005181f0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005181f4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005181f8: fmul dword ptr [0x920c44] */ ST(0) = ST(0) * R_F32((u32)(0x920c44u));
    /* 005181fe: mov esi, dword ptr [ebx + 0x3dc] */ r_esi = R32((u32)(r_ebx+0x3dcu));
    /* 00518204: mov edi, dword ptr [ebx + 0x3e0] */ r_edi = R32((u32)(r_ebx+0x3e0u));
    /* 0051820a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0051820e: lea ebp, [esi + edi] */ r_ebp = (u32)(r_esi+r_edi);
    /* 00518211: mov dword ptr [ebx + 0x3dc], ebp */ W32((u32)(r_ebx+0x3dcu), r_ebp);
    /* 00518217: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518219: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51821eu); f_0082dcbc();
    /* 0051821e: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 00518222: fadd dword ptr [ebx + 0x424] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x424u));
    /* 00518228: mov ecx, dword ptr [ebx + 0x3dc] */ r_ecx = R32((u32)(r_ebx+0x3dcu));
    /* 0051822e: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00518231: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x518236u); f_0082dcbc();
    /* 00518236: fld dword ptr [0x920be4] */ FPUSH(R_F32((u32)(0x920be4u)));
    /* 0051823c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051823e: fadd dword ptr [ebx + 0x44c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x44cu));
    /* 00518244: fstp dword ptr [ebx + 0x434] */ W_F32((u32)(r_ebx+0x434u), ST(0)); FPOP();
    /* 0051824a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051824c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x518251u); f_0082ddd8();
    /* 00518251: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 00518255: fadd dword ptr [ebx + 0x42c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x42cu));
    /* 0051825b: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0051825e: lea eax, [esi + edi - 0x4000] */ r_eax = (u32)(r_esi+r_edi+0xffffc000u);
    /* 00518265: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00518268: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051826a: call 0x518f50 */ r_esp -= 4; W32(r_esp, 0x51826fu); f_00518f50();
    /* 0051826f: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00518275: mov edx, dword ptr [ebx + 0x308] */ r_edx = R32((u32)(r_ebx+0x308u));
    /* 0051827b: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0051827d: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00518280: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 00518283: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00518285: call dword ptr [ebp + 0x168] */ { u32 t = R32((u32)(r_ebp+0x168u)); r_esp -= 4; W32(r_esp, 0x51828bu); call_ind(t); }
    /* 0051828b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051828d: call 0x51842c */ r_esp -= 4; W32(r_esp, 0x518292u); f_0051842c();
    /* 00518292: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518295: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00518296: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518297: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518298: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00518299: ret 4 */ FN_RET(0x00518144); r_esp += 8; return;
L_0051829c:; BB(0x0051829c);
    /* 0051829c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051829f: jne 0x5182fb */ if (!fZ) goto L_005182fb;
L_005182a1:; BB(0x005182a1);
    /* 005182a1: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 005182a4: fsub dword ptr [ebx + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x44u));
    /* 005182a7: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005182aa: fsub dword ptr [ebx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x4cu));
    /* 005182ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005182af: fstp dword ptr [ebx + 0x438] */ W_F32((u32)(r_ebx+0x438u), ST(0)); FPOP();
    /* 005182b5: fstp dword ptr [ebx + 0x440] */ W_F32((u32)(r_ebx+0x440u), ST(0)); FPOP();
    /* 005182bb: mov dword ptr [ebx + 0x43c], 0 */ W32((u32)(r_ebx+0x43cu), 0x0u);
    /* 005182c5: lea eax, [ebx + 0x438] */ r_eax = (u32)(r_ebx+0x438u);
    /* 005182cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005182cc: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x5182d1u); f_00782868();
    /* 005182d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005182d2: fstp dword ptr [ebx + 0x444] */ W_F32((u32)(r_ebx+0x444u), ST(0)); FPOP();
    /* 005182d8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005182db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005182dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005182dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005182de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005182df: ret 4 */ FN_RET(0x00518144); r_esp += 8; return;
L_005182e2:; BB(0x005182e2);
    /* 005182e2: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005182e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005182e9: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5182eeu); f_00520ea0();
    /* 005182ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005182f0: je 0x5182fb */ if (fZ) goto L_005182fb;
L_005182f2:; BB(0x005182f2);
    /* 005182f2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005182f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005182f6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5182fbu); f_0051f62c();
L_005182fb:; BB(0x005182fb);
    /* 005182fb: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005182fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005182ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518301: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00518302: ret 4 */ FN_RET(0x00518144); r_esp += 8; return;
L_00518305:; BB(0x00518305);
    /* 00518305: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00518307: mov eax, 1 */ r_eax = 0x1u;
    /* 0051830c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00518313: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00518315: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x51831bu); call_ind(t); }
    /* 0051831b: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00518321: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00518324: mov dword ptr [ebx + 0x3d4], 0 */ W32((u32)(r_ebx+0x3d4u), 0x0u);
    /* 0051832e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00518331: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00518337: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051833a: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 00518340: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00518343: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00518345: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x51834au); f_00520bf4();
    /* 0051834a: fld dword ptr [0x920be8] */ FPUSH(R_F32((u32)(0x920be8u)));
    /* 00518350: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518352: mov edx, dword ptr [ebx + 0x450] */ r_edx = R32((u32)(r_ebx+0x450u));
    /* 00518358: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0051835c: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00518361: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00518366: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0051836a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0051836e: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00518372: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00518376: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0051837a: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051837f: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 00518385: mov dword ptr [ebx + 0x3dc], edx */ W32((u32)(r_ebx+0x3dcu), r_edx);
    /* 0051838b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051838d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x518392u); f_00520bf4();
    /* 00518392: fld dword ptr [0x920be8] */ FPUSH(R_F32((u32)(0x920be8u)));
    /* 00518398: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051839a: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0051839d: fsub dword ptr [ebx + 0x424] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x424u));
    /* 005183a3: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005183a6: fsub dword ptr [ebx + 0x42c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x42cu));
    /* 005183ac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005183ae: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005183b2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005183b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005183bc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005183c0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005183c4: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005183c8: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005183cc: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005183d0: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 005183d3: add eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005183d8: mov dword ptr [ebx + 0x3e0], eax */ W32((u32)(r_ebx+0x3e0u), r_eax);
    /* 005183de: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005183e1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005183e5: lea edx, [ebx + 0x438] */ r_edx = (u32)(r_ebx+0x438u);
    /* 005183eb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005183f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005183f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005183f5: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5183fau); f_007829cc();
    /* 005183fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005183fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005183ff: je 0x51840f */ if (fZ) goto L_0051840f;
L_00518401:; BB(0x00518401);
    /* 00518401: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00518407: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518409: mov dword ptr [ebx + 0x3e0], eax */ W32((u32)(r_ebx+0x3e0u), r_eax);
L_0051840f:; BB(0x0051840f);
    /* 0051840f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00518411: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x518416u); f_00520f68();
    /* 00518416: mov dword ptr [ebx + 0x3d0], 0xffffffff */ W32((u32)(r_ebx+0x3d0u), 0xffffffffu);
    /* 00518420: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518423: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00518424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518425: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518426: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00518427: ret 4 */ FN_RET(0x00518144); r_esp += 8; return;
}

void f_0051842c(void) /* sub_51842C */
{
    FN_ENTER(0x0051842c);
    /* 0051842c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051842d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051842f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518431: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00518436: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51843bu); f_007879b8();
    /* 0051843b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051843d: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00518440: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518442: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518443: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518445: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518446: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518447: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x51844cu); f_008144b0();
    /* 0051844c: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 00518451: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x518456u); f_00814680();
    /* 00518456: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051845a: ret  */ FN_RET(0x0051842c); r_esp += 4; return;
}

void f_0051845c(void) /* sub_51845C */
{
    FN_ENTER(0x0051845c);
    /* 0051845c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051845d: mov ebx, esp */ r_ebx = r_esp;
    /* 0051845f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00518462: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00518463: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00518466: mov edi, ecx */ r_edi = r_ecx;
    /* 00518468: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0051846b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051846e: je 0x5186c1 */ if (fZ) goto L_005186c1;
L_00518474:; BB(0x00518474);
    /* 00518474: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518477: je 0x5186a3 */ if (fZ) goto L_005186a3;
L_0051847d:; BB(0x0051847d);
    /* 0051847d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051847f: jne 0x5186b7 */ if (!fZ) goto L_005186b7;
L_00518485:; BB(0x00518485);
    /* 00518485: mov ecx, edi */ r_ecx = r_edi;
    /* 00518487: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51848cu); f_007aa094();
    /* 0051848c: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 00518492: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518494: jne 0x518536 */ if (!fZ) goto L_00518536;
L_0051849a:; BB(0x0051849a);
    /* 0051849a: fld dword ptr [0x920bd8] */ FPUSH(R_F32((u32)(0x920bd8u)));
    /* 005184a0: fld dword ptr [0x921680] */ FPUSH(R_F32((u32)(0x921680u)));
    /* 005184a6: fld dword ptr [edi + 0x414] */ FPUSH(R_F32((u32)(r_edi+0x414u)));
    /* 005184ac: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005184af: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005184b1: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005184b7: fld dword ptr [edi + 0x434] */ FPUSH(R_F32((u32)(r_edi+0x434u)));
    /* 005184bd: fld dword ptr [edi + 0x41c] */ FPUSH(R_F32((u32)(r_edi+0x41cu)));
    /* 005184c3: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005184c6: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005184cc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005184ce: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005184d0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005184d2: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 005184d5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005184d7: fstp dword ptr [edi + 0x414] */ W_F32((u32)(r_edi+0x414u), ST(0)); FPOP();
    /* 005184dd: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005184df: fstp dword ptr [edi + 0x434] */ W_F32((u32)(r_edi+0x434u), ST(0)); FPOP();
    /* 005184e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005184e7: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 005184e9: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005184eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005184ed: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 005184f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005184f2: fstp dword ptr [edi + 0x41c] */ W_F32((u32)(r_edi+0x41cu), ST(0)); FPOP();
    /* 005184f8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005184fa: fstp dword ptr [edi + 0x418] */ W_F32((u32)(r_edi+0x418u), ST(0)); FPOP();
    /* 00518500: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00518503: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518506: jle 0x51852b */ if ((fZ||fS!=fO)) goto L_0051852b;
L_00518508:; BB(0x00518508);
    /* 00518508: mov dword ptr [edi + 0x3cc], 1 */ W32((u32)(r_edi+0x3ccu), 0x1u);
    /* 00518512: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 0051851c: mov dword ptr [edi + 0x444], 0 */ W32((u32)(r_edi+0x444u), 0x0u);
    /* 00518526: jmp 0x51866f */ goto L_0051866f;
L_0051852b:; BB(0x0051852b);
    /* 0051852b: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00518531: jmp 0x51866f */ goto L_0051866f;
L_00518536:; BB(0x00518536);
    /* 00518536: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518539: jne 0x51866f */ if (!fZ) goto L_0051866f;
L_0051853f:; BB(0x0051853f);
    /* 0051853f: fld dword ptr [edi + 0x3f0] */ FPUSH(R_F32((u32)(r_edi+0x3f0u)));
    /* 00518545: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 00518548: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0051854e: fld dword ptr [edi + 0x3f4] */ FPUSH(R_F32((u32)(r_edi+0x3f4u)));
    /* 00518554: fsub dword ptr [edi + 0x434] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x434u));
    /* 0051855a: mov edx, dword ptr [edi + 0x3f4] */ r_edx = R32((u32)(r_edi+0x3f4u));
    /* 00518560: fld dword ptr [edi + 0x3f8] */ FPUSH(R_F32((u32)(r_edi+0x3f8u)));
    /* 00518566: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00518569: fstp dword ptr [edi + 0x440] */ W_F32((u32)(r_edi+0x440u), ST(0)); FPOP();
    /* 0051856f: mov dword ptr [edi + 0x438], eax */ W32((u32)(r_edi+0x438u), r_eax);
    /* 00518575: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518577: fstp dword ptr [edi + 0x438] */ W_F32((u32)(r_edi+0x438u), ST(0)); FPOP();
    /* 0051857d: mov dword ptr [edi + 0x43c], edx */ W32((u32)(r_edi+0x43cu), r_edx);
    /* 00518583: fstp dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0)); FPOP();
    /* 00518589: lea eax, [edi + 0x438] */ r_eax = (u32)(r_edi+0x438u);
    /* 0051858f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518590: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x518595u); f_00782868();
    /* 00518595: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00518596: fld dword ptr [0x920bd0] */ FPUSH(R_F32((u32)(0x920bd0u)));
    /* 0051859c: fld dword ptr [edi + 0x444] */ FPUSH(R_F32((u32)(r_edi+0x444u)));
    /* 005185a2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005185a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005185a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005185a8: fst dword ptr [edi + 0x3e8] */ W_F32((u32)(r_edi+0x3e8u), ST(0));
    /* 005185ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005185af: jae 0x5185cd */ if (!fC) goto L_005185cd;
L_005185b1:; BB(0x005185b1);
    /* 005185b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005185b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005185b5: fadd dword ptr [0x920bdc] */ ST(0) = ST(0) + R_F32((u32)(0x920bdcu));
    /* 005185bb: fld dword ptr [edi + 0x3e8] */ FPUSH(R_F32((u32)(r_edi+0x3e8u)));
    /* 005185c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005185c3: fst dword ptr [edi + 0x444] */ W_F32((u32)(r_edi+0x444u), ST(0));
    /* 005185c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005185cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_005185cd:; BB(0x005185cd);
    /* 005185cd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005185cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005185d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005185d2: jae 0x51860b */ if (!fC) goto L_0051860b;
L_005185d4:; BB(0x005185d4);
    /* 005185d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005185d6: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 005185dc: mov edx, dword ptr [edi + 0x3f4] */ r_edx = R32((u32)(r_edi+0x3f4u));
    /* 005185e2: fld dword ptr [edi + 0x438] */ FPUSH(R_F32((u32)(r_edi+0x438u)));
    /* 005185e8: fld dword ptr [edi + 0x440] */ FPUSH(R_F32((u32)(r_edi+0x440u)));
    /* 005185ee: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005185f1: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 005185f7: mov dword ptr [edi + 0x3cc], 2 */ W32((u32)(r_edi+0x3ccu), 0x2u);
    /* 00518601: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00518604: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00518607: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518609: jmp 0x518645 */ goto L_00518645;
L_0051860b:; BB(0x0051860b);
    /* 0051860b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0051860d: fld dword ptr [edi + 0x438] */ FPUSH(R_F32((u32)(r_edi+0x438u)));
    /* 00518613: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00518615: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518617: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0051861a: fld dword ptr [edi + 0x43c] */ FPUSH(R_F32((u32)(r_edi+0x43cu)));
    /* 00518620: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00518622: fadd dword ptr [edi + 0x434] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x434u));
    /* 00518628: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051862a: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0051862d: fld dword ptr [edi + 0x440] */ FPUSH(R_F32((u32)(r_edi+0x440u)));
    /* 00518633: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00518635: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00518637: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0051863a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051863c: fstp dword ptr [edi + 0x434] */ W_F32((u32)(r_edi+0x434u), ST(0)); FPOP();
    /* 00518642: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
L_00518645:; BB(0x00518645);
    /* 00518645: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518647: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00518649: fmul qword ptr [0x920b70] */ ST(0) = ST(0) * R_F64((u32)(0x920b70u));
    /* 0051864f: fdiv qword ptr [0x920b68] */ ST(0) = ST(0) / R_F64((u32)(0x920b68u));
    /* 00518655: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00518658: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051865c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00518661: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00518665: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00518669: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051866c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0051866f:; BB(0x0051866f);
    /* 0051866f: mov ecx, edi */ r_ecx = r_edi;
    /* 00518671: call 0x518f50 */ r_esp -= 4; W32(r_esp, 0x518676u); f_00518f50();
    /* 00518676: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0051867c: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00518682: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 00518685: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 00518688: mov ecx, edi */ r_ecx = r_edi;
    /* 0051868a: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x51868fu); f_0051655c();
    /* 0051868f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00518691: mov ecx, edi */ r_ecx = r_edi;
    /* 00518693: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x518699u); call_ind(t); }
    /* 00518699: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051869c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051869d: mov esp, ebx */ r_esp = r_ebx;
    /* 0051869f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005186a0: ret 4 */ FN_RET(0x0051845c); r_esp += 8; return;
L_005186a3:; BB(0x005186a3);
    /* 005186a3: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 005186a9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005186ac: jne 0x5186b7 */ if (!fZ) goto L_005186b7;
L_005186ae:; BB(0x005186ae);
    /* 005186ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005186b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005186b2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5186b7u); f_0051f62c();
L_005186b7:; BB(0x005186b7);
    /* 005186b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005186ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005186bb: mov esp, ebx */ r_esp = r_ebx;
    /* 005186bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005186be: ret 4 */ FN_RET(0x0051845c); r_esp += 8; return;
L_005186c1:; BB(0x005186c1);
    /* 005186c1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005186c3: mov eax, 1 */ r_eax = 0x1u;
    /* 005186c8: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005186cf: mov ecx, edi */ r_ecx = r_edi;
    /* 005186d1: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x5186d7u); call_ind(t); }
    /* 005186d7: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005186dd: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 005186e0: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005186e6: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005186e9: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005186ec: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 005186f2: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005186f5: mov ecx, edi */ r_ecx = r_edi;
    /* 005186f7: call 0x51735c */ r_esp -= 4; W32(r_esp, 0x5186fcu); f_0051735c();
    /* 005186fc: mov ecx, dword ptr [edi + 0x450] */ r_ecx = R32((u32)(r_edi+0x450u));
    /* 00518702: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518704: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0051870a: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 00518710: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x518715u); f_0082dcbc();
    /* 00518715: fld dword ptr [0x920c44] */ FPUSH(R_F32((u32)(0x920c44u)));
    /* 0051871b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051871d: fadd dword ptr [edi + 0x424] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x424u));
    /* 00518723: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 00518729: mov ecx, dword ptr [edi + 0x450] */ r_ecx = R32((u32)(r_edi+0x450u));
    /* 0051872f: fstp dword ptr [edi + 0x3f0] */ W_F32((u32)(r_edi+0x3f0u), ST(0)); FPOP();
    /* 00518735: mov dword ptr [edi + 0x3f4], eax */ W32((u32)(r_edi+0x3f4u), r_eax);
    /* 0051873b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x518740u); f_0082ddd8();
    /* 00518740: fld dword ptr [0x920c44] */ FPUSH(R_F32((u32)(0x920c44u)));
    /* 00518746: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518748: fadd dword ptr [edi + 0x42c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x42cu));
    /* 0051874e: fld dword ptr [edi + 0x41c] */ FPUSH(R_F32((u32)(r_edi+0x41cu)));
    /* 00518754: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518756: fstp dword ptr [edi + 0x3f8] */ W_F32((u32)(r_edi+0x3f8u), ST(0)); FPOP();
    /* 0051875c: fld dword ptr [edi + 0x414] */ FPUSH(R_F32((u32)(r_edi+0x414u)));
    /* 00518762: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518764: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00518766: fmul qword ptr [0x920b70] */ ST(0) = ST(0) * R_F64((u32)(0x920b70u));
    /* 0051876c: fdiv qword ptr [0x920b68] */ ST(0) = ST(0) / R_F64((u32)(0x920b68u));
    /* 00518772: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00518775: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00518779: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051877e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00518782: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00518786: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00518789: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051878c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051878e: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x518793u); f_00520f68();
    /* 00518793: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518796: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00518797: mov esp, ebx */ r_esp = r_ebx;
    /* 00518799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051879a: ret 4 */ FN_RET(0x0051845c); r_esp += 8; return;
}

void f_005187a0(void) /* sub_5187A0 */
{
    FN_ENTER(0x005187a0);
    /* 005187a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005187a1: mov esi, ecx */ r_esi = r_ecx;
    /* 005187a3: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005187aa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005187ad: je 0x5187d8 */ if (fZ) goto L_005187d8;
L_005187af:; BB(0x005187af);
    /* 005187af: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005187b2: je 0x5187d8 */ if (fZ) goto L_005187d8;
L_005187b4:; BB(0x005187b4);
    /* 005187b4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005187b7: je 0x5187d8 */ if (fZ) goto L_005187d8;
L_005187b9:; BB(0x005187b9);
    /* 005187b9: mov ecx, esi */ r_ecx = r_esi;
    /* 005187bb: call 0x51f8a8 */ r_esp -= 4; W32(r_esp, 0x5187c0u); f_0051f8a8();
    /* 005187c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005187c2: je 0x5187cf */ if (fZ) goto L_005187cf;
L_005187c4:; BB(0x005187c4);
    /* 005187c4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005187c6: mov ecx, esi */ r_ecx = r_esi;
    /* 005187c8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5187cdu); f_0051f62c();
    /* 005187cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005187ce: ret  */ FN_RET(0x005187a0); r_esp += 4; return;
L_005187cf:; BB(0x005187cf);
    /* 005187cf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005187d1: mov ecx, esi */ r_ecx = r_esi;
    /* 005187d3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5187d8u); f_0051f62c();
L_005187d8:; BB(0x005187d8);
    /* 005187d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005187d9: ret  */ FN_RET(0x005187a0); r_esp += 4; return;
}

void f_005187dc(void) /* sub_5187DC */
{
    FN_ENTER(0x005187dc);
    /* 005187dc: mov eax, dword ptr [ecx + 0x45c] */ r_eax = R32((u32)(r_ecx+0x45cu));
    /* 005187e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005187e4: je 0x5187ee */ if (fZ) goto L_005187ee;
L_005187e6:; BB(0x005187e6);
    /* 005187e6: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 005187ed: ret  */ FN_RET(0x005187dc); r_esp += 4; return;
L_005187ee:; BB(0x005187ee);
    /* 005187ee: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005187f3: ret  */ FN_RET(0x005187dc); r_esp += 4; return;
}

void f_005187f4(void) /* sub_5187F4 */
{
    FN_ENTER(0x005187f4);
    /* 005187f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005187f5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005187f8: mov esi, ecx */ r_esi = r_ecx;
    /* 005187fa: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005187fe: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518803: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00518807: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0051880b: jne 0x518980 */ if (!fZ) goto L_00518980;
L_00518811:; BB(0x00518811);
    /* 00518811: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00518816: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518819: je 0x5189c0 */ if (fZ) goto L_005189c0;
L_0051881f:; BB(0x0051881f);
    /* 0051881f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00518822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518823: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00518826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518827: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x51882cu); f_00835c3c();
    /* 0051882c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051882f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00518833: fld dword ptr [0x920bcc] */ FPUSH(R_F32((u32)(0x920bccu)));
    /* 00518839: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051883b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051883d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051883e: jb 0x51896d */ if (fC) goto L_0051896d;
L_00518844:; BB(0x00518844);
    /* 00518844: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00518848: fchs  */ ST(0) = -ST(0);
    /* 0051884a: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0051884c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051884e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00518850: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518852: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518853: ja 0x51895c */ if ((!fC&&!fZ)) goto L_0051895c;
L_00518859:; BB(0x00518859);
    /* 00518859: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0051885c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051885e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051885f: jbe 0x5188cd */ if ((fC||fZ)) goto L_005188cd;
L_00518861:; BB(0x00518861);
    /* 00518861: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00518867: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0051886b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0051886d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051886f: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00518872: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 00518878: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 0051887e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518880: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00518882: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00518885: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00518887: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518889: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0051888c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051888e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00518891: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518893: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00518897: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051889b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0051889f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005188a0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005188a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005188a6: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5188abu); f_0082f09c();
    /* 005188ab: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005188af: fcomp dword ptr [0x920bcc] */ fx_compare(ST(0), R_F32((u32)(0x920bccu))); FPOP();
    /* 005188b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005188b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005188b8: jae 0x518947 */ if (!fC) goto L_00518947;
L_005188be:; BB(0x005188be);
    /* 005188be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005188c0: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 005188c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005188c6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005188c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005188ca: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_005188cd:; BB(0x005188cd);
    /* 005188cd: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 005188d3: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005188d7: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 005188dd: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 005188e3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005188e5: fchs  */ ST(0) = -ST(0);
    /* 005188e7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005188e9: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 005188ec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005188ef: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005188f3: fchs  */ ST(0) = -ST(0);
    /* 005188f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005188f7: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 005188fa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005188fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518900: fchs  */ ST(0) = -ST(0);
    /* 00518902: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518904: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00518907: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051890b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051890c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00518910: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00518912: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x518917u); f_0082f09c();
    /* 00518917: movsx eax, word ptr [0xa48a4c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 0051891e: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 00518925: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00518927: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0051892b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0051892f: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00518933: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518935: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518936: jae 0x518947 */ if (!fC) goto L_00518947;
L_00518938:; BB(0x00518938);
    /* 00518938: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051893a: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 0051893e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518940: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518943: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518944: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_00518947:; BB(0x00518947);
    /* 00518947: mov edx, 1 */ r_edx = 0x1u;
    /* 0051894c: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518950: mov eax, 1 */ r_eax = 0x1u;
    /* 00518955: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518959: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_0051895c:; BB(0x0051895c);
    /* 0051895c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051895e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518960: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518964: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518966: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518969: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051896a: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_0051896d:; BB(0x0051896d);
    /* 0051896d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051896f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00518971: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518973: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518977: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518979: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051897c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051897d: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_00518980:; BB(0x00518980);
    /* 00518980: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00518985: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00518989: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0051898f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518990: call 0x502c78 */ r_esp -= 4; W32(r_esp, 0x518995u); f_00502c78();
    /* 00518995: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051899a: je 0x5189b1 */ if (fZ) goto L_005189b1;
L_0051899c:; BB(0x0051899c);
    /* 0051899c: mov edx, 1 */ r_edx = 0x1u;
    /* 005189a1: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 005189a5: mov eax, 1 */ r_eax = 0x1u;
    /* 005189aa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005189ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005189ae: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_005189b1:; BB(0x005189b1);
    /* 005189b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005189b3: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 005189b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005189b9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005189bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005189bd: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
L_005189c0:; BB(0x005189c0);
    /* 005189c0: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 005189c4: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005189c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005189c8: ret 8 */ FN_RET(0x005187f4); r_esp += 12; return;
}

void f_005189cc(void) /* sub_5189CC */
{
    FN_ENTER(0x005189cc);
    /* 005189cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005189cd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005189d0: mov esi, ecx */ r_esi = r_ecx;
    /* 005189d2: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005189d6: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005189db: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005189df: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005189e3: jne 0x518b82 */ if (!fZ) goto L_00518b82;
L_005189e9:; BB(0x005189e9);
    /* 005189e9: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 005189ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005189f1: je 0x518bba */ if (fZ) goto L_00518bba;
L_005189f7:; BB(0x005189f7);
    /* 005189f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005189fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005189fb: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005189fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005189ff: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x518a04u); f_00835c3c();
    /* 00518a04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518a07: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00518a0b: fld dword ptr [0x920bc4] */ FPUSH(R_F32((u32)(0x920bc4u)));
    /* 00518a11: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00518a13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518a15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518a17: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00518a1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518a1c: jb 0x518b71 */ if (fC) goto L_00518b71;
L_00518a22:; BB(0x00518a22);
    /* 00518a22: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00518a26: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00518a2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518a2c: fchs  */ ST(0) = -ST(0);
    /* 00518a2e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00518a30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518a32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518a33: ja 0x518b60 */ if ((!fC&&!fZ)) goto L_00518b60;
L_00518a39:; BB(0x00518a39);
    /* 00518a39: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 00518a3c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518a3e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518a3f: jbe 0x518aa9 */ if ((fC||fZ)) goto L_00518aa9;
L_00518a41:; BB(0x00518a41);
    /* 00518a41: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00518a47: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00518a4b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00518a4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518a4f: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00518a52: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 00518a58: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 00518a5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518a60: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00518a62: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00518a65: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00518a67: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518a69: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00518a6c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518a6e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00518a71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518a73: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00518a77: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00518a7b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00518a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518a80: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00518a84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00518a86: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x518a8bu); f_0082f09c();
    /* 00518a8b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00518a8f: fcomp dword ptr [0x920bc4] */ fx_compare(ST(0), R_F32((u32)(0x920bc4u))); FPOP();
    /* 00518a95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518a97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518a98: jae 0x518b14 */ if (!fC) goto L_00518b14;
L_00518a9a:; BB(0x00518a9a);
    /* 00518a9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518a9c: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518aa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518aa2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518aa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518aa6: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518aa9:; BB(0x00518aa9);
    /* 00518aa9: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00518aaf: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00518ab3: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 00518ab9: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 00518abf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00518ac1: fchs  */ ST(0) = -ST(0);
    /* 00518ac3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00518ac5: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00518ac8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00518acb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00518acf: fchs  */ ST(0) = -ST(0);
    /* 00518ad1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00518ad3: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00518ad6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00518ada: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518adc: fchs  */ ST(0) = -ST(0);
    /* 00518ade: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518ae0: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00518ae3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00518ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518ae8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00518aec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00518aee: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x518af3u); f_0082f09c();
    /* 00518af3: movsx eax, word ptr [0xa48a4c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 00518afa: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 00518b01: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00518b03: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00518b07: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00518b0b: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00518b0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518b11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518b12: jb 0x518b51 */ if (fC) goto L_00518b51;
L_00518b14:; BB(0x00518b14);
    /* 00518b14: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00518b18: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00518b1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518b1e: fchs  */ ST(0) = -ST(0);
    /* 00518b20: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00518b22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00518b24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00518b25: jbe 0x518b3c */ if ((fC||fZ)) goto L_00518b3c;
L_00518b27:; BB(0x00518b27);
    /* 00518b27: mov edx, 2 */ r_edx = 0x2u;
    /* 00518b2c: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518b30: mov eax, 2 */ r_eax = 0x2u;
    /* 00518b35: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518b38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518b39: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518b3c:; BB(0x00518b3c);
    /* 00518b3c: mov edx, 1 */ r_edx = 0x1u;
    /* 00518b41: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518b45: mov eax, 1 */ r_eax = 0x1u;
    /* 00518b4a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518b4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518b4e: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518b51:; BB(0x00518b51);
    /* 00518b51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518b53: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518b57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518b59: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518b5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518b5d: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518b60:; BB(0x00518b60);
    /* 00518b60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00518b62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518b64: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518b68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518b6a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518b6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518b6e: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518b71:; BB(0x00518b71);
    /* 00518b71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00518b73: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518b75: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518b79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518b7b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518b7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518b7f: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518b82:; BB(0x00518b82);
    /* 00518b82: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00518b86: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00518b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518b8a: call 0x502c78 */ r_esp -= 4; W32(r_esp, 0x518b8fu); f_00502c78();
    /* 00518b8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518b92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518b94: je 0x518bab */ if (fZ) goto L_00518bab;
L_00518b96:; BB(0x00518b96);
    /* 00518b96: mov edx, 1 */ r_edx = 0x1u;
    /* 00518b9b: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518b9f: mov eax, 1 */ r_eax = 0x1u;
    /* 00518ba4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518ba7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518ba8: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518bab:; BB(0x00518bab);
    /* 00518bab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00518bad: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 00518bb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518bb3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518bb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518bb7: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
L_00518bba:; BB(0x00518bba);
    /* 00518bba: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 00518bbe: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518bc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518bc2: ret 0xc */ FN_RET(0x005189cc); r_esp += 16; return;
}

void f_00518bfc(void) /* sub_518BFC */
{
    FN_ENTER(0x00518bfc);
    /* 00518bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518bfd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00518bff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518c01: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x518c06u); f_00521840();
    /* 00518c06: mov ecx, dword ptr [0xa72d64] */ r_ecx = R32((u32)(0xa72d64u));
    /* 00518c0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00518c0e: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00518c14: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00518c17: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00518c1a: push 0x9bb630 */ { u32 v = 0x9bb630u; r_esp -= 4; W32(r_esp, v); }
    /* 00518c1f: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00518c25: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00518c28: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 00518c2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518c2d: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x518c32u); f_0051ff3c();
    /* 00518c32: mov eax, dword ptr [0xa72d64] */ r_eax = R32((u32)(0xa72d64u));
    /* 00518c37: mov dword ptr [ebp + 0xd8], 0x9bb5c0 */ W32((u32)(r_ebp+0xd8u), 0x9bb5c0u);
    /* 00518c41: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00518c47: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 00518c4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518c50: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00518c57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518c59: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x518c5eu); f_007aa4c8();
    /* 00518c5e: push dword ptr [0xa72d6c] */ { u32 v = R32((u32)(0xa72d6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00518c64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518c66: movzx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xb8u));
    /* 00518c6d: push dword ptr [0xa72d70] */ { u32 v = R32((u32)(0xa72d70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00518c73: push dword ptr [0xa72d74] */ { u32 v = R32((u32)(0xa72d74u)); r_esp -= 4; W32(r_esp, v); }
    /* 00518c79: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00518c80: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x518c85u); f_00520c70();
    /* 00518c85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518c87: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x518c8cu); f_00520350();
    /* 00518c8c: mov dword ptr [ebp + 0x358], 0x9bb614 */ W32((u32)(r_ebp+0x358u), 0x9bb614u);
    /* 00518c96: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00518c98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518c9a: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x518c9fu); f_00520390();
    /* 00518c9f: mov dword ptr [ebp + 0x384], 0x40a00000 */ W32((u32)(r_ebp+0x384u), 0x40a00000u);
    /* 00518ca9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00518cab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518cad: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x518cb2u); f_00521820();
    /* 00518cb2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00518cb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518cb6: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x518cbbu); f_005217fc();
    /* 00518cbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518cbd: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x518cc2u); f_00520bdc();
    /* 00518cc2: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00518cc5: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00518cc8: mov dword ptr [ebp + 0x430], 2 */ W32((u32)(r_ebp+0x430u), 0x2u);
    /* 00518cd2: mov dword ptr [ebp + 0x434], edx */ W32((u32)(r_ebp+0x434u), r_edx);
    /* 00518cd8: mov dword ptr [ebp + 0x438], 0 */ W32((u32)(r_ebp+0x438u), 0x0u);
    /* 00518ce2: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00518ce7: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00518cea: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 00518cf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518cf6: mov dword ptr [ebp + 0x448], eax */ W32((u32)(r_ebp+0x448u), r_eax);
    /* 00518cfc: mov dword ptr [ebp + 0x450], eax */ W32((u32)(r_ebp+0x450u), r_eax);
    /* 00518d02: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 00518d0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518d0e: mov dword ptr [ebp + 0x444], 0 */ W32((u32)(r_ebp+0x444u), 0x0u);
    /* 00518d18: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 00518d22: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x518d27u); f_00520bf4();
    /* 00518d27: fld dword ptr [0x920ba4] */ FPUSH(R_F32((u32)(0x920ba4u)));
    /* 00518d2d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518d2f: fadd dword ptr [0x920c40] */ ST(0) = ST(0) + R_F32((u32)(0x920c40u));
    /* 00518d35: fstp dword ptr [ebp + 0x454] */ W_F32((u32)(r_ebp+0x454u), ST(0)); FPOP();
    /* 00518d3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518d3d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x518d42u); f_00520bf4();
    /* 00518d42: fld dword ptr [0x920b9c] */ FPUSH(R_F32((u32)(0x920b9cu)));
    /* 00518d48: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00518d4b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00518d4d: fadd dword ptr [0x920ba0] */ ST(0) = ST(0) + R_F32((u32)(0x920ba0u));
    /* 00518d53: fstp dword ptr [ebp + 0x458] */ W_F32((u32)(r_ebp+0x458u), ST(0)); FPOP();
    /* 00518d59: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
    /* 00518d63: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518d65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518d67: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 00518d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518d72: mov dword ptr [ebp + 0x45c], eax */ W32((u32)(r_ebp+0x45cu), r_eax);
    /* 00518d78: mov dword ptr [ebp + 0x3f0], 0 */ W32((u32)(r_ebp+0x3f0u), 0x0u);
    /* 00518d82: mov dword ptr [ebp + 0x460], eax */ W32((u32)(r_ebp+0x460u), r_eax);
    /* 00518d88: mov dword ptr [ebp + 0x464], eax */ W32((u32)(r_ebp+0x464u), r_eax);
    /* 00518d8e: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 00518d94: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
    /* 00518d9e: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 00518da4: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 00518daa: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00518db0: mov dword ptr [ebp + 0x3f8], 0 */ W32((u32)(r_ebp+0x3f8u), 0x0u);
    /* 00518dba: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 00518dc0: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 00518dc6: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 00518dcc: mov dword ptr [ebp + 0x3fc], 0 */ W32((u32)(r_ebp+0x3fcu), 0x0u);
    /* 00518dd6: mov dword ptr [ebp + 0x3e4], eax */ W32((u32)(r_ebp+0x3e4u), r_eax);
    /* 00518ddc: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00518de3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518de5: mov dword ptr [ebp + 0x400], 0 */ W32((u32)(r_ebp+0x400u), 0x0u);
    /* 00518def: mov dword ptr [ebp + 0x404], 0 */ W32((u32)(r_ebp+0x404u), 0x0u);
    /* 00518df9: mov dword ptr [ebp + 0x408], 0 */ W32((u32)(r_ebp+0x408u), 0x0u);
    /* 00518e03: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
    /* 00518e0d: mov dword ptr [ebp + 0x410], 0 */ W32((u32)(r_ebp+0x410u), 0x0u);
    /* 00518e17: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x518e1du); call_ind(t); }
    /* 00518e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518e1e: ret  */ FN_RET(0x00518bfc); r_esp += 4; return;
}

void f_00518e20(void) /* sub_518E20 */
{
    FN_ENTER(0x00518e20);
    /* 00518e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00518e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00518e25: push 0x8d4574 */ { u32 v = 0x8d4574u; r_esp -= 4; W32(r_esp, v); }
    /* 00518e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00518e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518e31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00518e38: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00518e3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00518e3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00518e41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00518e44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00518e47: call 0x51a29c */ r_esp -= 4; W32(r_esp, 0x518e4cu); f_0051a29c();
    /* 00518e4c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00518e53: mov dword ptr [0xa72d64], eax */ W32((u32)(0xa72d64u), r_eax);
    /* 00518e58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00518e5a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x518e5fu); f_008581c5();
    /* 00518e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00518e60: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00518e63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518e65: je 0x518f49 */ if (fZ) goto L_00518f49;
L_00518e6b:; BB(0x00518e6b);
    /* 00518e6b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00518e72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00518e79: mov eax, dword ptr [0xa72d64] */ r_eax = R32((u32)(0xa72d64u));
    /* 00518e7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00518e81: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00518e87: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00518e8a: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x518e8fu); f_00511b74();
    /* 00518e8f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00518e92: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00518e99:; BB(0x00518e99);
    /* 00518e99: mov dword ptr [0xa72d78], eax */ W32((u32)(0xa72d78u), r_eax);
    /* 00518e9e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00518ea5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ea7: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x518eacu); f_0077a684();
    /* 00518eac: mov dword ptr [0xa72d74], eax */ W32((u32)(0xa72d74u), r_eax);
    /* 00518eb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518eb3: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x518eb8u); f_0077a698();
    /* 00518eb8: mov dword ptr [0xa72d70], eax */ W32((u32)(0xa72d70u), r_eax);
    /* 00518ebd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ebf: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x518ec4u); f_0077a6b4();
    /* 00518ec4: mov dword ptr [0xa72d6c], eax */ W32((u32)(0xa72d6cu), r_eax);
    /* 00518ec9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ecb: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x518ed0u); f_0077a6cc();
    /* 00518ed0: movzx edx, word ptr [0x920b5c] */ r_edx = (u32)R16((u32)(0x920b5cu));
    /* 00518ed7: movzx ecx, word ptr [0x920b5e] */ r_ecx = (u32)R16((u32)(0x920b5eu));
    /* 00518ede: movzx ebx, word ptr [0x920b60] */ r_ebx = (u32)R16((u32)(0x920b60u));
    /* 00518ee5: mov edi, dword ptr [0xa72d64] */ r_edi = R32((u32)(0xa72d64u));
    /* 00518eeb: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00518ef1: mov dword ptr [0xa72d68], eax */ W32((u32)(0xa72d68u), r_eax);
    /* 00518ef6: mov eax, dword ptr [0x920b58] */ r_eax = R32((u32)(0x920b58u));
    /* 00518efb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00518efe: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00518f02: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00518f08: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00518f0c: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00518f10: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00518f13: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00518f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518f17: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00518f1c: push dword ptr [0x9bb63c] */ { u32 v = R32((u32)(0x9bb63cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00518f22: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00518f25: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00518f28: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00518f2a: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x518f2fu); f_00608470();
    /* 00518f2f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00518f32: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518f35: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00518f38: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00518f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00518f3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00518f45: mov esp, ebp */ r_esp = r_ebp;
    /* 00518f47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518f48: ret  */ FN_RET(0x00518e20); r_esp += 4; return;
L_00518f49:; BB(0x00518f49);
    /* 00518f49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518f4b: jmp 0x518e99 */ goto L_00518e99;
}

void f_00518f50(void) /* sub_518F50 */
{
    FN_ENTER(0x00518f50);
    /* 00518f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518f51: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00518f53: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00518f56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00518f58: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x518f5eu); call_ind(t); }
    /* 00518f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518f60: je 0x518f73 */ if (fZ) goto L_00518f73;
L_00518f62:; BB(0x00518f62);
    /* 00518f62: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 00518f68: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00518f6b: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 00518f71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518f72: ret  */ FN_RET(0x00518f50); r_esp += 4; return;
L_00518f73:; BB(0x00518f73);
    /* 00518f73: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 00518f79: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00518f7c: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 00518f82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518f83: ret  */ FN_RET(0x00518f50); r_esp += 4; return;
}

void f_00518f84(void) /* sub_518F84 */
{
    FN_ENTER(0x00518f84);
    /* 00518f84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00518f85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00518f87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00518f89: call 0x518fa8 */ r_esp -= 4; W32(r_esp, 0x518f8eu); f_00518fa8();
    /* 00518f8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00518f92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00518f94: jne 0x518f9a */ if (!fZ) goto L_00518f9a;
L_00518f96:; BB(0x00518f96);
    /* 00518f96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00518f97: ret 4 */ FN_RET(0x00518f84); r_esp += 8; return;
L_00518f9a:; BB(0x00518f9a);
    /* 00518f9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00518f9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x518fa0u); f_005c2f74();
    /* 00518fa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00518fa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00518fa2: ret 4 */ FN_RET(0x00518f84); r_esp += 8; return;
}

void f_00518fa8(void) /* sub_518FA8 */
{
    FN_ENTER(0x00518fa8);
    /* 00518fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518fa9: mov ebp, esp */ r_ebp = r_esp;
    /* 00518fab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00518fad: push 0x8d45be */ { u32 v = 0x8d45beu; r_esp -= 4; W32(r_esp, v); }
    /* 00518fb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00518fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518fb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00518fc0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00518fc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00518fc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00518fc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00518fcc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00518fcf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00518fd2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00518fd9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00518fdc: mov dword ptr [ecx], 0xafffe0 */ W32((u32)(r_ecx), 0xafffe0u);
    /* 00518fe2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x518fe7u); f_007b9c8c();
    /* 00518fe7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00518fee: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00518ff3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00518ff6: add eax, 0x448 */ {  u32 a = r_eax; u32 b = 0x448u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00518ffb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ffd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00518fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519000: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x519005u); f_008586d6();
    /* 00519005: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051900c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051900f: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x519014u); f_0051f54c();
    /* 00519014: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00519017: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051901e: mov esp, ebp */ r_esp = r_ebp;
    /* 00519020: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519021: ret  */ FN_RET(0x00518fa8); r_esp += 4; return;
}

