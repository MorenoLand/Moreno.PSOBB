#include "protos.h"

void f_007b5038(void) /* sub_7B5038 */
{
    FN_ENTER(0x007b5038);
    /* 007b5038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b5039: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b503c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007b5040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5042: je 0x7b5081 */ if (fZ) goto L_007b5081;
L_007b5044:; BB(0x007b5044);
    /* 007b5044: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 007b5047: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
L_007b504d:; BB(0x007b504d);
    /* 007b504d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b504f: je 0x7b507a */ if (fZ) goto L_007b507a;
L_007b5051:; BB(0x007b5051);
    /* 007b5051: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007b5055: mov byte ptr [esp], 0xb */ W8((u32)(r_esp), 0xbu);
    /* 007b5059: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 007b505c: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 007b5061: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 007b5066: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 007b506a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b506d: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 007b5071: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b5075: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b507au); f_008003e0();
L_007b507a:; BB(0x007b507a);
    /* 007b507a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b507e: ret 4 */ FN_RET(0x007b5038); r_esp += 8; return;
L_007b5081:; BB(0x007b5081);
    /* 007b5081: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 007b5087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5089: je 0x7b504d */ if (fZ) goto L_007b504d;
L_007b508b:; BB(0x007b508b);
    /* 007b508b: movsx ebp, word ptr [eax + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 007b508f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007b5091: jl 0x7b504d */ if ((fS!=fO)) goto L_007b504d;
L_007b5093:; BB(0x007b5093);
    /* 007b5093: cmp ebp, 0xb9f */ {  u32 a = r_ebp; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5099: jg 0x7b504d */ if ((!fZ&&fS==fO)) goto L_007b504d;
L_007b509b:; BB(0x007b509b);
    /* 007b509b: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 007b50a1: movsx ebp, word ptr [edx + ebp*4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ebp*4));
    /* 007b50a5: jmp 0x7b504d */ goto L_007b504d;
}

void f_007b50a8(void) /* sub_7B50A8 */
{
    FN_ENTER(0x007b50a8);
    /* 007b50a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b50a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b50aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b50ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b50ac: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007b50b0: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 007b50b4: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b50ba: je 0x7b51bb */ if (fZ) goto L_007b51bb;
L_007b50c0:; BB(0x007b50c0);
    /* 007b50c0: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b50c3: jl 0x7b5110 */ if ((fS!=fO)) goto L_007b5110;
L_007b50c5:; BB(0x007b50c5);
    /* 007b50c5: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b50ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b50cc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b50cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b50d1: jle 0x7b50f9 */ if ((fZ||fS!=fO)) goto L_007b50f9;
L_007b50d3:; BB(0x007b50d3);
    /* 007b50d3: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 007b50d6: mov edi, ecx */ r_edi = r_ecx;
    /* 007b50d8: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007b50db: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b50dd: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007b50df: mov edi, dword ptr [ecx*4 + 0xaad720] */ r_edi = R32((u32)(r_ecx*4+0xaad720u));
    /* 007b50e6: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b50ea: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b50ec: jge 0x7b50f3 */ if ((fS==fO)) goto L_007b50f3;
L_007b50ee:; BB(0x007b50ee);
    /* 007b50ee: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 007b50f1: jmp 0x7b50f5 */ goto L_007b50f5;
L_007b50f3:; BB(0x007b50f3);
    /* 007b50f3: mov eax, ecx */ r_eax = r_ecx;
L_007b50f5:; BB(0x007b50f5);
    /* 007b50f5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b50f7: jl 0x7b50d3 */ if ((fS!=fO)) goto L_007b50d3;
L_007b50f9:; BB(0x007b50f9);
    /* 007b50f9: mov eax, dword ptr [edx*4 + 0xaad720] */ r_eax = R32((u32)(r_edx*4+0xaad720u));
    /* 007b5100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5102: je 0x7b510c */ if (fZ) goto L_007b510c;
L_007b5104:; BB(0x007b5104);
    /* 007b5104: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007b5108: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b510a: je 0x7b5117 */ if (fZ) goto L_007b5117;
L_007b510c:; BB(0x007b510c);
    /* 007b510c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b510e: jmp 0x7b5117 */ goto L_007b5117;
L_007b5110:; BB(0x007b5110);
    /* 007b5110: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5111: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b5116u); f_0068d5a8();
    /* 007b5116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007b5117:; BB(0x007b5117);
    /* 007b5117: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5119: je 0x7b5192 */ if (fZ) goto L_007b5192;
L_007b511b:; BB(0x007b511b);
    /* 007b511b: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 007b5121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5123: je 0x7b514d */ if (fZ) goto L_007b514d;
L_007b5125:; BB(0x007b5125);
    /* 007b5125: movsx ecx, word ptr [edx + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 007b5129: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007b512b: jl 0x7b514d */ if ((fS!=fO)) goto L_007b514d;
L_007b512d:; BB(0x007b512d);
    /* 007b512d: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5133: jg 0x7b514d */ if ((!fZ&&fS==fO)) goto L_007b514d;
L_007b5135:; BB(0x007b5135);
    /* 007b5135: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 007b513b: movzx esi, word ptr [edi + ecx*4] */ r_esi = (u32)R16((u32)(r_edi+r_ecx*4));
    /* 007b513f: mov word ptr [esp], si */ W16((u32)(r_esp), (u16)r_esi);
    /* 007b5143: movzx esi, word ptr [edi + ecx*4 + 2] */ r_esi = (u32)R16((u32)(r_edi+r_ecx*4+0x2u));
    /* 007b5148: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
L_007b514d:; BB(0x007b514d);
    /* 007b514d: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 007b5150: mov word ptr [esp], bp */ W16((u32)(r_esp), (u16)r_ebp);
    /* 007b5154: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5156: je 0x7b5180 */ if (fZ) goto L_007b5180;
L_007b5158:; BB(0x007b5158);
    /* 007b5158: movsx edi, word ptr [edx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 007b515c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007b515e: jl 0x7b5180 */ if ((fS!=fO)) goto L_007b5180;
L_007b5160:; BB(0x007b5160);
    /* 007b5160: cmp edi, 0xb9f */ {  u32 a = r_edi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5166: jg 0x7b5180 */ if ((!fZ&&fS==fO)) goto L_007b5180;
L_007b5168:; BB(0x007b5168);
    /* 007b5168: mov esi, dword ptr [0xab02bc] */ r_esi = R32((u32)(0xab02bcu));
    /* 007b516e: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 007b5172: mov word ptr [esi + edi*4], dx */ W16((u32)(r_esi+r_edi*4), (u16)r_edx);
    /* 007b5176: movzx ebp, word ptr [esp + 2] */ r_ebp = (u32)R16((u32)(r_esp+0x2u));
    /* 007b517b: mov word ptr [esi + edi*4 + 2], bp */ W16((u32)(r_esi+r_edi*4+0x2u), (u16)r_ebp);
L_007b5180:; BB(0x007b5180);
    /* 007b5180: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b5183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b5185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5186: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 007b5188: mov ecx, eax */ r_ecx = r_eax;
    /* 007b518a: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x7b518du); call_ind(t); }
L_007b518d:; BB(0x007b518d);
    /* 007b518d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b518e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b518f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b5190: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b5191: ret  */ FN_RET(0x007b50a8); r_esp += 4; return;
L_007b5192:; BB(0x007b5192);
    /* 007b5192: mov esi, dword ptr [0xab02bc] */ r_esi = R32((u32)(0xab02bcu));
    /* 007b5198: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b519b: movzx ecx, word ptr [esi + eax*4 + 2] */ r_ecx = (u32)R16((u32)(r_esi+r_eax*4+0x2u));
    /* 007b51a0: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 007b51a3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007b51a6: cmp eax, 0xb9f */ {  u32 a = r_eax; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b51ab: jg 0x7b518d */ if ((!fZ&&fS==fO)) goto L_007b518d;
L_007b51ad:; BB(0x007b51ad);
    /* 007b51ad: mov word ptr [esi + eax*4], dx */ W16((u32)(r_esi+r_eax*4), (u16)r_edx);
    /* 007b51b1: mov word ptr [esi + eax*4 + 2], cx */ W16((u32)(r_esi+r_eax*4+0x2u), (u16)r_ecx);
    /* 007b51b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b51b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b51b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b51b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b51ba: ret  */ FN_RET(0x007b50a8); r_esp += 4; return;
L_007b51bb:; BB(0x007b51bb);
    /* 007b51bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b51bd: jmp 0x7b5117 */ goto L_007b5117;
}

void f_007b51c4(void) /* sub_7B51C4 */
{
    FN_ENTER(0x007b51c4);
    /* 007b51c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b51c6: mov dword ptr [0xaad6e0], eax */ W32((u32)(0xaad6e0u), r_eax);
    /* 007b51cb: mov dword ptr [0xaad6e4], eax */ W32((u32)(0xaad6e4u), r_eax);
    /* 007b51d0: mov dword ptr [0xaad6e8], eax */ W32((u32)(0xaad6e8u), r_eax);
    /* 007b51d5: mov dword ptr [0xaad6ec], eax */ W32((u32)(0xaad6ecu), r_eax);
    /* 007b51da: mov dword ptr [0xaad6f0], eax */ W32((u32)(0xaad6f0u), r_eax);
    /* 007b51df: mov dword ptr [0xaad6f4], eax */ W32((u32)(0xaad6f4u), r_eax);
    /* 007b51e4: mov dword ptr [0xaad6f8], eax */ W32((u32)(0xaad6f8u), r_eax);
    /* 007b51e9: mov dword ptr [0xaad6fc], eax */ W32((u32)(0xaad6fcu), r_eax);
    /* 007b51ee: mov dword ptr [0xaad700], eax */ W32((u32)(0xaad700u), r_eax);
    /* 007b51f3: mov dword ptr [0xaad704], eax */ W32((u32)(0xaad704u), r_eax);
    /* 007b51f8: mov dword ptr [0xaad708], eax */ W32((u32)(0xaad708u), r_eax);
    /* 007b51fd: mov dword ptr [0xaad70c], eax */ W32((u32)(0xaad70cu), r_eax);
    /* 007b5202: mov dword ptr [0xaad710], eax */ W32((u32)(0xaad710u), r_eax);
    /* 007b5207: mov dword ptr [0xaad714], eax */ W32((u32)(0xaad714u), r_eax);
    /* 007b520c: mov dword ptr [0xaad718], eax */ W32((u32)(0xaad718u), r_eax);
    /* 007b5211: mov dword ptr [0xaad71c], eax */ W32((u32)(0xaad71cu), r_eax);
    /* 007b5216: ret  */ FN_RET(0x007b51c4); r_esp += 4; return;
}

void f_007b5218(void) /* sub_7B5218 */
{
    FN_ENTER(0x007b5218);
    /* 007b5218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5219: mov eax, ecx */ r_eax = r_ecx;
    /* 007b521b: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 007b5221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5223: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007b5227: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b522b: je 0x7b525b */ if (fZ) goto L_007b525b;
L_007b522d:; BB(0x007b522d);
    /* 007b522d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b522f: je 0x7b525b */ if (fZ) goto L_007b525b;
L_007b5231:; BB(0x007b5231);
    /* 007b5231: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007b5234: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b5236: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b5238: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b523a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b523c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b523e: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 007b5242: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 007b5244: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 007b5248: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 007b524b: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 007b524f: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 007b5252: mov eax, 1 */ r_eax = 0x1u;
    /* 007b5257: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b5258: ret 8 */ FN_RET(0x007b5218); r_esp += 12; return;
L_007b525b:; BB(0x007b525b);
    /* 007b525b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b525d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b525e: ret 8 */ FN_RET(0x007b5218); r_esp += 12; return;
}

void f_007b5264(void) /* sub_7B5264 */
{
    FN_ENTER(0x007b5264);
    /* 007b5264: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007b5268: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 007b526e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b5270: je 0x7b5286 */ if (fZ) goto L_007b5286;
L_007b5272:; BB(0x007b5272);
    /* 007b5272: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007b5275: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5277: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5279: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b527b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b527d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b527f: fld dword ptr [edx + ecx*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4+0xcu)));
    /* 007b5283: ret 4 */ FN_RET(0x007b5264); r_esp += 8; return;
L_007b5286:; BB(0x007b5286);
    /* 007b5286: fld dword ptr [0x97e3e0] */ FPUSH(R_F32((u32)(0x97e3e0u)));
    /* 007b528c: ret 4 */ FN_RET(0x007b5264); r_esp += 8; return;
}

void f_007b5290(void) /* sub_7B5290 */
{
    FN_ENTER(0x007b5290);
    /* 007b5290: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007b5294: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 007b529a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b529c: je 0x7b52be */ if (fZ) goto L_007b52be;
L_007b529e:; BB(0x007b529e);
    /* 007b529e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007b52a1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b52a3: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b52a5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b52a7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b52a9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b52ab: mov edx, dword ptr [edx + ecx*4 + 0x18] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 007b52af: test dword ptr [esp + 8], edx */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b52b3: mov eax, 0 */ r_eax = 0x0u;
    /* 007b52b8: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007b52bb: ret 8 */ FN_RET(0x007b5290); r_esp += 12; return;
L_007b52be:; BB(0x007b52be);
    /* 007b52be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b52c0: ret 8 */ FN_RET(0x007b5290); r_esp += 12; return;
}

void f_007b52c4(void) /* sub_7B52C4 */
{
    FN_ENTER(0x007b52c4);
    /* 007b52c4: mov eax, ecx */ r_eax = r_ecx;
    /* 007b52c6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007b52ca: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 007b52d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b52d2: je 0x7b52e9 */ if (fZ) goto L_007b52e9;
L_007b52d4:; BB(0x007b52d4);
    /* 007b52d4: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007b52d7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b52d9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b52db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b52dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b52df: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b52e1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007b52e5: or dword ptr [eax + edx*4 + 0x18], ecx */ { u32 ad = (u32)(r_eax+r_edx*4+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007b52e9:; BB(0x007b52e9);
    /* 007b52e9: ret 8 */ FN_RET(0x007b52c4); r_esp += 12; return;
}

void f_007b52ec(void) /* sub_7B52EC */
{
    FN_ENTER(0x007b52ec);
    /* 007b52ec: mov eax, ecx */ r_eax = r_ecx;
    /* 007b52ee: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007b52f2: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 007b52f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b52fa: je 0x7b5313 */ if (fZ) goto L_007b5313;
L_007b52fc:; BB(0x007b52fc);
    /* 007b52fc: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007b52ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b5301: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b5303: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b5305: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b5307: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b5309: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007b530d: not ecx */ r_ecx = ~r_ecx;
    /* 007b530f: and dword ptr [eax + edx*4 + 0x18], ecx */ { u32 ad = (u32)(r_eax+r_edx*4+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007b5313:; BB(0x007b5313);
    /* 007b5313: ret 8 */ FN_RET(0x007b52ec); r_esp += 12; return;
}

void f_007b5318(void) /* sub_7B5318 */
{
    FN_ENTER(0x007b5318);
    /* 007b5318: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5319: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b531a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b531b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b531c: sub esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b5322: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5324: mov ebx, eax */ r_ebx = r_eax;
    /* 007b5326: jmp 0x7b532e */ goto L_007b532e;
L_007b5328:; BB(0x007b5328);
    /* 007b5328: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007b532b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_007b532e:; BB(0x007b532e);
    /* 007b532e: cmp ebx, dword ptr [esp + 0x3dc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x3dcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5335: jge 0x7b6283 */ if ((fS==fO)) goto L_007b6283;
L_007b533b:; BB(0x007b533b);
    /* 007b533b: mov ebp, dword ptr [esp + 0x3d8] */ r_ebp = R32((u32)(r_esp+0x3d8u));
    /* 007b5342: mov edx, dword ptr [esp + 0x3e0] */ r_edx = R32((u32)(r_esp+0x3e0u));
    /* 007b5349: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b5350: mov edx, dword ptr [esp + 0x3e4] */ r_edx = R32((u32)(r_esp+0x3e4u));
    /* 007b5357: mov dword ptr [esp + 0x1a8], edx */ W32((u32)(r_esp+0x1a8u), r_edx);
    /* 007b535e: mov edx, dword ptr [esp + 0x3e8] */ r_edx = R32((u32)(r_esp+0x3e8u));
    /* 007b5365: mov dword ptr [esp + 0x1ac], edx */ W32((u32)(r_esp+0x1acu), r_edx);
    /* 007b536c: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007b536f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5371: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007b5373: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5375: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5377: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007b5379: mov edi, dword ptr [ebp + esi*4 + 0x18] */ r_edi = R32((u32)(r_ebp+r_esi*4+0x18u));
    /* 007b537d: mov edx, dword ptr [ebp + esi*4] */ r_edx = R32((u32)(r_ebp+r_esi*4));
    /* 007b5381: mov dword ptr [esp + 0x1b0], edx */ W32((u32)(r_esp+0x1b0u), r_edx);
    /* 007b5388: mov edx, dword ptr [ebp + esi*4 + 4] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x4u));
    /* 007b538c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b5391: mov dword ptr [esp + 0x1b4], edx */ W32((u32)(r_esp+0x1b4u), r_edx);
    /* 007b5398: mov edx, dword ptr [ebp + esi*4 + 8] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x8u));
    /* 007b539c: mov dword ptr [esp + 0x1b8], edx */ W32((u32)(r_esp+0x1b8u), r_edx);
    /* 007b53a3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b53a8u); f_0082d990();
    /* 007b53a8: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b53af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b53b1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b53b6u); f_0082d8bc();
    /* 007b53b6: lea ecx, [esp + 0x1b0] */ r_ecx = (u32)(r_esp+0x1b0u);
    /* 007b53bd: lea edx, [esp + 0x1b0] */ r_edx = (u32)(r_esp+0x1b0u);
    /* 007b53c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b53c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b53c6: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b53cbu); f_0083a610();
    /* 007b53cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b53ce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b53d3u); f_0082da80();
    /* 007b53d3: lea ecx, [esp + 0x1a4] */ r_ecx = (u32)(r_esp+0x1a4u);
    /* 007b53da: lea edx, [esp + 0x1b0] */ r_edx = (u32)(r_esp+0x1b0u);
    /* 007b53e1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b53e6u); f_0082ebac();
    /* 007b53e6: mov edx, dword ptr [esp + 0x1a4] */ r_edx = R32((u32)(r_esp+0x1a4u));
    /* 007b53ed: mov ecx, dword ptr [esp + 0x1a8] */ r_ecx = R32((u32)(r_esp+0x1a8u));
    /* 007b53f4: mov dword ptr [ebp + esi*4 + 0x1c], edx */ W32((u32)(r_ebp+r_esi*4+0x1cu), r_edx);
    /* 007b53f8: mov edx, dword ptr [esp + 0x1ac] */ r_edx = R32((u32)(r_esp+0x1acu));
    /* 007b53ff: mov dword ptr [ebp + esi*4 + 0x20], ecx */ W32((u32)(r_ebp+r_esi*4+0x20u), r_ecx);
    /* 007b5403: mov ecx, dword ptr [esp + 0x3f4] */ r_ecx = R32((u32)(r_esp+0x3f4u));
    /* 007b540a: mov dword ptr [ebp + esi*4 + 0x24], edx */ W32((u32)(r_ebp+r_esi*4+0x24u), r_edx);
    /* 007b540e: mov edx, dword ptr [esp + 0x3e0] */ r_edx = R32((u32)(r_esp+0x3e0u));
    /* 007b5415: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b541c: mov edx, dword ptr [esp + 0x3e4] */ r_edx = R32((u32)(r_esp+0x3e4u));
    /* 007b5423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5425: mov dword ptr [esp + 0x1a8], edx */ W32((u32)(r_esp+0x1a8u), r_edx);
    /* 007b542c: mov edx, dword ptr [esp + 0x3e8] */ r_edx = R32((u32)(r_esp+0x3e8u));
    /* 007b5433: mov dword ptr [esp + 0x1ac], edx */ W32((u32)(r_esp+0x1acu), r_edx);
    /* 007b543a: mov edx, edi */ r_edx = r_edi;
    /* 007b543c: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b543f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b5443: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007b5447: mov esi, eax */ r_esi = r_eax;
    /* 007b5449: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007b544c: mov eax, ecx */ r_eax = r_ecx;
L_007b544e:; BB(0x007b544e);
    /* 007b544e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5450: jge 0x7b5328 */ if ((fS==fO)) goto L_007b5328;
L_007b5456:; BB(0x007b5456);
    /* 007b5456: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 007b5459: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545b: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5461: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5463: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 007b5467: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b5469: add ebx, dword ptr [esp + 0x3f0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x3f0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b5470: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 007b5473: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5475: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5477: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b547a: je 0x7b6254 */ if (fZ) goto L_007b6254;
L_007b5480:; BB(0x007b5480);
    /* 007b5480: test cl, 6 */ {  u32 a = (u8)r_ecx; u32 b = 0x6u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b5483: je 0x7b6254 */ if (fZ) goto L_007b6254;
L_007b5489:; BB(0x007b5489);
    /* 007b5489: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007b548d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b548f: je 0x7b549d */ if (fZ) goto L_007b549d;
L_007b5491:; BB(0x007b5491);
    /* 007b5491: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5497: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b549d:; BB(0x007b549d);
    /* 007b549d: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54a0: je 0x7b54ae */ if (fZ) goto L_007b54ae;
L_007b54a2:; BB(0x007b54a2);
    /* 007b54a2: test edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54a8: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54ae:; BB(0x007b54ae);
    /* 007b54ae: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54b4: je 0x7b54c2 */ if (fZ) goto L_007b54c2;
L_007b54b6:; BB(0x007b54b6);
    /* 007b54b6: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54bc: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54c2:; BB(0x007b54c2);
    /* 007b54c2: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54c5: je 0x7b54d3 */ if (fZ) goto L_007b54d3;
L_007b54c7:; BB(0x007b54c7);
    /* 007b54c7: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54cd: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54d3:; BB(0x007b54d3);
    /* 007b54d3: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54d9: je 0x7b54e7 */ if (fZ) goto L_007b54e7;
L_007b54db:; BB(0x007b54db);
    /* 007b54db: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54e1: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54e7:; BB(0x007b54e7);
    /* 007b54e7: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54ea: je 0x7b54f8 */ if (fZ) goto L_007b54f8;
L_007b54ec:; BB(0x007b54ec);
    /* 007b54ec: test edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54f2: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54f8:; BB(0x007b54f8);
    /* 007b54f8: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54fe: je 0x7b550c */ if (fZ) goto L_007b550c;
L_007b5500:; BB(0x007b5500);
    /* 007b5500: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5506: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b550c:; BB(0x007b550c);
    /* 007b550c: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b550f: je 0x7b551d */ if (fZ) goto L_007b551d;
L_007b5511:; BB(0x007b5511);
    /* 007b5511: test edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5517: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b551d:; BB(0x007b551d);
    /* 007b551d: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5523: je 0x7b5531 */ if (fZ) goto L_007b5531;
L_007b5525:; BB(0x007b5525);
    /* 007b5525: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b552b: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b5531:; BB(0x007b5531);
    /* 007b5531: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5537: je 0x7b5545 */ if (fZ) goto L_007b5545;
L_007b5539:; BB(0x007b5539);
    /* 007b5539: test edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b553f: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b5545:; BB(0x007b5545);
    /* 007b5545: mov edx, dword ptr [esp + 0x3f8] */ r_edx = R32((u32)(r_esp+0x3f8u));
    /* 007b554c: mov ecx, dword ptr [esp + 0x3f0] */ r_ecx = R32((u32)(r_esp+0x3f0u));
    /* 007b5553: mov dword ptr [esp + 0x1bc], edx */ W32((u32)(r_esp+0x1bcu), r_edx);
    /* 007b555a: mov edx, dword ptr [esp + 0x3fc] */ r_edx = R32((u32)(r_esp+0x3fcu));
    /* 007b5561: mov dword ptr [esp + 0x1c0], edx */ W32((u32)(r_esp+0x1c0u), r_edx);
    /* 007b5568: mov edx, dword ptr [esp + 0x400] */ r_edx = R32((u32)(r_esp+0x400u));
    /* 007b556f: mov dword ptr [esp + 0x1c4], edx */ W32((u32)(r_esp+0x1c4u), r_edx);
    /* 007b5576: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
    /* 007b5579: mov dword ptr [esp + 0x1c8], edx */ W32((u32)(r_esp+0x1c8u), r_edx);
    /* 007b5580: mov edx, dword ptr [ecx + ebp*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 007b5584: mov dword ptr [esp + 0x1cc], edx */ W32((u32)(r_esp+0x1ccu), r_edx);
    /* 007b558b: mov edx, dword ptr [ecx + ebp*4 + 8] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 007b558f: mov dword ptr [esp + 0x1d0], edx */ W32((u32)(r_esp+0x1d0u), r_edx);
    /* 007b5596: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b559b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b55a0u); f_0082d990();
    /* 007b55a0: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b55a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b55a9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b55aeu); f_0082d8bc();
    /* 007b55ae: lea ecx, [esp + 0x1c8] */ r_ecx = (u32)(r_esp+0x1c8u);
    /* 007b55b5: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 007b55bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b55bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b55be: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b55c3u); f_0083a610();
    /* 007b55c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b55c6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b55cbu); f_0082da80();
    /* 007b55cb: lea ecx, [esp + 0x1bc] */ r_ecx = (u32)(r_esp+0x1bcu);
    /* 007b55d2: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 007b55d9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b55deu); f_0082ebac();
    /* 007b55de: mov ecx, dword ptr [esp + 0x1bc] */ r_ecx = R32((u32)(r_esp+0x1bcu));
    /* 007b55e5: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b55ec: mov eax, dword ptr [esp + 0x1c4] */ r_eax = R32((u32)(r_esp+0x1c4u));
    /* 007b55f3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007b55f7: mov dword ptr [edx + ebp*4 + 0x1c], ecx */ W32((u32)(r_edx+r_ebp*4+0x1cu), r_ecx);
    /* 007b55fb: mov ecx, dword ptr [esp + 0x1c0] */ r_ecx = R32((u32)(r_esp+0x1c0u));
    /* 007b5602: mov dword ptr [edx + ebp*4 + 0x20], ecx */ W32((u32)(r_edx+r_ebp*4+0x20u), r_ecx);
    /* 007b5606: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007b560a: mov dword ptr [edx + ebp*4 + 0x24], eax */ W32((u32)(r_edx+r_ebp*4+0x24u), r_eax);
    /* 007b560e: mov edx, dword ptr [esp + 0x3f8] */ r_edx = R32((u32)(r_esp+0x3f8u));
    /* 007b5615: mov dword ptr [esp + 0x1bc], edx */ W32((u32)(r_esp+0x1bcu), r_edx);
    /* 007b561c: mov edx, dword ptr [esp + 0x3fc] */ r_edx = R32((u32)(r_esp+0x3fcu));
    /* 007b5623: mov dword ptr [esp + 0x1c0], edx */ W32((u32)(r_esp+0x1c0u), r_edx);
    /* 007b562a: mov edx, dword ptr [esp + 0x400] */ r_edx = R32((u32)(r_esp+0x400u));
    /* 007b5631: mov dword ptr [esp + 0x1c4], edx */ W32((u32)(r_esp+0x1c4u), r_edx);
    /* 007b5638: mov edx, dword ptr [esp + 0x3d8] */ r_edx = R32((u32)(r_esp+0x3d8u));
    /* 007b563f: mov edx, dword ptr [edx + ecx*4 + 0x14] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 007b5643: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5646: jne 0x7b5f0e */ if (!fZ) goto L_007b5f0e;
L_007b564c:; BB(0x007b564c);
    /* 007b564c: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5653: mov ecx, dword ptr [edx + ebp*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x14u));
    /* 007b5657: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b565a: jne 0x7b5bf2 */ if (!fZ) goto L_007b5bf2;
L_007b5660:; BB(0x007b5660);
    /* 007b5660: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5667: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b566b: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 007b566f: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 007b5673: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 007b5677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5679: fchs  */ ST(0) = -ST(0);
    /* 007b567b: mov dword ptr [esp + 0x2ec], eax */ W32((u32)(r_esp+0x2ecu), r_eax);
    /* 007b5682: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 007b5686: mov dword ptr [esp + 0x2f4], eax */ W32((u32)(r_esp+0x2f4u), r_eax);
    /* 007b568d: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 007b5691: mov edx, dword ptr [ecx + edx*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 007b5695: fst dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0));
    /* 007b569c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b569e: fchs  */ ST(0) = -ST(0);
    /* 007b56a0: mov dword ptr [esp + 0xec], edx */ W32((u32)(r_esp+0xecu), r_edx);
    /* 007b56a7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b56ac: mov dword ptr [esp + 0x2f0], 0 */ W32((u32)(r_esp+0x2f0u), 0x0u);
    /* 007b56b7: mov dword ptr [esp + 0xe8], 0x42480000 */ W32((u32)(r_esp+0xe8u), 0x42480000u);
    /* 007b56c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56c4: fst dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0));
    /* 007b56cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56cd: fst dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0));
    /* 007b56d4: fst dword ptr [esp + 0x104] */ W_F32((u32)(r_esp+0x104u), ST(0));
    /* 007b56db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56dd: fst dword ptr [esp + 0x114] */ W_F32((u32)(r_esp+0x114u), ST(0));
    /* 007b56e4: fstp dword ptr [esp + 0x120] */ W_F32((u32)(r_esp+0x120u), ST(0)); FPOP();
    /* 007b56eb: fst dword ptr [esp + 0x128] */ W_F32((u32)(r_esp+0x128u), ST(0));
    /* 007b56f2: fstp dword ptr [esp + 0x134] */ W_F32((u32)(r_esp+0x134u), ST(0)); FPOP();
    /* 007b56f9: mov dword ptr [esp + 0xf4], 0x42480000 */ W32((u32)(r_esp+0xf4u), 0x42480000u);
    /* 007b5704: mov dword ptr [esp + 0x100], 0x42480000 */ W32((u32)(r_esp+0x100u), 0x42480000u);
    /* 007b570f: mov dword ptr [esp + 0xfc], eax */ W32((u32)(r_esp+0xfcu), r_eax);
    /* 007b5716: mov dword ptr [esp + 0x108], eax */ W32((u32)(r_esp+0x108u), r_eax);
    /* 007b571d: mov dword ptr [esp + 0x10c], 0x42480000 */ W32((u32)(r_esp+0x10cu), 0x42480000u);
    /* 007b5728: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 007b572f: mov dword ptr [esp + 0x118], 0xc2480000 */ W32((u32)(r_esp+0x118u), 0xc2480000u);
    /* 007b573a: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 007b5741: mov dword ptr [esp + 0x124], 0xc2480000 */ W32((u32)(r_esp+0x124u), 0xc2480000u);
    /* 007b574c: mov dword ptr [esp + 0x12c], eax */ W32((u32)(r_esp+0x12cu), r_eax);
    /* 007b5753: mov dword ptr [esp + 0x130], 0xc2480000 */ W32((u32)(r_esp+0x130u), 0xc2480000u);
    /* 007b575e: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 007b5765: mov dword ptr [esp + 0x13c], 0xc2480000 */ W32((u32)(r_esp+0x13cu), 0xc2480000u);
    /* 007b5770: mov dword ptr [esp + 0x140], edx */ W32((u32)(r_esp+0x140u), r_edx);
    /* 007b5777: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b577cu); f_0082d990();
    /* 007b577c: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b5783: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5785: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b578au); f_0082d8bc();
    /* 007b578a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007b578e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5794: mov esi, eax */ r_esi = r_eax;
L_007b5796:; BB(0x007b5796);
    /* 007b5796: lea edx, [esp + 0xe4] */ r_edx = (u32)(r_esp+0xe4u);
    /* 007b579d: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b57a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b57a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b57a2: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b57a7u); f_0083a610();
    /* 007b57a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b57aa: lea edx, [esp + 0x2ec] */ r_edx = (u32)(r_esp+0x2ecu);
    /* 007b57b1: mov ecx, edi */ r_ecx = r_edi;
    /* 007b57b3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b57b8u); f_0082ebac();
    /* 007b57b8: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b57bb: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b57be: jl 0x7b5796 */ if ((fS!=fO)) goto L_007b5796;
L_007b57c0:; BB(0x007b57c0);
    /* 007b57c0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b57c4: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b57c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b57cdu); f_0082da80();
    /* 007b57cd: mov edx, dword ptr [esp + 0xe4] */ r_edx = R32((u32)(r_esp+0xe4u));
    /* 007b57d4: mov ecx, dword ptr [esp + 0xe8] */ r_ecx = R32((u32)(r_esp+0xe8u));
    /* 007b57db: mov dword ptr [esp + 0x2f8], edx */ W32((u32)(r_esp+0x2f8u), r_edx);
    /* 007b57e2: mov edx, dword ptr [esp + 0xec] */ r_edx = R32((u32)(r_esp+0xecu));
    /* 007b57e9: mov dword ptr [esp + 0x2fc], ecx */ W32((u32)(r_esp+0x2fcu), r_ecx);
    /* 007b57f0: mov dword ptr [esp + 0x300], edx */ W32((u32)(r_esp+0x300u), r_edx);
    /* 007b57f7: mov edx, dword ptr [esp + 0xf0] */ r_edx = R32((u32)(r_esp+0xf0u));
    /* 007b57fe: mov dword ptr [esp + 0x304], edx */ W32((u32)(r_esp+0x304u), r_edx);
    /* 007b5805: mov edx, dword ptr [esp + 0xf4] */ r_edx = R32((u32)(r_esp+0xf4u));
    /* 007b580c: mov dword ptr [esp + 0x308], edx */ W32((u32)(r_esp+0x308u), r_edx);
    /* 007b5813: mov edx, dword ptr [esp + 0xf8] */ r_edx = R32((u32)(r_esp+0xf8u));
    /* 007b581a: mov dword ptr [esp + 0x30c], edx */ W32((u32)(r_esp+0x30cu), r_edx);
    /* 007b5821: mov edx, dword ptr [esp + 0xfc] */ r_edx = R32((u32)(r_esp+0xfcu));
    /* 007b5828: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 007b582f: mov edx, dword ptr [esp + 0x100] */ r_edx = R32((u32)(r_esp+0x100u));
    /* 007b5836: mov dword ptr [esp + 0x314], edx */ W32((u32)(r_esp+0x314u), r_edx);
    /* 007b583d: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 007b5844: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 007b584b: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 007b5852: mov dword ptr [esp + 0x31c], edx */ W32((u32)(r_esp+0x31cu), r_edx);
    /* 007b5859: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 007b5860: mov dword ptr [esp + 0x320], edx */ W32((u32)(r_esp+0x320u), r_edx);
    /* 007b5867: mov edx, dword ptr [esp + 0x110] */ r_edx = R32((u32)(r_esp+0x110u));
    /* 007b586e: mov dword ptr [esp + 0x324], edx */ W32((u32)(r_esp+0x324u), r_edx);
    /* 007b5875: mov edx, dword ptr [esp + 0x114] */ r_edx = R32((u32)(r_esp+0x114u));
    /* 007b587c: mov dword ptr [esp + 0x328], edx */ W32((u32)(r_esp+0x328u), r_edx);
    /* 007b5883: mov edx, dword ptr [esp + 0x118] */ r_edx = R32((u32)(r_esp+0x118u));
    /* 007b588a: mov dword ptr [esp + 0x32c], edx */ W32((u32)(r_esp+0x32cu), r_edx);
    /* 007b5891: mov edx, dword ptr [esp + 0x11c] */ r_edx = R32((u32)(r_esp+0x11cu));
    /* 007b5898: mov dword ptr [esp + 0x330], edx */ W32((u32)(r_esp+0x330u), r_edx);
    /* 007b589f: mov edx, dword ptr [esp + 0x120] */ r_edx = R32((u32)(r_esp+0x120u));
    /* 007b58a6: mov dword ptr [esp + 0x334], edx */ W32((u32)(r_esp+0x334u), r_edx);
    /* 007b58ad: mov edx, dword ptr [esp + 0x124] */ r_edx = R32((u32)(r_esp+0x124u));
    /* 007b58b4: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 007b58bb: mov edx, dword ptr [esp + 0x128] */ r_edx = R32((u32)(r_esp+0x128u));
    /* 007b58c2: mov dword ptr [esp + 0x33c], edx */ W32((u32)(r_esp+0x33cu), r_edx);
    /* 007b58c9: mov edx, dword ptr [esp + 0x12c] */ r_edx = R32((u32)(r_esp+0x12cu));
    /* 007b58d0: mov dword ptr [esp + 0x340], edx */ W32((u32)(r_esp+0x340u), r_edx);
    /* 007b58d7: mov edx, dword ptr [esp + 0x130] */ r_edx = R32((u32)(r_esp+0x130u));
    /* 007b58de: mov dword ptr [esp + 0x344], edx */ W32((u32)(r_esp+0x344u), r_edx);
    /* 007b58e5: mov edx, dword ptr [esp + 0x134] */ r_edx = R32((u32)(r_esp+0x134u));
    /* 007b58ec: mov dword ptr [esp + 0x348], edx */ W32((u32)(r_esp+0x348u), r_edx);
    /* 007b58f3: mov edx, dword ptr [esp + 0x138] */ r_edx = R32((u32)(r_esp+0x138u));
    /* 007b58fa: mov dword ptr [esp + 0x34c], edx */ W32((u32)(r_esp+0x34cu), r_edx);
    /* 007b5901: mov edx, dword ptr [esp + 0x13c] */ r_edx = R32((u32)(r_esp+0x13cu));
    /* 007b5908: mov dword ptr [esp + 0x350], edx */ W32((u32)(r_esp+0x350u), r_edx);
    /* 007b590f: mov edx, dword ptr [esp + 0x140] */ r_edx = R32((u32)(r_esp+0x140u));
    /* 007b5916: mov dword ptr [esp + 0x354], edx */ W32((u32)(r_esp+0x354u), r_edx);
    /* 007b591d: mov eax, dword ptr [esp + 0x3f0] */ r_eax = R32((u32)(r_esp+0x3f0u));
    /* 007b5924: mov edx, dword ptr [eax + ebp*4 + 0x1c] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x1cu));
    /* 007b5928: fld dword ptr [eax + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4+0x10u)));
    /* 007b592c: fld dword ptr [eax + ebp*4 + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4+0xcu)));
    /* 007b5930: mov dword ptr [esp + 0x358], edx */ W32((u32)(r_esp+0x358u), r_edx);
    /* 007b5937: mov edx, dword ptr [eax + ebp*4 + 0x24] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x24u));
    /* 007b593b: mov dword ptr [esp + 0x35c], 0 */ W32((u32)(r_esp+0x35cu), 0x0u);
    /* 007b5946: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5948: fchs  */ ST(0) = -ST(0);
    /* 007b594a: mov dword ptr [esp + 0x360], edx */ W32((u32)(r_esp+0x360u), r_edx);
    /* 007b5951: mov edx, dword ptr [eax + ebp*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x10u));
    /* 007b5955: mov ebp, dword ptr [eax + ebp*4 + 0xc] */ r_ebp = R32((u32)(r_eax+r_ebp*4+0xcu));
    /* 007b5959: fst dword ptr [esp + 0x144] */ W_F32((u32)(r_esp+0x144u), ST(0));
    /* 007b5960: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5962: fchs  */ ST(0) = -ST(0);
    /* 007b5964: mov dword ptr [esp + 0x148], 0x42480000 */ W32((u32)(r_esp+0x148u), 0x42480000u);
    /* 007b596f: fst dword ptr [esp + 0x158] */ W_F32((u32)(r_esp+0x158u), ST(0));
    /* 007b5976: fst dword ptr [esp + 0x164] */ W_F32((u32)(r_esp+0x164u), ST(0));
    /* 007b597d: fst dword ptr [esp + 0x188] */ W_F32((u32)(r_esp+0x188u), ST(0));
    /* 007b5984: fstp dword ptr [esp + 0x194] */ W_F32((u32)(r_esp+0x194u), ST(0)); FPOP();
    /* 007b598b: mov dword ptr [esp + 0x14c], ebp */ W32((u32)(r_esp+0x14cu), r_ebp);
    /* 007b5992: fst dword ptr [esp + 0x150] */ W_F32((u32)(r_esp+0x150u), ST(0));
    /* 007b5999: fst dword ptr [esp + 0x174] */ W_F32((u32)(r_esp+0x174u), ST(0));
    /* 007b59a0: fstp dword ptr [esp + 0x180] */ W_F32((u32)(r_esp+0x180u), ST(0)); FPOP();
    /* 007b59a7: mov dword ptr [esp + 0x15c], edx */ W32((u32)(r_esp+0x15cu), r_edx);
    /* 007b59ae: mov dword ptr [esp + 0x154], 0x42480000 */ W32((u32)(r_esp+0x154u), 0x42480000u);
    /* 007b59b9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b59be: mov dword ptr [esp + 0x160], 0x42480000 */ W32((u32)(r_esp+0x160u), 0x42480000u);
    /* 007b59c9: mov dword ptr [esp + 0x168], edx */ W32((u32)(r_esp+0x168u), r_edx);
    /* 007b59d0: mov dword ptr [esp + 0x170], ebp */ W32((u32)(r_esp+0x170u), r_ebp);
    /* 007b59d7: mov dword ptr [esp + 0x16c], 0x42480000 */ W32((u32)(r_esp+0x16cu), 0x42480000u);
    /* 007b59e2: mov dword ptr [esp + 0x178], 0xc2480000 */ W32((u32)(r_esp+0x178u), 0xc2480000u);
    /* 007b59ed: mov dword ptr [esp + 0x17c], ebp */ W32((u32)(r_esp+0x17cu), r_ebp);
    /* 007b59f4: mov dword ptr [esp + 0x18c], edx */ W32((u32)(r_esp+0x18cu), r_edx);
    /* 007b59fb: mov dword ptr [esp + 0x184], 0xc2480000 */ W32((u32)(r_esp+0x184u), 0xc2480000u);
    /* 007b5a06: mov dword ptr [esp + 0x190], 0xc2480000 */ W32((u32)(r_esp+0x190u), 0xc2480000u);
    /* 007b5a11: mov dword ptr [esp + 0x198], edx */ W32((u32)(r_esp+0x198u), r_edx);
    /* 007b5a18: mov dword ptr [esp + 0x1a0], ebp */ W32((u32)(r_esp+0x1a0u), r_ebp);
    /* 007b5a1f: mov dword ptr [esp + 0x19c], 0xc2480000 */ W32((u32)(r_esp+0x19cu), 0xc2480000u);
    /* 007b5a2a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b5a2fu); f_0082d990();
    /* 007b5a2f: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b5a36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5a38: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b5a3du); f_0082d8bc();
    /* 007b5a3d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5a41: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007b5a43:; BB(0x007b5a43);
    /* 007b5a43: lea edx, [esp + 0x144] */ r_edx = (u32)(r_esp+0x144u);
    /* 007b5a4a: lea edi, [edx + ebp] */ r_edi = (u32)(r_edx+r_ebp);
    /* 007b5a4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5a4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5a4f: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b5a54u); f_0083a610();
    /* 007b5a54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5a57: lea edx, [esp + 0x358] */ r_edx = (u32)(r_esp+0x358u);
    /* 007b5a5e: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5a60: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b5a65u); f_0082ebac();
    /* 007b5a65: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5a68: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5a6b: jl 0x7b5a43 */ if ((fS!=fO)) goto L_007b5a43;
L_007b5a6d:; BB(0x007b5a6d);
    /* 007b5a6d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b5a71: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b5a76u); f_0082da80();
    /* 007b5a76: mov edx, dword ptr [esp + 0x144] */ r_edx = R32((u32)(r_esp+0x144u));
    /* 007b5a7d: mov ecx, dword ptr [esp + 0x148] */ r_ecx = R32((u32)(r_esp+0x148u));
    /* 007b5a84: mov ebp, dword ptr [esp + 0x14c] */ r_ebp = R32((u32)(r_esp+0x14cu));
    /* 007b5a8b: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 007b5a92: mov edx, dword ptr [esp + 0x150] */ r_edx = R32((u32)(r_esp+0x150u));
    /* 007b5a99: mov dword ptr [esp + 0x368], ecx */ W32((u32)(r_esp+0x368u), r_ecx);
    /* 007b5aa0: mov dword ptr [esp + 0x36c], ebp */ W32((u32)(r_esp+0x36cu), r_ebp);
    /* 007b5aa7: mov dword ptr [esp + 0x370], edx */ W32((u32)(r_esp+0x370u), r_edx);
    /* 007b5aae: mov edx, dword ptr [esp + 0x154] */ r_edx = R32((u32)(r_esp+0x154u));
    /* 007b5ab5: mov dword ptr [esp + 0x374], edx */ W32((u32)(r_esp+0x374u), r_edx);
    /* 007b5abc: mov edx, dword ptr [esp + 0x158] */ r_edx = R32((u32)(r_esp+0x158u));
    /* 007b5ac3: mov dword ptr [esp + 0x378], edx */ W32((u32)(r_esp+0x378u), r_edx);
    /* 007b5aca: mov edx, dword ptr [esp + 0x15c] */ r_edx = R32((u32)(r_esp+0x15cu));
    /* 007b5ad1: mov dword ptr [esp + 0x37c], edx */ W32((u32)(r_esp+0x37cu), r_edx);
    /* 007b5ad8: mov edx, dword ptr [esp + 0x160] */ r_edx = R32((u32)(r_esp+0x160u));
    /* 007b5adf: mov dword ptr [esp + 0x380], edx */ W32((u32)(r_esp+0x380u), r_edx);
    /* 007b5ae6: mov edx, dword ptr [esp + 0x164] */ r_edx = R32((u32)(r_esp+0x164u));
    /* 007b5aed: mov dword ptr [esp + 0x384], edx */ W32((u32)(r_esp+0x384u), r_edx);
    /* 007b5af4: mov edx, dword ptr [esp + 0x168] */ r_edx = R32((u32)(r_esp+0x168u));
    /* 007b5afb: mov dword ptr [esp + 0x388], edx */ W32((u32)(r_esp+0x388u), r_edx);
    /* 007b5b02: mov edx, dword ptr [esp + 0x16c] */ r_edx = R32((u32)(r_esp+0x16cu));
    /* 007b5b09: mov dword ptr [esp + 0x38c], edx */ W32((u32)(r_esp+0x38cu), r_edx);
    /* 007b5b10: mov edx, dword ptr [esp + 0x170] */ r_edx = R32((u32)(r_esp+0x170u));
    /* 007b5b17: mov dword ptr [esp + 0x390], edx */ W32((u32)(r_esp+0x390u), r_edx);
    /* 007b5b1e: mov edx, dword ptr [esp + 0x174] */ r_edx = R32((u32)(r_esp+0x174u));
    /* 007b5b25: mov dword ptr [esp + 0x394], edx */ W32((u32)(r_esp+0x394u), r_edx);
    /* 007b5b2c: mov edx, dword ptr [esp + 0x178] */ r_edx = R32((u32)(r_esp+0x178u));
    /* 007b5b33: mov dword ptr [esp + 0x398], edx */ W32((u32)(r_esp+0x398u), r_edx);
    /* 007b5b3a: mov edx, dword ptr [esp + 0x17c] */ r_edx = R32((u32)(r_esp+0x17cu));
    /* 007b5b41: mov dword ptr [esp + 0x39c], edx */ W32((u32)(r_esp+0x39cu), r_edx);
    /* 007b5b48: mov edx, dword ptr [esp + 0x180] */ r_edx = R32((u32)(r_esp+0x180u));
    /* 007b5b4f: mov dword ptr [esp + 0x3a0], edx */ W32((u32)(r_esp+0x3a0u), r_edx);
    /* 007b5b56: mov edx, dword ptr [esp + 0x184] */ r_edx = R32((u32)(r_esp+0x184u));
    /* 007b5b5d: mov dword ptr [esp + 0x3a4], edx */ W32((u32)(r_esp+0x3a4u), r_edx);
    /* 007b5b64: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 007b5b6b: mov dword ptr [esp + 0x3a8], edx */ W32((u32)(r_esp+0x3a8u), r_edx);
    /* 007b5b72: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 007b5b79: mov dword ptr [esp + 0x3ac], edx */ W32((u32)(r_esp+0x3acu), r_edx);
    /* 007b5b80: mov edx, dword ptr [esp + 0x190] */ r_edx = R32((u32)(r_esp+0x190u));
    /* 007b5b87: mov dword ptr [esp + 0x3b0], edx */ W32((u32)(r_esp+0x3b0u), r_edx);
    /* 007b5b8e: mov edx, dword ptr [esp + 0x194] */ r_edx = R32((u32)(r_esp+0x194u));
    /* 007b5b95: mov dword ptr [esp + 0x3b4], edx */ W32((u32)(r_esp+0x3b4u), r_edx);
    /* 007b5b9c: mov edx, dword ptr [esp + 0x198] */ r_edx = R32((u32)(r_esp+0x198u));
    /* 007b5ba3: mov dword ptr [esp + 0x3b8], edx */ W32((u32)(r_esp+0x3b8u), r_edx);
    /* 007b5baa: mov edx, dword ptr [esp + 0x19c] */ r_edx = R32((u32)(r_esp+0x19cu));
    /* 007b5bb1: mov dword ptr [esp + 0x3bc], edx */ W32((u32)(r_esp+0x3bcu), r_edx);
    /* 007b5bb8: mov edx, dword ptr [esp + 0x1a0] */ r_edx = R32((u32)(r_esp+0x1a0u));
    /* 007b5bbf: mov dword ptr [esp + 0x3c0], edx */ W32((u32)(r_esp+0x3c0u), r_edx);
    /* 007b5bc6: lea ecx, [esp + 0x2f8] */ r_ecx = (u32)(r_esp+0x2f8u);
    /* 007b5bcd: lea edx, [esp + 0x364] */ r_edx = (u32)(r_esp+0x364u);
    /* 007b5bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5bd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5bd6: call 0x844540 */ r_esp -= 4; W32(r_esp, 0x7b5bdbu); f_00844540();
    /* 007b5bdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5be0: jne 0x7b6276 */ if (!fZ) goto L_007b6276;
L_007b5be6:; BB(0x007b5be6);
    /* 007b5be6: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b5bed: jmp 0x7b6254 */ goto L_007b6254;
L_007b5bf2:; BB(0x007b5bf2);
    /* 007b5bf2: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5bf9: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b5bfd: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 007b5c01: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 007b5c05: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 007b5c09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c0b: fchs  */ ST(0) = -ST(0);
    /* 007b5c0d: mov dword ptr [esp + 0x270], eax */ W32((u32)(r_esp+0x270u), r_eax);
    /* 007b5c14: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 007b5c18: mov dword ptr [esp + 0x278], eax */ W32((u32)(r_esp+0x278u), r_eax);
    /* 007b5c1f: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 007b5c23: mov edx, dword ptr [ecx + edx*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 007b5c27: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 007b5c2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c30: fchs  */ ST(0) = -ST(0);
    /* 007b5c32: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 007b5c39: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b5c3e: mov dword ptr [esp + 0x274], 0 */ W32((u32)(r_esp+0x274u), 0x0u);
    /* 007b5c49: mov dword ptr [esp + 0x88], 0x42480000 */ W32((u32)(r_esp+0x88u), 0x42480000u);
    /* 007b5c54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c56: fst dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0));
    /* 007b5c5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c5f: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 007b5c66: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 007b5c6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c6f: fst dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0));
    /* 007b5c76: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 007b5c7d: fst dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0));
    /* 007b5c84: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 007b5c8b: mov dword ptr [esp + 0x94], 0x42480000 */ W32((u32)(r_esp+0x94u), 0x42480000u);
    /* 007b5c96: mov dword ptr [esp + 0xa0], 0x42480000 */ W32((u32)(r_esp+0xa0u), 0x42480000u);
    /* 007b5ca1: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 007b5ca8: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 007b5caf: mov dword ptr [esp + 0xac], 0x42480000 */ W32((u32)(r_esp+0xacu), 0x42480000u);
    /* 007b5cba: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 007b5cc1: mov dword ptr [esp + 0xb8], 0xc2480000 */ W32((u32)(r_esp+0xb8u), 0xc2480000u);
    /* 007b5ccc: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 007b5cd3: mov dword ptr [esp + 0xc4], 0xc2480000 */ W32((u32)(r_esp+0xc4u), 0xc2480000u);
    /* 007b5cde: mov dword ptr [esp + 0xcc], eax */ W32((u32)(r_esp+0xccu), r_eax);
    /* 007b5ce5: mov dword ptr [esp + 0xd0], 0xc2480000 */ W32((u32)(r_esp+0xd0u), 0xc2480000u);
    /* 007b5cf0: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 007b5cf7: mov dword ptr [esp + 0xdc], 0xc2480000 */ W32((u32)(r_esp+0xdcu), 0xc2480000u);
    /* 007b5d02: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 007b5d09: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b5d0eu); f_0082d990();
    /* 007b5d0e: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b5d15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5d17: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b5d1cu); f_0082d8bc();
    /* 007b5d1c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007b5d20: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5d24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5d26: mov esi, eax */ r_esi = r_eax;
L_007b5d28:; BB(0x007b5d28);
    /* 007b5d28: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 007b5d2f: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b5d32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5d33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5d34: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b5d39u); f_0083a610();
    /* 007b5d39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5d3c: lea edx, [esp + 0x270] */ r_edx = (u32)(r_esp+0x270u);
    /* 007b5d43: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5d45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b5d4au); f_0082ebac();
    /* 007b5d4a: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5d4d: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5d50: jl 0x7b5d28 */ if ((fS!=fO)) goto L_007b5d28;
L_007b5d52:; BB(0x007b5d52);
    /* 007b5d52: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b5d56: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b5d5a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b5d5fu); f_0082da80();
    /* 007b5d5f: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 007b5d66: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 007b5d6d: mov dword ptr [esp + 0x27c], edx */ W32((u32)(r_esp+0x27cu), r_edx);
    /* 007b5d74: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 007b5d7b: mov dword ptr [esp + 0x280], ecx */ W32((u32)(r_esp+0x280u), r_ecx);
    /* 007b5d82: mov dword ptr [esp + 0x284], edx */ W32((u32)(r_esp+0x284u), r_edx);
    /* 007b5d89: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 007b5d90: mov dword ptr [esp + 0x288], edx */ W32((u32)(r_esp+0x288u), r_edx);
    /* 007b5d97: mov edx, dword ptr [esp + 0x94] */ r_edx = R32((u32)(r_esp+0x94u));
    /* 007b5d9e: mov dword ptr [esp + 0x28c], edx */ W32((u32)(r_esp+0x28cu), r_edx);
    /* 007b5da5: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 007b5dac: mov dword ptr [esp + 0x290], edx */ W32((u32)(r_esp+0x290u), r_edx);
    /* 007b5db3: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 007b5dba: mov dword ptr [esp + 0x294], edx */ W32((u32)(r_esp+0x294u), r_edx);
    /* 007b5dc1: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 007b5dc8: mov dword ptr [esp + 0x298], edx */ W32((u32)(r_esp+0x298u), r_edx);
    /* 007b5dcf: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 007b5dd6: mov dword ptr [esp + 0x29c], edx */ W32((u32)(r_esp+0x29cu), r_edx);
    /* 007b5ddd: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 007b5de4: mov dword ptr [esp + 0x2a0], edx */ W32((u32)(r_esp+0x2a0u), r_edx);
    /* 007b5deb: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 007b5df2: mov dword ptr [esp + 0x2a4], edx */ W32((u32)(r_esp+0x2a4u), r_edx);
    /* 007b5df9: mov edx, dword ptr [esp + 0xb0] */ r_edx = R32((u32)(r_esp+0xb0u));
    /* 007b5e00: mov dword ptr [esp + 0x2a8], edx */ W32((u32)(r_esp+0x2a8u), r_edx);
    /* 007b5e07: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 007b5e0e: mov dword ptr [esp + 0x2ac], edx */ W32((u32)(r_esp+0x2acu), r_edx);
    /* 007b5e15: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 007b5e1c: mov dword ptr [esp + 0x2b0], edx */ W32((u32)(r_esp+0x2b0u), r_edx);
    /* 007b5e23: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 007b5e2a: mov dword ptr [esp + 0x2b4], edx */ W32((u32)(r_esp+0x2b4u), r_edx);
    /* 007b5e31: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 007b5e38: mov dword ptr [esp + 0x2b8], edx */ W32((u32)(r_esp+0x2b8u), r_edx);
    /* 007b5e3f: mov edx, dword ptr [esp + 0xc4] */ r_edx = R32((u32)(r_esp+0xc4u));
    /* 007b5e46: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 007b5e4d: mov edx, dword ptr [esp + 0xc8] */ r_edx = R32((u32)(r_esp+0xc8u));
    /* 007b5e54: mov dword ptr [esp + 0x2c0], edx */ W32((u32)(r_esp+0x2c0u), r_edx);
    /* 007b5e5b: mov edx, dword ptr [esp + 0xcc] */ r_edx = R32((u32)(r_esp+0xccu));
    /* 007b5e62: mov dword ptr [esp + 0x2c4], edx */ W32((u32)(r_esp+0x2c4u), r_edx);
    /* 007b5e69: mov edx, dword ptr [esp + 0xd0] */ r_edx = R32((u32)(r_esp+0xd0u));
    /* 007b5e70: mov dword ptr [esp + 0x2c8], edx */ W32((u32)(r_esp+0x2c8u), r_edx);
    /* 007b5e77: mov edx, dword ptr [esp + 0xd4] */ r_edx = R32((u32)(r_esp+0xd4u));
    /* 007b5e7e: mov dword ptr [esp + 0x2cc], edx */ W32((u32)(r_esp+0x2ccu), r_edx);
    /* 007b5e85: mov edx, dword ptr [esp + 0xd8] */ r_edx = R32((u32)(r_esp+0xd8u));
    /* 007b5e8c: mov dword ptr [esp + 0x2d0], edx */ W32((u32)(r_esp+0x2d0u), r_edx);
    /* 007b5e93: mov edx, dword ptr [esp + 0xdc] */ r_edx = R32((u32)(r_esp+0xdcu));
    /* 007b5e9a: mov dword ptr [esp + 0x2d4], edx */ W32((u32)(r_esp+0x2d4u), r_edx);
    /* 007b5ea1: mov edx, dword ptr [esp + 0xe0] */ r_edx = R32((u32)(r_esp+0xe0u));
    /* 007b5ea8: mov dword ptr [esp + 0x2d8], edx */ W32((u32)(r_esp+0x2d8u), r_edx);
    /* 007b5eaf: mov ecx, dword ptr [esp + 0x3f0] */ r_ecx = R32((u32)(r_esp+0x3f0u));
    /* 007b5eb6: mov edx, dword ptr [ecx + ebp*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x1cu));
    /* 007b5eba: mov eax, dword ptr [ecx + ebp*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_ebp*4+0x24u));
    /* 007b5ebe: mov ecx, dword ptr [ecx + ebp*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 007b5ec2: mov dword ptr [esp + 0x2e0], 0 */ W32((u32)(r_esp+0x2e0u), 0x0u);
    /* 007b5ecd: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 007b5ed4: mov dword ptr [esp + 0x2e4], eax */ W32((u32)(r_esp+0x2e4u), r_eax);
    /* 007b5edb: mov dword ptr [esp + 0x2e8], ecx */ W32((u32)(r_esp+0x2e8u), r_ecx);
    /* 007b5ee2: lea ecx, [esp + 0x27c] */ r_ecx = (u32)(r_esp+0x27cu);
    /* 007b5ee9: lea edx, [esp + 0x2dc] */ r_edx = (u32)(r_esp+0x2dcu);
    /* 007b5ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5ef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5ef2: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b5ef7u); f_0083d2fc();
    /* 007b5ef7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5efc: jne 0x7b6290 */ if (!fZ) goto L_007b6290;
L_007b5f02:; BB(0x007b5f02);
    /* 007b5f02: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b5f09: jmp 0x7b6254 */ goto L_007b6254;
L_007b5f0e:; BB(0x007b5f0e);
    /* 007b5f0e: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5f15: mov ecx, dword ptr [edx + ebp*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x14u));
    /* 007b5f19: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5f1c: jne 0x7b61b3 */ if (!fZ) goto L_007b61b3;
L_007b5f22:; BB(0x007b5f22);
    /* 007b5f22: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5f29: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b5f2d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007b5f31: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 007b5f35: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007b5f39: mov edx, dword ptr [ecx + eax*4 + 0x24] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 007b5f3d: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 007b5f41: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b5f45: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007b5f49: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b5f4d: mov dword ptr [esp + 0x1f8], 0 */ W32((u32)(r_esp+0x1f8u), 0x0u);
    /* 007b5f58: mov dword ptr [esp + 0x1f4], ecx */ W32((u32)(r_esp+0x1f4u), r_ecx);
    /* 007b5f5f: mov dword ptr [esp + 0x1fc], edx */ W32((u32)(r_esp+0x1fcu), r_edx);
    /* 007b5f66: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007b5f6a: mov dword ptr [esp + 0x200], edx */ W32((u32)(r_esp+0x200u), r_edx);
    /* 007b5f71: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b5f75: mov dword ptr [esp + 0x204], edx */ W32((u32)(r_esp+0x204u), r_edx);
    /* 007b5f7c: mov dword ptr [esp + 0x20c], eax */ W32((u32)(r_esp+0x20cu), r_eax);
    /* 007b5f83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b5f85: mov dword ptr [esp + 0x208], edx */ W32((u32)(r_esp+0x208u), r_edx);
    /* 007b5f8c: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5f93: fld dword ptr [edx + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0x10u)));
    /* 007b5f97: mov ecx, dword ptr [edx + ebp*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x10u));
    /* 007b5f9b: fld dword ptr [edx + ebp*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0xcu)));
    /* 007b5f9f: mov ebp, dword ptr [edx + ebp*4 + 0xc] */ r_ebp = R32((u32)(r_edx+r_ebp*4+0xcu));
    /* 007b5fa3: mov dword ptr [esp + 0x28], 0x42480000 */ W32((u32)(r_esp+0x28u), 0x42480000u);
    /* 007b5fab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5fad: fchs  */ ST(0) = -ST(0);
    /* 007b5faf: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 007b5fb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5fb5: fchs  */ ST(0) = -ST(0);
    /* 007b5fb7: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007b5fbb: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 007b5fbf: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 007b5fc3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007b5fc7: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 007b5fcb: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 007b5fcf: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 007b5fd3: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b5fd7: mov dword ptr [esp + 0x34], 0x42480000 */ W32((u32)(r_esp+0x34u), 0x42480000u);
    /* 007b5fdf: mov dword ptr [esp + 0x40], 0x42480000 */ W32((u32)(r_esp+0x40u), 0x42480000u);
    /* 007b5fe7: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b5feb: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 007b5fef: mov dword ptr [esp + 0x4c], 0x42480000 */ W32((u32)(r_esp+0x4cu), 0x42480000u);
    /* 007b5ff7: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 007b5ffb: mov dword ptr [esp + 0x58], 0xc2480000 */ W32((u32)(r_esp+0x58u), 0xc2480000u);
    /* 007b6003: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 007b6007: mov dword ptr [esp + 0x64], 0xc2480000 */ W32((u32)(r_esp+0x64u), 0xc2480000u);
    /* 007b600f: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 007b6013: mov dword ptr [esp + 0x70], 0xc2480000 */ W32((u32)(r_esp+0x70u), 0xc2480000u);
    /* 007b601b: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 007b601f: mov dword ptr [esp + 0x7c], 0xc2480000 */ W32((u32)(r_esp+0x7cu), 0xc2480000u);
    /* 007b6027: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b602c: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 007b6033: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b6038u); f_0082d990();
    /* 007b6038: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b603f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6041: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b6046u); f_0082d8bc();
    /* 007b6046: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b604a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007b604c:; BB(0x007b604c);
    /* 007b604c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007b6050: lea edi, [edx + ebp] */ r_edi = (u32)(r_edx+r_ebp);
    /* 007b6053: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6054: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6055: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b605au); f_0083a610();
    /* 007b605a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b605d: lea edx, [esp + 0x204] */ r_edx = (u32)(r_esp+0x204u);
    /* 007b6064: mov ecx, edi */ r_ecx = r_edi;
    /* 007b6066: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b606bu); f_0082ebac();
    /* 007b606b: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b606e: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6071: jl 0x7b604c */ if ((fS!=fO)) goto L_007b604c;
L_007b6073:; BB(0x007b6073);
    /* 007b6073: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b6077: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b607cu); f_0082da80();
    /* 007b607c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007b6080: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007b6084: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 007b6088: mov dword ptr [esp + 0x210], edx */ W32((u32)(r_esp+0x210u), r_edx);
    /* 007b608f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b6093: mov dword ptr [esp + 0x214], ecx */ W32((u32)(r_esp+0x214u), r_ecx);
    /* 007b609a: mov dword ptr [esp + 0x218], ebp */ W32((u32)(r_esp+0x218u), r_ebp);
    /* 007b60a1: mov dword ptr [esp + 0x21c], edx */ W32((u32)(r_esp+0x21cu), r_edx);
    /* 007b60a8: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007b60ac: mov dword ptr [esp + 0x220], edx */ W32((u32)(r_esp+0x220u), r_edx);
    /* 007b60b3: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b60b7: mov dword ptr [esp + 0x224], edx */ W32((u32)(r_esp+0x224u), r_edx);
    /* 007b60be: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007b60c2: mov dword ptr [esp + 0x228], edx */ W32((u32)(r_esp+0x228u), r_edx);
    /* 007b60c9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007b60cd: mov dword ptr [esp + 0x22c], edx */ W32((u32)(r_esp+0x22cu), r_edx);
    /* 007b60d4: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 007b60d8: mov dword ptr [esp + 0x230], edx */ W32((u32)(r_esp+0x230u), r_edx);
    /* 007b60df: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b60e3: mov dword ptr [esp + 0x234], edx */ W32((u32)(r_esp+0x234u), r_edx);
    /* 007b60ea: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b60ee: mov dword ptr [esp + 0x238], edx */ W32((u32)(r_esp+0x238u), r_edx);
    /* 007b60f5: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b60f9: mov dword ptr [esp + 0x23c], edx */ W32((u32)(r_esp+0x23cu), r_edx);
    /* 007b6100: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b6104: mov dword ptr [esp + 0x240], edx */ W32((u32)(r_esp+0x240u), r_edx);
    /* 007b610b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b610f: mov dword ptr [esp + 0x244], edx */ W32((u32)(r_esp+0x244u), r_edx);
    /* 007b6116: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b611a: mov dword ptr [esp + 0x248], edx */ W32((u32)(r_esp+0x248u), r_edx);
    /* 007b6121: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007b6125: mov dword ptr [esp + 0x24c], edx */ W32((u32)(r_esp+0x24cu), r_edx);
    /* 007b612c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 007b6130: mov dword ptr [esp + 0x250], edx */ W32((u32)(r_esp+0x250u), r_edx);
    /* 007b6137: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007b613b: mov dword ptr [esp + 0x254], edx */ W32((u32)(r_esp+0x254u), r_edx);
    /* 007b6142: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 007b6146: mov dword ptr [esp + 0x258], edx */ W32((u32)(r_esp+0x258u), r_edx);
    /* 007b614d: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007b6151: mov dword ptr [esp + 0x25c], edx */ W32((u32)(r_esp+0x25cu), r_edx);
    /* 007b6158: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007b615c: mov dword ptr [esp + 0x260], edx */ W32((u32)(r_esp+0x260u), r_edx);
    /* 007b6163: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 007b6167: mov dword ptr [esp + 0x264], edx */ W32((u32)(r_esp+0x264u), r_edx);
    /* 007b616e: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 007b6172: mov dword ptr [esp + 0x268], edx */ W32((u32)(r_esp+0x268u), r_edx);
    /* 007b6179: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 007b6180: mov dword ptr [esp + 0x26c], edx */ W32((u32)(r_esp+0x26cu), r_edx);
    /* 007b6187: lea ecx, [esp + 0x210] */ r_ecx = (u32)(r_esp+0x210u);
    /* 007b618e: lea edx, [esp + 0x1f4] */ r_edx = (u32)(r_esp+0x1f4u);
    /* 007b6195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6196: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6197: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b619cu); f_0083d2fc();
    /* 007b619c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b619f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b61a1: jne 0x7b6269 */ if (!fZ) goto L_007b6269;
L_007b61a7:; BB(0x007b61a7);
    /* 007b61a7: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b61ae: jmp 0x7b6254 */ goto L_007b6254;
L_007b61b3:; BB(0x007b61b3);
    /* 007b61b3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b61b7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b61bb: mov eax, dword ptr [esp + 0x3d8] */ r_eax = R32((u32)(r_esp+0x3d8u));
    /* 007b61c2: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 007b61c6: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b61ca: mov ecx, dword ptr [eax + edx*4 + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 007b61ce: mov edx, dword ptr [eax + edx*4 + 0xc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 007b61d2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b61d6: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007b61da: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b61de: mov dword ptr [esp + 0x1d8], 0 */ W32((u32)(r_esp+0x1d8u), 0x0u);
    /* 007b61e9: mov dword ptr [esp + 0x1d4], ecx */ W32((u32)(r_esp+0x1d4u), r_ecx);
    /* 007b61f0: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007b61f4: mov dword ptr [esp + 0x1dc], ecx */ W32((u32)(r_esp+0x1dcu), r_ecx);
    /* 007b61fb: mov dword ptr [esp + 0x1e0], edx */ W32((u32)(r_esp+0x1e0u), r_edx);
    /* 007b6202: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b6209: mov ecx, dword ptr [edx + ebp*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0xcu));
    /* 007b620d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b6211: mov dword ptr [esp + 0x1e8], 0 */ W32((u32)(r_esp+0x1e8u), 0x0u);
    /* 007b621c: mov dword ptr [esp + 0x1e4], edx */ W32((u32)(r_esp+0x1e4u), r_edx);
    /* 007b6223: mov dword ptr [esp + 0x1ec], eax */ W32((u32)(r_esp+0x1ecu), r_eax);
    /* 007b622a: mov dword ptr [esp + 0x1f0], ecx */ W32((u32)(r_esp+0x1f0u), r_ecx);
    /* 007b6231: lea ecx, [esp + 0x1d4] */ r_ecx = (u32)(r_esp+0x1d4u);
    /* 007b6238: lea edx, [esp + 0x1e4] */ r_edx = (u32)(r_esp+0x1e4u);
    /* 007b623f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6241: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x7b6246u); f_0083dbd4();
    /* 007b6246: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b624b: jne 0x7b625c */ if (!fZ) goto L_007b625c;
L_007b624d:; BB(0x007b624d);
    /* 007b624d: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
L_007b6254:; BB(0x007b6254);
    /* 007b6254: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b6257: jmp 0x7b544e */ goto L_007b544e;
L_007b625c:; BB(0x007b625c);
    /* 007b625c: mov eax, ebx */ r_eax = r_ebx;
    /* 007b625e: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6264: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6268: ret  */ FN_RET(0x007b5318); r_esp += 4; return;
L_007b6269:; BB(0x007b6269);
    /* 007b6269: mov eax, ebx */ r_eax = r_ebx;
    /* 007b626b: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6271: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6275: ret  */ FN_RET(0x007b5318); r_esp += 4; return;
L_007b6276:; BB(0x007b6276);
    /* 007b6276: mov eax, ebx */ r_eax = r_ebx;
    /* 007b6278: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b627e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b627f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6280: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6281: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6282: ret  */ FN_RET(0x007b5318); r_esp += 4; return;
L_007b6283:; BB(0x007b6283);
    /* 007b6283: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b6285: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b628b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b628c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b628d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b628e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b628f: ret  */ FN_RET(0x007b5318); r_esp += 4; return;
L_007b6290:; BB(0x007b6290);
    /* 007b6290: mov eax, ebx */ r_eax = r_ebx;
    /* 007b6292: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6298: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b629a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b629b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b629c: ret  */ FN_RET(0x007b5318); r_esp += 4; return;
}

void f_007b59c0(void)
{
    FN_ENTER(0x007b59c0);
    goto L_007b59c0;
L_007b5328:; BB(0x007b5328);
    /* 007b5328: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007b532b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b532e: cmp ebx, dword ptr [esp + 0x3dc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x3dcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5335: jge 0x7b6283 */ if ((fS==fO)) goto L_007b6283;
L_007b533b:; BB(0x007b533b);
    /* 007b533b: mov ebp, dword ptr [esp + 0x3d8] */ r_ebp = R32((u32)(r_esp+0x3d8u));
    /* 007b5342: mov edx, dword ptr [esp + 0x3e0] */ r_edx = R32((u32)(r_esp+0x3e0u));
    /* 007b5349: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b5350: mov edx, dword ptr [esp + 0x3e4] */ r_edx = R32((u32)(r_esp+0x3e4u));
    /* 007b5357: mov dword ptr [esp + 0x1a8], edx */ W32((u32)(r_esp+0x1a8u), r_edx);
    /* 007b535e: mov edx, dword ptr [esp + 0x3e8] */ r_edx = R32((u32)(r_esp+0x3e8u));
    /* 007b5365: mov dword ptr [esp + 0x1ac], edx */ W32((u32)(r_esp+0x1acu), r_edx);
    /* 007b536c: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007b536f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5371: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007b5373: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5375: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5377: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007b5379: mov edi, dword ptr [ebp + esi*4 + 0x18] */ r_edi = R32((u32)(r_ebp+r_esi*4+0x18u));
    /* 007b537d: mov edx, dword ptr [ebp + esi*4] */ r_edx = R32((u32)(r_ebp+r_esi*4));
    /* 007b5381: mov dword ptr [esp + 0x1b0], edx */ W32((u32)(r_esp+0x1b0u), r_edx);
    /* 007b5388: mov edx, dword ptr [ebp + esi*4 + 4] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x4u));
    /* 007b538c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b5391: mov dword ptr [esp + 0x1b4], edx */ W32((u32)(r_esp+0x1b4u), r_edx);
    /* 007b5398: mov edx, dword ptr [ebp + esi*4 + 8] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x8u));
    /* 007b539c: mov dword ptr [esp + 0x1b8], edx */ W32((u32)(r_esp+0x1b8u), r_edx);
    /* 007b53a3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b53a8u); f_0082d990();
    /* 007b53a8: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b53af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b53b1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b53b6u); f_0082d8bc();
    /* 007b53b6: lea ecx, [esp + 0x1b0] */ r_ecx = (u32)(r_esp+0x1b0u);
    /* 007b53bd: lea edx, [esp + 0x1b0] */ r_edx = (u32)(r_esp+0x1b0u);
    /* 007b53c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b53c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b53c6: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b53cbu); f_0083a610();
    /* 007b53cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b53ce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b53d3u); f_0082da80();
    /* 007b53d3: lea ecx, [esp + 0x1a4] */ r_ecx = (u32)(r_esp+0x1a4u);
    /* 007b53da: lea edx, [esp + 0x1b0] */ r_edx = (u32)(r_esp+0x1b0u);
    /* 007b53e1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b53e6u); f_0082ebac();
    /* 007b53e6: mov edx, dword ptr [esp + 0x1a4] */ r_edx = R32((u32)(r_esp+0x1a4u));
    /* 007b53ed: mov ecx, dword ptr [esp + 0x1a8] */ r_ecx = R32((u32)(r_esp+0x1a8u));
    /* 007b53f4: mov dword ptr [ebp + esi*4 + 0x1c], edx */ W32((u32)(r_ebp+r_esi*4+0x1cu), r_edx);
    /* 007b53f8: mov edx, dword ptr [esp + 0x1ac] */ r_edx = R32((u32)(r_esp+0x1acu));
    /* 007b53ff: mov dword ptr [ebp + esi*4 + 0x20], ecx */ W32((u32)(r_ebp+r_esi*4+0x20u), r_ecx);
    /* 007b5403: mov ecx, dword ptr [esp + 0x3f4] */ r_ecx = R32((u32)(r_esp+0x3f4u));
    /* 007b540a: mov dword ptr [ebp + esi*4 + 0x24], edx */ W32((u32)(r_ebp+r_esi*4+0x24u), r_edx);
    /* 007b540e: mov edx, dword ptr [esp + 0x3e0] */ r_edx = R32((u32)(r_esp+0x3e0u));
    /* 007b5415: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b541c: mov edx, dword ptr [esp + 0x3e4] */ r_edx = R32((u32)(r_esp+0x3e4u));
    /* 007b5423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5425: mov dword ptr [esp + 0x1a8], edx */ W32((u32)(r_esp+0x1a8u), r_edx);
    /* 007b542c: mov edx, dword ptr [esp + 0x3e8] */ r_edx = R32((u32)(r_esp+0x3e8u));
    /* 007b5433: mov dword ptr [esp + 0x1ac], edx */ W32((u32)(r_esp+0x1acu), r_edx);
    /* 007b543a: mov edx, edi */ r_edx = r_edi;
    /* 007b543c: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b543f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b5443: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007b5447: mov esi, eax */ r_esi = r_eax;
    /* 007b5449: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007b544c: mov eax, ecx */ r_eax = r_ecx;
L_007b544e:; BB(0x007b544e);
    /* 007b544e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5450: jge 0x7b5328 */ if ((fS==fO)) goto L_007b5328;
L_007b5456:; BB(0x007b5456);
    /* 007b5456: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 007b5459: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545b: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5461: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5463: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 007b5467: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b5469: add ebx, dword ptr [esp + 0x3f0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x3f0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b5470: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 007b5473: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5475: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5477: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b547a: je 0x7b6254 */ if (fZ) goto L_007b6254;
L_007b5480:; BB(0x007b5480);
    /* 007b5480: test cl, 6 */ {  u32 a = (u8)r_ecx; u32 b = 0x6u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b5483: je 0x7b6254 */ if (fZ) goto L_007b6254;
L_007b5489:; BB(0x007b5489);
    /* 007b5489: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007b548d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b548f: je 0x7b549d */ if (fZ) goto L_007b549d;
L_007b5491:; BB(0x007b5491);
    /* 007b5491: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5497: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b549d:; BB(0x007b549d);
    /* 007b549d: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54a0: je 0x7b54ae */ if (fZ) goto L_007b54ae;
L_007b54a2:; BB(0x007b54a2);
    /* 007b54a2: test edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54a8: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54ae:; BB(0x007b54ae);
    /* 007b54ae: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54b4: je 0x7b54c2 */ if (fZ) goto L_007b54c2;
L_007b54b6:; BB(0x007b54b6);
    /* 007b54b6: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54bc: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54c2:; BB(0x007b54c2);
    /* 007b54c2: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54c5: je 0x7b54d3 */ if (fZ) goto L_007b54d3;
L_007b54c7:; BB(0x007b54c7);
    /* 007b54c7: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54cd: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54d3:; BB(0x007b54d3);
    /* 007b54d3: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54d9: je 0x7b54e7 */ if (fZ) goto L_007b54e7;
L_007b54db:; BB(0x007b54db);
    /* 007b54db: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54e1: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54e7:; BB(0x007b54e7);
    /* 007b54e7: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54ea: je 0x7b54f8 */ if (fZ) goto L_007b54f8;
L_007b54ec:; BB(0x007b54ec);
    /* 007b54ec: test edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54f2: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54f8:; BB(0x007b54f8);
    /* 007b54f8: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54fe: je 0x7b550c */ if (fZ) goto L_007b550c;
L_007b5500:; BB(0x007b5500);
    /* 007b5500: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5506: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b550c:; BB(0x007b550c);
    /* 007b550c: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b550f: je 0x7b551d */ if (fZ) goto L_007b551d;
L_007b5511:; BB(0x007b5511);
    /* 007b5511: test edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5517: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b551d:; BB(0x007b551d);
    /* 007b551d: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5523: je 0x7b5531 */ if (fZ) goto L_007b5531;
L_007b5525:; BB(0x007b5525);
    /* 007b5525: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b552b: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b5531:; BB(0x007b5531);
    /* 007b5531: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5537: je 0x7b5545 */ if (fZ) goto L_007b5545;
L_007b5539:; BB(0x007b5539);
    /* 007b5539: test edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b553f: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b5545:; BB(0x007b5545);
    /* 007b5545: mov edx, dword ptr [esp + 0x3f8] */ r_edx = R32((u32)(r_esp+0x3f8u));
    /* 007b554c: mov ecx, dword ptr [esp + 0x3f0] */ r_ecx = R32((u32)(r_esp+0x3f0u));
    /* 007b5553: mov dword ptr [esp + 0x1bc], edx */ W32((u32)(r_esp+0x1bcu), r_edx);
    /* 007b555a: mov edx, dword ptr [esp + 0x3fc] */ r_edx = R32((u32)(r_esp+0x3fcu));
    /* 007b5561: mov dword ptr [esp + 0x1c0], edx */ W32((u32)(r_esp+0x1c0u), r_edx);
    /* 007b5568: mov edx, dword ptr [esp + 0x400] */ r_edx = R32((u32)(r_esp+0x400u));
    /* 007b556f: mov dword ptr [esp + 0x1c4], edx */ W32((u32)(r_esp+0x1c4u), r_edx);
    /* 007b5576: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
    /* 007b5579: mov dword ptr [esp + 0x1c8], edx */ W32((u32)(r_esp+0x1c8u), r_edx);
    /* 007b5580: mov edx, dword ptr [ecx + ebp*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 007b5584: mov dword ptr [esp + 0x1cc], edx */ W32((u32)(r_esp+0x1ccu), r_edx);
    /* 007b558b: mov edx, dword ptr [ecx + ebp*4 + 8] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 007b558f: mov dword ptr [esp + 0x1d0], edx */ W32((u32)(r_esp+0x1d0u), r_edx);
    /* 007b5596: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b559b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b55a0u); f_0082d990();
    /* 007b55a0: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b55a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b55a9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b55aeu); f_0082d8bc();
    /* 007b55ae: lea ecx, [esp + 0x1c8] */ r_ecx = (u32)(r_esp+0x1c8u);
    /* 007b55b5: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 007b55bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b55bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b55be: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b55c3u); f_0083a610();
    /* 007b55c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b55c6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b55cbu); f_0082da80();
    /* 007b55cb: lea ecx, [esp + 0x1bc] */ r_ecx = (u32)(r_esp+0x1bcu);
    /* 007b55d2: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 007b55d9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b55deu); f_0082ebac();
    /* 007b55de: mov ecx, dword ptr [esp + 0x1bc] */ r_ecx = R32((u32)(r_esp+0x1bcu));
    /* 007b55e5: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b55ec: mov eax, dword ptr [esp + 0x1c4] */ r_eax = R32((u32)(r_esp+0x1c4u));
    /* 007b55f3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007b55f7: mov dword ptr [edx + ebp*4 + 0x1c], ecx */ W32((u32)(r_edx+r_ebp*4+0x1cu), r_ecx);
    /* 007b55fb: mov ecx, dword ptr [esp + 0x1c0] */ r_ecx = R32((u32)(r_esp+0x1c0u));
    /* 007b5602: mov dword ptr [edx + ebp*4 + 0x20], ecx */ W32((u32)(r_edx+r_ebp*4+0x20u), r_ecx);
    /* 007b5606: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007b560a: mov dword ptr [edx + ebp*4 + 0x24], eax */ W32((u32)(r_edx+r_ebp*4+0x24u), r_eax);
    /* 007b560e: mov edx, dword ptr [esp + 0x3f8] */ r_edx = R32((u32)(r_esp+0x3f8u));
    /* 007b5615: mov dword ptr [esp + 0x1bc], edx */ W32((u32)(r_esp+0x1bcu), r_edx);
    /* 007b561c: mov edx, dword ptr [esp + 0x3fc] */ r_edx = R32((u32)(r_esp+0x3fcu));
    /* 007b5623: mov dword ptr [esp + 0x1c0], edx */ W32((u32)(r_esp+0x1c0u), r_edx);
    /* 007b562a: mov edx, dword ptr [esp + 0x400] */ r_edx = R32((u32)(r_esp+0x400u));
    /* 007b5631: mov dword ptr [esp + 0x1c4], edx */ W32((u32)(r_esp+0x1c4u), r_edx);
    /* 007b5638: mov edx, dword ptr [esp + 0x3d8] */ r_edx = R32((u32)(r_esp+0x3d8u));
    /* 007b563f: mov edx, dword ptr [edx + ecx*4 + 0x14] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 007b5643: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5646: jne 0x7b5f0e */ if (!fZ) goto L_007b5f0e;
L_007b564c:; BB(0x007b564c);
    /* 007b564c: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5653: mov ecx, dword ptr [edx + ebp*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x14u));
    /* 007b5657: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b565a: jne 0x7b5bf2 */ if (!fZ) goto L_007b5bf2;
L_007b5660:; BB(0x007b5660);
    /* 007b5660: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5667: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b566b: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 007b566f: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 007b5673: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 007b5677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5679: fchs  */ ST(0) = -ST(0);
    /* 007b567b: mov dword ptr [esp + 0x2ec], eax */ W32((u32)(r_esp+0x2ecu), r_eax);
    /* 007b5682: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 007b5686: mov dword ptr [esp + 0x2f4], eax */ W32((u32)(r_esp+0x2f4u), r_eax);
    /* 007b568d: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 007b5691: mov edx, dword ptr [ecx + edx*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 007b5695: fst dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0));
    /* 007b569c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b569e: fchs  */ ST(0) = -ST(0);
    /* 007b56a0: mov dword ptr [esp + 0xec], edx */ W32((u32)(r_esp+0xecu), r_edx);
    /* 007b56a7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b56ac: mov dword ptr [esp + 0x2f0], 0 */ W32((u32)(r_esp+0x2f0u), 0x0u);
    /* 007b56b7: mov dword ptr [esp + 0xe8], 0x42480000 */ W32((u32)(r_esp+0xe8u), 0x42480000u);
    /* 007b56c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56c4: fst dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0));
    /* 007b56cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56cd: fst dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0));
    /* 007b56d4: fst dword ptr [esp + 0x104] */ W_F32((u32)(r_esp+0x104u), ST(0));
    /* 007b56db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56dd: fst dword ptr [esp + 0x114] */ W_F32((u32)(r_esp+0x114u), ST(0));
    /* 007b56e4: fstp dword ptr [esp + 0x120] */ W_F32((u32)(r_esp+0x120u), ST(0)); FPOP();
    /* 007b56eb: fst dword ptr [esp + 0x128] */ W_F32((u32)(r_esp+0x128u), ST(0));
    /* 007b56f2: fstp dword ptr [esp + 0x134] */ W_F32((u32)(r_esp+0x134u), ST(0)); FPOP();
    /* 007b56f9: mov dword ptr [esp + 0xf4], 0x42480000 */ W32((u32)(r_esp+0xf4u), 0x42480000u);
    /* 007b5704: mov dword ptr [esp + 0x100], 0x42480000 */ W32((u32)(r_esp+0x100u), 0x42480000u);
    /* 007b570f: mov dword ptr [esp + 0xfc], eax */ W32((u32)(r_esp+0xfcu), r_eax);
    /* 007b5716: mov dword ptr [esp + 0x108], eax */ W32((u32)(r_esp+0x108u), r_eax);
    /* 007b571d: mov dword ptr [esp + 0x10c], 0x42480000 */ W32((u32)(r_esp+0x10cu), 0x42480000u);
    /* 007b5728: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 007b572f: mov dword ptr [esp + 0x118], 0xc2480000 */ W32((u32)(r_esp+0x118u), 0xc2480000u);
    /* 007b573a: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 007b5741: mov dword ptr [esp + 0x124], 0xc2480000 */ W32((u32)(r_esp+0x124u), 0xc2480000u);
    /* 007b574c: mov dword ptr [esp + 0x12c], eax */ W32((u32)(r_esp+0x12cu), r_eax);
    /* 007b5753: mov dword ptr [esp + 0x130], 0xc2480000 */ W32((u32)(r_esp+0x130u), 0xc2480000u);
    /* 007b575e: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 007b5765: mov dword ptr [esp + 0x13c], 0xc2480000 */ W32((u32)(r_esp+0x13cu), 0xc2480000u);
    /* 007b5770: mov dword ptr [esp + 0x140], edx */ W32((u32)(r_esp+0x140u), r_edx);
    /* 007b5777: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b577cu); f_0082d990();
    /* 007b577c: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b5783: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5785: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b578au); f_0082d8bc();
    /* 007b578a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007b578e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5794: mov esi, eax */ r_esi = r_eax;
L_007b5796:; BB(0x007b5796);
    /* 007b5796: lea edx, [esp + 0xe4] */ r_edx = (u32)(r_esp+0xe4u);
    /* 007b579d: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b57a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b57a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b57a2: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b57a7u); f_0083a610();
    /* 007b57a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b57aa: lea edx, [esp + 0x2ec] */ r_edx = (u32)(r_esp+0x2ecu);
    /* 007b57b1: mov ecx, edi */ r_ecx = r_edi;
    /* 007b57b3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b57b8u); f_0082ebac();
    /* 007b57b8: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b57bb: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b57be: jl 0x7b5796 */ if ((fS!=fO)) goto L_007b5796;
L_007b57c0:; BB(0x007b57c0);
    /* 007b57c0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b57c4: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b57c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b57cdu); f_0082da80();
    /* 007b57cd: mov edx, dword ptr [esp + 0xe4] */ r_edx = R32((u32)(r_esp+0xe4u));
    /* 007b57d4: mov ecx, dword ptr [esp + 0xe8] */ r_ecx = R32((u32)(r_esp+0xe8u));
    /* 007b57db: mov dword ptr [esp + 0x2f8], edx */ W32((u32)(r_esp+0x2f8u), r_edx);
    /* 007b57e2: mov edx, dword ptr [esp + 0xec] */ r_edx = R32((u32)(r_esp+0xecu));
    /* 007b57e9: mov dword ptr [esp + 0x2fc], ecx */ W32((u32)(r_esp+0x2fcu), r_ecx);
    /* 007b57f0: mov dword ptr [esp + 0x300], edx */ W32((u32)(r_esp+0x300u), r_edx);
    /* 007b57f7: mov edx, dword ptr [esp + 0xf0] */ r_edx = R32((u32)(r_esp+0xf0u));
    /* 007b57fe: mov dword ptr [esp + 0x304], edx */ W32((u32)(r_esp+0x304u), r_edx);
    /* 007b5805: mov edx, dword ptr [esp + 0xf4] */ r_edx = R32((u32)(r_esp+0xf4u));
    /* 007b580c: mov dword ptr [esp + 0x308], edx */ W32((u32)(r_esp+0x308u), r_edx);
    /* 007b5813: mov edx, dword ptr [esp + 0xf8] */ r_edx = R32((u32)(r_esp+0xf8u));
    /* 007b581a: mov dword ptr [esp + 0x30c], edx */ W32((u32)(r_esp+0x30cu), r_edx);
    /* 007b5821: mov edx, dword ptr [esp + 0xfc] */ r_edx = R32((u32)(r_esp+0xfcu));
    /* 007b5828: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 007b582f: mov edx, dword ptr [esp + 0x100] */ r_edx = R32((u32)(r_esp+0x100u));
    /* 007b5836: mov dword ptr [esp + 0x314], edx */ W32((u32)(r_esp+0x314u), r_edx);
    /* 007b583d: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 007b5844: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 007b584b: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 007b5852: mov dword ptr [esp + 0x31c], edx */ W32((u32)(r_esp+0x31cu), r_edx);
    /* 007b5859: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 007b5860: mov dword ptr [esp + 0x320], edx */ W32((u32)(r_esp+0x320u), r_edx);
    /* 007b5867: mov edx, dword ptr [esp + 0x110] */ r_edx = R32((u32)(r_esp+0x110u));
    /* 007b586e: mov dword ptr [esp + 0x324], edx */ W32((u32)(r_esp+0x324u), r_edx);
    /* 007b5875: mov edx, dword ptr [esp + 0x114] */ r_edx = R32((u32)(r_esp+0x114u));
    /* 007b587c: mov dword ptr [esp + 0x328], edx */ W32((u32)(r_esp+0x328u), r_edx);
    /* 007b5883: mov edx, dword ptr [esp + 0x118] */ r_edx = R32((u32)(r_esp+0x118u));
    /* 007b588a: mov dword ptr [esp + 0x32c], edx */ W32((u32)(r_esp+0x32cu), r_edx);
    /* 007b5891: mov edx, dword ptr [esp + 0x11c] */ r_edx = R32((u32)(r_esp+0x11cu));
    /* 007b5898: mov dword ptr [esp + 0x330], edx */ W32((u32)(r_esp+0x330u), r_edx);
    /* 007b589f: mov edx, dword ptr [esp + 0x120] */ r_edx = R32((u32)(r_esp+0x120u));
    /* 007b58a6: mov dword ptr [esp + 0x334], edx */ W32((u32)(r_esp+0x334u), r_edx);
    /* 007b58ad: mov edx, dword ptr [esp + 0x124] */ r_edx = R32((u32)(r_esp+0x124u));
    /* 007b58b4: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 007b58bb: mov edx, dword ptr [esp + 0x128] */ r_edx = R32((u32)(r_esp+0x128u));
    /* 007b58c2: mov dword ptr [esp + 0x33c], edx */ W32((u32)(r_esp+0x33cu), r_edx);
    /* 007b58c9: mov edx, dword ptr [esp + 0x12c] */ r_edx = R32((u32)(r_esp+0x12cu));
    /* 007b58d0: mov dword ptr [esp + 0x340], edx */ W32((u32)(r_esp+0x340u), r_edx);
    /* 007b58d7: mov edx, dword ptr [esp + 0x130] */ r_edx = R32((u32)(r_esp+0x130u));
    /* 007b58de: mov dword ptr [esp + 0x344], edx */ W32((u32)(r_esp+0x344u), r_edx);
    /* 007b58e5: mov edx, dword ptr [esp + 0x134] */ r_edx = R32((u32)(r_esp+0x134u));
    /* 007b58ec: mov dword ptr [esp + 0x348], edx */ W32((u32)(r_esp+0x348u), r_edx);
    /* 007b58f3: mov edx, dword ptr [esp + 0x138] */ r_edx = R32((u32)(r_esp+0x138u));
    /* 007b58fa: mov dword ptr [esp + 0x34c], edx */ W32((u32)(r_esp+0x34cu), r_edx);
    /* 007b5901: mov edx, dword ptr [esp + 0x13c] */ r_edx = R32((u32)(r_esp+0x13cu));
    /* 007b5908: mov dword ptr [esp + 0x350], edx */ W32((u32)(r_esp+0x350u), r_edx);
    /* 007b590f: mov edx, dword ptr [esp + 0x140] */ r_edx = R32((u32)(r_esp+0x140u));
    /* 007b5916: mov dword ptr [esp + 0x354], edx */ W32((u32)(r_esp+0x354u), r_edx);
    /* 007b591d: mov eax, dword ptr [esp + 0x3f0] */ r_eax = R32((u32)(r_esp+0x3f0u));
    /* 007b5924: mov edx, dword ptr [eax + ebp*4 + 0x1c] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x1cu));
    /* 007b5928: fld dword ptr [eax + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4+0x10u)));
    /* 007b592c: fld dword ptr [eax + ebp*4 + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4+0xcu)));
    /* 007b5930: mov dword ptr [esp + 0x358], edx */ W32((u32)(r_esp+0x358u), r_edx);
    /* 007b5937: mov edx, dword ptr [eax + ebp*4 + 0x24] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x24u));
    /* 007b593b: mov dword ptr [esp + 0x35c], 0 */ W32((u32)(r_esp+0x35cu), 0x0u);
    /* 007b5946: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5948: fchs  */ ST(0) = -ST(0);
    /* 007b594a: mov dword ptr [esp + 0x360], edx */ W32((u32)(r_esp+0x360u), r_edx);
    /* 007b5951: mov edx, dword ptr [eax + ebp*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x10u));
    /* 007b5955: mov ebp, dword ptr [eax + ebp*4 + 0xc] */ r_ebp = R32((u32)(r_eax+r_ebp*4+0xcu));
    /* 007b5959: fst dword ptr [esp + 0x144] */ W_F32((u32)(r_esp+0x144u), ST(0));
    /* 007b5960: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5962: fchs  */ ST(0) = -ST(0);
    /* 007b5964: mov dword ptr [esp + 0x148], 0x42480000 */ W32((u32)(r_esp+0x148u), 0x42480000u);
    /* 007b596f: fst dword ptr [esp + 0x158] */ W_F32((u32)(r_esp+0x158u), ST(0));
    /* 007b5976: fst dword ptr [esp + 0x164] */ W_F32((u32)(r_esp+0x164u), ST(0));
    /* 007b597d: fst dword ptr [esp + 0x188] */ W_F32((u32)(r_esp+0x188u), ST(0));
    /* 007b5984: fstp dword ptr [esp + 0x194] */ W_F32((u32)(r_esp+0x194u), ST(0)); FPOP();
    /* 007b598b: mov dword ptr [esp + 0x14c], ebp */ W32((u32)(r_esp+0x14cu), r_ebp);
    /* 007b5992: fst dword ptr [esp + 0x150] */ W_F32((u32)(r_esp+0x150u), ST(0));
    /* 007b5999: fst dword ptr [esp + 0x174] */ W_F32((u32)(r_esp+0x174u), ST(0));
    /* 007b59a0: fstp dword ptr [esp + 0x180] */ W_F32((u32)(r_esp+0x180u), ST(0)); FPOP();
    /* 007b59a7: mov dword ptr [esp + 0x15c], edx */ W32((u32)(r_esp+0x15cu), r_edx);
    /* 007b59ae: mov dword ptr [esp + 0x154], 0x42480000 */ W32((u32)(r_esp+0x154u), 0x42480000u);
    /* 007b59b9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b59be: mov dword ptr [esp + 0x160], 0x42480000 */ W32((u32)(r_esp+0x160u), 0x42480000u);
L_007b59c0:; BB(0x007b59c0);
    /* 007b59c0: and al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007b59c2: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007b59c4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007b59c6: add byte ptr [eax + 0x42], cl */ { u32 ad = (u32)(r_eax+0x42u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007b59c9: mov dword ptr [esp + 0x168], edx */ W32((u32)(r_esp+0x168u), r_edx);
    /* 007b59d0: mov dword ptr [esp + 0x170], ebp */ W32((u32)(r_esp+0x170u), r_ebp);
    /* 007b59d7: mov dword ptr [esp + 0x16c], 0x42480000 */ W32((u32)(r_esp+0x16cu), 0x42480000u);
    /* 007b59e2: mov dword ptr [esp + 0x178], 0xc2480000 */ W32((u32)(r_esp+0x178u), 0xc2480000u);
    /* 007b59ed: mov dword ptr [esp + 0x17c], ebp */ W32((u32)(r_esp+0x17cu), r_ebp);
    /* 007b59f4: mov dword ptr [esp + 0x18c], edx */ W32((u32)(r_esp+0x18cu), r_edx);
    /* 007b59fb: mov dword ptr [esp + 0x184], 0xc2480000 */ W32((u32)(r_esp+0x184u), 0xc2480000u);
    /* 007b5a06: mov dword ptr [esp + 0x190], 0xc2480000 */ W32((u32)(r_esp+0x190u), 0xc2480000u);
    /* 007b5a11: mov dword ptr [esp + 0x198], edx */ W32((u32)(r_esp+0x198u), r_edx);
    /* 007b5a18: mov dword ptr [esp + 0x1a0], ebp */ W32((u32)(r_esp+0x1a0u), r_ebp);
    /* 007b5a1f: mov dword ptr [esp + 0x19c], 0xc2480000 */ W32((u32)(r_esp+0x19cu), 0xc2480000u);
    /* 007b5a2a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b5a2fu); f_0082d990();
    /* 007b5a2f: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b5a36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5a38: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b5a3du); f_0082d8bc();
    /* 007b5a3d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5a41: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007b5a43:; BB(0x007b5a43);
    /* 007b5a43: lea edx, [esp + 0x144] */ r_edx = (u32)(r_esp+0x144u);
    /* 007b5a4a: lea edi, [edx + ebp] */ r_edi = (u32)(r_edx+r_ebp);
    /* 007b5a4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5a4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5a4f: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b5a54u); f_0083a610();
    /* 007b5a54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5a57: lea edx, [esp + 0x358] */ r_edx = (u32)(r_esp+0x358u);
    /* 007b5a5e: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5a60: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b5a65u); f_0082ebac();
    /* 007b5a65: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5a68: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5a6b: jl 0x7b5a43 */ if ((fS!=fO)) goto L_007b5a43;
L_007b5a6d:; BB(0x007b5a6d);
    /* 007b5a6d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b5a71: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b5a76u); f_0082da80();
    /* 007b5a76: mov edx, dword ptr [esp + 0x144] */ r_edx = R32((u32)(r_esp+0x144u));
    /* 007b5a7d: mov ecx, dword ptr [esp + 0x148] */ r_ecx = R32((u32)(r_esp+0x148u));
    /* 007b5a84: mov ebp, dword ptr [esp + 0x14c] */ r_ebp = R32((u32)(r_esp+0x14cu));
    /* 007b5a8b: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 007b5a92: mov edx, dword ptr [esp + 0x150] */ r_edx = R32((u32)(r_esp+0x150u));
    /* 007b5a99: mov dword ptr [esp + 0x368], ecx */ W32((u32)(r_esp+0x368u), r_ecx);
    /* 007b5aa0: mov dword ptr [esp + 0x36c], ebp */ W32((u32)(r_esp+0x36cu), r_ebp);
    /* 007b5aa7: mov dword ptr [esp + 0x370], edx */ W32((u32)(r_esp+0x370u), r_edx);
    /* 007b5aae: mov edx, dword ptr [esp + 0x154] */ r_edx = R32((u32)(r_esp+0x154u));
    /* 007b5ab5: mov dword ptr [esp + 0x374], edx */ W32((u32)(r_esp+0x374u), r_edx);
    /* 007b5abc: mov edx, dword ptr [esp + 0x158] */ r_edx = R32((u32)(r_esp+0x158u));
    /* 007b5ac3: mov dword ptr [esp + 0x378], edx */ W32((u32)(r_esp+0x378u), r_edx);
    /* 007b5aca: mov edx, dword ptr [esp + 0x15c] */ r_edx = R32((u32)(r_esp+0x15cu));
    /* 007b5ad1: mov dword ptr [esp + 0x37c], edx */ W32((u32)(r_esp+0x37cu), r_edx);
    /* 007b5ad8: mov edx, dword ptr [esp + 0x160] */ r_edx = R32((u32)(r_esp+0x160u));
    /* 007b5adf: mov dword ptr [esp + 0x380], edx */ W32((u32)(r_esp+0x380u), r_edx);
    /* 007b5ae6: mov edx, dword ptr [esp + 0x164] */ r_edx = R32((u32)(r_esp+0x164u));
    /* 007b5aed: mov dword ptr [esp + 0x384], edx */ W32((u32)(r_esp+0x384u), r_edx);
    /* 007b5af4: mov edx, dword ptr [esp + 0x168] */ r_edx = R32((u32)(r_esp+0x168u));
    /* 007b5afb: mov dword ptr [esp + 0x388], edx */ W32((u32)(r_esp+0x388u), r_edx);
    /* 007b5b02: mov edx, dword ptr [esp + 0x16c] */ r_edx = R32((u32)(r_esp+0x16cu));
    /* 007b5b09: mov dword ptr [esp + 0x38c], edx */ W32((u32)(r_esp+0x38cu), r_edx);
    /* 007b5b10: mov edx, dword ptr [esp + 0x170] */ r_edx = R32((u32)(r_esp+0x170u));
    /* 007b5b17: mov dword ptr [esp + 0x390], edx */ W32((u32)(r_esp+0x390u), r_edx);
    /* 007b5b1e: mov edx, dword ptr [esp + 0x174] */ r_edx = R32((u32)(r_esp+0x174u));
    /* 007b5b25: mov dword ptr [esp + 0x394], edx */ W32((u32)(r_esp+0x394u), r_edx);
    /* 007b5b2c: mov edx, dword ptr [esp + 0x178] */ r_edx = R32((u32)(r_esp+0x178u));
    /* 007b5b33: mov dword ptr [esp + 0x398], edx */ W32((u32)(r_esp+0x398u), r_edx);
    /* 007b5b3a: mov edx, dword ptr [esp + 0x17c] */ r_edx = R32((u32)(r_esp+0x17cu));
    /* 007b5b41: mov dword ptr [esp + 0x39c], edx */ W32((u32)(r_esp+0x39cu), r_edx);
    /* 007b5b48: mov edx, dword ptr [esp + 0x180] */ r_edx = R32((u32)(r_esp+0x180u));
    /* 007b5b4f: mov dword ptr [esp + 0x3a0], edx */ W32((u32)(r_esp+0x3a0u), r_edx);
    /* 007b5b56: mov edx, dword ptr [esp + 0x184] */ r_edx = R32((u32)(r_esp+0x184u));
    /* 007b5b5d: mov dword ptr [esp + 0x3a4], edx */ W32((u32)(r_esp+0x3a4u), r_edx);
    /* 007b5b64: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 007b5b6b: mov dword ptr [esp + 0x3a8], edx */ W32((u32)(r_esp+0x3a8u), r_edx);
    /* 007b5b72: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 007b5b79: mov dword ptr [esp + 0x3ac], edx */ W32((u32)(r_esp+0x3acu), r_edx);
    /* 007b5b80: mov edx, dword ptr [esp + 0x190] */ r_edx = R32((u32)(r_esp+0x190u));
    /* 007b5b87: mov dword ptr [esp + 0x3b0], edx */ W32((u32)(r_esp+0x3b0u), r_edx);
    /* 007b5b8e: mov edx, dword ptr [esp + 0x194] */ r_edx = R32((u32)(r_esp+0x194u));
    /* 007b5b95: mov dword ptr [esp + 0x3b4], edx */ W32((u32)(r_esp+0x3b4u), r_edx);
    /* 007b5b9c: mov edx, dword ptr [esp + 0x198] */ r_edx = R32((u32)(r_esp+0x198u));
    /* 007b5ba3: mov dword ptr [esp + 0x3b8], edx */ W32((u32)(r_esp+0x3b8u), r_edx);
    /* 007b5baa: mov edx, dword ptr [esp + 0x19c] */ r_edx = R32((u32)(r_esp+0x19cu));
    /* 007b5bb1: mov dword ptr [esp + 0x3bc], edx */ W32((u32)(r_esp+0x3bcu), r_edx);
    /* 007b5bb8: mov edx, dword ptr [esp + 0x1a0] */ r_edx = R32((u32)(r_esp+0x1a0u));
    /* 007b5bbf: mov dword ptr [esp + 0x3c0], edx */ W32((u32)(r_esp+0x3c0u), r_edx);
    /* 007b5bc6: lea ecx, [esp + 0x2f8] */ r_ecx = (u32)(r_esp+0x2f8u);
    /* 007b5bcd: lea edx, [esp + 0x364] */ r_edx = (u32)(r_esp+0x364u);
    /* 007b5bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5bd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5bd6: call 0x844540 */ r_esp -= 4; W32(r_esp, 0x7b5bdbu); f_00844540();
    /* 007b5bdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5be0: jne 0x7b6276 */ if (!fZ) goto L_007b6276;
L_007b5be6:; BB(0x007b5be6);
    /* 007b5be6: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b5bed: jmp 0x7b6254 */ goto L_007b6254;
L_007b5bf2:; BB(0x007b5bf2);
    /* 007b5bf2: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5bf9: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b5bfd: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 007b5c01: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 007b5c05: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 007b5c09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c0b: fchs  */ ST(0) = -ST(0);
    /* 007b5c0d: mov dword ptr [esp + 0x270], eax */ W32((u32)(r_esp+0x270u), r_eax);
    /* 007b5c14: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 007b5c18: mov dword ptr [esp + 0x278], eax */ W32((u32)(r_esp+0x278u), r_eax);
    /* 007b5c1f: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 007b5c23: mov edx, dword ptr [ecx + edx*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 007b5c27: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 007b5c2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c30: fchs  */ ST(0) = -ST(0);
    /* 007b5c32: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 007b5c39: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b5c3e: mov dword ptr [esp + 0x274], 0 */ W32((u32)(r_esp+0x274u), 0x0u);
    /* 007b5c49: mov dword ptr [esp + 0x88], 0x42480000 */ W32((u32)(r_esp+0x88u), 0x42480000u);
    /* 007b5c54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c56: fst dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0));
    /* 007b5c5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c5f: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 007b5c66: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 007b5c6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c6f: fst dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0));
    /* 007b5c76: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 007b5c7d: fst dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0));
    /* 007b5c84: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 007b5c8b: mov dword ptr [esp + 0x94], 0x42480000 */ W32((u32)(r_esp+0x94u), 0x42480000u);
    /* 007b5c96: mov dword ptr [esp + 0xa0], 0x42480000 */ W32((u32)(r_esp+0xa0u), 0x42480000u);
    /* 007b5ca1: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 007b5ca8: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 007b5caf: mov dword ptr [esp + 0xac], 0x42480000 */ W32((u32)(r_esp+0xacu), 0x42480000u);
    /* 007b5cba: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 007b5cc1: mov dword ptr [esp + 0xb8], 0xc2480000 */ W32((u32)(r_esp+0xb8u), 0xc2480000u);
    /* 007b5ccc: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 007b5cd3: mov dword ptr [esp + 0xc4], 0xc2480000 */ W32((u32)(r_esp+0xc4u), 0xc2480000u);
    /* 007b5cde: mov dword ptr [esp + 0xcc], eax */ W32((u32)(r_esp+0xccu), r_eax);
    /* 007b5ce5: mov dword ptr [esp + 0xd0], 0xc2480000 */ W32((u32)(r_esp+0xd0u), 0xc2480000u);
    /* 007b5cf0: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 007b5cf7: mov dword ptr [esp + 0xdc], 0xc2480000 */ W32((u32)(r_esp+0xdcu), 0xc2480000u);
    /* 007b5d02: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 007b5d09: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b5d0eu); f_0082d990();
    /* 007b5d0e: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b5d15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5d17: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b5d1cu); f_0082d8bc();
    /* 007b5d1c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007b5d20: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5d24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5d26: mov esi, eax */ r_esi = r_eax;
L_007b5d28:; BB(0x007b5d28);
    /* 007b5d28: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 007b5d2f: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b5d32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5d33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5d34: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b5d39u); f_0083a610();
    /* 007b5d39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5d3c: lea edx, [esp + 0x270] */ r_edx = (u32)(r_esp+0x270u);
    /* 007b5d43: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5d45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b5d4au); f_0082ebac();
    /* 007b5d4a: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5d4d: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5d50: jl 0x7b5d28 */ if ((fS!=fO)) goto L_007b5d28;
L_007b5d52:; BB(0x007b5d52);
    /* 007b5d52: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b5d56: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b5d5a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b5d5fu); f_0082da80();
    /* 007b5d5f: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 007b5d66: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 007b5d6d: mov dword ptr [esp + 0x27c], edx */ W32((u32)(r_esp+0x27cu), r_edx);
    /* 007b5d74: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 007b5d7b: mov dword ptr [esp + 0x280], ecx */ W32((u32)(r_esp+0x280u), r_ecx);
    /* 007b5d82: mov dword ptr [esp + 0x284], edx */ W32((u32)(r_esp+0x284u), r_edx);
    /* 007b5d89: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 007b5d90: mov dword ptr [esp + 0x288], edx */ W32((u32)(r_esp+0x288u), r_edx);
    /* 007b5d97: mov edx, dword ptr [esp + 0x94] */ r_edx = R32((u32)(r_esp+0x94u));
    /* 007b5d9e: mov dword ptr [esp + 0x28c], edx */ W32((u32)(r_esp+0x28cu), r_edx);
    /* 007b5da5: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 007b5dac: mov dword ptr [esp + 0x290], edx */ W32((u32)(r_esp+0x290u), r_edx);
    /* 007b5db3: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 007b5dba: mov dword ptr [esp + 0x294], edx */ W32((u32)(r_esp+0x294u), r_edx);
    /* 007b5dc1: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 007b5dc8: mov dword ptr [esp + 0x298], edx */ W32((u32)(r_esp+0x298u), r_edx);
    /* 007b5dcf: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 007b5dd6: mov dword ptr [esp + 0x29c], edx */ W32((u32)(r_esp+0x29cu), r_edx);
    /* 007b5ddd: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 007b5de4: mov dword ptr [esp + 0x2a0], edx */ W32((u32)(r_esp+0x2a0u), r_edx);
    /* 007b5deb: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 007b5df2: mov dword ptr [esp + 0x2a4], edx */ W32((u32)(r_esp+0x2a4u), r_edx);
    /* 007b5df9: mov edx, dword ptr [esp + 0xb0] */ r_edx = R32((u32)(r_esp+0xb0u));
    /* 007b5e00: mov dword ptr [esp + 0x2a8], edx */ W32((u32)(r_esp+0x2a8u), r_edx);
    /* 007b5e07: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 007b5e0e: mov dword ptr [esp + 0x2ac], edx */ W32((u32)(r_esp+0x2acu), r_edx);
    /* 007b5e15: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 007b5e1c: mov dword ptr [esp + 0x2b0], edx */ W32((u32)(r_esp+0x2b0u), r_edx);
    /* 007b5e23: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 007b5e2a: mov dword ptr [esp + 0x2b4], edx */ W32((u32)(r_esp+0x2b4u), r_edx);
    /* 007b5e31: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 007b5e38: mov dword ptr [esp + 0x2b8], edx */ W32((u32)(r_esp+0x2b8u), r_edx);
    /* 007b5e3f: mov edx, dword ptr [esp + 0xc4] */ r_edx = R32((u32)(r_esp+0xc4u));
    /* 007b5e46: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 007b5e4d: mov edx, dword ptr [esp + 0xc8] */ r_edx = R32((u32)(r_esp+0xc8u));
    /* 007b5e54: mov dword ptr [esp + 0x2c0], edx */ W32((u32)(r_esp+0x2c0u), r_edx);
    /* 007b5e5b: mov edx, dword ptr [esp + 0xcc] */ r_edx = R32((u32)(r_esp+0xccu));
    /* 007b5e62: mov dword ptr [esp + 0x2c4], edx */ W32((u32)(r_esp+0x2c4u), r_edx);
    /* 007b5e69: mov edx, dword ptr [esp + 0xd0] */ r_edx = R32((u32)(r_esp+0xd0u));
    /* 007b5e70: mov dword ptr [esp + 0x2c8], edx */ W32((u32)(r_esp+0x2c8u), r_edx);
    /* 007b5e77: mov edx, dword ptr [esp + 0xd4] */ r_edx = R32((u32)(r_esp+0xd4u));
    /* 007b5e7e: mov dword ptr [esp + 0x2cc], edx */ W32((u32)(r_esp+0x2ccu), r_edx);
    /* 007b5e85: mov edx, dword ptr [esp + 0xd8] */ r_edx = R32((u32)(r_esp+0xd8u));
    /* 007b5e8c: mov dword ptr [esp + 0x2d0], edx */ W32((u32)(r_esp+0x2d0u), r_edx);
    /* 007b5e93: mov edx, dword ptr [esp + 0xdc] */ r_edx = R32((u32)(r_esp+0xdcu));
    /* 007b5e9a: mov dword ptr [esp + 0x2d4], edx */ W32((u32)(r_esp+0x2d4u), r_edx);
    /* 007b5ea1: mov edx, dword ptr [esp + 0xe0] */ r_edx = R32((u32)(r_esp+0xe0u));
    /* 007b5ea8: mov dword ptr [esp + 0x2d8], edx */ W32((u32)(r_esp+0x2d8u), r_edx);
    /* 007b5eaf: mov ecx, dword ptr [esp + 0x3f0] */ r_ecx = R32((u32)(r_esp+0x3f0u));
    /* 007b5eb6: mov edx, dword ptr [ecx + ebp*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x1cu));
    /* 007b5eba: mov eax, dword ptr [ecx + ebp*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_ebp*4+0x24u));
    /* 007b5ebe: mov ecx, dword ptr [ecx + ebp*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 007b5ec2: mov dword ptr [esp + 0x2e0], 0 */ W32((u32)(r_esp+0x2e0u), 0x0u);
    /* 007b5ecd: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 007b5ed4: mov dword ptr [esp + 0x2e4], eax */ W32((u32)(r_esp+0x2e4u), r_eax);
    /* 007b5edb: mov dword ptr [esp + 0x2e8], ecx */ W32((u32)(r_esp+0x2e8u), r_ecx);
    /* 007b5ee2: lea ecx, [esp + 0x27c] */ r_ecx = (u32)(r_esp+0x27cu);
    /* 007b5ee9: lea edx, [esp + 0x2dc] */ r_edx = (u32)(r_esp+0x2dcu);
    /* 007b5ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5ef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5ef2: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b5ef7u); f_0083d2fc();
    /* 007b5ef7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5efc: jne 0x7b6290 */ if (!fZ) goto L_007b6290;
L_007b5f02:; BB(0x007b5f02);
    /* 007b5f02: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b5f09: jmp 0x7b6254 */ goto L_007b6254;
L_007b5f0e:; BB(0x007b5f0e);
    /* 007b5f0e: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5f15: mov ecx, dword ptr [edx + ebp*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x14u));
    /* 007b5f19: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5f1c: jne 0x7b61b3 */ if (!fZ) goto L_007b61b3;
L_007b5f22:; BB(0x007b5f22);
    /* 007b5f22: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5f29: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b5f2d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007b5f31: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 007b5f35: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007b5f39: mov edx, dword ptr [ecx + eax*4 + 0x24] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 007b5f3d: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 007b5f41: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b5f45: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007b5f49: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b5f4d: mov dword ptr [esp + 0x1f8], 0 */ W32((u32)(r_esp+0x1f8u), 0x0u);
    /* 007b5f58: mov dword ptr [esp + 0x1f4], ecx */ W32((u32)(r_esp+0x1f4u), r_ecx);
    /* 007b5f5f: mov dword ptr [esp + 0x1fc], edx */ W32((u32)(r_esp+0x1fcu), r_edx);
    /* 007b5f66: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007b5f6a: mov dword ptr [esp + 0x200], edx */ W32((u32)(r_esp+0x200u), r_edx);
    /* 007b5f71: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b5f75: mov dword ptr [esp + 0x204], edx */ W32((u32)(r_esp+0x204u), r_edx);
    /* 007b5f7c: mov dword ptr [esp + 0x20c], eax */ W32((u32)(r_esp+0x20cu), r_eax);
    /* 007b5f83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b5f85: mov dword ptr [esp + 0x208], edx */ W32((u32)(r_esp+0x208u), r_edx);
    /* 007b5f8c: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5f93: fld dword ptr [edx + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0x10u)));
    /* 007b5f97: mov ecx, dword ptr [edx + ebp*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x10u));
    /* 007b5f9b: fld dword ptr [edx + ebp*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0xcu)));
    /* 007b5f9f: mov ebp, dword ptr [edx + ebp*4 + 0xc] */ r_ebp = R32((u32)(r_edx+r_ebp*4+0xcu));
    /* 007b5fa3: mov dword ptr [esp + 0x28], 0x42480000 */ W32((u32)(r_esp+0x28u), 0x42480000u);
    /* 007b5fab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5fad: fchs  */ ST(0) = -ST(0);
    /* 007b5faf: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 007b5fb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5fb5: fchs  */ ST(0) = -ST(0);
    /* 007b5fb7: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007b5fbb: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 007b5fbf: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 007b5fc3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007b5fc7: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 007b5fcb: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 007b5fcf: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 007b5fd3: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b5fd7: mov dword ptr [esp + 0x34], 0x42480000 */ W32((u32)(r_esp+0x34u), 0x42480000u);
    /* 007b5fdf: mov dword ptr [esp + 0x40], 0x42480000 */ W32((u32)(r_esp+0x40u), 0x42480000u);
    /* 007b5fe7: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b5feb: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 007b5fef: mov dword ptr [esp + 0x4c], 0x42480000 */ W32((u32)(r_esp+0x4cu), 0x42480000u);
    /* 007b5ff7: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 007b5ffb: mov dword ptr [esp + 0x58], 0xc2480000 */ W32((u32)(r_esp+0x58u), 0xc2480000u);
    /* 007b6003: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 007b6007: mov dword ptr [esp + 0x64], 0xc2480000 */ W32((u32)(r_esp+0x64u), 0xc2480000u);
    /* 007b600f: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 007b6013: mov dword ptr [esp + 0x70], 0xc2480000 */ W32((u32)(r_esp+0x70u), 0xc2480000u);
    /* 007b601b: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 007b601f: mov dword ptr [esp + 0x7c], 0xc2480000 */ W32((u32)(r_esp+0x7cu), 0xc2480000u);
    /* 007b6027: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b602c: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 007b6033: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b6038u); f_0082d990();
    /* 007b6038: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b603f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6041: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b6046u); f_0082d8bc();
    /* 007b6046: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b604a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007b604c:; BB(0x007b604c);
    /* 007b604c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007b6050: lea edi, [edx + ebp] */ r_edi = (u32)(r_edx+r_ebp);
    /* 007b6053: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6054: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6055: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b605au); f_0083a610();
    /* 007b605a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b605d: lea edx, [esp + 0x204] */ r_edx = (u32)(r_esp+0x204u);
    /* 007b6064: mov ecx, edi */ r_ecx = r_edi;
    /* 007b6066: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b606bu); f_0082ebac();
    /* 007b606b: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b606e: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6071: jl 0x7b604c */ if ((fS!=fO)) goto L_007b604c;
L_007b6073:; BB(0x007b6073);
    /* 007b6073: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b6077: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b607cu); f_0082da80();
    /* 007b607c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007b6080: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007b6084: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 007b6088: mov dword ptr [esp + 0x210], edx */ W32((u32)(r_esp+0x210u), r_edx);
    /* 007b608f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b6093: mov dword ptr [esp + 0x214], ecx */ W32((u32)(r_esp+0x214u), r_ecx);
    /* 007b609a: mov dword ptr [esp + 0x218], ebp */ W32((u32)(r_esp+0x218u), r_ebp);
    /* 007b60a1: mov dword ptr [esp + 0x21c], edx */ W32((u32)(r_esp+0x21cu), r_edx);
    /* 007b60a8: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007b60ac: mov dword ptr [esp + 0x220], edx */ W32((u32)(r_esp+0x220u), r_edx);
    /* 007b60b3: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b60b7: mov dword ptr [esp + 0x224], edx */ W32((u32)(r_esp+0x224u), r_edx);
    /* 007b60be: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007b60c2: mov dword ptr [esp + 0x228], edx */ W32((u32)(r_esp+0x228u), r_edx);
    /* 007b60c9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007b60cd: mov dword ptr [esp + 0x22c], edx */ W32((u32)(r_esp+0x22cu), r_edx);
    /* 007b60d4: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 007b60d8: mov dword ptr [esp + 0x230], edx */ W32((u32)(r_esp+0x230u), r_edx);
    /* 007b60df: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b60e3: mov dword ptr [esp + 0x234], edx */ W32((u32)(r_esp+0x234u), r_edx);
    /* 007b60ea: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b60ee: mov dword ptr [esp + 0x238], edx */ W32((u32)(r_esp+0x238u), r_edx);
    /* 007b60f5: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b60f9: mov dword ptr [esp + 0x23c], edx */ W32((u32)(r_esp+0x23cu), r_edx);
    /* 007b6100: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b6104: mov dword ptr [esp + 0x240], edx */ W32((u32)(r_esp+0x240u), r_edx);
    /* 007b610b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b610f: mov dword ptr [esp + 0x244], edx */ W32((u32)(r_esp+0x244u), r_edx);
    /* 007b6116: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b611a: mov dword ptr [esp + 0x248], edx */ W32((u32)(r_esp+0x248u), r_edx);
    /* 007b6121: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007b6125: mov dword ptr [esp + 0x24c], edx */ W32((u32)(r_esp+0x24cu), r_edx);
    /* 007b612c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 007b6130: mov dword ptr [esp + 0x250], edx */ W32((u32)(r_esp+0x250u), r_edx);
    /* 007b6137: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007b613b: mov dword ptr [esp + 0x254], edx */ W32((u32)(r_esp+0x254u), r_edx);
    /* 007b6142: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 007b6146: mov dword ptr [esp + 0x258], edx */ W32((u32)(r_esp+0x258u), r_edx);
    /* 007b614d: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007b6151: mov dword ptr [esp + 0x25c], edx */ W32((u32)(r_esp+0x25cu), r_edx);
    /* 007b6158: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007b615c: mov dword ptr [esp + 0x260], edx */ W32((u32)(r_esp+0x260u), r_edx);
    /* 007b6163: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 007b6167: mov dword ptr [esp + 0x264], edx */ W32((u32)(r_esp+0x264u), r_edx);
    /* 007b616e: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 007b6172: mov dword ptr [esp + 0x268], edx */ W32((u32)(r_esp+0x268u), r_edx);
    /* 007b6179: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 007b6180: mov dword ptr [esp + 0x26c], edx */ W32((u32)(r_esp+0x26cu), r_edx);
    /* 007b6187: lea ecx, [esp + 0x210] */ r_ecx = (u32)(r_esp+0x210u);
    /* 007b618e: lea edx, [esp + 0x1f4] */ r_edx = (u32)(r_esp+0x1f4u);
    /* 007b6195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6196: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6197: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b619cu); f_0083d2fc();
    /* 007b619c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b619f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b61a1: jne 0x7b6269 */ if (!fZ) goto L_007b6269;
L_007b61a7:; BB(0x007b61a7);
    /* 007b61a7: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b61ae: jmp 0x7b6254 */ goto L_007b6254;
L_007b61b3:; BB(0x007b61b3);
    /* 007b61b3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b61b7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b61bb: mov eax, dword ptr [esp + 0x3d8] */ r_eax = R32((u32)(r_esp+0x3d8u));
    /* 007b61c2: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 007b61c6: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b61ca: mov ecx, dword ptr [eax + edx*4 + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 007b61ce: mov edx, dword ptr [eax + edx*4 + 0xc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 007b61d2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b61d6: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007b61da: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b61de: mov dword ptr [esp + 0x1d8], 0 */ W32((u32)(r_esp+0x1d8u), 0x0u);
    /* 007b61e9: mov dword ptr [esp + 0x1d4], ecx */ W32((u32)(r_esp+0x1d4u), r_ecx);
    /* 007b61f0: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007b61f4: mov dword ptr [esp + 0x1dc], ecx */ W32((u32)(r_esp+0x1dcu), r_ecx);
    /* 007b61fb: mov dword ptr [esp + 0x1e0], edx */ W32((u32)(r_esp+0x1e0u), r_edx);
    /* 007b6202: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b6209: mov ecx, dword ptr [edx + ebp*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0xcu));
    /* 007b620d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b6211: mov dword ptr [esp + 0x1e8], 0 */ W32((u32)(r_esp+0x1e8u), 0x0u);
    /* 007b621c: mov dword ptr [esp + 0x1e4], edx */ W32((u32)(r_esp+0x1e4u), r_edx);
    /* 007b6223: mov dword ptr [esp + 0x1ec], eax */ W32((u32)(r_esp+0x1ecu), r_eax);
    /* 007b622a: mov dword ptr [esp + 0x1f0], ecx */ W32((u32)(r_esp+0x1f0u), r_ecx);
    /* 007b6231: lea ecx, [esp + 0x1d4] */ r_ecx = (u32)(r_esp+0x1d4u);
    /* 007b6238: lea edx, [esp + 0x1e4] */ r_edx = (u32)(r_esp+0x1e4u);
    /* 007b623f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6241: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x7b6246u); f_0083dbd4();
    /* 007b6246: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b624b: jne 0x7b625c */ if (!fZ) goto L_007b625c;
L_007b624d:; BB(0x007b624d);
    /* 007b624d: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
L_007b6254:; BB(0x007b6254);
    /* 007b6254: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b6257: jmp 0x7b544e */ goto L_007b544e;
L_007b625c:; BB(0x007b625c);
    /* 007b625c: mov eax, ebx */ r_eax = r_ebx;
    /* 007b625e: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6264: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6268: ret  */ FN_RET(0x007b59c0); r_esp += 4; return;
L_007b6269:; BB(0x007b6269);
    /* 007b6269: mov eax, ebx */ r_eax = r_ebx;
    /* 007b626b: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6271: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6275: ret  */ FN_RET(0x007b59c0); r_esp += 4; return;
L_007b6276:; BB(0x007b6276);
    /* 007b6276: mov eax, ebx */ r_eax = r_ebx;
    /* 007b6278: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b627e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b627f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6280: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6281: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6282: ret  */ FN_RET(0x007b59c0); r_esp += 4; return;
L_007b6283:; BB(0x007b6283);
    /* 007b6283: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b6285: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b628b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b628c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b628d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b628e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b628f: ret  */ FN_RET(0x007b59c0); r_esp += 4; return;
L_007b6290:; BB(0x007b6290);
    /* 007b6290: mov eax, ebx */ r_eax = r_ebx;
    /* 007b6292: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6298: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b629a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b629b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b629c: ret  */ FN_RET(0x007b59c0); r_esp += 4; return;
}

void f_007b5c69(void)
{
    FN_ENTER(0x007b5c69);
    goto L_007b5c69;
L_007b5328:; BB(0x007b5328);
    /* 007b5328: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007b532b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b532e: cmp ebx, dword ptr [esp + 0x3dc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x3dcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5335: jge 0x7b6283 */ if ((fS==fO)) goto L_007b6283;
L_007b533b:; BB(0x007b533b);
    /* 007b533b: mov ebp, dword ptr [esp + 0x3d8] */ r_ebp = R32((u32)(r_esp+0x3d8u));
    /* 007b5342: mov edx, dword ptr [esp + 0x3e0] */ r_edx = R32((u32)(r_esp+0x3e0u));
    /* 007b5349: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b5350: mov edx, dword ptr [esp + 0x3e4] */ r_edx = R32((u32)(r_esp+0x3e4u));
    /* 007b5357: mov dword ptr [esp + 0x1a8], edx */ W32((u32)(r_esp+0x1a8u), r_edx);
    /* 007b535e: mov edx, dword ptr [esp + 0x3e8] */ r_edx = R32((u32)(r_esp+0x3e8u));
    /* 007b5365: mov dword ptr [esp + 0x1ac], edx */ W32((u32)(r_esp+0x1acu), r_edx);
    /* 007b536c: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007b536f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5371: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007b5373: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5375: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5377: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007b5379: mov edi, dword ptr [ebp + esi*4 + 0x18] */ r_edi = R32((u32)(r_ebp+r_esi*4+0x18u));
    /* 007b537d: mov edx, dword ptr [ebp + esi*4] */ r_edx = R32((u32)(r_ebp+r_esi*4));
    /* 007b5381: mov dword ptr [esp + 0x1b0], edx */ W32((u32)(r_esp+0x1b0u), r_edx);
    /* 007b5388: mov edx, dword ptr [ebp + esi*4 + 4] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x4u));
    /* 007b538c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b5391: mov dword ptr [esp + 0x1b4], edx */ W32((u32)(r_esp+0x1b4u), r_edx);
    /* 007b5398: mov edx, dword ptr [ebp + esi*4 + 8] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x8u));
    /* 007b539c: mov dword ptr [esp + 0x1b8], edx */ W32((u32)(r_esp+0x1b8u), r_edx);
    /* 007b53a3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b53a8u); f_0082d990();
    /* 007b53a8: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b53af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b53b1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b53b6u); f_0082d8bc();
    /* 007b53b6: lea ecx, [esp + 0x1b0] */ r_ecx = (u32)(r_esp+0x1b0u);
    /* 007b53bd: lea edx, [esp + 0x1b0] */ r_edx = (u32)(r_esp+0x1b0u);
    /* 007b53c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b53c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b53c6: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b53cbu); f_0083a610();
    /* 007b53cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b53ce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b53d3u); f_0082da80();
    /* 007b53d3: lea ecx, [esp + 0x1a4] */ r_ecx = (u32)(r_esp+0x1a4u);
    /* 007b53da: lea edx, [esp + 0x1b0] */ r_edx = (u32)(r_esp+0x1b0u);
    /* 007b53e1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b53e6u); f_0082ebac();
    /* 007b53e6: mov edx, dword ptr [esp + 0x1a4] */ r_edx = R32((u32)(r_esp+0x1a4u));
    /* 007b53ed: mov ecx, dword ptr [esp + 0x1a8] */ r_ecx = R32((u32)(r_esp+0x1a8u));
    /* 007b53f4: mov dword ptr [ebp + esi*4 + 0x1c], edx */ W32((u32)(r_ebp+r_esi*4+0x1cu), r_edx);
    /* 007b53f8: mov edx, dword ptr [esp + 0x1ac] */ r_edx = R32((u32)(r_esp+0x1acu));
    /* 007b53ff: mov dword ptr [ebp + esi*4 + 0x20], ecx */ W32((u32)(r_ebp+r_esi*4+0x20u), r_ecx);
    /* 007b5403: mov ecx, dword ptr [esp + 0x3f4] */ r_ecx = R32((u32)(r_esp+0x3f4u));
    /* 007b540a: mov dword ptr [ebp + esi*4 + 0x24], edx */ W32((u32)(r_ebp+r_esi*4+0x24u), r_edx);
    /* 007b540e: mov edx, dword ptr [esp + 0x3e0] */ r_edx = R32((u32)(r_esp+0x3e0u));
    /* 007b5415: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b541c: mov edx, dword ptr [esp + 0x3e4] */ r_edx = R32((u32)(r_esp+0x3e4u));
    /* 007b5423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5425: mov dword ptr [esp + 0x1a8], edx */ W32((u32)(r_esp+0x1a8u), r_edx);
    /* 007b542c: mov edx, dword ptr [esp + 0x3e8] */ r_edx = R32((u32)(r_esp+0x3e8u));
    /* 007b5433: mov dword ptr [esp + 0x1ac], edx */ W32((u32)(r_esp+0x1acu), r_edx);
    /* 007b543a: mov edx, edi */ r_edx = r_edi;
    /* 007b543c: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b543f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b5443: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007b5447: mov esi, eax */ r_esi = r_eax;
    /* 007b5449: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007b544c: mov eax, ecx */ r_eax = r_ecx;
L_007b544e:; BB(0x007b544e);
    /* 007b544e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5450: jge 0x7b5328 */ if ((fS==fO)) goto L_007b5328;
L_007b5456:; BB(0x007b5456);
    /* 007b5456: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 007b5459: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545b: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b545f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5461: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5463: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 007b5467: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b5469: add ebx, dword ptr [esp + 0x3f0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x3f0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b5470: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 007b5473: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5475: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5477: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b547a: je 0x7b6254 */ if (fZ) goto L_007b6254;
L_007b5480:; BB(0x007b5480);
    /* 007b5480: test cl, 6 */ {  u32 a = (u8)r_ecx; u32 b = 0x6u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b5483: je 0x7b6254 */ if (fZ) goto L_007b6254;
L_007b5489:; BB(0x007b5489);
    /* 007b5489: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007b548d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b548f: je 0x7b549d */ if (fZ) goto L_007b549d;
L_007b5491:; BB(0x007b5491);
    /* 007b5491: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5497: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b549d:; BB(0x007b549d);
    /* 007b549d: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54a0: je 0x7b54ae */ if (fZ) goto L_007b54ae;
L_007b54a2:; BB(0x007b54a2);
    /* 007b54a2: test edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54a8: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54ae:; BB(0x007b54ae);
    /* 007b54ae: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54b4: je 0x7b54c2 */ if (fZ) goto L_007b54c2;
L_007b54b6:; BB(0x007b54b6);
    /* 007b54b6: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54bc: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54c2:; BB(0x007b54c2);
    /* 007b54c2: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54c5: je 0x7b54d3 */ if (fZ) goto L_007b54d3;
L_007b54c7:; BB(0x007b54c7);
    /* 007b54c7: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54cd: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54d3:; BB(0x007b54d3);
    /* 007b54d3: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54d9: je 0x7b54e7 */ if (fZ) goto L_007b54e7;
L_007b54db:; BB(0x007b54db);
    /* 007b54db: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54e1: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54e7:; BB(0x007b54e7);
    /* 007b54e7: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b54ea: je 0x7b54f8 */ if (fZ) goto L_007b54f8;
L_007b54ec:; BB(0x007b54ec);
    /* 007b54ec: test edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54f2: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b54f8:; BB(0x007b54f8);
    /* 007b54f8: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b54fe: je 0x7b550c */ if (fZ) goto L_007b550c;
L_007b5500:; BB(0x007b5500);
    /* 007b5500: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5506: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b550c:; BB(0x007b550c);
    /* 007b550c: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b550f: je 0x7b551d */ if (fZ) goto L_007b551d;
L_007b5511:; BB(0x007b5511);
    /* 007b5511: test edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5517: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b551d:; BB(0x007b551d);
    /* 007b551d: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5523: je 0x7b5531 */ if (fZ) goto L_007b5531;
L_007b5525:; BB(0x007b5525);
    /* 007b5525: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b552b: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b5531:; BB(0x007b5531);
    /* 007b5531: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5537: je 0x7b5545 */ if (fZ) goto L_007b5545;
L_007b5539:; BB(0x007b5539);
    /* 007b5539: test edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b553f: jne 0x7b6254 */ if (!fZ) goto L_007b6254;
L_007b5545:; BB(0x007b5545);
    /* 007b5545: mov edx, dword ptr [esp + 0x3f8] */ r_edx = R32((u32)(r_esp+0x3f8u));
    /* 007b554c: mov ecx, dword ptr [esp + 0x3f0] */ r_ecx = R32((u32)(r_esp+0x3f0u));
    /* 007b5553: mov dword ptr [esp + 0x1bc], edx */ W32((u32)(r_esp+0x1bcu), r_edx);
    /* 007b555a: mov edx, dword ptr [esp + 0x3fc] */ r_edx = R32((u32)(r_esp+0x3fcu));
    /* 007b5561: mov dword ptr [esp + 0x1c0], edx */ W32((u32)(r_esp+0x1c0u), r_edx);
    /* 007b5568: mov edx, dword ptr [esp + 0x400] */ r_edx = R32((u32)(r_esp+0x400u));
    /* 007b556f: mov dword ptr [esp + 0x1c4], edx */ W32((u32)(r_esp+0x1c4u), r_edx);
    /* 007b5576: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
    /* 007b5579: mov dword ptr [esp + 0x1c8], edx */ W32((u32)(r_esp+0x1c8u), r_edx);
    /* 007b5580: mov edx, dword ptr [ecx + ebp*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 007b5584: mov dword ptr [esp + 0x1cc], edx */ W32((u32)(r_esp+0x1ccu), r_edx);
    /* 007b558b: mov edx, dword ptr [ecx + ebp*4 + 8] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 007b558f: mov dword ptr [esp + 0x1d0], edx */ W32((u32)(r_esp+0x1d0u), r_edx);
    /* 007b5596: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b559b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b55a0u); f_0082d990();
    /* 007b55a0: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b55a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b55a9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b55aeu); f_0082d8bc();
    /* 007b55ae: lea ecx, [esp + 0x1c8] */ r_ecx = (u32)(r_esp+0x1c8u);
    /* 007b55b5: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 007b55bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b55bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b55be: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b55c3u); f_0083a610();
    /* 007b55c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b55c6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b55cbu); f_0082da80();
    /* 007b55cb: lea ecx, [esp + 0x1bc] */ r_ecx = (u32)(r_esp+0x1bcu);
    /* 007b55d2: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 007b55d9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b55deu); f_0082ebac();
    /* 007b55de: mov ecx, dword ptr [esp + 0x1bc] */ r_ecx = R32((u32)(r_esp+0x1bcu));
    /* 007b55e5: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b55ec: mov eax, dword ptr [esp + 0x1c4] */ r_eax = R32((u32)(r_esp+0x1c4u));
    /* 007b55f3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007b55f7: mov dword ptr [edx + ebp*4 + 0x1c], ecx */ W32((u32)(r_edx+r_ebp*4+0x1cu), r_ecx);
    /* 007b55fb: mov ecx, dword ptr [esp + 0x1c0] */ r_ecx = R32((u32)(r_esp+0x1c0u));
    /* 007b5602: mov dword ptr [edx + ebp*4 + 0x20], ecx */ W32((u32)(r_edx+r_ebp*4+0x20u), r_ecx);
    /* 007b5606: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007b560a: mov dword ptr [edx + ebp*4 + 0x24], eax */ W32((u32)(r_edx+r_ebp*4+0x24u), r_eax);
    /* 007b560e: mov edx, dword ptr [esp + 0x3f8] */ r_edx = R32((u32)(r_esp+0x3f8u));
    /* 007b5615: mov dword ptr [esp + 0x1bc], edx */ W32((u32)(r_esp+0x1bcu), r_edx);
    /* 007b561c: mov edx, dword ptr [esp + 0x3fc] */ r_edx = R32((u32)(r_esp+0x3fcu));
    /* 007b5623: mov dword ptr [esp + 0x1c0], edx */ W32((u32)(r_esp+0x1c0u), r_edx);
    /* 007b562a: mov edx, dword ptr [esp + 0x400] */ r_edx = R32((u32)(r_esp+0x400u));
    /* 007b5631: mov dword ptr [esp + 0x1c4], edx */ W32((u32)(r_esp+0x1c4u), r_edx);
    /* 007b5638: mov edx, dword ptr [esp + 0x3d8] */ r_edx = R32((u32)(r_esp+0x3d8u));
    /* 007b563f: mov edx, dword ptr [edx + ecx*4 + 0x14] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 007b5643: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5646: jne 0x7b5f0e */ if (!fZ) goto L_007b5f0e;
L_007b564c:; BB(0x007b564c);
    /* 007b564c: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5653: mov ecx, dword ptr [edx + ebp*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x14u));
    /* 007b5657: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b565a: jne 0x7b5bf2 */ if (!fZ) goto L_007b5bf2;
L_007b5660:; BB(0x007b5660);
    /* 007b5660: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5667: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b566b: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 007b566f: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 007b5673: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 007b5677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5679: fchs  */ ST(0) = -ST(0);
    /* 007b567b: mov dword ptr [esp + 0x2ec], eax */ W32((u32)(r_esp+0x2ecu), r_eax);
    /* 007b5682: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 007b5686: mov dword ptr [esp + 0x2f4], eax */ W32((u32)(r_esp+0x2f4u), r_eax);
    /* 007b568d: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 007b5691: mov edx, dword ptr [ecx + edx*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 007b5695: fst dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0));
    /* 007b569c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b569e: fchs  */ ST(0) = -ST(0);
    /* 007b56a0: mov dword ptr [esp + 0xec], edx */ W32((u32)(r_esp+0xecu), r_edx);
    /* 007b56a7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b56ac: mov dword ptr [esp + 0x2f0], 0 */ W32((u32)(r_esp+0x2f0u), 0x0u);
    /* 007b56b7: mov dword ptr [esp + 0xe8], 0x42480000 */ W32((u32)(r_esp+0xe8u), 0x42480000u);
    /* 007b56c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56c4: fst dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0));
    /* 007b56cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56cd: fst dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0));
    /* 007b56d4: fst dword ptr [esp + 0x104] */ W_F32((u32)(r_esp+0x104u), ST(0));
    /* 007b56db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b56dd: fst dword ptr [esp + 0x114] */ W_F32((u32)(r_esp+0x114u), ST(0));
    /* 007b56e4: fstp dword ptr [esp + 0x120] */ W_F32((u32)(r_esp+0x120u), ST(0)); FPOP();
    /* 007b56eb: fst dword ptr [esp + 0x128] */ W_F32((u32)(r_esp+0x128u), ST(0));
    /* 007b56f2: fstp dword ptr [esp + 0x134] */ W_F32((u32)(r_esp+0x134u), ST(0)); FPOP();
    /* 007b56f9: mov dword ptr [esp + 0xf4], 0x42480000 */ W32((u32)(r_esp+0xf4u), 0x42480000u);
    /* 007b5704: mov dword ptr [esp + 0x100], 0x42480000 */ W32((u32)(r_esp+0x100u), 0x42480000u);
    /* 007b570f: mov dword ptr [esp + 0xfc], eax */ W32((u32)(r_esp+0xfcu), r_eax);
    /* 007b5716: mov dword ptr [esp + 0x108], eax */ W32((u32)(r_esp+0x108u), r_eax);
    /* 007b571d: mov dword ptr [esp + 0x10c], 0x42480000 */ W32((u32)(r_esp+0x10cu), 0x42480000u);
    /* 007b5728: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 007b572f: mov dword ptr [esp + 0x118], 0xc2480000 */ W32((u32)(r_esp+0x118u), 0xc2480000u);
    /* 007b573a: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 007b5741: mov dword ptr [esp + 0x124], 0xc2480000 */ W32((u32)(r_esp+0x124u), 0xc2480000u);
    /* 007b574c: mov dword ptr [esp + 0x12c], eax */ W32((u32)(r_esp+0x12cu), r_eax);
    /* 007b5753: mov dword ptr [esp + 0x130], 0xc2480000 */ W32((u32)(r_esp+0x130u), 0xc2480000u);
    /* 007b575e: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 007b5765: mov dword ptr [esp + 0x13c], 0xc2480000 */ W32((u32)(r_esp+0x13cu), 0xc2480000u);
    /* 007b5770: mov dword ptr [esp + 0x140], edx */ W32((u32)(r_esp+0x140u), r_edx);
    /* 007b5777: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b577cu); f_0082d990();
    /* 007b577c: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b5783: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5785: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b578au); f_0082d8bc();
    /* 007b578a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007b578e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5794: mov esi, eax */ r_esi = r_eax;
L_007b5796:; BB(0x007b5796);
    /* 007b5796: lea edx, [esp + 0xe4] */ r_edx = (u32)(r_esp+0xe4u);
    /* 007b579d: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b57a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b57a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b57a2: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b57a7u); f_0083a610();
    /* 007b57a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b57aa: lea edx, [esp + 0x2ec] */ r_edx = (u32)(r_esp+0x2ecu);
    /* 007b57b1: mov ecx, edi */ r_ecx = r_edi;
    /* 007b57b3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b57b8u); f_0082ebac();
    /* 007b57b8: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b57bb: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b57be: jl 0x7b5796 */ if ((fS!=fO)) goto L_007b5796;
L_007b57c0:; BB(0x007b57c0);
    /* 007b57c0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b57c4: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b57c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b57cdu); f_0082da80();
    /* 007b57cd: mov edx, dword ptr [esp + 0xe4] */ r_edx = R32((u32)(r_esp+0xe4u));
    /* 007b57d4: mov ecx, dword ptr [esp + 0xe8] */ r_ecx = R32((u32)(r_esp+0xe8u));
    /* 007b57db: mov dword ptr [esp + 0x2f8], edx */ W32((u32)(r_esp+0x2f8u), r_edx);
    /* 007b57e2: mov edx, dword ptr [esp + 0xec] */ r_edx = R32((u32)(r_esp+0xecu));
    /* 007b57e9: mov dword ptr [esp + 0x2fc], ecx */ W32((u32)(r_esp+0x2fcu), r_ecx);
    /* 007b57f0: mov dword ptr [esp + 0x300], edx */ W32((u32)(r_esp+0x300u), r_edx);
    /* 007b57f7: mov edx, dword ptr [esp + 0xf0] */ r_edx = R32((u32)(r_esp+0xf0u));
    /* 007b57fe: mov dword ptr [esp + 0x304], edx */ W32((u32)(r_esp+0x304u), r_edx);
    /* 007b5805: mov edx, dword ptr [esp + 0xf4] */ r_edx = R32((u32)(r_esp+0xf4u));
    /* 007b580c: mov dword ptr [esp + 0x308], edx */ W32((u32)(r_esp+0x308u), r_edx);
    /* 007b5813: mov edx, dword ptr [esp + 0xf8] */ r_edx = R32((u32)(r_esp+0xf8u));
    /* 007b581a: mov dword ptr [esp + 0x30c], edx */ W32((u32)(r_esp+0x30cu), r_edx);
    /* 007b5821: mov edx, dword ptr [esp + 0xfc] */ r_edx = R32((u32)(r_esp+0xfcu));
    /* 007b5828: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 007b582f: mov edx, dword ptr [esp + 0x100] */ r_edx = R32((u32)(r_esp+0x100u));
    /* 007b5836: mov dword ptr [esp + 0x314], edx */ W32((u32)(r_esp+0x314u), r_edx);
    /* 007b583d: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 007b5844: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 007b584b: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 007b5852: mov dword ptr [esp + 0x31c], edx */ W32((u32)(r_esp+0x31cu), r_edx);
    /* 007b5859: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 007b5860: mov dword ptr [esp + 0x320], edx */ W32((u32)(r_esp+0x320u), r_edx);
    /* 007b5867: mov edx, dword ptr [esp + 0x110] */ r_edx = R32((u32)(r_esp+0x110u));
    /* 007b586e: mov dword ptr [esp + 0x324], edx */ W32((u32)(r_esp+0x324u), r_edx);
    /* 007b5875: mov edx, dword ptr [esp + 0x114] */ r_edx = R32((u32)(r_esp+0x114u));
    /* 007b587c: mov dword ptr [esp + 0x328], edx */ W32((u32)(r_esp+0x328u), r_edx);
    /* 007b5883: mov edx, dword ptr [esp + 0x118] */ r_edx = R32((u32)(r_esp+0x118u));
    /* 007b588a: mov dword ptr [esp + 0x32c], edx */ W32((u32)(r_esp+0x32cu), r_edx);
    /* 007b5891: mov edx, dword ptr [esp + 0x11c] */ r_edx = R32((u32)(r_esp+0x11cu));
    /* 007b5898: mov dword ptr [esp + 0x330], edx */ W32((u32)(r_esp+0x330u), r_edx);
    /* 007b589f: mov edx, dword ptr [esp + 0x120] */ r_edx = R32((u32)(r_esp+0x120u));
    /* 007b58a6: mov dword ptr [esp + 0x334], edx */ W32((u32)(r_esp+0x334u), r_edx);
    /* 007b58ad: mov edx, dword ptr [esp + 0x124] */ r_edx = R32((u32)(r_esp+0x124u));
    /* 007b58b4: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 007b58bb: mov edx, dword ptr [esp + 0x128] */ r_edx = R32((u32)(r_esp+0x128u));
    /* 007b58c2: mov dword ptr [esp + 0x33c], edx */ W32((u32)(r_esp+0x33cu), r_edx);
    /* 007b58c9: mov edx, dword ptr [esp + 0x12c] */ r_edx = R32((u32)(r_esp+0x12cu));
    /* 007b58d0: mov dword ptr [esp + 0x340], edx */ W32((u32)(r_esp+0x340u), r_edx);
    /* 007b58d7: mov edx, dword ptr [esp + 0x130] */ r_edx = R32((u32)(r_esp+0x130u));
    /* 007b58de: mov dword ptr [esp + 0x344], edx */ W32((u32)(r_esp+0x344u), r_edx);
    /* 007b58e5: mov edx, dword ptr [esp + 0x134] */ r_edx = R32((u32)(r_esp+0x134u));
    /* 007b58ec: mov dword ptr [esp + 0x348], edx */ W32((u32)(r_esp+0x348u), r_edx);
    /* 007b58f3: mov edx, dword ptr [esp + 0x138] */ r_edx = R32((u32)(r_esp+0x138u));
    /* 007b58fa: mov dword ptr [esp + 0x34c], edx */ W32((u32)(r_esp+0x34cu), r_edx);
    /* 007b5901: mov edx, dword ptr [esp + 0x13c] */ r_edx = R32((u32)(r_esp+0x13cu));
    /* 007b5908: mov dword ptr [esp + 0x350], edx */ W32((u32)(r_esp+0x350u), r_edx);
    /* 007b590f: mov edx, dword ptr [esp + 0x140] */ r_edx = R32((u32)(r_esp+0x140u));
    /* 007b5916: mov dword ptr [esp + 0x354], edx */ W32((u32)(r_esp+0x354u), r_edx);
    /* 007b591d: mov eax, dword ptr [esp + 0x3f0] */ r_eax = R32((u32)(r_esp+0x3f0u));
    /* 007b5924: mov edx, dword ptr [eax + ebp*4 + 0x1c] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x1cu));
    /* 007b5928: fld dword ptr [eax + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4+0x10u)));
    /* 007b592c: fld dword ptr [eax + ebp*4 + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4+0xcu)));
    /* 007b5930: mov dword ptr [esp + 0x358], edx */ W32((u32)(r_esp+0x358u), r_edx);
    /* 007b5937: mov edx, dword ptr [eax + ebp*4 + 0x24] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x24u));
    /* 007b593b: mov dword ptr [esp + 0x35c], 0 */ W32((u32)(r_esp+0x35cu), 0x0u);
    /* 007b5946: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5948: fchs  */ ST(0) = -ST(0);
    /* 007b594a: mov dword ptr [esp + 0x360], edx */ W32((u32)(r_esp+0x360u), r_edx);
    /* 007b5951: mov edx, dword ptr [eax + ebp*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x10u));
    /* 007b5955: mov ebp, dword ptr [eax + ebp*4 + 0xc] */ r_ebp = R32((u32)(r_eax+r_ebp*4+0xcu));
    /* 007b5959: fst dword ptr [esp + 0x144] */ W_F32((u32)(r_esp+0x144u), ST(0));
    /* 007b5960: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5962: fchs  */ ST(0) = -ST(0);
    /* 007b5964: mov dword ptr [esp + 0x148], 0x42480000 */ W32((u32)(r_esp+0x148u), 0x42480000u);
    /* 007b596f: fst dword ptr [esp + 0x158] */ W_F32((u32)(r_esp+0x158u), ST(0));
    /* 007b5976: fst dword ptr [esp + 0x164] */ W_F32((u32)(r_esp+0x164u), ST(0));
    /* 007b597d: fst dword ptr [esp + 0x188] */ W_F32((u32)(r_esp+0x188u), ST(0));
    /* 007b5984: fstp dword ptr [esp + 0x194] */ W_F32((u32)(r_esp+0x194u), ST(0)); FPOP();
    /* 007b598b: mov dword ptr [esp + 0x14c], ebp */ W32((u32)(r_esp+0x14cu), r_ebp);
    /* 007b5992: fst dword ptr [esp + 0x150] */ W_F32((u32)(r_esp+0x150u), ST(0));
    /* 007b5999: fst dword ptr [esp + 0x174] */ W_F32((u32)(r_esp+0x174u), ST(0));
    /* 007b59a0: fstp dword ptr [esp + 0x180] */ W_F32((u32)(r_esp+0x180u), ST(0)); FPOP();
    /* 007b59a7: mov dword ptr [esp + 0x15c], edx */ W32((u32)(r_esp+0x15cu), r_edx);
    /* 007b59ae: mov dword ptr [esp + 0x154], 0x42480000 */ W32((u32)(r_esp+0x154u), 0x42480000u);
    /* 007b59b9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b59be: mov dword ptr [esp + 0x160], 0x42480000 */ W32((u32)(r_esp+0x160u), 0x42480000u);
    /* 007b59c9: mov dword ptr [esp + 0x168], edx */ W32((u32)(r_esp+0x168u), r_edx);
    /* 007b59d0: mov dword ptr [esp + 0x170], ebp */ W32((u32)(r_esp+0x170u), r_ebp);
    /* 007b59d7: mov dword ptr [esp + 0x16c], 0x42480000 */ W32((u32)(r_esp+0x16cu), 0x42480000u);
    /* 007b59e2: mov dword ptr [esp + 0x178], 0xc2480000 */ W32((u32)(r_esp+0x178u), 0xc2480000u);
    /* 007b59ed: mov dword ptr [esp + 0x17c], ebp */ W32((u32)(r_esp+0x17cu), r_ebp);
    /* 007b59f4: mov dword ptr [esp + 0x18c], edx */ W32((u32)(r_esp+0x18cu), r_edx);
    /* 007b59fb: mov dword ptr [esp + 0x184], 0xc2480000 */ W32((u32)(r_esp+0x184u), 0xc2480000u);
    /* 007b5a06: mov dword ptr [esp + 0x190], 0xc2480000 */ W32((u32)(r_esp+0x190u), 0xc2480000u);
    /* 007b5a11: mov dword ptr [esp + 0x198], edx */ W32((u32)(r_esp+0x198u), r_edx);
    /* 007b5a18: mov dword ptr [esp + 0x1a0], ebp */ W32((u32)(r_esp+0x1a0u), r_ebp);
    /* 007b5a1f: mov dword ptr [esp + 0x19c], 0xc2480000 */ W32((u32)(r_esp+0x19cu), 0xc2480000u);
    /* 007b5a2a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b5a2fu); f_0082d990();
    /* 007b5a2f: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b5a36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5a38: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b5a3du); f_0082d8bc();
    /* 007b5a3d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5a41: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007b5a43:; BB(0x007b5a43);
    /* 007b5a43: lea edx, [esp + 0x144] */ r_edx = (u32)(r_esp+0x144u);
    /* 007b5a4a: lea edi, [edx + ebp] */ r_edi = (u32)(r_edx+r_ebp);
    /* 007b5a4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5a4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5a4f: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b5a54u); f_0083a610();
    /* 007b5a54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5a57: lea edx, [esp + 0x358] */ r_edx = (u32)(r_esp+0x358u);
    /* 007b5a5e: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5a60: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b5a65u); f_0082ebac();
    /* 007b5a65: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b5a68: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5a6b: jl 0x7b5a43 */ if ((fS!=fO)) goto L_007b5a43;
L_007b5a6d:; BB(0x007b5a6d);
    /* 007b5a6d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b5a71: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b5a76u); f_0082da80();
    /* 007b5a76: mov edx, dword ptr [esp + 0x144] */ r_edx = R32((u32)(r_esp+0x144u));
    /* 007b5a7d: mov ecx, dword ptr [esp + 0x148] */ r_ecx = R32((u32)(r_esp+0x148u));
    /* 007b5a84: mov ebp, dword ptr [esp + 0x14c] */ r_ebp = R32((u32)(r_esp+0x14cu));
    /* 007b5a8b: mov dword ptr [esp + 0x364], edx */ W32((u32)(r_esp+0x364u), r_edx);
    /* 007b5a92: mov edx, dword ptr [esp + 0x150] */ r_edx = R32((u32)(r_esp+0x150u));
    /* 007b5a99: mov dword ptr [esp + 0x368], ecx */ W32((u32)(r_esp+0x368u), r_ecx);
    /* 007b5aa0: mov dword ptr [esp + 0x36c], ebp */ W32((u32)(r_esp+0x36cu), r_ebp);
    /* 007b5aa7: mov dword ptr [esp + 0x370], edx */ W32((u32)(r_esp+0x370u), r_edx);
    /* 007b5aae: mov edx, dword ptr [esp + 0x154] */ r_edx = R32((u32)(r_esp+0x154u));
    /* 007b5ab5: mov dword ptr [esp + 0x374], edx */ W32((u32)(r_esp+0x374u), r_edx);
    /* 007b5abc: mov edx, dword ptr [esp + 0x158] */ r_edx = R32((u32)(r_esp+0x158u));
    /* 007b5ac3: mov dword ptr [esp + 0x378], edx */ W32((u32)(r_esp+0x378u), r_edx);
    /* 007b5aca: mov edx, dword ptr [esp + 0x15c] */ r_edx = R32((u32)(r_esp+0x15cu));
    /* 007b5ad1: mov dword ptr [esp + 0x37c], edx */ W32((u32)(r_esp+0x37cu), r_edx);
    /* 007b5ad8: mov edx, dword ptr [esp + 0x160] */ r_edx = R32((u32)(r_esp+0x160u));
    /* 007b5adf: mov dword ptr [esp + 0x380], edx */ W32((u32)(r_esp+0x380u), r_edx);
    /* 007b5ae6: mov edx, dword ptr [esp + 0x164] */ r_edx = R32((u32)(r_esp+0x164u));
    /* 007b5aed: mov dword ptr [esp + 0x384], edx */ W32((u32)(r_esp+0x384u), r_edx);
    /* 007b5af4: mov edx, dword ptr [esp + 0x168] */ r_edx = R32((u32)(r_esp+0x168u));
    /* 007b5afb: mov dword ptr [esp + 0x388], edx */ W32((u32)(r_esp+0x388u), r_edx);
    /* 007b5b02: mov edx, dword ptr [esp + 0x16c] */ r_edx = R32((u32)(r_esp+0x16cu));
    /* 007b5b09: mov dword ptr [esp + 0x38c], edx */ W32((u32)(r_esp+0x38cu), r_edx);
    /* 007b5b10: mov edx, dword ptr [esp + 0x170] */ r_edx = R32((u32)(r_esp+0x170u));
    /* 007b5b17: mov dword ptr [esp + 0x390], edx */ W32((u32)(r_esp+0x390u), r_edx);
    /* 007b5b1e: mov edx, dword ptr [esp + 0x174] */ r_edx = R32((u32)(r_esp+0x174u));
    /* 007b5b25: mov dword ptr [esp + 0x394], edx */ W32((u32)(r_esp+0x394u), r_edx);
    /* 007b5b2c: mov edx, dword ptr [esp + 0x178] */ r_edx = R32((u32)(r_esp+0x178u));
    /* 007b5b33: mov dword ptr [esp + 0x398], edx */ W32((u32)(r_esp+0x398u), r_edx);
    /* 007b5b3a: mov edx, dword ptr [esp + 0x17c] */ r_edx = R32((u32)(r_esp+0x17cu));
    /* 007b5b41: mov dword ptr [esp + 0x39c], edx */ W32((u32)(r_esp+0x39cu), r_edx);
    /* 007b5b48: mov edx, dword ptr [esp + 0x180] */ r_edx = R32((u32)(r_esp+0x180u));
    /* 007b5b4f: mov dword ptr [esp + 0x3a0], edx */ W32((u32)(r_esp+0x3a0u), r_edx);
    /* 007b5b56: mov edx, dword ptr [esp + 0x184] */ r_edx = R32((u32)(r_esp+0x184u));
    /* 007b5b5d: mov dword ptr [esp + 0x3a4], edx */ W32((u32)(r_esp+0x3a4u), r_edx);
    /* 007b5b64: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 007b5b6b: mov dword ptr [esp + 0x3a8], edx */ W32((u32)(r_esp+0x3a8u), r_edx);
    /* 007b5b72: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 007b5b79: mov dword ptr [esp + 0x3ac], edx */ W32((u32)(r_esp+0x3acu), r_edx);
    /* 007b5b80: mov edx, dword ptr [esp + 0x190] */ r_edx = R32((u32)(r_esp+0x190u));
    /* 007b5b87: mov dword ptr [esp + 0x3b0], edx */ W32((u32)(r_esp+0x3b0u), r_edx);
    /* 007b5b8e: mov edx, dword ptr [esp + 0x194] */ r_edx = R32((u32)(r_esp+0x194u));
    /* 007b5b95: mov dword ptr [esp + 0x3b4], edx */ W32((u32)(r_esp+0x3b4u), r_edx);
    /* 007b5b9c: mov edx, dword ptr [esp + 0x198] */ r_edx = R32((u32)(r_esp+0x198u));
    /* 007b5ba3: mov dword ptr [esp + 0x3b8], edx */ W32((u32)(r_esp+0x3b8u), r_edx);
    /* 007b5baa: mov edx, dword ptr [esp + 0x19c] */ r_edx = R32((u32)(r_esp+0x19cu));
    /* 007b5bb1: mov dword ptr [esp + 0x3bc], edx */ W32((u32)(r_esp+0x3bcu), r_edx);
    /* 007b5bb8: mov edx, dword ptr [esp + 0x1a0] */ r_edx = R32((u32)(r_esp+0x1a0u));
    /* 007b5bbf: mov dword ptr [esp + 0x3c0], edx */ W32((u32)(r_esp+0x3c0u), r_edx);
    /* 007b5bc6: lea ecx, [esp + 0x2f8] */ r_ecx = (u32)(r_esp+0x2f8u);
    /* 007b5bcd: lea edx, [esp + 0x364] */ r_edx = (u32)(r_esp+0x364u);
    /* 007b5bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5bd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5bd6: call 0x844540 */ r_esp -= 4; W32(r_esp, 0x7b5bdbu); f_00844540();
    /* 007b5bdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5be0: jne 0x7b6276 */ if (!fZ) goto L_007b6276;
L_007b5be6:; BB(0x007b5be6);
    /* 007b5be6: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b5bed: jmp 0x7b6254 */ goto L_007b6254;
L_007b5bf2:; BB(0x007b5bf2);
    /* 007b5bf2: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5bf9: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b5bfd: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 007b5c01: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 007b5c05: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 007b5c09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c0b: fchs  */ ST(0) = -ST(0);
    /* 007b5c0d: mov dword ptr [esp + 0x270], eax */ W32((u32)(r_esp+0x270u), r_eax);
    /* 007b5c14: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 007b5c18: mov dword ptr [esp + 0x278], eax */ W32((u32)(r_esp+0x278u), r_eax);
    /* 007b5c1f: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 007b5c23: mov edx, dword ptr [ecx + edx*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 007b5c27: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 007b5c2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c30: fchs  */ ST(0) = -ST(0);
    /* 007b5c32: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 007b5c39: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b5c3e: mov dword ptr [esp + 0x274], 0 */ W32((u32)(r_esp+0x274u), 0x0u);
    /* 007b5c49: mov dword ptr [esp + 0x88], 0x42480000 */ W32((u32)(r_esp+0x88u), 0x42480000u);
    /* 007b5c54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c56: fst dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0));
    /* 007b5c5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c5f: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 007b5c66: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
L_007b5c69:; BB(0x007b5c69);
    /* 007b5c69: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 007b5c6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007b5c6c: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007b5c6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5c6e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007b5c6f: fst dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0));
    /* 007b5c76: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 007b5c7d: fst dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0));
    /* 007b5c84: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 007b5c8b: mov dword ptr [esp + 0x94], 0x42480000 */ W32((u32)(r_esp+0x94u), 0x42480000u);
    /* 007b5c96: mov dword ptr [esp + 0xa0], 0x42480000 */ W32((u32)(r_esp+0xa0u), 0x42480000u);
    /* 007b5ca1: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 007b5ca8: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 007b5caf: mov dword ptr [esp + 0xac], 0x42480000 */ W32((u32)(r_esp+0xacu), 0x42480000u);
    /* 007b5cba: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 007b5cc1: mov dword ptr [esp + 0xb8], 0xc2480000 */ W32((u32)(r_esp+0xb8u), 0xc2480000u);
    /* 007b5ccc: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 007b5cd3: mov dword ptr [esp + 0xc4], 0xc2480000 */ W32((u32)(r_esp+0xc4u), 0xc2480000u);
    /* 007b5cde: mov dword ptr [esp + 0xcc], eax */ W32((u32)(r_esp+0xccu), r_eax);
    /* 007b5ce5: mov dword ptr [esp + 0xd0], 0xc2480000 */ W32((u32)(r_esp+0xd0u), 0xc2480000u);
    /* 007b5cf0: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 007b5cf7: mov dword ptr [esp + 0xdc], 0xc2480000 */ W32((u32)(r_esp+0xdcu), 0xc2480000u);
    /* 007b5d02: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 007b5d09: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b5d0eu); f_0082d990();
    /* 007b5d0e: mov edx, dword ptr [esp + 0x3ec] */ r_edx = R32((u32)(r_esp+0x3ecu));
    /* 007b5d15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b5d17: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b5d1cu); f_0082d8bc();
    /* 007b5d1c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007b5d20: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b5d24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b5d26: mov esi, eax */ r_esi = r_eax;
L_007b5d28:; BB(0x007b5d28);
    /* 007b5d28: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 007b5d2f: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b5d32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5d33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b5d34: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b5d39u); f_0083a610();
    /* 007b5d39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5d3c: lea edx, [esp + 0x270] */ r_edx = (u32)(r_esp+0x270u);
    /* 007b5d43: mov ecx, edi */ r_ecx = r_edi;
    /* 007b5d45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b5d4au); f_0082ebac();
    /* 007b5d4a: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b5d4d: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b5d50: jl 0x7b5d28 */ if ((fS!=fO)) goto L_007b5d28;
L_007b5d52:; BB(0x007b5d52);
    /* 007b5d52: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007b5d56: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b5d5a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b5d5fu); f_0082da80();
    /* 007b5d5f: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 007b5d66: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 007b5d6d: mov dword ptr [esp + 0x27c], edx */ W32((u32)(r_esp+0x27cu), r_edx);
    /* 007b5d74: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 007b5d7b: mov dword ptr [esp + 0x280], ecx */ W32((u32)(r_esp+0x280u), r_ecx);
    /* 007b5d82: mov dword ptr [esp + 0x284], edx */ W32((u32)(r_esp+0x284u), r_edx);
    /* 007b5d89: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 007b5d90: mov dword ptr [esp + 0x288], edx */ W32((u32)(r_esp+0x288u), r_edx);
    /* 007b5d97: mov edx, dword ptr [esp + 0x94] */ r_edx = R32((u32)(r_esp+0x94u));
    /* 007b5d9e: mov dword ptr [esp + 0x28c], edx */ W32((u32)(r_esp+0x28cu), r_edx);
    /* 007b5da5: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 007b5dac: mov dword ptr [esp + 0x290], edx */ W32((u32)(r_esp+0x290u), r_edx);
    /* 007b5db3: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 007b5dba: mov dword ptr [esp + 0x294], edx */ W32((u32)(r_esp+0x294u), r_edx);
    /* 007b5dc1: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 007b5dc8: mov dword ptr [esp + 0x298], edx */ W32((u32)(r_esp+0x298u), r_edx);
    /* 007b5dcf: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 007b5dd6: mov dword ptr [esp + 0x29c], edx */ W32((u32)(r_esp+0x29cu), r_edx);
    /* 007b5ddd: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 007b5de4: mov dword ptr [esp + 0x2a0], edx */ W32((u32)(r_esp+0x2a0u), r_edx);
    /* 007b5deb: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 007b5df2: mov dword ptr [esp + 0x2a4], edx */ W32((u32)(r_esp+0x2a4u), r_edx);
    /* 007b5df9: mov edx, dword ptr [esp + 0xb0] */ r_edx = R32((u32)(r_esp+0xb0u));
    /* 007b5e00: mov dword ptr [esp + 0x2a8], edx */ W32((u32)(r_esp+0x2a8u), r_edx);
    /* 007b5e07: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 007b5e0e: mov dword ptr [esp + 0x2ac], edx */ W32((u32)(r_esp+0x2acu), r_edx);
    /* 007b5e15: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 007b5e1c: mov dword ptr [esp + 0x2b0], edx */ W32((u32)(r_esp+0x2b0u), r_edx);
    /* 007b5e23: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 007b5e2a: mov dword ptr [esp + 0x2b4], edx */ W32((u32)(r_esp+0x2b4u), r_edx);
    /* 007b5e31: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 007b5e38: mov dword ptr [esp + 0x2b8], edx */ W32((u32)(r_esp+0x2b8u), r_edx);
    /* 007b5e3f: mov edx, dword ptr [esp + 0xc4] */ r_edx = R32((u32)(r_esp+0xc4u));
    /* 007b5e46: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 007b5e4d: mov edx, dword ptr [esp + 0xc8] */ r_edx = R32((u32)(r_esp+0xc8u));
    /* 007b5e54: mov dword ptr [esp + 0x2c0], edx */ W32((u32)(r_esp+0x2c0u), r_edx);
    /* 007b5e5b: mov edx, dword ptr [esp + 0xcc] */ r_edx = R32((u32)(r_esp+0xccu));
    /* 007b5e62: mov dword ptr [esp + 0x2c4], edx */ W32((u32)(r_esp+0x2c4u), r_edx);
    /* 007b5e69: mov edx, dword ptr [esp + 0xd0] */ r_edx = R32((u32)(r_esp+0xd0u));
    /* 007b5e70: mov dword ptr [esp + 0x2c8], edx */ W32((u32)(r_esp+0x2c8u), r_edx);
    /* 007b5e77: mov edx, dword ptr [esp + 0xd4] */ r_edx = R32((u32)(r_esp+0xd4u));
    /* 007b5e7e: mov dword ptr [esp + 0x2cc], edx */ W32((u32)(r_esp+0x2ccu), r_edx);
    /* 007b5e85: mov edx, dword ptr [esp + 0xd8] */ r_edx = R32((u32)(r_esp+0xd8u));
    /* 007b5e8c: mov dword ptr [esp + 0x2d0], edx */ W32((u32)(r_esp+0x2d0u), r_edx);
    /* 007b5e93: mov edx, dword ptr [esp + 0xdc] */ r_edx = R32((u32)(r_esp+0xdcu));
    /* 007b5e9a: mov dword ptr [esp + 0x2d4], edx */ W32((u32)(r_esp+0x2d4u), r_edx);
    /* 007b5ea1: mov edx, dword ptr [esp + 0xe0] */ r_edx = R32((u32)(r_esp+0xe0u));
    /* 007b5ea8: mov dword ptr [esp + 0x2d8], edx */ W32((u32)(r_esp+0x2d8u), r_edx);
    /* 007b5eaf: mov ecx, dword ptr [esp + 0x3f0] */ r_ecx = R32((u32)(r_esp+0x3f0u));
    /* 007b5eb6: mov edx, dword ptr [ecx + ebp*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_ebp*4+0x1cu));
    /* 007b5eba: mov eax, dword ptr [ecx + ebp*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_ebp*4+0x24u));
    /* 007b5ebe: mov ecx, dword ptr [ecx + ebp*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 007b5ec2: mov dword ptr [esp + 0x2e0], 0 */ W32((u32)(r_esp+0x2e0u), 0x0u);
    /* 007b5ecd: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 007b5ed4: mov dword ptr [esp + 0x2e4], eax */ W32((u32)(r_esp+0x2e4u), r_eax);
    /* 007b5edb: mov dword ptr [esp + 0x2e8], ecx */ W32((u32)(r_esp+0x2e8u), r_ecx);
    /* 007b5ee2: lea ecx, [esp + 0x27c] */ r_ecx = (u32)(r_esp+0x27cu);
    /* 007b5ee9: lea edx, [esp + 0x2dc] */ r_edx = (u32)(r_esp+0x2dcu);
    /* 007b5ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5ef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b5ef2: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b5ef7u); f_0083d2fc();
    /* 007b5ef7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b5efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5efc: jne 0x7b6290 */ if (!fZ) goto L_007b6290;
L_007b5f02:; BB(0x007b5f02);
    /* 007b5f02: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b5f09: jmp 0x7b6254 */ goto L_007b6254;
L_007b5f0e:; BB(0x007b5f0e);
    /* 007b5f0e: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5f15: mov ecx, dword ptr [edx + ebp*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x14u));
    /* 007b5f19: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b5f1c: jne 0x7b61b3 */ if (!fZ) goto L_007b61b3;
L_007b5f22:; BB(0x007b5f22);
    /* 007b5f22: mov ecx, dword ptr [esp + 0x3d8] */ r_ecx = R32((u32)(r_esp+0x3d8u));
    /* 007b5f29: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b5f2d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007b5f31: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 007b5f35: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007b5f39: mov edx, dword ptr [ecx + eax*4 + 0x24] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 007b5f3d: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 007b5f41: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b5f45: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007b5f49: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b5f4d: mov dword ptr [esp + 0x1f8], 0 */ W32((u32)(r_esp+0x1f8u), 0x0u);
    /* 007b5f58: mov dword ptr [esp + 0x1f4], ecx */ W32((u32)(r_esp+0x1f4u), r_ecx);
    /* 007b5f5f: mov dword ptr [esp + 0x1fc], edx */ W32((u32)(r_esp+0x1fcu), r_edx);
    /* 007b5f66: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007b5f6a: mov dword ptr [esp + 0x200], edx */ W32((u32)(r_esp+0x200u), r_edx);
    /* 007b5f71: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b5f75: mov dword ptr [esp + 0x204], edx */ W32((u32)(r_esp+0x204u), r_edx);
    /* 007b5f7c: mov dword ptr [esp + 0x20c], eax */ W32((u32)(r_esp+0x20cu), r_eax);
    /* 007b5f83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b5f85: mov dword ptr [esp + 0x208], edx */ W32((u32)(r_esp+0x208u), r_edx);
    /* 007b5f8c: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b5f93: fld dword ptr [edx + ebp*4 + 0x10] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0x10u)));
    /* 007b5f97: mov ecx, dword ptr [edx + ebp*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0x10u));
    /* 007b5f9b: fld dword ptr [edx + ebp*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0xcu)));
    /* 007b5f9f: mov ebp, dword ptr [edx + ebp*4 + 0xc] */ r_ebp = R32((u32)(r_edx+r_ebp*4+0xcu));
    /* 007b5fa3: mov dword ptr [esp + 0x28], 0x42480000 */ W32((u32)(r_esp+0x28u), 0x42480000u);
    /* 007b5fab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5fad: fchs  */ ST(0) = -ST(0);
    /* 007b5faf: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 007b5fb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b5fb5: fchs  */ ST(0) = -ST(0);
    /* 007b5fb7: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007b5fbb: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 007b5fbf: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 007b5fc3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007b5fc7: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 007b5fcb: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 007b5fcf: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 007b5fd3: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b5fd7: mov dword ptr [esp + 0x34], 0x42480000 */ W32((u32)(r_esp+0x34u), 0x42480000u);
    /* 007b5fdf: mov dword ptr [esp + 0x40], 0x42480000 */ W32((u32)(r_esp+0x40u), 0x42480000u);
    /* 007b5fe7: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b5feb: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 007b5fef: mov dword ptr [esp + 0x4c], 0x42480000 */ W32((u32)(r_esp+0x4cu), 0x42480000u);
    /* 007b5ff7: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 007b5ffb: mov dword ptr [esp + 0x58], 0xc2480000 */ W32((u32)(r_esp+0x58u), 0xc2480000u);
    /* 007b6003: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 007b6007: mov dword ptr [esp + 0x64], 0xc2480000 */ W32((u32)(r_esp+0x64u), 0xc2480000u);
    /* 007b600f: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 007b6013: mov dword ptr [esp + 0x70], 0xc2480000 */ W32((u32)(r_esp+0x70u), 0xc2480000u);
    /* 007b601b: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 007b601f: mov dword ptr [esp + 0x7c], 0xc2480000 */ W32((u32)(r_esp+0x7cu), 0xc2480000u);
    /* 007b6027: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b602c: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 007b6033: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b6038u); f_0082d990();
    /* 007b6038: mov edx, dword ptr [esp + 0x404] */ r_edx = R32((u32)(r_esp+0x404u));
    /* 007b603f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6041: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b6046u); f_0082d8bc();
    /* 007b6046: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007b604a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007b604c:; BB(0x007b604c);
    /* 007b604c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007b6050: lea edi, [edx + ebp] */ r_edi = (u32)(r_edx+r_ebp);
    /* 007b6053: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6054: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6055: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b605au); f_0083a610();
    /* 007b605a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b605d: lea edx, [esp + 0x204] */ r_edx = (u32)(r_esp+0x204u);
    /* 007b6064: mov ecx, edi */ r_ecx = r_edi;
    /* 007b6066: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b606bu); f_0082ebac();
    /* 007b606b: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b606e: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6071: jl 0x7b604c */ if ((fS!=fO)) goto L_007b604c;
L_007b6073:; BB(0x007b6073);
    /* 007b6073: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b6077: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b607cu); f_0082da80();
    /* 007b607c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007b6080: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007b6084: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 007b6088: mov dword ptr [esp + 0x210], edx */ W32((u32)(r_esp+0x210u), r_edx);
    /* 007b608f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b6093: mov dword ptr [esp + 0x214], ecx */ W32((u32)(r_esp+0x214u), r_ecx);
    /* 007b609a: mov dword ptr [esp + 0x218], ebp */ W32((u32)(r_esp+0x218u), r_ebp);
    /* 007b60a1: mov dword ptr [esp + 0x21c], edx */ W32((u32)(r_esp+0x21cu), r_edx);
    /* 007b60a8: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007b60ac: mov dword ptr [esp + 0x220], edx */ W32((u32)(r_esp+0x220u), r_edx);
    /* 007b60b3: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b60b7: mov dword ptr [esp + 0x224], edx */ W32((u32)(r_esp+0x224u), r_edx);
    /* 007b60be: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007b60c2: mov dword ptr [esp + 0x228], edx */ W32((u32)(r_esp+0x228u), r_edx);
    /* 007b60c9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007b60cd: mov dword ptr [esp + 0x22c], edx */ W32((u32)(r_esp+0x22cu), r_edx);
    /* 007b60d4: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 007b60d8: mov dword ptr [esp + 0x230], edx */ W32((u32)(r_esp+0x230u), r_edx);
    /* 007b60df: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b60e3: mov dword ptr [esp + 0x234], edx */ W32((u32)(r_esp+0x234u), r_edx);
    /* 007b60ea: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b60ee: mov dword ptr [esp + 0x238], edx */ W32((u32)(r_esp+0x238u), r_edx);
    /* 007b60f5: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b60f9: mov dword ptr [esp + 0x23c], edx */ W32((u32)(r_esp+0x23cu), r_edx);
    /* 007b6100: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b6104: mov dword ptr [esp + 0x240], edx */ W32((u32)(r_esp+0x240u), r_edx);
    /* 007b610b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b610f: mov dword ptr [esp + 0x244], edx */ W32((u32)(r_esp+0x244u), r_edx);
    /* 007b6116: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b611a: mov dword ptr [esp + 0x248], edx */ W32((u32)(r_esp+0x248u), r_edx);
    /* 007b6121: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007b6125: mov dword ptr [esp + 0x24c], edx */ W32((u32)(r_esp+0x24cu), r_edx);
    /* 007b612c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 007b6130: mov dword ptr [esp + 0x250], edx */ W32((u32)(r_esp+0x250u), r_edx);
    /* 007b6137: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007b613b: mov dword ptr [esp + 0x254], edx */ W32((u32)(r_esp+0x254u), r_edx);
    /* 007b6142: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 007b6146: mov dword ptr [esp + 0x258], edx */ W32((u32)(r_esp+0x258u), r_edx);
    /* 007b614d: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007b6151: mov dword ptr [esp + 0x25c], edx */ W32((u32)(r_esp+0x25cu), r_edx);
    /* 007b6158: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007b615c: mov dword ptr [esp + 0x260], edx */ W32((u32)(r_esp+0x260u), r_edx);
    /* 007b6163: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 007b6167: mov dword ptr [esp + 0x264], edx */ W32((u32)(r_esp+0x264u), r_edx);
    /* 007b616e: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 007b6172: mov dword ptr [esp + 0x268], edx */ W32((u32)(r_esp+0x268u), r_edx);
    /* 007b6179: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 007b6180: mov dword ptr [esp + 0x26c], edx */ W32((u32)(r_esp+0x26cu), r_edx);
    /* 007b6187: lea ecx, [esp + 0x210] */ r_ecx = (u32)(r_esp+0x210u);
    /* 007b618e: lea edx, [esp + 0x1f4] */ r_edx = (u32)(r_esp+0x1f4u);
    /* 007b6195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6196: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6197: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b619cu); f_0083d2fc();
    /* 007b619c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b619f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b61a1: jne 0x7b6269 */ if (!fZ) goto L_007b6269;
L_007b61a7:; BB(0x007b61a7);
    /* 007b61a7: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
    /* 007b61ae: jmp 0x7b6254 */ goto L_007b6254;
L_007b61b3:; BB(0x007b61b3);
    /* 007b61b3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b61b7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b61bb: mov eax, dword ptr [esp + 0x3d8] */ r_eax = R32((u32)(r_esp+0x3d8u));
    /* 007b61c2: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 007b61c6: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b61ca: mov ecx, dword ptr [eax + edx*4 + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 007b61ce: mov edx, dword ptr [eax + edx*4 + 0xc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 007b61d2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b61d6: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007b61da: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b61de: mov dword ptr [esp + 0x1d8], 0 */ W32((u32)(r_esp+0x1d8u), 0x0u);
    /* 007b61e9: mov dword ptr [esp + 0x1d4], ecx */ W32((u32)(r_esp+0x1d4u), r_ecx);
    /* 007b61f0: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007b61f4: mov dword ptr [esp + 0x1dc], ecx */ W32((u32)(r_esp+0x1dcu), r_ecx);
    /* 007b61fb: mov dword ptr [esp + 0x1e0], edx */ W32((u32)(r_esp+0x1e0u), r_edx);
    /* 007b6202: mov edx, dword ptr [esp + 0x3f0] */ r_edx = R32((u32)(r_esp+0x3f0u));
    /* 007b6209: mov ecx, dword ptr [edx + ebp*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0xcu));
    /* 007b620d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b6211: mov dword ptr [esp + 0x1e8], 0 */ W32((u32)(r_esp+0x1e8u), 0x0u);
    /* 007b621c: mov dword ptr [esp + 0x1e4], edx */ W32((u32)(r_esp+0x1e4u), r_edx);
    /* 007b6223: mov dword ptr [esp + 0x1ec], eax */ W32((u32)(r_esp+0x1ecu), r_eax);
    /* 007b622a: mov dword ptr [esp + 0x1f0], ecx */ W32((u32)(r_esp+0x1f0u), r_ecx);
    /* 007b6231: lea ecx, [esp + 0x1d4] */ r_ecx = (u32)(r_esp+0x1d4u);
    /* 007b6238: lea edx, [esp + 0x1e4] */ r_edx = (u32)(r_esp+0x1e4u);
    /* 007b623f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6241: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x7b6246u); f_0083dbd4();
    /* 007b6246: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b624b: jne 0x7b625c */ if (!fZ) goto L_007b625c;
L_007b624d:; BB(0x007b624d);
    /* 007b624d: mov eax, dword ptr [esp + 0x3f4] */ r_eax = R32((u32)(r_esp+0x3f4u));
L_007b6254:; BB(0x007b6254);
    /* 007b6254: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b6257: jmp 0x7b544e */ goto L_007b544e;
L_007b625c:; BB(0x007b625c);
    /* 007b625c: mov eax, ebx */ r_eax = r_ebx;
    /* 007b625e: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6264: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6268: ret  */ FN_RET(0x007b5c69); r_esp += 4; return;
L_007b6269:; BB(0x007b6269);
    /* 007b6269: mov eax, ebx */ r_eax = r_ebx;
    /* 007b626b: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6271: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6275: ret  */ FN_RET(0x007b5c69); r_esp += 4; return;
L_007b6276:; BB(0x007b6276);
    /* 007b6276: mov eax, ebx */ r_eax = r_ebx;
    /* 007b6278: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b627e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b627f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6280: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6281: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6282: ret  */ FN_RET(0x007b5c69); r_esp += 4; return;
L_007b6283:; BB(0x007b6283);
    /* 007b6283: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b6285: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b628b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b628c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b628d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b628e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b628f: ret  */ FN_RET(0x007b5c69); r_esp += 4; return;
L_007b6290:; BB(0x007b6290);
    /* 007b6290: mov eax, ebx */ r_eax = r_ebx;
    /* 007b6292: add esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6298: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b629a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b629b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b629c: ret  */ FN_RET(0x007b5c69); r_esp += 4; return;
}

