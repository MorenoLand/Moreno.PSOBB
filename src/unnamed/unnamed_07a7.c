#include "protos.h"

void f_007a7080(void) /* sub_7A7080 */
{
    FN_ENTER(0x007a7080);
    /* 007a7080: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7085u); f_00807ac0();
    /* 007a7085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7086: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a708bu); f_00815584();
    /* 007a708b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a708c: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7091u); f_00781fc4();
    /* 007a7091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7093: je 0x7a7098 */ if (fZ) goto L_007a7098;
L_007a7095:; BB(0x007a7095);
    /* 007a7095: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7097: ret  */ FN_RET(0x007a7080); r_esp += 4; return;
L_007a7098:; BB(0x007a7098);
    /* 007a7098: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a709du); f_00793f64();
    /* 007a709d: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a70a2u); f_00782098();
    /* 007a70a2: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a70a7: call 0x508a70 */ r_esp -= 4; W32(r_esp, 0x7a70acu); f_00508a70();
    /* 007a70ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a70ad: call 0x44bb08 */ r_esp -= 4; W32(r_esp, 0x7a70b2u); f_0044bb08();
    /* 007a70b2: mov eax, 1 */ r_eax = 0x1u;
    /* 007a70b7: ret  */ FN_RET(0x007a7080); r_esp += 4; return;
}

void f_007a70b8(void) /* sub_7A70B8 */
{
    FN_ENTER(0x007a70b8);
    /* 007a70b8: call 0x508a50 */ r_esp -= 4; W32(r_esp, 0x7a70bdu); f_00508a50();
    /* 007a70bd: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a70c2u); f_00815578();
    /* 007a70c2: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a70c7u); f_00815434();
    /* 007a70c7: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7a70ccu); f_008153a4();
    /* 007a70cc: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a70d1u); f_00782048();
    /* 007a70d1: ret  */ FN_RET(0x007a70b8); r_esp += 4; return;
}

void f_007a70d4(void) /* sub_7A70D4 */
{
    FN_ENTER(0x007a70d4);
    /* 007a70d4: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a70d7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a70dcu); f_00807ac0();
    /* 007a70dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a70dd: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a70e2u); f_00815584();
    /* 007a70e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a70e3: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a70e8u); f_00781fc4();
    /* 007a70e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a70ea: je 0x7a70f2 */ if (fZ) goto L_007a70f2;
L_007a70ec:; BB(0x007a70ec);
    /* 007a70ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a70ee: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a70f1: ret  */ FN_RET(0x007a70d4); r_esp += 4; return;
L_007a70f2:; BB(0x007a70f2);
    /* 007a70f2: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a70f7: call 0x508a70 */ r_esp -= 4; W32(r_esp, 0x7a70fcu); f_00508a70();
    /* 007a70fc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a70fe: push 0x9ff908 */ { u32 v = 0x9ff908u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7103: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a7108u); f_0078b184();
    /* 007a7108: mov dword ptr [esp + 0xc], 0xbeeb851f */ W32((u32)(r_esp+0xcu), 0xbeeb851fu);
    /* 007a7110: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007a7114: mov dword ptr [esp + 0x10], 0x3f6147ae */ W32((u32)(r_esp+0x10u), 0x3f6147aeu);
    /* 007a711c: mov dword ptr [esp + 0x14], 0xbe051eb8 */ W32((u32)(r_esp+0x14u), 0xbe051eb8u);
    /* 007a7124: mov dword ptr [esp + 0x24], 0x3f800000 */ W32((u32)(r_esp+0x24u), 0x3f800000u);
    /* 007a712c: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 007a7134: mov dword ptr [esp + 0x2c], 0x3e19999a */ W32((u32)(r_esp+0x2cu), 0x3e19999au);
    /* 007a713c: mov dword ptr [esp + 0x40], 0x3f800000 */ W32((u32)(r_esp+0x40u), 0x3f800000u);
    /* 007a7144: mov dword ptr [esp + 0x44], 0x3dcccccd */ W32((u32)(r_esp+0x44u), 0x3dcccccdu);
    /* 007a714c: mov dword ptr [esp + 0x48], 0x3e75c28f */ W32((u32)(r_esp+0x48u), 0x3e75c28fu);
    /* 007a7154: mov dword ptr [esp + 0x4c], 0x3ecccccd */ W32((u32)(r_esp+0x4cu), 0x3ecccccdu);
    /* 007a715c: mov dword ptr [esp + 0x30], 0x3f800000 */ W32((u32)(r_esp+0x30u), 0x3f800000u);
    /* 007a7164: mov dword ptr [esp + 0x34], 0x3f23d70a */ W32((u32)(r_esp+0x34u), 0x3f23d70au);
    /* 007a716c: mov dword ptr [esp + 0x38], 0x3f333333 */ W32((u32)(r_esp+0x38u), 0x3f333333u);
    /* 007a7174: mov dword ptr [esp + 0x3c], 0x3f3d70a4 */ W32((u32)(r_esp+0x3cu), 0x3f3d70a4u);
    /* 007a717c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a717d: call 0x794034 */ r_esp -= 4; W32(r_esp, 0x7a7182u); f_00794034();
    /* 007a7182: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a7185: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a718au); f_00782098();
    /* 007a718a: call 0x663c2c */ r_esp -= 4; W32(r_esp, 0x7a718fu); f_00663c2c();
    /* 007a718f: call 0x4ab724 */ r_esp -= 4; W32(r_esp, 0x7a7194u); f_004ab724();
    /* 007a7194: push 0x97936c */ { u32 v = 0x97936cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7199: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x7a719eu); f_00814afc();
    /* 007a719e: mov eax, 1 */ r_eax = 0x1u;
    /* 007a71a3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a71a6: ret  */ FN_RET(0x007a70d4); r_esp += 4; return;
}

void f_007a71a8(void) /* sub_7A71A8 */
{
    FN_ENTER(0x007a71a8);
    /* 007a71a8: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a71adu); f_00815578();
    /* 007a71ad: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a71b2u); f_00815434();
    /* 007a71b2: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7a71b7u); f_008153a4();
    /* 007a71b7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a71b9: push 0x9ff908 */ { u32 v = 0x9ff908u; r_esp -= 4; W32(r_esp, v); }
    /* 007a71be: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a71c3u); f_0078b0a0();
    /* 007a71c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a71c6: call 0x508a50 */ r_esp -= 4; W32(r_esp, 0x7a71cbu); f_00508a50();
    /* 007a71cb: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a71d0u); f_00782048();
    /* 007a71d0: ret  */ FN_RET(0x007a71a8); r_esp += 4; return;
}

void f_007a71d4(void) /* sub_7A71D4 */
{
    FN_ENTER(0x007a71d4);
    /* 007a71d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a71d5: mov ebp, esp */ r_ebp = r_esp;
    /* 007a71d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a71d9: push 0x8f5b9c */ { u32 v = 0x8f5b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a71de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a71e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a71e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a71ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a71ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a71f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a71f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a71f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a71fb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7200u); f_00807ac0();
    /* 007a7200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7201: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a7206u); f_00815584();
    /* 007a7206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7207: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a720cu); f_00781fc4();
    /* 007a720c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a720e: je 0x7a7220 */ if (fZ) goto L_007a7220;
L_007a7210:; BB(0x007a7210);
    /* 007a7210: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7212: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7215: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a721c: mov esp, ebp */ r_esp = r_ebp;
    /* 007a721e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a721f: ret  */ FN_RET(0x007a71d4); r_esp += 4; return;
L_007a7220:; BB(0x007a7220);
    /* 007a7220: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a7225u); f_00793f64();
    /* 007a7225: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a722au); f_00782098();
    /* 007a722a: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x7a722fu); f_00505a20();
    /* 007a722f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7231: je 0x7a7273 */ if (fZ) goto L_007a7273;
L_007a7233:; BB(0x007a7233);
    /* 007a7233: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a723a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a723c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a7241u); f_005caba4();
    /* 007a7241: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7242: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a7245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7247: je 0x7a726c */ if (fZ) goto L_007a726c;
L_007a7249:; BB(0x007a7249);
    /* 007a7249: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a7250: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a7257: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a725d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7260: call 0x505c74 */ r_esp -= 4; W32(r_esp, 0x7a7265u); f_00505c74();
    /* 007a7265: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a726c:; BB(0x007a726c);
    /* 007a726c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_007a7273:; BB(0x007a7273);
    /* 007a7273: call 0x4872e4 */ r_esp -= 4; W32(r_esp, 0x7a7278u); f_004872e4();
    /* 007a7278: mov eax, 1 */ r_eax = 0x1u;
    /* 007a727d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7280: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7287: mov esp, ebp */ r_esp = r_ebp;
    /* 007a7289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a728a: ret  */ FN_RET(0x007a71d4); r_esp += 4; return;
}

void f_007a728c(void) /* sub_7A728C */
{
    FN_ENTER(0x007a728c);
    /* 007a728c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a728d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a728f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7291: push 0x8f5bc4 */ { u32 v = 0x8f5bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7296: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a729c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a729d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a72a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a72a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a72aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a72ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a72b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a72b3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a72b8u); f_00807ac0();
    /* 007a72b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a72b9: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a72beu); f_00815584();
    /* 007a72be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a72bf: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a72c4u); f_00781fc4();
    /* 007a72c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a72c6: je 0x7a72d8 */ if (fZ) goto L_007a72d8;
L_007a72c8:; BB(0x007a72c8);
    /* 007a72c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a72ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a72cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a72d4: mov esp, ebp */ r_esp = r_ebp;
    /* 007a72d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a72d7: ret  */ FN_RET(0x007a728c); r_esp += 4; return;
L_007a72d8:; BB(0x007a72d8);
    /* 007a72d8: call 0x4be1c8 */ r_esp -= 4; W32(r_esp, 0x7a72ddu); f_004be1c8();
    /* 007a72dd: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a72e2u); f_00793f64();
    /* 007a72e2: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a72e7u); f_00782098();
    /* 007a72e7: call 0x4be0d0 */ r_esp -= 4; W32(r_esp, 0x7a72ecu); f_004be0d0();
    /* 007a72ec: push 0x979334 */ { u32 v = 0x979334u; r_esp -= 4; W32(r_esp, v); }
    /* 007a72f1: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x7a72f6u); f_00814afc();
    /* 007a72f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a72f7: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x7a72fcu); f_00505a20();
    /* 007a72fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a72fe: je 0x7a7339 */ if (fZ) goto L_007a7339;
L_007a7300:; BB(0x007a7300);
    /* 007a7300: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a7307: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7309: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a730eu); f_005caba4();
    /* 007a730e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a730f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a7312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7314: je 0x7a7339 */ if (fZ) goto L_007a7339;
L_007a7316:; BB(0x007a7316);
    /* 007a7316: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a731d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a7324: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a732a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a732d: call 0x505c74 */ r_esp -= 4; W32(r_esp, 0x7a7332u); f_00505c74();
    /* 007a7332: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a7339:; BB(0x007a7339);
    /* 007a7339: mov eax, 1 */ r_eax = 0x1u;
    /* 007a733e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7341: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7348: mov esp, ebp */ r_esp = r_ebp;
    /* 007a734a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a734b: ret  */ FN_RET(0x007a728c); r_esp += 4; return;
}

void f_007a734c(void) /* sub_7A734C */
{
    FN_ENTER(0x007a734c);
    /* 007a734c: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a7351u); f_00815578();
    /* 007a7351: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a7356u); f_00815434();
    /* 007a7356: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7a735bu); f_008153a4();
    /* 007a735b: call 0x4be0e0 */ r_esp -= 4; W32(r_esp, 0x7a7360u); f_004be0e0();
    /* 007a7360: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a7365u); f_00782048();
    /* 007a7365: ret  */ FN_RET(0x007a734c); r_esp += 4; return;
}

void f_007a7368(void) /* sub_7A7368 */
{
    FN_ENTER(0x007a7368);
    /* 007a7368: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a736du); f_00807ac0();
    /* 007a736d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a736e: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a7373u); f_00815584();
    /* 007a7373: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7374: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7379u); f_00781fc4();
    /* 007a7379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a737b: je 0x7a7380 */ if (fZ) goto L_007a7380;
L_007a737d:; BB(0x007a737d);
    /* 007a737d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a737f: ret  */ FN_RET(0x007a7368); r_esp += 4; return;
L_007a7380:; BB(0x007a7380);
    /* 007a7380: call 0x4cfc84 */ r_esp -= 4; W32(r_esp, 0x7a7385u); f_004cfc84();
    /* 007a7385: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a738au); f_00793f64();
    /* 007a738a: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a738fu); f_00782098();
    /* 007a738f: call 0x4cfb24 */ r_esp -= 4; W32(r_esp, 0x7a7394u); f_004cfb24();
    /* 007a7394: push 0x979350 */ { u32 v = 0x979350u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7399: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x7a739eu); f_00814afc();
    /* 007a739e: mov eax, 1 */ r_eax = 0x1u;
    /* 007a73a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a73a4: ret  */ FN_RET(0x007a7368); r_esp += 4; return;
}

void f_007a73a8(void) /* sub_7A73A8 */
{
    FN_ENTER(0x007a73a8);
    /* 007a73a8: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a73adu); f_00815578();
    /* 007a73ad: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a73b2u); f_00815434();
    /* 007a73b2: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7a73b7u); f_008153a4();
    /* 007a73b7: call 0x4cfb14 */ r_esp -= 4; W32(r_esp, 0x7a73bcu); f_004cfb14();
    /* 007a73bc: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a73c1u); f_00782048();
    /* 007a73c1: ret  */ FN_RET(0x007a73a8); r_esp += 4; return;
}

void f_007a73c4(void) /* sub_7A73C4 */
{
    FN_ENTER(0x007a73c4);
    /* 007a73c4: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a73c9u); f_00807ac0();
    /* 007a73c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a73ca: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a73cfu); f_00815584();
    /* 007a73cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a73d0: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a73d5u); f_00781fc4();
    /* 007a73d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a73d7: je 0x7a73dc */ if (fZ) goto L_007a73dc;
L_007a73d9:; BB(0x007a73d9);
    /* 007a73d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a73db: ret  */ FN_RET(0x007a73c4); r_esp += 4; return;
L_007a73dc:; BB(0x007a73dc);
    /* 007a73dc: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a73e1u); f_00793f64();
    /* 007a73e1: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a73e6u); f_00782098();
    /* 007a73e6: mov eax, 1 */ r_eax = 0x1u;
    /* 007a73eb: ret  */ FN_RET(0x007a73c4); r_esp += 4; return;
}

void f_007a73ec(void) /* sub_7A73EC */
{
    FN_ENTER(0x007a73ec);
    /* 007a73ec: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a73f1u); f_00815578();
    /* 007a73f1: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a73f6u); f_00815434();
    /* 007a73f6: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7a73fbu); f_008153a4();
    /* 007a73fb: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a7400u); f_00782048();
    /* 007a7400: ret  */ FN_RET(0x007a73ec); r_esp += 4; return;
}

void f_007a7404(void) /* sub_7A7404 */
{
    FN_ENTER(0x007a7404);
    /* 007a7404: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7409u); f_00807ac0();
    /* 007a7409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a740a: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a740fu); f_00815584();
    /* 007a740f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7410: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7415u); f_00781fc4();
    /* 007a7415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7417: je 0x7a741c */ if (fZ) goto L_007a741c;
L_007a7419:; BB(0x007a7419);
    /* 007a7419: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a741b: ret  */ FN_RET(0x007a7404); r_esp += 4; return;
L_007a741c:; BB(0x007a741c);
    /* 007a741c: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a7421u); f_00793f64();
    /* 007a7421: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7426u); f_00782098();
    /* 007a7426: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7428: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a742du); f_00814c7c();
    /* 007a742d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a742e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a7433u); f_007a61a4();
    /* 007a7433: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7436: je 0x7a7446 */ if (fZ) goto L_007a7446;
L_007a7438:; BB(0x007a7438);
    /* 007a7438: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 007a743a: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a743fu); f_006bb100();
    /* 007a743f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a7440:; BB(0x007a7440);
    /* 007a7440: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7445: ret  */ FN_RET(0x007a7404); r_esp += 4; return;
L_007a7446:; BB(0x007a7446);
    /* 007a7446: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007a744b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a744d: jne 0x7a7440 */ if (!fZ) goto L_007a7440;
L_007a744f:; BB(0x007a744f);
    /* 007a744f: jmp 0x7a7438 */ goto L_007a7438;
}

void f_007a7454(void) /* sub_7A7454 */
{
    FN_ENTER(0x007a7454);
    /* 007a7454: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7459u); f_00807ac0();
    /* 007a7459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a745a: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a745fu); f_00815584();
    /* 007a745f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7460: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7465u); f_00781fc4();
    /* 007a7465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7467: je 0x7a746c */ if (fZ) goto L_007a746c;
L_007a7469:; BB(0x007a7469);
    /* 007a7469: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a746b: ret  */ FN_RET(0x007a7454); r_esp += 4; return;
L_007a746c:; BB(0x007a746c);
    /* 007a746c: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a7471u); f_00793f64();
    /* 007a7471: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7476u); f_00782098();
    /* 007a7476: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7478: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a747du); f_00814c7c();
    /* 007a747d: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7482: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7483: ret  */ FN_RET(0x007a7454); r_esp += 4; return;
}

void f_007a7484(void) /* sub_7A7484 */
{
    FN_ENTER(0x007a7484);
    /* 007a7484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7485: mov ebp, esp */ r_ebp = r_esp;
    /* 007a7487: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7489: push 0x8f5c06 */ { u32 v = 0x8f5c06u; r_esp -= 4; W32(r_esp, v); }
    /* 007a748e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a7494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7495: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a749c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a749f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a74a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a74a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a74a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a74ab: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a74b0u); f_00807ac0();
    /* 007a74b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a74b1: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a74b6u); f_00815584();
    /* 007a74b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a74b7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a74bcu); f_0061cdb0();
    /* 007a74bc: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a74c1u); f_00781fc4();
    /* 007a74c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a74c3: je 0x7a74d5 */ if (fZ) goto L_007a74d5;
L_007a74c5:; BB(0x007a74c5);
    /* 007a74c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a74c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a74ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a74d1: mov esp, ebp */ r_esp = r_ebp;
    /* 007a74d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a74d4: ret  */ FN_RET(0x007a7484); r_esp += 4; return;
L_007a74d5:; BB(0x007a74d5);
    /* 007a74d5: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a74dau); f_00793f64();
    /* 007a74da: call 0x6d7e58 */ r_esp -= 4; W32(r_esp, 0x7a74dfu); f_006d7e58();
    /* 007a74df: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 007a74e1: push 0x9ff920 */ { u32 v = 0x9ff920u; r_esp -= 4; W32(r_esp, v); }
    /* 007a74e6: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a74ebu); f_0078b184();
    /* 007a74eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a74ee: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 007a74f3: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x7a74f8u); f_006a92e8();
    /* 007a74f8: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a74fdu); f_00782098();
    /* 007a74fd: call 0x6428bc */ r_esp -= 4; W32(r_esp, 0x7a7502u); f_006428bc();
    /* 007a7502: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7507u); f_00807ac0();
    /* 007a7507: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7509: je 0x7a7510 */ if (fZ) goto L_007a7510;
L_007a750b:; BB(0x007a750b);
    /* 007a750b: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a750e: jne 0x7a7550 */ if (!fZ) goto L_007a7550;
L_007a7510:; BB(0x007a7510);
    /* 007a7510: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007a7517: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7519: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a751eu); f_005caba4();
    /* 007a751e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a751f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007a7522: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7524: je 0x7a7549 */ if (fZ) goto L_007a7549;
L_007a7526:; BB(0x007a7526);
    /* 007a7526: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007a752d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a7534: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a753a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007a753d: call 0x6454a8 */ r_esp -= 4; W32(r_esp, 0x7a7542u); f_006454a8();
    /* 007a7542: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007a7549:; BB(0x007a7549);
    /* 007a7549: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_007a7550:; BB(0x007a7550);
    /* 007a7550: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a7557: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7559: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a755eu); f_005caba4();
    /* 007a755e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a755f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a7562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7564: je 0x7a7589 */ if (fZ) goto L_007a7589;
L_007a7566:; BB(0x007a7566);
    /* 007a7566: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a756d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007a7574: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a757a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a757d: call 0x6b0abc */ r_esp -= 4; W32(r_esp, 0x7a7582u); f_006b0abc();
    /* 007a7582: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a7589:; BB(0x007a7589);
    /* 007a7589: mov eax, 1 */ r_eax = 0x1u;
    /* 007a758e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7591: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7598: mov esp, ebp */ r_esp = r_ebp;
    /* 007a759a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a759b: ret  */ FN_RET(0x007a7484); r_esp += 4; return;
}

void f_007a759c(void) /* sub_7A759C */
{
    FN_ENTER(0x007a759c);
    /* 007a759c: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a75a1u); f_00815578();
    /* 007a75a1: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a75a6u); f_00815434();
    /* 007a75a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a75abu); f_0061cdb0();
    /* 007a75ab: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 007a75ad: push 0x9ff920 */ { u32 v = 0x9ff920u; r_esp -= 4; W32(r_esp, v); }
    /* 007a75b2: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a75b7u); f_0078b0a0();
    /* 007a75b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a75ba: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a75bfu); f_00782048();
    /* 007a75bf: ret  */ FN_RET(0x007a759c); r_esp += 4; return;
}

void f_007a75c0(void) /* sub_7A75C0 */
{
    FN_ENTER(0x007a75c0);
    /* 007a75c0: mov dword ptr [0xaab3b4], 0x3f800000 */ W32((u32)(0xaab3b4u), 0x3f800000u);
    /* 007a75ca: mov dword ptr [0xaab3b8], 0x41000000 */ W32((u32)(0xaab3b8u), 0x41000000u);
    /* 007a75d4: mov dword ptr [0xaab3bc], 0x3fc00000 */ W32((u32)(0xaab3bcu), 0x3fc00000u);
    /* 007a75de: ret  */ FN_RET(0x007a75c0); r_esp += 4; return;
}

void f_007a75e0(void) /* sub_7A75E0 */
{
    FN_ENTER(0x007a75e0);
    /* 007a75e0: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a75e5u); f_00807ac0();
    /* 007a75e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a75e6: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a75ebu); f_00815584();
    /* 007a75eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a75ec: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a75f1u); f_00781fc4();
    /* 007a75f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a75f3: je 0x7a75f8 */ if (fZ) goto L_007a75f8;
L_007a75f5:; BB(0x007a75f5);
    /* 007a75f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a75f7: ret  */ FN_RET(0x007a75e0); r_esp += 4; return;
L_007a75f8:; BB(0x007a75f8);
    /* 007a75f8: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a75fdu); f_00793f64();
    /* 007a75fd: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7602u); f_00782098();
    /* 007a7602: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007a7604: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7609u); f_00814c7c();
    /* 007a7609: mov eax, 1 */ r_eax = 0x1u;
    /* 007a760e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a760f: ret  */ FN_RET(0x007a75e0); r_esp += 4; return;
}

void f_007a7610(void) /* sub_7A7610 */
{
    FN_ENTER(0x007a7610);
    /* 007a7610: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7615u); f_00807ac0();
    /* 007a7615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7616: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a761bu); f_00815584();
    /* 007a761b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a761c: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7621u); f_00781fc4();
    /* 007a7621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7623: je 0x7a7628 */ if (fZ) goto L_007a7628;
L_007a7625:; BB(0x007a7625);
    /* 007a7625: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7627: ret  */ FN_RET(0x007a7610); r_esp += 4; return;
L_007a7628:; BB(0x007a7628);
    /* 007a7628: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a762du); f_00793f64();
    /* 007a762d: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7632u); f_00782098();
    /* 007a7632: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7634: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7639u); f_00814c7c();
    /* 007a7639: mov eax, 1 */ r_eax = 0x1u;
    /* 007a763e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a763f: ret  */ FN_RET(0x007a7610); r_esp += 4; return;
}

void f_007a7640(void) /* sub_7A7640 */
{
    FN_ENTER(0x007a7640);
    /* 007a7640: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7645u); f_00807ac0();
    /* 007a7645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7646: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a764bu); f_00815584();
    /* 007a764b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a764c: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7651u); f_00781fc4();
    /* 007a7651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7653: je 0x7a7658 */ if (fZ) goto L_007a7658;
L_007a7655:; BB(0x007a7655);
    /* 007a7655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7657: ret  */ FN_RET(0x007a7640); r_esp += 4; return;
L_007a7658:; BB(0x007a7658);
    /* 007a7658: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a765du); f_00793f64();
    /* 007a765d: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7662u); f_00782098();
    /* 007a7662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7664: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7669u); f_00814c7c();
    /* 007a7669: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 007a766b: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a7670u); f_006bb100();
    /* 007a7670: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7675: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a7678: ret  */ FN_RET(0x007a7640); r_esp += 4; return;
}

void f_007a767c(void) /* sub_7A767C */
{
    FN_ENTER(0x007a767c);
    /* 007a767c: mov dword ptr [0xaab3c0], 0x3f800000 */ W32((u32)(0xaab3c0u), 0x3f800000u);
    /* 007a7686: mov dword ptr [0xaab3c4], 0x41000000 */ W32((u32)(0xaab3c4u), 0x41000000u);
    /* 007a7690: mov dword ptr [0xaab3c8], 0x3fc00000 */ W32((u32)(0xaab3c8u), 0x3fc00000u);
    /* 007a769a: ret  */ FN_RET(0x007a767c); r_esp += 4; return;
}

void f_007a769c(void) /* sub_7A769C */
{
    FN_ENTER(0x007a769c);
    /* 007a769c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a76a1u); f_00807ac0();
    /* 007a76a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a76a2: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a76a7u); f_00815584();
    /* 007a76a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a76a8: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a76adu); f_00781fc4();
    /* 007a76ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a76af: je 0x7a76b4 */ if (fZ) goto L_007a76b4;
L_007a76b1:; BB(0x007a76b1);
    /* 007a76b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a76b3: ret  */ FN_RET(0x007a769c); r_esp += 4; return;
L_007a76b4:; BB(0x007a76b4);
    /* 007a76b4: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a76b9u); f_00793f64();
    /* 007a76b9: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a76beu); f_00782098();
    /* 007a76be: call 0x663c2c */ r_esp -= 4; W32(r_esp, 0x7a76c3u); f_00663c2c();
    /* 007a76c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a76c5: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a76cau); f_00814c7c();
    /* 007a76ca: mov eax, 1 */ r_eax = 0x1u;
    /* 007a76cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a76d0: ret  */ FN_RET(0x007a769c); r_esp += 4; return;
}

void f_007a76d4(void) /* sub_7A76D4 */
{
    FN_ENTER(0x007a76d4);
    /* 007a76d4: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a76d9u); f_00807ac0();
    /* 007a76d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a76da: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a76dfu); f_00815584();
    /* 007a76df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a76e0: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a76e5u); f_00781fc4();
    /* 007a76e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a76e7: je 0x7a76ec */ if (fZ) goto L_007a76ec;
L_007a76e9:; BB(0x007a76e9);
    /* 007a76e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a76eb: ret  */ FN_RET(0x007a76d4); r_esp += 4; return;
L_007a76ec:; BB(0x007a76ec);
    /* 007a76ec: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a76f1u); f_00793f64();
    /* 007a76f1: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a76f6u); f_00782098();
    /* 007a76f6: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a76fbu); f_007a61a4();
    /* 007a76fb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a76fe: je 0x7a7743 */ if (fZ) goto L_007a7743;
L_007a7700:; BB(0x007a7700);
    /* 007a7700: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7705u); f_00807ac0();
    /* 007a7705: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7708: jne 0x7a7712 */ if (!fZ) goto L_007a7712;
L_007a770a:; BB(0x007a770a);
    /* 007a770a: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 007a770c: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a7711u); f_006bb100();
    /* 007a7711: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a7712:; BB(0x007a7712);
    /* 007a7712: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7714: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7719u); f_00814c7c();
    /* 007a7719: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a771a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7a771fu); f_006dc358();
    /* 007a771f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7721: jne 0x7a773d */ if (!fZ) goto L_007a773d;
L_007a7723:; BB(0x007a7723);
    /* 007a7723: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7728u); f_00807ac0();
    /* 007a7728: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a772b: jne 0x7a773d */ if (!fZ) goto L_007a773d;
L_007a772d:; BB(0x007a772d);
    /* 007a772d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a772f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a7735: call 0x6600fc */ r_esp -= 4; W32(r_esp, 0x7a773au); f_006600fc();
    /* 007a773a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007a773d:; BB(0x007a773d);
    /* 007a773d: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7742: ret  */ FN_RET(0x007a76d4); r_esp += 4; return;
L_007a7743:; BB(0x007a7743);
    /* 007a7743: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007a7748: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a774a: jne 0x7a7712 */ if (!fZ) goto L_007a7712;
L_007a774c:; BB(0x007a774c);
    /* 007a774c: jmp 0x7a7700 */ goto L_007a7700;
}

void f_007a7750(void) /* sub_7A7750 */
{
    FN_ENTER(0x007a7750);
    /* 007a7750: mov dword ptr [0xaab3cc], 0x3f800000 */ W32((u32)(0xaab3ccu), 0x3f800000u);
    /* 007a775a: mov dword ptr [0xaab3d0], 0x41000000 */ W32((u32)(0xaab3d0u), 0x41000000u);
    /* 007a7764: mov dword ptr [0xaab3d4], 0x3fc00000 */ W32((u32)(0xaab3d4u), 0x3fc00000u);
    /* 007a776e: ret  */ FN_RET(0x007a7750); r_esp += 4; return;
}

void f_007a7770(void) /* sub_7A7770 */
{
    FN_ENTER(0x007a7770);
    /* 007a7770: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7775u); f_00807ac0();
    /* 007a7775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7776: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a777bu); f_00815584();
    /* 007a777b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007a777d: push 0x9ff980 */ { u32 v = 0x9ff980u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7782: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a7787u); f_0078b184();
    /* 007a7787: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a778a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a778c: jne 0x7a7791 */ if (!fZ) goto L_007a7791;
L_007a778e:; BB(0x007a778e);
    /* 007a778e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7790: ret  */ FN_RET(0x007a7770); r_esp += 4; return;
L_007a7791:; BB(0x007a7791);
    /* 007a7791: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7796u); f_00781fc4();
    /* 007a7796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7798: je 0x7a779d */ if (fZ) goto L_007a779d;
L_007a779a:; BB(0x007a779a);
    /* 007a779a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a779c: ret  */ FN_RET(0x007a7770); r_esp += 4; return;
L_007a779d:; BB(0x007a779d);
    /* 007a779d: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a77a2u); f_00793f64();
    /* 007a77a2: call 0x6c0e6c */ r_esp -= 4; W32(r_esp, 0x7a77a7u); f_006c0e6c();
    /* 007a77a7: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 007a77ac: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x7a77b1u); f_006a92e8();
    /* 007a77b1: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a77b6u); f_00782098();
    /* 007a77b6: call 0x6428bc */ r_esp -= 4; W32(r_esp, 0x7a77bbu); f_006428bc();
    /* 007a77bb: mov eax, 1 */ r_eax = 0x1u;
    /* 007a77c0: ret  */ FN_RET(0x007a7770); r_esp += 4; return;
}

void f_007a77c4(void) /* sub_7A77C4 */
{
    FN_ENTER(0x007a77c4);
    /* 007a77c4: call 0x6be160 */ r_esp -= 4; W32(r_esp, 0x7a77c9u); f_006be160();
    /* 007a77c9: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a77ceu); f_00782048();
    /* 007a77ce: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007a77d0: push 0x9ff980 */ { u32 v = 0x9ff980u; r_esp -= 4; W32(r_esp, v); }
    /* 007a77d5: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a77dau); f_0078b0a0();
    /* 007a77da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a77dd: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a77e2u); f_00815434();
    /* 007a77e2: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a77e7u); f_00815578();
    /* 007a77e7: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a77ecu); f_00815434();
    /* 007a77ec: ret  */ FN_RET(0x007a77c4); r_esp += 4; return;
}

void f_007a77f0(void) /* sub_7A77F0 */
{
    FN_ENTER(0x007a77f0);
    /* 007a77f0: mov dword ptr [0xaab3d8], 0x3f800000 */ W32((u32)(0xaab3d8u), 0x3f800000u);
    /* 007a77fa: mov dword ptr [0xaab3dc], 0x41000000 */ W32((u32)(0xaab3dcu), 0x41000000u);
    /* 007a7804: mov dword ptr [0xaab3e0], 0x3fc00000 */ W32((u32)(0xaab3e0u), 0x3fc00000u);
    /* 007a780e: ret  */ FN_RET(0x007a77f0); r_esp += 4; return;
}

void f_007a7810(void) /* sub_7A7810 */
{
    FN_ENTER(0x007a7810);
    /* 007a7810: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7815u); f_00807ac0();
    /* 007a7815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7816: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a781bu); f_00815584();
    /* 007a781b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a781c: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7821u); f_00781fc4();
    /* 007a7821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7823: je 0x7a7828 */ if (fZ) goto L_007a7828;
L_007a7825:; BB(0x007a7825);
    /* 007a7825: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7827: ret  */ FN_RET(0x007a7810); r_esp += 4; return;
L_007a7828:; BB(0x007a7828);
    /* 007a7828: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a782du); f_00793f64();
    /* 007a782d: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7832u); f_00782098();
    /* 007a7832: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7834: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7839u); f_00814c7c();
    /* 007a7839: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a783a: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a783fu); f_007a61a4();
    /* 007a783f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7842: je 0x7a7852 */ if (fZ) goto L_007a7852;
L_007a7844:; BB(0x007a7844);
    /* 007a7844: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7846: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a784bu); f_006bb100();
    /* 007a784b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a784c:; BB(0x007a784c);
    /* 007a784c: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7851: ret  */ FN_RET(0x007a7810); r_esp += 4; return;
L_007a7852:; BB(0x007a7852);
    /* 007a7852: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007a7857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7859: jne 0x7a784c */ if (!fZ) goto L_007a784c;
L_007a785b:; BB(0x007a785b);
    /* 007a785b: jmp 0x7a7844 */ goto L_007a7844;
}

void f_007a7860(void) /* sub_7A7860 */
{
    FN_ENTER(0x007a7860);
    /* 007a7860: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7865u); f_00807ac0();
    /* 007a7865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7866: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a786bu); f_00815584();
    /* 007a786b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a786c: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7871u); f_00781fc4();
    /* 007a7871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7873: je 0x7a7878 */ if (fZ) goto L_007a7878;
L_007a7875:; BB(0x007a7875);
    /* 007a7875: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7877: ret  */ FN_RET(0x007a7860); r_esp += 4; return;
L_007a7878:; BB(0x007a7878);
    /* 007a7878: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a787du); f_00793f64();
    /* 007a787d: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7882u); f_00782098();
    /* 007a7882: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7884: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7889u); f_00814c7c();
    /* 007a7889: mov eax, 1 */ r_eax = 0x1u;
    /* 007a788e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a788f: ret  */ FN_RET(0x007a7860); r_esp += 4; return;
}

void f_007a7890(void) /* sub_7A7890 */
{
    FN_ENTER(0x007a7890);
    /* 007a7890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7891: mov ebp, esp */ r_ebp = r_esp;
    /* 007a7893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7895: push 0x8f5c2c */ { u32 v = 0x8f5c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a789a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a78a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a78a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a78a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a78ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a78ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a78b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a78b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a78b7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a78bcu); f_00807ac0();
    /* 007a78bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a78bd: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a78c2u); f_00815584();
    /* 007a78c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a78c3: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a78c8u); f_00781fc4();
    /* 007a78c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a78ca: je 0x7a78dc */ if (fZ) goto L_007a78dc;
L_007a78cc:; BB(0x007a78cc);
    /* 007a78cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a78ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a78d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a78d8: mov esp, ebp */ r_esp = r_ebp;
    /* 007a78da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a78db: ret  */ FN_RET(0x007a7890); r_esp += 4; return;
L_007a78dc:; BB(0x007a78dc);
    /* 007a78dc: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a78e1u); f_00793f64();
    /* 007a78e1: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x7a78e6u); f_00505a20();
    /* 007a78e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a78e8: je 0x7a7929 */ if (fZ) goto L_007a7929;
L_007a78ea:; BB(0x007a78ea);
    /* 007a78ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a78f1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a78f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a78f8u); f_005caba4();
    /* 007a78f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a78f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a78fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a78fe: je 0x7a7922 */ if (fZ) goto L_007a7922;
L_007a7900:; BB(0x007a7900);
    /* 007a7900: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a7907: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a790e: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a7914: mov ecx, eax */ r_ecx = r_eax;
    /* 007a7916: call 0x505c74 */ r_esp -= 4; W32(r_esp, 0x7a791bu); f_00505c74();
    /* 007a791b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a7922:; BB(0x007a7922);
    /* 007a7922: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_007a7929:; BB(0x007a7929);
    /* 007a7929: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a792eu); f_00782098();
    /* 007a792e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7930: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7935u); f_00814c7c();
    /* 007a7935: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7936: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a793bu); f_007a61a4();
    /* 007a793b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a793e: je 0x7a7974 */ if (fZ) goto L_007a7974;
L_007a7940:; BB(0x007a7940);
    /* 007a7940: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7945u); f_00807ac0();
    /* 007a7945: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7948: jne 0x7a7954 */ if (!fZ) goto L_007a7954;
L_007a794a:; BB(0x007a794a);
    /* 007a794a: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 007a794c: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a7951u); f_006bb100();
    /* 007a7951: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7952: jmp 0x7a7961 */ goto L_007a7961;
L_007a7954:; BB(0x007a7954);
    /* 007a7954: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7957: jne 0x7a7961 */ if (!fZ) goto L_007a7961;
L_007a7959:; BB(0x007a7959);
    /* 007a7959: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 007a795b: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a7960u); f_006bb100();
    /* 007a7960: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a7961:; BB(0x007a7961);
    /* 007a7961: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7966: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7969: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7970: mov esp, ebp */ r_esp = r_ebp;
    /* 007a7972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7973: ret  */ FN_RET(0x007a7890); r_esp += 4; return;
L_007a7974:; BB(0x007a7974);
    /* 007a7974: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007a7979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a797b: jne 0x7a7961 */ if (!fZ) goto L_007a7961;
L_007a797d:; BB(0x007a797d);
    /* 007a797d: jmp 0x7a7940 */ goto L_007a7940;
}

void f_007a7980(void)
{
    FN_ENTER(0x007a7980);
    /* 007a7980: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7985u); f_00807ac0();
    /* 007a7985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7986: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a798bu); f_00815584();
    /* 007a798b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a798c: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7991u); f_00781fc4();
    /* 007a7991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7993: je 0x7a7998 */ if (fZ) goto L_007a7998;
L_007a7995:; BB(0x007a7995);
    /* 007a7995: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7997: ret  */ FN_RET(0x007a7980); r_esp += 4; return;
L_007a7998:; BB(0x007a7998);
    /* 007a7998: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a799du); f_00793f64();
    /* 007a799d: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a79a2u); f_00782098();
    /* 007a79a2: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a79a7u); f_007a61a4();
    /* 007a79a7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a79aa: je 0x7a79d6 */ if (fZ) goto L_007a79d6;
L_007a79ac:; BB(0x007a79ac);
    /* 007a79ac: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a79b1u); f_00807ac0();
    /* 007a79b1: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a79b4: jne 0x7a79be */ if (!fZ) goto L_007a79be;
L_007a79b6:; BB(0x007a79b6);
    /* 007a79b6: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 007a79b8: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a79bdu); f_006bb100();
    /* 007a79bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a79be:; BB(0x007a79be);
    /* 007a79be: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 007a79c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a79c6: jne 0x7a79d0 */ if (!fZ) goto L_007a79d0;
L_007a79c8:; BB(0x007a79c8);
    /* 007a79c8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a79ca: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a79cfu); f_00814c7c();
    /* 007a79cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a79d0:; BB(0x007a79d0);
    /* 007a79d0: mov eax, 1 */ r_eax = 0x1u;
    /* 007a79d5: ret  */ FN_RET(0x007a7980); r_esp += 4; return;
L_007a79d6:; BB(0x007a79d6);
    /* 007a79d6: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007a79db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a79dd: jne 0x7a79be */ if (!fZ) goto L_007a79be;
L_007a79df:; BB(0x007a79df);
    /* 007a79df: jmp 0x7a79ac */ goto L_007a79ac;
}

void f_007a79e4(void)
{
    FN_ENTER(0x007a79e4);
    /* 007a79e4: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a79e9u); f_00807ac0();
    /* 007a79e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a79ea: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a79efu); f_00815584();
    /* 007a79ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a79f0: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a79f5u); f_00781fc4();
    /* 007a79f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a79f7: je 0x7a79fc */ if (fZ) goto L_007a79fc;
L_007a79f9:; BB(0x007a79f9);
    /* 007a79f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a79fb: ret  */ FN_RET(0x007a79e4); r_esp += 4; return;
L_007a79fc:; BB(0x007a79fc);
    /* 007a79fc: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a7a01u); f_00793f64();
    /* 007a7a01: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7a06u); f_00782098();
    /* 007a7a06: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a7a0bu); f_007a61a4();
    /* 007a7a0b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7a0e: je 0x7a7a3a */ if (fZ) goto L_007a7a3a;
L_007a7a10:; BB(0x007a7a10);
    /* 007a7a10: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7a15u); f_00807ac0();
    /* 007a7a15: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7a18: jne 0x7a7a22 */ if (!fZ) goto L_007a7a22;
L_007a7a1a:; BB(0x007a7a1a);
    /* 007a7a1a: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7a1c: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a7a21u); f_006bb100();
    /* 007a7a21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a7a22:; BB(0x007a7a22);
    /* 007a7a22: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 007a7a27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7a2a: jne 0x7a7a34 */ if (!fZ) goto L_007a7a34;
L_007a7a2c:; BB(0x007a7a2c);
    /* 007a7a2c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7a2e: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7a33u); f_00814c7c();
    /* 007a7a33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a7a34:; BB(0x007a7a34);
    /* 007a7a34: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7a39: ret  */ FN_RET(0x007a79e4); r_esp += 4; return;
L_007a7a3a:; BB(0x007a7a3a);
    /* 007a7a3a: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007a7a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7a41: jne 0x7a7a22 */ if (!fZ) goto L_007a7a22;
L_007a7a43:; BB(0x007a7a43);
    /* 007a7a43: jmp 0x7a7a10 */ goto L_007a7a10;
}

void f_007a7a48(void) /* sub_7A7A48 */
{
    FN_ENTER(0x007a7a48);
    /* 007a7a48: mov dword ptr [0xaab3e4], 0x3f800000 */ W32((u32)(0xaab3e4u), 0x3f800000u);
    /* 007a7a52: mov dword ptr [0xaab3e8], 0x41000000 */ W32((u32)(0xaab3e8u), 0x41000000u);
    /* 007a7a5c: mov dword ptr [0xaab3ec], 0x3fc00000 */ W32((u32)(0xaab3ecu), 0x3fc00000u);
    /* 007a7a66: ret  */ FN_RET(0x007a7a48); r_esp += 4; return;
}

void f_007a7a68(void) /* sub_7A7A68 */
{
    FN_ENTER(0x007a7a68);
    /* 007a7a68: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7a6du); f_00807ac0();
    /* 007a7a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7a6e: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a7a73u); f_00815584();
    /* 007a7a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7a74: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a7a79u); f_00781fc4();
    /* 007a7a79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7a7b: je 0x7a7a80 */ if (fZ) goto L_007a7a80;
L_007a7a7d:; BB(0x007a7a7d);
    /* 007a7a7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7a7f: ret  */ FN_RET(0x007a7a68); r_esp += 4; return;
L_007a7a80:; BB(0x007a7a80);
    /* 007a7a80: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a7a85u); f_00793f64();
    /* 007a7a85: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a7a8au); f_00782098();
    /* 007a7a8a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7a8c: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a7a91u); f_00814c7c();
    /* 007a7a91: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7a96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7a97: ret  */ FN_RET(0x007a7a68); r_esp += 4; return;
}

void f_007a7a98(void) /* sub_7A7A98 */
{
    FN_ENTER(0x007a7a98);
    /* 007a7a98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7a99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a7a9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a7a9d: call 0x7a7abc */ r_esp -= 4; W32(r_esp, 0x7a7aa2u); f_007a7abc();
    /* 007a7aa2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a7aa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7aa8: jne 0x7a7aae */ if (!fZ) goto L_007a7aae;
L_007a7aaa:; BB(0x007a7aaa);
    /* 007a7aaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a7aab: ret 4 */ FN_RET(0x007a7a98); r_esp += 8; return;
L_007a7aae:; BB(0x007a7aae);
    /* 007a7aae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7aaf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a7ab4u); f_005c2f74();
    /* 007a7ab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a7ab6: ret 4 */ FN_RET(0x007a7a98); r_esp += 8; return;
}

void f_007a7abc(void) /* sub_7A7ABC */
{
    FN_ENTER(0x007a7abc);
    /* 007a7abc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7abd: mov ebp, esp */ r_ebp = r_esp;
    /* 007a7abf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7ac1: push 0x8f5c48 */ { u32 v = 0x8f5c48u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7ac6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a7acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7acd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a7ad4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a7ad7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a7ada: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a7add: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a7ae0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a7ae3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a7ae6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7ae9: mov dword ptr [ecx], 0xb461d8 */ W32((u32)(r_ecx), 0xb461d8u);
    /* 007a7aef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a7af6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a7afbu); f_008171e8();
    /* 007a7afb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7afe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7b05: mov esp, ebp */ r_esp = r_ebp;
    /* 007a7b07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7b08: ret  */ FN_RET(0x007a7abc); r_esp += 4; return;
}

void f_007a7b0c(void) /* sub_7A7B0C */
{
    FN_ENTER(0x007a7b0c);
    /* 007a7b0c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a7b10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007a7b12: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b17: je 0x7a7b27 */ if (fZ) goto L_007a7b27;
L_007a7b19:; BB(0x007a7b19);
    /* 007a7b19: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007a7b1b: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7b1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007a7b20: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b25: jne 0x7a7b19 */ if (!fZ) goto L_007a7b19;
L_007a7b27:; BB(0x007a7b27);
    /* 007a7b27: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 007a7b2d: ret 4 */ FN_RET(0x007a7b0c); r_esp += 8; return;
}

void f_007a7b30(void) /* sub_7A7B30 */
{
    FN_ENTER(0x007a7b30);
    /* 007a7b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7b31: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b34: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a7b38: lea edx, [eax + 0xac] */ r_edx = (u32)(r_eax+0xacu);
    /* 007a7b3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a7b40:; BB(0x007a7b40);
    /* 007a7b40: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 007a7b42: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b44: je 0x7a7b72 */ if (fZ) goto L_007a7b72;
L_007a7b46:; BB(0x007a7b46);
    /* 007a7b46: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b49: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 007a7b4b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b4d: je 0x7a7b72 */ if (fZ) goto L_007a7b72;
L_007a7b4f:; BB(0x007a7b4f);
    /* 007a7b4f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b52: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 007a7b54: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b56: je 0x7a7b72 */ if (fZ) goto L_007a7b72;
L_007a7b58:; BB(0x007a7b58);
    /* 007a7b58: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b5b: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 007a7b5d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b5f: je 0x7a7b72 */ if (fZ) goto L_007a7b72;
L_007a7b61:; BB(0x007a7b61);
    /* 007a7b61: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b64: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7b67: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7b6c: jl 0x7a7b40 */ if ((fS!=fO)) goto L_007a7b40;
L_007a7b6e:; BB(0x007a7b6e);
    /* 007a7b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7b6f: ret 4 */ FN_RET(0x007a7b30); r_esp += 8; return;
L_007a7b72:; BB(0x007a7b72);
    /* 007a7b72: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 007a7b79: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 007a7b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7b7c: ret 4 */ FN_RET(0x007a7b30); r_esp += 8; return;
}

void f_007a7b80(void) /* sub_7A7B80 */
{
    FN_ENTER(0x007a7b80);
    /* 007a7b80: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a7b85:; BB(0x007a7b85);
    /* 007a7b85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a7b87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b89: je 0x7a7bb6 */ if (fZ) goto L_007a7bb6;
L_007a7b8b:; BB(0x007a7b8b);
    /* 007a7b8b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b8e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a7b90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b92: je 0x7a7bb6 */ if (fZ) goto L_007a7bb6;
L_007a7b94:; BB(0x007a7b94);
    /* 007a7b94: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7b97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a7b99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7b9b: je 0x7a7bb6 */ if (fZ) goto L_007a7bb6;
L_007a7b9d:; BB(0x007a7b9d);
    /* 007a7b9d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7ba0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a7ba2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7ba4: je 0x7a7bb6 */ if (fZ) goto L_007a7bb6;
L_007a7ba6:; BB(0x007a7ba6);
    /* 007a7ba6: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a7ba9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7bac: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7bb1: jl 0x7a7b85 */ if ((fS!=fO)) goto L_007a7b85;
L_007a7bb3:; BB(0x007a7bb3);
    /* 007a7bb3: ret 4 */ FN_RET(0x007a7b80); r_esp += 8; return;
L_007a7bb6:; BB(0x007a7bb6);
    /* 007a7bb6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a7bba: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 007a7bc1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007a7bc3: ret 4 */ FN_RET(0x007a7b80); r_esp += 8; return;
}

void f_007a7bc8(void) /* sub_7A7BC8 */
{
    FN_ENTER(0x007a7bc8);
    /* 007a7bc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7bc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7bca: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a7bcc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a7bd0: lea eax, [eax + 0xac] */ r_eax = (u32)(r_eax+0xacu);
    /* 007a7bd6: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a7bd9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007a7bdb:; BB(0x007a7bdb);
    /* 007a7bdb: cmp eax, dword ptr [ebx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7bdd: je 0x7a7bf2 */ if (fZ) goto L_007a7bf2;
L_007a7bdf:; BB(0x007a7bdf);
    /* 007a7bdf: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a7be2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a7be5: cmp ebp, 0x200 */ {  u32 a = r_ebp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7beb: jl 0x7a7bdb */ if ((fS!=fO)) goto L_007a7bdb;
L_007a7bed:; BB(0x007a7bed);
    /* 007a7bed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a7bee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7bef: ret 4 */ FN_RET(0x007a7bc8); r_esp += 8; return;
L_007a7bf2:; BB(0x007a7bf2);
    /* 007a7bf2: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 007a7bf5: mov edx, ecx */ r_edx = r_ecx;
    /* 007a7bf7: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 007a7bfa: cmp ebp, 0x200 */ {  u32 a = r_ebp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7c00: jge 0x7a7c20 */ if ((fS==fO)) goto L_007a7c20;
L_007a7c02:; BB(0x007a7c02);
    /* 007a7c02: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 007a7c04: mov dword ptr [ebx], ebp */ W32((u32)(r_ebx), r_ebp);
    /* 007a7c06: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 007a7c09: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a7c0c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a7c0f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7c11: je 0x7a7bed */ if (fZ) goto L_007a7bed;
L_007a7c13:; BB(0x007a7c13);
    /* 007a7c13: mov ebp, eax */ r_ebp = r_eax;
    /* 007a7c15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7c18: cmp ebp, 0x200 */ {  u32 a = r_ebp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7c1e: jl 0x7a7c02 */ if ((fS!=fO)) goto L_007a7c02;
L_007a7c20:; BB(0x007a7c20);
    /* 007a7c20: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 007a7c26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a7c27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7c28: ret 4 */ FN_RET(0x007a7bc8); r_esp += 8; return;
}

void f_007a7c2c(void) /* sub_7A7C2C */
{
    FN_ENTER(0x007a7c2c);
    /* 007a7c2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a7c2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7c2e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a7c30: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a7c33: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007a7c35:; BB(0x007a7c35);
    /* 007a7c35: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007a7c38: cmp eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7c3c: je 0x7a7c51 */ if (fZ) goto L_007a7c51;
L_007a7c3e:; BB(0x007a7c3e);
    /* 007a7c3e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a7c41: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a7c44: cmp esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7c4a: jl 0x7a7c35 */ if ((fS!=fO)) goto L_007a7c35;
L_007a7c4c:; BB(0x007a7c4c);
    /* 007a7c4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7c4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a7c4e: ret 4 */ FN_RET(0x007a7c2c); r_esp += 8; return;
L_007a7c51:; BB(0x007a7c51);
    /* 007a7c51: lea ecx, [ebp + 4] */ r_ecx = (u32)(r_ebp+0x4u);
    /* 007a7c54: mov edx, ecx */ r_edx = r_ecx;
    /* 007a7c56: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 007a7c59: cmp esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7c5f: jge 0x7a7c80 */ if ((fS==fO)) goto L_007a7c80;
L_007a7c61:; BB(0x007a7c61);
    /* 007a7c61: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 007a7c63: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 007a7c66: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 007a7c69: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a7c6c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a7c6f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7c71: je 0x7a7c8b */ if (fZ) goto L_007a7c8b;
L_007a7c73:; BB(0x007a7c73);
    /* 007a7c73: mov esi, eax */ r_esi = r_eax;
    /* 007a7c75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7c78: cmp esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7c7e: jl 0x7a7c61 */ if ((fS!=fO)) goto L_007a7c61;
L_007a7c80:; BB(0x007a7c80);
    /* 007a7c80: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 007a7c86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7c87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a7c88: ret 4 */ FN_RET(0x007a7c2c); r_esp += 8; return;
L_007a7c8b:; BB(0x007a7c8b);
    /* 007a7c8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7c8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a7c8d: ret 4 */ FN_RET(0x007a7c2c); r_esp += 8; return;
}

void f_007a7c90(void) /* sub_7A7C90 */
{
    FN_ENTER(0x007a7c90);
    /* 007a7c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7c91: mov ebp, esp */ r_ebp = r_esp;
    /* 007a7c93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7c95: push 0x8f5c70 */ { u32 v = 0x8f5c70u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7c9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a7ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7ca1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a7ca8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a7cab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a7cae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a7cb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a7cb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a7cb7: push 0x81c */ { u32 v = 0x81cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7cbc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a7cc3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a7cc8u); f_005caba4();
    /* 007a7cc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7cc9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a7ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7cce: je 0x7a7d09 */ if (fZ) goto L_007a7d09;
L_007a7cd0:; BB(0x007a7cd0);
    /* 007a7cd0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a7cd7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a7cde: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a7ce4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7ce7: call 0x7a7d10 */ r_esp -= 4; W32(r_esp, 0x7a7cecu); f_007a7d10();
    /* 007a7cec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7cef: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a7cf6:; BB(0x007a7cf6);
    /* 007a7cf6: mov dword ptr [0xaab3f0], eax */ W32((u32)(0xaab3f0u), r_eax);
    /* 007a7cfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7cfe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7d05: mov esp, ebp */ r_esp = r_ebp;
    /* 007a7d07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7d08: ret  */ FN_RET(0x007a7c90); r_esp += 4; return;
L_007a7d09:; BB(0x007a7d09);
    /* 007a7d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7d0b: jmp 0x7a7cf6 */ goto L_007a7cf6;
}

void f_007a7d10(void) /* sub_7A7D10 */
{
    FN_ENTER(0x007a7d10);
    /* 007a7d10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d11: mov edi, ecx */ r_edi = r_ecx;
    /* 007a7d13: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a7d17: mov ecx, edi */ r_ecx = r_edi;
    /* 007a7d19: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a7d1eu); f_008193cc();
    /* 007a7d1e: mov dword ptr [edi], 0xb461d8 */ W32((u32)(r_edi), 0xb461d8u);
    /* 007a7d24: mov eax, dword ptr [0x9c87a0] */ r_eax = R32((u32)(0x9c87a0u));
    /* 007a7d29: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 007a7d2c: mov ecx, edi */ r_ecx = r_edi;
    /* 007a7d2e: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x7a7d33u); f_007a7d3c();
    /* 007a7d33: mov eax, edi */ r_eax = r_edi;
    /* 007a7d35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a7d36: ret 4 */ FN_RET(0x007a7d10); r_esp += 8; return;
}

void f_007a7d3c(void) /* sub_7A7D3C */
{
    FN_ENTER(0x007a7d3c);
    /* 007a7d3c: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 007a7d43: ret  */ FN_RET(0x007a7d3c); r_esp += 4; return;
}

void f_007a7d44(void) /* sub_7A7D44 */
{
    FN_ENTER(0x007a7d44);
    /* 007a7d44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a7d47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a7d49: call 0x7a7d68 */ r_esp -= 4; W32(r_esp, 0x7a7d4eu); f_007a7d68();
    /* 007a7d4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a7d52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7d54: jne 0x7a7d5a */ if (!fZ) goto L_007a7d5a;
L_007a7d56:; BB(0x007a7d56);
    /* 007a7d56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a7d57: ret 4 */ FN_RET(0x007a7d44); r_esp += 8; return;
L_007a7d5a:; BB(0x007a7d5a);
    /* 007a7d5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a7d60u); f_005c2f74();
    /* 007a7d60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7d61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a7d62: ret 4 */ FN_RET(0x007a7d44); r_esp += 8; return;
}

void f_007a7d68(void) /* sub_7A7D68 */
{
    FN_ENTER(0x007a7d68);
    /* 007a7d68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d69: mov ebp, esp */ r_ebp = r_esp;
    /* 007a7d6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d6d: push 0x8f5caa */ { u32 v = 0x8f5caau; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a7d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7d79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a7d80: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a7d83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a7d86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a7d89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a7d8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a7d8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a7d92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a7d99: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7d9c: mov dword ptr [edx], 0xb46278 */ W32((u32)(r_edx), 0xb46278u);
    /* 007a7da2: mov eax, dword ptr [0xaab3f8] */ r_eax = R32((u32)(0xaab3f8u));
    /* 007a7da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a7da9: je 0x7a7dbf */ if (fZ) goto L_007a7dbf;
L_007a7dab:; BB(0x007a7dab);
    /* 007a7dab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7dac: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a7db1u); f_0082e960();
    /* 007a7db1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7db2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7db5: mov dword ptr [0xaab3f8], 0 */ W32((u32)(0xaab3f8u), 0x0u);
L_007a7dbf:; BB(0x007a7dbf);
    /* 007a7dbf: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 007a7dc2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7dc5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007a7dc8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a7dcf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7dd2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a7dd7u); f_008171e8();
    /* 007a7dd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7dda: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7de1: mov esp, ebp */ r_esp = r_ebp;
    /* 007a7de3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7de4: ret  */ FN_RET(0x007a7d68); r_esp += 4; return;
}

void f_007a7de8(void) /* sub_7A7DE8 */
{
    FN_ENTER(0x007a7de8);
    /* 007a7de8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7de9: mov ebp, esp */ r_ebp = r_esp;
    /* 007a7deb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7ded: push 0x8f5cc4 */ { u32 v = 0x8f5cc4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7df2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a7df8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7df9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a7e00: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a7e03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a7e06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a7e09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a7e0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a7e0f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a7e12: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e14: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e16: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a7e1c: call 0x815c88 */ r_esp -= 4; W32(r_esp, 0x7a7e21u); f_00815c88();
    /* 007a7e21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a7e28: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7e2b: mov dword ptr [eax], 0xb46278 */ W32((u32)(r_eax), 0xb46278u);
    /* 007a7e31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a7e33: mov dword ptr [eax + 0x20b4], edx */ W32((u32)(r_eax+0x20b4u), r_edx);
    /* 007a7e39: mov dword ptr [0xaab3f8], edx */ W32((u32)(0xaab3f8u), r_edx);
    /* 007a7e3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e40: mov dword ptr [0xaab3fc], edx */ W32((u32)(0xaab3fcu), r_edx);
    /* 007a7e46: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7a7e4bu); f_0080c79c();
    /* 007a7e4b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e4d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e4f: call 0x82e94c */ r_esp -= 4; W32(r_esp, 0x7a7e54u); f_0082e94c();
    /* 007a7e54: mov dword ptr [0xaab3f8], eax */ W32((u32)(0xaab3f8u), r_eax);
    /* 007a7e59: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e5f: call 0x80c22c */ r_esp -= 4; W32(r_esp, 0x7a7e64u); f_0080c22c();
    /* 007a7e64: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a7e67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7e6a: mov dword ptr [eax + 0x20b0], 0x7a87e0 */ W32((u32)(r_eax+0x20b0u), 0x7a87e0u);
    /* 007a7e74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7e77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a7e7e: mov esp, ebp */ r_esp = r_ebp;
    /* 007a7e80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a7e81: ret  */ FN_RET(0x007a7de8); r_esp += 4; return;
}

void f_007a7e84(void) /* sub_7A7E84 */
{
    FN_ENTER(0x007a7e84);
    /* 007a7e84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a7e88: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a7e8a: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 007a7e8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a7e92: je 0x7a81dc */ if (fZ) goto L_007a81dc;
L_007a7e98:; BB(0x007a7e98);
    /* 007a7e98: mov edx, dword ptr [0xaab3f8] */ r_edx = R32((u32)(0xaab3f8u));
    /* 007a7e9e: mov dword ptr [ebp + 0x20b4], 0 */ W32((u32)(r_ebp+0x20b4u), 0x0u);
    /* 007a7ea8: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007a7eaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a7eac: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7eae: jl 0x7a7ebf */ if ((fS!=fO)) goto L_007a7ebf;
L_007a7eb0:; BB(0x007a7eb0);
    /* 007a7eb0: mov dword ptr [ebp + 0x20b4], 1 */ W32((u32)(r_ebp+0x20b4u), 0x1u);
    /* 007a7eba: mov eax, 1 */ r_eax = 0x1u;
L_007a7ebf:; BB(0x007a7ebf);
    /* 007a7ebf: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 007a7ec2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7ec4: jl 0x7a7ecf */ if ((fS!=fO)) goto L_007a7ecf;
L_007a7ec6:; BB(0x007a7ec6);
    /* 007a7ec6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7ec9: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7ecf:; BB(0x007a7ecf);
    /* 007a7ecf: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 007a7ed2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7ed4: jl 0x7a7edf */ if ((fS!=fO)) goto L_007a7edf;
L_007a7ed6:; BB(0x007a7ed6);
    /* 007a7ed6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7ed9: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7edf:; BB(0x007a7edf);
    /* 007a7edf: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 007a7ee2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7ee4: jl 0x7a7eef */ if ((fS!=fO)) goto L_007a7eef;
L_007a7ee6:; BB(0x007a7ee6);
    /* 007a7ee6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7ee9: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7eef:; BB(0x007a7eef);
    /* 007a7eef: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 007a7ef2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7ef4: jl 0x7a7eff */ if ((fS!=fO)) goto L_007a7eff;
L_007a7ef6:; BB(0x007a7ef6);
    /* 007a7ef6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7ef9: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7eff:; BB(0x007a7eff);
    /* 007a7eff: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 007a7f02: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f04: jl 0x7a7f0f */ if ((fS!=fO)) goto L_007a7f0f;
L_007a7f06:; BB(0x007a7f06);
    /* 007a7f06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f09: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f0f:; BB(0x007a7f0f);
    /* 007a7f0f: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 007a7f12: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f14: jl 0x7a7f1f */ if ((fS!=fO)) goto L_007a7f1f;
L_007a7f16:; BB(0x007a7f16);
    /* 007a7f16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f19: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f1f:; BB(0x007a7f1f);
    /* 007a7f1f: mov edi, dword ptr [edx + 0x54] */ r_edi = R32((u32)(r_edx+0x54u));
    /* 007a7f22: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f24: jl 0x7a7f2f */ if ((fS!=fO)) goto L_007a7f2f;
L_007a7f26:; BB(0x007a7f26);
    /* 007a7f26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f29: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f2f:; BB(0x007a7f2f);
    /* 007a7f2f: mov edi, dword ptr [edx + 0x60] */ r_edi = R32((u32)(r_edx+0x60u));
    /* 007a7f32: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f34: jl 0x7a7f3f */ if ((fS!=fO)) goto L_007a7f3f;
L_007a7f36:; BB(0x007a7f36);
    /* 007a7f36: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f39: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f3f:; BB(0x007a7f3f);
    /* 007a7f3f: mov edi, dword ptr [edx + 0x6c] */ r_edi = R32((u32)(r_edx+0x6cu));
    /* 007a7f42: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f44: jl 0x7a7f4f */ if ((fS!=fO)) goto L_007a7f4f;
L_007a7f46:; BB(0x007a7f46);
    /* 007a7f46: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f49: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f4f:; BB(0x007a7f4f);
    /* 007a7f4f: mov edi, dword ptr [edx + 0x78] */ r_edi = R32((u32)(r_edx+0x78u));
    /* 007a7f52: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f54: jl 0x7a7f5f */ if ((fS!=fO)) goto L_007a7f5f;
L_007a7f56:; BB(0x007a7f56);
    /* 007a7f56: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f59: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f5f:; BB(0x007a7f5f);
    /* 007a7f5f: mov edi, dword ptr [edx + 0x84] */ r_edi = R32((u32)(r_edx+0x84u));
    /* 007a7f65: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f67: jl 0x7a7f72 */ if ((fS!=fO)) goto L_007a7f72;
L_007a7f69:; BB(0x007a7f69);
    /* 007a7f69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f6c: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f72:; BB(0x007a7f72);
    /* 007a7f72: mov edi, dword ptr [edx + 0x90] */ r_edi = R32((u32)(r_edx+0x90u));
    /* 007a7f78: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f7a: jl 0x7a7f85 */ if ((fS!=fO)) goto L_007a7f85;
L_007a7f7c:; BB(0x007a7f7c);
    /* 007a7f7c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f7f: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f85:; BB(0x007a7f85);
    /* 007a7f85: mov edi, dword ptr [edx + 0x9c] */ r_edi = R32((u32)(r_edx+0x9cu));
    /* 007a7f8b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7f8d: jl 0x7a7f98 */ if ((fS!=fO)) goto L_007a7f98;
L_007a7f8f:; BB(0x007a7f8f);
    /* 007a7f8f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7f92: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7f98:; BB(0x007a7f98);
    /* 007a7f98: mov edi, dword ptr [edx + 0xa8] */ r_edi = R32((u32)(r_edx+0xa8u));
    /* 007a7f9e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7fa0: jl 0x7a7fab */ if ((fS!=fO)) goto L_007a7fab;
L_007a7fa2:; BB(0x007a7fa2);
    /* 007a7fa2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7fa5: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7fab:; BB(0x007a7fab);
    /* 007a7fab: mov edi, dword ptr [edx + 0xb4] */ r_edi = R32((u32)(r_edx+0xb4u));
    /* 007a7fb1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7fb3: jl 0x7a7fbe */ if ((fS!=fO)) goto L_007a7fbe;
L_007a7fb5:; BB(0x007a7fb5);
    /* 007a7fb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7fb8: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7fbe:; BB(0x007a7fbe);
    /* 007a7fbe: mov edi, dword ptr [edx + 0xc0] */ r_edi = R32((u32)(r_edx+0xc0u));
    /* 007a7fc4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7fc6: jl 0x7a7fd1 */ if ((fS!=fO)) goto L_007a7fd1;
L_007a7fc8:; BB(0x007a7fc8);
    /* 007a7fc8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7fcb: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7fd1:; BB(0x007a7fd1);
    /* 007a7fd1: mov edi, dword ptr [edx + 0xcc] */ r_edi = R32((u32)(r_edx+0xccu));
    /* 007a7fd7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7fd9: jl 0x7a7fe4 */ if ((fS!=fO)) goto L_007a7fe4;
L_007a7fdb:; BB(0x007a7fdb);
    /* 007a7fdb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7fde: mov dword ptr [ebp + 0x20b4], eax */ W32((u32)(r_ebp+0x20b4u), r_eax);
L_007a7fe4:; BB(0x007a7fe4);
    /* 007a7fe4: mov edi, dword ptr [0xaab3fc] */ r_edi = R32((u32)(0xaab3fcu));
    /* 007a7fea: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a7fed: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a7fef: jge 0x7a7ff8 */ if ((fS==fO)) goto L_007a7ff8;
L_007a7ff1:; BB(0x007a7ff1);
    /* 007a7ff1: mov dword ptr [0xaab3fc], eax */ W32((u32)(0xaab3fcu), r_eax);
    /* 007a7ff6: mov edi, eax */ r_edi = r_eax;
L_007a7ff8:; BB(0x007a7ff8);
    /* 007a7ff8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a7ffa: jle 0x7a8008 */ if ((fZ||fS!=fO)) goto L_007a8008;
L_007a7ffc:; BB(0x007a7ffc);
    /* 007a7ffc: mov dword ptr [0xaab3fc], 0 */ W32((u32)(0xaab3fcu), 0x0u);
    /* 007a8006: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007a8008:; BB(0x007a8008);
    /* 007a8008: push 0x97d22c */ { u32 v = 0x97d22cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a800d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a800f: push 0x40004 */ { u32 v = 0x40004u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8014: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a8016: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007a8019: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a801b: mov edi, dword ptr [eax + edx] */ r_edi = R32((u32)(r_eax+r_edx));
    /* 007a801e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a8023u); f_0061cdb0();
    /* 007a8023: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8026: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 007a802b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a802d: je 0x7a8075 */ if (fZ) goto L_007a8075;
L_007a802f:; BB(0x007a802f);
    /* 007a802f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8032: jne 0x7a8048 */ if (!fZ) goto L_007a8048;
L_007a8034:; BB(0x007a8034);
    /* 007a8034: push 0x97d248 */ { u32 v = 0x97d248u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8039: push 0x40005 */ { u32 v = 0x40005u; r_esp -= 4; W32(r_esp, v); }
    /* 007a803e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a8043u); f_0061cdb0();
    /* 007a8043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8046: jmp 0x7a8087 */ goto L_007a8087;
L_007a8048:; BB(0x007a8048);
    /* 007a8048: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a804b: jne 0x7a8061 */ if (!fZ) goto L_007a8061;
L_007a804d:; BB(0x007a804d);
    /* 007a804d: push 0x97d25c */ { u32 v = 0x97d25cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a8052: push 0x40005 */ { u32 v = 0x40005u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8057: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a805cu); f_0061cdb0();
    /* 007a805c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a805f: jmp 0x7a8087 */ goto L_007a8087;
L_007a8061:; BB(0x007a8061);
    /* 007a8061: push 0x97d270 */ { u32 v = 0x97d270u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8066: push 0x40005 */ { u32 v = 0x40005u; r_esp -= 4; W32(r_esp, v); }
    /* 007a806b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a8070u); f_0061cdb0();
    /* 007a8070: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8073: jmp 0x7a8087 */ goto L_007a8087;
L_007a8075:; BB(0x007a8075);
    /* 007a8075: push 0x97d238 */ { u32 v = 0x97d238u; r_esp -= 4; W32(r_esp, v); }
    /* 007a807a: push 0x40005 */ { u32 v = 0x40005u; r_esp -= 4; W32(r_esp, v); }
    /* 007a807f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a8084u); f_0061cdb0();
    /* 007a8084: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007a8087:; BB(0x007a8087);
    /* 007a8087: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007a808a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a808c: push dword ptr [eax + edi*8 + 0xa160c0] */ { u32 v = R32((u32)(r_eax+r_edi*8+0xa160c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8093: push 0x97d280 */ { u32 v = 0x97d280u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8098: push 0x40006 */ { u32 v = 0x40006u; r_esp -= 4; W32(r_esp, v); }
    /* 007a809d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a80a2u); f_0061cdb0();
    /* 007a80a2: push 0x97d28c */ { u32 v = 0x97d28cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a80a7: push 0x40008 */ { u32 v = 0x40008u; r_esp -= 4; W32(r_esp, v); }
    /* 007a80ac: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a80b1u); f_0061cdb0();
    /* 007a80b1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a80b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a80b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a80b8: mov edi, 9 */ r_edi = 0x9u;
    /* 007a80bd: mov ebx, eax */ r_ebx = r_eax;
    /* 007a80bf: mov esi, edx */ r_esi = r_edx;
L_007a80c1:; BB(0x007a80c1);
    /* 007a80c1: mov eax, dword ptr [0xaab3f8] */ r_eax = R32((u32)(0xaab3f8u));
    /* 007a80c6: mov ecx, dword ptr [ebx + eax] */ r_ecx = R32((u32)(r_ebx+r_eax));
    /* 007a80c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a80cb: jl 0x7a8113 */ if ((fS!=fO)) goto L_007a8113;
L_007a80cd:; BB(0x007a80cd);
    /* 007a80cd: cmp esi, dword ptr [0xaab3fc] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaab3fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a80d3: jne 0x7a80f5 */ if (!fZ) goto L_007a80f5;
L_007a80d5:; BB(0x007a80d5);
    /* 007a80d5: push dword ptr [ebx + eax + 8] */ { u32 v = R32((u32)(r_ebx+r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a80d9: push dword ptr [ebx + eax + 4] */ { u32 v = R32((u32)(r_ebx+r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a80dd: mov ecx, edi */ r_ecx = r_edi;
    /* 007a80df: or ecx, 0x70000 */ {  u32 a = r_ecx; u32 b = 0x70000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a80e5: push 0x97d29c */ { u32 v = 0x97d29cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a80ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a80eb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a80f0u); f_0061cdb0();
    /* 007a80f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a80f3: jmp 0x7a8113 */ goto L_007a8113;
L_007a80f5:; BB(0x007a80f5);
    /* 007a80f5: push dword ptr [ebx + eax + 8] */ { u32 v = R32((u32)(r_ebx+r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a80f9: push dword ptr [ebx + eax + 4] */ { u32 v = R32((u32)(r_ebx+r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a80fd: mov ecx, edi */ r_ecx = r_edi;
    /* 007a80ff: or ecx, 0x70000 */ {  u32 a = r_ecx; u32 b = 0x70000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8105: push 0x97d29c */ { u32 v = 0x97d29cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a810a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a810b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a8110u); f_0061cdb0();
    /* 007a8110: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007a8113:; BB(0x007a8113);
    /* 007a8113: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a8116: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a8119: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a811c: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a811f: jl 0x7a80c1 */ if ((fS!=fO)) goto L_007a80c1;
L_007a8121:; BB(0x007a8121);
    /* 007a8121: mov edx, dword ptr [ebp + 0x209c] */ r_edx = R32((u32)(r_ebp+0x209cu));
    /* 007a8127: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a8129: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a812b: jle 0x7a8170 */ if ((fZ||fS!=fO)) goto L_007a8170;
L_007a812d:; BB(0x007a812d);
    /* 007a812d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a8130: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8132: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8134: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8136: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8138: lea edx, [edx + edx + 0x1c] */ r_edx = (u32)(r_edx+r_edx+0x1cu);
    /* 007a813c: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a813e: lea edi, [eax + 0xa] */ r_edi = (u32)(r_eax+0xau);
    /* 007a8141: mov esi, ebp */ r_esi = r_ebp;
    /* 007a8143: mov ebp, eax */ r_ebp = r_eax;
    /* 007a8145: mov ebx, edx */ r_ebx = r_edx;
L_007a8147:; BB(0x007a8147);
    /* 007a8147: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8148: call 0x708898 */ r_esp -= 4; W32(r_esp, 0x7a814du); f_00708898();
    /* 007a814d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a814e: mov ecx, edi */ r_ecx = r_edi;
    /* 007a8150: or ecx, 0x140000 */ {  u32 a = r_ecx; u32 b = 0x140000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8156: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8157: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a815cu); f_0061cdb0();
    /* 007a815c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a815f: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a8162: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a8165: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a8168: cmp ebp, dword ptr [esi + 0x209c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x209cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a816e: jl 0x7a8147 */ if ((fS!=fO)) goto L_007a8147;
L_007a8170:; BB(0x007a8170);
    /* 007a8170: push 0x97d2a8 */ { u32 v = 0x97d2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8175: push 0xf0017 */ { u32 v = 0xf0017u; r_esp -= 4; W32(r_esp, v); }
    /* 007a817a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a817fu); f_0061cdb0();
    /* 007a817f: push 0x97d2c8 */ { u32 v = 0x97d2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8184: push 0xf0018 */ { u32 v = 0xf0018u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8189: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a818eu); f_0061cdb0();
    /* 007a818e: push 0x97d2e8 */ { u32 v = 0x97d2e8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8193: push 0xf0019 */ { u32 v = 0xf0019u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8198: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a819du); f_0061cdb0();
    /* 007a819d: push 0x97d2fc */ { u32 v = 0x97d2fcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a81a2: push 0xf001a */ { u32 v = 0xf001au; r_esp -= 4; W32(r_esp, v); }
    /* 007a81a7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a81acu); f_0061cdb0();
    /* 007a81ac: push 0x97d310 */ { u32 v = 0x97d310u; r_esp -= 4; W32(r_esp, v); }
    /* 007a81b1: push 0xf001b */ { u32 v = 0xf001bu; r_esp -= 4; W32(r_esp, v); }
    /* 007a81b6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a81bbu); f_0061cdb0();
    /* 007a81bb: push 0x97d328 */ { u32 v = 0x97d328u; r_esp -= 4; W32(r_esp, v); }
    /* 007a81c0: push 0xf001c */ { u32 v = 0xf001cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a81c5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a81cau); f_0061cdb0();
    /* 007a81ca: push 0x97d340 */ { u32 v = 0x97d340u; r_esp -= 4; W32(r_esp, v); }
    /* 007a81cf: push 0xf001d */ { u32 v = 0xf001du; r_esp -= 4; W32(r_esp, v); }
    /* 007a81d4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a81d9u); f_0061cdb0();
    /* 007a81d9: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007a81dc:; BB(0x007a81dc);
    /* 007a81dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a81dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a81de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a81df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a81e0: ret  */ FN_RET(0x007a7e84); r_esp += 4; return;
}

