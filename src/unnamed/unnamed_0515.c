#include "protos.h"

void f_00515040(void)
{
    FN_ENTER(0x00515040);
    /* 00515040: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00515042: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00515046: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051504a: mov eax, dword ptr [esi + 0x2a8] */ r_eax = R32((u32)(r_esi+0x2a8u));
    /* 00515050: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00515054: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 0051505a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0051505e: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x515063u); f_00771f5c();
    /* 00515063: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00515067: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 0051506b: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 00515071: mov eax, 1 */ r_eax = 0x1u;
    /* 00515076: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0051507d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515080: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515082: ret  */ FN_RET(0x00515040); r_esp += 4; return;
}

void f_00515098(void) /* sub_515098 */
{
    FN_ENTER(0x00515098);
    /* 00515098: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00515099: mov esi, ecx */ r_esi = r_ecx;
    /* 0051509b: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005150a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005150a5: jne 0x5150cf */ if (!fZ) goto L_005150cf;
L_005150a7:; BB(0x005150a7);
    /* 005150a7: mov ecx, esi */ r_ecx = r_esi;
    /* 005150a9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5150aeu); f_007aa094();
    /* 005150ae: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005150b4: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005150b9: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005150be: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005150c3: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150c6: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x5150cbu); f_00772054();
    /* 005150cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005150cd: jmp 0x515114 */ goto L_00515114;
L_005150cf:; BB(0x005150cf);
    /* 005150cf: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005150d1: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150d4: mov ecx, esi */ r_ecx = r_esi;
    /* 005150d6: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150d9: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150dc: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5150e1u); f_00771c8c();
    /* 005150e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005150e3: je 0x5150fe */ if (fZ) goto L_005150fe;
L_005150e5:; BB(0x005150e5);
    /* 005150e5: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150eb: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150f1: mov ecx, esi */ r_ecx = r_esi;
    /* 005150f3: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005150f9: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5150feu); f_00771f1c();
L_005150fe:; BB(0x005150fe);
    /* 005150fe: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00515104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515106: jne 0x515114 */ if (!fZ) goto L_00515114;
L_00515108:; BB(0x00515108);
    /* 00515108: mov eax, 1 */ r_eax = 0x1u;
    /* 0051510d: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_00515114:; BB(0x00515114);
    /* 00515114: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00515115: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x51511au); f_007b999c();
    /* 0051511a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0051511d: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515122: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00515125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00515126: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515127: ret  */ FN_RET(0x00515098); r_esp += 4; return;
}

void f_00515128(void) /* sub_515128 */
{
    FN_ENTER(0x00515128);
    /* 00515128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00515129: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051512a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051512b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051512c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051512f: mov edi, ecx */ r_edi = r_ecx;
    /* 00515131: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00515133: mov ecx, edi */ r_ecx = r_edi;
    /* 00515135: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051513a: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051513f: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00515144: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x515147u); call_ind(t); }
    /* 00515147: mov esi, eax */ r_esi = r_eax;
    /* 00515149: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051514b: je 0x515286 */ if (fZ) goto L_00515286;
L_00515151:; BB(0x00515151);
    /* 00515151: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00515152: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x515157u); f_00794548();
    /* 00515157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00515158: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0051515b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x515160u); f_00829cc8();
    /* 00515160: mov ebp, dword ptr [0xaf034c] */ r_ebp = R32((u32)(0xaf034cu));
    /* 00515166: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0051516c: mov ebx, dword ptr [0xaf0364] */ r_ebx = R32((u32)(0xaf0364u));
    /* 00515172: mov dword ptr [0xaab518], ebp */ W32((u32)(0xaab518u), r_ebp);
    /* 00515178: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0051517b: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00515181: mov dword ptr [0xaab500], ebx */ W32((u32)(0xaab500u), r_ebx);
    /* 00515187: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 0051518d: lea ebp, [edi + 0x3a4] */ r_ebp = (u32)(r_edi+0x3a4u);
    /* 00515193: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00515195: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x51519au); f_005771a4();
    /* 0051519a: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0051519d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051519e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005151a0: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5151a5u); f_0057725c();
    /* 005151a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005151a8: je 0x5152b5 */ if (fZ) goto L_005152b5;
L_005151ae:; BB(0x005151ae);
    /* 005151ae: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5151b3u); f_0082fa9c();
    /* 005151b3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5151b8u); f_0082d7b0();
    /* 005151b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005151ba: push dword ptr [edi + 0x394] */ { u32 v = R32((u32)(r_edi+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 005151c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005151c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005151c4: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5151c9u); f_00830b74();
    /* 005151c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005151cb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5151d0u); f_0082d838();
    /* 005151d0: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005151d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005151d5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5151dau); f_0082d8bc();
    /* 005151da: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5151dfu); f_004f7c84();
    /* 005151df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005151e2: je 0x5152a7 */ if (fZ) goto L_005152a7;
L_005151e8:; BB(0x005151e8);
    /* 005151e8: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5151edu); f_00578b38();
    /* 005151ed: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005151f0: je 0x51529b */ if (fZ) goto L_0051529b;
L_005151f6:; BB(0x005151f6);
    /* 005151f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005151f8: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5151fdu); f_007aa7b8();
L_005151fd:; BB(0x005151fd);
    /* 005151fd: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x515202u); f_0082dab0();
L_00515202:; BB(0x00515202);
    /* 00515202: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x515207u); f_0082da80();
    /* 00515207: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x51520cu); f_0082faac();
L_0051520c:; BB(0x0051520c);
    /* 0051520c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00515211: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00515212: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00515215: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051521a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051521c: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x515221u); f_0057725c();
    /* 00515221: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515224: je 0x51528e */ if (fZ) goto L_0051528e;
L_00515226:; BB(0x00515226);
    /* 00515226: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0051522b: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00515231: mov ebx, dword ptr [0xaab518] */ r_ebx = R32((u32)(0xaab518u));
    /* 00515237: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0051523c: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00515242: mov dword ptr [0xaf034c], ebx */ W32((u32)(0xaf034cu), r_ebx);
    /* 00515248: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x51524du); f_00794750();
    /* 0051524d: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00515254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00515256: jl 0x515262 */ if ((fS!=fO)) goto L_00515262;
L_00515258:; BB(0x00515258);
    /* 00515258: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051525b: jle 0x515286 */ if ((fZ||fS!=fO)) goto L_00515286;
L_0051525d:; BB(0x0051525d);
    /* 0051525d: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515260: je 0x515286 */ if (fZ) goto L_00515286;
L_00515262:; BB(0x00515262);
    /* 00515262: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00515269: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051526c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051526e: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00515276: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 0051527e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515281: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x515286u); f_00779d4c();
L_00515286:; BB(0x00515286);
    /* 00515286: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515289: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051528a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051528b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051528c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051528d: ret  */ FN_RET(0x00515128); r_esp += 4; return;
L_0051528e:; BB(0x0051528e);
    /* 0051528e: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 00515294: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00515296: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x515299u); call_ind(t); }
    /* 00515299: jmp 0x515226 */ goto L_00515226;
L_0051529b:; BB(0x0051529b);
    /* 0051529b: mov ecx, edi */ r_ecx = r_edi;
    /* 0051529d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5152a2u); f_007aa668();
    /* 005152a2: jmp 0x5151fd */ goto L_005151fd;
L_005152a7:; BB(0x005152a7);
    /* 005152a7: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005152aa: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5152afu); f_0082e1e8();
    /* 005152af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005152b0: jmp 0x515202 */ goto L_00515202;
L_005152b5:; BB(0x005152b5);
    /* 005152b5: mov edx, dword ptr [edi + 0x3a4] */ r_edx = R32((u32)(r_edi+0x3a4u));
    /* 005152bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005152bd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5152c0u); call_ind(t); }
    /* 005152c0: mov ecx, edi */ r_ecx = r_edi;
    /* 005152c2: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5152c7u); f_008173d0();
    /* 005152c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005152c9: jne 0x51520c */ if (!fZ) goto L_0051520c;
L_005152cf:; BB(0x005152cf);
    /* 005152cf: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005152d5: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005152d8: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005152de: jmp 0x5151ae */ goto L_005151ae;
}

void f_005152e4(void)
{
    FN_ENTER(0x005152e4);
    /* 005152e4: mov eax, dword ptr [0xa72d48] */ r_eax = R32((u32)(0xa72d48u));
    /* 005152e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005152eb: je 0x5152fe */ if (fZ) goto L_005152fe;
L_005152ed:; BB(0x005152ed);
    /* 005152ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005152ee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5152f3u); f_00857e98();
    /* 005152f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005152f4: mov dword ptr [0xa72d48], 0 */ W32((u32)(0xa72d48u), 0x0u);
L_005152fe:; BB(0x005152fe);
    /* 005152fe: mov eax, dword ptr [0xa72d44] */ r_eax = R32((u32)(0xa72d44u));
    /* 00515303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515305: je 0x515318 */ if (fZ) goto L_00515318;
L_00515307:; BB(0x00515307);
    /* 00515307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515308: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x51530du); f_00857e98();
    /* 0051530d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051530e: mov dword ptr [0xa72d44], 0 */ W32((u32)(0xa72d44u), 0x0u);
L_00515318:; BB(0x00515318);
    /* 00515318: mov eax, dword ptr [0xa72d40] */ r_eax = R32((u32)(0xa72d40u));
    /* 0051531d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051531f: je 0x515332 */ if (fZ) goto L_00515332;
L_00515321:; BB(0x00515321);
    /* 00515321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515322: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x515327u); f_00857e98();
    /* 00515327: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00515328: mov dword ptr [0xa72d40], 0 */ W32((u32)(0xa72d40u), 0x0u);
L_00515332:; BB(0x00515332);
    /* 00515332: mov eax, dword ptr [0xa72d3c] */ r_eax = R32((u32)(0xa72d3cu));
    /* 00515337: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515339: je 0x51534c */ if (fZ) goto L_0051534c;
L_0051533b:; BB(0x0051533b);
    /* 0051533b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051533c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x515341u); f_00857e98();
    /* 00515341: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00515342: mov dword ptr [0xa72d3c], 0 */ W32((u32)(0xa72d3cu), 0x0u);
L_0051534c:; BB(0x0051534c);
    /* 0051534c: mov ecx, dword ptr [0xa72d4c] */ r_ecx = R32((u32)(0xa72d4cu));
    /* 00515352: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515354: je 0x515369 */ if (fZ) goto L_00515369;
L_00515356:; BB(0x00515356);
    /* 00515356: je 0x51535f */ if (fZ) goto L_0051535f;
L_00515358:; BB(0x00515358);
    /* 00515358: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051535a: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x51535fu); f_0045a950();
L_0051535f:; BB(0x0051535f);
    /* 0051535f: mov dword ptr [0xa72d4c], 0 */ W32((u32)(0xa72d4cu), 0x0u);
L_00515369:; BB(0x00515369);
    /* 00515369: mov ecx, dword ptr [0xa72d38] */ r_ecx = R32((u32)(0xa72d38u));
    /* 0051536f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515371: je 0x515386 */ if (fZ) goto L_00515386;
L_00515373:; BB(0x00515373);
    /* 00515373: je 0x51537c */ if (fZ) goto L_0051537c;
L_00515375:; BB(0x00515375);
    /* 00515375: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515377: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x51537cu); f_004066a8();
L_0051537c:; BB(0x0051537c);
    /* 0051537c: mov dword ptr [0xa72d38], 0 */ W32((u32)(0xa72d38u), 0x0u);
L_00515386:; BB(0x00515386);
    /* 00515386: ret  */ FN_RET(0x005152e4); r_esp += 4; return;
}

void f_00515388(void)
{
    FN_ENTER(0x00515388);
    /* 00515388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515389: mov ebp, esp */ r_ebp = r_esp;
    /* 0051538b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051538d: push 0x8d445a */ { u32 v = 0x8d445au; r_esp -= 4; W32(r_esp, v); }
    /* 00515392: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00515398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515399: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005153a0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005153a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005153a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005153a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005153ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005153af: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005153b1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005153b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5153bdu); f_005caba4();
    /* 005153bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005153be: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005153c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005153c3: je 0x51544b */ if (fZ) goto L_0051544b;
L_005153c9:; BB(0x005153c9);
    /* 005153c9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005153d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005153d7: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005153dd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005153e0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5153e5u); f_00787a4c();
    /* 005153e5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005153e8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005153ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005153f2:; BB(0x005153f2);
    /* 005153f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005153f9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00515400: push 0x414 */ { u32 v = 0x414u; r_esp -= 4; W32(r_esp, v); }
    /* 00515405: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x51540au); f_005caba4();
    /* 0051540a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051540b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051540e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515410: je 0x515447 */ if (fZ) goto L_00515447;
L_00515412:; BB(0x00515412);
    /* 00515412: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00515419: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00515420: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515423: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00515426: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051542a: call 0x515454 */ r_esp -= 4; W32(r_esp, 0x51542fu); f_00515454();
    /* 0051542f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515432: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00515439:; BB(0x00515439);
    /* 00515439: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051543c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00515443: mov esp, ebp */ r_esp = r_ebp;
    /* 00515445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515446: ret  */ FN_RET(0x00515388); r_esp += 4; return;
L_00515447:; BB(0x00515447);
    /* 00515447: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515449: jmp 0x515439 */ goto L_00515439;
L_0051544b:; BB(0x0051544b);
    /* 0051544b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051544d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00515450: jmp 0x5153f2 */ goto L_005153f2;
}

void f_00515454(void) /* sub_515454 */
{
    FN_ENTER(0x00515454);
    /* 00515454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515455: mov ebp, esp */ r_ebp = r_esp;
    /* 00515457: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00515459: push 0x8d4492 */ { u32 v = 0x8d4492u; r_esp -= 4; W32(r_esp, v); }
    /* 0051545e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00515464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515465: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051546c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051546f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00515472: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00515475: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00515478: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0051547b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051547e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515481: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00515484: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00515487: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x51548cu); f_007865e8();
    /* 0051548c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00515493: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00515498: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051549d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005154a0: mov dword ptr [eax], 0xaffb20 */ W32((u32)(r_eax), 0xaffb20u);
    /* 005154a6: add eax, 0x3a4 */ {  u32 a = r_eax; u32 b = 0x3a4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005154ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005154ad: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005154af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005154b0: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5154b5u); f_00858736();
    /* 005154b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005154bc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005154bf: mov eax, dword ptr [0x9bb550] */ r_eax = R32((u32)(0x9bb550u));
    /* 005154c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005154c7: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005154c9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005154cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005154cd: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5154d3u); call_ind(t); }
    /* 005154d3: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005154d6: fld dword ptr [0x9208ac] */ FPUSH(R_F32((u32)(0x9208acu)));
    /* 005154dc: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005154df: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 005154e2: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005154e5: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 005154eb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005154ee: mov dword ptr [esi + 0x2a8], ecx */ W32((u32)(r_esi+0x2a8u), r_ecx);
    /* 005154f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005154f7: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005154fd: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00515503: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 00515509: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0051550f: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 00515515: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0051551b: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00515521: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515524: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0051552a: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0051552d: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00515533: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00515536: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0051553c: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0051553f: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 00515545: fadd dword ptr [0x9208a4] */ ST(0) = ST(0) + R_F32((u32)(0x9208a4u));
    /* 0051554b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051554d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515554: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0051555b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051555d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051555f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515560: jae 0x51556e */ if (!fC) goto L_0051556e;
L_00515562:; BB(0x00515562);
    /* 00515562: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00515564: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515566: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 0051556c: jmp 0x515585 */ goto L_00515585;
L_0051556e:; BB(0x0051556e);
    /* 0051556e: fld dword ptr [0x9208a8] */ FPUSH(R_F32((u32)(0x9208a8u)));
    /* 00515574: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00515576: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515578: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515579: ja 0x51557d */ if ((!fC&&!fZ)) goto L_0051557d;
L_0051557b:; BB(0x0051557b);
    /* 0051557b: fst st(1) */ ST(1) = ST(0);
L_0051557d:; BB(0x0051557d);
    /* 0051557d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051557f: fstp dword ptr [ecx + 0x398] */ W_F32((u32)(r_ecx+0x398u), ST(0)); FPOP();
L_00515585:; BB(0x00515585);
    /* 00515585: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 0051558b: fadd dword ptr [0x9208a0] */ ST(0) = ST(0) + R_F32((u32)(0x9208a0u));
    /* 00515591: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00515593: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00515595: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00515597: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515599: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051559a: jae 0x5155a8 */ if (!fC) goto L_005155a8;
L_0051559c:; BB(0x0051559c);
    /* 0051559c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051559e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005155a0: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 005155a6: jmp 0x5155bf */ goto L_005155bf;
L_005155a8:; BB(0x005155a8);
    /* 005155a8: fld dword ptr [0x9208a8] */ FPUSH(R_F32((u32)(0x9208a8u)));
    /* 005155ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005155b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005155b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005155b3: ja 0x5155b7 */ if ((!fC&&!fZ)) goto L_005155b7;
L_005155b5:; BB(0x005155b5);
    /* 005155b5: fst st(1) */ ST(1) = ST(0);
L_005155b7:; BB(0x005155b7);
    /* 005155b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005155b9: fstp dword ptr [ecx + 0x39c] */ W_F32((u32)(r_ecx+0x39cu), ST(0)); FPOP();
L_005155bf:; BB(0x005155bf);
    /* 005155bf: call 0x515778 */ r_esp -= 4; W32(r_esp, 0x5155c4u); f_00515778();
    /* 005155c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005155c7: call 0x5157e0 */ r_esp -= 4; W32(r_esp, 0x5155ccu); f_005157e0();
    /* 005155cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005155cf: mov eax, dword ptr [0xa72d38] */ r_eax = R32((u32)(0xa72d38u));
    /* 005155d4: mov dword ptr [ecx + 0x33c], 1 */ W32((u32)(r_ecx+0x33cu), 0x1u);
    /* 005155de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005155e0: mov dword ptr [ecx + 0xd8], 0x9bb420 */ W32((u32)(r_ecx+0xd8u), 0x9bb420u);
    /* 005155ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005155eb: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005155f1: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005155f7: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005155fe: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x515603u); f_007aa4c8();
    /* 00515603: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515606: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515608: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0051560f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00515616: push 0x9bb58c */ { u32 v = 0x9bb58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051561b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x515620u); f_007b9a88();
    /* 00515620: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515623: mov ebx, dword ptr [0xa72d48] */ r_ebx = R32((u32)(0xa72d48u));
    /* 00515629: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 0051562f: mov esi, dword ptr [ecx + 0x370] */ r_esi = R32((u32)(r_ecx+0x370u));
    /* 00515635: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00515638: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051563a: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 00515644: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00515647: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515649: mov edi, dword ptr [0xa72d40] */ r_edi = R32((u32)(0xa72d40u));
    /* 0051564f: push dword ptr [edi + esi*4] */ { u32 v = R32((u32)(r_edi+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00515652: push dword ptr [eax + edx] */ { u32 v = R32((u32)(r_eax+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00515655: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00515658: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x51565du); f_007868f8();
    /* 0051565d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515660: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00515666: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 0051566d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051566f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515671: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00515674: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515676: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515678: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051567a: lea ebx, [edx + 0x9bb554] */ r_ebx = (u32)(r_edx+0x9bb554u);
    /* 00515680: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00515686: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 0051568d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x515692u); f_0078730c();
    /* 00515692: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515695: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515698: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051569e: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005156a4: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005156aa: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005156ad: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005156b0: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005156b3: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5156b8u); f_007b4f54();
    /* 005156b8: push 0xa303030 */ { u32 v = 0xa303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005156bd: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005156c0: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 005156c6: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005156c9: mov dword ptr [ebx + 0x38c], 0xffffffff */ W32((u32)(r_ebx+0x38cu), 0xffffffffu);
    /* 005156d3: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005156d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005156db: mov dword ptr [ebx + 0x390], 1 */ W32((u32)(r_ebx+0x390u), 0x1u);
    /* 005156e5: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005156ea: mov word ptr [ebx + 0x342], ax */ W16((u32)(r_ebx+0x342u), (u16)r_eax);
    /* 005156f1: mov dword ptr [ebx + 0x394], 0 */ W32((u32)(r_ebx+0x394u), 0x0u);
    /* 005156fb: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00515702: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00515708: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0051570b: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 00515711: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00515714: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x515719u); f_00578cc4();
    /* 00515719: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051571c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051571f: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 00515725: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00515727:; BB(0x00515727);
    /* 00515727: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0051572a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051572c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0051572f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515731: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515733: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00515735: lea ecx, [ecx + edx + 0x3a4] */ r_ecx = (u32)(r_ecx+r_edx+0x3a4u);
    /* 0051573c: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x515741u); f_0057739c();
    /* 00515741: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00515744: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515747: jge 0x51574e */ if ((fS==fO)) goto L_0051574e;
L_00515749:; BB(0x00515749);
    /* 00515749: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051574c: jmp 0x515727 */ goto L_00515727;
L_0051574e:; BB(0x0051574e);
    /* 0051574e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515751: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00515753: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x515759u); call_ind(t); }
    /* 00515759: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051575c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051575f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00515762: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00515765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515768: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051576f: mov esp, ebp */ r_esp = r_ebp;
    /* 00515771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515772: ret 8 */ FN_RET(0x00515454); r_esp += 12; return;
}

void f_00515545(void)
{
    FN_ENTER(0x00515545);
    /* 00515545: fadd dword ptr [0x9208a4] */ ST(0) = ST(0) + R_F32((u32)(0x9208a4u));
    /* 0051554b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051554d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515554: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0051555b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051555d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051555f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515560: jae 0x51556e */ if (!fC) goto L_0051556e;
L_00515562:; BB(0x00515562);
    /* 00515562: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00515564: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515566: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 0051556c: jmp 0x515585 */ goto L_00515585;
L_0051556e:; BB(0x0051556e);
    /* 0051556e: fld dword ptr [0x9208a8] */ FPUSH(R_F32((u32)(0x9208a8u)));
    /* 00515574: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00515576: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515578: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515579: ja 0x51557d */ if ((!fC&&!fZ)) goto L_0051557d;
L_0051557b:; BB(0x0051557b);
    /* 0051557b: fst st(1) */ ST(1) = ST(0);
L_0051557d:; BB(0x0051557d);
    /* 0051557d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051557f: fstp dword ptr [ecx + 0x398] */ W_F32((u32)(r_ecx+0x398u), ST(0)); FPOP();
L_00515585:; BB(0x00515585);
    /* 00515585: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 0051558b: fadd dword ptr [0x9208a0] */ ST(0) = ST(0) + R_F32((u32)(0x9208a0u));
    /* 00515591: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00515593: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00515595: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00515597: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515599: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051559a: jae 0x5155a8 */ if (!fC) goto L_005155a8;
L_0051559c:; BB(0x0051559c);
    /* 0051559c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051559e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005155a0: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 005155a6: jmp 0x5155bf */ goto L_005155bf;
L_005155a8:; BB(0x005155a8);
    /* 005155a8: fld dword ptr [0x9208a8] */ FPUSH(R_F32((u32)(0x9208a8u)));
    /* 005155ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005155b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005155b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005155b3: ja 0x5155b7 */ if ((!fC&&!fZ)) goto L_005155b7;
L_005155b5:; BB(0x005155b5);
    /* 005155b5: fst st(1) */ ST(1) = ST(0);
L_005155b7:; BB(0x005155b7);
    /* 005155b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005155b9: fstp dword ptr [ecx + 0x39c] */ W_F32((u32)(r_ecx+0x39cu), ST(0)); FPOP();
L_005155bf:; BB(0x005155bf);
    /* 005155bf: call 0x515778 */ r_esp -= 4; W32(r_esp, 0x5155c4u); f_00515778();
    /* 005155c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005155c7: call 0x5157e0 */ r_esp -= 4; W32(r_esp, 0x5155ccu); f_005157e0();
    /* 005155cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005155cf: mov eax, dword ptr [0xa72d38] */ r_eax = R32((u32)(0xa72d38u));
    /* 005155d4: mov dword ptr [ecx + 0x33c], 1 */ W32((u32)(r_ecx+0x33cu), 0x1u);
    /* 005155de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005155e0: mov dword ptr [ecx + 0xd8], 0x9bb420 */ W32((u32)(r_ecx+0xd8u), 0x9bb420u);
    /* 005155ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005155eb: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005155f1: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005155f7: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005155fe: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x515603u); f_007aa4c8();
    /* 00515603: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515606: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515608: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0051560f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00515616: push 0x9bb58c */ { u32 v = 0x9bb58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051561b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x515620u); f_007b9a88();
    /* 00515620: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515623: mov ebx, dword ptr [0xa72d48] */ r_ebx = R32((u32)(0xa72d48u));
    /* 00515629: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 0051562f: mov esi, dword ptr [ecx + 0x370] */ r_esi = R32((u32)(r_ecx+0x370u));
    /* 00515635: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00515638: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051563a: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 00515644: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00515647: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515649: mov edi, dword ptr [0xa72d40] */ r_edi = R32((u32)(0xa72d40u));
    /* 0051564f: push dword ptr [edi + esi*4] */ { u32 v = R32((u32)(r_edi+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00515652: push dword ptr [eax + edx] */ { u32 v = R32((u32)(r_eax+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00515655: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00515658: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x51565du); f_007868f8();
    /* 0051565d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515660: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00515666: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 0051566d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051566f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515671: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00515674: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515676: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515678: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051567a: lea ebx, [edx + 0x9bb554] */ r_ebx = (u32)(r_edx+0x9bb554u);
    /* 00515680: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00515686: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 0051568d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x515692u); f_0078730c();
    /* 00515692: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515695: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515698: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051569e: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005156a4: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005156aa: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005156ad: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005156b0: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005156b3: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5156b8u); f_007b4f54();
    /* 005156b8: push 0xa303030 */ { u32 v = 0xa303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005156bd: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005156c0: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 005156c6: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005156c9: mov dword ptr [ebx + 0x38c], 0xffffffff */ W32((u32)(r_ebx+0x38cu), 0xffffffffu);
    /* 005156d3: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005156d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005156db: mov dword ptr [ebx + 0x390], 1 */ W32((u32)(r_ebx+0x390u), 0x1u);
    /* 005156e5: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005156ea: mov word ptr [ebx + 0x342], ax */ W16((u32)(r_ebx+0x342u), (u16)r_eax);
    /* 005156f1: mov dword ptr [ebx + 0x394], 0 */ W32((u32)(r_ebx+0x394u), 0x0u);
    /* 005156fb: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00515702: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00515708: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0051570b: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 00515711: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00515714: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x515719u); f_00578cc4();
    /* 00515719: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051571c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051571f: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 00515725: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00515727:; BB(0x00515727);
    /* 00515727: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0051572a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051572c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0051572f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515731: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515733: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00515735: lea ecx, [ecx + edx + 0x3a4] */ r_ecx = (u32)(r_ecx+r_edx+0x3a4u);
    /* 0051573c: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x515741u); f_0057739c();
    /* 00515741: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00515744: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515747: jge 0x51574e */ if ((fS==fO)) goto L_0051574e;
L_00515749:; BB(0x00515749);
    /* 00515749: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051574c: jmp 0x515727 */ goto L_00515727;
L_0051574e:; BB(0x0051574e);
    /* 0051574e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515751: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00515753: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x515759u); call_ind(t); }
    /* 00515759: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051575c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051575f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00515762: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00515765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515768: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051576f: mov esp, ebp */ r_esp = r_ebp;
    /* 00515771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515772: ret 8 */ FN_RET(0x00515545); r_esp += 12; return;
}

void f_0051566c(void)
{
    FN_ENTER(0x0051566c);
    /* 0051566c: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0051566e: rol byte ptr [ebx], 0xc0 */ { u32 ad = (u32)(r_ebx); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00515671: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00515674: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515676: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515678: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051567a: lea ebx, [edx + 0x9bb554] */ r_ebx = (u32)(r_edx+0x9bb554u);
    /* 00515680: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00515686: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 0051568d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x515692u); f_0078730c();
    /* 00515692: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515695: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515698: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051569e: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005156a4: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005156aa: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005156ad: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005156b0: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005156b3: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5156b8u); f_007b4f54();
    /* 005156b8: push 0xa303030 */ { u32 v = 0xa303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005156bd: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005156c0: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 005156c6: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005156c9: mov dword ptr [ebx + 0x38c], 0xffffffff */ W32((u32)(r_ebx+0x38cu), 0xffffffffu);
    /* 005156d3: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005156d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005156db: mov dword ptr [ebx + 0x390], 1 */ W32((u32)(r_ebx+0x390u), 0x1u);
    /* 005156e5: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005156ea: mov word ptr [ebx + 0x342], ax */ W16((u32)(r_ebx+0x342u), (u16)r_eax);
    /* 005156f1: mov dword ptr [ebx + 0x394], 0 */ W32((u32)(r_ebx+0x394u), 0x0u);
    /* 005156fb: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00515702: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00515708: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0051570b: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 00515711: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00515714: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x515719u); f_00578cc4();
    /* 00515719: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051571c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051571f: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 00515725: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00515727:; BB(0x00515727);
    /* 00515727: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0051572a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051572c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0051572f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515731: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515733: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00515735: lea ecx, [ecx + edx + 0x3a4] */ r_ecx = (u32)(r_ecx+r_edx+0x3a4u);
    /* 0051573c: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x515741u); f_0057739c();
    /* 00515741: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00515744: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515747: jge 0x51574e */ if ((fS==fO)) goto L_0051574e;
L_00515749:; BB(0x00515749);
    /* 00515749: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051574c: jmp 0x515727 */ goto L_00515727;
L_0051574e:; BB(0x0051574e);
    /* 0051574e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515751: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00515753: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x515759u); call_ind(t); }
    /* 00515759: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051575c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051575f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00515762: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00515765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515768: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051576f: mov esp, ebp */ r_esp = r_ebp;
    /* 00515771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515772: ret 8 */ FN_RET(0x0051566c); r_esp += 12; return;
}

void f_00515778(void) /* sub_515778 */
{
    FN_ENTER(0x00515778);
    /* 00515778: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051577b: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 00515781: fcom dword ptr [0x92089c] */ fx_compare(ST(0), R_F32((u32)(0x92089cu))); 
    /* 00515787: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515789: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051578a: jae 0x51579e */ if (!fC) goto L_0051579e;
L_0051578c:; BB(0x0051578c);
    /* 0051578c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051578e: fld dword ptr [0x92089c] */ FPUSH(R_F32((u32)(0x92089cu)));
    /* 00515794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515796: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 0051579c: jmp 0x5157bc */ goto L_005157bc;
L_0051579e:; BB(0x0051579e);
    /* 0051579e: fcom dword ptr [0x920898] */ fx_compare(ST(0), R_F32((u32)(0x920898u))); 
    /* 005157a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005157a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005157a7: jbe 0x5157bc */ if ((fC||fZ)) goto L_005157bc;
L_005157a9:; BB(0x005157a9);
    /* 005157a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005157ab: fld dword ptr [0x920898] */ FPUSH(R_F32((u32)(0x920898u)));
    /* 005157b1: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005157b6: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
L_005157bc:; BB(0x005157bc);
    /* 005157bc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005157bf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005157c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005157c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005157cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005157d0: fistp dword ptr [ecx + 0x37c] */ W32((u32)(r_ecx+0x37cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005157d6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005157d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005157dc: ret  */ FN_RET(0x00515778); r_esp += 4; return;
}

void f_005157e0(void) /* sub_5157E0 */
{
    FN_ENTER(0x005157e0);
    /* 005157e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005157e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005157e3: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 005157e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005157eb: jg 0x5157f1 */ if ((!fZ&&fS==fO)) goto L_005157f1;
L_005157ed:; BB(0x005157ed);
    /* 005157ed: jg 0x515822 */ if ((!fZ&&fS==fO)) goto L_00515822;
L_005157ef:; BB(0x005157ef);
    /* 005157ef: jmp 0x515824 */ goto L_00515824;
L_005157f1:; BB(0x005157f1);
    /* 005157f1: mov dword ptr [ebx + 0x370], 1 */ W32((u32)(r_ebx+0x370u), 0x1u);
    /* 005157fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005157fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005157ff: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x515804u); f_00787550();
    /* 00515804: mov ecx, dword ptr [0xa72d38] */ r_ecx = R32((u32)(0xa72d38u));
    /* 0051580a: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00515810: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00515813: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 00515816: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0051581c: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0051581f: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_00515822:; BB(0x00515822);
    /* 00515822: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515823: ret  */ FN_RET(0x005157e0); r_esp += 4; return;
L_00515824:; BB(0x00515824);
    /* 00515824: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 00515828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515829: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x51582eu); f_00813038();
    /* 0051582e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051582f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515831: je 0x515866 */ if (fZ) goto L_00515866;
L_00515833:; BB(0x00515833);
    /* 00515833: mov dword ptr [ebx + 0x370], 1 */ W32((u32)(r_ebx+0x370u), 0x1u);
    /* 0051583d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051583f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515841: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x515846u); f_00787550();
    /* 00515846: mov ecx, dword ptr [0xa72d38] */ r_ecx = R32((u32)(0xa72d38u));
    /* 0051584c: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00515852: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00515855: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 00515858: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0051585e: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00515861: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00515864: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515865: ret  */ FN_RET(0x005157e0); r_esp += 4; return;
L_00515866:; BB(0x00515866);
    /* 00515866: mov dword ptr [ebx + 0x370], 0 */ W32((u32)(r_ebx+0x370u), 0x0u);
    /* 00515870: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515872: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515874: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x515879u); f_00787550();
    /* 00515879: mov ecx, dword ptr [0xa72d38] */ r_ecx = R32((u32)(0xa72d38u));
    /* 0051587f: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00515885: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00515888: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 0051588b: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00515891: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00515894: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00515897: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515898: ret  */ FN_RET(0x005157e0); r_esp += 4; return;
}

void f_0051589c(void) /* sub_51589C */
{
    FN_ENTER(0x0051589c);
    /* 0051589c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051589d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005158a0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005158a2: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005158a8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005158ab: je 0x515ab4 */ if (fZ) goto L_00515ab4;
L_005158b1:; BB(0x005158b1);
    /* 005158b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005158b3: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5158b8u); f_00770738();
    /* 005158b8: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005158bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005158c1: je 0x5158c7 */ if (fZ) goto L_005158c7;
L_005158c3:; BB(0x005158c3);
    /* 005158c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005158c5: je 0x5158d8 */ if (fZ) goto L_005158d8;
L_005158c7:; BB(0x005158c7);
    /* 005158c7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005158c9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005158cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005158cd: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5158d0u); call_ind(t); }
    /* 005158d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005158d2: je 0x515ab4 */ if (fZ) goto L_00515ab4;
L_005158d8:; BB(0x005158d8);
    /* 005158d8: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005158db: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005158dd: je 0x515a2e */ if (fZ) goto L_00515a2e;
L_005158e3:; BB(0x005158e3);
    /* 005158e3: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 005158e9: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005158ef: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 005158f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005158f7: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005158fe: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00515903: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0051590b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00515913: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00515915: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00515917: mov edx, 0 */ r_edx = 0x0u;
    /* 0051591c: jle 0x515ae1 */ if ((fZ||fS!=fO)) goto L_00515ae1;
L_00515922:; BB(0x00515922);
    /* 00515922: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00515926: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0051592a: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0051592e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00515932: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00515936: mov ebp, edx */ r_ebp = r_edx;
    /* 00515938: mov edx, ecx */ r_edx = r_ecx;
L_0051593a:; BB(0x0051593a);
    /* 0051593a: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00515941: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515943: je 0x515acc */ if (fZ) goto L_00515acc;
L_00515949:; BB(0x00515949);
    /* 00515949: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051594d: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515953: jge 0x515a11 */ if ((fS==fO)) goto L_00515a11;
L_00515959:; BB(0x00515959);
    /* 00515959: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0051595d: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051595f: je 0x515a11 */ if (fZ) goto L_00515a11;
L_00515965:; BB(0x00515965);
    /* 00515965: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00515968: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051596d: jne 0x515a11 */ if (!fZ) goto L_00515a11;
L_00515973:; BB(0x00515973);
    /* 00515973: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00515976: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0051597c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051597f: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 00515985: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0051598b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0051598f: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00515995: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00515999: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0051599d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5159a2u); f_0082f9c4();
    /* 005159a2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005159a5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005159a7: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005159ab: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005159ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005159af: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 005159b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005159b5: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005159b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005159ba: jb 0x5159ca */ if (fC) goto L_005159ca;
L_005159bc:; BB(0x005159bc);
    /* 005159bc: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005159c2: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005159c8: jmp 0x515a11 */ goto L_00515a11;
L_005159ca:; BB(0x005159ca);
    /* 005159ca: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005159d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005159d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005159d3: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5159d8u); f_00771e14();
    /* 005159d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005159db: je 0x515a05 */ if (fZ) goto L_00515a05;
L_005159dd:; BB(0x005159dd);
    /* 005159dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005159df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005159e0: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005159e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005159e5: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5159eau); f_0077fffc();
    /* 005159ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005159ed: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005159f3: mov esi, dword ptr [0xaae164] */ r_esi = R32((u32)(0xaae164u));
    /* 005159f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005159fb: je 0x515ab9 */ if (fZ) goto L_00515ab9;
L_00515a01:; BB(0x00515a01);
    /* 00515a01: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515a03: jmp 0x515a11 */ goto L_00515a11;
L_00515a05:; BB(0x00515a05);
    /* 00515a05: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00515a0b: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00515a11:; BB(0x00515a11);
    /* 00515a11: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00515a14: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515a16: jl 0x51593a */ if ((fS!=fO)) goto L_0051593a;
L_00515a1c:; BB(0x00515a1c);
    /* 00515a1c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00515a20: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00515a24: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00515a28: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00515a2c: jmp 0x515a3f */ goto L_00515a3f;
L_00515a2e:; BB(0x00515a2e);
    /* 00515a2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a30: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 00515a36: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00515a38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515a3a: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x515a3fu); f_007714cc();
L_00515a3f:; BB(0x00515a3f);
    /* 00515a3f: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00515a42: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515a48: jl 0x515a81 */ if ((fS!=fO)) goto L_00515a81;
L_00515a4a:; BB(0x00515a4a);
    /* 00515a4a: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515a50: jge 0x515a6a */ if ((fS==fO)) goto L_00515a6a;
L_00515a52:; BB(0x00515a52);
    /* 00515a52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a53: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00515a5a: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x515a5fu); f_00786b3c();
    /* 00515a5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00515a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515a63: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x515a68u); f_007706b0();
    /* 00515a68: jmp 0x515ab4 */ goto L_00515ab4;
L_00515a6a:; BB(0x00515a6a);
    /* 00515a6a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00515a6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a71: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00515a78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515a7a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x515a7fu); f_007706b0();
    /* 00515a7f: jmp 0x515ab4 */ goto L_00515ab4;
L_00515a81:; BB(0x00515a81);
    /* 00515a81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a82: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00515a89: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x515a8eu); f_0068d5a8();
    /* 00515a8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00515a8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515a91: je 0x515aab */ if (fZ) goto L_00515aab;
L_00515a93:; BB(0x00515a93);
    /* 00515a93: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00515a99: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515a9f: jne 0x515aab */ if (!fZ) goto L_00515aab;
L_00515aa1:; BB(0x00515aa1);
    /* 00515aa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515aa2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515aa4: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x515aa9u); f_007706b0();
    /* 00515aa9: jmp 0x515ab4 */ goto L_00515ab4;
L_00515aab:; BB(0x00515aab);
    /* 00515aab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515aad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00515aaf: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x515ab4u); f_007706b0();
L_00515ab4:; BB(0x00515ab4);
    /* 00515ab4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515ab7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515ab8: ret  */ FN_RET(0x0051589c); r_esp += 4; return;
L_00515ab9:; BB(0x00515ab9);
    /* 00515ab9: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00515abd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00515ac1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515ac3: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00515ac7: jmp 0x515a11 */ goto L_00515a11;
L_00515acc:; BB(0x00515acc);
    /* 00515acc: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00515ad0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00515ad4: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00515ad8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00515adc: jmp 0x515a3f */ goto L_00515a3f;
L_00515ae1:; BB(0x00515ae1);
    /* 00515ae1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00515ae3: jmp 0x515a3f */ goto L_00515a3f;
}

void f_00515ae8(void) /* sub_515AE8 */
{
    FN_ENTER(0x00515ae8);
    /* 00515ae8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00515ae9: mov esi, ecx */ r_esi = r_ecx;
    /* 00515aeb: mov ecx, esi */ r_ecx = r_esi;
    /* 00515aed: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x515af2u); f_00777d10();
    /* 00515af2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515af4: je 0x515b64 */ if (fZ) goto L_00515b64;
L_00515af6:; BB(0x00515af6);
    /* 00515af6: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00515afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515aff: jl 0x515b5d */ if ((fS!=fO)) goto L_00515b5d;
L_00515b01:; BB(0x00515b01);
    /* 00515b01: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00515b04: jg 0x515b5d */ if ((!fZ&&fS==fO)) goto L_00515b5d;
L_00515b06:; BB(0x00515b06);
    /* 00515b06: mov dword ptr [esi + 0x390], 1 */ W32((u32)(r_esi+0x390u), 0x1u);
    /* 00515b10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515b12: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00515b19: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00515b20: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00515b2a: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00515b31: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00515b37: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00515b3a: mov edx, 2 */ r_edx = 0x2u;
    /* 00515b3f: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00515b46: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00515b4b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00515b4e: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 00515b54: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 00515b57: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515b5a: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
L_00515b5d:; BB(0x00515b5d);
    /* 00515b5d: mov eax, 1 */ r_eax = 0x1u;
    /* 00515b62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515b63: ret  */ FN_RET(0x00515ae8); r_esp += 4; return;
L_00515b64:; BB(0x00515b64);
    /* 00515b64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515b66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515b67: ret  */ FN_RET(0x00515ae8); r_esp += 4; return;
}

void f_00515b68(void) /* sub_515B68 */
{
    FN_ENTER(0x00515b68);
    /* 00515b68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00515b69: mov esi, ecx */ r_esi = r_ecx;
    /* 00515b6b: mov ecx, esi */ r_ecx = r_esi;
    /* 00515b6d: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x515b72u); f_007780a8();
    /* 00515b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515b74: je 0x515be4 */ if (fZ) goto L_00515be4;
L_00515b76:; BB(0x00515b76);
    /* 00515b76: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00515b7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515b7f: jl 0x515bdd */ if ((fS!=fO)) goto L_00515bdd;
L_00515b81:; BB(0x00515b81);
    /* 00515b81: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00515b84: jg 0x515bdd */ if ((!fZ&&fS==fO)) goto L_00515bdd;
L_00515b86:; BB(0x00515b86);
    /* 00515b86: mov dword ptr [esi + 0x390], 1 */ W32((u32)(r_esi+0x390u), 0x1u);
    /* 00515b90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515b92: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00515b99: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00515ba0: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00515baa: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00515bb1: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00515bb7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00515bba: mov edx, 2 */ r_edx = 0x2u;
    /* 00515bbf: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00515bc6: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00515bcb: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00515bce: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 00515bd4: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 00515bd7: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515bda: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
L_00515bdd:; BB(0x00515bdd);
    /* 00515bdd: mov eax, 1 */ r_eax = 0x1u;
    /* 00515be2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515be3: ret  */ FN_RET(0x00515b68); r_esp += 4; return;
L_00515be4:; BB(0x00515be4);
    /* 00515be4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515be6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515be7: ret  */ FN_RET(0x00515b68); r_esp += 4; return;
}

void f_00515be8(void) /* sub_515BE8 */
{
    FN_ENTER(0x00515be8);
    /* 00515be8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00515bef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00515bf1: jl 0x515bf8 */ if ((fS!=fO)) goto L_00515bf8;
L_00515bf3:; BB(0x00515bf3);
    /* 00515bf3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515bf6: jle 0x515c17 */ if ((fZ||fS!=fO)) goto L_00515c17;
L_00515bf8:; BB(0x00515bf8);
    /* 00515bf8: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00515bfb: mov dword ptr [ecx + 0x390], 1 */ W32((u32)(r_ecx+0x390u), 0x1u);
    /* 00515c05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515c07: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00515c0e: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00515c14: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_00515c17:; BB(0x00515c17);
    /* 00515c17: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00515c1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515c1f: jne 0x515c37 */ if (!fZ) goto L_00515c37;
L_00515c21:; BB(0x00515c21);
    /* 00515c21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515c23: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515c2a: mov edx, 2 */ r_edx = 0x2u;
    /* 00515c2f: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00515c36: ret  */ FN_RET(0x00515be8); r_esp += 4; return;
L_00515c37:; BB(0x00515c37);
    /* 00515c37: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00515c3a: jne 0x515c55 */ if (!fZ) goto L_00515c55;
L_00515c3c:; BB(0x00515c3c);
    /* 00515c3c: mov eax, 1 */ r_eax = 0x1u;
    /* 00515c41: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515c48: mov edx, 5 */ r_edx = 0x5u;
    /* 00515c4d: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00515c54: ret  */ FN_RET(0x00515be8); r_esp += 4; return;
L_00515c55:; BB(0x00515c55);
    /* 00515c55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515c57: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515c5e: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00515c65: ret  */ FN_RET(0x00515be8); r_esp += 4; return;
}

void f_00515c68(void) /* sub_515C68 */
{
    FN_ENTER(0x00515c68);
    /* 00515c68: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00515c6f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00515c72: je 0x515ce5 */ if (fZ) goto L_00515ce5;
L_00515c74:; BB(0x00515c74);
    /* 00515c74: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00515c7a: mov eax, 3 */ r_eax = 0x3u;
    /* 00515c7f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515c86: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515c89: jne 0x515ca2 */ if (!fZ) goto L_00515ca2;
L_00515c8b:; BB(0x00515c8b);
    /* 00515c8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515c8d: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00515c94: mov edx, 1 */ r_edx = 0x1u;
    /* 00515c99: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00515ca0: jmp 0x515cb7 */ goto L_00515cb7;
L_00515ca2:; BB(0x00515ca2);
    /* 00515ca2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515ca4: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00515cab: mov edx, 2 */ r_edx = 0x2u;
    /* 00515cb0: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_00515cb7:; BB(0x00515cb7);
    /* 00515cb7: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00515cba: mov dword ptr [ecx + 0x38c], 0xffffffff */ W32((u32)(r_ecx+0x38cu), 0xffffffffu);
    /* 00515cc4: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00515cc9: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00515ccc: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00515cd2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00515cd5: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515cd8: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00515cdb: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
L_00515ce5:; BB(0x00515ce5);
    /* 00515ce5: ret  */ FN_RET(0x00515c68); r_esp += 4; return;
}

void f_00515ce8(void) /* sub_515CE8 */
{
    FN_ENTER(0x00515ce8);
    /* 00515ce8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00515ce9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00515cea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515ceb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00515cec: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00515cef: mov esi, ecx */ r_esi = r_ecx;
    /* 00515cf1: mov ecx, esi */ r_ecx = r_esi;
    /* 00515cf3: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x515cf8u); f_00770738();
    /* 00515cf8: mov ebx, eax */ r_ebx = r_eax;
    /* 00515cfa: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00515d01: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515d04: jle 0x515f28 */ if ((fZ||fS!=fO)) goto L_00515f28;
L_00515d0a:; BB(0x00515d0a);
    /* 00515d0a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515d0c: je 0x515f28 */ if (fZ) goto L_00515f28;
L_00515d12:; BB(0x00515d12);
    /* 00515d12: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 00515d18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515d1a: je 0x515f28 */ if (fZ) goto L_00515f28;
L_00515d20:; BB(0x00515d20);
    /* 00515d20: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00515d23: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515d29: jne 0x515f28 */ if (!fZ) goto L_00515f28;
L_00515d2f:; BB(0x00515d2f);
    /* 00515d2f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00515d32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515d33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00515d34: mov ecx, esi */ r_ecx = r_esi;
    /* 00515d36: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x515d3bu); f_00771458();
    /* 00515d3b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00515d3f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00515d42: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00515d46: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00515d48: fmul qword ptr [0x920828] */ ST(0) = ST(0) * R_F64((u32)(0x920828u));
    /* 00515d4e: fdiv qword ptr [0x920820] */ ST(0) = ST(0) / R_F64((u32)(0x920820u));
    /* 00515d54: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00515d58: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00515d5d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00515d62: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00515d66: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00515d6a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00515d6e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00515d72: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00515d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515d77: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515d7a: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x515d7fu); f_007a9018();
    /* 00515d7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515d82: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00515d88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515d8a: je 0x515f32 */ if (fZ) goto L_00515f32;
L_00515d90:; BB(0x00515d90);
    /* 00515d90: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
L_00515d93:; BB(0x00515d93);
    /* 00515d93: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00515d97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00515d99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00515d9b: mov ebx, eax */ r_ebx = r_eax;
    /* 00515d9d: mov ebp, edx */ r_ebp = r_edx;
    /* 00515d9f: mov edi, ecx */ r_edi = r_ecx;
L_00515da1:; BB(0x00515da1);
    /* 00515da1: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00515da5: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00515da9: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 00515daf: mov ecx, edi */ r_ecx = r_edi;
    /* 00515db1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515db3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515db5: add ecx, dword ptr [0xa72d44] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa72d44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00515dbb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00515dbe: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00515dc0: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 00515dc3: mov dword ptr [esi + 0x31c], eax */ W32((u32)(r_esi+0x31cu), r_eax);
    /* 00515dc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00515dcb: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00515dce: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00515dd1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00515dd3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00515dd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515dd7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515dd8: jb 0x515f19 */ if (fC) goto L_00515f19;
L_00515dde:; BB(0x00515dde);
    /* 00515dde: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515de0: jg 0x515f19 */ if ((!fZ&&fS==fO)) goto L_00515f19;
L_00515de6:; BB(0x00515de6);
    /* 00515de6: mov dword ptr [esi + 0x388], ebp */ W32((u32)(r_esi+0x388u), r_ebp);
    /* 00515dec: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515dee: je 0x515ef7 */ if (fZ) goto L_00515ef7;
L_00515df4:; BB(0x00515df4);
    /* 00515df4: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515df7: jne 0x515e7a */ if (!fZ) goto L_00515e7a;
L_00515dfd:; BB(0x00515dfd);
    /* 00515dfd: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00515e03: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515e06: je 0x515f19 */ if (fZ) goto L_00515f19;
L_00515e0c:; BB(0x00515e0c);
    /* 00515e0c: fld dword ptr [esi + 0x398] */ FPUSH(R_F32((u32)(r_esi+0x398u)));
    /* 00515e12: fcomp dword ptr [0x920890] */ fx_compare(ST(0), R_F32((u32)(0x920890u))); FPOP();
    /* 00515e18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515e1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515e1b: jb 0x515f19 */ if (fC) goto L_00515f19;
L_00515e21:; BB(0x00515e21);
    /* 00515e21: mov ecx, esi */ r_ecx = r_esi;
    /* 00515e23: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x515e28u); f_007751b0();
    /* 00515e28: fcomp dword ptr [esi + 0x398] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x398u))); FPOP();
    /* 00515e2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515e30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515e31: jb 0x515f4a */ if (fC) goto L_00515f4a;
L_00515e37:; BB(0x00515e37);
    /* 00515e37: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00515e41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e43: mov ecx, esi */ r_ecx = r_esi;
    /* 00515e45: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515e4b: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515e51: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515e57: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x515e5cu); f_00771c8c();
    /* 00515e5c: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515e62: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515e68: mov ecx, esi */ r_ecx = r_esi;
    /* 00515e6a: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515e70: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x515e75u); f_00771f1c();
    /* 00515e75: jmp 0x515f19 */ goto L_00515f19;
L_00515e7a:; BB(0x00515e7a);
    /* 00515e7a: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515e7d: jne 0x515f19 */ if (!fZ) goto L_00515f19;
L_00515e83:; BB(0x00515e83);
    /* 00515e83: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00515e89: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515e8c: je 0x515f19 */ if (fZ) goto L_00515f19;
L_00515e92:; BB(0x00515e92);
    /* 00515e92: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00515e96: fcomp dword ptr [0x92088c] */ fx_compare(ST(0), R_F32((u32)(0x92088cu))); FPOP();
    /* 00515e9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515e9e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515e9f: jbe 0x515eb7 */ if ((fC||fZ)) goto L_00515eb7;
L_00515ea1:; BB(0x00515ea1);
    /* 00515ea1: mov ecx, esi */ r_ecx = r_esi;
    /* 00515ea3: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x515ea8u); f_007751b0();
    /* 00515ea8: fcomp dword ptr [esi + 0x39c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x39cu))); FPOP();
    /* 00515eae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00515eb0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00515eb1: jb 0x515f3d */ if (fC) goto L_00515f3d;
L_00515eb7:; BB(0x00515eb7);
    /* 00515eb7: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00515ec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ec3: mov ecx, esi */ r_ecx = r_esi;
    /* 00515ec5: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515ecb: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515ed1: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515ed7: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x515edcu); f_00771c8c();
    /* 00515edc: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515ee2: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515ee8: mov ecx, esi */ r_ecx = r_esi;
    /* 00515eea: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00515ef0: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x515ef5u); f_00771f1c();
    /* 00515ef5: jmp 0x515f19 */ goto L_00515f19;
L_00515ef7:; BB(0x00515ef7);
    /* 00515ef7: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00515efd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515f00: jne 0x515f0c */ if (!fZ) goto L_00515f0c;
L_00515f02:; BB(0x00515f02);
    /* 00515f02: mov dword ptr [esi + 0x38c], 0 */ W32((u32)(r_esi+0x38cu), 0x0u);
L_00515f0c:; BB(0x00515f0c);
    /* 00515f0c: mov eax, 1 */ r_eax = 0x1u;
    /* 00515f11: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515f14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515f16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515f17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00515f18: ret  */ FN_RET(0x00515ce8); r_esp += 4; return;
L_00515f19:; BB(0x00515f19);
    /* 00515f19: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00515f1c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00515f1f: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515f22: jl 0x515da1 */ if ((fS!=fO)) goto L_00515da1;
L_00515f28:; BB(0x00515f28);
    /* 00515f28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515f2a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515f2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515f2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515f30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00515f31: ret  */ FN_RET(0x00515ce8); r_esp += 4; return;
L_00515f32:; BB(0x00515f32);
    /* 00515f32: fld dword ptr [0x920894] */ FPUSH(R_F32((u32)(0x920894u)));
    /* 00515f38: jmp 0x515d93 */ goto L_00515d93;
L_00515f3d:; BB(0x00515f3d);
    /* 00515f3d: mov eax, 1 */ r_eax = 0x1u;
    /* 00515f42: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515f45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515f46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515f47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515f48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00515f49: ret  */ FN_RET(0x00515ce8); r_esp += 4; return;
L_00515f4a:; BB(0x00515f4a);
    /* 00515f4a: mov eax, 1 */ r_eax = 0x1u;
    /* 00515f4f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515f52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515f54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515f55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00515f56: ret  */ FN_RET(0x00515ce8); r_esp += 4; return;
}

void f_00515f58(void) /* sub_515F58 */
{
    FN_ENTER(0x00515f58);
    /* 00515f58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00515f59: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 00515f5f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515f62: jne 0x515f7e */ if (!fZ) goto L_00515f7e;
L_00515f64:; BB(0x00515f64);
    /* 00515f64: mov eax, 6 */ r_eax = 0x6u;
    /* 00515f69: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515f70: mov edx, 5 */ r_edx = 0x5u;
    /* 00515f75: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00515f7c: jmp 0x515fb5 */ goto L_00515fb5;
L_00515f7e:; BB(0x00515f7e);
    /* 00515f7e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515f81: jne 0x515f9d */ if (!fZ) goto L_00515f9d;
L_00515f83:; BB(0x00515f83);
    /* 00515f83: mov eax, 5 */ r_eax = 0x5u;
    /* 00515f88: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515f8f: mov edx, 2 */ r_edx = 0x2u;
    /* 00515f94: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00515f9b: jmp 0x515fb5 */ goto L_00515fb5;
L_00515f9d:; BB(0x00515f9d);
    /* 00515f9d: mov eax, 4 */ r_eax = 0x4u;
    /* 00515fa2: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00515fa9: mov edx, 3 */ r_edx = 0x3u;
    /* 00515fae: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_00515fb5:; BB(0x00515fb5);
    /* 00515fb5: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00515fb8: or edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00515fbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00515fc0: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00515fc7: and edx, 0xf9fbffff */ {  u32 a = r_edx; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00515fcd: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00515fd0: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00515fd6: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00515fd9: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00515fdc: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 00515fdf: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 00515fe5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515fe6: ret  */ FN_RET(0x00515f58); r_esp += 4; return;
}

void f_00515fe8(void) /* sub_515FE8 */
{
    FN_ENTER(0x00515fe8);
    /* 00515fe8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00515fef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515ff2: jne 0x51602b */ if (!fZ) goto L_0051602b;
L_00515ff4:; BB(0x00515ff4);
    /* 00515ff4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00515ff7: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00515ffc: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00515fff: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00516005: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00516008: or edx, 0x8001 */ {  u32 a = r_edx; u32 b = 0x8001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051600e: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00516011: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 00516018: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0051601f: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
    /* 00516029: jmp 0x51605d */ goto L_0051605d;
L_0051602b:; BB(0x0051602b);
    /* 0051602b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051602e: je 0x516048 */ if (fZ) goto L_00516048;
L_00516030:; BB(0x00516030);
    /* 00516030: mov eax, 7 */ r_eax = 0x7u;
    /* 00516035: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0051603c: mov edx, 0xf */ r_edx = 0xfu;
    /* 00516041: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
L_00516048:; BB(0x00516048);
    /* 00516048: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0051604b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051604d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00516054: and edx, 0xff9bffff */ {  u32 a = r_edx; u32 b = 0xff9bffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051605a: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_0051605d:; BB(0x0051605d);
    /* 0051605d: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 00516067: ret  */ FN_RET(0x00515fe8); r_esp += 4; return;
}

