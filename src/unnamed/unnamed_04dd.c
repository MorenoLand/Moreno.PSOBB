#include "protos.h"

void f_004dd010(void) /* sub_4DD010 */
{
    FN_ENTER(0x004dd010);
    /* 004dd010: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd011: mov esi, ecx */ r_esi = r_ecx;
    /* 004dd013: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 004dd016: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd018: je 0x4dd07e */ if (fZ) goto L_004dd07e;
L_004dd01a:; BB(0x004dd01a);
    /* 004dd01a: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 004dd01d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004dd020: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004dd022: jl 0x4dd073 */ if ((fS!=fO)) goto L_004dd073;
L_004dd024:; BB(0x004dd024);
    /* 004dd024: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
L_004dd027:; BB(0x004dd027);
    /* 004dd027: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004dd02a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd02c: je 0x4dd046 */ if (fZ) goto L_004dd046;
L_004dd02e:; BB(0x004dd02e);
    /* 004dd02e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd030: jne 0x4dd071 */ if (!fZ) goto L_004dd071;
L_004dd032:; BB(0x004dd032);
    /* 004dd032: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dd037u); f_007127b0();
    /* 004dd037: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004dd03b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd040: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004dd044: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd045: ret  */ FN_RET(0x004dd010); r_esp += 4; return;
L_004dd046:; BB(0x004dd046);
    /* 004dd046: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x4dd04bu); f_00694c6c();
    /* 004dd04b: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd051: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004dd054: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dd056: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dd058: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dd05a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 004dd061: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4dd066u); f_007c1160();
    /* 004dd066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd068: je 0x4dd071 */ if (fZ) goto L_004dd071;
L_004dd06a:; BB(0x004dd06a);
    /* 004dd06a: mov dword ptr [esi + 0x24], 1 */ W32((u32)(r_esi+0x24u), 0x1u);
L_004dd071:; BB(0x004dd071);
    /* 004dd071: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd072: ret  */ FN_RET(0x004dd010); r_esp += 4; return;
L_004dd073:; BB(0x004dd073);
    /* 004dd073: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 004dd07a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004dd07c: jmp 0x4dd027 */ goto L_004dd027;
L_004dd07e:; BB(0x004dd07e);
    /* 004dd07e: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dd083u); f_00719914();
    /* 004dd083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd085: jne 0x4dd089 */ if (!fZ) goto L_004dd089;
L_004dd087:; BB(0x004dd087);
    /* 004dd087: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd088: ret  */ FN_RET(0x004dd010); r_esp += 4; return;
L_004dd089:; BB(0x004dd089);
    /* 004dd089: mov ecx, esi */ r_ecx = r_esi;
    /* 004dd08b: call 0x4dd094 */ r_esp -= 4; W32(r_esp, 0x4dd090u); f_004dd094();
    /* 004dd090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd091: ret  */ FN_RET(0x004dd010); r_esp += 4; return;
}

void f_004dd094(void) /* sub_4DD094 */
{
    FN_ENTER(0x004dd094);
    /* 004dd094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd095: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dd097: movzx eax, byte ptr [0xa49834] */ r_eax = (u32)R8((u32)(0xa49834u));
    /* 004dd09e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dd0a0: jne 0x4dd0c0 */ if (!fZ) goto L_004dd0c0;
L_004dd0a2:; BB(0x004dd0a2);
    /* 004dd0a2: mov dword ptr [0xa49838], 0x43870000 */ W32((u32)(0xa49838u), 0x43870000u);
    /* 004dd0ac: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dd0b1: mov byte ptr [0xa49834], al */ W8((u32)(0xa49834u), (u8)r_eax);
    /* 004dd0b6: mov dword ptr [0xa4983c], 0x43800000 */ W32((u32)(0xa4983cu), 0x43800000u);
L_004dd0c0:; BB(0x004dd0c0);
    /* 004dd0c0: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0c2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dd0c7u); f_0073ec50();
    /* 004dd0c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0c9: push 0xa49838 */ { u32 v = 0xa49838u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0cf: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dd0d4u); f_0073a8dc();
    /* 004dd0d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd0d7: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 004dd0da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd0dc: je 0x4dd103 */ if (fZ) goto L_004dd103;
L_004dd0de:; BB(0x004dd0de);
    /* 004dd0de: mov edx, dword ptr [0xa48a3c] */ r_edx = R32((u32)(0xa48a3cu));
    /* 004dd0e4: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd0e7: je 0x4dd105 */ if (fZ) goto L_004dd105;
L_004dd0e9:; BB(0x004dd0e9);
    /* 004dd0e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0eb: lea edx, [ebp + 0x2c] */ r_edx = (u32)(r_ebp+0x2cu);
    /* 004dd0ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0ef: mov ecx, eax */ r_ecx = r_eax;
    /* 004dd0f1: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dd0f6u); f_0073ae38();
    /* 004dd0f6: push 0x47108700 */ { u32 v = 0x47108700u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0fb: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004dd0fe: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4dd103u); f_00712624();
L_004dd103:; BB(0x004dd103);
    /* 004dd103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd104: ret  */ FN_RET(0x004dd094); r_esp += 4; return;
L_004dd105:; BB(0x004dd105);
    /* 004dd105: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd10a: mov ecx, eax */ r_ecx = r_eax;
    /* 004dd10c: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd111: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x4dd116u); f_0070f5a4();
    /* 004dd116: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004dd119: jmp 0x4dd0e9 */ goto L_004dd0e9;
}

void f_004dd11c(void) /* sub_4DD11C */
{
    FN_ENTER(0x004dd11c);
    /* 004dd11c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd11d: mov ebp, esp */ r_ebp = r_esp;
    /* 004dd11f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd121: push 0x8d24d4 */ { u32 v = 0x8d24d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd126: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dd12c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd12d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dd134: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd137: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dd13a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dd13d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dd140: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dd143: push 0x278 */ { u32 v = 0x278u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd148: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004dd14f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dd154u); f_005caba4();
    /* 004dd154: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd155: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004dd158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd15a: je 0x4dd193 */ if (fZ) goto L_004dd193;
L_004dd15c:; BB(0x004dd15c);
    /* 004dd15c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004dd163: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dd16a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd16d: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd173: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd176: call 0x4dd198 */ r_esp -= 4; W32(r_esp, 0x4dd17bu); f_004dd198();
    /* 004dd17b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd17e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004dd185:; BB(0x004dd185);
    /* 004dd185: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd188: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd18f: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd191: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd192: ret  */ FN_RET(0x004dd11c); r_esp += 4; return;
L_004dd193:; BB(0x004dd193);
    /* 004dd193: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd195: jmp 0x4dd185 */ goto L_004dd185;
}

void f_004dd198(void) /* sub_4DD198 */
{
    FN_ENTER(0x004dd198);
    /* 004dd198: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd199: mov ebp, esp */ r_ebp = r_esp;
    /* 004dd19b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd19d: push 0x8d24f0 */ { u32 v = 0x8d24f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dd1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dd1b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd1b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dd1b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004dd1b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004dd1bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004dd1bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dd1c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd1c5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004dd1c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004dd1cb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4dd1d0u); f_008193cc();
    /* 004dd1d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dd1d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004dd1da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004dd1dd: mov dword ptr [edx], 0xafce98 */ W32((u32)(r_edx), 0xafce98u);
    /* 004dd1e3: mov ecx, dword ptr [0x9b1030] */ r_ecx = R32((u32)(0x9b1030u));
    /* 004dd1e9: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 004dd1f0: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004dd1f3: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 004dd1f5: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004dd1f8: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 004dd1fb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004dd1fe: add edx, 0x22c */ {  u32 a = r_edx; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004dd204: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 004dd206: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 004dd209: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 004dd20c: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004dd20f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004dd212: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 004dd215: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004dd218: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 004dd21b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004dd21e: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 004dd221: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004dd224: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004dd227: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004dd22a: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004dd22d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004dd230: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004dd233: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004dd236: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 004dd239: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004dd23c: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 004dd23f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004dd242: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 004dd245: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004dd248: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 004dd24b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004dd24e: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 004dd251: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dd254: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 004dd257: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004dd25a: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 004dd25d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dd260: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004dd263: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 004dd266: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 004dd269: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004dd26c: mov dword ptr [ecx + 0x28], 0x3c */ W32((u32)(r_ecx+0x28u), 0x3cu);
    /* 004dd273: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 004dd27a: call 0x4dd29c */ r_esp -= 4; W32(r_esp, 0x4dd27fu); f_004dd29c();
    /* 004dd27f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004dd282: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd285: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004dd288: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004dd28b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd28e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd295: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd298: ret 8 */ FN_RET(0x004dd198); r_esp += 12; return;
}

void f_004dd29c(void) /* sub_4DD29C */
{
    FN_ENTER(0x004dd29c);
    /* 004dd29c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd29d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd29e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd29f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2a0: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd2a6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dd2a8: lea edx, [ebx + 0x2c] */ r_edx = (u32)(r_ebx+0x2cu);
    /* 004dd2ab: lea eax, [ebx + 0x22c] */ r_eax = (u32)(r_ebx+0x22cu);
L_004dd2b1:; BB(0x004dd2b1);
    /* 004dd2b1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004dd2b3: mov word ptr [edx], bp */ W16((u32)(r_edx), (u16)r_ebp);
    /* 004dd2b6: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 004dd2ba: mov word ptr [edx + 4], bp */ W16((u32)(r_edx+0x4u), (u16)r_ebp);
    /* 004dd2be: mov word ptr [edx + 6], bp */ W16((u32)(r_edx+0x6u), (u16)r_ebp);
    /* 004dd2c2: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004dd2c5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004dd2c7: ja 0x4dd2b1 */ if ((!fC&&!fZ)) goto L_004dd2b1;
L_004dd2c9:; BB(0x004dd2c9);
    /* 004dd2c9: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 004dd2cd: lea ebp, [esp + 4] */ r_ebp = (u32)(r_esp+0x4u);
    /* 004dd2d1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004dd2d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2d5: mov eax, dword ptr [ebx + 0x22c] */ r_eax = R32((u32)(r_ebx+0x22cu));
    /* 004dd2db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2dd: add eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dd2e0: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 004dd2e3: push dword ptr [ebx + 0x258] */ { u32 v = R32((u32)(r_ebx+0x258u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd2e9: call 0x4da01c */ r_esp -= 4; W32(r_esp, 0x4dd2eeu); f_004da01c();
    /* 004dd2ee: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2f0: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd2f5u); f_007930dc();
    /* 004dd2f5: mov ebp, eax */ r_ebp = r_eax;
    /* 004dd2f7: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2f9: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd2feu); f_007930dc();
    /* 004dd2fe: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004dd302: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd306: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd30a: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd30e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd30f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd311: push 0x909b58 */ { u32 v = 0x909b58u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd316: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd317: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd31cu); f_00857e29();
    /* 004dd31c: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 004dd320: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd323: lea ebp, [ebx + 0x2c] */ r_ebp = (u32)(r_ebx+0x2cu);
    /* 004dd326: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd327: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd32cu); f_00858b0f();
    /* 004dd32c: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd32f: mov edi, dword ptr [ebx + 0x234] */ r_edi = R32((u32)(r_ebx+0x234u));
    /* 004dd335: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd337: je 0x4dd38a */ if (fZ) goto L_004dd38a;
L_004dd339:; BB(0x004dd339);
    /* 004dd339: lea esi, [esp + 0x74] */ r_esi = (u32)(r_esp+0x74u);
    /* 004dd33d: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 004dd341: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 004dd345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd346: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd347: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd348: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd349: call 0x4da01c */ r_esp -= 4; W32(r_esp, 0x4dd34eu); f_004da01c();
    /* 004dd34e: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd350: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd355u); f_007930dc();
    /* 004dd355: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004dd359: push dword ptr [esp + 0x80] */ { u32 v = R32((u32)(r_esp+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd360: push dword ptr [esp + 0x88] */ { u32 v = R32((u32)(r_esp+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd367: push dword ptr [esp + 0x90] */ { u32 v = R32((u32)(r_esp+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd36e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd36f: push 0x909b94 */ { u32 v = 0x909b94u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd375: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd37au); f_00857e29();
    /* 004dd37a: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 004dd37e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd381: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd382: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd387u); f_00858b0f();
    /* 004dd387: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd38a:; BB(0x004dd38a);
    /* 004dd38a: mov edx, dword ptr [ebx + 0x238] */ r_edx = R32((u32)(r_ebx+0x238u));
    /* 004dd390: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd392: je 0x4dd40b */ if (fZ) goto L_004dd40b;
L_004dd394:; BB(0x004dd394);
    /* 004dd394: mov eax, dword ptr [ebx + 0x258] */ r_eax = R32((u32)(r_ebx+0x258u));
    /* 004dd39a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004dd39c: je 0x4dd3e7 */ if (fZ) goto L_004dd3e7;
L_004dd39e:; BB(0x004dd39e);
    /* 004dd39e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004dd3a0: jl 0x4dd55f */ if ((fS!=fO)) goto L_004dd55f;
L_004dd3a6:; BB(0x004dd3a6);
    /* 004dd3a6: lea edi, [esp + 0x80] */ r_edi = (u32)(r_esp+0x80u);
    /* 004dd3ad: lea esi, [esp + 0x7c] */ r_esi = (u32)(r_esp+0x7cu);
    /* 004dd3b1: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 004dd3b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3b9: call 0x4da01c */ r_esp -= 4; W32(r_esp, 0x4dd3beu); f_004da01c();
    /* 004dd3be: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004dd3c2: push dword ptr [esp + 0x88] */ { u32 v = R32((u32)(r_esp+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd3c9: push dword ptr [esp + 0x90] */ { u32 v = R32((u32)(r_esp+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd3d0: push dword ptr [esp + 0x98] */ { u32 v = R32((u32)(r_esp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd3d7: push 0x909be4 */ { u32 v = 0x909be4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3dd: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd3e2u); f_00857e29();
    /* 004dd3e2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd3e5: jmp 0x4dd3f9 */ goto L_004dd3f9;
L_004dd3e7:; BB(0x004dd3e7);
    /* 004dd3e7: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004dd3eb: push 0x909bcc */ { u32 v = 0x909bccu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3f1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd3f6u); f_00857e29();
    /* 004dd3f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd3f9:; BB(0x004dd3f9);
    /* 004dd3f9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004dd3fd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd401: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd406u); f_00858b0f();
    /* 004dd406: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd409: jmp 0x4dd42b */ goto L_004dd42b;
L_004dd40b:; BB(0x004dd40b);
    /* 004dd40b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd40d: push 0x909bc0 */ { u32 v = 0x909bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd412: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd413: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd418u); f_00858b0f();
    /* 004dd418: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd41a: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd41fu); f_007930dc();
    /* 004dd41f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd422: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd423: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd428u); f_00858b0f();
    /* 004dd428: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd42b:; BB(0x004dd42b);
    /* 004dd42b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd42d: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd432: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd433: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd438u); f_00858b0f();
    /* 004dd438: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd43a: call 0x4d91f4 */ r_esp -= 4; W32(r_esp, 0x4dd43fu); f_004d91f4();
    /* 004dd43f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd442: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd444: jne 0x4dd4db */ if (!fZ) goto L_004dd4db;
L_004dd44a:; BB(0x004dd44a);
    /* 004dd44a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd44c: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd451u); f_007930dc();
    /* 004dd451: mov edi, eax */ r_edi = r_eax;
    /* 004dd453: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd456: movzx edx, word ptr [ebx + 0x23c] */ r_edx = (u32)R16((u32)(r_ebx+0x23cu));
    /* 004dd45d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd45f: jne 0x4dd469 */ if (!fZ) goto L_004dd469;
L_004dd461:; BB(0x004dd461);
    /* 004dd461: lea esi, [ebx + 0x25c] */ r_esi = (u32)(r_ebx+0x25cu);
    /* 004dd467: jmp 0x4dd4aa */ goto L_004dd4aa;
L_004dd469:; BB(0x004dd469);
    /* 004dd469: lea esi, [ebx + 0x25c] */ r_esi = (u32)(r_ebx+0x25cu);
    /* 004dd46f: lea edx, [ebx + 0x23c] */ r_edx = (u32)(r_ebx+0x23cu);
    /* 004dd475: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 004dd47c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd47e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd47f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd480: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x4dd485u); f_00858643();
    /* 004dd485: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd48a: je 0x4dd4aa */ if (fZ) goto L_004dd4aa;
L_004dd48c:; BB(0x004dd48c);
    /* 004dd48c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004dd490: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd491: mov esi, dword ptr [esp + 0x88] */ r_esi = R32((u32)(r_esp+0x88u));
    /* 004dd498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd499: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd49a: push 0x909c48 */ { u32 v = 0x909c48u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd49f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4a0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd4a5u); f_00857e29();
    /* 004dd4a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd4a8: jmp 0x4dd4be */ goto L_004dd4be;
L_004dd4aa:; BB(0x004dd4aa);
    /* 004dd4aa: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004dd4ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4b0: push 0x909c34 */ { u32 v = 0x909c34u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4b6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd4bbu); f_00857e29();
    /* 004dd4bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd4be:; BB(0x004dd4be);
    /* 004dd4be: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004dd4c2: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4c6: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd4cbu); f_00858b0f();
    /* 004dd4cb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4cd: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4d3: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd4d8u); f_00858b0f();
    /* 004dd4d8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd4db:; BB(0x004dd4db);
    /* 004dd4db: mov eax, dword ptr [ebx + 0x274] */ r_eax = R32((u32)(r_ebx+0x274u));
    /* 004dd4e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd4e3: je 0x4dd554 */ if (fZ) goto L_004dd554;
L_004dd4e5:; BB(0x004dd4e5);
    /* 004dd4e5: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4e7: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd4ecu); f_007930dc();
    /* 004dd4ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd4ed: mov edx, dword ptr [ebx + 0x254] */ r_edx = R32((u32)(r_ebx+0x254u));
    /* 004dd4f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd4f5: je 0x4dd524 */ if (fZ) goto L_004dd524;
L_004dd4f7:; BB(0x004dd4f7);
    /* 004dd4f7: mov ebx, dword ptr [ebx + 0x274] */ r_ebx = R32((u32)(r_ebx+0x274u));
    /* 004dd4fd: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd4ff: je 0x4dd52a */ if (fZ) goto L_004dd52a;
L_004dd501:; BB(0x004dd501);
    /* 004dd501: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004dd505: push dword ptr [ebx*4 + 0x9b1020] */ { u32 v = R32((u32)(r_ebx*4+0x9b1020u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd50c: push dword ptr [edx*4 + 0x9b1020] */ { u32 v = R32((u32)(r_edx*4+0x9b1020u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd514: push 0x909c48 */ { u32 v = 0x909c48u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd51a: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd51fu); f_00857e29();
    /* 004dd51f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd522: jmp 0x4dd544 */ goto L_004dd544;
L_004dd524:; BB(0x004dd524);
    /* 004dd524: mov ebx, dword ptr [ebx + 0x274] */ r_ebx = R32((u32)(r_ebx+0x274u));
L_004dd52a:; BB(0x004dd52a);
    /* 004dd52a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004dd52e: push dword ptr [ebx*4 + 0x9b1020] */ { u32 v = R32((u32)(r_ebx*4+0x9b1020u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd536: push 0x909c34 */ { u32 v = 0x909c34u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd53b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd53c: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd541u); f_00857e29();
    /* 004dd541: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd544:; BB(0x004dd544);
    /* 004dd544: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004dd548: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd54a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd54b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd54c: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x4dd551u); f_00858b0f();
    /* 004dd551: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dd554:; BB(0x004dd554);
    /* 004dd554: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dd55a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd55b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd55c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd55d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dd55e: ret  */ FN_RET(0x004dd29c); r_esp += 4; return;
L_004dd55f:; BB(0x004dd55f);
    /* 004dd55f: lea edi, [esp + 0x80] */ r_edi = (u32)(r_esp+0x80u);
    /* 004dd566: lea esi, [esp + 0x7c] */ r_esi = (u32)(r_esp+0x7cu);
    /* 004dd56a: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 004dd56e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd56f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004dd571: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd572: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd574: call 0x4da01c */ r_esp -= 4; W32(r_esp, 0x4dd579u); f_004da01c();
    /* 004dd579: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd57b: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd580u); f_007930dc();
    /* 004dd580: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004dd584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd585: push dword ptr [esp + 0x90] */ { u32 v = R32((u32)(r_esp+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd58c: push dword ptr [esp + 0x98] */ { u32 v = R32((u32)(r_esp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd593: push dword ptr [esp + 0xa0] */ { u32 v = R32((u32)(r_esp+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd59a: push 0x909c08 */ { u32 v = 0x909c08u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd59f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5a0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dd5a5u); f_00857e29();
    /* 004dd5a5: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd5a8: jmp 0x4dd3f9 */ goto L_004dd3f9;
}

void f_004dd5b0(void) /* sub_4DD5B0 */
{
    FN_ENTER(0x004dd5b0);
    /* 004dd5b0: mov dword ptr [0xa49840], 0x3f800000 */ W32((u32)(0xa49840u), 0x3f800000u);
    /* 004dd5ba: mov dword ptr [0xa49844], 0x41000000 */ W32((u32)(0xa49844u), 0x41000000u);
    /* 004dd5c4: mov dword ptr [0xa49848], 0x3fc00000 */ W32((u32)(0xa49848u), 0x3fc00000u);
    /* 004dd5ce: ret  */ FN_RET(0x004dd5b0); r_esp += 4; return;
}

void f_004dd5d0(void) /* sub_4DD5D0 */
{
    FN_ENTER(0x004dd5d0);
    /* 004dd5d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dd5d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dd5d5: call 0x4dd5f4 */ r_esp -= 4; W32(r_esp, 0x4dd5dau); f_004dd5f4();
    /* 004dd5da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004dd5de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd5e0: jne 0x4dd5e6 */ if (!fZ) goto L_004dd5e6;
L_004dd5e2:; BB(0x004dd5e2);
    /* 004dd5e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd5e3: ret 4 */ FN_RET(0x004dd5d0); r_esp += 8; return;
L_004dd5e6:; BB(0x004dd5e6);
    /* 004dd5e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4dd5ecu); f_005c2f74();
    /* 004dd5ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd5ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd5ee: ret 4 */ FN_RET(0x004dd5d0); r_esp += 8; return;
}

void f_004dd5f4(void) /* sub_4DD5F4 */
{
    FN_ENTER(0x004dd5f4);
    /* 004dd5f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5f5: mov ebp, esp */ r_ebp = r_esp;
    /* 004dd5f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5f9: push 0x8d250c */ { u32 v = 0x8d250cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dd604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd605: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dd60c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd60f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dd612: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dd615: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dd618: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dd61b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004dd61e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd621: mov dword ptr [ecx], 0xafcef8 */ W32((u32)(r_ecx), 0xafcef8u);
    /* 004dd627: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dd62e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4dd633u); f_008171e8();
    /* 004dd633: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd636: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd63d: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd63f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd640: ret  */ FN_RET(0x004dd5f4); r_esp += 4; return;
}

void f_004dd644(void) /* sub_4DD644 */
{
    FN_ENTER(0x004dd644);
    /* 004dd644: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004dd647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd649: jne 0x4dd651 */ if (!fZ) goto L_004dd651;
L_004dd64b:; BB(0x004dd64b);
    /* 004dd64b: call 0x4dd698 */ r_esp -= 4; W32(r_esp, 0x4dd650u); f_004dd698();
    /* 004dd650: ret  */ FN_RET(0x004dd644); r_esp += 4; return;
L_004dd651:; BB(0x004dd651);
    /* 004dd651: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dd654: jne 0x4dd65b */ if (!fZ) goto L_004dd65b;
L_004dd656:; BB(0x004dd656);
    /* 004dd656: call 0x4dd65c */ r_esp -= 4; W32(r_esp, 0x4dd65bu); f_004dd65c();
L_004dd65b:; BB(0x004dd65b);
    /* 004dd65b: ret  */ FN_RET(0x004dd644); r_esp += 4; return;
}

void f_004dd65c(void) /* sub_4DD65C */
{
    FN_ENTER(0x004dd65c);
    /* 004dd65c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd65d: mov edi, ecx */ r_edi = r_ecx;
    /* 004dd65f: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004dd662: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dd665: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004dd668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd66a: jge 0x4dd693 */ if ((fS==fO)) goto L_004dd693;
L_004dd66c:; BB(0x004dd66c);
    /* 004dd66c: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 004dd66f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd671: je 0x4dd67f */ if (fZ) goto L_004dd67f;
L_004dd673:; BB(0x004dd673);
    /* 004dd673: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dd678u); f_007127b0();
    /* 004dd678: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
L_004dd67f:; BB(0x004dd67f);
    /* 004dd67f: call 0x4da204 */ r_esp -= 4; W32(r_esp, 0x4dd684u); f_004da204();
    /* 004dd684: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004dd688: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd68d: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004dd691: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dd692: ret  */ FN_RET(0x004dd65c); r_esp += 4; return;
L_004dd693:; BB(0x004dd693);
    /* 004dd693: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dd694: ret  */ FN_RET(0x004dd65c); r_esp += 4; return;
}

void f_004dd698(void) /* sub_4DD698 */
{
    FN_ENTER(0x004dd698);
    /* 004dd698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd699: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dd69b: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004dd69e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd6a0: je 0x4dd6a4 */ if (fZ) goto L_004dd6a4;
L_004dd6a2:; BB(0x004dd6a2);
    /* 004dd6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd6a3: ret  */ FN_RET(0x004dd698); r_esp += 4; return;
L_004dd6a4:; BB(0x004dd6a4);
    /* 004dd6a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dd6a6: call 0x4dd6d4 */ r_esp -= 4; W32(r_esp, 0x4dd6abu); f_004dd6d4();
    /* 004dd6ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd6ad: je 0x4dd6a2 */ if (fZ) goto L_004dd6a2;
L_004dd6af:; BB(0x004dd6af);
    /* 004dd6af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dd6b1: call 0x4dd734 */ r_esp -= 4; W32(r_esp, 0x4dd6b6u); f_004dd734();
    /* 004dd6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd6b8: je 0x4dd6a2 */ if (fZ) goto L_004dd6a2;
L_004dd6ba:; BB(0x004dd6ba);
    /* 004dd6ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dd6bc: call 0x4dd748 */ r_esp -= 4; W32(r_esp, 0x4dd6c1u); f_004dd748();
    /* 004dd6c1: mov dword ptr [ebp + 0x24], 0x12c */ W32((u32)(r_ebp+0x24u), 0x12cu);
    /* 004dd6c8: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004dd6cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd6d0: ret  */ FN_RET(0x004dd698); r_esp += 4; return;
}

void f_004dd6d4(void) /* sub_4DD6D4 */
{
    FN_ENTER(0x004dd6d4);
    /* 004dd6d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd6d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd6d6: mov esi, ecx */ r_esi = r_ecx;
    /* 004dd6d8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd6de: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dd6e3u); f_0068d5a8();
    /* 004dd6e3: mov ebp, eax */ r_ebp = r_eax;
    /* 004dd6e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd6e8: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dd6edu); f_00719914();
    /* 004dd6ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd6f0: je 0x4dd6f7 */ if (fZ) goto L_004dd6f7;
L_004dd6f2:; BB(0x004dd6f2);
    /* 004dd6f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd6f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd6f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd6f6: ret  */ FN_RET(0x004dd6d4); r_esp += 4; return;
L_004dd6f7:; BB(0x004dd6f7);
    /* 004dd6f7: mov ecx, esi */ r_ecx = r_esi;
    /* 004dd6f9: call 0x4dd718 */ r_esp -= 4; W32(r_esp, 0x4dd6feu); f_004dd718();
    /* 004dd6fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd700: je 0x4dd6f2 */ if (fZ) goto L_004dd6f2;
L_004dd702:; BB(0x004dd702);
    /* 004dd702: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd704: je 0x4dd6f2 */ if (fZ) goto L_004dd6f2;
L_004dd706:; BB(0x004dd706);
    /* 004dd706: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004dd709: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd70e: jne 0x4dd6f2 */ if (!fZ) goto L_004dd6f2;
L_004dd710:; BB(0x004dd710);
    /* 004dd710: mov eax, 1 */ r_eax = 0x1u;
    /* 004dd715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd716: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd717: ret  */ FN_RET(0x004dd6d4); r_esp += 4; return;
}

void f_004dd718(void) /* sub_4DD718 */
{
    FN_ENTER(0x004dd718);
    /* 004dd718: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x4dd71du); f_00807e10();
    /* 004dd71d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd71f: jne 0x4dd72a */ if (!fZ) goto L_004dd72a;
L_004dd721:; BB(0x004dd721);
    /* 004dd721: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x4dd726u); f_00807db8();
    /* 004dd726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd728: je 0x4dd72d */ if (fZ) goto L_004dd72d;
L_004dd72a:; BB(0x004dd72a);
    /* 004dd72a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd72c: ret  */ FN_RET(0x004dd718); r_esp += 4; return;
L_004dd72d:; BB(0x004dd72d);
    /* 004dd72d: mov eax, 1 */ r_eax = 0x1u;
    /* 004dd732: ret  */ FN_RET(0x004dd718); r_esp += 4; return;
}

void f_004dd734(void) /* sub_4DD734 */
{
    FN_ENTER(0x004dd734);
    /* 004dd734: call 0x4da0a0 */ r_esp -= 4; W32(r_esp, 0x4dd739u); f_004da0a0();
    /* 004dd739: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dd73c: jg 0x4dd744 */ if ((!fZ&&fS==fO)) goto L_004dd744;
L_004dd73e:; BB(0x004dd73e);
    /* 004dd73e: mov eax, 1 */ r_eax = 0x1u;
    /* 004dd743: ret  */ FN_RET(0x004dd734); r_esp += 4; return;
L_004dd744:; BB(0x004dd744);
    /* 004dd744: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd746: ret  */ FN_RET(0x004dd734); r_esp += 4; return;
}

void f_004dd748(void) /* sub_4DD748 */
{
    FN_ENTER(0x004dd748);
    /* 004dd748: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd749: mov esi, ecx */ r_esi = r_ecx;
    /* 004dd74b: movzx eax, byte ptr [0xa49850] */ r_eax = (u32)R8((u32)(0xa49850u));
    /* 004dd752: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dd754: jne 0x4dd774 */ if (!fZ) goto L_004dd774;
L_004dd756:; BB(0x004dd756);
    /* 004dd756: mov dword ptr [0xa49854], 0x43700000 */ W32((u32)(0xa49854u), 0x43700000u);
    /* 004dd760: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dd765: mov byte ptr [0xa49850], al */ W8((u32)(0xa49850u), (u8)r_eax);
    /* 004dd76a: mov dword ptr [0xa49858], 0x43340000 */ W32((u32)(0xa49858u), 0x43340000u);
L_004dd774:; BB(0x004dd774);
    /* 004dd774: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd776: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dd77bu); f_0073ec50();
    /* 004dd77b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd77d: push 0xa49854 */ { u32 v = 0xa49854u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd783: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dd788u); f_0073a8dc();
    /* 004dd788: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd78b: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004dd78e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd790: je 0x4dd7b1 */ if (fZ) goto L_004dd7b1;
L_004dd792:; BB(0x004dd792);
    /* 004dd792: push 0x47891c00 */ { u32 v = 0x47891c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd797: mov ecx, eax */ r_ecx = r_eax;
    /* 004dd799: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4dd79eu); f_00712624();
    /* 004dd79e: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7a0: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dd7a5u); f_007930dc();
    /* 004dd7a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd7a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7a9: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 004dd7ac: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dd7b1u); f_0073ae38();
L_004dd7b1:; BB(0x004dd7b1);
    /* 004dd7b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dd7b2: ret  */ FN_RET(0x004dd748); r_esp += 4; return;
}

void f_004dd7b4(void) /* sub_4DD7B4 */
{
    FN_ENTER(0x004dd7b4);
    /* 004dd7b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004dd7b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7b9: push 0x8d2534 */ { u32 v = 0x8d2534u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dd7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dd7cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd7cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dd7d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dd7d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dd7d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dd7db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd7dd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004dd7e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dd7e9u); f_005caba4();
    /* 004dd7e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd7ea: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004dd7ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd7ef: je 0x4dd822 */ if (fZ) goto L_004dd822;
L_004dd7f1:; BB(0x004dd7f1);
    /* 004dd7f1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004dd7f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dd7ff: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd802: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd805: call 0x4dd828 */ r_esp -= 4; W32(r_esp, 0x4dd80au); f_004dd828();
    /* 004dd80a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd80d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004dd814:; BB(0x004dd814);
    /* 004dd814: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd817: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd81e: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd820: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd821: ret  */ FN_RET(0x004dd7b4); r_esp += 4; return;
L_004dd822:; BB(0x004dd822);
    /* 004dd822: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd824: jmp 0x4dd814 */ goto L_004dd814;
}

void f_004dd828(void) /* sub_4DD828 */
{
    FN_ENTER(0x004dd828);
    /* 004dd828: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dd829: mov edi, ecx */ r_edi = r_ecx;
    /* 004dd82b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd82f: mov ecx, edi */ r_ecx = r_edi;
    /* 004dd831: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4dd836u); f_008193cc();
    /* 004dd836: mov dword ptr [edi], 0xafcef8 */ W32((u32)(r_edi), 0xafcef8u);
    /* 004dd83c: mov edx, dword ptr [0x9b1034] */ r_edx = R32((u32)(0x9b1034u));
    /* 004dd842: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004dd845: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd847: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004dd84a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004dd84d: mov eax, edi */ r_eax = r_edi;
    /* 004dd84f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dd850: ret 4 */ FN_RET(0x004dd828); r_esp += 8; return;
}

void f_004dd854(void) /* sub_4DD854 */
{
    FN_ENTER(0x004dd854);
    /* 004dd854: mov dword ptr [0xa4985c], 0x3f800000 */ W32((u32)(0xa4985cu), 0x3f800000u);
    /* 004dd85e: mov dword ptr [0xa49860], 0x41000000 */ W32((u32)(0xa49860u), 0x41000000u);
    /* 004dd868: mov dword ptr [0xa49864], 0x3fc00000 */ W32((u32)(0xa49864u), 0x3fc00000u);
    /* 004dd872: ret  */ FN_RET(0x004dd854); r_esp += 4; return;
}

void f_004dd874(void) /* sub_4DD874 */
{
    FN_ENTER(0x004dd874);
    /* 004dd874: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd875: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dd877: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dd879: call 0x4dd898 */ r_esp -= 4; W32(r_esp, 0x4dd87eu); f_004dd898();
    /* 004dd87e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004dd882: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd884: jne 0x4dd88a */ if (!fZ) goto L_004dd88a;
L_004dd886:; BB(0x004dd886);
    /* 004dd886: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd887: ret 4 */ FN_RET(0x004dd874); r_esp += 8; return;
L_004dd88a:; BB(0x004dd88a);
    /* 004dd88a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd88b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4dd890u); f_005c2f74();
    /* 004dd890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd891: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd892: ret 4 */ FN_RET(0x004dd874); r_esp += 8; return;
}

void f_004dd898(void) /* sub_4DD898 */
{
    FN_ENTER(0x004dd898);
    /* 004dd898: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd899: mov ebp, esp */ r_ebp = r_esp;
    /* 004dd89b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd89d: push 0x8d2550 */ { u32 v = 0x8d2550u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd8a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dd8a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd8a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dd8b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd8b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dd8b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dd8b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dd8bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dd8bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004dd8c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd8c5: mov dword ptr [ecx], 0xafcf58 */ W32((u32)(r_ecx), 0xafcf58u);
    /* 004dd8cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dd8d2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4dd8d7u); f_008171e8();
    /* 004dd8d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd8da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd8e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd8e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd8e4: ret  */ FN_RET(0x004dd898); r_esp += 4; return;
}

void f_004dd8e8(void) /* sub_4DD8E8 */
{
    FN_ENTER(0x004dd8e8);
    /* 004dd8e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd8e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dd8eb: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dd8f0u); f_00719914();
    /* 004dd8f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd8f2: je 0x4dd912 */ if (fZ) goto L_004dd912;
L_004dd8f4:; BB(0x004dd8f4);
    /* 004dd8f4: call 0x717e84 */ r_esp -= 4; W32(r_esp, 0x4dd8f9u); f_00717e84();
    /* 004dd8f9: call 0x717e84 */ r_esp -= 4; W32(r_esp, 0x4dd8feu); f_00717e84();
    /* 004dd8fe: call 0x717ea8 */ r_esp -= 4; W32(r_esp, 0x4dd903u); f_00717ea8();
    /* 004dd903: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004dd907: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd90c: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004dd910: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd911: ret  */ FN_RET(0x004dd8e8); r_esp += 4; return;
L_004dd912:; BB(0x004dd912);
    /* 004dd912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd913: ret  */ FN_RET(0x004dd8e8); r_esp += 4; return;
}

void f_004dd914(void) /* sub_4DD914 */
{
    FN_ENTER(0x004dd914);
    /* 004dd914: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dd915: mov ebp, esp */ r_ebp = r_esp;
    /* 004dd917: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd919: push 0x8d2578 */ { u32 v = 0x8d2578u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd91e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dd924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd925: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dd92c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dd92f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dd932: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dd935: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dd938: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dd93b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd93d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004dd944: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dd949u); f_005caba4();
    /* 004dd949: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dd94a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004dd94d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dd94f: je 0x4dd982 */ if (fZ) goto L_004dd982;
L_004dd951:; BB(0x004dd951);
    /* 004dd951: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004dd958: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dd95f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd962: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd965: call 0x4dd988 */ r_esp -= 4; W32(r_esp, 0x4dd96au); f_004dd988();
    /* 004dd96a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dd96d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004dd974:; BB(0x004dd974);
    /* 004dd974: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd977: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd97e: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd981: ret  */ FN_RET(0x004dd914); r_esp += 4; return;
L_004dd982:; BB(0x004dd982);
    /* 004dd982: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dd984: jmp 0x4dd974 */ goto L_004dd974;
}

void f_004dd988(void) /* sub_4DD988 */
{
    FN_ENTER(0x004dd988);
    /* 004dd988: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd989: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dd98b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dd98f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dd991: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4dd996u); f_008193cc();
    /* 004dd996: mov dword ptr [ebx], 0xafcf58 */ W32((u32)(r_ebx), 0xafcf58u);
    /* 004dd99c: mov edx, dword ptr [0x9b1038] */ r_edx = R32((u32)(0x9b1038u));
    /* 004dd9a2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004dd9a5: mov eax, ebx */ r_eax = r_ebx;
    /* 004dd9a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dd9a8: ret 4 */ FN_RET(0x004dd988); r_esp += 8; return;
}

void f_004dd9ac(void) /* sub_4DD9AC */
{
    FN_ENTER(0x004dd9ac);
    /* 004dd9ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd9ad: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004dd9b1: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 004dd9b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd9b5: call 0x79ea60 */ r_esp -= 4; W32(r_esp, 0x4dd9bau); f_0079ea60();
    /* 004dd9ba: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd9bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd9bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dd9bf: mov word ptr [0xa49870], ax */ W16((u32)(0xa49870u), (u16)r_eax);
    /* 004dd9c5: push 0xa49870 */ { u32 v = 0xa49870u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd9ca: mov word ptr [0xa49872], ax */ W16((u32)(0xa49872u), (u16)r_eax);
    /* 004dd9d0: mov word ptr [0xa49874], ax */ W16((u32)(0xa49874u), (u16)r_eax);
    /* 004dd9d6: mov word ptr [0xa49876], ax */ W16((u32)(0xa49876u), (u16)r_eax);
    /* 004dd9dc: mov word ptr [0xa49878], ax */ W16((u32)(0xa49878u), (u16)r_eax);
    /* 004dd9e2: mov word ptr [0xa4987a], ax */ W16((u32)(0xa4987au), (u16)r_eax);
    /* 004dd9e8: mov word ptr [0xa4987c], ax */ W16((u32)(0xa4987cu), (u16)r_eax);
    /* 004dd9ee: mov word ptr [0xa4987e], ax */ W16((u32)(0xa4987eu), (u16)r_eax);
    /* 004dd9f4: mov word ptr [0xa49880], ax */ W16((u32)(0xa49880u), (u16)r_eax);
    /* 004dd9fa: mov word ptr [0xa49882], ax */ W16((u32)(0xa49882u), (u16)r_eax);
    /* 004dda00: mov word ptr [0xa49884], ax */ W16((u32)(0xa49884u), (u16)r_eax);
    /* 004dda06: mov word ptr [0xa49886], ax */ W16((u32)(0xa49886u), (u16)r_eax);
    /* 004dda0c: mov word ptr [0xa49888], ax */ W16((u32)(0xa49888u), (u16)r_eax);
    /* 004dda12: mov word ptr [0xa4988a], ax */ W16((u32)(0xa4988au), (u16)r_eax);
    /* 004dda18: mov word ptr [0xa4988c], ax */ W16((u32)(0xa4988cu), (u16)r_eax);
    /* 004dda1e: mov word ptr [0xa4988e], ax */ W16((u32)(0xa4988eu), (u16)r_eax);
    /* 004dda24: mov word ptr [0xa49890], ax */ W16((u32)(0xa49890u), (u16)r_eax);
    /* 004dda2a: mov word ptr [0xa49892], ax */ W16((u32)(0xa49892u), (u16)r_eax);
    /* 004dda30: mov word ptr [0xa49894], ax */ W16((u32)(0xa49894u), (u16)r_eax);
    /* 004dda36: mov word ptr [0xa49896], ax */ W16((u32)(0xa49896u), (u16)r_eax);
    /* 004dda3c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4dda41u); f_00857dec();
    /* 004dda41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dda43: mov word ptr [0xa49890], ax */ W16((u32)(0xa49890u), (u16)r_eax);
    /* 004dda49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dda4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dda4d: ret  */ FN_RET(0x004dd9ac); r_esp += 4; return;
}

void f_004dda50(void) /* sub_4DDA50 */
{
    FN_ENTER(0x004dda50);
    /* 004dda50: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004dda56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dda58: mov word ptr [0xa49870], ax */ W16((u32)(0xa49870u), (u16)r_eax);
    /* 004dda5e: mov word ptr [0xa49872], ax */ W16((u32)(0xa49872u), (u16)r_eax);
    /* 004dda64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dda66: mov word ptr [0xa49874], ax */ W16((u32)(0xa49874u), (u16)r_eax);
    /* 004dda6c: mov word ptr [0xa49876], ax */ W16((u32)(0xa49876u), (u16)r_eax);
    /* 004dda72: mov word ptr [0xa49878], ax */ W16((u32)(0xa49878u), (u16)r_eax);
    /* 004dda78: mov word ptr [0xa4987a], ax */ W16((u32)(0xa4987au), (u16)r_eax);
    /* 004dda7e: mov word ptr [0xa4987c], ax */ W16((u32)(0xa4987cu), (u16)r_eax);
    /* 004dda84: mov word ptr [0xa4987e], ax */ W16((u32)(0xa4987eu), (u16)r_eax);
    /* 004dda8a: mov word ptr [0xa49880], ax */ W16((u32)(0xa49880u), (u16)r_eax);
    /* 004dda90: mov word ptr [0xa49882], ax */ W16((u32)(0xa49882u), (u16)r_eax);
    /* 004dda96: mov word ptr [0xa49884], ax */ W16((u32)(0xa49884u), (u16)r_eax);
    /* 004dda9c: mov word ptr [0xa49886], ax */ W16((u32)(0xa49886u), (u16)r_eax);
    /* 004ddaa2: mov word ptr [0xa49888], ax */ W16((u32)(0xa49888u), (u16)r_eax);
    /* 004ddaa8: mov word ptr [0xa4988a], ax */ W16((u32)(0xa4988au), (u16)r_eax);
    /* 004ddaae: mov word ptr [0xa4988c], ax */ W16((u32)(0xa4988cu), (u16)r_eax);
    /* 004ddab4: mov word ptr [0xa4988e], ax */ W16((u32)(0xa4988eu), (u16)r_eax);
    /* 004ddaba: mov word ptr [0xa49890], ax */ W16((u32)(0xa49890u), (u16)r_eax);
    /* 004ddac0: mov word ptr [0xa49892], ax */ W16((u32)(0xa49892u), (u16)r_eax);
    /* 004ddac6: mov word ptr [0xa49894], ax */ W16((u32)(0xa49894u), (u16)r_eax);
    /* 004ddacc: mov word ptr [0xa49896], ax */ W16((u32)(0xa49896u), (u16)r_eax);
    /* 004ddad2: je 0x4ddae9 */ if (fZ) goto L_004ddae9;
L_004ddad4:; BB(0x004ddad4);
    /* 004ddad4: mov dword ptr [ecx + 0x1e124], 0x4dd9ac */ W32((u32)(r_ecx+0x1e124u), 0x4dd9acu);
    /* 004ddade: call 0x7d7b50 */ r_esp -= 4; W32(r_esp, 0x4ddae3u); f_007d7b50();
    /* 004ddae3: mov eax, 1 */ r_eax = 0x1u;
    /* 004ddae8: ret  */ FN_RET(0x004dda50); r_esp += 4; return;
L_004ddae9:; BB(0x004ddae9);
    /* 004ddae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ddaeb: ret  */ FN_RET(0x004dda50); r_esp += 4; return;
}

void f_004ddaec(void) /* sub_4DDAEC */
{
    FN_ENTER(0x004ddaec);
    /* 004ddaec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ddaed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ddaef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ddaf1: call 0x4ddb10 */ r_esp -= 4; W32(r_esp, 0x4ddaf6u); f_004ddb10();
    /* 004ddaf6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ddafa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ddafc: jne 0x4ddb02 */ if (!fZ) goto L_004ddb02;
L_004ddafe:; BB(0x004ddafe);
    /* 004ddafe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddaff: ret 4 */ FN_RET(0x004ddaec); r_esp += 8; return;
L_004ddb02:; BB(0x004ddb02);
    /* 004ddb02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ddb03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ddb08u); f_005c2f74();
    /* 004ddb08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddb09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddb0a: ret 4 */ FN_RET(0x004ddaec); r_esp += 8; return;
}

void f_004ddb10(void) /* sub_4DDB10 */
{
    FN_ENTER(0x004ddb10);
    /* 004ddb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ddb11: mov ebp, esp */ r_ebp = r_esp;
    /* 004ddb13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ddb15: push 0x8d2594 */ { u32 v = 0x8d2594u; r_esp -= 4; W32(r_esp, v); }
    /* 004ddb1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ddb20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ddb21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ddb28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ddb2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ddb2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ddb31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ddb34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ddb37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ddb3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ddb3d: mov dword ptr [ecx], 0xafcfb8 */ W32((u32)(r_ecx), 0xafcfb8u);
    /* 004ddb43: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ddb4a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ddb4fu); f_008171e8();
    /* 004ddb4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ddb52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ddb59: mov esp, ebp */ r_esp = r_ebp;
    /* 004ddb5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ddb5c: ret  */ FN_RET(0x004ddb10); r_esp += 4; return;
}

void f_004ddb60(void) /* sub_4DDB60 */
{
    FN_ENTER(0x004ddb60);
    /* 004ddb60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ddb61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ddb63: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004ddb66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddb68: je 0x4ddb78 */ if (fZ) goto L_004ddb78;
L_004ddb6a:; BB(0x004ddb6a);
    /* 004ddb6a: push dword ptr [0xa4989c] */ { u32 v = R32((u32)(0xa4989cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ddb70: call 0x717e28 */ r_esp -= 4; W32(r_esp, 0x4ddb75u); f_00717e28();
    /* 004ddb75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddb76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddb77: ret  */ FN_RET(0x004ddb60); r_esp += 4; return;
L_004ddb78:; BB(0x004ddb78);
    /* 004ddb78: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4ddb7du); f_00719914();
    /* 004ddb7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ddb80: je 0x4ddb84 */ if (fZ) goto L_004ddb84;
L_004ddb82:; BB(0x004ddb82);
    /* 004ddb82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddb83: ret  */ FN_RET(0x004ddb60); r_esp += 4; return;
L_004ddb84:; BB(0x004ddb84);
    /* 004ddb84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ddb86: call 0x4ddb94 */ r_esp -= 4; W32(r_esp, 0x4ddb8bu); f_004ddb94();
    /* 004ddb8b: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004ddb92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddb93: ret  */ FN_RET(0x004ddb60); r_esp += 4; return;
}

void f_004ddb94(void) /* sub_4DDB94 */
{
    FN_ENTER(0x004ddb94);
    /* 004ddb94: call 0x717de4 */ r_esp -= 4; W32(r_esp, 0x4ddb99u); f_00717de4();
    /* 004ddb99: push dword ptr [0xa4989c] */ { u32 v = R32((u32)(0xa4989cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ddb9f: call 0x717e28 */ r_esp -= 4; W32(r_esp, 0x4ddba4u); f_00717e28();
    /* 004ddba4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddba5: ret  */ FN_RET(0x004ddb94); r_esp += 4; return;
}

void f_004ddba8(void) /* sub_4DDBA8 */
{
    FN_ENTER(0x004ddba8);
    /* 004ddba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ddba9: mov ebp, esp */ r_ebp = r_esp;
    /* 004ddbab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ddbad: push 0x8d25bc */ { u32 v = 0x8d25bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ddbb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ddbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ddbb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ddbc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ddbc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ddbc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ddbc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ddbcc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ddbcf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004ddbd1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ddbd8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ddbddu); f_005caba4();
    /* 004ddbdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddbde: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ddbe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddbe3: je 0x4ddc16 */ if (fZ) goto L_004ddc16;
L_004ddbe5:; BB(0x004ddbe5);
    /* 004ddbe5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ddbec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ddbf3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ddbf6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ddbf9: call 0x4ddc1c */ r_esp -= 4; W32(r_esp, 0x4ddbfeu); f_004ddc1c();
    /* 004ddbfe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ddc01: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ddc08:; BB(0x004ddc08);
    /* 004ddc08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ddc0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ddc12: mov esp, ebp */ r_esp = r_ebp;
    /* 004ddc14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ddc15: ret  */ FN_RET(0x004ddba8); r_esp += 4; return;
L_004ddc16:; BB(0x004ddc16);
    /* 004ddc16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ddc18: jmp 0x4ddc08 */ goto L_004ddc08;
}

void f_004ddc1c(void) /* sub_4DDC1C */
{
    FN_ENTER(0x004ddc1c);
    /* 004ddc1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ddc1f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ddc23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ddc25: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ddc2au); f_008193cc();
    /* 004ddc2a: mov dword ptr [ebx], 0xafcfb8 */ W32((u32)(r_ebx), 0xafcfb8u);
    /* 004ddc30: mov edx, dword ptr [0x9b1040] */ r_edx = R32((u32)(0x9b1040u));
    /* 004ddc36: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004ddc39: mov eax, ebx */ r_eax = r_ebx;
    /* 004ddc3b: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 004ddc42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddc43: ret 4 */ FN_RET(0x004ddc1c); r_esp += 8; return;
}

void f_004ddc48(void) /* sub_4DDC48 */
{
    FN_ENTER(0x004ddc48);
    /* 004ddc48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ddc4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ddc4d: call 0x4ddc6c */ r_esp -= 4; W32(r_esp, 0x4ddc52u); f_004ddc6c();
    /* 004ddc52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ddc56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ddc58: jne 0x4ddc5e */ if (!fZ) goto L_004ddc5e;
L_004ddc5a:; BB(0x004ddc5a);
    /* 004ddc5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddc5b: ret 4 */ FN_RET(0x004ddc48); r_esp += 8; return;
L_004ddc5e:; BB(0x004ddc5e);
    /* 004ddc5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ddc64u); f_005c2f74();
    /* 004ddc64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddc65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ddc66: ret 4 */ FN_RET(0x004ddc48); r_esp += 8; return;
}

void f_004ddc6c(void) /* sub_4DDC6C */
{
    FN_ENTER(0x004ddc6c);
    /* 004ddc6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc6d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ddc6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc71: push 0x8d25d8 */ { u32 v = 0x8d25d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ddc7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ddc7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ddc84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ddc87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ddc8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ddc8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ddc90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ddc93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ddc96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ddc99: mov dword ptr [ecx], 0xafd068 */ W32((u32)(r_ecx), 0xafd068u);
    /* 004ddc9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ddca6: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x4ddcabu); f_007b4aec();
    /* 004ddcab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ddcae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ddcb5: mov esp, ebp */ r_esp = r_ebp;
    /* 004ddcb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ddcb8: ret  */ FN_RET(0x004ddc6c); r_esp += 4; return;
}

void f_004ddcbc(void) /* sub_4DDCBC */
{
    FN_ENTER(0x004ddcbc);
    /* 004ddcbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ddcbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ddcbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ddcbf: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ddcc2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ddcc4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ddcc6: call 0x4de0e8 */ r_esp -= 4; W32(r_esp, 0x4ddccbu); f_004de0e8();
    /* 004ddccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddccd: je 0x4ddce3 */ if (fZ) goto L_004ddce3;
L_004ddccf:; BB(0x004ddccf);
    /* 004ddccf: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004ddcd3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ddcd8: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004ddcdc: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ddcdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ddce0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ddce1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ddce2: ret  */ FN_RET(0x004ddcbc); r_esp += 4; return;
L_004ddce3:; BB(0x004ddce3);
    /* 004ddce3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ddce5: call 0x4de10c */ r_esp -= 4; W32(r_esp, 0x4ddceau); f_004de10c();
    /* 004ddcea: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 004ddcf0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ddcf2: call 0x4de164 */ r_esp -= 4; W32(r_esp, 0x4ddcf7u); f_004de164();
    /* 004ddcf7: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 004ddcfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddcff: jne 0x4dde64 */ if (!fZ) goto L_004dde64;
L_004ddd05:; BB(0x004ddd05);
    /* 004ddd05: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004ddd0a: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddd10: je 0x4ddd21 */ if (fZ) goto L_004ddd21;
L_004ddd12:; BB(0x004ddd12);
    /* 004ddd12: mov dword ptr [ebp + 0x388], 1 */ W32((u32)(r_ebp+0x388u), 0x1u);
    /* 004ddd1c: jmp 0x4dde64 */ goto L_004dde64;
L_004ddd21:; BB(0x004ddd21);
    /* 004ddd21: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4ddd26u); f_00719914();
    /* 004ddd26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddd28: je 0x4dde64 */ if (fZ) goto L_004dde64;
L_004ddd2e:; BB(0x004ddd2e);
    /* 004ddd2e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004ddd30:; BB(0x004ddd30);
    /* 004ddd30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ddd31: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4ddd36u); f_0068d5a8();
    /* 004ddd36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddd37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddd39: je 0x4ddd49 */ if (fZ) goto L_004ddd49;
L_004ddd3b:; BB(0x004ddd3b);
    /* 004ddd3b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 004ddd3e: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddd43: jne 0x4dde64 */ if (!fZ) goto L_004dde64;
L_004ddd49:; BB(0x004ddd49);
    /* 004ddd49: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ddd4c: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ddd4f: jl 0x4ddd30 */ if ((fS!=fO)) goto L_004ddd30;
L_004ddd51:; BB(0x004ddd51);
    /* 004ddd51: fld dword ptr [0x909dd4] */ FPUSH(R_F32((u32)(0x909dd4u)));
    /* 004ddd57: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004ddd5b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004ddd5d:; BB(0x004ddd5d);
    /* 004ddd5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ddd5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4ddd63u); f_0068d5a8();
    /* 004ddd63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ddd64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddd66: je 0x4dddaa */ if (fZ) goto L_004dddaa;
L_004ddd68:; BB(0x004ddd68);
    /* 004ddd68: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004ddd6b: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 004ddd6e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004ddd71: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004ddd74: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004ddd77: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004ddd7b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ddd7f: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004ddd82: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4ddd87u); f_0082f9c4();
    /* 004ddd87: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004ddd8f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004ddd92: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4ddd97u); f_0083173c();
    /* 004ddd97: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004ddd9b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004ddd9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddd9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddda0: jbe 0x4de08a */ if ((fC||fZ)) goto L_004de08a;
L_004ddda6:; BB(0x004ddda6);
    /* 004ddda6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004dddaa:; BB(0x004dddaa);
    /* 004dddaa: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004dddad: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dddb0: jl 0x4ddd5d */ if ((fS!=fO)) goto L_004ddd5d;
L_004dddb2:; BB(0x004dddb2);
    /* 004dddb2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004dddb6: fcomp dword ptr [0x909c88] */ fx_compare(ST(0), R_F32((u32)(0x909c88u))); FPOP();
    /* 004dddbc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dddbe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dddbf: jae 0x4dde64 */ if (!fC) goto L_004dde64;
L_004dddc5:; BB(0x004dddc5);
    /* 004dddc5: mov dword ptr [ebp + 0x388], 1 */ W32((u32)(r_ebp+0x388u), 0x1u);
    /* 004dddcf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4dddd4u); f_008587a5();
    /* 004dddd4: fld dword ptr [0xa498e4] */ FPUSH(R_F32((u32)(0xa498e4u)));
    /* 004dddda: fld dword ptr [0x909dd0] */ FPUSH(R_F32((u32)(0x909dd0u)));
    /* 004ddde0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ddde4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddde6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddde8: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004dddec: fdiv dword ptr [0x909dcc] */ ST(0) = ST(0) / R_F32((u32)(0x909dccu));
    /* 004dddf2: mov esi, 1 */ r_esi = 0x1u;
    /* 004dddf7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dddf8: je 0x4dde01 */ if (fZ) goto L_004dde01;
L_004dddfa:; BB(0x004dddfa);
    /* 004dddfa: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004dddfc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dddfe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dddff: jbe 0x4dde7c */ if ((fC||fZ)) goto L_004dde7c;
L_004dde01:; BB(0x004dde01);
    /* 004dde01: fld dword ptr [0xa498e8] */ FPUSH(R_F32((u32)(0xa498e8u)));
    /* 004dde07: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004dde09: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004dde0b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004dde0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dde0f: mov esi, 2 */ r_esi = 0x2u;
    /* 004dde14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dde15: je 0x4dde22 */ if (fZ) goto L_004dde22;
L_004dde17:; BB(0x004dde17);
    /* 004dde17: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004dde19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dde1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dde1c: jae 0x4de091 */ if (!fC) goto L_004de091;
L_004dde22:; BB(0x004dde22);
    /* 004dde22: fld dword ptr [0xa498ec] */ FPUSH(R_F32((u32)(0xa498ecu)));
    /* 004dde28: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004dde2a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004dde2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dde2e: mov esi, 3 */ r_esi = 0x3u;
    /* 004dde33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dde34: je 0x4dde41 */ if (fZ) goto L_004dde41;
L_004dde36:; BB(0x004dde36);
    /* 004dde36: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004dde38: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dde3a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dde3b: jae 0x4de09c */ if (!fC) goto L_004de09c;
L_004dde41:; BB(0x004dde41);
    /* 004dde41: fld dword ptr [0xa498f0] */ FPUSH(R_F32((u32)(0xa498f0u)));
    /* 004dde47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004dde49: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004dde4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004dde4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004dde4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dde51: mov esi, 4 */ r_esi = 0x4u;
    /* 004dde56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dde57: je 0x4de0a7 */ if (fZ) goto L_004de0a7;
L_004dde5d:; BB(0x004dde5d);
    /* 004dde5d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004dde5f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dde61: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dde62: jae 0x4dde82 */ if (!fC) goto L_004dde82;
L_004dde64:; BB(0x004dde64);
    /* 004dde64: add dword ptr [ebp + 0x384], 1 */ { u32 ad = (u32)(r_ebp+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004dde6b: mov dword ptr [0xa4990c], 0 */ W32((u32)(0xa4990cu), 0x0u);
    /* 004dde75: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dde78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dde79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dde7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dde7b: ret  */ FN_RET(0x004ddcbc); r_esp += 4; return;
L_004dde7c:; BB(0x004dde7c);
    /* 004dde7c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004dde7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004dde80: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004dde82:; BB(0x004dde82);
    /* 004dde82: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dde84: je 0x4dde64 */ if (fZ) goto L_004dde64;
L_004dde86:; BB(0x004dde86);
    /* 004dde86: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004dde8a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004dde8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dde8e: mov ebx, eax */ r_ebx = r_eax;
L_004dde90:; BB(0x004dde90);
    /* 004dde90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dde91: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dde96u); f_0068d5a8();
    /* 004dde96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dde97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dde99: je 0x4dde9e */ if (fZ) goto L_004dde9e;
L_004dde9b:; BB(0x004dde9b);
    /* 004dde9b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004dde9e:; BB(0x004dde9e);
    /* 004dde9e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ddea1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ddea4: jl 0x4dde90 */ if ((fS!=fO)) goto L_004dde90;
L_004ddea6:; BB(0x004ddea6);
    /* 004ddea6: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004ddeaa: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ddeac: jle 0x4ddeb0 */ if ((fZ||fS!=fO)) goto L_004ddeb0;
L_004ddeae:; BB(0x004ddeae);
    /* 004ddeae: mov esi, edi */ r_esi = r_edi;
L_004ddeb0:; BB(0x004ddeb0);
    /* 004ddeb0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ddeb5u); f_008587a5();
    /* 004ddeb5: fld dword ptr [0xa498f4] */ FPUSH(R_F32((u32)(0xa498f4u)));
    /* 004ddebb: fld dword ptr [0x909dd0] */ FPUSH(R_F32((u32)(0x909dd0u)));
    /* 004ddec1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ddec5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddec7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddec9: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ddecd: fdiv dword ptr [0x909dcc] */ ST(0) = ST(0) / R_F32((u32)(0x909dccu));
    /* 004dded3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004dded5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dded6: je 0x4ddee3 */ if (fZ) goto L_004ddee3;
L_004dded8:; BB(0x004dded8);
    /* 004dded8: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ddeda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddedc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddedd: jbe 0x4ddf89 */ if ((fC||fZ)) goto L_004ddf89;
L_004ddee3:; BB(0x004ddee3);
    /* 004ddee3: fld dword ptr [0xa498f8] */ FPUSH(R_F32((u32)(0xa498f8u)));
    /* 004ddee9: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004ddeeb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ddeed: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddeef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddef1: mov edx, 1 */ r_edx = 0x1u;
    /* 004ddef6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddef7: je 0x4ddf04 */ if (fZ) goto L_004ddf04;
L_004ddef9:; BB(0x004ddef9);
    /* 004ddef9: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ddefb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddefd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddefe: jae 0x4de0b0 */ if (!fC) goto L_004de0b0;
L_004ddf04:; BB(0x004ddf04);
    /* 004ddf04: fld dword ptr [0xa498fc] */ FPUSH(R_F32((u32)(0xa498fcu)));
    /* 004ddf0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ddf0c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddf0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf10: mov edx, 2 */ r_edx = 0x2u;
    /* 004ddf15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf16: je 0x4ddf23 */ if (fZ) goto L_004ddf23;
L_004ddf18:; BB(0x004ddf18);
    /* 004ddf18: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ddf1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf1d: jae 0x4de0bb */ if (!fC) goto L_004de0bb;
L_004ddf23:; BB(0x004ddf23);
    /* 004ddf23: fld dword ptr [0xa49900] */ FPUSH(R_F32((u32)(0xa49900u)));
    /* 004ddf29: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ddf2b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddf2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf2f: mov edx, 3 */ r_edx = 0x3u;
    /* 004ddf34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf35: je 0x4ddf42 */ if (fZ) goto L_004ddf42;
L_004ddf37:; BB(0x004ddf37);
    /* 004ddf37: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ddf39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf3c: jae 0x4de0c6 */ if (!fC) goto L_004de0c6;
L_004ddf42:; BB(0x004ddf42);
    /* 004ddf42: fld dword ptr [0xa49904] */ FPUSH(R_F32((u32)(0xa49904u)));
    /* 004ddf48: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ddf4a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddf4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf4e: mov edx, 4 */ r_edx = 0x4u;
    /* 004ddf53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf54: je 0x4ddf61 */ if (fZ) goto L_004ddf61;
L_004ddf56:; BB(0x004ddf56);
    /* 004ddf56: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ddf58: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf5a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf5b: jae 0x4de0d1 */ if (!fC) goto L_004de0d1;
L_004ddf61:; BB(0x004ddf61);
    /* 004ddf61: fld dword ptr [0xa49908] */ FPUSH(R_F32((u32)(0xa49908u)));
    /* 004ddf67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ddf69: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ddf6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ddf6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ddf6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf71: mov edx, 5 */ r_edx = 0x5u;
    /* 004ddf76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf77: je 0x4de0dc */ if (fZ) goto L_004de0dc;
L_004ddf7d:; BB(0x004ddf7d);
    /* 004ddf7d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004ddf7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ddf81: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ddf82: jae 0x4ddf8f */ if (!fC) goto L_004ddf8f;
L_004ddf84:; BB(0x004ddf84);
    /* 004ddf84: jmp 0x4dde64 */ goto L_004dde64;
L_004ddf89:; BB(0x004ddf89);
    /* 004ddf89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ddf8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ddf8d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004ddf8f:; BB(0x004ddf8f);
    /* 004ddf8f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ddf92: je 0x4dde64 */ if (fZ) goto L_004dde64;
L_004ddf98:; BB(0x004ddf98);
    /* 004ddf98: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004ddf9b: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004ddf9f: mov eax, esi */ r_eax = r_esi;
    /* 004ddfa1: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 004ddfa5: shl eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ddfa8: lea edi, [eax - 0x2000] */ r_edi = (u32)(r_eax+0xffffe000u);
    /* 004ddfae: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004ddfb2: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 004ddfb5: lea eax, [eax + edi - 0x2000] */ r_eax = (u32)(r_eax+r_edi+0xffffe000u);
    /* 004ddfbc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ddfbe: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ddfc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ddfc2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004ddfc4: mov ebx, eax */ r_ebx = r_eax;
    /* 004ddfc6: mov esi, ecx */ r_esi = r_ecx;
L_004ddfc8:; BB(0x004ddfc8);
    /* 004ddfc8: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004ddfcb: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004ddfcf: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004ddfd2: mov ecx, esi */ r_ecx = r_esi;
    /* 004ddfd4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004ddfd8: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004ddfdb: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004ddfdf: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ddfe4u); f_0082ddd8();
    /* 004ddfe4: fld dword ptr [0x909c84] */ FPUSH(R_F32((u32)(0x909c84u)));
    /* 004ddfea: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ddfec: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004ddff0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004ddff4: mov ecx, esi */ r_ecx = r_esi;
    /* 004ddff6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ddffbu); f_0082dcbc();
    /* 004ddffb: fld dword ptr [0x909c84] */ FPUSH(R_F32((u32)(0x909c84u)));
    /* 004de001: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004de003: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 004de007: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004de00b: fadd dword ptr [0x909c80] */ ST(0) = ST(0) + R_F32((u32)(0x909c80u));
    /* 004de011: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de013: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004de017: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004de01b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004de01f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004de021: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004de023: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004de024: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x4de029u); f_007b4c58();
    /* 004de029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de02b: je 0x4de060 */ if (fZ) goto L_004de060;
L_004de02d:; BB(0x004de02d);
    /* 004de02d: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004de031: fadd dword ptr [0x909c80] */ ST(0) = ST(0) + R_F32((u32)(0x909c80u));
    /* 004de037: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 004de03e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004de042: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004de046: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004de047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de048: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 004de04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004de04d: call 0x5c4e3c */ r_esp -= 4; W32(r_esp, 0x4de052u); f_005c4e3c();
    /* 004de052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004de055: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004de059: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004de05c: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de05e: jge 0x4de081 */ if ((fS==fO)) goto L_004de081;
L_004de060:; BB(0x004de060);
    /* 004de060: add esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004de066: add edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004de06c: cmp edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de072: jl 0x4ddfc8 */ if ((fS!=fO)) goto L_004ddfc8;
L_004de078:; BB(0x004de078);
    /* 004de078: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004de07c: jmp 0x4dde64 */ goto L_004dde64;
L_004de081:; BB(0x004de081);
    /* 004de081: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004de085: jmp 0x4dde64 */ goto L_004dde64;
L_004de08a:; BB(0x004de08a);
    /* 004de08a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de08c: jmp 0x4dddaa */ goto L_004dddaa;
L_004de091:; BB(0x004de091);
    /* 004de091: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de093: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de095: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de097: jmp 0x4dde82 */ goto L_004dde82;
L_004de09c:; BB(0x004de09c);
    /* 004de09c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de09e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0a0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0a2: jmp 0x4dde82 */ goto L_004dde82;
L_004de0a7:; BB(0x004de0a7);
    /* 004de0a7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0ab: jmp 0x4dde64 */ goto L_004dde64;
L_004de0b0:; BB(0x004de0b0);
    /* 004de0b0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0b2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0b6: jmp 0x4ddf8f */ goto L_004ddf8f;
L_004de0bb:; BB(0x004de0bb);
    /* 004de0bb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0bd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0bf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0c1: jmp 0x4ddf8f */ goto L_004ddf8f;
L_004de0c6:; BB(0x004de0c6);
    /* 004de0c6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0c8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0cc: jmp 0x4ddf8f */ goto L_004ddf8f;
L_004de0d1:; BB(0x004de0d1);
    /* 004de0d1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0d3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0d7: jmp 0x4ddf8f */ goto L_004ddf8f;
L_004de0dc:; BB(0x004de0dc);
    /* 004de0dc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de0de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de0e0: jmp 0x4dde64 */ goto L_004dde64;
}

