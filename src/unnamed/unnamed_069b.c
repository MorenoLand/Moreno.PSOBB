#include "protos.h"

void f_0069b034(void) /* sub_69B034 */
{
    FN_ENTER(0x0069b034);
    /* 0069b034: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b036: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069b03a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b03d: mov byte ptr [esp], 0x53 */ W8((u32)(r_esp), 0x53u);
    /* 0069b041: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069b046: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069b048: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b04b: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69b050u); f_006a9e70();
    /* 0069b050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b052: je 0x69b07c */ if (fZ) goto L_0069b07c;
L_0069b054:; BB(0x0069b054);
    /* 0069b054: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b05a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b05fu); f_0068d5a8();
    /* 0069b05f: mov ebx, eax */ r_ebx = r_eax;
    /* 0069b061: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b064: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b066: je 0x69b07c */ if (fZ) goto L_0069b07c;
L_0069b068:; BB(0x0069b068);
    /* 0069b068: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b069: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69b06eu); f_00693468();
    /* 0069b06e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b06f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b071: je 0x69b07c */ if (fZ) goto L_0069b07c;
L_0069b073:; BB(0x0069b073);
    /* 0069b073: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b075: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b077: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69b07cu); f_0069d43c();
L_0069b07c:; BB(0x0069b07c);
    /* 0069b07c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b07d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b07e: ret  */ FN_RET(0x0069b034); r_esp += 4; return;
}

void f_0069b080(void) /* sub_69B080 */
{
    FN_ENTER(0x0069b080);
    /* 0069b080: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b081: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b084: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069b088: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0069b090: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069b098: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0069b0a0: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0069b0a8: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0069b0b0: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0069b0b8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0069b0c0: mov byte ptr [esp], 0x55 */ W8((u32)(r_esp), 0x55u);
    /* 0069b0c4: mov byte ptr [esp + 1], 8 */ W8((u32)(r_esp+0x1u), 0x8u);
    /* 0069b0c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069b0cb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b0ce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0069b0d1: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069b0d5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b0d8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069b0db: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069b0df: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0069b0e2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0069b0e6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0069b0e9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069b0ed: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0069b0f0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069b0f4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0069b0f7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0069b0fb: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0069b0fe: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069b102: call 0x6a9e04 */ r_esp -= 4; W32(r_esp, 0x69b107u); f_006a9e04();
    /* 0069b107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b109: je 0x69b17e */ if (fZ) goto L_0069b17e;
L_0069b10b:; BB(0x0069b10b);
    /* 0069b10b: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b111: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b116u); f_0068d5a8();
    /* 0069b116: mov esi, eax */ r_esi = r_eax;
    /* 0069b118: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b11b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b11d: je 0x69b17e */ if (fZ) goto L_0069b17e;
L_0069b11f:; BB(0x0069b11f);
    /* 0069b11f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b120: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69b125u); f_00693468();
    /* 0069b125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b128: je 0x69b17e */ if (fZ) goto L_0069b17e;
L_0069b12a:; BB(0x0069b12a);
    /* 0069b12a: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 0069b130: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b136: jne 0x69b17e */ if (!fZ) goto L_0069b17e;
L_0069b138:; BB(0x0069b138);
    /* 0069b138: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069b13c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0069b140: mov dword ptr [esi + 0x734], edx */ W32((u32)(r_esi+0x734u), r_edx);
    /* 0069b146: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069b14a: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 0069b14d: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0069b150: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069b154: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 0069b157: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069b15b: mov dword ptr [esi + 0x738], edx */ W32((u32)(r_esi+0x738u), r_edx);
    /* 0069b161: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069b165: mov dword ptr [esi + 0x73c], edx */ W32((u32)(r_esi+0x73cu), r_edx);
    /* 0069b16b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069b16f: mov dword ptr [esi + 0x740], edx */ W32((u32)(r_esi+0x740u), r_edx);
    /* 0069b175: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b177: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b179: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69b17eu); f_0069d1e4();
L_0069b17e:; BB(0x0069b17e);
    /* 0069b17e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b181: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b182: ret  */ FN_RET(0x0069b080); r_esp += 4; return;
}

void f_0069b184(void) /* sub_69B184 */
{
    FN_ENTER(0x0069b184);
    /* 0069b184: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b185: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b186: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b189: movzx esi, word ptr [esp + 0x2c] */ r_esi = (u32)R16((u32)(r_esp+0x2cu));
    /* 0069b18e: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0069b192: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b193: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b198u); f_0068d5a8();
    /* 0069b198: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b19b: je 0x69b1f6 */ if (fZ) goto L_0069b1f6;
L_0069b19d:; BB(0x0069b19d);
    /* 0069b19d: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069b1a4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b1a7: jne 0x69b1af */ if (!fZ) goto L_0069b1af;
L_0069b1a9:; BB(0x0069b1a9);
    /* 0069b1a9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b1ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b1ae: ret  */ FN_RET(0x0069b184); r_esp += 4; return;
L_0069b1af:; BB(0x0069b1af);
    /* 0069b1af: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0069b1b3: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0069b1b6: mov byte ptr [esp], 0x55 */ W8((u32)(r_esp), 0x55u);
    /* 0069b1ba: mov byte ptr [esp + 1], 8 */ W8((u32)(r_esp+0x1u), 0x8u);
    /* 0069b1bf: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
    /* 0069b1c4: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0069b1c7: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0069b1ca: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069b1ce: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0069b1d2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0069b1d6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069b1da: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b1dd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069b1df: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069b1e3: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0069b1e6: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0069b1e9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069b1ed: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0069b1f1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69b1f6u); f_008003e0();
L_0069b1f6:; BB(0x0069b1f6);
    /* 0069b1f6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b1f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b1fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b1fb: ret  */ FN_RET(0x0069b184); r_esp += 4; return;
}

void f_0069b1fc(void) /* sub_69B1FC */
{
    FN_ENTER(0x0069b1fc);
    /* 0069b1fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b1fd: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b200: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0069b204: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069b20c: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0069b214: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0069b21c: mov byte ptr [esp], 0x56 */ W8((u32)(r_esp), 0x56u);
    /* 0069b220: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0069b225: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069b227: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b22a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0069b22d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069b231: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b234: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069b237: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069b23b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0069b23e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0069b242: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0069b245: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069b249: call 0x6a9e44 */ r_esp -= 4; W32(r_esp, 0x69b24eu); f_006a9e44();
    /* 0069b24e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b250: je 0x69b292 */ if (fZ) goto L_0069b292;
L_0069b252:; BB(0x0069b252);
    /* 0069b252: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b258: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b25du); f_0068d5a8();
    /* 0069b25d: mov esi, eax */ r_esi = r_eax;
    /* 0069b25f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b262: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b264: je 0x69b292 */ if (fZ) goto L_0069b292;
L_0069b266:; BB(0x0069b266);
    /* 0069b266: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069b26a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0069b26e: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 0069b271: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069b275: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 0069b278: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0069b27b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069b27f: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 0069b282: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b284: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x69b289u); f_0077a1f4();
    /* 0069b289: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b28b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b28d: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69b292u); f_0069cd20();
L_0069b292:; BB(0x0069b292);
    /* 0069b292: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b295: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b296: ret  */ FN_RET(0x0069b1fc); r_esp += 4; return;
}

void f_0069b298(void)
{
    FN_ENTER(0x0069b298);
    /* 0069b298: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b299: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0069b29d: mov byte ptr [esp], 0x57 */ W8((u32)(r_esp), 0x57u);
    /* 0069b2a1: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069b2a6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b2a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069b2ab: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b2ae: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69b2b3u); f_006a9e70();
    /* 0069b2b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b2b5: je 0x69b2d0 */ if (fZ) goto L_0069b2d0;
L_0069b2b7:; BB(0x0069b2b7);
    /* 0069b2b7: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b2bd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b2c2u); f_0068d5a8();
    /* 0069b2c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b2c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b2c5: je 0x69b2d0 */ if (fZ) goto L_0069b2d0;
L_0069b2c7:; BB(0x0069b2c7);
    /* 0069b2c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b2c9: mov ecx, eax */ r_ecx = r_eax;
    /* 0069b2cb: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69b2d0u); f_0069c988();
L_0069b2d0:; BB(0x0069b2d0);
    /* 0069b2d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b2d1: ret  */ FN_RET(0x0069b298); r_esp += 4; return;
}

void f_0069b2d4(void) /* sub_69B2D4 */
{
    FN_ENTER(0x0069b2d4);
    /* 0069b2d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b2d5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b2d8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069b2dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b2de: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069b2e3: mov byte ptr [esp], 0x58 */ W8((u32)(r_esp), 0x58u);
    /* 0069b2e7: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069b2ec: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069b2f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069b2f3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b2f6: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069b2f9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069b2fd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b300: call 0x6a9dcc */ r_esp -= 4; W32(r_esp, 0x69b305u); f_006a9dcc();
    /* 0069b305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b307: je 0x69b371 */ if (fZ) goto L_0069b371;
L_0069b309:; BB(0x0069b309);
    /* 0069b309: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b30f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b314u); f_0068d5a8();
    /* 0069b314: mov edi, eax */ r_edi = r_eax;
    /* 0069b316: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b319: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b31b: je 0x69b371 */ if (fZ) goto L_0069b371;
L_0069b31d:; BB(0x0069b31d);
    /* 0069b31d: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x69b322u); f_0068be84();
    /* 0069b322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b324: jne 0x69b335 */ if (!fZ) goto L_0069b335;
L_0069b326:; BB(0x0069b326);
    /* 0069b326: mov edx, dword ptr [edi + 0xeb8] */ r_edx = R32((u32)(r_edi+0xeb8u));
    /* 0069b32c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b32e: jne 0x69b335 */ if (!fZ) goto L_0069b335;
L_0069b330:; BB(0x0069b330);
    /* 0069b330: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b333: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b334: ret  */ FN_RET(0x0069b2d4); r_esp += 4; return;
L_0069b335:; BB(0x0069b335);
    /* 0069b335: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b336: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69b33bu); f_00693468();
    /* 0069b33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b33c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b33e: je 0x69b371 */ if (fZ) goto L_0069b371;
L_0069b340:; BB(0x0069b340);
    /* 0069b340: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0069b345: movzx ecx, word ptr [esp + 6] */ r_ecx = (u32)R16((u32)(r_esp+0x6u));
    /* 0069b34a: mov word ptr [edi + 0x3cc], dx */ W16((u32)(r_edi+0x3ccu), (u16)r_edx);
    /* 0069b351: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069b354: je 0x69b368 */ if (fZ) goto L_0069b368;
L_0069b356:; BB(0x0069b356);
    /* 0069b356: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0069b35c: or edx, 0x8000000 */ {  u32 a = r_edx; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069b362: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
L_0069b368:; BB(0x0069b368);
    /* 0069b368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b36a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069b36c: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69b371u); f_0069c6c0();
L_0069b371:; BB(0x0069b371);
    /* 0069b371: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b374: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b375: ret  */ FN_RET(0x0069b2d4); r_esp += 4; return;
}

void f_0069b378(void) /* sub_69B378 */
{
    FN_ENTER(0x0069b378);
    /* 0069b378: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b379: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b37c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069b380: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b382: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069b387: mov byte ptr [esp], 0xab */ W8((u32)(r_esp), 0xabu);
    /* 0069b38b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069b390: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069b395: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069b397: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b39a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069b39d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069b3a1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b3a4: call 0x6a9dcc */ r_esp -= 4; W32(r_esp, 0x69b3a9u); f_006a9dcc();
    /* 0069b3a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b3ab: je 0x69b412 */ if (fZ) goto L_0069b412;
L_0069b3ad:; BB(0x0069b3ad);
    /* 0069b3ad: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b3b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b3b3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b3b8u); f_0068d5a8();
    /* 0069b3b8: mov ebp, eax */ r_ebp = r_eax;
    /* 0069b3ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b3bd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b3bf: je 0x69b412 */ if (fZ) goto L_0069b412;
L_0069b3c1:; BB(0x0069b3c1);
    /* 0069b3c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b3c2: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69b3c7u); f_00693468();
    /* 0069b3c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b3c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b3ca: je 0x69b412 */ if (fZ) goto L_0069b412;
L_0069b3cc:; BB(0x0069b3cc);
    /* 0069b3cc: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 0069b3d1: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069b3d4: je 0x69b3e4 */ if (fZ) goto L_0069b3e4;
L_0069b3d6:; BB(0x0069b3d6);
    /* 0069b3d6: mov ecx, dword ptr [ebp + 0x33c] */ r_ecx = R32((u32)(r_ebp+0x33cu));
    /* 0069b3dc: or ecx, 0x10000000 */ {  u32 a = r_ecx; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b3e2: jmp 0x69b3f0 */ goto L_0069b3f0;
L_0069b3e4:; BB(0x0069b3e4);
    /* 0069b3e4: mov ecx, dword ptr [ebp + 0x33c] */ r_ecx = R32((u32)(r_ebp+0x33cu));
    /* 0069b3ea: and ecx, 0xefffffff */ {  u32 a = r_ecx; u32 b = 0xefffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
L_0069b3f0:; BB(0x0069b3f0);
    /* 0069b3f0: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069b3f3: je 0x69b403 */ if (fZ) goto L_0069b403;
L_0069b3f5:; BB(0x0069b3f5);
    /* 0069b3f5: or ecx, 0x8000000 */ {  u32 a = r_ecx; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b3fb: mov dword ptr [ebp + 0x33c], ecx */ W32((u32)(r_ebp+0x33cu), r_ecx);
    /* 0069b401: jmp 0x69b409 */ goto L_0069b409;
L_0069b403:; BB(0x0069b403);
    /* 0069b403: mov dword ptr [ebp + 0x33c], ecx */ W32((u32)(r_ebp+0x33cu), r_ecx);
L_0069b409:; BB(0x0069b409);
    /* 0069b409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b40b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069b40d: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69b412u); f_0069bdf0();
L_0069b412:; BB(0x0069b412);
    /* 0069b412: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b416: ret  */ FN_RET(0x0069b378); r_esp += 4; return;
}

void f_0069b418(void) /* sub_69B418 */
{
    FN_ENTER(0x0069b418);
    /* 0069b418: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b419: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b41c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069b420: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0069b428: mov byte ptr [esp], 0xaf */ W8((u32)(r_esp), 0xafu);
    /* 0069b42c: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069b431: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069b433: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0069b436: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0069b439: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069b43d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b440: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69b445u); f_006a9e70();
    /* 0069b445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b447: je 0x69b472 */ if (fZ) goto L_0069b472;
L_0069b449:; BB(0x0069b449);
    /* 0069b449: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b44f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b454u); f_0068d5a8();
    /* 0069b454: mov edi, eax */ r_edi = r_eax;
    /* 0069b456: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b459: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b45b: je 0x69b472 */ if (fZ) goto L_0069b472;
L_0069b45d:; BB(0x0069b45d);
    /* 0069b45d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b45e: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69b463u); f_00693468();
    /* 0069b463: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b464: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b466: je 0x69b472 */ if (fZ) goto L_0069b472;
L_0069b468:; BB(0x0069b468);
    /* 0069b468: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069b46c: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
L_0069b472:; BB(0x0069b472);
    /* 0069b472: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b475: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b476: ret  */ FN_RET(0x0069b418); r_esp += 4; return;
}

void f_0069b478(void) /* sub_69B478 */
{
    FN_ENTER(0x0069b478);
    /* 0069b478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b479: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b47c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069b480: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0069b488: mov byte ptr [esp], 0xb0 */ W8((u32)(r_esp), 0xb0u);
    /* 0069b48c: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069b491: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069b493: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0069b496: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0069b499: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069b49d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069b4a0: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69b4a5u); f_006a9e70();
    /* 0069b4a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b4a7: je 0x69b4e9 */ if (fZ) goto L_0069b4e9;
L_0069b4a9:; BB(0x0069b4a9);
    /* 0069b4a9: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069b4ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4af: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b4b4u); f_0068d5a8();
    /* 0069b4b4: mov edi, eax */ r_edi = r_eax;
    /* 0069b4b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b4b9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b4bb: je 0x69b4e9 */ if (fZ) goto L_0069b4e9;
L_0069b4bd:; BB(0x0069b4bd);
    /* 0069b4bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4be: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69b4c3u); f_00693468();
    /* 0069b4c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b4c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b4c6: je 0x69b4e9 */ if (fZ) goto L_0069b4e9;
L_0069b4c8:; BB(0x0069b4c8);
    /* 0069b4c8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069b4cc: mov dword ptr [edi + 0x368], edx */ W32((u32)(r_edi+0x368u), r_edx);
    /* 0069b4d2: lea ecx, [edi + 0x30c] */ r_ecx = (u32)(r_edi+0x30cu);
    /* 0069b4d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4d9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4de: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069b4e1: call 0x7a9128 */ r_esp -= 4; W32(r_esp, 0x69b4e6u); f_007a9128();
    /* 0069b4e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069b4e9:; BB(0x0069b4e9);
    /* 0069b4e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b4ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b4ed: ret  */ FN_RET(0x0069b478); r_esp += 4; return;
}

void f_0069b4f0(void) /* sub_69B4F0 */
{
    FN_ENTER(0x0069b4f0);
    /* 0069b4f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b4f4: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 0069b4fa: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0069b4fd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b4ff: jge 0x69b505 */ if ((fS==fO)) goto L_0069b505;
L_0069b501:; BB(0x0069b501);
    /* 0069b501: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069b503: jmp 0x69b515 */ goto L_0069b515;
L_0069b505:; BB(0x0069b505);
    /* 0069b505: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x69b50au); f_006931f8();
    /* 0069b50a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b50c: jle 0x69b515 */ if ((fZ||fS!=fO)) goto L_0069b515;
L_0069b50e:; BB(0x0069b50e);
    /* 0069b50e: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x69b513u); f_006931f8();
    /* 0069b513: mov edi, eax */ r_edi = r_eax;
L_0069b515:; BB(0x0069b515);
    /* 0069b515: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069b519: fld dword ptr [0x93da9c] */ FPUSH(R_F32((u32)(0x93da9cu)));
    /* 0069b51f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069b522: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0069b525: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0069b529: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0069b52d: fadd dword ptr [0x93daa4] */ ST(0) = ST(0) + R_F32((u32)(0x93daa4u));
    /* 0069b533: fmul dword ptr [0x93daa0] */ ST(0) = ST(0) * R_F32((u32)(0x93daa0u));
    /* 0069b539: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0069b53b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0069b53d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069b53f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069b540: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069b542: jae 0x69b546 */ if (!fC) goto L_0069b546;
L_0069b544:; BB(0x0069b544);
    /* 0069b544: fst st(1) */ ST(1) = ST(0);
L_0069b546:; BB(0x0069b546);
    /* 0069b546: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069b548: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b54b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b54c: ret 4 */ FN_RET(0x0069b4f0); r_esp += 8; return;
}

void f_0069b550(void) /* sub_69B550 */
{
    FN_ENTER(0x0069b550);
    /* 0069b550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b551: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069b553: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069b55a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b55d: jne 0x69b5a5 */ if (!fZ) goto L_0069b5a5;
L_0069b55f:; BB(0x0069b55f);
    /* 0069b55f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0069b562: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b567: jne 0x69b5a5 */ if (!fZ) goto L_0069b5a5;
L_0069b569:; BB(0x0069b569);
    /* 0069b569: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b56b: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 0069b571: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x69b576u); f_0069792c();
    /* 0069b576: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b578: je 0x69b5a5 */ if (fZ) goto L_0069b5a5;
L_0069b57a:; BB(0x0069b57a);
    /* 0069b57a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b57c: lea ecx, [ebx + 0x5ac] */ r_ecx = (u32)(r_ebx+0x5acu);
    /* 0069b582: call 0x6ab35c */ r_esp -= 4; W32(r_esp, 0x69b587u); f_006ab35c();
    /* 0069b587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b589: jne 0x69b5a5 */ if (!fZ) goto L_0069b5a5;
L_0069b58b:; BB(0x0069b58b);
    /* 0069b58b: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69b590u); f_00807d60();
    /* 0069b590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b592: je 0x69b5a5 */ if (fZ) goto L_0069b5a5;
L_0069b594:; BB(0x0069b594);
    /* 0069b594: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069b598: add ebx, 0x4e4 */ {  u32 a = r_ebx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069b59e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b5a0: call 0x6a7e84 */ r_esp -= 4; W32(r_esp, 0x69b5a5u); f_006a7e84();
L_0069b5a5:; BB(0x0069b5a5);
    /* 0069b5a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b5a6: ret 4 */ FN_RET(0x0069b550); r_esp += 8; return;
}

void f_0069b5ac(void) /* sub_69B5AC */
{
    FN_ENTER(0x0069b5ac);
    /* 0069b5ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5b0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069b5b4: mov edx, 0xa94254 */ r_edx = 0xa94254u;
    /* 0069b5b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b5bb: mov ebx, eax */ r_ebx = r_eax;
    /* 0069b5bd: mov ebp, edx */ r_ebp = r_edx;
    /* 0069b5bf: mov esi, ecx */ r_esi = r_ecx;
L_0069b5c1:; BB(0x0069b5c1);
    /* 0069b5c1: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0069b5c4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5c6: je 0x69b62d */ if (fZ) goto L_0069b62d;
L_0069b5c8:; BB(0x0069b5c8);
    /* 0069b5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069b5ca: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x69b5cfu); f_006877b0();
    /* 0069b5cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5d1: je 0x69b62d */ if (fZ) goto L_0069b62d;
L_0069b5d3:; BB(0x0069b5d3);
    /* 0069b5d3: mov eax, dword ptr [edi + 0x328] */ r_eax = R32((u32)(r_edi+0x328u));
    /* 0069b5d9: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5de: jne 0x69b62d */ if (!fZ) goto L_0069b62d;
L_0069b5e0:; BB(0x0069b5e0);
    /* 0069b5e0: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69b5e5u); f_00694c8c();
    /* 0069b5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5e7: jne 0x69b603 */ if (!fZ) goto L_0069b603;
L_0069b5e9:; BB(0x0069b5e9);
    /* 0069b5e9: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69b5eeu); f_00694c8c();
    /* 0069b5ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5f0: jne 0x69b62d */ if (!fZ) goto L_0069b62d;
L_0069b5f2:; BB(0x0069b5f2);
    /* 0069b5f2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069b5f4: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x69b5f9u); f_007ba980();
    /* 0069b5f9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069b5fc: cmp ax, word ptr [esp + 0x14] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0069b601: jne 0x69b62d */ if (!fZ) goto L_0069b62d;
L_0069b603:; BB(0x0069b603);
    /* 0069b603: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069b609: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069b60e: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069b614: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b616: je 0x69b624 */ if (fZ) goto L_0069b624;
L_0069b618:; BB(0x0069b618);
    /* 0069b618: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069b61c: mov edx, esi */ r_edx = r_esi;
    /* 0069b61e: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b621: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_0069b624:; BB(0x0069b624);
    /* 0069b624: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b626: mov ecx, edi */ r_ecx = r_edi;
    /* 0069b628: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69b62du); f_0069d43c();
L_0069b62d:; BB(0x0069b62d);
    /* 0069b62d: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b630: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069b633: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b636: jl 0x69b5c1 */ if ((fS!=fO)) goto L_0069b5c1;
L_0069b638:; BB(0x0069b638);
    /* 0069b638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b63a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b63b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b63c: ret  */ FN_RET(0x0069b5ac); r_esp += 4; return;
}

void f_0069b640(void) /* sub_69B640 */
{
    FN_ENTER(0x0069b640);
    /* 0069b640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b641: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b642: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0069b646: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b648: je 0x69b68d */ if (fZ) goto L_0069b68d;
L_0069b64a:; BB(0x0069b64a);
    /* 0069b64a: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0069b64d: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b652: mov edx, 0 */ r_edx = 0x0u;
    /* 0069b657: je 0x69b68d */ if (fZ) goto L_0069b68d;
L_0069b659:; BB(0x0069b659);
    /* 0069b659: mov ebx, edx */ r_ebx = r_edx;
    /* 0069b65b: mov esi, ecx */ r_esi = r_ecx;
L_0069b65d:; BB(0x0069b65d);
    /* 0069b65d: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b660: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b663: jge 0x69b68d */ if ((fS==fO)) goto L_0069b68d;
L_0069b665:; BB(0x0069b665);
    /* 0069b665: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b666: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69b66bu); f_0068d5a8();
    /* 0069b66b: mov edx, eax */ r_edx = r_eax;
    /* 0069b66d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b670: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b672: je 0x69b685 */ if (fZ) goto L_0069b685;
L_0069b674:; BB(0x0069b674);
    /* 0069b674: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0069b67a: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069b67f: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
L_0069b685:; BB(0x0069b685);
    /* 0069b685: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069b688: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b68b: jl 0x69b690 */ if ((fS!=fO)) goto L_0069b690;
L_0069b68d:; BB(0x0069b68d);
    /* 0069b68d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b68e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b68f: ret  */ FN_RET(0x0069b640); r_esp += 4; return;
L_0069b690:; BB(0x0069b690);
    /* 0069b690: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0069b693: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b698: jne 0x69b65d */ if (!fZ) goto L_0069b65d;
L_0069b69a:; BB(0x0069b69a);
    /* 0069b69a: jmp 0x69b68d */ goto L_0069b68d;
}

void f_0069b69c(void) /* sub_69B69C */
{
    FN_ENTER(0x0069b69c);
    /* 0069b69c: push 0x6989f0 */ { u32 v = 0x6989f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b6a1: call 0x6926f4 */ r_esp -= 4; W32(r_esp, 0x69b6a6u); f_006926f4();
    /* 0069b6a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069b6a7: ret  */ FN_RET(0x0069b69c); r_esp += 4; return;
}

void f_0069b6a8(void) /* sub_69B6A8 */
{
    FN_ENTER(0x0069b6a8);
    /* 0069b6a8: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0069b6ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b6b0: je 0x69b6b8 */ if (fZ) goto L_0069b6b8;
L_0069b6b2:; BB(0x0069b6b2);
    /* 0069b6b2: call 0x6a83bc */ r_esp -= 4; W32(r_esp, 0x69b6b7u); f_006a83bc();
    /* 0069b6b7: ret  */ FN_RET(0x0069b6a8); r_esp += 4; return;
L_0069b6b8:; BB(0x0069b6b8);
    /* 0069b6b8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069b6bd: ret  */ FN_RET(0x0069b6a8); r_esp += 4; return;
}

void f_0069b6c0(void) /* sub_69B6C0 */
{
    FN_ENTER(0x0069b6c0);
    /* 0069b6c0: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0069b6c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b6c8: je 0x69b6d6 */ if (fZ) goto L_0069b6d6;
L_0069b6ca:; BB(0x0069b6ca);
    /* 0069b6ca: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0069b6cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b6d0: call 0x6a84dc */ r_esp -= 4; W32(r_esp, 0x69b6d5u); f_006a84dc();
    /* 0069b6d5: ret  */ FN_RET(0x0069b6c0); r_esp += 4; return;
L_0069b6d6:; BB(0x0069b6d6);
    /* 0069b6d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b6d8: ret  */ FN_RET(0x0069b6c0); r_esp += 4; return;
}

void f_0069b6dc(void) /* sub_69B6DC */
{
    FN_ENTER(0x0069b6dc);
    /* 0069b6dc: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0069b6e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b6e4: je 0x69b6f1 */ if (fZ) goto L_0069b6f1;
L_0069b6e6:; BB(0x0069b6e6);
    /* 0069b6e6: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0069b6eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b6ec: call 0x6a8414 */ r_esp -= 4; W32(r_esp, 0x69b6f1u); f_006a8414();
L_0069b6f1:; BB(0x0069b6f1);
    /* 0069b6f1: ret  */ FN_RET(0x0069b6dc); r_esp += 4; return;
}

void f_0069b720(void) /* sub_69B720 */
{
    FN_ENTER(0x0069b720);
    /* 0069b720: call 0x68a320 */ r_esp -= 4; W32(r_esp, 0x69b725u); f_0068a320();
    /* 0069b725: ret  */ FN_RET(0x0069b720); r_esp += 4; return;
}

void f_0069b728(void) /* sub_69B728 */
{
    FN_ENTER(0x0069b728);
    /* 0069b728: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b729: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b72a: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b72d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069b72f: lea ebp, [ebx + 0x628] */ r_ebp = (u32)(r_ebx+0x628u);
    /* 0069b735: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069b737: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x69b73cu); f_006a7c8c();
    /* 0069b73c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0069b740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069b742: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x69b747u); f_006a7cac();
    /* 0069b747: mov ebp, eax */ r_ebp = r_eax;
    /* 0069b749: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b74b: call 0x68a40c */ r_esp -= 4; W32(r_esp, 0x69b750u); f_0068a40c();
    /* 0069b750: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b752: je 0x69b772 */ if (fZ) goto L_0069b772;
L_0069b754:; BB(0x0069b754);
    /* 0069b754: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0069b75a: test dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069b75d: je 0x69b766 */ if (fZ) goto L_0069b766;
L_0069b75f:; BB(0x0069b75f);
    /* 0069b75f: mov edx, 1 */ r_edx = 0x1u;
    /* 0069b764: jmp 0x69b768 */ goto L_0069b768;
L_0069b766:; BB(0x0069b766);
    /* 0069b766: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069b768:; BB(0x0069b768);
    /* 0069b768: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b76a: je 0x69b772 */ if (fZ) goto L_0069b772;
L_0069b76c:; BB(0x0069b76c);
    /* 0069b76c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b76f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b771: ret  */ FN_RET(0x0069b728); r_esp += 4; return;
L_0069b772:; BB(0x0069b772);
    /* 0069b772: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b774: call 0x6a20cc */ r_esp -= 4; W32(r_esp, 0x69b779u); f_006a20cc();
    /* 0069b779: mov word ptr [ebx + 0x3cc], ax */ W16((u32)(r_ebx+0x3ccu), (u16)r_eax);
    /* 0069b780: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0069b783: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b786: jne 0x69b8ed */ if (!fZ) goto L_0069b8ed;
L_0069b78c:; BB(0x0069b78c);
    /* 0069b78c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069b790: fcomp dword ptr [0x93da84] */ fx_compare(ST(0), R_F32((u32)(0x93da84u))); FPOP();
    /* 0069b796: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069b798: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069b799: jb 0x69b7b8 */ if (fC) goto L_0069b7b8;
L_0069b79b:; BB(0x0069b79b);
    /* 0069b79b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b79c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b79e: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x69b7a3u); f_0068c038();
    /* 0069b7a3: mov dword ptr [ebx + 0x3fc], eax */ W32((u32)(r_ebx+0x3fcu), r_eax);
    /* 0069b7a9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b7ad: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69b7b2u); f_0069b93c();
    /* 0069b7b2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b7b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b7b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b7b7: ret  */ FN_RET(0x0069b728); r_esp += 4; return;
L_0069b7b8:; BB(0x0069b7b8);
    /* 0069b7b8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x69b7bdu); f_00791b48();
    /* 0069b7bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b7bf: je 0x69b8e7 */ if (fZ) goto L_0069b8e7;
L_0069b7c5:; BB(0x0069b7c5);
    /* 0069b7c5: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0069b7ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b7cc: je 0x69b8e7 */ if (fZ) goto L_0069b8e7;
L_0069b7d2:; BB(0x0069b7d2);
    /* 0069b7d2: movsx eax, word ptr [0xa9432c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa9432cu));
    /* 0069b7d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7da: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069b7de: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0069b7e2: fdiv dword ptr [0x93da88] */ ST(0) = ST(0) / R_F32((u32)(0x93da88u));
    /* 0069b7e8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069b7eb: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x69b7f0u); f_0082e900();
    /* 0069b7f0: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0069b7f4: movsx eax, word ptr [0xa94330] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa94330u));
    /* 0069b7fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7fc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069b800: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0069b804: fdiv dword ptr [0x93da88] */ ST(0) = ST(0) / R_F32((u32)(0x93da88u));
    /* 0069b80a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069b80d: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x69b812u); f_0082e900();
    /* 0069b812: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0069b816: movsx eax, word ptr [0xa94330] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa94330u));
    /* 0069b81d: movsx ebp, word ptr [0xa9432c] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa9432cu));
    /* 0069b824: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069b828: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0069b82c: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0069b830: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0069b834: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069b836: fmul qword ptr [0x93d978] */ ST(0) = ST(0) * R_F64((u32)(0x93d978u));
    /* 0069b83c: fdiv qword ptr [0x93d970] */ ST(0) = ST(0) / R_F64((u32)(0x93d970u));
    /* 0069b842: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0069b848: fld dword ptr [0x93da84] */ FPUSH(R_F32((u32)(0x93da84u)));
    /* 0069b84e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069b852: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069b854: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0069b858: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0069b85d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069b862: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069b866: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0069b86a: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069b86e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069b872: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069b874: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0069b876: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069b878: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0069b87c: add ebp, dword ptr [edx + 0x94] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b882: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069b883: jb 0x69b8b0 */ if (fC) goto L_0069b8b0;
L_0069b885:; BB(0x0069b885);
    /* 0069b885: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069b887: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b888: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b88a: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x69b88fu); f_0068c038();
    /* 0069b88f: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b894: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 0069b897: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b898: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069b89b: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x69b8a0u); f_007a8c74();
    /* 0069b8a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b8a3: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0069b8a6: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b8a8: je 0x69b8d8 */ if (fZ) goto L_0069b8d8;
L_0069b8aa:; BB(0x0069b8aa);
    /* 0069b8aa: fld dword ptr [0x93da84] */ FPUSH(R_F32((u32)(0x93da84u)));
L_0069b8b0:; BB(0x0069b8b0);
    /* 0069b8b0: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0069b8b4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069b8b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069b8b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069b8b9: jb 0x69b8e7 */ if (fC) goto L_0069b8e7;
L_0069b8bb:; BB(0x0069b8bb);
    /* 0069b8bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b8bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b8be: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x69b8c3u); f_0068c038();
    /* 0069b8c3: mov dword ptr [ebx + 0x3fc], eax */ W32((u32)(r_ebx+0x3fcu), r_eax);
    /* 0069b8c9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b8cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b8cd: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69b8d2u); f_0069b93c();
    /* 0069b8d2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b8d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b8d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b8d7: ret  */ FN_RET(0x0069b728); r_esp += 4; return;
L_0069b8d8:; BB(0x0069b8d8);
    /* 0069b8d8: mov dword ptr [ebx + 0x3fc], ebp */ W32((u32)(r_ebx+0x3fcu), r_ebp);
    /* 0069b8de: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b8e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b8e2: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69b8e7u); f_0069b93c();
L_0069b8e7:; BB(0x0069b8e7);
    /* 0069b8e7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b8ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b8eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b8ec: ret  */ FN_RET(0x0069b728); r_esp += 4; return;
L_0069b8ed:; BB(0x0069b8ed);
    /* 0069b8ed: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069b8f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069b8f5: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69b8fbu); call_ind(t); }
    /* 0069b8fb: movsx edx, word ptr [ebx + 0x3cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x3ccu));
    /* 0069b902: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b904: je 0x69b92a */ if (fZ) goto L_0069b92a;
L_0069b906:; BB(0x0069b906);
    /* 0069b906: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069b90c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069b90e: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69b914u); call_ind(t); }
    /* 0069b914: movsx edx, word ptr [ebx + 0x3cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x3ccu));
    /* 0069b91b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b91d: je 0x69b92a */ if (fZ) goto L_0069b92a;
L_0069b91f:; BB(0x0069b91f);
    /* 0069b91f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b923: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69b928u); f_0069c6c0();
    /* 0069b928: jmp 0x69b933 */ goto L_0069b933;
L_0069b92a:; BB(0x0069b92a);
    /* 0069b92a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b92c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069b92e: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69b933u); f_0069bdf0();
L_0069b933:; BB(0x0069b933);
    /* 0069b933: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b936: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b938: ret  */ FN_RET(0x0069b728); r_esp += 4; return;
}

void f_0069b93c(void) /* sub_69B93C */
{
    FN_ENTER(0x0069b93c);
    /* 0069b93c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b93d: mov esi, ecx */ r_esi = r_ecx;
    /* 0069b93f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0069b944: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b947: ja 0x69b9e2 */ if ((!fC&&!fZ)) goto L_0069b9e2;
L_0069b94d:; BB(0x0069b94d);
    /* 0069b94d: mov eax, dword ptr [eax*4 + 0x93cac4] */ r_eax = R32((u32)(r_eax*4+0x93cac4u));
    /* 0069b954: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b93c); r_esp += 8; return;
}

void f_0069b956(void)
{
    FN_ENTER(0x0069b956);
    /* 0069b956: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b958: call 0x69b9e8 */ r_esp -= 4; W32(r_esp, 0x69b95du); f_0069b9e8();
    /* 0069b95d: jmp 0x69b9e2 */ goto L_0069b9e2;
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b956); r_esp += 8; return;
}

void f_0069b962(void)
{
    FN_ENTER(0x0069b962);
    /* 0069b962: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b964: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x69b969u); f_0069b720();
    /* 0069b969: jmp 0x69b9e2 */ goto L_0069b9e2;
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b962); r_esp += 8; return;
}

void f_0069b96b(void)
{
    FN_ENTER(0x0069b96b);
    /* 0069b96b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b96d: call 0x6a2e10 */ r_esp -= 4; W32(r_esp, 0x69b972u); f_006a2e10();
    /* 0069b972: jmp 0x69b9e2 */ goto L_0069b9e2;
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b96b); r_esp += 8; return;
}

void f_0069b974(void)
{
    FN_ENTER(0x0069b974);
    /* 0069b974: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b976: call 0x69ba18 */ r_esp -= 4; W32(r_esp, 0x69b97bu); f_0069ba18();
    /* 0069b97b: jmp 0x69b9e2 */ goto L_0069b9e2;
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b974); r_esp += 8; return;
}

void f_0069b97d(void)
{
    FN_ENTER(0x0069b97d);
    /* 0069b97d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b97f: call 0x69bba8 */ r_esp -= 4; W32(r_esp, 0x69b984u); f_0069bba8();
    /* 0069b984: jmp 0x69b9e2 */ goto L_0069b9e2;
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b97d); r_esp += 8; return;
}

void f_0069b986(void)
{
    FN_ENTER(0x0069b986);
    /* 0069b986: mov edx, dword ptr [esi + 0x634] */ r_edx = R32((u32)(r_esi+0x634u));
    /* 0069b98c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b98e: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069b994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b996: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069b99c: je 0x69b9c7 */ if (fZ) goto L_0069b9c7;
L_0069b99e:; BB(0x0069b99e);
    /* 0069b99e: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069b9a4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069b9a6: je 0x69b9af */ if (fZ) goto L_0069b9af;
L_0069b9a8:; BB(0x0069b9a8);
    /* 0069b9a8: mov eax, 1 */ r_eax = 0x1u;
    /* 0069b9ad: jmp 0x69b9b1 */ goto L_0069b9b1;
L_0069b9af:; BB(0x0069b9af);
    /* 0069b9af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069b9b1:; BB(0x0069b9b1);
    /* 0069b9b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b9b3: jne 0x69b9c7 */ if (!fZ) goto L_0069b9c7;
L_0069b9b5:; BB(0x0069b9b5);
    /* 0069b9b5: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069b9ba: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b9bf: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69b9c4u); f_0070a60c();
    /* 0069b9c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069b9c7:; BB(0x0069b9c7);
    /* 0069b9c7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b9c9: call 0x69bbd0 */ r_esp -= 4; W32(r_esp, 0x69b9ceu); f_0069bbd0();
    /* 0069b9ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9cf: ret 4 */ FN_RET(0x0069b986); r_esp += 8; return;
}

void f_0069b9d2(void)
{
    FN_ENTER(0x0069b9d2);
    /* 0069b9d2: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b9d4: call 0x6a1de8 */ r_esp -= 4; W32(r_esp, 0x69b9d9u); f_006a1de8();
    /* 0069b9d9: jmp 0x69b9e2 */ goto L_0069b9e2;
L_0069b9e2:; BB(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b9d2); r_esp += 8; return;
}

void f_0069b9db(void)
{
    FN_ENTER(0x0069b9db);
    /* 0069b9db: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b9dd: call 0x6a1ef0 */ r_esp -= 4; W32(r_esp, 0x69b9e2u); f_006a1ef0();
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b9db); r_esp += 8; return;
}

void f_0069b9e2(void)
{
    FN_ENTER(0x0069b9e2);
    /* 0069b9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b9e3: ret 4 */ FN_RET(0x0069b9e2); r_esp += 8; return;
}

void f_0069b9e8(void) /* sub_69B9E8 */
{
    FN_ENTER(0x0069b9e8);
    /* 0069b9e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b9e9: mov edi, ecx */ r_edi = r_ecx;
    /* 0069b9eb: mov eax, dword ptr [edi + 0x6c4] */ r_eax = R32((u32)(r_edi+0x6c4u));
    /* 0069b9f1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069b9f3: je 0x69ba15 */ if (fZ) goto L_0069ba15;
L_0069b9f5:; BB(0x0069b9f5);
    /* 0069b9f5: push 0x1c00000 */ { u32 v = 0x1c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b9fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b9fc: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069b9ff: mov dword ptr [edi + 0x6c4], eax */ W32((u32)(r_edi+0x6c4u), r_eax);
    /* 0069ba05: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ba07: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69ba0cu); f_007b52ec();
    /* 0069ba0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ba0e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ba10: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69ba15u); f_006a1ac0();
L_0069ba15:; BB(0x0069ba15);
    /* 0069ba15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ba16: ret  */ FN_RET(0x0069b9e8); r_esp += 4; return;
}

void f_0069ba18(void) /* sub_69BA18 */
{
    FN_ENTER(0x0069ba18);
    /* 0069ba18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ba19: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ba1c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069ba1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ba20: call 0x69babc */ r_esp -= 4; W32(r_esp, 0x69ba25u); f_0069babc();
    /* 0069ba25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ba27: jne 0x69ba2e */ if (!fZ) goto L_0069ba2e;
L_0069ba29:; BB(0x0069ba29);
    /* 0069ba29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ba2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ba2d: ret  */ FN_RET(0x0069ba18); r_esp += 4; return;
L_0069ba2e:; BB(0x0069ba2e);
    /* 0069ba2e: lea edx, [ebp + 0x404] */ r_edx = (u32)(r_ebp+0x404u);
    /* 0069ba34: lea eax, [ebp + 0x40c] */ r_eax = (u32)(r_ebp+0x40cu);
    /* 0069ba3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ba3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ba3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ba3e: push dword ptr [ebp + 0x3fc] */ { u32 v = R32((u32)(r_ebp+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069ba44: call 0x69bb6c */ r_esp -= 4; W32(r_esp, 0x69ba49u); f_0069bb6c();
    /* 0069ba49: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0069ba4c: mov dword ptr [ebp + 0x6c4], 0 */ W32((u32)(r_ebp+0x6c4u), 0x0u);
    /* 0069ba56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ba58: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ba5e: je 0x69ba6f */ if (fZ) goto L_0069ba6f;
L_0069ba60:; BB(0x0069ba60);
    /* 0069ba60: mov dword ptr [ebp + 0x6c4], 8 */ W32((u32)(r_ebp+0x6c4u), 0x8u);
    /* 0069ba6a: mov eax, 8 */ r_eax = 0x8u;
L_0069ba6f:; BB(0x0069ba6f);
    /* 0069ba6f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ba71: je 0x69ba84 */ if (fZ) goto L_0069ba84;
L_0069ba73:; BB(0x0069ba73);
    /* 0069ba73: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069ba7a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ba7d: jne 0x69ba84 */ if (!fZ) goto L_0069ba84;
L_0069ba7f:; BB(0x0069ba7f);
    /* 0069ba7f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ba82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ba83: ret  */ FN_RET(0x0069ba18); r_esp += 4; return;
L_0069ba84:; BB(0x0069ba84);
    /* 0069ba84: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069ba88: mov byte ptr [esp], 0x40 */ W8((u32)(r_esp), 0x40u);
    /* 0069ba8c: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0069ba91: mov edx, dword ptr [ebp + 0x404] */ r_edx = R32((u32)(r_ebp+0x404u));
    /* 0069ba97: mov ebp, dword ptr [ebp + 0x40c] */ r_ebp = R32((u32)(r_ebp+0x40cu));
    /* 0069ba9d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069baa1: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0069baa5: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0069baaa: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069baae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069bab1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69bab6u); f_008003e0();
    /* 0069bab6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bab9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069baba: ret  */ FN_RET(0x0069ba18); r_esp += 4; return;
}

void f_0069babc(void) /* sub_69BABC */
{
    FN_ENTER(0x0069babc);
    /* 0069babc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069babd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069babe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069bac0: mov eax, dword ptr [ebp + 0xdf0] */ r_eax = R32((u32)(r_ebp+0xdf0u));
    /* 0069bac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bac8: jne 0x69bb64 */ if (!fZ) goto L_0069bb64;
L_0069bace:; BB(0x0069bace);
    /* 0069bace: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069bacf: lea ecx, [ebp + 0x6b8] */ r_ecx = (u32)(r_ebp+0x6b8u);
    /* 0069bad5: call 0x69788c */ r_esp -= 4; W32(r_esp, 0x69badau); f_0069788c();
    /* 0069bada: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069badd: mov ecx, dword ptr [ebp + 0x3fc] */ r_ecx = R32((u32)(r_ebp+0x3fcu));
    /* 0069bae3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x69bae8u); f_0082dcbc();
    /* 0069bae8: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0069baeb: mov ecx, dword ptr [ebp + 0x3fc] */ r_ecx = R32((u32)(r_ebp+0x3fcu));
    /* 0069baf1: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 0069baf7: mov dword ptr [ebp + 0x310], 0 */ W32((u32)(r_ebp+0x310u), 0x0u);
    /* 0069bb01: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x69bb06u); f_0082ddd8();
    /* 0069bb06: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0069bb09: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069bb0b: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 0069bb11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bb13: call 0x694198 */ r_esp -= 4; W32(r_esp, 0x69bb18u); f_00694198();
    /* 0069bb18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bb1a: je 0x69bb28 */ if (fZ) goto L_0069bb28;
L_0069bb1c:; BB(0x0069bb1c);
    /* 0069bb1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bb1e: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69bb23u); f_0077774c();
    /* 0069bb23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bb25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069bb26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bb27: ret  */ FN_RET(0x0069babc); r_esp += 4; return;
L_0069bb28:; BB(0x0069bb28);
    /* 0069bb28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bb2a: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69bb2fu); f_00693844();
    /* 0069bb2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bb31: jne 0x69bb3b */ if (!fZ) goto L_0069bb3b;
L_0069bb33:; BB(0x0069bb33);
    /* 0069bb33: mov eax, 1 */ r_eax = 0x1u;
    /* 0069bb38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069bb39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bb3a: ret  */ FN_RET(0x0069babc); r_esp += 4; return;
L_0069bb3b:; BB(0x0069bb3b);
    /* 0069bb3b: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069bb42: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bb45: jne 0x69bb64 */ if (!fZ) goto L_0069bb64;
L_0069bb47:; BB(0x0069bb47);
    /* 0069bb47: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0069bb4d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bb50: je 0x69bb59 */ if (fZ) goto L_0069bb59;
L_0069bb52:; BB(0x0069bb52);
    /* 0069bb52: mov edx, 1 */ r_edx = 0x1u;
    /* 0069bb57: jmp 0x69bb5b */ goto L_0069bb5b;
L_0069bb59:; BB(0x0069bb59);
    /* 0069bb59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069bb5b:; BB(0x0069bb5b);
    /* 0069bb5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bb5d: jne 0x69bb64 */ if (!fZ) goto L_0069bb64;
L_0069bb5f:; BB(0x0069bb5f);
    /* 0069bb5f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069bb62: je 0x69bb33 */ if (fZ) goto L_0069bb33;
L_0069bb64:; BB(0x0069bb64);
    /* 0069bb64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bb66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069bb67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bb68: ret  */ FN_RET(0x0069babc); r_esp += 4; return;
}

void f_0069bb6c(void) /* sub_69BB6C */
{
    FN_ENTER(0x0069bb6c);
    /* 0069bb6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069bb6d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069bb6f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0069bb73: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x69bb78u); f_0082dcbc();
    /* 0069bb78: fld dword ptr [0xa94320] */ FPUSH(R_F32((u32)(0xa94320u)));
    /* 0069bb7e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069bb80: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0069bb83: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069bb87: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0069bb8b: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0069bb8d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x69bb92u); f_0082ddd8();
    /* 0069bb92: fld dword ptr [0xa94320] */ FPUSH(R_F32((u32)(0xa94320u)));
    /* 0069bb98: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069bb9a: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0069bb9d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069bba1: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0069bba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bba4: ret 0xc */ FN_RET(0x0069bb6c); r_esp += 16; return;
}

void f_0069bba8(void) /* sub_69BBA8 */
{
    FN_ENTER(0x0069bba8);
    /* 0069bba8: mov eax, dword ptr [ecx + 0x6c4] */ r_eax = R32((u32)(r_ecx+0x6c4u));
    /* 0069bbae: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bbb0: je 0x69bbcc */ if (fZ) goto L_0069bbcc;
L_0069bbb2:; BB(0x0069bbb2);
    /* 0069bbb2: mov dword ptr [ecx + 0x6bc], 0 */ W32((u32)(r_ecx+0x6bcu), 0x0u);
    /* 0069bbbc: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069bbbf: mov dword ptr [ecx + 0x6c4], eax */ W32((u32)(r_ecx+0x6c4u), r_eax);
    /* 0069bbc5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bbc7: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69bbccu); f_006a1ac0();
L_0069bbcc:; BB(0x0069bbcc);
    /* 0069bbcc: ret  */ FN_RET(0x0069bba8); r_esp += 4; return;
}

void f_0069bbd0(void) /* sub_69BBD0 */
{
    FN_ENTER(0x0069bbd0);
    /* 0069bbd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bbd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bbd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069bbd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bbd4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069bbd7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069bbd9: lea ebx, [ebp + 0x628] */ r_ebx = (u32)(r_ebp+0x628u);
    /* 0069bbdf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069bbe1: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x69bbe6u); f_006a7cac();
    /* 0069bbe6: mov esi, eax */ r_esi = r_eax;
    /* 0069bbe8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069bbea: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x69bbefu); f_006a7c8c();
    /* 0069bbef: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0069bbf3: movsx edi, word ptr [0xa94330] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa94330u));
    /* 0069bbfa: movsx ecx, word ptr [0xa9432c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa9432cu));
    /* 0069bc01: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0069bc04: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0069bc07: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0069bc0b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0069bc0f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069bc11: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bc14: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bc17: fmul qword ptr [0x93d968] */ ST(0) = ST(0) * R_F64((u32)(0x93d968u));
    /* 0069bc1d: fdiv qword ptr [0x93d960] */ ST(0) = ST(0) / R_F64((u32)(0x93d960u));
    /* 0069bc23: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0069bc29: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0069bc2d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0069bc32: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069bc37: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069bc3b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0069bc3f: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069bc43: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069bc47: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0069bc4b: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bc4d: add ebx, dword ptr [edx + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bc53: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0069bc57: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0069bc5b: fdiv dword ptr [0x93da78] */ ST(0) = ST(0) / R_F32((u32)(0x93da78u));
    /* 0069bc61: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0069bc65: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bc67: call 0x68a40c */ r_esp -= 4; W32(r_esp, 0x69bc6cu); f_0068a40c();
    /* 0069bc6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bc6e: je 0x69bc8c */ if (fZ) goto L_0069bc8c;
L_0069bc70:; BB(0x0069bc70);
    /* 0069bc70: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0069bc76: test dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bc79: je 0x69bc82 */ if (fZ) goto L_0069bc82;
L_0069bc7b:; BB(0x0069bc7b);
    /* 0069bc7b: mov edx, 1 */ r_edx = 0x1u;
    /* 0069bc80: jmp 0x69bc84 */ goto L_0069bc84;
L_0069bc82:; BB(0x0069bc82);
    /* 0069bc82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069bc84:; BB(0x0069bc84);
    /* 0069bc84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bc86: jne 0x69bd39 */ if (!fZ) goto L_0069bd39;
L_0069bc8c:; BB(0x0069bc8c);
    /* 0069bc8c: fld dword ptr [0x93da84] */ FPUSH(R_F32((u32)(0x93da84u)));
    /* 0069bc92: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069bc96: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0069bc98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bc9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069bc9b: ja 0x69bd5c */ if ((!fC&&!fZ)) goto L_0069bd5c;
L_0069bca1:; BB(0x0069bca1);
    /* 0069bca1: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0069bca5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069bca7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bca9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069bcaa: jbe 0x69bd41 */ if ((fC||fZ)) goto L_0069bd41;
L_0069bcb0:; BB(0x0069bcb0);
    /* 0069bcb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bcb1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bcb3: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x69bcb8u); f_0068c038();
    /* 0069bcb8: mov ecx, eax */ r_ecx = r_eax;
    /* 0069bcba: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0069bcbe: fcomp dword ptr [0x93da70] */ fx_compare(ST(0), R_F32((u32)(0x93da70u))); FPOP();
    /* 0069bcc4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bcc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069bcc7: jbe 0x69bcd0 */ if ((fC||fZ)) goto L_0069bcd0;
L_0069bcc9:; BB(0x0069bcc9);
    /* 0069bcc9: add dword ptr [ebp + 0x6bc], 1 */ { u32 ad = (u32)(r_ebp+0x6bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0069bcd0:; BB(0x0069bcd0);
    /* 0069bcd0: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0069bcd3: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bcd9: je 0x69bcfd */ if (fZ) goto L_0069bcfd;
L_0069bcdb:; BB(0x0069bcdb);
    /* 0069bcdb: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 0069bce1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bce4: je 0x69bd39 */ if (fZ) goto L_0069bd39;
L_0069bce6:; BB(0x0069bce6);
    /* 0069bce6: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 0069bcec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bcee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bcf0: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69bcf5u); f_0069b93c();
    /* 0069bcf5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bcf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bcf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bcfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bcfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bcfc: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
L_0069bcfd:; BB(0x0069bcfd);
    /* 0069bcfd: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 0069bd03: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bd06: je 0x69bd39 */ if (fZ) goto L_0069bd39;
L_0069bd08:; BB(0x0069bd08);
    /* 0069bd08: fild dword ptr [ebp + 0x6bc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6bcu)));
    /* 0069bd0e: fcomp dword ptr [0x93da74] */ fx_compare(ST(0), R_F32((u32)(0x93da74u))); FPOP();
    /* 0069bd14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bd16: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 0069bd1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069bd1d: jae 0x69bd30 */ if (!fC) goto L_0069bd30;
L_0069bd1f:; BB(0x0069bd1f);
    /* 0069bd1f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bd21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bd23: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69bd28u); f_0069b93c();
    /* 0069bd28: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bd2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bd2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bd2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bd2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bd2f: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
L_0069bd30:; BB(0x0069bd30);
    /* 0069bd30: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bd32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bd34: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69bd39u); f_006a139c();
L_0069bd39:; BB(0x0069bd39);
    /* 0069bd39: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bd3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bd3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bd3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bd3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bd40: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
L_0069bd41:; BB(0x0069bd41);
    /* 0069bd41: mov eax, dword ptr [ebp + 0x6c4] */ r_eax = R32((u32)(r_ebp+0x6c4u));
    /* 0069bd47: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bd49: je 0x69bd39 */ if (fZ) goto L_0069bd39;
L_0069bd4b:; BB(0x0069bd4b);
    /* 0069bd4b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bd4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bd4f: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69bd54u); f_006a1ac0();
    /* 0069bd54: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bd57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bd58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bd59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bd5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bd5b: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
L_0069bd5c:; BB(0x0069bd5c);
    /* 0069bd5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069bd5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bd5f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bd61: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x69bd66u); f_0068c038();
    /* 0069bd66: mov ecx, eax */ r_ecx = r_eax;
    /* 0069bd68: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069bd6c: fcomp dword ptr [0x93da70] */ fx_compare(ST(0), R_F32((u32)(0x93da70u))); FPOP();
    /* 0069bd72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bd74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069bd75: jbe 0x69bd7e */ if ((fC||fZ)) goto L_0069bd7e;
L_0069bd77:; BB(0x0069bd77);
    /* 0069bd77: add dword ptr [ebp + 0x6bc], 1 */ { u32 ad = (u32)(r_ebp+0x6bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0069bd7e:; BB(0x0069bd7e);
    /* 0069bd7e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0069bd81: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bd87: je 0x69bdab */ if (fZ) goto L_0069bdab;
L_0069bd89:; BB(0x0069bd89);
    /* 0069bd89: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 0069bd8f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bd92: je 0x69bd39 */ if (fZ) goto L_0069bd39;
L_0069bd94:; BB(0x0069bd94);
    /* 0069bd94: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 0069bd9a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bd9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bd9e: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69bda3u); f_0069b93c();
    /* 0069bda3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bda6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bda7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bda8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bda9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bdaa: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
L_0069bdab:; BB(0x0069bdab);
    /* 0069bdab: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 0069bdb1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069bdb4: je 0x69bd39 */ if (fZ) goto L_0069bd39;
L_0069bdb6:; BB(0x0069bdb6);
    /* 0069bdb6: fild dword ptr [ebp + 0x6bc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6bcu)));
    /* 0069bdbc: fcomp dword ptr [0x93da74] */ fx_compare(ST(0), R_F32((u32)(0x93da74u))); FPOP();
    /* 0069bdc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bdc4: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 0069bdca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069bdcb: jae 0x69bdde */ if (!fC) goto L_0069bdde;
L_0069bdcd:; BB(0x0069bdcd);
    /* 0069bdcd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bdcf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bdd1: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69bdd6u); f_0069b93c();
    /* 0069bdd6: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bdd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bdda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bddb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bddc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bddd: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
L_0069bdde:; BB(0x0069bdde);
    /* 0069bdde: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bde0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069bde2: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69bde7u); f_006a139c();
    /* 0069bde7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069bdea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bdeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bdec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bded: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bdee: ret  */ FN_RET(0x0069bbd0); r_esp += 4; return;
}

void f_0069bdf0(void) /* sub_69BDF0 */
{
    FN_ENTER(0x0069bdf0);
    /* 0069bdf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bdf1: mov edi, ecx */ r_edi = r_ecx;
    /* 0069bdf3: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0069bdf8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069bdfb: ja 0x69be8a */ if ((!fC&&!fZ)) goto L_0069be8a;
L_0069be01:; BB(0x0069be01);
    /* 0069be01: mov eax, dword ptr [eax*4 + 0x93cae8] */ r_eax = R32((u32)(r_eax*4+0x93cae8u));
    /* 0069be08: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069be8a:; BB(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069bdf0); r_esp += 8; return;
}

void f_0069be0a(void)
{
    FN_ENTER(0x0069be0a);
    /* 0069be0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be0c: call 0x69be90 */ r_esp -= 4; W32(r_esp, 0x69be11u); f_0069be90();
    /* 0069be11: jmp 0x69be8a */ goto L_0069be8a;
L_0069be8a:; BB(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be0a); r_esp += 8; return;
}

void f_0069be13(void)
{
    FN_ENTER(0x0069be13);
    /* 0069be13: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be15: call 0x6a285c */ r_esp -= 4; W32(r_esp, 0x69be1au); f_006a285c();
    /* 0069be1a: jmp 0x69be8a */ goto L_0069be8a;
L_0069be8a:; BB(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be13); r_esp += 8; return;
}

void f_0069be1c(void)
{
    FN_ENTER(0x0069be1c);
    /* 0069be1c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be1e: call 0x69c018 */ r_esp -= 4; W32(r_esp, 0x69be23u); f_0069c018();
    /* 0069be23: jmp 0x69be8a */ goto L_0069be8a;
L_0069be8a:; BB(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be1c); r_esp += 8; return;
}

void f_0069be25(void)
{
    FN_ENTER(0x0069be25);
    /* 0069be25: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be27: call 0x69c0ac */ r_esp -= 4; W32(r_esp, 0x69be2cu); f_0069c0ac();
    /* 0069be2c: jmp 0x69be8a */ goto L_0069be8a;
L_0069be8a:; BB(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be25); r_esp += 8; return;
}

void f_0069be2e(void)
{
    FN_ENTER(0x0069be2e);
    /* 0069be2e: mov edx, dword ptr [edi + 0x634] */ r_edx = R32((u32)(r_edi+0x634u));
    /* 0069be34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069be36: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069be3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069be3e: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069be44: je 0x69be6f */ if (fZ) goto L_0069be6f;
L_0069be46:; BB(0x0069be46);
    /* 0069be46: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069be4c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069be4e: je 0x69be57 */ if (fZ) goto L_0069be57;
L_0069be50:; BB(0x0069be50);
    /* 0069be50: mov eax, 1 */ r_eax = 0x1u;
    /* 0069be55: jmp 0x69be59 */ goto L_0069be59;
L_0069be57:; BB(0x0069be57);
    /* 0069be57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069be59:; BB(0x0069be59);
    /* 0069be59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069be5b: jne 0x69be6f */ if (!fZ) goto L_0069be6f;
L_0069be5d:; BB(0x0069be5d);
    /* 0069be5d: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069be62: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069be67: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69be6cu); f_0070a60c();
    /* 0069be6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069be6f:; BB(0x0069be6f);
    /* 0069be6f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be71: call 0x69c0c8 */ r_esp -= 4; W32(r_esp, 0x69be76u); f_0069c0c8();
    /* 0069be76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be77: ret 4 */ FN_RET(0x0069be2e); r_esp += 8; return;
}

void f_0069be7a(void)
{
    FN_ENTER(0x0069be7a);
    /* 0069be7a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be7c: call 0x69c438 */ r_esp -= 4; W32(r_esp, 0x69be81u); f_0069c438();
    /* 0069be81: jmp 0x69be8a */ goto L_0069be8a;
L_0069be8a:; BB(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be7a); r_esp += 8; return;
}

void f_0069be83(void)
{
    FN_ENTER(0x0069be83);
    /* 0069be83: mov ecx, edi */ r_ecx = r_edi;
    /* 0069be85: call 0x69c4ec */ r_esp -= 4; W32(r_esp, 0x69be8au); f_0069c4ec();
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be83); r_esp += 8; return;
}

void f_0069be8a(void)
{
    FN_ENTER(0x0069be8a);
    /* 0069be8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069be8b: ret 4 */ FN_RET(0x0069be8a); r_esp += 8; return;
}

void f_0069be90(void) /* sub_69BE90 */
{
    FN_ENTER(0x0069be90);
    /* 0069be90: call 0x69be98 */ r_esp -= 4; W32(r_esp, 0x69be95u); f_0069be98();
    /* 0069be95: ret  */ FN_RET(0x0069be90); r_esp += 4; return;
}

void f_0069be98(void) /* sub_69BE98 */
{
    FN_ENTER(0x0069be98);
    /* 0069be98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069be99: mov esi, ecx */ r_esi = r_ecx;
    /* 0069be9b: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0069be9e: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bea4: je 0x69c008 */ if (fZ) goto L_0069c008;
L_0069beaa:; BB(0x0069beaa);
    /* 0069beaa: movsx eax, word ptr [esi + 0x6ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6cau));
    /* 0069beb1: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069beb4: je 0x69c00c */ if (fZ) goto L_0069c00c;
L_0069beba:; BB(0x0069beba);
    /* 0069beba: movsx eax, word ptr [esi + 0x6ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6cau));
    /* 0069bec1: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069bec7: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0069beca: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069becd: ja 0x69bff8 */ if ((!fC&&!fZ)) goto L_0069bff8;
L_0069bed3:; BB(0x0069bed3);
    /* 0069bed3: mov eax, dword ptr [eax*4 + 0x93cb20] */ r_eax = R32((u32)(r_eax*4+0x93cb20u));
    /* 0069beda: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
L_0069c001:; BB(0x0069c001);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069be98); r_esp += 4; return;
L_0069c008:; BB(0x0069c008);
    /* 0069c008: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c00a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c00b: ret  */ FN_RET(0x0069be98); r_esp += 4; return;
L_0069c00c:; BB(0x0069c00c);
    /* 0069c00c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c00e: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c010: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69c015u); f_0069dd60();
    /* 0069c015: jmp 0x69c001 */ goto L_0069c001;
}

void f_0069bedc(void)
{
    FN_ENTER(0x0069bedc);
    /* 0069bedc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bede: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bee0: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69bee5u); f_0069bdf0();
    /* 0069bee5: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bedc); r_esp += 4; return;
}

void f_0069beea(void)
{
    FN_ENTER(0x0069beea);
    /* 0069beea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069beec: mov ecx, esi */ r_ecx = r_esi;
    /* 0069beee: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69bef3u); f_0069c6c0();
    /* 0069bef3: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069beea); r_esp += 4; return;
}

void f_0069bef8(void)
{
    FN_ENTER(0x0069bef8);
    /* 0069bef8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069befa: mov ecx, esi */ r_ecx = r_esi;
    /* 0069befc: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69bf01u); f_0069c988();
    /* 0069bf01: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bef8); r_esp += 4; return;
}

void f_0069bf06(void)
{
    FN_ENTER(0x0069bf06);
    /* 0069bf06: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf08: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf0a: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69bf0fu); f_0069cd20();
    /* 0069bf0f: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf06); r_esp += 4; return;
}

void f_0069bf14(void)
{
    FN_ENTER(0x0069bf14);
    /* 0069bf14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf16: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf18: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69bf1du); f_0069d1e4();
    /* 0069bf1d: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf14); r_esp += 4; return;
}

void f_0069bf22(void)
{
    FN_ENTER(0x0069bf22);
    /* 0069bf22: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf24: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf26: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69bf2bu); f_0069d43c();
    /* 0069bf2b: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf22); r_esp += 4; return;
}

void f_0069bf30(void)
{
    FN_ENTER(0x0069bf30);
    /* 0069bf30: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf32: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf34: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69bf39u); f_0069d8f4();
    /* 0069bf39: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf30); r_esp += 4; return;
}

void f_0069bf3e(void)
{
    FN_ENTER(0x0069bf3e);
    /* 0069bf3e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf40: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf42: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69bf47u); f_0069dd60();
    /* 0069bf47: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf3e); r_esp += 4; return;
}

void f_0069bf4c(void)
{
    FN_ENTER(0x0069bf4c);
    /* 0069bf4c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf4e: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf50: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69bf55u); f_0069e15c();
    /* 0069bf55: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf4c); r_esp += 4; return;
}

void f_0069bf5a(void)
{
    FN_ENTER(0x0069bf5a);
    /* 0069bf5a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf5c: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf5e: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69bf63u); f_0069e718();
    /* 0069bf63: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf5a); r_esp += 4; return;
}

void f_0069bf68(void)
{
    FN_ENTER(0x0069bf68);
    /* 0069bf68: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf6a: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf6c: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69bf71u); f_0069ebc8();
    /* 0069bf71: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf68); r_esp += 4; return;
}

void f_0069bf76(void)
{
    FN_ENTER(0x0069bf76);
    /* 0069bf76: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf78: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf7a: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69bf7fu); f_0069ef04();
    /* 0069bf7f: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf76); r_esp += 4; return;
}

void f_0069bf81(void)
{
    FN_ENTER(0x0069bf81);
    /* 0069bf81: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf83: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf85: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69bf8au); f_0069f148();
    /* 0069bf8a: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf81); r_esp += 4; return;
}

void f_0069bf8c(void)
{
    FN_ENTER(0x0069bf8c);
    /* 0069bf8c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf8e: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf90: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69bf95u); f_0069f384();
    /* 0069bf95: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf8c); r_esp += 4; return;
}

void f_0069bf97(void)
{
    FN_ENTER(0x0069bf97);
    /* 0069bf97: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf99: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bf9b: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69bfa0u); f_0069f648();
    /* 0069bfa0: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bf97); r_esp += 4; return;
}

void f_0069bfa2(void)
{
    FN_ENTER(0x0069bfa2);
    /* 0069bfa2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfa4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfa6: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69bfabu); f_0069fe2c();
    /* 0069bfab: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfa2); r_esp += 4; return;
}

void f_0069bfa4(void)
{
    FN_ENTER(0x0069bfa4);
    /* 0069bfa4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfa6: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69bfabu); f_0069fe2c();
    /* 0069bfab: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfa4); r_esp += 4; return;
}

void f_0069bfad(void)
{
    FN_ENTER(0x0069bfad);
    /* 0069bfad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfaf: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfb1: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69bfb6u); f_006a0624();
    /* 0069bfb6: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfad); r_esp += 4; return;
}

void f_0069bfb8(void)
{
    FN_ENTER(0x0069bfb8);
    /* 0069bfb8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfba: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfbc: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69bfc1u); f_006a0994();
    /* 0069bfc1: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfb8); r_esp += 4; return;
}

void f_0069bfc3(void)
{
    FN_ENTER(0x0069bfc3);
    /* 0069bfc3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfc5: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfc7: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69bfccu); f_006a0eb8();
    /* 0069bfcc: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfc3); r_esp += 4; return;
}

void f_0069bfce(void)
{
    FN_ENTER(0x0069bfce);
    /* 0069bfce: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfd0: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfd2: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69bfd7u); f_006a139c();
    /* 0069bfd7: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfce); r_esp += 4; return;
}

void f_0069bfd9(void)
{
    FN_ENTER(0x0069bfd9);
    /* 0069bfd9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfdb: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfdd: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69bfe2u); f_006a1a60();
    /* 0069bfe2: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfd9); r_esp += 4; return;
}

void f_0069bfe4(void)
{
    FN_ENTER(0x0069bfe4);
    /* 0069bfe4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfe6: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bfe8: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69bfedu); f_0069b93c();
    /* 0069bfed: jmp 0x69bff8 */ goto L_0069bff8;
L_0069bff8:; BB(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfe4); r_esp += 4; return;
}

void f_0069bfef(void)
{
    FN_ENTER(0x0069bfef);
    /* 0069bfef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069bff1: mov ecx, esi */ r_ecx = r_esi;
    /* 0069bff3: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69bff8u); f_006a1ac0();
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bfef); r_esp += 4; return;
}

void f_0069bff8(void)
{
    FN_ENTER(0x0069bff8);
    /* 0069bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069bffa: mov word ptr [esi + 0x6ca], ax */ W16((u32)(r_esi+0x6cau), (u16)r_eax);
    /* 0069c001: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c007: ret  */ FN_RET(0x0069bff8); r_esp += 4; return;
}

