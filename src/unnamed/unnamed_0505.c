#include "protos.h"

void f_00505020(void) /* sub_505020 */
{
    FN_ENTER(0x00505020);
    /* 00505020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00505021: mov ebp, esp */ r_ebp = r_esp;
    /* 00505023: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00505025: push 0x8d3830 */ { u32 v = 0x8d3830u; r_esp -= 4; W32(r_esp, v); }
    /* 0050502a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00505030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505031: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00505038: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050503b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050503e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00505041: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00505044: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00505047: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0050504a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00505051: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00505054: mov dword ptr [eax], 0xafeb98 */ W32((u32)(r_eax), 0xafeb98u);
    /* 0050505a: mov ecx, 0x9ba43c */ r_ecx = 0x9ba43cu;
    /* 0050505f: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x505064u); f_00829de0();
    /* 00505064: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050506b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050506e: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x505073u); f_004f7078();
    /* 00505073: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00505076: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050507d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050507f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505080: ret  */ FN_RET(0x00505020); r_esp += 4; return;
}

void f_00505084(void) /* sub_505084 */
{
    FN_ENTER(0x00505084);
    /* 00505084: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00505085: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505088: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050508a: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0050508d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050508f: je 0x505226 */ if (fZ) goto L_00505226;
L_00505095:; BB(0x00505095);
    /* 00505095: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050509b: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 005050a0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5050a5u); f_007c1160();
    /* 005050a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005050a7: je 0x5050c1 */ if (fZ) goto L_005050c1;
L_005050a9:; BB(0x005050a9);
    /* 005050a9: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005050ae: push dword ptr [0xa72b60] */ { u32 v = R32((u32)(0xa72b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005050b4: push 0x91fcf0 */ { u32 v = 0x91fcf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005050b9: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x5050beu); f_005b9f68();
    /* 005050be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005050c1:; BB(0x005050c1);
    /* 005050c1: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005050c7: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 005050cc: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5050d1u); f_007c1160();
    /* 005050d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005050d3: je 0x50511b */ if (fZ) goto L_0050511b;
L_005050d5:; BB(0x005050d5);
    /* 005050d5: movsx eax, byte ptr [ebx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x45u));
    /* 005050d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005050dc: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 005050df: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005050e2: jl 0x5050ec */ if ((fS!=fO)) goto L_005050ec;
L_005050e4:; BB(0x005050e4);
    /* 005050e4: mov byte ptr [ebx + 0x45], 0 */ W8((u32)(r_ebx+0x45u), 0x0u);
    /* 005050e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005050ea: jmp 0x5050ef */ goto L_005050ef;
L_005050ec:; BB(0x005050ec);
    /* 005050ec: mov byte ptr [ebx + 0x45], al */ W8((u32)(r_ebx+0x45u), (u8)r_eax);
L_005050ef:; BB(0x005050ef);
    /* 005050ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005050f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005050f2: call 0x50522c */ r_esp -= 4; W32(r_esp, 0x5050f7u); f_0050522c();
    /* 005050f7: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 005050fa: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 00505101: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00505103: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00505106: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 0050510d: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00505110: mov word ptr [edx + 0x48], ax */ W16((u32)(r_edx+0x48u), (u16)r_eax);
    /* 00505114: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
L_0050511b:; BB(0x0050511b);
    /* 0050511b: movsx eax, byte ptr [ebx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x45u));
    /* 0050511f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505120: push 0x91fd68 */ { u32 v = 0x91fd68u; r_esp -= 4; W32(r_esp, v); }
    /* 00505125: push 0x20008 */ { u32 v = 0x20008u; r_esp -= 4; W32(r_esp, v); }
    /* 0050512a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50512fu); f_0061cdb0();
    /* 0050512f: push dword ptr [0xa72b60] */ { u32 v = R32((u32)(0xa72b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505135: push 0x91fd78 */ { u32 v = 0x91fd78u; r_esp -= 4; W32(r_esp, v); }
    /* 0050513a: push 0x160008 */ { u32 v = 0x160008u; r_esp -= 4; W32(r_esp, v); }
    /* 0050513f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x505144u); f_0061cdb0();
    /* 00505144: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00505149: push 0x91fd84 */ { u32 v = 0x91fd84u; r_esp -= 4; W32(r_esp, v); }
    /* 0050514e: push 0x16000a */ { u32 v = 0x16000au; r_esp -= 4; W32(r_esp, v); }
    /* 00505153: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x505158u); f_0061cdb0();
    /* 00505158: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050515b: mov dword ptr [esp], 0x505534 */ W32((u32)(r_esp), 0x505534u);
    /* 00505162: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 00505167: mov dword ptr [esp + 4], 0x505598 */ W32((u32)(r_esp+0x4u), 0x505598u);
    /* 0050516f: mov dword ptr [esp + 8], 0x5055d0 */ W32((u32)(r_esp+0x8u), 0x5055d0u);
    /* 00505177: mov dword ptr [esp + 0xc], 0x505608 */ W32((u32)(r_esp+0xcu), 0x505608u);
    /* 0050517f: mov dword ptr [esp + 0x10], 0x505640 */ W32((u32)(r_esp+0x10u), 0x505640u);
    /* 00505187: mov dword ptr [esp + 0x14], 0x505678 */ W32((u32)(r_esp+0x14u), 0x505678u);
    /* 0050518f: mov dword ptr [esp + 0x18], 0x5056b0 */ W32((u32)(r_esp+0x18u), 0x5056b0u);
    /* 00505197: mov dword ptr [esp + 0x1c], 0x5056e8 */ W32((u32)(r_esp+0x1cu), 0x5056e8u);
    /* 0050519f: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 005051a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5051aau); f_007c1160();
    /* 005051aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005051ac: je 0x5051b2 */ if (fZ) goto L_005051b2;
L_005051ae:; BB(0x005051ae);
    /* 005051ae: add byte ptr [ebx + 0x44], 1 */ { u32 ad = (u32)(r_ebx+0x44u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_005051b2:; BB(0x005051b2);
    /* 005051b2: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 005051b8: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 005051bd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5051c2u); f_007c1160();
    /* 005051c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005051c4: je 0x5051d2 */ if (fZ) goto L_005051d2;
L_005051c6:; BB(0x005051c6);
    /* 005051c6: movsx eax, byte ptr [ebx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x44u));
    /* 005051ca: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005051cd: mov byte ptr [ebx + 0x44], al */ W8((u32)(r_ebx+0x44u), (u8)r_eax);
    /* 005051d0: jmp 0x5051d6 */ goto L_005051d6;
L_005051d2:; BB(0x005051d2);
    /* 005051d2: movsx eax, byte ptr [ebx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x44u));
L_005051d6:; BB(0x005051d6);
    /* 005051d6: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005051d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005051db: jge 0x5051e6 */ if ((fS==fO)) goto L_005051e6;
L_005051dd:; BB(0x005051dd);
    /* 005051dd: mov byte ptr [ebx + 0x44], 7 */ W8((u32)(r_ebx+0x44u), 0x7u);
    /* 005051e1: mov eax, 7 */ r_eax = 0x7u;
L_005051e6:; BB(0x005051e6);
    /* 005051e6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005051e9: jl 0x5051ef */ if ((fS!=fO)) goto L_005051ef;
L_005051eb:; BB(0x005051eb);
    /* 005051eb: mov byte ptr [ebx + 0x44], 0 */ W8((u32)(r_ebx+0x44u), 0x0u);
L_005051ef:; BB(0x005051ef);
    /* 005051ef: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 005051f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005051f5: mov esi, eax */ r_esi = r_eax;
L_005051f7:; BB(0x005051f7);
    /* 005051f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005051f9: call dword ptr [esp + esi*4] */ { u32 t = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, 0x5051fcu); call_ind(t); }
    /* 005051fc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005051ff: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00505202: jl 0x5051f7 */ if ((fS!=fO)) goto L_005051f7;
L_00505204:; BB(0x00505204);
    /* 00505204: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00505208: movsx eax, byte ptr [ebx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x45u));
    /* 0050520c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050520d: lea edx, [ebx + 0x3c] */ r_edx = (u32)(r_ebx+0x3cu);
    /* 00505210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505211: call 0x5037b8 */ r_esp -= 4; W32(r_esp, 0x505216u); f_005037b8();
    /* 00505216: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00505219: movzx eax, byte ptr [ebx + 0x45] */ r_eax = (u32)R8((u32)(r_ebx+0x45u));
    /* 0050521d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050521e: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00505221: call 0x5039ec */ r_esp -= 4; W32(r_esp, 0x505226u); f_005039ec();
L_00505226:; BB(0x00505226);
    /* 00505226: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505229: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050522a: ret  */ FN_RET(0x00505084); r_esp += 4; return;
}

void f_0050522c(void) /* sub_50522C */
{
    FN_ENTER(0x0050522c);
    /* 0050522c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00505230: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00505233: jl 0x505239 */ if ((fS!=fO)) goto L_00505239;
L_00505235:; BB(0x00505235);
    /* 00505235: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505237: jmp 0x505246 */ goto L_00505246;
L_00505239:; BB(0x00505239);
    /* 00505239: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0050523c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050523e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00505240: add edx, dword ptr [0xa72b60] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72b60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00505246:; BB(0x00505246);
    /* 00505246: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00505248: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0050524b: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050524e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00505250: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00505253: ret 4 */ FN_RET(0x0050522c); r_esp += 8; return;
}

void f_00505240(void)
{
    FN_ENTER(0x00505240);
    /* 00505240: add edx, dword ptr [0xa72b60] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72b60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00505246: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00505248: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0050524b: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050524e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00505250: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00505253: ret 4 */ FN_RET(0x00505240); r_esp += 8; return;
}

void f_00505241(void)
{
    FN_ENTER(0x00505241);
    /* 00505241: adc eax, 0xa72b60 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa72b60u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00505246: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00505248: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0050524b: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050524e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00505250: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00505253: ret 4 */ FN_RET(0x00505241); r_esp += 8; return;
}

void f_00505258(void) /* sub_505258 */
{
    FN_ENTER(0x00505258);
    /* 00505258: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00505259: mov esi, ecx */ r_esi = r_ecx;
    /* 0050525b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0050525e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505260: je 0x505277 */ if (fZ) goto L_00505277;
L_00505262:; BB(0x00505262);
    /* 00505262: mov ecx, esi */ r_ecx = r_esi;
    /* 00505264: call 0x50527c */ r_esp -= 4; W32(r_esp, 0x505269u); f_0050527c();
    /* 00505269: mov ecx, esi */ r_ecx = r_esi;
    /* 0050526b: call 0x5052f4 */ r_esp -= 4; W32(r_esp, 0x505270u); f_005052f4();
    /* 00505270: mov ecx, esi */ r_ecx = r_esi;
    /* 00505272: call 0x50536c */ r_esp -= 4; W32(r_esp, 0x505277u); f_0050536c();
L_00505277:; BB(0x00505277);
    /* 00505277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00505278: ret  */ FN_RET(0x00505258); r_esp += 4; return;
}

void f_0050527c(void) /* sub_50527C */
{
    FN_ENTER(0x0050527c);
    /* 0050527c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050527f: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00505282: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00505284: mov dword ptr [esp], 0x42c80000 */ W32((u32)(r_esp), 0x42c80000u);
    /* 0050528b: mov dword ptr [esp + 4], 0x43960000 */ W32((u32)(r_esp+0x4u), 0x43960000u);
    /* 00505293: mov dword ptr [esp + 8], 0x43480000 */ W32((u32)(r_esp+0x8u), 0x43480000u);
    /* 0050529b: mov dword ptr [esp + 0xc], 0x43c80000 */ W32((u32)(r_esp+0xcu), 0x43c80000u);
    /* 005052a3: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005052ab: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005052b3: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 005052bb: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 005052c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005052c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005052c5: call 0x504ad4 */ r_esp -= 4; W32(r_esp, 0x5052cau); f_00504ad4();
    /* 005052ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005052cc: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x5052d1u); f_0082bb30();
    /* 005052d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005052d3: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005052d8: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x5052ddu); f_0082bb60();
    /* 005052dd: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005052e2: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005052e6: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x5052ebu); f_0082b440();
    /* 005052eb: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x5052f0u); f_004ac444();
    /* 005052f0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005052f3: ret  */ FN_RET(0x0050527c); r_esp += 4; return;
}

void f_005052f4(void)
{
    FN_ENTER(0x005052f4);
    /* 005052f4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005052f7: mov dword ptr [esp], 0x43960000 */ W32((u32)(r_esp), 0x43960000u);
    /* 005052fe: mov ecx, 0x9ba43c */ r_ecx = 0x9ba43cu;
    /* 00505303: mov dword ptr [esp + 4], 0x43960000 */ W32((u32)(r_esp+0x4u), 0x43960000u);
    /* 0050530b: mov dword ptr [esp + 8], 0x43c80000 */ W32((u32)(r_esp+0x8u), 0x43c80000u);
    /* 00505313: mov dword ptr [esp + 0xc], 0x43c80000 */ W32((u32)(r_esp+0xcu), 0x43c80000u);
    /* 0050531b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00505323: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0050532b: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00505333: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 0050533b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x505340u); f_00829cc8();
    /* 00505340: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505342: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x505347u); f_0082bb30();
    /* 00505347: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505349: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0050534e: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x505353u); f_0082bb60();
    /* 00505353: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00505358: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0050535c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x505361u); f_0082b440();
    /* 00505361: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x505366u); f_004ac444();
    /* 00505366: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505369: ret  */ FN_RET(0x005052f4); r_esp += 4; return;
}

void f_00505345(void)
{
    FN_ENTER(0x00505345);
    /* 00505345: xor al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00505347: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505349: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0050534e: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x505353u); f_0082bb60();
    /* 00505353: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00505358: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0050535c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x505361u); f_0082b440();
    /* 00505361: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x505366u); f_004ac444();
    /* 00505366: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505369: ret  */ FN_RET(0x00505345); r_esp += 4; return;
}

void f_0050536c(void) /* sub_50536C */
{
    FN_ENTER(0x0050536c);
    /* 0050536c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050536d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505370: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00505372: mov ecx, 0x9ba43c */ r_ecx = 0x9ba43cu;
    /* 00505377: mov dword ptr [esp], 0x43480000 */ W32((u32)(r_esp), 0x43480000u);
    /* 0050537e: mov dword ptr [esp + 4], 0x43160000 */ W32((u32)(r_esp+0x4u), 0x43160000u);
    /* 00505386: mov dword ptr [esp + 8], 0x43960000 */ W32((u32)(r_esp+0x8u), 0x43960000u);
    /* 0050538e: mov dword ptr [esp + 0xc], 0x437a0000 */ W32((u32)(r_esp+0xcu), 0x437a0000u);
    /* 00505396: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0050539e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005053a6: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 005053ae: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 005053b6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5053bbu); f_00829cc8();
    /* 005053bb: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 005053be: call 0x504ae0 */ r_esp -= 4; W32(r_esp, 0x5053c3u); f_00504ae0();
    /* 005053c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005053c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005053c7: mov edx, eax */ r_edx = r_eax;
    /* 005053c9: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x5053ceu); f_00835e68();
    /* 005053ce: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005053d3: mov edx, 1 */ r_edx = 0x1u;
    /* 005053d8: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x5053ddu); f_00835ee0();
    /* 005053dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005053df: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005053e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005053e6: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x5053ebu); f_00835e1c();
    /* 005053eb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005053f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005053f2: call 0x8361b4 */ r_esp -= 4; W32(r_esp, 0x5053f7u); f_008361b4();
    /* 005053f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005053f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005053fb: call 0x5067f8 */ r_esp -= 4; W32(r_esp, 0x505400u); f_005067f8();
    /* 00505400: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00505403: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00505408: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 00505410: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00505412: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00505417: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00505419: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050541b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050541c: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x505422u); call_ind(t); }
    /* 00505422: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505426: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0050542b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050542d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050542f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00505431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505432: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x505438u); call_ind(t); }
    /* 00505438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050543a: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x50543fu); f_0082bb30();
    /* 0050543f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505441: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00505446: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x50544bu); f_0082bb60();
    /* 0050544b: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00505450: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00505454: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x505459u); f_0082b440();
    /* 00505459: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x50545eu); f_004ac444();
    /* 0050545e: call 0x50689c */ r_esp -= 4; W32(r_esp, 0x505463u); f_0050689c();
    /* 00505463: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00505468: call 0x8361bc */ r_esp -= 4; W32(r_esp, 0x50546du); f_008361bc();
    /* 0050546d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050546f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00505474: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505476: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x50547bu); f_00835e1c();
    /* 0050547b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050547d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00505482: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505484: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x505489u); f_00835e1c();
    /* 00505489: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050548e: call 0x835f44 */ r_esp -= 4; W32(r_esp, 0x505493u); f_00835f44();
    /* 00505493: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00505495: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050549a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050549c: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x5054a1u); f_00835e68();
    /* 005054a1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005054a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005054a5: ret  */ FN_RET(0x0050536c); r_esp += 4; return;
}

void f_005054a8(void) /* sub_5054A8 */
{
    FN_ENTER(0x005054a8);
    /* 005054a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005054a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005054ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005054ad: push 0x8d3858 */ { u32 v = 0x8d3858u; r_esp -= 4; W32(r_esp, v); }
    /* 005054b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005054b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005054b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005054c0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005054c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005054c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005054c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005054cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005054cf: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005054d2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005054d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005054d7: je 0x5054e7 */ if (fZ) goto L_005054e7;
L_005054d9:; BB(0x005054d9);
    /* 005054d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005054dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005054e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005054e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005054e6: ret  */ FN_RET(0x005054a8); r_esp += 4; return;
L_005054e7:; BB(0x005054e7);
    /* 005054e7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005054ee: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005054f0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5054f5u); f_005caba4();
    /* 005054f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005054f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005054f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005054fb: je 0x50552d */ if (fZ) goto L_0050552d;
L_005054fd:; BB(0x005054fd);
    /* 005054fd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00505504: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050550b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050550e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00505511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505512: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00505514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00505516: call 0x5037e8 */ r_esp -= 4; W32(r_esp, 0x50551bu); f_005037e8();
    /* 0050551b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050551e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00505525:; BB(0x00505525);
    /* 00505525: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00505528: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0050552b: jmp 0x5054d9 */ goto L_005054d9;
L_0050552d:; BB(0x0050552d);
    /* 0050552d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050552f: jmp 0x505525 */ goto L_00505525;
}

void f_00505534(void) /* sub_505534 */
{
    FN_ENTER(0x00505534);
    /* 00505534: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00505535: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505538: mov esi, ecx */ r_esi = r_ecx;
    /* 0050553a: movzx eax, byte ptr [esi + 0x3c] */ r_eax = (u32)R8((u32)(r_esi+0x3cu));
    /* 0050553e: mov dword ptr [esp], 0x91fd90 */ W32((u32)(r_esp), 0x91fd90u);
    /* 00505545: mov dword ptr [esp + 4], 0x91fd94 */ W32((u32)(r_esp+0x4u), 0x91fd94u);
    /* 0050554d: mov dword ptr [esp + 8], 0x91fd98 */ W32((u32)(r_esp+0x8u), 0x91fd98u);
    /* 00505555: push dword ptr [esp + eax*4] */ { u32 v = R32((u32)(r_esp+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00505558: push 0x91fda4 */ { u32 v = 0x91fda4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050555d: push 0x2000a */ { u32 v = 0x2000au; r_esp -= 4; W32(r_esp, v); }
    /* 00505562: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x505567u); f_0061cdb0();
    /* 00505567: movzx eax, byte ptr [esi + 0x3c] */ r_eax = (u32)R8((u32)(r_esi+0x3cu));
    /* 0050556b: movsx edx, byte ptr [esi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x44u));
    /* 0050556f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00505573: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00505577: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00505579: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050557f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505580: push 0x9ba458 */ { u32 v = 0x9ba458u; r_esp -= 4; W32(r_esp, v); }
    /* 00505585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505586: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x50558bu); f_004f6e28();
    /* 0050558b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0050558f: mov byte ptr [esi + 0x3c], al */ W8((u32)(r_esi+0x3cu), (u8)r_eax);
    /* 00505592: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505595: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00505596: ret  */ FN_RET(0x00505534); r_esp += 4; return;
}

void f_00505545(void)
{
    FN_ENTER(0x00505545);
    /* 00505545: mov dword ptr [esp + 4], 0x91fd94 */ W32((u32)(r_esp+0x4u), 0x91fd94u);
    /* 0050554d: mov dword ptr [esp + 8], 0x91fd98 */ W32((u32)(r_esp+0x8u), 0x91fd98u);
    /* 00505555: push dword ptr [esp + eax*4] */ { u32 v = R32((u32)(r_esp+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00505558: push 0x91fda4 */ { u32 v = 0x91fda4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050555d: push 0x2000a */ { u32 v = 0x2000au; r_esp -= 4; W32(r_esp, v); }
    /* 00505562: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x505567u); f_0061cdb0();
    /* 00505567: movzx eax, byte ptr [esi + 0x3c] */ r_eax = (u32)R8((u32)(r_esi+0x3cu));
    /* 0050556b: movsx edx, byte ptr [esi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x44u));
    /* 0050556f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00505573: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00505577: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00505579: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050557f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505580: push 0x9ba458 */ { u32 v = 0x9ba458u; r_esp -= 4; W32(r_esp, v); }
    /* 00505585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505586: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x50558bu); f_004f6e28();
    /* 0050558b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0050558f: mov byte ptr [esi + 0x3c], al */ W8((u32)(r_esi+0x3cu), (u8)r_eax);
    /* 00505592: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505595: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00505596: ret  */ FN_RET(0x00505545); r_esp += 4; return;
}

void f_00505556(void)
{
    FN_ENTER(0x00505556);
    /* 00505556: xor al, 0x84 */ {  u32 a = (u8)r_eax; u32 b = 0x84u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00505558: push 0x91fda4 */ { u32 v = 0x91fda4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050555d: push 0x2000a */ { u32 v = 0x2000au; r_esp -= 4; W32(r_esp, v); }
    /* 00505562: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x505567u); f_0061cdb0();
    /* 00505567: movzx eax, byte ptr [esi + 0x3c] */ r_eax = (u32)R8((u32)(r_esi+0x3cu));
    /* 0050556b: movsx edx, byte ptr [esi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x44u));
    /* 0050556f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00505573: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00505577: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00505579: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050557f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505580: push 0x9ba458 */ { u32 v = 0x9ba458u; r_esp -= 4; W32(r_esp, v); }
    /* 00505585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505586: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x50558bu); f_004f6e28();
    /* 0050558b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0050558f: mov byte ptr [esi + 0x3c], al */ W8((u32)(r_esi+0x3cu), (u8)r_eax);
    /* 00505592: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505595: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00505596: ret  */ FN_RET(0x00505556); r_esp += 4; return;
}

void f_00505598(void)
{
    FN_ENTER(0x00505598);
    /* 00505598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505599: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050559a: mov edi, ecx */ r_edi = r_ecx;
    /* 0050559c: movsx eax, byte ptr [edi + 0x3d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x3du));
    /* 005055a0: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 005055a4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005055a7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005055aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005055ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005055af: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005055b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005055b6: push 0x9ba480 */ { u32 v = 0x9ba480u; r_esp -= 4; W32(r_esp, v); }
    /* 005055bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005055bc: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x5055c1u); f_004f6e28();
    /* 005055c1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005055c5: mov byte ptr [edi + 0x3d], al */ W8((u32)(r_edi+0x3du), (u8)r_eax);
    /* 005055c8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005055cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005055cc: ret  */ FN_RET(0x00505598); r_esp += 4; return;
}

void f_005055d0(void)
{
    FN_ENTER(0x005055d0);
    /* 005055d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005055d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005055d2: mov edi, ecx */ r_edi = r_ecx;
    /* 005055d4: movsx eax, byte ptr [edi + 0x3e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x3eu));
    /* 005055d8: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 005055dc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005055df: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005055e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005055e4: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005055e7: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005055ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005055ee: push 0x9ba4a8 */ { u32 v = 0x9ba4a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005055f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005055f4: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x5055f9u); f_004f6e28();
    /* 005055f9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005055fd: mov byte ptr [edi + 0x3e], al */ W8((u32)(r_edi+0x3eu), (u8)r_eax);
    /* 00505600: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505603: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00505604: ret  */ FN_RET(0x005055d0); r_esp += 4; return;
}

void f_00505608(void)
{
    FN_ENTER(0x00505608);
    /* 00505608: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050560a: mov edi, ecx */ r_edi = r_ecx;
    /* 0050560c: movsx eax, byte ptr [edi + 0x3f] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x3fu));
    /* 00505610: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 00505614: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00505617: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0050561a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050561c: add edx, -3 */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050561f: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505626: push 0x9ba4d0 */ { u32 v = 0x9ba4d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050562b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050562c: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x505631u); f_004f6e28();
    /* 00505631: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00505635: mov byte ptr [edi + 0x3f], al */ W8((u32)(r_edi+0x3fu), (u8)r_eax);
    /* 00505638: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050563b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050563c: ret  */ FN_RET(0x00505608); r_esp += 4; return;
}

void f_00505640(void)
{
    FN_ENTER(0x00505640);
    /* 00505640: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505641: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00505642: mov edi, ecx */ r_edi = r_ecx;
    /* 00505644: movsx eax, byte ptr [edi + 0x40] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x40u));
    /* 00505648: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 0050564c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050564f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00505652: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00505654: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00505657: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050565d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050565e: push 0x9ba4f8 */ { u32 v = 0x9ba4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00505663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505664: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x505669u); f_004f6e28();
    /* 00505669: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0050566d: mov byte ptr [edi + 0x40], al */ W8((u32)(r_edi+0x40u), (u8)r_eax);
    /* 00505670: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505673: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00505674: ret  */ FN_RET(0x00505640); r_esp += 4; return;
}

void f_00505678(void)
{
    FN_ENTER(0x00505678);
    /* 00505678: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505679: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050567a: mov edi, ecx */ r_edi = r_ecx;
    /* 0050567c: movsx eax, byte ptr [edi + 0x41] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x41u));
    /* 00505680: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 00505684: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00505687: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0050568a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050568c: add edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050568f: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505695: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505696: push 0x9ba520 */ { u32 v = 0x9ba520u; r_esp -= 4; W32(r_esp, v); }
    /* 0050569b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050569c: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x5056a1u); f_004f6e28();
    /* 005056a1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005056a5: mov byte ptr [edi + 0x41], al */ W8((u32)(r_edi+0x41u), (u8)r_eax);
    /* 005056a8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005056ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005056ac: ret  */ FN_RET(0x00505678); r_esp += 4; return;
}

void f_005056b0(void)
{
    FN_ENTER(0x005056b0);
    /* 005056b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005056b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005056b2: mov edi, ecx */ r_edi = r_ecx;
    /* 005056b4: movzx eax, byte ptr [edi + 0x42] */ r_eax = (u32)R8((u32)(r_edi+0x42u));
    /* 005056b8: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 005056bc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005056bf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005056c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005056c4: add edx, -6 */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005056c7: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005056cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005056ce: push 0x9ba548 */ { u32 v = 0x9ba548u; r_esp -= 4; W32(r_esp, v); }
    /* 005056d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005056d4: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x5056d9u); f_004f6e28();
    /* 005056d9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005056dd: mov byte ptr [edi + 0x42], al */ W8((u32)(r_edi+0x42u), (u8)r_eax);
    /* 005056e0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005056e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005056e4: ret  */ FN_RET(0x005056b0); r_esp += 4; return;
}

void f_005056e8(void)
{
    FN_ENTER(0x005056e8);
    /* 005056e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005056e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005056ea: mov edi, ecx */ r_edi = r_ecx;
    /* 005056ec: movzx eax, byte ptr [edi + 0x43] */ r_eax = (u32)R8((u32)(r_edi+0x43u));
    /* 005056f0: movsx edx, byte ptr [edi + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x44u));
    /* 005056f4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005056f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005056fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005056fc: add edx, -7 */ {  u32 a = r_edx; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005056ff: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505705: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505706: push 0x9ba570 */ { u32 v = 0x9ba570u; r_esp -= 4; W32(r_esp, v); }
    /* 0050570b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050570c: call 0x4f6e28 */ r_esp -= 4; W32(r_esp, 0x505711u); f_004f6e28();
    /* 00505711: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00505715: mov byte ptr [edi + 0x43], al */ W8((u32)(r_edi+0x43u), (u8)r_eax);
    /* 00505718: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050571b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050571c: ret  */ FN_RET(0x005056e8); r_esp += 4; return;
}

void f_00505720(void)
{
    FN_ENTER(0x00505720);
    /* 00505720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00505721: mov ebp, esp */ r_ebp = r_esp;
    /* 00505723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00505725: push 0x8d3880 */ { u32 v = 0x8d3880u; r_esp -= 4; W32(r_esp, v); }
    /* 0050572a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00505730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505731: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00505738: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050573b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050573e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00505741: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00505744: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00505747: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00505749: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00505750: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x505755u); f_005caba4();
    /* 00505755: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505756: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00505759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050575b: je 0x505780 */ if (fZ) goto L_00505780;
L_0050575d:; BB(0x0050575d);
    /* 0050575d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00505764: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050576b: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00505771: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00505774: call 0x505790 */ r_esp -= 4; W32(r_esp, 0x505779u); f_00505790();
    /* 00505779: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00505780:; BB(0x00505780);
    /* 00505780: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00505783: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050578a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050578c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050578d: ret  */ FN_RET(0x00505720); r_esp += 4; return;
}

void f_00505790(void) /* sub_505790 */
{
    FN_ENTER(0x00505790);
    /* 00505790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00505791: mov ebp, esp */ r_ebp = r_esp;
    /* 00505793: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00505795: push 0x8d389c */ { u32 v = 0x8d389cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050579a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005057a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005057a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005057a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005057ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005057ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005057b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005057b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005057b7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005057ba: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005057bd: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x5057c2u); f_004f7330();
    /* 005057c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005057c9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005057cc: mov dword ptr [ebx], 0xafeb98 */ W32((u32)(r_ebx), 0xafeb98u);
    /* 005057d2: mov eax, dword ptr [0x9ba598] */ r_eax = R32((u32)(0x9ba598u));
    /* 005057d7: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 005057de: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005057e1: mov ecx, 0x9ba43c */ r_ecx = 0x9ba43cu;
    /* 005057e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005057e8: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x5057edu); f_00829e74();
    /* 005057ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005057f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005057f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005057f3: mov byte ptr [ecx + 0x44], al */ W8((u32)(r_ecx+0x44u), (u8)r_eax);
    /* 005057f6: mov byte ptr [ecx + 0x45], al */ W8((u32)(r_ecx+0x45u), (u8)r_eax);
    /* 005057f9: call 0x50522c */ r_esp -= 4; W32(r_esp, 0x5057feu); f_0050522c();
    /* 005057fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00505801: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00505804: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00505807: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050580e: mov esp, ebp */ r_esp = r_ebp;
    /* 00505810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505811: ret 4 */ FN_RET(0x00505790); r_esp += 8; return;
}

void f_00505814(void) /* sub_505814 */
{
    FN_ENTER(0x00505814);
    /* 00505814: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00505817: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0050581b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505820: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00505824: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 0050582b: ret  */ FN_RET(0x00505814); r_esp += 4; return;
}

void f_0050582c(void) /* sub_50582C */
{
    FN_ENTER(0x0050582c);
    /* 0050582c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050582d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050582f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00505831: call 0x505850 */ r_esp -= 4; W32(r_esp, 0x505836u); f_00505850();
    /* 00505836: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050583a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050583c: jne 0x505842 */ if (!fZ) goto L_00505842;
L_0050583e:; BB(0x0050583e);
    /* 0050583e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050583f: ret 4 */ FN_RET(0x0050582c); r_esp += 8; return;
L_00505842:; BB(0x00505842);
    /* 00505842: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00505843: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x505848u); f_005c2f74();
    /* 00505848: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505849: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050584a: ret 4 */ FN_RET(0x0050582c); r_esp += 8; return;
}

void f_00505845(void)
{
    FN_ENTER(0x00505845);
    /* 00505845: xlatb  */ r_eax = (r_eax & 0xffffff00u) | R8(r_ebx + (r_eax & 0xffu));
    /* 00505846: or eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505848: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505849: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050584a: ret 4 */ FN_RET(0x00505845); r_esp += 8; return;
}

void f_00505850(void) /* sub_505850 */
{
    FN_ENTER(0x00505850);
    /* 00505850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00505851: mov ebp, esp */ r_ebp = r_esp;
    /* 00505853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00505855: push 0x8d38b8 */ { u32 v = 0x8d38b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050585a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00505860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505861: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00505868: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050586b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050586e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00505871: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00505874: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00505877: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0050587a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050587d: mov dword ptr [ecx], 0xafec10 */ W32((u32)(r_ecx), 0xafec10u);
    /* 00505883: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050588a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x50588fu); f_008171e8();
    /* 0050588f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00505892: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00505899: mov esp, ebp */ r_esp = r_ebp;
    /* 0050589b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050589c: ret  */ FN_RET(0x00505850); r_esp += 4; return;
}

void f_005058a0(void) /* sub_5058A0 */
{
    FN_ENTER(0x005058a0);
    /* 005058a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005058a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005058a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005058a5: push 0x8d38d4 */ { u32 v = 0x8d38d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005058aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005058b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005058b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005058b8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005058bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005058be: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005058c1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005058c4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005058c7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005058cb: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005058cf: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005058d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005058d5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005058d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005058da: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5058dfu); f_008193cc();
    /* 005058df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005058e6: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005058e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005058ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005058ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005058f0: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 005058f3: mov dword ptr [esi], 0xafec10 */ W32((u32)(r_esi), 0xafec10u);
    /* 005058f9: mov byte ptr [esi + 0x1d], al */ W8((u32)(r_esi+0x1du), (u8)r_eax);
    /* 005058fc: call 0x504bc4 */ r_esp -= 4; W32(r_esp, 0x505901u); f_00504bc4();
    /* 00505901: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505902: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00505905: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00505908: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050590b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00505912: mov esp, ebp */ r_esp = r_ebp;
    /* 00505914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505915: ret 0xc */ FN_RET(0x005058a0); r_esp += 16; return;
}

void f_00505918(void) /* sub_505918 */
{
    FN_ENTER(0x00505918);
    /* 00505918: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0050591d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050591e: call 0x504bc4 */ r_esp -= 4; W32(r_esp, 0x505923u); f_00504bc4();
    /* 00505923: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505924: ret  */ FN_RET(0x00505918); r_esp += 4; return;
}

void f_00505928(void) /* sub_505928 */
{
    FN_ENTER(0x00505928);
    /* 00505928: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0050592c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050592e: je 0x505939 */ if (fZ) goto L_00505939;
L_00505930:; BB(0x00505930);
    /* 00505930: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505932: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x505937u); f_00829cc8();
    /* 00505937: jmp 0x505970 */ goto L_00505970;
L_00505939:; BB(0x00505939);
    /* 00505939: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050593e: call 0x8361bc */ r_esp -= 4; W32(r_esp, 0x505943u); f_008361bc();
    /* 00505943: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00505945: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050594a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050594c: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x505951u); f_00835e1c();
    /* 00505951: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00505956: call 0x835f44 */ r_esp -= 4; W32(r_esp, 0x50595bu); f_00835f44();
    /* 0050595b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050595d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00505962: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505964: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x505969u); f_00835e68();
    /* 00505969: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050596b: call 0x8361c4 */ r_esp -= 4; W32(r_esp, 0x505970u); f_008361c4();
L_00505970:; BB(0x00505970);
    /* 00505970: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x505975u); f_0061cdb0();
    /* 00505975: call 0x50689c */ r_esp -= 4; W32(r_esp, 0x50597au); f_0050689c();
    /* 0050597a: ret  */ FN_RET(0x00505928); r_esp += 4; return;
}

void f_0050597c(void) /* sub_50597C */
{
    FN_ENTER(0x0050597c);
    /* 0050597c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050597d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050597f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00505981: call 0x5059a0 */ r_esp -= 4; W32(r_esp, 0x505986u); f_005059a0();
    /* 00505986: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050598a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050598c: jne 0x505992 */ if (!fZ) goto L_00505992;
L_0050598e:; BB(0x0050598e);
    /* 0050598e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050598f: ret 4 */ FN_RET(0x0050597c); r_esp += 8; return;
L_00505992:; BB(0x00505992);
    /* 00505992: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00505993: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x505998u); f_005c2f74();
    /* 00505998: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505999: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050599a: ret 4 */ FN_RET(0x0050597c); r_esp += 8; return;
}

void f_005059a0(void) /* sub_5059A0 */
{
    FN_ENTER(0x005059a0);
    /* 005059a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005059a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005059a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005059a5: push 0x8d38f0 */ { u32 v = 0x8d38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005059aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005059b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005059b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005059b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005059bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005059be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005059c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005059c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005059c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005059ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005059d1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005059d4: mov dword ptr [esi], 0xafec48 */ W32((u32)(r_esi), 0xafec48u);
    /* 005059da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005059dc: mov word ptr [0xa72b8c], ax */ W16((u32)(0xa72b8cu), (u16)r_eax);
    /* 005059e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005059e3: mov byte ptr [0xa72b88], al */ W8((u32)(0xa72b88u), (u8)r_eax);
    /* 005059e8: call 0x807eac */ r_esp -= 4; W32(r_esp, 0x5059edu); f_00807eac();
    /* 005059ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005059ef: call 0x807eb8 */ r_esp -= 4; W32(r_esp, 0x5059f4u); f_00807eb8();
    /* 005059f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005059f6: call 0x807ec4 */ r_esp -= 4; W32(r_esp, 0x5059fbu); f_00807ec4();
    /* 005059fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005059fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00505a05: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00505a08: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x505a0du); f_008171e8();
    /* 00505a0d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00505a10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00505a13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00505a1a: mov esp, ebp */ r_esp = r_ebp;
    /* 00505a1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505a1d: ret  */ FN_RET(0x005059a0); r_esp += 4; return;
}

void f_00505a20(void) /* sub_505A20 */
{
    FN_ENTER(0x00505a20);
    /* 00505a20: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x505a25u); f_00482a10();
    /* 00505a25: ret  */ FN_RET(0x00505a20); r_esp += 4; return;
}

void f_00505a28(void) /* sub_505A28 */
{
    FN_ENTER(0x00505a28);
    /* 00505a28: mov dword ptr [0xa72b78], 1 */ W32((u32)(0xa72b78u), 0x1u);
    /* 00505a32: ret  */ FN_RET(0x00505a28); r_esp += 4; return;
}

void f_00505a34(void) /* sub_505A34 */
{
    FN_ENTER(0x00505a34);
    /* 00505a34: movzx eax, word ptr [0xa72b8c] */ r_eax = (u32)R16((u32)(0xa72b8cu));
    /* 00505a3b: ret  */ FN_RET(0x00505a34); r_esp += 4; return;
}

void f_00505a3c(void) /* sub_505A3C */
{
    FN_ENTER(0x00505a3c);
    /* 00505a3c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505a3f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00505a43: movzx edx, word ptr [0xa72b8c] */ r_edx = (u32)R16((u32)(0xa72b8cu));
    /* 00505a4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505a4c: je 0x505a8c */ if (fZ) goto L_00505a8c;
L_00505a4e:; BB(0x00505a4e);
    /* 00505a4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505a50: je 0x505a95 */ if (fZ) goto L_00505a95;
L_00505a52:; BB(0x00505a52);
    /* 00505a52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00505a54: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00505a57: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00505a5a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00505a5e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00505a61: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00505a69: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00505a6d: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00505a75: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00505a7d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x505a82u); f_0082d7b0();
    /* 00505a82: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00505a85: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505a87: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x505a8cu); f_0083b47c();
L_00505a8c:; BB(0x00505a8c);
    /* 00505a8c: mov eax, 1 */ r_eax = 0x1u;
    /* 00505a91: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505a94: ret  */ FN_RET(0x00505a3c); r_esp += 4; return;
L_00505a95:; BB(0x00505a95);
    /* 00505a95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00505a97: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505a9a: ret  */ FN_RET(0x00505a3c); r_esp += 4; return;
}

void f_00505a9c(void) /* sub_505A9C */
{
    FN_ENTER(0x00505a9c);
    /* 00505a9c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505a9f: call 0x505b00 */ r_esp -= 4; W32(r_esp, 0x505aa4u); f_00505b00();
    /* 00505aa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505aa6: je 0x505af7 */ if (fZ) goto L_00505af7;
L_00505aa8:; BB(0x00505aa8);
    /* 00505aa8: movzx eax, word ptr [0xa72b8c] */ r_eax = (u32)R16((u32)(0xa72b8cu));
    /* 00505aaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505ab1: jne 0x505abc */ if (!fZ) goto L_00505abc;
L_00505ab3:; BB(0x00505ab3);
    /* 00505ab3: mov eax, 1 */ r_eax = 0x1u;
    /* 00505ab8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505abb: ret  */ FN_RET(0x00505a9c); r_esp += 4; return;
L_00505abc:; BB(0x00505abc);
    /* 00505abc: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00505ac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00505ac2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x505ac7u); f_0068d5a8();
    /* 00505ac7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505ac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505aca: je 0x505af7 */ if (fZ) goto L_00505af7;
L_00505acc:; BB(0x00505acc);
    /* 00505acc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00505ad0: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00505ad5: call 0x505b48 */ r_esp -= 4; W32(r_esp, 0x505adau); f_00505b48();
    /* 00505ada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505adc: je 0x505af7 */ if (fZ) goto L_00505af7;
L_00505ade:; BB(0x00505ade);
    /* 00505ade: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x505ae3u); f_0082d7b0();
    /* 00505ae3: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00505ae7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505ae9: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x505aeeu); f_0083b47c();
    /* 00505aee: mov eax, 1 */ r_eax = 0x1u;
    /* 00505af3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505af6: ret  */ FN_RET(0x00505a9c); r_esp += 4; return;
L_00505af7:; BB(0x00505af7);
    /* 00505af7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00505af9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505afc: ret  */ FN_RET(0x00505a9c); r_esp += 4; return;
}

void f_00505b00(void) /* sub_505B00 */
{
    FN_ENTER(0x00505b00);
    /* 00505b00: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x505b05u); f_00482a10();
    /* 00505b05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505b07: jne 0x505b0c */ if (!fZ) goto L_00505b0c;
L_00505b09:; BB(0x00505b09);
    /* 00505b09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505b0b: ret  */ FN_RET(0x00505b00); r_esp += 4; return;
L_00505b0c:; BB(0x00505b0c);
    /* 00505b0c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x505b11u); f_00807ac0();
    /* 00505b11: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00505b14: je 0x505b37 */ if (fZ) goto L_00505b37;
L_00505b16:; BB(0x00505b16);
    /* 00505b16: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x505b1bu); f_00807ac0();
    /* 00505b1b: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00505b1e: je 0x505b37 */ if (fZ) goto L_00505b37;
L_00505b20:; BB(0x00505b20);
    /* 00505b20: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x505b25u); f_00807ac0();
    /* 00505b25: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00505b28: je 0x505b37 */ if (fZ) goto L_00505b37;
L_00505b2a:; BB(0x00505b2a);
    /* 00505b2a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x505b2fu); f_00807ac0();
    /* 00505b2f: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00505b32: je 0x505b37 */ if (fZ) goto L_00505b37;
L_00505b34:; BB(0x00505b34);
    /* 00505b34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505b36: ret  */ FN_RET(0x00505b00); r_esp += 4; return;
L_00505b37:; BB(0x00505b37);
    /* 00505b37: mov eax, 1 */ r_eax = 0x1u;
    /* 00505b3c: ret  */ FN_RET(0x00505b00); r_esp += 4; return;
}

void f_00505b48(void) /* sub_505B48 */
{
    FN_ENTER(0x00505b48);
    /* 00505b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00505b49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00505b4a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505b4d: mov ebp, edx */ r_ebp = r_edx;
    /* 00505b4f: mov ebx, eax */ r_ebx = r_eax;
    /* 00505b51: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x505b56u); f_00807ac0();
    /* 00505b56: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505b59: je 0x505be5 */ if (fZ) goto L_00505be5;
L_00505b5f:; BB(0x00505b5f);
    /* 00505b5f: mov edx, 0x56ef */ r_edx = 0x56efu;
L_00505b64:; BB(0x00505b64);
    /* 00505b64: fld dword ptr [0x91fe60] */ FPUSH(R_F32((u32)(0x91fe60u)));
    /* 00505b6a: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00505b6c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00505b6f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00505b72: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00505b75: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00505b79: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00505b7d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00505b81: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00505b85: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 00505b88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00505b89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00505b8a: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x505b8fu); f_00780630();
    /* 00505b8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00505b92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505b94: je 0x505bef */ if (fZ) goto L_00505bef;
L_00505b96:; BB(0x00505b96);
    /* 00505b96: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00505b99: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 00505b9c: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505ba2: je 0x505bef */ if (fZ) goto L_00505bef;
L_00505ba4:; BB(0x00505ba4);
    /* 00505ba4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505ba6: je 0x505bda */ if (fZ) goto L_00505bda;
L_00505ba8:; BB(0x00505ba8);
    /* 00505ba8: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00505baa: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 00505bad: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00505bb0: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00505bb3: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00505bb6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00505bb9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00505bbc: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00505bbf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00505bc2: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00505bc5: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00505bc8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00505bcb: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00505bce: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00505bd1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00505bd4: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00505bd7: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
L_00505bda:; BB(0x00505bda);
    /* 00505bda: mov eax, 1 */ r_eax = 0x1u;
    /* 00505bdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505be2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00505be3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505be4: ret  */ FN_RET(0x00505b48); r_esp += 4; return;
L_00505be5:; BB(0x00505be5);
    /* 00505be5: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00505bea: jmp 0x505b64 */ goto L_00505b64;
L_00505bef:; BB(0x00505bef);
    /* 00505bef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00505bf1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505bf4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00505bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505bf6: ret  */ FN_RET(0x00505b48); r_esp += 4; return;
}

void f_00505bf8(void) /* sub_505BF8 */
{
    FN_ENTER(0x00505bf8);
    /* 00505bf8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505bfb: movzx eax, word ptr [0xa72b8c] */ r_eax = (u32)R16((u32)(0xa72b8cu));
    /* 00505c02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505c04: jne 0x505c0a */ if (!fZ) goto L_00505c0a;
L_00505c06:; BB(0x00505c06);
    /* 00505c06: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505c09: ret  */ FN_RET(0x00505bf8); r_esp += 4; return;
L_00505c0a:; BB(0x00505c0a);
    /* 00505c0a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x505c0fu); f_0082da80();
    /* 00505c0f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00505c13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505c15: je 0x505c43 */ if (fZ) goto L_00505c43;
L_00505c17:; BB(0x00505c17);
    /* 00505c17: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 00505c1c: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 00505c22: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00505c26: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00505c2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505c2c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00505c2f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00505c33: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00505c37: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00505c3b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00505c3e: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x505c43u); f_0082f308();
L_00505c43:; BB(0x00505c43);
    /* 00505c43: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505c46: ret  */ FN_RET(0x00505bf8); r_esp += 4; return;
}

void f_00505c48(void) /* sub_505C48 */
{
    FN_ENTER(0x00505c48);
    /* 00505c48: mov dword ptr [0xa72b90], 0 */ W32((u32)(0xa72b90u), 0x0u);
    /* 00505c52: call 0x505b00 */ r_esp -= 4; W32(r_esp, 0x505c57u); f_00505b00();
    /* 00505c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505c59: je 0x505c71 */ if (fZ) goto L_00505c71;
L_00505c5b:; BB(0x00505c5b);
    /* 00505c5b: mov eax, dword ptr [0x9ba59c] */ r_eax = R32((u32)(0x9ba59cu));
    /* 00505c60: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00505c63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505c65: je 0x505c71 */ if (fZ) goto L_00505c71;
L_00505c67:; BB(0x00505c67);
    /* 00505c67: mov ecx, 0x9ba59c */ r_ecx = 0x9ba59cu;
    /* 00505c6c: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x505c71u); f_00829de0();
L_00505c71:; BB(0x00505c71);
    /* 00505c71: ret  */ FN_RET(0x00505c48); r_esp += 4; return;
}

void f_00505c74(void) /* sub_505C74 */
{
    FN_ENTER(0x00505c74);
    /* 00505c74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505c75: mov edi, ecx */ r_edi = r_ecx;
    /* 00505c77: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505c7b: mov ecx, edi */ r_ecx = r_edi;
    /* 00505c7d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x505c82u); f_008193cc();
    /* 00505c82: mov dword ptr [edi], 0xafec48 */ W32((u32)(r_edi), 0xafec48u);
    /* 00505c88: mov edx, dword ptr [0xa72b90] */ r_edx = R32((u32)(0xa72b90u));
    /* 00505c8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00505c90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00505c92: mov word ptr [0xa72b8c], ax */ W16((u32)(0xa72b8cu), (u16)r_eax);
    /* 00505c98: mov byte ptr [0xa72b88], al */ W8((u32)(0xa72b88u), (u8)r_eax);
    /* 00505c9d: je 0x505ca5 */ if (fZ) goto L_00505ca5;
L_00505c9f:; BB(0x00505c9f);
    /* 00505c9f: mov eax, edi */ r_eax = r_edi;
    /* 00505ca1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00505ca2: ret 4 */ FN_RET(0x00505c74); r_esp += 8; return;
L_00505ca5:; BB(0x00505ca5);
    /* 00505ca5: mov dword ptr [0xa72b90], edi */ W32((u32)(0xa72b90u), r_edi);
    /* 00505cab: mov dword ptr [0xa72b7c], 0 */ W32((u32)(0xa72b7cu), 0x0u);
    /* 00505cb5: mov eax, edi */ r_eax = r_edi;
    /* 00505cb7: mov dword ptr [0xa72b80], 0 */ W32((u32)(0xa72b80u), 0x0u);
    /* 00505cc1: mov dword ptr [0xa72b84], 0 */ W32((u32)(0xa72b84u), 0x0u);
    /* 00505ccb: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 00505cd2: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 00505cd9: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 00505ce0: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 00505ce7: mov dword ptr [edi + 0x34], 0x3f800000 */ W32((u32)(r_edi+0x34u), 0x3f800000u);
    /* 00505cee: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 00505cf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00505cf6: ret 4 */ FN_RET(0x00505c74); r_esp += 8; return;
}

void f_00505cfc(void) /* sub_505CFC */
{
    FN_ENTER(0x00505cfc);
    /* 00505cfc: push 0x5063d8 */ { u32 v = 0x5063d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00505d01: call 0x807eac */ r_esp -= 4; W32(r_esp, 0x505d06u); f_00807eac();
    /* 00505d06: push 0x5064e0 */ { u32 v = 0x5064e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00505d0b: call 0x807eb8 */ r_esp -= 4; W32(r_esp, 0x505d10u); f_00807eb8();
    /* 00505d10: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00505d15: call 0x807ec4 */ r_esp -= 4; W32(r_esp, 0x505d1au); f_00807ec4();
    /* 00505d1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505d1d: ret  */ FN_RET(0x00505cfc); r_esp += 4; return;
}

void f_00505d20(void) /* sub_505D20 */
{
    FN_ENTER(0x00505d20);
    /* 00505d20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505d21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00505d22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00505d23: sub esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00505d29: mov edi, ecx */ r_edi = r_ecx;
    /* 00505d2b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00505d30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505d32: je 0x505d3d */ if (fZ) goto L_00505d3d;
L_00505d34:; BB(0x00505d34);
    /* 00505d34: mov eax, dword ptr [0xa72b78] */ r_eax = R32((u32)(0xa72b78u));
    /* 00505d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505d3b: jne 0x505d47 */ if (!fZ) goto L_00505d47;
L_00505d3d:; BB(0x00505d3d);
    /* 00505d3d: add esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00505d43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00505d44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00505d45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00505d46: ret  */ FN_RET(0x00505d20); r_esp += 4; return;
L_00505d47:; BB(0x00505d47);
    /* 00505d47: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00505d4d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x505d52u); f_0068d5a8();
    /* 00505d52: mov esi, eax */ r_esi = r_eax;
    /* 00505d54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00505d57: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505d59: je 0x506292 */ if (fZ) goto L_00506292;
L_00505d5f:; BB(0x00505d5f);
    /* 00505d5f: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x505d64u); f_004d28a4();
    /* 00505d64: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00505d6c: mov ecx, 0x9ba59c */ r_ecx = 0x9ba59cu;
    /* 00505d71: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 00505d79: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00505d81: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x505d86u); f_00829cc8();
    /* 00505d86: call 0x835e40 */ r_esp -= 4; W32(r_esp, 0x505d8bu); f_00835e40();
    /* 00505d8b: call 0x83ae98 */ r_esp -= 4; W32(r_esp, 0x505d90u); f_0083ae98();
    /* 00505d90: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00505d93: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
    /* 00505d96: mov dword ptr [0xaafc80], 1 */ W32((u32)(0xaafc80u), 0x1u);
    /* 00505da0: mov dword ptr [0xa72b7c], edx */ W32((u32)(0xa72b7cu), r_edx);
    /* 00505da6: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00505da9: mov dword ptr [0xa72b80], ebp */ W32((u32)(0xa72b80u), r_ebp);
    /* 00505daf: mov dword ptr [0xa72b84], edx */ W32((u32)(0xa72b84u), r_edx);
    /* 00505db5: mov edx, dword ptr [0xaafcc4] */ r_edx = R32((u32)(0xaafcc4u));
    /* 00505dbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505dbd: mov dword ptr [0xaafc7c], 0x42c80000 */ W32((u32)(0xaafc7cu), 0x42c80000u);
    /* 00505dc7: je 0x505dd3 */ if (fZ) goto L_00505dd3;
L_00505dc9:; BB(0x00505dc9);
    /* 00505dc9: mov dword ptr [0xa114d0], 0 */ W32((u32)(0xa114d0u), 0x0u);
L_00505dd3:; BB(0x00505dd3);
    /* 00505dd3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00505dd7: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00505ddb: mov dword ptr [0x9ba5a4], edx */ W32((u32)(0x9ba5a4u), r_edx);
    /* 00505de1: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00505de5: mov dword ptr [0x9ba5a8], ebp */ W32((u32)(0x9ba5a8u), r_ebp);
    /* 00505deb: mov dword ptr [0x9ba5ac], edx */ W32((u32)(0x9ba5acu), r_edx);
    /* 00505df1: mov edx, 1 */ r_edx = 0x1u;
    /* 00505df6: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00505dfb: mov word ptr [0xa72b8c], dx */ W16((u32)(0xa72b8cu), (u16)r_edx);
    /* 00505e02: call 0x81899c */ r_esp -= 4; W32(r_esp, 0x505e07u); f_0081899c();
    /* 00505e07: fld dword ptr [0x91fe50] */ FPUSH(R_F32((u32)(0x91fe50u)));
    /* 00505e0d: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00505e11: mov ebp, dword ptr [esi + 0x300] */ r_ebp = R32((u32)(r_esi+0x300u));
    /* 00505e17: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00505e1d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00505e21: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00505e25: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 00505e29: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 00505e2f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00505e33: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00505e37: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00505e3a: call 0x505b48 */ r_esp -= 4; W32(r_esp, 0x505e3fu); f_00505b48();
    /* 00505e3f: mov ebp, eax */ r_ebp = r_eax;
    /* 00505e41: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x505e46u); f_00807db8();
    /* 00505e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505e48: jne 0x505e5d */ if (!fZ) goto L_00505e5d;
L_00505e4a:; BB(0x00505e4a);
    /* 00505e4a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505e4c: jne 0x505e5d */ if (!fZ) goto L_00505e5d;
L_00505e4e:; BB(0x00505e4e);
    /* 00505e4e: movzx edx, byte ptr [0xa72b88] */ r_edx = (u32)R8((u32)(0xa72b88u));
    /* 00505e55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505e57: je 0x505f2c */ if (fZ) goto L_00505f2c;
L_00505e5d:; BB(0x00505e5d);
    /* 00505e5d: mov byte ptr [0xa72b88], 0 */ W8((u32)(0xa72b88u), 0x0u);
    /* 00505e64: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x505e69u); f_00807db8();
    /* 00505e69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505e6b: je 0x505e8c */ if (fZ) goto L_00505e8c;
L_00505e6d:; BB(0x00505e6d);
    /* 00505e6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00505e6f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00505e74: call 0x818a68 */ r_esp -= 4; W32(r_esp, 0x505e79u); f_00818a68();
    /* 00505e79: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x505e7eu); f_00807ac0();
    /* 00505e7e: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505e81: je 0x50629c */ if (fZ) goto L_0050629c;
L_00505e87:; BB(0x00505e87);
    /* 00505e87: jmp 0x505f2c */ goto L_00505f2c;
L_00505e8c:; BB(0x00505e8c);
    /* 00505e8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00505e8e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00505e93: call 0x818a68 */ r_esp -= 4; W32(r_esp, 0x505e98u); f_00818a68();
    /* 00505e98: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00505e9b: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 00505e9e: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00505ea1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00505ea5: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00505ea9: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00505eb1: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00505eb5: mov dword ptr [esp + 0x4c], 0x3f800000 */ W32((u32)(r_esp+0x4cu), 0x3f800000u);
    /* 00505ebd: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 00505ec5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x505ecau); f_0082d7b0();
    /* 00505eca: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00505ece: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00505ed0: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x505ed5u); f_0083b47c();
    /* 00505ed5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00505ed7: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00505edc: call 0x818a68 */ r_esp -= 4; W32(r_esp, 0x505ee1u); f_00818a68();
    /* 00505ee1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00505ee3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00505ee8: call 0x818a68 */ r_esp -= 4; W32(r_esp, 0x505eedu); f_00818a68();
    /* 00505eed: movzx edx, word ptr [0xa72b8c] */ r_edx = (u32)R16((u32)(0xa72b8cu));
    /* 00505ef4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505ef6: je 0x505f2c */ if (fZ) goto L_00505f2c;
L_00505ef8:; BB(0x00505ef8);
    /* 00505ef8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x505efdu); f_0082da80();
    /* 00505efd: mov edx, dword ptr [0xaf0350] */ r_edx = R32((u32)(0xaf0350u));
    /* 00505f03: mov ebp, dword ptr [0xaf0354] */ r_ebp = R32((u32)(0xaf0354u));
    /* 00505f09: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00505f0d: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00505f11: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00505f15: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00505f17: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00505f1b: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00505f1f: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 00505f23: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00505f27: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x505f2cu); f_0082f308();
L_00505f2c:; BB(0x00505f2c);
    /* 00505f2c: fld dword ptr [0x91fe4c] */ FPUSH(R_F32((u32)(0x91fe4cu)));
    /* 00505f32: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00505f36: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505f38: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00505f3a: mov word ptr [0xa72b8c], dx */ W16((u32)(0xa72b8cu), (u16)r_edx);
L_00505f41:; BB(0x00505f41);
    /* 00505f41: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00505f47: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00505f4a: fsub dword ptr [edx + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x178u));
    /* 00505f50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00505f52: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00505f56: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00505f59: fsub dword ptr [edx + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x180u));
    /* 00505f5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00505f61: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00505f65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00505f67: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00505f6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00505f6c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00505f6f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x505f74u); f_0082e900();
    /* 00505f74: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00505f78: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00505f7c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x505f81u); f_0082e900();
    /* 00505f81: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00505f85: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00505f87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00505f89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00505f8a: jb 0x505fbe */ if (fC) goto L_00505fbe;
L_00505f8c:; BB(0x00505f8c);
    /* 00505f8c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505f8e: je 0x505fa7 */ if (fZ) goto L_00505fa7;
L_00505f90:; BB(0x00505f90);
    /* 00505f90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00505f94: fcomp dword ptr [0x91fe4c] */ fx_compare(ST(0), R_F32((u32)(0x91fe4cu))); FPOP();
    /* 00505f9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00505f9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00505f9d: je 0x505fee */ if (fZ) goto L_00505fee;
L_00505f9f:; BB(0x00505f9f);
    /* 00505f9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505fa1: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00505fa5: jmp 0x505fee */ goto L_00505fee;
L_00505fa7:; BB(0x00505fa7);
    /* 00505fa7: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00505fab: fcomp dword ptr [0x91fe4c] */ fx_compare(ST(0), R_F32((u32)(0x91fe4cu))); FPOP();
    /* 00505fb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00505fb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00505fb4: je 0x505fee */ if (fZ) goto L_00505fee;
L_00505fb6:; BB(0x00505fb6);
    /* 00505fb6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505fb8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00505fbc: jmp 0x505fee */ goto L_00505fee;
L_00505fbe:; BB(0x00505fbe);
    /* 00505fbe: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00505fc0: je 0x505fd9 */ if (fZ) goto L_00505fd9;
L_00505fc2:; BB(0x00505fc2);
    /* 00505fc2: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00505fc6: fcomp dword ptr [0x91fe4c] */ fx_compare(ST(0), R_F32((u32)(0x91fe4cu))); FPOP();
    /* 00505fcc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00505fce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00505fcf: je 0x505fee */ if (fZ) goto L_00505fee;
L_00505fd1:; BB(0x00505fd1);
    /* 00505fd1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505fd3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00505fd7: jmp 0x505fee */ goto L_00505fee;
L_00505fd9:; BB(0x00505fd9);
    /* 00505fd9: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00505fdd: fcomp dword ptr [0x91fe4c] */ fx_compare(ST(0), R_F32((u32)(0x91fe4cu))); FPOP();
    /* 00505fe3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00505fe5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00505fe6: je 0x505fee */ if (fZ) goto L_00505fee;
L_00505fe8:; BB(0x00505fe8);
    /* 00505fe8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00505fea: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
L_00505fee:; BB(0x00505fee);
    /* 00505fee: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00505ff2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x505ff7u); f_0082df08();
    /* 00505ff7: fld dword ptr [0x91fe4c] */ FPUSH(R_F32((u32)(0x91fe4cu)));
    /* 00505ffd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00505fff: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00506001: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506003: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506004: je 0x506212 */ if (fZ) goto L_00506212;
L_0050600a:; BB(0x0050600a);
    /* 0050600a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050600c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00506010: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00506014: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00506018: mov dword ptr [0x9ba5a4], edx */ W32((u32)(0x9ba5a4u), r_edx);
    /* 0050601e: mov dword ptr [0x9ba5a8], ecx */ W32((u32)(0x9ba5a8u), r_ecx);
    /* 00506024: mov dword ptr [0x9ba5ac], ebx */ W32((u32)(0x9ba5acu), r_ebx);
    /* 0050602a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x50602fu); f_0082d7b0();
    /* 0050602f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x506034u); f_0082d7b0();
    /* 00506034: fld dword ptr [esi + 0x300] */ FPUSH(R_F32((u32)(r_esi+0x300u)));
    /* 0050603a: mov edi, dword ptr [esi + 0x300] */ r_edi = R32((u32)(r_esi+0x300u));
    /* 00506040: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 00506046: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0050604c: fld dword ptr [esi + 0x308] */ FPUSH(R_F32((u32)(r_esi+0x308u)));
    /* 00506052: mov ecx, dword ptr [esi + 0x308] */ r_ecx = R32((u32)(r_esi+0x308u));
    /* 00506058: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050605a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0050605e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00506062: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00506066: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0050606a: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0050606e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00506074: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x506079u); f_0068d5a8();
    /* 00506079: mov ebx, eax */ r_ebx = r_eax;
    /* 0050607b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050607e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506080: je 0x5063cf */ if (fZ) goto L_005063cf;
L_00506086:; BB(0x00506086);
    /* 00506086: fld dword ptr [0x91fe44] */ FPUSH(R_F32((u32)(0x91fe44u)));
    /* 0050608c: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00506090: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x506095u); f_00807ac0();
    /* 00506095: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506098: je 0x5063a2 */ if (fZ) goto L_005063a2;
L_0050609e:; BB(0x0050609e);
    /* 0050609e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005060a2: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005060a6: fld dword ptr [0x9ba5a4] */ FPUSH(R_F32((u32)(0x9ba5a4u)));
    /* 005060ac: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005060b0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005060b4: fld dword ptr [0x91fe3c] */ FPUSH(R_F32((u32)(0x91fe3cu)));
    /* 005060ba: fmul dword ptr [0x9ba5a8] */ ST(0) = ST(0) * R_F32((u32)(0x9ba5a8u));
    /* 005060c0: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005060c4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005060c8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005060ca: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 005060cc: fmul dword ptr [0x9ba5ac] */ ST(0) = ST(0) * R_F32((u32)(0x9ba5acu));
    /* 005060d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005060d4: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 005060d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005060d8: fst dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0));
    /* 005060df: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005060e1: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 005060e3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005060e5: fst dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0));
    /* 005060ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005060ee: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005060f0: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 005060f7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005060f9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005060fb: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 00506102: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506104: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00506106: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506108: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 0050610f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00506111: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 00506118: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 0050611f: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 00506126: mov dword ptr [esp + 0x8c], ebx */ W32((u32)(r_esp+0x8cu), r_ebx);
    /* 0050612d: lea ecx, [esp + 0x9c] */ r_ecx = (u32)(r_esp+0x9cu);
    /* 00506134: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x506139u); f_0082def4();
    /* 00506139: fld dword ptr [0x91fe4c] */ FPUSH(R_F32((u32)(0x91fe4cu)));
    /* 0050613f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506141: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00506143: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506145: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506146: je 0x506344 */ if (fZ) goto L_00506344;
L_0050614c:; BB(0x0050614c);
    /* 0050614c: fcom dword ptr [0x9ba5a4] */ fx_compare(ST(0), R_F32((u32)(0x9ba5a4u))); 
    /* 00506152: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506154: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506155: je 0x506319 */ if (fZ) goto L_00506319;
L_0050615b:; BB(0x0050615b);
    /* 0050615b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050615d: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 00506164: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0050616b: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00506170: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00506171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00506172: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x506177u); f_0077fffc();
    /* 00506177: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050617a:; BB(0x0050617a);
    /* 0050617a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050617c: je 0x506312 */ if (fZ) goto L_00506312;
L_00506182:; BB(0x00506182);
    /* 00506182: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00506185: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00506188: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050618e: jne 0x506194 */ if (!fZ) goto L_00506194;
L_00506190:; BB(0x00506190);
    /* 00506190: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00506192: jmp 0x5061f1 */ goto L_005061f1;
L_00506194:; BB(0x00506194);
    /* 00506194: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00506196: mov dword ptr [esp + 0xa8], ebx */ W32((u32)(r_esp+0xa8u), r_ebx);
    /* 0050619d: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005061a0: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 005061a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005061a5: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 005061ac: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005061af: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005061b2: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 005061b9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005061bc: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005061bf: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 005061c6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005061c9: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 005061cc: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 005061d3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005061d6: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005061d9: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 005061e0: lea edx, [esp + 0xa8] */ r_edx = (u32)(r_esp+0xa8u);
    /* 005061e7: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x5061ecu); f_0083b47c();
    /* 005061ec: mov ebx, 1 */ r_ebx = 0x1u;
L_005061f1:; BB(0x005061f1);
    /* 005061f1: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005061f4: je 0x506301 */ if (fZ) goto L_00506301;
L_005061fa:; BB(0x005061fa);
    /* 005061fa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5061ffu); f_0082da80();
    /* 005061ff: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x506204u); f_0082da80();
    /* 00506204: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506206: jne 0x5062f2 */ if (!fZ) goto L_005062f2;
L_0050620c:; BB(0x0050620c);
    /* 0050620c: fld dword ptr [0x91fe4c] */ FPUSH(R_F32((u32)(0x91fe4cu)));
L_00506212:; BB(0x00506212);
    /* 00506212: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00506215: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00506218: jl 0x505f41 */ if ((fS!=fO)) goto L_00505f41;
L_0050621e:; BB(0x0050621e);
    /* 0050621e: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00506222:; BB(0x00506222);
    /* 00506222: mov eax, dword ptr [0xaafcc4] */ r_eax = R32((u32)(0xaafcc4u));
    /* 00506227: fstp dword ptr [0xaafc7c] */ W_F32((u32)(0xaafc7cu), ST(0)); FPOP();
    /* 0050622d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050622f: mov dword ptr [0xaafc80], 0 */ W32((u32)(0xaafc80u), 0x0u);
    /* 00506239: je 0x506245 */ if (fZ) goto L_00506245;
L_0050623b:; BB(0x0050623b);
    /* 0050623b: mov dword ptr [0xa114d0], 1 */ W32((u32)(0xa114d0u), 0x1u);
L_00506245:; BB(0x00506245);
    /* 00506245: call 0x835e60 */ r_esp -= 4; W32(r_esp, 0x50624au); f_00835e60();
    /* 0050624a: call 0x83ae98 */ r_esp -= 4; W32(r_esp, 0x50624fu); f_0083ae98();
    /* 0050624f: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00506255: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0050625b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050625d: fstp dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0)); FPOP();
    /* 00506264: fstp dword ptr [esp + 0xcc] */ W_F32((u32)(r_esp+0xccu), ST(0)); FPOP();
    /* 0050626b: mov dword ptr [esp + 0xc0], 0 */ W32((u32)(r_esp+0xc0u), 0x0u);
    /* 00506276: lea ecx, [esp + 0xc0] */ r_ecx = (u32)(r_esp+0xc0u);
    /* 0050627d: mov dword ptr [esp + 0xc4], 0 */ W32((u32)(r_esp+0xc4u), 0x0u);
    /* 00506288: call 0x82f2e4 */ r_esp -= 4; W32(r_esp, 0x50628du); f_0082f2e4();
    /* 0050628d: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x506292u); f_004d2968();
L_00506292:; BB(0x00506292);
    /* 00506292: add esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506299: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050629a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050629b: ret  */ FN_RET(0x00505d20); r_esp += 4; return;
L_0050629c:; BB(0x0050629c);
    /* 0050629c: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0050629f: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 005062a2: mov ebp, dword ptr [esi + 0x40] */ r_ebp = R32((u32)(r_esi+0x40u));
    /* 005062a5: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 005062a9: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 005062ad: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 005062b5: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
    /* 005062b9: mov dword ptr [esp + 0x7c], 0x3f800000 */ W32((u32)(r_esp+0x7cu), 0x3f800000u);
    /* 005062c1: mov dword ptr [esp + 0x80], 0 */ W32((u32)(r_esp+0x80u), 0x0u);
    /* 005062cc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5062d1u); f_0082d7b0();
    /* 005062d1: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 005062d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005062d7: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x5062dcu); f_0083b47c();
    /* 005062dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005062de: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 005062e3: call 0x818a68 */ r_esp -= 4; W32(r_esp, 0x5062e8u); f_00818a68();
    /* 005062e8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5062edu); f_0082da80();
    /* 005062ed: jmp 0x505f2c */ goto L_00505f2c;
L_005062f2:; BB(0x005062f2);
    /* 005062f2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005062f6: fld dword ptr [0x91fe4c] */ FPUSH(R_F32((u32)(0x91fe4cu)));
    /* 005062fc: jmp 0x506222 */ goto L_00506222;
L_00506301:; BB(0x00506301);
    /* 00506301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00506303: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00506308: call 0x818a68 */ r_esp -= 4; W32(r_esp, 0x50630du); f_00818a68();
    /* 0050630d: jmp 0x5061fa */ goto L_005061fa;
L_00506312:; BB(0x00506312);
    /* 00506312: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00506314: jmp 0x5061f1 */ goto L_005061f1;
L_00506319:; BB(0x00506319);
    /* 00506319: fcom dword ptr [0x9ba5ac] */ fx_compare(ST(0), R_F32((u32)(0x9ba5acu))); 
    /* 0050631f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506321: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506322: jne 0x50615b */ if (!fZ) goto L_0050615b;
L_00506328:; BB(0x00506328);
    /* 00506328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050632a: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 00506331: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00506336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00506337: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x50633cu); f_00780630();
    /* 0050633c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050633f: jmp 0x50617a */ goto L_0050617a;
L_00506344:; BB(0x00506344);
    /* 00506344: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506346: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0050634a: mov edx, dword ptr [0x9ba5a4] */ r_edx = R32((u32)(0x9ba5a4u));
    /* 00506350: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 00506357: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0050635b: mov dword ptr [esp + 0xac], ebx */ W32((u32)(r_esp+0xacu), r_ebx);
    /* 00506362: mov dword ptr [esp + 0xb0], edi */ W32((u32)(r_esp+0xb0u), r_edi);
    /* 00506369: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 00506370: mov edx, dword ptr [0x9ba5a8] */ r_edx = R32((u32)(0x9ba5a8u));
    /* 00506376: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 0050637d: mov edx, dword ptr [0x9ba5ac] */ r_edx = R32((u32)(0x9ba5acu));
    /* 00506383: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 0050638a: lea edx, [esp + 0xa8] */ r_edx = (u32)(r_esp+0xa8u);
    /* 00506391: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00506393: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x506398u); f_0083b47c();
    /* 00506398: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0050639d: jmp 0x5061f1 */ goto L_005061f1;
L_005063a2:; BB(0x005063a2);
    /* 005063a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005063a4: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5063a9u); f_007ba980();
    /* 005063a9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005063ac: cmp edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005063af: je 0x5063c0 */ if (fZ) goto L_005063c0;
L_005063b1:; BB(0x005063b1);
    /* 005063b1: fld dword ptr [0x91fe44] */ FPUSH(R_F32((u32)(0x91fe44u)));
    /* 005063b7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005063bb: jmp 0x50609e */ goto L_0050609e;
L_005063c0:; BB(0x005063c0);
    /* 005063c0: fld dword ptr [0x91fe40] */ FPUSH(R_F32((u32)(0x91fe40u)));
    /* 005063c6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005063ca: jmp 0x50609e */ goto L_0050609e;
L_005063cf:; BB(0x005063cf);
    /* 005063cf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005063d1: jmp 0x5061f1 */ goto L_005061f1;
}

