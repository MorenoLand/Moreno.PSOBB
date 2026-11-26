#include "protos.h"

void f_005630fc(void)
{
    FN_ENTER(0x005630fc);
    /* 005630fc: mov eax, dword ptr [0xa73cec] */ r_eax = R32((u32)(0xa73cecu));
    /* 00563101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563103: je 0x563116 */ if (fZ) goto L_00563116;
L_00563105:; BB(0x00563105);
    /* 00563105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563106: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x56310bu); f_00857e98();
    /* 0056310b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056310c: mov dword ptr [0xa73cec], 0 */ W32((u32)(0xa73cecu), 0x0u);
L_00563116:; BB(0x00563116);
    /* 00563116: mov ecx, dword ptr [0xa73ce0] */ r_ecx = R32((u32)(0xa73ce0u));
    /* 0056311c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056311e: je 0x563133 */ if (fZ) goto L_00563133;
L_00563120:; BB(0x00563120);
    /* 00563120: je 0x563129 */ if (fZ) goto L_00563129;
L_00563122:; BB(0x00563122);
    /* 00563122: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563124: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x563129u); f_004066a8();
L_00563129:; BB(0x00563129);
    /* 00563129: mov dword ptr [0xa73ce0], 0 */ W32((u32)(0xa73ce0u), 0x0u);
L_00563133:; BB(0x00563133);
    /* 00563133: ret  */ FN_RET(0x005630fc); r_esp += 4; return;
}

void f_00563134(void)
{
    FN_ENTER(0x00563134);
    /* 00563134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563135: mov ebp, esp */ r_ebp = r_esp;
    /* 00563137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563139: push 0x8d6752 */ { u32 v = 0x8d6752u; r_esp -= 4; W32(r_esp, v); }
    /* 0056313e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056314c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056314f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00563152: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00563155: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00563158: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0056315b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056315d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00563164: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x563169u); f_005caba4();
    /* 00563169: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056316a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0056316d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056316f: je 0x5631f7 */ if (fZ) goto L_005631f7;
L_00563175:; BB(0x00563175);
    /* 00563175: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0056317c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563183: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00563189: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056318c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x563191u); f_00787a4c();
    /* 00563191: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00563194: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0056319b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0056319e:; BB(0x0056319e);
    /* 0056319e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005631a5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005631ac: push 0x454 */ { u32 v = 0x454u; r_esp -= 4; W32(r_esp, v); }
    /* 005631b1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5631b6u); f_005caba4();
    /* 005631b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005631b7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005631ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005631bc: je 0x5631f3 */ if (fZ) goto L_005631f3;
L_005631be:; BB(0x005631be);
    /* 005631be: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005631c5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005631cc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005631cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005631d2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005631d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005631d6: call 0x563200 */ r_esp -= 4; W32(r_esp, 0x5631dbu); f_00563200();
    /* 005631db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005631de: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005631e5:; BB(0x005631e5);
    /* 005631e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005631e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005631ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005631f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005631f2: ret  */ FN_RET(0x00563134); r_esp += 4; return;
L_005631f3:; BB(0x005631f3);
    /* 005631f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005631f5: jmp 0x5631e5 */ goto L_005631e5;
L_005631f7:; BB(0x005631f7);
    /* 005631f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005631f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005631fc: jmp 0x56319e */ goto L_0056319e;
}

void f_00563200(void) /* sub_563200 */
{
    FN_ENTER(0x00563200);
    /* 00563200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563201: mov ebp, esp */ r_ebp = r_esp;
    /* 00563203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563205: push 0x8d67d6 */ { u32 v = 0x8d67d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0056320a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563211: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00563218: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056321b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056321e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00563221: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00563224: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00563227: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056322a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056322d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00563230: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00563233: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x563238u); f_007865e8();
    /* 00563238: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056323f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563242: mov dword ptr [ecx], 0xb054e0 */ W32((u32)(r_ecx), 0xb054e0u);
    /* 00563248: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056324e: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x563253u); f_00576a48();
    /* 00563253: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056325a: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0056325f: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00563264: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563267: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00563269: add eax, 0x3e4 */ {  u32 a = r_eax; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056326e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00563270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563271: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x563276u); f_00858736();
    /* 00563276: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056327d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563280: mov eax, dword ptr [0x9be2a8] */ r_eax = R32((u32)(0x9be2a8u));
    /* 00563285: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563288: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0056328a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0056328d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056328e: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x563294u); call_ind(t); }
    /* 00563294: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563297: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0056329a: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0056329d: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005632a0: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005632a6: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 005632ac: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005632af: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005632b5: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 005632bb: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 005632c1: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005632c7: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 005632cd: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 005632d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005632d6: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 005632dc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005632df: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005632e5: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 005632e8: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 005632ee: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005632f1: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 005632f7: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005632fa: mov dword ptr [ecx + 0x70], 0x3f800000 */ W32((u32)(r_ecx+0x70u), 0x3f800000u);
    /* 00563301: mov dword ptr [ecx + 0x6c], 0x3f800000 */ W32((u32)(r_ecx+0x6cu), 0x3f800000u);
    /* 00563308: mov dword ptr [ecx + 0x68], 0x3f800000 */ W32((u32)(r_ecx+0x68u), 0x3f800000u);
    /* 0056330f: call 0x563588 */ r_esp -= 4; W32(r_esp, 0x563314u); f_00563588();
    /* 00563314: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563317: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00563319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056331b: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00563322: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00563329: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
    /* 0056332f: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x563334u); f_00787550();
    /* 00563334: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563337: mov edx, dword ptr [0xa73ce0] */ r_edx = R32((u32)(0xa73ce0u));
    /* 0056333d: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00563343: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00563345: mov dword ptr [ecx + 0x33c], ebx */ W32((u32)(r_ecx+0x33cu), r_ebx);
    /* 0056334b: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 00563351: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00563352: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00563354: mov edi, dword ptr [esi + eax*8 + 8] */ r_edi = R32((u32)(r_esi+r_eax*8+0x8u));
    /* 00563358: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 0056335b: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 00563361: mov eax, dword ptr [esi + eax*8 + 0xc] */ r_eax = R32((u32)(r_esi+r_eax*8+0xcu));
    /* 00563365: mov dword ptr [ecx + 0xd8], 0x9be180 */ W32((u32)(r_ecx+0xd8u), 0x9be180u);
    /* 0056336f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00563372: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00563378: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0056337e: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00563385: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x56338au); f_007aa4c8();
    /* 0056338a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056338d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056338f: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00563396: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0056339d: push 0x9be0e0 */ { u32 v = 0x9be0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005633a2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5633a7u); f_007b9a88();
    /* 005633a7: push dword ptr [0xa73ce8] */ { u32 v = R32((u32)(0xa73ce8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005633ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005633b0: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 005633b6: mov dword ptr [ecx + 0x358], 0x9be2ac */ W32((u32)(r_ecx+0x358u), 0x9be2acu);
    /* 005633c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005633c2: mov word ptr [ecx + 0x384], ax */ W16((u32)(r_ecx+0x384u), (u16)r_eax);
    /* 005633c9: mov word ptr [ecx + 0x386], ax */ W16((u32)(r_ecx+0x386u), (u16)r_eax);
    /* 005633d0: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 005633d2: push dword ptr [0xa73cf0] */ { u32 v = R32((u32)(0xa73cf0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005633d8: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5633ddu); f_007868f8();
    /* 005633dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005633e0: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 005633e7: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 005633ee: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5633f3u); f_00562dc4();
    /* 005633f3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005633f6: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5633fbu); f_005369c4();
    /* 005633fb: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005633fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563401: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00563407: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0056340d: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00563413: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00563416: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00563419: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0056341c: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x563421u); f_00786bbc();
    /* 00563421: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563424: mov eax, dword ptr [ebx + 0x2e8] */ r_eax = R32((u32)(r_ebx+0x2e8u));
    /* 0056342a: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0056342d: or edx, 0x6040000 */ {  u32 a = r_edx; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00563433: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00563435: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0056343f: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00563442: mov dword ptr [ebx + 0x3b8], esi */ W32((u32)(r_ebx+0x3b8u), r_esi);
    /* 00563448: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0056344d: mov dword ptr [ebx + 0x3c4], esi */ W32((u32)(r_ebx+0x3c4u), r_esi);
    /* 00563453: or eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563456: mov dword ptr [ebx + 0x2e8], eax */ W32((u32)(r_ebx+0x2e8u), r_eax);
    /* 0056345c: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0056345f: mov ecx, 0x101 */ r_ecx = 0x101u;
    /* 00563464: mov dword ptr [ebx + 0x388], ecx */ W32((u32)(r_ebx+0x388u), r_ecx);
    /* 0056346a: mov dword ptr [ebx + 0x38c], ecx */ W32((u32)(r_ebx+0x38cu), r_ecx);
    /* 00563470: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x563475u); f_005caba4();
    /* 00563475: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00563476: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00563479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056347b: je 0x56357e */ if (fZ) goto L_0056357e;
L_00563481:; BB(0x00563481);
    /* 00563481: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00563488: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056348f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00563492: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563494: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x563499u); f_007b4b48();
    /* 00563499: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056349c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005634a3:; BB(0x005634a3);
    /* 005634a3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005634a6: mov dword ptr [eax + 0x3bc], ecx */ W32((u32)(r_eax+0x3bcu), r_ecx);
    /* 005634ac: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005634b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005634b5: push 0x9be10c */ { u32 v = 0x9be10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005634ba: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5634bfu); f_007b9a88();
    /* 005634bf: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005634c6: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 005634cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5634d0u); f_005caba4();
    /* 005634d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005634d1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005634d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005634d6: je 0x56357a */ if (fZ) goto L_0056357a;
L_005634dc:; BB(0x005634dc);
    /* 005634dc: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005634e3: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005634ea: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005634ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005634ef: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x5634f4u); f_007b4b48();
    /* 005634f4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005634f7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005634fe:; BB(0x005634fe);
    /* 005634fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563501: mov dword ptr [eax + 0x3c0], ecx */ W32((u32)(r_eax+0x3c0u), r_ecx);
    /* 00563507: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056350e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563510: push 0x9be138 */ { u32 v = 0x9be138u; r_esp -= 4; W32(r_esp, v); }
    /* 00563515: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x56351au); f_007b9a88();
    /* 0056351a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056351d: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 00563523: lea ecx, [eax + 0x3c8] */ r_ecx = (u32)(r_eax+0x3c8u);
    /* 00563529: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x56352cu); call_ind(t); }
    /* 0056352c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056352e:; BB(0x0056352e);
    /* 0056352e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563531: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00563534: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00563536: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00563539: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056353b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056353d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0056353f: lea ecx, [edx + esi + 0x3e4] */ r_ecx = (u32)(r_edx+r_esi+0x3e4u);
    /* 00563546: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x56354bu); f_0057739c();
    /* 0056354b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056354e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563551: jl 0x56352e */ if ((fS!=fO)) goto L_0056352e;
L_00563553:; BB(0x00563553);
    /* 00563553: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563556: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00563558: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x56355eu); call_ind(t); }
    /* 0056355e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563561: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00563564: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563567: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056356a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056356d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00563574: mov esp, ebp */ r_esp = r_ebp;
    /* 00563576: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563577: ret 8 */ FN_RET(0x00563200); r_esp += 12; return;
L_0056357a:; BB(0x0056357a);
    /* 0056357a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056357c: jmp 0x5634fe */ goto L_005634fe;
L_0056357e:; BB(0x0056357e);
    /* 0056357e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00563580: jmp 0x5634a3 */ goto L_005634a3;
}

void f_00563588(void) /* sub_563588 */
{
    FN_ENTER(0x00563588);
    /* 00563588: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056358b: mov edx, ecx */ r_edx = r_ecx;
    /* 0056358d: fld dword ptr [0x925a14] */ FPUSH(R_F32((u32)(0x925a14u)));
    /* 00563593: fadd dword ptr [edx + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x35cu));
    /* 00563599: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0056359c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005635a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005635a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005635a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005635ad: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005635b1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005635b4: fld dword ptr [edx + 0x360] */ FPUSH(R_F32((u32)(r_edx+0x360u)));
    /* 005635ba: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 005635bf: mov word ptr [edx + 0x390], ax */ W16((u32)(r_edx+0x390u), (u16)r_eax);
    /* 005635c6: mov word ptr [edx + 0x392], ax */ W16((u32)(r_edx+0x392u), (u16)r_eax);
    /* 005635cd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005635d0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005635d4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005635d9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005635dd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005635e1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005635e5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005635e8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005635ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005635ee: jl 0x563635 */ if ((fS!=fO)) goto L_00563635;
L_005635f0:; BB(0x005635f0);
    /* 005635f0: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005635f3: jg 0x5635fd */ if ((!fZ&&fS==fO)) goto L_005635fd;
L_005635f5:; BB(0x005635f5);
    /* 005635f5: mov dword ptr [edx + 0x3a4], ecx */ W32((u32)(r_edx+0x3a4u), r_ecx);
    /* 005635fb: jmp 0x56360c */ goto L_0056360c;
L_005635fd:; BB(0x005635fd);
    /* 005635fd: mov dword ptr [edx + 0x3a4], 8 */ W32((u32)(r_edx+0x3a4u), 0x8u);
    /* 00563607: mov ecx, 8 */ r_ecx = 0x8u;
L_0056360c:; BB(0x0056360c);
    /* 0056360c: mov eax, 1 */ r_eax = 0x1u;
    /* 00563611: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00563613: mov dword ptr [edx + 0x380], eax */ W32((u32)(r_edx+0x380u), r_eax);
    /* 00563619: mov eax, dword ptr [edx + 0x364] */ r_eax = R32((u32)(r_edx+0x364u));
    /* 0056361f: mov dword ptr [edx + 0x39c], eax */ W32((u32)(r_edx+0x39cu), r_eax);
    /* 00563625: mov eax, dword ptr [edx + 0x368] */ r_eax = R32((u32)(r_edx+0x368u));
    /* 0056362b: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 00563631: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563634: ret  */ FN_RET(0x00563588); r_esp += 4; return;
L_00563635:; BB(0x00563635);
    /* 00563635: mov dword ptr [edx + 0x3a4], 0 */ W32((u32)(r_edx+0x3a4u), 0x0u);
    /* 0056363f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00563641: jmp 0x56360c */ goto L_0056360c;
}

void f_00563644(void) /* sub_563644 */
{
    FN_ENTER(0x00563644);
    /* 00563644: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00563645: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00563646: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563647: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00563648: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056364b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056364d: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00563653: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00563655: je 0x563674 */ if (fZ) goto L_00563674;
L_00563657:; BB(0x00563657);
    /* 00563657: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0056365c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056365e: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00563665: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00563667: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x56366cu); f_007706b0();
    /* 0056366c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056366f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563670: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563671: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00563672: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563673: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_00563674:; BB(0x00563674);
    /* 00563674: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00563676: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00563678: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056367a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x56367du); call_ind(t); }
    /* 0056367d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056367f: je 0x5639bf */ if (fZ) goto L_005639bf;
L_00563685:; BB(0x00563685);
    /* 00563685: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00563688: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056368a: je 0x5637fe */ if (fZ) goto L_005637fe;
L_00563690:; BB(0x00563690);
    /* 00563690: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00563695: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056369b: mov ebp, dword ptr [ebx + 0x358] */ r_ebp = R32((u32)(r_ebx+0x358u));
    /* 005636a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005636a3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005636ab: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 005636b0: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 005636b8: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 005636c0: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 005636c3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005636c5: mov ebp, 0 */ r_ebp = 0x0u;
    /* 005636ca: jle 0x5639e4 */ if ((fZ||fS!=fO)) goto L_005639e4;
L_005636d0:; BB(0x005636d0);
    /* 005636d0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005636d3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_005636d7:; BB(0x005636d7);
    /* 005636d7: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 005636de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005636df: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x5636e4u); f_006ea71c();
    /* 005636e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005636e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005636e7: je 0x563778 */ if (fZ) goto L_00563778;
L_005636ed:; BB(0x005636ed);
    /* 005636ed: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005636ef: je 0x563778 */ if (fZ) goto L_00563778;
L_005636f5:; BB(0x005636f5);
    /* 005636f5: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 005636f9: cmp esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005636ff: jge 0x563778 */ if ((fS==fO)) goto L_00563778;
L_00563701:; BB(0x00563701);
    /* 00563701: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00563705: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563707: je 0x563778 */ if (fZ) goto L_00563778;
L_00563709:; BB(0x00563709);
    /* 00563709: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056370c: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563711: jne 0x563778 */ if (!fZ) goto L_00563778;
L_00563713:; BB(0x00563713);
    /* 00563713: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00563717: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0056371d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00563721: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 00563727: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0056372d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00563731: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00563737: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0056373b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x563740u); f_0082f9c4();
    /* 00563740: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00563744: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00563746: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0056374a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056374c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0056374e: fcom dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); 
    /* 00563751: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00563753: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00563757: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00563758: jae 0x563778 */ if (!fC) goto L_00563778;
L_0056375a:; BB(0x0056375a);
    /* 0056375a: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00563760: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00563761: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00563763: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x563768u); f_00771e14();
    /* 00563768: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056376b: je 0x563778 */ if (fZ) goto L_00563778;
L_0056376d:; BB(0x0056376d);
    /* 0056376d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00563771: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00563774: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00563778:; BB(0x00563778);
    /* 00563778: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0056377d: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00563783: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00563786: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563788: jl 0x5636d7 */ if ((fS!=fO)) goto L_005636d7;
L_0056378e:; BB(0x0056378e);
    /* 0056378e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
L_00563792:; BB(0x00563792);
    /* 00563792: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 00563799: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056379f: jl 0x5637c4 */ if ((fS!=fO)) goto L_005637c4;
L_005637a1:; BB(0x005637a1);
    /* 005637a1: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005637a7: jge 0x5639bf */ if ((fS==fO)) goto L_005639bf;
L_005637ad:; BB(0x005637ad);
    /* 005637ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005637ae: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5637b3u); f_00786b3c();
    /* 005637b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005637b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005637b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005637b7: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5637bcu); f_007706b0();
    /* 005637bc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005637bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005637c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005637c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005637c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005637c3: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_005637c4:; BB(0x005637c4);
    /* 005637c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005637c5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5637cau); f_0068d5a8();
    /* 005637ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005637cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005637cd: je 0x5637ed */ if (fZ) goto L_005637ed;
L_005637cf:; BB(0x005637cf);
    /* 005637cf: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 005637d5: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005637db: jne 0x5637ed */ if (!fZ) goto L_005637ed;
L_005637dd:; BB(0x005637dd);
    /* 005637dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005637de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005637e0: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5637e5u); f_007706b0();
    /* 005637e5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005637e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005637e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005637ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005637eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005637ec: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_005637ed:; BB(0x005637ed);
    /* 005637ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005637ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005637f1: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5637f6u); f_007706b0();
    /* 005637f6: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005637f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005637fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005637fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005637fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005637fd: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_005637fe:; BB(0x005637fe);
    /* 005637fe: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 00563804: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0056380c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0056380e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00563810: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00563818: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0056381d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0056381f: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 00563827: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0056382c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0056382e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00563830: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00563832: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00563837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00563839: jle 0x5639eb */ if ((fZ||fS!=fO)) goto L_005639eb;
L_0056383f:; BB(0x0056383f);
    /* 0056383f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00563842: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00563846: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0056384a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0056384e: mov edx, eax */ r_edx = r_eax;
    /* 00563850: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00563854:; BB(0x00563854);
    /* 00563854: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0056385b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056385d: je 0x563951 */ if (fZ) goto L_00563951;
L_00563863:; BB(0x00563863);
    /* 00563863: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00563867: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056386c: jge 0x563951 */ if ((fS==fO)) goto L_00563951;
L_00563872:; BB(0x00563872);
    /* 00563872: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 00563878: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056387e: jne 0x563951 */ if (!fZ) goto L_00563951;
L_00563884:; BB(0x00563884);
    /* 00563884: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00563887: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056388c: jne 0x563951 */ if (!fZ) goto L_00563951;
L_00563892:; BB(0x00563892);
    /* 00563892: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00563896: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0056389c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005638a0: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 005638a6: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 005638ac: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005638b0: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005638b6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005638ba: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5638bfu); f_0082f9c4();
    /* 005638bf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005638c3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005638c5: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005638c9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005638cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005638cd: mov eax, dword ptr [esi + 0x964] */ r_eax = R32((u32)(r_esi+0x964u));
    /* 005638d3: test dword ptr [ebx + 0x380], eax */ {  u32 a = R32((u32)(r_ebx+0x380u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005638d9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005638dd: je 0x563913 */ if (fZ) goto L_00563913;
L_005638df:; BB(0x005638df);
    /* 005638df: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005638e3: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 005638e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005638e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005638ea: jae 0x563913 */ if (!fC) goto L_00563913;
L_005638ec:; BB(0x005638ec);
    /* 005638ec: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005638f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005638f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005638f5: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5638fau); f_00771e14();
    /* 005638fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005638fd: je 0x563913 */ if (fZ) goto L_00563913;
L_005638ff:; BB(0x005638ff);
    /* 005638ff: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00563903: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00563907: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0056390b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0056390f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00563913:; BB(0x00563913);
    /* 00563913: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00563917: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0056391a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056391c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056391d: jb 0x563927 */ if (fC) goto L_00563927;
L_0056391f:; BB(0x0056391f);
    /* 0056391f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00563925: jmp 0x563951 */ goto L_00563951;
L_00563927:; BB(0x00563927);
    /* 00563927: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0056392d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056392e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00563930: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x563935u); f_00771e14();
    /* 00563935: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0056393b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056393e: je 0x563951 */ if (fZ) goto L_00563951;
L_00563940:; BB(0x00563940);
    /* 00563940: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00563944: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 00563948: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056394b: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0056394f: mov ebp, esi */ r_ebp = r_esi;
L_00563951:; BB(0x00563951);
    /* 00563951: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00563954: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563956: jl 0x563854 */ if ((fS!=fO)) goto L_00563854;
L_0056395c:; BB(0x0056395c);
    /* 0056395c: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00563960: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00563964: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00563968: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
L_0056396b:; BB(0x0056396b);
    /* 0056396b: fcomp dword ptr [0x925a10] */ fx_compare(ST(0), R_F32((u32)(0x925a10u))); FPOP();
    /* 00563971: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00563973: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00563974: jae 0x563991 */ if (!fC) goto L_00563991;
L_00563976:; BB(0x00563976);
    /* 00563976: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563978: je 0x563991 */ if (fZ) goto L_00563991;
L_0056397a:; BB(0x0056397a);
    /* 0056397a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056397b: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 00563982: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00563984: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x563989u); f_007706b0();
    /* 00563989: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056398c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056398d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056398e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056398f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563990: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_00563991:; BB(0x00563991);
    /* 00563991: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563993: je 0x5639ac */ if (fZ) goto L_005639ac;
L_00563995:; BB(0x00563995);
    /* 00563995: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00563996: mov word ptr [ebx + 0x340], cx */ W16((u32)(r_ebx+0x340u), (u16)r_ecx);
    /* 0056399d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056399f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5639a4u); f_007706b0();
    /* 005639a4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005639a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005639a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005639a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005639aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005639ab: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_005639ac:; BB(0x005639ac);
    /* 005639ac: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005639ae: je 0x5639c7 */ if (fZ) goto L_005639c7;
L_005639b0:; BB(0x005639b0);
    /* 005639b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005639b1: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 005639b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005639ba: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5639bfu); f_007706b0();
L_005639bf:; BB(0x005639bf);
    /* 005639bf: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005639c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005639c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005639c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005639c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005639c6: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_005639c7:; BB(0x005639c7);
    /* 005639c7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005639cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005639ce: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 005639d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005639d7: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5639dcu); f_007706b0();
    /* 005639dc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005639df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005639e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005639e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005639e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005639e3: ret  */ FN_RET(0x00563644); r_esp += 4; return;
L_005639e4:; BB(0x005639e4);
    /* 005639e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005639e6: jmp 0x563792 */ goto L_00563792;
L_005639eb:; BB(0x005639eb);
    /* 005639eb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005639ed: jmp 0x56396b */ goto L_0056396b;
}

void f_005639f4(void) /* sub_5639F4 */
{
    FN_ENTER(0x005639f4);
    /* 005639f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005639f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005639f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005639f9: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x5639feu); f_00777d10();
    /* 005639fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563a00: je 0x563a72 */ if (fZ) goto L_00563a72;
L_00563a02:; BB(0x00563a02);
    /* 00563a02: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00563a09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563a0b: jl 0x563a6b */ if ((fS!=fO)) goto L_00563a6b;
L_00563a0d:; BB(0x00563a0d);
    /* 00563a0d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563a10: jle 0x563a17 */ if ((fZ||fS!=fO)) goto L_00563a17;
L_00563a12:; BB(0x00563a12);
    /* 00563a12: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00563a15: jne 0x563a6b */ if (!fZ) goto L_00563a6b;
L_00563a17:; BB(0x00563a17);
    /* 00563a17: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00563a1d: lea ecx, [ebp + 0x3c8] */ r_ecx = (u32)(r_ebp+0x3c8u);
    /* 00563a23: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x563a26u); call_ind(t); }
    /* 00563a26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00563a29: jne 0x563a6b */ if (!fZ) goto L_00563a6b;
L_00563a2b:; BB(0x00563a2b);
    /* 00563a2b: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00563a31: and eax, 0xfffffebc */ {  u32 a = r_eax; u32 b = 0xfffffebcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563a36: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563a39: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00563a3f: mov edx, 3 */ r_edx = 0x3u;
    /* 00563a44: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00563a4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563a4d: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00563a54: mov eax, 1 */ r_eax = 0x1u;
    /* 00563a59: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00563a60: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00563a63: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563a68: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_00563a6b:; BB(0x00563a6b);
    /* 00563a6b: mov eax, 1 */ r_eax = 0x1u;
    /* 00563a70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563a71: ret  */ FN_RET(0x005639f4); r_esp += 4; return;
L_00563a72:; BB(0x00563a72);
    /* 00563a72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563a74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563a75: ret  */ FN_RET(0x005639f4); r_esp += 4; return;
}

void f_00563a78(void) /* sub_563A78 */
{
    FN_ENTER(0x00563a78);
    /* 00563a78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563a79: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00563a7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00563a7d: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x563a82u); f_007780a8();
    /* 00563a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563a84: je 0x563af6 */ if (fZ) goto L_00563af6;
L_00563a86:; BB(0x00563a86);
    /* 00563a86: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00563a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563a8f: jl 0x563aef */ if ((fS!=fO)) goto L_00563aef;
L_00563a91:; BB(0x00563a91);
    /* 00563a91: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563a94: jle 0x563a9b */ if ((fZ||fS!=fO)) goto L_00563a9b;
L_00563a96:; BB(0x00563a96);
    /* 00563a96: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00563a99: jne 0x563aef */ if (!fZ) goto L_00563aef;
L_00563a9b:; BB(0x00563a9b);
    /* 00563a9b: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00563aa1: lea ecx, [ebp + 0x3c8] */ r_ecx = (u32)(r_ebp+0x3c8u);
    /* 00563aa7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x563aaau); call_ind(t); }
    /* 00563aaa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00563aad: jne 0x563aef */ if (!fZ) goto L_00563aef;
L_00563aaf:; BB(0x00563aaf);
    /* 00563aaf: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00563ab5: and eax, 0xfffffebc */ {  u32 a = r_eax; u32 b = 0xfffffebcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563aba: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563abd: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00563ac3: mov edx, 3 */ r_edx = 0x3u;
    /* 00563ac8: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00563acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563ad1: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00563ad8: mov eax, 1 */ r_eax = 0x1u;
    /* 00563add: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00563ae4: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00563ae7: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563aec: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_00563aef:; BB(0x00563aef);
    /* 00563aef: mov eax, 1 */ r_eax = 0x1u;
    /* 00563af4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563af5: ret  */ FN_RET(0x00563a78); r_esp += 4; return;
L_00563af6:; BB(0x00563af6);
    /* 00563af6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563af8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563af9: ret  */ FN_RET(0x00563a78); r_esp += 4; return;
}

void f_00563afc(void) /* sub_563AFC */
{
    FN_ENTER(0x00563afc);
    /* 00563afc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563afd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00563aff: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00563b06: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00563b09: je 0x563bc7 */ if (fZ) goto L_00563bc7;
L_00563b0f:; BB(0x00563b0f);
    /* 00563b0f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00563b12: je 0x563bc7 */ if (fZ) goto L_00563bc7;
L_00563b18:; BB(0x00563b18);
    /* 00563b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563b1a: jne 0x563b81 */ if (!fZ) goto L_00563b81;
L_00563b1c:; BB(0x00563b1c);
    /* 00563b1c: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00563b22: lea ecx, [ebp + 0x3c8] */ r_ecx = (u32)(r_ebp+0x3c8u);
    /* 00563b28: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x563b2bu); call_ind(t); }
    /* 00563b2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563b2d: je 0x563bc7 */ if (fZ) goto L_00563bc7;
L_00563b33:; BB(0x00563b33);
    /* 00563b33: mov eax, 0xa */ r_eax = 0xau;
    /* 00563b38: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00563b3f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00563b42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00563b44: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00563b4b: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00563b52: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563b57: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563b5c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00563b5f: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00563b65: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563b6a: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00563b70: mov ebp, dword ptr [ebp + 0xa4] */ r_ebp = R32((u32)(r_ebp+0xa4u));
    /* 00563b76: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00563b79: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563b7c: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 00563b7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563b80: ret  */ FN_RET(0x00563afc); r_esp += 4; return;
L_00563b81:; BB(0x00563b81);
    /* 00563b81: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563b84: jne 0x563b9b */ if (!fZ) goto L_00563b9b;
L_00563b86:; BB(0x00563b86);
    /* 00563b86: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00563b8c: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563b8e: jne 0x563bc7 */ if (!fZ) goto L_00563bc7;
L_00563b90:; BB(0x00563b90);
    /* 00563b90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563b92: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00563b99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563b9a: ret  */ FN_RET(0x00563afc); r_esp += 4; return;
L_00563b9b:; BB(0x00563b9b);
    /* 00563b9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563b9d: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00563ba4: mov edx, 0xb */ r_edx = 0xbu;
    /* 00563ba9: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00563bb0: mov eax, 1 */ r_eax = 0x1u;
    /* 00563bb5: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00563bbc: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00563bbf: and eax, 0xf99bffff */ {  u32 a = r_eax; u32 b = 0xf99bffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563bc4: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_00563bc7:; BB(0x00563bc7);
    /* 00563bc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563bc8: ret  */ FN_RET(0x00563afc); r_esp += 4; return;
}

void f_00563bcc(void) /* sub_563BCC */
{
    FN_ENTER(0x00563bcc);
    /* 00563bcc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00563bd3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563bd6: je 0x563cda */ if (fZ) goto L_00563cda;
L_00563bdc:; BB(0x00563bdc);
    /* 00563bdc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563bdf: jne 0x563c1c */ if (!fZ) goto L_00563c1c;
L_00563be1:; BB(0x00563be1);
    /* 00563be1: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00563be7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563be9: je 0x563d04 */ if (fZ) goto L_00563d04;
L_00563bef:; BB(0x00563bef);
    /* 00563bef: mov eax, 3 */ r_eax = 0x3u;
    /* 00563bf4: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00563bfb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00563bfd: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00563c04: mov eax, 1 */ r_eax = 0x1u;
    /* 00563c09: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00563c10: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00563c13: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563c18: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00563c1b: ret  */ FN_RET(0x00563bcc); r_esp += 4; return;
L_00563c1c:; BB(0x00563c1c);
    /* 00563c1c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563c1f: jne 0x563c6e */ if (!fZ) goto L_00563c6e;
L_00563c21:; BB(0x00563c21);
    /* 00563c21: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00563c27: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563c29: je 0x563d04 */ if (fZ) goto L_00563d04;
L_00563c2f:; BB(0x00563c2f);
    /* 00563c2f: mov edx, 1 */ r_edx = 0x1u;
    /* 00563c34: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00563c3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00563c3d: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00563c44: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00563c47: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563c4c: or edx, 0x6040000 */ {  u32 a = r_edx; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00563c52: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00563c55: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563c58: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 00563c5e: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 00563c64: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00563c67: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563c6a: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00563c6d: ret  */ FN_RET(0x00563bcc); r_esp += 4; return;
L_00563c6e:; BB(0x00563c6e);
    /* 00563c6e: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00563c74: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00563c76: je 0x563ca6 */ if (fZ) goto L_00563ca6;
L_00563c78:; BB(0x00563c78);
    /* 00563c78: mov eax, 3 */ r_eax = 0x3u;
    /* 00563c7d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00563c84: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00563c86: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00563c8d: mov eax, 1 */ r_eax = 0x1u;
    /* 00563c92: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00563c99: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00563c9c: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563ca1: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00563ca4: jmp 0x563cca */ goto L_00563cca;
L_00563ca6:; BB(0x00563ca6);
    /* 00563ca6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00563ca8: je 0x563cca */ if (fZ) goto L_00563cca;
L_00563caa:; BB(0x00563caa);
    /* 00563caa: mov eax, 1 */ r_eax = 0x1u;
    /* 00563caf: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00563cb6: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00563cb9: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563cbe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00563cc0: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00563cc7: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_00563cca:; BB(0x00563cca);
    /* 00563cca: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00563cd0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00563cd3: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563cd6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00563cd9: ret  */ FN_RET(0x00563bcc); r_esp += 4; return;
L_00563cda:; BB(0x00563cda);
    /* 00563cda: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00563ce0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563ce2: je 0x563d04 */ if (fZ) goto L_00563d04;
L_00563ce4:; BB(0x00563ce4);
    /* 00563ce4: mov eax, 2 */ r_eax = 0x2u;
    /* 00563ce9: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00563cf0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00563cf3: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563cf8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563cfa: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00563d01: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_00563d04:; BB(0x00563d04);
    /* 00563d04: ret  */ FN_RET(0x00563bcc); r_esp += 4; return;
}

void f_00563d08(void) /* sub_563D08 */
{
    FN_ENTER(0x00563d08);
    /* 00563d08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00563d09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00563d0a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563d0d: mov edi, ecx */ r_edi = r_ecx;
    /* 00563d0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00563d11: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x563d16u); f_00770738();
    /* 00563d16: mov ebx, eax */ r_ebx = r_eax;
    /* 00563d18: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00563d1f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563d22: jl 0x563e63 */ if ((fS!=fO)) goto L_00563e63;
L_00563d28:; BB(0x00563d28);
    /* 00563d28: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563d2a: je 0x563e63 */ if (fZ) goto L_00563e63;
L_00563d30:; BB(0x00563d30);
    /* 00563d30: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 00563d36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563d38: je 0x563e63 */ if (fZ) goto L_00563e63;
L_00563d3e:; BB(0x00563d3e);
    /* 00563d3e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00563d41: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563d47: jne 0x563e63 */ if (!fZ) goto L_00563e63;
L_00563d4d:; BB(0x00563d4d);
    /* 00563d4d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00563d50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563d51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00563d52: mov ecx, edi */ r_ecx = r_edi;
    /* 00563d54: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x563d59u); f_00771458();
    /* 00563d59: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00563d5d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00563d60: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00563d64: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00563d66: fmul qword ptr [0x9259a8] */ ST(0) = ST(0) * R_F64((u32)(0x9259a8u));
    /* 00563d6c: fdiv qword ptr [0x9259a0] */ ST(0) = ST(0) / R_F64((u32)(0x9259a0u));
    /* 00563d72: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00563d76: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00563d7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563d80: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00563d84: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00563d88: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00563d8c: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00563d90: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00563d94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563d95: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00563d98: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x563d9du); f_007a9018();
    /* 00563d9d: mov edx, eax */ r_edx = r_eax;
    /* 00563d9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00563da2: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 00563da8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563daa: je 0x563e6b */ if (fZ) goto L_00563e6b;
L_00563db0:; BB(0x00563db0);
    /* 00563db0: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
L_00563db3:; BB(0x00563db3);
    /* 00563db3: mov ebx, dword ptr [edi + 0x37c] */ r_ebx = R32((u32)(r_edi+0x37cu));
    /* 00563db9: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00563dbc: jne 0x563e2c */ if (!fZ) goto L_00563e2c;
L_00563dbe:; BB(0x00563dbe);
    /* 00563dbe: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00563dc1: je 0x563df9 */ if (fZ) goto L_00563df9;
L_00563dc3:; BB(0x00563dc3);
    /* 00563dc3: fadd dword ptr [0x925a08] */ ST(0) = ST(0) + R_F32((u32)(0x925a08u));
    /* 00563dc9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00563dcb: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00563dcf: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00563dd1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00563dd3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00563dd8: mov word ptr [edi + 0x384], bx */ W16((u32)(r_edi+0x384u), (u16)r_ebx);
    /* 00563ddf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00563de0: ja 0x563e63 */ if ((!fC&&!fZ)) goto L_00563e63;
L_00563de6:; BB(0x00563de6);
    /* 00563de6: cmp edx, 0xaaa */ {  u32 a = r_edx; u32 b = 0xaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563dec: jg 0x563e63 */ if ((!fZ&&fS==fO)) goto L_00563e63;
L_00563dee:; BB(0x00563dee);
    /* 00563dee: mov eax, 1 */ r_eax = 0x1u;
    /* 00563df3: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563df6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563df7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563df8: ret  */ FN_RET(0x00563d08); r_esp += 4; return;
L_00563df9:; BB(0x00563df9);
    /* 00563df9: mov ecx, dword ptr [0xa73cec] */ r_ecx = R32((u32)(0xa73cecu));
    /* 00563dff: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00563e03: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00563e05: mov word ptr [edi + 0x384], bx */ W16((u32)(r_edi+0x384u), (u16)r_ebx);
    /* 00563e0c: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00563e0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00563e10: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00563e13: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00563e15: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00563e17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00563e19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00563e1a: jb 0x563e63 */ if (fC) goto L_00563e63;
L_00563e1c:; BB(0x00563e1c);
    /* 00563e1c: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563e1f: jg 0x563e63 */ if ((!fZ&&fS==fO)) goto L_00563e63;
L_00563e21:; BB(0x00563e21);
    /* 00563e21: mov eax, 1 */ r_eax = 0x1u;
    /* 00563e26: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563e29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563e2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563e2b: ret  */ FN_RET(0x00563d08); r_esp += 4; return;
L_00563e2c:; BB(0x00563e2c);
    /* 00563e2c: mov ecx, dword ptr [0xa73cec] */ r_ecx = R32((u32)(0xa73cecu));
    /* 00563e32: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00563e36: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00563e3b: mov word ptr [edi + 0x384], bx */ W16((u32)(r_edi+0x384u), (u16)r_ebx);
    /* 00563e42: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00563e45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00563e47: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00563e4a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00563e4c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00563e4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00563e50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00563e51: jb 0x563e63 */ if (fC) goto L_00563e63;
L_00563e53:; BB(0x00563e53);
    /* 00563e53: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563e56: jg 0x563e63 */ if ((!fZ&&fS==fO)) goto L_00563e63;
L_00563e58:; BB(0x00563e58);
    /* 00563e58: mov eax, 1 */ r_eax = 0x1u;
    /* 00563e5d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563e60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563e61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563e62: ret  */ FN_RET(0x00563d08); r_esp += 4; return;
L_00563e63:; BB(0x00563e63);
    /* 00563e63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563e65: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563e68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563e69: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563e6a: ret  */ FN_RET(0x00563d08); r_esp += 4; return;
L_00563e6b:; BB(0x00563e6b);
    /* 00563e6b: fld dword ptr [0x925a0c] */ FPUSH(R_F32((u32)(0x925a0cu)));
    /* 00563e71: jmp 0x563db3 */ goto L_00563db3;
}

void f_00563e78(void) /* sub_563E78 */
{
    FN_ENTER(0x00563e78);
    /* 00563e78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00563e79: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563e7c: mov edi, ecx */ r_edi = r_ecx;
    /* 00563e7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00563e80: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x563e85u); f_00770738();
    /* 00563e85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563e87: je 0x563fe2 */ if (fZ) goto L_00563fe2;
L_00563e8d:; BB(0x00563e8d);
    /* 00563e8d: movsx edx, word ptr [edi + 0x384] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x384u));
    /* 00563e94: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563e97: jne 0x563ebf */ if (!fZ) goto L_00563ebf;
L_00563e99:; BB(0x00563e99);
    /* 00563e99: mov eax, 5 */ r_eax = 0x5u;
    /* 00563e9e: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00563ea5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563ea7: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00563eae: mov eax, 3 */ r_eax = 0x3u;
    /* 00563eb3: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00563eba: jmp 0x563fab */ goto L_00563fab;
L_00563ebf:; BB(0x00563ebf);
    /* 00563ebf: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563ec2: jne 0x563efb */ if (!fZ) goto L_00563efb;
L_00563ec4:; BB(0x00563ec4);
    /* 00563ec4: mov eax, 6 */ r_eax = 0x6u;
    /* 00563ec9: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00563ed0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563ed2: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00563ed9: mov eax, 4 */ r_eax = 0x4u;
    /* 00563ede: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00563ee5: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00563eeb: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563ef0: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00563ef6: jmp 0x563fab */ goto L_00563fab;
L_00563efb:; BB(0x00563efb);
    /* 00563efb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00563efe: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 00563f04: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00563f07: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 00563f0d: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 00563f13: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00563f17: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00563f1b: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00563f21: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x563f26u); f_0082f9c4();
    /* 00563f26: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00563f29: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00563f2d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00563f2f: fmul qword ptr [0x925998] */ ST(0) = ST(0) * R_F64((u32)(0x925998u));
    /* 00563f35: fdiv qword ptr [0x925990] */ ST(0) = ST(0) / R_F64((u32)(0x925990u));
    /* 00563f3b: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00563f3f: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00563f44: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563f49: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00563f4d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00563f51: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00563f55: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00563f59: mov eax, 4 */ r_eax = 0x4u;
    /* 00563f5e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00563f62: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00563f69: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563f6c: jge 0x563f8f */ if ((fS==fO)) goto L_00563f8f;
L_00563f6e:; BB(0x00563f6e);
    /* 00563f6e: mov eax, 1 */ r_eax = 0x1u;
    /* 00563f73: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00563f7a: mov edx, 2 */ r_edx = 0x2u;
    /* 00563f7f: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00563f86: movsx edx, word ptr [edi + 0x384] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x384u));
    /* 00563f8d: jmp 0x563fab */ goto L_00563fab;
L_00563f8f:; BB(0x00563f8f);
    /* 00563f8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563f91: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00563f98: mov edx, 1 */ r_edx = 0x1u;
    /* 00563f9d: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00563fa4: movsx edx, word ptr [edi + 0x384] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x384u));
L_00563fab:; BB(0x00563fab);
    /* 00563fab: mov eax, dword ptr [0xa73cec] */ r_eax = R32((u32)(0xa73cecu));
    /* 00563fb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00563fb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563fb3: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00563fb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563fb7: mov ecx, edi */ r_ecx = r_edi;
    /* 00563fb9: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x563fbeu); f_007868f8();
    /* 00563fbe: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00563fc4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00563fc7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563fca: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00563fcd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00563fd0: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00563fd5: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00563fda: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00563fdd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563fe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563fe1: ret  */ FN_RET(0x00563e78); r_esp += 4; return;
L_00563fe2:; BB(0x00563fe2);
    /* 00563fe2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563fe5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00563fe6: ret  */ FN_RET(0x00563e78); r_esp += 4; return;
}

void f_00563fe8(void) /* sub_563FE8 */
{
    FN_ENTER(0x00563fe8);
    /* 00563fe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00563fe9: mov ebx, esp */ r_ebx = r_esp;
    /* 00563feb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00563fee: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563ff1: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00563ff7: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00563ff9: jne 0x56418f */ if (!fZ) goto L_0056418f;
L_00563fff:; BB(0x00563fff);
    /* 00563fff: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00564001: je 0x564189 */ if (fZ) goto L_00564189;
L_00564007:; BB(0x00564007);
    /* 00564007: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056400e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564011: je 0x564189 */ if (fZ) goto L_00564189;
L_00564017:; BB(0x00564017);
    /* 00564017: movsx eax, word ptr [ecx + 0x390] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x390u));
    /* 0056401e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00564020: jle 0x564189 */ if ((fZ||fS!=fO)) goto L_00564189;
L_00564026:; BB(0x00564026);
    /* 00564026: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0056402c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056402e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00564030: jle 0x564189 */ if ((fZ||fS!=fO)) goto L_00564189;
L_00564036:; BB(0x00564036);
    /* 00564036: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0056403a: mov esi, ecx */ r_esi = r_ecx;
    /* 0056403c: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00564040: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00564044: mov edi, eax */ r_edi = r_eax;
L_00564046:; BB(0x00564046);
    /* 00564046: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 0056404d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056404f: je 0x564172 */ if (fZ) goto L_00564172;
L_00564055:; BB(0x00564055);
    /* 00564055: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00564058: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056405d: jne 0x564172 */ if (!fZ) goto L_00564172;
L_00564063:; BB(0x00564063);
    /* 00564063: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00564066: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564067: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 0056406a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056406c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056406d: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x564072u); f_007713d4();
    /* 00564072: fcomp dword ptr [0x925a04] */ fx_compare(ST(0), R_F32((u32)(0x925a04u))); FPOP();
    /* 00564078: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056407a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056407b: jb 0x564088 */ if (fC) goto L_00564088;
L_0056407d:; BB(0x0056407d);
    /* 0056407d: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00564083: jmp 0x564172 */ goto L_00564172;
L_00564088:; BB(0x00564088);
    /* 00564088: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056408b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056408f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00564091: fmul qword ptr [0x925988] */ ST(0) = ST(0) * R_F64((u32)(0x925988u));
    /* 00564097: fdiv qword ptr [0x925980] */ ST(0) = ST(0) / R_F64((u32)(0x925980u));
    /* 0056409d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005640a1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005640a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005640ab: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005640af: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005640b3: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005640b7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005640bb: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005640bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005640c0: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005640c3: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5640c8u); f_007a9018();
    /* 005640c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005640cb: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005640d0: jl 0x5640dd */ if ((fS!=fO)) goto L_005640dd;
L_005640d2:; BB(0x005640d2);
    /* 005640d2: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005640d8: jmp 0x564172 */ goto L_00564172;
L_005640dd:; BB(0x005640dd);
    /* 005640dd: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 005640e3: test edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005640e9: je 0x56416c */ if (fZ) goto L_0056416c;
L_005640ef:; BB(0x005640ef);
    /* 005640ef: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005640f2: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 005640f8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005640fb: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00564101: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00564105: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 0056410b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0056410f: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00564115: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56411au); f_0082f9c4();
    /* 0056411a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056411d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00564121: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00564123: fmul qword ptr [0x925988] */ ST(0) = ST(0) * R_F64((u32)(0x925988u));
    /* 00564129: fdiv qword ptr [0x925980] */ ST(0) = ST(0) / R_F64((u32)(0x925980u));
    /* 0056412f: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00564133: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00564138: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056413d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00564141: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00564145: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00564149: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0056414d: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00564151: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564152: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00564155: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x56415au); f_007a9018();
    /* 0056415a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056415d: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564162: jl 0x564198 */ if ((fS!=fO)) goto L_00564198;
L_00564164:; BB(0x00564164);
    /* 00564164: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0056416a: jmp 0x564172 */ goto L_00564172;
L_0056416c:; BB(0x0056416c);
    /* 0056416c: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00564172:; BB(0x00564172);
    /* 00564172: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00564175: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564177: jl 0x564046 */ if ((fS!=fO)) goto L_00564046;
L_0056417d:; BB(0x0056417d);
    /* 0056417d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00564181: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00564185: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00564189:; BB(0x00564189);
    /* 00564189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056418b: mov esp, ebx */ r_esp = r_ebx;
    /* 0056418d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056418e: ret  */ FN_RET(0x00563fe8); r_esp += 4; return;
L_0056418f:; BB(0x0056418f);
    /* 0056418f: mov eax, 1 */ r_eax = 0x1u;
    /* 00564194: mov esp, ebx */ r_esp = r_ebx;
    /* 00564196: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00564197: ret  */ FN_RET(0x00563fe8); r_esp += 4; return;
L_00564198:; BB(0x00564198);
    /* 00564198: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0056419c: mov eax, ebp */ r_eax = r_ebp;
    /* 0056419e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 005641a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005641a4: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 005641aa: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 005641ae: mov dword ptr [ecx + 0x3b8], eax */ W32((u32)(r_ecx+0x3b8u), r_eax);
    /* 005641b4: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005641b7: mov dword ptr [ecx + 0x37c], edx */ W32((u32)(r_ecx+0x37cu), r_edx);
    /* 005641bd: mov eax, 1 */ r_eax = 0x1u;
    /* 005641c2: mov esp, ebx */ r_esp = r_ebx;
    /* 005641c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005641c5: ret  */ FN_RET(0x00563fe8); r_esp += 4; return;
}

