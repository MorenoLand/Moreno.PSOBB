#include "protos.h"

void f_00457000(void) /* sub_457000 */
{
    FN_ENTER(0x00457000);
    /* 00457000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457001: mov ebp, esp */ r_ebp = r_esp;
    /* 00457003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457005: push 0x8cf2fa */ { u32 v = 0x8cf2fau; r_esp -= 4; W32(r_esp, v); }
    /* 0045700a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00457010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457011: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00457018: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045701b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045701e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00457021: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00457024: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00457027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457029: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045702c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045702f: push 0x4a4 */ { u32 v = 0x4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00457034: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x457039u); f_005caba4();
    /* 00457039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045703a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045703d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045703f: je 0x4570ac */ if (fZ) goto L_004570ac;
L_00457041:; BB(0x00457041);
    /* 00457041: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00457048: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045704f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00457051: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x457056u); f_005caba4();
    /* 00457056: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457057: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045705a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045705c: je 0x4570a8 */ if (fZ) goto L_004570a8;
L_0045705e:; BB(0x0045705e);
    /* 0045705e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00457065: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045706c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00457072: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457075: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x45707au); f_00787a4c();
    /* 0045707a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045707d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00457084:; BB(0x00457084);
    /* 00457084: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00457087: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045708a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045708b: call 0x4570b0 */ r_esp -= 4; W32(r_esp, 0x457090u); f_004570b0();
    /* 00457090: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00457093: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0045709a:; BB(0x0045709a);
    /* 0045709a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045709d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004570a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004570a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004570a7: ret  */ FN_RET(0x00457000); r_esp += 4; return;
L_004570a8:; BB(0x004570a8);
    /* 004570a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004570aa: jmp 0x457084 */ goto L_00457084;
L_004570ac:; BB(0x004570ac);
    /* 004570ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004570ae: jmp 0x45709a */ goto L_0045709a;
}

void f_004570b0(void) /* sub_4570B0 */
{
    FN_ENTER(0x004570b0);
    /* 004570b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004570b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004570b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004570b5: push 0x8cf314 */ { u32 v = 0x8cf314u; r_esp -= 4; W32(r_esp, v); }
    /* 004570ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004570c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004570c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004570c8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004570cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004570ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004570d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004570d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004570d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004570da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004570dd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004570e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004570e3: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x4570e8u); f_007865e8();
    /* 004570e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004570ef: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004570f2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004570f5: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 004570fb: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004570fe: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00457104: mov dword ptr [ecx], 0xaf75a0 */ W32((u32)(r_ecx), 0xaf75a0u);
    /* 0045710a: mov eax, dword ptr [0x9a60dc] */ r_eax = R32((u32)(0x9a60dcu));
    /* 0045710f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00457112: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00457114: mov dword ptr [ecx + 0x394], ebx */ W32((u32)(r_ecx+0x394u), r_ebx);
    /* 0045711a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045711d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045711e: call dword ptr [0xaf76ec] */ { u32 t = R32((u32)(0xaf76ecu)); r_esp -= 4; W32(r_esp, 0x457124u); call_ind(t); }
    /* 00457124: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457127: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00457129: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x45712fu); call_ind(t); }
    /* 0045712f: mov edx, dword ptr [0xa44d58] */ r_edx = R32((u32)(0xa44d58u));
    /* 00457135: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457138: mov dword ptr [eax + 0x398], edx */ W32((u32)(r_eax+0x398u), r_edx);
    /* 0045713e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00457140: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00457143: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 00457146: movzx ecx, byte ptr [0xa45270] */ r_ecx = (u32)R8((u32)(0xa45270u));
    /* 0045714d: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00457150: jne 0x45717e */ if (!fZ) goto L_0045717e;
L_00457152:; BB(0x00457152);
    /* 00457152: mov edx, dword ptr [0xa45604] */ r_edx = R32((u32)(0xa45604u));
    /* 00457158: mov dword ptr [0xa45658], 0 */ W32((u32)(0xa45658u), 0x0u);
    /* 00457162: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00457168: mov dword ptr [0xa4565c], 0 */ W32((u32)(0xa4565cu), 0x0u);
    /* 00457172: mov dword ptr [0xa45660], edx */ W32((u32)(0xa45660u), r_edx);
    /* 00457178: mov byte ptr [0xa45270], cl */ W8((u32)(0xa45270u), (u8)r_ecx);
L_0045717e:; BB(0x0045717e);
    /* 0045717e: mov edx, dword ptr [0xa45658] */ r_edx = R32((u32)(0xa45658u));
    /* 00457184: mov ebx, dword ptr [0xa4565c] */ r_ebx = R32((u32)(0xa4565cu));
    /* 0045718a: mov esi, dword ptr [0xa45660] */ r_esi = R32((u32)(0xa45660u));
    /* 00457190: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00457192: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00457195: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457198: push 0x9a5d80 */ { u32 v = 0x9a5d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0045719d: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 004571a0: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 004571a3: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004571a6: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 004571a9: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004571ac: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 004571af: mov dword ptr [edx + 0x78], edi */ W32((u32)(r_edx+0x78u), r_edi);
    /* 004571b2: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 004571b5: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 004571bc: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 004571bf: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 004571c2: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 004571c5: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004571c8: mov dword ptr [edx + 0x48], edi */ W32((u32)(r_edx+0x48u), r_edi);
    /* 004571cb: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 004571ce: mov ecx, edx */ r_ecx = r_edx;
    /* 004571d0: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x4571d5u); f_007b9a88();
    /* 004571d5: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004571d8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004571db: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004571de: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004571e0: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 004571e6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004571e9: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 004571f3: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 004571f9: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 004571ff: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 00457209: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0045720f: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00457219: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x45721eu); f_0077a684();
    /* 0045721e: mov esi, eax */ r_esi = r_eax;
    /* 00457220: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00457222: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x457227u); f_0077a698();
    /* 00457227: mov ebx, eax */ r_ebx = r_eax;
    /* 00457229: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0045722b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x457230u); f_0077a6b4();
    /* 00457230: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457233: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457236: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457237: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457238: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457239: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x45723eu); f_007868f8();
    /* 0045723e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457241: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 00457248: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0045724f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x457254u); f_007b4f54();
    /* 00457254: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457257: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00457259: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x45725eu); f_00787550();
    /* 0045725e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457261: mov dword ptr [edx + 0x3f4], 0x3ecccccd */ W32((u32)(r_edx+0x3f4u), 0x3ecccccdu);
    /* 0045726b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0045726d:; BB(0x0045726d);
    /* 0045726d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00457270: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457272: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457274: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457276: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457278: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045727a: lea edx, [edx + eax + 0x440] */ r_edx = (u32)(r_edx+r_eax+0x440u);
    /* 00457281: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457282: push 0x9a60e0 */ { u32 v = 0x9a60e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457287: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x45728cu); f_0058836c();
    /* 0045728c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045728f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457292: mov dword ptr [edx + ebx*4 + 0x434], eax */ W32((u32)(r_edx+r_ebx*4+0x434u), r_eax);
    /* 00457299: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045729c: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045729f: jl 0x45726d */ if ((fS!=fO)) goto L_0045726d;
L_004572a1:; BB(0x004572a1);
    /* 004572a1: add edx, 0x48c */ {  u32 a = r_edx; u32 b = 0x48cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004572a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004572a8: push 0x9a6110 */ { u32 v = 0x9a6110u; r_esp -= 4; W32(r_esp, v); }
    /* 004572ad: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4572b2u); f_0058836c();
    /* 004572b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004572b5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004572b8: mov dword ptr [ecx + 0x488], eax */ W32((u32)(r_ecx+0x488u), r_eax);
    /* 004572be: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004572c0:; BB(0x004572c0);
    /* 004572c0: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004572c3: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004572c6: push dword ptr [eax + 0x8ffe04] */ { u32 v = R32((u32)(r_eax+0x8ffe04u)); r_esp -= 4; W32(r_esp, v); }
    /* 004572cc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004572cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004572d0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4572d5u); f_00509590();
    /* 004572d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004572d8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004572db: mov dword ptr [ecx + ebx*2 + 0x400], eax */ W32((u32)(r_ecx+r_ebx*2+0x400u), r_eax);
    /* 004572e2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004572e5: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004572e8: jl 0x4572c0 */ if ((fS!=fO)) goto L_004572c0;
L_004572ea:; BB(0x004572ea);
    /* 004572ea: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004572ed: jge 0x45733b */ if ((fS==fO)) goto L_0045733b;
L_004572ef:; BB(0x004572ef);
    /* 004572ef: mov eax, esi */ r_eax = r_esi;
    /* 004572f1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004572f3: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004572f6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004572f9: jl 0x457328 */ if ((fS!=fO)) goto L_00457328;
L_004572fb:; BB(0x004572fb);
    /* 004572fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004572fd: mov dword ptr [ecx + esi*4 + 0x400], eax */ W32((u32)(r_ecx+r_esi*4+0x400u), r_eax);
    /* 00457304: mov dword ptr [ecx + esi*4 + 0x404], eax */ W32((u32)(r_ecx+r_esi*4+0x404u), r_eax);
    /* 0045730b: mov dword ptr [ecx + esi*4 + 0x408], eax */ W32((u32)(r_ecx+r_esi*4+0x408u), r_eax);
    /* 00457312: mov dword ptr [ecx + esi*4 + 0x40c], eax */ W32((u32)(r_ecx+r_esi*4+0x40cu), r_eax);
    /* 00457319: mov dword ptr [ecx + esi*4 + 0x410], eax */ W32((u32)(r_ecx+r_esi*4+0x410u), r_eax);
    /* 00457320: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457323: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457326: jl 0x4572fb */ if ((fS!=fO)) goto L_004572fb;
L_00457328:; BB(0x00457328);
    /* 00457328: mov dword ptr [ecx + esi*4 + 0x400], 0 */ W32((u32)(r_ecx+r_esi*4+0x400u), 0x0u);
    /* 00457333: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457336: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457339: jl 0x457328 */ if ((fS!=fO)) goto L_00457328;
L_0045733b:; BB(0x0045733b);
    /* 0045733b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045733d: push 0x8ffd00 */ { u32 v = 0x8ffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 00457342: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457348: call 0x44d268 */ r_esp -= 4; W32(r_esp, 0x45734du); f_0044d268();
    /* 0045734d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457350: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00457352: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457354: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 0045735a: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 00457360: mov edx, 1 */ r_edx = 0x1u;
    /* 00457365: mov dword ptr [ecx + 0x3b4], edx */ W32((u32)(r_ecx+0x3b4u), r_edx);
    /* 0045736b: mov dword ptr [ecx + 0x3b0], edx */ W32((u32)(r_ecx+0x3b0u), r_edx);
    /* 00457371: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x457376u); f_0077a6cc();
    /* 00457376: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457377: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045737a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0045737c: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0045737f: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00457383: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457388: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045738b: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0045738e: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00457391: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00457394: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00457397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00457399: jle 0x4573a0 */ if ((fZ||fS!=fO)) goto L_004573a0;
L_0045739b:; BB(0x0045739b);
    /* 0045739b: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045739e: jle 0x4573a5 */ if ((fZ||fS!=fO)) goto L_004573a5;
L_004573a0:; BB(0x004573a0);
    /* 004573a0: mov eax, 0x19 */ r_eax = 0x19u;
L_004573a5:; BB(0x004573a5);
    /* 004573a5: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 004573a7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004573aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004573ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004573ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004573b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004573b2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004573b4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004573b6: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
    /* 004573bc: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4573c1u); f_0077a6cc();
    /* 004573c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004573c2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004573c5: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 004573c8: movsx edi, word ptr [ecx + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 004573cf: mov eax, 6 */ r_eax = 0x6u;
    /* 004573d4: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004573d7: jl 0x4573db */ if ((fS!=fO)) goto L_004573db;
L_004573d9:; BB(0x004573d9);
    /* 004573d9: mov ebx, eax */ r_ebx = r_eax;
L_004573db:; BB(0x004573db);
    /* 004573db: mov edx, 1 */ r_edx = 0x1u;
    /* 004573e0: mov dword ptr [ecx + 0x3d8], 5 */ W32((u32)(r_ecx+0x3d8u), 0x5u);
    /* 004573ea: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004573ed: mov eax, 0 */ r_eax = 0x0u;
    /* 004573f2: jg 0x4573f6 */ if ((!fZ&&fS==fO)) goto L_004573f6;
L_004573f4:; BB(0x004573f4);
    /* 004573f4: mov ebx, edx */ r_ebx = r_edx;
L_004573f6:; BB(0x004573f6);
    /* 004573f6: mov dword ptr [ecx + 0x3cc], ebx */ W32((u32)(r_ecx+0x3ccu), r_ebx);
    /* 004573fc: mov dword ptr [ecx + 0x3e4], 0 */ W32((u32)(r_ecx+0x3e4u), 0x0u);
    /* 00457406: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0045740c: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 00457412: lea esi, [edi] */ r_esi = (u32)(r_edi);
    /* 00457414: mov dword ptr [ecx + 0x3e8], 0x3f800000 */ W32((u32)(r_ecx+0x3e8u), 0x3f800000u);
    /* 0045741e: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00457421: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00457423: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00457425: mov dword ptr [ecx + 0x3e0], edi */ W32((u32)(r_ecx+0x3e0u), r_edi);
    /* 0045742b: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 00457431: mov esi, 8 */ r_esi = 0x8u;
L_00457436:; BB(0x00457436);
    /* 00457436: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00457439: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045743b: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045743d: mov eax, dword ptr [ebx + 0x400] */ r_eax = R32((u32)(r_ebx+0x400u));
    /* 00457443: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457445: je 0x45745b */ if (fZ) goto L_0045745b;
L_00457447:; BB(0x00457447);
    /* 00457447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457448: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45744du); f_005cdcc0();
    /* 0045744d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045744e: mov dword ptr [ebx + 0x400], 0 */ W32((u32)(r_ebx+0x400u), 0x0u);
    /* 00457458: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
L_0045745b:; BB(0x0045745b);
    /* 0045745b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045745e: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457461: jl 0x457436 */ if ((fS!=fO)) goto L_00457436;
L_00457463:; BB(0x00457463);
    /* 00457463: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00457469: mov dword ptr [ecx + 0x3d8], 5 */ W32((u32)(r_ecx+0x3d8u), 0x5u);
    /* 00457473: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00457476: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045747d: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x457482u); f_00454804();
    /* 00457482: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457485: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0045748b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045748e: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 00457495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00457497: je 0x45749e */ if (fZ) goto L_0045749e;
L_00457499:; BB(0x00457499);
    /* 00457499: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45749bu); call_ind(t); }
    /* 0045749b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
L_0045749e:; BB(0x0045749e);
    /* 0045749e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004574a1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004574a4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004574a7: mov eax, ecx */ r_eax = r_ecx;
    /* 004574a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004574ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004574b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004574b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004574b6: ret 8 */ FN_RET(0x004570b0); r_esp += 12; return;
}

void f_004574bc(void) /* sub_4574BC */
{
    FN_ENTER(0x004574bc);
    /* 004574bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004574bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004574be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004574bf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004574c1: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004574c5: mov eax, ebx */ r_eax = r_ebx;
    /* 004574c7: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004574ca: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004574cd: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 004574d3: mov edx, ebx */ r_edx = r_ebx;
    /* 004574d5: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004574d8: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004574db: mov dword ptr [ebp + 0x3a8], edx */ W32((u32)(r_ebp+0x3a8u), r_edx);
    /* 004574e1: mov eax, ebx */ r_eax = r_ebx;
    /* 004574e3: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004574e6: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004574e9: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
    /* 004574ef: mov edx, ebx */ r_edx = r_ebx;
    /* 004574f1: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004574f4: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004574f7: mov dword ptr [ebp + 0x3b0], edx */ W32((u32)(r_ebp+0x3b0u), r_edx);
    /* 004574fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00457500: jg 0x4575ad */ if ((!fZ&&fS==fO)) goto L_004575ad;
L_00457506:; BB(0x00457506);
    /* 00457506: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00457509: jg 0x4575ad */ if ((!fZ&&fS==fO)) goto L_004575ad;
L_0045750f:; BB(0x0045750f);
    /* 0045750f: mov eax, ebx */ r_eax = r_ebx;
    /* 00457511: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00457514: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00457517: mov dword ptr [ebp + 0x3b8], eax */ W32((u32)(r_ebp+0x3b8u), r_eax);
    /* 0045751d: mov edx, ebx */ r_edx = r_ebx;
    /* 0045751f: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00457522: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00457525: mov dword ptr [ebp + 0x3bc], edx */ W32((u32)(r_ebp+0x3bcu), r_edx);
    /* 0045752b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045752d: call 0x4575b4 */ r_esp -= 4; W32(r_esp, 0x457532u); f_004575b4();
    /* 00457532: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00457535: cmp ebx, 0xb */ {  u32 a = r_ebx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00457538: jl 0x457540 */ if ((fS!=fO)) goto L_00457540;
L_0045753a:; BB(0x0045753a);
    /* 0045753a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045753b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045753c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045753d: ret 4 */ FN_RET(0x004574bc); r_esp += 8; return;
L_00457540:; BB(0x00457540);
    /* 00457540: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00457543: mov dword ptr [ebp + 0x37c], ebx */ W32((u32)(r_ebp+0x37cu), r_ebx);
    /* 00457549: lea eax, [ebp + 0x420] */ r_eax = (u32)(r_ebp+0x420u);
    /* 0045754f: lea ebx, [ebp + 0x434] */ r_ebx = (u32)(r_ebp+0x434u);
    /* 00457555: mov edi, eax */ r_edi = r_eax;
L_00457557:; BB(0x00457557);
    /* 00457557: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00457559: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045755b: je 0x45756a */ if (fZ) goto L_0045756a;
L_0045755d:; BB(0x0045755d);
    /* 0045755d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045755e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x457563u); f_005cdcc0();
    /* 00457563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457564: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045756a:; BB(0x0045756a);
    /* 0045756a: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045756d: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045756f: ja 0x457557 */ if ((!fC&&!fZ)) goto L_00457557;
L_00457571:; BB(0x00457571);
    /* 00457571: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00457574: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045757a: mov dword ptr [ebp + 0x3d8], 5 */ W32((u32)(r_ebp+0x3d8u), 0x5u);
    /* 00457584: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00457587: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045758e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00457590: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x457595u); f_00454804();
    /* 00457595: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045759b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045759e: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 004575a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004575a7: je 0x4575ad */ if (fZ) goto L_004575ad;
L_004575a9:; BB(0x004575a9);
    /* 004575a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004575ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4575adu); call_ind(t); }
L_004575ad:; BB(0x004575ad);
    /* 004575ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004575ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004575af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004575b0: ret 4 */ FN_RET(0x004574bc); r_esp += 8; return;
}

void f_004575b4(void) /* sub_4575B4 */
{
    FN_ENTER(0x004575b4);
    /* 004575b4: fild dword ptr [ecx + 0x3b8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3b8u)));
    /* 004575ba: fild dword ptr [ecx + 0x3bc] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3bcu)));
    /* 004575c0: fld dword ptr [0x8ffe00] */ FPUSH(R_F32((u32)(0x8ffe00u)));
    /* 004575c6: fld dword ptr [0xa45650] */ FPUSH(R_F32((u32)(0xa45650u)));
    /* 004575cc: fld dword ptr [0xa4564c] */ FPUSH(R_F32((u32)(0xa4564cu)));
    /* 004575d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004575d4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004575d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004575d8: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 004575da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004575dc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004575de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004575e0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004575e2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004575e4: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004575e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004575e8: fstp dword ptr [ecx + 0x3c0] */ W_F32((u32)(r_ecx+0x3c0u), ST(0)); FPOP();
    /* 004575ee: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004575f0: fstp dword ptr [ecx + 0x3c8] */ W_F32((u32)(r_ecx+0x3c8u), ST(0)); FPOP();
    /* 004575f6: mov dword ptr [ecx + 0x3c4], 0 */ W32((u32)(r_ecx+0x3c4u), 0x0u);
    /* 00457600: ret  */ FN_RET(0x004575b4); r_esp += 4; return;
}

void f_00457604(void) /* sub_457604 */
{
    FN_ENTER(0x00457604);
    /* 00457604: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457607: fld dword ptr [0x8ffdb8] */ FPUSH(R_F32((u32)(0x8ffdb8u)));
    /* 0045760d: fld dword ptr [0x8ffdb4] */ FPUSH(R_F32((u32)(0x8ffdb4u)));
    /* 00457613: mov edx, 0x4b */ r_edx = 0x4bu;
    /* 00457618: mov ecx, 0x96 */ r_ecx = 0x96u;
    /* 0045761d: mov eax, 0x12c */ r_eax = 0x12cu;
    /* 00457622: mov dword ptr [0xa45664], 0xc2f00000 */ W32((u32)(0xa45664u), 0xc2f00000u);
    /* 0045762c: mov dword ptr [0xa45680], edx */ W32((u32)(0xa45680u), r_edx);
    /* 00457632: mov dword ptr [0xa45600], edx */ W32((u32)(0xa45600u), r_edx);
    /* 00457638: mov dword ptr [0xa45668], 0 */ W32((u32)(0xa45668u), 0x0u);
    /* 00457642: mov dword ptr [0xa4566c], 0 */ W32((u32)(0xa4566cu), 0x0u);
    /* 0045764c: mov dword ptr [0xa4569c], edx */ W32((u32)(0xa4569cu), r_edx);
    /* 00457652: mov dword ptr [0xa456a4], ecx */ W32((u32)(0xa456a4u), r_ecx);
    /* 00457658: mov dword ptr [0xa45670], 0xc2f00000 */ W32((u32)(0xa45670u), 0xc2f00000u);
    /* 00457662: mov dword ptr [0xa45674], 0x3f800000 */ W32((u32)(0xa45674u), 0x3f800000u);
    /* 0045766c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045766f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00457672: fadd dword ptr [0x8ffdb0] */ ST(0) = ST(0) + R_F32((u32)(0x8ffdb0u));
    /* 00457678: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0045767c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00457681: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457686: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0045768a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0045768e: fistp dword ptr [0xa45640] */ W32((u32)(0xa45640u), (u32)fx_int32(ST(0))); FPOP();
    /* 00457694: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00457698: mov dword ptr [0xa45678], 0x41000000 */ W32((u32)(0xa45678u), 0x41000000u);
    /* 004576a2: mov dword ptr [0xa4567c], 0x3fc00000 */ W32((u32)(0xa4567cu), 0x3fc00000u);
    /* 004576ac: mov dword ptr [0xa45654], edx */ W32((u32)(0xa45654u), r_edx);
    /* 004576b2: mov dword ptr [0xa456a8], ecx */ W32((u32)(0xa456a8u), r_ecx);
    /* 004576b8: mov dword ptr [0xa45580], 0x41c80000 */ W32((u32)(0xa45580u), 0x41c80000u);
    /* 004576c2: mov dword ptr [0xa4560c], 0x432f0000 */ W32((u32)(0xa4560cu), 0x432f0000u);
    /* 004576cc: fld dword ptr [0xa4560c] */ FPUSH(R_F32((u32)(0xa4560cu)));
    /* 004576d2: fchs  */ ST(0) = -ST(0);
    /* 004576d4: fstp dword ptr [0xa45608] */ W_F32((u32)(0xa45608u), ST(0)); FPOP();
    /* 004576da: mov dword ptr [0xa45604], 0xc2f00000 */ W32((u32)(0xa45604u), 0xc2f00000u);
    /* 004576e4: mov dword ptr [0xa45684], 0x43070000 */ W32((u32)(0xa45684u), 0x43070000u);
    /* 004576ee: mov dword ptr [0xa45688], 0x41c80000 */ W32((u32)(0xa45688u), 0x41c80000u);
    /* 004576f8: mov dword ptr [0xa4568c], 0x41f00000 */ W32((u32)(0xa4568cu), 0x41f00000u);
    /* 00457702: mov dword ptr [0x9a5d80], 0x43070000 */ W32((u32)(0x9a5d80u), 0x43070000u);
    /* 0045770c: mov dword ptr [0x9a5d84], 0x41c80000 */ W32((u32)(0x9a5d84u), 0x41c80000u);
    /* 00457716: mov dword ptr [0x9a5d8c], 0x41f00000 */ W32((u32)(0x9a5d8cu), 0x41f00000u);
    /* 00457720: mov dword ptr [0x9a5db0], 0x41c80000 */ W32((u32)(0x9a5db0u), 0x41c80000u);
    /* 0045772a: mov dword ptr [0x9a5db4], 0x43070000 */ W32((u32)(0x9a5db4u), 0x43070000u);
    /* 00457734: mov dword ptr [0x9a5db8], 0x41f00000 */ W32((u32)(0x9a5db8u), 0x41f00000u);
    /* 0045773e: mov dword ptr [0x9a5dd8], 0xc3070000 */ W32((u32)(0x9a5dd8u), 0xc3070000u);
    /* 00457748: mov dword ptr [0x9a5ddc], 0x41c80000 */ W32((u32)(0x9a5ddcu), 0x41c80000u);
    /* 00457752: mov dword ptr [0x9a5de4], 0x41f00000 */ W32((u32)(0x9a5de4u), 0x41f00000u);
    /* 0045775c: mov dword ptr [0xa456f4], 0x42960000 */ W32((u32)(0xa456f4u), 0x42960000u);
    /* 00457766: mov dword ptr [0xa456f8], 0x42700000 */ W32((u32)(0xa456f8u), 0x42700000u);
    /* 00457770: mov dword ptr [0xa456fc], 0x42700000 */ W32((u32)(0xa456fcu), 0x42700000u);
    /* 0045777a: mov dword ptr [0xa45700], 0x42700000 */ W32((u32)(0xa45700u), 0x42700000u);
    /* 00457784: mov dword ptr [0xa45704], 0x42200000 */ W32((u32)(0xa45704u), 0x42200000u);
    /* 0045778e: mov dword ptr [0xa45708], 0x41f00000 */ W32((u32)(0xa45708u), 0x41f00000u);
    /* 00457798: mov dword ptr [0xa456c4], 0 */ W32((u32)(0xa456c4u), 0x0u);
    /* 004577a2: mov dword ptr [0xa456c8], 0 */ W32((u32)(0xa456c8u), 0x0u);
    /* 004577ac: mov dword ptr [0xa456cc], 0x42480000 */ W32((u32)(0xa456ccu), 0x42480000u);
    /* 004577b6: mov dword ptr [0xa456d0], 0 */ W32((u32)(0xa456d0u), 0x0u);
    /* 004577c0: mov dword ptr [0xa456d4], 0 */ W32((u32)(0xa456d4u), 0x0u);
    /* 004577ca: mov dword ptr [0xa456d8], 0x42480000 */ W32((u32)(0xa456d8u), 0x42480000u);
    /* 004577d4: mov dword ptr [0xa456dc], 0xc2480000 */ W32((u32)(0xa456dcu), 0xc2480000u);
    /* 004577de: mov dword ptr [0xa456e0], 0 */ W32((u32)(0xa456e0u), 0x0u);
    /* 004577e8: mov dword ptr [0xa456e4], 0 */ W32((u32)(0xa456e4u), 0x0u);
    /* 004577f2: mov dword ptr [0xa456e8], 0xc2a00000 */ W32((u32)(0xa456e8u), 0xc2a00000u);
    /* 004577fc: mov dword ptr [0xa45690], 0xc1700000 */ W32((u32)(0xa45690u), 0xc1700000u);
    /* 00457806: mov dword ptr [0xa45694], 0x40f00000 */ W32((u32)(0xa45694u), 0x40f00000u);
    /* 00457810: mov dword ptr [0x9a60e4], 0xc1700000 */ W32((u32)(0x9a60e4u), 0xc1700000u);
    /* 0045781a: mov dword ptr [0x9a60f8], 0x40f00000 */ W32((u32)(0x9a60f8u), 0x40f00000u);
    /* 00457824: mov dword ptr [0xa45698], 0x41200000 */ W32((u32)(0xa45698u), 0x41200000u);
    /* 0045782e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457830: fadd dword ptr [0xa45698] */ ST(0) = ST(0) + R_F32((u32)(0xa45698u));
    /* 00457836: fst dword ptr [0xa45650] */ W_F32((u32)(0xa45650u), ST(0));
    /* 0045783c: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0045783e: fstp dword ptr [0xa4564c] */ W_F32((u32)(0xa4564cu), ST(0)); FPOP();
    /* 00457844: mov dword ptr [0xa456a0], 0x12c */ W32((u32)(0xa456a0u), 0x12cu);
    /* 0045784e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00457851: ret  */ FN_RET(0x00457604); r_esp += 4; return;
}

void f_00457854(void) /* sub_457854 */
{
    FN_ENTER(0x00457854);
    /* 00457854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00457855: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457858: mov edi, ecx */ r_edi = r_ecx;
    /* 0045785a: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0045785d: fld dword ptr [0x8ffd9c] */ FPUSH(R_F32((u32)(0x8ffd9cu)));
    /* 00457863: call 0x45431c */ r_esp -= 4; W32(r_esp, 0x457868u); f_0045431c();
    /* 00457868: mov eax, dword ptr [0xa456a8] */ r_eax = R32((u32)(0xa456a8u));
    /* 0045786d: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 00457873: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00457876: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00457877: ret  */ FN_RET(0x00457854); r_esp += 4; return;
}

void f_00457878(void) /* sub_457878 */
{
    FN_ENTER(0x00457878);
    /* 00457878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457879: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045787b: lea eax, [ebx + 0x3c0] */ r_eax = (u32)(r_ebx+0x3c0u);
    /* 00457881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457882: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457883: call 0x452814 */ r_esp -= 4; W32(r_esp, 0x457888u); f_00452814();
    /* 00457888: mov eax, dword ptr [0xa45654] */ r_eax = R32((u32)(0xa45654u));
    /* 0045788d: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 00457893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00457896: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00457897: ret  */ FN_RET(0x00457878); r_esp += 4; return;
}

void f_00457898(void) /* sub_457898 */
{
    FN_ENTER(0x00457898);
    /* 00457898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457899: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045789b: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 004578a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004578a3: push dword ptr [eax*4 + 0x9a5d68] */ { u32 v = R32((u32)(r_eax*4+0x9a5d68u)); r_esp -= 4; W32(r_esp, v); }
    /* 004578aa: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x4578afu); f_00454804();
    /* 004578af: mov dword ptr [ebx + 0x3a0], 0x3c */ W32((u32)(r_ebx+0x3a0u), 0x3cu);
    /* 004578b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004578ba: ret  */ FN_RET(0x00457898); r_esp += 4; return;
}

void f_004578bc(void) /* sub_4578BC */
{
    FN_ENTER(0x004578bc);
    /* 004578bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004578bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004578bf: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 004578c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004578c7: push dword ptr [eax*4 + 0x9a6158] */ { u32 v = R32((u32)(r_eax*4+0x9a6158u)); r_esp -= 4; W32(r_esp, v); }
    /* 004578ce: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x4578d3u); f_00454804();
    /* 004578d3: movzx eax, byte ptr [0xa45274] */ r_eax = (u32)R8((u32)(0xa45274u));
    /* 004578da: mov dword ptr [ebx + 0x3d0], 0 */ W32((u32)(r_ebx+0x3d0u), 0x0u);
    /* 004578e4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004578e6: jne 0x45792e */ if (!fZ) goto L_0045792e;
L_004578e8:; BB(0x004578e8);
    /* 004578e8: mov dword ptr [0xa456ac], 0x43020000 */ W32((u32)(0xa456acu), 0x43020000u);
    /* 004578f2: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004578f7: mov byte ptr [0xa45274], al */ W8((u32)(0xa45274u), (u8)r_eax);
    /* 004578fc: mov dword ptr [0xa456b0], 0 */ W32((u32)(0xa456b0u), 0x0u);
    /* 00457906: mov dword ptr [0xa456b4], 0 */ W32((u32)(0xa456b4u), 0x0u);
    /* 00457910: mov dword ptr [0xa456b8], 0x43020000 */ W32((u32)(0xa456b8u), 0x43020000u);
    /* 0045791a: mov dword ptr [0xa456bc], 0xc3020000 */ W32((u32)(0xa456bcu), 0xc3020000u);
    /* 00457924: mov dword ptr [0xa456c0], 0 */ W32((u32)(0xa456c0u), 0x0u);
L_0045792e:; BB(0x0045792e);
    /* 0045792e: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 00457934: mov eax, dword ptr [edx*8 + 0xa456ac] */ r_eax = R32((u32)(r_edx*8+0xa456acu));
    /* 0045793b: mov dword ptr [ebx + 0x3d8], 6 */ W32((u32)(r_ebx+0x3d8u), 0x6u);
    /* 00457945: mov dword ptr [0xa456ec], eax */ W32((u32)(0xa456ecu), r_eax);
    /* 0045794a: mov eax, dword ptr [edx*8 + 0xa456b0] */ r_eax = R32((u32)(r_edx*8+0xa456b0u));
    /* 00457951: mov dword ptr [0xa456f0], eax */ W32((u32)(0xa456f0u), r_eax);
    /* 00457956: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045795c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045795f: je 0x45796e */ if (fZ) goto L_0045796e;
L_00457961:; BB(0x00457961);
    /* 00457961: mov eax, dword ptr [0xa456a4] */ r_eax = R32((u32)(0xa456a4u));
    /* 00457966: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045796c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045796d: ret  */ FN_RET(0x004578bc); r_esp += 4; return;
L_0045796e:; BB(0x0045796e);
    /* 0045796e: mov eax, dword ptr [0xa456a0] */ r_eax = R32((u32)(0xa456a0u));
    /* 00457973: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 00457979: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045797a: ret  */ FN_RET(0x004578bc); r_esp += 4; return;
}

void f_0045797c(void) /* sub_45797C */
{
    FN_ENTER(0x0045797c);
    /* 0045797c: mov eax, dword ptr [0xa4569c] */ r_eax = R32((u32)(0xa4569cu));
    /* 00457981: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 00457987: ret  */ FN_RET(0x0045797c); r_esp += 4; return;
}

void f_00457988(void) /* sub_457988 */
{
    FN_ENTER(0x00457988);
    /* 00457988: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0045798e: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 00457994: ret  */ FN_RET(0x00457988); r_esp += 4; return;
}

void f_00457998(void) /* sub_457998 */
{
    FN_ENTER(0x00457998);
    /* 00457998: mov eax, dword ptr [0xa45600] */ r_eax = R32((u32)(0xa45600u));
    /* 0045799d: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 004579a3: ret  */ FN_RET(0x00457998); r_esp += 4; return;
}

void f_004579a4(void) /* sub_4579A4 */
{
    FN_ENTER(0x004579a4);
    /* 004579a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004579a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004579a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004579a9: push 0x8cf330 */ { u32 v = 0x8cf330u; r_esp -= 4; W32(r_esp, v); }
    /* 004579ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004579b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004579b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004579bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004579bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004579c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004579c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004579c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004579cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004579ce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004579d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004579d8: mov eax, ecx */ r_eax = r_ecx;
    /* 004579da: mov dword ptr [eax], 0xaf77e0 */ W32((u32)(r_eax), 0xaf77e0u);
    /* 004579e0: lea ecx, [eax + 0x380] */ r_ecx = (u32)(r_eax+0x380u);
    /* 004579e6: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x4579ebu); f_0048ead0();
    /* 004579eb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004579ed:; BB(0x004579ed);
    /* 004579ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004579f0: mov eax, dword ptr [eax + esi*4 + 0x434] */ r_eax = R32((u32)(r_eax+r_esi*4+0x434u));
    /* 004579f7: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004579fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004579fc: je 0x457a13 */ if (fZ) goto L_00457a13;
L_004579fe:; BB(0x004579fe);
    /* 004579fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004579ff: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x457a04u); f_005cdcc0();
    /* 00457a04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457a05: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457a08: mov dword ptr [eax + ebx*2 + 0x434], 0 */ W32((u32)(r_eax+r_ebx*2+0x434u), 0x0u);
L_00457a13:; BB(0x00457a13);
    /* 00457a13: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457a16: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457a19: jl 0x4579ed */ if ((fS!=fO)) goto L_004579ed;
L_00457a1b:; BB(0x00457a1b);
    /* 00457a1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457a1e: mov ecx, dword ptr [eax + 0x454] */ r_ecx = R32((u32)(r_eax+0x454u));
    /* 00457a24: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x457a29u); f_005883f0();
    /* 00457a29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457a2c: mov dword ptr [ecx + 0x454], 0 */ W32((u32)(r_ecx+0x454u), 0x0u);
    /* 00457a36: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x457a3bu); f_007b9c8c();
    /* 00457a3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457a3e: mov dword ptr [eax + 0x39c], 0 */ W32((u32)(r_eax+0x39cu), 0x0u);
    /* 00457a48: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457a4f: mov ecx, eax */ r_ecx = r_eax;
    /* 00457a51: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x457a56u); f_0078638c();
    /* 00457a56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00457a59: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00457a5b: jne 0x457a76 */ if (!fZ) goto L_00457a76;
L_00457a5d:; BB(0x00457a5d);
    /* 00457a5d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457a60: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00457a63: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457a66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457a69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00457a70: mov esp, ebp */ r_esp = r_ebp;
    /* 00457a72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457a73: ret 4 */ FN_RET(0x004579a4); r_esp += 8; return;
L_00457a76:; BB(0x00457a76);
    /* 00457a76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457a7a: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x457a7fu); f_005c2f74();
    /* 00457a7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457a80: jmp 0x457a5d */ goto L_00457a5d;
}

void f_00457a84(void) /* sub_457A84 */
{
    FN_ENTER(0x00457a84);
    /* 00457a84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457a85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00457a87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00457a89: call 0x457aa8 */ r_esp -= 4; W32(r_esp, 0x457a8eu); f_00457aa8();
    /* 00457a8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00457a92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00457a94: jne 0x457a9a */ if (!fZ) goto L_00457a9a;
L_00457a96:; BB(0x00457a96);
    /* 00457a96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00457a97: ret 4 */ FN_RET(0x00457a84); r_esp += 8; return;
L_00457a9a:; BB(0x00457a9a);
    /* 00457a9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457a9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x457aa0u); f_005c2f74();
    /* 00457aa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457aa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00457aa2: ret 4 */ FN_RET(0x00457a84); r_esp += 8; return;
}

void f_00457aa8(void) /* sub_457AA8 */
{
    FN_ENTER(0x00457aa8);
    /* 00457aa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457aa9: mov ebp, esp */ r_ebp = r_esp;
    /* 00457aab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457aad: push 0x8cf34c */ { u32 v = 0x8cf34cu; r_esp -= 4; W32(r_esp, v); }
    /* 00457ab2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00457ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457ab9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00457ac0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457ac3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00457ac6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00457ac9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00457acc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00457acf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00457ad2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457ad5: mov dword ptr [ecx], 0xaf7940 */ W32((u32)(r_ecx), 0xaf7940u);
    /* 00457adb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457ae2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x457ae7u); f_008171e8();
    /* 00457ae7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457aea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00457af1: mov esp, ebp */ r_esp = r_ebp;
    /* 00457af3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457af4: ret  */ FN_RET(0x00457aa8); r_esp += 4; return;
}

void f_00457af8(void) /* sub_457AF8 */
{
    FN_ENTER(0x00457af8);
    /* 00457af8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00457afb: mov edx, 1 */ r_edx = 0x1u;
    /* 00457b00: mov dword ptr [ecx + 0x3ec], edx */ W32((u32)(r_ecx+0x3ecu), r_edx);
    /* 00457b06: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00457b0b: mov dword ptr [ecx + 0x3f8], 0x3f800000 */ W32((u32)(r_ecx+0x3f8u), 0x3f800000u);
    /* 00457b15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457b16: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00457b19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457b1b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457b1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457b1f: push 0x380 */ { u32 v = 0x380u; r_esp -= 4; W32(r_esp, v); }
    /* 00457b24: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x457b29u); f_00814298();
    /* 00457b29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00457b2c: ret  */ FN_RET(0x00457af8); r_esp += 4; return;
}

void f_00457b30(void) /* sub_457B30 */
{
    FN_ENTER(0x00457b30);
    /* 00457b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457b31: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457b34: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00457b36: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00457b3c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b3f: je 0x457bce */ if (fZ) goto L_00457bce;
L_00457b45:; BB(0x00457b45);
    /* 00457b45: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b48: je 0x457bce */ if (fZ) goto L_00457bce;
L_00457b4e:; BB(0x00457b4e);
    /* 00457b4e: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 00457b58: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00457b5b: lea edx, [ebp + 0x43c] */ r_edx = (u32)(r_ebp+0x43cu);
    /* 00457b61: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00457b65: lea eax, [ebp + 0x454] */ r_eax = (u32)(r_ebp+0x454u);
    /* 00457b6b: mov esi, eax */ r_esi = r_eax;
    /* 00457b6d: mov edi, edx */ r_edi = r_edx;
L_00457b6f:; BB(0x00457b6f);
    /* 00457b6f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00457b71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b73: je 0x457b82 */ if (fZ) goto L_00457b82;
L_00457b75:; BB(0x00457b75);
    /* 00457b75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457b76: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x457b7bu); f_005cdcc0();
    /* 00457b7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457b7c: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00457b82:; BB(0x00457b82);
    /* 00457b82: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00457b85: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00457b87: ja 0x457b6f */ if ((!fC&&!fZ)) goto L_00457b6f;
L_00457b89:; BB(0x00457b89);
    /* 00457b89: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00457b8c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00457b90: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00457b96: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b99: je 0x457ba5 */ if (fZ) goto L_00457ba5;
L_00457b9b:; BB(0x00457b9b);
    /* 00457b9b: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_00457ba5:; BB(0x00457ba5);
    /* 00457ba5: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00457ba8: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00457baf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00457bb1: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x457bb6u); f_00459158();
    /* 00457bb6: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00457bbc: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00457bbf: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 00457bc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457bc8: je 0x457bce */ if (fZ) goto L_00457bce;
L_00457bca:; BB(0x00457bca);
    /* 00457bca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00457bcc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457bceu); call_ind(t); }
L_00457bce:; BB(0x00457bce);
    /* 00457bce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00457bd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457bd2: ret  */ FN_RET(0x00457b30); r_esp += 4; return;
}

void f_00457bd4(void) /* sub_457BD4 */
{
    FN_ENTER(0x00457bd4);
    /* 00457bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457bd5: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457bd8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00457bda: mov eax, dword ptr [ebx + 0x394] */ r_eax = R32((u32)(r_ebx+0x394u));
    /* 00457be0: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00457be6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457be8: jne 0x457c14 */ if (!fZ) goto L_00457c14;
L_00457bea:; BB(0x00457bea);
    /* 00457bea: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00457bf0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00457bf3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457bf5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457bf7: mov eax, dword ptr [edx + 0x9a628c] */ r_eax = R32((u32)(r_edx+0x9a628cu));
    /* 00457bfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457bff: je 0x457c21 */ if (fZ) goto L_00457c21;
L_00457c01:; BB(0x00457c01);
    /* 00457c01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00457c03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457c05u); call_ind(t); }
    /* 00457c05: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00457c0b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00457c0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457c10: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457c12: jmp 0x457c21 */ goto L_00457c21;
L_00457c14:; BB(0x00457c14);
    /* 00457c14: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00457c1a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00457c1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457c1f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00457c21:; BB(0x00457c21);
    /* 00457c21: mov eax, dword ptr [edx + 0x9a6290] */ r_eax = R32((u32)(r_edx+0x9a6290u));
    /* 00457c27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457c29: je 0x457c2f */ if (fZ) goto L_00457c2f;
L_00457c2b:; BB(0x00457c2b);
    /* 00457c2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00457c2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457c2fu); call_ind(t); }
L_00457c2f:; BB(0x00457c2f);
    /* 00457c2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00457c31: call 0x457e7c */ r_esp -= 4; W32(r_esp, 0x457c36u); f_00457e7c();
    /* 00457c36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00457c38: call 0x457fec */ r_esp -= 4; W32(r_esp, 0x457c3du); f_00457fec();
    /* 00457c3d: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 00457c43: fcomp dword ptr [0x90024c] */ fx_compare(ST(0), R_F32((u32)(0x90024cu))); FPOP();
    /* 00457c49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457c4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457c4c: je 0x457e53 */ if (fZ) goto L_00457e53;
L_00457c52:; BB(0x00457c52);
    /* 00457c52: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 00457c58: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00457c5b: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00457c5e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00457c61:; BB(0x00457c61);
    /* 00457c61: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00457c67: mov eax, 1 */ r_eax = 0x1u;
    /* 00457c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457c6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457c6e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00457c73: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00457c78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457c79: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x457c7eu); f_0080575c();
    /* 00457c7e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457c81: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00457c87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457c8a: je 0x457d59 */ if (fZ) goto L_00457d59;
L_00457c90:; BB(0x00457c90);
    /* 00457c90: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00457c93: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00457c96: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00457c99: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00457c9c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00457ca0: movzx edx, byte ptr [0xa45720] */ r_edx = (u32)R8((u32)(0xa45720u));
    /* 00457ca7: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00457cab: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00457cae: jne 0x457cc3 */ if (!fZ) goto L_00457cc3;
L_00457cb0:; BB(0x00457cb0);
    /* 00457cb0: mov dword ptr [0xa45724], 0xc2480000 */ W32((u32)(0xa45724u), 0xc2480000u);
    /* 00457cba: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00457cbd: mov byte ptr [0xa45720], dl */ W8((u32)(0xa45720u), (u8)r_edx);
L_00457cc3:; BB(0x00457cc3);
    /* 00457cc3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00457cc6: jne 0x457cde */ if (!fZ) goto L_00457cde;
L_00457cc8:; BB(0x00457cc8);
    /* 00457cc8: mov dword ptr [0xa45728], 0x42480000 */ W32((u32)(0xa45728u), 0x42480000u);
    /* 00457cd2: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00457cd8: mov byte ptr [0xa45720], dl */ W8((u32)(0xa45720u), (u8)r_edx);
L_00457cde:; BB(0x00457cde);
    /* 00457cde: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00457ce6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00457cea: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00457cee: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00457cf2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x457cf7u); f_0082df08();
    /* 00457cf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457cf9: fld dword ptr [0xa45724] */ FPUSH(R_F32((u32)(0xa45724u)));
    /* 00457cff: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00457d03: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00457d05: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00457d09: mov eax, dword ptr [0xa45728] */ r_eax = R32((u32)(0xa45728u));
    /* 00457d0e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00457d10: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00457d14: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00457d18: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00457d1c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00457d1f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00457d23: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x457d28u); f_0082ebac();
    /* 00457d28: mov ecx, dword ptr [ebx + 0x434] */ r_ecx = R32((u32)(r_ebx+0x434u));
    /* 00457d2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457d30: je 0x457d3b */ if (fZ) goto L_00457d3b;
L_00457d32:; BB(0x00457d32);
    /* 00457d32: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00457d35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457d36: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x457d3bu); f_00508db8();
L_00457d3b:; BB(0x00457d3b);
    /* 00457d3b: mov ecx, dword ptr [ebx + 0x438] */ r_ecx = R32((u32)(r_ebx+0x438u));
    /* 00457d41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457d43: je 0x457d4e */ if (fZ) goto L_00457d4e;
L_00457d45:; BB(0x00457d45);
    /* 00457d45: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00457d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457d49: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x457d4eu); f_00508db8();
L_00457d4e:; BB(0x00457d4e);
    /* 00457d4e: lea ecx, [ebx + 0x380] */ r_ecx = (u32)(r_ebx+0x380u);
    /* 00457d54: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x457d59u); f_0044d180();
L_00457d59:; BB(0x00457d59);
    /* 00457d59: movzx eax, byte ptr [0xa45720] */ r_eax = (u32)R8((u32)(0xa45720u));
    /* 00457d60: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00457d62: jne 0x457d76 */ if (!fZ) goto L_00457d76;
L_00457d64:; BB(0x00457d64);
    /* 00457d64: mov dword ptr [0xa4572c], 0x4176e148 */ W32((u32)(0xa4572cu), 0x4176e148u);
    /* 00457d6e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457d71: mov byte ptr [0xa45720], al */ W8((u32)(0xa45720u), (u8)r_eax);
L_00457d76:; BB(0x00457d76);
    /* 00457d76: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00457d78: jne 0x457d8e */ if (!fZ) goto L_00457d8e;
L_00457d7a:; BB(0x00457d7a);
    /* 00457d7a: mov dword ptr [0xa45730], 0x425dae14 */ W32((u32)(0xa45730u), 0x425dae14u);
    /* 00457d84: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457d89: mov byte ptr [0xa45720], al */ W8((u32)(0xa45720u), (u8)r_eax);
L_00457d8e:; BB(0x00457d8e);
    /* 00457d8e: mov eax, dword ptr [0xa4572c] */ r_eax = R32((u32)(0xa4572cu));
    /* 00457d93: mov edx, dword ptr [0xa45730] */ r_edx = R32((u32)(0xa45730u));
    /* 00457d99: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00457da1: mov dword ptr [esp + 0x1c], 0x419e6666 */ W32((u32)(r_esp+0x1cu), 0x419e6666u);
    /* 00457da9: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00457dad: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00457db1: mov dword ptr [esp + 0x20], 0xc0a00000 */ W32((u32)(r_esp+0x20u), 0xc0a00000u);
    /* 00457db9: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00457dc1: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00457dc5: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00457dc9: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457dce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457dcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457dd0: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x457dd5u); f_004d85bc();
    /* 00457dd5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457dd8: fld dword ptr [0x8fffe4] */ FPUSH(R_F32((u32)(0x8fffe4u)));
    /* 00457dde: fadd dword ptr [ebx + 0x3c8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3c8u));
    /* 00457de4: fcom dword ptr [0x900234] */ fx_compare(ST(0), R_F32((u32)(0x900234u))); 
    /* 00457dea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457dec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457ded: jb 0x457dff */ if (fC) goto L_00457dff;
L_00457def:; BB(0x00457def);
    /* 00457def: fld dword ptr [0x900230] */ FPUSH(R_F32((u32)(0x900230u)));
    /* 00457df5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00457df7: fstp dword ptr [ebx + 0x3c8] */ W_F32((u32)(r_ebx+0x3c8u), ST(0)); FPOP();
    /* 00457dfd: jmp 0x457e05 */ goto L_00457e05;
L_00457dff:; BB(0x00457dff);
    /* 00457dff: fstp dword ptr [ebx + 0x3c8] */ W_F32((u32)(r_ebx+0x3c8u), ST(0)); FPOP();
L_00457e05:; BB(0x00457e05);
    /* 00457e05: fld dword ptr [0x8fffe0] */ FPUSH(R_F32((u32)(0x8fffe0u)));
    /* 00457e0b: fadd dword ptr [ebx + 0x3f8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f8u));
    /* 00457e11: fld dword ptr [0x90024c] */ FPUSH(R_F32((u32)(0x90024cu)));
    /* 00457e17: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00457e19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457e1b: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00457e22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457e23: movsx eax, word ptr [ebx + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x346u));
    /* 00457e2a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00457e2e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00457e32: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00457e36: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00457e3a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00457e3c: fstp dword ptr [ebx + 0x3fc] */ W_F32((u32)(r_ebx+0x3fcu), ST(0)); FPOP();
    /* 00457e42: jb 0x457e46 */ if (fC) goto L_00457e46;
L_00457e44:; BB(0x00457e44);
    /* 00457e44: fst st(1) */ ST(1) = ST(0);
L_00457e46:; BB(0x00457e46);
    /* 00457e46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457e48: fstp dword ptr [ebx + 0x3f8] */ W_F32((u32)(r_ebx+0x3f8u), ST(0)); FPOP();
    /* 00457e4e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00457e51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00457e52: ret  */ FN_RET(0x00457bd4); r_esp += 4; return;
L_00457e53:; BB(0x00457e53);
    /* 00457e53: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 00457e59: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00457e5c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457e5f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00457e62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00457e64: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x457e69u); f_007b6880();
    /* 00457e69: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457e6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00457e6c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x457e71u); f_006946a8();
    /* 00457e71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457e74: jmp 0x457c61 */ goto L_00457c61;
}

void f_00457e7c(void) /* sub_457E7C */
{
    FN_ENTER(0x00457e7c);
    /* 00457e7c: movzx eax, byte ptr [0xa45734] */ r_eax = (u32)R8((u32)(0xa45734u));
    /* 00457e83: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00457e85: jne 0x457e9b */ if (!fZ) goto L_00457e9b;
L_00457e87:; BB(0x00457e87);
    /* 00457e87: mov dword ptr [0xa45738], 0x41e80000 */ W32((u32)(0xa45738u), 0x41e80000u);
    /* 00457e91: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457e96: mov byte ptr [0xa45734], al */ W8((u32)(0xa45734u), (u8)r_eax);
L_00457e9b:; BB(0x00457e9b);
    /* 00457e9b: fld dword ptr [ecx + 0x3d8] */ FPUSH(R_F32((u32)(r_ecx+0x3d8u)));
    /* 00457ea1: fadd dword ptr [ecx + 0x3dc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3dcu));
    /* 00457ea7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00457ea9: mov eax, dword ptr [ecx + 0x3e4] */ r_eax = R32((u32)(r_ecx+0x3e4u));
    /* 00457eaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00457eb1: je 0x457f87 */ if (fZ) goto L_00457f87;
L_00457eb7:; BB(0x00457eb7);
    /* 00457eb7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457eba: jne 0x457f01 */ if (!fZ) goto L_00457f01;
L_00457ebc:; BB(0x00457ebc);
    /* 00457ebc: fld dword ptr [0xa45738] */ FPUSH(R_F32((u32)(0xa45738u)));
    /* 00457ec2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00457ec4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457ec6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457ec7: ja 0x457eea */ if ((!fC&&!fZ)) goto L_00457eea;
L_00457ec9:; BB(0x00457ec9);
    /* 00457ec9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00457ecb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457ecd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00457ecf: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457ed5: mov dword ptr [ecx + 0x3e0], 1 */ W32((u32)(r_ecx+0x3e0u), 0x1u);
    /* 00457edf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457ee1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00457ee3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457ee5: jmp 0x457fc0 */ goto L_00457fc0;
L_00457eea:; BB(0x00457eea);
    /* 00457eea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457eec: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457ef2: mov dword ptr [ecx + 0x3e0], 0 */ W32((u32)(r_ecx+0x3e0u), 0x0u);
    /* 00457efc: jmp 0x457fc0 */ goto L_00457fc0;
L_00457f01:; BB(0x00457f01);
    /* 00457f01: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457f04: jne 0x457f75 */ if (!fZ) goto L_00457f75;
L_00457f06:; BB(0x00457f06);
    /* 00457f06: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457f08: fcom dword ptr [0xa45738] */ fx_compare(ST(0), R_F32((u32)(0xa45738u))); 
    /* 00457f0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457f10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457f11: jb 0x457f5d */ if (fC) goto L_00457f5d;
L_00457f13:; BB(0x00457f13);
    /* 00457f13: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457f15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457f17: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457f1d: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457f23: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457f29: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 00457f2f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457f31: mov edx, dword ptr [eax*8 + 0x9a61e4] */ r_edx = R32((u32)(r_eax*8+0x9a61e4u));
    /* 00457f38: mov dword ptr [ecx + 0x3e0], 1 */ W32((u32)(r_ecx+0x3e0u), 0x1u);
    /* 00457f42: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 00457f48: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00457f4a: mov eax, dword ptr [edx*8 + 0x9a61e0] */ r_eax = R32((u32)(r_edx*8+0x9a61e0u));
    /* 00457f51: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 00457f57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457f59: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00457f5b: jmp 0x457fc0 */ goto L_00457fc0;
L_00457f5d:; BB(0x00457f5d);
    /* 00457f5d: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457f63: mov dword ptr [ecx + 0x3e0], 0 */ W32((u32)(r_ecx+0x3e0u), 0x0u);
    /* 00457f6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457f6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00457f71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457f73: jmp 0x457fc0 */ goto L_00457fc0;
L_00457f75:; BB(0x00457f75);
    /* 00457f75: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457f7b: mov dword ptr [ecx + 0x3e0], 0 */ W32((u32)(r_ecx+0x3e0u), 0x0u);
    /* 00457f85: jmp 0x457fc0 */ goto L_00457fc0;
L_00457f87:; BB(0x00457f87);
    /* 00457f87: fld dword ptr [0x900224] */ FPUSH(R_F32((u32)(0x900224u)));
    /* 00457f8d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00457f8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457f91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457f92: ja 0x457fae */ if ((!fC&&!fZ)) goto L_00457fae;
L_00457f94:; BB(0x00457f94);
    /* 00457f94: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00457f96: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00457f98: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457f9e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00457fa0: mov dword ptr [ecx + 0x3e0], 1 */ W32((u32)(r_ecx+0x3e0u), 0x1u);
    /* 00457faa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00457fac: jmp 0x457fc0 */ goto L_00457fc0;
L_00457fae:; BB(0x00457fae);
    /* 00457fae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457fb0: fld dword ptr [0x900228] */ FPUSH(R_F32((u32)(0x900228u)));
    /* 00457fb6: mov dword ptr [ecx + 0x3e0], 0 */ W32((u32)(r_ecx+0x3e0u), 0x0u);
L_00457fc0:; BB(0x00457fc0);
    /* 00457fc0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00457fc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457fc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457fc5: ja 0x457fd6 */ if ((!fC&&!fZ)) goto L_00457fd6;
L_00457fc7:; BB(0x00457fc7);
    /* 00457fc7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00457fc9: fcom dword ptr [0x900224] */ fx_compare(ST(0), R_F32((u32)(0x900224u))); 
    /* 00457fcf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00457fd1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00457fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00457fd4: jb 0x457fe1 */ if (fC) goto L_00457fe1;
L_00457fd6:; BB(0x00457fd6);
    /* 00457fd6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00457fd8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00457fda: fstp dword ptr [ecx + 0x3d8] */ W_F32((u32)(r_ecx+0x3d8u), ST(0)); FPOP();
    /* 00457fe0: ret  */ FN_RET(0x00457e7c); r_esp += 4; return;
L_00457fe1:; BB(0x00457fe1);
    /* 00457fe1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00457fe3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00457fe5: fstp dword ptr [ecx + 0x3d8] */ W_F32((u32)(r_ecx+0x3d8u), ST(0)); FPOP();
    /* 00457feb: ret  */ FN_RET(0x00457e7c); r_esp += 4; return;
}

void f_00457fec(void) /* sub_457FEC */
{
    FN_ENTER(0x00457fec);
    /* 00457fec: fld dword ptr [0x900220] */ FPUSH(R_F32((u32)(0x900220u)));
    /* 00457ff2: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00457ff5: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00457ff8: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00457ffb: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00458001: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00458007: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0045800d: ret  */ FN_RET(0x00457fec); r_esp += 4; return;
}

