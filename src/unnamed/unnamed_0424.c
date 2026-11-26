#include "protos.h"

void f_004240e0(void)
{
    FN_ENTER(0x004240e0);
    /* 004240e0: and al, 6 */ {  u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004240e2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004240e5: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004240ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004240f0: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004240f6: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004240fc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00424100: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00424104: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x424109u); f_008003e0();
    /* 00424109: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042410c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042410d: ret  */ FN_RET(0x004240e0); r_esp += 4; return;
}

void f_00424110(void) /* sub_424110 */
{
    FN_ENTER(0x00424110);
    /* 00424110: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424111: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424114: mov edi, ecx */ r_edi = r_ecx;
    /* 00424116: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0042411d: cmp ax, word ptr [edi + 0x688] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x688u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00424124: jg 0x424197 */ if ((!fZ&&fS==fO)) goto L_00424197;
L_00424126:; BB(0x00424126);
    /* 00424126: mov eax, dword ptr [edi + 0x3ec] */ r_eax = R32((u32)(r_edi+0x3ecu));
    /* 0042412c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042412f: je 0x42419e */ if (fZ) goto L_0042419e;
L_00424131:; BB(0x00424131);
    /* 00424131: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00424133: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00424135: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00424137: mov ecx, edi */ r_ecx = r_edi;
    /* 00424139: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42413fu); call_ind(t); }
    /* 0042413f: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00424143: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 00424147: mov edx, 9 */ r_edx = 0x9u;
    /* 0042414c: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00424151: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00424156: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0042415c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00424161: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00424166: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00424169: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 00424170: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00424174: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0042417a: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 00424180: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00424184: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00424188: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42418du); f_008003e0();
    /* 0042418d: mov eax, 1 */ r_eax = 0x1u;
    /* 00424192: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424195: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424196: ret  */ FN_RET(0x00424110); r_esp += 4; return;
L_00424197:; BB(0x00424197);
    /* 00424197: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424199: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042419c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042419d: ret  */ FN_RET(0x00424110); r_esp += 4; return;
L_0042419e:; BB(0x0042419e);
    /* 0042419e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004241a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004241a2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004241a4: mov ecx, edi */ r_ecx = r_edi;
    /* 004241a6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4241acu); call_ind(t); }
    /* 004241ac: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004241b0: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 004241b5: mov edx, 0xa */ r_edx = 0xau;
    /* 004241ba: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 004241bf: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004241c4: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 004241ca: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004241cf: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004241d4: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004241d8: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004241df: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004241e3: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 004241e9: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 004241ef: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004241f3: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 004241f7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4241fcu); f_008003e0();
    /* 004241fc: mov eax, 1 */ r_eax = 0x1u;
    /* 00424201: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424204: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424205: ret  */ FN_RET(0x00424110); r_esp += 4; return;
}

void f_00424208(void) /* sub_424208 */
{
    FN_ENTER(0x00424208);
    /* 00424208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424209: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042420c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042420e: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 00424214: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424217: jge 0x42422d */ if ((fS==fO)) goto L_0042422d;
L_00424219:; BB(0x00424219);
    /* 00424219: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042421b: call 0x42093c */ r_esp -= 4; W32(r_esp, 0x424220u); f_0042093c();
    /* 00424220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424222: je 0x4242b2 */ if (fZ) goto L_004242b2;
L_00424228:; BB(0x00424228);
    /* 00424228: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042422b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042422c: ret  */ FN_RET(0x00424208); r_esp += 4; return;
L_0042422d:; BB(0x0042422d);
    /* 0042422d: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00424233: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424238: jne 0x4242b2 */ if (!fZ) goto L_004242b2;
L_0042423a:; BB(0x0042423a);
    /* 0042423a: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00424241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00424243: jg 0x4242b2 */ if ((!fZ&&fS==fO)) goto L_004242b2;
L_00424245:; BB(0x00424245);
    /* 00424245: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 0042424b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042424e: je 0x4242cc */ if (fZ) goto L_004242cc;
L_00424250:; BB(0x00424250);
    /* 00424250: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00424252: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00424254: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00424257: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00424259: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42425fu); call_ind(t); }
    /* 0042425f: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00424263: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 00424267: mov edx, 0x15 */ r_edx = 0x15u;
    /* 0042426c: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00424271: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00424276: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 0042427c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00424281: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00424286: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00424289: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 00424290: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00424294: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 0042429a: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 004242a0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004242a4: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004242a8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4242adu); f_008003e0();
    /* 004242ad: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004242b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004242b1: ret  */ FN_RET(0x00424208); r_esp += 4; return;
L_004242b2:; BB(0x004242b2);
    /* 004242b2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004242b4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004242b7: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004242be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004242c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004242c1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4242c7u); call_ind(t); }
    /* 004242c7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004242ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004242cb: ret  */ FN_RET(0x00424208); r_esp += 4; return;
L_004242cc:; BB(0x004242cc);
    /* 004242cc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004242ce: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004242d0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004242d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004242d5: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4242dbu); call_ind(t); }
    /* 004242db: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004242df: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 004242e4: mov edx, 0xc */ r_edx = 0xcu;
    /* 004242e9: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 004242ee: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004242f3: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 004242f9: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004242fe: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00424303: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00424307: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 0042430e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00424312: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 00424318: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 0042431e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00424322: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00424326: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42432bu); f_008003e0();
    /* 0042432b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042432e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042432f: ret  */ FN_RET(0x00424208); r_esp += 4; return;
}

void f_00424330(void) /* sub_424330 */
{
    FN_ENTER(0x00424330);
    /* 00424330: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424331: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00424332: mov esi, ecx */ r_esi = r_ecx;
    /* 00424334: movzx eax, word ptr [esi + 0x76c] */ r_eax = (u32)R16((u32)(r_esi+0x76cu));
    /* 0042433b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042433c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x424341u); f_0068d5a8();
    /* 00424341: mov ebx, eax */ r_ebx = r_eax;
    /* 00424343: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424346: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424348: je 0x424398 */ if (fZ) goto L_00424398;
L_0042434a:; BB(0x0042434a);
    /* 0042434a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042434c: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x424351u); f_006855b0();
    /* 00424351: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00424354: mov dword ptr [ebx + 0x720], 0 */ W32((u32)(r_ebx+0x720u), 0x0u);
    /* 0042435e: and edx, 0xfdffffff */ {  u32 a = r_edx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00424364: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00424367: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0042436e: movzx edx, word ptr [esi + 0x76c] */ r_edx = (u32)R16((u32)(r_esi+0x76cu));
    /* 00424375: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042437b: jne 0x42438f */ if (!fZ) goto L_0042438f;
L_0042437d:; BB(0x0042437d);
    /* 0042437d: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00424384: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424387: je 0x424535 */ if (fZ) goto L_00424535;
L_0042438d:; BB(0x0042438d);
    /* 0042438d: jmp 0x42439f */ goto L_0042439f;
L_0042438f:; BB(0x0042438f);
    /* 0042438f: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00424396: jmp 0x42439f */ goto L_0042439f;
L_00424398:; BB(0x00424398);
    /* 00424398: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
L_0042439f:; BB(0x0042439f);
    /* 0042439f: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004243a9: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004243ac: je 0x424532 */ if (fZ) goto L_00424532;
L_004243b2:; BB(0x004243b2);
    /* 004243b2: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 004243b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004243ba: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243bd: jge 0x4244cb */ if ((fS==fO)) goto L_004244cb;
L_004243c3:; BB(0x004243c3);
    /* 004243c3: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004243c6: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004243c9: ja 0x4244be */ if ((!fC&&!fZ)) goto L_004244be;
L_004243cf:; BB(0x004243cf);
    /* 004243cf: mov eax, dword ptr [eax*4 + 0x8fb840] */ r_eax = R32((u32)(r_eax*4+0x8fb840u));
    /* 004243d6: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_004244be:; BB(0x004244be);
    /* 004244be: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 004244c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004244c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004244ca: ret  */ FN_RET(0x00424330); r_esp += 4; return;
L_004244cb:; BB(0x004244cb);
    /* 004244cb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004244cd: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004244d0: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004244d3: ja 0x424521 */ if ((!fC&&!fZ)) goto L_00424521;
L_004244d5:; BB(0x004244d5);
    /* 004244d5: mov eax, dword ptr [eax*4 + 0x8fb7a0] */ r_eax = R32((u32)(r_eax*4+0x8fb7a0u));
    /* 004244dc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424330); r_esp += 4; return;
L_00424535:; BB(0x00424535);
    /* 00424535: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424537: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424538: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042453d: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x424542u); f_00693348();
    /* 00424542: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424545: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0042454c: jmp 0x42439f */ goto L_0042439f;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x00424330); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_004243d8(void)
{
    FN_ENTER(0x004243d8);
    /* 004243d8: mov dword ptr [esi + 0x684], 6 */ W32((u32)(r_esi+0x684u), 0x6u);
    /* 004243e2: mov ebx, 6 */ r_ebx = 0x6u;
    /* 004243e7: jmp 0x4243f5 */ goto L_004243f5;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x004243d8); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_004243e9(void)
{
    FN_ENTER(0x004243e9);
    /* 004243e9: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 004243f3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x004243e9); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_00424458(void)
{
    FN_ENTER(0x00424458);
    /* 00424458: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424462: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424458); r_esp += 4; return;
}

void f_00424467(void)
{
    FN_ENTER(0x00424467);
    /* 00424467: mov dword ptr [esi + 0x684], 7 */ W32((u32)(r_esi+0x684u), 0x7u);
    /* 00424471: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424467); r_esp += 4; return;
}

void f_00424476(void)
{
    FN_ENTER(0x00424476);
    /* 00424476: mov dword ptr [esi + 0x684], 6 */ W32((u32)(r_esi+0x684u), 0x6u);
    /* 00424480: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424476); r_esp += 4; return;
}

void f_00424485(void)
{
    FN_ENTER(0x00424485);
    /* 00424485: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 0042448f: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424485); r_esp += 4; return;
}

void f_00424494(void)
{
    FN_ENTER(0x00424494);
    /* 00424494: mov dword ptr [esi + 0x684], 4 */ W32((u32)(r_esi+0x684u), 0x4u);
    /* 0042449e: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424494); r_esp += 4; return;
}

void f_004244a3(void)
{
    FN_ENTER(0x004244a3);
    /* 004244a3: mov dword ptr [esi + 0x684], 3 */ W32((u32)(r_esi+0x684u), 0x3u);
    /* 004244ad: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x004244a3); r_esp += 4; return;
}

void f_004244b2(void)
{
    FN_ENTER(0x004244b2);
    /* 004244b2: mov dword ptr [esi + 0x684], 2 */ W32((u32)(r_esi+0x684u), 0x2u);
    /* 004244bc: jmp 0x424532 */ goto L_00424532;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x004244b2); r_esp += 4; return;
}

void f_004244de(void)
{
    FN_ENTER(0x004244de);
    goto L_004244de;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_004244de:; BB(0x004244de);
    /* 004244de: mov ebx, 9 */ r_ebx = 0x9u;
    /* 004244e3: mov edx, 1 */ r_edx = 0x1u;
    /* 004244e8: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x004244de); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x004244de); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_004244ea(void)
{
    FN_ENTER(0x004244ea);
    goto L_004244ea;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_004244ea:; BB(0x004244ea);
    /* 004244ea: mov ebx, 0xa */ r_ebx = 0xau;
    /* 004244ef: mov edx, 1 */ r_edx = 0x1u;
    /* 004244f4: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x004244ea); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x004244ea); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_004244f6(void)
{
    FN_ENTER(0x004244f6);
    goto L_004244f6;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_004244f6:; BB(0x004244f6);
    /* 004244f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004244f8: mov edx, 1 */ r_edx = 0x1u;
    /* 004244fd: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x004244f6); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x004244f6); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_004244ff(void)
{
    FN_ENTER(0x004244ff);
    goto L_004244ff;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_004244ff:; BB(0x004244ff);
    /* 004244ff: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00424504: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x004244ff); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x004244ff); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_00424506(void)
{
    FN_ENTER(0x00424506);
    goto L_00424506;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_00424506:; BB(0x00424506);
    /* 00424506: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424508: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424506); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x00424506); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_0042450a(void)
{
    FN_ENTER(0x0042450a);
    goto L_0042450a;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_0042450a:; BB(0x0042450a);
    /* 0042450a: mov ebx, 0xb */ r_ebx = 0xbu;
    /* 0042450f: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x0042450a); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x0042450a); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_00424511(void)
{
    FN_ENTER(0x00424511);
    goto L_00424511;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_00424511:; BB(0x00424511);
    /* 00424511: mov ebx, 0xa */ r_ebx = 0xau;
    /* 00424516: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424511); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x00424511); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_00424518(void)
{
    FN_ENTER(0x00424518);
    goto L_00424518;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_00424518:; BB(0x00424518);
    /* 00424518: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0042451d: jmp 0x424521 */ goto L_00424521;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424518); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x00424518); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_0042451f(void)
{
    FN_ENTER(0x0042451f);
    goto L_0042451f;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_0042451f:; BB(0x0042451f);
    /* 0042451f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x0042451f); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x0042451f); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_00424521(void)
{
    FN_ENTER(0x00424521);
    goto L_00424521;
L_004243f5:; BB(0x004243f5);
    /* 004243f5: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004243f8: jge 0x424416 */ if ((fS==fO)) goto L_00424416;
L_004243fa:; BB(0x004243fa);
    /* 004243fa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4243ffu); f_00420a44();
    /* 004243ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424401: jne 0x42440a */ if (!fZ) goto L_0042440a;
L_00424403:; BB(0x00424403);
    /* 00424403: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00424408: jmp 0x424433 */ goto L_00424433;
L_0042440a:; BB(0x0042440a);
    /* 0042440a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042440d: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042440f:; BB(0x0042440f);
    /* 0042440f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00424414: jmp 0x424433 */ goto L_00424433;
L_00424416:; BB(0x00424416);
    /* 00424416: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424419: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42441eu); f_00420a44();
    /* 0042441e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424420: jne 0x424429 */ if (!fZ) goto L_00424429;
L_00424422:; BB(0x00424422);
    /* 00424422: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00424427: jmp 0x424433 */ goto L_00424433;
L_00424429:; BB(0x00424429);
    /* 00424429: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042442c: jne 0x424433 */ if (!fZ) goto L_00424433;
L_0042442e:; BB(0x0042442e);
    /* 0042442e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00424433:; BB(0x00424433);
    /* 00424433: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
L_00424439:; BB(0x00424439);
    /* 00424439: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0042443c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042443f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424442: jne 0x424551 */ if (!fZ) goto L_00424551;
L_00424448:; BB(0x00424448);
    /* 00424448: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00424452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424454: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424456: jmp 0x424439 */ goto L_00424439;
L_00424521:; BB(0x00424521);
    /* 00424521: add ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424524: mov dword ptr [esi + 0x684], ebx */ W32((u32)(r_esi+0x684u), r_ebx);
    /* 0042452a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042452c: jne 0x4243f5 */ if (!fZ) goto L_004243f5;
L_00424532:; BB(0x00424532);
    /* 00424532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424534: ret  */ FN_RET(0x00424521); r_esp += 4; return;
L_00424551:; BB(0x00424551);
    /* 00424551: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424554: je 0x424567 */ if (fZ) goto L_00424567;
L_00424556:; BB(0x00424556);
    /* 00424556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424557: mov dword ptr [esi + 0x684], eax */ W32((u32)(r_esi+0x684u), r_eax);
    /* 0042455d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042455f: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x424564u); f_0041a808();
    /* 00424564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424565: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424566: ret  */ FN_RET(0x00424521); r_esp += 4; return;
L_00424567:; BB(0x00424567);
    /* 00424567: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00424571: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00424576: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00424578: jmp 0x424439 */ goto L_00424439;
}

void f_00424580(void) /* sub_424580 */
{
    FN_ENTER(0x00424580);
    /* 00424580: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424581: mov eax, dword ptr [ecx + 0x438] */ r_eax = R32((u32)(r_ecx+0x438u));
    /* 00424587: mov edx, dword ptr [ecx + 0x43c] */ r_edx = R32((u32)(r_ecx+0x43cu));
    /* 0042458d: mov edi, dword ptr [ecx + 0x440] */ r_edi = R32((u32)(r_ecx+0x440u));
    /* 00424593: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00424599: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 0042459f: mov dword ptr [ecx + 0x308], edi */ W32((u32)(r_ecx+0x308u), r_edi);
    /* 004245a5: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004245a8: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 004245ab: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 004245ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004245af: ret  */ FN_RET(0x00424580); r_esp += 4; return;
}

void f_004245b0(void) /* sub_4245B0 */
{
    FN_ENTER(0x004245b0);
    /* 004245b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004245b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004245b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004245b3: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004245b6: mov esi, ecx */ r_esi = r_ecx;
    /* 004245b8: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4245bdu); f_004f7c84();
    /* 004245bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004245bf: je 0x4245d2 */ if (fZ) goto L_004245d2;
L_004245c1:; BB(0x004245c1);
    /* 004245c1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004245c3: mov ecx, esi */ r_ecx = r_esi;
    /* 004245c5: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x4245cbu); call_ind(t); }
    /* 004245cb: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004245ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004245cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004245d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004245d1: ret  */ FN_RET(0x004245b0); r_esp += 4; return;
L_004245d2:; BB(0x004245d2);
    /* 004245d2: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004245d7: mov ecx, esi */ r_ecx = r_esi;
    /* 004245d9: mov edi, dword ptr [esi + 0x3c8] */ r_edi = R32((u32)(r_esi+0x3c8u));
    /* 004245df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004245e1: lea eax, [esi + 0x3f0] */ r_eax = (u32)(r_esi+0x3f0u);
    /* 004245e7: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004245ec: mov dword ptr [0xa437e0], edx */ W32((u32)(0xa437e0u), r_edx);
    /* 004245f2: lea ebx, [esi + 0x438] */ r_ebx = (u32)(r_esi+0x438u);
    /* 004245f8: mov dword ptr [0xa437a8], eax */ W32((u32)(0xa437a8u), r_eax);
    /* 004245fd: mov dword ptr [0xa437a4], edx */ W32((u32)(0xa437a4u), r_edx);
    /* 00424603: mov dword ptr [0xa437a0], ebx */ W32((u32)(0xa437a0u), r_ebx);
    /* 00424609: mov dword ptr [0xa4379c], edi */ W32((u32)(0xa4379cu), r_edi);
    /* 0042460f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00424611: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x424614u); call_ind(t); }
    /* 00424614: mov eax, dword ptr [esi + 0x6f0] */ r_eax = R32((u32)(r_esi+0x6f0u));
    /* 0042461a: lea ebx, [esi + 0x6f0] */ r_ebx = (u32)(r_esi+0x6f0u);
    /* 00424620: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424622: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x424625u); call_ind(t); }
    /* 00424625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424627: je 0x42490e */ if (fZ) goto L_0042490e;
L_0042462d:; BB(0x0042462d);
    /* 0042462d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00424630: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x424635u); f_00829cc8();
    /* 00424635: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x42463au); f_00520d08();
    /* 0042463a: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0042463f: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00424644: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424646: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x42464bu); f_00830b08();
    /* 0042464b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042464c: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00424653: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424656: je 0x424cc6 */ if (fZ) goto L_00424cc6;
L_0042465c:; BB(0x0042465c);
    /* 0042465c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00424661: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00424663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424665: je 0x424832 */ if (fZ) goto L_00424832;
L_0042466b:; BB(0x0042466b);
    /* 0042466b: cmp edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042466e: je 0x424832 */ if (fZ) goto L_00424832;
L_00424674:; BB(0x00424674);
    /* 00424674: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424677: je 0x424832 */ if (fZ) goto L_00424832;
L_0042467d:; BB(0x0042467d);
    /* 0042467d: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424680: je 0x424832 */ if (fZ) goto L_00424832;
L_00424686:; BB(0x00424686);
    /* 00424686: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 0042468c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042468e: jne 0x424832 */ if (!fZ) goto L_00424832;
L_00424694:; BB(0x00424694);
    /* 00424694: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424696: call 0x4d30d4 */ r_esp -= 4; W32(r_esp, 0x42469bu); f_004d30d4();
    /* 0042469b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042469c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x4246a1u); f_007b4d18();
    /* 004246a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004246a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004246a6: je 0x424832 */ if (fZ) goto L_00424832;
L_004246ac:; BB(0x004246ac);
    /* 004246ac: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004246b2: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 004246b8: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004246c0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004246c4: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 004246ca: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004246ce: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004246d1: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004246d5: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004246d9: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004246dc: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004246df: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004246e3: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004246e7: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004246eb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4246f0u); f_0082f9c4();
    /* 004246f0: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 004246f8: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004246fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004246fd: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424702u); f_007828e4();
    /* 00424702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00424703: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00424707: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0042470b: fstp dword ptr [0xa43780] */ W_F32((u32)(0xa43780u), ST(0)); FPOP();
    /* 00424711: mov dword ptr [0xa43790], eax */ W32((u32)(0xa43790u), r_eax);
    /* 00424716: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0042471a: mov dword ptr [0xa43794], edx */ W32((u32)(0xa43794u), r_edx);
    /* 00424720: mov dword ptr [0xa43798], eax */ W32((u32)(0xa43798u), r_eax);
    /* 00424725: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00424729: mov dword ptr [0xa43784], eax */ W32((u32)(0xa43784u), r_eax);
    /* 0042472e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00424732: mov dword ptr [0xa43788], eax */ W32((u32)(0xa43788u), r_eax);
    /* 00424737: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0042473b: mov dword ptr [0xa4378c], eax */ W32((u32)(0xa4378cu), r_eax);
    /* 00424740: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00424744: lea eax, [esi + 0x45c] */ r_eax = (u32)(r_esi+0x45cu);
    /* 0042474a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0042474e: lea eax, [esi + 0x468] */ r_eax = (u32)(r_esi+0x468u);
    /* 00424754: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00424758: lea eax, [esi + 0x474] */ r_eax = (u32)(r_esi+0x474u);
    /* 0042475e: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00424762: lea eax, [esi + 0x480] */ r_eax = (u32)(r_esi+0x480u);
    /* 00424768: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0042476c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042476e: mov ebp, eax */ r_ebp = r_eax;
L_00424770:; BB(0x00424770);
    /* 00424770: mov eax, dword ptr [esp + ebp*4 + 0x2c] */ r_eax = R32((u32)(r_esp+r_ebp*4+0x2cu));
    /* 00424774: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00424778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042477a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0042477e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00424781: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00424785: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00424788: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0042478c: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424791: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00424799: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42479eu); f_0082f9c4();
    /* 0042479e: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004247a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004247a3: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4247a8u); f_007828e4();
    /* 004247a8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004247ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004247af: fld dword ptr [0x8fbb78] */ FPUSH(R_F32((u32)(0x8fbb78u)));
    /* 004247b5: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 004247b9: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 004247bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004247c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004247c2: jae 0x424805 */ if (!fC) goto L_00424805;
L_004247c4:; BB(0x004247c4);
    /* 004247c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004247c5: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004247c9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004247cb: fadd dword ptr [0x8fbb74] */ ST(0) = ST(0) + R_F32((u32)(0x8fbb74u));
    /* 004247d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004247d4: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x4247d9u); f_0082f9f8();
    /* 004247d9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004247dd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004247df: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004247e3: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 004247e8: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 004247ec: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4247f1u); f_0082f9e0();
    /* 004247f1: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 004247f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004247f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004247f8: jb 0x424805 */ if (fC) goto L_00424805;
L_004247fa:; BB(0x004247fa);
    /* 004247fa: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004247fe: mov edi, 1 */ r_edi = 0x1u;
    /* 00424803: jmp 0x424815 */ goto L_00424815;
L_00424805:; BB(0x00424805);
    /* 00424805: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00424808: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042480b: jl 0x424770 */ if ((fS!=fO)) goto L_00424770;
L_00424811:; BB(0x00424811);
    /* 00424811: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00424815:; BB(0x00424815);
    /* 00424815: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0042481c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042481f: je 0x4249d9 */ if (fZ) goto L_004249d9;
L_00424825:; BB(0x00424825);
    /* 00424825: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424827: je 0x424832 */ if (fZ) goto L_00424832;
L_00424829:; BB(0x00424829);
    /* 00424829: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042482b: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x424830u); f_00577234();
    /* 00424830: jmp 0x424839 */ goto L_00424839;
L_00424832:; BB(0x00424832);
    /* 00424832: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424834: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x424839u); f_0057723c();
L_00424839:; BB(0x00424839);
    /* 00424839: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042483b: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x424840u); f_005771a4();
    /* 00424840: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424842: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x424847u); f_00577244();
    /* 00424847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424849: je 0x424865 */ if (fZ) goto L_00424865;
L_0042484b:; BB(0x0042484b);
    /* 0042484b: mov eax, dword ptr [esi + 0x6f0] */ r_eax = R32((u32)(r_esi+0x6f0u));
    /* 00424851: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424853: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x424856u); call_ind(t); }
L_00424856:; BB(0x00424856);
    /* 00424856: mov ecx, esi */ r_ecx = r_esi;
    /* 00424858: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x42485du); f_008173d0();
    /* 0042485d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042485f: jne 0x4248e9 */ if (!fZ) goto L_004248e9;
L_00424865:; BB(0x00424865);
    /* 00424865: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42486au); f_0082d7b0();
    /* 0042486a: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0042486d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424872u); f_0082d838();
    /* 00424872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424874: push dword ptr [esi + 0x5e4] */ { u32 v = R32((u32)(r_esi+0x5e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042487a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042487c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042487e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x424883u); f_00830b74();
    /* 00424883: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00424886: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424888: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x42488du); f_0082d8bc();
    /* 0042488d: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00424890: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424892: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x424897u); f_0082e9e4();
    /* 00424897: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 0042489a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042489c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4248a1u); f_00830c04();
    /* 004248a1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248a6: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248ab: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004248b2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4248b7u); f_0082fa0c();
    /* 004248b7: mov ecx, 0x418d5c */ r_ecx = 0x418d5cu;
    /* 004248bc: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4248c1u); f_0082fac4();
    /* 004248c1: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x4248c6u); f_00578b38();
    /* 004248c6: mov ecx, esi */ r_ecx = r_esi;
    /* 004248c8: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4248cdu); f_007aa668();
    /* 004248cd: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4248d2u); f_0082dab0();
    /* 004248d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004248d4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4248d9u); f_0082fac4();
    /* 004248d9: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004248df: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4248e4u); f_0061cdb0();
    /* 004248e4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4248e9u); f_0082da80();
L_004248e9:; BB(0x004248e9);
    /* 004248e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004248eb: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004248f0: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4248f5u); f_0082d6fc();
    /* 004248f5: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 004248fa: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4248ffu); f_00830b08();
    /* 004248ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424902: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00424907: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0042490c: jmp 0x424926 */ goto L_00424926;
L_0042490e:; BB(0x0042490e);
    /* 0042490e: mov ecx, esi */ r_ecx = r_esi;
    /* 00424910: call 0x424cd8 */ r_esp -= 4; W32(r_esp, 0x424915u); f_00424cd8();
    /* 00424915: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042491a: mov ecx, esi */ r_ecx = r_esi;
    /* 0042491c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0042491e: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424923: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x424926u); call_ind(t); }
L_00424926:; BB(0x00424926);
    /* 00424926: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0042492c: mov ebx, dword ptr [esi + 0x3f4] */ r_ebx = R32((u32)(r_esi+0x3f4u));
    /* 00424932: mov edi, dword ptr [esi + 0x3f8] */ r_edi = R32((u32)(r_esi+0x3f8u));
    /* 00424938: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0042493e: mov eax, dword ptr [esi + 0x3fc] */ r_eax = R32((u32)(r_esi+0x3fcu));
    /* 00424944: mov dword ptr [esi + 0x418], ebx */ W32((u32)(r_esi+0x418u), r_ebx);
    /* 0042494a: mov dword ptr [esi + 0x41c], edi */ W32((u32)(r_esi+0x41cu), r_edi);
    /* 00424950: mov dword ptr [esi + 0x420], eax */ W32((u32)(r_esi+0x420u), r_eax);
    /* 00424956: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0042495c: mov dword ptr [esi + 0x424], eax */ W32((u32)(r_esi+0x424u), r_eax);
    /* 00424962: mov eax, dword ptr [esi + 0x404] */ r_eax = R32((u32)(r_esi+0x404u));
    /* 00424968: mov dword ptr [esi + 0x428], eax */ W32((u32)(r_esi+0x428u), r_eax);
    /* 0042496e: lea ecx, [esi + 0x420] */ r_ecx = (u32)(r_esi+0x420u);
    /* 00424974: lea edx, [esi + 0x414] */ r_edx = (u32)(r_esi+0x414u);
    /* 0042497a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42497fu); f_0082f9c4();
    /* 0042497f: mov edi, dword ptr [0xaf034c] */ r_edi = R32((u32)(0xaf034cu));
    /* 00424985: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 0042498b: mov edx, dword ptr [esi + 0x40c] */ r_edx = R32((u32)(r_esi+0x40cu));
    /* 00424991: mov ebx, dword ptr [esi + 0x410] */ r_ebx = R32((u32)(r_esi+0x410u));
    /* 00424997: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
    /* 0042499d: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 004249a3: mov dword ptr [0xaab518], edi */ W32((u32)(0xaab518u), r_edi);
    /* 004249a9: mov dword ptr [esi + 0x434], ebx */ W32((u32)(r_esi+0x434u), r_ebx);
    /* 004249af: or edi, 0x400 */ {  u32 a = r_edi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004249b5: add esi, 0x3cc */ {  u32 a = r_esi; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004249bb: mov ecx, esi */ r_ecx = r_esi;
    /* 004249bd: mov dword ptr [0xaf034c], edi */ W32((u32)(0xaf034cu), r_edi);
    /* 004249c3: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4249c8u); f_00818f50();
    /* 004249c8: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004249cd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004249d2: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004249d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004249d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004249d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004249d8: ret  */ FN_RET(0x004245b0); r_esp += 4; return;
L_004249d9:; BB(0x004249d9);
    /* 004249d9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004249db: jne 0x424829 */ if (!fZ) goto L_00424829;
L_004249e1:; BB(0x004249e1);
    /* 004249e1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004249e4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4249e9u); f_0082dcbc();
    /* 004249e9: fld dword ptr [0x8fbb70] */ FPUSH(R_F32((u32)(0x8fbb70u)));
    /* 004249ef: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004249f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004249f4: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004249f7: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004249fb: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00424a03: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x424a08u); f_0082ddd8();
    /* 00424a08: fld dword ptr [0x8fbb70] */ FPUSH(R_F32((u32)(0x8fbb70u)));
    /* 00424a0e: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00424a12: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424a14: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00424a17: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00424a1b: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00424a1f: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424a24: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00424a28: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 00424a30: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00424a34: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00424a38: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424a3du); f_0082f9c4();
    /* 00424a3d: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00424a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424a42: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424a47u); f_007828e4();
    /* 00424a47: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00424a4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424a4e: fld dword ptr [0x8fbb6c] */ FPUSH(R_F32((u32)(0x8fbb6cu)));
    /* 00424a54: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00424a58: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424a5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424a60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424a61: jae 0x424aa0 */ if (!fC) goto L_00424aa0;
L_00424a63:; BB(0x00424a63);
    /* 00424a63: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424a64: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424a68: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424a6a: fadd dword ptr [0x8fbb68] */ ST(0) = ST(0) + R_F32((u32)(0x8fbb68u));
    /* 00424a70: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424a73: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424a78u); f_0082f9f8();
    /* 00424a78: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424a7c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424a7e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424a82: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424a87: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00424a8b: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424a90u); f_0082f9e0();
    /* 00424a90: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00424a94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424a96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424a97: jb 0x424aa0 */ if (fC) goto L_00424aa0;
L_00424a99:; BB(0x00424a99);
    /* 00424a99: mov eax, 1 */ r_eax = 0x1u;
    /* 00424a9e: jmp 0x424aa2 */ goto L_00424aa2;
L_00424aa0:; BB(0x00424aa0);
    /* 00424aa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424aa2:; BB(0x00424aa2);
    /* 00424aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424aa4: jne 0x424829 */ if (!fZ) goto L_00424829;
L_00424aaa:; BB(0x00424aaa);
    /* 00424aaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424aac: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 00424ab2: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x424ab7u); f_00426260();
    /* 00424ab7: mov ecx, eax */ r_ecx = r_eax;
    /* 00424ab9: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00424abf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424ac1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00424ac3: jle 0x424bae */ if ((fZ||fS!=fO)) goto L_00424bae;
L_00424ac9:; BB(0x00424ac9);
    /* 00424ac9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00424acd: mov ebx, eax */ r_ebx = r_eax;
    /* 00424acf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00424ad2: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00424ad6: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00424ad9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424adb: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424add: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424adf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae1: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae7: mov ebp, edx */ r_ebp = r_edx;
    /* 00424ae9: mov esi, ecx */ r_esi = r_ecx;
L_00424aeb:; BB(0x00424aeb);
    /* 00424aeb: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00424aef: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00424af5: fld dword ptr [edi + edx + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx+0xcu)));
    /* 00424af9: mov eax, dword ptr [edi + edx + 0x1c] */ r_eax = R32((u32)(r_edi+r_edx+0x1cu));
    /* 00424afd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00424b01: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00424b05: mov eax, dword ptr [edi + edx + 0x20] */ r_eax = R32((u32)(r_edi+r_edx+0x20u));
    /* 00424b09: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00424b0d: mov eax, dword ptr [edi + edx + 0x24] */ r_eax = R32((u32)(r_edi+r_edx+0x24u));
    /* 00424b11: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00424b15: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424b1a: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00424b22: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424b27u); f_0082f9c4();
    /* 00424b27: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00424b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424b2c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424b31u); f_007828e4();
    /* 00424b31: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00424b35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424b38: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00424b3c: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00424b40: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424b46: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424b48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424b49: jae 0x424b95 */ if (!fC) goto L_00424b95;
L_00424b4b:; BB(0x00424b4b);
    /* 00424b4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424b4c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424b50: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424b52: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424b56: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424b58: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00424b5a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424b5d: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424b62u); f_0082f9f8();
    /* 00424b62: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424b66: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424b68: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424b6c: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424b71: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00424b75: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424b7au); f_0082f9e0();
    /* 00424b7a: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00424b7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424b80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424b81: jb 0x424b95 */ if (fC) goto L_00424b95;
L_00424b83:; BB(0x00424b83);
    /* 00424b83: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424b87: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424b8a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00424b8e: mov eax, 1 */ r_eax = 0x1u;
    /* 00424b93: jmp 0x424bb0 */ goto L_00424bb0;
L_00424b95:; BB(0x00424b95);
    /* 00424b95: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424b98: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424b9b: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424b9d: jl 0x424aeb */ if ((fS!=fO)) goto L_00424aeb;
L_00424ba3:; BB(0x00424ba3);
    /* 00424ba3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424ba7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424baa: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00424bae:; BB(0x00424bae);
    /* 00424bae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424bb0:; BB(0x00424bb0);
    /* 00424bb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424bb2: jne 0x424829 */ if (!fZ) goto L_00424829;
L_00424bb8:; BB(0x00424bb8);
    /* 00424bb8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00424bba: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 00424bc0: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x424bc5u); f_00426260();
    /* 00424bc5: mov ecx, eax */ r_ecx = r_eax;
    /* 00424bc7: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00424bcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424bcf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00424bd1: jle 0x424cbf */ if ((fZ||fS!=fO)) goto L_00424cbf;
L_00424bd7:; BB(0x00424bd7);
    /* 00424bd7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00424bdb: mov ebx, eax */ r_ebx = r_eax;
    /* 00424bdd: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00424be0: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00424be4: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00424be7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424be9: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424beb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bef: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424bf1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bf3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bf5: mov ebp, edx */ r_ebp = r_edx;
    /* 00424bf7: mov esi, ecx */ r_esi = r_ecx;
L_00424bf9:; BB(0x00424bf9);
    /* 00424bf9: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00424bfd: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00424c03: fld dword ptr [edi + edx + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx+0xcu)));
    /* 00424c07: mov eax, dword ptr [edi + edx + 0x1c] */ r_eax = R32((u32)(r_edi+r_edx+0x1cu));
    /* 00424c0b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424c0f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00424c13: mov eax, dword ptr [edi + edx + 0x20] */ r_eax = R32((u32)(r_edi+r_edx+0x20u));
    /* 00424c17: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00424c1b: mov eax, dword ptr [edi + edx + 0x24] */ r_eax = R32((u32)(r_edi+r_edx+0x24u));
    /* 00424c1f: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00424c23: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424c28: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00424c30: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424c35u); f_0082f9c4();
    /* 00424c35: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00424c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c3a: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424c3fu); f_007828e4();
    /* 00424c3f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424c43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424c46: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424c4a: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00424c4e: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424c54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424c56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424c57: jae 0x424ca6 */ if (!fC) goto L_00424ca6;
L_00424c59:; BB(0x00424c59);
    /* 00424c59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424c5a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424c5e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424c60: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424c64: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424c66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00424c68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424c6b: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424c70u); f_0082f9f8();
    /* 00424c70: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00424c74: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424c76: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00424c7a: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424c7f: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00424c83: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424c88u); f_0082f9e0();
    /* 00424c88: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00424c8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424c8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424c8f: jb 0x424ca6 */ if (fC) goto L_00424ca6;
L_00424c91:; BB(0x00424c91);
    /* 00424c91: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424c95: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424c98: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00424c9c: mov edi, 1 */ r_edi = 0x1u;
    /* 00424ca1: jmp 0x424825 */ goto L_00424825;
L_00424ca6:; BB(0x00424ca6);
    /* 00424ca6: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ca9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424cac: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424cae: jl 0x424bf9 */ if ((fS!=fO)) goto L_00424bf9;
L_00424cb4:; BB(0x00424cb4);
    /* 00424cb4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424cb8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424cbb: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00424cbf:; BB(0x00424cbf);
    /* 00424cbf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00424cc1: jmp 0x424825 */ goto L_00424825;
L_00424cc6:; BB(0x00424cc6);
    /* 00424cc6: mov eax, dword ptr [esi + 0x6f0] */ r_eax = R32((u32)(r_esi+0x6f0u));
    /* 00424ccc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424cce: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x424cd1u); call_ind(t); }
    /* 00424cd1: jmp 0x424856 */ goto L_00424856;
}

void f_004246fc(void)
{
    FN_ENTER(0x004246fc);
    /* 004246fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004246fd: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424702u); f_007828e4();
    /* 00424702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00424703: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00424707: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0042470b: fstp dword ptr [0xa43780] */ W_F32((u32)(0xa43780u), ST(0)); FPOP();
    /* 00424711: mov dword ptr [0xa43790], eax */ W32((u32)(0xa43790u), r_eax);
    /* 00424716: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0042471a: mov dword ptr [0xa43794], edx */ W32((u32)(0xa43794u), r_edx);
    /* 00424720: mov dword ptr [0xa43798], eax */ W32((u32)(0xa43798u), r_eax);
    /* 00424725: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00424729: mov dword ptr [0xa43784], eax */ W32((u32)(0xa43784u), r_eax);
    /* 0042472e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00424732: mov dword ptr [0xa43788], eax */ W32((u32)(0xa43788u), r_eax);
    /* 00424737: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0042473b: mov dword ptr [0xa4378c], eax */ W32((u32)(0xa4378cu), r_eax);
    /* 00424740: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00424744: lea eax, [esi + 0x45c] */ r_eax = (u32)(r_esi+0x45cu);
    /* 0042474a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0042474e: lea eax, [esi + 0x468] */ r_eax = (u32)(r_esi+0x468u);
    /* 00424754: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00424758: lea eax, [esi + 0x474] */ r_eax = (u32)(r_esi+0x474u);
    /* 0042475e: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00424762: lea eax, [esi + 0x480] */ r_eax = (u32)(r_esi+0x480u);
    /* 00424768: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0042476c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042476e: mov ebp, eax */ r_ebp = r_eax;
L_00424770:; BB(0x00424770);
    /* 00424770: mov eax, dword ptr [esp + ebp*4 + 0x2c] */ r_eax = R32((u32)(r_esp+r_ebp*4+0x2cu));
    /* 00424774: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00424778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042477a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0042477e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00424781: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00424785: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00424788: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0042478c: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424791: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00424799: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42479eu); f_0082f9c4();
    /* 0042479e: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004247a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004247a3: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4247a8u); f_007828e4();
    /* 004247a8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004247ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004247af: fld dword ptr [0x8fbb78] */ FPUSH(R_F32((u32)(0x8fbb78u)));
    /* 004247b5: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 004247b9: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 004247bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004247c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004247c2: jae 0x424805 */ if (!fC) goto L_00424805;
L_004247c4:; BB(0x004247c4);
    /* 004247c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004247c5: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004247c9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004247cb: fadd dword ptr [0x8fbb74] */ ST(0) = ST(0) + R_F32((u32)(0x8fbb74u));
    /* 004247d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004247d4: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x4247d9u); f_0082f9f8();
    /* 004247d9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004247dd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004247df: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004247e3: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 004247e8: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 004247ec: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4247f1u); f_0082f9e0();
    /* 004247f1: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 004247f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004247f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004247f8: jb 0x424805 */ if (fC) goto L_00424805;
L_004247fa:; BB(0x004247fa);
    /* 004247fa: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004247fe: mov edi, 1 */ r_edi = 0x1u;
    /* 00424803: jmp 0x424815 */ goto L_00424815;
L_00424805:; BB(0x00424805);
    /* 00424805: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00424808: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042480b: jl 0x424770 */ if ((fS!=fO)) goto L_00424770;
L_00424811:; BB(0x00424811);
    /* 00424811: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00424815:; BB(0x00424815);
    /* 00424815: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0042481c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042481f: je 0x4249d9 */ if (fZ) goto L_004249d9;
L_00424825:; BB(0x00424825);
    /* 00424825: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424827: je 0x424832 */ if (fZ) goto L_00424832;
L_00424829:; BB(0x00424829);
    /* 00424829: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042482b: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x424830u); f_00577234();
    /* 00424830: jmp 0x424839 */ goto L_00424839;
L_00424832:; BB(0x00424832);
    /* 00424832: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424834: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x424839u); f_0057723c();
L_00424839:; BB(0x00424839);
    /* 00424839: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042483b: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x424840u); f_005771a4();
    /* 00424840: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424842: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x424847u); f_00577244();
    /* 00424847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424849: je 0x424865 */ if (fZ) goto L_00424865;
L_0042484b:; BB(0x0042484b);
    /* 0042484b: mov eax, dword ptr [esi + 0x6f0] */ r_eax = R32((u32)(r_esi+0x6f0u));
    /* 00424851: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424853: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x424856u); call_ind(t); }
    /* 00424856: mov ecx, esi */ r_ecx = r_esi;
    /* 00424858: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x42485du); f_008173d0();
    /* 0042485d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042485f: jne 0x4248e9 */ if (!fZ) goto L_004248e9;
L_00424865:; BB(0x00424865);
    /* 00424865: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42486au); f_0082d7b0();
    /* 0042486a: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0042486d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424872u); f_0082d838();
    /* 00424872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424874: push dword ptr [esi + 0x5e4] */ { u32 v = R32((u32)(r_esi+0x5e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042487a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042487c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042487e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x424883u); f_00830b74();
    /* 00424883: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00424886: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424888: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x42488du); f_0082d8bc();
    /* 0042488d: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00424890: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424892: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x424897u); f_0082e9e4();
    /* 00424897: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 0042489a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042489c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4248a1u); f_00830c04();
    /* 004248a1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248a6: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248ab: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004248b2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4248b7u); f_0082fa0c();
    /* 004248b7: mov ecx, 0x418d5c */ r_ecx = 0x418d5cu;
    /* 004248bc: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4248c1u); f_0082fac4();
    /* 004248c1: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x4248c6u); f_00578b38();
    /* 004248c6: mov ecx, esi */ r_ecx = r_esi;
    /* 004248c8: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4248cdu); f_007aa668();
    /* 004248cd: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4248d2u); f_0082dab0();
    /* 004248d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004248d4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4248d9u); f_0082fac4();
    /* 004248d9: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004248df: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4248e4u); f_0061cdb0();
    /* 004248e4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4248e9u); f_0082da80();
L_004248e9:; BB(0x004248e9);
    /* 004248e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004248eb: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004248f0: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4248f5u); f_0082d6fc();
    /* 004248f5: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 004248fa: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4248ffu); f_00830b08();
    /* 004248ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424902: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00424907: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0042490c: jmp 0x424926 */ goto L_00424926;
L_00424926:; BB(0x00424926);
    /* 00424926: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0042492c: mov ebx, dword ptr [esi + 0x3f4] */ r_ebx = R32((u32)(r_esi+0x3f4u));
    /* 00424932: mov edi, dword ptr [esi + 0x3f8] */ r_edi = R32((u32)(r_esi+0x3f8u));
    /* 00424938: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0042493e: mov eax, dword ptr [esi + 0x3fc] */ r_eax = R32((u32)(r_esi+0x3fcu));
    /* 00424944: mov dword ptr [esi + 0x418], ebx */ W32((u32)(r_esi+0x418u), r_ebx);
    /* 0042494a: mov dword ptr [esi + 0x41c], edi */ W32((u32)(r_esi+0x41cu), r_edi);
    /* 00424950: mov dword ptr [esi + 0x420], eax */ W32((u32)(r_esi+0x420u), r_eax);
    /* 00424956: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0042495c: mov dword ptr [esi + 0x424], eax */ W32((u32)(r_esi+0x424u), r_eax);
    /* 00424962: mov eax, dword ptr [esi + 0x404] */ r_eax = R32((u32)(r_esi+0x404u));
    /* 00424968: mov dword ptr [esi + 0x428], eax */ W32((u32)(r_esi+0x428u), r_eax);
    /* 0042496e: lea ecx, [esi + 0x420] */ r_ecx = (u32)(r_esi+0x420u);
    /* 00424974: lea edx, [esi + 0x414] */ r_edx = (u32)(r_esi+0x414u);
    /* 0042497a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42497fu); f_0082f9c4();
    /* 0042497f: mov edi, dword ptr [0xaf034c] */ r_edi = R32((u32)(0xaf034cu));
    /* 00424985: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 0042498b: mov edx, dword ptr [esi + 0x40c] */ r_edx = R32((u32)(r_esi+0x40cu));
    /* 00424991: mov ebx, dword ptr [esi + 0x410] */ r_ebx = R32((u32)(r_esi+0x410u));
    /* 00424997: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
    /* 0042499d: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 004249a3: mov dword ptr [0xaab518], edi */ W32((u32)(0xaab518u), r_edi);
    /* 004249a9: mov dword ptr [esi + 0x434], ebx */ W32((u32)(r_esi+0x434u), r_ebx);
    /* 004249af: or edi, 0x400 */ {  u32 a = r_edi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004249b5: add esi, 0x3cc */ {  u32 a = r_esi; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004249bb: mov ecx, esi */ r_ecx = r_esi;
    /* 004249bd: mov dword ptr [0xaf034c], edi */ W32((u32)(0xaf034cu), r_edi);
    /* 004249c3: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4249c8u); f_00818f50();
    /* 004249c8: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004249cd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004249d2: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004249d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004249d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004249d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004249d8: ret  */ FN_RET(0x004246fc); r_esp += 4; return;
L_004249d9:; BB(0x004249d9);
    /* 004249d9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004249db: jne 0x424829 */ if (!fZ) goto L_00424829;
L_004249e1:; BB(0x004249e1);
    /* 004249e1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004249e4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4249e9u); f_0082dcbc();
    /* 004249e9: fld dword ptr [0x8fbb70] */ FPUSH(R_F32((u32)(0x8fbb70u)));
    /* 004249ef: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004249f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004249f4: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004249f7: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004249fb: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00424a03: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x424a08u); f_0082ddd8();
    /* 00424a08: fld dword ptr [0x8fbb70] */ FPUSH(R_F32((u32)(0x8fbb70u)));
    /* 00424a0e: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00424a12: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424a14: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00424a17: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00424a1b: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00424a1f: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424a24: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00424a28: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 00424a30: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00424a34: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00424a38: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424a3du); f_0082f9c4();
    /* 00424a3d: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00424a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424a42: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424a47u); f_007828e4();
    /* 00424a47: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00424a4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424a4e: fld dword ptr [0x8fbb6c] */ FPUSH(R_F32((u32)(0x8fbb6cu)));
    /* 00424a54: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00424a58: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424a5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424a60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424a61: jae 0x424aa0 */ if (!fC) goto L_00424aa0;
L_00424a63:; BB(0x00424a63);
    /* 00424a63: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424a64: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424a68: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424a6a: fadd dword ptr [0x8fbb68] */ ST(0) = ST(0) + R_F32((u32)(0x8fbb68u));
    /* 00424a70: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424a73: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424a78u); f_0082f9f8();
    /* 00424a78: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424a7c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424a7e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424a82: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424a87: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00424a8b: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424a90u); f_0082f9e0();
    /* 00424a90: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00424a94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424a96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424a97: jb 0x424aa0 */ if (fC) goto L_00424aa0;
L_00424a99:; BB(0x00424a99);
    /* 00424a99: mov eax, 1 */ r_eax = 0x1u;
    /* 00424a9e: jmp 0x424aa2 */ goto L_00424aa2;
L_00424aa0:; BB(0x00424aa0);
    /* 00424aa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424aa2:; BB(0x00424aa2);
    /* 00424aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424aa4: jne 0x424829 */ if (!fZ) goto L_00424829;
L_00424aaa:; BB(0x00424aaa);
    /* 00424aaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424aac: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 00424ab2: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x424ab7u); f_00426260();
    /* 00424ab7: mov ecx, eax */ r_ecx = r_eax;
    /* 00424ab9: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00424abf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424ac1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00424ac3: jle 0x424bae */ if ((fZ||fS!=fO)) goto L_00424bae;
L_00424ac9:; BB(0x00424ac9);
    /* 00424ac9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00424acd: mov ebx, eax */ r_ebx = r_eax;
    /* 00424acf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00424ad2: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00424ad6: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00424ad9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424adb: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424add: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424adf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae1: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ae7: mov ebp, edx */ r_ebp = r_edx;
    /* 00424ae9: mov esi, ecx */ r_esi = r_ecx;
L_00424aeb:; BB(0x00424aeb);
    /* 00424aeb: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00424aef: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00424af5: fld dword ptr [edi + edx + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx+0xcu)));
    /* 00424af9: mov eax, dword ptr [edi + edx + 0x1c] */ r_eax = R32((u32)(r_edi+r_edx+0x1cu));
    /* 00424afd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00424b01: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00424b05: mov eax, dword ptr [edi + edx + 0x20] */ r_eax = R32((u32)(r_edi+r_edx+0x20u));
    /* 00424b09: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00424b0d: mov eax, dword ptr [edi + edx + 0x24] */ r_eax = R32((u32)(r_edi+r_edx+0x24u));
    /* 00424b11: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00424b15: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424b1a: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00424b22: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424b27u); f_0082f9c4();
    /* 00424b27: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00424b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424b2c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424b31u); f_007828e4();
    /* 00424b31: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00424b35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424b38: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00424b3c: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00424b40: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424b46: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424b48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424b49: jae 0x424b95 */ if (!fC) goto L_00424b95;
L_00424b4b:; BB(0x00424b4b);
    /* 00424b4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424b4c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424b50: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424b52: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424b56: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424b58: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00424b5a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424b5d: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424b62u); f_0082f9f8();
    /* 00424b62: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424b66: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424b68: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424b6c: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424b71: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00424b75: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424b7au); f_0082f9e0();
    /* 00424b7a: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00424b7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424b80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424b81: jb 0x424b95 */ if (fC) goto L_00424b95;
L_00424b83:; BB(0x00424b83);
    /* 00424b83: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424b87: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424b8a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00424b8e: mov eax, 1 */ r_eax = 0x1u;
    /* 00424b93: jmp 0x424bb0 */ goto L_00424bb0;
L_00424b95:; BB(0x00424b95);
    /* 00424b95: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424b98: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424b9b: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424b9d: jl 0x424aeb */ if ((fS!=fO)) goto L_00424aeb;
L_00424ba3:; BB(0x00424ba3);
    /* 00424ba3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424ba7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424baa: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00424bae:; BB(0x00424bae);
    /* 00424bae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424bb0:; BB(0x00424bb0);
    /* 00424bb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424bb2: jne 0x424829 */ if (!fZ) goto L_00424829;
L_00424bb8:; BB(0x00424bb8);
    /* 00424bb8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00424bba: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 00424bc0: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x424bc5u); f_00426260();
    /* 00424bc5: mov ecx, eax */ r_ecx = r_eax;
    /* 00424bc7: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00424bcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424bcf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00424bd1: jle 0x424cbf */ if ((fZ||fS!=fO)) goto L_00424cbf;
L_00424bd7:; BB(0x00424bd7);
    /* 00424bd7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00424bdb: mov ebx, eax */ r_ebx = r_eax;
    /* 00424bdd: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00424be0: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00424be4: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00424be7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424be9: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424beb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bef: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00424bf1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bf3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424bf5: mov ebp, edx */ r_ebp = r_edx;
    /* 00424bf7: mov esi, ecx */ r_esi = r_ecx;
L_00424bf9:; BB(0x00424bf9);
    /* 00424bf9: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00424bfd: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00424c03: fld dword ptr [edi + edx + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx+0xcu)));
    /* 00424c07: mov eax, dword ptr [edi + edx + 0x1c] */ r_eax = R32((u32)(r_edi+r_edx+0x1cu));
    /* 00424c0b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424c0f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00424c13: mov eax, dword ptr [edi + edx + 0x20] */ r_eax = R32((u32)(r_edi+r_edx+0x20u));
    /* 00424c17: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00424c1b: mov eax, dword ptr [edi + edx + 0x24] */ r_eax = R32((u32)(r_edi+r_edx+0x24u));
    /* 00424c1f: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00424c23: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424c28: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00424c30: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424c35u); f_0082f9c4();
    /* 00424c35: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00424c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c3a: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424c3fu); f_007828e4();
    /* 00424c3f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424c43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424c46: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424c4a: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00424c4e: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424c54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424c56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424c57: jae 0x424ca6 */ if (!fC) goto L_00424ca6;
L_00424c59:; BB(0x00424c59);
    /* 00424c59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424c5a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424c5e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424c60: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424c64: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424c66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00424c68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424c6b: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424c70u); f_0082f9f8();
    /* 00424c70: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00424c74: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424c76: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00424c7a: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424c7f: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00424c83: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424c88u); f_0082f9e0();
    /* 00424c88: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00424c8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424c8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424c8f: jb 0x424ca6 */ if (fC) goto L_00424ca6;
L_00424c91:; BB(0x00424c91);
    /* 00424c91: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424c95: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424c98: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00424c9c: mov edi, 1 */ r_edi = 0x1u;
    /* 00424ca1: jmp 0x424825 */ goto L_00424825;
L_00424ca6:; BB(0x00424ca6);
    /* 00424ca6: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ca9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424cac: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424cae: jl 0x424bf9 */ if ((fS!=fO)) goto L_00424bf9;
L_00424cb4:; BB(0x00424cb4);
    /* 00424cb4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424cb8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424cbb: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00424cbf:; BB(0x00424cbf);
    /* 00424cbf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00424cc1: jmp 0x424825 */ goto L_00424825;
}

void f_00424c4e(void)
{
    FN_ENTER(0x00424c4e);
    goto L_00424c4e;
L_00424825:; BB(0x00424825);
    /* 00424825: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424827: je 0x424832 */ if (fZ) goto L_00424832;
L_00424829:; BB(0x00424829);
    /* 00424829: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042482b: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x424830u); f_00577234();
    /* 00424830: jmp 0x424839 */ goto L_00424839;
L_00424832:; BB(0x00424832);
    /* 00424832: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424834: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x424839u); f_0057723c();
L_00424839:; BB(0x00424839);
    /* 00424839: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042483b: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x424840u); f_005771a4();
    /* 00424840: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424842: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x424847u); f_00577244();
    /* 00424847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424849: je 0x424865 */ if (fZ) goto L_00424865;
L_0042484b:; BB(0x0042484b);
    /* 0042484b: mov eax, dword ptr [esi + 0x6f0] */ r_eax = R32((u32)(r_esi+0x6f0u));
    /* 00424851: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00424853: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x424856u); call_ind(t); }
    /* 00424856: mov ecx, esi */ r_ecx = r_esi;
    /* 00424858: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x42485du); f_008173d0();
    /* 0042485d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042485f: jne 0x4248e9 */ if (!fZ) goto L_004248e9;
L_00424865:; BB(0x00424865);
    /* 00424865: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42486au); f_0082d7b0();
    /* 0042486a: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0042486d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424872u); f_0082d838();
    /* 00424872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424874: push dword ptr [esi + 0x5e4] */ { u32 v = R32((u32)(r_esi+0x5e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042487a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042487c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042487e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x424883u); f_00830b74();
    /* 00424883: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00424886: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424888: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x42488du); f_0082d8bc();
    /* 0042488d: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00424890: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424892: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x424897u); f_0082e9e4();
    /* 00424897: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 0042489a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042489c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4248a1u); f_00830c04();
    /* 004248a1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248a6: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248ab: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004248b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004248b2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4248b7u); f_0082fa0c();
    /* 004248b7: mov ecx, 0x418d5c */ r_ecx = 0x418d5cu;
    /* 004248bc: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4248c1u); f_0082fac4();
    /* 004248c1: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x4248c6u); f_00578b38();
    /* 004248c6: mov ecx, esi */ r_ecx = r_esi;
    /* 004248c8: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4248cdu); f_007aa668();
    /* 004248cd: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4248d2u); f_0082dab0();
    /* 004248d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004248d4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4248d9u); f_0082fac4();
    /* 004248d9: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004248df: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4248e4u); f_0061cdb0();
    /* 004248e4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4248e9u); f_0082da80();
L_004248e9:; BB(0x004248e9);
    /* 004248e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004248eb: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004248f0: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4248f5u); f_0082d6fc();
    /* 004248f5: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 004248fa: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4248ffu); f_00830b08();
    /* 004248ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424902: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00424907: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0042490c: jmp 0x424926 */ goto L_00424926;
L_00424926:; BB(0x00424926);
    /* 00424926: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0042492c: mov ebx, dword ptr [esi + 0x3f4] */ r_ebx = R32((u32)(r_esi+0x3f4u));
    /* 00424932: mov edi, dword ptr [esi + 0x3f8] */ r_edi = R32((u32)(r_esi+0x3f8u));
    /* 00424938: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0042493e: mov eax, dword ptr [esi + 0x3fc] */ r_eax = R32((u32)(r_esi+0x3fcu));
    /* 00424944: mov dword ptr [esi + 0x418], ebx */ W32((u32)(r_esi+0x418u), r_ebx);
    /* 0042494a: mov dword ptr [esi + 0x41c], edi */ W32((u32)(r_esi+0x41cu), r_edi);
    /* 00424950: mov dword ptr [esi + 0x420], eax */ W32((u32)(r_esi+0x420u), r_eax);
    /* 00424956: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0042495c: mov dword ptr [esi + 0x424], eax */ W32((u32)(r_esi+0x424u), r_eax);
    /* 00424962: mov eax, dword ptr [esi + 0x404] */ r_eax = R32((u32)(r_esi+0x404u));
    /* 00424968: mov dword ptr [esi + 0x428], eax */ W32((u32)(r_esi+0x428u), r_eax);
    /* 0042496e: lea ecx, [esi + 0x420] */ r_ecx = (u32)(r_esi+0x420u);
    /* 00424974: lea edx, [esi + 0x414] */ r_edx = (u32)(r_esi+0x414u);
    /* 0042497a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42497fu); f_0082f9c4();
    /* 0042497f: mov edi, dword ptr [0xaf034c] */ r_edi = R32((u32)(0xaf034cu));
    /* 00424985: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 0042498b: mov edx, dword ptr [esi + 0x40c] */ r_edx = R32((u32)(r_esi+0x40cu));
    /* 00424991: mov ebx, dword ptr [esi + 0x410] */ r_ebx = R32((u32)(r_esi+0x410u));
    /* 00424997: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
    /* 0042499d: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 004249a3: mov dword ptr [0xaab518], edi */ W32((u32)(0xaab518u), r_edi);
    /* 004249a9: mov dword ptr [esi + 0x434], ebx */ W32((u32)(r_esi+0x434u), r_ebx);
    /* 004249af: or edi, 0x400 */ {  u32 a = r_edi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004249b5: add esi, 0x3cc */ {  u32 a = r_esi; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004249bb: mov ecx, esi */ r_ecx = r_esi;
    /* 004249bd: mov dword ptr [0xaf034c], edi */ W32((u32)(0xaf034cu), r_edi);
    /* 004249c3: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4249c8u); f_00818f50();
    /* 004249c8: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004249cd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004249d2: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004249d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004249d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004249d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004249d8: ret  */ FN_RET(0x00424c4e); r_esp += 4; return;
L_00424bf9:; BB(0x00424bf9);
    /* 00424bf9: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00424bfd: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00424c03: fld dword ptr [edi + edx + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx+0xcu)));
    /* 00424c07: mov eax, dword ptr [edi + edx + 0x1c] */ r_eax = R32((u32)(r_edi+r_edx+0x1cu));
    /* 00424c0b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424c0f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00424c13: mov eax, dword ptr [edi + edx + 0x20] */ r_eax = R32((u32)(r_edi+r_edx+0x20u));
    /* 00424c17: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00424c1b: mov eax, dword ptr [edi + edx + 0x24] */ r_eax = R32((u32)(r_edi+r_edx+0x24u));
    /* 00424c1f: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00424c23: mov edx, 0xa43790 */ r_edx = 0xa43790u;
    /* 00424c28: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00424c30: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x424c35u); f_0082f9c4();
    /* 00424c35: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00424c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c3a: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x424c3fu); f_007828e4();
    /* 00424c3f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00424c43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424c46: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424c4a: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
L_00424c4e:; BB(0x00424c4e);
    /* 00424c4e: fcomp dword ptr [0xa43780] */ fx_compare(ST(0), R_F32((u32)(0xa43780u))); FPOP();
    /* 00424c54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424c56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424c57: jae 0x424ca6 */ if (!fC) goto L_00424ca6;
L_00424c59:; BB(0x00424c59);
    /* 00424c59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424c5a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00424c5e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424c60: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00424c64: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00424c66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00424c68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00424c6b: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x424c70u); f_0082f9f8();
    /* 00424c70: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00424c74: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00424c76: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00424c7a: mov edx, 0xa43784 */ r_edx = 0xa43784u;
    /* 00424c7f: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00424c83: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x424c88u); f_0082f9e0();
    /* 00424c88: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00424c8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424c8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424c8f: jb 0x424ca6 */ if (fC) goto L_00424ca6;
L_00424c91:; BB(0x00424c91);
    /* 00424c91: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424c95: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424c98: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00424c9c: mov edi, 1 */ r_edi = 0x1u;
    /* 00424ca1: jmp 0x424825 */ goto L_00424825;
L_00424ca6:; BB(0x00424ca6);
    /* 00424ca6: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00424ca9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00424cac: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424cae: jl 0x424bf9 */ if ((fS!=fO)) goto L_00424bf9;
L_00424cb4:; BB(0x00424cb4);
    /* 00424cb4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00424cb8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00424cbb: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00424cbf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00424cc1: jmp 0x424825 */ goto L_00424825;
}

void f_00424cd8(void) /* sub_424CD8 */
{
    FN_ENTER(0x00424cd8);
    /* 00424cd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424cd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00424cda: mov edi, ecx */ r_edi = r_ecx;
    /* 00424cdc: mov eax, dword ptr [0xa4376c] */ r_eax = R32((u32)(0xa4376cu));
    /* 00424ce1: mov ebx, dword ptr [edi + 0x34] */ r_ebx = R32((u32)(r_edi+0x34u));
    /* 00424ce4: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00424ce7: mov ecx, 0x418d5c */ r_ecx = 0x418d5cu;
    /* 00424cec: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x424cf1u); f_0082fac4();
    /* 00424cf1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x424cf6u); f_0082d7b0();
    /* 00424cf6: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00424cf9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424cfeu); f_0082d838();
    /* 00424cfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d00: push dword ptr [edi + 0x5e4] */ { u32 v = R32((u32)(r_edi+0x5e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00424d06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d0a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x424d0fu); f_00830b74();
    /* 00424d0f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00424d12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d14: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x424d19u); f_0082d8bc();
    /* 00424d19: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 00424d1c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d1e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x424d23u); f_0082e9e4();
    /* 00424d23: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 00424d26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d28: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x424d2du); f_00830c04();
    /* 00424d2d: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d32: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d37: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d3c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d3e: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x424d43u); f_0082fa0c();
    /* 00424d43: mov ecx, edi */ r_ecx = r_edi;
    /* 00424d45: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x424d4au); f_007aa668();
    /* 00424d4a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x424d4fu); f_0082da80();
    /* 00424d4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d51: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x424d56u); f_0082fac4();
    /* 00424d56: mov dword ptr [edi + 0x34], ebx */ W32((u32)(r_edi+0x34u), r_ebx);
    /* 00424d59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424d5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424d5b: ret  */ FN_RET(0x00424cd8); r_esp += 4; return;
}

void f_00424d5c(void) /* sub_424D5C */
{
    FN_ENTER(0x00424d5c);
    /* 00424d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424d5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00424d5e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00424d60: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x424d65u); f_004f7c84();
    /* 00424d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00424d67: je 0x424d6c */ if (fZ) goto L_00424d6c;
L_00424d69:; BB(0x00424d69);
    /* 00424d69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424d6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424d6b: ret  */ FN_RET(0x00424d5c); r_esp += 4; return;
L_00424d6c:; BB(0x00424d6c);
    /* 00424d6c: mov eax, dword ptr [ebp + 0x6f0] */ r_eax = R32((u32)(r_ebp+0x6f0u));
    /* 00424d72: lea ecx, [ebp + 0x6f0] */ r_ecx = (u32)(r_ebp+0x6f0u);
    /* 00424d78: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x424d7bu); call_ind(t); }
    /* 00424d7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00424d7d: je 0x424e17 */ if (fZ) goto L_00424e17;
L_00424d83:; BB(0x00424d83);
    /* 00424d83: fld dword ptr [ebp + 0x5e4] */ FPUSH(R_F32((u32)(r_ebp+0x5e4u)));
    /* 00424d89: fsub dword ptr [ebp + 0x5e8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x5e8u));
    /* 00424d8f: fcomp dword ptr [0x8fbb58] */ fx_compare(ST(0), R_F32((u32)(0x8fbb58u))); FPOP();
    /* 00424d95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424d97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424d98: jb 0x424e17 */ if (fC) goto L_00424e17;
L_00424d9a:; BB(0x00424d9a);
    /* 00424d9a: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00424da1: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00424da4: je 0x424e17 */ if (fZ) goto L_00424e17;
L_00424da6:; BB(0x00424da6);
    /* 00424da6: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00424da9: je 0x424e17 */ if (fZ) goto L_00424e17;
L_00424dab:; BB(0x00424dab);
    /* 00424dab: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00424dae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x424db3u); f_00829cc8();
    /* 00424db3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x424db8u); f_0082d7b0();
    /* 00424db8: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00424dbb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424dc0u); f_0082d838();
    /* 00424dc0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00424dc3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424dc5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x424dcau); f_0082d8bc();
    /* 00424dca: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dcf: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd4: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424ddb: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x424de0u); f_0082fa0c();
    /* 00424de0: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00424de3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424de5: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x424deau); f_0082e9e4();
    /* 00424dea: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 00424ded: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424def: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x424df4u); f_00830c04();
    /* 00424df4: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
    /* 00424df9: mov ebx, dword ptr [ebp + 0x34] */ r_ebx = R32((u32)(r_ebp+0x34u));
    /* 00424dfc: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00424e02: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00424e05: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 00424e08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00424e0a: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x424e0fu); f_007aa668();
    /* 00424e0f: mov dword ptr [ebp + 0x34], ebx */ W32((u32)(r_ebp+0x34u), r_ebx);
    /* 00424e12: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x424e17u); f_0082da80();
L_00424e17:; BB(0x00424e17);
    /* 00424e17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00424e18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424e19: ret  */ FN_RET(0x00424d5c); r_esp += 4; return;
}

void f_00424e1c(void) /* sub_424E1C */
{
    FN_ENTER(0x00424e1c);
    /* 00424e1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424e1d: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424e20: mov esi, ecx */ r_esi = r_ecx;
    /* 00424e22: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00424e24: mov ecx, esi */ r_ecx = r_esi;
    /* 00424e26: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e2b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e30: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x424e33u); call_ind(t); }
    /* 00424e33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424e35: je 0x424f63 */ if (fZ) goto L_00424f63;
L_00424e3b:; BB(0x00424e3b);
    /* 00424e3b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00424e3e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x424e43u); f_00829cc8();
    /* 00424e43: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x424e48u); f_0082d7b0();
    /* 00424e48: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00424e4b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424e50u); f_0082d838();
    /* 00424e50: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00424e53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424e55: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x424e5au); f_0082d8bc();
    /* 00424e5a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x424e5fu); f_0082d7b0();
    /* 00424e5f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e64: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e69: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424e70: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x424e75u); f_0082fa0c();
    /* 00424e75: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x424e7au); f_0082da80();
    /* 00424e7a: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e7f: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e84: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e89: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424e8b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x424e90u); f_0082fa0c();
    /* 00424e90: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00424e96: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00424e9c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00424ea2: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 00424ea8: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00424eac: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00424eb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00424eb6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00424eba: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00424ebe: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00424ec2: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00424ec6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00424eca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00424ecc: jl 0x424eda */ if ((fS!=fO)) goto L_00424eda;
L_00424ece:; BB(0x00424ece);
    /* 00424ece: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424ed1: jl 0x424edc */ if ((fS!=fO)) goto L_00424edc;
L_00424ed3:; BB(0x00424ed3);
    /* 00424ed3: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00424ed8: jmp 0x424edc */ goto L_00424edc;
L_00424eda:; BB(0x00424eda);
    /* 00424eda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424edc:; BB(0x00424edc);
    /* 00424edc: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 00424ee2: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 00424ee8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424eea: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00424eee: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 00424ef4: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00424ef8: fcom dword ptr [0x8fbb40] */ fx_compare(ST(0), R_F32((u32)(0x8fbb40u))); 
    /* 00424efe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424f00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424f01: jae 0x424f0d */ if (!fC) goto L_00424f0d;
L_00424f03:; BB(0x00424f03);
    /* 00424f03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00424f05: fld dword ptr [0x8fbb40] */ FPUSH(R_F32((u32)(0x8fbb40u)));
    /* 00424f0b: jmp 0x424f40 */ goto L_00424f40;
L_00424f0d:; BB(0x00424f0d);
    /* 00424f0d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00424f10: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00424f13: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00424f17: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00424f1b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00424f1e: fadd dword ptr [eax*4 + 0x8fb990] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fb990u));
    /* 00424f25: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00424f27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424f29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424f2a: jae 0x424f40 */ if (!fC) goto L_00424f40;
L_00424f2c:; BB(0x00424f2c);
    /* 00424f2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00424f2e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00424f32: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00424f36: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00424f39: fadd dword ptr [edx*4 + 0x8fb990] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x8fb990u));
L_00424f40:; BB(0x00424f40);
    /* 00424f40: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00424f43: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00424f47: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00424f4a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00424f4e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x424f53u); f_0083046c();
    /* 00424f53: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00424f59: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x424f5eu); f_0061cdb0();
    /* 00424f5e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x424f63u); f_0082da80();
L_00424f63:; BB(0x00424f63);
    /* 00424f63: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424f67: ret  */ FN_RET(0x00424e1c); r_esp += 4; return;
}

void f_00424e45(void)
{
    FN_ENTER(0x00424e45);
    /* 00424e45: mov dword ptr [eax], eax */ W32((u32)(r_eax), r_eax);
    /* 00424e48: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00424e4b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x424e50u); f_0082d838();
    /* 00424e50: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00424e53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424e55: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x424e5au); f_0082d8bc();
    /* 00424e5a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x424e5fu); f_0082d7b0();
    /* 00424e5f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e64: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e69: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424e70: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x424e75u); f_0082fa0c();
    /* 00424e75: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x424e7au); f_0082da80();
    /* 00424e7a: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e7f: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e84: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e89: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424e8b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x424e90u); f_0082fa0c();
    /* 00424e90: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00424e96: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00424e9c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00424ea2: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 00424ea8: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00424eac: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00424eb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00424eb6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00424eba: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00424ebe: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00424ec2: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00424ec6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00424eca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00424ecc: jl 0x424eda */ if ((fS!=fO)) goto L_00424eda;
L_00424ece:; BB(0x00424ece);
    /* 00424ece: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424ed1: jl 0x424edc */ if ((fS!=fO)) goto L_00424edc;
L_00424ed3:; BB(0x00424ed3);
    /* 00424ed3: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00424ed8: jmp 0x424edc */ goto L_00424edc;
L_00424eda:; BB(0x00424eda);
    /* 00424eda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424edc:; BB(0x00424edc);
    /* 00424edc: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 00424ee2: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 00424ee8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424eea: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00424eee: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 00424ef4: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00424ef8: fcom dword ptr [0x8fbb40] */ fx_compare(ST(0), R_F32((u32)(0x8fbb40u))); 
    /* 00424efe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424f00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424f01: jae 0x424f0d */ if (!fC) goto L_00424f0d;
L_00424f03:; BB(0x00424f03);
    /* 00424f03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00424f05: fld dword ptr [0x8fbb40] */ FPUSH(R_F32((u32)(0x8fbb40u)));
    /* 00424f0b: jmp 0x424f40 */ goto L_00424f40;
L_00424f0d:; BB(0x00424f0d);
    /* 00424f0d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00424f10: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00424f13: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00424f17: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00424f1b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00424f1e: fadd dword ptr [eax*4 + 0x8fb990] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fb990u));
    /* 00424f25: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00424f27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00424f29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00424f2a: jae 0x424f40 */ if (!fC) goto L_00424f40;
L_00424f2c:; BB(0x00424f2c);
    /* 00424f2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00424f2e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00424f32: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00424f36: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00424f39: fadd dword ptr [edx*4 + 0x8fb990] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x8fb990u));
L_00424f40:; BB(0x00424f40);
    /* 00424f40: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00424f43: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00424f47: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00424f4a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00424f4e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x424f53u); f_0083046c();
    /* 00424f53: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00424f59: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x424f5eu); f_0061cdb0();
    /* 00424f5e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x424f63u); f_0082da80();
    /* 00424f63: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424f67: ret  */ FN_RET(0x00424e45); r_esp += 4; return;
}

void f_00424f68(void) /* sub_424F68 */
{
    FN_ENTER(0x00424f68);
    /* 00424f68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424f6b: push dword ptr [0xa4373c] */ { u32 v = R32((u32)(0xa4373cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00424f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424f72: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x424f77u); f_00520c70();
    /* 00424f77: ret  */ FN_RET(0x00424f68); r_esp += 4; return;
}

void f_00424f78(void) /* sub_424F78 */
{
    FN_ENTER(0x00424f78);
    /* 00424f78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424f79: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424f7c: mov edi, ecx */ r_edi = r_ecx;
    /* 00424f7e: mov eax, dword ptr [0x8fb8a0] */ r_eax = R32((u32)(0x8fb8a0u));
    /* 00424f83: mov edx, dword ptr [0x8fb8b0] */ r_edx = R32((u32)(0x8fb8b0u));
    /* 00424f89: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 00424f91: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00424f94: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 00424f99: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 00424fa1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00424fa5: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 00424fad: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00424faf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00424fb3: mov eax, dword ptr [edi + 0x778] */ r_eax = R32((u32)(r_edi+0x778u));
    /* 00424fb9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00424fbc: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x424fc1u); f_00420a44();
    /* 00424fc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424fc3: jne 0x424fe1 */ if (!fZ) goto L_00424fe1;
L_00424fc5:; BB(0x00424fc5);
    /* 00424fc5: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00424fc9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00424fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424fcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00424fcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424fd0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00424fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424fd5: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x424fdau); f_0051fc9c();
    /* 00424fda: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424fdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424fde: ret 8 */ FN_RET(0x00424f78); r_esp += 12; return;
L_00424fe1:; BB(0x00424fe1);
    /* 00424fe1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424fe4: jne 0x424ffb */ if (!fZ) goto L_00424ffb;
L_00424fe6:; BB(0x00424fe6);
    /* 00424fe6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00424fea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00424fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424fee: mov ecx, edi */ r_ecx = r_edi;
    /* 00424ff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424ff1: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00424ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ff6: call 0x41a0e0 */ r_esp -= 4; W32(r_esp, 0x424ffbu); f_0041a0e0();
L_00424ffb:; BB(0x00424ffb);
    /* 00424ffb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424ffe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424fff: ret 8 */ FN_RET(0x00424f78); r_esp += 12; return;
}

