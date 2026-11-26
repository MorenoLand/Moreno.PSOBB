#include "protos.h"

void f_00635040(void)
{
    FN_ENTER(0x00635040);
    /* 00635040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635041: mov ebp, esp */ r_ebp = r_esp;
    /* 00635043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635045: push 0x8e4310 */ { u32 v = 0x8e4310u; r_esp -= 4; W32(r_esp, v); }
    /* 0063504a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635051: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635058: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063505b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063505e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00635061: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00635064: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00635067: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063506c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00635073: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x635078u); f_005caba4();
    /* 00635078: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635079: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063507c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063507e: je 0x6350b1 */ if (fZ) goto L_006350b1;
L_00635080:; BB(0x00635080);
    /* 00635080: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00635087: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063508e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635091: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635094: call 0x6350b8 */ r_esp -= 4; W32(r_esp, 0x635099u); f_006350b8();
    /* 00635099: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063509c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006350a3:; BB(0x006350a3);
    /* 006350a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006350a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006350ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006350af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006350b0: ret  */ FN_RET(0x00635040); r_esp += 4; return;
L_006350b1:; BB(0x006350b1);
    /* 006350b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006350b3: jmp 0x6350a3 */ goto L_006350a3;
}

void f_006350b8(void) /* sub_6350B8 */
{
    FN_ENTER(0x006350b8);
    /* 006350b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006350b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006350bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006350bd: push 0x8e432c */ { u32 v = 0x8e432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006350c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006350c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006350c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006350d0: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006350d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006350d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006350d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006350dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006350df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006350e2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006350e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006350e8: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x6350edu); f_006347a4();
    /* 006350ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006350f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006350f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006350fa: mov dword ptr [ecx], 0xb2c2a0 */ W32((u32)(r_ecx), 0xb2c2a0u);
    /* 00635100: mov eax, dword ptr [0x9c644c] */ r_eax = R32((u32)(0x9c644cu));
    /* 00635105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635106: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00635109: call dword ptr [0xb2c2b4] */ { u32 t = R32((u32)(0xb2c2b4u)); r_esp -= 4; W32(r_esp, 0x63510fu); call_ind(t); }
    /* 0063510f: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 00635115: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635117: je 0x635257 */ if (fZ) goto L_00635257;
L_0063511d:; BB(0x0063511d);
    /* 0063511d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063511f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x635124u); f_005b8610();
L_00635124:; BB(0x00635124);
    /* 00635124: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635127: mov edx, dword ptr [0xa8f0ac] */ r_edx = R32((u32)(0xa8f0acu));
    /* 0063512d: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00635130: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635132: je 0x635250 */ if (fZ) goto L_00635250;
L_00635138:; BB(0x00635138);
    /* 00635138: fld dword ptr [0x93356c] */ FPUSH(R_F32((u32)(0x93356cu)));
    /* 0063513e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00635140: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00635143: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00635146: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 00635149: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 0063514f: push 0x9c63a0 */ { u32 v = 0x9c63a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635154: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x635159u); f_007b9a88();
    /* 00635159: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063515c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x635161u); f_007b999c();
    /* 00635161: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635162: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635165: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63516au); f_007b4f54();
    /* 0063516a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063516d: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00635173: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00635175: jl 0x63517e */ if ((fS!=fO)) goto L_0063517e;
L_00635177:; BB(0x00635177);
    /* 00635177: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063517c: jl 0x63518a */ if ((fS!=fO)) goto L_0063518a;
L_0063517e:; BB(0x0063517e);
    /* 0063517e: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 00635188: jmp 0x635190 */ goto L_00635190;
L_0063518a:; BB(0x0063518a);
    /* 0063518a: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_00635190:; BB(0x00635190);
    /* 00635190: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00635193: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00635196: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 0063519a: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0063519e: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 006351a2: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 006351a6: mov word ptr [ebp - 0x5c], bx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ebx);
    /* 006351aa: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 006351ae: mov word ptr [ebp - 0x5a], si */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_esi);
    /* 006351b2: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 006351b6: mov word ptr [ebp - 0x58], di */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edi);
    /* 006351ba: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 006351be: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 006351c2: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006351c5: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006351c8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006351cb: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006351ce: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006351d1: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006351d4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006351d7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006351da: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006351dd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006351e0: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006351e3: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006351e6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006351e9: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006351ec: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006351ef: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006351f2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006351f5: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006351f8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006351fb: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006351fe: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00635201: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00635204: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00635207: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063520a: mov eax, dword ptr [0x9c6458] */ r_eax = R32((u32)(0x9c6458u));
    /* 0063520f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00635212: mov eax, dword ptr [0x9c645c] */ r_eax = R32((u32)(0x9c645cu));
    /* 00635217: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0063521a: mov eax, dword ptr [0x9c6460] */ r_eax = R32((u32)(0x9c6460u));
    /* 0063521f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00635222: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00635225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635226: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63522bu); f_0065f960();
    /* 0063522b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063522c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063522f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635232: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00635235: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00635238: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0063523e: mov eax, edx */ r_eax = r_edx;
    /* 00635240: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635243: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063524a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063524c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063524d: ret 4 */ FN_RET(0x006350b8); r_esp += 8; return;
L_00635250:; BB(0x00635250);
    /* 00635250: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00635252: jmp 0x635138 */ goto L_00635138;
L_00635257:; BB(0x00635257);
    /* 00635257: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635259: jmp 0x635124 */ goto L_00635124;
}

void f_006351e0(void)
{
    FN_ENTER(0x006351e0);
    /* 006351e0: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006351e3: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006351e6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006351e9: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006351ec: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006351ef: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006351f2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006351f5: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006351f8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006351fb: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006351fe: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00635201: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00635204: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00635207: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063520a: mov eax, dword ptr [0x9c6458] */ r_eax = R32((u32)(0x9c6458u));
    /* 0063520f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00635212: mov eax, dword ptr [0x9c645c] */ r_eax = R32((u32)(0x9c645cu));
    /* 00635217: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0063521a: mov eax, dword ptr [0x9c6460] */ r_eax = R32((u32)(0x9c6460u));
    /* 0063521f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00635222: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00635225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635226: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63522bu); f_0065f960();
    /* 0063522b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063522c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063522f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635232: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00635235: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00635238: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0063523e: mov eax, edx */ r_eax = r_edx;
    /* 00635240: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635243: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063524a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063524c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063524d: ret 4 */ FN_RET(0x006351e0); r_esp += 8; return;
}

void f_00635260(void) /* sub_635260 */
{
    FN_ENTER(0x00635260);
    /* 00635260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635261: mov ebp, esp */ r_ebp = r_esp;
    /* 00635263: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635265: push 0x8e4354 */ { u32 v = 0x8e4354u; r_esp -= 4; W32(r_esp, v); }
    /* 0063526a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635271: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635278: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063527b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063527e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00635281: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00635284: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00635287: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00635289: mov eax, 0x9334a0 */ r_eax = 0x9334a0u;
    /* 0063528e: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00635298: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 006352a2: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006352a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006352ab: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 006352ae: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006352b1: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006352b4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006352b7: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 006352ba: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006352bd: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 006352c0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006352c3: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 006352c6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006352c9: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 006352cc: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006352cf: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006352d2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006352d5: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006352d8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006352db: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006352de: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006352e1: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006352e4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006352e7: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006352ea: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006352ed: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006352f0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006352f3: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006352f6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006352f9: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006352fc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006352ff: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00635302: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00635305: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00635308: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0063530b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0063530e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00635311: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00635314: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00635317: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063531a: mov edi, dword ptr [ebp - 0x88] */ r_edi = R32((u32)(r_ebp+0xffffff78u));
    /* 00635320: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00635323: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00635326: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00635329: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0063532e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00635331: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00635337: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0063533a: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0063533d: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00635340: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00635343: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00635346: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00635349: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063534c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x635351u); f_0082d990();
    /* 00635351: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00635354: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635356: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63535bu); f_0082d8bc();
    /* 0063535b: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0063535e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063535f: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00635362: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635364: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x635369u); f_0082eab8();
    /* 00635369: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63536eu); f_0082da80();
    /* 0063536e: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00635371: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00635374: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00635377: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0063537a: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0063537d: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00635380: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 00635383: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 00635386: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x63538bu); f_0082ebac();
    /* 0063538b: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 00635391: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635393: je 0x635405 */ if (fZ) goto L_00635405;
L_00635395:; BB(0x00635395);
    /* 00635395: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00635397: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63539cu); f_005b8610();
L_0063539c:; BB(0x0063539c);
    /* 0063539c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0063539f: mov eax, dword ptr [0xa8f0ac] */ r_eax = R32((u32)(0xa8f0acu));
    /* 006353a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006353a6: je 0x635401 */ if (fZ) goto L_00635401;
L_006353a8:; BB(0x006353a8);
    /* 006353a8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006353af: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006353b2: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 006353b7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6353bcu); f_005caba4();
    /* 006353bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006353bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006353c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006353c2: je 0x6353ea */ if (fZ) goto L_006353ea;
L_006353c4:; BB(0x006353c4);
    /* 006353c4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006353cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006353d2: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 006353d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006353d6: mov ecx, eax */ r_ecx = r_eax;
    /* 006353d8: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006353de: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6353e3u); f_006441f4();
    /* 006353e3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006353ea:; BB(0x006353ea);
    /* 006353ea: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006353ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006353f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006353f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006353f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006353fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006353ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635400: ret  */ FN_RET(0x00635260); r_esp += 4; return;
L_00635401:; BB(0x00635401);
    /* 00635401: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635403: jmp 0x6353a8 */ goto L_006353a8;
L_00635405:; BB(0x00635405);
    /* 00635405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635407: jmp 0x63539c */ goto L_0063539c;
}

void f_0063540c(void)
{
    FN_ENTER(0x0063540c);
    /* 0063540c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063540d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063540f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635411: push 0x8e437c */ { u32 v = 0x8e437cu; r_esp -= 4; W32(r_esp, v); }
    /* 00635416: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063541c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063541d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635424: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635427: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063542a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063542d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00635430: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00635433: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635438: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063543f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x635444u); f_005caba4();
    /* 00635444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635445: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00635448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063544a: je 0x63547d */ if (fZ) goto L_0063547d;
L_0063544c:; BB(0x0063544c);
    /* 0063544c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00635453: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063545a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063545d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635460: call 0x635484 */ r_esp -= 4; W32(r_esp, 0x635465u); f_00635484();
    /* 00635465: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635468: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063546f:; BB(0x0063546f);
    /* 0063546f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635472: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635479: mov esp, ebp */ r_esp = r_ebp;
    /* 0063547b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063547c: ret  */ FN_RET(0x0063540c); r_esp += 4; return;
L_0063547d:; BB(0x0063547d);
    /* 0063547d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063547f: jmp 0x63546f */ goto L_0063546f;
}

void f_00635484(void) /* sub_635484 */
{
    FN_ENTER(0x00635484);
    /* 00635484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635485: mov ebp, esp */ r_ebp = r_esp;
    /* 00635487: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635489: push 0x8e43ac */ { u32 v = 0x8e43acu; r_esp -= 4; W32(r_esp, v); }
    /* 0063548e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635495: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063549c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063549f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006354a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006354a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006354a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006354ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006354ae: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006354b1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006354b4: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x6354b9u); f_006347a4();
    /* 006354b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006354c0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006354c3: mov dword ptr [ecx], 0xb2c300 */ W32((u32)(r_ecx), 0xb2c300u);
    /* 006354c9: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006354cf: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x6354d4u); f_0057713c();
    /* 006354d4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006354db: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006354de: mov eax, dword ptr [0x9c6450] */ r_eax = R32((u32)(0x9c6450u));
    /* 006354e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006354e6: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 006354e8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006354eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006354ec: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x6354efu); call_ind(t); }
    /* 006354ef: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 006354f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006354f7: je 0x635643 */ if (fZ) goto L_00635643;
L_006354fd:; BB(0x006354fd);
    /* 006354fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006354ff: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x635504u); f_005b8610();
L_00635504:; BB(0x00635504);
    /* 00635504: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635507: mov edx, dword ptr [0xa8f0ac] */ r_edx = R32((u32)(0xa8f0acu));
    /* 0063550d: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00635510: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635512: je 0x63563c */ if (fZ) goto L_0063563c;
L_00635518:; BB(0x00635518);
    /* 00635518: fld dword ptr [0x933564] */ FPUSH(R_F32((u32)(0x933564u)));
    /* 0063551e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00635520: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00635523: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00635526: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 00635529: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 0063552f: push 0x9c63cc */ { u32 v = 0x9c63ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00635534: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x635539u); f_007b9a88();
    /* 00635539: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063553c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x635541u); f_007b999c();
    /* 00635541: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635542: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635545: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63554au); f_007b4f54();
    /* 0063554a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063554d: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00635553: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00635555: jl 0x63555e */ if ((fS!=fO)) goto L_0063555e;
L_00635557:; BB(0x00635557);
    /* 00635557: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063555c: jl 0x63556a */ if ((fS!=fO)) goto L_0063556a;
L_0063555e:; BB(0x0063555e);
    /* 0063555e: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 00635568: jmp 0x635570 */ goto L_00635570;
L_0063556a:; BB(0x0063556a);
    /* 0063556a: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_00635570:; BB(0x00635570);
    /* 00635570: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00635573: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00635576: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 0063557a: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0063557e: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 00635582: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 00635586: mov word ptr [ebp - 0x5c], bx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ebx);
    /* 0063558a: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0063558e: mov word ptr [ebp - 0x5a], si */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_esi);
    /* 00635592: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 00635596: mov word ptr [ebp - 0x58], di */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edi);
    /* 0063559a: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0063559e: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 006355a2: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006355a5: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006355a8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006355ab: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006355ae: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006355b1: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006355b4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006355b7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006355ba: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006355bd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006355c0: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006355c3: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006355c6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006355c9: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006355cc: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006355cf: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006355d2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006355d5: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006355d8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006355db: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006355de: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006355e1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006355e4: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 006355e7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006355ea: mov eax, dword ptr [0x9c6458] */ r_eax = R32((u32)(0x9c6458u));
    /* 006355ef: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006355f2: mov eax, dword ptr [0x9c645c] */ r_eax = R32((u32)(0x9c645cu));
    /* 006355f7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006355fa: mov eax, dword ptr [0x9c6460] */ r_eax = R32((u32)(0x9c6460u));
    /* 006355ff: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00635602: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00635605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635606: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63560bu); f_0065f960();
    /* 0063560b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063560c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063560f: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00635615: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063561b: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x635620u); f_0057739c();
    /* 00635620: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635623: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635626: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00635629: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063562c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063562f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635636: mov esp, ebp */ r_esp = r_ebp;
    /* 00635638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635639: ret 4 */ FN_RET(0x00635484); r_esp += 8; return;
L_0063563c:; BB(0x0063563c);
    /* 0063563c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063563e: jmp 0x635518 */ goto L_00635518;
L_00635643:; BB(0x00635643);
    /* 00635643: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635645: jmp 0x635504 */ goto L_00635504;
}

void f_0063564c(void) /* sub_63564C */
{
    FN_ENTER(0x0063564c);
    /* 0063564c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063564d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063564f: lea ecx, [ebx + 0xbc] */ r_ecx = (u32)(r_ebx+0xbcu);
    /* 00635655: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x63565au); f_005771a4();
    /* 0063565a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063565c: call 0x633734 */ r_esp -= 4; W32(r_esp, 0x635661u); f_00633734();
    /* 00635661: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00635662: ret  */ FN_RET(0x0063564c); r_esp += 4; return;
}

void f_00635664(void) /* sub_635664 */
{
    FN_ENTER(0x00635664);
    /* 00635664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635665: mov ebp, esp */ r_ebp = r_esp;
    /* 00635667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635669: push 0x8e43d4 */ { u32 v = 0x8e43d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063566e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063567c: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063567f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00635682: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00635685: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00635688: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063568b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063568d: mov eax, 0x933500 */ r_eax = 0x933500u;
    /* 00635692: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0063569c: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 006356a6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006356ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006356af: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 006356b2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006356b5: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006356b8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006356bb: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 006356be: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006356c1: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 006356c4: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006356c7: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 006356ca: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006356cd: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 006356d0: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006356d3: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006356d6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006356d9: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006356dc: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006356df: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006356e2: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006356e5: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006356e8: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006356eb: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006356ee: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006356f1: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006356f4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006356f7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006356fa: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006356fd: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00635700: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00635703: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00635706: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00635709: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0063570c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0063570f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00635712: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00635715: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00635718: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063571b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063571e: mov edi, dword ptr [ebp - 0x88] */ r_edi = R32((u32)(r_ebp+0xffffff78u));
    /* 00635724: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00635727: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0063572a: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0063572d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00635732: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00635735: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0063573b: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0063573e: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00635741: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00635744: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00635747: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063574a: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0063574d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00635750: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x635755u); f_0082d990();
    /* 00635755: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00635758: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063575a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63575fu); f_0082d8bc();
    /* 0063575f: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00635762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635763: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00635766: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635768: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x63576du); f_0082eab8();
    /* 0063576d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x635772u); f_0082da80();
    /* 00635772: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00635775: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00635778: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0063577b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0063577e: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00635781: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00635784: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 00635787: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 0063578a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x63578fu); f_0082ebac();
    /* 0063578f: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 00635795: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635797: je 0x635809 */ if (fZ) goto L_00635809;
L_00635799:; BB(0x00635799);
    /* 00635799: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063579b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6357a0u); f_005b8610();
L_006357a0:; BB(0x006357a0);
    /* 006357a0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006357a3: mov eax, dword ptr [0xa8f0ac] */ r_eax = R32((u32)(0xa8f0acu));
    /* 006357a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006357aa: je 0x635805 */ if (fZ) goto L_00635805;
L_006357ac:; BB(0x006357ac);
    /* 006357ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006357b3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006357b6: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 006357bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6357c0u); f_005caba4();
    /* 006357c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006357c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006357c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006357c6: je 0x6357ee */ if (fZ) goto L_006357ee;
L_006357c8:; BB(0x006357c8);
    /* 006357c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006357cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006357d6: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 006357d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006357da: mov ecx, eax */ r_ecx = r_eax;
    /* 006357dc: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006357e2: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6357e7u); f_006441f4();
    /* 006357e7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006357ee:; BB(0x006357ee);
    /* 006357ee: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006357f1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006357f4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006357f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006357fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635801: mov esp, ebp */ r_esp = r_ebp;
    /* 00635803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635804: ret  */ FN_RET(0x00635664); r_esp += 4; return;
L_00635805:; BB(0x00635805);
    /* 00635805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635807: jmp 0x6357ac */ goto L_006357ac;
L_00635809:; BB(0x00635809);
    /* 00635809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063580b: jmp 0x6357a0 */ goto L_006357a0;
}

void f_0063576a(void)
{
    FN_ENTER(0x0063576a);
    /* 0063576a: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0063576b: pop ds */ UNSUP(0x0063576b, "pop ds");
    /* 0063576c: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 0063576e: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0063576f: sbb dword ptr [edi], 0 */ { u32 ad = (u32)(r_edi); u32 c = fC; u32 a = R32(ad); u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 00635772: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00635775: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00635778: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0063577b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0063577e: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00635781: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00635784: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 00635787: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 0063578a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x63578fu); f_0082ebac();
    /* 0063578f: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 00635795: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635797: je 0x635809 */ if (fZ) goto L_00635809;
L_00635799:; BB(0x00635799);
    /* 00635799: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063579b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6357a0u); f_005b8610();
L_006357a0:; BB(0x006357a0);
    /* 006357a0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006357a3: mov eax, dword ptr [0xa8f0ac] */ r_eax = R32((u32)(0xa8f0acu));
    /* 006357a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006357aa: je 0x635805 */ if (fZ) goto L_00635805;
L_006357ac:; BB(0x006357ac);
    /* 006357ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006357b3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006357b6: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 006357bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6357c0u); f_005caba4();
    /* 006357c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006357c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006357c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006357c6: je 0x6357ee */ if (fZ) goto L_006357ee;
L_006357c8:; BB(0x006357c8);
    /* 006357c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006357cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006357d6: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 006357d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006357da: mov ecx, eax */ r_ecx = r_eax;
    /* 006357dc: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006357e2: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6357e7u); f_006441f4();
    /* 006357e7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006357ee:; BB(0x006357ee);
    /* 006357ee: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006357f1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006357f4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006357f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006357fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635801: mov esp, ebp */ r_esp = r_ebp;
    /* 00635803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635804: ret  */ FN_RET(0x0063576a); r_esp += 4; return;
L_00635805:; BB(0x00635805);
    /* 00635805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635807: jmp 0x6357ac */ goto L_006357ac;
L_00635809:; BB(0x00635809);
    /* 00635809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063580b: jmp 0x6357a0 */ goto L_006357a0;
}

void f_00635810(void) /* sub_635810 */
{
    FN_ENTER(0x00635810);
    /* 00635810: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00635813: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635817: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635818: push 0x4d5 */ { u32 v = 0x4d5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063581d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x635822u); f_00814298();
    /* 00635822: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00635825: ret  */ FN_RET(0x00635810); r_esp += 4; return;
}

void f_00635828(void) /* sub_635828 */
{
    FN_ENTER(0x00635828);
    /* 00635828: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00635829: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063582a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063582d: mov esi, ecx */ r_esi = r_ecx;
    /* 0063582f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00635832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635833: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00635836: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635838: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x63583du); f_00830aa0();
    /* 0063583d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00635841: fcomp dword ptr [0x93355c] */ fx_compare(ST(0), R_F32((u32)(0x93355cu))); FPOP();
    /* 00635847: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00635849: lea ebp, [esi + 0xbc] */ r_ebp = (u32)(r_esi+0xbcu);
    /* 0063584f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00635850: jbe 0x63585b */ if ((fC||fZ)) goto L_0063585b;
L_00635852:; BB(0x00635852);
    /* 00635852: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00635854: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x635859u); f_00577234();
    /* 00635859: jmp 0x635862 */ goto L_00635862;
L_0063585b:; BB(0x0063585b);
    /* 0063585b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063585d: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x635862u); f_0057723c();
L_00635862:; BB(0x00635862);
    /* 00635862: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x635867u); f_006dc358();
    /* 00635867: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063586a: jne 0x63587a */ if (!fZ) goto L_0063587a;
L_0063586c:; BB(0x0063586c);
    /* 0063586c: mov dword ptr [esi + 0xd8], 0 */ W32((u32)(r_esi+0xd8u), 0x0u);
    /* 00635876: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635878: jmp 0x635887 */ goto L_00635887;
L_0063587a:; BB(0x0063587a);
    /* 0063587a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063587c: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x635881u); f_00577244();
    /* 00635881: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
L_00635887:; BB(0x00635887);
    /* 00635887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635889: je 0x635896 */ if (fZ) goto L_00635896;
L_0063588b:; BB(0x0063588b);
    /* 0063588b: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 00635891: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00635893: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x635896u); call_ind(t); }
L_00635896:; BB(0x00635896);
    /* 00635896: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00635899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063589a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063589b: ret  */ FN_RET(0x00635828); r_esp += 4; return;
}

void f_0063589c(void) /* sub_63589C */
{
    FN_ENTER(0x0063589c);
    /* 0063589c: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 006358a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006358a4: je 0x6358b7 */ if (fZ) goto L_006358b7;
L_006358a6:; BB(0x006358a6);
    /* 006358a6: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 006358ac: lea eax, [ecx + 0xbc] */ r_eax = (u32)(r_ecx+0xbcu);
    /* 006358b2: mov ecx, eax */ r_ecx = r_eax;
    /* 006358b4: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6358b7u); call_ind(t); }
L_006358b7:; BB(0x006358b7);
    /* 006358b7: ret  */ FN_RET(0x0063589c); r_esp += 4; return;
}

void f_006358b8(void)
{
    FN_ENTER(0x006358b8);
    /* 006358b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006358b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006358bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006358bd: push 0x8e43fc */ { u32 v = 0x8e43fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006358c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006358c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006358c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006358d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006358d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006358d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006358d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006358dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006358df: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006358e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006358eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6358f0u); f_005caba4();
    /* 006358f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006358f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006358f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006358f6: je 0x635929 */ if (fZ) goto L_00635929;
L_006358f8:; BB(0x006358f8);
    /* 006358f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006358ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635906: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635909: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063590c: call 0x635930 */ r_esp -= 4; W32(r_esp, 0x635911u); f_00635930();
    /* 00635911: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635914: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063591b:; BB(0x0063591b);
    /* 0063591b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063591e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635925: mov esp, ebp */ r_esp = r_ebp;
    /* 00635927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635928: ret  */ FN_RET(0x006358b8); r_esp += 4; return;
L_00635929:; BB(0x00635929);
    /* 00635929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063592b: jmp 0x63591b */ goto L_0063591b;
}

void f_00635930(void) /* sub_635930 */
{
    FN_ENTER(0x00635930);
    /* 00635930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635931: mov ebp, esp */ r_ebp = r_esp;
    /* 00635933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635935: push 0x8e442c */ { u32 v = 0x8e442cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063593a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635941: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635948: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063594b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063594e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00635951: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00635954: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00635957: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063595a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063595d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00635960: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x635965u); f_006338e8();
    /* 00635965: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063596c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063596f: mov dword ptr [ecx], 0xb2c360 */ W32((u32)(r_ecx), 0xb2c360u);
    /* 00635975: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063597b: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x635980u); f_0057713c();
    /* 00635980: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00635987: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063598a: mov eax, dword ptr [0x9c6454] */ r_eax = R32((u32)(0x9c6454u));
    /* 0063598f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00635992: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00635994: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00635997: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635998: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x63599bu); call_ind(t); }
    /* 0063599b: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 006359a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006359a3: je 0x635ac9 */ if (fZ) goto L_00635ac9;
L_006359a9:; BB(0x006359a9);
    /* 006359a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006359ab: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6359b0u); f_005b8610();
L_006359b0:; BB(0x006359b0);
    /* 006359b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006359b3: mov edx, dword ptr [0xa8f0ac] */ r_edx = R32((u32)(0xa8f0acu));
    /* 006359b9: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006359bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006359be: je 0x635ac2 */ if (fZ) goto L_00635ac2;
L_006359c4:; BB(0x006359c4);
    /* 006359c4: fld dword ptr [0x933558] */ FPUSH(R_F32((u32)(0x933558u)));
    /* 006359ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006359cc: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006359cf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006359d2: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 006359d5: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006359db: push 0x9c63f8 */ { u32 v = 0x9c63f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006359e0: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6359e5u); f_007b9a88();
    /* 006359e5: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006359e8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6359edu); f_007b999c();
    /* 006359ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006359ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006359f1: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6359f6u); f_007b4f54();
    /* 006359f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006359f9: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006359fc: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 00635a00: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 00635a04: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 00635a08: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 00635a0c: mov word ptr [ebp - 0x5c], bx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ebx);
    /* 00635a10: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 00635a14: mov word ptr [ebp - 0x5a], si */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_esi);
    /* 00635a18: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 00635a1c: mov word ptr [ebp - 0x58], di */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edi);
    /* 00635a20: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00635a24: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 00635a28: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00635a2b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00635a2e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00635a31: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00635a34: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00635a37: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00635a3a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00635a3d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00635a40: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00635a43: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00635a46: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00635a49: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00635a4c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00635a4f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00635a52: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00635a55: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00635a58: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00635a5b: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00635a5e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00635a61: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00635a64: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00635a67: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00635a6a: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00635a6d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00635a70: mov eax, dword ptr [0x9c6458] */ r_eax = R32((u32)(0x9c6458u));
    /* 00635a75: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00635a78: mov eax, dword ptr [0x9c645c] */ r_eax = R32((u32)(0x9c645cu));
    /* 00635a7d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00635a80: mov eax, dword ptr [0x9c6460] */ r_eax = R32((u32)(0x9c6460u));
    /* 00635a85: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00635a88: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00635a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635a8c: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x635a91u); f_0065f960();
    /* 00635a91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635a92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635a95: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00635a9b: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00635aa1: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x635aa6u); f_0057739c();
    /* 00635aa6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635aa9: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635aac: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00635aaf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00635ab2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635ab5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635abc: mov esp, ebp */ r_esp = r_ebp;
    /* 00635abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635abf: ret 4 */ FN_RET(0x00635930); r_esp += 8; return;
L_00635ac2:; BB(0x00635ac2);
    /* 00635ac2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00635ac4: jmp 0x6359c4 */ goto L_006359c4;
L_00635ac9:; BB(0x00635ac9);
    /* 00635ac9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635acb: jmp 0x6359b0 */ goto L_006359b0;
}

void f_00635ad0(void) /* sub_635AD0 */
{
    FN_ENTER(0x00635ad0);
    /* 00635ad0: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00635ad6: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x635adbu); f_005771a4();
    /* 00635adb: ret  */ FN_RET(0x00635ad0); r_esp += 4; return;
}

void f_00635adc(void) /* sub_635ADC */
{
    FN_ENTER(0x00635adc);
    /* 00635adc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00635add: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635ade: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635ae1: mov esi, ecx */ r_esi = r_ecx;
    /* 00635ae3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00635ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635ae7: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00635aea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635aec: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x635af1u); f_00830aa0();
    /* 00635af1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00635af5: fcomp dword ptr [0x933554] */ fx_compare(ST(0), R_F32((u32)(0x933554u))); FPOP();
    /* 00635afb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00635afd: lea ebp, [esi + 0xb4] */ r_ebp = (u32)(r_esi+0xb4u);
    /* 00635b03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00635b04: jbe 0x635b0f */ if ((fC||fZ)) goto L_00635b0f;
L_00635b06:; BB(0x00635b06);
    /* 00635b06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00635b08: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x635b0du); f_00577234();
    /* 00635b0d: jmp 0x635b16 */ goto L_00635b16;
L_00635b0f:; BB(0x00635b0f);
    /* 00635b0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00635b11: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x635b16u); f_0057723c();
L_00635b16:; BB(0x00635b16);
    /* 00635b16: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x635b1bu); f_006dc358();
    /* 00635b1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635b1e: jne 0x635b2e */ if (!fZ) goto L_00635b2e;
L_00635b20:; BB(0x00635b20);
    /* 00635b20: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 00635b2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635b2c: jmp 0x635b3b */ goto L_00635b3b;
L_00635b2e:; BB(0x00635b2e);
    /* 00635b2e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00635b30: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x635b35u); f_00577244();
    /* 00635b35: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
L_00635b3b:; BB(0x00635b3b);
    /* 00635b3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635b3d: je 0x635b4a */ if (fZ) goto L_00635b4a;
L_00635b3f:; BB(0x00635b3f);
    /* 00635b3f: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00635b45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00635b47: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x635b4au); call_ind(t); }
L_00635b4a:; BB(0x00635b4a);
    /* 00635b4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00635b4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635b4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00635b4f: ret  */ FN_RET(0x00635adc); r_esp += 4; return;
}

void f_00635b50(void) /* sub_635B50 */
{
    FN_ENTER(0x00635b50);
    /* 00635b50: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 00635b56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00635b58: je 0x635b6b */ if (fZ) goto L_00635b6b;
L_00635b5a:; BB(0x00635b5a);
    /* 00635b5a: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 00635b60: lea eax, [ecx + 0xb4] */ r_eax = (u32)(r_ecx+0xb4u);
    /* 00635b66: mov ecx, eax */ r_ecx = r_eax;
    /* 00635b68: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x635b6bu); call_ind(t); }
L_00635b6b:; BB(0x00635b6b);
    /* 00635b6b: ret  */ FN_RET(0x00635b50); r_esp += 4; return;
}

void f_00635b6c(void) /* sub_635B6C */
{
    FN_ENTER(0x00635b6c);
    /* 00635b6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635b6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00635b6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635b71: push 0x8e4454 */ { u32 v = 0x8e4454u; r_esp -= 4; W32(r_esp, v); }
    /* 00635b76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635b7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635b84: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635b87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00635b8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00635b8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00635b90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00635b93: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00635b98: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00635b9f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x635ba4u); f_008581c5();
    /* 00635ba4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00635ba7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635baa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00635bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635baf: je 0x635c74 */ if (fZ) goto L_00635c74;
L_00635bb5:; BB(0x00635bb5);
    /* 00635bb5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00635bbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635bc3: mov ecx, eax */ r_ecx = r_eax;
    /* 00635bc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635bc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635bca: push 0x9c643c */ { u32 v = 0x9c643cu; r_esp -= 4; W32(r_esp, v); }
    /* 00635bcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00635bd1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x635bd6u); f_005b7a84();
    /* 00635bd6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00635bdd:; BB(0x00635bdd);
    /* 00635bdd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00635be0: mov dword ptr [0xa8f0b0], eax */ W32((u32)(0xa8f0b0u), r_eax);
    /* 00635be5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00635bec: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x635bf1u); f_00807ac0();
    /* 00635bf1: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635bf4: jne 0x635c08 */ if (!fZ) goto L_00635c08;
L_00635bf6:; BB(0x00635bf6);
    /* 00635bf6: push 0x933604 */ { u32 v = 0x933604u; r_esp -= 4; W32(r_esp, v); }
    /* 00635bfb: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x635c00u); f_008009dc();
    /* 00635c00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635c01: mov dword ptr [0xa8f0ac], eax */ W32((u32)(0xa8f0acu), r_eax);
    /* 00635c06: jmp 0x635c2f */ goto L_00635c2f;
L_00635c08:; BB(0x00635c08);
    /* 00635c08: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635c0b: jne 0x635c1f */ if (!fZ) goto L_00635c1f;
L_00635c0d:; BB(0x00635c0d);
    /* 00635c0d: push 0x93361c */ { u32 v = 0x93361cu; r_esp -= 4; W32(r_esp, v); }
    /* 00635c12: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x635c17u); f_008009dc();
    /* 00635c17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635c18: mov dword ptr [0xa8f0ac], eax */ W32((u32)(0xa8f0acu), r_eax);
    /* 00635c1d: jmp 0x635c2f */ goto L_00635c2f;
L_00635c1f:; BB(0x00635c1f);
    /* 00635c1f: push 0x933634 */ { u32 v = 0x933634u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c24: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x635c29u); f_008009dc();
    /* 00635c29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635c2a: mov dword ptr [0xa8f0ac], eax */ W32((u32)(0xa8f0acu), r_eax);
L_00635c2f:; BB(0x00635c2f);
    /* 00635c2f: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 00635c35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635c37: je 0x635c70 */ if (fZ) goto L_00635c70;
L_00635c39:; BB(0x00635c39);
    /* 00635c39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c3b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x635c40u); f_005b8610();
    /* 00635c40: mov edx, eax */ r_edx = r_eax;
    /* 00635c42: mov eax, dword ptr [0xa8f0ac] */ r_eax = R32((u32)(0xa8f0acu));
L_00635c47:; BB(0x00635c47);
    /* 00635c47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635c49: je 0x635c6c */ if (fZ) goto L_00635c6c;
L_00635c4b:; BB(0x00635c4b);
    /* 00635c4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c4d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635c53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635c54: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 00635c56: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x635c5bu); f_006086e8();
    /* 00635c5b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00635c5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635c61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635c68: mov esp, ebp */ r_esp = r_ebp;
    /* 00635c6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635c6b: ret  */ FN_RET(0x00635b6c); r_esp += 4; return;
L_00635c6c:; BB(0x00635c6c);
    /* 00635c6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635c6e: jmp 0x635c4b */ goto L_00635c4b;
L_00635c70:; BB(0x00635c70);
    /* 00635c70: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00635c72: jmp 0x635c47 */ goto L_00635c47;
L_00635c74:; BB(0x00635c74);
    /* 00635c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635c76: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00635c79: jmp 0x635bdd */ goto L_00635bdd;
}

void f_00635c80(void) /* sub_635C80 */
{
    FN_ENTER(0x00635c80);
    /* 00635c80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00635c81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00635c83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00635c85: call 0x635ca4 */ r_esp -= 4; W32(r_esp, 0x635c8au); f_00635ca4();
    /* 00635c8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00635c8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00635c90: jne 0x635c96 */ if (!fZ) goto L_00635c96;
L_00635c92:; BB(0x00635c92);
    /* 00635c92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00635c93: ret 4 */ FN_RET(0x00635c80); r_esp += 8; return;
L_00635c96:; BB(0x00635c96);
    /* 00635c96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00635c97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x635c9cu); f_005c2f74();
    /* 00635c9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635c9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00635c9e: ret 4 */ FN_RET(0x00635c80); r_esp += 8; return;
}

void f_00635ca4(void) /* sub_635CA4 */
{
    FN_ENTER(0x00635ca4);
    /* 00635ca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635ca5: mov ebp, esp */ r_ebp = r_esp;
    /* 00635ca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635ca9: push 0x8e4470 */ { u32 v = 0x8e4470u; r_esp -= 4; W32(r_esp, v); }
    /* 00635cae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635cb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635cbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635cbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00635cc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00635cc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00635cc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00635ccb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00635cce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635cd5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635cd8: mov dword ptr [eax], 0xb2c420 */ W32((u32)(r_eax), 0xb2c420u);
    /* 00635cde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635cdf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x635ce4u); f_007b4e84();
    /* 00635ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635ce5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635ce8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x635cedu); f_007b9c8c();
    /* 00635ced: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635cf0: push dword ptr [eax + 0x33c] */ { u32 v = R32((u32)(r_eax+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635cf6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x635cfbu); f_00857e98();
    /* 00635cfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635cfc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00635d03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635d06: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x635d0bu); f_00770660();
    /* 00635d0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635d0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635d15: mov esp, ebp */ r_esp = r_ebp;
    /* 00635d17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635d18: ret  */ FN_RET(0x00635ca4); r_esp += 4; return;
}

void f_00635d1c(void)
{
    FN_ENTER(0x00635d1c);
    /* 00635d1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635d1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00635d1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635d21: push 0x8e4498 */ { u32 v = 0x8e4498u; r_esp -= 4; W32(r_esp, v); }
    /* 00635d26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635d2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635d34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635d37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00635d3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00635d3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00635d40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00635d43: push 0x344 */ { u32 v = 0x344u; r_esp -= 4; W32(r_esp, v); }
    /* 00635d48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00635d4f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x635d54u); f_005caba4();
    /* 00635d54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635d55: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00635d58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635d5a: je 0x635d93 */ if (fZ) goto L_00635d93;
L_00635d5c:; BB(0x00635d5c);
    /* 00635d5c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00635d63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635d6a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635d6d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635d73: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635d76: call 0x635d98 */ r_esp -= 4; W32(r_esp, 0x635d7bu); f_00635d98();
    /* 00635d7b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635d7e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00635d85:; BB(0x00635d85);
    /* 00635d85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635d88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635d8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00635d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635d92: ret  */ FN_RET(0x00635d1c); r_esp += 4; return;
L_00635d93:; BB(0x00635d93);
    /* 00635d93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00635d95: jmp 0x635d85 */ goto L_00635d85;
}

void f_00635d98(void) /* sub_635D98 */
{
    FN_ENTER(0x00635d98);
    /* 00635d98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635d99: mov ebp, esp */ r_ebp = r_esp;
    /* 00635d9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635d9d: push 0x8e44b4 */ { u32 v = 0x8e44b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00635da2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635da9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00635db0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635db3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00635db6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00635db9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00635dbc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00635dbf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00635dc2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635dc5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00635dc8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00635dcb: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x635dd0u); f_00770748();
    /* 00635dd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635dd7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635dda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00635ddd: mov dword ptr [ecx], 0xb2c420 */ W32((u32)(r_ecx), 0xb2c420u);
    /* 00635de3: mov eax, dword ptr [0x9c6480] */ r_eax = R32((u32)(0x9c6480u));
    /* 00635de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635de9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00635dec: call dword ptr [0xb2c434] */ { u32 t = R32((u32)(0xb2c434u)); r_esp -= 4; W32(r_esp, 0x635df2u); call_ind(t); }
    /* 00635df2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635df5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00635df8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00635dfb: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00635dfe: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00635e04: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00635e0a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635e0d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00635e13: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00635e19: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00635e1f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00635e25: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00635e2b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00635e31: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635e34: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00635e3a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635e3d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00635e43: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00635e46: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00635e4c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00635e4f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00635e55: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00635e58: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x635e5du); f_0077a1f4();
    /* 00635e5d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00635e5f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x635e64u); f_008581c5();
    /* 00635e64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635e65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635e68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635e6b: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00635e71: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x635e76u); f_007b9a88();
    /* 00635e76: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635e79: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x635e7eu); f_007b999c();
    /* 00635e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635e7f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635e82: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x635e87u); f_007b4f54();
    /* 00635e87: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635e8a: mov ecx, dword ptr [edx + 0x33c] */ r_ecx = R32((u32)(r_edx+0x33cu));
    /* 00635e90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635e92: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00635e95: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00635e98: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00635e9e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635ea1: mov esi, dword ptr [ebx + 0x33c] */ r_esi = R32((u32)(r_ebx+0x33cu));
    /* 00635ea7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635eaa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635ead: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 00635eb4: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00635eba: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00635ec1: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 00635ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635ec9: jne 0x635ed2 */ if (!fZ) goto L_00635ed2;
L_00635ecb:; BB(0x00635ecb);
    /* 00635ecb: call 0x63613c */ r_esp -= 4; W32(r_esp, 0x635ed0u); f_0063613c();
    /* 00635ed0: jmp 0x635ed7 */ goto L_00635ed7;
L_00635ed2:; BB(0x00635ed2);
    /* 00635ed2: call 0x6360d4 */ r_esp -= 4; W32(r_esp, 0x635ed7u); f_006360d4();
L_00635ed7:; BB(0x00635ed7);
    /* 00635ed7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00635eda: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635edd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00635ee0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00635ee3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635ee6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00635eed: mov esp, ebp */ r_esp = r_ebp;
    /* 00635eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635ef0: ret 8 */ FN_RET(0x00635d98); r_esp += 12; return;
}

void f_00635ef4(void) /* sub_635EF4 */
{
    FN_ENTER(0x00635ef4);
    /* 00635ef4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00635ef5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00635ef6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00635ef7: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635efd: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00635f03: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00635f09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635f0b: mov ebx, eax */ r_ebx = r_eax;
    /* 00635f0d: mov eax, edx */ r_eax = r_edx;
    /* 00635f0f: mov esi, ecx */ r_esi = r_ecx;
L_00635f11:; BB(0x00635f11);
    /* 00635f11: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635f13: jge 0x63605e */ if ((fS==fO)) goto L_0063605e;
L_00635f19:; BB(0x00635f19);
    /* 00635f19: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00635f20: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f22: je 0x636056 */ if (fZ) goto L_00636056;
L_00635f28:; BB(0x00635f28);
    /* 00635f28: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f2a: je 0x636056 */ if (fZ) goto L_00636056;
L_00635f30:; BB(0x00635f30);
    /* 00635f30: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00635f33: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f39: jne 0x636056 */ if (!fZ) goto L_00636056;
L_00635f3f:; BB(0x00635f3f);
    /* 00635f3f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00635f43: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f49: je 0x636056 */ if (fZ) goto L_00636056;
L_00635f4f:; BB(0x00635f4f);
    /* 00635f4f: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635f55: jge 0x636056 */ if ((fS==fO)) goto L_00636056;
L_00635f5b:; BB(0x00635f5b);
    /* 00635f5b: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00635f61: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f67: jne 0x636056 */ if (!fZ) goto L_00636056;
L_00635f6d:; BB(0x00635f6d);
    /* 00635f6d: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 00635f73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f75: jne 0x635fee */ if (!fZ) goto L_00635fee;
L_00635f77:; BB(0x00635f77);
    /* 00635f77: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00635f7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635f7c: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f82: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f85: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f88: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f8b: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f8e: call 0x7b97d0 */ r_esp -= 4; W32(r_esp, 0x635f93u); f_007b97d0();
    /* 00635f93: lea edx, [esp + 0x98] */ r_edx = (u32)(r_esp+0x98u);
    /* 00635f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635f9b: lea eax, [edi + 0x758] */ r_eax = (u32)(r_edi+0x758u);
    /* 00635fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635fa2: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635fa5: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635fa8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635fab: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x635fb0u); f_007b97a0();
    /* 00635fb0: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 00635fb4: lea edx, [esp + 0xac] */ r_edx = (u32)(r_esp+0xacu);
    /* 00635fbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635fbd: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x635fc2u); f_0083d2fc();
    /* 00635fc2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635fc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635fc7: jne 0x635fd9 */ if (!fZ) goto L_00635fd9;
L_00635fc9:; BB(0x00635fc9);
    /* 00635fc9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00635fce: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00635fd4: jmp 0x636056 */ goto L_00636056;
L_00635fd9:; BB(0x00635fd9);
    /* 00635fd9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00635fda: mov ecx, esi */ r_ecx = r_esi;
    /* 00635fdc: call 0x636068 */ r_esp -= 4; W32(r_esp, 0x635fe1u); f_00636068();
    /* 00635fe1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00635fe6: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00635fec: jmp 0x636056 */ goto L_00636056;
L_00635fee:; BB(0x00635fee);
    /* 00635fee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00635ff1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635ff2: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635ff8: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635ffb: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635ffe: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636001: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x636006u); f_007b97a0();
    /* 00636006: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0063600a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063600b: lea eax, [edi + 0x758] */ r_eax = (u32)(r_edi+0x758u);
    /* 00636011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636012: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636015: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636018: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063601b: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x636020u); f_007b97a0();
    /* 00636020: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00636024: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00636028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063602a: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x63602fu); f_0083dbd4();
    /* 0063602f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636034: jne 0x636043 */ if (!fZ) goto L_00636043;
L_00636036:; BB(0x00636036);
    /* 00636036: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0063603b: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636041: jmp 0x636056 */ goto L_00636056;
L_00636043:; BB(0x00636043);
    /* 00636043: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636044: mov ecx, esi */ r_ecx = r_esi;
    /* 00636046: call 0x636068 */ r_esp -= 4; W32(r_esp, 0x63604bu); f_00636068();
    /* 0063604b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00636050: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00636056:; BB(0x00636056);
    /* 00636056: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00636059: jmp 0x635f11 */ goto L_00635f11;
L_0063605e:; BB(0x0063605e);
    /* 0063605e: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636064: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00636065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636067: ret  */ FN_RET(0x00635ef4); r_esp += 4; return;
}

void f_00635f74(void)
{
    FN_ENTER(0x00635f74);
    goto L_00635f74;
L_00635f11:; BB(0x00635f11);
    /* 00635f11: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635f13: jge 0x63605e */ if ((fS==fO)) goto L_0063605e;
L_00635f19:; BB(0x00635f19);
    /* 00635f19: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00635f20: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f22: je 0x636056 */ if (fZ) goto L_00636056;
L_00635f28:; BB(0x00635f28);
    /* 00635f28: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f2a: je 0x636056 */ if (fZ) goto L_00636056;
L_00635f30:; BB(0x00635f30);
    /* 00635f30: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00635f33: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f39: jne 0x636056 */ if (!fZ) goto L_00636056;
L_00635f3f:; BB(0x00635f3f);
    /* 00635f3f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00635f43: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f49: je 0x636056 */ if (fZ) goto L_00636056;
L_00635f4f:; BB(0x00635f4f);
    /* 00635f4f: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635f55: jge 0x636056 */ if ((fS==fO)) goto L_00636056;
L_00635f5b:; BB(0x00635f5b);
    /* 00635f5b: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00635f61: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f67: jne 0x636056 */ if (!fZ) goto L_00636056;
L_00635f6d:; BB(0x00635f6d);
    /* 00635f6d: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 00635f73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_00635f74:; BB(0x00635f74);
    /* 00635f74: sal byte ptr [ebp + 0x77], cl */ { u32 ad = (u32)(r_ebp+0x77u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00635f75: jne 0x635fee */ if (!fZ) goto L_00635fee;
L_00635f77:; BB(0x00635f77);
    /* 00635f77: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00635f7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635f7c: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f82: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f85: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f88: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f8b: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635f8e: call 0x7b97d0 */ r_esp -= 4; W32(r_esp, 0x635f93u); f_007b97d0();
    /* 00635f93: lea edx, [esp + 0x98] */ r_edx = (u32)(r_esp+0x98u);
    /* 00635f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635f9b: lea eax, [edi + 0x758] */ r_eax = (u32)(r_edi+0x758u);
    /* 00635fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635fa2: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635fa5: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635fa8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635fab: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x635fb0u); f_007b97a0();
    /* 00635fb0: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 00635fb4: lea edx, [esp + 0xac] */ r_edx = (u32)(r_esp+0xacu);
    /* 00635fbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635fbd: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x635fc2u); f_0083d2fc();
    /* 00635fc2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635fc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635fc7: jne 0x635fd9 */ if (!fZ) goto L_00635fd9;
L_00635fc9:; BB(0x00635fc9);
    /* 00635fc9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00635fce: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00635fd4: jmp 0x636056 */ goto L_00636056;
L_00635fd9:; BB(0x00635fd9);
    /* 00635fd9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00635fda: mov ecx, esi */ r_ecx = r_esi;
    /* 00635fdc: call 0x636068 */ r_esp -= 4; W32(r_esp, 0x635fe1u); f_00636068();
    /* 00635fe1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00635fe6: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00635fec: jmp 0x636056 */ goto L_00636056;
L_00635fee:; BB(0x00635fee);
    /* 00635fee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00635ff1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635ff2: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635ff8: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00635ffb: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635ffe: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636001: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x636006u); f_007b97a0();
    /* 00636006: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0063600a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063600b: lea eax, [edi + 0x758] */ r_eax = (u32)(r_edi+0x758u);
    /* 00636011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636012: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636015: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636018: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063601b: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x636020u); f_007b97a0();
    /* 00636020: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00636024: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00636028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063602a: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x63602fu); f_0083dbd4();
    /* 0063602f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636034: jne 0x636043 */ if (!fZ) goto L_00636043;
L_00636036:; BB(0x00636036);
    /* 00636036: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0063603b: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636041: jmp 0x636056 */ goto L_00636056;
L_00636043:; BB(0x00636043);
    /* 00636043: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636044: mov ecx, esi */ r_ecx = r_esi;
    /* 00636046: call 0x636068 */ r_esp -= 4; W32(r_esp, 0x63604bu); f_00636068();
    /* 0063604b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00636050: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00636056:; BB(0x00636056);
    /* 00636056: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00636059: jmp 0x635f11 */ goto L_00635f11;
L_0063605e:; BB(0x0063605e);
    /* 0063605e: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636064: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00636065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636067: ret  */ FN_RET(0x00635f74); r_esp += 4; return;
}

