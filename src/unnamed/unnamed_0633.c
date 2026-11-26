#include "protos.h"

void f_0063300c(void) /* sub_63300C */
{
    FN_ENTER(0x0063300c);
    /* 0063300c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063300d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063300f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00633011: call 0x633030 */ r_esp -= 4; W32(r_esp, 0x633016u); f_00633030();
    /* 00633016: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063301a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063301c: jne 0x633022 */ if (!fZ) goto L_00633022;
L_0063301e:; BB(0x0063301e);
    /* 0063301e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063301f: ret 4 */ FN_RET(0x0063300c); r_esp += 8; return;
L_00633022:; BB(0x00633022);
    /* 00633022: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633023: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x633028u); f_005c2f74();
    /* 00633028: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633029: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063302a: ret 4 */ FN_RET(0x0063300c); r_esp += 8; return;
}

void f_00633030(void) /* sub_633030 */
{
    FN_ENTER(0x00633030);
    /* 00633030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633031: mov ebp, esp */ r_ebp = r_esp;
    /* 00633033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633035: push 0x8e3c9c */ { u32 v = 0x8e3c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063303a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633048: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063304b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063304e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633057: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063305a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633061: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633064: mov dword ptr [eax], 0xb2bdd8 */ W32((u32)(r_eax), 0xb2bdd8u);
    /* 0063306a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063306b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x633070u); f_007b4e84();
    /* 00633070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633071: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633074: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x633079u); f_007b9c8c();
    /* 00633079: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00633080: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633083: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x633088u); f_00632b0c();
    /* 00633088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063308b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633092: mov esp, ebp */ r_esp = r_ebp;
    /* 00633094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633095: ret  */ FN_RET(0x00633030); r_esp += 4; return;
}

void f_00633098(void) /* sub_633098 */
{
    FN_ENTER(0x00633098);
    /* 00633098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633099: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063309b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063309d: call 0x6330bc */ r_esp -= 4; W32(r_esp, 0x6330a2u); f_006330bc();
    /* 006330a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006330a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006330a8: jne 0x6330ae */ if (!fZ) goto L_006330ae;
L_006330aa:; BB(0x006330aa);
    /* 006330aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006330ab: ret 4 */ FN_RET(0x00633098); r_esp += 8; return;
L_006330ae:; BB(0x006330ae);
    /* 006330ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006330af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6330b4u); f_005c2f74();
    /* 006330b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006330b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006330b6: ret 4 */ FN_RET(0x00633098); r_esp += 8; return;
}

void f_006330bc(void) /* sub_6330BC */
{
    FN_ENTER(0x006330bc);
    /* 006330bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006330bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006330bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006330c1: push 0x8e3cb8 */ { u32 v = 0x8e3cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 006330c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006330cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006330cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006330d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006330d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006330da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006330dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006330e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006330e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006330e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006330ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006330f0: mov dword ptr [eax], 0xb2be80 */ W32((u32)(r_eax), 0xb2be80u);
    /* 006330f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006330f7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6330fcu); f_007b4e84();
    /* 006330fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006330fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633100: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x633105u); f_007b9c8c();
    /* 00633105: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063310c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063310f: call 0x632c74 */ r_esp -= 4; W32(r_esp, 0x633114u); f_00632c74();
    /* 00633114: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633117: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063311e: mov esp, ebp */ r_esp = r_ebp;
    /* 00633120: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633121: ret  */ FN_RET(0x006330bc); r_esp += 4; return;
}

void f_00633124(void) /* sub_633124 */
{
    FN_ENTER(0x00633124);
    /* 00633124: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633125: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00633127: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00633129: call 0x633148 */ r_esp -= 4; W32(r_esp, 0x63312eu); f_00633148();
    /* 0063312e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00633132: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633134: jne 0x63313a */ if (!fZ) goto L_0063313a;
L_00633136:; BB(0x00633136);
    /* 00633136: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00633137: ret 4 */ FN_RET(0x00633124); r_esp += 8; return;
L_0063313a:; BB(0x0063313a);
    /* 0063313a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063313b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x633140u); f_005c2f74();
    /* 00633140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00633142: ret 4 */ FN_RET(0x00633124); r_esp += 8; return;
}

void f_00633148(void) /* sub_633148 */
{
    FN_ENTER(0x00633148);
    /* 00633148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633149: mov ebp, esp */ r_ebp = r_esp;
    /* 0063314b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063314d: push 0x8e3cd4 */ { u32 v = 0x8e3cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633160: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063316c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063316f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00633172: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633179: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063317c: mov dword ptr [eax], 0xb2bf28 */ W32((u32)(r_eax), 0xb2bf28u);
    /* 00633182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633183: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x633188u); f_007b4e84();
    /* 00633188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633189: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063318c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x633191u); f_007b9c8c();
    /* 00633191: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00633198: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063319b: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x6331a0u); f_00632b0c();
    /* 006331a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006331a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006331aa: mov esp, ebp */ r_esp = r_ebp;
    /* 006331ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006331ad: ret  */ FN_RET(0x00633148); r_esp += 4; return;
}

void f_006331b0(void) /* sub_6331B0 */
{
    FN_ENTER(0x006331b0);
    /* 006331b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006331b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006331b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006331b5: call 0x6331d4 */ r_esp -= 4; W32(r_esp, 0x6331bau); f_006331d4();
    /* 006331ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006331be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006331c0: jne 0x6331c6 */ if (!fZ) goto L_006331c6;
L_006331c2:; BB(0x006331c2);
    /* 006331c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006331c3: ret 4 */ FN_RET(0x006331b0); r_esp += 8; return;
L_006331c6:; BB(0x006331c6);
    /* 006331c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006331c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6331ccu); f_005c2f74();
    /* 006331cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006331cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006331ce: ret 4 */ FN_RET(0x006331b0); r_esp += 8; return;
}

void f_006331d4(void) /* sub_6331D4 */
{
    FN_ENTER(0x006331d4);
    /* 006331d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006331d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006331d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006331d9: push 0x8e3cf0 */ { u32 v = 0x8e3cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006331de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006331e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006331e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006331ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006331ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006331f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006331f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006331f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006331fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006331fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633205: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633208: mov dword ptr [eax], 0xb2bf60 */ W32((u32)(r_eax), 0xb2bf60u);
    /* 0063320e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063320f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x633214u); f_007b4e84();
    /* 00633214: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633215: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633218: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63321du); f_007b9c8c();
    /* 0063321d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00633224: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633227: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x63322cu); f_0063323c();
    /* 0063322c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063322f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633236: mov esp, ebp */ r_esp = r_ebp;
    /* 00633238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633239: ret  */ FN_RET(0x006331d4); r_esp += 4; return;
}

void f_0063323c(void) /* sub_63323C */
{
    FN_ENTER(0x0063323c);
    /* 0063323c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063323d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063323f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633241: push 0x8e3d0c */ { u32 v = 0x8e3d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633246: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063324c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063324d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633254: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633257: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063325a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063325d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633260: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633263: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00633266: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633269: mov dword ptr [ecx], 0xb2bc60 */ W32((u32)(r_ecx), 0xb2bc60u);
    /* 0063326f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00633276: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x63327bu); f_00632b0c();
    /* 0063327b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063327e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633285: mov esp, ebp */ r_esp = r_ebp;
    /* 00633287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633288: ret  */ FN_RET(0x0063323c); r_esp += 4; return;
}

void f_0063328c(void) /* sub_63328C */
{
    FN_ENTER(0x0063328c);
    /* 0063328c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063328d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063328f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00633291: call 0x6332b0 */ r_esp -= 4; W32(r_esp, 0x633296u); f_006332b0();
    /* 00633296: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063329a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063329c: jne 0x6332a2 */ if (!fZ) goto L_006332a2;
L_0063329e:; BB(0x0063329e);
    /* 0063329e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063329f: ret 4 */ FN_RET(0x0063328c); r_esp += 8; return;
L_006332a2:; BB(0x006332a2);
    /* 006332a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006332a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6332a8u); f_005c2f74();
    /* 006332a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006332a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006332aa: ret 4 */ FN_RET(0x0063328c); r_esp += 8; return;
}

void f_006332b0(void) /* sub_6332B0 */
{
    FN_ENTER(0x006332b0);
    /* 006332b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006332b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006332b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006332b5: push 0x8e3d28 */ { u32 v = 0x8e3d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006332ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006332c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006332c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006332c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006332cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006332ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006332d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006332d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006332d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006332da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006332e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006332e4: mov dword ptr [eax], 0xb2bfc0 */ W32((u32)(r_eax), 0xb2bfc0u);
    /* 006332ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006332eb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6332f0u); f_007b4e84();
    /* 006332f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006332f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006332f4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6332f9u); f_007b9c8c();
    /* 006332f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00633300: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633303: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x633308u); f_0063323c();
    /* 00633308: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063330b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633312: mov esp, ebp */ r_esp = r_ebp;
    /* 00633314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633315: ret  */ FN_RET(0x006332b0); r_esp += 4; return;
}

void f_00633318(void) /* sub_633318 */
{
    FN_ENTER(0x00633318);
    /* 00633318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633319: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063331b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063331d: call 0x63333c */ r_esp -= 4; W32(r_esp, 0x633322u); f_0063333c();
    /* 00633322: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00633326: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633328: jne 0x63332e */ if (!fZ) goto L_0063332e;
L_0063332a:; BB(0x0063332a);
    /* 0063332a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063332b: ret 4 */ FN_RET(0x00633318); r_esp += 8; return;
L_0063332e:; BB(0x0063332e);
    /* 0063332e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063332f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x633334u); f_005c2f74();
    /* 00633334: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633335: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00633336: ret 4 */ FN_RET(0x00633318); r_esp += 8; return;
}

void f_0063333c(void) /* sub_63333C */
{
    FN_ENTER(0x0063333c);
    /* 0063333c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063333d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063333f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633341: push 0x8e3d44 */ { u32 v = 0x8e3d44u; r_esp -= 4; W32(r_esp, v); }
    /* 00633346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063334c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063334d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633354: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063335a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063335d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633363: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00633366: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063336d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633370: mov dword ptr [eax], 0xb2c020 */ W32((u32)(r_eax), 0xb2c020u);
    /* 00633376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633377: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63337cu); f_007b4e84();
    /* 0063337c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063337d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633380: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x633385u); f_007b9c8c();
    /* 00633385: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063338c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063338f: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x633394u); f_0063323c();
    /* 00633394: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633397: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063339e: mov esp, ebp */ r_esp = r_ebp;
    /* 006333a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006333a1: ret  */ FN_RET(0x0063333c); r_esp += 4; return;
}

void f_006333a4(void) /* sub_6333A4 */
{
    FN_ENTER(0x006333a4);
    /* 006333a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006333a5: mov esi, ecx */ r_esi = r_ecx;
    /* 006333a7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006333a9: mov ecx, esi */ r_ecx = r_esi;
    /* 006333ab: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006333b1: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006333b7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6333bau); call_ind(t); }
    /* 006333ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006333bc: je 0x6333f8 */ if (fZ) goto L_006333f8;
L_006333be:; BB(0x006333be);
    /* 006333be: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006333c0: mov ecx, esi */ r_ecx = r_esi;
    /* 006333c2: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6333c5u); call_ind(t); }
    /* 006333c5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6333cau); f_0082d7b0();
    /* 006333ca: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006333cd: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6333d2u); f_0082d838();
    /* 006333d2: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006333d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006333d7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6333dcu); f_0082d8bc();
    /* 006333dc: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006333df: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6333e4u); f_00829cc8();
    /* 006333e4: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006333e7: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6333ecu); f_00831758();
    /* 006333ec: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6333f1u); f_0082da80();
    /* 006333f1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006333f3: mov ecx, esi */ r_ecx = r_esi;
    /* 006333f5: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x6333f8u); call_ind(t); }
L_006333f8:; BB(0x006333f8);
    /* 006333f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006333f9: ret  */ FN_RET(0x006333a4); r_esp += 4; return;
}

void f_006333fc(void) /* sub_6333FC */
{
    FN_ENTER(0x006333fc);
    /* 006333fc: mov ecx, dword ptr [0xa8f044] */ r_ecx = R32((u32)(0xa8f044u));
    /* 00633402: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633404: je 0x633419 */ if (fZ) goto L_00633419;
L_00633406:; BB(0x00633406);
    /* 00633406: je 0x63340f */ if (fZ) goto L_0063340f;
L_00633408:; BB(0x00633408);
    /* 00633408: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063340a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63340fu); f_004066a8();
L_0063340f:; BB(0x0063340f);
    /* 0063340f: mov dword ptr [0xa8f044], 0 */ W32((u32)(0xa8f044u), 0x0u);
L_00633419:; BB(0x00633419);
    /* 00633419: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 0063341f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633421: je 0x633436 */ if (fZ) goto L_00633436;
L_00633423:; BB(0x00633423);
    /* 00633423: je 0x63342c */ if (fZ) goto L_0063342c;
L_00633425:; BB(0x00633425);
    /* 00633425: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633427: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63342cu); f_004066a8();
L_0063342c:; BB(0x0063342c);
    /* 0063342c: mov dword ptr [0xa8f048], 0 */ W32((u32)(0xa8f048u), 0x0u);
L_00633436:; BB(0x00633436);
    /* 00633436: ret  */ FN_RET(0x006333fc); r_esp += 4; return;
}

void f_00633438(void) /* sub_633438 */
{
    FN_ENTER(0x00633438);
    /* 00633438: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00633439: mov esi, ecx */ r_esi = r_ecx;
    /* 0063343b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063343d: mov ecx, esi */ r_ecx = r_esi;
    /* 0063343f: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633445: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063344b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63344eu); call_ind(t); }
    /* 0063344e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633450: je 0x63347e */ if (fZ) goto L_0063347e;
L_00633452:; BB(0x00633452);
    /* 00633452: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x633457u); f_0082d7b0();
    /* 00633457: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0063345a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63345fu); f_0082d838();
    /* 0063345f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00633462: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00633464: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x633469u); f_0082d8bc();
    /* 00633469: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0063346c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x633471u); f_00829cc8();
    /* 00633471: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00633474: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x633479u); f_00831758();
    /* 00633479: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63347eu); f_0082da80();
L_0063347e:; BB(0x0063347e);
    /* 0063347e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063347f: ret  */ FN_RET(0x00633438); r_esp += 4; return;
}

void f_00633480(void) /* sub_633480 */
{
    FN_ENTER(0x00633480);
    /* 00633480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633481: mov ebp, esp */ r_ebp = r_esp;
    /* 00633483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633485: push 0x8e3d6c */ { u32 v = 0x8e3d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063348a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633491: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633498: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063349e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006334a1: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006334a4: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006334a7: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006334aa: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006334ad: mov eax, 0x9330e0 */ r_eax = 0x9330e0u;
    /* 006334b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006334b4: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 006334ba: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006334bd: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 006334c3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006334c6: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 006334cc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006334cf: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 006334d5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006334d8: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 006334de: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006334e1: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 006334e7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006334ea: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 006334f0: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006334f3: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 006334f9: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006334fc: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00633502: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00633505: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0063350b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0063350e: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00633514: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00633517: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0063351d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00633520: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00633526: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00633529: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0063352f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00633532: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00633538: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0063353b: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00633541: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00633544: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 00633547: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0063354d: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00633553: mov eax, 0x933080 */ r_eax = 0x933080u;
    /* 00633558: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063355a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0063355d: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00633560: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00633563: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00633566: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0063356c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0063356f: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00633572: mov dword ptr [ebp - 0x7c], ebx */ W32((u32)(r_ebp+0xffffff84u), r_ebx);
    /* 00633575: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 00633578: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 0063357b: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0063357e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00633581: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00633584: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00633587: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0063358a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0063358d: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00633590: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00633593: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00633596: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00633599: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0063359c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0063359f: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006335a2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006335a5: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006335a8: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006335ab: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006335ae: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006335b1: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006335b4: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006335b7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006335ba: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006335bd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006335c0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006335c3: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 006335c6: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006335c9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006335cc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006335cf: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006335d2: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 006335d5: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 006335d8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006335da: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006335dd: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 006335e0: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 006335e3: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 006335e6: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
L_006335e9:; BB(0x006335e9);
    /* 006335e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006335ec: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006335ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006335f1: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006335f4: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006335f6: mov ebx, dword ptr [ebp + edi - 0xcc] */ r_ebx = R32((u32)(r_ebp+r_edi+0xffffff34u));
    /* 006335fd: mov esi, dword ptr [ebp + edi - 0xc8] */ r_esi = R32((u32)(r_ebp+r_edi+0xffffff38u));
    /* 00633604: mov ecx, dword ptr [ebp + edi - 0xc4] */ r_ecx = R32((u32)(r_ebp+r_edi+0xffffff3cu));
    /* 0063360b: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 0063360e: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00633611: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00633614: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00633619: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x63361eu); f_0082d990();
    /* 0063361e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00633621: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00633624: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00633626: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63362bu); f_0082d8bc();
    /* 0063362b: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0063362e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063362f: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00633632: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00633634: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x633639u); f_0082eab8();
    /* 00633639: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63363eu); f_0082da80();
    /* 0063363e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00633641: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00633644: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00633647: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0063364a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0063364d: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00633650: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 00633653: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00633656: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 00633659: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x63365eu); f_0082ebac();
    /* 0063365e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00633661: mov ecx, dword ptr [0xa8f044] */ r_ecx = R32((u32)(0xa8f044u));
    /* 00633667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633668: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63366du); f_005b8610();
    /* 0063366d: mov ecx, dword ptr [0xa8f044] */ r_ecx = R32((u32)(0xa8f044u));
    /* 00633673: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00633676: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00633679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063367a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63367fu); f_005b8624();
    /* 0063367f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00633686: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00633689: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0063368e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633693u); f_005caba4();
    /* 00633693: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633694: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00633697: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633699: je 0x6336c5 */ if (fZ) goto L_006336c5;
L_0063369b:; BB(0x0063369b);
    /* 0063369b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006336a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006336a9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006336ac: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 006336b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006336b3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006336b9: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6336beu); f_006441f4();
    /* 006336be: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006336c5:; BB(0x006336c5);
    /* 006336c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006336cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006336cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006336d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006336d5: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006336d8: jl 0x6335e9 */ if ((fS!=fO)) goto L_006335e9;
L_006336de:; BB(0x006336de);
    /* 006336de: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006336e1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006336e4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006336e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006336ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006336f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006336f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006336f4: ret  */ FN_RET(0x00633480); r_esp += 4; return;
}

void f_006336f8(void) /* sub_6336F8 */
{
    FN_ENTER(0x006336f8);
    /* 006336f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006336f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006336fb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006336fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006336ff: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x633702u); call_ind(t); }
    /* 00633702: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00633704: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00633707: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633708: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63370du); f_0050b510();
    /* 0063370d: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0063370f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633710: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x633715u); f_0050b510();
    /* 00633715: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00633718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00633719: ret  */ FN_RET(0x006336f8); r_esp += 4; return;
}

void f_0063371c(void) /* sub_63371C */
{
    FN_ENTER(0x0063371c);
    /* 0063371c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063371f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00633721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633724: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633729: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63372eu); f_00814298();
    /* 0063372e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00633731: ret  */ FN_RET(0x0063371c); r_esp += 4; return;
}

void f_00633734(void) /* sub_633734 */
{
    FN_ENTER(0x00633734);
    /* 00633734: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00633735: mov edi, ecx */ r_edi = r_ecx;
    /* 00633737: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x63373cu); f_004f7c84();
    /* 0063373c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063373f: je 0x6337af */ if (fZ) goto L_006337af;
L_00633741:; BB(0x00633741);
    /* 00633741: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00633747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633749: je 0x633770 */ if (fZ) goto L_00633770;
L_0063374b:; BB(0x0063374b);
    /* 0063374b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063374e: jne 0x633766 */ if (!fZ) goto L_00633766;
L_00633750:; BB(0x00633750);
    /* 00633750: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00633751: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x633756u); f_008113bc();
    /* 00633756: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633757: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0063375b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633760: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00633764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00633765: ret  */ FN_RET(0x00633734); r_esp += 4; return;
L_00633766:; BB(0x00633766);
    /* 00633766: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
L_00633770:; BB(0x00633770);
    /* 00633770: mov eax, dword ptr [edi + 0xb8] */ r_eax = R32((u32)(r_edi+0xb8u));
    /* 00633776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633778: jl 0x633793 */ if ((fS!=fO)) goto L_00633793;
L_0063377a:; BB(0x0063377a);
    /* 0063377a: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063377f: jge 0x633793 */ if ((fS==fO)) goto L_00633793;
L_00633781:; BB(0x00633781);
    /* 00633781: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00633784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633785: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x63378au); f_00816eec();
    /* 0063378a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063378b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063378e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00633791: je 0x633795 */ if (fZ) goto L_00633795;
L_00633793:; BB(0x00633793);
    /* 00633793: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00633794: ret  */ FN_RET(0x00633734); r_esp += 4; return;
L_00633795:; BB(0x00633795);
    /* 00633795: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00633797: mov dword ptr [edi + 0xb4], 1 */ W32((u32)(r_edi+0xb4u), 0x1u);
    /* 006337a1: mov ecx, edi */ r_ecx = r_edi;
    /* 006337a3: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6337a6u); call_ind(t); }
    /* 006337a6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006337a8: mov ecx, edi */ r_ecx = r_edi;
    /* 006337aa: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6337adu); call_ind(t); }
    /* 006337ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006337ae: ret  */ FN_RET(0x00633734); r_esp += 4; return;
L_006337af:; BB(0x006337af);
    /* 006337af: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006337b1: mov ecx, edi */ r_ecx = r_edi;
    /* 006337b3: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6337b6u); call_ind(t); }
    /* 006337b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006337b7: ret  */ FN_RET(0x00633734); r_esp += 4; return;
}

void f_006337b8(void)
{
    FN_ENTER(0x006337b8);
    /* 006337b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006337b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006337bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006337bd: push 0x8e3d94 */ { u32 v = 0x8e3d94u; r_esp -= 4; W32(r_esp, v); }
    /* 006337c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006337c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006337c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006337d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006337d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006337d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006337d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006337dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006337df: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006337e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006337eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6337f0u); f_005caba4();
    /* 006337f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006337f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006337f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006337f6: je 0x633829 */ if (fZ) goto L_00633829;
L_006337f8:; BB(0x006337f8);
    /* 006337f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006337ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633806: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633809: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063380c: call 0x633830 */ r_esp -= 4; W32(r_esp, 0x633811u); f_00633830();
    /* 00633811: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633814: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063381b:; BB(0x0063381b);
    /* 0063381b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063381e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633825: mov esp, ebp */ r_esp = r_ebp;
    /* 00633827: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633828: ret  */ FN_RET(0x006337b8); r_esp += 4; return;
L_00633829:; BB(0x00633829);
    /* 00633829: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063382b: jmp 0x63381b */ goto L_0063381b;
}

void f_00633830(void) /* sub_633830 */
{
    FN_ENTER(0x00633830);
    /* 00633830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633831: mov ebp, esp */ r_ebp = r_esp;
    /* 00633833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633835: push 0x8e3db0 */ { u32 v = 0x8e3db0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063383a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633848: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063384b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063384e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00633851: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00633854: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00633857: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063385a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063385d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00633860: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x633865u); f_006338e8();
    /* 00633865: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063386c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063386f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00633872: mov dword ptr [ecx], 0xb2bcc0 */ W32((u32)(r_ecx), 0xb2bcc0u);
    /* 00633878: mov eax, dword ptr [0x9c6360] */ r_eax = R32((u32)(0x9c6360u));
    /* 0063387d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063387e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00633881: call dword ptr [0xb2bcd4] */ { u32 t = R32((u32)(0xb2bcd4u)); r_esp -= 4; W32(r_esp, 0x633887u); call_ind(t); }
    /* 00633887: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 0063388d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063388f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x633894u); f_005b8610();
    /* 00633894: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633897: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 0063389d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063389f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006338a2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6338a7u); f_005b8624();
    /* 006338a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006338aa: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 006338b4: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006338b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006338b9: push 0x9c61e0 */ { u32 v = 0x9c61e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006338be: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6338c3u); f_007b9a88();
    /* 006338c3: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006338c6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6338cbu); f_007b999c();
    /* 006338cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006338cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006338cf: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6338d4u); f_007b4f54();
    /* 006338d4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006338d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006338da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006338e1: mov esp, ebp */ r_esp = r_ebp;
    /* 006338e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006338e4: ret 4 */ FN_RET(0x00633830); r_esp += 8; return;
}

void f_006338e8(void) /* sub_6338E8 */
{
    FN_ENTER(0x006338e8);
    /* 006338e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006338e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006338eb: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006338f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006338f3: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6338f8u); f_007b4b48();
    /* 006338f8: mov dword ptr [ebx], 0xb2bbe0 */ W32((u32)(r_ebx), 0xb2bbe0u);
    /* 006338fe: mov edx, dword ptr [0x9c6354] */ r_edx = R32((u32)(0x9c6354u));
    /* 00633904: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00633907: mov eax, ebx */ r_eax = r_ebx;
    /* 00633909: mov dword ptr [ebx + 0xac], 0x43fa0000 */ W32((u32)(r_ebx+0xacu), 0x43fa0000u);
    /* 00633913: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 0063391d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063391e: ret  */ FN_RET(0x006338e8); r_esp += 4; return;
}

void f_00633920(void)
{
    FN_ENTER(0x00633920);
    /* 00633920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633921: mov ebp, esp */ r_ebp = r_esp;
    /* 00633923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633925: push 0x8e3dd8 */ { u32 v = 0x8e3dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063392a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633931: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633938: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063393b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063393e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633941: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633944: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633947: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063394c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00633953: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633958u); f_005caba4();
    /* 00633958: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633959: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063395c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063395e: je 0x633991 */ if (fZ) goto L_00633991;
L_00633960:; BB(0x00633960);
    /* 00633960: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00633967: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063396e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633971: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633974: call 0x633998 */ r_esp -= 4; W32(r_esp, 0x633979u); f_00633998();
    /* 00633979: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063397c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00633983:; BB(0x00633983);
    /* 00633983: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633986: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063398d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063398f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633990: ret  */ FN_RET(0x00633920); r_esp += 4; return;
L_00633991:; BB(0x00633991);
    /* 00633991: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633993: jmp 0x633983 */ goto L_00633983;
}

void f_00633998(void) /* sub_633998 */
{
    FN_ENTER(0x00633998);
    /* 00633998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633999: mov ebp, esp */ r_ebp = r_esp;
    /* 0063399b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063399d: push 0x8e3df4 */ { u32 v = 0x8e3df4u; r_esp -= 4; W32(r_esp, v); }
    /* 006339a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006339a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006339a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006339b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006339b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006339b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006339b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006339bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006339bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006339c2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006339c5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006339c8: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x6339cdu); f_006338e8();
    /* 006339cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006339d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006339d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006339da: mov dword ptr [ecx], 0xb2bd68 */ W32((u32)(r_ecx), 0xb2bd68u);
    /* 006339e0: mov eax, dword ptr [0x9c6364] */ r_eax = R32((u32)(0x9c6364u));
    /* 006339e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006339e6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006339e9: call dword ptr [0xb2bd7c] */ { u32 t = R32((u32)(0xb2bd7cu)); r_esp -= 4; W32(r_esp, 0x6339efu); call_ind(t); }
    /* 006339ef: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006339f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006339f7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6339fcu); f_005b8610();
    /* 006339fc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006339ff: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633a05: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00633a07: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00633a0a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x633a0fu); f_005b8624();
    /* 00633a0f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633a12: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 00633a1c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00633a1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633a21: push 0x9c61e0 */ { u32 v = 0x9c61e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633a26: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x633a2bu); f_007b9a88();
    /* 00633a2b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00633a2e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x633a33u); f_007b999c();
    /* 00633a33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633a34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633a37: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x633a3cu); f_007b4f54();
    /* 00633a3c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633a3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633a42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633a49: mov esp, ebp */ r_esp = r_ebp;
    /* 00633a4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633a4c: ret 4 */ FN_RET(0x00633998); r_esp += 8; return;
}

void f_00633a50(void)
{
    FN_ENTER(0x00633a50);
    /* 00633a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00633a53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633a55: push 0x8e3e1c */ { u32 v = 0x8e3e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633a5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633a61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633a68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633a6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633a6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633a71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633a74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633a77: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633a7c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00633a83: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633a88u); f_005caba4();
    /* 00633a88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633a89: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00633a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633a8e: je 0x633ac1 */ if (fZ) goto L_00633ac1;
L_00633a90:; BB(0x00633a90);
    /* 00633a90: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00633a97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633a9e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633aa1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633aa4: call 0x633ac8 */ r_esp -= 4; W32(r_esp, 0x633aa9u); f_00633ac8();
    /* 00633aa9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633aac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00633ab3:; BB(0x00633ab3);
    /* 00633ab3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633ab6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633abd: mov esp, ebp */ r_esp = r_ebp;
    /* 00633abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633ac0: ret  */ FN_RET(0x00633a50); r_esp += 4; return;
L_00633ac1:; BB(0x00633ac1);
    /* 00633ac1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633ac3: jmp 0x633ab3 */ goto L_00633ab3;
}

void f_00633ac8(void) /* sub_633AC8 */
{
    FN_ENTER(0x00633ac8);
    /* 00633ac8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633ac9: mov ebp, esp */ r_ebp = r_esp;
    /* 00633acb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633acd: push 0x8e3e38 */ { u32 v = 0x8e3e38u; r_esp -= 4; W32(r_esp, v); }
    /* 00633ad2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633ad9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633ae0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633ae3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633ae6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00633ae9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00633aec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00633aef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00633af2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00633af5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00633af8: call 0x633b80 */ r_esp -= 4; W32(r_esp, 0x633afdu); f_00633b80();
    /* 00633afd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633b04: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633b07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00633b0a: mov dword ptr [ecx], 0xb2be10 */ W32((u32)(r_ecx), 0xb2be10u);
    /* 00633b10: mov eax, dword ptr [0x9c6368] */ r_eax = R32((u32)(0x9c6368u));
    /* 00633b15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633b16: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00633b19: call dword ptr [0xb2be24] */ { u32 t = R32((u32)(0xb2be24u)); r_esp -= 4; W32(r_esp, 0x633b1fu); call_ind(t); }
    /* 00633b1f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633b25: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00633b27: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x633b2cu); f_005b8610();
    /* 00633b2c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633b2f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633b35: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00633b37: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00633b3a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x633b3fu); f_005b8624();
    /* 00633b3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633b42: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 00633b4c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00633b4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633b51: push 0x9c61e0 */ { u32 v = 0x9c61e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633b56: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x633b5bu); f_007b9a88();
    /* 00633b5b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00633b5e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x633b63u); f_007b999c();
    /* 00633b63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633b64: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633b67: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x633b6cu); f_007b4f54();
    /* 00633b6c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633b6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633b72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633b79: mov esp, ebp */ r_esp = r_ebp;
    /* 00633b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633b7c: ret 4 */ FN_RET(0x00633ac8); r_esp += 8; return;
}

void f_00633b80(void) /* sub_633B80 */
{
    FN_ENTER(0x00633b80);
    /* 00633b80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00633b81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00633b83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00633b85: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x633b8au); f_006338e8();
    /* 00633b8a: mov dword ptr [ebx], 0xb2bc18 */ W32((u32)(r_ebx), 0xb2bc18u);
    /* 00633b90: mov edx, dword ptr [0x9c6358] */ r_edx = R32((u32)(0x9c6358u));
    /* 00633b96: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00633b99: mov eax, ebx */ r_eax = r_ebx;
    /* 00633b9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00633b9c: ret  */ FN_RET(0x00633b80); r_esp += 4; return;
}

void f_00633ba0(void)
{
    FN_ENTER(0x00633ba0);
    /* 00633ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00633ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633ba5: push 0x8e3e60 */ { u32 v = 0x8e3e60u; r_esp -= 4; W32(r_esp, v); }
    /* 00633baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633bb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633bb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633bbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633bbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633bc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633bc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633bc7: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633bcc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00633bd3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633bd8u); f_005caba4();
    /* 00633bd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633bd9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00633bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633bde: je 0x633c11 */ if (fZ) goto L_00633c11;
L_00633be0:; BB(0x00633be0);
    /* 00633be0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00633be7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633bee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633bf1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633bf4: call 0x633c18 */ r_esp -= 4; W32(r_esp, 0x633bf9u); f_00633c18();
    /* 00633bf9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633bfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00633c03:; BB(0x00633c03);
    /* 00633c03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633c06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633c0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00633c0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633c10: ret  */ FN_RET(0x00633ba0); r_esp += 4; return;
L_00633c11:; BB(0x00633c11);
    /* 00633c11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633c13: jmp 0x633c03 */ goto L_00633c03;
}

void f_00633c18(void) /* sub_633C18 */
{
    FN_ENTER(0x00633c18);
    /* 00633c18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633c19: mov ebp, esp */ r_ebp = r_esp;
    /* 00633c1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633c1d: push 0x8e3e7c */ { u32 v = 0x8e3e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633c22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633c29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633c30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633c33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633c36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00633c39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00633c3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00633c3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00633c42: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00633c45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00633c48: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x633c4du); f_006338e8();
    /* 00633c4d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633c54: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633c57: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00633c5a: mov dword ptr [ecx], 0xb2beb8 */ W32((u32)(r_ecx), 0xb2beb8u);
    /* 00633c60: mov eax, dword ptr [0x9c636c] */ r_eax = R32((u32)(0x9c636cu));
    /* 00633c65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633c66: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00633c69: call dword ptr [0xb2becc] */ { u32 t = R32((u32)(0xb2beccu)); r_esp -= 4; W32(r_esp, 0x633c6fu); call_ind(t); }
    /* 00633c6f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633c75: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00633c77: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x633c7cu); f_005b8610();
    /* 00633c7c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633c7f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633c85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00633c87: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00633c8a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x633c8fu); f_005b8624();
    /* 00633c8f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633c92: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 00633c9c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00633c9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633ca1: push 0x9c61e0 */ { u32 v = 0x9c61e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633ca6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x633cabu); f_007b9a88();
    /* 00633cab: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00633cae: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x633cb3u); f_007b999c();
    /* 00633cb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633cb4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633cb7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x633cbcu); f_007b4f54();
    /* 00633cbc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633cbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633cc2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633cc9: mov esp, ebp */ r_esp = r_ebp;
    /* 00633ccb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633ccc: ret 4 */ FN_RET(0x00633c18); r_esp += 8; return;
}

void f_00633cd0(void)
{
    FN_ENTER(0x00633cd0);
    /* 00633cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00633cd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633cd5: push 0x8e3ea4 */ { u32 v = 0x8e3ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633cda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633ce1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633ce8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633ceb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633cee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633cf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633cf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633cf7: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633cfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00633d03: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633d08u); f_005caba4();
    /* 00633d08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633d09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00633d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633d0e: je 0x633d41 */ if (fZ) goto L_00633d41;
L_00633d10:; BB(0x00633d10);
    /* 00633d10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00633d17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633d1e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633d21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633d24: call 0x633d48 */ r_esp -= 4; W32(r_esp, 0x633d29u); f_00633d48();
    /* 00633d29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633d2c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00633d33:; BB(0x00633d33);
    /* 00633d33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633d36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633d3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00633d3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633d40: ret  */ FN_RET(0x00633cd0); r_esp += 4; return;
L_00633d41:; BB(0x00633d41);
    /* 00633d41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633d43: jmp 0x633d33 */ goto L_00633d33;
}

void f_00633d48(void) /* sub_633D48 */
{
    FN_ENTER(0x00633d48);
    /* 00633d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633d49: mov ebp, esp */ r_ebp = r_esp;
    /* 00633d4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633d4d: push 0x8e3ec0 */ { u32 v = 0x8e3ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633d52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633d59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633d60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633d63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633d66: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00633d69: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00633d6c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00633d6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00633d72: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00633d75: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00633d78: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x633d7du); f_006338e8();
    /* 00633d7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633d84: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633d87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00633d8a: mov dword ptr [ecx], 0xb2bcf8 */ W32((u32)(r_ecx), 0xb2bcf8u);
    /* 00633d90: mov eax, dword ptr [0x9c6370] */ r_eax = R32((u32)(0x9c6370u));
    /* 00633d95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633d96: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00633d99: call dword ptr [0xb2bd0c] */ { u32 t = R32((u32)(0xb2bd0cu)); r_esp -= 4; W32(r_esp, 0x633d9fu); call_ind(t); }
    /* 00633d9f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633da5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633da7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x633dacu); f_005b8610();
    /* 00633dac: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633daf: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633db5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633db7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00633dba: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x633dbfu); f_005b8624();
    /* 00633dbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633dc2: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 00633dcc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00633dcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633dd1: push 0x9c620c */ { u32 v = 0x9c620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633dd6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x633ddbu); f_007b9a88();
    /* 00633ddb: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00633dde: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x633de3u); f_007b999c();
    /* 00633de3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633de4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633de7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x633decu); f_007b4f54();
    /* 00633dec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633def: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633df2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633df9: mov esp, ebp */ r_esp = r_ebp;
    /* 00633dfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633dfc: ret 4 */ FN_RET(0x00633d48); r_esp += 8; return;
}

void f_00633e00(void)
{
    FN_ENTER(0x00633e00);
    /* 00633e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00633e03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633e05: push 0x8e3ee8 */ { u32 v = 0x8e3ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 00633e0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633e11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633e18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633e1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633e1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633e21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633e24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633e27: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633e2c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00633e33: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633e38u); f_005caba4();
    /* 00633e38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633e39: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00633e3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633e3e: je 0x633e71 */ if (fZ) goto L_00633e71;
L_00633e40:; BB(0x00633e40);
    /* 00633e40: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00633e47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633e4e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633e51: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633e54: call 0x633e78 */ r_esp -= 4; W32(r_esp, 0x633e59u); f_00633e78();
    /* 00633e59: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633e5c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00633e63:; BB(0x00633e63);
    /* 00633e63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633e66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633e6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00633e6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633e70: ret  */ FN_RET(0x00633e00); r_esp += 4; return;
L_00633e71:; BB(0x00633e71);
    /* 00633e71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633e73: jmp 0x633e63 */ goto L_00633e63;
}

void f_00633e78(void) /* sub_633E78 */
{
    FN_ENTER(0x00633e78);
    /* 00633e78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633e79: mov ebp, esp */ r_ebp = r_esp;
    /* 00633e7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633e7d: push 0x8e3f04 */ { u32 v = 0x8e3f04u; r_esp -= 4; W32(r_esp, v); }
    /* 00633e82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633e89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633e90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633e93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633e96: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00633e99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00633e9c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00633e9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00633ea2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00633ea5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00633ea8: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x633eadu); f_006338e8();
    /* 00633ead: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633eb4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633eb7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00633eba: mov dword ptr [ecx], 0xb2bda0 */ W32((u32)(r_ecx), 0xb2bda0u);
    /* 00633ec0: mov eax, dword ptr [0x9c6374] */ r_eax = R32((u32)(0x9c6374u));
    /* 00633ec5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633ec6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00633ec9: call dword ptr [0xb2bdb4] */ { u32 t = R32((u32)(0xb2bdb4u)); r_esp -= 4; W32(r_esp, 0x633ecfu); call_ind(t); }
    /* 00633ecf: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633ed5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633ed7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x633edcu); f_005b8610();
    /* 00633edc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633edf: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00633ee5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633ee7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00633eea: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x633eefu); f_005b8624();
    /* 00633eef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633ef2: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 00633efc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00633eff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633f01: push 0x9c620c */ { u32 v = 0x9c620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633f06: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x633f0bu); f_007b9a88();
    /* 00633f0b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00633f0e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x633f13u); f_007b999c();
    /* 00633f13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633f14: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633f17: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x633f1cu); f_007b4f54();
    /* 00633f1c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633f1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633f22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633f29: mov esp, ebp */ r_esp = r_ebp;
    /* 00633f2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633f2c: ret 4 */ FN_RET(0x00633e78); r_esp += 8; return;
}

void f_00633f30(void)
{
    FN_ENTER(0x00633f30);
    /* 00633f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00633f33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633f35: push 0x8e3f2c */ { u32 v = 0x8e3f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633f3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633f41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633f48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633f4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633f4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00633f51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00633f54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00633f57: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633f5c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00633f63: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x633f68u); f_005caba4();
    /* 00633f68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633f69: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00633f6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633f6e: je 0x633fa1 */ if (fZ) goto L_00633fa1;
L_00633f70:; BB(0x00633f70);
    /* 00633f70: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00633f77: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633f7e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00633f81: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633f84: call 0x633fa8 */ r_esp -= 4; W32(r_esp, 0x633f89u); f_00633fa8();
    /* 00633f89: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00633f8c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00633f93:; BB(0x00633f93);
    /* 00633f93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633f96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633f9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00633f9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633fa0: ret  */ FN_RET(0x00633f30); r_esp += 4; return;
L_00633fa1:; BB(0x00633fa1);
    /* 00633fa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00633fa3: jmp 0x633f93 */ goto L_00633f93;
}

void f_00633fa8(void) /* sub_633FA8 */
{
    FN_ENTER(0x00633fa8);
    /* 00633fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633fa9: mov ebp, esp */ r_ebp = r_esp;
    /* 00633fab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633fad: push 0x8e3f48 */ { u32 v = 0x8e3f48u; r_esp -= 4; W32(r_esp, v); }
    /* 00633fb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633fb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00633fc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633fc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00633fc6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00633fc9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00633fcc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00633fcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00633fd2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00633fd5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00633fd8: call 0x633b80 */ r_esp -= 4; W32(r_esp, 0x633fddu); f_00633b80();
    /* 00633fdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633fe4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00633fe7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00633fea: mov dword ptr [ecx], 0xb2be48 */ W32((u32)(r_ecx), 0xb2be48u);
    /* 00633ff0: mov eax, dword ptr [0x9c6378] */ r_eax = R32((u32)(0x9c6378u));
    /* 00633ff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633ff6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00633ff9: call dword ptr [0xb2be5c] */ { u32 t = R32((u32)(0xb2be5cu)); r_esp -= 4; W32(r_esp, 0x633fffu); call_ind(t); }
    /* 00633fff: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634005: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00634007: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63400cu); f_005b8610();
    /* 0063400c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063400f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634015: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00634017: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063401a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63401fu); f_005b8624();
    /* 0063401f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634022: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 0063402c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063402f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634031: push 0x9c620c */ { u32 v = 0x9c620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00634036: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63403bu); f_007b9a88();
    /* 0063403b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063403e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x634043u); f_007b999c();
    /* 00634043: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634047: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63404cu); f_007b4f54();
    /* 0063404c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063404f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634052: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634059: mov esp, ebp */ r_esp = r_ebp;
    /* 0063405b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063405c: ret 4 */ FN_RET(0x00633fa8); r_esp += 8; return;
}

