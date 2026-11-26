#include "protos.h"

void f_00411050(void) /* sub_411050 */
{
    FN_ENTER(0x00411050);
    /* 00411050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411051: mov ebp, esp */ r_ebp = r_esp;
    /* 00411053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411055: push 0x8ccb28 */ { u32 v = 0x8ccb28u; r_esp -= 4; W32(r_esp, v); }
    /* 0041105a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411068: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041106b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041106e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00411074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00411077: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041107a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041107d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x411082u); f_008193cc();
    /* 00411082: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411089: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041108c: mov dword ptr [edx], 0xaf2f98 */ W32((u32)(r_edx), 0xaf2f98u);
    /* 00411092: mov eax, dword ptr [0x9a34dc] */ r_eax = R32((u32)(0x9a34dcu));
    /* 00411097: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041109d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004110a0: call 0x411160 */ r_esp -= 4; W32(r_esp, 0x4110a5u); f_00411160();
    /* 004110a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004110a6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004110a9: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004110ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004110ae: je 0x4110d9 */ if (fZ) goto L_004110d9;
L_004110b0:; BB(0x004110b0);
    /* 004110b0: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004110b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004110ba: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004110bd: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 004110c4: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 004110cb: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 004110d2: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
L_004110d9:; BB(0x004110d9);
    /* 004110d9: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004110df: call 0x411160 */ r_esp -= 4; W32(r_esp, 0x4110e4u); f_00411160();
    /* 004110e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004110e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004110e9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004110ec: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004110ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004110f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004110f3: je 0x411117 */ if (fZ) goto L_00411117;
L_004110f5:; BB(0x004110f5);
    /* 004110f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004110f7: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004110fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004110fd: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00411100: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00411102: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 00411105: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00411107: mov dword ptr [ecx + 0x20], esi */ W32((u32)(r_ecx+0x20u), r_esi);
    /* 0041110a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0041110c: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0041110f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00411111: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00411114: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00411117:; BB(0x00411117);
    /* 00411117: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0041111e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00411121: mov ecx, edx */ r_ecx = r_edx;
    /* 00411123: mov dword ptr [ebp - 0x2c], 0x3fe66666 */ W32((u32)(r_ebp+0xffffffd4u), 0x3fe66666u);
    /* 0041112a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0041112d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041112e: mov dword ptr [ebp - 0x28], 0x3e99999a */ W32((u32)(r_ebp+0xffffffd8u), 0x3e99999au);
    /* 00411135: mov dword ptr [ebp - 0x24], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffdcu), 0xc0a00000u);
    /* 0041113c: call 0x4112f0 */ r_esp -= 4; W32(r_esp, 0x411141u); f_004112f0();
    /* 00411141: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411144: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411147: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041114a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041114d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411157: mov esp, ebp */ r_esp = r_ebp;
    /* 00411159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041115a: ret 4 */ FN_RET(0x00411050); r_esp += 8; return;
}

void f_00411160(void) /* sub_411160 */
{
    FN_ENTER(0x00411160);
    /* 00411160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411161: mov ebp, esp */ r_ebp = r_esp;
    /* 00411163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411165: push 0x8ccb50 */ { u32 v = 0x8ccb50u; r_esp -= 4; W32(r_esp, v); }
    /* 0041116a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411178: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041117b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041117e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411181: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00411184: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00411187: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00411189: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00411190: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411195u); f_005caba4();
    /* 00411195: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411196: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00411199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041119b: je 0x4111ce */ if (fZ) goto L_004111ce;
L_0041119d:; BB(0x0041119d);
    /* 0041119d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004111a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004111ab: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004111ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004111b1: call 0x4111d4 */ r_esp -= 4; W32(r_esp, 0x4111b6u); f_004111d4();
    /* 004111b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004111b9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004111c0:; BB(0x004111c0);
    /* 004111c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004111c3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004111ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004111cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004111cd: ret  */ FN_RET(0x00411160); r_esp += 4; return;
L_004111ce:; BB(0x004111ce);
    /* 004111ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004111d0: jmp 0x4111c0 */ goto L_004111c0;
}

void f_004111d4(void) /* sub_4111D4 */
{
    FN_ENTER(0x004111d4);
    /* 004111d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004111d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004111d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004111d9: push 0x8ccb6c */ { u32 v = 0x8ccb6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004111de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004111e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004111e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004111ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004111ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004111f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004111f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004111f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004111fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004111fe: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00411201: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x411206u); f_008193cc();
    /* 00411206: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041120d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411210: mov dword ptr [edx], 0xaf2f88 */ W32((u32)(r_edx), 0xaf2f88u);
    /* 00411216: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00411218: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 0041121b: mov eax, dword ptr [0x9a34d8] */ r_eax = R32((u32)(0x9a34d8u));
    /* 00411220: mov ecx, dword ptr [0xa3b040] */ r_ecx = R32((u32)(0xa3b040u));
    /* 00411226: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00411227: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0041122a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x41122fu); f_005b8610();
    /* 0041122f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411232: mov ecx, dword ptr [0xa3b040] */ r_ecx = R32((u32)(0xa3b040u));
    /* 00411238: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041123a: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0041123d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x411242u); f_005b8624();
    /* 00411242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411245: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00411248: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 0041124f: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00411252: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00411259: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041125b: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0041125e: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 00411261: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00411268: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0041126b: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0041126e: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00411271: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00411278: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 0041127f: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 00411286: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0041128d: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 00411294: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 0041129b: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 004112a2: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 004112a9: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 004112b0: mov dword ptr [ecx + 0x30], 0x5b0 */ W32((u32)(r_ecx+0x30u), 0x5b0u);
    /* 004112b7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4112bcu); f_006dc358();
    /* 004112bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004112be: jne 0x4112cc */ if (!fZ) goto L_004112cc;
L_004112c0:; BB(0x004112c0);
    /* 004112c0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004112c3: mov dword ptr [edx + 0x48], 0x12 */ W32((u32)(r_edx+0x48u), 0x12u);
    /* 004112ca: jmp 0x4112db */ goto L_004112db;
L_004112cc:; BB(0x004112cc);
    /* 004112cc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004112cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004112d2: jne 0x4112db */ if (!fZ) goto L_004112db;
L_004112d4:; BB(0x004112d4);
    /* 004112d4: mov dword ptr [edx + 0x48], 0x15 */ W32((u32)(r_edx+0x48u), 0x15u);
L_004112db:; BB(0x004112db);
    /* 004112db: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004112de: mov eax, edx */ r_eax = r_edx;
    /* 004112e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004112e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004112ea: mov esp, ebp */ r_esp = r_ebp;
    /* 004112ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004112ed: ret 4 */ FN_RET(0x004111d4); r_esp += 8; return;
}

void f_004112f0(void) /* sub_4112F0 */
{
    FN_ENTER(0x004112f0);
    /* 004112f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004112f1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004112f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004112f7: je 0x411341 */ if (fZ) goto L_00411341;
L_004112f9:; BB(0x004112f9);
    /* 004112f9: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004112fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004112fe: je 0x411311 */ if (fZ) goto L_00411311;
L_00411300:; BB(0x00411300);
    /* 00411300: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00411302: mov dword ptr [eax + 0x58], ebp */ W32((u32)(r_eax+0x58u), r_ebp);
    /* 00411305: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00411308: mov dword ptr [eax + 0x5c], ebp */ W32((u32)(r_eax+0x5cu), r_ebp);
    /* 0041130b: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0041130e: mov dword ptr [eax + 0x60], ebp */ W32((u32)(r_eax+0x60u), r_ebp);
L_00411311:; BB(0x00411311);
    /* 00411311: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00411314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411316: je 0x411341 */ if (fZ) goto L_00411341;
L_00411318:; BB(0x00411318);
    /* 00411318: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0041131a: mov dword ptr [eax + 0x58], ebp */ W32((u32)(r_eax+0x58u), r_ebp);
    /* 0041131d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00411320: mov dword ptr [eax + 0x5c], ebp */ W32((u32)(r_eax+0x5cu), r_ebp);
    /* 00411323: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00411326: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00411329: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0041132c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0041132f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00411332: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00411335: fmul dword ptr [0x8fa894] */ ST(0) = ST(0) * R_F32((u32)(0x8fa894u));
    /* 0041133b: fadd dword ptr [edx + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x5cu));
    /* 0041133e: fstp dword ptr [edx + 0x5c] */ W_F32((u32)(r_edx+0x5cu), ST(0)); FPOP();
L_00411341:; BB(0x00411341);
    /* 00411341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411342: ret 4 */ FN_RET(0x004112f0); r_esp += 8; return;
}

void f_00411348(void) /* sub_411348 */
{
    FN_ENTER(0x00411348);
    /* 00411348: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0041134b: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0041134e: fcom dword ptr [0x8fa890] */ fx_compare(ST(0), R_F32((u32)(0x8fa890u))); 
    /* 00411354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00411356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00411357: jae 0x411361 */ if (!fC) goto L_00411361;
L_00411359:; BB(0x00411359);
    /* 00411359: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041135b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041135d: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00411360: ret  */ FN_RET(0x00411348); r_esp += 4; return;
L_00411361:; BB(0x00411361);
    /* 00411361: fcom dword ptr [0x8fa88c] */ fx_compare(ST(0), R_F32((u32)(0x8fa88cu))); 
    /* 00411367: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00411369: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041136a: jbe 0x411377 */ if ((fC||fZ)) goto L_00411377;
L_0041136c:; BB(0x0041136c);
    /* 0041136c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041136e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00411373: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00411376: ret  */ FN_RET(0x00411348); r_esp += 4; return;
L_00411377:; BB(0x00411377);
    /* 00411377: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0041137a: ret  */ FN_RET(0x00411348); r_esp += 4; return;
}

void f_0041137c(void) /* sub_41137C */
{
    FN_ENTER(0x0041137c);
    /* 0041137c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00411380: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00411383: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411385: je 0x4113cb */ if (fZ) goto L_004113cb;
L_00411387:; BB(0x00411387);
    /* 00411387: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0041138a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041138c: je 0x411394 */ if (fZ) goto L_00411394;
L_0041138e:; BB(0x0041138e);
    /* 0041138e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00411391: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_00411394:; BB(0x00411394);
    /* 00411394: fld dword ptr [0x8fa888] */ FPUSH(R_F32((u32)(0x8fa888u)));
    /* 0041139a: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0041139d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004113a0: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004113a3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004113a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004113a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004113a8: je 0x4113d1 */ if (fZ) goto L_004113d1;
L_004113aa:; BB(0x004113aa);
    /* 004113aa: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 004113ad: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 004113b0: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 004113b2: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 004113b4: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 004113b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004113b9: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 004113bc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004113be: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004113c0: fst dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0));
    /* 004113c3: fst dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0));
    /* 004113c6: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 004113c9: jmp 0x4113d1 */ goto L_004113d1;
L_004113cb:; BB(0x004113cb);
    /* 004113cb: fld dword ptr [0x8fa888] */ FPUSH(R_F32((u32)(0x8fa888u)));
L_004113d1:; BB(0x004113d1);
    /* 004113d1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004113d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004113d6: je 0x411414 */ if (fZ) goto L_00411414;
L_004113d8:; BB(0x004113d8);
    /* 004113d8: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004113db: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004113dd: je 0x4113e5 */ if (fZ) goto L_004113e5;
L_004113df:; BB(0x004113df);
    /* 004113df: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004113e2: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004113e5:; BB(0x004113e5);
    /* 004113e5: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004113e8: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 004113eb: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004113ee: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004113f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004113f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004113f3: je 0x411414 */ if (fZ) goto L_00411414;
L_004113f5:; BB(0x004113f5);
    /* 004113f5: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 004113f8: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 004113fb: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 004113fd: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 004113ff: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00411402: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00411404: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 00411407: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00411409: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0041140b: fst dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0));
    /* 0041140e: fst dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0));
    /* 00411411: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
L_00411414:; BB(0x00411414);
    /* 00411414: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00411416: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00411418: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00411419: je 0x411426 */ if (fZ) goto L_00411426;
L_0041141b:; BB(0x0041141b);
    /* 0041141b: fld dword ptr [0x8fa884] */ FPUSH(R_F32((u32)(0x8fa884u)));
    /* 00411421: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00411423: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
L_00411426:; BB(0x00411426);
    /* 00411426: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00411428: ret 4 */ FN_RET(0x0041137c); r_esp += 8; return;
}

void f_00411420(void)
{
    FN_ENTER(0x00411420);
    /* 00411420: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00411422: int1  */ UNSUP(0x00411422, "int1 ");
    /* 00411423: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 00411426: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00411428: ret 4 */ FN_RET(0x00411420); r_esp += 8; return;
}

void f_0041142c(void) /* sub_41142C */
{
    FN_ENTER(0x0041142c);
    /* 0041142c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00411430: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00411433: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411435: je 0x411485 */ if (fZ) goto L_00411485;
L_00411437:; BB(0x00411437);
    /* 00411437: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0041143a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041143c: je 0x411444 */ if (fZ) goto L_00411444;
L_0041143e:; BB(0x0041143e);
    /* 0041143e: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00411441: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_00411444:; BB(0x00411444);
    /* 00411444: fld dword ptr [0x8fa87c] */ FPUSH(R_F32((u32)(0x8fa87cu)));
    /* 0041144a: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0041144d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411450: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00411453: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00411455: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00411457: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00411458: je 0x41147c */ if (fZ) goto L_0041147c;
L_0041145a:; BB(0x0041145a);
    /* 0041145a: fld dword ptr [0x8fa874] */ FPUSH(R_F32((u32)(0x8fa874u)));
    /* 00411460: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00411463: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00411465: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00411467: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0041146a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041146c: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 0041146f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00411471: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00411473: fst dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0));
    /* 00411476: fst dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0));
    /* 00411479: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
L_0041147c:; BB(0x0041147c);
    /* 0041147c: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00411483: jmp 0x41148b */ goto L_0041148b;
L_00411485:; BB(0x00411485);
    /* 00411485: fld dword ptr [0x8fa87c] */ FPUSH(R_F32((u32)(0x8fa87cu)));
L_0041148b:; BB(0x0041148b);
    /* 0041148b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0041148e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00411490: je 0x4114d8 */ if (fZ) goto L_004114d8;
L_00411492:; BB(0x00411492);
    /* 00411492: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00411495: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00411497: je 0x41149f */ if (fZ) goto L_0041149f;
L_00411499:; BB(0x00411499);
    /* 00411499: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041149c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_0041149f:; BB(0x0041149f);
    /* 0041149f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004114a2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 004114a5: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004114a8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004114aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004114ac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004114ad: je 0x4114d1 */ if (fZ) goto L_004114d1;
L_004114af:; BB(0x004114af);
    /* 004114af: fld dword ptr [0x8fa874] */ FPUSH(R_F32((u32)(0x8fa874u)));
    /* 004114b5: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 004114b8: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 004114ba: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 004114bc: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 004114bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004114c1: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 004114c4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004114c6: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004114c8: fst dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0));
    /* 004114cb: fst dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0));
    /* 004114ce: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
L_004114d1:; BB(0x004114d1);
    /* 004114d1: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_004114d8:; BB(0x004114d8);
    /* 004114d8: fld dword ptr [0x8fa880] */ FPUSH(R_F32((u32)(0x8fa880u)));
    /* 004114de: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004114e0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004114e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004114e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004114e5: je 0x4114f2 */ if (fZ) goto L_004114f2;
L_004114e7:; BB(0x004114e7);
    /* 004114e7: fld dword ptr [0x8fa878] */ FPUSH(R_F32((u32)(0x8fa878u)));
    /* 004114ed: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004114ef: fst dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0));
L_004114f2:; BB(0x004114f2);
    /* 004114f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004114f4: ret 4 */ FN_RET(0x0041142c); r_esp += 8; return;
}

void f_004114f8(void) /* sub_4114F8 */
{
    FN_ENTER(0x004114f8);
    /* 004114f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004114f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004114fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004114fd: push 0x8ccb94 */ { u32 v = 0x8ccb94u; r_esp -= 4; W32(r_esp, v); }
    /* 00411502: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411509: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411510: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411513: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00411516: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411519: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0041151c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041151f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00411524: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0041152b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x411530u); f_008581c5();
    /* 00411530: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411531: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00411534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411536: je 0x411577 */ if (fZ) goto L_00411577;
L_00411538:; BB(0x00411538);
    /* 00411538: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0041153f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411546: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411549: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041154b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041154c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041154d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041154e: push 0x9a34c8 */ { u32 v = 0x9a34c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00411553: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411555: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x41155au); f_005b7a84();
    /* 0041155a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041155d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00411564:; BB(0x00411564);
    /* 00411564: mov dword ptr [0xa3b040], eax */ W32((u32)(0xa3b040u), r_eax);
    /* 00411569: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041156c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411573: mov esp, ebp */ r_esp = r_ebp;
    /* 00411575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411576: ret  */ FN_RET(0x004114f8); r_esp += 4; return;
L_00411577:; BB(0x00411577);
    /* 00411577: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411579: jmp 0x411564 */ goto L_00411564;
}

void f_0041157c(void) /* sub_41157C */
{
    FN_ENTER(0x0041157c);
    /* 0041157c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041157d: mov ebp, esp */ r_ebp = r_esp;
    /* 0041157f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411581: push 0x8ccbb0 */ { u32 v = 0x8ccbb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411586: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041158c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041158d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411594: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411597: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041159a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0041159d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004115a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004115a3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004115a6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004115a9: mov eax, ecx */ r_eax = r_ecx;
    /* 004115ab: mov dword ptr [eax], 0xaf2ff8 */ W32((u32)(r_eax), 0xaf2ff8u);
    /* 004115b1: mov edx, dword ptr [0xa3b050] */ r_edx = R32((u32)(0xa3b050u));
    /* 004115b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004115b9: je 0x4115c5 */ if (fZ) goto L_004115c5;
L_004115bb:; BB(0x004115bb);
    /* 004115bb: mov dword ptr [0xa3b050], 0 */ W32((u32)(0xa3b050u), 0x0u);
L_004115c5:; BB(0x004115c5);
    /* 004115c5: mov eax, dword ptr [0xa3b054] */ r_eax = R32((u32)(0xa3b054u));
    /* 004115ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004115cc: je 0x4115d8 */ if (fZ) goto L_004115d8;
L_004115ce:; BB(0x004115ce);
    /* 004115ce: mov dword ptr [0xa3b054], 0 */ W32((u32)(0xa3b054u), 0x0u);
L_004115d8:; BB(0x004115d8);
    /* 004115d8: mov eax, dword ptr [0xa3b058] */ r_eax = R32((u32)(0xa3b058u));
    /* 004115dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004115df: je 0x4115eb */ if (fZ) goto L_004115eb;
L_004115e1:; BB(0x004115e1);
    /* 004115e1: mov dword ptr [0xa3b058], 0 */ W32((u32)(0xa3b058u), 0x0u);
L_004115eb:; BB(0x004115eb);
    /* 004115eb: mov eax, dword ptr [0xa3b05c] */ r_eax = R32((u32)(0xa3b05cu));
    /* 004115f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004115f2: je 0x4115fe */ if (fZ) goto L_004115fe;
L_004115f4:; BB(0x004115f4);
    /* 004115f4: mov dword ptr [0xa3b05c], 0 */ W32((u32)(0xa3b05cu), 0x0u);
L_004115fe:; BB(0x004115fe);
    /* 004115fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00411605: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x41160au); f_008171e8();
    /* 0041160a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041160d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041160f: jne 0x411621 */ if (!fZ) goto L_00411621;
L_00411611:; BB(0x00411611);
    /* 00411611: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411614: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041161b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041161d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041161e: ret 4 */ FN_RET(0x0041157c); r_esp += 8; return;
L_00411621:; BB(0x00411621);
    /* 00411621: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411625: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x41162au); f_005c2f74();
    /* 0041162a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041162b: jmp 0x411611 */ goto L_00411611;
}

void f_00411630(void) /* sub_411630 */
{
    FN_ENTER(0x00411630);
    /* 00411630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411631: mov ebp, esp */ r_ebp = r_esp;
    /* 00411633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411635: push 0x8ccbd8 */ { u32 v = 0x8ccbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041163a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411641: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411648: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041164b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041164e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00411651: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00411654: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00411657: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00411659: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0041165c:; BB(0x0041165c);
    /* 0041165c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041165f: mov edx, dword ptr [eax*4 + 0xa3b050] */ r_edx = R32((u32)(r_eax*4+0xa3b050u));
    /* 00411666: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411668: je 0x411681 */ if (fZ) goto L_00411681;
L_0041166a:; BB(0x0041166a);
    /* 0041166a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041166d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411670: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411673: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411676: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041167d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041167f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411680: ret  */ FN_RET(0x00411630); r_esp += 4; return;
L_00411681:; BB(0x00411681);
    /* 00411681: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00411688: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041168d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411692u); f_005caba4();
    /* 00411692: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00411695: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411698: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041169b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041169d: je 0x411776 */ if (fZ) goto L_00411776;
L_004116a3:; BB(0x004116a3);
    /* 004116a3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004116aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004116b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004116b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004116b6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4116bbu); f_008193cc();
    /* 004116bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004116c1: mov dword ptr [ecx], 0xaf2ff8 */ W32((u32)(r_ecx), 0xaf2ff8u);
    /* 004116c7: mov eax, dword ptr [0x9a3500] */ r_eax = R32((u32)(0x9a3500u));
    /* 004116cc: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 004116d6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004116d9: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 004116df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004116e1:; BB(0x004116e1);
    /* 004116e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116e4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004116e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004116e9: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 004116ec: lea edi, [ecx + ebx + 0x1c] */ r_edi = (u32)(r_ecx+r_ebx+0x1cu);
    /* 004116f0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004116f2: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004116f4: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004116f7: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 004116fa: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004116fd: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 00411700: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 00411703: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 00411706: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 00411709: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 0041170c: mov edx, ecx */ r_edx = r_ecx;
    /* 0041170e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00411711: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411713: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411715: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411717: lea esi, [edx + ecx + 0xac] */ r_esi = (u32)(r_edx+r_ecx+0xacu);
    /* 0041171e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00411720: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00411722: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00411725: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 00411728: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 0041172b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041172e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411731: jl 0x4116e1 */ if ((fS!=fO)) goto L_004116e1;
L_00411733:; BB(0x00411733);
    /* 00411733: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0041173a:; BB(0x0041173a);
    /* 0041173a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041173d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411740: mov dword ptr [edx*4 + 0xa3b050], eax */ W32((u32)(r_edx*4+0xa3b050u), r_eax);
    /* 00411747: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041174e: mov eax, edx */ r_eax = r_edx;
    /* 00411750: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411753: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00411756: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411759: jl 0x41165c */ if ((fS!=fO)) goto L_0041165c;
L_0041175f:; BB(0x0041175f);
    /* 0041175f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00411762: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411765: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411768: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041176b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411772: mov esp, ebp */ r_esp = r_ebp;
    /* 00411774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411775: ret  */ FN_RET(0x00411630); r_esp += 4; return;
L_00411776:; BB(0x00411776);
    /* 00411776: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00411778: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041177b: jmp 0x41173a */ goto L_0041173a;
}

void f_004116a2(void)
{
    FN_ENTER(0x004116a2);
    goto L_004116a2;
L_0041165c:; BB(0x0041165c);
    /* 0041165c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041165f: mov edx, dword ptr [eax*4 + 0xa3b050] */ r_edx = R32((u32)(r_eax*4+0xa3b050u));
    /* 00411666: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411668: je 0x411681 */ if (fZ) goto L_00411681;
L_0041166a:; BB(0x0041166a);
    /* 0041166a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041166d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411670: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411673: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411676: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041167d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041167f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411680: ret  */ FN_RET(0x004116a2); r_esp += 4; return;
L_00411681:; BB(0x00411681);
    /* 00411681: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00411688: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041168d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411692u); f_005caba4();
    /* 00411692: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00411695: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411698: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041169b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041169d: je 0x411776 */ if (fZ) goto L_00411776;
L_004116a2:; BB(0x004116a2);
    /* 004116a2: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_004116a3:; BB(0x004116a3);
    /* 004116a3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004116a4: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004116a5: aam 1 */ UNSUP(0x004116a5, "aam 1");
    /* 004116a7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004116a9: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004116aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004116ab: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004116ac: cld  */ rt_df = 0;
    /* 004116ad: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004116af: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004116b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004116b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004116b6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4116bbu); f_008193cc();
    /* 004116bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004116c1: mov dword ptr [ecx], 0xaf2ff8 */ W32((u32)(r_ecx), 0xaf2ff8u);
    /* 004116c7: mov eax, dword ptr [0x9a3500] */ r_eax = R32((u32)(0x9a3500u));
    /* 004116cc: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 004116d6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004116d9: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 004116df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004116e1:; BB(0x004116e1);
    /* 004116e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116e4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004116e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004116e9: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 004116ec: lea edi, [ecx + ebx + 0x1c] */ r_edi = (u32)(r_ecx+r_ebx+0x1cu);
    /* 004116f0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004116f2: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004116f4: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004116f7: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 004116fa: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004116fd: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 00411700: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 00411703: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 00411706: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 00411709: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 0041170c: mov edx, ecx */ r_edx = r_ecx;
    /* 0041170e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00411711: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411713: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411715: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411717: lea esi, [edx + ecx + 0xac] */ r_esi = (u32)(r_edx+r_ecx+0xacu);
    /* 0041171e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00411720: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00411722: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00411725: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 00411728: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 0041172b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041172e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411731: jl 0x4116e1 */ if ((fS!=fO)) goto L_004116e1;
L_00411733:; BB(0x00411733);
    /* 00411733: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0041173a:; BB(0x0041173a);
    /* 0041173a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041173d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411740: mov dword ptr [edx*4 + 0xa3b050], eax */ W32((u32)(r_edx*4+0xa3b050u), r_eax);
    /* 00411747: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041174e: mov eax, edx */ r_eax = r_edx;
    /* 00411750: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411753: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00411756: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411759: jl 0x41165c */ if ((fS!=fO)) goto L_0041165c;
L_0041175f:; BB(0x0041175f);
    /* 0041175f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00411762: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411765: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411768: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041176b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411772: mov esp, ebp */ r_esp = r_ebp;
    /* 00411774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411775: ret  */ FN_RET(0x004116a2); r_esp += 4; return;
L_00411776:; BB(0x00411776);
    /* 00411776: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00411778: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041177b: jmp 0x41173a */ goto L_0041173a;
}

void f_00411780(void) /* sub_411780 */
{
    FN_ENTER(0x00411780);
    /* 00411780: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 00411786: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00411789: je 0x4117a8 */ if (fZ) goto L_004117a8;
L_0041178b:; BB(0x0041178b);
    /* 0041178b: fld dword ptr [0x8fa91c] */ FPUSH(R_F32((u32)(0x8fa91cu)));
    /* 00411791: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00411794: fld dword ptr [0x8fa920] */ FPUSH(R_F32((u32)(0x8fa920u)));
    /* 0041179a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0041179c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041179e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041179f: ja 0x4117a3 */ if ((!fC&&!fZ)) goto L_004117a3;
L_004117a1:; BB(0x004117a1);
    /* 004117a1: fst st(1) */ ST(1) = ST(0);
L_004117a3:; BB(0x004117a3);
    /* 004117a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004117a5: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
L_004117a8:; BB(0x004117a8);
    /* 004117a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004117aa: je 0x4117c9 */ if (fZ) goto L_004117c9;
L_004117ac:; BB(0x004117ac);
    /* 004117ac: fld dword ptr [0x8fa91c] */ FPUSH(R_F32((u32)(0x8fa91cu)));
    /* 004117b2: fadd dword ptr [ecx + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x60u));
    /* 004117b5: fld dword ptr [0x8fa920] */ FPUSH(R_F32((u32)(0x8fa920u)));
    /* 004117bb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004117bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004117bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004117c0: ja 0x4117c4 */ if ((!fC&&!fZ)) goto L_004117c4;
L_004117c2:; BB(0x004117c2);
    /* 004117c2: fst st(1) */ ST(1) = ST(0);
L_004117c4:; BB(0x004117c4);
    /* 004117c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004117c6: fstp dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0)); FPOP();
L_004117c9:; BB(0x004117c9);
    /* 004117c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004117cb: je 0x4117f0 */ if (fZ) goto L_004117f0;
L_004117cd:; BB(0x004117cd);
    /* 004117cd: fld dword ptr [0x8fa91c] */ FPUSH(R_F32((u32)(0x8fa91cu)));
    /* 004117d3: fadd dword ptr [ecx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x84u));
    /* 004117d9: fld dword ptr [0x8fa920] */ FPUSH(R_F32((u32)(0x8fa920u)));
    /* 004117df: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004117e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004117e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004117e4: ja 0x4117e8 */ if ((!fC&&!fZ)) goto L_004117e8;
L_004117e6:; BB(0x004117e6);
    /* 004117e6: fst st(1) */ ST(1) = ST(0);
L_004117e8:; BB(0x004117e8);
    /* 004117e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004117ea: fstp dword ptr [ecx + 0x84] */ W_F32((u32)(r_ecx+0x84u), ST(0)); FPOP();
L_004117f0:; BB(0x004117f0);
    /* 004117f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004117f2: je 0x411817 */ if (fZ) goto L_00411817;
L_004117f4:; BB(0x004117f4);
    /* 004117f4: fld dword ptr [0x8fa91c] */ FPUSH(R_F32((u32)(0x8fa91cu)));
    /* 004117fa: fadd dword ptr [ecx + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xa8u));
    /* 00411800: fld dword ptr [0x8fa920] */ FPUSH(R_F32((u32)(0x8fa920u)));
    /* 00411806: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00411808: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041180a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041180b: ja 0x41180f */ if ((!fC&&!fZ)) goto L_0041180f;
L_0041180d:; BB(0x0041180d);
    /* 0041180d: fst st(1) */ ST(1) = ST(0);
L_0041180f:; BB(0x0041180f);
    /* 0041180f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00411811: fstp dword ptr [ecx + 0xa8] */ W_F32((u32)(r_ecx+0xa8u), ST(0)); FPOP();
L_00411817:; BB(0x00411817);
    /* 00411817: ret  */ FN_RET(0x00411780); r_esp += 4; return;
}

void f_00411818(void) /* sub_411818 */
{
    FN_ENTER(0x00411818);
    /* 00411818: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0041181d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041181f: jne 0x411822 */ if (!fZ) goto L_00411822;
L_00411821:; BB(0x00411821);
    /* 00411821: ret  */ FN_RET(0x00411818); r_esp += 4; return;
L_00411822:; BB(0x00411822);
    /* 00411822: call 0x411828 */ r_esp -= 4; W32(r_esp, 0x411827u); f_00411828();
    /* 00411827: ret  */ FN_RET(0x00411818); r_esp += 4; return;
}

void f_00411828(void) /* sub_411828 */
{
    FN_ENTER(0x00411828);
    /* 00411828: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411829: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041182c: fld dword ptr [0x8fa918] */ FPUSH(R_F32((u32)(0x8fa918u)));
    /* 00411832: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0041183a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041183d: mov edx, 4 */ r_edx = 0x4u;
    /* 00411842: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00411846: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0041184a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0041184e: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411854: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00411858: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0041185b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0041185d: lea ebp, [ebp + ebp*8] */ r_ebp = (u32)(r_ebp+r_ebp*8);
    /* 00411861: fild dword ptr [ebp + ecx + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_ecx+0x34u)));
    /* 00411865: fld dword ptr [ebp + ecx + 0x28] */ FPUSH(R_F32((u32)(r_ebp+r_ecx+0x28u)));
    /* 00411869: fsub dword ptr [ebp + ecx + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ecx+0x20u));
    /* 0041186d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0041186f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411871: fild dword ptr [ecx + eax*8 + 0xac] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax*8+0xacu)));
    /* 00411878: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041187a: mov eax, dword ptr [ebp + ecx + 0x1c] */ r_eax = R32((u32)(r_ebp+r_ecx+0x1cu));
    /* 0041187e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00411881: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411887: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411889: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041188b: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0041188e: fld dword ptr [eax + ecx + 0x20] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x20u)));
    /* 00411892: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00411894: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00411898: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0041189c: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 004118a2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004118a4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004118a6: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004118a9: fld dword ptr [eax + ecx + 0x3c] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x3cu)));
    /* 004118ad: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004118af: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 004118b3: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 004118b8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004118bd: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004118c1: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004118c5: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 004118c9: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004118cd: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004118d1: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004118d4: or eax, 0x25ec00 */ {  u32 a = r_eax; u32 b = 0x25ec00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004118d9: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 004118dc: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004118e0: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 004118e6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004118e8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004118ea: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004118ed: mov eax, dword ptr [eax + ecx + 0x1c] */ r_eax = R32((u32)(r_eax+r_ecx+0x1cu));
    /* 004118f1: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004118f4: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 004118fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004118fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004118fe: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00411901: fld dword ptr [eax + ecx + 0x20] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x20u)));
    /* 00411905: fadd dword ptr [eax + ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx+0x30u));
    /* 00411909: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0041190d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041190f: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00411912: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00411916: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 0041191c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041191e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411920: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00411923: fld dword ptr [eax + ecx + 0x3c] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x3cu)));
    /* 00411927: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00411929: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0041192d: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00411932: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411937: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0041193b: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0041193f: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 00411943: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00411947: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0041194b: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041194e: or eax, 0x25ec00 */ {  u32 a = r_eax; u32 b = 0x25ec00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411953: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00411956: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 0041195c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041195e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411960: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00411963: fld dword ptr [eax + ecx + 0x1c] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x1cu)));
    /* 00411967: fadd dword ptr [eax + ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx+0x2cu));
    /* 0041196b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0041196f: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00411972: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411978: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041197a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041197c: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0041197f: fld dword ptr [eax + ecx + 0x20] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x20u)));
    /* 00411983: fadd dword ptr [eax + ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx+0x30u));
    /* 00411987: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0041198b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041198d: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00411990: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411996: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411998: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0041199c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041199e: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004119a1: fld dword ptr [eax + ecx + 0x3c] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x3cu)));
    /* 004119a5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004119a7: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 004119ab: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 004119b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004119b5: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004119b9: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004119bd: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 004119c1: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004119c5: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004119c9: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004119cc: or eax, 0x25ec00 */ {  u32 a = r_eax; u32 b = 0x25ec00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004119d1: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004119d4: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 004119da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004119dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004119de: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004119e1: fld dword ptr [eax + ecx + 0x1c] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x1cu)));
    /* 004119e5: fadd dword ptr [eax + ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx+0x2cu));
    /* 004119e9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004119ed: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 004119f0: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 004119f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004119f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004119fa: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004119fd: fld dword ptr [eax + ecx + 0x20] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x20u)));
    /* 00411a01: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00411a03: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00411a07: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00411a0a: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411a10: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411a12: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411a14: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00411a17: fld dword ptr [eax + ecx + 0x3c] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x3cu)));
    /* 00411a1b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00411a1d: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00411a21: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00411a25: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00411a2a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411a2f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00411a33: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00411a37: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 00411a3b: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00411a3f: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00411a43: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00411a46: or eax, 0x25ec00 */ {  u32 a = r_eax; u32 b = 0x25ec00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411a4b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00411a4e: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00411a52: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a54: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411a5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411a5b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x411a60u); f_0082b5d8();
    /* 00411a60: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00411a63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411a64: ret  */ FN_RET(0x00411828); r_esp += 4; return;
}

void f_00411a68(void) /* sub_411A68 */
{
    FN_ENTER(0x00411a68);
    /* 00411a68: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411a6e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411a70: mov edx, dword ptr [ecx + eax*8 + 0xb0] */ r_edx = R32((u32)(r_ecx+r_eax*8+0xb0u));
    /* 00411a77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00411a79: jle 0x411a86 */ if ((fZ||fS!=fO)) goto L_00411a86;
L_00411a7b:; BB(0x00411a7b);
    /* 00411a7b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00411a7e:; BB(0x00411a7e);
    /* 00411a7e: mov dword ptr [ecx + eax*8 + 0xb0], edx */ W32((u32)(r_ecx+r_eax*8+0xb0u), r_edx);
    /* 00411a85: ret  */ FN_RET(0x00411a68); r_esp += 4; return;
L_00411a86:; BB(0x00411a86);
    /* 00411a86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411a88: jmp 0x411a7e */ goto L_00411a7e;
}

void f_00411a8c(void) /* sub_411A8C */
{
    FN_ENTER(0x00411a8c);
    /* 00411a8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00411a8d: mov esi, dword ptr [ecx + 0xec] */ r_esi = R32((u32)(r_ecx+0xecu));
    /* 00411a93: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00411a95: mov edx, dword ptr [ecx + esi*8 + 0xb8] */ r_edx = R32((u32)(r_ecx+r_esi*8+0xb8u));
    /* 00411a9c: mov eax, dword ptr [ecx + esi*8 + 0xb0] */ r_eax = R32((u32)(r_ecx+r_esi*8+0xb0u));
    /* 00411aa3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411aa5: jge 0x411aaa */ if ((fS==fO)) goto L_00411aaa;
L_00411aa7:; BB(0x00411aa7);
    /* 00411aa7: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
L_00411aaa:; BB(0x00411aaa);
    /* 00411aaa: mov dword ptr [ecx + esi*8 + 0xb0], edx */ W32((u32)(r_ecx+r_esi*8+0xb0u), r_edx);
    /* 00411ab1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00411ab2: ret  */ FN_RET(0x00411a8c); r_esp += 4; return;
}

void f_00411ab4(void) /* sub_411AB4 */
{
    FN_ENTER(0x00411ab4);
    /* 00411ab4: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00411aba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411abc: mov edx, dword ptr [ecx + eax*8 + 0xac] */ r_edx = R32((u32)(r_ecx+r_eax*8+0xacu));
    /* 00411ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00411ac5: jle 0x411ad2 */ if ((fZ||fS!=fO)) goto L_00411ad2;
L_00411ac7:; BB(0x00411ac7);
    /* 00411ac7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00411aca:; BB(0x00411aca);
    /* 00411aca: mov dword ptr [ecx + eax*8 + 0xac], edx */ W32((u32)(r_ecx+r_eax*8+0xacu), r_edx);
    /* 00411ad1: ret  */ FN_RET(0x00411ab4); r_esp += 4; return;
L_00411ad2:; BB(0x00411ad2);
    /* 00411ad2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411ad4: jmp 0x411aca */ goto L_00411aca;
}

void f_00411ad8(void) /* sub_411AD8 */
{
    FN_ENTER(0x00411ad8);
    /* 00411ad8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00411ad9: mov esi, dword ptr [ecx + 0xec] */ r_esi = R32((u32)(r_ecx+0xecu));
    /* 00411adf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00411ae1: mov edx, dword ptr [ecx + esi*8 + 0xb8] */ r_edx = R32((u32)(r_ecx+r_esi*8+0xb8u));
    /* 00411ae8: sub edx, dword ptr [ecx + esi*8 + 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi*8+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00411aef: mov eax, dword ptr [ecx + esi*8 + 0xac] */ r_eax = R32((u32)(r_ecx+r_esi*8+0xacu));
    /* 00411af6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00411af9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411afb: jge 0x411b00 */ if ((fS==fO)) goto L_00411b00;
L_00411afd:; BB(0x00411afd);
    /* 00411afd: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
L_00411b00:; BB(0x00411b00);
    /* 00411b00: mov dword ptr [ecx + esi*8 + 0xac], edx */ W32((u32)(r_ecx+r_esi*8+0xacu), r_edx);
    /* 00411b07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00411b08: ret  */ FN_RET(0x00411ad8); r_esp += 4; return;
}

void f_00411b0c(void) /* sub_411B0C */
{
    FN_ENTER(0x00411b0c);
    /* 00411b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411b0d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00411b0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00411b11: call 0x411b20 */ r_esp -= 4; W32(r_esp, 0x411b16u); f_00411b20();
    /* 00411b16: mov dword ptr [ebp + 0x4c], 1 */ W32((u32)(r_ebp+0x4cu), 0x1u);
    /* 00411b1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411b1e: ret  */ FN_RET(0x00411b0c); r_esp += 4; return;
}

void f_00411b20(void) /* sub_411B20 */
{
    FN_ENTER(0x00411b20);
    /* 00411b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411b21: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00411b23: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00411b26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411b28: je 0x411b36 */ if (fZ) goto L_00411b36;
L_00411b2a:; BB(0x00411b2a);
    /* 00411b2a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x411b2fu); f_007127b0();
    /* 00411b2f: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_00411b36:; BB(0x00411b36);
    /* 00411b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411b37: ret  */ FN_RET(0x00411b20); r_esp += 4; return;
}

void f_00411b38(void) /* sub_411B38 */
{
    FN_ENTER(0x00411b38);
    /* 00411b38: mov dword ptr [0xa3b064], 0x3f800000 */ W32((u32)(0xa3b064u), 0x3f800000u);
    /* 00411b42: mov dword ptr [0xa3b068], 0x41000000 */ W32((u32)(0xa3b068u), 0x41000000u);
    /* 00411b4c: mov dword ptr [0xa3b06c], 0x3fc00000 */ W32((u32)(0xa3b06cu), 0x3fc00000u);
    /* 00411b56: ret  */ FN_RET(0x00411b38); r_esp += 4; return;
}

void f_00411b58(void) /* sub_411B58 */
{
    FN_ENTER(0x00411b58);
    /* 00411b58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00411b59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00411b5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00411b5d: call 0x411b7c */ r_esp -= 4; W32(r_esp, 0x411b62u); f_00411b7c();
    /* 00411b62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00411b66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411b68: jne 0x411b6e */ if (!fZ) goto L_00411b6e;
L_00411b6a:; BB(0x00411b6a);
    /* 00411b6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00411b6b: ret 4 */ FN_RET(0x00411b58); r_esp += 8; return;
L_00411b6e:; BB(0x00411b6e);
    /* 00411b6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00411b6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x411b74u); f_005c2f74();
    /* 00411b74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411b75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00411b76: ret 4 */ FN_RET(0x00411b58); r_esp += 8; return;
}

void f_00411b7c(void) /* sub_411B7C */
{
    FN_ENTER(0x00411b7c);
    /* 00411b7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411b7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00411b7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411b81: push 0x8ccbf4 */ { u32 v = 0x8ccbf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411b8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411b94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411b97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00411b9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411b9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00411ba0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00411ba3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00411ba6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411ba9: mov dword ptr [ecx], 0xaf30c8 */ W32((u32)(r_ecx), 0xaf30c8u);
    /* 00411baf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00411bb6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x411bbbu); f_008171e8();
    /* 00411bbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411bbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411bc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00411bc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411bc8: ret  */ FN_RET(0x00411b7c); r_esp += 4; return;
}

void f_00411bcc(void)
{
    FN_ENTER(0x00411bcc);
    /* 00411bcc: mov ecx, dword ptr [0xa3b080] */ r_ecx = R32((u32)(0xa3b080u));
    /* 00411bd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411bd4: je 0x411be5 */ if (fZ) goto L_00411be5;
L_00411bd6:; BB(0x00411bd6);
    /* 00411bd6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x411bdbu); f_00829de0();
    /* 00411bdb: mov dword ptr [0xa3b080], 0 */ W32((u32)(0xa3b080u), 0x0u);
L_00411be5:; BB(0x00411be5);
    /* 00411be5: ret  */ FN_RET(0x00411bcc); r_esp += 4; return;
}

void f_00411be8(void) /* sub_411BE8 */
{
    FN_ENTER(0x00411be8);
    /* 00411be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411be9: mov ebp, esp */ r_ebp = r_esp;
    /* 00411beb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411bed: push 0x8ccc2a */ { u32 v = 0x8ccc2au; r_esp -= 4; W32(r_esp, v); }
    /* 00411bf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411bf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411c00: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411c03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00411c06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411c09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00411c0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00411c0f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411c12: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00411c15: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x411c1au); f_008193cc();
    /* 00411c1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411c21: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411c24: mov dword ptr [edx], 0xaf30c8 */ W32((u32)(r_edx), 0xaf30c8u);
    /* 00411c2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00411c2c: mov eax, dword ptr [0x9a36b0] */ r_eax = R32((u32)(0x9a36b0u));
    /* 00411c31: mov dword ptr [0xa3b07c], ecx */ W32((u32)(0xa3b07cu), r_ecx);
    /* 00411c37: mov dword ptr [0xa3b078], ecx */ W32((u32)(0xa3b078u), r_ecx);
    /* 00411c3d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00411c40: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00411c43: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c45: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00411c48: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00411c4b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411c50u); f_005caba4();
    /* 00411c50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411c51: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00411c54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411c56: je 0x411c80 */ if (fZ) goto L_00411c80;
L_00411c58:; BB(0x00411c58);
    /* 00411c58: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00411c5f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00411c66: push 0x411e78 */ { u32 v = 0x411e78u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c6b: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411c71: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00411c74: call 0x7889b0 */ r_esp -= 4; W32(r_esp, 0x411c79u); f_007889b0();
    /* 00411c79: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00411c80:; BB(0x00411c80);
    /* 00411c80: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411c83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411c86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411c8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00411c8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411c90: ret 4 */ FN_RET(0x00411be8); r_esp += 8; return;
}

void f_00411c94(void) /* sub_411C94 */
{
    FN_ENTER(0x00411c94);
    /* 00411c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411c95: mov ebp, esp */ r_ebp = r_esp;
    /* 00411c97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411c99: push 0x8ccc86 */ { u32 v = 0x8ccc86u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411ca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411cac: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411caf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00411cb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411cb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00411cb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00411cbb: mov eax, dword ptr [0xa3b07c] */ r_eax = R32((u32)(0xa3b07cu));
    /* 00411cc0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411cc3: ja 0x411e22 */ if ((!fC&&!fZ)) goto L_00411e22;
L_00411cc9:; BB(0x00411cc9);
    /* 00411cc9: mov eax, dword ptr [eax*4 + 0x8fa96c] */ r_eax = R32((u32)(r_eax*4+0x8fa96cu));
    /* 00411cd0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00411e22:; BB(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411c94); r_esp += 4; return;
}

void f_00411cd2(void)
{
    FN_ENTER(0x00411cd2);
    /* 00411cd2: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00411cd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411cd8: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00411cdb: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411cde: jle 0x411e22 */ if ((fZ||fS!=fO)) goto L_00411e22;
L_00411ce4:; BB(0x00411ce4);
    /* 00411ce4: mov dword ptr [0xa3b07c], 0xa */ W32((u32)(0xa3b07cu), 0xau);
    /* 00411cee: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00411cf0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00411cf7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411cfcu); f_005caba4();
    /* 00411cfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411cfd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00411d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411d02: je 0x411e22 */ if (fZ) goto L_00411e22;
L_00411d08:; BB(0x00411d08);
    /* 00411d08: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00411d0f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00411d16: push 0x411e94 */ { u32 v = 0x411e94u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d1b: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411d21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411d24: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x411d29u); f_00788938();
    /* 00411d29: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00411d30: jmp 0x411e22 */ goto L_00411e22;
L_00411e22:; BB(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411cd2); r_esp += 4; return;
}

void f_00411d35(void)
{
    FN_ENTER(0x00411d35);
    /* 00411d35: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00411d3c: mov dword ptr [ecx + 0x20], 2 */ W32((u32)(r_ecx+0x20u), 0x2u);
    /* 00411d43: mov dword ptr [0xa3b07c], 8 */ W32((u32)(0xa3b07cu), 0x8u);
    /* 00411d4d: jmp 0x411e22 */ goto L_00411e22;
L_00411e22:; BB(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411d35); r_esp += 4; return;
}

void f_00411d52(void)
{
    FN_ENTER(0x00411d52);
    /* 00411d52: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00411d55: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411d58: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00411d5b: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411d5e: jle 0x411e22 */ if ((fZ||fS!=fO)) goto L_00411e22;
L_00411d64:; BB(0x00411d64);
    /* 00411d64: mov dword ptr [0xa3b07c], 6 */ W32((u32)(0xa3b07cu), 0x6u);
    /* 00411d6e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d70: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00411d77: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411d7cu); f_005caba4();
    /* 00411d7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411d7d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00411d80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411d82: je 0x411e22 */ if (fZ) goto L_00411e22;
L_00411d88:; BB(0x00411d88);
    /* 00411d88: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00411d8f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00411d96: push 0x411e94 */ { u32 v = 0x411e94u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d9b: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411da1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411da4: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x411da9u); f_00788938();
    /* 00411da9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00411db0: jmp 0x411e22 */ goto L_00411e22;
L_00411e22:; BB(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411d52); r_esp += 4; return;
}

void f_00411db2(void)
{
    FN_ENTER(0x00411db2);
    /* 00411db2: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00411db9: mov dword ptr [ecx + 0x20], 1 */ W32((u32)(r_ecx+0x20u), 0x1u);
    /* 00411dc0: mov dword ptr [0xa3b07c], 4 */ W32((u32)(0xa3b07cu), 0x4u);
    /* 00411dca: jmp 0x411e22 */ goto L_00411e22;
L_00411e22:; BB(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411db2); r_esp += 4; return;
}

void f_00411dcc(void)
{
    FN_ENTER(0x00411dcc);
    /* 00411dcc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00411dcf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411dd2: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00411dd5: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411dd8: jle 0x411e22 */ if ((fZ||fS!=fO)) goto L_00411e22;
L_00411dda:; BB(0x00411dda);
    /* 00411dda: mov dword ptr [0xa3b07c], 2 */ W32((u32)(0xa3b07cu), 0x2u);
    /* 00411de4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00411de6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00411ded: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411df2u); f_005caba4();
    /* 00411df2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411df3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00411df6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411df8: je 0x411e22 */ if (fZ) goto L_00411e22;
L_00411dfa:; BB(0x00411dfa);
    /* 00411dfa: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00411e01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411e08: push 0x411e94 */ { u32 v = 0x411e94u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e0d: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411e13: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411e16: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x411e1bu); f_00788938();
    /* 00411e1b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00411e22:; BB(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411dcc); r_esp += 4; return;
}

void f_00411e22(void)
{
    FN_ENTER(0x00411e22);
    /* 00411e22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411e25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00411e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411e2f: ret  */ FN_RET(0x00411e22); r_esp += 4; return;
}

void f_00411e30(void) /* sub_411E30 */
{
    FN_ENTER(0x00411e30);
    /* 00411e30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00411e31: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00411e34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411e36: je 0x411e54 */ if (fZ) goto L_00411e54;
L_00411e38:; BB(0x00411e38);
    /* 00411e38: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411e3b: jne 0x411e44 */ if (!fZ) goto L_00411e44;
L_00411e3d:; BB(0x00411e3d);
    /* 00411e3d: mov ebx, 8 */ r_ebx = 0x8u;
    /* 00411e42: jmp 0x411e56 */ goto L_00411e56;
L_00411e44:; BB(0x00411e44);
    /* 00411e44: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411e47: jne 0x411e50 */ if (!fZ) goto L_00411e50;
L_00411e49:; BB(0x00411e49);
    /* 00411e49: mov ebx, 0x10 */ r_ebx = 0x10u;
    /* 00411e4e: jmp 0x411e56 */ goto L_00411e56;
L_00411e50:; BB(0x00411e50);
    /* 00411e50: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00411e52: jmp 0x411e56 */ goto L_00411e56;
L_00411e54:; BB(0x00411e54);
    /* 00411e54: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00411e56:; BB(0x00411e56);
    /* 00411e56: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x411e5bu); f_0082dbac();
    /* 00411e5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00411e5e: push 0xc3160000 */ { u32 v = 0xc3160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e63: push dword ptr [0xa3b080] */ { u32 v = R32((u32)(0xa3b080u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411e69: call 0x415ab0 */ r_esp -= 4; W32(r_esp, 0x411e6eu); f_00415ab0();
    /* 00411e6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411e71: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x411e76u); f_0082dab0();
    /* 00411e76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00411e77: ret  */ FN_RET(0x00411e30); r_esp += 4; return;
}

void f_00411e78(void)
{
    FN_ENTER(0x00411e78);
    /* 00411e78: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00411e7c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00411e80: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411e85: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00411e89: add dword ptr [0xa3b07c], 1 */ { u32 ad = (u32)(0xa3b07cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00411e90: ret  */ FN_RET(0x00411e78); r_esp += 4; return;
}

void f_00411e94(void) /* sub_411E94 */
{
    FN_ENTER(0x00411e94);
    /* 00411e94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411e95: mov ebp, esp */ r_ebp = r_esp;
    /* 00411e97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e99: push 0x8cccc6 */ { u32 v = 0x8cccc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411ea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411ea5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00411eac: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411eaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00411eb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00411eb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00411eb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00411ebb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00411ebe: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x411ec3u); f_006dc358();
    /* 00411ec3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411ec6: je 0x411ef0 */ if (fZ) goto L_00411ef0;
L_00411ec8:; BB(0x00411ec8);
    /* 00411ec8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00411ecc: mov dword ptr [0xa3b078], 1 */ W32((u32)(0xa3b078u), 0x1u);
    /* 00411ed6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411edb: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_00411edf:; BB(0x00411edf);
    /* 00411edf: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411ee2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411ee5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411eec: mov esp, ebp */ r_esp = r_ebp;
    /* 00411eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411eef: ret  */ FN_RET(0x00411e94); r_esp += 4; return;
L_00411ef0:; BB(0x00411ef0);
    /* 00411ef0: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00411ef4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00411ef9: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00411efd: mov eax, dword ptr [0xa3b07c] */ r_eax = R32((u32)(0xa3b07cu));
    /* 00411f02: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411f05: jne 0x411f51 */ if (!fZ) goto L_00411f51;
L_00411f07:; BB(0x00411f07);
    /* 00411f07: mov dword ptr [0xa3b07c], 3 */ W32((u32)(0xa3b07cu), 0x3u);
    /* 00411f11: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f13: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00411f1a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411f1fu); f_005caba4();
    /* 00411f1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411f20: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00411f23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411f25: je 0x411edf */ if (fZ) goto L_00411edf;
L_00411f27:; BB(0x00411f27);
    /* 00411f27: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00411f2e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00411f35: push 0x411e78 */ { u32 v = 0x411e78u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f3a: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411f40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00411f43: call 0x7889b0 */ r_esp -= 4; W32(r_esp, 0x411f48u); f_007889b0();
    /* 00411f48: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00411f4f: jmp 0x411edf */ goto L_00411edf;
L_00411f51:; BB(0x00411f51);
    /* 00411f51: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00411f54: jne 0x411fa7 */ if (!fZ) goto L_00411fa7;
L_00411f56:; BB(0x00411f56);
    /* 00411f56: mov dword ptr [0xa3b07c], 7 */ W32((u32)(0xa3b07cu), 0x7u);
    /* 00411f60: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f62: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00411f69: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x411f6eu); f_005caba4();
    /* 00411f6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411f6f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00411f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00411f74: je 0x411edf */ if (fZ) goto L_00411edf;
L_00411f7a:; BB(0x00411f7a);
    /* 00411f7a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00411f81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411f88: push 0x411e78 */ { u32 v = 0x411e78u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f8d: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00411f93: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00411f96: call 0x7889b0 */ r_esp -= 4; W32(r_esp, 0x411f9bu); f_007889b0();
    /* 00411f9b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00411fa2: jmp 0x411edf */ goto L_00411edf;
L_00411fa7:; BB(0x00411fa7);
    /* 00411fa7: mov dword ptr [0xa3b078], 1 */ W32((u32)(0xa3b078u), 0x1u);
    /* 00411fb1: jmp 0x411edf */ goto L_00411edf;
}

void f_00411fb8(void)
{
    FN_ENTER(0x00411fb8);
    /* 00411fb8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x411fbdu); f_006dc358();
    /* 00411fbd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411fc0: jne 0x411fdb */ if (!fZ) goto L_00411fdb;
L_00411fc2:; BB(0x00411fc2);
    /* 00411fc2: mov eax, 0x9a36a0 */ r_eax = 0x9a36a0u;
    /* 00411fc7: mov dword ptr [0xa3b080], eax */ W32((u32)(0xa3b080u), r_eax);
    /* 00411fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411fcd: push 0x8faa7c */ { u32 v = 0x8faa7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00411fd2: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x411fd7u); f_0081a934();
    /* 00411fd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00411fda: ret  */ FN_RET(0x00411fb8); r_esp += 4; return;
L_00411fdb:; BB(0x00411fdb);
    /* 00411fdb: mov eax, 0x9a36a8 */ r_eax = 0x9a36a8u;
    /* 00411fe0: mov dword ptr [0xa3b080], eax */ W32((u32)(0xa3b080u), r_eax);
    /* 00411fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411fe6: push 0x8faa84 */ { u32 v = 0x8faa84u; r_esp -= 4; W32(r_esp, v); }
    /* 00411feb: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x411ff0u); f_0081a934();
    /* 00411ff0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00411ff3: ret  */ FN_RET(0x00411fb8); r_esp += 4; return;
}

void f_00411ff4(void) /* sub_411FF4 */
{
    FN_ENTER(0x00411ff4);
    /* 00411ff4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00411ff5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00411ff7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00411ff9: call 0x412018 */ r_esp -= 4; W32(r_esp, 0x411ffeu); f_00412018();
    /* 00411ffe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00412002: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412004: jne 0x41200a */ if (!fZ) goto L_0041200a;
L_00412006:; BB(0x00412006);
    /* 00412006: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412007: ret 4 */ FN_RET(0x00411ff4); r_esp += 8; return;
L_0041200a:; BB(0x0041200a);
    /* 0041200a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041200b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x412010u); f_005c2f74();
    /* 00412010: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412011: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412012: ret 4 */ FN_RET(0x00411ff4); r_esp += 8; return;
}

