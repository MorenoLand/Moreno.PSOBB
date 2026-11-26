#include "protos.h"

void f_00401000(void) /* sub_401000 */
{
    FN_ENTER(0x00401000);
    /* 00401000: mov dword ptr [0xa3a6b0], 0x3f800000 */ W32((u32)(0xa3a6b0u), 0x3f800000u);
    /* 0040100a: mov dword ptr [0xa3a6b4], 0x41000000 */ W32((u32)(0xa3a6b4u), 0x41000000u);
    /* 00401014: mov dword ptr [0xa3a6b8], 0x3fc00000 */ W32((u32)(0xa3a6b8u), 0x3fc00000u);
    /* 0040101e: ret  */ FN_RET(0x00401000); r_esp += 4; return;
}

void f_00401020(void) /* sub_401020 */
{
    FN_ENTER(0x00401020);
    /* 00401020: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401021: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00401023: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00401025: call 0x401044 */ r_esp -= 4; W32(r_esp, 0x40102au); f_00401044();
    /* 0040102a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040102e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00401030: jne 0x401036 */ if (!fZ) goto L_00401036;
L_00401032:; BB(0x00401032);
    /* 00401032: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00401033: ret 4 */ FN_RET(0x00401020); r_esp += 8; return;
L_00401036:; BB(0x00401036);
    /* 00401036: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401037: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40103cu); f_005c2f74();
    /* 0040103c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040103d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040103e: ret 4 */ FN_RET(0x00401020); r_esp += 8; return;
}

void f_00401044(void) /* sub_401044 */
{
    FN_ENTER(0x00401044);
    /* 00401044: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401045: mov ebp, esp */ r_ebp = r_esp;
    /* 00401047: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401049: push 0x8cc010 */ { u32 v = 0x8cc010u; r_esp -= 4; W32(r_esp, v); }
    /* 0040104e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00401054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401055: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040105c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040105f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00401062: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00401065: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00401068: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040106b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040106e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00401071: mov dword ptr [ecx], 0xaf2028 */ W32((u32)(r_ecx), 0xaf2028u);
    /* 00401077: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040107e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x401083u); f_008171e8();
    /* 00401083: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401086: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040108d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040108f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401090: ret  */ FN_RET(0x00401044); r_esp += 4; return;
}

void f_00401088(void)
{
    FN_ENTER(0x00401088);
    /* 00401088: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040108d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040108f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401090: ret  */ FN_RET(0x00401088); r_esp += 4; return;
}

void f_00401094(void) /* sub_401094 */
{
    FN_ENTER(0x00401094);
    /* 00401094: mov ecx, dword ptr [0xa3a6c0] */ r_ecx = R32((u32)(0xa3a6c0u));
    /* 0040109a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040109c: je 0x4010ad */ if (fZ) goto L_004010ad;
L_0040109e:; BB(0x0040109e);
    /* 0040109e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4010a3u); f_00829de0();
    /* 004010a3: mov dword ptr [0xa3a6c0], 0 */ W32((u32)(0xa3a6c0u), 0x0u);
L_004010ad:; BB(0x004010ad);
    /* 004010ad: ret  */ FN_RET(0x00401094); r_esp += 4; return;
}

void f_004010b0(void) /* sub_4010B0 */
{
    FN_ENTER(0x004010b0);
    /* 004010b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004010b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004010b3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004010b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004010b9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4010beu); f_008193cc();
    /* 004010be: mov dword ptr [ebx], 0xaf2028 */ W32((u32)(r_ebx), 0xaf2028u);
    /* 004010c4: mov edx, dword ptr [0x9a2d08] */ r_edx = R32((u32)(0x9a2d08u));
    /* 004010ca: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004010cd: mov eax, ebx */ r_eax = r_ebx;
    /* 004010cf: mov dword ptr [ebx + 0x1c], 0xc3c80000 */ W32((u32)(r_ebx+0x1cu), 0xc3c80000u);
    /* 004010d6: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 004010dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004010de: ret 4 */ FN_RET(0x004010b0); r_esp += 8; return;
}

void f_004010e4(void) /* sub_4010E4 */
{
    FN_ENTER(0x004010e4);
    /* 004010e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004010e5: mov esi, ecx */ r_esi = r_ecx;
    /* 004010e7: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004010ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004010ec: jne 0x4010fb */ if (!fZ) goto L_004010fb;
L_004010ee:; BB(0x004010ee);
    /* 004010ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004010f0: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x4010f5u); f_008173d0();
    /* 004010f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004010f7: je 0x40114d */ if (fZ) goto L_0040114d;
L_004010f9:; BB(0x004010f9);
    /* 004010f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004010fa: ret  */ FN_RET(0x004010e4); r_esp += 4; return;
L_004010fb:; BB(0x004010fb);
    /* 004010fb: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00401100: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00401103: je 0x40114b */ if (fZ) goto L_0040114b;
L_00401105:; BB(0x00401105);
    /* 00401105: mov ecx, esi */ r_ecx = r_esi;
    /* 00401107: call 0x40115c */ r_esp -= 4; W32(r_esp, 0x40110cu); f_0040115c();
    /* 0040110c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040110e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401110: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x401115u); f_0082acfc();
    /* 00401115: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00401117: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401119: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x40111eu); f_0082acfc();
    /* 0040111e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401122: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00401125: push 0x9a2d00 */ { u32 v = 0x9a2d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0040112a: call 0x415bcc */ r_esp -= 4; W32(r_esp, 0x40112fu); f_00415bcc();
    /* 0040112f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00401131: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401133: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x401138u); f_0082acfc();
    /* 00401138: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040113a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040113c: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x401141u); f_0082acfc();
    /* 00401141: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401144: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00401147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00401149: je 0x401154 */ if (fZ) goto L_00401154;
L_0040114b:; BB(0x0040114b);
    /* 0040114b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040114c: ret  */ FN_RET(0x004010e4); r_esp += 4; return;
L_0040114d:; BB(0x0040114d);
    /* 0040114d: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x401152u); f_007a93d8();
    /* 00401152: jmp 0x401105 */ goto L_00401105;
L_00401154:; BB(0x00401154);
    /* 00401154: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x401159u); f_007a9318();
    /* 00401159: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040115a: ret  */ FN_RET(0x004010e4); r_esp += 4; return;
}

void f_00401140(void)
{
    FN_ENTER(0x00401140);
    /* 00401140: add byte ptr [ebx + 0x468b30c4], al */ { u32 ad = (u32)(r_ebx+0x468b30c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00401146: and byte ptr [ebp + 0x5e0974c0], al */ { u32 ad = (u32)(r_ebp+0x5e0974c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040114c: ret  */ FN_RET(0x00401140); r_esp += 4; return;
}

void f_0040115c(void) /* sub_40115C */
{
    FN_ENTER(0x0040115c);
    /* 0040115c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040115d: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401160: fld dword ptr [0x8f8490] */ FPUSH(R_F32((u32)(0x8f8490u)));
    /* 00401166: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0040116e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00401172: mov edx, 4 */ r_edx = 0x4u;
    /* 00401177: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0040117b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00401183: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00401187: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0040118f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00401193: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00401197: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0040119f: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004011a3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004011a7: mov eax, 0xff000000 */ r_eax = 0xff000000u;
    /* 004011ac: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 004011ae: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004011b2: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 004011b9: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004011bd: mov dword ptr [esi + 0xc], 0x43ef8000 */ W32((u32)(r_esi+0xcu), 0x43ef8000u);
    /* 004011c4: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004011c8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004011cb: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004011cf: mov dword ptr [esi + 0x10], 0x441fc000 */ W32((u32)(r_esi+0x10u), 0x441fc000u);
    /* 004011d6: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004011da: mov dword ptr [esi + 0x14], 0x43ef8000 */ W32((u32)(r_esi+0x14u), 0x43ef8000u);
    /* 004011e1: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004011e5: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004011e8: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004011ec: mov dword ptr [esi + 0x18], 0x441fc000 */ W32((u32)(r_esi+0x18u), 0x441fc000u);
    /* 004011f3: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004011f7: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 004011fe: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00401202: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00401205: fadd dword ptr [ecx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x1cu));
    /* 00401208: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0040120c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00401210: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00401213: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x401218u); f_0082b5d8();
    /* 00401218: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040121b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040121c: ret  */ FN_RET(0x0040115c); r_esp += 4; return;
}

void f_00401220(void) /* sub_401220 */
{
    FN_ENTER(0x00401220);
    /* 00401220: mov eax, 0x9a2d00 */ r_eax = 0x9a2d00u;
    /* 00401225: mov dword ptr [0xa3a6c0], eax */ W32((u32)(0xa3a6c0u), r_eax);
    /* 0040122a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040122b: push 0x8f8524 */ { u32 v = 0x8f8524u; r_esp -= 4; W32(r_esp, v); }
    /* 00401230: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x401235u); f_0081a934();
    /* 00401235: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401238: ret  */ FN_RET(0x00401220); r_esp += 4; return;
}

void f_0040123c(void) /* sub_40123C */
{
    FN_ENTER(0x0040123c);
    /* 0040123c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040123d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040123f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00401241: call 0x401260 */ r_esp -= 4; W32(r_esp, 0x401246u); f_00401260();
    /* 00401246: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040124a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040124c: jne 0x401252 */ if (!fZ) goto L_00401252;
L_0040124e:; BB(0x0040124e);
    /* 0040124e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040124f: ret 4 */ FN_RET(0x0040123c); r_esp += 8; return;
L_00401252:; BB(0x00401252);
    /* 00401252: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401253: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x401258u); f_005c2f74();
    /* 00401258: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00401259: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040125a: ret 4 */ FN_RET(0x0040123c); r_esp += 8; return;
}

void f_00401260(void) /* sub_401260 */
{
    FN_ENTER(0x00401260);
    /* 00401260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401261: mov ebp, esp */ r_ebp = r_esp;
    /* 00401263: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401265: push 0x8cc02c */ { u32 v = 0x8cc02cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040126a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00401270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401271: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00401278: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040127b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040127e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00401281: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00401284: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00401287: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040128a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040128d: mov dword ptr [ecx], 0xaf2060 */ W32((u32)(r_ecx), 0xaf2060u);
    /* 00401293: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040129a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40129fu); f_008171e8();
    /* 0040129f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004012a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004012a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004012ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004012ac: ret  */ FN_RET(0x00401260); r_esp += 4; return;
}

void f_004012b0(void) /* sub_4012B0 */
{
    FN_ENTER(0x004012b0);
    /* 004012b0: mov ecx, dword ptr [0xa3a6c8] */ r_ecx = R32((u32)(0xa3a6c8u));
    /* 004012b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004012b8: je 0x4012c9 */ if (fZ) goto L_004012c9;
L_004012ba:; BB(0x004012ba);
    /* 004012ba: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4012bfu); f_00829de0();
    /* 004012bf: mov dword ptr [0xa3a6c8], 0 */ W32((u32)(0xa3a6c8u), 0x0u);
L_004012c9:; BB(0x004012c9);
    /* 004012c9: ret  */ FN_RET(0x004012b0); r_esp += 4; return;
}

void f_004012cc(void) /* sub_4012CC */
{
    FN_ENTER(0x004012cc);
    /* 004012cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004012cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004012cf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004012d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004012d5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4012dau); f_008193cc();
    /* 004012da: mov dword ptr [ebx], 0xaf2060 */ W32((u32)(r_ebx), 0xaf2060u);
    /* 004012e0: mov edx, dword ptr [0x9a2d64] */ r_edx = R32((u32)(0x9a2d64u));
    /* 004012e6: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004012e9: mov eax, ebx */ r_eax = r_ebx;
    /* 004012eb: mov dword ptr [ebx + 0x1c], 0xffffffff */ W32((u32)(r_ebx+0x1cu), 0xffffffffu);
    /* 004012f2: mov dword ptr [ebx + 0x20], 0x3b280a81 */ W32((u32)(r_ebx+0x20u), 0x3b280a81u);
    /* 004012f9: mov dword ptr [ebx + 0x24], 1 */ W32((u32)(r_ebx+0x24u), 0x1u);
    /* 00401300: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00401301: ret 4 */ FN_RET(0x004012cc); r_esp += 8; return;
}

void f_00401304(void) /* sub_401304 */
{
    FN_ENTER(0x00401304);
    /* 00401304: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00401307: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040130a: jl 0x401314 */ if ((fS!=fO)) goto L_00401314;
L_0040130c:; BB(0x0040130c);
    /* 0040130c: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00401313: ret  */ FN_RET(0x00401304); r_esp += 4; return;
L_00401314:; BB(0x00401314);
    /* 00401314: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401317: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0040131a: ret  */ FN_RET(0x00401304); r_esp += 4; return;
}

void f_0040131c(void) /* sub_40131C */
{
    FN_ENTER(0x0040131c);
    /* 0040131c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040131d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040131e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401321: mov edi, ecx */ r_edi = r_ecx;
    /* 00401323: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00401326: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401328: jne 0x40133f */ if (!fZ) goto L_0040133f;
L_0040132a:; BB(0x0040132a);
    /* 0040132a: mov ecx, edi */ r_ecx = r_edi;
    /* 0040132c: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x401331u); f_008173d0();
    /* 00401331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401333: je 0x401406 */ if (fZ) goto L_00401406;
L_00401339:; BB(0x00401339);
    /* 00401339: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040133c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040133d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040133e: ret  */ FN_RET(0x0040131c); r_esp += 4; return;
L_0040133f:; BB(0x0040133f);
    /* 0040133f: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00401344: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401347: je 0x401400 */ if (fZ) goto L_00401400;
L_0040134d:; BB(0x0040134d);
    /* 0040134d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040134f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401351: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x401356u); f_0082acfc();
    /* 00401356: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00401358: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040135a: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x40135fu); f_0082acfc();
    /* 0040135f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401362: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00401367: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040136a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040136c: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0040136f: mov esi, edx */ r_esi = r_edx;
    /* 00401371: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00401373: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00401378: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40137du); f_0082bb30();
    /* 0040137d: mov ecx, dword ptr [0xa3a6c8] */ r_ecx = R32((u32)(0xa3a6c8u));
    /* 00401383: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x401388u); f_00829cc8();
    /* 00401388: mov ecx, esi */ r_ecx = r_esi;
    /* 0040138a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040138f: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x401394u); f_0082bb60();
    /* 00401394: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0040139b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004013a3: mov dword ptr [esp + 8], 0x441fc000 */ W32((u32)(r_esp+0x8u), 0x441fc000u);
    /* 004013ab: mov dword ptr [esp + 0xc], 0x43ef8000 */ W32((u32)(r_esp+0xcu), 0x43ef8000u);
    /* 004013b3: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004013bb: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004013c3: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 004013cb: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 004013d3: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004013d6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004013da: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4013dfu); f_0082b440();
    /* 004013df: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4013e4u); f_004ac444();
    /* 004013e4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004013e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004013e8: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x4013edu); f_0082acfc();
    /* 004013ed: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004013ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004013f1: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x4013f6u); f_0082acfc();
    /* 004013f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004013f9: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004013fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004013fe: je 0x401410 */ if (fZ) goto L_00401410;
L_00401400:; BB(0x00401400);
    /* 00401400: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00401404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00401405: ret  */ FN_RET(0x0040131c); r_esp += 4; return;
L_00401406:; BB(0x00401406);
    /* 00401406: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x40140bu); f_007a93d8();
    /* 0040140b: jmp 0x40134d */ goto L_0040134d;
L_00401410:; BB(0x00401410);
    /* 00401410: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x401415u); f_007a9318();
    /* 00401415: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401418: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00401419: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040141a: ret  */ FN_RET(0x0040131c); r_esp += 4; return;
}

void f_0040141c(void) /* sub_40141C */
{
    FN_ENTER(0x0040141c);
    /* 0040141c: mov eax, 0x9a2d5c */ r_eax = 0x9a2d5cu;
    /* 00401421: mov dword ptr [0xa3a6c8], eax */ W32((u32)(0xa3a6c8u), r_eax);
    /* 00401426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401427: push 0x8f85a8 */ { u32 v = 0x8f85a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040142c: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x401431u); f_0081a934();
    /* 00401431: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401434: ret  */ FN_RET(0x0040141c); r_esp += 4; return;
}

void f_00401438(void) /* sub_401438 */
{
    FN_ENTER(0x00401438);
    /* 00401438: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401439: mov ebp, esp */ r_ebp = r_esp;
    /* 0040143b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040143d: push 0x8cc048 */ { u32 v = 0x8cc048u; r_esp -= 4; W32(r_esp, v); }
    /* 00401442: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00401448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401449: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00401450: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401453: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00401456: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00401459: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040145c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040145f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00401462: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00401465: mov eax, ecx */ r_eax = r_ecx;
    /* 00401467: mov dword ptr [eax], 0xaf20c0 */ W32((u32)(r_eax), 0xaf20c0u);
    /* 0040146d: mov dword ptr [0xa3a6dc], 0 */ W32((u32)(0xa3a6dcu), 0x0u);
    /* 00401477: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0040147a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040147c: je 0x401494 */ if (fZ) goto L_00401494;
L_0040147e:; BB(0x0040147e);
    /* 0040147e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00401482: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00401487: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040148b: mov edx, ecx */ r_edx = r_ecx;
    /* 0040148d: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
L_00401494:; BB(0x00401494);
    /* 00401494: mov eax, ecx */ r_eax = r_ecx;
    /* 00401496: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00401499: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040149b: je 0x4014b3 */ if (fZ) goto L_004014b3;
L_0040149d:; BB(0x0040149d);
    /* 0040149d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004014a1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004014a6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004014aa: mov edx, ecx */ r_edx = r_ecx;
    /* 004014ac: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
L_004014b3:; BB(0x004014b3);
    /* 004014b3: mov eax, ecx */ r_eax = r_ecx;
    /* 004014b5: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004014b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004014ba: je 0x4014d2 */ if (fZ) goto L_004014d2;
L_004014bc:; BB(0x004014bc);
    /* 004014bc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004014c0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004014c5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004014c9: mov edx, ecx */ r_edx = r_ecx;
    /* 004014cb: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
L_004014d2:; BB(0x004014d2);
    /* 004014d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004014d9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4014deu); f_008171e8();
    /* 004014de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004014e1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004014e3: jne 0x4014f5 */ if (!fZ) goto L_004014f5;
L_004014e5:; BB(0x004014e5);
    /* 004014e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004014e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004014ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004014f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004014f2: ret 4 */ FN_RET(0x00401438); r_esp += 8; return;
L_004014f5:; BB(0x004014f5);
    /* 004014f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004014f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004014f9: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4014feu); f_005c2f74();
    /* 004014fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004014ff: jmp 0x4014e5 */ goto L_004014e5;
}

void f_00401504(void) /* sub_401504 */
{
    FN_ENTER(0x00401504);
    /* 00401504: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401505: mov ebp, esp */ r_ebp = r_esp;
    /* 00401507: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401509: push 0x8cc070 */ { u32 v = 0x8cc070u; r_esp -= 4; W32(r_esp, v); }
    /* 0040150e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00401514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401515: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040151c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040151f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00401522: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00401525: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00401528: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040152b: mov eax, dword ptr [0xa3a6dc] */ r_eax = R32((u32)(0xa3a6dcu));
    /* 00401530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401532: je 0x401544 */ if (fZ) goto L_00401544;
L_00401534:; BB(0x00401534);
    /* 00401534: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00401536: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401539: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00401540: mov esp, ebp */ r_esp = r_ebp;
    /* 00401542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401543: ret  */ FN_RET(0x00401504); r_esp += 4; return;
L_00401544:; BB(0x00401544);
    /* 00401544: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0040154b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0040154d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x401552u); f_005caba4();
    /* 00401552: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00401555: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401558: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040155b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040155d: je 0x4015c2 */ if (fZ) goto L_004015c2;
L_0040155f:; BB(0x0040155f);
    /* 0040155f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00401566: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040156d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401570: mov ecx, eax */ r_ecx = r_eax;
    /* 00401572: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x401577u); f_008193cc();
    /* 00401577: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040157a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040157d: mov dword ptr [ecx], 0xaf20c0 */ W32((u32)(r_ecx), 0xaf20c0u);
    /* 00401583: mov eax, dword ptr [0x9a2d78] */ r_eax = R32((u32)(0x9a2d78u));
    /* 00401588: mov dword ptr [ecx + 0x20], 3 */ W32((u32)(r_ecx+0x20u), 0x3u);
    /* 0040158f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00401592: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00401594: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 00401597: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 0040159a: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040159d: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 004015a0: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 004015a3: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 004015a6: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
L_004015a9:; BB(0x004015a9);
    /* 004015a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004015ac: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004015af: mov dword ptr [0xa3a6dc], eax */ W32((u32)(0xa3a6dcu), r_eax);
    /* 004015b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004015b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004015be: mov esp, ebp */ r_esp = r_ebp;
    /* 004015c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004015c1: ret  */ FN_RET(0x00401504); r_esp += 4; return;
L_004015c2:; BB(0x004015c2);
    /* 004015c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004015c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004015c7: jmp 0x4015a9 */ goto L_004015a9;
}

void f_004015cc(void) /* sub_4015CC */
{
    FN_ENTER(0x004015cc);
    /* 004015cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004015cd: mov edi, ecx */ r_edi = r_ecx;
    /* 004015cf: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004015d2: mov ecx, edi */ r_ecx = r_edi;
    /* 004015d4: call dword ptr [eax*4 + 0x9a2d68] */ { u32 t = R32((u32)(r_eax*4+0x9a2d68u)); r_esp -= 4; W32(r_esp, 0x4015dbu); call_ind(t); }
    /* 004015db: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 004015de: cmp edx, dword ptr [edi + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004015e1: je 0x4015e7 */ if (fZ) goto L_004015e7;
L_004015e3:; BB(0x004015e3);
    /* 004015e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004015e5: jmp 0x4015ed */ goto L_004015ed;
L_004015e7:; BB(0x004015e7);
    /* 004015e7: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004015ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004015ed:; BB(0x004015ed);
    /* 004015ed: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004015f0: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004015f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004015f4: ret  */ FN_RET(0x004015cc); r_esp += 4; return;
}

void f_004015f8(void) /* sub_4015F8 */
{
    FN_ENTER(0x004015f8);
    /* 004015f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004015f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004015fb: mov eax, dword ptr [0xa3ae6c] */ r_eax = R32((u32)(0xa3ae6cu));
    /* 00401600: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00401603: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00401606: jl 0x401661 */ if ((fS!=fO)) goto L_00401661;
L_00401608:; BB(0x00401608);
    /* 00401608: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401609: call 0x40d520 */ r_esp -= 4; W32(r_esp, 0x40160eu); f_0040d520();
    /* 0040160e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040160f: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401612: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401614: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00401616: call 0x401664 */ r_esp -= 4; W32(r_esp, 0x40161bu); f_00401664();
    /* 0040161b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040161c: call 0x40e2f0 */ r_esp -= 4; W32(r_esp, 0x401621u); f_0040e2f0();
    /* 00401621: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00401622: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401625: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401627: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00401629: call 0x401664 */ r_esp -= 4; W32(r_esp, 0x40162eu); f_00401664();
    /* 0040162e: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401631: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401632: call 0x40e004 */ r_esp -= 4; W32(r_esp, 0x401637u); f_0040e004();
    /* 00401637: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040163a: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040163d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040163f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00401641: call 0x401664 */ r_esp -= 4; W32(r_esp, 0x401646u); f_00401664();
    /* 00401646: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401649: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040164b: call 0x402624 */ r_esp -= 4; W32(r_esp, 0x401650u); f_00402624();
    /* 00401650: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401653: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00401655: call 0x4026b0 */ r_esp -= 4; W32(r_esp, 0x40165au); f_004026b0();
    /* 0040165a: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
L_00401661:; BB(0x00401661);
    /* 00401661: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00401662: ret  */ FN_RET(0x004015f8); r_esp += 4; return;
}

void f_00401664(void) /* sub_401664 */
{
    FN_ENTER(0x00401664);
    /* 00401664: sub esp, 0x5b4 */ {  u32 a = r_esp; u32 b = 0x5b4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040166a: mov eax, dword ptr [esp + 0x5b8] */ r_eax = R32((u32)(r_esp+0x5b8u));
    /* 00401671: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401673: je 0x4022fb */ if (fZ) goto L_004022fb;
L_00401679:; BB(0x00401679);
    /* 00401679: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040167c: je 0x401ef8 */ if (fZ) goto L_00401ef8;
L_00401682:; BB(0x00401682);
    /* 00401682: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401685: je 0x401a95 */ if (fZ) goto L_00401a95;
L_0040168b:; BB(0x0040168b);
    /* 0040168b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040168e: jne 0x401881 */ if (!fZ) goto L_00401881;
L_00401694:; BB(0x00401694);
    /* 00401694: mov edx, dword ptr [esp + 0x5bc] */ r_edx = R32((u32)(r_esp+0x5bcu));
    /* 0040169b: mov dword ptr [esp + 0x50], 4 */ W32((u32)(r_esp+0x50u), 0x4u);
    /* 004016a3: mov eax, 3 */ r_eax = 0x3u;
    /* 004016a8: mov dword ptr [esp + 0x54], 6 */ W32((u32)(r_esp+0x54u), 0x6u);
    /* 004016b0: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004016b4: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004016b8: mov ecx, dword ptr [esp + edx*4 + 0x50] */ r_ecx = R32((u32)(r_esp+r_edx*4+0x50u));
    /* 004016bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004016be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004016c0: jle 0x401eb2 */ if ((fZ||fS!=fO)) goto L_00401eb2;
L_004016c6:; BB(0x004016c6);
    /* 004016c6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004016ca: mov ebx, eax */ r_ebx = r_eax;
    /* 004016cc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004016cf: mov esi, dword ptr [esp + 0x5bc] */ r_esi = R32((u32)(r_esp+0x5bcu));
L_004016d6:; BB(0x004016d6);
    /* 004016d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004016d8: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 004016dc: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 004016e0: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 004016e4: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004016e8: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004016ec: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 004016f0: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004016f4: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 004016f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004016fa: je 0x4017e6 */ if (fZ) goto L_004017e6;
L_00401700:; BB(0x00401700);
    /* 00401700: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401703: jne 0x401794 */ if (!fZ) goto L_00401794;
L_00401709:; BB(0x00401709);
    /* 00401709: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040170c: jge 0x401751 */ if ((fS==fO)) goto L_00401751;
L_0040170e:; BB(0x0040170e);
    /* 0040170e: mov edx, dword ptr [ebx*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebx*8+0x8f86f8u));
    /* 00401715: mov ecx, dword ptr [ebx*8 + 0x8f86fc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86fcu));
    /* 0040171c: mov dword ptr [esp + 0x68], 0x41c80000 */ W32((u32)(r_esp+0x68u), 0x41c80000u);
    /* 00401724: mov dword ptr [esp + 0x6c], 0x43650000 */ W32((u32)(r_esp+0x6cu), 0x43650000u);
    /* 0040172c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00401730: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00401734: mov dword ptr [esp + 0x60], 0x41c80000 */ W32((u32)(r_esp+0x60u), 0x41c80000u);
    /* 0040173c: mov dword ptr [esp + 0x64], 0x43650000 */ W32((u32)(r_esp+0x64u), 0x43650000u);
    /* 00401744: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0040174c: jmp 0x401824 */ goto L_00401824;
L_00401751:; BB(0x00401751);
    /* 00401751: mov edx, dword ptr [ebx*8 + 0x8f86c0] */ r_edx = R32((u32)(r_ebx*8+0x8f86c0u));
    /* 00401758: mov ecx, dword ptr [ebx*8 + 0x8f86c4] */ r_ecx = R32((u32)(r_ebx*8+0x8f86c4u));
    /* 0040175f: mov dword ptr [esp + 0x68], 0x43690000 */ W32((u32)(r_esp+0x68u), 0x43690000u);
    /* 00401767: mov dword ptr [esp + 0x6c], 0x43650000 */ W32((u32)(r_esp+0x6cu), 0x43650000u);
    /* 0040176f: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00401773: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00401777: mov dword ptr [esp + 0x60], 0x43690000 */ W32((u32)(r_esp+0x60u), 0x43690000u);
    /* 0040177f: mov dword ptr [esp + 0x64], 0x43650000 */ W32((u32)(r_esp+0x64u), 0x43650000u);
    /* 00401787: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0040178f: jmp 0x401824 */ goto L_00401824;
L_00401794:; BB(0x00401794);
    /* 00401794: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401797: jl 0x401824 */ if ((fS!=fO)) goto L_00401824;
L_0040179d:; BB(0x0040179d);
    /* 0040179d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004017a0: jg 0x401824 */ if ((!fZ&&fS==fO)) goto L_00401824;
L_004017a6:; BB(0x004017a6);
    /* 004017a6: mov edx, dword ptr [ebx*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebx*8+0x8f86f8u));
    /* 004017ad: mov ecx, dword ptr [ebx*8 + 0x8f86fc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86fcu));
    /* 004017b4: mov dword ptr [esp + 0x68], 0x41c80000 */ W32((u32)(r_esp+0x68u), 0x41c80000u);
    /* 004017bc: mov dword ptr [esp + 0x6c], 0x43650000 */ W32((u32)(r_esp+0x6cu), 0x43650000u);
    /* 004017c4: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004017c8: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 004017cc: mov dword ptr [esp + 0x60], 0x41c80000 */ W32((u32)(r_esp+0x60u), 0x41c80000u);
    /* 004017d4: mov dword ptr [esp + 0x64], 0x43650000 */ W32((u32)(r_esp+0x64u), 0x43650000u);
    /* 004017dc: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 004017e4: jmp 0x401824 */ goto L_00401824;
L_004017e6:; BB(0x004017e6);
    /* 004017e6: mov edx, dword ptr [ebx*8 + 0x8f86b8] */ r_edx = R32((u32)(r_ebx*8+0x8f86b8u));
    /* 004017ed: mov ecx, dword ptr [ebx*8 + 0x8f86bc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86bcu));
    /* 004017f4: mov dword ptr [esp + 0x68], 0x43030000 */ W32((u32)(r_esp+0x68u), 0x43030000u);
    /* 004017fc: mov dword ptr [esp + 0x6c], 0x43360000 */ W32((u32)(r_esp+0x6cu), 0x43360000u);
    /* 00401804: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00401808: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 0040180c: mov dword ptr [esp + 0x60], 0x43030000 */ W32((u32)(r_esp+0x60u), 0x43030000u);
    /* 00401814: mov dword ptr [esp + 0x64], 0x43360000 */ W32((u32)(r_esp+0x64u), 0x43360000u);
    /* 0040181c: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
L_00401824:; BB(0x00401824);
    /* 00401824: mov dword ptr [esp + 0x40], 4 */ W32((u32)(r_esp+0x40u), 0x4u);
    /* 0040182c: mov edx, 3 */ r_edx = 0x3u;
    /* 00401831: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00401835: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 0040183d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00401841: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401842: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x401847u); f_006c44d0();
    /* 00401847: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00401848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040184a: je 0x401ebb */ if (fZ) goto L_00401ebb;
L_00401850:; BB(0x00401850);
    /* 00401850: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00401853: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
L_00401857:; BB(0x00401857);
    /* 00401857: mov ecx, dword ptr [0xa3ae24] */ r_ecx = R32((u32)(0xa3ae24u));
    /* 0040185d: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00401861: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401862: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401863: call 0x40e148 */ r_esp -= 4; W32(r_esp, 0x401868u); f_0040e148();
    /* 00401868: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040186b: cmp ebx, dword ptr [esp + esi*4 + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+r_esi*4+0x50u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040186f: jl 0x4016d6 */ if ((fS!=fO)) goto L_004016d6;
L_00401875:; BB(0x00401875);
    /* 00401875: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00401879: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0040187c: jmp 0x401eb2 */ goto L_00401eb2;
L_00401881:; BB(0x00401881);
    /* 00401881: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401884: jne 0x401eb2 */ if (!fZ) goto L_00401eb2;
L_0040188a:; BB(0x0040188a);
    /* 0040188a: mov edx, dword ptr [esp + 0x5bc] */ r_edx = R32((u32)(r_esp+0x5bcu));
    /* 00401891: mov dword ptr [esp + 0x10], 4 */ W32((u32)(r_esp+0x10u), 0x4u);
    /* 00401899: mov eax, 3 */ r_eax = 0x3u;
    /* 0040189e: mov dword ptr [esp + 0x14], 6 */ W32((u32)(r_esp+0x14u), 0x6u);
    /* 004018a6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004018aa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004018ae: mov ecx, dword ptr [esp + edx*4 + 0x10] */ r_ecx = R32((u32)(r_esp+r_edx*4+0x10u));
    /* 004018b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004018b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004018b6: jle 0x401eb2 */ if ((fZ||fS!=fO)) goto L_00401eb2;
L_004018bc:; BB(0x004018bc);
    /* 004018bc: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004018c0: mov ebx, eax */ r_ebx = r_eax;
    /* 004018c2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004018c5: mov esi, dword ptr [esp + 0x5bc] */ r_esi = R32((u32)(r_esp+0x5bcu));
L_004018cc:; BB(0x004018cc);
    /* 004018cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004018ce: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004018d2: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004018d6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004018da: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004018de: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004018e2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004018e6: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004018ea: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004018ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004018f0: je 0x4019dc */ if (fZ) goto L_004019dc;
L_004018f6:; BB(0x004018f6);
    /* 004018f6: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004018f9: jne 0x40198a */ if (!fZ) goto L_0040198a;
L_004018ff:; BB(0x004018ff);
    /* 004018ff: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401902: jge 0x401947 */ if ((fS==fO)) goto L_00401947;
L_00401904:; BB(0x00401904);
    /* 00401904: mov edx, dword ptr [ebx*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebx*8+0x8f86f8u));
    /* 0040190b: mov ecx, dword ptr [ebx*8 + 0x8f86fc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86fcu));
    /* 00401912: mov dword ptr [esp + 0x28], 0x41c80000 */ W32((u32)(r_esp+0x28u), 0x41c80000u);
    /* 0040191a: mov dword ptr [esp + 0x2c], 0x43650000 */ W32((u32)(r_esp+0x2cu), 0x43650000u);
    /* 00401922: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00401926: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0040192a: mov dword ptr [esp + 0x20], 0x41c80000 */ W32((u32)(r_esp+0x20u), 0x41c80000u);
    /* 00401932: mov dword ptr [esp + 0x24], 0x43650000 */ W32((u32)(r_esp+0x24u), 0x43650000u);
    /* 0040193a: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00401942: jmp 0x401a1a */ goto L_00401a1a;
L_00401947:; BB(0x00401947);
    /* 00401947: mov edx, dword ptr [ebx*8 + 0x8f86c0] */ r_edx = R32((u32)(r_ebx*8+0x8f86c0u));
    /* 0040194e: mov ecx, dword ptr [ebx*8 + 0x8f86c4] */ r_ecx = R32((u32)(r_ebx*8+0x8f86c4u));
    /* 00401955: mov dword ptr [esp + 0x28], 0x43690000 */ W32((u32)(r_esp+0x28u), 0x43690000u);
    /* 0040195d: mov dword ptr [esp + 0x2c], 0x43650000 */ W32((u32)(r_esp+0x2cu), 0x43650000u);
    /* 00401965: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00401969: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0040196d: mov dword ptr [esp + 0x20], 0x43690000 */ W32((u32)(r_esp+0x20u), 0x43690000u);
    /* 00401975: mov dword ptr [esp + 0x24], 0x43650000 */ W32((u32)(r_esp+0x24u), 0x43650000u);
    /* 0040197d: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00401985: jmp 0x401a1a */ goto L_00401a1a;
L_0040198a:; BB(0x0040198a);
    /* 0040198a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040198d: jl 0x401a1a */ if ((fS!=fO)) goto L_00401a1a;
L_00401993:; BB(0x00401993);
    /* 00401993: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401996: jg 0x401a1a */ if ((!fZ&&fS==fO)) goto L_00401a1a;
L_0040199c:; BB(0x0040199c);
    /* 0040199c: mov edx, dword ptr [ebx*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebx*8+0x8f86f8u));
    /* 004019a3: mov ecx, dword ptr [ebx*8 + 0x8f86fc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86fcu));
    /* 004019aa: mov dword ptr [esp + 0x28], 0x41c80000 */ W32((u32)(r_esp+0x28u), 0x41c80000u);
    /* 004019b2: mov dword ptr [esp + 0x2c], 0x43650000 */ W32((u32)(r_esp+0x2cu), 0x43650000u);
    /* 004019ba: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004019be: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 004019c2: mov dword ptr [esp + 0x20], 0x41c80000 */ W32((u32)(r_esp+0x20u), 0x41c80000u);
    /* 004019ca: mov dword ptr [esp + 0x24], 0x43650000 */ W32((u32)(r_esp+0x24u), 0x43650000u);
    /* 004019d2: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 004019da: jmp 0x401a1a */ goto L_00401a1a;
L_004019dc:; BB(0x004019dc);
    /* 004019dc: mov edx, dword ptr [ebx*8 + 0x8f86b8] */ r_edx = R32((u32)(r_ebx*8+0x8f86b8u));
    /* 004019e3: mov ecx, dword ptr [ebx*8 + 0x8f86bc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86bcu));
    /* 004019ea: mov dword ptr [esp + 0x28], 0x43030000 */ W32((u32)(r_esp+0x28u), 0x43030000u);
    /* 004019f2: mov dword ptr [esp + 0x2c], 0x43360000 */ W32((u32)(r_esp+0x2cu), 0x43360000u);
    /* 004019fa: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004019fe: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00401a02: mov dword ptr [esp + 0x20], 0x43030000 */ W32((u32)(r_esp+0x20u), 0x43030000u);
    /* 00401a0a: mov dword ptr [esp + 0x24], 0x43360000 */ W32((u32)(r_esp+0x24u), 0x43360000u);
    /* 00401a12: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
L_00401a1a:; BB(0x00401a1a);
    /* 00401a1a: mov dword ptr [esp + 0x40], 4 */ W32((u32)(r_esp+0x40u), 0x4u);
    /* 00401a22: mov edx, 3 */ r_edx = 0x3u;
    /* 00401a27: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00401a2b: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00401a33: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00401a37: cmp ebx, dword ptr [esp + esi*4 + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+r_esi*4+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401a3b: mov edx, 0 */ r_edx = 0x0u;
    /* 00401a40: jge 0x401a57 */ if ((fS==fO)) goto L_00401a57;
L_00401a42:; BB(0x00401a42);
    /* 00401a42: mov edx, dword ptr [0xa3b050] */ r_edx = R32((u32)(0xa3b050u));
    /* 00401a48: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 00401a4e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401a50: mov edx, dword ptr [edx + ecx*8 + 0xac] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xacu));
L_00401a57:; BB(0x00401a57);
    /* 00401a57: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401a59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401a5a: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x401a5fu); f_006c44d0();
    /* 00401a5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00401a60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401a62: je 0x401ec8 */ if (fZ) goto L_00401ec8;
L_00401a68:; BB(0x00401a68);
    /* 00401a68: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00401a6b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_00401a6f:; BB(0x00401a6f);
    /* 00401a6f: mov ecx, dword ptr [0xa3ae24] */ r_ecx = R32((u32)(0xa3ae24u));
    /* 00401a75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401a76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401a77: call 0x40e19c */ r_esp -= 4; W32(r_esp, 0x401a7cu); f_0040e19c();
    /* 00401a7c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00401a7f: cmp ebx, dword ptr [esp + esi*4 + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+r_esi*4+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401a83: jl 0x4018cc */ if ((fS!=fO)) goto L_004018cc;
L_00401a89:; BB(0x00401a89);
    /* 00401a89: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00401a8d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00401a90: jmp 0x401eb2 */ goto L_00401eb2;
L_00401a95:; BB(0x00401a95);
    /* 00401a95: mov edx, dword ptr [esp + 0x5bc] */ r_edx = R32((u32)(r_esp+0x5bcu));
    /* 00401a9c: mov dword ptr [esp + 0x80], 4 */ W32((u32)(r_esp+0x80u), 0x4u);
    /* 00401aa7: mov eax, 3 */ r_eax = 0x3u;
    /* 00401aac: mov dword ptr [esp + 0x84], 6 */ W32((u32)(r_esp+0x84u), 0x6u);
    /* 00401ab7: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 00401abe: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 00401ac5: mov edx, dword ptr [esp + edx*4 + 0x80] */ r_edx = R32((u32)(r_esp+r_edx*4+0x80u));
    /* 00401acc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00401ace: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00401ad0: jle 0x401eb2 */ if ((fZ||fS!=fO)) goto L_00401eb2;
L_00401ad6:; BB(0x00401ad6);
    /* 00401ad6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00401ada: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00401add: mov esi, ecx */ r_esi = r_ecx;
    /* 00401adf: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00401ae3: mov edi, dword ptr [esp + 0x5bc] */ r_edi = R32((u32)(r_esp+0x5bcu));
    /* 00401aea: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00401aee: mov ebp, eax */ r_ebp = r_eax;
L_00401af0:; BB(0x00401af0);
    /* 00401af0: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 00401af7: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 00401afc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401afe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401aff: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x401b04u); f_0086b688();
    /* 00401b04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b07: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401b09: je 0x401c76 */ if (fZ) goto L_00401c76;
L_00401b0f:; BB(0x00401b0f);
    /* 00401b0f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401b12: jne 0x401bf9 */ if (!fZ) goto L_00401bf9;
L_00401b18:; BB(0x00401b18);
    /* 00401b18: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401b1b: jge 0x401b8b */ if ((fS==fO)) goto L_00401b8b;
L_00401b1d:; BB(0x00401b1d);
    /* 00401b1d: mov edx, dword ptr [ebp*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebp*8+0x8f86f8u));
    /* 00401b24: mov ebx, dword ptr [ebp*8 + 0x8f86fc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86fcu));
    /* 00401b2b: mov dword ptr [esp + 0x98], 0x41c80000 */ W32((u32)(r_esp+0x98u), 0x41c80000u);
    /* 00401b36: mov dword ptr [esp + 0x9c], 0x43650000 */ W32((u32)(r_esp+0x9cu), 0x43650000u);
    /* 00401b41: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 00401b48: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 00401b4f: mov dword ptr [esp + 0x90], 0x41c80000 */ W32((u32)(r_esp+0x90u), 0x41c80000u);
    /* 00401b5a: mov dword ptr [esp + 0x94], 0x43650000 */ W32((u32)(r_esp+0x94u), 0x43650000u);
    /* 00401b65: mov dword ptr [esp + 0xa8], 0x43340000 */ W32((u32)(r_esp+0xa8u), 0x43340000u);
    /* 00401b70: mov dword ptr [esp + 0xac], 0x42180000 */ W32((u32)(r_esp+0xacu), 0x42180000u);
    /* 00401b7b: mov dword ptr [esp + 0x2b0], 0 */ W32((u32)(r_esp+0x2b0u), 0x0u);
    /* 00401b86: jmp 0x401cdf */ goto L_00401cdf;
L_00401b8b:; BB(0x00401b8b);
    /* 00401b8b: mov edx, dword ptr [ebp*8 + 0x8f86c0] */ r_edx = R32((u32)(r_ebp*8+0x8f86c0u));
    /* 00401b92: mov ebx, dword ptr [ebp*8 + 0x8f86c4] */ r_ebx = R32((u32)(r_ebp*8+0x8f86c4u));
    /* 00401b99: mov dword ptr [esp + 0x98], 0x43690000 */ W32((u32)(r_esp+0x98u), 0x43690000u);
    /* 00401ba4: mov dword ptr [esp + 0x9c], 0x43650000 */ W32((u32)(r_esp+0x9cu), 0x43650000u);
    /* 00401baf: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 00401bb6: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 00401bbd: mov dword ptr [esp + 0x90], 0x43690000 */ W32((u32)(r_esp+0x90u), 0x43690000u);
    /* 00401bc8: mov dword ptr [esp + 0x94], 0x43650000 */ W32((u32)(r_esp+0x94u), 0x43650000u);
    /* 00401bd3: mov dword ptr [esp + 0xa8], 0x43340000 */ W32((u32)(r_esp+0xa8u), 0x43340000u);
    /* 00401bde: mov dword ptr [esp + 0xac], 0x42180000 */ W32((u32)(r_esp+0xacu), 0x42180000u);
    /* 00401be9: mov dword ptr [esp + 0x2b0], 0 */ W32((u32)(r_esp+0x2b0u), 0x0u);
    /* 00401bf4: jmp 0x401cdf */ goto L_00401cdf;
L_00401bf9:; BB(0x00401bf9);
    /* 00401bf9: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401bfc: jl 0x401cdf */ if ((fS!=fO)) goto L_00401cdf;
L_00401c02:; BB(0x00401c02);
    /* 00401c02: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401c05: jg 0x401cdf */ if ((!fZ&&fS==fO)) goto L_00401cdf;
L_00401c0b:; BB(0x00401c0b);
    /* 00401c0b: mov edx, dword ptr [ebp*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebp*8+0x8f86f8u));
    /* 00401c12: mov ebx, dword ptr [ebp*8 + 0x8f86fc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86fcu));
    /* 00401c19: mov dword ptr [esp + 0x98], 0x41c80000 */ W32((u32)(r_esp+0x98u), 0x41c80000u);
    /* 00401c24: mov dword ptr [esp + 0x9c], 0x43650000 */ W32((u32)(r_esp+0x9cu), 0x43650000u);
    /* 00401c2f: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 00401c36: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 00401c3d: mov dword ptr [esp + 0x90], 0x41c80000 */ W32((u32)(r_esp+0x90u), 0x41c80000u);
    /* 00401c48: mov dword ptr [esp + 0x94], 0x43650000 */ W32((u32)(r_esp+0x94u), 0x43650000u);
    /* 00401c53: mov dword ptr [esp + 0xa8], 0x43340000 */ W32((u32)(r_esp+0xa8u), 0x43340000u);
    /* 00401c5e: mov dword ptr [esp + 0xac], 0x42180000 */ W32((u32)(r_esp+0xacu), 0x42180000u);
    /* 00401c69: mov dword ptr [esp + 0x2b0], 0 */ W32((u32)(r_esp+0x2b0u), 0x0u);
    /* 00401c74: jmp 0x401cdf */ goto L_00401cdf;
L_00401c76:; BB(0x00401c76);
    /* 00401c76: mov edx, dword ptr [ebp*8 + 0x8f86b8] */ r_edx = R32((u32)(r_ebp*8+0x8f86b8u));
    /* 00401c7d: mov ebx, dword ptr [ebp*8 + 0x8f86bc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86bcu));
    /* 00401c84: mov dword ptr [esp + 0x98], 0x43030000 */ W32((u32)(r_esp+0x98u), 0x43030000u);
    /* 00401c8f: mov dword ptr [esp + 0x9c], 0x43360000 */ W32((u32)(r_esp+0x9cu), 0x43360000u);
    /* 00401c9a: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 00401ca1: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 00401ca8: mov dword ptr [esp + 0x90], 0x43030000 */ W32((u32)(r_esp+0x90u), 0x43030000u);
    /* 00401cb3: mov dword ptr [esp + 0x94], 0x43360000 */ W32((u32)(r_esp+0x94u), 0x43360000u);
    /* 00401cbe: mov dword ptr [esp + 0xa8], 0x43340000 */ W32((u32)(r_esp+0xa8u), 0x43340000u);
    /* 00401cc9: mov dword ptr [esp + 0xac], 0x42180000 */ W32((u32)(r_esp+0xacu), 0x42180000u);
    /* 00401cd4: mov dword ptr [esp + 0x2b0], 0 */ W32((u32)(r_esp+0x2b0u), 0x0u);
L_00401cdf:; BB(0x00401cdf);
    /* 00401cdf: mov dword ptr [esp + 0x2b4], 4 */ W32((u32)(r_esp+0x2b4u), 0x4u);
    /* 00401cea: mov edx, 3 */ r_edx = 0x3u;
    /* 00401cef: mov dword ptr [esp + 0x2b8], edx */ W32((u32)(r_esp+0x2b8u), r_edx);
    /* 00401cf6: mov dword ptr [esp + 0x2c0], 0 */ W32((u32)(r_esp+0x2c0u), 0x0u);
    /* 00401d01: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 00401d08: cmp ebp, dword ptr [esp + edi*4 + 0x2b4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+r_edi*4+0x2b4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401d0f: mov edx, 0 */ r_edx = 0x0u;
    /* 00401d14: jge 0x401d2b */ if ((fS==fO)) goto L_00401d2b;
L_00401d16:; BB(0x00401d16);
    /* 00401d16: mov edx, dword ptr [0xa3b050] */ r_edx = R32((u32)(0xa3b050u));
    /* 00401d1c: mov ebx, dword ptr [edx + 0xec] */ r_ebx = R32((u32)(r_edx+0xecu));
    /* 00401d22: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00401d24: mov edx, dword ptr [edx + ebx*8 + 0xac] */ r_edx = R32((u32)(r_edx+r_ebx*8+0xacu));
L_00401d2b:; BB(0x00401d2b);
    /* 00401d2b: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401d2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d2e: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x401d33u); f_006c44d0();
    /* 00401d33: mov ebx, eax */ r_ebx = r_eax;
    /* 00401d35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401d38: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401d3a: je 0x401ed7 */ if (fZ) goto L_00401ed7;
L_00401d40:; BB(0x00401d40);
    /* 00401d40: lea edx, [esp + 0xb0] */ r_edx = (u32)(r_esp+0xb0u);
    /* 00401d47: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00401d49: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00401d4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d4d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x401d52u); f_00857dec();
    /* 00401d52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401d55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00401d57: mov dword ptr [esp + 0x2c4], edx */ W32((u32)(r_esp+0x2c4u), r_edx);
    /* 00401d5e: mov dword ptr [esp + 0x2c8], edx */ W32((u32)(r_esp+0x2c8u), r_edx);
    /* 00401d65: mov dword ptr [esp + 0x2cc], edx */ W32((u32)(r_esp+0x2ccu), r_edx);
    /* 00401d6c: mov dword ptr [esp + 0x2d0], edx */ W32((u32)(r_esp+0x2d0u), r_edx);
    /* 00401d73: mov dword ptr [esp + 0x2d4], edx */ W32((u32)(r_esp+0x2d4u), r_edx);
    /* 00401d7a: mov dword ptr [esp + 0x2d8], edx */ W32((u32)(r_esp+0x2d8u), r_edx);
    /* 00401d81: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 00401d88: mov dword ptr [esp + 0x2e0], edx */ W32((u32)(r_esp+0x2e0u), r_edx);
    /* 00401d8f: mov dword ptr [esp + 0x2e4], edx */ W32((u32)(r_esp+0x2e4u), r_edx);
    /* 00401d96: mov dword ptr [esp + 0x2e8], edx */ W32((u32)(r_esp+0x2e8u), r_edx);
    /* 00401d9d: mov dword ptr [esp + 0x2ec], edx */ W32((u32)(r_esp+0x2ecu), r_edx);
    /* 00401da4: mov dword ptr [esp + 0x2f0], edx */ W32((u32)(r_esp+0x2f0u), r_edx);
    /* 00401dab: mov dword ptr [esp + 0x2f4], edx */ W32((u32)(r_esp+0x2f4u), r_edx);
    /* 00401db2: mov dword ptr [esp + 0x2f8], edx */ W32((u32)(r_esp+0x2f8u), r_edx);
    /* 00401db9: mov dword ptr [esp + 0x2fc], edx */ W32((u32)(r_esp+0x2fcu), r_edx);
    /* 00401dc0: mov dword ptr [esp + 0x300], edx */ W32((u32)(r_esp+0x300u), r_edx);
    /* 00401dc7: mov dword ptr [esp + 0x304], edx */ W32((u32)(r_esp+0x304u), r_edx);
    /* 00401dce: mov dword ptr [esp + 0x308], edx */ W32((u32)(r_esp+0x308u), r_edx);
    /* 00401dd5: mov dword ptr [esp + 0x30c], edx */ W32((u32)(r_esp+0x30cu), r_edx);
    /* 00401ddc: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 00401de3: mov dword ptr [esp + 0x314], edx */ W32((u32)(r_esp+0x314u), r_edx);
    /* 00401dea: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 00401df1: mov dword ptr [esp + 0x31c], edx */ W32((u32)(r_esp+0x31cu), r_edx);
    /* 00401df8: mov dword ptr [esp + 0x320], edx */ W32((u32)(r_esp+0x320u), r_edx);
    /* 00401dff: mov dword ptr [esp + 0x324], edx */ W32((u32)(r_esp+0x324u), r_edx);
    /* 00401e06: mov dword ptr [esp + 0x328], edx */ W32((u32)(r_esp+0x328u), r_edx);
    /* 00401e0d: mov dword ptr [esp + 0x32c], edx */ W32((u32)(r_esp+0x32cu), r_edx);
    /* 00401e14: mov dword ptr [esp + 0x330], edx */ W32((u32)(r_esp+0x330u), r_edx);
    /* 00401e1b: mov dword ptr [esp + 0x334], edx */ W32((u32)(r_esp+0x334u), r_edx);
    /* 00401e22: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 00401e29: mov dword ptr [esp + 0x33c], edx */ W32((u32)(r_esp+0x33cu), r_edx);
    /* 00401e30: mov dword ptr [esp + 0x340], edx */ W32((u32)(r_esp+0x340u), r_edx);
    /* 00401e37: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 00401e3e: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00401e41: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00401e44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e45: mov ecx, esi */ r_ecx = r_esi;
    /* 00401e47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e48: call 0x402604 */ r_esp -= 4; W32(r_esp, 0x401e4du); f_00402604();
    /* 00401e4d: lea ebx, [esp + 0x130] */ r_ebx = (u32)(r_esp+0x130u);
    /* 00401e54: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 00401e5b: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00401e5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e5f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x401e64u); f_00857dec();
    /* 00401e64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00401e67:; BB(0x00401e67);
    /* 00401e67: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 00401e6e: lea eax, [esp + 0x130] */ r_eax = (u32)(r_esp+0x130u);
    /* 00401e75: lea ebx, [esp + 0x1b0] */ r_ebx = (u32)(r_esp+0x1b0u);
    /* 00401e7c: lea edx, [esp + 0x230] */ r_edx = (u32)(r_esp+0x230u);
    /* 00401e83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401e86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e87: mov ecx, dword ptr [ebp*4 + 0xa3ae40] */ r_ecx = R32((u32)(r_ebp*4+0xa3ae40u));
    /* 00401e8e: call 0x40e424 */ r_esp -= 4; W32(r_esp, 0x401e93u); f_0040e424();
    /* 00401e93: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00401e96: cmp ebp, dword ptr [esp + edi*4 + 0x80] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+r_edi*4+0x80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401e9d: jl 0x401af0 */ if ((fS!=fO)) goto L_00401af0;
L_00401ea3:; BB(0x00401ea3);
    /* 00401ea3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00401ea7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00401eaa: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00401eae: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00401eb2:; BB(0x00401eb2);
    /* 00401eb2: add esp, 0x5b4 */ {  u32 a = r_esp; u32 b = 0x5b4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00401eb8: ret 8 */ FN_RET(0x00401664); r_esp += 12; return;
L_00401ebb:; BB(0x00401ebb);
    /* 00401ebb: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 00401ec3: jmp 0x401857 */ goto L_00401857;
L_00401ec8:; BB(0x00401ec8);
    /* 00401ec8: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 00401ed0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00401ed2: jmp 0x401a6f */ goto L_00401a6f;
L_00401ed7:; BB(0x00401ed7);
    /* 00401ed7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ed9: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00401edb: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x401ee0u); f_00792fe8();
    /* 00401ee0: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 00401ee7: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00401ee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401eea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401eeb: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x401ef0u); f_00857dec();
    /* 00401ef0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401ef3: jmp 0x401e67 */ goto L_00401e67;
L_00401ef8:; BB(0x00401ef8);
    /* 00401ef8: mov edx, dword ptr [esp + 0x5bc] */ r_edx = R32((u32)(r_esp+0x5bcu));
    /* 00401eff: mov dword ptr [esp + 0x344], 4 */ W32((u32)(r_esp+0x344u), 0x4u);
    /* 00401f0a: mov eax, 3 */ r_eax = 0x3u;
    /* 00401f0f: mov dword ptr [esp + 0x348], 6 */ W32((u32)(r_esp+0x348u), 0x6u);
    /* 00401f1a: mov dword ptr [esp + 0x34c], eax */ W32((u32)(r_esp+0x34cu), r_eax);
    /* 00401f21: mov dword ptr [esp + 0x350], eax */ W32((u32)(r_esp+0x350u), r_eax);
    /* 00401f28: mov edx, dword ptr [esp + edx*4 + 0x344] */ r_edx = R32((u32)(r_esp+r_edx*4+0x344u));
    /* 00401f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00401f31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00401f33: jle 0x401eb2 */ if ((fZ||fS!=fO)) goto L_00401eb2;
L_00401f39:; BB(0x00401f39);
    /* 00401f39: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00401f3d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00401f40: mov esi, ecx */ r_esi = r_ecx;
    /* 00401f42: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00401f46: mov edi, dword ptr [esp + 0x5bc] */ r_edi = R32((u32)(r_esp+0x5bcu));
    /* 00401f4d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00401f51: mov ebp, eax */ r_ebp = r_eax;
L_00401f53:; BB(0x00401f53);
    /* 00401f53: lea edx, [esp + 0x354] */ r_edx = (u32)(r_esp+0x354u);
    /* 00401f5a: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f62: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x401f67u); f_0086b688();
    /* 00401f67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401f6a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f6c: je 0x4020d9 */ if (fZ) goto L_004020d9;
L_00401f72:; BB(0x00401f72);
    /* 00401f72: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f75: jne 0x40205c */ if (!fZ) goto L_0040205c;
L_00401f7b:; BB(0x00401f7b);
    /* 00401f7b: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401f7e: jge 0x401fee */ if ((fS==fO)) goto L_00401fee;
L_00401f80:; BB(0x00401f80);
    /* 00401f80: mov edx, dword ptr [ebp*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebp*8+0x8f86f8u));
    /* 00401f87: mov ebx, dword ptr [ebp*8 + 0x8f86fc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86fcu));
    /* 00401f8e: mov dword ptr [esp + 0x35c], 0x41c80000 */ W32((u32)(r_esp+0x35cu), 0x41c80000u);
    /* 00401f99: mov dword ptr [esp + 0x360], 0x43650000 */ W32((u32)(r_esp+0x360u), 0x43650000u);
    /* 00401fa4: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00401fab: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 00401fb2: mov dword ptr [esp + 0x354], 0x41c80000 */ W32((u32)(r_esp+0x354u), 0x41c80000u);
    /* 00401fbd: mov dword ptr [esp + 0x358], 0x43650000 */ W32((u32)(r_esp+0x358u), 0x43650000u);
    /* 00401fc8: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 00401fd3: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 00401fde: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
    /* 00401fe9: jmp 0x402142 */ goto L_00402142;
L_00401fee:; BB(0x00401fee);
    /* 00401fee: mov edx, dword ptr [ebp*8 + 0x8f86c0] */ r_edx = R32((u32)(r_ebp*8+0x8f86c0u));
    /* 00401ff5: mov ebx, dword ptr [ebp*8 + 0x8f86c4] */ r_ebx = R32((u32)(r_ebp*8+0x8f86c4u));
    /* 00401ffc: mov dword ptr [esp + 0x35c], 0x43690000 */ W32((u32)(r_esp+0x35cu), 0x43690000u);
    /* 00402007: mov dword ptr [esp + 0x360], 0x43650000 */ W32((u32)(r_esp+0x360u), 0x43650000u);
    /* 00402012: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00402019: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 00402020: mov dword ptr [esp + 0x354], 0x43690000 */ W32((u32)(r_esp+0x354u), 0x43690000u);
    /* 0040202b: mov dword ptr [esp + 0x358], 0x43650000 */ W32((u32)(r_esp+0x358u), 0x43650000u);
    /* 00402036: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 00402041: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 0040204c: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
    /* 00402057: jmp 0x402142 */ goto L_00402142;
L_0040205c:; BB(0x0040205c);
    /* 0040205c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040205f: jl 0x402142 */ if ((fS!=fO)) goto L_00402142;
L_00402065:; BB(0x00402065);
    /* 00402065: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402068: jg 0x402142 */ if ((!fZ&&fS==fO)) goto L_00402142;
L_0040206e:; BB(0x0040206e);
    /* 0040206e: mov edx, dword ptr [ebp*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebp*8+0x8f86f8u));
    /* 00402075: mov ebx, dword ptr [ebp*8 + 0x8f86fc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86fcu));
    /* 0040207c: mov dword ptr [esp + 0x35c], 0x41c80000 */ W32((u32)(r_esp+0x35cu), 0x41c80000u);
    /* 00402087: mov dword ptr [esp + 0x360], 0x43650000 */ W32((u32)(r_esp+0x360u), 0x43650000u);
    /* 00402092: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00402099: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 004020a0: mov dword ptr [esp + 0x354], 0x41c80000 */ W32((u32)(r_esp+0x354u), 0x41c80000u);
    /* 004020ab: mov dword ptr [esp + 0x358], 0x43650000 */ W32((u32)(r_esp+0x358u), 0x43650000u);
    /* 004020b6: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 004020c1: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 004020cc: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
    /* 004020d7: jmp 0x402142 */ goto L_00402142;
L_004020d9:; BB(0x004020d9);
    /* 004020d9: mov edx, dword ptr [ebp*8 + 0x8f86b8] */ r_edx = R32((u32)(r_ebp*8+0x8f86b8u));
    /* 004020e0: mov ebx, dword ptr [ebp*8 + 0x8f86bc] */ r_ebx = R32((u32)(r_ebp*8+0x8f86bcu));
    /* 004020e7: mov dword ptr [esp + 0x35c], 0x43030000 */ W32((u32)(r_esp+0x35cu), 0x43030000u);
    /* 004020f2: mov dword ptr [esp + 0x360], 0x43360000 */ W32((u32)(r_esp+0x360u), 0x43360000u);
    /* 004020fd: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 00402104: mov dword ptr [esp + 0x368], ebx */ W32((u32)(r_esp+0x368u), r_ebx);
    /* 0040210b: mov dword ptr [esp + 0x354], 0x43030000 */ W32((u32)(r_esp+0x354u), 0x43030000u);
    /* 00402116: mov dword ptr [esp + 0x358], 0x43360000 */ W32((u32)(r_esp+0x358u), 0x43360000u);
    /* 00402121: mov dword ptr [esp + 0x36c], 0x43340000 */ W32((u32)(r_esp+0x36cu), 0x43340000u);
    /* 0040212c: mov dword ptr [esp + 0x370], 0x42180000 */ W32((u32)(r_esp+0x370u), 0x42180000u);
    /* 00402137: mov dword ptr [esp + 0x574], 0 */ W32((u32)(r_esp+0x574u), 0x0u);
L_00402142:; BB(0x00402142);
    /* 00402142: mov dword ptr [esp + 0x2b4], 4 */ W32((u32)(r_esp+0x2b4u), 0x4u);
    /* 0040214d: mov edx, 3 */ r_edx = 0x3u;
    /* 00402152: mov dword ptr [esp + 0x2b8], edx */ W32((u32)(r_esp+0x2b8u), r_edx);
    /* 00402159: mov dword ptr [esp + 0x2c0], 0 */ W32((u32)(r_esp+0x2c0u), 0x0u);
    /* 00402164: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 0040216b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040216c: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x402171u); f_006c44d0();
    /* 00402171: mov ebx, eax */ r_ebx = r_eax;
    /* 00402173: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402176: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402178: je 0x4022dd */ if (fZ) goto L_004022dd;
L_0040217e:; BB(0x0040217e);
    /* 0040217e: lea edx, [esp + 0x374] */ r_edx = (u32)(r_esp+0x374u);
    /* 00402185: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00402187: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040218a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040218b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x402190u); f_00857dec();
    /* 00402190: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402193: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00402195: mov dword ptr [esp + 0x2c4], edx */ W32((u32)(r_esp+0x2c4u), r_edx);
    /* 0040219c: mov dword ptr [esp + 0x2c8], edx */ W32((u32)(r_esp+0x2c8u), r_edx);
    /* 004021a3: mov dword ptr [esp + 0x2cc], edx */ W32((u32)(r_esp+0x2ccu), r_edx);
    /* 004021aa: mov dword ptr [esp + 0x2d0], edx */ W32((u32)(r_esp+0x2d0u), r_edx);
    /* 004021b1: mov dword ptr [esp + 0x2d4], edx */ W32((u32)(r_esp+0x2d4u), r_edx);
    /* 004021b8: mov dword ptr [esp + 0x2d8], edx */ W32((u32)(r_esp+0x2d8u), r_edx);
    /* 004021bf: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 004021c6: mov dword ptr [esp + 0x2e0], edx */ W32((u32)(r_esp+0x2e0u), r_edx);
    /* 004021cd: mov dword ptr [esp + 0x2e4], edx */ W32((u32)(r_esp+0x2e4u), r_edx);
    /* 004021d4: mov dword ptr [esp + 0x2e8], edx */ W32((u32)(r_esp+0x2e8u), r_edx);
    /* 004021db: mov dword ptr [esp + 0x2ec], edx */ W32((u32)(r_esp+0x2ecu), r_edx);
    /* 004021e2: mov dword ptr [esp + 0x2f0], edx */ W32((u32)(r_esp+0x2f0u), r_edx);
    /* 004021e9: mov dword ptr [esp + 0x2f4], edx */ W32((u32)(r_esp+0x2f4u), r_edx);
    /* 004021f0: mov dword ptr [esp + 0x2f8], edx */ W32((u32)(r_esp+0x2f8u), r_edx);
    /* 004021f7: mov dword ptr [esp + 0x2fc], edx */ W32((u32)(r_esp+0x2fcu), r_edx);
    /* 004021fe: mov dword ptr [esp + 0x300], edx */ W32((u32)(r_esp+0x300u), r_edx);
    /* 00402205: mov dword ptr [esp + 0x304], edx */ W32((u32)(r_esp+0x304u), r_edx);
    /* 0040220c: mov dword ptr [esp + 0x308], edx */ W32((u32)(r_esp+0x308u), r_edx);
    /* 00402213: mov dword ptr [esp + 0x30c], edx */ W32((u32)(r_esp+0x30cu), r_edx);
    /* 0040221a: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 00402221: mov dword ptr [esp + 0x314], edx */ W32((u32)(r_esp+0x314u), r_edx);
    /* 00402228: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 0040222f: mov dword ptr [esp + 0x31c], edx */ W32((u32)(r_esp+0x31cu), r_edx);
    /* 00402236: mov dword ptr [esp + 0x320], edx */ W32((u32)(r_esp+0x320u), r_edx);
    /* 0040223d: mov dword ptr [esp + 0x324], edx */ W32((u32)(r_esp+0x324u), r_edx);
    /* 00402244: mov dword ptr [esp + 0x328], edx */ W32((u32)(r_esp+0x328u), r_edx);
    /* 0040224b: mov dword ptr [esp + 0x32c], edx */ W32((u32)(r_esp+0x32cu), r_edx);
    /* 00402252: mov dword ptr [esp + 0x330], edx */ W32((u32)(r_esp+0x330u), r_edx);
    /* 00402259: mov dword ptr [esp + 0x334], edx */ W32((u32)(r_esp+0x334u), r_edx);
    /* 00402260: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 00402267: mov dword ptr [esp + 0x33c], edx */ W32((u32)(r_esp+0x33cu), r_edx);
    /* 0040226e: mov dword ptr [esp + 0x340], edx */ W32((u32)(r_esp+0x340u), r_edx);
    /* 00402275: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 0040227c: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0040227f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00402282: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00402283: mov ecx, esi */ r_ecx = r_esi;
    /* 00402285: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402286: call 0x402604 */ r_esp -= 4; W32(r_esp, 0x40228bu); f_00402604();
    /* 0040228b: lea ebx, [esp + 0x3f4] */ r_ebx = (u32)(r_esp+0x3f4u);
    /* 00402292: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 00402299: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040229b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040229c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040229d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4022a2u); f_00857dec();
    /* 004022a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004022a5:; BB(0x004022a5);
    /* 004022a5: mov ecx, dword ptr [ebp*4 + 0xa3ae40] */ r_ecx = R32((u32)(r_ebp*4+0xa3ae40u));
    /* 004022ac: lea edx, [esp + 0x354] */ r_edx = (u32)(r_esp+0x354u);
    /* 004022b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004022b4: call 0x40e3f8 */ r_esp -= 4; W32(r_esp, 0x4022b9u); f_0040e3f8();
    /* 004022b9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004022bc: cmp ebp, dword ptr [esp + edi*4 + 0x344] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+r_edi*4+0x344u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004022c3: jl 0x401f53 */ if ((fS!=fO)) goto L_00401f53;
L_004022c9:; BB(0x004022c9);
    /* 004022c9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004022cd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004022d0: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004022d4: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004022d8: jmp 0x401eb2 */ goto L_00401eb2;
L_004022dd:; BB(0x004022dd);
    /* 004022dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004022df: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 004022e1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4022e6u); f_00792fe8();
    /* 004022e6: lea edx, [esp + 0x37c] */ r_edx = (u32)(r_esp+0x37cu);
    /* 004022ed: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 004022ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004022f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004022f1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4022f6u); f_00857dec();
    /* 004022f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004022f9: jmp 0x4022a5 */ goto L_004022a5;
L_004022fb:; BB(0x004022fb);
    /* 004022fb: mov edx, dword ptr [esp + 0x5bc] */ r_edx = R32((u32)(r_esp+0x5bcu));
    /* 00402302: mov dword ptr [esp + 0x578], 4 */ W32((u32)(r_esp+0x578u), 0x4u);
    /* 0040230d: mov eax, 3 */ r_eax = 0x3u;
    /* 00402312: mov dword ptr [esp + 0x57c], 6 */ W32((u32)(r_esp+0x57cu), 0x6u);
    /* 0040231d: mov dword ptr [esp + 0x580], eax */ W32((u32)(r_esp+0x580u), r_eax);
    /* 00402324: mov dword ptr [esp + 0x584], eax */ W32((u32)(r_esp+0x584u), r_eax);
    /* 0040232b: mov ecx, dword ptr [esp + edx*4 + 0x578] */ r_ecx = R32((u32)(r_esp+r_edx*4+0x578u));
    /* 00402332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402334: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00402336: jle 0x401eb2 */ if ((fZ||fS!=fO)) goto L_00401eb2;
L_0040233c:; BB(0x0040233c);
    /* 0040233c: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00402340: mov ebx, eax */ r_ebx = r_eax;
    /* 00402342: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00402345: mov esi, dword ptr [esp + 0x5bc] */ r_esi = R32((u32)(r_esp+0x5bcu));
L_0040234c:; BB(0x0040234c);
    /* 0040234c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040234e: mov dword ptr [esp + 0x588], edx */ W32((u32)(r_esp+0x588u), r_edx);
    /* 00402355: mov dword ptr [esp + 0x58c], edx */ W32((u32)(r_esp+0x58cu), r_edx);
    /* 0040235c: mov dword ptr [esp + 0x590], edx */ W32((u32)(r_esp+0x590u), r_edx);
    /* 00402363: mov dword ptr [esp + 0x594], edx */ W32((u32)(r_esp+0x594u), r_edx);
    /* 0040236a: mov dword ptr [esp + 0x598], edx */ W32((u32)(r_esp+0x598u), r_edx);
    /* 00402371: mov dword ptr [esp + 0x59c], edx */ W32((u32)(r_esp+0x59cu), r_edx);
    /* 00402378: mov dword ptr [esp + 0x5a0], edx */ W32((u32)(r_esp+0x5a0u), r_edx);
    /* 0040237f: mov dword ptr [esp + 0x5a4], edx */ W32((u32)(r_esp+0x5a4u), r_edx);
    /* 00402386: mov dword ptr [esp + 0x5a8], edx */ W32((u32)(r_esp+0x5a8u), r_edx);
    /* 0040238d: mov dword ptr [esp + 0x5ac], edx */ W32((u32)(r_esp+0x5acu), r_edx);
    /* 00402394: mov dword ptr [esp + 0x5b0], edx */ W32((u32)(r_esp+0x5b0u), r_edx);
    /* 0040239b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040239d: je 0x402553 */ if (fZ) goto L_00402553;
L_004023a3:; BB(0x004023a3);
    /* 004023a3: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004023a6: jne 0x4024bd */ if (!fZ) goto L_004024bd;
L_004023ac:; BB(0x004023ac);
    /* 004023ac: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004023af: jge 0x402439 */ if ((fS==fO)) goto L_00402439;
L_004023b5:; BB(0x004023b5);
    /* 004023b5: mov edx, dword ptr [ebx*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebx*8+0x8f86f8u));
    /* 004023bc: mov ecx, dword ptr [ebx*8 + 0x8f86fc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86fcu));
    /* 004023c3: mov dword ptr [esp + 0x588], 0x41c80000 */ W32((u32)(r_esp+0x588u), 0x41c80000u);
    /* 004023ce: mov dword ptr [esp + 0x58c], 0x43650000 */ W32((u32)(r_esp+0x58cu), 0x43650000u);
    /* 004023d9: mov dword ptr [esp + 0x590], edx */ W32((u32)(r_esp+0x590u), r_edx);
    /* 004023e0: mov dword ptr [esp + 0x594], ecx */ W32((u32)(r_esp+0x594u), r_ecx);
    /* 004023e7: mov dword ptr [esp + 0x598], 0x41c80000 */ W32((u32)(r_esp+0x598u), 0x41c80000u);
    /* 004023f2: mov dword ptr [esp + 0x59c], 0x43650000 */ W32((u32)(r_esp+0x59cu), 0x43650000u);
    /* 004023fd: mov dword ptr [esp + 0x5a0], 0x43340000 */ W32((u32)(r_esp+0x5a0u), 0x43340000u);
    /* 00402408: mov dword ptr [esp + 0x5a4], 0x42180000 */ W32((u32)(r_esp+0x5a4u), 0x42180000u);
    /* 00402413: mov dword ptr [esp + 0x5a8], 0x36bc88 */ W32((u32)(r_esp+0x5a8u), 0x36bc88u);
    /* 0040241e: mov dword ptr [esp + 0x5ac], 0 */ W32((u32)(r_esp+0x5acu), 0x0u);
    /* 00402429: mov dword ptr [esp + 0x5b0], 0 */ W32((u32)(r_esp+0x5b0u), 0x0u);
    /* 00402434: jmp 0x4025d2 */ goto L_004025d2;
L_00402439:; BB(0x00402439);
    /* 00402439: mov edx, dword ptr [ebx*8 + 0x8f86c0] */ r_edx = R32((u32)(r_ebx*8+0x8f86c0u));
    /* 00402440: mov ecx, dword ptr [ebx*8 + 0x8f86c4] */ r_ecx = R32((u32)(r_ebx*8+0x8f86c4u));
    /* 00402447: mov dword ptr [esp + 0x588], 0x43690000 */ W32((u32)(r_esp+0x588u), 0x43690000u);
    /* 00402452: mov dword ptr [esp + 0x58c], 0x43650000 */ W32((u32)(r_esp+0x58cu), 0x43650000u);
    /* 0040245d: mov dword ptr [esp + 0x590], edx */ W32((u32)(r_esp+0x590u), r_edx);
    /* 00402464: mov dword ptr [esp + 0x594], ecx */ W32((u32)(r_esp+0x594u), r_ecx);
    /* 0040246b: mov dword ptr [esp + 0x598], 0x43690000 */ W32((u32)(r_esp+0x598u), 0x43690000u);
    /* 00402476: mov dword ptr [esp + 0x59c], 0x43650000 */ W32((u32)(r_esp+0x59cu), 0x43650000u);
    /* 00402481: mov dword ptr [esp + 0x5a0], 0x43340000 */ W32((u32)(r_esp+0x5a0u), 0x43340000u);
    /* 0040248c: mov dword ptr [esp + 0x5a4], 0x42180000 */ W32((u32)(r_esp+0x5a4u), 0x42180000u);
    /* 00402497: mov dword ptr [esp + 0x5a8], 0x36bc88 */ W32((u32)(r_esp+0x5a8u), 0x36bc88u);
    /* 004024a2: mov dword ptr [esp + 0x5ac], 0 */ W32((u32)(r_esp+0x5acu), 0x0u);
    /* 004024ad: mov dword ptr [esp + 0x5b0], 0 */ W32((u32)(r_esp+0x5b0u), 0x0u);
    /* 004024b8: jmp 0x4025d2 */ goto L_004025d2;
L_004024bd:; BB(0x004024bd);
    /* 004024bd: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004024c0: jl 0x4025d2 */ if ((fS!=fO)) goto L_004025d2;
L_004024c6:; BB(0x004024c6);
    /* 004024c6: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004024c9: jg 0x4025d2 */ if ((!fZ&&fS==fO)) goto L_004025d2;
L_004024cf:; BB(0x004024cf);
    /* 004024cf: mov edx, dword ptr [ebx*8 + 0x8f86f8] */ r_edx = R32((u32)(r_ebx*8+0x8f86f8u));
    /* 004024d6: mov ecx, dword ptr [ebx*8 + 0x8f86fc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86fcu));
    /* 004024dd: mov dword ptr [esp + 0x588], 0x41c80000 */ W32((u32)(r_esp+0x588u), 0x41c80000u);
    /* 004024e8: mov dword ptr [esp + 0x58c], 0x43650000 */ W32((u32)(r_esp+0x58cu), 0x43650000u);
    /* 004024f3: mov dword ptr [esp + 0x590], edx */ W32((u32)(r_esp+0x590u), r_edx);
    /* 004024fa: mov dword ptr [esp + 0x594], ecx */ W32((u32)(r_esp+0x594u), r_ecx);
    /* 00402501: mov dword ptr [esp + 0x598], 0x41c80000 */ W32((u32)(r_esp+0x598u), 0x41c80000u);
    /* 0040250c: mov dword ptr [esp + 0x59c], 0x43650000 */ W32((u32)(r_esp+0x59cu), 0x43650000u);
    /* 00402517: mov dword ptr [esp + 0x5a0], 0x43340000 */ W32((u32)(r_esp+0x5a0u), 0x43340000u);
    /* 00402522: mov dword ptr [esp + 0x5a4], 0x42180000 */ W32((u32)(r_esp+0x5a4u), 0x42180000u);
    /* 0040252d: mov dword ptr [esp + 0x5a8], 0x36bc88 */ W32((u32)(r_esp+0x5a8u), 0x36bc88u);
    /* 00402538: mov dword ptr [esp + 0x5ac], 0 */ W32((u32)(r_esp+0x5acu), 0x0u);
    /* 00402543: mov dword ptr [esp + 0x5b0], 0 */ W32((u32)(r_esp+0x5b0u), 0x0u);
    /* 0040254e: jmp 0x4025d2 */ goto L_004025d2;
L_00402553:; BB(0x00402553);
    /* 00402553: mov edx, dword ptr [ebx*8 + 0x8f86b8] */ r_edx = R32((u32)(r_ebx*8+0x8f86b8u));
    /* 0040255a: mov ecx, dword ptr [ebx*8 + 0x8f86bc] */ r_ecx = R32((u32)(r_ebx*8+0x8f86bcu));
    /* 00402561: mov dword ptr [esp + 0x588], 0x43030000 */ W32((u32)(r_esp+0x588u), 0x43030000u);
    /* 0040256c: mov dword ptr [esp + 0x58c], 0x43360000 */ W32((u32)(r_esp+0x58cu), 0x43360000u);
    /* 00402577: mov dword ptr [esp + 0x590], edx */ W32((u32)(r_esp+0x590u), r_edx);
    /* 0040257e: mov dword ptr [esp + 0x594], ecx */ W32((u32)(r_esp+0x594u), r_ecx);
    /* 00402585: mov dword ptr [esp + 0x598], 0x43030000 */ W32((u32)(r_esp+0x598u), 0x43030000u);
    /* 00402590: mov dword ptr [esp + 0x59c], 0x43360000 */ W32((u32)(r_esp+0x59cu), 0x43360000u);
    /* 0040259b: mov dword ptr [esp + 0x5a0], 0x43340000 */ W32((u32)(r_esp+0x5a0u), 0x43340000u);
    /* 004025a6: mov dword ptr [esp + 0x5a4], 0x42180000 */ W32((u32)(r_esp+0x5a4u), 0x42180000u);
    /* 004025b1: mov dword ptr [esp + 0x5a8], 0x36bc88 */ W32((u32)(r_esp+0x5a8u), 0x36bc88u);
    /* 004025bc: mov dword ptr [esp + 0x5ac], 0 */ W32((u32)(r_esp+0x5acu), 0x0u);
    /* 004025c7: mov dword ptr [esp + 0x5b0], 0 */ W32((u32)(r_esp+0x5b0u), 0x0u);
L_004025d2:; BB(0x004025d2);
    /* 004025d2: mov ecx, dword ptr [0xa3ae0c] */ r_ecx = R32((u32)(0xa3ae0cu));
    /* 004025d8: lea edx, [esp + 0x588] */ r_edx = (u32)(r_esp+0x588u);
    /* 004025df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004025e0: call 0x40d3ac */ r_esp -= 4; W32(r_esp, 0x4025e5u); f_0040d3ac();
    /* 004025e5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004025e8: cmp ebx, dword ptr [esp + esi*4 + 0x578] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+r_esi*4+0x578u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004025ef: jl 0x40234c */ if ((fS!=fO)) goto L_0040234c;
L_004025f5:; BB(0x004025f5);
    /* 004025f5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004025f9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004025fc: jmp 0x401eb2 */ goto L_00401eb2;
}

