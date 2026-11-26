#include "protos.h"

void f_00642028(void)
{
    FN_ENTER(0x00642028);
    /* 00642028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642029: mov ebp, esp */ r_ebp = r_esp;
    /* 0064202b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064202d: push 0x8e5618 */ { u32 v = 0x8e5618u; r_esp -= 4; W32(r_esp, v); }
    /* 00642032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00642046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064204c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064204f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00642054: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064205b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x642060u); f_005caba4();
    /* 00642060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00642064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642066: je 0x642099 */ if (fZ) goto L_00642099;
L_00642068:; BB(0x00642068);
    /* 00642068: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064206f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642079: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064207c: call 0x6420a0 */ r_esp -= 4; W32(r_esp, 0x642081u); f_006420a0();
    /* 00642081: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00642084: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064208b:; BB(0x0064208b);
    /* 0064208b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064208e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642095: mov esp, ebp */ r_esp = r_ebp;
    /* 00642097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642098: ret  */ FN_RET(0x00642028); r_esp += 4; return;
L_00642099:; BB(0x00642099);
    /* 00642099: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064209b: jmp 0x64208b */ goto L_0064208b;
}

void f_006420a0(void) /* sub_6420A0 */
{
    FN_ENTER(0x006420a0);
    /* 006420a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006420a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006420a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006420a5: push 0x8e5634 */ { u32 v = 0x8e5634u; r_esp -= 4; W32(r_esp, v); }
    /* 006420aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006420b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006420b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006420b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006420bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006420be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006420c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006420c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006420c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006420ca: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006420cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006420d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006420d2: call 0x641c18 */ r_esp -= 4; W32(r_esp, 0x6420d7u); f_00641c18();
    /* 006420d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006420da: mov dword ptr [edx], 0xb2ee88 */ W32((u32)(r_edx), 0xb2ee88u);
    /* 006420e0: mov eax, dword ptr [0x9c6f74] */ r_eax = R32((u32)(0x9c6f74u));
    /* 006420e5: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 006420ef: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006420f2: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 006420fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642103: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642106: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642109: mov dword ptr [ecx], 0xb2eeb8 */ W32((u32)(r_ecx), 0xb2eeb8u);
    /* 0064210f: mov eax, dword ptr [0x9c6f78] */ r_eax = R32((u32)(0x9c6f78u));
    /* 00642114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642115: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00642118: call dword ptr [0xb2eecc] */ { u32 t = R32((u32)(0xb2eeccu)); r_esp -= 4; W32(r_esp, 0x64211eu); call_ind(t); }
    /* 0064211e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642121: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642123: push 0x9c6e44 */ { u32 v = 0x9c6e44u; r_esp -= 4; W32(r_esp, v); }
    /* 00642128: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64212du); f_007b9a88();
    /* 0064212d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642130: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x642135u); f_007b4f54();
    /* 00642135: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642138: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0064213e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642140: jl 0x642149 */ if ((fS!=fO)) goto L_00642149;
L_00642142:; BB(0x00642142);
    /* 00642142: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00642147: jl 0x642155 */ if ((fS!=fO)) goto L_00642155;
L_00642149:; BB(0x00642149);
    /* 00642149: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 00642153: jmp 0x64215b */ goto L_0064215b;
L_00642155:; BB(0x00642155);
    /* 00642155: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_0064215b:; BB(0x0064215b);
    /* 0064215b: mov eax, edx */ r_eax = r_edx;
    /* 0064215d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642160: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642167: mov esp, ebp */ r_esp = r_ebp;
    /* 00642169: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064216a: ret 4 */ FN_RET(0x006420a0); r_esp += 8; return;
}

void f_00642170(void) /* sub_642170 */
{
    FN_ENTER(0x00642170);
    /* 00642170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642171: mov ebp, esp */ r_ebp = r_esp;
    /* 00642173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00642175: push 0x8e5676 */ { u32 v = 0x8e5676u; r_esp -= 4; W32(r_esp, v); }
    /* 0064217a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642181: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642188: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064218b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064218e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642191: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00642194: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00642197: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064219c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006421a3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6421a8u); f_008581c5();
    /* 006421a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006421a9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006421ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006421ae: je 0x642248 */ if (fZ) goto L_00642248;
L_006421b4:; BB(0x006421b4);
    /* 006421b4: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006421bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006421c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006421c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006421c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006421c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006421c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006421ca: push 0x9c6f14 */ { u32 v = 0x9c6f14u; r_esp -= 4; W32(r_esp, v); }
    /* 006421cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006421d1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6421d6u); f_005b7a84();
    /* 006421d6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006421d9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006421e0:; BB(0x006421e0);
    /* 006421e0: mov dword ptr [0xa8f2d8], eax */ W32((u32)(0xa8f2d8u), r_eax);
    /* 006421e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006421ec: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 006421f3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006421f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6421fdu); f_008581c5();
    /* 006421fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006421fe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00642201: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642203: je 0x642244 */ if (fZ) goto L_00642244;
L_00642205:; BB(0x00642205);
    /* 00642205: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0064220c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00642213: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064221a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064221b: push 0x9c6f4c */ { u32 v = 0x9c6f4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00642220: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642222: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x642227u); f_005b7a84();
    /* 00642227: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064222a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00642231:; BB(0x00642231);
    /* 00642231: mov dword ptr [0xa8f2d4], eax */ W32((u32)(0xa8f2d4u), r_eax);
    /* 00642236: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642239: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642240: mov esp, ebp */ r_esp = r_ebp;
    /* 00642242: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642243: ret  */ FN_RET(0x00642170); r_esp += 4; return;
L_00642244:; BB(0x00642244);
    /* 00642244: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642246: jmp 0x642231 */ goto L_00642231;
L_00642248:; BB(0x00642248);
    /* 00642248: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064224a: jmp 0x6421e0 */ goto L_006421e0;
}

void f_0064224c(void) /* sub_64224C */
{
    FN_ENTER(0x0064224c);
    /* 0064224c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064224d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064224f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00642251: call 0x642270 */ r_esp -= 4; W32(r_esp, 0x642256u); f_00642270();
    /* 00642256: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064225a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064225c: jne 0x642262 */ if (!fZ) goto L_00642262;
L_0064225e:; BB(0x0064225e);
    /* 0064225e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064225f: ret 4 */ FN_RET(0x0064224c); r_esp += 8; return;
L_00642262:; BB(0x00642262);
    /* 00642262: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00642263: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x642268u); f_005c2f74();
    /* 00642268: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642269: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064226a: ret 4 */ FN_RET(0x0064224c); r_esp += 8; return;
}

void f_00642270(void) /* sub_642270 */
{
    FN_ENTER(0x00642270);
    /* 00642270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642271: mov ebp, esp */ r_ebp = r_esp;
    /* 00642273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00642275: push 0x8e5690 */ { u32 v = 0x8e5690u; r_esp -= 4; W32(r_esp, v); }
    /* 0064227a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642281: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642288: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064228b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064228e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642291: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00642294: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00642297: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064229a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064229d: mov dword ptr [ecx], 0xb2ef60 */ W32((u32)(r_ecx), 0xb2ef60u);
    /* 006422a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006422aa: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x6422afu); f_00641218();
    /* 006422af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006422b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006422b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006422bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006422bc: ret  */ FN_RET(0x00642270); r_esp += 4; return;
}

void f_006422c0(void)
{
    FN_ENTER(0x006422c0);
    /* 006422c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006422c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006422c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006422c5: push 0x8e56b8 */ { u32 v = 0x8e56b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006422ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006422d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006422d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006422d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006422db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006422de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006422e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006422e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006422e7: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006422ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006422f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6422f8u); f_005caba4();
    /* 006422f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006422f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006422fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006422fe: je 0x642331 */ if (fZ) goto L_00642331;
L_00642300:; BB(0x00642300);
    /* 00642300: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00642307: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064230e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642311: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00642314: call 0x642338 */ r_esp -= 4; W32(r_esp, 0x642319u); f_00642338();
    /* 00642319: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064231c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00642323:; BB(0x00642323);
    /* 00642323: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642326: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064232d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064232f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642330: ret  */ FN_RET(0x006422c0); r_esp += 4; return;
L_00642331:; BB(0x00642331);
    /* 00642331: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642333: jmp 0x642323 */ goto L_00642323;
}

void f_00642338(void) /* sub_642338 */
{
    FN_ENTER(0x00642338);
    /* 00642338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642339: mov ebp, esp */ r_ebp = r_esp;
    /* 0064233b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064233d: push 0x8e56d4 */ { u32 v = 0x8e56d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642342: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642349: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642350: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642353: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00642356: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00642359: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064235c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064235f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00642362: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00642365: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00642368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064236a: call 0x641c18 */ r_esp -= 4; W32(r_esp, 0x64236fu); f_00641c18();
    /* 0064236f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642376: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642379: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064237c: mov dword ptr [ecx], 0xb2ef60 */ W32((u32)(r_ecx), 0xb2ef60u);
    /* 00642382: mov eax, dword ptr [0x9c6f80] */ r_eax = R32((u32)(0x9c6f80u));
    /* 00642387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642388: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0064238b: call dword ptr [0xb2ef74] */ { u32 t = R32((u32)(0xb2ef74u)); r_esp -= 4; W32(r_esp, 0x642391u); call_ind(t); }
    /* 00642391: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642394: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642396: push 0x9c6dc0 */ { u32 v = 0x9c6dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064239b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6423a0u); f_007b9a88();
    /* 006423a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006423a3: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6423a8u); f_007b4f54();
    /* 006423a8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006423ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006423ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006423b5: mov esp, ebp */ r_esp = r_ebp;
    /* 006423b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006423b8: ret 4 */ FN_RET(0x00642338); r_esp += 8; return;
}

void f_006423bc(void) /* sub_6423BC */
{
    FN_ENTER(0x006423bc);
    /* 006423bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006423bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006423bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006423c1: call 0x6423e0 */ r_esp -= 4; W32(r_esp, 0x6423c6u); f_006423e0();
    /* 006423c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006423ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006423cc: jne 0x6423d2 */ if (!fZ) goto L_006423d2;
L_006423ce:; BB(0x006423ce);
    /* 006423ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006423cf: ret 4 */ FN_RET(0x006423bc); r_esp += 8; return;
L_006423d2:; BB(0x006423d2);
    /* 006423d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006423d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6423d8u); f_005c2f74();
    /* 006423d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006423d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006423da: ret 4 */ FN_RET(0x006423bc); r_esp += 8; return;
}

void f_006423e0(void) /* sub_6423E0 */
{
    FN_ENTER(0x006423e0);
    /* 006423e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006423e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006423e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006423e5: push 0x8e56f0 */ { u32 v = 0x8e56f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006423ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006423f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006423f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006423f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006423fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006423fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642401: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00642404: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00642407: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064240a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064240d: mov dword ptr [ecx], 0xb2f008 */ W32((u32)(r_ecx), 0xb2f008u);
    /* 00642413: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064241a: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x64241fu); f_00641218();
    /* 0064241f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642422: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642429: mov esp, ebp */ r_esp = r_ebp;
    /* 0064242b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064242c: ret  */ FN_RET(0x006423e0); r_esp += 4; return;
}

void f_00642430(void)
{
    FN_ENTER(0x00642430);
    /* 00642430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642431: mov ebp, esp */ r_ebp = r_esp;
    /* 00642433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00642435: push 0x8e5718 */ { u32 v = 0x8e5718u; r_esp -= 4; W32(r_esp, v); }
    /* 0064243a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642441: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642448: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064244b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064244e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642451: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00642454: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00642457: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064245c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00642463: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x642468u); f_005caba4();
    /* 00642468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642469: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064246c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064246e: je 0x6424a1 */ if (fZ) goto L_006424a1;
L_00642470:; BB(0x00642470);
    /* 00642470: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00642477: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064247e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642481: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00642484: call 0x6424a8 */ r_esp -= 4; W32(r_esp, 0x642489u); f_006424a8();
    /* 00642489: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064248c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00642493:; BB(0x00642493);
    /* 00642493: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642496: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064249d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064249f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006424a0: ret  */ FN_RET(0x00642430); r_esp += 4; return;
L_006424a1:; BB(0x006424a1);
    /* 006424a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006424a3: jmp 0x642493 */ goto L_00642493;
}

void f_006424a8(void) /* sub_6424A8 */
{
    FN_ENTER(0x006424a8);
    /* 006424a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006424a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006424ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006424ad: push 0x8e5734 */ { u32 v = 0x8e5734u; r_esp -= 4; W32(r_esp, v); }
    /* 006424b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006424b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006424b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006424c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006424c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006424c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006424c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006424cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006424cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006424d2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006424d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006424d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006424da: call 0x641c18 */ r_esp -= 4; W32(r_esp, 0x6424dfu); f_00641c18();
    /* 006424df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006424e6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006424e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006424ec: mov dword ptr [ecx], 0xb2f008 */ W32((u32)(r_ecx), 0xb2f008u);
    /* 006424f2: mov eax, dword ptr [0x9c6f84] */ r_eax = R32((u32)(0x9c6f84u));
    /* 006424f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006424f8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006424fb: call dword ptr [0xb2f01c] */ { u32 t = R32((u32)(0xb2f01cu)); r_esp -= 4; W32(r_esp, 0x642501u); call_ind(t); }
    /* 00642501: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642504: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642506: push 0x9c6e18 */ { u32 v = 0x9c6e18u; r_esp -= 4; W32(r_esp, v); }
    /* 0064250b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x642510u); f_007b9a88();
    /* 00642510: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642513: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x642518u); f_007b4f54();
    /* 00642518: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064251b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064251e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642525: mov esp, ebp */ r_esp = r_ebp;
    /* 00642527: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642528: ret 4 */ FN_RET(0x006424a8); r_esp += 8; return;
}

void f_00642520(void)
{
    FN_ENTER(0x00642520);
    /* 00642520: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642525: mov esp, ebp */ r_esp = r_ebp;
    /* 00642527: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642528: ret 4 */ FN_RET(0x00642520); r_esp += 8; return;
}

void f_0064252c(void) /* sub_64252C */
{
    FN_ENTER(0x0064252c);
    /* 0064252c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064252e: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x642531u); call_ind(t); }
    /* 00642531: ret  */ FN_RET(0x0064252c); r_esp += 4; return;
}

void f_0064252e(void)
{
    FN_ENTER(0x0064252e);
    /* 0064252e: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x642531u); call_ind(t); }
    /* 00642531: ret  */ FN_RET(0x0064252e); r_esp += 4; return;
}

void f_00642534(void) /* sub_642534 */
{
    FN_ENTER(0x00642534);
    /* 00642534: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00642535: mov esi, ecx */ r_esi = r_ecx;
    /* 00642537: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00642539: mov ecx, esi */ r_ecx = r_esi;
    /* 0064253b: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642541: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00642547: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64254au); call_ind(t); }
    /* 0064254a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064254c: jne 0x642550 */ if (!fZ) goto L_00642550;
L_0064254e:; BB(0x0064254e);
    /* 0064254e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064254f: ret  */ FN_RET(0x00642534); r_esp += 4; return;
L_00642550:; BB(0x00642550);
    /* 00642550: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00642552: mov ecx, esi */ r_ecx = r_esi;
    /* 00642554: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x642557u); call_ind(t); }
    /* 00642557: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00642558: ret  */ FN_RET(0x00642534); r_esp += 4; return;
}

void f_00642554(void)
{
    FN_ENTER(0x00642554);
    /* 00642554: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x642557u); call_ind(t); }
    /* 00642557: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00642558: ret  */ FN_RET(0x00642554); r_esp += 4; return;
}

void f_0064255c(void) /* sub_64255C */
{
    FN_ENTER(0x0064255c);
    /* 0064255c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064255d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064255f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00642561: call 0x642580 */ r_esp -= 4; W32(r_esp, 0x642566u); f_00642580();
    /* 00642566: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064256a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064256c: jne 0x642572 */ if (!fZ) goto L_00642572;
L_0064256e:; BB(0x0064256e);
    /* 0064256e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064256f: ret 4 */ FN_RET(0x0064255c); r_esp += 8; return;
L_00642572:; BB(0x00642572);
    /* 00642572: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00642573: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x642578u); f_005c2f74();
    /* 00642578: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642579: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064257a: ret 4 */ FN_RET(0x0064255c); r_esp += 8; return;
}

void f_00642574(void)
{
    FN_ENTER(0x00642574);
    /* 00642574: cld  */ rt_df = 0;
    /* 00642575: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00642577: call ptr [ecx + 0x5b] */ { u32 t = R32((u32)(r_ecx+0x5bu)); r_esp -= 4; W32(r_esp, 0x64257au); call_ind(t); }
    /* 0064257a: ret 4 */ FN_RET(0x00642574); r_esp += 8; return;
}

void f_00642580(void) /* sub_642580 */
{
    FN_ENTER(0x00642580);
    /* 00642580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642581: mov ebp, esp */ r_ebp = r_esp;
    /* 00642583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00642585: push 0x8e5750 */ { u32 v = 0x8e5750u; r_esp -= 4; W32(r_esp, v); }
    /* 0064258a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642591: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642598: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064259b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064259e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006425a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006425a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006425a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006425aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006425ad: mov dword ptr [ecx], 0xb2f100 */ W32((u32)(r_ecx), 0xb2f100u);
    /* 006425b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006425ba: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6425bfu); f_007ba1f0();
    /* 006425bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006425c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006425c9: mov esp, ebp */ r_esp = r_ebp;
    /* 006425cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006425cc: ret  */ FN_RET(0x00642580); r_esp += 4; return;
}

void f_006425d0(void) /* sub_6425D0 */
{
    FN_ENTER(0x006425d0);
    /* 006425d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006425d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006425d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006425d5: call 0x6425f4 */ r_esp -= 4; W32(r_esp, 0x6425dau); f_006425f4();
    /* 006425da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006425de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006425e0: jne 0x6425e6 */ if (!fZ) goto L_006425e6;
L_006425e2:; BB(0x006425e2);
    /* 006425e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006425e3: ret 4 */ FN_RET(0x006425d0); r_esp += 8; return;
L_006425e6:; BB(0x006425e6);
    /* 006425e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006425e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6425ecu); f_005c2f74();
    /* 006425ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006425ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006425ee: ret 4 */ FN_RET(0x006425d0); r_esp += 8; return;
}

void f_006425f4(void) /* sub_6425F4 */
{
    FN_ENTER(0x006425f4);
    /* 006425f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006425f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006425f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006425f9: push 0x8e576c */ { u32 v = 0x8e576cu; r_esp -= 4; W32(r_esp, v); }
    /* 006425fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642605: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064260c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064260f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00642612: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642615: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00642618: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064261b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064261e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642625: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00642628: mov dword ptr [eax], 0xb2f12c */ W32((u32)(r_eax), 0xb2f12cu);
    /* 0064262e: mov ecx, dword ptr [0xa8f320] */ r_ecx = R32((u32)(0xa8f320u));
    /* 00642634: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642636: je 0x64264d */ if (fZ) goto L_0064264d;
L_00642638:; BB(0x00642638);
    /* 00642638: je 0x642643 */ if (fZ) goto L_00642643;
L_0064263a:; BB(0x0064263a);
    /* 0064263a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064263c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064263e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x642640u); call_ind(t); }
    /* 00642640: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00642643:; BB(0x00642643);
    /* 00642643: mov dword ptr [0xa8f320], 0 */ W32((u32)(0xa8f320u), 0x0u);
L_0064264d:; BB(0x0064264d);
    /* 0064264d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642654: mov ecx, eax */ r_ecx = r_eax;
    /* 00642656: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x64265bu); f_008171e8();
    /* 0064265b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064265e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642665: mov esp, ebp */ r_esp = r_ebp;
    /* 00642667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642668: ret  */ FN_RET(0x006425f4); r_esp += 4; return;
}

void f_0064266c(void) /* sub_64266C */
{
    FN_ENTER(0x0064266c);
    /* 0064266c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064266d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064266f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00642671: push 0x8e5788 */ { u32 v = 0x8e5788u; r_esp -= 4; W32(r_esp, v); }
    /* 00642676: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064267c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064267d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642684: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642687: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064268a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064268d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00642690: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00642693: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00642696: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642699: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0064269c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064269f: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6426a4u); f_007ba278();
    /* 006426a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006426ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006426ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006426b1: mov dword ptr [ecx], 0xb2f100 */ W32((u32)(r_ecx), 0xb2f100u);
    /* 006426b7: mov eax, dword ptr [0x9c6fb8] */ r_eax = R32((u32)(0x9c6fb8u));
    /* 006426bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006426bd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006426c0: call dword ptr [0xb2f114] */ { u32 t = R32((u32)(0xb2f114u)); r_esp -= 4; W32(r_esp, 0x6426c6u); call_ind(t); }
    /* 006426c6: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006426c9: mov edi, dword ptr [ebx + 0x68] */ r_edi = R32((u32)(r_ebx+0x68u));
    /* 006426cc: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 006426d2: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 006426d7: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006426d9: mov dword ptr [ebx + 0x98], edi */ W32((u32)(r_ebx+0x98u), r_edi);
    /* 006426df: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006426e2: mov dword ptr [ebx + 0x90], 1 */ W32((u32)(r_ebx+0x90u), 0x1u);
    /* 006426ec: mov esi, ecx */ r_esi = r_ecx;
    /* 006426ee: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006426f1: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006426f3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006426f6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006426f9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006426fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006426fd: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006426ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642701: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642703: jg 0x642707 */ if ((!fZ&&fS==fO)) goto L_00642707;
L_00642705:; BB(0x00642705);
    /* 00642705: mov ecx, eax */ r_ecx = r_eax;
L_00642707:; BB(0x00642707);
    /* 00642707: mov dword ptr [ebx + 0x9c], ecx */ W32((u32)(r_ebx+0x9cu), r_ecx);
    /* 0064270d: mov eax, ebx */ r_eax = r_ebx;
    /* 0064270f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642712: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642715: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064271c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064271e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064271f: ret 8 */ FN_RET(0x0064266c); r_esp += 12; return;
}

void f_00642724(void) /* sub_642724 */
{
    FN_ENTER(0x00642724);
    /* 00642724: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00642725: mov edi, ecx */ r_edi = r_ecx;
    /* 00642727: mov eax, dword ptr [0xa94b60] */ r_eax = R32((u32)(0xa94b60u));
    /* 0064272c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064272e: je 0x642732 */ if (fZ) goto L_00642732;
L_00642730:; BB(0x00642730);
    /* 00642730: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642731: ret  */ FN_RET(0x00642724); r_esp += 4; return;
L_00642732:; BB(0x00642732);
    /* 00642732: mov ecx, edi */ r_ecx = r_edi;
    /* 00642734: call 0x64278c */ r_esp -= 4; W32(r_esp, 0x642739u); f_0064278c();
    /* 00642739: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064273c: je 0x64274e */ if (fZ) goto L_0064274e;
L_0064273e:; BB(0x0064273e);
    /* 0064273e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642740: jne 0x642783 */ if (!fZ) goto L_00642783;
L_00642742:; BB(0x00642742);
    /* 00642742: mov dword ptr [0xa8f324], 1 */ W32((u32)(0xa8f324u), 0x1u);
    /* 0064274c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064274d: ret  */ FN_RET(0x00642724); r_esp += 4; return;
L_0064274e:; BB(0x0064274e);
    /* 0064274e: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00642754: cmp eax, dword ptr [0xa8f32c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f32cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064275a: je 0x642779 */ if (fZ) goto L_00642779;
L_0064275c:; BB(0x0064275c);
    /* 0064275c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064275f: je 0x642785 */ if (fZ) goto L_00642785;
L_00642761:; BB(0x00642761);
    /* 00642761: push dword ptr [eax*4 + 0x9c6fc0] */ { u32 v = R32((u32)(r_eax*4+0x9c6fc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642768: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x64276du); f_00814afc();
    /* 0064276d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064276e:; BB(0x0064276e);
    /* 0064276e: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00642774: mov dword ptr [0xa8f32c], eax */ W32((u32)(0xa8f32cu), r_eax);
L_00642779:; BB(0x00642779);
    /* 00642779: mov dword ptr [0xa8f324], 1 */ W32((u32)(0xa8f324u), 0x1u);
L_00642783:; BB(0x00642783);
    /* 00642783: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642784: ret  */ FN_RET(0x00642724); r_esp += 4; return;
L_00642785:; BB(0x00642785);
    /* 00642785: call 0x642c30 */ r_esp -= 4; W32(r_esp, 0x64278au); f_00642c30();
    /* 0064278a: jmp 0x64276e */ goto L_0064276e;
}

void f_0064278c(void) /* sub_64278C */
{
    FN_ENTER(0x0064278c);
    /* 0064278c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064278d: mov edi, ecx */ r_edi = r_ecx;
    /* 0064278f: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 00642795: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00642797: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00642798: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064279b: mov ecx, edi */ r_ecx = r_edi;
    /* 0064279d: call 0x661e0c */ r_esp -= 4; W32(r_esp, 0x6427a2u); f_00661e0c();
    /* 006427a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006427a4: je 0x6427c5 */ if (fZ) goto L_006427c5;
L_006427a6:; BB(0x006427a6);
    /* 006427a6: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 006427ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006427ae: je 0x6427c1 */ if (fZ) goto L_006427c1;
L_006427b0:; BB(0x006427b0);
    /* 006427b0: mov dword ptr [edi + 0x90], 0 */ W32((u32)(r_edi+0x90u), 0x0u);
    /* 006427ba: mov eax, 1 */ r_eax = 0x1u;
    /* 006427bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006427c0: ret  */ FN_RET(0x0064278c); r_esp += 4; return;
L_006427c1:; BB(0x006427c1);
    /* 006427c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006427c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006427c4: ret  */ FN_RET(0x0064278c); r_esp += 4; return;
L_006427c5:; BB(0x006427c5);
    /* 006427c5: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 006427cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006427cd: je 0x6427d6 */ if (fZ) goto L_006427d6;
L_006427cf:; BB(0x006427cf);
    /* 006427cf: mov eax, 2 */ r_eax = 0x2u;
    /* 006427d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006427d5: ret  */ FN_RET(0x0064278c); r_esp += 4; return;
L_006427d6:; BB(0x006427d6);
    /* 006427d6: mov dword ptr [edi + 0x90], 1 */ W32((u32)(r_edi+0x90u), 0x1u);
    /* 006427e0: mov eax, 3 */ r_eax = 0x3u;
    /* 006427e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006427e6: ret  */ FN_RET(0x0064278c); r_esp += 4; return;
}

void f_006427e8(void) /* sub_6427E8 */
{
    FN_ENTER(0x006427e8);
    /* 006427e8: mov eax, dword ptr [0xa94b60] */ r_eax = R32((u32)(0xa94b60u));
    /* 006427ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006427ef: je 0x6427f2 */ if (fZ) goto L_006427f2;
L_006427f1:; BB(0x006427f1);
    /* 006427f1: ret  */ FN_RET(0x006427e8); r_esp += 4; return;
L_006427f2:; BB(0x006427f2);
    /* 006427f2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6427f7u); f_006dc358();
    /* 006427f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006427fa: je 0x642822 */ if (fZ) goto L_00642822;
L_006427fc:; BB(0x006427fc);
    /* 006427fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00642800: cmp eax, dword ptr [0xa8f32c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f32cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00642806: je 0x642822 */ if (fZ) goto L_00642822;
L_00642808:; BB(0x00642808);
    /* 00642808: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0064280c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00642810: push dword ptr [edx*4 + 0x9c6fc0] */ { u32 v = R32((u32)(r_edx*4+0x9c6fc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642817: mov dword ptr [0xa8f32c], eax */ W32((u32)(0xa8f32cu), r_eax);
    /* 0064281c: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642821u); f_00814afc();
    /* 00642821: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00642822:; BB(0x00642822);
    /* 00642822: ret  */ FN_RET(0x006427e8); r_esp += 4; return;
}

void f_00642824(void) /* sub_642824 */
{
    FN_ENTER(0x00642824);
    /* 00642824: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00642827: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0064282a: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0064282d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064282f: jle 0x642832 */ if ((fZ||fS!=fO)) goto L_00642832;
L_00642831:; BB(0x00642831);
    /* 00642831: ret  */ FN_RET(0x00642824); r_esp += 4; return;
L_00642832:; BB(0x00642832);
    /* 00642832: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x642837u); f_0080a640();
    /* 00642837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642839: jne 0x64284b */ if (!fZ) goto L_0064284b;
L_0064283b:; BB(0x0064283b);
    /* 0064283b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642841: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x642846u); f_0068d5a8();
    /* 00642846: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642849: je 0x6428a5 */ if (fZ) goto L_006428a5;
L_0064284b:; BB(0x0064284b);
    /* 0064284b: mov eax, dword ptr [0xa94b60] */ r_eax = R32((u32)(0xa94b60u));
    /* 00642850: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642852: je 0x642855 */ if (fZ) goto L_00642855;
L_00642854:; BB(0x00642854);
    /* 00642854: ret  */ FN_RET(0x00642824); r_esp += 4; return;
L_00642855:; BB(0x00642855);
    /* 00642855: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x64285au); f_006dc358();
    /* 0064285a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064285d: je 0x6428ac */ if (fZ) goto L_006428ac;
L_0064285f:; BB(0x0064285f);
    /* 0064285f: mov ecx, dword ptr [0xa8f320] */ r_ecx = R32((u32)(0xa8f320u));
    /* 00642865: mov dword ptr [0xa8f324], 0 */ W32((u32)(0xa8f324u), 0x0u);
    /* 0064286f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642871: je 0x642878 */ if (fZ) goto L_00642878;
L_00642873:; BB(0x00642873);
    /* 00642873: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x642878u); f_00817574();
L_00642878:; BB(0x00642878);
    /* 00642878: mov eax, dword ptr [0xa8f324] */ r_eax = R32((u32)(0xa8f324u));
    /* 0064287d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064287f: jne 0x6428a5 */ if (!fZ) goto L_006428a5;
L_00642881:; BB(0x00642881);
    /* 00642881: mov eax, dword ptr [0xac9d20] */ r_eax = R32((u32)(0xac9d20u));
    /* 00642886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642888: jne 0x64288f */ if (!fZ) goto L_0064288f;
L_0064288a:; BB(0x0064288a);
    /* 0064288a: call 0x642c30 */ r_esp -= 4; W32(r_esp, 0x64288fu); f_00642c30();
L_0064288f:; BB(0x0064288f);
    /* 0064288f: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x642894u); f_0080a640();
    /* 00642894: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642896: je 0x6428a5 */ if (fZ) goto L_006428a5;
L_00642898:; BB(0x00642898);
    /* 00642898: mov eax, dword ptr [0xaab210] */ r_eax = R32((u32)(0xaab210u));
    /* 0064289d: cmp eax, dword ptr [0xa8f328] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f328u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006428a3: jne 0x6428a6 */ if (!fZ) goto L_006428a6;
L_006428a5:; BB(0x006428a5);
    /* 006428a5: ret  */ FN_RET(0x00642824); r_esp += 4; return;
L_006428a6:; BB(0x006428a6);
    /* 006428a6: call 0x642c30 */ r_esp -= 4; W32(r_esp, 0x6428abu); f_00642c30();
    /* 006428ab: ret  */ FN_RET(0x00642824); r_esp += 4; return;
L_006428ac:; BB(0x006428ac);
    /* 006428ac: mov eax, dword ptr [0xac9d20] */ r_eax = R32((u32)(0xac9d20u));
    /* 006428b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006428b3: jne 0x6428ba */ if (!fZ) goto L_006428ba;
L_006428b5:; BB(0x006428b5);
    /* 006428b5: call 0x642c30 */ r_esp -= 4; W32(r_esp, 0x6428bau); f_00642c30();
L_006428ba:; BB(0x006428ba);
    /* 006428ba: ret  */ FN_RET(0x00642824); r_esp += 4; return;
}

void f_006428bc(void) /* sub_6428BC */
{
    FN_ENTER(0x006428bc);
    /* 006428bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006428bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006428bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006428c1: push 0x8e5824 */ { u32 v = 0x8e5824u; r_esp -= 4; W32(r_esp, v); }
    /* 006428c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006428cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006428cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006428d4: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006428da: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006428dd: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006428e0: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006428e3: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006428e6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006428e8: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006428ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6428f4u); f_005caba4();
    /* 006428f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006428f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006428fa: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006428fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006428ff: je 0x642bd2 */ if (fZ) goto L_00642bd2;
L_00642905:; BB(0x00642905);
    /* 00642905: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 0064290c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642913: mov ecx, eax */ r_ecx = r_eax;
    /* 00642915: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642917: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x64291cu); f_008193cc();
    /* 0064291c: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00642923:; BB(0x00642923);
    /* 00642923: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642926: mov dword ptr [0xa8f320], eax */ W32((u32)(0xa8f320u), r_eax);
    /* 0064292b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642932: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 00642939: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0064293b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x642940u); f_005caba4();
    /* 00642940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642941: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00642944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642946: je 0x64296a */ if (fZ) goto L_0064296a;
L_00642948:; BB(0x00642948);
    /* 00642948: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 0064294f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00642956: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064295c: mov ecx, eax */ r_ecx = r_eax;
    /* 0064295e: call 0x642bdc */ r_esp -= 4; W32(r_esp, 0x642963u); f_00642bdc();
    /* 00642963: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0064296a:; BB(0x0064296a);
    /* 0064296a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642971: mov dword ptr [0xa8f32c], 4 */ W32((u32)(0xa8f32cu), 0x4u);
    /* 0064297b: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0064297e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064297f: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x642984u); f_0080ca60();
    /* 00642984: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642985: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64298au); f_00807ac0();
    /* 0064298a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064298c: je 0x642ac4 */ if (fZ) goto L_00642ac4;
L_00642992:; BB(0x00642992);
    /* 00642992: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642995: je 0x642ac4 */ if (fZ) goto L_00642ac4;
L_0064299b:; BB(0x0064299b);
    /* 0064299b: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064299e: jne 0x642aad */ if (!fZ) goto L_00642aad;
L_006429a4:; BB(0x006429a4);
    /* 006429a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006429a6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006429a9:; BB(0x006429a9);
    /* 006429a9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006429ac: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006429b3: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 006429b6: mov edx, dword ptr [edi*4 + 0x935040] */ r_edx = R32((u32)(r_edi*4+0x935040u));
    /* 006429bd: mov ecx, dword ptr [edi*4 + 0x935044] */ r_ecx = R32((u32)(r_edi*4+0x935044u));
    /* 006429c4: mov ebx, dword ptr [edi*4 + 0x935048] */ r_ebx = R32((u32)(r_edi*4+0x935048u));
    /* 006429cb: mov esi, dword ptr [edi*4 + 0x93504c] */ r_esi = R32((u32)(r_edi*4+0x93504cu));
    /* 006429d2: mov eax, dword ptr [edi*4 + 0x935050] */ r_eax = R32((u32)(r_edi*4+0x935050u));
    /* 006429d9: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006429dc: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 006429df: mov dword ptr [ebp - 0x5c], ebx */ W32((u32)(r_ebp+0xffffffa4u), r_ebx);
    /* 006429e2: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 006429e5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006429e8: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006429ed: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6429f2u); f_005caba4();
    /* 006429f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006429f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006429f8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006429fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006429fd: je 0x642a94 */ if (fZ) goto L_00642a94;
L_00642a03:; BB(0x00642a03);
    /* 00642a03: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00642a0a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00642a11: mov ecx, eax */ r_ecx = r_eax;
    /* 00642a13: mov eax, dword ptr [0xa8f320] */ r_eax = R32((u32)(0xa8f320u));
    /* 00642a18: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00642a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642a1f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00642a25: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x642a2au); f_007ba278();
    /* 00642a2a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00642a31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642a34: mov dword ptr [ecx], 0xb2f100 */ W32((u32)(r_ecx), 0xb2f100u);
    /* 00642a3a: mov eax, dword ptr [0x9c6fb8] */ r_eax = R32((u32)(0x9c6fb8u));
    /* 00642a3f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00642a42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a43: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00642a46: call dword ptr [0xb2f114] */ { u32 t = R32((u32)(0xb2f114u)); r_esp -= 4; W32(r_esp, 0x642a4cu); call_ind(t); }
    /* 00642a4c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642a4f: mov esi, dword ptr [ebx + 0x68] */ r_esi = R32((u32)(r_ebx+0x68u));
    /* 00642a52: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00642a58: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00642a5d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00642a5f: mov dword ptr [ebx + 0x98], esi */ W32((u32)(r_ebx+0x98u), r_esi);
    /* 00642a65: mov edi, ecx */ r_edi = r_ecx;
    /* 00642a67: mov dword ptr [ebx + 0x90], 1 */ W32((u32)(r_ebx+0x90u), 0x1u);
    /* 00642a71: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00642a74: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00642a76: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00642a7d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00642a80: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642a82: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642a84: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00642a86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642a88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00642a8a: jg 0x642a8e */ if ((!fZ&&fS==fO)) goto L_00642a8e;
L_00642a8c:; BB(0x00642a8c);
    /* 00642a8c: mov ecx, eax */ r_ecx = r_eax;
L_00642a8e:; BB(0x00642a8e);
    /* 00642a8e: mov dword ptr [ebx + 0x9c], ecx */ W32((u32)(r_ebx+0x9cu), r_ecx);
L_00642a94:; BB(0x00642a94);
    /* 00642a94: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642a9b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642a9e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642aa1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00642aa4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00642aa7: jl 0x6429a9 */ if ((fS!=fO)) goto L_006429a9;
L_00642aad:; BB(0x00642aad);
    /* 00642aad: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00642ab0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00642ab3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00642ab6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642ab9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642ac0: mov esp, ebp */ r_esp = r_ebp;
    /* 00642ac2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642ac3: ret  */ FN_RET(0x006428bc); r_esp += 4; return;
L_00642ac4:; BB(0x00642ac4);
    /* 00642ac4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642ac6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00642ac9:; BB(0x00642ac9);
    /* 00642ac9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00642acc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00642ad3: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 00642ad6: mov edx, dword ptr [edi*4 + 0x934f40] */ r_edx = R32((u32)(r_edi*4+0x934f40u));
    /* 00642add: mov ecx, dword ptr [edi*4 + 0x934f44] */ r_ecx = R32((u32)(r_edi*4+0x934f44u));
    /* 00642ae4: mov ebx, dword ptr [edi*4 + 0x934f48] */ r_ebx = R32((u32)(r_edi*4+0x934f48u));
    /* 00642aeb: mov esi, dword ptr [edi*4 + 0x934f4c] */ r_esi = R32((u32)(r_edi*4+0x934f4cu));
    /* 00642af2: mov eax, dword ptr [edi*4 + 0x934f50] */ r_eax = R32((u32)(r_edi*4+0x934f50u));
    /* 00642af9: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00642afc: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00642aff: mov dword ptr [ebp - 0x5c], ebx */ W32((u32)(r_ebp+0xffffffa4u), r_ebx);
    /* 00642b02: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00642b05: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00642b08: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642b0d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x642b12u); f_005caba4();
    /* 00642b12: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00642b15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642b18: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00642b1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642b1d: je 0x642bb4 */ if (fZ) goto L_00642bb4;
L_00642b23:; BB(0x00642b23);
    /* 00642b23: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00642b2a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00642b31: mov ecx, eax */ r_ecx = r_eax;
    /* 00642b33: mov eax, dword ptr [0xa8f320] */ r_eax = R32((u32)(0xa8f320u));
    /* 00642b38: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00642b3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642b3f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00642b45: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x642b4au); f_007ba278();
    /* 00642b4a: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00642b51: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642b54: mov dword ptr [ecx], 0xb2f100 */ W32((u32)(r_ecx), 0xb2f100u);
    /* 00642b5a: mov eax, dword ptr [0x9c6fb8] */ r_eax = R32((u32)(0x9c6fb8u));
    /* 00642b5f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00642b62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642b63: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00642b66: call dword ptr [0xb2f114] */ { u32 t = R32((u32)(0xb2f114u)); r_esp -= 4; W32(r_esp, 0x642b6cu); call_ind(t); }
    /* 00642b6c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642b6f: mov esi, dword ptr [ebx + 0x68] */ r_esi = R32((u32)(r_ebx+0x68u));
    /* 00642b72: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00642b78: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00642b7d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00642b7f: mov dword ptr [ebx + 0x98], esi */ W32((u32)(r_ebx+0x98u), r_esi);
    /* 00642b85: mov edi, ecx */ r_edi = r_ecx;
    /* 00642b87: mov dword ptr [ebx + 0x90], 1 */ W32((u32)(r_ebx+0x90u), 0x1u);
    /* 00642b91: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00642b94: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00642b96: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00642b9d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00642ba0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642ba2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642ba4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00642ba6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642ba8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00642baa: jg 0x642bae */ if ((!fZ&&fS==fO)) goto L_00642bae;
L_00642bac:; BB(0x00642bac);
    /* 00642bac: mov ecx, eax */ r_ecx = r_eax;
L_00642bae:; BB(0x00642bae);
    /* 00642bae: mov dword ptr [ebx + 0x9c], ecx */ W32((u32)(r_ebx+0x9cu), r_ecx);
L_00642bb4:; BB(0x00642bb4);
    /* 00642bb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642bbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00642bbe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642bc1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00642bc4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00642bc7: jl 0x642ac9 */ if ((fS!=fO)) goto L_00642ac9;
L_00642bcd:; BB(0x00642bcd);
    /* 00642bcd: jmp 0x642aad */ goto L_00642aad;
L_00642bd2:; BB(0x00642bd2);
    /* 00642bd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642bd4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00642bd7: jmp 0x642923 */ goto L_00642923;
}

void f_00642bdc(void) /* sub_642BDC */
{
    FN_ENTER(0x00642bdc);
    /* 00642bdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00642bdd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00642bdf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00642be3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00642be5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x642beau); f_008193cc();
    /* 00642bea: mov dword ptr [ebx], 0xb2f12c */ W32((u32)(r_ebx), 0xb2f12cu);
    /* 00642bf0: mov edx, dword ptr [0x9c6fbc] */ r_edx = R32((u32)(0x9c6fbcu));
    /* 00642bf6: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00642bf9: mov eax, ebx */ r_eax = r_ebx;
    /* 00642bfb: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 00642c02: mov dword ptr [0xa8f328], 0 */ W32((u32)(0xa8f328u), 0x0u);
    /* 00642c0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00642c0d: ret 4 */ FN_RET(0x00642bdc); r_esp += 8; return;
}

void f_00642c10(void) /* sub_642C10 */
{
    FN_ENTER(0x00642c10);
    /* 00642c10: mov dword ptr [0xa8f314], 0x3f800000 */ W32((u32)(0xa8f314u), 0x3f800000u);
    /* 00642c1a: mov dword ptr [0xa8f318], 0x41000000 */ W32((u32)(0xa8f318u), 0x41000000u);
    /* 00642c24: mov dword ptr [0xa8f31c], 0x3fc00000 */ W32((u32)(0xa8f31cu), 0x3fc00000u);
    /* 00642c2e: ret  */ FN_RET(0x00642c10); r_esp += 4; return;
}

void f_00642c30(void) /* sub_642C30 */
{
    FN_ENTER(0x00642c30);
    /* 00642c30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00642c31: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642c34: mov dword ptr [esp], 0x935170 */ W32((u32)(r_esp), 0x935170u);
    /* 00642c3b: mov dword ptr [esp + 4], 0x935188 */ W32((u32)(r_esp+0x4u), 0x935188u);
    /* 00642c43: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x642c48u); f_0080a640();
    /* 00642c48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642c4a: je 0x642c5c */ if (fZ) goto L_00642c5c;
L_00642c4c:; BB(0x00642c4c);
    /* 00642c4c: mov eax, dword ptr [0xaab210] */ r_eax = R32((u32)(0xaab210u));
    /* 00642c51: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00642c55: mov dword ptr [0xa8f328], eax */ W32((u32)(0xa8f328u), r_eax);
    /* 00642c5a: jmp 0x642c69 */ goto L_00642c69;
L_00642c5c:; BB(0x00642c5c);
    /* 00642c5c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00642c5f: mov dword ptr [0xa8f328], 0 */ W32((u32)(0xa8f328u), 0x0u);
L_00642c69:; BB(0x00642c69);
    /* 00642c69: mov edx, dword ptr [0xa8f328] */ r_edx = R32((u32)(0xa8f328u));
    /* 00642c6f: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00642c72: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00642c75: ja 0x642d1e */ if ((!fC&&!fZ)) goto L_00642d1e;
L_00642c7b:; BB(0x00642c7b);
    /* 00642c7b: mov eax, dword ptr [edx*4 + 0x934efc] */ r_eax = R32((u32)(r_edx*4+0x934efcu));
    /* 00642c82: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00642d1e:; BB(0x00642d1e);
    /* 00642d1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00642d1f: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642d24u); f_00814afc();
    /* 00642d24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642d25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642d28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642d29: ret  */ FN_RET(0x00642c30); r_esp += 4; return;
}

void f_00642c84(void)
{
    FN_ENTER(0x00642c84);
    /* 00642c84: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x642c89u); f_006dc358();
    /* 00642c89: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642c8c: je 0x642d2a */ if (fZ) goto L_00642d2a;
L_00642c92:; BB(0x00642c92);
    /* 00642c92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00642c93: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642c98u); f_00814afc();
    /* 00642c98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642c99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642c9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642c9d: ret  */ FN_RET(0x00642c84); r_esp += 4; return;
L_00642d2a:; BB(0x00642d2a);
    /* 00642d2a: push 0x9351e0 */ { u32 v = 0x9351e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642d2f: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642d34u); f_00814afc();
    /* 00642d34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642d35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642d38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642d39: ret  */ FN_RET(0x00642c84); r_esp += 4; return;
}

void f_00642c9e(void)
{
    FN_ENTER(0x00642c9e);
    /* 00642c9e: push 0x92cc84 */ { u32 v = 0x92cc84u; r_esp -= 4; W32(r_esp, v); }
    /* 00642ca3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642ca8u); f_00814afc();
    /* 00642ca8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642ca9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642cac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642cad: ret  */ FN_RET(0x00642c9e); r_esp += 4; return;
}

void f_00642cae(void)
{
    FN_ENTER(0x00642cae);
    /* 00642cae: push 0x92cc78 */ { u32 v = 0x92cc78u; r_esp -= 4; W32(r_esp, v); }
    /* 00642cb3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642cb8u); f_00814afc();
    /* 00642cb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642cb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642cbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642cbd: ret  */ FN_RET(0x00642cae); r_esp += 4; return;
}

void f_00642cbe(void)
{
    FN_ENTER(0x00642cbe);
    /* 00642cbe: push 0x9351a4 */ { u32 v = 0x9351a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642cc3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642cc8u); f_00814afc();
    /* 00642cc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642cc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642ccc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642ccd: ret  */ FN_RET(0x00642cbe); r_esp += 4; return;
}

void f_00642cce(void)
{
    FN_ENTER(0x00642cce);
    /* 00642cce: push 0x92cc9c */ { u32 v = 0x92cc9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00642cd3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642cd8u); f_00814afc();
    /* 00642cd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642cd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642cdd: ret  */ FN_RET(0x00642cce); r_esp += 4; return;
}

void f_00642cde(void)
{
    FN_ENTER(0x00642cde);
    /* 00642cde: push 0x9351d0 */ { u32 v = 0x9351d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642ce3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642ce8u); f_00814afc();
    /* 00642ce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642ce9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642cec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642ced: ret  */ FN_RET(0x00642cde); r_esp += 4; return;
}

void f_00642cee(void)
{
    FN_ENTER(0x00642cee);
    /* 00642cee: push 0x9351c4 */ { u32 v = 0x9351c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642cf3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642cf8u); f_00814afc();
    /* 00642cf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642cf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642cfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642cfd: ret  */ FN_RET(0x00642cee); r_esp += 4; return;
}

void f_00642cfe(void)
{
    FN_ENTER(0x00642cfe);
    /* 00642cfe: push 0x9351b4 */ { u32 v = 0x9351b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642d03: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642d08u); f_00814afc();
    /* 00642d08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642d09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642d0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642d0d: ret  */ FN_RET(0x00642cfe); r_esp += 4; return;
}

void f_00642d0e(void)
{
    FN_ENTER(0x00642d0e);
    /* 00642d0e: push 0x935194 */ { u32 v = 0x935194u; r_esp -= 4; W32(r_esp, v); }
    /* 00642d13: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642d18u); f_00814afc();
    /* 00642d18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642d19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642d1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642d1d: ret  */ FN_RET(0x00642d0e); r_esp += 4; return;
}

void f_00642d1e(void)
{
    FN_ENTER(0x00642d1e);
    /* 00642d1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00642d1f: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x642d24u); f_00814afc();
    /* 00642d24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642d25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00642d28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00642d29: ret  */ FN_RET(0x00642d1e); r_esp += 4; return;
}

void f_00642d3c(void) /* sub_642D3C */
{
    FN_ENTER(0x00642d3c);
    /* 00642d3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00642d3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00642d3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00642d41: call 0x642d60 */ r_esp -= 4; W32(r_esp, 0x642d46u); f_00642d60();
    /* 00642d46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00642d4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00642d4c: jne 0x642d52 */ if (!fZ) goto L_00642d52;
L_00642d4e:; BB(0x00642d4e);
    /* 00642d4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00642d4f: ret 4 */ FN_RET(0x00642d3c); r_esp += 8; return;
L_00642d52:; BB(0x00642d52);
    /* 00642d52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00642d53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x642d58u); f_005c2f74();
    /* 00642d58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00642d59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00642d5a: ret 4 */ FN_RET(0x00642d3c); r_esp += 8; return;
}

void f_00642d60(void) /* sub_642D60 */
{
    FN_ENTER(0x00642d60);
    /* 00642d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00642d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00642d65: push 0x8e5840 */ { u32 v = 0x8e5840u; r_esp -= 4; W32(r_esp, v); }
    /* 00642d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00642d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642d71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00642d78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642d7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00642d7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00642d81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00642d84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00642d87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00642d8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00642d8d: mov dword ptr [ecx], 0xb2f1b8 */ W32((u32)(r_ecx), 0xb2f1b8u);
    /* 00642d93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642d9a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x642d9fu); f_007ba1f0();
    /* 00642d9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642da2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00642da9: mov esp, ebp */ r_esp = r_ebp;
    /* 00642dab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642dac: ret  */ FN_RET(0x00642d60); r_esp += 4; return;
}

void f_00642db0(void) /* sub_642DB0 */
{
    FN_ENTER(0x00642db0);
    /* 00642db0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00642db1: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642db4: mov esi, ecx */ r_esi = r_ecx;
    /* 00642db6: movsx ecx, word ptr [esi + 0xb6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xb6u));
    /* 00642dbd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x642dc2u); f_0082dcbc();
    /* 00642dc2: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00642dc6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00642dca: fmul dword ptr [0x935290] */ ST(0) = ST(0) * R_F32((u32)(0x935290u));
    /* 00642dd0: fadd dword ptr [esi + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x94u));
    /* 00642dd6: movzx edx, byte ptr [esi + 0xb9] */ r_edx = (u32)R8((u32)(r_esi+0xb9u));
    /* 00642ddd: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00642de1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642de3: jne 0x642e9e */ if (!fZ) goto L_00642e9e;
L_00642de9:; BB(0x00642de9);
    /* 00642de9: fld dword ptr [0x93526c] */ FPUSH(R_F32((u32)(0x93526cu)));
    /* 00642def: fld dword ptr [0x935288] */ FPUSH(R_F32((u32)(0x935288u)));
    /* 00642df5: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00642df8: fsubr dword ptr [esp + 0x58] */ ST(0) = R_F32((u32)(r_esp+0x58u)) - ST(0);
    /* 00642dfc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00642dfe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00642e00: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00642e02: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00642e03: jae 0x642e1a */ if (!fC) goto L_00642e1a;
L_00642e05:; BB(0x00642e05);
    /* 00642e05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642e07: fld dword ptr [0x935288] */ FPUSH(R_F32((u32)(0x935288u)));
    /* 00642e0d: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 00642e12: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 00642e18: jmp 0x642e31 */ goto L_00642e31;
L_00642e1a:; BB(0x00642e1a);
    /* 00642e1a: fld dword ptr [0x935284] */ FPUSH(R_F32((u32)(0x935284u)));
    /* 00642e20: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00642e22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00642e24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00642e25: ja 0x642e29 */ if ((!fC&&!fZ)) goto L_00642e29;
L_00642e27:; BB(0x00642e27);
    /* 00642e27: fst st(1) */ ST(1) = ST(0);
L_00642e29:; BB(0x00642e29);
    /* 00642e29: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642e2b: fst dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0));
L_00642e31:; BB(0x00642e31);
    /* 00642e31: fld dword ptr [0x935260] */ FPUSH(R_F32((u32)(0x935260u)));
    /* 00642e37: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00642e39: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00642e3f: fadd dword ptr [0x935264] */ ST(0) = ST(0) + R_F32((u32)(0x935264u));
    /* 00642e45: fld dword ptr [0x935278] */ FPUSH(R_F32((u32)(0x935278u)));
    /* 00642e4b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00642e4d: fld dword ptr [esi + 0xa8] */ FPUSH(R_F32((u32)(r_esi+0xa8u)));
    /* 00642e53: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00642e55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00642e57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642e59: fadd dword ptr [esi + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa0u));
    /* 00642e5f: fadd dword ptr [0x935270] */ ST(0) = ST(0) + R_F32((u32)(0x935270u));
    /* 00642e65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642e67: fst dword ptr [esi + 0xac] */ W_F32((u32)(r_esi+0xacu), ST(0));
    /* 00642e6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642e6f: fstp dword ptr [esi + 0xa0] */ W_F32((u32)(r_esi+0xa0u), ST(0)); FPOP();
    /* 00642e75: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00642e77: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00642e79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642e7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642e7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00642e7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00642e80: jbe 0x642e93 */ if ((fC||fZ)) goto L_00642e93;
L_00642e82:; BB(0x00642e82);
    /* 00642e82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642e84: mov dword ptr [esi + 0xa8], 0 */ W32((u32)(r_esi+0xa8u), 0x0u);
    /* 00642e8e: jmp 0x642f52 */ goto L_00642f52;
L_00642e93:; BB(0x00642e93);
    /* 00642e93: fstp dword ptr [esi + 0xa8] */ W_F32((u32)(r_esi+0xa8u), ST(0)); FPOP();
    /* 00642e99: jmp 0x642f52 */ goto L_00642f52;
L_00642e9e:; BB(0x00642e9e);
    /* 00642e9e: fld dword ptr [0x935288] */ FPUSH(R_F32((u32)(0x935288u)));
    /* 00642ea4: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00642ea7: fsubr dword ptr [esp + 0x58] */ ST(0) = R_F32((u32)(r_esp+0x58u)) - ST(0);
    /* 00642eab: fmul dword ptr [0x93528c] */ ST(0) = ST(0) * R_F32((u32)(0x93528cu));
    /* 00642eb1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00642eb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00642eb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00642eb6: jae 0x642ecd */ if (!fC) goto L_00642ecd;
L_00642eb8:; BB(0x00642eb8);
    /* 00642eb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642eba: fld dword ptr [0x935288] */ FPUSH(R_F32((u32)(0x935288u)));
    /* 00642ec0: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 00642ec5: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 00642ecb: jmp 0x642ee4 */ goto L_00642ee4;
L_00642ecd:; BB(0x00642ecd);
    /* 00642ecd: fld dword ptr [0x935284] */ FPUSH(R_F32((u32)(0x935284u)));
    /* 00642ed3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00642ed5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00642ed7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00642ed8: ja 0x642edc */ if ((!fC&&!fZ)) goto L_00642edc;
L_00642eda:; BB(0x00642eda);
    /* 00642eda: fst st(1) */ ST(1) = ST(0);
L_00642edc:; BB(0x00642edc);
    /* 00642edc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642ede: fst dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0));
L_00642ee4:; BB(0x00642ee4);
    /* 00642ee4: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00642ee6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642ee8: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00642eee: fadd dword ptr [0x935280] */ ST(0) = ST(0) + R_F32((u32)(0x935280u));
    /* 00642ef4: fld dword ptr [0x935278] */ FPUSH(R_F32((u32)(0x935278u)));
    /* 00642efa: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00642efc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642efe: fmul dword ptr [0x935274] */ ST(0) = ST(0) * R_F32((u32)(0x935274u));
    /* 00642f04: fadd dword ptr [esi + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa0u));
    /* 00642f0a: fld dword ptr [esi + 0xa8] */ FPUSH(R_F32((u32)(r_esi+0xa8u)));
    /* 00642f10: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00642f12: fadd dword ptr [0x935270] */ ST(0) = ST(0) + R_F32((u32)(0x935270u));
    /* 00642f18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00642f1a: fst dword ptr [esi + 0xac] */ W_F32((u32)(r_esi+0xacu), ST(0));
    /* 00642f20: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00642f22: fstp dword ptr [esi + 0xa0] */ W_F32((u32)(r_esi+0xa0u), ST(0)); FPOP();
    /* 00642f28: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00642f2a: fcom dword ptr [0x93526c] */ fx_compare(ST(0), R_F32((u32)(0x93526cu))); 
    /* 00642f30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00642f32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00642f33: jbe 0x642f4c */ if ((fC||fZ)) goto L_00642f4c;
L_00642f35:; BB(0x00642f35);
    /* 00642f35: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00642f37: mov dword ptr [esi + 0xa8], 0 */ W32((u32)(r_esi+0xa8u), 0x0u);
    /* 00642f41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00642f43: mov byte ptr [esi + 0xb9], 0 */ W8((u32)(r_esi+0xb9u), 0x0u);
    /* 00642f4a: jmp 0x642f52 */ goto L_00642f52;
L_00642f4c:; BB(0x00642f4c);
    /* 00642f4c: fstp dword ptr [esi + 0xa8] */ W_F32((u32)(r_esi+0xa8u), ST(0)); FPOP();
L_00642f52:; BB(0x00642f52);
    /* 00642f52: movzx eax, byte ptr [esi + 0xb8] */ r_eax = (u32)R8((u32)(r_esi+0xb8u));
    /* 00642f59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642f5b: je 0x6431d1 */ if (fZ) goto L_006431d1;
L_00642f61:; BB(0x00642f61);
    /* 00642f61: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642f64: jne 0x643052 */ if (!fZ) goto L_00643052;
L_00642f6a:; BB(0x00642f6a);
    /* 00642f6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642f6c: je 0x642f95 */ if (fZ) goto L_00642f95;
L_00642f6e:; BB(0x00642f6e);
    /* 00642f6e: fld dword ptr [0x935240] */ FPUSH(R_F32((u32)(0x935240u)));
    /* 00642f74: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 00642f7a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00642f7c: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 00642f82: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00642f84: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 00642f8a: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 00642f90: jmp 0x6431f3 */ goto L_006431f3;
L_00642f95:; BB(0x00642f95);
    /* 00642f95: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x642f9au); f_008587a5();
    /* 00642f9a: fld dword ptr [0x93527c] */ FPUSH(R_F32((u32)(0x93527cu)));
    /* 00642fa0: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00642fa8: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00642fac: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00642fb0: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 00642fb6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00642fb8: fadd dword ptr [0x93524c] */ ST(0) = ST(0) + R_F32((u32)(0x93524cu));
    /* 00642fbe: fmul dword ptr [0x93523c] */ ST(0) = ST(0) * R_F32((u32)(0x93523cu));
    /* 00642fc4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00642fc6: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00642fca: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x642fcfu); f_008587a5();
    /* 00642fcf: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00642fd3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00642fd7: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 00642fdd: fmul dword ptr [0x93523c] */ ST(0) = ST(0) * R_F32((u32)(0x93523cu));
    /* 00642fe3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00642fe8: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00642fee: fadd dword ptr [0x935244] */ ST(0) = ST(0) + R_F32((u32)(0x935244u));
    /* 00642ff4: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00642ff8: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x642ffdu); f_0082d990();
    /* 00642ffd: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00643000: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643002: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x643007u); f_0082d8bc();
    /* 00643007: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0064300b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064300c: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00643010: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643012: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x643017u); f_0082eab8();
    /* 00643017: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0064301c: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x643021u); f_0082eb80();
    /* 00643021: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00643025: fadd dword ptr [esi + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x9cu));
    /* 0064302b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0064302f: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 00643035: fld dword ptr [0x935238] */ FPUSH(R_F32((u32)(0x935238u)));
    /* 0064303b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0064303d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0064303f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00643041: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 00643047: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 0064304d: jmp 0x6431f3 */ goto L_006431f3;
L_00643052:; BB(0x00643052);
    /* 00643052: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643055: jne 0x6431f3 */ if (!fZ) goto L_006431f3;
L_0064305b:; BB(0x0064305b);
    /* 0064305b: movzx eax, byte ptr [esi + 0xba] */ r_eax = (u32)R8((u32)(r_esi+0xbau));
    /* 00643062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643064: jne 0x6430a7 */ if (!fZ) goto L_006430a7;
L_00643066:; BB(0x00643066);
    /* 00643066: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64306bu); f_008587a5();
    /* 0064306b: fild dword ptr [esi + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x60u)));
    /* 0064306e: fld dword ptr [0x935254] */ FPUSH(R_F32((u32)(0x935254u)));
    /* 00643074: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643078: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0064307c: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 00643082: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643084: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643086: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643088: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0064308c: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00643091: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643096: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0064309a: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0064309e: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 006430a1: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006430a5: jmp 0x6430e6 */ goto L_006430e6;
L_006430a7:; BB(0x006430a7);
    /* 006430a7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6430acu); f_008587a5();
    /* 006430ac: fild dword ptr [esi + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x60u)));
    /* 006430af: fld dword ptr [0x93525c] */ FPUSH(R_F32((u32)(0x93525cu)));
    /* 006430b5: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006430b9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006430bd: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006430c3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006430c5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006430c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006430c9: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006430cd: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006430d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006430d7: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006430db: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006430df: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 006430e2: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
L_006430e6:; BB(0x006430e6);
    /* 006430e6: movzx eax, byte ptr [esi + 0xb9] */ r_eax = (u32)R8((u32)(r_esi+0xb9u));
    /* 006430ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006430ef: je 0x643118 */ if (fZ) goto L_00643118;
L_006430f1:; BB(0x006430f1);
    /* 006430f1: fld dword ptr [0x935250] */ FPUSH(R_F32((u32)(0x935250u)));
    /* 006430f7: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 006430fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006430ff: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 00643105: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00643107: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 0064310d: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 00643113: jmp 0x6431f3 */ goto L_006431f3;
L_00643118:; BB(0x00643118);
    /* 00643118: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64311du); f_008587a5();
    /* 0064311d: fld dword ptr [0x93527c] */ FPUSH(R_F32((u32)(0x93527cu)));
    /* 00643123: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0064312b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0064312f: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643133: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 00643139: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0064313b: fadd dword ptr [0x93524c] */ ST(0) = ST(0) + R_F32((u32)(0x93524cu));
    /* 00643141: fmul dword ptr [0x935248] */ ST(0) = ST(0) * R_F32((u32)(0x935248u));
    /* 00643147: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00643149: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064314c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643151u); f_008587a5();
    /* 00643151: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643155: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643159: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064315f: fmul dword ptr [0x935248] */ ST(0) = ST(0) * R_F32((u32)(0x935248u));
    /* 00643165: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0064316a: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00643170: fadd dword ptr [0x935244] */ ST(0) = ST(0) + R_F32((u32)(0x935244u));
    /* 00643176: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0064317a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x64317fu); f_0082d990();
    /* 0064317f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00643182: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643184: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x643189u); f_0082d8bc();
    /* 00643189: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0064318d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064318e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00643192: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643194: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x643199u); f_0082eab8();
    /* 00643199: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0064319e: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6431a3u); f_0082eb80();
    /* 006431a3: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006431a7: fadd dword ptr [esi + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x9cu));
    /* 006431ad: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006431b1: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 006431b7: fld dword ptr [0x935240] */ FPUSH(R_F32((u32)(0x935240u)));
    /* 006431bd: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 006431bf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006431c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006431c3: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 006431c9: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 006431cf: jmp 0x6431f3 */ goto L_006431f3;
L_006431d1:; BB(0x006431d1);
    /* 006431d1: fld dword ptr [0x935234] */ FPUSH(R_F32((u32)(0x935234u)));
    /* 006431d7: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 006431dd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006431df: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 006431e5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006431e7: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 006431ed: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
L_006431f3:; BB(0x006431f3);
    /* 006431f3: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006431f6: lea edx, [esi + 0x9c] */ r_edx = (u32)(r_esi+0x9cu);
    /* 006431fc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x643201u); f_0082ebac();
    /* 00643201: fld dword ptr [0x935230] */ FPUSH(R_F32((u32)(0x935230u)));
    /* 00643207: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 0064320b: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0064320e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00643210: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643212: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643213: jbe 0x64321c */ if ((fC||fZ)) goto L_0064321c;
L_00643215:; BB(0x00643215);
    /* 00643215: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00643217: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0064321a: jmp 0x643238 */ goto L_00643238;
L_0064321c:; BB(0x0064321c);
    /* 0064321c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0064321e: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00643222: fadd dword ptr [0x93522c] */ ST(0) = ST(0) + R_F32((u32)(0x93522cu));
    /* 00643228: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064322a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064322c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064322d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064322f: ja 0x643233 */ if ((!fC&&!fZ)) goto L_00643233;
L_00643231:; BB(0x00643231);
    /* 00643231: fst st(1) */ ST(1) = ST(0);
L_00643233:; BB(0x00643233);
    /* 00643233: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00643235: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
L_00643238:; BB(0x00643238);
    /* 00643238: movsx eax, word ptr [esi + 0xb4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb4u));
    /* 0064323f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643241: je 0x643252 */ if (fZ) goto L_00643252;
L_00643243:; BB(0x00643243);
    /* 00643243: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643246: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 0064324d: jmp 0x6434b7 */ goto L_006434b7;
L_00643252:; BB(0x00643252);
    /* 00643252: movzx eax, byte ptr [esi + 0xb8] */ r_eax = (u32)R8((u32)(r_esi+0xb8u));
    /* 00643259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064325b: je 0x643464 */ if (fZ) goto L_00643464;
L_00643261:; BB(0x00643261);
    /* 00643261: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643264: jne 0x643361 */ if (!fZ) goto L_00643361;
L_0064326a:; BB(0x0064326a);
    /* 0064326a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64326fu); f_008587a5();
    /* 0064326f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643273: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643277: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064327d: fcomp dword ptr [0x93521c] */ fx_compare(ST(0), R_F32((u32)(0x93521cu))); FPOP();
    /* 00643283: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643285: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643286: jae 0x64330f */ if (!fC) goto L_0064330f;
L_0064328c:; BB(0x0064328c);
    /* 0064328c: mov byte ptr [esi + 0xb8], 2 */ W8((u32)(r_esi+0xb8u), 0x2u);
    /* 00643293: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643298u); f_008587a5();
    /* 00643298: fld dword ptr [0x935220] */ FPUSH(R_F32((u32)(0x935220u)));
    /* 0064329e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006432a2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006432a6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006432ac: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006432ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006432b0: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006432b4: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006432b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006432be: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006432c2: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006432c6: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 006432ca: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006432ce: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006432d2: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 006432d9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6432deu); f_008587a5();
    /* 006432de: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006432e2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006432e6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006432ec: fcomp dword ptr [0x93521c] */ fx_compare(ST(0), R_F32((u32)(0x93521cu))); FPOP();
    /* 006432f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006432f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006432f5: jae 0x643303 */ if (!fC) goto L_00643303;
L_006432f7:; BB(0x006432f7);
    /* 006432f7: mov byte ptr [esi + 0xba], 0 */ W8((u32)(r_esi+0xbau), 0x0u);
    /* 006432fe: jmp 0x6434b7 */ goto L_006434b7;
L_00643303:; BB(0x00643303);
    /* 00643303: mov byte ptr [esi + 0xba], 1 */ W8((u32)(r_esi+0xbau), 0x1u);
    /* 0064330a: jmp 0x6434b7 */ goto L_006434b7;
L_0064330f:; BB(0x0064330f);
    /* 0064330f: mov byte ptr [esi + 0xb8], 0 */ W8((u32)(r_esi+0xb8u), 0x0u);
    /* 00643316: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64331bu); f_008587a5();
    /* 0064331b: fld dword ptr [0x935224] */ FPUSH(R_F32((u32)(0x935224u)));
    /* 00643321: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643325: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643329: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064332f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643331: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643333: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00643337: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0064333c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643341: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00643345: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00643349: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064334d: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00643351: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00643355: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 0064335c: jmp 0x6434b7 */ goto L_006434b7;
L_00643361:; BB(0x00643361);
    /* 00643361: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643364: jne 0x6434b7 */ if (!fZ) goto L_006434b7;
L_0064336a:; BB(0x0064336a);
    /* 0064336a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64336fu); f_008587a5();
    /* 0064336f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643373: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643377: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064337d: fcomp dword ptr [0x935228] */ fx_compare(ST(0), R_F32((u32)(0x935228u))); FPOP();
    /* 00643383: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643385: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643386: jae 0x64340f */ if (!fC) goto L_0064340f;
L_0064338c:; BB(0x0064338c);
    /* 0064338c: mov byte ptr [esi + 0xb8], 2 */ W8((u32)(r_esi+0xb8u), 0x2u);
    /* 00643393: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643398u); f_008587a5();
    /* 00643398: fld dword ptr [0x935220] */ FPUSH(R_F32((u32)(0x935220u)));
    /* 0064339e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006433a2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006433a6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006433ac: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006433ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006433b0: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006433b4: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006433b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006433be: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006433c2: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006433c6: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 006433ca: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006433ce: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006433d2: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 006433d9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6433deu); f_008587a5();
    /* 006433de: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006433e2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006433e6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006433ec: fcomp dword ptr [0x93521c] */ fx_compare(ST(0), R_F32((u32)(0x93521cu))); FPOP();
    /* 006433f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006433f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006433f5: jae 0x643403 */ if (!fC) goto L_00643403;
L_006433f7:; BB(0x006433f7);
    /* 006433f7: mov byte ptr [esi + 0xba], 0 */ W8((u32)(r_esi+0xbau), 0x0u);
    /* 006433fe: jmp 0x6434b7 */ goto L_006434b7;
L_00643403:; BB(0x00643403);
    /* 00643403: mov byte ptr [esi + 0xba], 1 */ W8((u32)(r_esi+0xbau), 0x1u);
    /* 0064340a: jmp 0x6434b7 */ goto L_006434b7;
L_0064340f:; BB(0x0064340f);
    /* 0064340f: mov byte ptr [esi + 0xb8], 1 */ W8((u32)(r_esi+0xb8u), 0x1u);
    /* 00643416: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64341bu); f_008587a5();
    /* 0064341b: fld dword ptr [0x935224] */ FPUSH(R_F32((u32)(0x935224u)));
    /* 00643421: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643425: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643429: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064342f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643431: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00643437: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643439: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0064343d: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00643442: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643447: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0064344b: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0064344f: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 00643453: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00643457: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0064345b: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 00643462: jmp 0x6434b7 */ goto L_006434b7;
L_00643464:; BB(0x00643464);
    /* 00643464: mov byte ptr [esi + 0xb8], 1 */ W8((u32)(r_esi+0xb8u), 0x1u);
    /* 0064346b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643470u); f_008587a5();
    /* 00643470: fld dword ptr [0x935218] */ FPUSH(R_F32((u32)(0x935218u)));
    /* 00643476: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0064347a: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0064347e: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 00643484: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643486: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 0064348c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0064348e: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00643492: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00643497: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064349c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434a0: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434a4: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 006434a8: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434ac: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434b0: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
L_006434b7:; BB(0x006434b7);
    /* 006434b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6434bcu); f_008587a5();
    /* 006434bc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006434c0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006434c4: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006434ca: fmul dword ptr [0x935210] */ ST(0) = ST(0) * R_F32((u32)(0x935210u));
    /* 006434d0: fadd dword ptr [0x935214] */ ST(0) = ST(0) + R_F32((u32)(0x935214u));
    /* 006434d6: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006434da: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006434df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006434e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434e8: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434ec: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 006434f0: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434f4: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434f8: add word ptr [esi + 0xb6], ax */ { u32 ad = (u32)(r_esi+0xb6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006434ff: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643503: ret  */ FN_RET(0x00642db0); r_esp += 4; return;
}

