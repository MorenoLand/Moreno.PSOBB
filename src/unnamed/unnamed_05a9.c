#include "protos.h"

void f_005a900c(void) /* sub_5A900C */
{
    FN_ENTER(0x005a900c);
    /* 005a900c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a900d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a900f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a9013: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9016: je 0x5a9082 */ if (fZ) goto L_005a9082;
L_005a9018:; BB(0x005a9018);
    /* 005a9018: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a901b: je 0x5a9057 */ if (fZ) goto L_005a9057;
L_005a901d:; BB(0x005a901d);
    /* 005a901d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a901f: jne 0x5a907e */ if (!fZ) goto L_005a907e;
L_005a9021:; BB(0x005a9021);
    /* 005a9021: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9023: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a9028u); f_007aa094();
    /* 005a9028: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005a902d: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9032: mov edx, dword ptr [ebx + 0x500] */ r_edx = R32((u32)(r_ebx+0x500u));
    /* 005a9038: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a903d: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9040: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9042: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x5a9047u); f_00772054();
    /* 005a9047: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a9049: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a904b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a904d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a9053u); call_ind(t); }
    /* 005a9053: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a9054: ret 4 */ FN_RET(0x005a900c); r_esp += 8; return;
L_005a9057:; BB(0x005a9057);
    /* 005a9057: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a905c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a905e: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a9063u); f_00520ea0();
    /* 005a9063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a9065: je 0x5a907e */ if (fZ) goto L_005a907e;
L_005a9067:; BB(0x005a9067);
    /* 005a9067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9069: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a906eu); f_005213d8();
    /* 005a906e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9070: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a9075u); f_00521410();
    /* 005a9075: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9077: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9079: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a907eu); f_0051f62c();
L_005a907e:; BB(0x005a907e);
    /* 005a907e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a907f: ret 4 */ FN_RET(0x005a900c); r_esp += 8; return;
L_005a9082:; BB(0x005a9082);
    /* 005a9082: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9084: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9087: mov eax, 1 */ r_eax = 0x1u;
    /* 005a908c: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a908f: push dword ptr [ebx + 0x50] */ { u32 v = R32((u32)(r_ebx+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9092: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005a9099: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a909b: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a90a0u); f_00771c8c();
    /* 005a90a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a90a2: je 0x5a907e */ if (fZ) goto L_005a907e;
L_005a90a4:; BB(0x005a90a4);
    /* 005a90a4: push dword ptr [ebx + 0x308] */ { u32 v = R32((u32)(r_ebx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a90aa: push dword ptr [ebx + 0x304] */ { u32 v = R32((u32)(r_ebx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a90b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a90b2: push dword ptr [ebx + 0x300] */ { u32 v = R32((u32)(r_ebx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a90b8: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5a90bdu); f_00771f1c();
    /* 005a90bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a90be: ret 4 */ FN_RET(0x005a900c); r_esp += 8; return;
}

void f_005a90c4(void) /* sub_5A90C4 */
{
    FN_ENTER(0x005a90c4);
    /* 005a90c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a90c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005a90c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a90c9: push 0x8d8bda */ { u32 v = 0x8d8bdau; r_esp -= 4; W32(r_esp, v); }
    /* 005a90ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a90d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a90d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a90dc: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a90df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a90e2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005a90e5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005a90e8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005a90eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a90ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a90f1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a90f4: je 0x5a95e6 */ if (fZ) goto L_005a95e6;
L_005a90fa:; BB(0x005a90fa);
    /* 005a90fa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a90fd: je 0x5a94a9 */ if (fZ) goto L_005a94a9;
L_005a9103:; BB(0x005a9103);
    /* 005a9103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9105: jne 0x5a947c */ if (!fZ) goto L_005a947c;
L_005a910b:; BB(0x005a910b);
    /* 005a910b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a9110u); f_007aa094();
    /* 005a9110: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9113: mov eax, dword ptr [eax + 0x4e0] */ r_eax = R32((u32)(r_eax+0x4e0u));
    /* 005a9119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a911b: jne 0x5a92c2 */ if (!fZ) goto L_005a92c2;
L_005a9121:; BB(0x005a9121);
    /* 005a9121: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9124: call 0x5a8ae0 */ r_esp -= 4; W32(r_esp, 0x5a9129u); f_005a8ae0();
    /* 005a9129: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a912c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005a912f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a9134u); f_0082dcbc();
    /* 005a9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9137: fmul dword ptr [eax + 0x4ec] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4ecu));
    /* 005a913d: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 005a9140: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005a9143: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 005a9146: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a914bu); f_0082ddd8();
    /* 005a914b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a914e: fmul dword ptr [ecx + 0x4ec] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4ecu));
    /* 005a9154: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 005a9157: mov esi, dword ptr [ecx + 0x4a4] */ r_esi = R32((u32)(r_ecx+0x4a4u));
    /* 005a915d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005a9160: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 005a9163: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005a9166: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005a9169: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005a916c: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 005a916f: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 005a9172: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5a9177u); f_007b51c4();
    /* 005a9177: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a917a: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 005a9180: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5a9185u); f_007b6894();
    /* 005a9185: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9188: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 005a918e: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005a9194: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 005a9197: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a919d: je 0x5a9295 */ if (fZ) goto L_005a9295;
L_005a91a3:; BB(0x005a91a3);
    /* 005a91a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a91a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005a91a8:; BB(0x005a91a8);
    /* 005a91a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a91ab: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 005a91b2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a91b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a91b7: je 0x5a9295 */ if (fZ) goto L_005a9295;
L_005a91bd:; BB(0x005a91bd);
    /* 005a91bd: mov eax, edx */ r_eax = r_edx;
    /* 005a91bf: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 005a91c6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a91c9: jne 0x5a9283 */ if (!fZ) goto L_005a9283;
L_005a91cf:; BB(0x005a91cf);
    /* 005a91cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a91d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a91d3: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 005a91d9: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x5a91deu); f_00521b18();
    /* 005a91de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a91e0: je 0x5a9283 */ if (fZ) goto L_005a9283;
L_005a91e6:; BB(0x005a91e6);
    /* 005a91e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a91e9: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 005a91ef: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a91f2: jne 0x5a94d6 */ if (!fZ) goto L_005a94d6;
L_005a91f8:; BB(0x005a91f8);
    /* 005a91f8: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a91fe: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 005a9201: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 005a9204: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005a920b:; BB(0x005a920b);
    /* 005a920b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a920e: mov ebx, eax */ r_ebx = r_eax;
    /* 005a9210: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005a9212: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a9217: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a921b: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a921e: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9221: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9222: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5a9225u); call_ind(t); }
    /* 005a9225: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a9227: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a922a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a922d: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9232: jne 0x5a923f */ if (!fZ) goto L_005a923f;
L_005a9234:; BB(0x005a9234);
    /* 005a9234: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9237: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a923c: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_005a923f:; BB(0x005a923f);
    /* 005a923f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005a9246: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9248: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a924du); f_005caba4();
    /* 005a924d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a924e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005a9251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9253: je 0x5a927c */ if (fZ) goto L_005a927c;
L_005a9255:; BB(0x005a9255);
    /* 005a9255: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005a925c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a9263: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9268: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a926b: mov ecx, eax */ r_ecx = r_eax;
    /* 005a926d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a926e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a926f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9270: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x5a9275u); f_0054dda0();
    /* 005a9275: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005a927c:; BB(0x005a927c);
    /* 005a927c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005a9283:; BB(0x005a9283);
    /* 005a9283: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a9286: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9289: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a928c: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a928f: jl 0x5a91a8 */ if ((fS!=fO)) goto L_005a91a8;
L_005a9295:; BB(0x005a9295);
    /* 005a9295: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9298: mov eax, dword ptr [eax + 0x4dc] */ r_eax = R32((u32)(r_eax+0x4dcu));
    /* 005a929e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a92a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a92a3: jle 0x5a9510 */ if ((fZ||fS!=fO)) goto L_005a9510;
L_005a92a9:; BB(0x005a92a9);
    /* 005a92a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a92ac: mov dword ptr [edx + 0x4dc], eax */ W32((u32)(r_edx+0x4dcu), r_eax);
L_005a92b2:; BB(0x005a92b2);
    /* 005a92b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a92b5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a92b7: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a92bdu); call_ind(t); }
    /* 005a92bd: jmp 0x5a944a */ goto L_005a944a;
L_005a92c2:; BB(0x005a92c2);
    /* 005a92c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a92c5: jne 0x5a944a */ if (!fZ) goto L_005a944a;
L_005a92cb:; BB(0x005a92cb);
    /* 005a92cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a92ce: mov edx, dword ptr [eax + 0x4dc] */ r_edx = R32((u32)(r_eax+0x4dcu));
    /* 005a92d4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a92d7: mov dword ptr [eax + 0x4dc], edx */ W32((u32)(r_eax+0x4dcu), r_edx);
    /* 005a92dd: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a92e0: jge 0x5a95a4 */ if ((fS==fO)) goto L_005a95a4;
L_005a92e6:; BB(0x005a92e6);
    /* 005a92e6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a92e9: je 0x5a92f2 */ if (fZ) goto L_005a92f2;
L_005a92eb:; BB(0x005a92eb);
    /* 005a92eb: mov ecx, eax */ r_ecx = r_eax;
    /* 005a92ed: call 0x5a8d20 */ r_esp -= 4; W32(r_esp, 0x5a92f2u); f_005a8d20();
L_005a92f2:; BB(0x005a92f2);
    /* 005a92f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a92f5: mov esi, dword ptr [ecx + 0x4a4] */ r_esi = R32((u32)(r_ecx+0x4a4u));
    /* 005a92fb: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005a92fe: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005a9301: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005a9304: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005a9307: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 005a930a: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 005a930d: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5a9312u); f_007b51c4();
    /* 005a9312: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9315: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 005a931b: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5a9320u); f_007b6894();
    /* 005a9320: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9323: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 005a9329: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005a932f: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 005a9332: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9338: je 0x5a9430 */ if (fZ) goto L_005a9430;
L_005a933e:; BB(0x005a933e);
    /* 005a933e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a9340: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005a9343:; BB(0x005a9343);
    /* 005a9343: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a9346: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 005a934d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a9350: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9352: je 0x5a9430 */ if (fZ) goto L_005a9430;
L_005a9358:; BB(0x005a9358);
    /* 005a9358: mov eax, edx */ r_eax = r_edx;
    /* 005a935a: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 005a9361: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9364: jne 0x5a941e */ if (!fZ) goto L_005a941e;
L_005a936a:; BB(0x005a936a);
    /* 005a936a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a936d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a936e: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 005a9374: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x5a9379u); f_00521b18();
    /* 005a9379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a937b: je 0x5a941e */ if (fZ) goto L_005a941e;
L_005a9381:; BB(0x005a9381);
    /* 005a9381: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9384: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 005a938a: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a938d: jne 0x5a956a */ if (!fZ) goto L_005a956a;
L_005a9393:; BB(0x005a9393);
    /* 005a9393: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a9399: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 005a939c: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 005a939f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005a93a6:; BB(0x005a93a6);
    /* 005a93a6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93a9: mov ebx, eax */ r_ebx = r_eax;
    /* 005a93ab: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005a93ad: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a93b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a93b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a93b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a93b6: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a93b9: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a93bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a93bd: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5a93c0u); call_ind(t); }
    /* 005a93c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a93c2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93c5: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a93c8: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a93cd: jne 0x5a93da */ if (!fZ) goto L_005a93da;
L_005a93cf:; BB(0x005a93cf);
    /* 005a93cf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93d2: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a93d7: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_005a93da:; BB(0x005a93da);
    /* 005a93da: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005a93e1: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a93e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a93e8u); f_005caba4();
    /* 005a93e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a93e9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a93ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a93ee: je 0x5a9417 */ if (fZ) goto L_005a9417;
L_005a93f0:; BB(0x005a93f0);
    /* 005a93f0: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 005a93f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a93fe: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9403: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9406: mov ecx, eax */ r_ecx = r_eax;
    /* 005a9408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9409: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a940a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a940b: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x5a9410u); f_0054dda0();
    /* 005a9410: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005a9417:; BB(0x005a9417);
    /* 005a9417: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005a941e:; BB(0x005a941e);
    /* 005a941e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a9421: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9424: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a9427: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a942a: jl 0x5a9343 */ if ((fS!=fO)) goto L_005a9343;
L_005a9430:; BB(0x005a9430);
    /* 005a9430: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9433: push dword ptr [ecx + 0x4ec] */ { u32 v = R32((u32)(r_ecx+0x4ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9439: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a943f: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9445: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a944au); f_005209d4();
L_005a944a:; BB(0x005a944a);
    /* 005a944a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a944d: mov edx, dword ptr [eax + 0x3dc] */ r_edx = R32((u32)(r_eax+0x3dcu));
    /* 005a9453: lea ecx, [eax + 0x3dc] */ r_ecx = (u32)(r_eax+0x3dcu);
    /* 005a9459: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5a945cu); call_ind(t); }
    /* 005a945c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a945e: je 0x5a94bd */ if (fZ) goto L_005a94bd;
L_005a9460:; BB(0x005a9460);
    /* 005a9460: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9463: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a9469: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a946b: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a946e: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a9474: call dword ptr [edx + 0x16c] */ { u32 t = R32((u32)(r_edx+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a947au); call_ind(t); }
    /* 005a947a: jmp 0x5a94bd */ goto L_005a94bd;
L_005a947c:; BB(0x005a947c);
    /* 005a947c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a947f: jne 0x5a94bd */ if (!fZ) goto L_005a94bd;
L_005a9481:; BB(0x005a9481);
    /* 005a9481: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a9487: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 005a948d: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a9490: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a9496: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a9499: and edx, 0xfffff8ff */ {  u32 a = r_edx; u32 b = 0xfffff8ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a949f: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a94a2: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5a94a7u); f_00520be8();
    /* 005a94a7: jmp 0x5a94bd */ goto L_005a94bd;
L_005a94a9:; BB(0x005a94a9);
    /* 005a94a9: mov eax, ecx */ r_eax = r_ecx;
    /* 005a94ab: mov edx, dword ptr [eax + 0x4e0] */ r_edx = R32((u32)(r_eax+0x4e0u));
    /* 005a94b1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a94b4: jne 0x5a94bd */ if (!fZ) goto L_005a94bd;
L_005a94b6:; BB(0x005a94b6);
    /* 005a94b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a94b8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a94bdu); f_0051f62c();
L_005a94bd:; BB(0x005a94bd);
    /* 005a94bd: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a94c0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a94c3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a94c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a94c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a94d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005a94d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a94d3: ret 4 */ FN_RET(0x005a90c4); r_esp += 8; return;
L_005a94d6:; BB(0x005a94d6);
    /* 005a94d6: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005a94dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a94de: je 0x5a94f8 */ if (fZ) goto L_005a94f8;
L_005a94e0:; BB(0x005a94e0);
    /* 005a94e0: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a94e6: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a94e9: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 005a94ec: mov dword ptr [ebp - 0x44], 5 */ W32((u32)(r_ebp+0xffffffbcu), 0x5u);
    /* 005a94f3: jmp 0x5a920b */ goto L_005a920b;
L_005a94f8:; BB(0x005a94f8);
    /* 005a94f8: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a94fe: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a9501: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 005a9504: mov dword ptr [ebp - 0x44], 3 */ W32((u32)(r_ebp+0xffffffbcu), 0x3u);
    /* 005a950b: jmp 0x5a920b */ goto L_005a920b;
L_005a9510:; BB(0x005a9510);
    /* 005a9510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9513: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a9519: mov dword ptr [ecx + 0x4e0], 1 */ W32((u32)(r_ecx+0x4e0u), 0x1u);
    /* 005a9523: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a9526: mov dword ptr [ecx + 0x4dc], 0 */ W32((u32)(r_ecx+0x4dcu), 0x0u);
    /* 005a9530: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9532: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a9538: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a953du); f_0051f664();
    /* 005a953d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a9542u); f_00807ac0();
    /* 005a9542: push dword ptr [eax*4 + 0x9c0abc] */ { u32 v = R32((u32)(r_eax*4+0x9c0abcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9549: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a954c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a9551u); f_007879b8();
    /* 005a9551: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9554: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005a9557: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a955a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a955b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a955c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a955d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a9562u); f_00814298();
    /* 005a9562: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9565: jmp 0x5a92b2 */ goto L_005a92b2;
L_005a956a:; BB(0x005a956a);
    /* 005a956a: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005a9570: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9572: je 0x5a958c */ if (fZ) goto L_005a958c;
L_005a9574:; BB(0x005a9574);
    /* 005a9574: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a957a: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a957d: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 005a9580: mov dword ptr [ebp - 0x54], 5 */ W32((u32)(r_ebp+0xffffffacu), 0x5u);
    /* 005a9587: jmp 0x5a93a6 */ goto L_005a93a6;
L_005a958c:; BB(0x005a958c);
    /* 005a958c: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a9592: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a9595: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 005a9598: mov dword ptr [ebp - 0x54], 3 */ W32((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 005a959f: jmp 0x5a93a6 */ goto L_005a93a6;
L_005a95a4:; BB(0x005a95a4);
    /* 005a95a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005a95a6: mov eax, 3 */ r_eax = 0x3u;
    /* 005a95ab: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a95b2: call 0x5a9c3c */ r_esp -= 4; W32(r_esp, 0x5a95b7u); f_005a9c3c();
    /* 005a95b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a95ba: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a95c0: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a95c3: je 0x5a95cf */ if (fZ) goto L_005a95cf;
L_005a95c5:; BB(0x005a95c5);
    /* 005a95c5: mov dword ptr [eax + 0x4e0], 2 */ W32((u32)(r_eax+0x4e0u), 0x2u);
L_005a95cf:; BB(0x005a95cf);
    /* 005a95cf: fld dword ptr [eax + 0x4ec] */ FPUSH(R_F32((u32)(r_eax+0x4ecu)));
    /* 005a95d5: fmul dword ptr [0x92a30c] */ ST(0) = ST(0) * R_F32((u32)(0x92a30cu));
    /* 005a95db: fstp dword ptr [eax + 0x4ec] */ W_F32((u32)(r_eax+0x4ecu), ST(0)); FPOP();
    /* 005a95e1: jmp 0x5a92f2 */ goto L_005a92f2;
L_005a95e6:; BB(0x005a95e6);
    /* 005a95e6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a95e8: mov eax, 2 */ r_eax = 0x2u;
    /* 005a95ed: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a95f4: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a95f9u); f_0051f664();
    /* 005a95f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a95fc: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a9602: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 005a9608: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a960b: or eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a960e: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a9614: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a9617: or edx, 0x700 */ {  u32 a = r_edx; u32 b = 0x700u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a961d: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a9620: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005a9622: call dword ptr [esi + 0x188] */ { u32 t = R32((u32)(r_esi+0x188u)); r_esp -= 4; W32(r_esp, 0x5a9628u); call_ind(t); }
    /* 005a9628: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a962b: mov edx, dword ptr [eax + 0x3dc] */ r_edx = R32((u32)(r_eax+0x3dcu));
    /* 005a9631: lea ecx, [eax + 0x3dc] */ r_ecx = (u32)(r_eax+0x3dcu);
    /* 005a9637: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5a963au); call_ind(t); }
    /* 005a963a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a963d: mov eax, dword ptr [ecx + 0x500] */ r_eax = R32((u32)(r_ecx+0x500u));
    /* 005a9643: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a9645: mov dword ptr [ecx + 0x4ec], edx */ W32((u32)(r_ecx+0x4ecu), r_edx);
    /* 005a964b: mov dword ptr [ecx + 0x4e0], 0 */ W32((u32)(r_ecx+0x4e0u), 0x0u);
    /* 005a9655: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a965au); f_00807ac0();
    /* 005a965a: push dword ptr [eax*4 + 0x9c0a74] */ { u32 v = R32((u32)(r_eax*4+0x9c0a74u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9661: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9664: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a9669u); f_007879b8();
    /* 005a9669: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a966c: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005a966f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9671: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9672: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9673: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9675: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a967au); f_00814298();
    /* 005a967a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a967d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9680: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 005a9683: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 005a9686: mov ebx, dword ptr [esi + 0x58] */ r_ebx = R32((u32)(r_esi+0x58u));
    /* 005a9689: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005a968c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005a968f: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005a9692: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 005a9695: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 005a9698: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 005a969b: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 005a969e: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 005a96a4: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 005a96aa: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 005a96b0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a96b5u); f_0082dcbc();
    /* 005a96b5: fmul dword ptr [0x92a304] */ ST(0) = ST(0) * R_F32((u32)(0x92a304u));
    /* 005a96bb: mov eax, esi */ r_eax = r_esi;
    /* 005a96bd: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 005a96c0: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005a96c3: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 005a96c6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a96cbu); f_0082ddd8();
    /* 005a96cb: fmul dword ptr [0x92a304] */ ST(0) = ST(0) * R_F32((u32)(0x92a304u));
    /* 005a96d1: mov ecx, esi */ r_ecx = r_esi;
    /* 005a96d3: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 005a96d6: mov edx, dword ptr [ecx + 0x500] */ r_edx = R32((u32)(r_ecx+0x500u));
    /* 005a96dc: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 005a96df: fld dword ptr [0x92a300] */ FPUSH(R_F32((u32)(0x92a300u)));
    /* 005a96e5: fdiv dword ptr [edx] */ ST(0) = ST(0) / R_F32((u32)(r_edx));
    /* 005a96e7: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 005a96ea: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 005a96ee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a96f3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a96f6: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005a96f9: fistp dword ptr [ecx + 0x4dc] */ W32((u32)(r_ecx+0x4dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a96ff: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 005a9702: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a9704: mov dword ptr [ecx + 0x490], eax */ W32((u32)(r_ecx+0x490u), r_eax);
    /* 005a970a: mov dword ptr [ecx + 0x494], eax */ W32((u32)(r_ecx+0x494u), r_eax);
    /* 005a9710: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5a9715u); f_00520bdc();
    /* 005a9715: jmp 0x5a94bd */ goto L_005a94bd;
}

void f_005a971c(void) /* sub_5A971C */
{
    FN_ENTER(0x005a971c);
    /* 005a971c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a971d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a971e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a9720: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a9724: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9727: je 0x5a9855 */ if (fZ) goto L_005a9855;
L_005a972d:; BB(0x005a972d);
    /* 005a972d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9730: je 0x5a983c */ if (fZ) goto L_005a983c;
L_005a9736:; BB(0x005a9736);
    /* 005a9736: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9738: jne 0x5a9827 */ if (!fZ) goto L_005a9827;
L_005a973e:; BB(0x005a973e);
    /* 005a973e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a9740: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a9745u); f_007aa094();
    /* 005a9745: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a974a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a974c: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a9751u); f_00520ea0();
    /* 005a9751: mov eax, dword ptr [ebp + 0x4dc] */ r_eax = R32((u32)(r_ebp+0x4dcu));
    /* 005a9757: mov edx, dword ptr [ebp + 0x4e0] */ r_edx = R32((u32)(r_ebp+0x4e0u));
    /* 005a975d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9760: mov dword ptr [ebp + 0x4dc], eax */ W32((u32)(r_ebp+0x4dcu), r_eax);
    /* 005a9766: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9768: jne 0x5a97ca */ if (!fZ) goto L_005a97ca;
L_005a976a:; BB(0x005a976a);
    /* 005a976a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a976d: jle 0x5a97a9 */ if ((fZ||fS!=fO)) goto L_005a97a9;
L_005a976f:; BB(0x005a976f);
    /* 005a976f: mov dword ptr [ebp + 0x4e0], 1 */ W32((u32)(r_ebp+0x4e0u), 0x1u);
    /* 005a9779: mov eax, 3 */ r_eax = 0x3u;
    /* 005a977e: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a9785: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a978au); f_00807ac0();
    /* 005a978a: push dword ptr [eax*4 + 0x9c0abc] */ { u32 v = R32((u32)(r_eax*4+0x9c0abcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9791: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a9793: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a9798u); f_007879b8();
    /* 005a9798: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005a979b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a979d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a979e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a979f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a97a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a97a1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a97a6u); f_00814298();
    /* 005a97a6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a97a9:; BB(0x005a97a9);
    /* 005a97a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a97ab: call 0x5a8ae0 */ r_esp -= 4; W32(r_esp, 0x5a97b0u); f_005a8ae0();
    /* 005a97b0: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005a97b5: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a97bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a97bd: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a97c3: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5a97c8u); f_005207c4();
    /* 005a97c8: jmp 0x5a97ea */ goto L_005a97ea;
L_005a97ca:; BB(0x005a97ca);
    /* 005a97ca: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a97cd: jne 0x5a97ea */ if (!fZ) goto L_005a97ea;
L_005a97cf:; BB(0x005a97cf);
    /* 005a97cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a97d1: call 0x5a9c3c */ r_esp -= 4; W32(r_esp, 0x5a97d6u); f_005a9c3c();
    /* 005a97d6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005a97dc: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a97de: je 0x5a97ea */ if (fZ) goto L_005a97ea;
L_005a97e0:; BB(0x005a97e0);
    /* 005a97e0: mov dword ptr [ebp + 0x4e0], 2 */ W32((u32)(r_ebp+0x4e0u), 0x2u);
L_005a97ea:; BB(0x005a97ea);
    /* 005a97ea: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 005a97f0: lea ecx, [ebp + 0x3dc] */ r_ecx = (u32)(r_ebp+0x3dcu);
    /* 005a97f6: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5a97f9u); call_ind(t); }
    /* 005a97f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a97fb: je 0x5a9850 */ if (fZ) goto L_005a9850;
L_005a97fd:; BB(0x005a97fd);
    /* 005a97fd: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a9803: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005a9806: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a9809: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005a980f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a9811: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5a9817u); call_ind(t); }
    /* 005a9817: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a981a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a981c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a9822u); call_ind(t); }
    /* 005a9822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9823: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a9824: ret 4 */ FN_RET(0x005a971c); r_esp += 8; return;
L_005a9827:; BB(0x005a9827);
    /* 005a9827: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a982a: jne 0x5a9850 */ if (!fZ) goto L_005a9850;
L_005a982c:; BB(0x005a982c);
    /* 005a982c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a982f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a9831: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a9837u); call_ind(t); }
    /* 005a9837: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a9839: ret 4 */ FN_RET(0x005a971c); r_esp += 8; return;
L_005a983c:; BB(0x005a983c);
    /* 005a983c: mov eax, dword ptr [ebp + 0x4e0] */ r_eax = R32((u32)(r_ebp+0x4e0u));
    /* 005a9842: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a9845: jne 0x5a9850 */ if (!fZ) goto L_005a9850;
L_005a9847:; BB(0x005a9847);
    /* 005a9847: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9849: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a984b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a9850u); f_0051f62c();
L_005a9850:; BB(0x005a9850);
    /* 005a9850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9851: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a9852: ret 4 */ FN_RET(0x005a971c); r_esp += 8; return;
L_005a9855:; BB(0x005a9855);
    /* 005a9855: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9857: mov eax, 1 */ r_eax = 0x1u;
    /* 005a985c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a9863: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a9865: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a986au); f_0051f664();
    /* 005a986a: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a9870: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005a9873: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a9876: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a9879: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005a987f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a9881: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x5a9887u); call_ind(t); }
    /* 005a9887: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 005a988d: lea ecx, [ebp + 0x3dc] */ r_ecx = (u32)(r_ebp+0x3dcu);
    /* 005a9893: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5a9896u); call_ind(t); }
    /* 005a9896: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 005a9899: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 005a989c: mov edi, dword ptr [ebp + 0x58] */ r_edi = R32((u32)(r_ebp+0x58u));
    /* 005a989f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a98a1: mov dword ptr [ebp + 0x4dc], ecx */ W32((u32)(r_ebp+0x4dcu), r_ecx);
    /* 005a98a7: mov dword ptr [ebp + 0x4e0], ecx */ W32((u32)(r_ebp+0x4e0u), r_ecx);
    /* 005a98ad: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 005a98b0: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 005a98b3: mov dword ptr [ebp + 0x40], edi */ W32((u32)(r_ebp+0x40u), r_edi);
    /* 005a98b6: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 005a98b9: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 005a98bc: mov dword ptr [ebp + 0x4c], edi */ W32((u32)(r_ebp+0x4cu), r_edi);
    /* 005a98bf: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 005a98c5: mov dword ptr [ebp + 0x304], edx */ W32((u32)(r_ebp+0x304u), r_edx);
    /* 005a98cb: mov dword ptr [ebp + 0x308], edi */ W32((u32)(r_ebp+0x308u), r_edi);
    /* 005a98d1: mov dword ptr [ebp + 0x490], ecx */ W32((u32)(r_ebp+0x490u), r_ecx);
    /* 005a98d7: mov dword ptr [ebp + 0x494], ecx */ W32((u32)(r_ebp+0x494u), r_ecx);
    /* 005a98dd: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a98e2u); f_00807ac0();
    /* 005a98e2: push dword ptr [eax*4 + 0x9c0a74] */ { u32 v = R32((u32)(r_eax*4+0x9c0a74u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a98e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a98eb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a98f0u); f_007879b8();
    /* 005a98f0: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a98f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a98f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a98f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a98f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a98f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a98f9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a98feu); f_00814298();
    /* 005a98fe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a9901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9902: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a9903: ret 4 */ FN_RET(0x005a971c); r_esp += 8; return;
}

void f_005a9908(void) /* sub_5A9908 */
{
    FN_ENTER(0x005a9908);
    /* 005a9908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9909: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a990c: mov edi, ecx */ r_edi = r_ecx;
    /* 005a990e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005a9912: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9915: je 0x5a999d */ if (fZ) goto L_005a999d;
L_005a991b:; BB(0x005a991b);
    /* 005a991b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a991e: jne 0x5a9986 */ if (!fZ) goto L_005a9986;
L_005a9920:; BB(0x005a9920);
    /* 005a9920: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9925: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9927: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a992cu); f_00520ea0();
    /* 005a992c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a992e: je 0x5a9986 */ if (fZ) goto L_005a9986;
L_005a9930:; BB(0x005a9930);
    /* 005a9930: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9932: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a9937u); f_005213d8();
    /* 005a9937: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9939: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a993eu); f_00521410();
    /* 005a993e: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a9944: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a994a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a994c: fmul qword ptr [0x92a288] */ ST(0) = ST(0) * R_F64((u32)(0x92a288u));
    /* 005a9952: fdiv qword ptr [0x92a280] */ ST(0) = ST(0) / R_F64((u32)(0x92a280u));
    /* 005a9958: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005a995b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005a995f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a9964: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a9968: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a996c: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a996f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005a9972: mov eax, dword ptr [edi + 0x4c4] */ r_eax = R32((u32)(r_edi+0x4c4u));
    /* 005a9978: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a997b: je 0x5a998d */ if (fZ) goto L_005a998d;
L_005a997d:; BB(0x005a997d);
    /* 005a997d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a997f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9981: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a9986u); f_0051f62c();
L_005a9986:; BB(0x005a9986);
    /* 005a9986: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a9989: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a998a: ret 4 */ FN_RET(0x005a9908); r_esp += 8; return;
L_005a998d:; BB(0x005a998d);
    /* 005a998d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a998f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9991: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a9996u); f_0051f62c();
    /* 005a9996: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a9999: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a999a: ret 4 */ FN_RET(0x005a9908); r_esp += 8; return;
L_005a999d:; BB(0x005a999d);
    /* 005a999d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a999f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a99a1: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a99a6u); f_0051f664();
    /* 005a99a6: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005a99ac: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005a99ae: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a99b1: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 005a99b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005a99b9: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x5a99bfu); call_ind(t); }
    /* 005a99bf: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 005a99c2: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 005a99c5: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005a99c8: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 005a99cb: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005a99ce: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005a99d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a99d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a99d5: ret 4 */ FN_RET(0x005a9908); r_esp += 8; return;
}

void f_005a99d8(void) /* sub_5A99D8 */
{
    FN_ENTER(0x005a99d8);
    /* 005a99d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a99d9: mov esi, ecx */ r_esi = r_ecx;
    /* 005a99db: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a99e2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a99e5: je 0x5a9a0a */ if (fZ) goto L_005a9a0a;
L_005a99e7:; BB(0x005a99e7);
    /* 005a99e7: mov ecx, esi */ r_ecx = r_esi;
    /* 005a99e9: call 0x5a9a0c */ r_esp -= 4; W32(r_esp, 0x5a99eeu); f_005a9a0c();
    /* 005a99ee: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005a99f4: test al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a99f6: je 0x5a9a01 */ if (fZ) goto L_005a9a01;
L_005a99f8:; BB(0x005a99f8);
    /* 005a99f8: mov ecx, esi */ r_ecx = r_esi;
    /* 005a99fa: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5a99ffu); f_0051f81c();
    /* 005a99ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a9a00: ret  */ FN_RET(0x005a99d8); r_esp += 4; return;
L_005a9a01:; BB(0x005a9a01);
    /* 005a9a01: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a03: mov ecx, esi */ r_ecx = r_esi;
    /* 005a9a05: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a9a0au); f_0051f62c();
L_005a9a0a:; BB(0x005a9a0a);
    /* 005a9a0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a9a0b: ret  */ FN_RET(0x005a99d8); r_esp += 4; return;
}

void f_005a9a0c(void) /* sub_5A9A0C */
{
    FN_ENTER(0x005a9a0c);
    /* 005a9a0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a0d: mov edi, ecx */ r_edi = r_ecx;
    /* 005a9a0f: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 005a9a16: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a9a1b: jge 0x5a9a3f */ if ((fS==fO)) goto L_005a9a3f;
L_005a9a1d:; BB(0x005a9a1d);
    /* 005a9a1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a1e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a9a23u); f_0068d5a8();
    /* 005a9a23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a9a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9a26: je 0x5a9a30 */ if (fZ) goto L_005a9a30;
L_005a9a28:; BB(0x005a9a28);
    /* 005a9a28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a29: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9a2b: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x5a9a30u); f_00521388();
L_005a9a30:; BB(0x005a9a30);
    /* 005a9a30: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005a9a36: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a9a39: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
L_005a9a3f:; BB(0x005a9a3f);
    /* 005a9a3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a9a40: ret  */ FN_RET(0x005a9a0c); r_esp += 4; return;
}

void f_005a9adc(void) /* sub_5A9ADC */
{
    FN_ENTER(0x005a9adc);
    /* 005a9adc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9adf: mov dword ptr [0xa747f8], 0 */ W32((u32)(0xa747f8u), 0x0u);
    /* 005a9ae9: mov dword ptr [0xa747fc], 0 */ W32((u32)(0xa747fcu), 0x0u);
    /* 005a9af3: mov dword ptr [0xa74800], 0 */ W32((u32)(0xa74800u), 0x0u);
    /* 005a9afd: push 0x9c0c38 */ { u32 v = 0x9c0c38u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9b02: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x5a9b07u); f_0051f6b0();
    /* 005a9b07: mov dword ptr [0xa74818], eax */ W32((u32)(0xa74818u), r_eax);
    /* 005a9b0c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9b0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a9b10: mov dword ptr [0xa74824], eax */ W32((u32)(0xa74824u), r_eax);
    /* 005a9b15: mov dword ptr [0xa74820], eax */ W32((u32)(0xa74820u), r_eax);
    /* 005a9b1a: mov dword ptr [0xa7481c], eax */ W32((u32)(0xa7481cu), r_eax);
    /* 005a9b1f: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a9b24u); f_0077a6cc();
    /* 005a9b24: mov edx, eax */ r_edx = r_eax;
    /* 005a9b26: fld dword ptr [0x92a2cc] */ FPUSH(R_F32((u32)(0x92a2ccu)));
    /* 005a9b2c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9b2e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005a9b31: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a9b33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a9b35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a9b36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a9b38: jae 0x5a9b3c */ if (!fC) goto L_005a9b3c;
L_005a9b3a:; BB(0x005a9b3a);
    /* 005a9b3a: fst st(1) */ ST(1) = ST(0);
L_005a9b3c:; BB(0x005a9b3c);
    /* 005a9b3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a9b3e: fstp dword ptr [0x9c08c8] */ W_F32((u32)(0x9c08c8u), ST(0)); FPOP();
    /* 005a9b44: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005a9b47: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a9b49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a9b4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a9b4c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a9b4e: jae 0x5a9b52 */ if (!fC) goto L_005a9b52;
L_005a9b50:; BB(0x005a9b50);
    /* 005a9b50: fst st(1) */ ST(1) = ST(0);
L_005a9b52:; BB(0x005a9b52);
    /* 005a9b52: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a9b54: fstp dword ptr [0x9c08d8] */ W_F32((u32)(0x9c08d8u), ST(0)); FPOP();
    /* 005a9b5a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a9b5fu); f_0077a6cc();
    /* 005a9b5f: mov edx, eax */ r_edx = r_eax;
    /* 005a9b61: fld dword ptr [0x92a2cc] */ FPUSH(R_F32((u32)(0x92a2ccu)));
    /* 005a9b67: movzx ecx, word ptr [0x92a274] */ r_ecx = (u32)R16((u32)(0x92a274u));
    /* 005a9b6e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005a9b71: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a9b73: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a9b75: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a9b76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a9b78: jae 0x5a9b7c */ if (!fC) goto L_005a9b7c;
L_005a9b7a:; BB(0x005a9b7a);
    /* 005a9b7a: fst st(1) */ ST(1) = ST(0);
L_005a9b7c:; BB(0x005a9b7c);
    /* 005a9b7c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a9b7e: fstp dword ptr [0x9c0968] */ W_F32((u32)(0x9c0968u), ST(0)); FPOP();
    /* 005a9b84: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005a9b87: mov edx, dword ptr [0x92a270] */ r_edx = R32((u32)(0x92a270u));
    /* 005a9b8d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a9b8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a9b91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a9b92: movzx eax, word ptr [0x92a276] */ r_eax = (u32)R16((u32)(0x92a276u));
    /* 005a9b99: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005a9b9d: mov edx, dword ptr [0xa74818] */ r_edx = R32((u32)(0xa74818u));
    /* 005a9ba3: mov word ptr [esp + 0x14], cx */ W16((u32)(r_esp+0x14u), (u16)r_ecx);
    /* 005a9ba8: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 005a9bad: movzx eax, word ptr [0x92a278] */ r_eax = (u32)R16((u32)(0x92a278u));
    /* 005a9bb4: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 005a9bb9: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005a9bbf: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005a9bc5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005a9bc9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005a9bcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9bce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a9bd0: jae 0x5a9bd4 */ if (!fC) goto L_005a9bd4;
L_005a9bd2:; BB(0x005a9bd2);
    /* 005a9bd2: fst st(1) */ ST(1) = ST(0);
L_005a9bd4:; BB(0x005a9bd4);
    /* 005a9bd4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a9bd6: fstp dword ptr [0x9c0978] */ W_F32((u32)(0x9c0978u), ST(0)); FPOP();
    /* 005a9bdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9bde: push dword ptr [0x9c07cc] */ { u32 v = R32((u32)(0x9c07ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9be4: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9be7: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9bea: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9bec: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5a9bf1u); f_00608470();
    /* 005a9bf1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a9bf4: ret  */ FN_RET(0x005a9adc); r_esp += 4; return;
}

void f_005a9bf8(void) /* sub_5A9BF8 */
{
    FN_ENTER(0x005a9bf8);
    /* 005a9bf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9bf9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a9bfb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a9bff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9c02: je 0x5a9c25 */ if (fZ) goto L_005a9c25;
L_005a9c04:; BB(0x005a9c04);
    /* 005a9c04: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9c07: je 0x5a9c18 */ if (fZ) goto L_005a9c18;
L_005a9c09:; BB(0x005a9c09);
    /* 005a9c09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a9c0b: jne 0x5a9c21 */ if (!fZ) goto L_005a9c21;
L_005a9c0d:; BB(0x005a9c0d);
    /* 005a9c0d: add dword ptr [ebx + 0x4dc], 1 */ { u32 ad = (u32)(r_ebx+0x4dcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a9c14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a9c15: ret 4 */ FN_RET(0x005a9bf8); r_esp += 8; return;
L_005a9c18:; BB(0x005a9c18);
    /* 005a9c18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9c1c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a9c21u); f_0051f62c();
L_005a9c21:; BB(0x005a9c21);
    /* 005a9c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a9c22: ret 4 */ FN_RET(0x005a9bf8); r_esp += 8; return;
L_005a9c25:; BB(0x005a9c25);
    /* 005a9c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9c29: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a9c2eu); f_0051f664();
    /* 005a9c2e: mov dword ptr [ebx + 0x4dc], 0 */ W32((u32)(r_ebx+0x4dcu), 0x0u);
    /* 005a9c38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a9c39: ret 4 */ FN_RET(0x005a9bf8); r_esp += 8; return;
}

void f_005a9c3c(void) /* sub_5A9C3C */
{
    FN_ENTER(0x005a9c3c);
    /* 005a9c3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c3d: mov edi, ecx */ r_edi = r_ecx;
    /* 005a9c3f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9c41: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c46: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a9c4bu); f_007aaa30();
    /* 005a9c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a9c4d: je 0x5a9c56 */ if (fZ) goto L_005a9c56;
L_005a9c4f:; BB(0x005a9c4f);
    /* 005a9c4f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a9c51: call 0x5a8d20 */ r_esp -= 4; W32(r_esp, 0x5a9c56u); f_005a8d20();
L_005a9c56:; BB(0x005a9c56);
    /* 005a9c56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a9c57: ret  */ FN_RET(0x005a9c3c); r_esp += 4; return;
}

void f_005a9c58(void) /* sub_5A9C58 */
{
    FN_ENTER(0x005a9c58);
    /* 005a9c58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c59: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9c5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c5d: push 0x8d8c50 */ { u32 v = 0x8d8c50u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a9c68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a9c70: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9c73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a9c76: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005a9c79: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005a9c7c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005a9c7f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a9c82: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x5a9c87u); f_00521840();
    /* 005a9c87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9c8a: mov ebx, dword ptr [0xa74818] */ r_ebx = R32((u32)(0xa74818u));
    /* 005a9c90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9c92: mov edi, dword ptr [ecx + 0x4d8] */ r_edi = R32((u32)(r_ecx+0x4d8u));
    /* 005a9c98: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005a9c9e: push 0x9c07c0 */ { u32 v = 0x9c07c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ca3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a9ca5: mov edx, dword ptr [eax + edi*8 + 8] */ r_edx = R32((u32)(r_eax+r_edi*8+0x8u));
    /* 005a9ca9: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 005a9cac: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 005a9cb2: mov eax, dword ptr [esi + edi*8 + 0xc] */ r_eax = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 005a9cb6: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005a9cb9: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x5a9cbeu); f_0051ff3c();
    /* 005a9cbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9cc1: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005a9cc7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a9cca: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a9ccf: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005a9cd2: mov ebx, dword ptr [ecx + 0x4d8] */ r_ebx = R32((u32)(r_ecx+0x4d8u));
    /* 005a9cd8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9cda: je 0x5a9cea */ if (fZ) goto L_005a9cea;
L_005a9cdc:; BB(0x005a9cdc);
    /* 005a9cdc: mov eax, ecx */ r_eax = r_ecx;
    /* 005a9cde: mov dword ptr [eax + 0xd8], 0x9c0920 */ W32((u32)(r_eax+0xd8u), 0x9c0920u);
    /* 005a9ce8: jmp 0x5a9cf6 */ goto L_005a9cf6;
L_005a9cea:; BB(0x005a9cea);
    /* 005a9cea: mov eax, ecx */ r_eax = r_ecx;
    /* 005a9cec: mov dword ptr [eax + 0xd8], 0x9c0880 */ W32((u32)(r_eax+0xd8u), 0x9c0880u);
L_005a9cf6:; BB(0x005a9cf6);
    /* 005a9cf6: mov eax, dword ptr [0xa74818] */ r_eax = R32((u32)(0xa74818u));
    /* 005a9cfb: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a9d01: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005a9d07: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a9d09: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005a9d10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9d11: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5a9d16u); f_007aa4c8();
    /* 005a9d16: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9d19: push dword ptr [ecx + 0x4fc] */ { u32 v = R32((u32)(r_ecx+0x4fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9d1f: push dword ptr [ecx + 0x4f8] */ { u32 v = R32((u32)(r_ecx+0x4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9d25: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005a9d2c: push dword ptr [ecx + 0x4f4] */ { u32 v = R32((u32)(r_ecx+0x4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a9d32: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a9d39: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5a9d3eu); f_00520c70();
    /* 005a9d3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9d41: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x5a9d46u); f_00520350();
    /* 005a9d46: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9d49: mov esi, dword ptr [ebx + 0x4d8] */ r_esi = R32((u32)(r_ebx+0x4d8u));
    /* 005a9d4f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005a9d52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9d54: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a9d57: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a9d59: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a9d5b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a9d5d: lea ecx, [edx + 0x9c0c4c] */ r_ecx = (u32)(r_edx+0x9c0c4cu);
    /* 005a9d63: mov dword ptr [ebx + 0x358], ecx */ W32((u32)(r_ebx+0x358u), r_ecx);
    /* 005a9d69: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9d6b: je 0x5a9d78 */ if (fZ) goto L_005a9d78;
L_005a9d6d:; BB(0x005a9d6d);
    /* 005a9d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9d6f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9d71: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5a9d76u); f_00520390();
    /* 005a9d76: jmp 0x5a9d81 */ goto L_005a9d81;
L_005a9d78:; BB(0x005a9d78);
    /* 005a9d78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9d7a: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9d7c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5a9d81u); f_00520390();
L_005a9d81:; BB(0x005a9d81);
    /* 005a9d81: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9d83: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 005a9d8d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9d8f: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5a9d94u); f_00521820();
    /* 005a9d94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9d96: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9d98: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5a9d9du); f_005217fc();
    /* 005a9d9d: mov esi, ebx */ r_esi = r_ebx;
    /* 005a9d9f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005a9da2: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005a9da5: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005a9da8: mov edi, dword ptr [esi + 0x3dc] */ r_edi = R32((u32)(r_esi+0x3dcu));
    /* 005a9dae: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 005a9db4: mov dword ptr [esi + 0x3cc], 0 */ W32((u32)(r_esi+0x3ccu), 0x0u);
    /* 005a9dbe: mov dword ptr [esi + 0x3d4], edx */ W32((u32)(r_esi+0x3d4u), r_edx);
    /* 005a9dc4: mov dword ptr [esi + 0x3d8], ebx */ W32((u32)(r_esi+0x3d8u), r_ebx);
    /* 005a9dca: lea ecx, [esi + 0x3dc] */ r_ecx = (u32)(r_esi+0x3dcu);
    /* 005a9dd0: mov dword ptr [esi + 0x3c8], 1 */ W32((u32)(r_esi+0x3c8u), 0x1u);
    /* 005a9dda: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x5a9dddu); call_ind(t); }
    /* 005a9ddd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a9ddf:; BB(0x005a9ddf);
    /* 005a9ddf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9de2: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005a9de5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9de7: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 005a9dea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a9dec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a9dee: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a9df0: lea ecx, [edx + esi + 0x3f8] */ r_ecx = (u32)(r_edx+r_esi+0x3f8u);
    /* 005a9df7: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5a9dfcu); f_0057739c();
    /* 005a9dfc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a9dff: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9e02: jl 0x5a9ddf */ if ((fS!=fO)) goto L_005a9ddf;
L_005a9e04:; BB(0x005a9e04);
    /* 005a9e04: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9e07: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e0c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005a9e0f: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005a9e12: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 005a9e15: mov dword ptr [ebx + 0x468], eax */ W32((u32)(r_ebx+0x468u), r_eax);
    /* 005a9e1b: mov dword ptr [ebx + 0x46c], edx */ W32((u32)(r_ebx+0x46cu), r_edx);
    /* 005a9e21: mov dword ptr [ebx + 0x470], ecx */ W32((u32)(r_ebx+0x470u), r_ecx);
    /* 005a9e27: mov dword ptr [ebx + 0x474], eax */ W32((u32)(r_ebx+0x474u), r_eax);
    /* 005a9e2d: mov dword ptr [ebx + 0x478], edx */ W32((u32)(r_ebx+0x478u), r_edx);
    /* 005a9e33: mov dword ptr [ebx + 0x47c], ecx */ W32((u32)(r_ebx+0x47cu), r_ecx);
    /* 005a9e39: mov dword ptr [ebx + 0x480], eax */ W32((u32)(r_ebx+0x480u), r_eax);
    /* 005a9e3f: mov dword ptr [ebx + 0x484], edx */ W32((u32)(r_ebx+0x484u), r_edx);
    /* 005a9e45: mov dword ptr [ebx + 0x488], ecx */ W32((u32)(r_ebx+0x488u), r_ecx);
    /* 005a9e4b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005a9e4d: mov dword ptr [ebx + 0x48c], esi */ W32((u32)(r_ebx+0x48cu), r_esi);
    /* 005a9e53: mov dword ptr [ebx + 0x490], esi */ W32((u32)(r_ebx+0x490u), r_esi);
    /* 005a9e59: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 005a9e5c: mov dword ptr [ebx + 0x494], esi */ W32((u32)(r_ebx+0x494u), r_esi);
    /* 005a9e62: mov dword ptr [ebx + 0x498], esi */ W32((u32)(r_ebx+0x498u), r_esi);
    /* 005a9e68: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a9e6du); f_005caba4();
    /* 005a9e6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a9e6e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a9e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9e73: je 0x5aa06b */ if (fZ) goto L_005aa06b;
L_005a9e79:; BB(0x005a9e79);
    /* 005a9e79: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005a9e80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a9e87: mov eax, ebx */ r_eax = r_ebx;
    /* 005a9e89: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a9e8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e8e: push 0x9c07ec */ { u32 v = 0x9c07ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e95: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x5a9e9au); f_00521c5c();
    /* 005a9e9a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a9e9d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005a9ea4:; BB(0x005a9ea4);
    /* 005a9ea4: mov eax, ebx */ r_eax = r_ebx;
    /* 005a9ea6: mov dword ptr [eax + 0x49c], edx */ W32((u32)(r_eax+0x49cu), r_edx);
    /* 005a9eac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a9eb3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005a9eba: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ebf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a9ec4u); f_005caba4();
    /* 005a9ec4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a9ec5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a9ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9eca: je 0x5aa064 */ if (fZ) goto L_005aa064;
L_005a9ed0:; BB(0x005a9ed0);
    /* 005a9ed0: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005a9ed7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a9ede: mov eax, ebx */ r_eax = r_ebx;
    /* 005a9ee0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a9ee3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ee5: push 0x9c0818 */ { u32 v = 0x9c0818u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9eea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9eec: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x5a9ef1u); f_00521c5c();
    /* 005a9ef1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a9ef4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005a9efb:; BB(0x005a9efb);
    /* 005a9efb: mov eax, ebx */ r_eax = r_ebx;
    /* 005a9efd: mov dword ptr [eax + 0x4a0], edx */ W32((u32)(r_eax+0x4a0u), r_edx);
    /* 005a9f03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a9f0a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005a9f11: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f16: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a9f1bu); f_005caba4();
    /* 005a9f1b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a9f1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9f21: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005a9f24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9f26: je 0x5aa05a */ if (fZ) goto L_005aa05a;
L_005a9f2c:; BB(0x005a9f2c);
    /* 005a9f2c: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005a9f33: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a9f3a: mov ecx, eax */ r_ecx = r_eax;
    /* 005a9f3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f3e: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x5a9f43u); f_007b4b48();
    /* 005a9f43: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005a9f4a:; BB(0x005a9f4a);
    /* 005a9f4a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a9f4d: mov edx, ebx */ r_edx = r_ebx;
    /* 005a9f4f: mov dword ptr [edx + 0x4a4], eax */ W32((u32)(r_edx+0x4a4u), r_eax);
    /* 005a9f55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a9f5c: mov ecx, eax */ r_ecx = r_eax;
    /* 005a9f5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f60: push 0x9c0844 */ { u32 v = 0x9c0844u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f65: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5a9f6au); f_007b9a88();
    /* 005a9f6a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005a9f71: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f73: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a9f78u); f_008581c5();
    /* 005a9f78: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a9f7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9f7e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a9f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9f83: je 0x5aa050 */ if (fZ) goto L_005aa050;
L_005a9f89:; BB(0x005a9f89);
    /* 005a9f89: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005a9f90: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a9f97: mov ecx, eax */ r_ecx = r_eax;
    /* 005a9f99: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9f9b: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x5a9fa0u); f_00521a4c();
    /* 005a9fa0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005a9fa7:; BB(0x005a9fa7);
    /* 005a9fa7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a9faa: mov edx, ebx */ r_edx = r_ebx;
    /* 005a9fac: mov dword ptr [edx + 0x4a8], eax */ W32((u32)(r_edx+0x4a8u), r_eax);
    /* 005a9fb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a9fb9: push 0x80000080 */ { u32 v = 0x80000080u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fbe: push 0xff5050ff */ { u32 v = 0xff5050ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9fc3: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5a9fc8u); f_00578cc4();
    /* 005a9fc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9fcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a9fcd: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005a9fcf: mov dword ptr [ecx + 0x4ec], 0 */ W32((u32)(r_ecx+0x4ecu), 0x0u);
    /* 005a9fd9: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
    /* 005a9fdf: mov dword ptr [ecx + 0x4f0], 0 */ W32((u32)(r_ecx+0x4f0u), 0x0u);
    /* 005a9fe9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9feb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a9fed: mov dword ptr [ecx + 0x4dc], eax */ W32((u32)(r_ecx+0x4dcu), r_eax);
    /* 005a9ff3: mov dword ptr [ecx + 0x4e0], eax */ W32((u32)(r_ecx+0x4e0u), r_eax);
    /* 005a9ff9: mov dword ptr [ecx + 0x4e4], eax */ W32((u32)(r_ecx+0x4e4u), r_eax);
    /* 005a9fff: mov dword ptr [ecx + 0x4e8], eax */ W32((u32)(r_ecx+0x4e8u), r_eax);
    /* 005aa005: mov edx, 1 */ r_edx = 0x1u;
    /* 005aa00a: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 005aa011: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa012: call dword ptr [ebx + 0x164] */ { u32 t = R32((u32)(r_ebx+0x164u)); r_esp -= 4; W32(r_esp, 0x5aa018u); call_ind(t); }
    /* 005aa018: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa01b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aa01e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aa021: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aa024: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa026: mov dword ptr [edx + 0x4c8], eax */ W32((u32)(r_edx+0x4c8u), r_eax);
    /* 005aa02c: mov dword ptr [edx + 0x4d4], 0 */ W32((u32)(r_edx+0x4d4u), 0x0u);
    /* 005aa036: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 005aa03c: mov dword ptr [edx + 0x4d0], eax */ W32((u32)(r_edx+0x4d0u), r_eax);
    /* 005aa042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa04c: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa04e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa04f: ret  */ FN_RET(0x005a9c58); r_esp += 4; return;
L_005aa050:; BB(0x005aa050);
    /* 005aa050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa052: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005aa055: jmp 0x5a9fa7 */ goto L_005a9fa7;
L_005aa05a:; BB(0x005aa05a);
    /* 005aa05a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa05c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005aa05f: jmp 0x5a9f4a */ goto L_005a9f4a;
L_005aa064:; BB(0x005aa064);
    /* 005aa064: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa066: jmp 0x5a9efb */ goto L_005a9efb;
L_005aa06b:; BB(0x005aa06b);
    /* 005aa06b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa06d: jmp 0x5a9ea4 */ goto L_005a9ea4;
}

void f_005a9eff(void)
{
    FN_ENTER(0x005a9eff);
    /* 005a9eff: mov al, byte ptr [0xc7000004] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xc7000004u))) & 0xffu);
    /* 005a9f04: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a9f05: cld  */ rt_df = 0;
    UNSUP(0x005a9f06, "falls out of decoded code");
}

