#include "protos.h"

void f_0053215c(void) /* sub_53215C */
{
    FN_ENTER(0x0053215c);
    /* 0053215c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053215d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053215e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532161: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00532163: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532165: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x53216au); f_00770738();
    /* 0053216a: mov ebx, eax */ r_ebx = r_eax;
    /* 0053216c: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00532172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532174: je 0x5322ac */ if (fZ) goto L_005322ac;
L_0053217a:; BB(0x0053217a);
    /* 0053217a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053217d: jne 0x53233b */ if (!fZ) goto L_0053233b;
L_00532183:; BB(0x00532183);
    /* 00532183: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532185: je 0x532341 */ if (fZ) goto L_00532341;
L_0053218b:; BB(0x0053218b);
    /* 0053218b: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0053218d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00532190: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532192: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x532195u); call_ind(t); }
    /* 00532195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532197: je 0x5321db */ if (fZ) goto L_005321db;
L_00532199:; BB(0x00532199);
    /* 00532199: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0053219c: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 005321a2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005321a5: mov eax, dword ptr [ebp + 0x304] */ r_eax = R32((u32)(r_ebp+0x304u));
    /* 005321ab: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005321b1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005321b5: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 005321bb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005321bf: mov edx, ebx */ r_edx = r_ebx;
    /* 005321c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5321c6u); f_0082f9c4();
    /* 005321c6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005321c9: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005321ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005321d0: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005321d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005321d6: call 0x52c274 */ r_esp -= 4; W32(r_esp, 0x5321dbu); f_0052c274();
L_005321db:; BB(0x005321db);
    /* 005321db: mov ebx, dword ptr [ebp + 0x300] */ r_ebx = R32((u32)(r_ebp+0x300u));
    /* 005321e1: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 005321e7: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 005321ed: mov ecx, dword ptr [ebp + 0x358] */ r_ecx = R32((u32)(r_ebp+0x358u));
    /* 005321f3: mov dword ptr [ebp + 0x298], ebx */ W32((u32)(r_ebp+0x298u), r_ebx);
    /* 005321f9: mov dword ptr [ebp + 0x29c], edx */ W32((u32)(r_ebp+0x29cu), r_edx);
    /* 005321ff: mov dword ptr [ebp + 0x2a0], eax */ W32((u32)(r_ebp+0x2a0u), r_eax);
    /* 00532205: push dword ptr [ebp + 0x2ac] */ { u32 v = R32((u32)(r_ebp+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053220b: push dword ptr [ebp + 0x2a8] */ { u32 v = R32((u32)(r_ebp+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532211: push dword ptr [ebp + 0x2a4] */ { u32 v = R32((u32)(r_ebp+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532219: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053221a: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053221d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053221f: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x532224u); f_00771f5c();
    /* 00532224: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0053222a: lea eax, [ebp + 0x30c] */ r_eax = (u32)(r_ebp+0x30cu);
    /* 00532230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532231: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532233: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532236: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x53223bu); f_00771858();
    /* 0053223b: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00532241: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00532247: mov ebx, dword ptr [ebp + 0x308] */ r_ebx = R32((u32)(r_ebp+0x308u));
    /* 0053224d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00532251: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00532255: fadd dword ptr [ebp + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x30cu));
    /* 0053225b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0053225f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532261: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00532265: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00532269: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0053226d: fadd dword ptr [ebp + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x314u));
    /* 00532273: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00532277: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0053227b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053227c: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x532281u); f_00771e14();
    /* 00532281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532283: jne 0x53228d */ if (!fZ) goto L_0053228d;
L_00532285:; BB(0x00532285);
    /* 00532285: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00532288: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053228a: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x53228du); call_ind(t); }
L_0053228d:; BB(0x0053228d);
    /* 0053228d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053228f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532294u); f_007aa094();
    /* 00532294: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532296: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532298: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053229a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x53229fu); f_00772b44();
    /* 0053229f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005322a1: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5322a6u); f_007b6880();
    /* 005322a6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005322a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005322aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005322ab: ret  */ FN_RET(0x0053215c); r_esp += 4; return;
L_005322ac:; BB(0x005322ac);
    /* 005322ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005322ae: je 0x53234e */ if (fZ) goto L_0053234e;
L_005322b4:; BB(0x005322b4);
    /* 005322b4: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005322b7: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005322bc: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005322bf: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005322c5: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005322ca: je 0x5322d3 */ if (fZ) goto L_005322d3;
L_005322cc:; BB(0x005322cc);
    /* 005322cc: mov eax, 1 */ r_eax = 0x1u;
    /* 005322d1: jmp 0x5322d5 */ goto L_005322d5;
L_005322d3:; BB(0x005322d3);
    /* 005322d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005322d5:; BB(0x005322d5);
    /* 005322d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005322d7: je 0x5322e0 */ if (fZ) goto L_005322e0;
L_005322d9:; BB(0x005322d9);
    /* 005322d9: mov eax, 1 */ r_eax = 0x1u;
    /* 005322de: jmp 0x5322e5 */ goto L_005322e5;
L_005322e0:; BB(0x005322e0);
    /* 005322e0: mov eax, 6 */ r_eax = 0x6u;
L_005322e5:; BB(0x005322e5);
    /* 005322e5: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005322e9: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005322f0: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 005322f6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005322fa: mov eax, dword ptr [ebp + 0x304] */ r_eax = R32((u32)(r_ebp+0x304u));
    /* 00532300: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00532304: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0053230a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0053230e: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00532314: mov edx, ebx */ r_edx = r_ebx;
    /* 00532316: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53231bu); f_0082f9c4();
    /* 0053231b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0053231f: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00532324: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532326: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053232b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053232c: call 0x52c274 */ r_esp -= 4; W32(r_esp, 0x532331u); f_0052c274();
    /* 00532331: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
L_0053233b:; BB(0x0053233b);
    /* 0053233b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053233e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053233f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532340: ret  */ FN_RET(0x0053215c); r_esp += 4; return;
L_00532341:; BB(0x00532341);
    /* 00532341: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532343: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532348u); f_00533078();
    /* 00532348: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053234b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053234c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053234d: ret  */ FN_RET(0x0053215c); r_esp += 4; return;
L_0053234e:; BB(0x0053234e);
    /* 0053234e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532350: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532355u); f_00533078();
    /* 00532355: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00532358: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00532359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053235a: ret  */ FN_RET(0x0053215c); r_esp += 4; return;
}

void f_0053235c(void) /* sub_53235C */
{
    FN_ENTER(0x0053235c);
    /* 0053235c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053235d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053235f: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00532365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532367: je 0x5323a1 */ if (fZ) goto L_005323a1;
L_00532369:; BB(0x00532369);
    /* 00532369: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053236c: jne 0x5323ea */ if (!fZ) goto L_005323ea;
L_0053236e:; BB(0x0053236e);
    /* 0053236e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532370: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532375u); f_007aa094();
    /* 00532375: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532377: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532379: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053237b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x532380u); f_00772b44();
    /* 00532380: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00532387: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053238a: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00532391: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00532394: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00532396: jg 0x5323ea */ if ((!fZ&&fS==fO)) goto L_005323ea;
L_00532398:; BB(0x00532398);
    /* 00532398: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053239a: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x53239fu); f_00533078();
    /* 0053239f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005323a0: ret  */ FN_RET(0x0053235c); r_esp += 4; return;
L_005323a1:; BB(0x005323a1);
    /* 005323a1: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005323a7: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005323ac: je 0x5323b5 */ if (fZ) goto L_005323b5;
L_005323ae:; BB(0x005323ae);
    /* 005323ae: mov eax, 1 */ r_eax = 0x1u;
    /* 005323b3: jmp 0x5323b7 */ goto L_005323b7;
L_005323b5:; BB(0x005323b5);
    /* 005323b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005323b7:; BB(0x005323b7);
    /* 005323b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005323b9: jne 0x5323c4 */ if (!fZ) goto L_005323c4;
L_005323bb:; BB(0x005323bb);
    /* 005323bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005323bd: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5323c2u); f_00533078();
    /* 005323c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005323c3: ret  */ FN_RET(0x0053235c); r_esp += 4; return;
L_005323c4:; BB(0x005323c4);
    /* 005323c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005323c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005323c7: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 005323cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005323cf: call 0x532960 */ r_esp -= 4; W32(r_esp, 0x5323d4u); f_00532960();
    /* 005323d4: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 005323de: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005323e3: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
L_005323ea:; BB(0x005323ea);
    /* 005323ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005323eb: ret  */ FN_RET(0x0053235c); r_esp += 4; return;
}

void f_005323ec(void) /* sub_5323EC */
{
    FN_ENTER(0x005323ec);
    /* 005323ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005323ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005323ee: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005323f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005323f3: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 005323f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005323fb: je 0x5327c6 */ if (fZ) goto L_005327c6;
L_00532401:; BB(0x00532401);
    /* 00532401: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532404: je 0x532656 */ if (fZ) goto L_00532656;
L_0053240a:; BB(0x0053240a);
    /* 0053240a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053240d: je 0x532539 */ if (fZ) goto L_00532539;
L_00532413:; BB(0x00532413);
    /* 00532413: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532416: jne 0x532477 */ if (!fZ) goto L_00532477;
L_00532418:; BB(0x00532418);
    /* 00532418: mov ecx, dword ptr [ebx + 0x3e8] */ r_ecx = R32((u32)(r_ebx+0x3e8u));
    /* 0053241e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532420: je 0x53242e */ if (fZ) goto L_0053242e;
L_00532422:; BB(0x00532422);
    /* 00532422: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00532428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532429: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53242eu); f_00508db8();
L_0053242e:; BB(0x0053242e);
    /* 0053242e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532430: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532435u); f_007aa094();
    /* 00532435: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532439: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053243b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x532440u); f_00772b44();
    /* 00532440: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00532447: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053244a: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00532451: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00532454: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532456: jg 0x532635 */ if ((!fZ&&fS==fO)) goto L_00532635;
L_0053245c:; BB(0x0053245c);
    /* 0053245c: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00532462: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00532465: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0053246b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053246d: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532472u); f_00533078();
    /* 00532472: jmp 0x532635 */ goto L_00532635;
L_00532477:; BB(0x00532477);
    /* 00532477: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053247a: jne 0x532635 */ if (!fZ) goto L_00532635;
L_00532480:; BB(0x00532480);
    /* 00532480: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00532486: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053248c: jne 0x53263b */ if (!fZ) goto L_0053263b;
L_00532492:; BB(0x00532492);
    /* 00532492: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532498: je 0x5324a1 */ if (fZ) goto L_005324a1;
L_0053249a:; BB(0x0053249a);
    /* 0053249a: mov eax, 1 */ r_eax = 0x1u;
    /* 0053249f: jmp 0x5324a3 */ goto L_005324a3;
L_005324a1:; BB(0x005324a1);
    /* 005324a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005324a3:; BB(0x005324a3);
    /* 005324a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005324a5: jne 0x5324e2 */ if (!fZ) goto L_005324e2;
L_005324a7:; BB(0x005324a7);
    /* 005324a7: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 005324ae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005324b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005324b2: jle 0x5324e2 */ if ((fZ||fS!=fO)) goto L_005324e2;
L_005324b4:; BB(0x005324b4);
    /* 005324b4: movzx eax, word ptr [ebx + esi*4 + 0x3cc] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*4+0x3ccu));
    /* 005324bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005324bd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5324c2u); f_007b4d18();
    /* 005324c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005324c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005324c5: je 0x5324ce */ if (fZ) goto L_005324ce;
L_005324c7:; BB(0x005324c7);
    /* 005324c7: mov ecx, eax */ r_ecx = r_eax;
    /* 005324c9: call 0x534c38 */ r_esp -= 4; W32(r_esp, 0x5324ceu); f_00534c38();
L_005324ce:; BB(0x005324ce);
    /* 005324ce: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 005324d5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005324d8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005324da: jl 0x5324b4 */ if ((fS!=fO)) goto L_005324b4;
L_005324dc:; BB(0x005324dc);
    /* 005324dc: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
L_005324e2:; BB(0x005324e2);
    /* 005324e2: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005324e8: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 005324ee: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 005324f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005324f6: je 0x53250f */ if (fZ) goto L_0053250f;
L_005324f8:; BB(0x005324f8);
    /* 005324f8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005324fc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00532501: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00532505: mov dword ptr [ebx + 0x3e4], 0 */ W32((u32)(r_ebx+0x3e4u), 0x0u);
L_0053250f:; BB(0x0053250f);
    /* 0053250f: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 00532515: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532517: je 0x532635 */ if (fZ) goto L_00532635;
L_0053251d:; BB(0x0053251d);
    /* 0053251d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00532521: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00532526: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053252a: mov dword ptr [ebx + 0x3e8], 0 */ W32((u32)(r_ebx+0x3e8u), 0x0u);
    /* 00532534: jmp 0x532635 */ goto L_00532635;
L_00532539:; BB(0x00532539);
    /* 00532539: mov ecx, dword ptr [ebx + 0x3e4] */ r_ecx = R32((u32)(r_ebx+0x3e4u));
    /* 0053253f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532541: je 0x53254f */ if (fZ) goto L_0053254f;
L_00532543:; BB(0x00532543);
    /* 00532543: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00532549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053254a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53254fu); f_00508db8();
L_0053254f:; BB(0x0053254f);
    /* 0053254f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532551: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532556u); f_007aa094();
    /* 00532556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532558: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053255a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053255c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x532561u); f_00772b44();
    /* 00532561: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00532567: fcomp dword ptr [0x922a54] */ fx_compare(ST(0), R_F32((u32)(0x922a54u))); FPOP();
    /* 0053256d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053256f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00532570: jae 0x532583 */ if (!fC) goto L_00532583;
L_00532572:; BB(0x00532572);
    /* 00532572: mov ecx, dword ptr [ebx + 0x3e8] */ r_ecx = R32((u32)(r_ebx+0x3e8u));
    /* 00532578: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053257a: je 0x5325a4 */ if (fZ) goto L_005325a4;
L_0053257c:; BB(0x0053257c);
    /* 0053257c: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x532581u); f_00508f48();
    /* 00532581: jmp 0x5325a4 */ goto L_005325a4;
L_00532583:; BB(0x00532583);
    /* 00532583: mov ecx, dword ptr [ebx + 0x3e8] */ r_ecx = R32((u32)(r_ebx+0x3e8u));
    /* 00532589: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053258b: je 0x5325a4 */ if (fZ) goto L_005325a4;
L_0053258d:; BB(0x0053258d);
    /* 0053258d: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x532592u); f_00509580();
    /* 00532592: mov ecx, dword ptr [ebx + 0x3e8] */ r_ecx = R32((u32)(r_ebx+0x3e8u));
    /* 00532598: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0053259e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053259f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5325a4u); f_00508db8();
L_005325a4:; BB(0x005325a4);
    /* 005325a4: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 005325ab: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005325ae: je 0x532635 */ if (fZ) goto L_00532635;
L_005325b4:; BB(0x005325b4);
    /* 005325b4: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 005325ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005325bc: je 0x5325d5 */ if (fZ) goto L_005325d5;
L_005325be:; BB(0x005325be);
    /* 005325be: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005325c2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005325c7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005325cb: mov dword ptr [ebx + 0x3e4], 0 */ W32((u32)(r_ebx+0x3e4u), 0x0u);
L_005325d5:; BB(0x005325d5);
    /* 005325d5: push 0x129 */ { u32 v = 0x129u; r_esp -= 4; W32(r_esp, v); }
    /* 005325da: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005325e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005325e1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5325e6u); f_0050b510();
    /* 005325e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005325e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005325eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005325ed: call 0x532960 */ r_esp -= 4; W32(r_esp, 0x5325f2u); f_00532960();
    /* 005325f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005325f4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5325f9u); f_007aa094();
    /* 005325f9: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005325ff: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
    /* 00532609: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053260e: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00532614: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00532619: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00532620: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00532623: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00532625: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00532626: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00532627: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00532628: push 0x1fb */ { u32 v = 0x1fbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053262d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x532632u); f_00814298();
    /* 00532632: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00532635:; BB(0x00532635);
    /* 00532635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00532638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00532639: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053263a: ret  */ FN_RET(0x005323ec); r_esp += 4; return;
L_0053263b:; BB(0x0053263b);
    /* 0053263b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053263d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053263f: call 0x532960 */ r_esp -= 4; W32(r_esp, 0x532644u); f_00532960();
    /* 00532644: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532646: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53264bu); f_007aa094();
    /* 0053264b: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00532651: jmp 0x532492 */ goto L_00532492;
L_00532656:; BB(0x00532656);
    /* 00532656: mov ecx, dword ptr [ebx + 0x3e4] */ r_ecx = R32((u32)(r_ebx+0x3e4u));
    /* 0053265c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053265e: je 0x53266c */ if (fZ) goto L_0053266c;
L_00532660:; BB(0x00532660);
    /* 00532660: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00532666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532667: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53266cu); f_00508db8();
L_0053266c:; BB(0x0053266c);
    /* 0053266c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053266e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532673u); f_007aa094();
    /* 00532673: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532675: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532677: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532679: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x53267eu); f_00772b44();
    /* 0053267e: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 00532685: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0053268a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053268c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0053268e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532690: jle 0x5326e3 */ if ((fZ||fS!=fO)) goto L_005326e3;
L_00532692:; BB(0x00532692);
    /* 00532692: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00532696: mov edi, ebx */ r_edi = r_ebx;
    /* 00532698: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0053269b: mov ebx, edx */ r_ebx = r_edx;
    /* 0053269d: mov ebp, ecx */ r_ebp = r_ecx;
L_0053269f:; BB(0x0053269f);
    /* 0053269f: movzx eax, word ptr [edi + esi*4 + 0x3cc] */ r_eax = (u32)R16((u32)(r_edi+r_esi*4+0x3ccu));
    /* 005326a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005326a8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5326adu); f_007b4d18();
    /* 005326ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005326ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005326b0: je 0x53271f */ if (fZ) goto L_0053271f;
L_005326b2:; BB(0x005326b2);
    /* 005326b2: fld dword ptr [eax + 0x3c8] */ FPUSH(R_F32((u32)(r_eax+0x3c8u)));
    /* 005326b8: fcomp dword ptr [0x922a50] */ fx_compare(ST(0), R_F32((u32)(0x922a50u))); FPOP();
    /* 005326be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005326c0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005326c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005326c4: jbe 0x5326c8 */ if ((fC||fZ)) goto L_005326c8;
L_005326c6:; BB(0x005326c6);
    /* 005326c6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005326c8:; BB(0x005326c8);
    /* 005326c8: movsx eax, word ptr [edi + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3e0u));
    /* 005326cf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005326d2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005326d4: jl 0x53269f */ if ((fS!=fO)) goto L_0053269f;
L_005326d6:; BB(0x005326d6);
    /* 005326d6: mov edx, ebx */ r_edx = r_ebx;
    /* 005326d8: mov ebx, edi */ r_ebx = r_edi;
    /* 005326da: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005326de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005326e0: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005326e3:; BB(0x005326e3);
    /* 005326e3: mov esi, dword ptr [ebx + 0x38c] */ r_esi = R32((u32)(r_ebx+0x38cu));
    /* 005326e9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005326ec: mov dword ptr [ebx + 0x38c], esi */ W32((u32)(r_ebx+0x38cu), r_esi);
    /* 005326f2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005326f4: jle 0x532704 */ if ((fZ||fS!=fO)) goto L_00532704;
L_005326f6:; BB(0x005326f6);
    /* 005326f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005326f8: je 0x532704 */ if (fZ) goto L_00532704;
L_005326fa:; BB(0x005326fa);
    /* 005326fa: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005326fd: je 0x53272c */ if (fZ) goto L_0053272c;
L_005326ff:; BB(0x005326ff);
    /* 005326ff: jmp 0x532635 */ goto L_00532635;
L_00532704:; BB(0x00532704);
    /* 00532704: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0053270a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053270d: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00532713: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532715: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x53271au); f_00533078();
    /* 0053271a: jmp 0x532635 */ goto L_00532635;
L_0053271f:; BB(0x0053271f);
    /* 0053271f: mov dword ptr [edi + esi*4 + 0x3cc], 0xffff */ W32((u32)(r_edi+r_esi*4+0x3ccu), 0xffffu);
    /* 0053272a: jmp 0x5326c8 */ goto L_005326c8;
L_0053272c:; BB(0x0053272c);
    /* 0053272c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0053272e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532730: jle 0x532774 */ if ((fZ||fS!=fO)) goto L_00532774;
L_00532732:; BB(0x00532732);
    /* 00532732: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_00532736:; BB(0x00532736);
    /* 00532736: movzx eax, word ptr [ebx + esi*4 + 0x3cc] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*4+0x3ccu));
    /* 0053273e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053273f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x532744u); f_007b4d18();
    /* 00532744: mov edi, eax */ r_edi = r_eax;
    /* 00532746: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532749: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053274b: je 0x532762 */ if (fZ) goto L_00532762;
L_0053274d:; BB(0x0053274d);
    /* 0053274d: mov ecx, edi */ r_ecx = r_edi;
    /* 0053274f: call 0x535740 */ r_esp -= 4; W32(r_esp, 0x532754u); f_00535740();
    /* 00532754: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 0053275b: add word ptr [ebx + 0x334], ax */ { u32 ad = (u32)(r_ebx+0x334u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00532762:; BB(0x00532762);
    /* 00532762: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 00532769: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053276c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053276e: jl 0x532736 */ if ((fS!=fO)) goto L_00532736;
L_00532770:; BB(0x00532770);
    /* 00532770: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00532774:; BB(0x00532774);
    /* 00532774: push 0x12a */ { u32 v = 0x12au; r_esp -= 4; W32(r_esp, v); }
    /* 00532779: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0053277f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532780: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x532785u); f_00509590();
    /* 00532785: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532788: mov dword ptr [ebx + 0x3e8], eax */ W32((u32)(r_ebx+0x3e8u), r_eax);
    /* 0053278e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532790: je 0x532799 */ if (fZ) goto L_00532799;
L_00532792:; BB(0x00532792);
    /* 00532792: mov ecx, eax */ r_ecx = r_eax;
    /* 00532794: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x532799u); f_00508f48();
L_00532799:; BB(0x00532799);
    /* 00532799: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0053279f: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 005327a9: mov eax, 0xb */ r_eax = 0xbu;
    /* 005327ae: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005327b5: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005327bb: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 005327c1: jmp 0x532635 */ goto L_00532635;
L_005327c6:; BB(0x005327c6);
    /* 005327c6: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005327cc: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005327d1: je 0x5327da */ if (fZ) goto L_005327da;
L_005327d3:; BB(0x005327d3);
    /* 005327d3: mov eax, 1 */ r_eax = 0x1u;
    /* 005327d8: jmp 0x5327dc */ goto L_005327dc;
L_005327da:; BB(0x005327da);
    /* 005327da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005327dc:; BB(0x005327dc);
    /* 005327dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005327de: je 0x5327ed */ if (fZ) goto L_005327ed;
L_005327e0:; BB(0x005327e0);
    /* 005327e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005327e2: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5327e7u); f_00533078();
    /* 005327e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005327ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005327eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005327ec: ret  */ FN_RET(0x005323ec); r_esp += 4; return;
L_005327ed:; BB(0x005327ed);
    /* 005327ed: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 005327f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005327f5: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 005327fb: mov word ptr [ebx + 0x3e0], ax */ W16((u32)(r_ebx+0x3e0u), (u16)r_eax);
    /* 00532802: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 00532807: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532809: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053280b: jge 0x532956 */ if ((fS==fO)) goto L_00532956;
L_00532811:; BB(0x00532811);
    /* 00532811: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_00532815:; BB(0x00532815);
    /* 00532815: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0053281c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053281e: je 0x53283b */ if (fZ) goto L_0053283b;
L_00532820:; BB(0x00532820);
    /* 00532820: mov ecx, edi */ r_ecx = r_edi;
    /* 00532822: call 0x787560 */ r_esp -= 4; W32(r_esp, 0x532827u); f_00787560();
    /* 00532827: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053282a: je 0x5328e0 */ if (fZ) goto L_005328e0;
L_00532830:; BB(0x00532830);
    /* 00532830: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00532835: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0053283b:; BB(0x0053283b);
    /* 0053283b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053283e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532840: jl 0x532815 */ if ((fS!=fO)) goto L_00532815;
L_00532842:; BB(0x00532842);
    /* 00532842: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00532846: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
L_0053284d:; BB(0x0053284d);
    /* 0053284d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0053284f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532851: jle 0x53287c */ if ((fZ||fS!=fO)) goto L_0053287c;
L_00532853:; BB(0x00532853);
    /* 00532853: movzx eax, word ptr [ebx + esi*4 + 0x3cc] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*4+0x3ccu));
    /* 0053285b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053285c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x532861u); f_007b4d18();
    /* 00532861: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00532862: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00532866: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532867: mov ecx, eax */ r_ecx = r_eax;
    /* 00532869: call 0x534394 */ r_esp -= 4; W32(r_esp, 0x53286eu); f_00534394();
    /* 0053286e: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 00532875: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00532878: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053287a: jl 0x532853 */ if ((fS!=fO)) goto L_00532853;
L_0053287c:; BB(0x0053287c);
    /* 0053287c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053287e: jne 0x53288d */ if (!fZ) goto L_0053288d;
L_00532880:; BB(0x00532880);
    /* 00532880: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532882: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532887u); f_00533078();
    /* 00532887: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053288a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053288b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053288c: ret  */ FN_RET(0x005323ec); r_esp += 4; return;
L_0053288d:; BB(0x0053288d);
    /* 0053288d: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00532893: mov dword ptr [ebx + 0x38c], 0x258 */ W32((u32)(r_ebx+0x38cu), 0x258u);
    /* 0053289d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005328a0: and eax, 0xfbfdffff */ {  u32 a = r_eax; u32 b = 0xfbfdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005328a5: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 005328af: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 005328b4: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005328ba: mov edx, 5 */ r_edx = 0x5u;
    /* 005328bf: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005328c6: lea esi, [ebx + 0x300] */ r_esi = (u32)(r_ebx+0x300u);
    /* 005328cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005328cd: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5328d2u); f_00509590();
    /* 005328d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005328d5: mov dword ptr [ebx + 0x3e4], eax */ W32((u32)(r_ebx+0x3e4u), r_eax);
    /* 005328db: jmp 0x532635 */ goto L_00532635;
L_005328e0:; BB(0x005328e0);
    /* 005328e0: movsx eax, word ptr [ebx + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 005328e4: cmp ax, word ptr [edi + 0x28] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005328e8: je 0x5328fa */ if (fZ) goto L_005328fa;
L_005328ea:; BB(0x005328ea);
    /* 005328ea: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 005328ef: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005328f5: jmp 0x53283b */ goto L_0053283b;
L_005328fa:; BB(0x005328fa);
    /* 005328fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005328fc: call 0x535764 */ r_esp -= 4; W32(r_esp, 0x532901u); f_00535764();
    /* 00532901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532903: jne 0x532915 */ if (!fZ) goto L_00532915;
L_00532905:; BB(0x00532905);
    /* 00532905: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0053290a: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532910: jmp 0x53283b */ goto L_0053283b;
L_00532915:; BB(0x00532915);
    /* 00532915: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00532919: movsx ecx, word ptr [ebx + 0x3e0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 00532920: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00532923: mov word ptr [ebx + 0x3e0], ax */ W16((u32)(r_ebx+0x3e0u), (u16)r_eax);
    /* 0053292a: mov dword ptr [ebx + ecx*4 + 0x3cc], edx */ W32((u32)(r_ebx+r_ecx*4+0x3ccu), r_edx);
    /* 00532931: movsx eax, word ptr [ebx + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3e0u));
    /* 00532938: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053293b: jge 0x53294d */ if ((fS==fO)) goto L_0053294d;
L_0053293d:; BB(0x0053293d);
    /* 0053293d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00532942: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532948: jmp 0x53283b */ goto L_0053283b;
L_0053294d:; BB(0x0053294d);
    /* 0053294d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00532951: jmp 0x53284d */ goto L_0053284d;
L_00532956:; BB(0x00532956);
    /* 00532956: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532958: jmp 0x53284d */ goto L_0053284d;
}

void f_00532700(void)
{
    FN_ENTER(0x00532700);
    /* 00532700: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    UNSUP(0x00532702, "falls out of decoded code");
}

void f_00532960(void) /* sub_532960 */
{
    FN_ENTER(0x00532960);
    /* 00532960: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532961: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00532962: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532963: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532966: mov esi, ecx */ r_esi = r_ecx;
    /* 00532968: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0053296c: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053296f: je 0x532ceb */ if (fZ) goto L_00532ceb;
L_00532975:; BB(0x00532975);
    /* 00532975: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00532977: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0053297d: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00532982: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00532988: mov ecx, esi */ r_ecx = r_esi;
    /* 0053298a: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x53298fu); f_00787550();
    /* 0053298f: mov eax, 5 */ r_eax = 0x5u;
    /* 00532994: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0053299b: mov eax, dword ptr [0xa73480] */ r_eax = R32((u32)(0xa73480u));
    /* 005329a0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005329a6: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 005329a9: mov dword ptr [esi + 0x34], edi */ W32((u32)(r_esi+0x34u), r_edi);
    /* 005329ac: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005329b2: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005329b5: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 005329b8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005329ba: mov ecx, esi */ r_ecx = r_esi;
    /* 005329bc: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x5329c2u); call_ind(t); }
    /* 005329c2: mov edi, dword ptr [esi + 0x390] */ r_edi = R32((u32)(r_esi+0x390u));
    /* 005329c8: test edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005329ce: jne 0x532b17 */ if (!fZ) goto L_00532b17;
L_005329d4:; BB(0x005329d4);
    /* 005329d4: movsx ecx, word ptr [esi + 0x3e0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x3e0u));
    /* 005329db: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 005329e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005329e5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005329e6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005329e6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005329e6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005329e8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005329eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005329ed: jle 0x532cd5 */ if ((fZ||fS!=fO)) goto L_00532cd5;
L_005329f3:; BB(0x005329f3);
    /* 005329f3: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
L_005329fa:; BB(0x005329fa);
    /* 005329fa: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00532a01: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 00532a07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532a09: je 0x532c8a */ if (fZ) goto L_00532c8a;
L_00532a0f:; BB(0x00532a0f);
    /* 00532a0f: or edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00532a15: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00532a19: mov dword ptr [esi + 0x390], edi */ W32((u32)(r_esi+0x390u), r_edi);
    /* 00532a1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532a21: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00532a24: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00532a28: mov edi, 0x2d */ r_edi = 0x2du;
    /* 00532a2d: mov ebx, eax */ r_ebx = r_eax;
L_00532a2f:; BB(0x00532a2f);
    /* 00532a2f: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00532a33: lea ebp, [ebx + edx + 1] */ r_ebp = (u32)(r_ebx+r_edx+0x1u);
    /* 00532a37: movsx edx, word ptr [esi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 00532a3b: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00532a3f: lea edx, [ebx + edx + 1] */ r_edx = (u32)(r_ebx+r_edx+0x1u);
    /* 00532a43: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00532a47: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x532a4cu); f_0082d7b0();
    /* 00532a4c: mov ebp, dword ptr [esi + 0x60] */ r_ebp = R32((u32)(r_esi+0x60u));
    /* 00532a4f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00532a57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532a59: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00532a5d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00532a61: fmul dword ptr [0x922a4c] */ ST(0) = ST(0) * R_F32((u32)(0x922a4cu));
    /* 00532a67: fdiv dword ptr [0x922a48] */ ST(0) = ST(0) / R_F32((u32)(0x922a48u));
    /* 00532a6d: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00532a75: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00532a79: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00532a7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00532a83: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00532a87: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00532a8b: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00532a8f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00532a93: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00532a97: mov dword ptr [esp + 0x14], 0x41500000 */ W32((u32)(r_esp+0x14u), 0x41500000u);
    /* 00532a9f: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00532aa3: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00532aa5: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x532aaau); f_00830cd8();
    /* 00532aaa: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00532aae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532ab0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x532ab5u); f_0082d8bc();
    /* 00532ab5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00532ab9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532aba: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00532abe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532ac0: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x532ac5u); f_00830aa0();
    /* 00532ac5: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00532ac9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00532acd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x532ad2u); f_0082ebac();
    /* 00532ad2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x532ad7u); f_0082da80();
    /* 00532ad7: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00532adb: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00532adf: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00532ae2: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00532ae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532aea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532aeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532aec: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00532af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532af1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532af2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00532af3: call 0x535554 */ r_esp -= 4; W32(r_esp, 0x532af8u); f_00535554();
    /* 00532af8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532afb: add edi, 0x5a */ {  u32 a = r_edi; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532afe: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00532b01: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532b04: jl 0x532a2f */ if ((fS!=fO)) goto L_00532a2f;
L_00532b0a:; BB(0x00532b0a);
    /* 00532b0a: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00532b0e: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00532b12: jmp 0x532c8a */ goto L_00532c8a;
L_00532b17:; BB(0x00532b17);
    /* 00532b17: movsx eax, word ptr [esi + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3e0u));
    /* 00532b1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532b20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00532b22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532b24: jle 0x532c8a */ if ((fZ||fS!=fO)) goto L_00532c8a;
L_00532b2a:; BB(0x00532b2a);
    /* 00532b2a: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00532b2e: mov ebp, edx */ r_ebp = r_edx;
    /* 00532b30: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00532b34: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00532b37: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00532b3a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532b3c: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00532b3e: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00532b41: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532b43: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532b45: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532b47: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00532b49: add edi, 0x2d */ {  u32 a = r_edi; u32 b = 0x2du; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00532b4c:; BB(0x00532b4c);
    /* 00532b4c: movzx eax, word ptr [esi + ebp*4 + 0x3cc] */ r_eax = (u32)R16((u32)(r_esi+r_ebp*4+0x3ccu));
    /* 00532b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532b55: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x532b5au); f_00786b3c();
    /* 00532b5a: mov ebx, eax */ r_ebx = r_eax;
    /* 00532b5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532b5f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532b61: je 0x532c14 */ if (fZ) goto L_00532c14;
L_00532b67:; BB(0x00532b67);
    /* 00532b67: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x532b6cu); f_0082d7b0();
    /* 00532b6c: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00532b6f: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00532b76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532b78: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00532b7c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00532b80: fmul dword ptr [0x922a4c] */ ST(0) = ST(0) * R_F32((u32)(0x922a4cu));
    /* 00532b86: fdiv dword ptr [0x922a48] */ ST(0) = ST(0) / R_F32((u32)(0x922a48u));
    /* 00532b8c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00532b94: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00532b98: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00532b9d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00532ba2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00532ba6: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00532baa: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00532bae: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00532bb2: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00532bb6: mov dword ptr [esp + 8], 0x41500000 */ W32((u32)(r_esp+0x8u), 0x41500000u);
    /* 00532bbe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00532bc2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00532bc4: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00532bc8: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x532bcdu); f_00830cd8();
    /* 00532bcd: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00532bd1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532bd3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x532bd8u); f_0082d8bc();
    /* 00532bd8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00532bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532bdc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00532be0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00532be2: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x532be7u); f_00830aa0();
    /* 00532be7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00532bea: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00532bed: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x532bf2u); f_0082ebac();
    /* 00532bf2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x532bf7u); f_0082da80();
    /* 00532bf7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00532bfa: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00532c01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532c02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00532c04: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00532c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532c09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532c0a: call 0x534324 */ r_esp -= 4; W32(r_esp, 0x532c0fu); f_00534324();
    /* 00532c0f: add dword ptr [esp + 0x48], 1 */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00532c14:; BB(0x00532c14);
    /* 00532c14: movsx eax, word ptr [esi + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3e0u));
    /* 00532c1b: add edi, 0x5a */ {  u32 a = r_edi; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532c1e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00532c21: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532c23: jl 0x532b4c */ if ((fS!=fO)) goto L_00532b4c;
L_00532c29:; BB(0x00532c29);
    /* 00532c29: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00532c2d: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00532c31: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00532c35: mov edi, eax */ r_edi = r_eax;
    /* 00532c37: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532c39: jle 0x532c8a */ if ((fZ||fS!=fO)) goto L_00532c8a;
L_00532c3b:; BB(0x00532c3b);
    /* 00532c3b: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00532c42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00532c45: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00532c46: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00532c46, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00532c46, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00532c48: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00532c4a: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 00532c51: mov eax, 0 */ r_eax = 0x0u;
    /* 00532c56: jle 0x532c8a */ if ((fZ||fS!=fO)) goto L_00532c8a;
L_00532c58:; BB(0x00532c58);
    /* 00532c58: mov edi, eax */ r_edi = r_eax;
L_00532c5a:; BB(0x00532c5a);
    /* 00532c5a: movzx edx, word ptr [esi + edi*4 + 0x3cc] */ r_edx = (u32)R16((u32)(r_esi+r_edi*4+0x3ccu));
    /* 00532c62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532c63: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x532c68u); f_00786b3c();
    /* 00532c68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00532c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532c6b: je 0x532c7c */ if (fZ) goto L_00532c7c;
L_00532c6d:; BB(0x00532c6d);
    /* 00532c6d: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00532c74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532c75: mov ecx, eax */ r_ecx = r_eax;
    /* 00532c77: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x532c7cu); f_00770b58();
L_00532c7c:; BB(0x00532c7c);
    /* 00532c7c: movsx edx, word ptr [esi + 0x3e0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3e0u));
    /* 00532c83: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532c86: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532c88: jl 0x532c5a */ if ((fS!=fO)) goto L_00532c5a;
L_00532c8a:; BB(0x00532c8a);
    /* 00532c8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532c8c: mov word ptr [esi + 0x3e0], ax */ W16((u32)(r_esi+0x3e0u), (u16)r_eax);
L_00532c93:; BB(0x00532c93);
    /* 00532c93: movzx eax, word ptr [esi + 0xb8] */ r_eax = (u32)R16((u32)(r_esi+0xb8u));
    /* 00532c9a: mov dword ptr [esi + 0x3dc], 0 */ W32((u32)(r_esi+0x3dcu), 0x0u);
    /* 00532ca4: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00532cab: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00532caf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00532cb1: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00532cb4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532cb6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532cb8: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00532cba: mov dword ptr [esi + 0x370], ebp */ W32((u32)(r_esi+0x370u), r_ebp);
    /* 00532cc0: lea eax, [edi + 0x9bc744] */ r_eax = (u32)(r_edi+0x9bc744u);
    /* 00532cc6: mov dword ptr [esi + 0x358], eax */ W32((u32)(r_esi+0x358u), r_eax);
    /* 00532ccc: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00532ccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532cd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00532cd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00532cd2: ret 4 */ FN_RET(0x00532960); r_esp += 8; return;
L_00532cd5:; BB(0x00532cd5);
    /* 00532cd5: mov eax, 1 */ r_eax = 0x1u;
    /* 00532cda: mov edx, 1 */ r_edx = 0x1u;
    /* 00532cdf: mov word ptr [esi + 0x334], dx */ W16((u32)(r_esi+0x334u), (u16)r_edx);
    /* 00532ce6: jmp 0x5329fa */ goto L_005329fa;
L_00532ceb:; BB(0x00532ceb);
    /* 00532ceb: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00532ced: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00532cf3: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00532cf8: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00532cfe: mov ecx, esi */ r_ecx = r_esi;
    /* 00532d00: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x532d05u); f_00787550();
    /* 00532d05: mov ecx, dword ptr [0xa73480] */ r_ecx = R32((u32)(0xa73480u));
    /* 00532d0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532d0d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00532d14: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00532d1a: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00532d1d: mov dword ptr [esi + 0x34], edi */ W32((u32)(r_esi+0x34u), r_edi);
    /* 00532d20: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00532d26: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00532d29: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00532d2c: mov word ptr [esi + 0x3e2], ax */ W16((u32)(r_esi+0x3e2u), (u16)r_eax);
    /* 00532d33: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00532d35: mov ecx, esi */ r_ecx = r_esi;
    /* 00532d37: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x532d3du); call_ind(t); }
    /* 00532d3d: jmp 0x532c93 */ goto L_00532c93;
}

void f_00532d44(void) /* sub_532D44 */
{
    FN_ENTER(0x00532d44);
    /* 00532d44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532d45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532d46: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532d49: mov edi, ecx */ r_edi = r_ecx;
    /* 00532d4b: mov ecx, edi */ r_ecx = r_edi;
    /* 00532d4d: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x532d52u); f_00770738();
    /* 00532d52: mov ebp, eax */ r_ebp = r_eax;
    /* 00532d54: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 00532d5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532d5c: je 0x532fd8 */ if (fZ) goto L_00532fd8;
L_00532d62:; BB(0x00532d62);
    /* 00532d62: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532d65: je 0x532ea8 */ if (fZ) goto L_00532ea8;
L_00532d6b:; BB(0x00532d6b);
    /* 00532d6b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532d6e: jne 0x532fa7 */ if (!fZ) goto L_00532fa7;
L_00532d74:; BB(0x00532d74);
    /* 00532d74: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532d76: je 0x532fc6 */ if (fZ) goto L_00532fc6;
L_00532d7c:; BB(0x00532d7c);
    /* 00532d7c: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 00532d86: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532d8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00532d8e: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532d94: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532d9a: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532da0: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532da6: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532dac: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00532db1: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x532db6u); f_00771f5c();
    /* 00532db6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00532db8: mov ecx, edi */ r_ecx = r_edi;
    /* 00532dba: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x532dbdu); call_ind(t); }
    /* 00532dbd: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 00532dc3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00532dc6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00532dc9: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 00532dcf: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00532dd5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00532dd8: mov ecx, edi */ r_ecx = r_edi;
    /* 00532dda: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00532dde: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00532de4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00532de8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00532dec: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 00532df2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00532df5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00532df9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532dfa: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x532dffu); f_00771e14();
    /* 00532dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532e01: jne 0x532e0a */ if (!fZ) goto L_00532e0a;
L_00532e03:; BB(0x00532e03);
    /* 00532e03: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00532e05: mov ecx, edi */ r_ecx = r_edi;
    /* 00532e07: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x532e0au); call_ind(t); }
L_00532e0a:; BB(0x00532e0a);
    /* 00532e0a: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00532e11: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x532e16u); f_007aaa30();
    /* 00532e16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532e18: je 0x532e8d */ if (fZ) goto L_00532e8d;
L_00532e1a:; BB(0x00532e1a);
    /* 00532e1a: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532e20: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00532e23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532e25: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x532e28u); call_ind(t); }
    /* 00532e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532e2a: je 0x532e85 */ if (fZ) goto L_00532e85;
L_00532e2c:; BB(0x00532e2c);
    /* 00532e2c: mov ecx, edi */ r_ecx = r_edi;
    /* 00532e2e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x532e33u); f_007751b0();
    /* 00532e33: fcomp dword ptr [0x922a28] */ fx_compare(ST(0), R_F32((u32)(0x922a28u))); FPOP();
    /* 00532e39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00532e3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00532e3c: ja 0x532e67 */ if ((!fC&&!fZ)) goto L_00532e67;
L_00532e3e:; BB(0x00532e3e);
    /* 00532e3e: mov ecx, dword ptr [0x9229a0] */ r_ecx = R32((u32)(0x9229a0u));
    /* 00532e44: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00532e47: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00532e4f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00532e54: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00532e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532e59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532e5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532e5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532e60: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532e62: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x532e65u); call_ind(t); }
    /* 00532e65: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00532e67:; BB(0x00532e67);
    /* 00532e67: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532e6d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00532e70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532e72: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x532e75u); call_ind(t); }
    /* 00532e75: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00532e77: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532e7d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00532e80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00532e82: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x532e85u); call_ind(t); }
L_00532e85:; BB(0x00532e85);
    /* 00532e85: add word ptr [edi + 0x3e2], 1 */ { u32 ad = (u32)(r_edi+0x3e2u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00532e8d:; BB(0x00532e8d);
    /* 00532e8d: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00532e93: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532e96: je 0x532fa7 */ if (fZ) goto L_00532fa7;
L_00532e9c:; BB(0x00532e9c);
    /* 00532e9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00532e9e: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532ea3u); f_00533078();
    /* 00532ea3: jmp 0x532fa7 */ goto L_00532fa7;
L_00532ea8:; BB(0x00532ea8);
    /* 00532ea8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532eaa: je 0x532fcf */ if (fZ) goto L_00532fcf;
L_00532eb0:; BB(0x00532eb0);
    /* 00532eb0: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 00532eba: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532ec0: mov ecx, edi */ r_ecx = r_edi;
    /* 00532ec2: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532ec8: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532ece: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532ed4: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532eda: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532ee0: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00532ee5: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x532eeau); f_00771f5c();
    /* 00532eea: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 00532ef0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00532ef4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00532ef8: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 00532efe: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00532f04: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00532f08: mov ecx, edi */ r_ecx = r_edi;
    /* 00532f0a: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00532f0e: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00532f14: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00532f18: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00532f1c: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 00532f22: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00532f26: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00532f2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532f2b: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x532f30u); f_00771e14();
    /* 00532f30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532f32: jne 0x532f3b */ if (!fZ) goto L_00532f3b;
L_00532f34:; BB(0x00532f34);
    /* 00532f34: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00532f36: mov ecx, edi */ r_ecx = r_edi;
    /* 00532f38: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x532f3bu); call_ind(t); }
L_00532f3b:; BB(0x00532f3b);
    /* 00532f3b: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 00532f41: lea edx, [edi + 0x30c] */ r_edx = (u32)(r_edi+0x30cu);
    /* 00532f47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532f48: mov ecx, edi */ r_ecx = r_edi;
    /* 00532f4a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00532f4d: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x532f52u); f_00771858();
    /* 00532f52: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00532f58: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00532f5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532f5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532f60: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x532f65u); f_0078ea50();
    /* 00532f65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532f68: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 00532f6e: fst dword ptr [edi + 0x3c8] */ W_F32((u32)(r_edi+0x3c8u), ST(0));
    /* 00532f74: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00532f77: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00532f79: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00532f7b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00532f7d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00532f7e: jb 0x532fa7 */ if (fC) goto L_00532fa7;
L_00532f80:; BB(0x00532f80);
    /* 00532f80: mov eax, 2 */ r_eax = 0x2u;
    /* 00532f85: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00532f8c: mov dword ptr [edi + 0x384], eax */ W32((u32)(r_edi+0x384u), r_eax);
    /* 00532f92: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00532f95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00532f97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532f99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532f9a: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 00532f9f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x532fa4u); f_00814298();
    /* 00532fa4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00532fa7:; BB(0x00532fa7);
    /* 00532fa7: mov ecx, edi */ r_ecx = r_edi;
    /* 00532fa9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532faeu); f_007aa094();
    /* 00532fae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532fb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532fb2: mov ecx, edi */ r_ecx = r_edi;
    /* 00532fb4: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x532fb9u); f_00772b44();
    /* 00532fb9: mov ecx, edi */ r_ecx = r_edi;
    /* 00532fbb: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x532fc0u); f_007b6880();
    /* 00532fc0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00532fc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532fc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00532fc5: ret  */ FN_RET(0x00532d44); r_esp += 4; return;
L_00532fc6:; BB(0x00532fc6);
    /* 00532fc6: mov ecx, edi */ r_ecx = r_edi;
    /* 00532fc8: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532fcdu); f_00533078();
    /* 00532fcd: jmp 0x532fa7 */ goto L_00532fa7;
L_00532fcf:; BB(0x00532fcf);
    /* 00532fcf: mov ecx, edi */ r_ecx = r_edi;
    /* 00532fd1: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532fd6u); f_00533078();
    /* 00532fd6: jmp 0x532fa7 */ goto L_00532fa7;
L_00532fd8:; BB(0x00532fd8);
    /* 00532fd8: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00532fde: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532fe3: je 0x532fec */ if (fZ) goto L_00532fec;
L_00532fe5:; BB(0x00532fe5);
    /* 00532fe5: mov eax, 1 */ r_eax = 0x1u;
    /* 00532fea: jmp 0x532fee */ goto L_00532fee;
L_00532fec:; BB(0x00532fec);
    /* 00532fec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00532fee:; BB(0x00532fee);
    /* 00532fee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532ff0: jne 0x532fff */ if (!fZ) goto L_00532fff;
L_00532ff2:; BB(0x00532ff2);
    /* 00532ff2: mov ecx, edi */ r_ecx = r_edi;
    /* 00532ff4: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x532ff9u); f_00533078();
    /* 00532ff9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00532ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532ffd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00532ffe: ret  */ FN_RET(0x00532d44); r_esp += 4; return;
L_00532fff:; BB(0x00532fff);
    /* 00532fff: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00533004: mov ecx, edi */ r_ecx = r_edi;
    /* 00533006: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x53300bu); f_0052ccd8();
    /* 0053300b: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 00533012: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533017: je 0x53306b */ if (fZ) goto L_0053306b;
L_00533019:; BB(0x00533019);
    /* 00533019: mov eax, 1 */ r_eax = 0x1u;
    /* 0053301e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053301f: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00533026: mov dword ptr [edi + 0x384], eax */ W32((u32)(r_edi+0x384u), r_eax);
    /* 0053302c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053302e: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533034: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053303a: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533040: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x533045u); f_00771c8c();
    /* 00533045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533047: je 0x532fa7 */ if (fZ) goto L_00532fa7;
L_0053304d:; BB(0x0053304d);
    /* 0053304d: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533053: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533059: mov ecx, edi */ r_ecx = r_edi;
    /* 0053305b: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533061: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x533066u); f_00771f1c();
    /* 00533066: jmp 0x532fa7 */ goto L_00532fa7;
L_0053306b:; BB(0x0053306b);
    /* 0053306b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053306d: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x533072u); f_00533078();
    /* 00533072: jmp 0x532fa7 */ goto L_00532fa7;
}

