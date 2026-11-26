#include "protos.h"

void f_0044620d(void)
{
    FN_ENTER(0x0044620d);
    /* 0044620d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446210: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x446215u); f_007aa094();
    /* 00446215: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446218: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0044621e: fcomp dword ptr [0x8fe7c4] */ fx_compare(ST(0), R_F32((u32)(0x8fe7c4u))); FPOP();
    /* 00446224: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00446226: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00446227: jb 0x4464fb */ if (fC) goto L_004464fb;
L_0044622d:; BB(0x0044622d);
    /* 0044622d: mov eax, edx */ r_eax = r_edx;
    /* 0044622f: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00446239: mov word ptr [eax + 0x344], si */ W16((u32)(r_eax+0x344u), (u16)r_esi);
    /* 00446240: jmp 0x4464fb */ goto L_004464fb;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x0044620d); r_esp += 4; return;
}

void f_00446245(void)
{
    FN_ENTER(0x00446245);
    /* 00446245: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00446248: mov eax, dword ptr [eax + 0x390] */ r_eax = R32((u32)(r_eax+0x390u));
    /* 0044624e: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00446253: jne 0x4464fb */ if (!fZ) goto L_004464fb;
L_00446259:; BB(0x00446259);
    /* 00446259: test eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044625e: je 0x446287 */ if (fZ) goto L_00446287;
L_00446260:; BB(0x00446260);
    /* 00446260: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446263: mov dword ptr [edx + 0x384], 4 */ W32((u32)(r_edx+0x384u), 0x4u);
    /* 0044626d: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00446270: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446274: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446275: push 0x345 */ { u32 v = 0x345u; r_esp -= 4; W32(r_esp, v); }
    /* 0044627a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44627fu); f_00814298();
    /* 0044627f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446282: jmp 0x4464fb */ goto L_004464fb;
L_00446287:; BB(0x00446287);
    /* 00446287: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044628a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044628c: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x446292u); call_ind(t); }
    /* 00446292: jmp 0x4464fb */ goto L_004464fb;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00446245); r_esp += 4; return;
}

void f_00446297(void)
{
    FN_ENTER(0x00446297);
    /* 00446297: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0044629e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004462a3: mov dword ptr [ebp - 0x38], 0x41f00000 */ W32((u32)(r_ebp+0xffffffc8u), 0x41f00000u);
    /* 004462aa: mov dword ptr [ebp - 0x34], 0x420c0000 */ W32((u32)(r_ebp+0xffffffccu), 0x420c0000u);
    /* 004462b1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4462b6u); f_0082d990();
    /* 004462b6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004462b9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004462bc: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004462bf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4462c4u); f_0082d838();
    /* 004462c4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004462c7: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004462ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004462cc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4462d1u); f_0082d8bc();
    /* 004462d1: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 004462d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004462d5: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 004462d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004462da: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4462dfu); f_00830aa0();
    /* 004462df: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4462e4u); f_0082da80();
    /* 004462e4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004462e7: mov ecx, dword ptr [eax + 0x480] */ r_ecx = R32((u32)(r_eax+0x480u));
    /* 004462ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004462ef: je 0x4462fa */ if (fZ) goto L_004462fa;
L_004462f1:; BB(0x004462f1);
    /* 004462f1: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 004462f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004462f5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4462fau); f_00508db8();
L_004462fa:; BB(0x004462fa);
    /* 004462fa: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004462fd: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00446304: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00446307: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044630e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00446311: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00446313: jle 0x4466f9 */ if ((fZ||fS!=fO)) goto L_004466f9;
L_00446319:; BB(0x00446319);
    /* 00446319: jmp 0x4464fb */ goto L_004464fb;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00446297); r_esp += 4; return;
L_004466f9:; BB(0x004466f9);
    /* 004466f9: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 004466ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446701: je 0x44671d */ if (fZ) goto L_0044671d;
L_00446703:; BB(0x00446703);
    /* 00446703: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00446707: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044670c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00446710: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446713: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_0044671d:; BB(0x0044671d);
    /* 0044671d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00446724: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446729: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44672eu); f_005caba4();
    /* 0044672e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044672f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00446732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446734: je 0x446762 */ if (fZ) goto L_00446762;
L_00446736:; BB(0x00446736);
    /* 00446736: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0044673d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446744: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 00446747: lea esi, [ebp - 0x3c] */ r_esi = (u32)(r_ebp+0xffffffc4u);
    /* 0044674a: movzx edx, word ptr [edi + 0x340] */ r_edx = (u32)R16((u32)(r_edi+0x340u));
    /* 00446751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446752: mov ecx, eax */ r_ecx = r_eax;
    /* 00446754: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446755: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00446756: call 0x44a54c */ r_esp -= 4; W32(r_esp, 0x44675bu); f_0044a54c();
    /* 0044675b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00446762:; BB(0x00446762);
    /* 00446762: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00446769: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044676c: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 0044676f: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00446775: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044677a: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00446780: mov dword ptr [ecx + 0x384], 3 */ W32((u32)(r_ecx+0x384u), 0x3u);
    /* 0044678a: mov edx, 6 */ r_edx = 0x6u;
    /* 0044678f: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00446796: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00446798: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446799: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044679a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044679b: push 0x356 */ { u32 v = 0x356u; r_esp -= 4; W32(r_esp, v); }
    /* 004467a0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4467a5u); f_00814298();
    /* 004467a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004467a8: jmp 0x4464fb */ goto L_004464fb;
}

void f_0044631e(void)
{
    FN_ENTER(0x0044631e);
    /* 0044631e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446321: mov esi, dword ptr [0xa44b68] */ r_esi = R32((u32)(0xa44b68u));
    /* 00446327: mov edi, dword ptr [0xa44b7c] */ r_edi = R32((u32)(0xa44b7cu));
    /* 0044632d: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00446333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446335: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0044633c: mov eax, dword ptr [0xa44b6c] */ r_eax = R32((u32)(0xa44b6cu));
    /* 00446341: and edx, 0xffcfffff */ {  u32 a = r_edx; u32 b = 0xffcfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00446347: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0044634d: or dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446350: or dword ptr [edi], 8 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446353: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446356: mov eax, dword ptr [0xa44b80] */ r_eax = R32((u32)(0xa44b80u));
    /* 0044635b: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044635e: mov eax, dword ptr [0xa44b70] */ r_eax = R32((u32)(0xa44b70u));
    /* 00446363: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446366: mov eax, dword ptr [0xa44b84] */ r_eax = R32((u32)(0xa44b84u));
    /* 0044636b: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044636e: mov eax, dword ptr [0xa44b74] */ r_eax = R32((u32)(0xa44b74u));
    /* 00446373: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446376: mov eax, dword ptr [0xa44b88] */ r_eax = R32((u32)(0xa44b88u));
    /* 0044637b: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044637e: mov eax, dword ptr [0xa44b78] */ r_eax = R32((u32)(0xa44b78u));
    /* 00446383: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446386: mov eax, dword ptr [0xa44b8c] */ r_eax = R32((u32)(0xa44b8cu));
    /* 0044638b: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044638e: movzx eax, word ptr [0x9a4dec] */ r_eax = (u32)R16((u32)(0x9a4decu));
    /* 00446395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446396: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x44639bu); f_007b4d18();
    /* 0044639b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044639c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044639e: je 0x4463ae */ if (fZ) goto L_004463ae;
L_004463a0:; BB(0x004463a0);
    /* 004463a0: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004463a4: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004463aa: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_004463ae:; BB(0x004463ae);
    /* 004463ae: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004463b1: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 004463bb: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004463be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004463c0: je 0x4464fb */ if (fZ) goto L_004464fb;
L_004463c6:; BB(0x004463c6);
    /* 004463c6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004463c9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4463ceu); f_007aa094();
    /* 004463ce: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 004463d4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004463d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004463d8: jle 0x446827 */ if ((fZ||fS!=fO)) goto L_00446827;
L_004463de:; BB(0x004463de);
    /* 004463de: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004463e1: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004463e4: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
L_004463e7:; BB(0x004463e7);
    /* 004463e7: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 004463ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004463f0: je 0x4464c4 */ if (fZ) goto L_004464c4;
L_004463f6:; BB(0x004463f6);
    /* 004463f6: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004463fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004463fb: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x446400u); f_007ba9ec();
    /* 00446400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00446401: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00446404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446406: je 0x446413 */ if (fZ) goto L_00446413;
L_00446408:; BB(0x00446408);
    /* 00446408: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0044640e: jmp 0x4464c4 */ goto L_004464c4;
L_00446413:; BB(0x00446413);
    /* 00446413: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446416: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00446419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044641a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044641b: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x446420u); f_0078ea50();
    /* 00446420: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446423: fcomp dword ptr [0x8fe7c8] */ fx_compare(ST(0), R_F32((u32)(0x8fe7c8u))); FPOP();
    /* 00446429: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044642b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044642c: jbe 0x446439 */ if ((fC||fZ)) goto L_00446439;
L_0044642e:; BB(0x0044642e);
    /* 0044642e: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00446434: jmp 0x4464c4 */ goto L_004464c4;
L_00446439:; BB(0x00446439);
    /* 00446439: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044643c: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 0044643f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00446442: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00446445: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00446448: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044644b: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044644e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00446451: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x446456u); f_0082f9c4();
    /* 00446456: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00446459: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0044645c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044645e: fmul qword ptr [0x8fe6e8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6e8u));
    /* 00446464: fdiv qword ptr [0x8fe6e0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6e0u));
    /* 0044646a: fnstcw word ptr [ebp - 0x80] */ W16((u32)(r_ebp+0xffffff80u), fcw);
    /* 0044646d: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 00446471: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446476: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00446479: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 0044647c: fistp dword ptr [ebp - 0x70] */ W32((u32)(r_ebp+0xffffff90u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044647f: fldcw word ptr [ebp - 0x80] */ fcw = R16((u32)(r_ebp+0xffffff80u));
    /* 00446482: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00446485: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00446488: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44648du); f_0082ddd8();
    /* 0044648d: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00446493: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00446496: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00446499: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44649eu); f_0082dcbc();
    /* 0044649e: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 004464a4: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004464a7: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004464aa: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 004464ad: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4464b2u); f_0082ebac();
    /* 004464b2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004464b5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004464b8: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 004464be: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004464c1: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_004464c4:; BB(0x004464c4);
    /* 004464c4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004464c7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004464c9: jl 0x4463e7 */ if ((fS!=fO)) goto L_004463e7;
L_004464cf:; BB(0x004464cf);
    /* 004464cf: jmp 0x4467ad */ goto L_004467ad;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x0044631e); r_esp += 4; return;
L_004467ad:; BB(0x004467ad);
    /* 004467ad: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004467b0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004467b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004467b5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004467b8: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 004467bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004467be: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x4467c3u); f_0052cc54();
    /* 004467c3: mov esi, eax */ r_esi = r_eax;
    /* 004467c5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004467c8: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 004467cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004467cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004467d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004467d1: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 004467d6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4467dbu); f_008144b0();
    /* 004467db: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004467de: mov eax, esi */ r_eax = r_esi;
    /* 004467e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004467e1: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004467e3: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004467e5: cmp esi, 0x566 */ {  u32 a = r_esi; u32 b = 0x566u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004467eb: jg 0x4464fb */ if ((!fZ&&fS==fO)) goto L_004464fb;
L_004467f1:; BB(0x004467f1);
    /* 004467f1: mov edx, edi */ r_edx = r_edi;
    /* 004467f3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004467f6: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 004467fb: mov eax, 0x2d */ r_eax = 0x2du;
    /* 00446800: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00446807: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446808: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x44680du); f_00509590();
    /* 0044680d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446810: mov edx, edi */ r_edx = r_edi;
    /* 00446812: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 0044681c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00446822: jmp 0x4464fb */ goto L_004464fb;
L_00446827:; BB(0x00446827);
    /* 00446827: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0044682a: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044682d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00446830: jmp 0x4467ad */ goto L_004467ad;
}

void f_0044637b(void)
{
    FN_ENTER(0x0044637b);
    /* 0044637b: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044637e: mov eax, dword ptr [0xa44b78] */ r_eax = R32((u32)(0xa44b78u));
    /* 00446383: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446386: mov eax, dword ptr [0xa44b8c] */ r_eax = R32((u32)(0xa44b8cu));
    /* 0044638b: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044638e: movzx eax, word ptr [0x9a4dec] */ r_eax = (u32)R16((u32)(0x9a4decu));
    /* 00446395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446396: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x44639bu); f_007b4d18();
    /* 0044639b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044639c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044639e: je 0x4463ae */ if (fZ) goto L_004463ae;
L_004463a0:; BB(0x004463a0);
    /* 004463a0: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004463a4: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004463aa: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_004463ae:; BB(0x004463ae);
    /* 004463ae: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004463b1: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 004463bb: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004463be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004463c0: je 0x4464fb */ if (fZ) goto L_004464fb;
L_004463c6:; BB(0x004463c6);
    /* 004463c6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004463c9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4463ceu); f_007aa094();
    /* 004463ce: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 004463d4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004463d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004463d8: jle 0x446827 */ if ((fZ||fS!=fO)) goto L_00446827;
L_004463de:; BB(0x004463de);
    /* 004463de: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004463e1: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004463e4: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
L_004463e7:; BB(0x004463e7);
    /* 004463e7: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 004463ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004463f0: je 0x4464c4 */ if (fZ) goto L_004464c4;
L_004463f6:; BB(0x004463f6);
    /* 004463f6: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004463fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004463fb: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x446400u); f_007ba9ec();
    /* 00446400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00446401: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00446404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446406: je 0x446413 */ if (fZ) goto L_00446413;
L_00446408:; BB(0x00446408);
    /* 00446408: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0044640e: jmp 0x4464c4 */ goto L_004464c4;
L_00446413:; BB(0x00446413);
    /* 00446413: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446416: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00446419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044641a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044641b: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x446420u); f_0078ea50();
    /* 00446420: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446423: fcomp dword ptr [0x8fe7c8] */ fx_compare(ST(0), R_F32((u32)(0x8fe7c8u))); FPOP();
    /* 00446429: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044642b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044642c: jbe 0x446439 */ if ((fC||fZ)) goto L_00446439;
L_0044642e:; BB(0x0044642e);
    /* 0044642e: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00446434: jmp 0x4464c4 */ goto L_004464c4;
L_00446439:; BB(0x00446439);
    /* 00446439: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044643c: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 0044643f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00446442: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00446445: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00446448: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044644b: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044644e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00446451: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x446456u); f_0082f9c4();
    /* 00446456: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00446459: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0044645c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044645e: fmul qword ptr [0x8fe6e8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6e8u));
    /* 00446464: fdiv qword ptr [0x8fe6e0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6e0u));
    /* 0044646a: fnstcw word ptr [ebp - 0x80] */ W16((u32)(r_ebp+0xffffff80u), fcw);
    /* 0044646d: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 00446471: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446476: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00446479: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 0044647c: fistp dword ptr [ebp - 0x70] */ W32((u32)(r_ebp+0xffffff90u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044647f: fldcw word ptr [ebp - 0x80] */ fcw = R16((u32)(r_ebp+0xffffff80u));
    /* 00446482: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00446485: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00446488: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44648du); f_0082ddd8();
    /* 0044648d: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00446493: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00446496: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00446499: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44649eu); f_0082dcbc();
    /* 0044649e: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 004464a4: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004464a7: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004464aa: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 004464ad: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4464b2u); f_0082ebac();
    /* 004464b2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004464b5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004464b8: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 004464be: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004464c1: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_004464c4:; BB(0x004464c4);
    /* 004464c4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004464c7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004464c9: jl 0x4463e7 */ if ((fS!=fO)) goto L_004463e7;
L_004464cf:; BB(0x004464cf);
    /* 004464cf: jmp 0x4467ad */ goto L_004467ad;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x0044637b); r_esp += 4; return;
L_004467ad:; BB(0x004467ad);
    /* 004467ad: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004467b0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004467b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004467b5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004467b8: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 004467bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004467be: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x4467c3u); f_0052cc54();
    /* 004467c3: mov esi, eax */ r_esi = r_eax;
    /* 004467c5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004467c8: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 004467cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004467cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004467d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004467d1: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 004467d6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4467dbu); f_008144b0();
    /* 004467db: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004467de: mov eax, esi */ r_eax = r_esi;
    /* 004467e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004467e1: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004467e3: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004467e5: cmp esi, 0x566 */ {  u32 a = r_esi; u32 b = 0x566u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004467eb: jg 0x4464fb */ if ((!fZ&&fS==fO)) goto L_004464fb;
L_004467f1:; BB(0x004467f1);
    /* 004467f1: mov edx, edi */ r_edx = r_edi;
    /* 004467f3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004467f6: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 004467fb: mov eax, 0x2d */ r_eax = 0x2du;
    /* 00446800: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00446807: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446808: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x44680du); f_00509590();
    /* 0044680d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446810: mov edx, edi */ r_edx = r_edi;
    /* 00446812: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 0044681c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00446822: jmp 0x4464fb */ goto L_004464fb;
L_00446827:; BB(0x00446827);
    /* 00446827: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0044682a: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044682d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00446830: jmp 0x4467ad */ goto L_004467ad;
}

void f_004463bb(void)
{
    FN_ENTER(0x004463bb);
    /* 004463bb: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004463be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004463c0: je 0x4464fb */ if (fZ) goto L_004464fb;
L_004463c6:; BB(0x004463c6);
    /* 004463c6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004463c9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4463ceu); f_007aa094();
    /* 004463ce: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 004463d4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004463d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004463d8: jle 0x446827 */ if ((fZ||fS!=fO)) goto L_00446827;
L_004463de:; BB(0x004463de);
    /* 004463de: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004463e1: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004463e4: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
L_004463e7:; BB(0x004463e7);
    /* 004463e7: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 004463ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004463f0: je 0x4464c4 */ if (fZ) goto L_004464c4;
L_004463f6:; BB(0x004463f6);
    /* 004463f6: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004463fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004463fb: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x446400u); f_007ba9ec();
    /* 00446400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00446401: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00446404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446406: je 0x446413 */ if (fZ) goto L_00446413;
L_00446408:; BB(0x00446408);
    /* 00446408: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0044640e: jmp 0x4464c4 */ goto L_004464c4;
L_00446413:; BB(0x00446413);
    /* 00446413: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446416: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00446419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044641a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044641b: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x446420u); f_0078ea50();
    /* 00446420: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446423: fcomp dword ptr [0x8fe7c8] */ fx_compare(ST(0), R_F32((u32)(0x8fe7c8u))); FPOP();
    /* 00446429: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044642b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044642c: jbe 0x446439 */ if ((fC||fZ)) goto L_00446439;
L_0044642e:; BB(0x0044642e);
    /* 0044642e: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00446434: jmp 0x4464c4 */ goto L_004464c4;
L_00446439:; BB(0x00446439);
    /* 00446439: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044643c: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 0044643f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00446442: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00446445: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00446448: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044644b: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044644e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00446451: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x446456u); f_0082f9c4();
    /* 00446456: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00446459: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0044645c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044645e: fmul qword ptr [0x8fe6e8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6e8u));
    /* 00446464: fdiv qword ptr [0x8fe6e0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6e0u));
    /* 0044646a: fnstcw word ptr [ebp - 0x80] */ W16((u32)(r_ebp+0xffffff80u), fcw);
    /* 0044646d: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 00446471: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446476: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00446479: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 0044647c: fistp dword ptr [ebp - 0x70] */ W32((u32)(r_ebp+0xffffff90u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044647f: fldcw word ptr [ebp - 0x80] */ fcw = R16((u32)(r_ebp+0xffffff80u));
    /* 00446482: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00446485: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00446488: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44648du); f_0082ddd8();
    /* 0044648d: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00446493: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00446496: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00446499: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44649eu); f_0082dcbc();
    /* 0044649e: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 004464a4: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004464a7: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004464aa: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 004464ad: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4464b2u); f_0082ebac();
    /* 004464b2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004464b5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004464b8: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 004464be: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004464c1: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_004464c4:; BB(0x004464c4);
    /* 004464c4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004464c7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004464c9: jl 0x4463e7 */ if ((fS!=fO)) goto L_004463e7;
L_004464cf:; BB(0x004464cf);
    /* 004464cf: jmp 0x4467ad */ goto L_004467ad;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x004463bb); r_esp += 4; return;
L_004467ad:; BB(0x004467ad);
    /* 004467ad: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004467b0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004467b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004467b5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004467b8: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 004467bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004467be: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x4467c3u); f_0052cc54();
    /* 004467c3: mov esi, eax */ r_esi = r_eax;
    /* 004467c5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004467c8: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 004467cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004467cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004467d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004467d1: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 004467d6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4467dbu); f_008144b0();
    /* 004467db: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004467de: mov eax, esi */ r_eax = r_esi;
    /* 004467e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004467e1: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004467e3: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004467e5: cmp esi, 0x566 */ {  u32 a = r_esi; u32 b = 0x566u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004467eb: jg 0x4464fb */ if ((!fZ&&fS==fO)) goto L_004464fb;
L_004467f1:; BB(0x004467f1);
    /* 004467f1: mov edx, edi */ r_edx = r_edi;
    /* 004467f3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004467f6: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 004467fb: mov eax, 0x2d */ r_eax = 0x2du;
    /* 00446800: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00446807: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446808: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x44680du); f_00509590();
    /* 0044680d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446810: mov edx, edi */ r_edx = r_edi;
    /* 00446812: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 0044681c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00446822: jmp 0x4464fb */ goto L_004464fb;
L_00446827:; BB(0x00446827);
    /* 00446827: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0044682a: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044682d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00446830: jmp 0x4467ad */ goto L_004467ad;
}

void f_004464d4(void)
{
    FN_ENTER(0x004464d4);
    /* 004464d4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004464d7: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 004464dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004464df: je 0x4464fb */ if (fZ) goto L_004464fb;
L_004464e1:; BB(0x004464e1);
    /* 004464e1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004464e5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004464ea: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004464ee: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004464f1: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x004464d4); r_esp += 4; return;
}

void f_00446838(void) /* sub_446838 */
{
    FN_ENTER(0x00446838);
    /* 00446838: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446839: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044683c: mov esi, ecx */ r_esi = r_ecx;
    /* 0044683e: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00446844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446846: je 0x446866 */ if (fZ) goto L_00446866;
L_00446848:; BB(0x00446848);
    /* 00446848: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044684b: je 0x446887 */ if (fZ) goto L_00446887;
L_0044684d:; BB(0x0044684d);
    /* 0044684d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446850: jne 0x44693c */ if (!fZ) goto L_0044693c;
L_00446856:; BB(0x00446856);
    /* 00446856: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00446859: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044685e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00446861: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446864: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446865: ret  */ FN_RET(0x00446838); r_esp += 4; return;
L_00446866:; BB(0x00446866);
    /* 00446866: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00446869: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 00446873: mov edx, 8 */ r_edx = 0x8u;
    /* 00446878: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0044687f: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446884: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00446887:; BB(0x00446887);
    /* 00446887: mov ecx, esi */ r_ecx = r_esi;
    /* 00446889: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44688eu); f_007aa094();
    /* 0044688e: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00446894: fcom dword ptr [0x8fe7b4] */ fx_compare(ST(0), R_F32((u32)(0x8fe7b4u))); 
    /* 0044689a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044689c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044689e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044689f: jb 0x446941 */ if (fC) goto L_00446941;
L_004468a5:; BB(0x004468a5);
    /* 004468a5: fld dword ptr [0x8fe7b0] */ FPUSH(R_F32((u32)(0x8fe7b0u)));
    /* 004468ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004468ad: fmul dword ptr [0x8fe7ac] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7acu));
    /* 004468b3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004468b6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004468ba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004468bf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004468c3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004468c7: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 004468cb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004468ce: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
L_004468d3:; BB(0x004468d3);
    /* 004468d3: mov eax, dword ptr [0xa44b60] */ r_eax = R32((u32)(0xa44b60u));
    /* 004468d8: fld dword ptr [0x8fe7a4] */ FPUSH(R_F32((u32)(0x8fe7a4u)));
    /* 004468de: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 004468e1: mov eax, dword ptr [0xa44b90] */ r_eax = R32((u32)(0xa44b90u));
    /* 004468e6: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 004468e9: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004468ef: fcom dword ptr [0x8fe7a0] */ fx_compare(ST(0), R_F32((u32)(0x8fe7a0u))); 
    /* 004468f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004468f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004468f9: fadd dword ptr [0x8fe7a8] */ ST(0) = ST(0) + R_F32((u32)(0x8fe7a8u));
    /* 004468ff: fmul dword ptr [0x8fe798] */ ST(0) = ST(0) * R_F32((u32)(0x8fe798u));
    /* 00446905: mov dword ptr [esi + 0x484], 0x4000 */ W32((u32)(r_esi+0x484u), 0x4000u);
    /* 0044690f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00446910: jae 0x44691a */ if (!fC) goto L_0044691a;
L_00446912:; BB(0x00446912);
    /* 00446912: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00446915: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446918: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446919: ret  */ FN_RET(0x00446838); r_esp += 4; return;
L_0044691a:; BB(0x0044691a);
    /* 0044691a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044691c: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00446922: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00446924: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 0044692b: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044692e: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00446934: mov ecx, esi */ r_ecx = r_esi;
    /* 00446936: call dword ptr [edx + 0xf0] */ { u32 t = R32((u32)(r_edx+0xf0u)); r_esp -= 4; W32(r_esp, 0x44693cu); call_ind(t); }
L_0044693c:; BB(0x0044693c);
    /* 0044693c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044693f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446940: ret  */ FN_RET(0x00446838); r_esp += 4; return;
L_00446941:; BB(0x00446941);
    /* 00446941: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00446943: jmp 0x4468d3 */ goto L_004468d3;
}

void f_00446896(void)
{
    FN_ENTER(0x00446896);
    /* 00446896: mov ah, 0xe7 */ r_eax = (r_eax & 0xffff00ffu) | (((0xe7u) & 0xffu) << 8);
    /* 00446898: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 0044689a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044689c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044689e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044689f: jb 0x446941 */ if (fC) goto L_00446941;
L_004468a5:; BB(0x004468a5);
    /* 004468a5: fld dword ptr [0x8fe7b0] */ FPUSH(R_F32((u32)(0x8fe7b0u)));
    /* 004468ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004468ad: fmul dword ptr [0x8fe7ac] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7acu));
    /* 004468b3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004468b6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004468ba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004468bf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004468c3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004468c7: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 004468cb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004468ce: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
L_004468d3:; BB(0x004468d3);
    /* 004468d3: mov eax, dword ptr [0xa44b60] */ r_eax = R32((u32)(0xa44b60u));
    /* 004468d8: fld dword ptr [0x8fe7a4] */ FPUSH(R_F32((u32)(0x8fe7a4u)));
    /* 004468de: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 004468e1: mov eax, dword ptr [0xa44b90] */ r_eax = R32((u32)(0xa44b90u));
    /* 004468e6: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 004468e9: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004468ef: fcom dword ptr [0x8fe7a0] */ fx_compare(ST(0), R_F32((u32)(0x8fe7a0u))); 
    /* 004468f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004468f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004468f9: fadd dword ptr [0x8fe7a8] */ ST(0) = ST(0) + R_F32((u32)(0x8fe7a8u));
    /* 004468ff: fmul dword ptr [0x8fe798] */ ST(0) = ST(0) * R_F32((u32)(0x8fe798u));
    /* 00446905: mov dword ptr [esi + 0x484], 0x4000 */ W32((u32)(r_esi+0x484u), 0x4000u);
    /* 0044690f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00446910: jae 0x44691a */ if (!fC) goto L_0044691a;
L_00446912:; BB(0x00446912);
    /* 00446912: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00446915: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446918: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446919: ret  */ FN_RET(0x00446896); r_esp += 4; return;
L_0044691a:; BB(0x0044691a);
    /* 0044691a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044691c: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00446922: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00446924: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 0044692b: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044692e: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00446934: mov ecx, esi */ r_ecx = r_esi;
    /* 00446936: call dword ptr [edx + 0xf0] */ { u32 t = R32((u32)(r_edx+0xf0u)); r_esp -= 4; W32(r_esp, 0x44693cu); call_ind(t); }
    /* 0044693c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044693f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446940: ret  */ FN_RET(0x00446896); r_esp += 4; return;
L_00446941:; BB(0x00446941);
    /* 00446941: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00446943: jmp 0x4468d3 */ goto L_004468d3;
}

void f_00446948(void) /* sub_446948 */
{
    FN_ENTER(0x00446948);
    /* 00446948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446949: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044694a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044694d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044694f: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00446955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446957: je 0x446b4f */ if (fZ) goto L_00446b4f;
L_0044695d:; BB(0x0044695d);
    /* 0044695d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446960: je 0x446ae6 */ if (fZ) goto L_00446ae6;
L_00446966:; BB(0x00446966);
    /* 00446966: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446969: je 0x446a84 */ if (fZ) goto L_00446a84;
L_0044696f:; BB(0x0044696f);
    /* 0044696f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446972: je 0x4469c9 */ if (fZ) goto L_004469c9;
L_00446974:; BB(0x00446974);
    /* 00446974: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446977: jne 0x4469ba */ if (!fZ) goto L_004469ba;
L_00446979:; BB(0x00446979);
    /* 00446979: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00446980: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00446982: jne 0x4469a0 */ if (!fZ) goto L_004469a0;
L_00446984:; BB(0x00446984);
    /* 00446984: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446988: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0044698b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044698c: push 0x349 */ { u32 v = 0x349u; r_esp -= 4; W32(r_esp, v); }
    /* 00446991: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x446996u); f_00814298();
    /* 00446996: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446999: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
L_004469a0:; BB(0x004469a0);
    /* 004469a0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004469a3: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 004469aa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004469ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004469af: jle 0x446a70 */ if ((fZ||fS!=fO)) goto L_00446a70;
L_004469b5:; BB(0x004469b5);
    /* 004469b5: jmp 0x446a5a */ goto L_00446a5a;
L_004469ba:; BB(0x004469ba);
    /* 004469ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004469bd: jne 0x446a5a */ if (!fZ) goto L_00446a5a;
L_004469c3:; BB(0x004469c3);
    /* 004469c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004469c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004469c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004469c8: ret  */ FN_RET(0x00446948); r_esp += 4; return;
L_004469c9:; BB(0x004469c9);
    /* 004469c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004469cb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4469d0u); f_007aa094();
    /* 004469d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004469d2: call 0x446c18 */ r_esp -= 4; W32(r_esp, 0x4469d7u); f_00446c18();
    /* 004469d7: fld dword ptr [0x8fe794] */ FPUSH(R_F32((u32)(0x8fe794u)));
    /* 004469dd: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004469e3: fcom dword ptr [0x8fe790] */ fx_compare(ST(0), R_F32((u32)(0x8fe790u))); 
    /* 004469e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004469eb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004469ed: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004469f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004469f1: jb 0x446a5a */ if (fC) goto L_00446a5a;
L_004469f3:; BB(0x004469f3);
    /* 004469f3: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004469f6: lea esi, [ebx + 0x300] */ r_esi = (u32)(r_ebx+0x300u);
    /* 004469fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004469fd: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00446a00: push 0x9a5520 */ { u32 v = 0x9a5520u; r_esp -= 4; W32(r_esp, v); }
    /* 00446a05: push dword ptr [0xa44be8] */ { u32 v = R32((u32)(0xa44be8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00446a0b: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x446a10u); f_00578aa0();
    /* 00446a10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446a11: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x446a16u); f_005787d0();
    /* 00446a16: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00446a1b: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x446a20u); f_00787534();
    /* 00446a20: mov dword ptr [0xa447a0], 1 */ W32((u32)(0xa447a0u), 0x1u);
    /* 00446a2a: call 0x43e7f0 */ r_esp -= 4; W32(r_esp, 0x446a2fu); f_0043e7f0();
    /* 00446a2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446a31: je 0x446a3a */ if (fZ) goto L_00446a3a;
L_00446a33:; BB(0x00446a33);
    /* 00446a33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00446a34: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x446a39u); f_008113e4();
    /* 00446a39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00446a3a:; BB(0x00446a3a);
    /* 00446a3a: call 0x43d430 */ r_esp -= 4; W32(r_esp, 0x446a3fu); f_0043d430();
    /* 00446a3f: call 0x43e948 */ r_esp -= 4; W32(r_esp, 0x446a44u); f_0043e948();
    /* 00446a44: mov dword ptr [ebx + 0x384], 4 */ W32((u32)(r_ebx+0x384u), 0x4u);
    /* 00446a4e: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00446a53: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
L_00446a5a:; BB(0x00446a5a);
    /* 00446a5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00446a60: push 0x35b */ { u32 v = 0x35bu; r_esp -= 4; W32(r_esp, v); }
    /* 00446a65: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x446a6au); f_008144b0();
    /* 00446a6a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446a6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446a6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446a6f: ret  */ FN_RET(0x00446948); r_esp += 4; return;
L_00446a70:; BB(0x00446a70);
    /* 00446a70: call 0x6944b8 */ r_esp -= 4; W32(r_esp, 0x446a75u); f_006944b8();
    /* 00446a75: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00446a79: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446a7e: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00446a82: jmp 0x446a5a */ goto L_00446a5a;
L_00446a84:; BB(0x00446a84);
    /* 00446a84: add word ptr [ebx + 0x344], -1 */ { u32 ad = (u32)(r_ebx+0x344u);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00446a8c: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x446a91u); f_004d6864();
    /* 00446a91: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 00446a95: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00446a97: jne 0x446aa4 */ if (!fZ) goto L_00446aa4;
L_00446a99:; BB(0x00446a99);
    /* 00446a99: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00446aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00446aa2: jge 0x446ada */ if ((fS==fO)) goto L_00446ada;
L_00446aa4:; BB(0x00446aa4);
    /* 00446aa4: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x446aa9u); f_004d3250();
    /* 00446aa9: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x446aaeu); f_00717f38();
    /* 00446aae: call 0x6944b8 */ r_esp -= 4; W32(r_esp, 0x446ab3u); f_006944b8();
    /* 00446ab3: mov eax, dword ptr [0xa44b94] */ r_eax = R32((u32)(0xa44b94u));
    /* 00446ab8: mov edx, dword ptr [0xa44b98] */ r_edx = R32((u32)(0xa44b98u));
    /* 00446abe: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446ac1: mov esi, 4 */ r_esi = 0x4u;
    /* 00446ac6: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446ac9: mov word ptr [ebx + 0xb8], si */ W16((u32)(r_ebx+0xb8u), (u16)r_esi);
    /* 00446ad0: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
L_00446ada:; BB(0x00446ada);
    /* 00446ada: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00446adc: call 0x446c18 */ r_esp -= 4; W32(r_esp, 0x446ae1u); f_00446c18();
    /* 00446ae1: jmp 0x446a5a */ goto L_00446a5a;
L_00446ae6:; BB(0x00446ae6);
    /* 00446ae6: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00446aeb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446aed: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00446af2: mov byte ptr [esp], 2 */ W8((u32)(r_esp), 0x2u);
    /* 00446af6: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00446afe: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00446b06: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00446b08: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x446b0du); f_004d31f4();
    /* 00446b0d: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00446b11: push 0x160a */ { u32 v = 0x160au; r_esp -= 4; W32(r_esp, v); }
    /* 00446b16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446b17: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x446b1cu); f_004d6770();
    /* 00446b1c: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00446b23: mov edx, 0xa447b0 */ r_edx = 0xa447b0u;
    /* 00446b28: lea eax, [ebx + 0x5c] */ r_eax = (u32)(r_ebx+0x5cu);
    /* 00446b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446b2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446b2e: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x446b33u); f_004d681c();
    /* 00446b33: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446b36: call 0x69448c */ r_esp -= 4; W32(r_esp, 0x446b3bu); f_0069448c();
    /* 00446b3b: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x446b40u); f_00717f74();
    /* 00446b40: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 00446b4a: jmp 0x446a5a */ goto L_00446a5a;
L_00446b4f:; BB(0x00446b4f);
    /* 00446b4f: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 00446b55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446b57: je 0x446b70 */ if (fZ) goto L_00446b70;
L_00446b59:; BB(0x00446b59);
    /* 00446b59: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00446b5d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446b62: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00446b66: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
L_00446b70:; BB(0x00446b70);
    /* 00446b70: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 00446b76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446b78: je 0x446b91 */ if (fZ) goto L_00446b91;
L_00446b7a:; BB(0x00446b7a);
    /* 00446b7a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00446b7e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446b83: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00446b87: mov dword ptr [ebx + 0x3f0], 0 */ W32((u32)(r_ebx+0x3f0u), 0x0u);
L_00446b91:; BB(0x00446b91);
    /* 00446b91: mov edx, dword ptr [ebx + 0x3f4] */ r_edx = R32((u32)(r_ebx+0x3f4u));
    /* 00446b97: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446b99: je 0x446bb2 */ if (fZ) goto L_00446bb2;
L_00446b9b:; BB(0x00446b9b);
    /* 00446b9b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00446b9f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446ba4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00446ba8: mov dword ptr [ebx + 0x3f4], 0 */ W32((u32)(r_ebx+0x3f4u), 0x0u);
L_00446bb2:; BB(0x00446bb2);
    /* 00446bb2: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 00446bb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446bba: je 0x446bd3 */ if (fZ) goto L_00446bd3;
L_00446bbc:; BB(0x00446bbc);
    /* 00446bbc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00446bc0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446bc5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00446bc9: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
L_00446bd3:; BB(0x00446bd3);
    /* 00446bd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446bd5: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00446bdc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00446bde: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x446be3u); f_007aa094();
    /* 00446be3: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00446be8: push 0x3d23d70a */ { u32 v = 0x3d23d70au; r_esp -= 4; W32(r_esp, v); }
    /* 00446bed: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 00446bf2: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00446bf9: call 0x4d430c */ r_esp -= 4; W32(r_esp, 0x446bfeu); f_004d430c();
    /* 00446bfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446c01: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 00446c0b: call 0x43d924 */ r_esp -= 4; W32(r_esp, 0x446c10u); f_0043d924();
    /* 00446c10: jmp 0x446a5a */ goto L_00446a5a;
}

void f_00446c18(void) /* sub_446C18 */
{
    FN_ENTER(0x00446c18);
    /* 00446c18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00446c19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446c1a: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446c1d: mov edi, ecx */ r_edi = r_ecx;
    /* 00446c1f: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00446c24: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00446c26: jne 0x446c41 */ if (!fZ) goto L_00446c41;
L_00446c28:; BB(0x00446c28);
    /* 00446c28: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00446c2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446c2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446c30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00446c31: push 0x35b */ { u32 v = 0x35bu; r_esp -= 4; W32(r_esp, v); }
    /* 00446c36: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x446c3bu); f_008144b0();
    /* 00446c3b: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446c3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00446c40: ret  */ FN_RET(0x00446c18); r_esp += 4; return;
L_00446c41:; BB(0x00446c41);
    /* 00446c41: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x446c46u); f_008587a5();
    /* 00446c46: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00446c4a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00446c4e: fdiv dword ptr [0x8fe77c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe77cu));
    /* 00446c54: fmul dword ptr [0x8fe778] */ ST(0) = ST(0) * R_F32((u32)(0x8fe778u));
    /* 00446c5a: fadd dword ptr [0x8fe780] */ ST(0) = ST(0) + R_F32((u32)(0x8fe780u));
    /* 00446c60: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00446c64: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x446c69u); f_008587a5();
    /* 00446c69: fld dword ptr [0x8fe774] */ FPUSH(R_F32((u32)(0x8fe774u)));
    /* 00446c6f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00446c73: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00446c77: fdiv dword ptr [0x8fe77c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe77cu));
    /* 00446c7d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00446c7f: fmul dword ptr [0x8fe770] */ ST(0) = ST(0) * R_F32((u32)(0x8fe770u));
    /* 00446c85: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00446c87: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00446c8b: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00446c90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446c95: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00446c99: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00446c9d: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00446ca1: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00446ca5: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00446ca9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00446cab: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x446cb0u); f_0082ddd8();
    /* 00446cb0: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00446cb4: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00446cb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00446cba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x446cbfu); f_008587a5();
    /* 00446cbf: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00446cc3: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00446cc7: fdiv dword ptr [0x8fe77c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe77cu));
    /* 00446ccd: fmul dword ptr [0x8fe768] */ ST(0) = ST(0) * R_F32((u32)(0x8fe768u));
    /* 00446cd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00446cd5: fadd dword ptr [0x8fe76c] */ ST(0) = ST(0) + R_F32((u32)(0x8fe76cu));
    /* 00446cdb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00446cdf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x446ce4u); f_0082dcbc();
    /* 00446ce4: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00446ce8: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00446ceb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00446cef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00446cf2: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00446cf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446cf8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x446cfdu); f_0050b510();
    /* 00446cfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446d00: jmp 0x446c28 */ goto L_00446c28;
}

void f_00446c80(void)
{
    FN_ENTER(0x00446c80);
    goto L_00446c80;
L_00446c28:; BB(0x00446c28);
    /* 00446c28: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00446c2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446c2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446c30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00446c31: push 0x35b */ { u32 v = 0x35bu; r_esp -= 4; W32(r_esp, v); }
    /* 00446c36: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x446c3bu); f_008144b0();
    /* 00446c3b: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446c3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00446c40: ret  */ FN_RET(0x00446c80); r_esp += 4; return;
L_00446c80:; BB(0x00446c80);
    /* 00446c80: or eax, 0x8fe770 */ {  u32 a = r_eax; u32 b = 0x8fe770u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446c85: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00446c87: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00446c8b: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00446c90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00446c95: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00446c99: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00446c9d: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00446ca1: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00446ca5: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00446ca9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00446cab: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x446cb0u); f_0082ddd8();
    /* 00446cb0: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00446cb4: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00446cb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00446cba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x446cbfu); f_008587a5();
    /* 00446cbf: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00446cc3: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00446cc7: fdiv dword ptr [0x8fe77c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe77cu));
    /* 00446ccd: fmul dword ptr [0x8fe768] */ ST(0) = ST(0) * R_F32((u32)(0x8fe768u));
    /* 00446cd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00446cd5: fadd dword ptr [0x8fe76c] */ ST(0) = ST(0) + R_F32((u32)(0x8fe76cu));
    /* 00446cdb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00446cdf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x446ce4u); f_0082dcbc();
    /* 00446ce4: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00446ce8: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00446ceb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00446cef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00446cf2: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00446cf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446cf8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x446cfdu); f_0050b510();
    /* 00446cfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446d00: jmp 0x446c28 */ goto L_00446c28;
}

void f_00446d08(void) /* sub_446D08 */
{
    FN_ENTER(0x00446d08);
    /* 00446d08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00446d09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446d0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446d0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00446d0c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446d0f: mov esi, ecx */ r_esi = r_ecx;
    /* 00446d11: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00446d17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d19: je 0x446d43 */ if (fZ) goto L_00446d43;
L_00446d1b:; BB(0x00446d1b);
    /* 00446d1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d1e: je 0x446d38 */ if (fZ) goto L_00446d38;
L_00446d20:; BB(0x00446d20);
    /* 00446d20: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d23: jne 0x446f86 */ if (!fZ) goto L_00446f86;
L_00446d29:; BB(0x00446d29);
    /* 00446d29: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 00446d30: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446d33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446d34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446d35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446d36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00446d37: ret  */ FN_RET(0x00446d08); r_esp += 4; return;
L_00446d38:; BB(0x00446d38);
    /* 00446d38: mov edx, dword ptr [esi + 0x474] */ r_edx = R32((u32)(r_esi+0x474u));
    /* 00446d3e: jmp 0x446f20 */ goto L_00446f20;
L_00446d43:; BB(0x00446d43);
    /* 00446d43: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00446d46: mov ebx, dword ptr [esi + 0x390] */ r_ebx = R32((u32)(r_esi+0x390u));
    /* 00446d4c: mov dword ptr [esi + 0x474], 6 */ W32((u32)(r_esi+0x474u), 0x6u);
    /* 00446d56: mov edx, 6 */ r_edx = 0x6u;
    /* 00446d5b: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00446d60: test ebx, 0x400000 */ {  u32 a = r_ebx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d66: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00446d69: je 0x446f08 */ if (fZ) goto L_00446f08;
L_00446d6f:; BB(0x00446d6f);
    /* 00446d6f: mov eax, 0x800000 */ r_eax = 0x800000u;
    /* 00446d74: movsx ebp, word ptr [esi + 0x4b4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4b4u));
    /* 00446d7b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00446d7d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446d7f: jle 0x446d93 */ if ((fZ||fS!=fO)) goto L_00446d93;
L_00446d81:; BB(0x00446d81);
    /* 00446d81: test ebx, 0x800000 */ {  u32 a = r_ebx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d87: je 0x446d8e */ if (fZ) goto L_00446d8e;
L_00446d89:; BB(0x00446d89);
    /* 00446d89: mov ecx, 1 */ r_ecx = 0x1u;
L_00446d8e:; BB(0x00446d8e);
    /* 00446d8e: mov eax, 0x1000000 */ r_eax = 0x1000000u;
L_00446d93:; BB(0x00446d93);
    /* 00446d93: movsx edi, word ptr [esi + 0x4b6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b6u));
    /* 00446d9a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00446d9e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446da0: jle 0x446dab */ if ((fZ||fS!=fO)) goto L_00446dab;
L_00446da2:; BB(0x00446da2);
    /* 00446da2: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446da4: je 0x446da9 */ if (fZ) goto L_00446da9;
L_00446da6:; BB(0x00446da6);
    /* 00446da6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00446da9:; BB(0x00446da9);
    /* 00446da9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00446dab:; BB(0x00446dab);
    /* 00446dab: movsx edi, word ptr [esi + 0x4b8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b8u));
    /* 00446db2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00446db6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446db8: jle 0x446dc3 */ if ((fZ||fS!=fO)) goto L_00446dc3;
L_00446dba:; BB(0x00446dba);
    /* 00446dba: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446dbc: je 0x446dc1 */ if (fZ) goto L_00446dc1;
L_00446dbe:; BB(0x00446dbe);
    /* 00446dbe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00446dc1:; BB(0x00446dc1);
    /* 00446dc1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00446dc3:; BB(0x00446dc3);
    /* 00446dc3: movsx edi, word ptr [esi + 0x4ba] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4bau));
    /* 00446dca: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00446dcd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446dcf: jle 0x446dd8 */ if ((fZ||fS!=fO)) goto L_00446dd8;
L_00446dd1:; BB(0x00446dd1);
    /* 00446dd1: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446dd3: je 0x446dd8 */ if (fZ) goto L_00446dd8;
L_00446dd5:; BB(0x00446dd5);
    /* 00446dd5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00446dd8:; BB(0x00446dd8);
    /* 00446dd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446dda: jle 0x446f08 */ if ((fZ||fS!=fO)) goto L_00446f08;
L_00446de0:; BB(0x00446de0);
    /* 00446de0: movsx eax, word ptr [esi + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x346u));
    /* 00446de7: movsx edi, word ptr [esi + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00446dee: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446df0: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00446df2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446df5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00446df6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00446df6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00446df6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00446df8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00446dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446dfc: jg 0x446e00 */ if ((!fZ&&fS==fO)) goto L_00446e00;
L_00446dfe:; BB(0x00446dfe);
    /* 00446dfe: mov eax, edx */ r_eax = r_edx;
L_00446e00:; BB(0x00446e00);
    /* 00446e00: test ebx, 0x800000 */ {  u32 a = r_ebx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446e06: je 0x446e2f */ if (fZ) goto L_00446e2f;
L_00446e08:; BB(0x00446e08);
    /* 00446e08: movsx ebp, word ptr [esi + 0x4b4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4b4u));
    /* 00446e0f: and ebx, 0xff7fffff */ {  u32 a = r_ebx; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00446e15: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 00446e1b: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00446e1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00446e1f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446e21: jg 0x446e25 */ if ((!fZ&&fS==fO)) goto L_00446e25;
L_00446e23:; BB(0x00446e23);
    /* 00446e23: mov ebp, edx */ r_ebp = r_edx;
L_00446e25:; BB(0x00446e25);
    /* 00446e25: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 00446e28: mov word ptr [esi + 0x4b4], bp */ W16((u32)(r_esi+0x4b4u), (u16)r_ebp);
L_00446e2f:; BB(0x00446e2f);
    /* 00446e2f: test ebx, 0x1000000 */ {  u32 a = r_ebx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446e35: je 0x446e62 */ if (fZ) goto L_00446e62;
L_00446e37:; BB(0x00446e37);
    /* 00446e37: movsx edi, word ptr [esi + 0x4b6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b6u));
    /* 00446e3e: and ebx, 0xfeffffff */ {  u32 a = r_ebx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00446e44: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 00446e4a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00446e4c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00446e4e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446e50: jg 0x446e54 */ if ((!fZ&&fS==fO)) goto L_00446e54;
L_00446e52:; BB(0x00446e52);
    /* 00446e52: mov edi, edx */ r_edi = r_edx;
L_00446e54:; BB(0x00446e54);
    /* 00446e54: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00446e57: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00446e5b: mov word ptr [esi + 0x4b6], dx */ W16((u32)(r_esi+0x4b6u), (u16)r_edx);
L_00446e62:; BB(0x00446e62);
    /* 00446e62: test ebx, 0x2000000 */ {  u32 a = r_ebx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446e68: je 0x446e95 */ if (fZ) goto L_00446e95;
L_00446e6a:; BB(0x00446e6a);
    /* 00446e6a: movsx edi, word ptr [esi + 0x4b8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b8u));
    /* 00446e71: and ebx, 0xfdffffff */ {  u32 a = r_ebx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00446e77: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 00446e7d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00446e7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00446e81: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446e83: jg 0x446e87 */ if ((!fZ&&fS==fO)) goto L_00446e87;
L_00446e85:; BB(0x00446e85);
    /* 00446e85: mov edi, edx */ r_edi = r_edx;
L_00446e87:; BB(0x00446e87);
    /* 00446e87: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00446e8a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00446e8e: mov word ptr [esi + 0x4b8], dx */ W16((u32)(r_esi+0x4b8u), (u16)r_edx);
L_00446e95:; BB(0x00446e95);
    /* 00446e95: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446e9b: je 0x446ec7 */ if (fZ) goto L_00446ec7;
L_00446e9d:; BB(0x00446e9d);
    /* 00446e9d: movsx edx, word ptr [esi + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4bau));
    /* 00446ea4: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00446eaa: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 00446eb0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00446eb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446eb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446eb6: jg 0x446eba */ if ((!fZ&&fS==fO)) goto L_00446eba;
L_00446eb8:; BB(0x00446eb8);
    /* 00446eb8: mov edx, eax */ r_edx = r_eax;
L_00446eba:; BB(0x00446eba);
    /* 00446eba: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 00446ebd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00446ec0: mov word ptr [esi + 0x4ba], bx */ W16((u32)(r_esi+0x4bau), (u16)r_ebx);
L_00446ec7:; BB(0x00446ec7);
    /* 00446ec7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00446ecb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00446ecf: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00446ed3: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00446ed8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00446edc: mov byte ptr [esp + 0xc], 0x18 */ W8((u32)(r_esp+0xcu), 0x18u);
    /* 00446ee1: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 00446ee6: mov word ptr [esp + 0x10], bp */ W16((u32)(r_esp+0x10u), (u16)r_ebp);
    /* 00446eeb: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00446eee: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 00446ef3: mov word ptr [esp + 0x14], bx */ W16((u32)(r_esp+0x14u), (u16)r_ebx);
    /* 00446ef8: mov word ptr [esp + 0x16], bp */ W16((u32)(r_esp+0x16u), (u16)r_ebp);
    /* 00446efd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x446f02u); f_008003e0();
    /* 00446f02: mov edx, dword ptr [esi + 0x474] */ r_edx = R32((u32)(r_esi+0x474u));
L_00446f08:; BB(0x00446f08);
    /* 00446f08: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 00446f0f: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00446f19: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
L_00446f20:; BB(0x00446f20);
    /* 00446f20: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00446f23: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00446f25: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00446f27: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00446f2a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x446f2fu); f_0082dcbc();
    /* 00446f2f: fld dword ptr [0x8fe760] */ FPUSH(R_F32((u32)(0x8fe760u)));
    /* 00446f35: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00446f37: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 00446f3d: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00446f40: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446f43: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 00446f49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00446f4b: jg 0x446f86 */ if ((!fZ&&fS==fO)) goto L_00446f86;
L_00446f4d:; BB(0x00446f4d);
    /* 00446f4d: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00446f50: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00446f56: mov ebx, dword ptr [esi + 0x388] */ r_ebx = R32((u32)(r_esi+0x388u));
    /* 00446f5c: mov ebp, dword ptr [esi + 0x478] */ r_ebp = R32((u32)(r_esi+0x478u));
    /* 00446f62: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00446f67: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00446f6a: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00446f6d: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 00446f73: mov dword ptr [esi + 0x37c], ebx */ W32((u32)(r_esi+0x37cu), r_ebx);
    /* 00446f79: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
    /* 00446f80: mov dword ptr [esi + 0x384], ebp */ W32((u32)(r_esi+0x384u), r_ebp);
L_00446f86:; BB(0x00446f86);
    /* 00446f86: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446f89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446f8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446f8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446f8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00446f8d: ret  */ FN_RET(0x00446d08); r_esp += 4; return;
}

void f_00446f90(void) /* sub_446F90 */
{
    FN_ENTER(0x00446f90);
    /* 00446f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00446f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00446f95: push 0x8ce914 */ { u32 v = 0x8ce914u; r_esp -= 4; W32(r_esp, v); }
    /* 00446f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00446fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00446fa8: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446fae: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00446fb1: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00446fb4: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00446fb7: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00446fba: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00446fc0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00446fc3: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446fc8: je 0x446fd6 */ if (fZ) goto L_00446fd6;
L_00446fca:; BB(0x00446fca);
    /* 00446fca: mov eax, ecx */ r_eax = r_ecx;
    /* 00446fcc: mov dword ptr [eax + 0x37c], 0 */ W32((u32)(r_eax+0x37cu), 0x0u);
L_00446fd6:; BB(0x00446fd6);
    /* 00446fd6: mov eax, ecx */ r_eax = r_ecx;
    /* 00446fd8: movzx edx, word ptr [eax + 0x340] */ r_edx = (u32)R16((u32)(r_eax+0x340u));
    /* 00446fdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446fe0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x446fe5u); f_0068d5a8();
    /* 00446fe5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00446fe6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00446fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446fea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x446fefu); f_007706b0();
    /* 00446fef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00446ff2: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x446ff7u); f_00770738();
    /* 00446ff7: mov ebx, eax */ r_ebx = r_eax;
    /* 00446ff9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00446ffc: mov edx, dword ptr [edx + 0x384] */ r_edx = R32((u32)(r_edx+0x384u));
    /* 00447002: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 00447005: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00447008: ja 0x447b49 */ if ((!fC&&!fZ)) goto L_00447b49;
L_0044700e:; BB(0x0044700e);
    /* 0044700e: mov edx, dword ptr [edx*4 + 0x8fe678] */ r_edx = R32((u32)(r_edx*4+0x8fe678u));
    /* 00447015: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00446f90); r_esp += 4; return;
}

