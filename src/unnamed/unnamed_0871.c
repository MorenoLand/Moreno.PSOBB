#include "protos.h"

void f_00871058(void) /* sub_871058 */
{
    FN_ENTER(0x00871058);
    /* 00871058: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00871059: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087105a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087105b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087105c: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087105f: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00871063: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00871067: mov esi, eax */ r_esi = r_eax;
    /* 00871069: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0087106d: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 00871071: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871073: je 0x871265 */ if (fZ) goto L_00871265;
L_00871079:; BB(0x00871079);
    /* 00871079: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087107a: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x87107fu); f_00875ffc();
    /* 0087107f: lea ebx, [esi + 0x78] */ r_ebx = (u32)(r_esi+0x78u);
    /* 00871082: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871083: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871084: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x871089u); f_0087696c();
    /* 00871089: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087108c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087108e: je 0x871098 */ if (fZ) goto L_00871098;
L_00871090:; BB(0x00871090);
    /* 00871090: mov edx, dword ptr [esi + 0x1c8] */ r_edx = R32((u32)(r_esi+0x1c8u));
    /* 00871096: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
L_00871098:; BB(0x00871098);
    /* 00871098: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 0087109f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008710a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008710a4: call 0x877714 */ r_esp -= 4; W32(r_esp, 0x8710a9u); f_00877714();
    /* 008710a9: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008710ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008710ae: call 0x877748 */ r_esp -= 4; W32(r_esp, 0x8710b3u); f_00877748();
    /* 008710b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008710b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008710b8: lea ecx, [esi + 0x18] */ r_ecx = (u32)(r_esi+0x18u);
    /* 008710bb: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008710bf: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_008710c3:; BB(0x008710c3);
    /* 008710c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008710c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008710c5: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x8710cau); f_0087658c();
    /* 008710ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008710cd: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008710d1: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 008710d5: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008710d9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008710dc: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_008710e0:; BB(0x008710e0);
    /* 008710e0: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008710e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008710e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008710e6: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x8710ebu); f_008769d4();
    /* 008710eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008710ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008710f0: je 0x87114e */ if (fZ) goto L_0087114e;
L_008710f2:; BB(0x008710f2);
    /* 008710f2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008710f5: je 0x871144 */ if (fZ) goto L_00871144;
L_008710f7:; BB(0x008710f7);
    /* 008710f7: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008710fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008710fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008710fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008710fe: call 0x876e2c */ r_esp -= 4; W32(r_esp, 0x871103u); f_00876e2c();
    /* 00871103: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871106: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871108: jne 0x87111a */ if (!fZ) goto L_0087111a;
L_0087110a:; BB(0x0087110a);
    /* 0087110a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087110b: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087110e: jl 0x8710e0 */ if ((fS!=fO)) goto L_008710e0;
L_00871110:; BB(0x00871110);
    /* 00871110: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00871112: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871115: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871117: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871118: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871119: ret  */ FN_RET(0x00871058); r_esp += 4; return;
L_0087111a:; BB(0x0087111a);
    /* 0087111a: mov ebx, eax */ r_ebx = r_eax;
    /* 0087111c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0087111f:; BB(0x0087111f);
    /* 0087111f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00871123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871124: call 0x876cd8 */ r_esp -= 4; W32(r_esp, 0x871129u); f_00876cd8();
    /* 00871129: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0087112d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087112e: call 0x876c4c */ r_esp -= 4; W32(r_esp, 0x871133u); f_00876c4c();
    /* 00871133: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
    /* 0087113a: mov eax, ebx */ r_eax = r_ebx;
    /* 0087113c: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087113f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871141: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871142: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871143: ret  */ FN_RET(0x00871058); r_esp += 4; return;
L_00871144:; BB(0x00871144);
    /* 00871144: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00871147: mov ebx, 0xffffff7b */ r_ebx = 0xffffff7bu;
    /* 0087114c: jmp 0x87111f */ goto L_0087111f;
L_0087114e:; BB(0x0087114e);
    /* 0087114e: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00871152: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00871156: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00871159: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0087115c: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0087115f: add eax, 0x2134 */ {  u32 a = r_eax; u32 b = 0x2134u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00871164: adc edi, 0 */ { u32 c = fC; u32 a = r_edi; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00871167: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0087116b: mov ebx, eax */ r_ebx = r_eax;
    /* 0087116d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
L_00871171:; BB(0x00871171);
    /* 00871171: mov edx, edi */ r_edx = r_edi;
    /* 00871173: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871176: jl 0x87118c */ if ((fS!=fO)) goto L_0087118c;
L_00871178:; BB(0x00871178);
    /* 00871178: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087117a: je 0x87118c */ if (fZ) goto L_0087118c;
L_0087117c:; BB(0x0087117c);
    /* 0087117c: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0087117f: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00871182: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00871184: sbb ecx, edi */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871186: jge 0x871215 */ if ((fS==fO)) goto L_00871215;
L_0087118c:; BB(0x0087118c);
    /* 0087118c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00871190: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871191: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00871195: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871196: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x87119bu); f_00876198();
    /* 0087119b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087119e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008711a0: jl 0x87124f */ if ((fS!=fO)) goto L_0087124f;
L_008711a6:; BB(0x008711a6);
    /* 008711a6: jne 0x87121f */ if (!fZ) goto L_0087121f;
L_008711a8:; BB(0x008711a8);
    /* 008711a8: mov edx, ebx */ r_edx = r_ebx;
    /* 008711aa: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008711ac: je 0x871215 */ if (fZ) goto L_00871215;
L_008711ae:; BB(0x008711ae);
    /* 008711ae: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8711b3u); f_00859dd6();
    /* 008711b3: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 008711b9: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008711bc: je 0x871209 */ if (fZ) goto L_00871209;
L_008711be:; BB(0x008711be);
    /* 008711be: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008711c3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008711c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008711c8: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x8711cdu); f_008760f8();
    /* 008711cd: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008711cf: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008711d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008711d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008711d7: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x8711ddu); call_ind(t); }
    /* 008711dd: mov ebp, eax */ r_ebp = r_eax;
    /* 008711df: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008711e2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008711e4: jle 0x8711f6 */ if ((fZ||fS!=fO)) goto L_008711f6;
L_008711e6:; BB(0x008711e6);
    /* 008711e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008711e7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008711eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008711ec: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x8711f1u); f_0087617c();
    /* 008711f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008711f4: jmp 0x87120b */ goto L_0087120b;
L_008711f6:; BB(0x008711f6);
    /* 008711f6: jne 0x87120b */ if (!fZ) goto L_0087120b;
L_008711f8:; BB(0x008711f8);
    /* 008711f8: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8711fdu); f_00859dd6();
    /* 008711fd: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871200: je 0x87120b */ if (fZ) goto L_0087120b;
L_00871202:; BB(0x00871202);
    /* 00871202: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00871207: jmp 0x87120b */ goto L_0087120b;
L_00871209:; BB(0x00871209);
    /* 00871209: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0087120b:; BB(0x0087120b);
    /* 0087120b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087120d: je 0x871215 */ if (fZ) goto L_00871215;
L_0087120f:; BB(0x0087120f);
    /* 0087120f: jge 0x871171 */ if ((fS==fO)) goto L_00871171;
L_00871215:; BB(0x00871215);
    /* 00871215: mov ebx, 0xffffff7b */ r_ebx = 0xffffff7bu;
    /* 0087121a: jmp 0x87111f */ goto L_0087111f;
L_0087121f:; BB(0x0087121f);
    /* 0087121f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871223: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00871227: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087122a: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0087122d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087122e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00871230: adc edx, edi */ { u32 c = fC; u32 a = r_edx; u32 b = r_edi; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00871232: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00871235: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00871238: sub edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087123b: jl 0x871215 */ if ((fS!=fO)) goto L_00871215;
L_0087123d:; BB(0x0087123d);
    /* 0087123d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00871241: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871244: jl 0x8710c3 */ if ((fS!=fO)) goto L_008710c3;
L_0087124a:; BB(0x0087124a);
    /* 0087124a: jmp 0x871110 */ goto L_00871110;
L_0087124f:; BB(0x0087124f);
    /* 0087124f: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871252: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 00871255: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871256: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00871258: sbb ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 0087125a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0087125d: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 00871260: jmp 0x871171 */ goto L_00871171;
L_00871265:; BB(0x00871265);
    /* 00871265: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00871269: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 0087126c: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0087126f: add ebx, 0x2134 */ {  u32 a = r_ebx; u32 b = 0x2134u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00871275: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871278: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_0087127c:; BB(0x0087127c);
    /* 0087127c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00871280: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871283: jl 0x87129d */ if ((fS!=fO)) goto L_0087129d;
L_00871285:; BB(0x00871285);
    /* 00871285: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00871287: je 0x87129d */ if (fZ) goto L_0087129d;
L_00871289:; BB(0x00871289);
    /* 00871289: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0087128c: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0087128f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00871293: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00871295: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871297: jge 0x87139b */ if ((fS==fO)) goto L_0087139b;
L_0087129d:; BB(0x0087129d);
    /* 0087129d: lea ebp, [esi + 0x18] */ r_ebp = (u32)(r_esi+0x18u);
    /* 008712a0: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 008712a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008712a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008712a6: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x8712abu); f_00876198();
    /* 008712ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008712ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008712b0: jl 0x871385 */ if ((fS!=fO)) goto L_00871385;
L_008712b6:; BB(0x008712b6);
    /* 008712b6: jne 0x87136e */ if (!fZ) goto L_0087136e;
L_008712bc:; BB(0x008712bc);
    /* 008712bc: mov eax, ebx */ r_eax = r_ebx;
    /* 008712be: or eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008712c2: je 0x871325 */ if (fZ) goto L_00871325;
L_008712c4:; BB(0x008712c4);
    /* 008712c4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8712c9u); f_00859dd6();
    /* 008712c9: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 008712cf: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008712d2: je 0x871317 */ if (fZ) goto L_00871317;
L_008712d4:; BB(0x008712d4);
    /* 008712d4: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008712d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008712da: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x8712dfu); f_008760f8();
    /* 008712df: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008712e1: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008712e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008712e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008712e9: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x8712efu); call_ind(t); }
    /* 008712ef: mov edi, eax */ r_edi = r_eax;
    /* 008712f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008712f4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008712f6: jle 0x871304 */ if ((fZ||fS!=fO)) goto L_00871304;
L_008712f8:; BB(0x008712f8);
    /* 008712f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008712f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008712fa: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x8712ffu); f_0087617c();
    /* 008712ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871302: jmp 0x871319 */ goto L_00871319;
L_00871304:; BB(0x00871304);
    /* 00871304: jne 0x871319 */ if (!fZ) goto L_00871319;
L_00871306:; BB(0x00871306);
    /* 00871306: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x87130bu); f_00859dd6();
    /* 0087130b: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087130e: je 0x871319 */ if (fZ) goto L_00871319;
L_00871310:; BB(0x00871310);
    /* 00871310: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00871315: jmp 0x871319 */ goto L_00871319;
L_00871317:; BB(0x00871317);
    /* 00871317: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00871319:; BB(0x00871319);
    /* 00871319: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087131b: je 0x87135e */ if (fZ) goto L_0087135e;
L_0087131d:; BB(0x0087131d);
    /* 0087131d: jge 0x87127c */ if ((fS==fO)) goto L_0087127c;
L_00871323:; BB(0x00871323);
    /* 00871323: jmp 0x87134e */ goto L_0087134e;
L_00871325:; BB(0x00871325);
    /* 00871325: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00871329: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0087132e: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00871333:; BB(0x00871333);
    /* 00871333: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871339: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 0087133c: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0087133e: je 0x8713ab */ if (fZ) goto L_008713ab;
L_00871340:; BB(0x00871340);
    /* 00871340: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871343: jl 0x8713b8 */ if ((fS!=fO)) goto L_008713b8;
L_00871345:; BB(0x00871345);
    /* 00871345: lea ebp, [esp + 0x3c] */ r_ebp = (u32)(r_esp+0x3cu);
    /* 00871349: jmp 0x871079 */ goto L_00871079;
L_0087134e:; BB(0x0087134e);
    /* 0087134e: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00871352: mov ecx, 0xffffff80 */ r_ecx = 0xffffff80u;
    /* 00871357: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0087135c: jmp 0x871333 */ goto L_00871333;
L_0087135e:; BB(0x0087135e);
    /* 0087135e: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00871362: mov ecx, 0xfffffffe */ r_ecx = 0xfffffffeu;
    /* 00871367: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0087136c: jmp 0x871333 */ goto L_00871333;
L_0087136e:; BB(0x0087136e);
    /* 0087136e: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00871372: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871375: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 00871378: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871379: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0087137b: adc edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0087137d: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00871380: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00871383: jmp 0x871333 */ goto L_00871333;
L_00871385:; BB(0x00871385);
    /* 00871385: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871388: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 0087138b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087138c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 0087138e: sbb ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 00871390: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00871393: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 00871396: jmp 0x87127c */ goto L_0087127c;
L_0087139b:; BB(0x0087139b);
    /* 0087139b: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0087139f: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 008713a4: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008713a9: jmp 0x871333 */ goto L_00871333;
L_008713ab:; BB(0x008713ab);
    /* 008713ab: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 008713b0: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008713b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008713b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008713b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008713b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008713b7: ret  */ FN_RET(0x00871058); r_esp += 4; return;
L_008713b8:; BB(0x008713b8);
    /* 008713b8: mov eax, 0xffffff7c */ r_eax = 0xffffff7cu;
    /* 008713bd: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008713c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008713c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008713c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008713c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008713c4: ret  */ FN_RET(0x00871058); r_esp += 4; return;
}

void f_008713c8(void) /* sub_8713C8 */
{
    FN_ENTER(0x008713c8);
    /* 008713c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008713c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008713ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008713cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008713cc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008713cf: mov ebp, edx */ r_ebp = r_edx;
    /* 008713d1: mov esi, eax */ r_esi = r_eax;
    /* 008713d3: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008713d6: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 008713d9: mov ecx, eax */ r_ecx = r_eax;
    /* 008713db: mov edx, edi */ r_edx = r_edi;
    /* 008713dd: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008713e2: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 008713e6: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008713eb: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008713ef: lea ebx, [esi + 0x18] */ r_ebx = (u32)(r_esi+0x18u);
    /* 008713f2: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 008713f6: mov ebx, eax */ r_ebx = r_eax;
    /* 008713f8: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008713fc: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00871400: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
L_00871404:; BB(0x00871404);
    /* 00871404: add ebx, 0xffffdecc */ {  u32 a = r_ebx; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 0087140a: adc edi, -1 */ { u32 c = fC; u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0087140d: mov edx, edi */ r_edx = r_edi;
    /* 0087140f: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871412: jge 0x871418 */ if ((fS==fO)) goto L_00871418;
L_00871414:; BB(0x00871414);
    /* 00871414: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00871416: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00871418:; BB(0x00871418);
    /* 00871418: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0087141a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087141c: je 0x87143c */ if (fZ) goto L_0087143c;
L_0087141e:; BB(0x0087141e);
    /* 0087141e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00871421: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871422: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871423: call dword ptr [esi + 0x2c4] */ { u32 t = R32((u32)(r_esi+0x2c4u)); r_esp -= 4; W32(r_esp, 0x871429u); call_ind(t); }
    /* 00871429: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 0087142c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00871430: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00871433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871434: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x871439u); f_00876954();
    /* 00871439: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0087143c:; BB(0x0087143c);
    /* 0087143c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0087143f: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00871442: mov ebp, eax */ r_ebp = r_eax;
    /* 00871444: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00871448: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); }
    /* 0087144a: mov ebp, edx */ r_ebp = r_edx;
    /* 0087144c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00871450: sbb ebp, ecx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871452: jge 0x871404 */ if ((fS==fO)) goto L_00871404;
L_00871454:; BB(0x00871454);
    /* 00871454: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00871458: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0087145c: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
L_00871460:; BB(0x00871460);
    /* 00871460: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00871464: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00871468: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); }
    /* 0087146a: sbb ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r;  }
    /* 0087146c: mov edi, ebx */ r_edi = r_ebx;
    /* 0087146e: sub edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871471: jl 0x87147b */ if ((fS!=fO)) goto L_0087147b;
L_00871473:; BB(0x00871473);
    /* 00871473: or edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00871475: je 0x87147b */ if (fZ) goto L_0087147b;
L_00871477:; BB(0x00871477);
    /* 00871477: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00871479: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
L_0087147b:; BB(0x0087147b);
    /* 0087147b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_0087147f:; BB(0x0087147f);
    /* 0087147f: mov edx, ebx */ r_edx = r_ebx;
    /* 00871481: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871484: jl 0x87149a */ if ((fS!=fO)) goto L_0087149a;
L_00871486:; BB(0x00871486);
    /* 00871486: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00871488: je 0x87149a */ if (fZ) goto L_0087149a;
L_0087148a:; BB(0x0087148a);
    /* 0087148a: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0087148d: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00871490: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00871492: sbb ecx, ebx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871494: jge 0x871740 */ if ((fS==fO)) goto L_00871740;
L_0087149a:; BB(0x0087149a);
    /* 0087149a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0087149e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087149f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008714a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008714a4: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x8714a9u); f_00876198();
    /* 008714a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008714ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008714ae: jl 0x87172a */ if ((fS!=fO)) goto L_0087172a;
L_008714b4:; BB(0x008714b4);
    /* 008714b4: jne 0x871710 */ if (!fZ) goto L_00871710;
L_008714ba:; BB(0x008714ba);
    /* 008714ba: mov edx, ebp */ r_edx = r_ebp;
    /* 008714bc: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008714be: je 0x871530 */ if (fZ) goto L_00871530;
L_008714c0:; BB(0x008714c0);
    /* 008714c0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8714c5u); f_00859dd6();
    /* 008714c5: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 008714cb: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008714ce: je 0x87151b */ if (fZ) goto L_0087151b;
L_008714d0:; BB(0x008714d0);
    /* 008714d0: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008714d5: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008714d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008714da: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x8714dfu); f_008760f8();
    /* 008714df: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008714e1: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008714e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008714e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008714e9: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x8714efu); call_ind(t); }
    /* 008714ef: mov edi, eax */ r_edi = r_eax;
    /* 008714f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008714f4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008714f6: jle 0x871508 */ if ((fZ||fS!=fO)) goto L_00871508;
L_008714f8:; BB(0x008714f8);
    /* 008714f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008714f9: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008714fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008714fe: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x871503u); f_0087617c();
    /* 00871503: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871506: jmp 0x87151d */ goto L_0087151d;
L_00871508:; BB(0x00871508);
    /* 00871508: jne 0x87151d */ if (!fZ) goto L_0087151d;
L_0087150a:; BB(0x0087150a);
    /* 0087150a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x87150fu); f_00859dd6();
    /* 0087150f: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871512: je 0x87151d */ if (fZ) goto L_0087151d;
L_00871514:; BB(0x00871514);
    /* 00871514: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00871519: jmp 0x87151d */ goto L_0087151d;
L_0087151b:; BB(0x0087151b);
    /* 0087151b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0087151d:; BB(0x0087151d);
    /* 0087151d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087151f: je 0x8716ae */ if (fZ) goto L_008716ae;
L_00871525:; BB(0x00871525);
    /* 00871525: jge 0x87147f */ if ((fS==fO)) goto L_0087147f;
L_0087152b:; BB(0x0087152b);
    /* 0087152b: jmp 0x87169b */ goto L_0087169b;
L_00871530:; BB(0x00871530);
    /* 00871530: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00871534: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00871539: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
L_0087153e:; BB(0x0087153e);
    /* 0087153e: lea edi, [ebx + 0x80] */ r_edi = (u32)(r_ebx+0x80u);
    /* 00871544: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 00871547: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00871549: je 0x871765 */ if (fZ) goto L_00871765;
L_0087154f:; BB(0x0087154f);
    /* 0087154f: mov edx, ebp */ r_edx = r_ebp;
    /* 00871551: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871554: jl 0x8716ff */ if ((fS!=fO)) goto L_008716ff;
L_0087155a:; BB(0x0087155a);
    /* 0087155a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0087155c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0087155f: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00871562: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871566: mov ebp, eax */ r_ebp = r_eax;
    /* 00871568: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0087156c: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); }
    /* 0087156e: mov ebx, edx */ r_ebx = r_edx;
    /* 00871570: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00871574: sbb ebx, edi */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871576: jl 0x871460 */ if ((fS!=fO)) goto L_00871460;
L_0087157c:; BB(0x0087157c);
    /* 0087157c: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00871580: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00871584: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_00871588:; BB(0x00871588);
    /* 00871588: mov edx, ecx */ r_edx = r_ecx;
    /* 0087158a: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 0087158d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00871591: lea ebp, [ecx + 1] */ r_ebp = (u32)(r_ecx+0x1u);
    /* 00871594: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00871596: je 0x871404 */ if (fZ) goto L_00871404;
L_0087159c:; BB(0x0087159c);
    /* 0087159c: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008715a0: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 008715a4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008715a8: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 008715ac: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008715b0: mov eax, esi */ r_eax = r_esi;
    /* 008715b2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008715b6: call 0x870b50 */ r_esp -= 4; W32(r_esp, 0x8715bbu); f_00870b50();
    /* 008715bb: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008715be: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 008715c1: add eax, 0x2134 */ {  u32 a = r_eax; u32 b = 0x2134u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008715c6: adc edi, 0 */ { u32 c = fC; u32 a = r_edi; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 008715c9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 008715cd: mov ebx, eax */ r_ebx = r_eax;
    /* 008715cf: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
L_008715d3:; BB(0x008715d3);
    /* 008715d3: mov edx, edi */ r_edx = r_edi;
    /* 008715d5: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008715d8: jl 0x8715ee */ if ((fS!=fO)) goto L_008715ee;
L_008715da:; BB(0x008715da);
    /* 008715da: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008715dc: je 0x8715ee */ if (fZ) goto L_008715ee;
L_008715de:; BB(0x008715de);
    /* 008715de: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008715e1: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008715e4: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 008715e6: sbb ecx, edi */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008715e8: jge 0x8716f8 */ if ((fS==fO)) goto L_008716f8;
L_008715ee:; BB(0x008715ee);
    /* 008715ee: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008715f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008715f3: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008715f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008715f8: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x8715fdu); f_00876198();
    /* 008715fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871602: jl 0x8716e2 */ if ((fS!=fO)) goto L_008716e2;
L_00871608:; BB(0x00871608);
    /* 00871608: jne 0x8716cf */ if (!fZ) goto L_008716cf;
L_0087160e:; BB(0x0087160e);
    /* 0087160e: mov edx, ebx */ r_edx = r_ebx;
    /* 00871610: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00871612: je 0x87167d */ if (fZ) goto L_0087167d;
L_00871614:; BB(0x00871614);
    /* 00871614: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871619u); f_00859dd6();
    /* 00871619: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0087161f: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871622: je 0x87166f */ if (fZ) goto L_0087166f;
L_00871624:; BB(0x00871624);
    /* 00871624: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871629: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0087162d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087162e: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x871633u); f_008760f8();
    /* 00871633: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00871635: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 0087163a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0087163c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087163d: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x871643u); call_ind(t); }
    /* 00871643: mov ebp, eax */ r_ebp = r_eax;
    /* 00871645: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871648: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087164a: jle 0x87165c */ if ((fZ||fS!=fO)) goto L_0087165c;
L_0087164c:; BB(0x0087164c);
    /* 0087164c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087164d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00871651: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871652: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x871657u); f_0087617c();
    /* 00871657: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087165a: jmp 0x871671 */ goto L_00871671;
L_0087165c:; BB(0x0087165c);
    /* 0087165c: jne 0x871671 */ if (!fZ) goto L_00871671;
L_0087165e:; BB(0x0087165e);
    /* 0087165e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871663u); f_00859dd6();
    /* 00871663: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871666: je 0x871671 */ if (fZ) goto L_00871671;
L_00871668:; BB(0x00871668);
    /* 00871668: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0087166d: jmp 0x871671 */ goto L_00871671;
L_0087166f:; BB(0x0087166f);
    /* 0087166f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00871671:; BB(0x00871671);
    /* 00871671: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871673: je 0x8716c8 */ if (fZ) goto L_008716c8;
L_00871675:; BB(0x00871675);
    /* 00871675: jge 0x8715d3 */ if ((fS==fO)) goto L_008715d3;
L_0087167b:; BB(0x0087167b);
    /* 0087167b: jmp 0x8716c1 */ goto L_008716c1;
L_0087167d:; BB(0x0087167d);
    /* 0087167d: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00871682:; BB(0x00871682);
    /* 00871682: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871685: jl 0x871753 */ if ((fS!=fO)) goto L_00871753;
L_0087168b:; BB(0x0087168b);
    /* 0087168b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0087168f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00871693: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871696: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871698: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871699: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087169a: ret  */ FN_RET(0x008713c8); r_esp += 4; return;
L_0087169b:; BB(0x0087169b);
    /* 0087169b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0087169f: mov ebx, 0xffffff80 */ r_ebx = 0xffffff80u;
    /* 008716a4: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 008716a9: jmp 0x87153e */ goto L_0087153e;
L_008716ae:; BB(0x008716ae);
    /* 008716ae: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008716b2: mov ebx, 0xfffffffe */ r_ebx = 0xfffffffeu;
    /* 008716b7: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 008716bc: jmp 0x87153e */ goto L_0087153e;
L_008716c1:; BB(0x008716c1);
    /* 008716c1: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008716c6: jmp 0x871682 */ goto L_00871682;
L_008716c8:; BB(0x008716c8);
    /* 008716c8: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008716cd: jmp 0x871682 */ goto L_00871682;
L_008716cf:; BB(0x008716cf);
    /* 008716cf: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008716d2: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 008716d5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008716d6: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008716d8: adc edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008716da: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008716dd: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 008716e0: jmp 0x871682 */ goto L_00871682;
L_008716e2:; BB(0x008716e2);
    /* 008716e2: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008716e5: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 008716e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008716e9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008716eb: sbb ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 008716ed: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 008716f0: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 008716f3: jmp 0x8715d3 */ goto L_008715d3;
L_008716f8:; BB(0x008716f8);
    /* 008716f8: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008716fd: jmp 0x871682 */ goto L_00871682;
L_008716ff:; BB(0x008716ff);
    /* 008716ff: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00871703: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00871707: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0087170b: jmp 0x871588 */ goto L_00871588;
L_00871710:; BB(0x00871710);
    /* 00871710: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00871714: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00871717: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 0087171a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087171b: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0087171d: adc edx, ebp */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0087171f: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00871722: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00871725: jmp 0x87153e */ goto L_0087153e;
L_0087172a:; BB(0x0087172a);
    /* 0087172a: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087172d: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00871730: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871731: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00871733: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00871735: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00871738: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 0087173b: jmp 0x87147f */ goto L_0087147f;
L_00871740:; BB(0x00871740);
    /* 00871740: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00871744: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00871749: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0087174e: jmp 0x87153e */ goto L_0087153e;
L_00871753:; BB(0x00871753);
    /* 00871753: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00871758: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0087175d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871760: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871762: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871764: ret  */ FN_RET(0x008713c8); r_esp += 4; return;
L_00871765:; BB(0x00871765);
    /* 00871765: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 0087176a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0087176f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871772: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871773: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871774: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871775: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871776: ret  */ FN_RET(0x008713c8); r_esp += 4; return;
}

void f_00871778(void) /* sub_871778 */
{
    FN_ENTER(0x00871778);
    /* 00871778: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0087177c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087177d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087177e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087177f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871780: sub esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00871786: mov esi, eax */ r_esi = r_eax;
    /* 00871788: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 0087178b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087178e: jl 0x8717c4 */ if ((fS!=fO)) goto L_008717c4;
L_00871790:; BB(0x00871790);
    /* 00871790: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871794: je 0x871aa6 */ if (fZ) goto L_00871aa6;
L_0087179a:; BB(0x0087179a);
    /* 0087179a: mov edx, dword ptr [esp + 0x1d8] */ r_edx = R32((u32)(r_esp+0x1d8u));
    /* 008717a1: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008717a4: jl 0x8717c4 */ if ((fS!=fO)) goto L_008717c4;
L_008717a6:; BB(0x008717a6);
    /* 008717a6: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 008717a9: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008717ac: mov ebx, dword ptr [esp + 0x1d4] */ r_ebx = R32((u32)(r_esp+0x1d4u));
    /* 008717b3: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 008717b5: mov edx, dword ptr [esp + 0x1d8] */ r_edx = R32((u32)(r_esp+0x1d8u));
    /* 008717bc: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008717be: jl 0x8717d4 */ if ((fS!=fO)) goto L_008717d4;
L_008717c0:; BB(0x008717c0);
    /* 008717c0: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008717c2: je 0x8717d4 */ if (fZ) goto L_008717d4;
L_008717c4:; BB(0x008717c4);
    /* 008717c4: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 008717c9: add esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008717cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008717d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008717d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008717d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008717d3: ret  */ FN_RET(0x00871778); r_esp += 4; return;
L_008717d4:; BB(0x008717d4);
    /* 008717d4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008717d9: lea ebx, [esi + 0x78] */ r_ebx = (u32)(r_esi+0x78u);
    /* 008717dc: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 008717df: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 008717e2: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008717e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008717e6: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x8717ebu); f_0087696c();
    /* 008717eb: lea edi, [esi + 0x1e0] */ r_edi = (u32)(r_esi+0x1e0u);
    /* 008717f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008717f2: call 0x875ac0 */ r_esp -= 4; W32(r_esp, 0x8717f7u); f_00875ac0();
    /* 008717f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008717fa: mov edx, dword ptr [esp + 0x1d4] */ r_edx = R32((u32)(r_esp+0x1d4u));
    /* 00871801: mov ecx, dword ptr [esp + 0x1d8] */ r_ecx = R32((u32)(r_esp+0x1d8u));
    /* 00871808: mov eax, esi */ r_eax = r_esi;
    /* 0087180a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0087180e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00871812: call 0x870b50 */ r_esp -= 4; W32(r_esp, 0x871817u); f_00870b50();
    /* 00871817: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00871819: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0087181d: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00871821: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00871823: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00871826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871827: call 0x876be4 */ r_esp -= 4; W32(r_esp, 0x87182cu); f_00876be4();
    /* 0087182c: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00871830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871831: call 0x876988 */ r_esp -= 4; W32(r_esp, 0x871836u); f_00876988();
    /* 00871836: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871839: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 0087183c: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087183f: jl 0x871cfe */ if ((fS!=fO)) goto L_00871cfe;
L_00871845:; BB(0x00871845);
    /* 00871845: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00871849: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0087184d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00871851: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_00871855:; BB(0x00871855);
    /* 00871855: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00871859: lea edx, [esp + 0x18c] */ r_edx = (u32)(r_esp+0x18cu);
    /* 00871860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871862: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871867u); f_008769d4();
    /* 00871867: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087186a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087186c: jle 0x871cf1 */ if ((fZ||fS!=fO)) goto L_00871cf1;
L_00871872:; BB(0x00871872);
    /* 00871872: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00871875: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871877: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871879: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087187b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087187d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087187f: add ecx, dword ptr [esi + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871882: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871886: je 0x871cd5 */ if (fZ) goto L_00871cd5;
L_0087188c:; BB(0x0087188c);
    /* 0087188c: lea edx, [esp + 0x18c] */ r_edx = (u32)(r_esp+0x18cu);
    /* 00871893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871895: call 0x877960 */ r_esp -= 4; W32(r_esp, 0x87189au); f_00877960();
    /* 0087189a: mov ebx, eax */ r_ebx = r_eax;
    /* 0087189c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087189f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008718a1: jl 0x871cbf */ if ((fS!=fO)) goto L_00871cbf;
L_008718a7:; BB(0x008718a7);
    /* 008718a7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008718ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008718ad: jne 0x8718bc */ if (!fZ) goto L_008718bc;
L_008718af:; BB(0x008718af);
    /* 008718af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008718b1: je 0x8718cb */ if (fZ) goto L_008718cb;
L_008718b3:; BB(0x008718b3);
    /* 008718b3: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008718b5: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008718b8: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008718ba: jmp 0x8718cb */ goto L_008718cb;
L_008718bc:; BB(0x008718bc);
    /* 008718bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008718be: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008718c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008718c3: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x8718c8u); f_008769d4();
    /* 008718c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008718cb:; BB(0x008718cb);
    /* 008718cb: mov edi, dword ptr [esp + 0x19c] */ r_edi = R32((u32)(r_esp+0x19cu));
    /* 008718d2: mov ecx, dword ptr [esp + 0x1a0] */ r_ecx = R32((u32)(r_esp+0x1a0u));
    /* 008718d9: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 008718dc: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 008718df: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008718e1: je 0x8719c0 */ if (fZ) goto L_008719c0;
L_008718e7:; BB(0x008718e7);
    /* 008718e7: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 008718ea: mov ebx, dword ptr [esi + 0x44] */ r_ebx = R32((u32)(r_esi+0x44u));
    /* 008718ed: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008718f0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008718f4: mov edx, dword ptr [ebx + eax*8] */ r_edx = R32((u32)(r_ebx+r_eax*8));
    /* 008718f7: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008718fb: mov ebx, dword ptr [ebx + eax*8 + 4] */ r_ebx = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 008718ff: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00871901: sbb ecx, ebx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00871903: mov edx, ecx */ r_edx = r_ecx;
    /* 00871905: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00871909: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087190c: jge 0x871912 */ if ((fS==fO)) goto L_00871912;
L_0087190e:; BB(0x0087190e);
    /* 0087190e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00871910: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00871912:; BB(0x00871912);
    /* 00871912: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00871914: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871916: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0087191a: jle 0x8719b1 */ if ((fZ||fS!=fO)) goto L_008719b1;
L_00871920:; BB(0x00871920);
    /* 00871920: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871923: jl 0x87198b */ if ((fS!=fO)) goto L_0087198b;
L_00871925:; BB(0x00871925);
    /* 00871925: lea edx, [ebx - 6] */ r_edx = (u32)(r_ebx+0xfffffffau);
    /* 00871928: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0087192c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00871930: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00871934: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00871937: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00871939: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087193b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087193d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871941: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00871945: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00871949: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0087194d:; BB(0x0087194d);
    /* 0087194d: add edi, dword ptr [edx + eax + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871951: adc ecx, dword ptr [edx + eax + 0xc] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0xcu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871955: add edi, dword ptr [edx + eax + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871959: adc ecx, dword ptr [edx + eax + 0x1c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x1cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0087195d: add edi, dword ptr [edx + eax + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871961: adc ecx, dword ptr [edx + eax + 0x2c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x2cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871965: add edi, dword ptr [edx + eax + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871969: adc ecx, dword ptr [edx + eax + 0x3c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x3cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0087196d: add edi, dword ptr [edx + eax + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871971: adc ecx, dword ptr [edx + eax + 0x4c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x4cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871975: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00871978: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087197b: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087197d: jle 0x87194d */ if ((fZ||fS!=fO)) goto L_0087194d;
L_0087197f:; BB(0x0087197f);
    /* 0087197f: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00871983: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00871987: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0087198b:; BB(0x0087198b);
    /* 0087198b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0087198f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00871992: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871994: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871996: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871998: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0087199c: lea edx, [edx + eax + 8] */ r_edx = (u32)(r_edx+r_eax+0x8u);
    /* 008719a0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_008719a4:; BB(0x008719a4);
    /* 008719a4: add edi, dword ptr [edx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008719a6: adc ecx, dword ptr [edx + 4] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 008719a9: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008719ac: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008719ad: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008719af: jl 0x8719a4 */ if ((fS!=fO)) goto L_008719a4;
L_008719b1:; BB(0x008719b1);
    /* 008719b1: mov eax, ebp */ r_eax = r_ebp;
    /* 008719b3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008719b4: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 008719b6: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008719b8: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 008719bb: mov dword ptr [esi + 0x54], ecx */ W32((u32)(r_esi+0x54u), r_ecx);
    /* 008719be: jmp 0x8719e9 */ goto L_008719e9;
L_008719c0:; BB(0x008719c0);
    /* 008719c0: mov edi, ebx */ r_edi = r_ebx;
    /* 008719c2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008719c6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008719ca: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
L_008719ce:; BB(0x008719ce);
    /* 008719ce: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 008719d1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008719d4: jge 0x871a95 */ if ((fS==fO)) goto L_00871a95;
L_008719da:; BB(0x008719da);
    /* 008719da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008719dc: je 0x871a0c */ if (fZ) goto L_00871a0c;
L_008719de:; BB(0x008719de);
    /* 008719de: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008719e3: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 008719e6: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
L_008719e9:; BB(0x008719e9);
    /* 008719e9: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 008719ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008719ee: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x8719f3u); f_00876024();
    /* 008719f3: fld qword ptr [0x99a650] */ FPUSH(R_F64((u32)(0x99a650u)));
    /* 008719f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008719fb: fst qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0));
    /* 008719fe: fstp qword ptr [esi + 0x70] */ W_F64((u32)(r_esi+0x70u), ST(0)); FPOP();
    /* 00871a01: add esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871a07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871a08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871a09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871a0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871a0b: ret  */ FN_RET(0x00871778); r_esp += 4; return;
L_00871a0c:; BB(0x00871a0c);
    /* 00871a0c: lea eax, [esp + 0x1ac] */ r_eax = (u32)(r_esp+0x1acu);
    /* 00871a13: lea ebp, [esi + 0x18] */ r_ebp = (u32)(r_esi+0x18u);
    /* 00871a16: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00871a1a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00871a1e: mov ebx, eax */ r_ebx = r_eax;
L_00871a20:; BB(0x00871a20);
    /* 00871a20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871a21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871a22: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x871a27u); f_00876198();
    /* 00871a27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871a2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871a2c: jl 0x871ca9 */ if ((fS!=fO)) goto L_00871ca9;
L_00871a32:; BB(0x00871a32);
    /* 00871a32: jne 0x871b1d */ if (!fZ) goto L_00871b1d;
L_00871a38:; BB(0x00871a38);
    /* 00871a38: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871a3du); f_00859dd6();
    /* 00871a3d: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00871a43: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871a46: je 0x871a8b */ if (fZ) goto L_00871a8b;
L_00871a48:; BB(0x00871a48);
    /* 00871a48: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871a4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871a4e: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x871a53u); f_008760f8();
    /* 00871a53: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00871a55: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871a5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00871a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871a5d: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x871a63u); call_ind(t); }
    /* 00871a63: mov edi, eax */ r_edi = r_eax;
    /* 00871a65: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871a68: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871a6a: jle 0x871a78 */ if ((fZ||fS!=fO)) goto L_00871a78;
L_00871a6c:; BB(0x00871a6c);
    /* 00871a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00871a6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871a6e: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x871a73u); f_0087617c();
    /* 00871a73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871a76: jmp 0x871a8d */ goto L_00871a8d;
L_00871a78:; BB(0x00871a78);
    /* 00871a78: jne 0x871a8d */ if (!fZ) goto L_00871a8d;
L_00871a7a:; BB(0x00871a7a);
    /* 00871a7a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871a7fu); f_00859dd6();
    /* 00871a7f: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871a82: je 0x871a8d */ if (fZ) goto L_00871a8d;
L_00871a84:; BB(0x00871a84);
    /* 00871a84: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00871a89: jmp 0x871a8d */ goto L_00871a8d;
L_00871a8b:; BB(0x00871a8b);
    /* 00871a8b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00871a8d:; BB(0x00871a8d);
    /* 00871a8d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871a8f: je 0x871ab6 */ if (fZ) goto L_00871ab6;
L_00871a91:; BB(0x00871a91);
    /* 00871a91: jge 0x871a20 */ if ((fS==fO)) goto L_00871a20;
L_00871a93:; BB(0x00871a93);
    /* 00871a93: jmp 0x871ab6 */ goto L_00871ab6;
L_00871a95:; BB(0x00871a95);
    /* 00871a95: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00871a99: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00871a9d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00871aa1: jmp 0x871855 */ goto L_00871855;
L_00871aa6:; BB(0x00871aa6);
    /* 00871aa6: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 00871aab: add esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871ab1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871ab3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871ab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871ab5: ret  */ FN_RET(0x00871778); r_esp += 4; return;
L_00871ab6:; BB(0x00871ab6);
    /* 00871ab6: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00871ab9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871abc: jl 0x871b08 */ if ((fS!=fO)) goto L_00871b08;
L_00871abe:; BB(0x00871abe);
    /* 00871abe: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871ac2: je 0x871afc */ if (fZ) goto L_00871afc;
L_00871ac4:; BB(0x00871ac4);
    /* 00871ac4: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00871ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871ac9: jl 0x871afc */ if ((fS!=fO)) goto L_00871afc;
L_00871acb:; BB(0x00871acb);
    /* 00871acb: mov ebp, 0 */ r_ebp = 0x0u;
    /* 00871ad0: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00871ad5: mov edi, 0 */ r_edi = 0x0u;
    /* 00871ada: jle 0x871b12 */ if ((fZ||fS!=fO)) goto L_00871b12;
L_00871adc:; BB(0x00871adc);
    /* 00871adc: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00871ae0: mov esi, eax */ r_esi = r_eax;
L_00871ae2:; BB(0x00871ae2);
    /* 00871ae2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00871ae6: mov edx, edi */ r_edx = r_edi;
    /* 00871ae8: call 0x873318 */ r_esp -= 4; W32(r_esp, 0x871aedu); f_00873318();
    /* 00871aed: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00871aee: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00871af0: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00871af2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871af4: jl 0x871ae2 */ if ((fS!=fO)) goto L_00871ae2;
L_00871af6:; BB(0x00871af6);
    /* 00871af6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871afa: jmp 0x871b12 */ goto L_00871b12;
L_00871afc:; BB(0x00871afc);
    /* 00871afc: mov ebp, 0xffffff7d */ r_ebp = 0xffffff7du;
    /* 00871b01: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00871b06: jmp 0x871b12 */ goto L_00871b12;
L_00871b08:; BB(0x00871b08);
    /* 00871b08: mov ebp, 0xffffff7d */ r_ebp = 0xffffff7du;
    /* 00871b0d: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00871b12:; BB(0x00871b12);
    /* 00871b12: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 00871b15: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 00871b18: jmp 0x8719e9 */ goto L_008719e9;
L_00871b1d:; BB(0x00871b1d);
    /* 00871b1d: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00871b21: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871b25: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871b28: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 00871b2b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871b2c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00871b2e: adc edx, ebp */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00871b30: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00871b33: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00871b36: sub ebp, 0 */ {  u32 a = r_ebp; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871b39: jl 0x871ab6 */ if ((fS!=fO)) goto L_00871ab6;
L_00871b3f:; BB(0x00871b3f);
    /* 00871b3f: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00871b42: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871b45: jl 0x871b8c */ if ((fS!=fO)) goto L_00871b8c;
L_00871b47:; BB(0x00871b47);
    /* 00871b47: lea edx, [esp + 0x1ac] */ r_edx = (u32)(r_esp+0x1acu);
    /* 00871b4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b4f: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x871b54u); f_00875ffc();
    /* 00871b54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00871b55: cmp eax, dword ptr [esi + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871b58: jne 0x871b5f */ if (!fZ) goto L_00871b5f;
L_00871b5a:; BB(0x00871b5a);
    /* 00871b5a: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00871b5d: jmp 0x871b8c */ goto L_00871b8c;
L_00871b5f:; BB(0x00871b5f);
    /* 00871b5f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00871b63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b64: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x871b69u); f_00873fc4();
    /* 00871b69: lea edx, [esi + 0x250] */ r_edx = (u32)(r_esi+0x250u);
    /* 00871b6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b70: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x871b75u); f_00873ec4();
    /* 00871b75: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
    /* 00871b7c: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00871b80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b81: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x871b86u); f_00876024();
    /* 00871b86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871b89: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
L_00871b8c:; BB(0x00871b8c);
    /* 00871b8c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871b8f: jge 0x871c5a */ if ((fS==fO)) goto L_00871c5a;
L_00871b95:; BB(0x00871b95);
    /* 00871b95: lea edx, [esp + 0x1ac] */ r_edx = (u32)(r_esp+0x1acu);
    /* 00871b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b9d: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x871ba2u); f_00875ffc();
    /* 00871ba2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00871ba3: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00871ba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00871ba8: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 00871bab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871bad: jle 0x871c06 */ if ((fZ||fS!=fO)) goto L_00871c06;
L_00871baf:; BB(0x00871baf);
    /* 00871baf: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871bb2: jl 0x871c98 */ if ((fS!=fO)) goto L_00871c98;
L_00871bb8:; BB(0x00871bb8);
    /* 00871bb8: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00871bbb: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_00871bbf:; BB(0x00871bbf);
    /* 00871bbf: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bc2: je 0x871c8f */ if (fZ) goto L_00871c8f;
L_00871bc8:; BB(0x00871bc8);
    /* 00871bc8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bc9: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bcc: je 0x871d21 */ if (fZ) goto L_00871d21;
L_00871bd2:; BB(0x00871bd2);
    /* 00871bd2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bd3: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bd6: je 0x871d18 */ if (fZ) goto L_00871d18;
L_00871bdc:; BB(0x00871bdc);
    /* 00871bdc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bdd: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871be0: je 0x871d0f */ if (fZ) goto L_00871d0f;
L_00871be6:; BB(0x00871be6);
    /* 00871be6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871be7: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bea: je 0x871ca0 */ if (fZ) goto L_00871ca0;
L_00871bf0:; BB(0x00871bf0);
    /* 00871bf0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bf1: lea esi, [ebp - 6] */ r_esi = (u32)(r_ebp+0xfffffffau);
    /* 00871bf4: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871bf6: jle 0x871bbf */ if ((fZ||fS!=fO)) goto L_00871bbf;
L_00871bf8:; BB(0x00871bf8);
    /* 00871bf8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00871bfc:; BB(0x00871bfc);
    /* 00871bfc: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bff: je 0x871c06 */ if (fZ) goto L_00871c06;
L_00871c01:; BB(0x00871c01);
    /* 00871c01: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871c02: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871c04: jl 0x871bfc */ if ((fS!=fO)) goto L_00871bfc;
L_00871c06:; BB(0x00871c06);
    /* 00871c06: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871c08: je 0x871c2d */ if (fZ) goto L_00871c2d;
L_00871c0a:; BB(0x00871c0a);
    /* 00871c0a: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00871c0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871c0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c0f: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x871c14u); f_0087696c();
    /* 00871c14: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00871c18: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00871c1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c1c: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x871c21u); f_0087696c();
    /* 00871c21: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871c24: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 00871c2b: jmp 0x871c5a */ goto L_00871c5a;
L_00871c2d:; BB(0x00871c2d);
    /* 00871c2d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00871c32: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00871c36: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 00871c39: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 00871c3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c3d: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x871c42u); f_00876024();
    /* 00871c42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00871c43: mov eax, esi */ r_eax = r_esi;
    /* 00871c45: call 0x8733b0 */ r_esp -= 4; W32(r_esp, 0x871c4au); f_008733b0();
    /* 00871c4a: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00871c4f: add esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871c55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871c57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871c58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871c59: ret  */ FN_RET(0x00871778); r_esp += 4; return;
L_00871c5a:; BB(0x00871c5a);
    /* 00871c5a: lea edx, [esp + 0x1ac] */ r_edx = (u32)(r_esp+0x1acu);
    /* 00871c61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c63: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x871c68u); f_0087658c();
    /* 00871c68: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00871c6c: lea edx, [esp + 0x1b4] */ r_edx = (u32)(r_esp+0x1b4u);
    /* 00871c73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c75: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x871c7au); f_0087658c();
    /* 00871c7a: lea edx, [esp + 0x1bc] */ r_edx = (u32)(r_esp+0x1bcu);
    /* 00871c81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c82: call 0x875fec */ r_esp -= 4; W32(r_esp, 0x871c87u); f_00875fec();
    /* 00871c87: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871c8a: jmp 0x8719ce */ goto L_008719ce;
L_00871c8f:; BB(0x00871c8f);
    /* 00871c8f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871c93: jmp 0x871c06 */ goto L_00871c06;
L_00871c98:; BB(0x00871c98);
    /* 00871c98: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00871c9b: jmp 0x871bfc */ goto L_00871bfc;
L_00871ca0:; BB(0x00871ca0);
    /* 00871ca0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871ca4: jmp 0x871c06 */ goto L_00871c06;
L_00871ca9:; BB(0x00871ca9);
    /* 00871ca9: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871cac: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00871caf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871cb0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00871cb2: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00871cb4: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00871cb7: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00871cba: jmp 0x871a20 */ goto L_00871a20;
L_00871cbf:; BB(0x00871cbf);
    /* 00871cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871cc1: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00871cc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871cc6: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871ccbu); f_008769d4();
    /* 00871ccb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871cce: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00871cd0: jmp 0x8718cb */ goto L_008718cb;
L_00871cd5:; BB(0x00871cd5);
    /* 00871cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871cd7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00871cdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871cdc: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871ce1u); f_008769d4();
    /* 00871ce1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871ce4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871ce8: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871cec: jmp 0x8719da */ goto L_008719da;
L_00871cf1:; BB(0x00871cf1);
    /* 00871cf1: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871cf5: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871cf9: jmp 0x8719da */ goto L_008719da;
L_00871cfe:; BB(0x00871cfe);
    /* 00871cfe: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871d02: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00871d06: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00871d0a: jmp 0x871a0c */ goto L_00871a0c;
L_00871d0f:; BB(0x00871d0f);
    /* 00871d0f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871d13: jmp 0x871c06 */ goto L_00871c06;
L_00871d18:; BB(0x00871d18);
    /* 00871d18: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871d1c: jmp 0x871c06 */ goto L_00871c06;
L_00871d21:; BB(0x00871d21);
    /* 00871d21: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871d25: jmp 0x871c06 */ goto L_00871c06;
}

void f_0087177c(void) /* sub_87177C */
{
    FN_ENTER(0x0087177c);
    /* 0087177c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087177d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087177e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087177f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871780: sub esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00871786: mov esi, eax */ r_esi = r_eax;
    /* 00871788: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 0087178b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087178e: jl 0x8717c4 */ if ((fS!=fO)) goto L_008717c4;
L_00871790:; BB(0x00871790);
    /* 00871790: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871794: je 0x871aa6 */ if (fZ) goto L_00871aa6;
L_0087179a:; BB(0x0087179a);
    /* 0087179a: mov edx, dword ptr [esp + 0x1d8] */ r_edx = R32((u32)(r_esp+0x1d8u));
    /* 008717a1: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008717a4: jl 0x8717c4 */ if ((fS!=fO)) goto L_008717c4;
L_008717a6:; BB(0x008717a6);
    /* 008717a6: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 008717a9: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008717ac: mov ebx, dword ptr [esp + 0x1d4] */ r_ebx = R32((u32)(r_esp+0x1d4u));
    /* 008717b3: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 008717b5: mov edx, dword ptr [esp + 0x1d8] */ r_edx = R32((u32)(r_esp+0x1d8u));
    /* 008717bc: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008717be: jl 0x8717d4 */ if ((fS!=fO)) goto L_008717d4;
L_008717c0:; BB(0x008717c0);
    /* 008717c0: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008717c2: je 0x8717d4 */ if (fZ) goto L_008717d4;
L_008717c4:; BB(0x008717c4);
    /* 008717c4: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 008717c9: add esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008717cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008717d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008717d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008717d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008717d3: ret  */ FN_RET(0x0087177c); r_esp += 4; return;
L_008717d4:; BB(0x008717d4);
    /* 008717d4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008717d9: lea ebx, [esi + 0x78] */ r_ebx = (u32)(r_esi+0x78u);
    /* 008717dc: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 008717df: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 008717e2: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008717e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008717e6: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x8717ebu); f_0087696c();
    /* 008717eb: lea edi, [esi + 0x1e0] */ r_edi = (u32)(r_esi+0x1e0u);
    /* 008717f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008717f2: call 0x875ac0 */ r_esp -= 4; W32(r_esp, 0x8717f7u); f_00875ac0();
    /* 008717f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008717fa: mov edx, dword ptr [esp + 0x1d4] */ r_edx = R32((u32)(r_esp+0x1d4u));
    /* 00871801: mov ecx, dword ptr [esp + 0x1d8] */ r_ecx = R32((u32)(r_esp+0x1d8u));
    /* 00871808: mov eax, esi */ r_eax = r_esi;
    /* 0087180a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0087180e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00871812: call 0x870b50 */ r_esp -= 4; W32(r_esp, 0x871817u); f_00870b50();
    /* 00871817: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00871819: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0087181d: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00871821: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00871823: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00871826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871827: call 0x876be4 */ r_esp -= 4; W32(r_esp, 0x87182cu); f_00876be4();
    /* 0087182c: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00871830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871831: call 0x876988 */ r_esp -= 4; W32(r_esp, 0x871836u); f_00876988();
    /* 00871836: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871839: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 0087183c: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087183f: jl 0x871cfe */ if ((fS!=fO)) goto L_00871cfe;
L_00871845:; BB(0x00871845);
    /* 00871845: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00871849: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0087184d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00871851: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_00871855:; BB(0x00871855);
    /* 00871855: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00871859: lea edx, [esp + 0x18c] */ r_edx = (u32)(r_esp+0x18cu);
    /* 00871860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871862: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871867u); f_008769d4();
    /* 00871867: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087186a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087186c: jle 0x871cf1 */ if ((fZ||fS!=fO)) goto L_00871cf1;
L_00871872:; BB(0x00871872);
    /* 00871872: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00871875: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871877: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871879: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087187b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087187d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087187f: add ecx, dword ptr [esi + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871882: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871886: je 0x871cd5 */ if (fZ) goto L_00871cd5;
L_0087188c:; BB(0x0087188c);
    /* 0087188c: lea edx, [esp + 0x18c] */ r_edx = (u32)(r_esp+0x18cu);
    /* 00871893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871895: call 0x877960 */ r_esp -= 4; W32(r_esp, 0x87189au); f_00877960();
    /* 0087189a: mov ebx, eax */ r_ebx = r_eax;
    /* 0087189c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087189f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008718a1: jl 0x871cbf */ if ((fS!=fO)) goto L_00871cbf;
L_008718a7:; BB(0x008718a7);
    /* 008718a7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008718ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008718ad: jne 0x8718bc */ if (!fZ) goto L_008718bc;
L_008718af:; BB(0x008718af);
    /* 008718af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008718b1: je 0x8718cb */ if (fZ) goto L_008718cb;
L_008718b3:; BB(0x008718b3);
    /* 008718b3: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008718b5: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008718b8: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008718ba: jmp 0x8718cb */ goto L_008718cb;
L_008718bc:; BB(0x008718bc);
    /* 008718bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008718be: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008718c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008718c3: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x8718c8u); f_008769d4();
    /* 008718c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008718cb:; BB(0x008718cb);
    /* 008718cb: mov edi, dword ptr [esp + 0x19c] */ r_edi = R32((u32)(r_esp+0x19cu));
    /* 008718d2: mov ecx, dword ptr [esp + 0x1a0] */ r_ecx = R32((u32)(r_esp+0x1a0u));
    /* 008718d9: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 008718dc: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 008718df: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008718e1: je 0x8719c0 */ if (fZ) goto L_008719c0;
L_008718e7:; BB(0x008718e7);
    /* 008718e7: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 008718ea: mov ebx, dword ptr [esi + 0x44] */ r_ebx = R32((u32)(r_esi+0x44u));
    /* 008718ed: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008718f0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008718f4: mov edx, dword ptr [ebx + eax*8] */ r_edx = R32((u32)(r_ebx+r_eax*8));
    /* 008718f7: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008718fb: mov ebx, dword ptr [ebx + eax*8 + 4] */ r_ebx = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 008718ff: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00871901: sbb ecx, ebx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00871903: mov edx, ecx */ r_edx = r_ecx;
    /* 00871905: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00871909: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087190c: jge 0x871912 */ if ((fS==fO)) goto L_00871912;
L_0087190e:; BB(0x0087190e);
    /* 0087190e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00871910: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00871912:; BB(0x00871912);
    /* 00871912: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00871914: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871916: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0087191a: jle 0x8719b1 */ if ((fZ||fS!=fO)) goto L_008719b1;
L_00871920:; BB(0x00871920);
    /* 00871920: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871923: jl 0x87198b */ if ((fS!=fO)) goto L_0087198b;
L_00871925:; BB(0x00871925);
    /* 00871925: lea edx, [ebx - 6] */ r_edx = (u32)(r_ebx+0xfffffffau);
    /* 00871928: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0087192c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00871930: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00871934: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00871937: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00871939: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087193b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087193d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871941: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00871945: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00871949: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0087194d:; BB(0x0087194d);
    /* 0087194d: add edi, dword ptr [edx + eax + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871951: adc ecx, dword ptr [edx + eax + 0xc] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0xcu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871955: add edi, dword ptr [edx + eax + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871959: adc ecx, dword ptr [edx + eax + 0x1c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x1cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0087195d: add edi, dword ptr [edx + eax + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871961: adc ecx, dword ptr [edx + eax + 0x2c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x2cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871965: add edi, dword ptr [edx + eax + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871969: adc ecx, dword ptr [edx + eax + 0x3c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x3cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0087196d: add edi, dword ptr [edx + eax + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_eax+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871971: adc ecx, dword ptr [edx + eax + 0x4c] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x4cu)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00871975: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00871978: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087197b: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087197d: jle 0x87194d */ if ((fZ||fS!=fO)) goto L_0087194d;
L_0087197f:; BB(0x0087197f);
    /* 0087197f: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00871983: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00871987: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0087198b:; BB(0x0087198b);
    /* 0087198b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0087198f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00871992: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871994: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871996: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871998: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0087199c: lea edx, [edx + eax + 8] */ r_edx = (u32)(r_edx+r_eax+0x8u);
    /* 008719a0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_008719a4:; BB(0x008719a4);
    /* 008719a4: add edi, dword ptr [edx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008719a6: adc ecx, dword ptr [edx + 4] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 008719a9: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008719ac: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008719ad: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008719af: jl 0x8719a4 */ if ((fS!=fO)) goto L_008719a4;
L_008719b1:; BB(0x008719b1);
    /* 008719b1: mov eax, ebp */ r_eax = r_ebp;
    /* 008719b3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008719b4: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 008719b6: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008719b8: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 008719bb: mov dword ptr [esi + 0x54], ecx */ W32((u32)(r_esi+0x54u), r_ecx);
    /* 008719be: jmp 0x8719e9 */ goto L_008719e9;
L_008719c0:; BB(0x008719c0);
    /* 008719c0: mov edi, ebx */ r_edi = r_ebx;
    /* 008719c2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008719c6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008719ca: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
L_008719ce:; BB(0x008719ce);
    /* 008719ce: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 008719d1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008719d4: jge 0x871a95 */ if ((fS==fO)) goto L_00871a95;
L_008719da:; BB(0x008719da);
    /* 008719da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008719dc: je 0x871a0c */ if (fZ) goto L_00871a0c;
L_008719de:; BB(0x008719de);
    /* 008719de: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008719e3: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 008719e6: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
L_008719e9:; BB(0x008719e9);
    /* 008719e9: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 008719ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008719ee: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x8719f3u); f_00876024();
    /* 008719f3: fld qword ptr [0x99a650] */ FPUSH(R_F64((u32)(0x99a650u)));
    /* 008719f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008719fb: fst qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0));
    /* 008719fe: fstp qword ptr [esi + 0x70] */ W_F64((u32)(r_esi+0x70u), ST(0)); FPOP();
    /* 00871a01: add esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871a07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871a08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871a09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871a0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871a0b: ret  */ FN_RET(0x0087177c); r_esp += 4; return;
L_00871a0c:; BB(0x00871a0c);
    /* 00871a0c: lea eax, [esp + 0x1ac] */ r_eax = (u32)(r_esp+0x1acu);
    /* 00871a13: lea ebp, [esi + 0x18] */ r_ebp = (u32)(r_esi+0x18u);
    /* 00871a16: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00871a1a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00871a1e: mov ebx, eax */ r_ebx = r_eax;
L_00871a20:; BB(0x00871a20);
    /* 00871a20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871a21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871a22: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x871a27u); f_00876198();
    /* 00871a27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871a2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871a2c: jl 0x871ca9 */ if ((fS!=fO)) goto L_00871ca9;
L_00871a32:; BB(0x00871a32);
    /* 00871a32: jne 0x871b1d */ if (!fZ) goto L_00871b1d;
L_00871a38:; BB(0x00871a38);
    /* 00871a38: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871a3du); f_00859dd6();
    /* 00871a3d: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00871a43: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871a46: je 0x871a8b */ if (fZ) goto L_00871a8b;
L_00871a48:; BB(0x00871a48);
    /* 00871a48: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871a4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871a4e: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x871a53u); f_008760f8();
    /* 00871a53: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00871a55: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871a5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00871a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871a5d: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x871a63u); call_ind(t); }
    /* 00871a63: mov edi, eax */ r_edi = r_eax;
    /* 00871a65: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871a68: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871a6a: jle 0x871a78 */ if ((fZ||fS!=fO)) goto L_00871a78;
L_00871a6c:; BB(0x00871a6c);
    /* 00871a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00871a6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871a6e: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x871a73u); f_0087617c();
    /* 00871a73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871a76: jmp 0x871a8d */ goto L_00871a8d;
L_00871a78:; BB(0x00871a78);
    /* 00871a78: jne 0x871a8d */ if (!fZ) goto L_00871a8d;
L_00871a7a:; BB(0x00871a7a);
    /* 00871a7a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871a7fu); f_00859dd6();
    /* 00871a7f: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871a82: je 0x871a8d */ if (fZ) goto L_00871a8d;
L_00871a84:; BB(0x00871a84);
    /* 00871a84: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00871a89: jmp 0x871a8d */ goto L_00871a8d;
L_00871a8b:; BB(0x00871a8b);
    /* 00871a8b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00871a8d:; BB(0x00871a8d);
    /* 00871a8d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871a8f: je 0x871ab6 */ if (fZ) goto L_00871ab6;
L_00871a91:; BB(0x00871a91);
    /* 00871a91: jge 0x871a20 */ if ((fS==fO)) goto L_00871a20;
L_00871a93:; BB(0x00871a93);
    /* 00871a93: jmp 0x871ab6 */ goto L_00871ab6;
L_00871a95:; BB(0x00871a95);
    /* 00871a95: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00871a99: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00871a9d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00871aa1: jmp 0x871855 */ goto L_00871855;
L_00871aa6:; BB(0x00871aa6);
    /* 00871aa6: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 00871aab: add esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871ab1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871ab3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871ab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871ab5: ret  */ FN_RET(0x0087177c); r_esp += 4; return;
L_00871ab6:; BB(0x00871ab6);
    /* 00871ab6: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00871ab9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871abc: jl 0x871b08 */ if ((fS!=fO)) goto L_00871b08;
L_00871abe:; BB(0x00871abe);
    /* 00871abe: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871ac2: je 0x871afc */ if (fZ) goto L_00871afc;
L_00871ac4:; BB(0x00871ac4);
    /* 00871ac4: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00871ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871ac9: jl 0x871afc */ if ((fS!=fO)) goto L_00871afc;
L_00871acb:; BB(0x00871acb);
    /* 00871acb: mov ebp, 0 */ r_ebp = 0x0u;
    /* 00871ad0: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00871ad5: mov edi, 0 */ r_edi = 0x0u;
    /* 00871ada: jle 0x871b12 */ if ((fZ||fS!=fO)) goto L_00871b12;
L_00871adc:; BB(0x00871adc);
    /* 00871adc: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00871ae0: mov esi, eax */ r_esi = r_eax;
L_00871ae2:; BB(0x00871ae2);
    /* 00871ae2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00871ae6: mov edx, edi */ r_edx = r_edi;
    /* 00871ae8: call 0x873318 */ r_esp -= 4; W32(r_esp, 0x871aedu); f_00873318();
    /* 00871aed: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00871aee: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00871af0: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00871af2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871af4: jl 0x871ae2 */ if ((fS!=fO)) goto L_00871ae2;
L_00871af6:; BB(0x00871af6);
    /* 00871af6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871afa: jmp 0x871b12 */ goto L_00871b12;
L_00871afc:; BB(0x00871afc);
    /* 00871afc: mov ebp, 0xffffff7d */ r_ebp = 0xffffff7du;
    /* 00871b01: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00871b06: jmp 0x871b12 */ goto L_00871b12;
L_00871b08:; BB(0x00871b08);
    /* 00871b08: mov ebp, 0xffffff7d */ r_ebp = 0xffffff7du;
    /* 00871b0d: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00871b12:; BB(0x00871b12);
    /* 00871b12: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 00871b15: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 00871b18: jmp 0x8719e9 */ goto L_008719e9;
L_00871b1d:; BB(0x00871b1d);
    /* 00871b1d: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00871b21: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871b25: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871b28: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 00871b2b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871b2c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00871b2e: adc edx, ebp */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00871b30: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00871b33: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00871b36: sub ebp, 0 */ {  u32 a = r_ebp; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871b39: jl 0x871ab6 */ if ((fS!=fO)) goto L_00871ab6;
L_00871b3f:; BB(0x00871b3f);
    /* 00871b3f: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00871b42: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871b45: jl 0x871b8c */ if ((fS!=fO)) goto L_00871b8c;
L_00871b47:; BB(0x00871b47);
    /* 00871b47: lea edx, [esp + 0x1ac] */ r_edx = (u32)(r_esp+0x1acu);
    /* 00871b4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b4f: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x871b54u); f_00875ffc();
    /* 00871b54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00871b55: cmp eax, dword ptr [esi + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871b58: jne 0x871b5f */ if (!fZ) goto L_00871b5f;
L_00871b5a:; BB(0x00871b5a);
    /* 00871b5a: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00871b5d: jmp 0x871b8c */ goto L_00871b8c;
L_00871b5f:; BB(0x00871b5f);
    /* 00871b5f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00871b63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b64: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x871b69u); f_00873fc4();
    /* 00871b69: lea edx, [esi + 0x250] */ r_edx = (u32)(r_esi+0x250u);
    /* 00871b6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b70: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x871b75u); f_00873ec4();
    /* 00871b75: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
    /* 00871b7c: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00871b80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b81: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x871b86u); f_00876024();
    /* 00871b86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871b89: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
L_00871b8c:; BB(0x00871b8c);
    /* 00871b8c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871b8f: jge 0x871c5a */ if ((fS==fO)) goto L_00871c5a;
L_00871b95:; BB(0x00871b95);
    /* 00871b95: lea edx, [esp + 0x1ac] */ r_edx = (u32)(r_esp+0x1acu);
    /* 00871b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871b9d: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x871ba2u); f_00875ffc();
    /* 00871ba2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00871ba3: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00871ba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00871ba8: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 00871bab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871bad: jle 0x871c06 */ if ((fZ||fS!=fO)) goto L_00871c06;
L_00871baf:; BB(0x00871baf);
    /* 00871baf: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871bb2: jl 0x871c98 */ if ((fS!=fO)) goto L_00871c98;
L_00871bb8:; BB(0x00871bb8);
    /* 00871bb8: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00871bbb: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_00871bbf:; BB(0x00871bbf);
    /* 00871bbf: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bc2: je 0x871c8f */ if (fZ) goto L_00871c8f;
L_00871bc8:; BB(0x00871bc8);
    /* 00871bc8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bc9: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bcc: je 0x871d21 */ if (fZ) goto L_00871d21;
L_00871bd2:; BB(0x00871bd2);
    /* 00871bd2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bd3: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bd6: je 0x871d18 */ if (fZ) goto L_00871d18;
L_00871bdc:; BB(0x00871bdc);
    /* 00871bdc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bdd: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871be0: je 0x871d0f */ if (fZ) goto L_00871d0f;
L_00871be6:; BB(0x00871be6);
    /* 00871be6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871be7: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bea: je 0x871ca0 */ if (fZ) goto L_00871ca0;
L_00871bf0:; BB(0x00871bf0);
    /* 00871bf0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871bf1: lea esi, [ebp - 6] */ r_esi = (u32)(r_ebp+0xfffffffau);
    /* 00871bf4: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871bf6: jle 0x871bbf */ if ((fZ||fS!=fO)) goto L_00871bbf;
L_00871bf8:; BB(0x00871bf8);
    /* 00871bf8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00871bfc:; BB(0x00871bfc);
    /* 00871bfc: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871bff: je 0x871c06 */ if (fZ) goto L_00871c06;
L_00871c01:; BB(0x00871c01);
    /* 00871c01: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871c02: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871c04: jl 0x871bfc */ if ((fS!=fO)) goto L_00871bfc;
L_00871c06:; BB(0x00871c06);
    /* 00871c06: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871c08: je 0x871c2d */ if (fZ) goto L_00871c2d;
L_00871c0a:; BB(0x00871c0a);
    /* 00871c0a: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00871c0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871c0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c0f: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x871c14u); f_0087696c();
    /* 00871c14: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00871c18: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00871c1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c1c: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x871c21u); f_0087696c();
    /* 00871c21: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871c24: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 00871c2b: jmp 0x871c5a */ goto L_00871c5a;
L_00871c2d:; BB(0x00871c2d);
    /* 00871c2d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00871c32: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00871c36: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 00871c39: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 00871c3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c3d: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x871c42u); f_00876024();
    /* 00871c42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00871c43: mov eax, esi */ r_eax = r_esi;
    /* 00871c45: call 0x8733b0 */ r_esp -= 4; W32(r_esp, 0x871c4au); f_008733b0();
    /* 00871c4a: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00871c4f: add esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871c55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871c57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871c58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871c59: ret  */ FN_RET(0x0087177c); r_esp += 4; return;
L_00871c5a:; BB(0x00871c5a);
    /* 00871c5a: lea edx, [esp + 0x1ac] */ r_edx = (u32)(r_esp+0x1acu);
    /* 00871c61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c63: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x871c68u); f_0087658c();
    /* 00871c68: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00871c6c: lea edx, [esp + 0x1b4] */ r_edx = (u32)(r_esp+0x1b4u);
    /* 00871c73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c75: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x871c7au); f_0087658c();
    /* 00871c7a: lea edx, [esp + 0x1bc] */ r_edx = (u32)(r_esp+0x1bcu);
    /* 00871c81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871c82: call 0x875fec */ r_esp -= 4; W32(r_esp, 0x871c87u); f_00875fec();
    /* 00871c87: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871c8a: jmp 0x8719ce */ goto L_008719ce;
L_00871c8f:; BB(0x00871c8f);
    /* 00871c8f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871c93: jmp 0x871c06 */ goto L_00871c06;
L_00871c98:; BB(0x00871c98);
    /* 00871c98: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00871c9b: jmp 0x871bfc */ goto L_00871bfc;
L_00871ca0:; BB(0x00871ca0);
    /* 00871ca0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871ca4: jmp 0x871c06 */ goto L_00871c06;
L_00871ca9:; BB(0x00871ca9);
    /* 00871ca9: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00871cac: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00871caf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871cb0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00871cb2: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00871cb4: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00871cb7: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00871cba: jmp 0x871a20 */ goto L_00871a20;
L_00871cbf:; BB(0x00871cbf);
    /* 00871cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871cc1: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00871cc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871cc6: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871ccbu); f_008769d4();
    /* 00871ccb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871cce: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00871cd0: jmp 0x8718cb */ goto L_008718cb;
L_00871cd5:; BB(0x00871cd5);
    /* 00871cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871cd7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00871cdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871cdc: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871ce1u); f_008769d4();
    /* 00871ce1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871ce4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871ce8: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871cec: jmp 0x8719da */ goto L_008719da;
L_00871cf1:; BB(0x00871cf1);
    /* 00871cf1: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871cf5: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00871cf9: jmp 0x8719da */ goto L_008719da;
L_00871cfe:; BB(0x00871cfe);
    /* 00871cfe: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00871d02: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00871d06: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00871d0a: jmp 0x871a0c */ goto L_00871a0c;
L_00871d0f:; BB(0x00871d0f);
    /* 00871d0f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871d13: jmp 0x871c06 */ goto L_00871c06;
L_00871d18:; BB(0x00871d18);
    /* 00871d18: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871d1c: jmp 0x871c06 */ goto L_00871c06;
L_00871d21:; BB(0x00871d21);
    /* 00871d21: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00871d25: jmp 0x871c06 */ goto L_00871c06;
}

void f_00871d2c(void) /* sub_871D2C */
{
    FN_ENTER(0x00871d2c);
    /* 00871d2c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00871d30: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00871d33: ret  */ FN_RET(0x00871d2c); r_esp += 4; return;
}

void f_00871d34(void) /* sub_871D34 */
{
    FN_ENTER(0x00871d34);
    /* 00871d34: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00871d38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00871d39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00871d3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871d3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871d3c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00871d3f: mov esi, eax */ r_esi = r_eax;
    /* 00871d41: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00871d45: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00871d49: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00871d4b: mov eax, esi */ r_eax = r_esi;
    /* 00871d4d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00871d51: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00871d55: call 0x872778 */ r_esp -= 4; W32(r_esp, 0x871d5au); f_00872778();
    /* 00871d5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00871d5c: jl 0x87226b */ if ((fS!=fO)) goto L_0087226b;
L_00871d62:; BB(0x00871d62);
    /* 00871d62: mov eax, esi */ r_eax = r_esi;
    /* 00871d64: call 0x8733d8 */ r_esp -= 4; W32(r_esp, 0x871d69u); f_008733d8();
    /* 00871d69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871d6b: je 0x871d75 */ if (fZ) goto L_00871d75;
L_00871d6d:; BB(0x00871d6d);
    /* 00871d6d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871d70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871d71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871d72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871d73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871d74: ret  */ FN_RET(0x00871d34); r_esp += 4; return;
L_00871d75:; BB(0x00871d75);
    /* 00871d75: lea edx, [esi + 0x78] */ r_edx = (u32)(r_esi+0x78u);
    /* 00871d78: lea ecx, [esi + 0x18] */ r_ecx = (u32)(r_esi+0x18u);
    /* 00871d7b: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00871d7f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00871d83: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
L_00871d87:; BB(0x00871d87);
    /* 00871d87: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00871d8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871d8c: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00871d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871d91: call 0x876ad0 */ r_esp -= 4; W32(r_esp, 0x871d96u); f_00876ad0();
    /* 00871d96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871d9b: jle 0x871ec3 */ if ((fZ||fS!=fO)) goto L_00871ec3;
L_00871da1:; BB(0x00871da1);
    /* 00871da1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00871da4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871da6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871da8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871daa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871dac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871dae: add ecx, dword ptr [esi + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871db1: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00871db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871db6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871db7: call 0x877960 */ r_esp -= 4; W32(r_esp, 0x871dbcu); f_00877960();
    /* 00871dbc: mov ebp, eax */ r_ebp = r_eax;
    /* 00871dbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871dc1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00871dc3: jl 0x872044 */ if ((fS!=fO)) goto L_00872044;
L_00871dc9:; BB(0x00871dc9);
    /* 00871dc9: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00871dcd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871dcf: je 0x871de7 */ if (fZ) goto L_00871de7;
L_00871dd1:; BB(0x00871dd1);
    /* 00871dd1: mov eax, edx */ r_eax = r_edx;
    /* 00871dd3: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871dd5: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00871dd8: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00871ddb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871ddc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00871dde: adc edx, dword ptr [esi + 0x54] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esi+0x54u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00871de1: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00871de4: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
L_00871de7:; BB(0x00871de7);
    /* 00871de7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00871de9: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00871dec: call 0x876cbc */ r_esp -= 4; W32(r_esp, 0x871df1u); f_00876cbc();
    /* 00871df1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871df4: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00871df7: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 00871dfa: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871dfc: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00871dff: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00871e03: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871e04: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00871e06: adc edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00871e08: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00871e0a: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00871e0e: sbb edx, eax */ { u32 c = fC; u32 a = r_edx; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871e10: jge 0x871ed8 */ if ((fS==fO)) goto L_00871ed8;
L_00871e16:; BB(0x00871e16);
    /* 00871e16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871e18: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00871e1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871e1d: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x871e22u); f_008769d4();
    /* 00871e22: lea ebx, [esi + 0x250] */ r_ebx = (u32)(r_esi+0x250u);
    /* 00871e28: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00871e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871e2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871e2e: call 0x877898 */ r_esp -= 4; W32(r_esp, 0x871e33u); f_00877898();
    /* 00871e33: lea edx, [esi + 0x1e0] */ r_edx = (u32)(r_esi+0x1e0u);
    /* 00871e39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871e3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871e3b: call 0x874280 */ r_esp -= 4; W32(r_esp, 0x871e40u); f_00874280();
    /* 00871e40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871e43: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00871e47: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00871e4b: mov ecx, edi */ r_ecx = r_edi;
    /* 00871e4d: sub ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00871e50: mov edx, ebx */ r_edx = r_ebx;
    /* 00871e52: sbb edx, -1 */ { u32 c = fC; u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871e55: jl 0x871eba */ if ((fS!=fO)) goto L_00871eba;
L_00871e57:; BB(0x00871e57);
    /* 00871e57: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00871e59: je 0x871eba */ if (fZ) goto L_00871eba;
L_00871e5b:; BB(0x00871e5b);
    /* 00871e5b: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00871e5e: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 00871e61: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00871e64: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00871e68: mov edx, dword ptr [ecx + eax*8] */ r_edx = R32((u32)(r_ecx+r_eax*8));
    /* 00871e6b: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00871e6f: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 00871e73: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00871e75: sbb ebx, ecx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r;  }
    /* 00871e77: mov edx, ebx */ r_edx = r_ebx;
    /* 00871e79: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871e7c: jl 0x872033 */ if ((fS!=fO)) goto L_00872033;
L_00871e82:; BB(0x00871e82);
    /* 00871e82: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 00871e85: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
L_00871e88:; BB(0x00871e88);
    /* 00871e88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00871e8a: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00871e8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871e90: jle 0x871eba */ if ((fZ||fS!=fO)) goto L_00871eba;
L_00871e92:; BB(0x00871e92);
    /* 00871e92: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00871e95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871e97: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871e99: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00871e9b: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00871e9f: lea ecx, [ecx + eax + 8] */ r_ecx = (u32)(r_ecx+r_eax+0x8u);
    /* 00871ea3: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
L_00871ea7:; BB(0x00871ea7);
    /* 00871ea7: add edi, dword ptr [ecx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00871ea9: adc ebx, dword ptr [ecx + 4] */ { u32 c = fC; u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00871eac: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 00871eaf: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871eb2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00871eb3: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 00871eb6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871eb8: jl 0x871ea7 */ if ((fS!=fO)) goto L_00871ea7;
L_00871eba:; BB(0x00871eba);
    /* 00871eba: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00871ebe: jmp 0x871d87 */ goto L_00871d87;
L_00871ec3:; BB(0x00871ec3);
    /* 00871ec3: jge 0x871fa9 */ if ((fS==fO)) goto L_00871fa9;
L_00871ec9:; BB(0x00871ec9);
    /* 00871ec9: cmp eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871ecc: je 0x871fa9 */ if (fZ) goto L_00871fa9;
L_00871ed2:; BB(0x00871ed2);
    /* 00871ed2: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00871ed5: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
L_00871ed8:; BB(0x00871ed8);
    /* 00871ed8: fld qword ptr [0x99a600] */ FPUSH(R_F64((u32)(0x99a600u)));
    /* 00871ede: mov eax, ecx */ r_eax = r_ecx;
    /* 00871ee0: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00871ee4: fst qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0));
    /* 00871ee7: fstp qword ptr [esi + 0x70] */ W_F64((u32)(r_esi+0x70u), ST(0)); FPOP();
    /* 00871eea: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00871eec: mov eax, ebx */ r_eax = r_ebx;
    /* 00871eee: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00871ef2: sbb eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871ef4: jge 0x871f9f */ if ((fS==fO)) goto L_00871f9f;
L_00871efa:; BB(0x00871efa);
    /* 00871efa: lea edx, [esi + 0x1e0] */ r_edx = (u32)(r_esi+0x1e0u);
    /* 00871f00: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00871f04: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
L_00871f08:; BB(0x00871f08);
    /* 00871f08: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00871f0c: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 00871f10: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00871f12: sbb esi, ebx */ { u32 c = fC; u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00871f14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00871f16: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00871f1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871f1b: call 0x875a30 */ r_esp -= 4; W32(r_esp, 0x871f20u); f_00875a30();
    /* 00871f20: mov ebp, eax */ r_ebp = r_eax;
    /* 00871f22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871f25: mov eax, ebp */ r_eax = r_ebp;
    /* 00871f27: mov ecx, edi */ r_ecx = r_edi;
    /* 00871f29: mov ebx, esi */ r_ebx = r_esi;
    /* 00871f2b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871f2c: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00871f2e: sbb ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871f30: jge 0x871f34 */ if ((fS==fO)) goto L_00871f34;
L_00871f32:; BB(0x00871f32);
    /* 00871f32: mov ebp, edi */ r_ebp = r_edi;
L_00871f34:; BB(0x00871f34);
    /* 00871f34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871f35: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00871f39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00871f3a: call 0x875a98 */ r_esp -= 4; W32(r_esp, 0x871f3fu); f_00875a98();
    /* 00871f3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871f42: mov eax, ebp */ r_eax = r_ebp;
    /* 00871f44: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00871f45: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00871f49: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00871f4c: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 00871f4f: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00871f51: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00871f53: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00871f56: mov dword ptr [eax + 0x54], ebx */ W32((u32)(r_eax+0x54u), r_ebx);
    /* 00871f59: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00871f5b: sbb esi, edx */ { u32 c = fC; u32 a = r_esi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871f5d: jl 0x871f89 */ if ((fS!=fO)) goto L_00871f89;
L_00871f5f:; BB(0x00871f5f);
    /* 00871f5f: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00871f61: je 0x871f89 */ if (fZ) goto L_00871f89;
L_00871f63:; BB(0x00871f63);
    /* 00871f63: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 00871f6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00871f6d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00871f72: call 0x87227c */ r_esp -= 4; W32(r_esp, 0x871f77u); f_0087227c();
    /* 00871f77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871f79: jle 0x872058 */ if ((fZ||fS!=fO)) goto L_00872058;
L_00871f7f:; BB(0x00871f7f);
    /* 00871f7f: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00871f83: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00871f86: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
L_00871f89:; BB(0x00871f89);
    /* 00871f89: mov edx, ecx */ r_edx = r_ecx;
    /* 00871f8b: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00871f8f: mov esi, ebx */ r_esi = r_ebx;
    /* 00871f91: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00871f93: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 00871f97: sbb esi, ebp */ { u32 c = fC; u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b - c) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00871f99: jl 0x871f08 */ if ((fS!=fO)) goto L_00871f08;
L_00871f9f:; BB(0x00871f9f);
    /* 00871f9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00871fa1: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00871fa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00871fa5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871fa6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00871fa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00871fa8: ret  */ FN_RET(0x00871d34); r_esp += 4; return;
L_00871fa9:; BB(0x00871fa9);
    /* 00871fa9: lea ebx, [esp + 0x30] */ r_ebx = (u32)(r_esp+0x30u);
    /* 00871fad: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
L_00871fb1:; BB(0x00871fb1);
    /* 00871fb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00871fb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871fb3: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x871fb8u); f_00876198();
    /* 00871fb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871fbd: jl 0x872248 */ if ((fS!=fO)) goto L_00872248;
L_00871fc3:; BB(0x00871fc3);
    /* 00871fc3: jne 0x8720cc */ if (!fZ) goto L_008720cc;
L_00871fc9:; BB(0x00871fc9);
    /* 00871fc9: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x871fceu); f_00859dd6();
    /* 00871fce: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00871fd4: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00871fd7: je 0x87201c */ if (fZ) goto L_0087201c;
L_00871fd9:; BB(0x00871fd9);
    /* 00871fd9: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871fde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871fdf: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x871fe4u); f_008760f8();
    /* 00871fe4: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00871fe6: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00871feb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00871fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00871fee: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x871ff4u); call_ind(t); }
    /* 00871ff4: mov edi, eax */ r_edi = r_eax;
    /* 00871ff6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871ff9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00871ffb: jle 0x872009 */ if ((fZ||fS!=fO)) goto L_00872009;
L_00871ffd:; BB(0x00871ffd);
    /* 00871ffd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00871ffe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00871fff: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x872004u); f_0087617c();
    /* 00872004: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872007: jmp 0x87201e */ goto L_0087201e;
L_00872009:; BB(0x00872009);
    /* 00872009: jne 0x87201e */ if (!fZ) goto L_0087201e;
L_0087200b:; BB(0x0087200b);
    /* 0087200b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x872010u); f_00859dd6();
    /* 00872010: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872013: je 0x87201e */ if (fZ) goto L_0087201e;
L_00872015:; BB(0x00872015);
    /* 00872015: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0087201a: jmp 0x87201e */ goto L_0087201e;
L_0087201c:; BB(0x0087201c);
    /* 0087201c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0087201e:; BB(0x0087201e);
    /* 0087201e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872020: je 0x8720c1 */ if (fZ) goto L_008720c1;
L_00872026:; BB(0x00872026);
    /* 00872026: jge 0x871fb1 */ if ((fS==fO)) goto L_00871fb1;
L_00872028:; BB(0x00872028);
    /* 00872028: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 0087202b: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 0087202e: jmp 0x871ed8 */ goto L_00871ed8;
L_00872033:; BB(0x00872033);
    /* 00872033: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00872035: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00872037: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00872039: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 0087203c: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 0087203f: jmp 0x871e88 */ goto L_00871e88;
L_00872044:; BB(0x00872044);
    /* 00872044: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00872046: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0087204a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087204b: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x872050u); f_008769d4();
    /* 00872050: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872053: jmp 0x871d87 */ goto L_00871d87;
L_00872058:; BB(0x00872058);
    /* 00872058: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0087205c: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0087205f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872062: jl 0x8720a8 */ if ((fS!=fO)) goto L_008720a8;
L_00872064:; BB(0x00872064);
    /* 00872064: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872068: je 0x87209c */ if (fZ) goto L_0087209c;
L_0087206a:; BB(0x0087206a);
    /* 0087206a: mov ebp, dword ptr [eax + 0x34] */ r_ebp = R32((u32)(r_eax+0x34u));
    /* 0087206d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087206f: jl 0x87209c */ if ((fS!=fO)) goto L_0087209c;
L_00872071:; BB(0x00872071);
    /* 00872071: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00872076: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0087207b: mov esi, 0 */ r_esi = 0x0u;
    /* 00872080: jle 0x8720b2 */ if ((fZ||fS!=fO)) goto L_008720b2;
L_00872082:; BB(0x00872082);
    /* 00872082: mov edi, ecx */ r_edi = r_ecx;
L_00872084:; BB(0x00872084);
    /* 00872084: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00872088: mov edx, esi */ r_edx = r_esi;
    /* 0087208a: call 0x873318 */ r_esp -= 4; W32(r_esp, 0x87208fu); f_00873318();
    /* 0087208f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00872090: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00872092: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00872094: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872096: jl 0x872084 */ if ((fS!=fO)) goto L_00872084;
L_00872098:; BB(0x00872098);
    /* 00872098: mov ecx, edi */ r_ecx = r_edi;
    /* 0087209a: jmp 0x8720b2 */ goto L_008720b2;
L_0087209c:; BB(0x0087209c);
    /* 0087209c: mov ecx, 0xffffff7d */ r_ecx = 0xffffff7du;
    /* 008720a1: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008720a6: jmp 0x8720b2 */ goto L_008720b2;
L_008720a8:; BB(0x008720a8);
    /* 008720a8: mov ecx, 0xffffff7d */ r_ecx = 0xffffff7du;
    /* 008720ad: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_008720b2:; BB(0x008720b2);
    /* 008720b2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008720b6: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 008720b9: mov dword ptr [eax + 0x54], ebx */ W32((u32)(r_eax+0x54u), r_ebx);
    /* 008720bc: jmp 0x871f89 */ goto L_00871f89;
L_008720c1:; BB(0x008720c1);
    /* 008720c1: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 008720c4: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 008720c7: jmp 0x871ed8 */ goto L_00871ed8;
L_008720cc:; BB(0x008720cc);
    /* 008720cc: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008720cf: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 008720d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008720d3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008720d5: adc edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008720d7: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008720da: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 008720dd: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008720e0: jl 0x87223d */ if ((fS!=fO)) goto L_0087223d;
L_008720e6:; BB(0x008720e6);
    /* 008720e6: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 008720ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008720eb: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x8720f0u); f_00875ffc();
    /* 008720f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008720f1: cmp eax, dword ptr [esi + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008720f4: jne 0x8720fb */ if (!fZ) goto L_008720fb;
L_008720f6:; BB(0x008720f6);
    /* 008720f6: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 008720f9: jmp 0x872122 */ goto L_00872122;
L_008720fb:; BB(0x008720fb);
    /* 008720fb: lea edx, [esi + 0x1e0] */ r_edx = (u32)(r_esi+0x1e0u);
    /* 00872101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872102: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x872107u); f_00873fc4();
    /* 00872107: lea edx, [esi + 0x250] */ r_edx = (u32)(r_esi+0x250u);
    /* 0087210d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087210e: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x872113u); f_00873ec4();
    /* 00872113: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872116: mov edx, 2 */ r_edx = 0x2u;
    /* 0087211b: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
L_00872122:; BB(0x00872122);
    /* 00872122: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872125: jge 0x8721cc */ if ((fS==fO)) goto L_008721cc;
L_0087212b:; BB(0x0087212b);
    /* 0087212b: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0087212f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872130: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x872135u); f_00875ffc();
    /* 00872135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00872136: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00872139: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087213b: mov ebx, dword ptr [esi + 0x34] */ r_ebx = R32((u32)(r_esi+0x34u));
    /* 0087213e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872140: jle 0x87217d */ if ((fZ||fS!=fO)) goto L_0087217d;
L_00872142:; BB(0x00872142);
    /* 00872142: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872145: jl 0x872235 */ if ((fS!=fO)) goto L_00872235;
L_0087214b:; BB(0x0087214b);
    /* 0087214b: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
L_0087214e:; BB(0x0087214e);
    /* 0087214e: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872151: je 0x87217d */ if (fZ) goto L_0087217d;
L_00872153:; BB(0x00872153);
    /* 00872153: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872154: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872157: je 0x87217d */ if (fZ) goto L_0087217d;
L_00872159:; BB(0x00872159);
    /* 00872159: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087215a: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087215d: je 0x87217d */ if (fZ) goto L_0087217d;
L_0087215f:; BB(0x0087215f);
    /* 0087215f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872160: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872163: je 0x87217d */ if (fZ) goto L_0087217d;
L_00872165:; BB(0x00872165);
    /* 00872165: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872166: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872169: je 0x87217d */ if (fZ) goto L_0087217d;
L_0087216b:; BB(0x0087216b);
    /* 0087216b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087216c: lea ebp, [ebx - 6] */ r_ebp = (u32)(r_ebx+0xfffffffau);
    /* 0087216f: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872171: jle 0x87214e */ if ((fZ||fS!=fO)) goto L_0087214e;
L_00872173:; BB(0x00872173);
    /* 00872173: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872176: je 0x87217d */ if (fZ) goto L_0087217d;
L_00872178:; BB(0x00872178);
    /* 00872178: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872179: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087217b: jl 0x872173 */ if ((fS!=fO)) goto L_00872173;
L_0087217d:; BB(0x0087217d);
    /* 0087217d: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087217f: je 0x87225e */ if (fZ) goto L_0087225e;
L_00872185:; BB(0x00872185);
    /* 00872185: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00872188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872189: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0087218d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087218e: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x872193u); f_0087696c();
    /* 00872193: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872196: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 0087219d: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008721a1: jne 0x87220a */ if (!fZ) goto L_0087220a;
L_008721a3:; BB(0x008721a3);
    /* 008721a3: lea ebx, [esi + 0x1e0] */ r_ebx = (u32)(r_esi+0x1e0u);
    /* 008721a9: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 008721ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008721ad: call 0x875b2c */ r_esp -= 4; W32(r_esp, 0x8721b2u); f_00875b2c();
    /* 008721b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008721b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008721b7: je 0x8721e3 */ if (fZ) goto L_008721e3;
L_008721b9:; BB(0x008721b9);
    /* 008721b9: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
L_008721be:; BB(0x008721be);
    /* 008721be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008721c0: jne 0x872273 */ if (!fZ) goto L_00872273;
L_008721c6:; BB(0x008721c6);
    /* 008721c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008721c8: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
L_008721cc:; BB(0x008721cc);
    /* 008721cc: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 008721d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008721d1: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 008721d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008721d6: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x8721dbu); f_0087658c();
    /* 008721db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008721de: jmp 0x871d87 */ goto L_00871d87;
L_008721e3:; BB(0x008721e3);
    /* 008721e3: lea edx, [esi + 0x250] */ r_edx = (u32)(r_esi+0x250u);
    /* 008721e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008721ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008721eb: call 0x875f44 */ r_esp -= 4; W32(r_esp, 0x8721f0u); f_00875f44();
    /* 008721f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008721f3: mov dword ptr [esi + 0x58], 4 */ W32((u32)(r_esi+0x58u), 0x4u);
    /* 008721fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008721fc: fld qword ptr [0x99a600] */ FPUSH(R_F64((u32)(0x99a600u)));
    /* 00872202: fst qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0));
    /* 00872205: fstp qword ptr [esi + 0x70] */ W_F64((u32)(r_esi+0x70u), ST(0)); FPOP();
    /* 00872208: jmp 0x8721be */ goto L_008721be;
L_0087220a:; BB(0x0087220a);
    /* 0087220a: lea ebx, [esi + 0x1e0] */ r_ebx = (u32)(r_esi+0x1e0u);
    /* 00872210: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00872213: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872215: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872217: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872219: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087221b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087221d: add edx, dword ptr [esi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872220: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872221: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872222: call 0x875b2c */ r_esp -= 4; W32(r_esp, 0x872227u); f_00875b2c();
    /* 00872227: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087222a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087222c: je 0x8721e3 */ if (fZ) goto L_008721e3;
L_0087222e:; BB(0x0087222e);
    /* 0087222e: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00872233: jmp 0x8721be */ goto L_008721be;
L_00872235:; BB(0x00872235);
    /* 00872235: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00872238: jmp 0x872173 */ goto L_00872173;
L_0087223d:; BB(0x0087223d);
    /* 0087223d: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00872240: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 00872243: jmp 0x871ed8 */ goto L_00871ed8;
L_00872248:; BB(0x00872248);
    /* 00872248: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087224b: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0087224e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087224f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00872251: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00872253: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00872256: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00872259: jmp 0x871fb1 */ goto L_00871fb1;
L_0087225e:; BB(0x0087225e);
    /* 0087225e: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00872263: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872266: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872267: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872268: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872269: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087226a: ret  */ FN_RET(0x00871d34); r_esp += 4; return;
L_0087226b:; BB(0x0087226b);
    /* 0087226b: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087226e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087226f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872270: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872271: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872272: ret  */ FN_RET(0x00871d34); r_esp += 4; return;
L_00872273:; BB(0x00872273);
    /* 00872273: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872276: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872277: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872278: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872279: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087227a: ret  */ FN_RET(0x00871d34); r_esp += 4; return;
}

