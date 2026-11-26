#include "protos.h"

void f_004df0e8(void) /* sub_4DF0E8 */
{
    FN_ENTER(0x004df0e8);
    /* 004df0e8: mov dword ptr [0xa498a8], 0x3f800000 */ W32((u32)(0xa498a8u), 0x3f800000u);
    /* 004df0f2: mov dword ptr [0xa498ac], 0x41000000 */ W32((u32)(0xa498acu), 0x41000000u);
    /* 004df0fc: mov dword ptr [0xa498b0], 0x3fc00000 */ W32((u32)(0xa498b0u), 0x3fc00000u);
    /* 004df106: ret  */ FN_RET(0x004df0e8); r_esp += 4; return;
}

void f_004df108(void) /* sub_4DF108 */
{
    FN_ENTER(0x004df108);
    /* 004df108: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df109: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004df10b: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 004df10d: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4df112u); f_007930dc();
    /* 004df112: movsx edx, word ptr [ebp + 0xc4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xc4u));
    /* 004df119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004df11a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df11b: lea ecx, [ebp + 0x1a4] */ r_ecx = (u32)(r_ebp+0x1a4u);
    /* 004df121: push 0x909e10 */ { u32 v = 0x909e10u; r_esp -= 4; W32(r_esp, v); }
    /* 004df126: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004df127: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df12cu); f_00857e29();
    /* 004df12c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df12e: mov word ptr [ebp + 0x202], ax */ W16((u32)(r_ebp+0x202u), (u16)r_eax);
    /* 004df135: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df139: ret  */ FN_RET(0x004df108); r_esp += 4; return;
}

void f_004df13c(void) /* sub_4DF13C */
{
    FN_ENTER(0x004df13c);
    /* 004df13c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df13d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df13e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df13f: mov edi, ecx */ r_edi = r_ecx;
    /* 004df141: movzx eax, word ptr [edi + 0xdc] */ r_eax = (u32)R16((u32)(r_edi+0xdcu));
    /* 004df148: lea esi, [edi + 0x204] */ r_esi = (u32)(r_edi+0x204u);
    /* 004df14e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df150: je 0x4df163 */ if (fZ) goto L_004df163;
L_004df152:; BB(0x004df152);
    /* 004df152: lea ebp, [edi + 0xdc] */ r_ebp = (u32)(r_edi+0xdcu);
    /* 004df158: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df159: call 0x813f0c */ r_esp -= 4; W32(r_esp, 0x4df15eu); f_00813f0c();
    /* 004df15e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df15f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df161: je 0x4df16e */ if (fZ) goto L_004df16e;
L_004df163:; BB(0x004df163);
    /* 004df163: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df165: mov word ptr [edi + 0x204], ax */ W16((u32)(r_edi+0x204u), (u16)r_eax);
    /* 004df16c: jmp 0x4df185 */ goto L_004df185;
L_004df16e:; BB(0x004df16e);
    /* 004df16e: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004df170: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4df175u); f_007930dc();
    /* 004df175: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df177: push 0x909e1c */ { u32 v = 0x909e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004df17c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df17d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df182u); f_00857e29();
    /* 004df182: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004df185:; BB(0x004df185);
    /* 004df185: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df187: mov word ptr [edi + 0x262], ax */ W16((u32)(r_edi+0x262u), (u16)r_eax);
    /* 004df18e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df18f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df190: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df191: ret  */ FN_RET(0x004df13c); r_esp += 4; return;
}

void f_004df15e(void)
{
    FN_ENTER(0x004df15e);
    /* 004df15e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df15f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df161: je 0x4df16e */ if (fZ) goto L_004df16e;
L_004df163:; BB(0x004df163);
    /* 004df163: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df165: mov word ptr [edi + 0x204], ax */ W16((u32)(r_edi+0x204u), (u16)r_eax);
    /* 004df16c: jmp 0x4df185 */ goto L_004df185;
L_004df16e:; BB(0x004df16e);
    /* 004df16e: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004df170: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4df175u); f_007930dc();
    /* 004df175: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df177: push 0x909e1c */ { u32 v = 0x909e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004df17c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df17d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df182u); f_00857e29();
    /* 004df182: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004df185:; BB(0x004df185);
    /* 004df185: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df187: mov word ptr [edi + 0x262], ax */ W16((u32)(r_edi+0x262u), (u16)r_eax);
    /* 004df18e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df18f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df190: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df191: ret  */ FN_RET(0x004df15e); r_esp += 4; return;
}

void f_004df194(void) /* sub_4DF194 */
{
    FN_ENTER(0x004df194);
    /* 004df194: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df196: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df197: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df19a: mov edi, ecx */ r_edi = r_ecx;
    /* 004df19c: lea esi, [edi + 0x264] */ r_esi = (u32)(r_edi+0x264u);
    /* 004df1a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df1a4: mov word ptr [edi + 0x264], ax */ W16((u32)(r_edi+0x264u), (u16)r_eax);
    /* 004df1ab: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 004df1b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004df1b3: jle 0x4df1ee */ if ((fZ||fS!=fO)) goto L_004df1ee;
L_004df1b5:; BB(0x004df1b5);
    /* 004df1b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df1b6: call 0x793014 */ r_esp -= 4; W32(r_esp, 0x4df1bbu); f_00793014();
    /* 004df1bb: mov ebp, eax */ r_ebp = r_eax;
    /* 004df1bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004df1c0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df1c2: je 0x4df1ee */ if (fZ) goto L_004df1ee;
L_004df1c4:; BB(0x004df1c4);
    /* 004df1c4: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 004df1c6: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4df1cbu); f_007930dc();
    /* 004df1cb: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004df1cf: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004df1d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df1d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004df1d3: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4df1d8u); f_00857dec();
    /* 004df1d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004df1da: mov word ptr [esp + 0x6e], dx */ W16((u32)(r_esp+0x6eu), (u16)r_edx);
    /* 004df1df: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004df1e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df1e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004df1e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df1e6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df1ebu); f_00857e29();
    /* 004df1eb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004df1ee:; BB(0x004df1ee);
    /* 004df1ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df1f0: mov word ptr [edi + 0x2c2], ax */ W16((u32)(r_edi+0x2c2u), (u16)r_eax);
    /* 004df1f7: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df1fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df1fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df1fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df1fd: ret  */ FN_RET(0x004df194); r_esp += 4; return;
}

void f_004df200(void) /* sub_4DF200 */
{
    FN_ENTER(0x004df200);
    /* 004df200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df201: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df202: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df203: mov edi, ecx */ r_edi = r_ecx;
    /* 004df205: movzx eax, word ptr [edi + 0x104] */ r_eax = (u32)R16((u32)(r_edi+0x104u));
    /* 004df20c: lea esi, [edi + 0x2c4] */ r_esi = (u32)(r_edi+0x2c4u);
    /* 004df212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df214: je 0x4df227 */ if (fZ) goto L_004df227;
L_004df216:; BB(0x004df216);
    /* 004df216: lea ebp, [edi + 0x104] */ r_ebp = (u32)(r_edi+0x104u);
    /* 004df21c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df21d: call 0x813f0c */ r_esp -= 4; W32(r_esp, 0x4df222u); f_00813f0c();
    /* 004df222: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df225: je 0x4df232 */ if (fZ) goto L_004df232;
L_004df227:; BB(0x004df227);
    /* 004df227: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df229: mov word ptr [edi + 0x2c4], ax */ W16((u32)(r_edi+0x2c4u), (u16)r_eax);
    /* 004df230: jmp 0x4df241 */ goto L_004df241;
L_004df232:; BB(0x004df232);
    /* 004df232: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df233: push 0x909e28 */ { u32 v = 0x909e28u; r_esp -= 4; W32(r_esp, v); }
    /* 004df238: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df239: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df23eu); f_00857e29();
    /* 004df23e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004df241:; BB(0x004df241);
    /* 004df241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df243: mov word ptr [edi + 0x322], ax */ W16((u32)(r_edi+0x322u), (u16)r_eax);
    /* 004df24a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df24b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df24c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df24d: ret  */ FN_RET(0x004df200); r_esp += 4; return;
}

void f_004df250(void) /* sub_4DF250 */
{
    FN_ENTER(0x004df250);
    /* 004df250: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df252: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df253: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df254: lea eax, [ecx + 0x324] */ r_eax = (u32)(r_ecx+0x324u);
    /* 004df25a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004df25c: mov word ptr [ecx + 0x324], dx */ W16((u32)(r_ecx+0x324u), (u16)r_edx);
    /* 004df263: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 004df269: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df26f: jne 0x4df2fa */ if (!fZ) goto L_004df2fa;
L_004df275:; BB(0x004df275);
    /* 004df275: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 004df27b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004df27d: sar ebp, 0x1c */ { u32 c = (28u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004df280: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004df283: mov edi, ecx */ r_edi = r_ecx;
    /* 004df285: sar edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004df288: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004df28b: mov esi, ecx */ r_esi = r_ecx;
    /* 004df28d: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 004df290: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004df293: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004df295: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004df298: and ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004df29b: and ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004df29e: cmp ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df2a1: je 0x4df2fa */ if (fZ) goto L_004df2fa;
L_004df2a3:; BB(0x004df2a3);
    /* 004df2a3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df2a5: jle 0x4df2fa */ if ((fZ||fS!=fO)) goto L_004df2fa;
L_004df2a7:; BB(0x004df2a7);
    /* 004df2a7: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df2aa: jg 0x4df2fa */ if ((!fZ&&fS==fO)) goto L_004df2fa;
L_004df2ac:; BB(0x004df2ac);
    /* 004df2ac: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df2ae: jle 0x4df2fa */ if ((fZ||fS!=fO)) goto L_004df2fa;
L_004df2b0:; BB(0x004df2b0);
    /* 004df2b0: cmp esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df2b3: jg 0x4df2fa */ if ((!fZ&&fS==fO)) goto L_004df2fa;
L_004df2b5:; BB(0x004df2b5);
    /* 004df2b5: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df2b8: jge 0x4df2fa */ if ((fS==fO)) goto L_004df2fa;
L_004df2ba:; BB(0x004df2ba);
    /* 004df2ba: cmp ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df2bd: jge 0x4df2fa */ if ((fS==fO)) goto L_004df2fa;
L_004df2bf:; BB(0x004df2bf);
    /* 004df2bf: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 004df2c5: add ebp, 0x7d0 */ {  u32 a = r_ebp; u32 b = 0x7d0u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004df2cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df2cd: jne 0x4df2e7 */ if (!fZ) goto L_004df2e7;
L_004df2cf:; BB(0x004df2cf);
    /* 004df2cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004df2d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df2d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df2d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df2d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df2d4: push 0x909e34 */ { u32 v = 0x909e34u; r_esp -= 4; W32(r_esp, v); }
    /* 004df2d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df2da: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df2dfu); f_00857e29();
    /* 004df2df: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df2e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df2e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df2e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df2e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df2e6: ret  */ FN_RET(0x004df250); r_esp += 4; return;
L_004df2e7:; BB(0x004df2e7);
    /* 004df2e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004df2e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df2e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df2ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df2eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df2ec: push 0x909e64 */ { u32 v = 0x909e64u; r_esp -= 4; W32(r_esp, v); }
    /* 004df2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df2f2: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df2f7u); f_00857e29();
    /* 004df2f7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004df2fa:; BB(0x004df2fa);
    /* 004df2fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df2fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df2fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df2fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df2fe: ret  */ FN_RET(0x004df250); r_esp += 4; return;
}

void f_004df308(void) /* sub_4DF308 */
{
    FN_ENTER(0x004df308);
    /* 004df308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df309: mov ecx, edx */ r_ecx = r_edx;
    /* 004df30b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df30d: jl 0x4df314 */ if ((fS!=fO)) goto L_004df314;
L_004df30f:; BB(0x004df30f);
    /* 004df30f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df312: jl 0x4df316 */ if ((fS!=fO)) goto L_004df316;
L_004df314:; BB(0x004df314);
    /* 004df314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df315: ret  */ FN_RET(0x004df308); r_esp += 4; return;
L_004df316:; BB(0x004df316);
    /* 004df316: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 004df318: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004df31b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df31d: mov dword ptr [edx + eax*8 + 0xa498b4], ebp */ W32((u32)(r_edx+r_eax*8+0xa498b4u), r_ebp);
    /* 004df324: mov ebp, dword ptr [ecx + 4] */ r_ebp = R32((u32)(r_ecx+0x4u));
    /* 004df327: mov dword ptr [edx + eax*8 + 0xa498b8], ebp */ W32((u32)(r_edx+r_eax*8+0xa498b8u), r_ebp);
    /* 004df32e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004df331: mov dword ptr [edx + eax*8 + 0xa498bc], ecx */ W32((u32)(r_edx+r_eax*8+0xa498bcu), r_ecx);
    /* 004df338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df339: ret  */ FN_RET(0x004df308); r_esp += 4; return;
}

void f_004df33c(void) /* sub_4DF33C */
{
    FN_ENTER(0x004df33c);
    /* 004df33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df33d: mov ebp, esp */ r_ebp = r_esp;
    /* 004df33f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004df341: push 0x8d2644 */ { u32 v = 0x8d2644u; r_esp -= 4; W32(r_esp, v); }
    /* 004df346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004df34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df34d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004df354: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004df35a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004df35d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004df360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004df363: mov eax, dword ptr [0xa49910] */ r_eax = R32((u32)(0xa49910u));
    /* 004df368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df36a: je 0x4df37a */ if (fZ) goto L_004df37a;
L_004df36c:; BB(0x004df36c);
    /* 004df36c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004df36f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004df376: mov esp, ebp */ r_esp = r_ebp;
    /* 004df378: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df379: ret  */ FN_RET(0x004df33c); r_esp += 4; return;
L_004df37a:; BB(0x004df37a);
    /* 004df37a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004df381: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004df386: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4df38bu); f_008581c5();
    /* 004df38b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df38c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004df38f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df391: je 0x4df402 */ if (fZ) goto L_004df402;
L_004df393:; BB(0x004df393);
    /* 004df393: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004df39a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004df3a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004df3a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df3a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df3a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df3a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df3a9: push 0x9b10e0 */ { u32 v = 0x9b10e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004df3ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004df3b0: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4df3b5u); f_005b7a84();
    /* 004df3b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004df3b8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004df3bf:; BB(0x004df3bf);
    /* 004df3bf: mov dword ptr [0xa49910], eax */ W32((u32)(0xa49910u), r_eax);
    /* 004df3c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004df3cb: call 0x4def00 */ r_esp -= 4; W32(r_esp, 0x4df3d0u); f_004def00();
    /* 004df3d0: mov ecx, dword ptr [0xa49910] */ r_ecx = R32((u32)(0xa49910u));
    /* 004df3d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004df3d8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4df3ddu); f_005b8610();
    /* 004df3dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004df3df: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004df3e2: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004df3e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004df3e7: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x4df3ecu); f_0066f3d4();
    /* 004df3ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df3ef: mov dword ptr [0xa498a4], eax */ W32((u32)(0xa498a4u), r_eax);
    /* 004df3f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004df3f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004df3fe: mov esp, ebp */ r_esp = r_ebp;
    /* 004df400: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df401: ret  */ FN_RET(0x004df33c); r_esp += 4; return;
L_004df402:; BB(0x004df402);
    /* 004df402: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df404: jmp 0x4df3bf */ goto L_004df3bf;
}

void f_004df408(void) /* sub_4DF408 */
{
    FN_ENTER(0x004df408);
    /* 004df408: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df409: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df40a: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df40d: mov edi, ecx */ r_edi = r_ecx;
    /* 004df40f: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 004df415: lea ebp, [edi + 0x144] */ r_ebp = (u32)(r_edi+0x144u);
    /* 004df41b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4df420u); f_0068d5a8();
    /* 004df420: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df421: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004df423: mov word ptr [edi + 0x144], dx */ W16((u32)(r_edi+0x144u), (u16)r_edx);
    /* 004df42a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df42c: je 0x4df48e */ if (fZ) goto L_004df48e;
L_004df42e:; BB(0x004df42e);
    /* 004df42e: mov ecx, eax */ r_ecx = r_eax;
    /* 004df430: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x4df435u); f_006936b4();
    /* 004df435: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004df438: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004df43a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df43b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004df43c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4df441u); f_00857dec();
    /* 004df441: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004df445: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df447: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 004df44c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004df44d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x4df452u); f_00858009();
    /* 004df452: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004df455: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004df458: lea eax, [eax + eax - 2] */ r_eax = (u32)(r_eax+r_eax+0xfffffffeu);
    /* 004df45c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004df45e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004df461: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004df463: jbe 0x4df47c */ if ((fC||fZ)) goto L_004df47c;
L_004df465:; BB(0x004df465);
    /* 004df465: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 004df468: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df46b: jne 0x4df47c */ if (!fZ) goto L_004df47c;
L_004df46d:; BB(0x004df46d);
    /* 004df46d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004df46f: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 004df472: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004df475: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004df478: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004df47a: ja 0x4df465 */ if ((!fC&&!fZ)) goto L_004df465;
L_004df47c:; BB(0x004df47c);
    /* 004df47c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004df47f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df480: push 0x909e00 */ { u32 v = 0x909e00u; r_esp -= 4; W32(r_esp, v); }
    /* 004df485: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df486: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4df48bu); f_00857e29();
    /* 004df48b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004df48e:; BB(0x004df48e);
    /* 004df48e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df490: mov word ptr [edi + 0x1a2], ax */ W16((u32)(r_edi+0x1a2u), (u16)r_eax);
    /* 004df497: mov ecx, edi */ r_ecx = r_edi;
    /* 004df499: call 0x4df108 */ r_esp -= 4; W32(r_esp, 0x4df49eu); f_004df108();
    /* 004df49e: mov ecx, edi */ r_ecx = r_edi;
    /* 004df4a0: call 0x4df13c */ r_esp -= 4; W32(r_esp, 0x4df4a5u); f_004df13c();
    /* 004df4a5: mov ecx, edi */ r_ecx = r_edi;
    /* 004df4a7: call 0x4df194 */ r_esp -= 4; W32(r_esp, 0x4df4acu); f_004df194();
    /* 004df4ac: mov ecx, edi */ r_ecx = r_edi;
    /* 004df4ae: call 0x4df200 */ r_esp -= 4; W32(r_esp, 0x4df4b3u); f_004df200();
    /* 004df4b3: mov ecx, edi */ r_ecx = r_edi;
    /* 004df4b5: call 0x4df250 */ r_esp -= 4; W32(r_esp, 0x4df4bau); f_004df250();
    /* 004df4ba: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df4bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df4be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df4bf: ret  */ FN_RET(0x004df408); r_esp += 4; return;
}

void f_004df4c0(void) /* sub_4DF4C0 */
{
    FN_ENTER(0x004df4c0);
    /* 004df4c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df4c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004df4c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df4c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df4c6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004df4c8: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004df4cc: mov ecx, dword ptr [0xa49910] */ r_ecx = R32((u32)(0xa49910u));
    /* 004df4d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004df4d4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4df4d9u); f_005b8624();
    /* 004df4d9: mov ecx, dword ptr [0xa49910] */ r_ecx = R32((u32)(0xa49910u));
    /* 004df4df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004df4e1: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 004df4e4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4df4e9u); f_005b8610();
    /* 004df4e9: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 004df4ec: mov dword ptr [ebp + 0xac], esi */ W32((u32)(r_ebp+0xacu), r_esi);
    /* 004df4f2: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 004df4f6: lea edi, [ebp + 0xc0] */ r_edi = (u32)(r_ebp+0xc0u);
    /* 004df4fc: mov ecx, 0x84 */ r_ecx = 0x84u;
    /* 004df501: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004df502: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004df505: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004df507: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df508: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004df50b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 004df50d: mov esi, dword ptr [ebp + 0xd0] */ r_esi = R32((u32)(r_ebp+0xd0u));
    /* 004df513: mov edi, dword ptr [ebp + 0xd4] */ r_edi = R32((u32)(r_ebp+0xd4u));
    /* 004df519: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 004df51f: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 004df525: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 004df528: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 004df52b: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 004df535: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 004df538: mov edx, eax */ r_edx = r_eax;
    /* 004df53a: shl edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004df53d: mov dword ptr [ebp + 0xb4], 0 */ W32((u32)(r_ebp+0xb4u), 0x0u);
    /* 004df547: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 004df54a: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 004df554: mov dword ptr [ebp + 0xbc], 0 */ W32((u32)(r_ebp+0xbcu), 0x0u);
    /* 004df55e: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 004df568: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004df56b: mov edx, ebp */ r_edx = r_ebp;
    /* 004df56d: call 0x4df308 */ r_esp -= 4; W32(r_esp, 0x4df572u); f_004df308();
    /* 004df572: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004df577: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df578: ret 8 */ FN_RET(0x004df4c0); r_esp += 12; return;
}

void f_004df57c(void) /* sub_4DF57C */
{
    FN_ENTER(0x004df57c);
    /* 004df57c: mov dword ptr [0xa4991c], 0x3f800000 */ W32((u32)(0xa4991cu), 0x3f800000u);
    /* 004df586: mov dword ptr [0xa49920], 0x41000000 */ W32((u32)(0xa49920u), 0x41000000u);
    /* 004df590: mov dword ptr [0xa49924], 0x3fc00000 */ W32((u32)(0xa49924u), 0x3fc00000u);
    /* 004df59a: ret  */ FN_RET(0x004df57c); r_esp += 4; return;
}

void f_004df59c(void) /* sub_4DF59C */
{
    FN_ENTER(0x004df59c);
    /* 004df59c: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 004df5a3: ret  */ FN_RET(0x004df59c); r_esp += 4; return;
}

void f_004df5a4(void) /* sub_4DF5A4 */
{
    FN_ENTER(0x004df5a4);
    /* 004df5a4: movsx eax, word ptr [ecx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 004df5ab: ret  */ FN_RET(0x004df5a4); r_esp += 4; return;
}

void f_004df5ac(void) /* sub_4DF5AC */
{
    FN_ENTER(0x004df5ac);
    /* 004df5ac: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004df5b2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4df5b7u); f_0068d5a8();
    /* 004df5b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df5b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df5ba: je 0x4df5ed */ if (fZ) goto L_004df5ed;
L_004df5bc:; BB(0x004df5bc);
    /* 004df5bc: mov ecx, eax */ r_ecx = r_eax;
    /* 004df5be: call 0x6926bc */ r_esp -= 4; W32(r_esp, 0x4df5c3u); f_006926bc();
    /* 004df5c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df5c5: jne 0x4df5ed */ if (!fZ) goto L_004df5ed;
L_004df5c7:; BB(0x004df5c7);
    /* 004df5c7: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 004df5cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df5ce: jne 0x4df5d3 */ if (!fZ) goto L_004df5d3;
L_004df5d0:; BB(0x004df5d0);
    /* 004df5d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df5d2: ret  */ FN_RET(0x004df5ac); r_esp += 4; return;
L_004df5d3:; BB(0x004df5d3);
    /* 004df5d3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4df5d8u); f_00807ac0();
    /* 004df5d8: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df5db: je 0x4df5ed */ if (fZ) goto L_004df5ed;
L_004df5dd:; BB(0x004df5dd);
    /* 004df5dd: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df5e0: je 0x4df5ed */ if (fZ) goto L_004df5ed;
L_004df5e2:; BB(0x004df5e2);
    /* 004df5e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df5e3: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x4df5e8u); f_00807d8c();
    /* 004df5e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df5eb: jne 0x4df5f0 */ if (!fZ) goto L_004df5f0;
L_004df5ed:; BB(0x004df5ed);
    /* 004df5ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df5ef: ret  */ FN_RET(0x004df5ac); r_esp += 4; return;
L_004df5f0:; BB(0x004df5f0);
    /* 004df5f0: mov eax, 1 */ r_eax = 0x1u;
    /* 004df5f5: ret  */ FN_RET(0x004df5ac); r_esp += 4; return;
}

void f_004df5f8(void) /* sub_4DF5F8 */
{
    FN_ENTER(0x004df5f8);
    /* 004df5f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df5f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004df5fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004df5fd: push 0x8d266c */ { u32 v = 0x8d266cu; r_esp -= 4; W32(r_esp, v); }
    /* 004df602: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004df608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df609: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004df610: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df613: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004df616: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004df619: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004df61c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004df61f: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004df621: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004df628: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4df62du); f_005caba4();
    /* 004df62d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df62e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004df631: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df633: je 0x4df666 */ if (fZ) goto L_004df666;
L_004df635:; BB(0x004df635);
    /* 004df635: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004df63c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004df643: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004df646: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004df649: call 0x4df6bc */ r_esp -= 4; W32(r_esp, 0x4df64eu); f_004df6bc();
    /* 004df64e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004df651: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004df658:; BB(0x004df658);
    /* 004df658: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004df65b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004df662: mov esp, ebp */ r_esp = r_ebp;
    /* 004df664: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df665: ret  */ FN_RET(0x004df5f8); r_esp += 4; return;
L_004df666:; BB(0x004df666);
    /* 004df666: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df668: jmp 0x4df658 */ goto L_004df658;
}

void f_004df66c(void) /* sub_4DF66C */
{
    FN_ENTER(0x004df66c);
    /* 004df66c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df66d: mov ebp, esp */ r_ebp = r_esp;
    /* 004df66f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004df671: push 0x8d2688 */ { u32 v = 0x8d2688u; r_esp -= 4; W32(r_esp, v); }
    /* 004df676: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004df67c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df67d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004df684: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df687: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004df68a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004df68d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004df690: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004df693: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004df696: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004df699: mov dword ptr [ecx], 0xafd0e8 */ W32((u32)(r_ecx), 0xafd0e8u);
    /* 004df69f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004df6a6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4df6abu); f_008171e8();
    /* 004df6ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004df6ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004df6b5: mov esp, ebp */ r_esp = r_ebp;
    /* 004df6b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df6b8: ret  */ FN_RET(0x004df66c); r_esp += 4; return;
}

void f_004df6bc(void) /* sub_4DF6BC */
{
    FN_ENTER(0x004df6bc);
    /* 004df6bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df6bd: mov edi, ecx */ r_edi = r_ecx;
    /* 004df6bf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004df6c3: mov ecx, edi */ r_ecx = r_edi;
    /* 004df6c5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4df6cau); f_008193cc();
    /* 004df6ca: mov dword ptr [edi], 0xafd0e8 */ W32((u32)(r_edi), 0xafd0e8u);
    /* 004df6d0: mov edx, dword ptr [0x9b1120] */ r_edx = R32((u32)(0x9b1120u));
    /* 004df6d6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004df6d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df6db: mov dword ptr [edi + 0x20], 0xffffffff */ W32((u32)(r_edi+0x20u), 0xffffffffu);
    /* 004df6e2: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004df6e5: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004df6e8: mov eax, edi */ r_eax = r_edi;
    /* 004df6ea: mov dword ptr [edi + 0x28], 0x3f800000 */ W32((u32)(r_edi+0x28u), 0x3f800000u);
    /* 004df6f1: mov dword ptr [edi + 0x2c], 0x3f800000 */ W32((u32)(r_edi+0x2cu), 0x3f800000u);
    /* 004df6f8: mov dword ptr [edi + 0x30], 0x3f800000 */ W32((u32)(r_edi+0x30u), 0x3f800000u);
    /* 004df6ff: mov dword ptr [edi + 0x34], 0x3f800000 */ W32((u32)(r_edi+0x34u), 0x3f800000u);
    /* 004df706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df707: ret 4 */ FN_RET(0x004df6bc); r_esp += 8; return;
}

void f_004df6c0(void)
{
    FN_ENTER(0x004df6c0);
    /* 004df6c0: je 0x4df6e6 */ if (fZ) goto L_004df6e6;
L_004df6c2:; BB(0x004df6c2);
    /* 004df6c2: or byte ptr [ebx - 0x62fd1731], cl */ { u32 ad = (u32)(r_ebx+0x9d02e8cfu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004df6c8: xor eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df6ca: mov dword ptr [edi], 0xafd0e8 */ W32((u32)(r_edi), 0xafd0e8u);
    /* 004df6d0: mov edx, dword ptr [0x9b1120] */ r_edx = R32((u32)(0x9b1120u));
    /* 004df6d6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004df6d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df6db: mov dword ptr [edi + 0x20], 0xffffffff */ W32((u32)(r_edi+0x20u), 0xffffffffu);
    /* 004df6e2: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004df6e5: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
L_004df6e6:; BB(0x004df6e6);
    /* 004df6e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004df6e7: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004df6e8: mov eax, edi */ r_eax = r_edi;
    /* 004df6e9: mov edi, 0x2847 */ r_edi = 0x2847u;
    /* 004df6ea: mov dword ptr [edi + 0x28], 0x3f800000 */ W32((u32)(r_edi+0x28u), 0x3f800000u);
    /* 004df6ef: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 004df6f1: mov dword ptr [edi + 0x2c], 0x3f800000 */ W32((u32)(r_edi+0x2cu), 0x3f800000u);
    /* 004df6f2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004df6f3: sub al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004df6f5: add byte ptr [eax + 0x3047c73f], al */ { u32 ad = (u32)(r_eax+0x3047c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004df6f8: mov dword ptr [edi + 0x30], 0x3f800000 */ W32((u32)(r_edi+0x30u), 0x3f800000u);
    /* 004df6fb: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004df6fd: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 004df6ff: mov dword ptr [edi + 0x34], 0x3f800000 */ W32((u32)(r_edi+0x34u), 0x3f800000u);
    /* 004df700: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004df701: xor al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004df703: add byte ptr [eax + 0x4c25f3f], al */ { u32 ad = (u32)(r_eax+0x4c25f3fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004df706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df707: ret 4 */ FN_RET(0x004df6c0); r_esp += 8; return;
    /* 004df709: add byte ptr [eax - 0x74aca870], dl */ { u32 ad = (u32)(r_eax+0x8b535790u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x004df70f, "falls out of decoded code");
}

void f_004df70c(void) /* sub_4DF70C */
{
    FN_ENTER(0x004df70c);
    /* 004df70c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df70d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df70e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004df710: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004df713: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df715: jl 0x4df745 */ if ((fS!=fO)) goto L_004df745;
L_004df717:; BB(0x004df717);
    /* 004df717: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 004df71a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df71c: jle 0x4df745 */ if ((fZ||fS!=fO)) goto L_004df745;
L_004df71e:; BB(0x004df71e);
    /* 004df71e: mov eax, ecx */ r_eax = r_ecx;
    /* 004df720: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004df721: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x004df721, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004df721, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004df723: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df725: jne 0x4df73c */ if (!fZ) goto L_004df73c;
L_004df727:; BB(0x004df727);
    /* 004df727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df72a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df72b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df72c: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 004df731: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4df736u); f_00814298();
    /* 004df736: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004df739: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_004df73c:; BB(0x004df73c);
    /* 004df73c: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df73f: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 004df742: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df743: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df744: ret  */ FN_RET(0x004df70c); r_esp += 4; return;
L_004df745:; BB(0x004df745);
    /* 004df745: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df746: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df747: ret  */ FN_RET(0x004df70c); r_esp += 4; return;
}

void f_004df748(void) /* sub_4DF748 */
{
    FN_ENTER(0x004df748);
    /* 004df748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df749: mov ebp, esp */ r_ebp = r_esp;
    /* 004df74b: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df74e: mov eax, ecx */ r_eax = r_ecx;
    /* 004df750: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004df753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df755: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004df758: fld dword ptr [0x909e9c] */ FPUSH(R_F32((u32)(0x909e9cu)));
    /* 004df75e: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 004df761: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004df764: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df767: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004df76a: jl 0x4df780 */ if ((fS!=fO)) goto L_004df780;
L_004df76c:; BB(0x004df76c);
    /* 004df76c: jmp 0x4df886 */ goto L_004df886;
L_004df771:; BB(0x004df771);
    /* 004df771: inc dword ptr [ebp - 0x40] */ { u32 ad = (u32)(r_ebp+0xffffffc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004df774: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df777: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004df77a: jge 0x4df886 */ if ((fS==fO)) goto L_004df886;
L_004df780:; BB(0x004df780);
    /* 004df780: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df781: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df784: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004df787: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4df78cu); f_0068d5a8();
    /* 004df78c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004df78f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004df792: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004df795: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004df798: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004df79b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df79d: je 0x4df7b3 */ if (fZ) goto L_004df7b3;
L_004df79f:; BB(0x004df79f);
    /* 004df79f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004df7a2: mov ecx, eax */ r_ecx = r_eax;
    /* 004df7a4: call 0x69248c */ r_esp -= 4; W32(r_esp, 0x4df7a9u); f_0069248c();
    /* 004df7a9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004df7ac: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004df7af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df7b1: je 0x4df7c5 */ if (fZ) goto L_004df7c5;
L_004df7b3:; BB(0x004df7b3);
    /* 004df7b3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df7b6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df7b9: fld dword ptr [0x909e9c] */ FPUSH(R_F32((u32)(0x909e9cu)));
    /* 004df7bf: fstp dword ptr [edx + eax*4 + 0x28] */ W_F32((u32)(r_edx+r_eax*4+0x28u), ST(0)); FPOP();
    /* 004df7c3: jmp 0x4df771 */ goto L_004df771;
L_004df7c5:; BB(0x004df7c5);
    /* 004df7c5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004df7c8: mov ecx, eax */ r_ecx = r_eax;
    /* 004df7ca: call 0x4df59c */ r_esp -= 4; W32(r_esp, 0x4df7cfu); f_004df59c();
    /* 004df7cf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004df7d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004df7d5: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004df7d8: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004df7db: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004df7de: mov ecx, eax */ r_ecx = r_eax;
    /* 004df7e0: call 0x4df5a4 */ r_esp -= 4; W32(r_esp, 0x4df7e5u); f_004df5a4();
    /* 004df7e5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004df7e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004df7eb: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004df7ee: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004df7f1: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004df7f4: fld dword ptr [0x909e98] */ FPUSH(R_F32((u32)(0x909e98u)));
    /* 004df7fa: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004df7fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df7fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df7ff: jne 0x4df816 */ if (!fZ) goto L_004df816;
L_004df801:; BB(0x004df801);
    /* 004df801: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df804: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df807: fld dword ptr [0x909e9c] */ FPUSH(R_F32((u32)(0x909e9cu)));
    /* 004df80d: fstp dword ptr [edx + eax*4 + 0x28] */ W_F32((u32)(r_edx+r_eax*4+0x28u), ST(0)); FPOP();
    /* 004df811: jmp 0x4df771 */ goto L_004df771;
L_004df816:; BB(0x004df816);
    /* 004df816: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004df819: fld dword ptr [0x909e98] */ FPUSH(R_F32((u32)(0x909e98u)));
    /* 004df81f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004df821: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df824: jb 0x4df83b */ if (fC) goto L_004df83b;
L_004df826:; BB(0x004df826);
    /* 004df826: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df829: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df82c: fld dword ptr [0x909e9c] */ FPUSH(R_F32((u32)(0x909e9cu)));
    /* 004df832: fstp dword ptr [edx + eax*4 + 0x28] */ W_F32((u32)(r_edx+r_eax*4+0x28u), ST(0)); FPOP();
    /* 004df836: jmp 0x4df771 */ goto L_004df771;
L_004df83b:; BB(0x004df83b);
    /* 004df83b: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004df83e: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004df841: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004df843: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004df846: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df849: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df84c: fld dword ptr [edx + eax*4 + 0x28] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0x28u)));
    /* 004df850: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004df853: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004df855: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df857: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df858: jae 0x4df874 */ if (!fC) goto L_004df874;
L_004df85a:; BB(0x004df85a);
    /* 004df85a: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 004df861: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 004df864: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004df867: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004df869: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df86b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df86c: jae 0x4df874 */ if (!fC) goto L_004df874;
L_004df86e:; BB(0x004df86e);
    /* 004df86e: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004df871: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
L_004df874:; BB(0x004df874);
    /* 004df874: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004df877: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df87a: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004df87d: fstp dword ptr [edx + eax*4 + 0x28] */ W_F32((u32)(r_edx+r_eax*4+0x28u), ST(0)); FPOP();
    /* 004df881: jmp 0x4df771 */ goto L_004df771;
L_004df886:; BB(0x004df886);
    /* 004df886: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004df889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df88b: je 0x4df89d */ if (fZ) goto L_004df89d;
L_004df88d:; BB(0x004df88d);
    /* 004df88d: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 004df890: fld dword ptr [0x909e9c] */ FPUSH(R_F32((u32)(0x909e9cu)));
    /* 004df896: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004df898: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df89a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df89b: ja 0x4df89f */ if ((!fC&&!fZ)) goto L_004df89f;
L_004df89d:; BB(0x004df89d);
    /* 004df89d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 004df89e: ret  */ FN_RET(0x004df748); r_esp += 4; return;
L_004df89f:; BB(0x004df89f);
    /* 004df89f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df8a2: mov dword ptr [eax + 0x20], 0x5a */ W32((u32)(r_eax+0x20u), 0x5au);
    /* 004df8a9: fld dword ptr [0x909e94] */ FPUSH(R_F32((u32)(0x909e94u)));
    /* 004df8af: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 004df8b2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004df8b4: fnstcw word ptr [ebp - 0x18] */ W16((u32)(r_ebp+0xffffffe8u), fcw);
    /* 004df8b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004df8ba: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 004df8be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004df8c3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004df8c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004df8c9: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
    /* 004df8cc: fistp dword ptr [ebp - 8] */ W32((u32)(r_ebp+0xfffffff8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004df8cf: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 004df8d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004df8d5: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004df8d8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004df8db: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004df8de: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 004df8df: ret  */ FN_RET(0x004df748); r_esp += 4; return;
}

void f_004df8e0(void) /* sub_4DF8E0 */
{
    FN_ENTER(0x004df8e0);
    /* 004df8e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004df8e1: mov edi, ecx */ r_edi = r_ecx;
    /* 004df8e3: call 0x4df5ac */ r_esp -= 4; W32(r_esp, 0x4df8e8u); f_004df5ac();
    /* 004df8e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df8ea: jne 0x4df8f5 */ if (!fZ) goto L_004df8f5;
L_004df8ec:; BB(0x004df8ec);
    /* 004df8ec: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 004df8f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df8f4: ret  */ FN_RET(0x004df8e0); r_esp += 4; return;
L_004df8f5:; BB(0x004df8f5);
    /* 004df8f5: mov ecx, edi */ r_ecx = r_edi;
    /* 004df8f7: call 0x4df748 */ r_esp -= 4; W32(r_esp, 0x4df8fcu); f_004df748();
    /* 004df8fc: mov ecx, edi */ r_ecx = r_edi;
    /* 004df8fe: call 0x4df70c */ r_esp -= 4; W32(r_esp, 0x4df903u); f_004df70c();
    /* 004df903: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004df904: ret  */ FN_RET(0x004df8e0); r_esp += 4; return;
}

void f_004df908(void) /* sub_4DF908 */
{
    FN_ENTER(0x004df908);
    /* 004df908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df909: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004df90b: mov dword ptr [ebp + 0x20], 0xffffffff */ W32((u32)(r_ebp+0x20u), 0xffffffffu);
    /* 004df912: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 004df919: call 0x4df5ac */ r_esp -= 4; W32(r_esp, 0x4df91eu); f_004df5ac();
    /* 004df91e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df920: je 0x4df92b */ if (fZ) goto L_004df92b;
L_004df922:; BB(0x004df922);
    /* 004df922: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004df929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df92a: ret  */ FN_RET(0x004df908); r_esp += 4; return;
L_004df92b:; BB(0x004df92b);
    /* 004df92b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df92c: ret  */ FN_RET(0x004df908); r_esp += 4; return;
}

void f_004df930(void) /* sub_4DF930 */
{
    FN_ENTER(0x004df930);
    /* 004df930: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004df933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004df935: jne 0x4df93d */ if (!fZ) goto L_004df93d;
L_004df937:; BB(0x004df937);
    /* 004df937: call 0x4df908 */ r_esp -= 4; W32(r_esp, 0x4df93cu); f_004df908();
    /* 004df93c: ret  */ FN_RET(0x004df930); r_esp += 4; return;
L_004df93d:; BB(0x004df93d);
    /* 004df93d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004df940: jne 0x4df947 */ if (!fZ) goto L_004df947;
L_004df942:; BB(0x004df942);
    /* 004df942: call 0x4df8e0 */ r_esp -= 4; W32(r_esp, 0x4df947u); f_004df8e0();
L_004df947:; BB(0x004df947);
    /* 004df947: ret  */ FN_RET(0x004df930); r_esp += 4; return;
}

void f_004df948(void) /* sub_4DF948 */
{
    FN_ENTER(0x004df948);
    /* 004df948: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df949: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004df94b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004df94d: call 0x4df66c */ r_esp -= 4; W32(r_esp, 0x4df952u); f_004df66c();
    /* 004df952: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004df956: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df958: jne 0x4df95e */ if (!fZ) goto L_004df95e;
L_004df95a:; BB(0x004df95a);
    /* 004df95a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df95b: ret 4 */ FN_RET(0x004df948); r_esp += 8; return;
L_004df95e:; BB(0x004df95e);
    /* 004df95e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df95f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4df964u); f_005c2f74();
    /* 004df964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df965: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df966: ret 4 */ FN_RET(0x004df948); r_esp += 8; return;
}

void f_004df96c(void) /* sub_4DF96C */
{
    FN_ENTER(0x004df96c);
    /* 004df96c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df96d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004df96f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004df971: call 0x4df990 */ r_esp -= 4; W32(r_esp, 0x4df976u); f_004df990();
    /* 004df976: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004df97a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004df97c: jne 0x4df982 */ if (!fZ) goto L_004df982;
L_004df97e:; BB(0x004df97e);
    /* 004df97e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df97f: ret 4 */ FN_RET(0x004df96c); r_esp += 8; return;
L_004df982:; BB(0x004df982);
    /* 004df982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004df983: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4df988u); f_005c2f74();
    /* 004df988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004df989: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004df98a: ret 4 */ FN_RET(0x004df96c); r_esp += 8; return;
}

void f_004df990(void) /* sub_4DF990 */
{
    FN_ENTER(0x004df990);
    /* 004df990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df991: mov ebp, esp */ r_ebp = r_esp;
    /* 004df993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004df995: push 0x8d26a4 */ { u32 v = 0x8d26a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004df99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004df9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df9a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004df9a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004df9ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004df9ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004df9b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004df9b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004df9b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004df9ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004df9bd: mov dword ptr [ecx], 0xafd1d8 */ W32((u32)(r_ecx), 0xafd1d8u);
    /* 004df9c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004df9c5: mov dword ptr [0xa4d7f8], eax */ W32((u32)(0xa4d7f8u), r_eax);
    /* 004df9ca: mov dword ptr [0xa4d848], eax */ W32((u32)(0xa4d848u), r_eax);
    /* 004df9cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004df9d6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4df9dbu); f_008171e8();
    /* 004df9db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004df9de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004df9e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004df9e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004df9e8: ret  */ FN_RET(0x004df990); r_esp += 4; return;
}

void f_004df9ec(void) /* sub_4DF9EC */
{
    FN_ENTER(0x004df9ec);
    /* 004df9ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004df9ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004df9ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004df9f1: push 0x8d2702 */ { u32 v = 0x8d2702u; r_esp -= 4; W32(r_esp, v); }
    /* 004df9f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004df9fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004df9fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dfa04: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dfa07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dfa0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004dfa0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004dfa10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004dfa13: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004dfa14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004dfa16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dfa18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dfa1a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dfa1c: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4dfa22u); call_ind(t); }
    /* 004dfa22: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004dfa23: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004dfa24: jmp 0x4e2c45 */ goto L_004e2c45;
L_004e2c45:; BB(0x004e2c45);
    /* 004e2c45: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004e2c46: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2c48: push 0x9ff420 */ { u32 v = 0x9ff420u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2c4d: call 0x793cf0 */ r_esp -= 4; W32(r_esp, 0x4e2c52u); f_00793cf0();
    /* 004e2c52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e2c55: call 0x4d471c */ r_esp -= 4; W32(r_esp, 0x4e2c5au); f_004d471c();
    /* 004e2c5a: call 0x4d4800 */ r_esp -= 4; W32(r_esp, 0x4e2c5fu); f_004d4800();
    /* 004e2c5f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004e2c66: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2c6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4e2c70u); f_005caba4();
    /* 004e2c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2c71: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004e2c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e2c76: je 0x4e2c9a */ if (fZ) goto L_004e2c9a;
L_004e2c78:; BB(0x004e2c78);
    /* 004e2c78: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 004e2c7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e2c86: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2c8c: mov ecx, eax */ r_ecx = r_eax;
    /* 004e2c8e: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x4e2c93u); f_004d3408();
    /* 004e2c93: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004e2c9a:; BB(0x004e2c9a);
    /* 004e2c9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004e2ca1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2ca3: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x4e2ca8u); f_004d30fc();
    /* 004e2ca8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2ca9: call 0x4eb520 */ r_esp -= 4; W32(r_esp, 0x4e2caeu); f_004eb520();
    /* 004e2cae: call 0x401220 */ r_esp -= 4; W32(r_esp, 0x4e2cb3u); f_00401220();
    /* 004e2cb3: call 0x40141c */ r_esp -= 4; W32(r_esp, 0x4e2cb8u); f_0040141c();
    /* 004e2cb8: call 0x7933bc */ r_esp -= 4; W32(r_esp, 0x4e2cbdu); f_007933bc();
    /* 004e2cbd: call 0x7896c8 */ r_esp -= 4; W32(r_esp, 0x4e2cc2u); f_007896c8();
    /* 004e2cc2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4e2cc7u); f_0061cdb0();
    /* 004e2cc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2cc9: call 0x71a198 */ r_esp -= 4; W32(r_esp, 0x4e2cceu); f_0071a198();
    /* 004e2cce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2ccf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004e2cd6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2cd8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4e2cddu); f_005caba4();
    /* 004e2cdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2cde: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004e2ce1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e2ce3: je 0x4e2d01 */ if (fZ) goto L_004e2d01;
L_004e2ce5:; BB(0x004e2ce5);
    /* 004e2ce5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 004e2cec: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004e2cf3: mov ecx, eax */ r_ecx = r_eax;
    /* 004e2cf5: call 0x7195c8 */ r_esp -= 4; W32(r_esp, 0x4e2cfau); f_007195c8();
    /* 004e2cfa: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004e2d01:; BB(0x004e2d01);
    /* 004e2d01: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004e2d08: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004e2d0f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d14: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4e2d19u); f_008581c5();
    /* 004e2d19: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004e2d1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e2d1f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004e2d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e2d24: je 0x4e2e67 */ if (fZ) goto L_004e2e67;
L_004e2d2a:; BB(0x004e2d2a);
    /* 004e2d2a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004e2d31: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004e2d38: mov ecx, eax */ r_ecx = r_eax;
    /* 004e2d3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e2d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d3f: push 0x9b1308 */ { u32 v = 0x9b1308u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d46: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4e2d4bu); f_005b7a84();
    /* 004e2d4b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004e2d52:; BB(0x004e2d52);
    /* 004e2d52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004e2d55: mov dword ptr [0xa4d7f4], eax */ W32((u32)(0xa4d7f4u), r_eax);
    /* 004e2d5a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004e2d61: mov eax, dword ptr [0xa4d7f4] */ r_eax = R32((u32)(0xa4d7f4u));
    /* 004e2d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e2d68: jne 0x4e2d81 */ if (!fZ) goto L_004e2d81;
L_004e2d6a:; BB(0x004e2d6a);
    /* 004e2d6a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e2d6d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004e2d70: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e2d73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e2d76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e2d7d: mov esp, ebp */ r_esp = r_ebp;
    /* 004e2d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e2d80: ret  */ FN_RET(0x004df9ec); r_esp += 4; return;
L_004e2d81:; BB(0x004e2d81);
    /* 004e2d81: call 0x4ea4a4 */ r_esp -= 4; W32(r_esp, 0x4e2d86u); f_004ea4a4();
    /* 004e2d86: call 0x4e2e74 */ r_esp -= 4; W32(r_esp, 0x4e2d8bu); f_004e2e74();
    /* 004e2d8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d8d: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x4e2d92u); f_00815584();
    /* 004e2d92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2d93: push 0x90a40c */ { u32 v = 0x90a40cu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2d98: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x4e2d9du); f_00814afc();
    /* 004e2d9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2d9e: call 0x4e2ebc */ r_esp -= 4; W32(r_esp, 0x4e2da3u); f_004e2ebc();
    /* 004e2da3: call 0x4e2edc */ r_esp -= 4; W32(r_esp, 0x4e2da8u); f_004e2edc();
    /* 004e2da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e2daa: je 0x4e2ddf */ if (fZ) goto L_004e2ddf;
L_004e2dac:; BB(0x004e2dac);
    /* 004e2dac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e2dae: mov dword ptr [0xa4d7fc], eax */ W32((u32)(0xa4d7fcu), r_eax);
    /* 004e2db3: mov word ptr [0xa4d800], ax */ W16((u32)(0xa4d800u), (u16)r_eax);
    /* 004e2db9: call 0x4e30cc */ r_esp -= 4; W32(r_esp, 0x4e2dbeu); f_004e30cc();
    /* 004e2dbe: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2dc4: mov byte ptr [0xa49971], 0xff */ W8((u32)(0xa49971u), 0xffu);
    /* 004e2dcb: call 0x4eb8fc */ r_esp -= 4; W32(r_esp, 0x4e2dd0u); f_004eb8fc();
    /* 004e2dd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2dd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2dd3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2dd5: call 0x4ec3c8 */ r_esp -= 4; W32(r_esp, 0x4e2ddau); f_004ec3c8();
    /* 004e2dda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e2ddd: jmp 0x4e2e20 */ goto L_004e2e20;
L_004e2ddf:; BB(0x004e2ddf);
    /* 004e2ddf: mov dword ptr [0xa4d7fc], 1 */ W32((u32)(0xa4d7fcu), 0x1u);
    /* 004e2de9: call 0x4e2f0c */ r_esp -= 4; W32(r_esp, 0x4e2deeu); f_004e2f0c();
    /* 004e2dee: mov byte ptr [0xa49971], 0xff */ W8((u32)(0xa49971u), 0xffu);
    /* 004e2df5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2dfa: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4e2dffu); f_006c1bcc();
    /* 004e2dff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e2e00: add eax, 0x370 */ {  u32 a = r_eax; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e2e05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e06: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e2e0c: call 0x4e2f44 */ r_esp -= 4; W32(r_esp, 0x4e2e11u); f_004e2f44();
    /* 004e2e11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e2e14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e16: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e18: call 0x4ec3c8 */ r_esp -= 4; W32(r_esp, 0x4e2e1du); f_004ec3c8();
    /* 004e2e1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004e2e20:; BB(0x004e2e20);
    /* 004e2e20: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004e2e21: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e2e29: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4e2e2fu); call_ind(t); }
    /* 004e2e2f: jmp 0x4e2e4f */ goto L_004e2e4f;
L_004e2e4f:; BB(0x004e2e4f);
    /* 004e2e4f: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004e2e50: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e2e53: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004e2e56: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e2e59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e2e5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e2e63: mov esp, ebp */ r_esp = r_ebp;
    /* 004e2e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e2e66: ret  */ FN_RET(0x004df9ec); r_esp += 4; return;
L_004e2e67:; BB(0x004e2e67);
    /* 004e2e67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e2e69: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004e2e6c: jmp 0x4e2d52 */ goto L_004e2d52;
}

