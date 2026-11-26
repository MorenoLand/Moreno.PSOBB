#include "protos.h"

void f_004fb15c(void) /* sub_4FB15C */
{
    FN_ENTER(0x004fb15c);
    /* 004fb15c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb15d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb160: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fb162: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 004fb168: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb16c: mov dword ptr [esp], 0x10014 */ W32((u32)(r_esp), 0x10014u);
    /* 004fb173: mov dword ptr [esp + 4], 0x91eb7c */ W32((u32)(r_esp+0x4u), 0x91eb7cu);
    /* 004fb17b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb180u); f_0061cdb0();
    /* 004fb180: fld dword ptr [ebx + 0xcc] */ FPUSH(R_F32((u32)(r_ebx+0xccu)));
    /* 004fb186: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb18a: mov dword ptr [esp], 0x10015 */ W32((u32)(r_esp), 0x10015u);
    /* 004fb191: mov dword ptr [esp + 4], 0x91ea0c */ W32((u32)(r_esp+0x4u), 0x91ea0cu);
    /* 004fb199: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb19eu); f_0061cdb0();
    /* 004fb19e: fld dword ptr [ebx + 0xd0] */ FPUSH(R_F32((u32)(r_ebx+0xd0u)));
    /* 004fb1a4: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb1a8: mov dword ptr [esp], 0x10016 */ W32((u32)(r_esp), 0x10016u);
    /* 004fb1af: mov dword ptr [esp + 4], 0x91ea1c */ W32((u32)(r_esp+0x4u), 0x91ea1cu);
    /* 004fb1b7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb1bcu); f_0061cdb0();
    /* 004fb1bc: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004fb1c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb1c4: jne 0x4fb1e7 */ if (!fZ) goto L_004fb1e7;
L_004fb1c6:; BB(0x004fb1c6);
    /* 004fb1c6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1c8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1ca: lea edx, [ebx + 0xc8] */ r_edx = (u32)(r_ebx+0xc8u);
    /* 004fb1d0: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 004fb1d6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fb1db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1dc: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb1e1u); f_004f745c();
    /* 004fb1e1: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
L_004fb1e7:; BB(0x004fb1e7);
    /* 004fb1e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb1ea: je 0x4fb216 */ if (fZ) goto L_004fb216;
L_004fb1ec:; BB(0x004fb1ec);
    /* 004fb1ec: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb1ef: je 0x4fb1f6 */ if (fZ) goto L_004fb1f6;
L_004fb1f1:; BB(0x004fb1f1);
    /* 004fb1f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fb1f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb1f5: ret  */ FN_RET(0x004fb15c); r_esp += 4; return;
L_004fb1f6:; BB(0x004fb1f6);
    /* 004fb1f6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1f8: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1fa: lea edx, [ebx + 0xd0] */ r_edx = (u32)(r_ebx+0xd0u);
    /* 004fb200: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 004fb206: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fb20b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb20c: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb211u); f_004f745c();
    /* 004fb211: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fb214: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb215: ret  */ FN_RET(0x004fb15c); r_esp += 4; return;
L_004fb216:; BB(0x004fb216);
    /* 004fb216: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb218: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb21a: lea edx, [ebx + 0xcc] */ r_edx = (u32)(r_ebx+0xccu);
    /* 004fb220: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 004fb226: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb229: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fb22b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb22c: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb231u); f_004f745c();
    /* 004fb231: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004fb237: jmp 0x4fb1ec */ goto L_004fb1ec;
}

void f_004fb23c(void) /* sub_4FB23C */
{
    FN_ENTER(0x004fb23c);
    /* 004fb23c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb23d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb23e: mov edi, ecx */ r_edi = r_ecx;
    /* 004fb240: push dword ptr [edi + 0xd4] */ { u32 v = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb246: push 0x91eb8c */ { u32 v = 0x91eb8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb24b: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 004fb250: push 0x10018 */ { u32 v = 0x10018u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb255: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb25au); f_0061cdb0();
    /* 004fb25a: push dword ptr [edi + 0xd8] */ { u32 v = R32((u32)(r_edi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb260: push 0x91ea3c */ { u32 v = 0x91ea3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb265: push 0x10019 */ { u32 v = 0x10019u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb26a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb26fu); f_0061cdb0();
    /* 004fb26f: push dword ptr [edi + 0xdc] */ { u32 v = R32((u32)(r_edi+0xdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb275: push 0x91ea4c */ { u32 v = 0x91ea4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb27a: push 0x1001a */ { u32 v = 0x1001au; r_esp -= 4; W32(r_esp, v); }
    /* 004fb27f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb284u); f_0061cdb0();
    /* 004fb284: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb287: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fb28d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb290: je 0x4fb2fc */ if (fZ) goto L_004fb2fc;
L_004fb292:; BB(0x004fb292);
    /* 004fb292: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb295: je 0x4fb2d4 */ if (fZ) goto L_004fb2d4;
L_004fb297:; BB(0x004fb297);
    /* 004fb297: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb29a: je 0x4fb2b2 */ if (fZ) goto L_004fb2b2;
L_004fb29c:; BB(0x004fb29c);
    /* 004fb29c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb29d: lea eax, [edi + 0xd4] */ r_eax = (u32)(r_edi+0xd4u);
    /* 004fb2a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2a4: mov ecx, edi */ r_ecx = r_edi;
    /* 004fb2a6: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2a8: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2aa: call 0x4f7db0 */ r_esp -= 4; W32(r_esp, 0x4fb2afu); f_004f7db0();
    /* 004fb2af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb2b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fb2b1: ret  */ FN_RET(0x004fb23c); r_esp += 4; return;
L_004fb2b2:; BB(0x004fb2b2);
    /* 004fb2b2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2b4: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2b6: lea edx, [edi + 0xdc] */ r_edx = (u32)(r_edi+0xdcu);
    /* 004fb2bc: lea eax, [edi + 0xa4] */ r_eax = (u32)(r_edi+0xa4u);
    /* 004fb2c2: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2c5: mov ecx, edi */ r_ecx = r_edi;
    /* 004fb2c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2c8: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fb2cdu); f_004f76ac();
    /* 004fb2cd: mov ebp, 2 */ r_ebp = 0x2u;
    /* 004fb2d2: jmp 0x4fb29c */ goto L_004fb29c;
L_004fb2d4:; BB(0x004fb2d4);
    /* 004fb2d4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2d6: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2d8: lea edx, [edi + 0xd8] */ r_edx = (u32)(r_edi+0xd8u);
    /* 004fb2de: lea eax, [edi + 0xa4] */ r_eax = (u32)(r_edi+0xa4u);
    /* 004fb2e4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2e7: mov ecx, edi */ r_ecx = r_edi;
    /* 004fb2e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2ea: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fb2efu); f_004f76ac();
    /* 004fb2ef: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fb2f5: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004fb2fa: jmp 0x4fb297 */ goto L_004fb297;
L_004fb2fc:; BB(0x004fb2fc);
    /* 004fb2fc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2fe: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb300: lea edx, [edi + 0xd4] */ r_edx = (u32)(r_edi+0xd4u);
    /* 004fb306: lea eax, [edi + 0xa4] */ r_eax = (u32)(r_edi+0xa4u);
    /* 004fb30c: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb30f: mov ecx, edi */ r_ecx = r_edi;
    /* 004fb311: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb312: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fb317u); f_004f76ac();
    /* 004fb317: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fb31d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fb31f: jmp 0x4fb292 */ goto L_004fb292;
}

void f_004fb324(void) /* sub_4FB324 */
{
    FN_ENTER(0x004fb324);
    /* 004fb324: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb325: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb326: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb329: mov esi, ecx */ r_esi = r_ecx;
    /* 004fb32b: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 004fb331: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb335: lea ebx, [esi + 0xe0] */ r_ebx = (u32)(r_esi+0xe0u);
    /* 004fb33b: mov dword ptr [esp], 0x1001c */ W32((u32)(r_esp), 0x1001cu);
    /* 004fb342: mov dword ptr [esp + 4], 0x91eb9c */ W32((u32)(r_esp+0x4u), 0x91eb9cu);
    /* 004fb34a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb34fu); f_0061cdb0();
    /* 004fb34f: fld dword ptr [esi + 0xe4] */ FPUSH(R_F32((u32)(r_esi+0xe4u)));
    /* 004fb355: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb359: mov dword ptr [esp], 0x1001d */ W32((u32)(r_esp), 0x1001du);
    /* 004fb360: mov dword ptr [esp + 4], 0x91ebac */ W32((u32)(r_esp+0x4u), 0x91ebacu);
    /* 004fb368: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb36du); f_0061cdb0();
    /* 004fb36d: fld dword ptr [esi + 0xe8] */ FPUSH(R_F32((u32)(r_esi+0xe8u)));
    /* 004fb373: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb377: mov dword ptr [esp], 0x1001e */ W32((u32)(r_esp), 0x1001eu);
    /* 004fb37e: mov dword ptr [esp + 4], 0x91ebbc */ W32((u32)(r_esp+0x4u), 0x91ebbcu);
    /* 004fb386: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb38bu); f_0061cdb0();
    /* 004fb38b: fld dword ptr [esi + 0xec] */ FPUSH(R_F32((u32)(r_esi+0xecu)));
    /* 004fb391: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb395: mov dword ptr [esp], 0x1001f */ W32((u32)(r_esp), 0x1001fu);
    /* 004fb39c: mov dword ptr [esp + 4], 0x91ebcc */ W32((u32)(r_esp+0x4u), 0x91ebccu);
    /* 004fb3a4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb3a9u); f_0061cdb0();
    /* 004fb3a9: fld dword ptr [esi + 0xf0] */ FPUSH(R_F32((u32)(r_esi+0xf0u)));
    /* 004fb3af: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fb3b3: mov dword ptr [esp], 0x10020 */ W32((u32)(r_esp), 0x10020u);
    /* 004fb3ba: mov dword ptr [esp + 4], 0x91ebdc */ W32((u32)(r_esp+0x4u), 0x91ebdcu);
    /* 004fb3c2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb3c7u); f_0061cdb0();
    /* 004fb3c7: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb3cd: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3d0: je 0x4fb47d */ if (fZ) goto L_004fb47d;
L_004fb3d6:; BB(0x004fb3d6);
    /* 004fb3d6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3d9: je 0x4fb457 */ if (fZ) goto L_004fb457;
L_004fb3db:; BB(0x004fb3db);
    /* 004fb3db: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3de: je 0x4fb434 */ if (fZ) goto L_004fb434;
L_004fb3e0:; BB(0x004fb3e0);
    /* 004fb3e0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3e3: je 0x4fb411 */ if (fZ) goto L_004fb411;
L_004fb3e5:; BB(0x004fb3e5);
    /* 004fb3e5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3e8: je 0x4fb3f0 */ if (fZ) goto L_004fb3f0;
L_004fb3ea:; BB(0x004fb3ea);
    /* 004fb3ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fb3ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb3ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb3ef: ret  */ FN_RET(0x004fb324); r_esp += 4; return;
L_004fb3f0:; BB(0x004fb3f0);
    /* 004fb3f0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3f2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3f4: lea edx, [esi + 0xf0] */ r_edx = (u32)(r_esi+0xf0u);
    /* 004fb3fa: lea eax, [esi + 0xa8] */ r_eax = (u32)(r_esi+0xa8u);
    /* 004fb400: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb403: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb405: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb406: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb40bu); f_004f745c();
    /* 004fb40b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fb40e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb40f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb410: ret  */ FN_RET(0x004fb324); r_esp += 4; return;
L_004fb411:; BB(0x004fb411);
    /* 004fb411: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb413: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb415: lea edx, [esi + 0xec] */ r_edx = (u32)(r_esi+0xecu);
    /* 004fb41b: lea eax, [esi + 0xa8] */ r_eax = (u32)(r_esi+0xa8u);
    /* 004fb421: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb424: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb427: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb42cu); f_004f745c();
    /* 004fb42c: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb432: jmp 0x4fb3e5 */ goto L_004fb3e5;
L_004fb434:; BB(0x004fb434);
    /* 004fb434: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb436: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb438: lea edx, [esi + 0xe8] */ r_edx = (u32)(r_esi+0xe8u);
    /* 004fb43e: lea eax, [esi + 0xa8] */ r_eax = (u32)(r_esi+0xa8u);
    /* 004fb444: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb447: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb449: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb44a: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb44fu); f_004f745c();
    /* 004fb44f: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb455: jmp 0x4fb3e0 */ goto L_004fb3e0;
L_004fb457:; BB(0x004fb457);
    /* 004fb457: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb459: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004fb45b: lea edx, [esi + 0xe4] */ r_edx = (u32)(r_esi+0xe4u);
    /* 004fb461: lea eax, [esi + 0xa8] */ r_eax = (u32)(r_esi+0xa8u);
    /* 004fb467: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb46a: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb46c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb46d: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb472u); f_004f745c();
    /* 004fb472: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb478: jmp 0x4fb3db */ goto L_004fb3db;
L_004fb47d:; BB(0x004fb47d);
    /* 004fb47d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb47f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb481: lea eax, [esi + 0xa8] */ r_eax = (u32)(r_esi+0xa8u);
    /* 004fb487: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb489: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb48b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb48c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb48d: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fb492u); f_004f745c();
    /* 004fb492: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb498: jmp 0x4fb3d6 */ goto L_004fb3d6;
}

void f_004fb4a0(void) /* sub_4FB4A0 */
{
    FN_ENTER(0x004fb4a0);
    /* 004fb4a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4a2: mov esi, ecx */ r_esi = r_ecx;
    /* 004fb4a4: movsx eax, word ptr [esi + 0xf6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xf6u));
    /* 004fb4ab: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004fb4ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4af: push 0x91ebec */ { u32 v = 0x91ebecu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4b4: push 0x10022 */ { u32 v = 0x10022u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4b9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb4beu); f_0061cdb0();
    /* 004fb4be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb4c1: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb4c7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fb4ca: je 0x4fb4d9 */ if (fZ) goto L_004fb4d9;
L_004fb4cc:; BB(0x004fb4cc);
    /* 004fb4cc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fb4cf: mov word ptr [esi + 0xf6], ax */ W16((u32)(r_esi+0xf6u), (u16)r_eax);
    /* 004fb4d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb4d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb4d8: ret  */ FN_RET(0x004fb4a0); r_esp += 4; return;
L_004fb4d9:; BB(0x004fb4d9);
    /* 004fb4d9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004fb4dc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4de: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4e0: lea eax, [esi + 0xac] */ r_eax = (u32)(r_esi+0xacu);
    /* 004fb4e6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb4eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4ec: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fb4f1u); f_004f76ac();
    /* 004fb4f1: jmp 0x4fb4cc */ goto L_004fb4cc;
}

void f_004fb4f4(void) /* sub_4FB4F4 */
{
    FN_ENTER(0x004fb4f4);
    /* 004fb4f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4f6: mov esi, ecx */ r_esi = r_ecx;
    /* 004fb4f8: movsx eax, word ptr [esi + 0xf4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xf4u));
    /* 004fb4ff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004fb502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb503: push 0x91ebfc */ { u32 v = 0x91ebfcu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb508: push 0x10023 */ { u32 v = 0x10023u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb50d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb512u); f_0061cdb0();
    /* 004fb512: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb515: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb51b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fb51e: je 0x4fb52d */ if (fZ) goto L_004fb52d;
L_004fb520:; BB(0x004fb520);
    /* 004fb520: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fb523: mov word ptr [esi + 0xf4], ax */ W16((u32)(r_esi+0xf4u), (u16)r_eax);
    /* 004fb52a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb52b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb52c: ret  */ FN_RET(0x004fb4f4); r_esp += 4; return;
L_004fb52d:; BB(0x004fb52d);
    /* 004fb52d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004fb530: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb532: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb534: lea eax, [esi + 0xb0] */ r_eax = (u32)(r_esi+0xb0u);
    /* 004fb53a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb53c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb53d: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb53f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb540: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fb545u); f_004f76ac();
    /* 004fb545: jmp 0x4fb520 */ goto L_004fb520;
}

void f_004fb548(void) /* sub_4FB548 */
{
    FN_ENTER(0x004fb548);
    /* 004fb548: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb54a: mov esi, ecx */ r_esi = r_ecx;
    /* 004fb54c: movsx eax, word ptr [esi + 0xba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xbau));
    /* 004fb553: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004fb556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb557: push 0x91ec0c */ { u32 v = 0x91ec0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb55c: push 0x10024 */ { u32 v = 0x10024u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb561: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb566u); f_0061cdb0();
    /* 004fb566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb569: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 004fb56f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fb572: je 0x4fb581 */ if (fZ) goto L_004fb581;
L_004fb574:; BB(0x004fb574);
    /* 004fb574: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fb577: mov word ptr [esi + 0xba], ax */ W16((u32)(r_esi+0xbau), (u16)r_eax);
    /* 004fb57e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb57f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb580: ret  */ FN_RET(0x004fb548); r_esp += 4; return;
L_004fb581:; BB(0x004fb581);
    /* 004fb581: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004fb584: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb586: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb588: lea eax, [esi + 0xb4] */ r_eax = (u32)(r_esi+0xb4u);
    /* 004fb58e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb591: mov ecx, esi */ r_ecx = r_esi;
    /* 004fb593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb594: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fb599u); f_004f76ac();
    /* 004fb599: jmp 0x4fb574 */ goto L_004fb574;
}

void f_004fb59c(void) /* sub_4FB59C */
{
    FN_ENTER(0x004fb59c);
    /* 004fb59c: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 004fb5a2: call dword ptr [eax*4 + 0x9b9308] */ { u32 t = R32((u32)(r_eax*4+0x9b9308u)); r_esp -= 4; W32(r_esp, 0x4fb5a9u); call_ind(t); }
    /* 004fb5a9: ret  */ FN_RET(0x004fb59c); r_esp += 4; return;
}

void f_004fb5ac(void) /* sub_4FB5AC */
{
    FN_ENTER(0x004fb5ac);
    /* 004fb5ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb5ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fb5af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fb5b1: call 0x4f812c */ r_esp -= 4; W32(r_esp, 0x4fb5b6u); f_004f812c();
    /* 004fb5b6: mov byte ptr [0xa727a8], 1 */ W8((u32)(0xa727a8u), 0x1u);
    /* 004fb5bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb5bf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4fb5c4u); f_0068d5a8();
    /* 004fb5c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb5c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb5c7: je 0x4fb5f1 */ if (fZ) goto L_004fb5f1;
L_004fb5c9:; BB(0x004fb5c9);
    /* 004fb5c9: fld dword ptr [0x91e990] */ FPUSH(R_F32((u32)(0x91e990u)));
    /* 004fb5cf: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004fb5d2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004fb5d4: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004fb5d7: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004fb5da: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 004fb5dd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004fb5df: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004fb5e2: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004fb5e5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fb5e8: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 004fb5eb: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 004fb5ee: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_004fb5f1:; BB(0x004fb5f1);
    /* 004fb5f1: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 004fb5f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fb5f9: je 0x4fb5fd */ if (fZ) goto L_004fb5fd;
L_004fb5fb:; BB(0x004fb5fb);
    /* 004fb5fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb5fc: ret  */ FN_RET(0x004fb5ac); r_esp += 4; return;
L_004fb5fd:; BB(0x004fb5fd);
    /* 004fb5fd: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb602: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fb607u); f_008581c5();
    /* 004fb607: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb608: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
    /* 004fb612: mov dword ptr [ebx + 0x10c], eax */ W32((u32)(r_ebx+0x10cu), r_eax);
    /* 004fb618: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb619: ret  */ FN_RET(0x004fb5ac); r_esp += 4; return;
}

void f_004fb61c(void) /* sub_4FB61C */
{
    FN_ENTER(0x004fb61c);
    /* 004fb61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb61d: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb61f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb621: push 0x8d332c */ { u32 v = 0x8d332cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb626: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fb62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb62d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fb634: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb637: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fb63a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004fb63d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004fb640: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004fb643: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb648: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004fb64f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fb654u); f_005caba4();
    /* 004fb654: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb655: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fb658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fb65a: je 0x4fb67f */ if (fZ) goto L_004fb67f;
L_004fb65c:; BB(0x004fb65c);
    /* 004fb65c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004fb663: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fb66a: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb670: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fb673: call 0x4fb690 */ r_esp -= 4; W32(r_esp, 0x4fb678u); f_004fb690();
    /* 004fb678: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004fb67f:; BB(0x004fb67f);
    /* 004fb67f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb682: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fb689: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb68b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb68c: ret  */ FN_RET(0x004fb61c); r_esp += 4; return;
}

void f_004fb690(void) /* sub_4FB690 */
{
    FN_ENTER(0x004fb690);
    /* 004fb690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb691: mov edi, ecx */ r_edi = r_ecx;
    /* 004fb693: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb697: mov ecx, edi */ r_ecx = r_edi;
    /* 004fb699: call 0x4f7eec */ r_esp -= 4; W32(r_esp, 0x4fb69eu); f_004f7eec();
    /* 004fb69e: mov dword ptr [edi], 0xafe1d8 */ W32((u32)(r_edi), 0xafe1d8u);
    /* 004fb6a4: mov eax, dword ptr [0x9b9310] */ r_eax = R32((u32)(0x9b9310u));
    /* 004fb6a9: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004fb6ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fb6ae: mov byte ptr [0xa727a8], dl */ W8((u32)(0xa727a8u), (u8)r_edx);
    /* 004fb6b4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6b6: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 004fb6bc: mov dword ptr [edi + 0x10c], edx */ W32((u32)(r_edi+0x10cu), r_edx);
    /* 004fb6c2: push 0x91ecdc */ { u32 v = 0x91ecdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6c7: mov dword ptr [edi + 0x110], edx */ W32((u32)(r_edi+0x110u), r_edx);
    /* 004fb6cd: mov dword ptr [edi + 0x114], edx */ W32((u32)(r_edi+0x114u), r_edx);
    /* 004fb6d3: mov dword ptr [edi + 0x118], edx */ W32((u32)(r_edi+0x118u), r_edx);
    /* 004fb6d9: mov dword ptr [edi + 0x13c], edx */ W32((u32)(r_edi+0x13cu), r_edx);
    /* 004fb6df: lea eax, [edi + 0x11c] */ r_eax = (u32)(r_edi+0x11cu);
    /* 004fb6e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6e6: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fb6ebu); f_00858900();
    /* 004fb6eb: mov eax, edi */ r_eax = r_edi;
    /* 004fb6ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fb6f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fb6f1: ret 4 */ FN_RET(0x004fb690); r_esp += 8; return;
}

void f_004fb6f4(void) /* sub_4FB6F4 */
{
    FN_ENTER(0x004fb6f4);
    /* 004fb6f4: push dword ptr [0xa727a0] */ { u32 v = R32((u32)(0xa727a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb6fa: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fb6ffu); f_00857e98();
    /* 004fb6ff: mov dword ptr [0xa727a0], 0 */ W32((u32)(0xa727a0u), 0x0u);
    /* 004fb709: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb70a: ret  */ FN_RET(0x004fb6f4); r_esp += 4; return;
}

void f_004fb70c(void) /* sub_4FB70C */
{
    FN_ENTER(0x004fb70c);
    /* 004fb70c: mov eax, dword ptr [0xa727a4] */ r_eax = R32((u32)(0xa727a4u));
    /* 004fb711: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fb715: je 0x4fb71a */ if (fZ) goto L_004fb71a;
L_004fb717:; BB(0x004fb717);
    /* 004fb717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fb719: ret  */ FN_RET(0x004fb70c); r_esp += 4; return;
L_004fb71a:; BB(0x004fb71a);
    /* 004fb71a: mov eax, 1 */ r_eax = 0x1u;
    /* 004fb71f: ret  */ FN_RET(0x004fb70c); r_esp += 4; return;
}

void f_004fb720(void) /* sub_4FB720 */
{
    FN_ENTER(0x004fb720);
    /* 004fb720: mov dword ptr [0xa72794], 0x3f800000 */ W32((u32)(0xa72794u), 0x3f800000u);
    /* 004fb72a: mov dword ptr [0xa72798], 0x41000000 */ W32((u32)(0xa72798u), 0x41000000u);
    /* 004fb734: mov dword ptr [0xa7279c], 0x3fc00000 */ W32((u32)(0xa7279cu), 0x3fc00000u);
    /* 004fb73e: ret  */ FN_RET(0x004fb720); r_esp += 4; return;
}

void f_004fb740(void) /* sub_4FB740 */
{
    FN_ENTER(0x004fb740);
    /* 004fb740: mov dword ptr [0xa727a0], 0 */ W32((u32)(0xa727a0u), 0x0u);
    /* 004fb74a: push 0x2400 */ { u32 v = 0x2400u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb74f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fb754u); f_008581c5();
    /* 004fb754: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb755: mov dword ptr [0xa727a0], eax */ W32((u32)(0xa727a0u), r_eax);
    /* 004fb75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fb75c: jne 0x4fb75f */ if (!fZ) goto L_004fb75f;
L_004fb75e:; BB(0x004fb75e);
    /* 004fb75e: ret  */ FN_RET(0x004fb740); r_esp += 4; return;
L_004fb75f:; BB(0x004fb75f);
    /* 004fb75f: push 0x2400 */ { u32 v = 0x2400u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb764: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb766: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb767: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x4fb76cu); f_0086b688();
    /* 004fb76c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb76f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fb771:; BB(0x004fb771);
    /* 004fb771: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fb777: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004fb77c: mov word ptr [eax + ecx], dx */ W16((u32)(r_eax+r_ecx), (u16)r_edx);
    /* 004fb780: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fb786: mov word ptr [eax + ecx + 0x48], dx */ W16((u32)(r_eax+r_ecx+0x48u), (u16)r_edx);
    /* 004fb78b: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fb791: mov word ptr [eax + ecx + 0x90], dx */ W16((u32)(r_eax+r_ecx+0x90u), (u16)r_edx);
    /* 004fb799: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fb79f: mov word ptr [eax + ecx + 0xd8], dx */ W16((u32)(r_eax+r_ecx+0xd8u), (u16)r_edx);
    /* 004fb7a7: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb7ac: cmp eax, 0x2400 */ {  u32 a = r_eax; u32 b = 0x2400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fb7b1: jl 0x4fb771 */ if ((fS!=fO)) goto L_004fb771;
L_004fb7b3:; BB(0x004fb7b3);
    /* 004fb7b3: jmp 0x4fb75e */ goto L_004fb75e;
}

void f_004fb7b8(void) /* sub_4FB7B8 */
{
    FN_ENTER(0x004fb7b8);
    /* 004fb7b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7b9: mov edi, ecx */ r_edi = r_ecx;
    /* 004fb7bb: mov edx, dword ptr [edi + 0x13c] */ r_edx = R32((u32)(r_edi+0x13cu));
    /* 004fb7c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb7c3: mov dword ptr [edi + 0x114], eax */ W32((u32)(r_edi+0x114u), r_eax);
    /* 004fb7c9: mov dword ptr [edi + 0x118], eax */ W32((u32)(r_edi+0x118u), r_eax);
    /* 004fb7cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb7d1: je 0x4fb7ea */ if (fZ) goto L_004fb7ea;
L_004fb7d3:; BB(0x004fb7d3);
    /* 004fb7d3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fb7d7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fb7dc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fb7e0: mov dword ptr [edi + 0x13c], 0 */ W32((u32)(r_edi+0x13cu), 0x0u);
L_004fb7ea:; BB(0x004fb7ea);
    /* 004fb7ea: mov eax, dword ptr [edi + 0x10c] */ r_eax = R32((u32)(r_edi+0x10cu));
    /* 004fb7f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb7f2: je 0x4fb809 */ if (fZ) goto L_004fb809;
L_004fb7f4:; BB(0x004fb7f4);
    /* 004fb7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7f5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fb7fau); f_00857e98();
    /* 004fb7fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb7fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb7fd: mov dword ptr [edi + 0x10c], eax */ W32((u32)(r_edi+0x10cu), r_eax);
    /* 004fb803: mov dword ptr [edi + 0x110], eax */ W32((u32)(r_edi+0x110u), r_eax);
L_004fb809:; BB(0x004fb809);
    /* 004fb809: mov ecx, edi */ r_ecx = r_edi;
    /* 004fb80b: call 0x4f83cc */ r_esp -= 4; W32(r_esp, 0x4fb810u); f_004f83cc();
    /* 004fb810: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004fb816: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fb818: je 0x4fb831 */ if (fZ) goto L_004fb831;
L_004fb81a:; BB(0x004fb81a);
    /* 004fb81a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fb81e: mov dword ptr [0xa727a4], 0 */ W32((u32)(0xa727a4u), 0x0u);
    /* 004fb828: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fb82d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004fb831:; BB(0x004fb831);
    /* 004fb831: mov byte ptr [0xa727a8], 0 */ W8((u32)(0xa727a8u), 0x0u);
    /* 004fb838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fb839: ret  */ FN_RET(0x004fb7b8); r_esp += 4; return;
}

void f_004fb83c(void) /* sub_4FB83C */
{
    FN_ENTER(0x004fb83c);
    /* 004fb83c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb83d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb83e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb83f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb840: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fb842: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 004fb847: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 004fb84a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb84c: je 0x4fbb00 */ if (fZ) goto L_004fbb00;
L_004fb852:; BB(0x004fb852);
    /* 004fb852: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb855: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fb857: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fb85cu); f_004f7fb0();
    /* 004fb85c: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 004fb85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb861: je 0x4fbae6 */ if (fZ) goto L_004fbae6;
L_004fb867:; BB(0x004fb867);
    /* 004fb867: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fb86a: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004fb86d: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 004fb870: mov dword ptr [ebx + 0x4c], ebp */ W32((u32)(r_ebx+0x4cu), r_ebp);
    /* 004fb873: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004fb876: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
L_004fb879:; BB(0x004fb879);
    /* 004fb879: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fb87b: mov dword ptr [0xa727a4], edx */ W32((u32)(0xa727a4u), r_edx);
    /* 004fb881: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb882: mov dword ptr [ebx + 0xfc], edx */ W32((u32)(r_ebx+0xfcu), r_edx);
    /* 004fb888: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fb88d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004fb894: mov word ptr [ebx + 0xba], dx */ W16((u32)(r_ebx+0xbau), (u16)r_edx);
    /* 004fb89b: mov word ptr [ebx + 0xbc], dx */ W16((u32)(r_ebx+0xbcu), (u16)r_edx);
    /* 004fb8a2: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4fb8a7u); f_007ba8d0();
    /* 004fb8a7: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fb8aa: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 004fb8ad: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 004fb8b7: mov word ptr [ebx + 0xbe], ax */ W16((u32)(r_ebx+0xbeu), (u16)r_eax);
    /* 004fb8be: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004fb8c1: mov dword ptr [ebx + 0xe4], 0 */ W32((u32)(r_ebx+0xe4u), 0x0u);
    /* 004fb8cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fb8cd: mov word ptr [ebx + 0xc0], si */ W16((u32)(r_ebx+0xc0u), (u16)r_esi);
    /* 004fb8d4: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
    /* 004fb8de: mov word ptr [ebx + 0xc2], si */ W16((u32)(r_ebx+0xc2u), (u16)r_esi);
    /* 004fb8e5: mov word ptr [ebx + 0xc4], si */ W16((u32)(r_ebx+0xc4u), (u16)r_esi);
    /* 004fb8ec: mov word ptr [ebx + 0xc6], si */ W16((u32)(r_ebx+0xc6u), (u16)r_esi);
    /* 004fb8f3: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
    /* 004fb8fd: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 004fb903: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 004fb909: mov dword ptr [ebx + 0xd0], ebp */ W32((u32)(r_ebx+0xd0u), r_ebp);
    /* 004fb90f: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
    /* 004fb919: mov dword ptr [ebx + 0xd4], esi */ W32((u32)(r_ebx+0xd4u), r_esi);
    /* 004fb91f: mov dword ptr [ebx + 0xd8], esi */ W32((u32)(r_ebx+0xd8u), r_esi);
    /* 004fb925: mov dword ptr [ebx + 0xdc], esi */ W32((u32)(r_ebx+0xdcu), r_esi);
    /* 004fb92b: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
    /* 004fb935: mov word ptr [ebx + 0xf4], si */ W16((u32)(r_ebx+0xf4u), (u16)r_esi);
    /* 004fb93c: mov word ptr [ebx + 0xf6], si */ W16((u32)(r_ebx+0xf6u), (u16)r_esi);
    /* 004fb943: mov dword ptr [ebx + 0x9c], esi */ W32((u32)(r_ebx+0x9cu), r_esi);
    /* 004fb949: mov dword ptr [ebx + 0xa0], esi */ W32((u32)(r_ebx+0xa0u), r_esi);
    /* 004fb94f: mov dword ptr [ebx + 0xa4], esi */ W32((u32)(r_ebx+0xa4u), r_esi);
    /* 004fb955: mov dword ptr [ebx + 0xa8], esi */ W32((u32)(r_ebx+0xa8u), r_esi);
    /* 004fb95b: mov dword ptr [ebx + 0xac], esi */ W32((u32)(r_ebx+0xacu), r_esi);
    /* 004fb961: mov dword ptr [ebx + 0xb0], esi */ W32((u32)(r_ebx+0xb0u), r_esi);
    /* 004fb967: mov dword ptr [ebx + 0xb4], esi */ W32((u32)(r_ebx+0xb4u), r_esi);
    /* 004fb96d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb973: mov dword ptr [ebx + 0xf8], esi */ W32((u32)(r_ebx+0xf8u), r_esi);
    /* 004fb979: mov dword ptr [ebx + 0x108], esi */ W32((u32)(r_ebx+0x108u), r_esi);
    /* 004fb97f: mov dword ptr [ebx + 0x104], esi */ W32((u32)(r_ebx+0x104u), r_esi);
    /* 004fb985: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fb987: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fb98cu); f_008101d0();
    /* 004fb98c: mov esi, eax */ r_esi = r_eax;
    /* 004fb98e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb994: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fb999u); f_008123e4();
    /* 004fb999: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb99c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fb99e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fb9a0: jle 0x4fb9b7 */ if ((fZ||fS!=fO)) goto L_004fb9b7;
L_004fb9a2:; BB(0x004fb9a2);
    /* 004fb9a2: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fb9a5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb9a8: je 0x4fb9ad */ if (fZ) goto L_004fb9ad;
L_004fb9aa:; BB(0x004fb9aa);
    /* 004fb9aa: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb9ad:; BB(0x004fb9ad);
    /* 004fb9ad: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fb9b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fb9b3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb9b5: jl 0x4fb9a2 */ if ((fS!=fO)) goto L_004fb9a2;
L_004fb9b7:; BB(0x004fb9b7);
    /* 004fb9b7: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fb9bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fb9bf:; BB(0x004fb9bf);
    /* 004fb9bf: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fb9c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb9c5: je 0x4fb9ca */ if (fZ) goto L_004fb9ca;
L_004fb9c7:; BB(0x004fb9c7);
    /* 004fb9c7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb9ca:; BB(0x004fb9ca);
    /* 004fb9ca: movsx esi, word ptr [ecx + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fb9ce: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fb9d1: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb9d4: je 0x4fb9d9 */ if (fZ) goto L_004fb9d9;
L_004fb9d6:; BB(0x004fb9d6);
    /* 004fb9d6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb9d9:; BB(0x004fb9d9);
    /* 004fb9d9: movsx esi, word ptr [eax + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004fb9dd: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb9e0: je 0x4fb9e5 */ if (fZ) goto L_004fb9e5;
L_004fb9e2:; BB(0x004fb9e2);
    /* 004fb9e2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb9e5:; BB(0x004fb9e5);
    /* 004fb9e5: movsx esi, word ptr [eax + 0x90] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004fb9ec: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb9ef: je 0x4fb9f4 */ if (fZ) goto L_004fb9f4;
L_004fb9f1:; BB(0x004fb9f1);
    /* 004fb9f1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb9f4:; BB(0x004fb9f4);
    /* 004fb9f4: lea ecx, [eax + 0xd8] */ r_ecx = (u32)(r_eax+0xd8u);
    /* 004fb9fa: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fb9fd: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba03: jl 0x4fb9bf */ if ((fS!=fO)) goto L_004fb9bf;
L_004fba05:; BB(0x004fba05);
    /* 004fba05: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fba0b: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fba0e: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fba11: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004fba13: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fba15: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fba1au); f_008101d0();
    /* 004fba1a: mov ebp, eax */ r_ebp = r_eax;
    /* 004fba1c: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fba22: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fba27u); f_008123e4();
    /* 004fba27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fba2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fba2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fba2e: jle 0x4fba4e */ if ((fZ||fS!=fO)) goto L_004fba4e;
L_004fba30:; BB(0x004fba30);
    /* 004fba30: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fba34: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba37: je 0x4fba44 */ if (fZ) goto L_004fba44;
L_004fba39:; BB(0x004fba39);
    /* 004fba39: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fba3d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba3f: jne 0x4fba44 */ if (!fZ) goto L_004fba44;
L_004fba41:; BB(0x004fba41);
    /* 004fba41: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fba44:; BB(0x004fba44);
    /* 004fba44: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fba47: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fba4a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba4c: jl 0x4fba30 */ if ((fS!=fO)) goto L_004fba30;
L_004fba4e:; BB(0x004fba4e);
    /* 004fba4e: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fba54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fba56:; BB(0x004fba56);
    /* 004fba56: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fba59: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba5c: je 0x4fba69 */ if (fZ) goto L_004fba69;
L_004fba5e:; BB(0x004fba5e);
    /* 004fba5e: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fba62: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba64: jne 0x4fba69 */ if (!fZ) goto L_004fba69;
L_004fba66:; BB(0x004fba66);
    /* 004fba66: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fba69:; BB(0x004fba69);
    /* 004fba69: movsx ebp, word ptr [ecx + 0x48] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fba6d: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fba70: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba73: je 0x4fba80 */ if (fZ) goto L_004fba80;
L_004fba75:; BB(0x004fba75);
    /* 004fba75: movsx ebp, word ptr [eax + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fba79: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba7b: jne 0x4fba80 */ if (!fZ) goto L_004fba80;
L_004fba7d:; BB(0x004fba7d);
    /* 004fba7d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fba80:; BB(0x004fba80);
    /* 004fba80: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004fba83: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fba86: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba8c: jl 0x4fba56 */ if ((fS!=fO)) goto L_004fba56;
L_004fba8e:; BB(0x004fba8e);
    /* 004fba8e: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 004fba91: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fba96u); f_00807ac0();
    /* 004fba96: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 004fba9d: mov dword ptr [ebx + 0x100], 0 */ W32((u32)(r_ebx+0x100u), 0x0u);
    /* 004fbaa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fbaa9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbaab: je 0x4fbac2 */ if (fZ) goto L_004fbac2;
L_004fbaad:; BB(0x004fbaad);
    /* 004fbaad: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 004fbab0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbab2: je 0x4fbac2 */ if (fZ) goto L_004fbac2;
L_004fbab4:; BB(0x004fbab4);
    /* 004fbab4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbab7: mov dword ptr [ebx + 0x100], eax */ W32((u32)(r_ebx+0x100u), r_eax);
    /* 004fbabd: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004fbac0: jne 0x4fbaad */ if (!fZ) goto L_004fbaad;
L_004fbac2:; BB(0x004fbac2);
    /* 004fbac2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbac4: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbac6: lea edx, [ebx + 0x60] */ r_edx = (u32)(r_ebx+0x60u);
    /* 004fbac9: lea eax, [ebx + 0x78] */ r_eax = (u32)(r_ebx+0x78u);
    /* 004fbacc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbacf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbad0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbad5u); f_0061cdb0();
    /* 004fbad5: mov eax, 1 */ r_eax = 0x1u;
    /* 004fbada: mov word ptr [ebx + 0x5c], ax */ W16((u32)(r_ebx+0x5cu), (u16)r_eax);
    /* 004fbade: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fbae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fbae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fbae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fbae5: ret  */ FN_RET(0x004fb83c); r_esp += 4; return;
L_004fbae6:; BB(0x004fbae6);
    /* 004fbae6: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 004fbaed: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
    /* 004fbaf4: mov dword ptr [ebx + 0x50], 0 */ W32((u32)(r_ebx+0x50u), 0x0u);
    /* 004fbafb: jmp 0x4fb879 */ goto L_004fb879;
L_004fbb00:; BB(0x004fbb00);
    /* 004fbb00: push 0x91e9a8 */ { u32 v = 0x91e9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb05: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbb0au); f_0061cdb0();
    /* 004fbb0a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004fbb0e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbb13: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004fbb17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbb18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fbb19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbb1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fbb1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fbb1c: ret  */ FN_RET(0x004fb83c); r_esp += 4; return;
}

void f_004fbb20(void) /* sub_4FBB20 */
{
    FN_ENTER(0x004fbb20);
    /* 004fbb20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fbb23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fbb25: call 0x4fbb44 */ r_esp -= 4; W32(r_esp, 0x4fbb2au); f_004fbb44();
    /* 004fbb2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004fbb2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbb30: jne 0x4fbb36 */ if (!fZ) goto L_004fbb36;
L_004fbb32:; BB(0x004fbb32);
    /* 004fbb32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fbb33: ret 4 */ FN_RET(0x004fbb20); r_esp += 8; return;
L_004fbb36:; BB(0x004fbb36);
    /* 004fbb36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4fbb3cu); f_005c2f74();
    /* 004fbb3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbb3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fbb3e: ret 4 */ FN_RET(0x004fbb20); r_esp += 8; return;
}

void f_004fbb44(void) /* sub_4FBB44 */
{
    FN_ENTER(0x004fbb44);
    /* 004fbb44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb45: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbb47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb49: push 0x8d3348 */ { u32 v = 0x8d3348u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fbb54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fbb5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbb5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fbb62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004fbb65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004fbb68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004fbb6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fbb6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbb75: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbb78: mov edx, dword ptr [ebx + 0x13c] */ r_edx = R32((u32)(r_ebx+0x13cu));
    /* 004fbb7e: mov dword ptr [ebx], 0xafe2b8 */ W32((u32)(r_ebx), 0xafe2b8u);
    /* 004fbb84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbb86: je 0x4fbba2 */ if (fZ) goto L_004fbba2;
L_004fbb88:; BB(0x004fbb88);
    /* 004fbb88: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbb8b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fbb8f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fbb94: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fbb98: mov dword ptr [ebx + 0x13c], 0 */ W32((u32)(r_ebx+0x13cu), 0x0u);
L_004fbba2:; BB(0x004fbba2);
    /* 004fbba2: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 004fbba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbbaa: je 0x4fbbc0 */ if (fZ) goto L_004fbbc0;
L_004fbbac:; BB(0x004fbbac);
    /* 004fbbac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbbad: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fbbb2u); f_00857e98();
    /* 004fbbb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbbb3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbbb6: mov dword ptr [ebx + 0x100], 0 */ W32((u32)(r_ebx+0x100u), 0x0u);
L_004fbbc0:; BB(0x004fbbc0);
    /* 004fbbc0: mov ecx, dword ptr [ebx + 0x110] */ r_ecx = R32((u32)(r_ebx+0x110u));
    /* 004fbbc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbbc8: je 0x4fbbdf */ if (fZ) goto L_004fbbdf;
L_004fbbca:; BB(0x004fbbca);
    /* 004fbbca: je 0x4fbbd5 */ if (fZ) goto L_004fbbd5;
L_004fbbcc:; BB(0x004fbbcc);
    /* 004fbbcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbbce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004fbbd0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4fbbd2u); call_ind(t); }
    /* 004fbbd2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_004fbbd5:; BB(0x004fbbd5);
    /* 004fbbd5: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
L_004fbbdf:; BB(0x004fbbdf);
    /* 004fbbdf: mov ecx, dword ptr [ebx + 0x10c] */ r_ecx = R32((u32)(r_ebx+0x10cu));
    /* 004fbbe5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbbe7: je 0x4fbbfe */ if (fZ) goto L_004fbbfe;
L_004fbbe9:; BB(0x004fbbe9);
    /* 004fbbe9: je 0x4fbbf4 */ if (fZ) goto L_004fbbf4;
L_004fbbeb:; BB(0x004fbbeb);
    /* 004fbbeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbbed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004fbbef: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4fbbf1u); call_ind(t); }
    /* 004fbbf1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_004fbbf4:; BB(0x004fbbf4);
    /* 004fbbf4: mov dword ptr [ebx + 0x10c], 0 */ W32((u32)(r_ebx+0x10cu), 0x0u);
L_004fbbfe:; BB(0x004fbbfe);
    /* 004fbbfe: mov ecx, dword ptr [ebx + 0x108] */ r_ecx = R32((u32)(r_ebx+0x108u));
    /* 004fbc04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbc06: je 0x4fbc1d */ if (fZ) goto L_004fbc1d;
L_004fbc08:; BB(0x004fbc08);
    /* 004fbc08: je 0x4fbc13 */ if (fZ) goto L_004fbc13;
L_004fbc0a:; BB(0x004fbc0a);
    /* 004fbc0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbc0c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004fbc0e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4fbc10u); call_ind(t); }
    /* 004fbc10: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_004fbc13:; BB(0x004fbc13);
    /* 004fbc13: mov dword ptr [ebx + 0x108], 0 */ W32((u32)(r_ebx+0x108u), 0x0u);
L_004fbc1d:; BB(0x004fbc1d);
    /* 004fbc1d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fbc24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fbc26: call 0x4f7cd0 */ r_esp -= 4; W32(r_esp, 0x4fbc2bu); f_004f7cd0();
    /* 004fbc2b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fbc2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbc31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fbc38: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbc3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbc3b: ret  */ FN_RET(0x004fbb44); r_esp += 4; return;
}

void f_004fbc3c(void) /* sub_4FBC3C */
{
    FN_ENTER(0x004fbc3c);
    /* 004fbc3c: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 004fbc42: call dword ptr [eax*4 + 0x9b9314] */ { u32 t = R32((u32)(r_eax*4+0x9b9314u)); r_esp -= 4; W32(r_esp, 0x4fbc49u); call_ind(t); }
    /* 004fbc49: ret  */ FN_RET(0x004fbc3c); r_esp += 4; return;
}

void f_004fbc4c(void) /* sub_4FBC4C */
{
    FN_ENTER(0x004fbc4c);
    /* 004fbc4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbc4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fbc4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fbc51: call 0x4f812c */ r_esp -= 4; W32(r_esp, 0x4fbc56u); f_004f812c();
    /* 004fbc56: mov byte ptr [0xa727c4], 1 */ W8((u32)(0xa727c4u), 0x1u);
    /* 004fbc5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbc5f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4fbc64u); f_0068d5a8();
    /* 004fbc64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbc65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbc67: je 0x4fbc91 */ if (fZ) goto L_004fbc91;
L_004fbc69:; BB(0x004fbc69);
    /* 004fbc69: fld dword ptr [0x91ed48] */ FPUSH(R_F32((u32)(0x91ed48u)));
    /* 004fbc6f: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004fbc72: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004fbc74: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004fbc77: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004fbc7a: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 004fbc7d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004fbc7f: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004fbc82: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004fbc85: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fbc88: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 004fbc8b: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 004fbc8e: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_004fbc91:; BB(0x004fbc91);
    /* 004fbc91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbc93: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fbc98u); f_007ba898();
    /* 004fbc98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbc99: mov word ptr [ebx + 0xb4], ax */ W16((u32)(r_ebx+0xb4u), (u16)r_eax);
    /* 004fbca0: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 004fbca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbca8: je 0x4fbcac */ if (fZ) goto L_004fbcac;
L_004fbcaa:; BB(0x004fbcaa);
    /* 004fbcaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fbcab: ret  */ FN_RET(0x004fbc4c); r_esp += 4; return;
L_004fbcac:; BB(0x004fbcac);
    /* 004fbcac: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbcb1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fbcb6u); f_008581c5();
    /* 004fbcb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbcb7: mov dword ptr [ebx + 0x104], 0 */ W32((u32)(r_ebx+0x104u), 0x0u);
    /* 004fbcc1: mov dword ptr [ebx + 0x100], eax */ W32((u32)(r_ebx+0x100u), r_eax);
    /* 004fbcc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fbcc8: ret  */ FN_RET(0x004fbc4c); r_esp += 4; return;
}

void f_004fbccc(void) /* sub_4FBCCC */
{
    FN_ENTER(0x004fbccc);
    /* 004fbccc: push dword ptr [0xa727bc] */ { u32 v = R32((u32)(0xa727bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbcd2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fbcd7u); f_00857e98();
    /* 004fbcd7: mov dword ptr [0xa727bc], 0 */ W32((u32)(0xa727bcu), 0x0u);
    /* 004fbce1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbce2: ret  */ FN_RET(0x004fbccc); r_esp += 4; return;
}

void f_004fbce4(void) /* sub_4FBCE4 */
{
    FN_ENTER(0x004fbce4);
    /* 004fbce4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbce5: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbce7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbce9: push 0x8d3370 */ { u32 v = 0x8d3370u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbcee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fbcf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbcf5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fbcfc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbcff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fbd02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004fbd05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004fbd08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004fbd0b: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004fbd17: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fbd1cu); f_005caba4();
    /* 004fbd1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbd1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fbd20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbd22: je 0x4fbd47 */ if (fZ) goto L_004fbd47;
L_004fbd24:; BB(0x004fbd24);
    /* 004fbd24: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004fbd2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbd32: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbd38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbd3b: call 0x4fbd58 */ r_esp -= 4; W32(r_esp, 0x4fbd40u); f_004fbd58();
    /* 004fbd40: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004fbd47:; BB(0x004fbd47);
    /* 004fbd47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbd4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fbd51: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbd53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbd54: ret  */ FN_RET(0x004fbce4); r_esp += 4; return;
}

void f_004fbd58(void) /* sub_4FBD58 */
{
    FN_ENTER(0x004fbd58);
    /* 004fbd58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd59: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbd5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd5d: push 0x8d33dc */ { u32 v = 0x8d33dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fbd68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fbd70: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbd73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fbd76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004fbd79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004fbd7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004fbd7f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbd82: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fbd85: call 0x4f7eec */ r_esp -= 4; W32(r_esp, 0x4fbd8au); f_004f7eec();
    /* 004fbd8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbd91: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbd94: mov dword ptr [edi], 0xafe2b8 */ W32((u32)(r_edi), 0xafe2b8u);
    /* 004fbd9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fbd9c: mov esi, dword ptr [0x9b9354] */ r_esi = R32((u32)(0x9b9354u));
    /* 004fbda2: mov byte ptr [0xa727c4], al */ W8((u32)(0xa727c4u), (u8)r_eax);
    /* 004fbda7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004fbdaa: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004fbdad: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbdaf: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 004fbdb5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fbdbau); f_008581c5();
    /* 004fbdba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbdbb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fbdbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbdc0: je 0x4fbee4 */ if (fZ) goto L_004fbee4;
L_004fbdc6:; BB(0x004fbdc6);
    /* 004fbdc6: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fbdcd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004fbdd4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbdd7: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x4fbddcu); f_004ff4c0();
    /* 004fbddc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbddf: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fbde6:; BB(0x004fbde6);
    /* 004fbde6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbde9: mov dword ptr [eax + 0x108], edx */ W32((u32)(r_eax+0x108u), r_edx);
    /* 004fbdef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbdf6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004fbdfd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbdff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fbe04u); f_008581c5();
    /* 004fbe04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbe05: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004fbe08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbe0a: je 0x4fbedd */ if (fZ) goto L_004fbedd;
L_004fbe10:; BB(0x004fbe10);
    /* 004fbe10: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004fbe17: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004fbe1e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fbe21: call 0x4ff798 */ r_esp -= 4; W32(r_esp, 0x4fbe26u); f_004ff798();
    /* 004fbe26: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fbe29: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004fbe30:; BB(0x004fbe30);
    /* 004fbe30: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbe33: mov dword ptr [eax + 0x10c], edx */ W32((u32)(r_eax+0x10cu), r_edx);
    /* 004fbe39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbe40: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004fbe47: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbe49: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fbe4eu); f_008581c5();
    /* 004fbe4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fbe4f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004fbe52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbe54: je 0x4fbed9 */ if (fZ) goto L_004fbed9;
L_004fbe5a:; BB(0x004fbe5a);
    /* 004fbe5a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004fbe61: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004fbe68: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fbe6b: call 0x4ff798 */ r_esp -= 4; W32(r_esp, 0x4fbe70u); f_004ff798();
    /* 004fbe70: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fbe73: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004fbe7a:; BB(0x004fbe7a);
    /* 004fbe7a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbe7d: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004fbe83: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbe8a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbe8c: push 0x91ed54 */ { u32 v = 0x91ed54u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbe91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fbe93: mov dword ptr [edx + 0x100], eax */ W32((u32)(r_edx+0x100u), r_eax);
    /* 004fbe99: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fbe9f: mov dword ptr [edx + 0x114], eax */ W32((u32)(r_edx+0x114u), r_eax);
    /* 004fbea5: mov dword ptr [edx + 0x118], eax */ W32((u32)(r_edx+0x118u), r_eax);
    /* 004fbeab: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fbeb1: add edx, 0x11c */ {  u32 a = r_edx; u32 b = 0x11cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fbeb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbeb8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fbebdu); f_00858900();
    /* 004fbebd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fbec0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbec3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fbec6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbec9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbecc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fbed3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbed5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbed6: ret 4 */ FN_RET(0x004fbd58); r_esp += 8; return;
L_004fbed9:; BB(0x004fbed9);
    /* 004fbed9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fbedb: jmp 0x4fbe7a */ goto L_004fbe7a;
L_004fbedd:; BB(0x004fbedd);
    /* 004fbedd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fbedf: jmp 0x4fbe30 */ goto L_004fbe30;
L_004fbee4:; BB(0x004fbee4);
    /* 004fbee4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fbee6: jmp 0x4fbde6 */ goto L_004fbde6;
}

void f_004fbeec(void) /* sub_4FBEEC */
{
    FN_ENTER(0x004fbeec);
    /* 004fbeec: movsx eax, byte ptr [0xa727c4] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa727c4u));
    /* 004fbef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbef5: je 0x4fbefd */ if (fZ) goto L_004fbefd;
L_004fbef7:; BB(0x004fbef7);
    /* 004fbef7: mov eax, 1 */ r_eax = 0x1u;
    /* 004fbefc: ret  */ FN_RET(0x004fbeec); r_esp += 4; return;
L_004fbefd:; BB(0x004fbefd);
    /* 004fbefd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbeff: ret  */ FN_RET(0x004fbeec); r_esp += 4; return;
}

void f_004fbf00(void) /* sub_4FBF00 */
{
    FN_ENTER(0x004fbf00);
    /* 004fbf00: mov eax, dword ptr [0xa727c0] */ r_eax = R32((u32)(0xa727c0u));
    /* 004fbf05: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fbf09: je 0x4fbf0e */ if (fZ) goto L_004fbf0e;
L_004fbf0b:; BB(0x004fbf0b);
    /* 004fbf0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fbf0d: ret  */ FN_RET(0x004fbf00); r_esp += 4; return;
L_004fbf0e:; BB(0x004fbf0e);
    /* 004fbf0e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fbf13: ret  */ FN_RET(0x004fbf00); r_esp += 4; return;
}

void f_004fbf14(void) /* sub_4FBF14 */
{
    FN_ENTER(0x004fbf14);
    /* 004fbf14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004fbf18: cmp eax, dword ptr [0xa727c0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa727c0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fbf1e: je 0x4fbf21 */ if (fZ) goto L_004fbf21;
L_004fbf20:; BB(0x004fbf20);
    /* 004fbf20: ret  */ FN_RET(0x004fbf14); r_esp += 4; return;
L_004fbf21:; BB(0x004fbf21);
    /* 004fbf21: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004fbf25: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fbf28: or eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fbf2c: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbf30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf31: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbf36u); f_0061cdb0();
    /* 004fbf36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fbf39: ret  */ FN_RET(0x004fbf14); r_esp += 4; return;
}

void f_004fbf3c(void) /* sub_4FBF3C */
{
    FN_ENTER(0x004fbf3c);
    /* 004fbf3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf3d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbf40: mov edi, ecx */ r_edi = r_ecx;
    /* 004fbf42: mov eax, dword ptr [edi + 0x114] */ r_eax = R32((u32)(r_edi+0x114u));
    /* 004fbf48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbf4a: jne 0x4fc167 */ if (!fZ) goto L_004fc167;
L_004fbf50:; BB(0x004fbf50);
    /* 004fbf50: push 0x91ed64 */ { u32 v = 0x91ed64u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf55: push 0x10004 */ { u32 v = 0x10004u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf5a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbf5fu); f_0061cdb0();
    /* 004fbf5f: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbf62: push 0x91e9d4 */ { u32 v = 0x91e9d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf67: push 0x10006 */ { u32 v = 0x10006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf6c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbf71u); f_0061cdb0();
    /* 004fbf71: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fbf74: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbf76: push 0x91e9e8 */ { u32 v = 0x91e9e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf7b: push 0x10007 */ { u32 v = 0x10007u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf80: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbf85u); f_0061cdb0();
    /* 004fbf85: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbf88: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fbf8b: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004fbf8e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fbf92: mov dword ptr [esp], 0x10008 */ W32((u32)(r_esp), 0x10008u);
    /* 004fbf99: mov dword ptr [esp + 4], 0x91e9fc */ W32((u32)(r_esp+0x4u), 0x91e9fcu);
    /* 004fbfa1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbfa6u); f_0061cdb0();
    /* 004fbfa6: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fbfa9: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004fbfac: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fbfb0: mov dword ptr [esp], 0x10009 */ W32((u32)(r_esp), 0x10009u);
    /* 004fbfb7: mov dword ptr [esp + 4], 0x91ea0c */ W32((u32)(r_esp+0x4u), 0x91ea0cu);
    /* 004fbfbf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbfc4u); f_0061cdb0();
    /* 004fbfc4: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fbfc7: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 004fbfca: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fbfce: mov dword ptr [esp], 0x1000a */ W32((u32)(r_esp), 0x1000au);
    /* 004fbfd5: mov dword ptr [esp + 4], 0x91ea1c */ W32((u32)(r_esp+0x4u), 0x91ea1cu);
    /* 004fbfdd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbfe2u); f_0061cdb0();
    /* 004fbfe2: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fbfe5: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbfe8: push 0x91ea2c */ { u32 v = 0x91ea2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbfed: push 0x1000b */ { u32 v = 0x1000bu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbff2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fbff7u); f_0061cdb0();
    /* 004fbff7: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fbffa: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fbffd: push 0x91ea3c */ { u32 v = 0x91ea3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc002: push 0x1000c */ { u32 v = 0x1000cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc007: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc00cu); f_0061cdb0();
    /* 004fc00c: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004fc00f: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc012: push 0x91ea4c */ { u32 v = 0x91ea4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc017: push 0x1000d */ { u32 v = 0x1000du; r_esp -= 4; W32(r_esp, v); }
    /* 004fc01c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc021u); f_0061cdb0();
    /* 004fc021: push dword ptr [edi + 0x100] */ { u32 v = R32((u32)(r_edi+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc027: push 0x91ea5c */ { u32 v = 0x91ea5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc02c: push 0x1000e */ { u32 v = 0x1000eu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc031: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc036u); f_0061cdb0();
    /* 004fc036: push dword ptr [edi + 0x104] */ { u32 v = R32((u32)(r_edi+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc03c: push 0x91ea6c */ { u32 v = 0x91ea6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc041: push 0x1000f */ { u32 v = 0x1000fu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc046: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc04bu); f_0061cdb0();
    /* 004fc04b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc04e: mov eax, dword ptr [0xa727c0] */ r_eax = R32((u32)(0xa727c0u));
    /* 004fc053: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc055: je 0x4fc306 */ if (fZ) goto L_004fc306;
L_004fc05b:; BB(0x004fc05b);
    /* 004fc05b: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 004fc061: cmp edx, dword ptr [edi + 0xfc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xfcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc067: je 0x4fc087 */ if (fZ) goto L_004fc087;
L_004fc069:; BB(0x004fc069);
    /* 004fc069: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc06b: je 0x4fc087 */ if (fZ) goto L_004fc087;
L_004fc06d:; BB(0x004fc06d);
    /* 004fc06d: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004fc071: mov dword ptr [0xa727c0], 0 */ W32((u32)(0xa727c0u), 0x0u);
    /* 004fc07b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004fc081: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 004fc085: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fc087:; BB(0x004fc087);
    /* 004fc087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc089: je 0x4fc110 */ if (fZ) goto L_004fc110;
L_004fc08f:; BB(0x004fc08f);
    /* 004fc08f: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 004fc095: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004fc098: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 004fc09e: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 004fc0a1: mov edx, dword ptr [edi + 0xc4] */ r_edx = R32((u32)(r_edi+0xc4u));
    /* 004fc0a7: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 004fc0aa: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 004fc0b0: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 004fc0b3: mov edx, dword ptr [edi + 0xcc] */ r_edx = R32((u32)(r_edi+0xccu));
    /* 004fc0b9: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 004fc0bc: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 004fc0c2: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 004fc0c5: mov edx, dword ptr [edi + 0xd4] */ r_edx = R32((u32)(r_edi+0xd4u));
    /* 004fc0cb: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 004fc0ce: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 004fc0d4: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004fc0d7: mov edx, dword ptr [edi + 0xdc] */ r_edx = R32((u32)(r_edi+0xdcu));
    /* 004fc0dd: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 004fc0e0: mov edx, dword ptr [edi + 0xe0] */ r_edx = R32((u32)(r_edi+0xe0u));
    /* 004fc0e6: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 004fc0ec: mov edx, dword ptr [0xa727c0] */ r_edx = R32((u32)(0xa727c0u));
    /* 004fc0f2: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 004fc0f8: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 004fc0fe: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 004fc104: mov edx, dword ptr [0xa727c0] */ r_edx = R32((u32)(0xa727c0u));
    /* 004fc10a: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
L_004fc110:; BB(0x004fc110);
    /* 004fc110: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 004fc116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc118: je 0x4fc2ef */ if (fZ) goto L_004fc2ef;
L_004fc11e:; BB(0x004fc11e);
    /* 004fc11e: push 0x91eb3c */ { u32 v = 0x91eb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc123: push 0x10011 */ { u32 v = 0x10011u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc128: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc12du); f_0061cdb0();
    /* 004fc12d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fc130:; BB(0x004fc130);
    /* 004fc130: push dword ptr [edi + 0xf4] */ { u32 v = R32((u32)(r_edi+0xf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc136: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 004fc13c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fc13f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc140: push 0x91eb4c */ { u32 v = 0x91eb4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc145: push 0x10012 */ { u32 v = 0x10012u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc14a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc14fu); f_0061cdb0();
    /* 004fc14f: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc152: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc155: push 0x91eb64 */ { u32 v = 0x91eb64u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc15a: push 0x10013 */ { u32 v = 0x10013u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc15f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc164u); f_0061cdb0();
    /* 004fc164: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fc167:; BB(0x004fc167);
    /* 004fc167: mov ecx, edi */ r_ecx = r_edi;
    /* 004fc169: call 0x4fc370 */ r_esp -= 4; W32(r_esp, 0x4fc16eu); f_004fc370();
    /* 004fc16e: mov eax, dword ptr [edi + 0x114] */ r_eax = R32((u32)(r_edi+0x114u));
    /* 004fc174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc176: jne 0x4fc2ea */ if (!fZ) goto L_004fc2ea;
L_004fc17c:; BB(0x004fc17c);
    /* 004fc17c: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc182: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004fc185: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004fc188: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc18a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc18c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc18e: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004fc195: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4fc19au); f_007c1180();
    /* 004fc19a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc19c: jne 0x4fc1a9 */ if (!fZ) goto L_004fc1a9;
L_004fc19e:; BB(0x004fc19e);
    /* 004fc19e: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fc1a4: jmp 0x4fc26a */ goto L_004fc26a;
L_004fc1a9:; BB(0x004fc1a9);
    /* 004fc1a9: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc1af: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004fc1b2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004fc1b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc1b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc1b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc1bb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004fc1c2: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4fc1c7u); f_007c1180();
    /* 004fc1c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc1c9: jne 0x4fc1d6 */ if (!fZ) goto L_004fc1d6;
L_004fc1cb:; BB(0x004fc1cb);
    /* 004fc1cb: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fc1d1: jmp 0x4fc26a */ goto L_004fc26a;
L_004fc1d6:; BB(0x004fc1d6);
    /* 004fc1d6: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc1dc: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004fc1df: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004fc1e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc1e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc1e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc1e8: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004fc1ef: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4fc1f4u); f_007c1180();
    /* 004fc1f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc1f6: jne 0x4fc200 */ if (!fZ) goto L_004fc200;
L_004fc1f8:; BB(0x004fc1f8);
    /* 004fc1f8: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fc1fe: jmp 0x4fc26a */ goto L_004fc26a;
L_004fc200:; BB(0x004fc200);
    /* 004fc200: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc202: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc204: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004fc207: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004fc20a: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc210: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc212: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc214: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc216: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004fc21d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fc222u); f_007c09fc();
    /* 004fc222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc224: je 0x4fc22d */ if (fZ) goto L_004fc22d;
L_004fc226:; BB(0x004fc226);
    /* 004fc226: add dword ptr [edi + 0x9c], 1 */ { u32 ad = (u32)(r_edi+0x9cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004fc22d:; BB(0x004fc22d);
    /* 004fc22d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc22f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc231: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004fc234: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004fc237: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc23d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc23f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc241: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc243: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004fc24a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fc24fu); f_007c09fc();
    /* 004fc24f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc251: je 0x4fc264 */ if (fZ) goto L_004fc264;
L_004fc253:; BB(0x004fc253);
    /* 004fc253: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fc259: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fc25c: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 004fc262: jmp 0x4fc26a */ goto L_004fc26a;
L_004fc264:; BB(0x004fc264);
    /* 004fc264: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
L_004fc26a:; BB(0x004fc26a);
    /* 004fc26a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc26d: jle 0x4fc27b */ if ((fZ||fS!=fO)) goto L_004fc27b;
L_004fc26f:; BB(0x004fc26f);
    /* 004fc26f: mov dword ptr [edi + 0x9c], 0 */ W32((u32)(r_edi+0x9cu), 0x0u);
    /* 004fc279: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fc27b:; BB(0x004fc27b);
    /* 004fc27b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc27d: jge 0x4fc289 */ if ((fS==fO)) goto L_004fc289;
L_004fc27f:; BB(0x004fc27f);
    /* 004fc27f: mov dword ptr [edi + 0x9c], 0xb */ W32((u32)(r_edi+0x9cu), 0xbu);
L_004fc289:; BB(0x004fc289);
    /* 004fc289: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004fc28c: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 004fc28f: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 004fc295: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004fc298: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 004fc29e: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 004fc2a4: mov ecx, edi */ r_ecx = r_edi;
    /* 004fc2a6: call 0x4fed54 */ r_esp -= 4; W32(r_esp, 0x4fc2abu); f_004fed54();
    /* 004fc2ab: mov ecx, edi */ r_ecx = r_edi;
    /* 004fc2ad: call 0x4fee34 */ r_esp -= 4; W32(r_esp, 0x4fc2b2u); f_004fee34();
    /* 004fc2b2: mov ecx, edi */ r_ecx = r_edi;
    /* 004fc2b4: call 0x4fef1c */ r_esp -= 4; W32(r_esp, 0x4fc2b9u); f_004fef1c();
    /* 004fc2b9: mov ecx, edi */ r_ecx = r_edi;
    /* 004fc2bb: call 0x4feffc */ r_esp -= 4; W32(r_esp, 0x4fc2c0u); f_004feffc();
    /* 004fc2c0: mov ecx, dword ptr [0xa727c0] */ r_ecx = R32((u32)(0xa727c0u));
    /* 004fc2c6: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 004fc2cc: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 004fc2d2: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004fc2d5: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 004fc2db: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004fc2de: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004fc2e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc2e3: je 0x4fc2ea */ if (fZ) goto L_004fc2ea;
L_004fc2e5:; BB(0x004fc2e5);
    /* 004fc2e5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc2eau); f_0061cdb0();
L_004fc2ea:; BB(0x004fc2ea);
    /* 004fc2ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fc2ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fc2ee: ret  */ FN_RET(0x004fbf3c); r_esp += 4; return;
L_004fc2ef:; BB(0x004fc2ef);
    /* 004fc2ef: push 0x91eb3c */ { u32 v = 0x91eb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc2f4: push 0x10011 */ { u32 v = 0x10011u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc2f9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fc2feu); f_0061cdb0();
    /* 004fc2fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc301: jmp 0x4fc130 */ goto L_004fc130;
L_004fc306:; BB(0x004fc306);
    /* 004fc306: lea eax, [edi + 0xb0] */ r_eax = (u32)(r_edi+0xb0u);
    /* 004fc30c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc30d: mov ecx, edi */ r_ecx = r_edi;
    /* 004fc30f: call 0x4fc320 */ r_esp -= 4; W32(r_esp, 0x4fc314u); f_004fc320();
    /* 004fc314: mov dword ptr [0xa727c0], eax */ W32((u32)(0xa727c0u), r_eax);
    /* 004fc319: jmp 0x4fc05b */ goto L_004fc05b;
}

