#include "protos.h"

void f_004b30fc(void) /* sub_4B30FC */
{
    FN_ENTER(0x004b30fc);
    /* 004b30fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b30fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004b30ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b3101: push 0x8d0d74 */ { u32 v = 0x8d0d74u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b310c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b310d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b3114: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b311a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004b311d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004b3120: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004b3123: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b3126: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3129: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b312c: je 0x4b3b5b */ if (fZ) goto L_004b3b5b;
L_004b3132:; BB(0x004b3132);
    /* 004b3132: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3135: je 0x4b3a10 */ if (fZ) goto L_004b3a10;
L_004b313b:; BB(0x004b313b);
    /* 004b313b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b313e: je 0x4b3892 */ if (fZ) goto L_004b3892;
L_004b3144:; BB(0x004b3144);
    /* 004b3144: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b3147: je 0x4b34b1 */ if (fZ) goto L_004b34b1;
L_004b314d:; BB(0x004b314d);
    /* 004b314d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b314f: je 0x4b31a0 */ if (fZ) goto L_004b31a0;
L_004b3151:; BB(0x004b3151);
    /* 004b3151: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b3154: je 0x4b34b1 */ if (fZ) goto L_004b34b1;
L_004b315a:; BB(0x004b315a);
    /* 004b315a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b315d: jne 0x4b34b1 */ if (!fZ) goto L_004b34b1;
L_004b3163:; BB(0x004b3163);
    /* 004b3163: mov edx, ecx */ r_edx = r_ecx;
    /* 004b3165: mov eax, dword ptr [edx + 0x630] */ r_eax = R32((u32)(r_edx+0x630u));
    /* 004b316b: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b316e: mov dword ptr [edx + 0x630], eax */ W32((u32)(r_edx+0x630u), r_eax);
    /* 004b3174: mov edx, dword ptr [edx + 0x78c] */ r_edx = R32((u32)(r_edx+0x78cu));
    /* 004b317a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b317c: je 0x4b34b1 */ if (fZ) goto L_004b34b1;
L_004b3182:; BB(0x004b3182);
    /* 004b3182: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b3186: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b318b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b318f: mov edx, ecx */ r_edx = r_ecx;
    /* 004b3191: mov dword ptr [edx + 0x78c], 0 */ W32((u32)(r_edx+0x78cu), 0x0u);
    /* 004b319b: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b31a0:; BB(0x004b31a0);
    /* 004b31a0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b31a5u); f_007aa094();
    /* 004b31a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b31a8: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b31ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b31b0: je 0x4b371c */ if (fZ) goto L_004b371c;
L_004b31b6:; BB(0x004b31b6);
    /* 004b31b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b31b9: je 0x4b36fb */ if (fZ) goto L_004b36fb;
L_004b31bf:; BB(0x004b31bf);
    /* 004b31bf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b31c2: je 0x4b367d */ if (fZ) goto L_004b367d;
L_004b31c8:; BB(0x004b31c8);
    /* 004b31c8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b31cb: je 0x4b35ec */ if (fZ) goto L_004b35ec;
L_004b31d1:; BB(0x004b31d1);
    /* 004b31d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b31d4: je 0x4b32b5 */ if (fZ) goto L_004b32b5;
L_004b31da:; BB(0x004b31da);
    /* 004b31da: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b31dd: jne 0x4b332b */ if (!fZ) goto L_004b332b;
L_004b31e3:; BB(0x004b31e3);
    /* 004b31e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b31e6: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b31ec: fcomp dword ptr [0x906ea8] */ fx_compare(ST(0), R_F32((u32)(0x906ea8u))); FPOP();
    /* 004b31f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b31f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b31f5: jb 0x4b332b */ if (fC) goto L_004b332b;
L_004b31fb:; BB(0x004b31fb);
    /* 004b31fb: mov eax, edx */ r_eax = r_edx;
    /* 004b31fd: mov dword ptr [eax + 0x730], 6 */ W32((u32)(r_eax+0x730u), 0x6u);
    /* 004b3207: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3209: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4b320eu); f_004d4288();
    /* 004b320e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b320f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3212: mov edx, dword ptr [eax + 0x6c8] */ r_edx = R32((u32)(r_eax+0x6c8u));
    /* 004b3218: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b321a: jne 0x4b3223 */ if (!fZ) goto L_004b3223;
L_004b321c:; BB(0x004b321c);
    /* 004b321c: call 0x4bff38 */ r_esp -= 4; W32(r_esp, 0x4b3221u); f_004bff38();
    /* 004b3221: jmp 0x4b3228 */ goto L_004b3228;
L_004b3223:; BB(0x004b3223);
    /* 004b3223: call 0x4bff50 */ r_esp -= 4; W32(r_esp, 0x4b3228u); f_004bff50();
L_004b3228:; BB(0x004b3228);
    /* 004b3228: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b322b: lea ecx, [eax + 0x514] */ r_ecx = (u32)(r_eax+0x514u);
    /* 004b3231: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b3233: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3236: push 0x3ee */ { u32 v = 0x3eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004b323b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b3240u); f_00814298();
    /* 004b3240: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 004b3247: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3249: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b324eu); f_005caba4();
    /* 004b324e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b3251: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004b3254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3256: je 0x4b327f */ if (fZ) goto L_004b327f;
L_004b3258:; BB(0x004b3258);
    /* 004b3258: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 004b325f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b3266: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3269: lea edx, [ebx + 0x4e4] */ r_edx = (u32)(r_ebx+0x4e4u);
    /* 004b326f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3270: mov ecx, eax */ r_ecx = r_eax;
    /* 004b3272: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3273: call 0x4ac9ac */ r_esp -= 4; W32(r_esp, 0x4b3278u); f_004ac9ac();
    /* 004b3278: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_004b327f:; BB(0x004b327f);
    /* 004b327f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b3286: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3289: mov eax, dword ptr [edx + 0x630] */ r_eax = R32((u32)(r_edx+0x630u));
    /* 004b328f: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b3294: mov dword ptr [edx + 0x630], eax */ W32((u32)(r_edx+0x630u), r_eax);
    /* 004b329a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b329c:; BB(0x004b329c);
    /* 004b329c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b329f: mov ecx, dword ptr [eax + ebx*4 + 0x6e4] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x6e4u));
    /* 004b32a6: call 0x4bd17c */ r_esp -= 4; W32(r_esp, 0x4b32abu); f_004bd17c();
    /* 004b32ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b32ae: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b32b1: jl 0x4b329c */ if ((fS!=fO)) goto L_004b329c;
L_004b32b3:; BB(0x004b32b3);
    /* 004b32b3: jmp 0x4b332b */ goto L_004b332b;
L_004b32b5:; BB(0x004b32b5);
    /* 004b32b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b32b8: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b32be: fcomp dword ptr [0x906ea4] */ fx_compare(ST(0), R_F32((u32)(0x906ea4u))); FPOP();
    /* 004b32c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b32c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b32c7: jb 0x4b332b */ if (fC) goto L_004b332b;
L_004b32c9:; BB(0x004b32c9);
    /* 004b32c9: mov eax, edx */ r_eax = r_edx;
    /* 004b32cb: fld dword ptr [0x906ea0] */ FPUSH(R_F32((u32)(0x906ea0u)));
    /* 004b32d1: fmul dword ptr [eax + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x74cu));
    /* 004b32d7: fld dword ptr [0x906e9c] */ FPUSH(R_F32((u32)(0x906e9cu)));
    /* 004b32dd: fmul dword ptr [eax + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x74cu));
    /* 004b32e3: fld dword ptr [eax + 0x74c] */ FPUSH(R_F32((u32)(r_eax+0x74cu)));
    /* 004b32e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b32eb: fst dword ptr [eax + 0x750] */ W_F32((u32)(r_eax+0x750u), ST(0));
    /* 004b32f1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004b32f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b32f5: fchs  */ ST(0) = -ST(0);
    /* 004b32f7: fmul dword ptr [0x906ed0] */ ST(0) = ST(0) * R_F32((u32)(0x906ed0u));
    /* 004b32fd: mov dword ptr [eax + 0x730], 5 */ W32((u32)(r_eax+0x730u), 0x5u);
    /* 004b3307: mov dword ptr [eax + 0x758], 0 */ W32((u32)(r_eax+0x758u), 0x0u);
    /* 004b3311: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b3313: fdiv dword ptr [0xa47a80] */ ST(0) = ST(0) / R_F32((u32)(0xa47a80u));
    /* 004b3319: fstp dword ptr [eax + 0x754] */ W_F32((u32)(r_eax+0x754u), ST(0)); FPOP();
    /* 004b331f: fdiv dword ptr [0xa47a80] */ ST(0) = ST(0) / R_F32((u32)(0xa47a80u));
    /* 004b3325: fstp dword ptr [eax + 0x768] */ W_F32((u32)(r_eax+0x768u), ST(0)); FPOP();
L_004b332b:; BB(0x004b332b);
    /* 004b332b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b332e: mov ecx, dword ptr [eax + 0x738] */ r_ecx = R32((u32)(r_eax+0x738u));
    /* 004b3334: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3337: mov dword ptr [eax + 0x738], ecx */ W32((u32)(r_eax+0x738u), r_ecx);
    /* 004b333d: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b3343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3345: je 0x4b34ad */ if (fZ) goto L_004b34ad;
L_004b334b:; BB(0x004b334b);
    /* 004b334b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b334e: je 0x4b34ad */ if (fZ) goto L_004b34ad;
L_004b3354:; BB(0x004b3354);
    /* 004b3354: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3357: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b335d: fcom dword ptr [0x906e88] */ fx_compare(ST(0), R_F32((u32)(0x906e88u))); 
    /* 004b3363: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b3365: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b3366: jb 0x4b33e1 */ if (fC) goto L_004b33e1;
L_004b3368:; BB(0x004b3368);
    /* 004b3368: fcomp dword ptr [0x906e84] */ fx_compare(ST(0), R_F32((u32)(0x906e84u))); FPOP();
    /* 004b336e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b3370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b3371: ja 0x4b33e3 */ if ((!fC&&!fZ)) goto L_004b33e3;
L_004b3373:; BB(0x004b3373);
    /* 004b3373: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3376: jl 0x4b33e3 */ if ((fS!=fO)) goto L_004b33e3;
L_004b3378:; BB(0x004b3378);
    /* 004b3378: mov ecx, edx */ r_ecx = r_edx;
    /* 004b337a: mov eax, dword ptr [ecx + 0x4e4] */ r_eax = R32((u32)(r_ecx+0x4e4u));
    /* 004b3380: mov edx, dword ptr [ecx + 0x4e8] */ r_edx = R32((u32)(r_ecx+0x4e8u));
    /* 004b3386: mov ebx, dword ptr [ecx + 0x4ec] */ r_ebx = R32((u32)(r_ecx+0x4ecu));
    /* 004b338c: mov dword ptr [ecx + 0x738], 0 */ W32((u32)(r_ecx+0x738u), 0x0u);
    /* 004b3396: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004b3399: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004b339c: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 004b339f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b33a4u); f_007751b0();
    /* 004b33a4: fmul dword ptr [0x906ec0] */ ST(0) = ST(0) * R_F32((u32)(0x906ec0u));
    /* 004b33aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b33ad: fmul dword ptr [eax + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x74cu));
    /* 004b33b3: fadd dword ptr [ebp - 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa0u));
    /* 004b33b6: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 004b33b9: fadd dword ptr [0x906e80] */ ST(0) = ST(0) + R_F32((u32)(0x906e80u));
    /* 004b33bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b33c1: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 004b33c4: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 004b33c7: mov dword ptr [ebp - 0x5c], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc0a00000u);
    /* 004b33ce: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 004b33d1: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b33d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b33d7: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b33dcu); f_004be7c0();
    /* 004b33dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b33df: jmp 0x4b33e3 */ goto L_004b33e3;
L_004b33e1:; BB(0x004b33e1);
    /* 004b33e1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004b33e3:; BB(0x004b33e3);
    /* 004b33e3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b33e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b33eb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b33f0u); f_007aaa30();
    /* 004b33f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b33f2: je 0x4b340f */ if (fZ) goto L_004b340f;
L_004b33f4:; BB(0x004b33f4);
    /* 004b33f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b33f7: lea ecx, [eax + 0x514] */ r_ecx = (u32)(r_eax+0x514u);
    /* 004b33fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b33ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3401: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3402: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004b3407: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b340cu); f_00814298();
    /* 004b340c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b340f:; BB(0x004b340f);
    /* 004b340f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3412: mov ecx, dword ptr [eax + 0x78c] */ r_ecx = R32((u32)(r_eax+0x78cu));
    /* 004b3418: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b341a: je 0x4b34e9 */ if (fZ) goto L_004b34e9;
L_004b3420:; BB(0x004b3420);
    /* 004b3420: mov edx, eax */ r_edx = r_eax;
    /* 004b3422: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b3428: fcom dword ptr [0x906e7c] */ fx_compare(ST(0), R_F32((u32)(0x906e7cu))); 
    /* 004b342e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b3430: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b3431: jb 0x4b349d */ if (fC) goto L_004b349d;
L_004b3433:; BB(0x004b3433);
    /* 004b3433: fcom dword ptr [0x906e78] */ fx_compare(ST(0), R_F32((u32)(0x906e78u))); 
    /* 004b3439: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b343b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b343c: ja 0x4b349d */ if ((!fC&&!fZ)) goto L_004b349d;
L_004b343e:; BB(0x004b343e);
    /* 004b343e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b3440: mov ecx, edx */ r_ecx = r_edx;
    /* 004b3442: mov eax, dword ptr [ecx + 0x73c] */ r_eax = R32((u32)(r_ecx+0x73cu));
    /* 004b3448: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b344b: mov dword ptr [ecx + 0x73c], eax */ W32((u32)(r_ecx+0x73cu), r_eax);
    /* 004b3451: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b3452: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b3454: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3456: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b3459: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b345b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b345d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b345f: je 0x4b347e */ if (fZ) goto L_004b347e;
L_004b3461:; BB(0x004b3461);
    /* 004b3461: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3464: je 0x4b34ca */ if (fZ) goto L_004b34ca;
L_004b3466:; BB(0x004b3466);
    /* 004b3466: mov eax, ecx */ r_eax = r_ecx;
    /* 004b3468: mov ecx, dword ptr [eax + 0x78c] */ r_ecx = R32((u32)(r_eax+0x78cu));
    /* 004b346e: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b3473u); f_00508f48();
    /* 004b3473: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3476: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b347c: jmp 0x4b34ad */ goto L_004b34ad;
L_004b347e:; BB(0x004b347e);
    /* 004b347e: mov edx, ecx */ r_edx = r_ecx;
    /* 004b3480: mov ecx, dword ptr [edx + 0x78c] */ r_ecx = R32((u32)(r_edx+0x78cu));
    /* 004b3486: lea eax, [edx + 0x448] */ r_eax = (u32)(r_edx+0x448u);
    /* 004b348c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b348d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b3492u); f_00508db8();
    /* 004b3492: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3495: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b349b: jmp 0x4b34ad */ goto L_004b34ad;
L_004b349d:; BB(0x004b349d);
    /* 004b349d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b349f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b34a4u); f_00508f48();
    /* 004b34a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b34a7: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
L_004b34ad:; BB(0x004b34ad);
    /* 004b34ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b34af: jge 0x4b3523 */ if ((fS==fO)) goto L_004b3523;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b30fc); r_esp += 12; return;
L_004b34ca:; BB(0x004b34ca);
    /* 004b34ca: mov edx, ecx */ r_edx = r_ecx;
    /* 004b34cc: mov ecx, dword ptr [edx + 0x78c] */ r_ecx = R32((u32)(r_edx+0x78cu));
    /* 004b34d2: lea eax, [edx + 0x454] */ r_eax = (u32)(r_edx+0x454u);
    /* 004b34d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b34d9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b34deu); f_00508db8();
    /* 004b34de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b34e1: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b34e7: jmp 0x4b34ad */ goto L_004b34ad;
L_004b34e9:; BB(0x004b34e9);
    /* 004b34e9: push 0x161 */ { u32 v = 0x161u; r_esp -= 4; W32(r_esp, v); }
    /* 004b34ee: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004b34f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b34f2: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4b34f7u); f_00509590();
    /* 004b34f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b34fa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b34fd: mov dword ptr [edx + 0x78c], eax */ W32((u32)(r_edx+0x78cu), r_eax);
    /* 004b3503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3505: je 0x4b3519 */ if (fZ) goto L_004b3519;
L_004b3507:; BB(0x004b3507);
    /* 004b3507: mov ecx, eax */ r_ecx = r_eax;
    /* 004b3509: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4b350eu); f_00508f48();
    /* 004b350e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3511: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b3517: jmp 0x4b34ad */ goto L_004b34ad;
L_004b3519:; BB(0x004b3519);
    /* 004b3519: mov eax, edx */ r_eax = r_edx;
    /* 004b351b: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b3521: jmp 0x4b34ad */ goto L_004b34ad;
L_004b3523:; BB(0x004b3523);
    /* 004b3523: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3526: jg 0x4b356c */ if ((!fZ&&fS==fO)) goto L_004b356c;
L_004b3528:; BB(0x004b3528);
    /* 004b3528: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b352b: fld dword ptr [edx + 0x760] */ FPUSH(R_F32((u32)(r_edx+0x760u)));
    /* 004b3531: fadd dword ptr [edx + 0x75c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x75cu));
    /* 004b3537: fcom dword ptr [0x906eb0] */ fx_compare(ST(0), R_F32((u32)(0x906eb0u))); 
    /* 004b353d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b353f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b3540: jae 0x4b3557 */ if (!fC) goto L_004b3557;
L_004b3542:; BB(0x004b3542);
    /* 004b3542: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b3544: fld dword ptr [0x906eb0] */ FPUSH(R_F32((u32)(0x906eb0u)));
    /* 004b354a: mov eax, 0xc0e00000 */ r_eax = 0xc0e00000u;
    /* 004b354f: mov dword ptr [edx + 0x760], eax */ W32((u32)(r_edx+0x760u), r_eax);
    /* 004b3555: jmp 0x4b355f */ goto L_004b355f;
L_004b3557:; BB(0x004b3557);
    /* 004b3557: mov eax, edx */ r_eax = r_edx;
    /* 004b3559: fst dword ptr [eax + 0x760] */ W_F32((u32)(r_eax+0x760u), ST(0));
L_004b355f:; BB(0x004b355f);
    /* 004b355f: mov eax, edx */ r_eax = r_edx;
    /* 004b3561: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004b3564: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 004b3567: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b356c:; BB(0x004b356c);
    /* 004b356c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b356f: jne 0x4b3796 */ if (!fZ) goto L_004b3796;
L_004b3575:; BB(0x004b3575);
    /* 004b3575: push 0x41080000 */ { u32 v = 0x41080000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b357a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b357d: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 004b3583: fsub dword ptr [0x906e8c] */ ST(0) = ST(0) - R_F32((u32)(0x906e8cu));
    /* 004b3589: fld dword ptr [0x906eb8] */ FPUSH(R_F32((u32)(0x906eb8u)));
    /* 004b358f: fmul dword ptr [ecx + 0x75c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x75cu));
    /* 004b3595: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b3597: fsub dword ptr [0x906e74] */ ST(0) = ST(0) - R_F32((u32)(0x906e74u));
    /* 004b359d: fld dword ptr [ecx + 0x754] */ FPUSH(R_F32((u32)(r_ecx+0x754u)));
    /* 004b35a3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b35a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b35a7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b35a9: fadd dword ptr [ecx + 0x750] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x750u));
    /* 004b35af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b35b1: fadd dword ptr [ecx + 0x764] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x764u));
    /* 004b35b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b35b9: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 004b35bc: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 004b35bf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b35c4u); f_007aaa30();
    /* 004b35c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b35c6: je 0x4b34b1 */ if (fZ) goto L_004b34b1;
L_004b35cc:; BB(0x004b35cc);
    /* 004b35cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b35cf: add edx, 0x514 */ {  u32 a = r_edx; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b35d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b35d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b35d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b35d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b35da: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b35df: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b35e4u); f_00814298();
    /* 004b35e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b35e7: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b35ec:; BB(0x004b35ec);
    /* 004b35ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b35ef: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b35f5: fcomp dword ptr [0x906e98] */ fx_compare(ST(0), R_F32((u32)(0x906e98u))); FPOP();
    /* 004b35fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b35fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b35fe: jb 0x4b332b */ if (fC) goto L_004b332b;
L_004b3604:; BB(0x004b3604);
    /* 004b3604: fld dword ptr [0x906e94] */ FPUSH(R_F32((u32)(0x906e94u)));
    /* 004b360a: fmul dword ptr [edx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x74cu));
    /* 004b3610: fld dword ptr [0x906ea0] */ FPUSH(R_F32((u32)(0x906ea0u)));
    /* 004b3616: fmul dword ptr [edx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x74cu));
    /* 004b361c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004b361f: fld dword ptr [0x906e90] */ FPUSH(R_F32((u32)(0x906e90u)));
    /* 004b3625: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 004b3628: fmul dword ptr [0x906ecc] */ ST(0) = ST(0) * R_F32((u32)(0x906eccu));
    /* 004b362e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b3630: fst dword ptr [edx + 0x750] */ W_F32((u32)(r_edx+0x750u), ST(0));
    /* 004b3636: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004b3638: mov dword ptr [edx + 0x730], 4 */ W32((u32)(r_edx+0x730u), 0x4u);
    /* 004b3642: mov dword ptr [edx + 0x758], 0 */ W32((u32)(r_edx+0x758u), 0x0u);
    /* 004b364c: fdiv dword ptr [0xa47a84] */ ST(0) = ST(0) / R_F32((u32)(0xa47a84u));
    /* 004b3652: fstp dword ptr [edx + 0x754] */ W_F32((u32)(r_edx+0x754u), ST(0)); FPOP();
    /* 004b3658: mov dword ptr [edx + 0x764], eax */ W32((u32)(r_edx+0x764u), r_eax);
    /* 004b365e: fld dword ptr [0xa47a88] */ FPUSH(R_F32((u32)(0xa47a88u)));
    /* 004b3664: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004b3666: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004b3668: mov dword ptr [edx + 0x760], 0 */ W32((u32)(r_edx+0x760u), 0x0u);
    /* 004b3672: fstp dword ptr [edx + 0x75c] */ W_F32((u32)(r_edx+0x75cu), ST(0)); FPOP();
    /* 004b3678: jmp 0x4b332b */ goto L_004b332b;
L_004b367d:; BB(0x004b367d);
    /* 004b367d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3680: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b3686: fcomp dword ptr [0x906e8c] */ fx_compare(ST(0), R_F32((u32)(0x906e8cu))); FPOP();
    /* 004b368c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b368e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b368f: jb 0x4b332b */ if (fC) goto L_004b332b;
L_004b3695:; BB(0x004b3695);
    /* 004b3695: mov ecx, edx */ r_ecx = r_edx;
    /* 004b3697: fld dword ptr [0x906e94] */ FPUSH(R_F32((u32)(0x906e94u)));
    /* 004b369d: fmul dword ptr [ecx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x74cu));
    /* 004b36a3: fsub dword ptr [ecx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x38u));
    /* 004b36a6: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004b36a9: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004b36ac: mov dword ptr [ecx + 0x730], 3 */ W32((u32)(r_ecx+0x730u), 0x3u);
    /* 004b36b6: mov dword ptr [ecx + 0x750], eax */ W32((u32)(r_ecx+0x750u), r_eax);
    /* 004b36bc: mov dword ptr [ecx + 0x758], 0 */ W32((u32)(r_ecx+0x758u), 0x0u);
    /* 004b36c6: fdiv dword ptr [0xa47a8c] */ ST(0) = ST(0) / R_F32((u32)(0xa47a8cu));
    /* 004b36cc: fstp dword ptr [ecx + 0x754] */ W_F32((u32)(r_ecx+0x754u), ST(0)); FPOP();
    /* 004b36d2: fld dword ptr [0xa47a8c] */ FPUSH(R_F32((u32)(0xa47a8cu)));
    /* 004b36d8: fchs  */ ST(0) = -ST(0);
    /* 004b36da: fdivr dword ptr [ecx + 0x760] */ ST(0) = R_F32((u32)(r_ecx+0x760u)) / ST(0);
    /* 004b36e0: mov dword ptr [ecx + 0x764], edx */ W32((u32)(r_ecx+0x764u), r_edx);
    /* 004b36e6: fstp dword ptr [ecx + 0x75c] */ W_F32((u32)(r_ecx+0x75cu), ST(0)); FPOP();
    /* 004b36ec: mov dword ptr [ecx + 0x760], 0 */ W32((u32)(r_ecx+0x760u), 0x0u);
    /* 004b36f6: jmp 0x4b332b */ goto L_004b332b;
L_004b36fb:; BB(0x004b36fb);
    /* 004b36fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b36fe: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004b3704: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b3707: jne 0x4b332b */ if (!fZ) goto L_004b332b;
L_004b370d:; BB(0x004b370d);
    /* 004b370d: mov dword ptr [eax + 0x730], 2 */ W32((u32)(r_eax+0x730u), 0x2u);
    /* 004b3717: jmp 0x4b332b */ goto L_004b332b;
L_004b371c:; BB(0x004b371c);
    /* 004b371c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b371f: mov eax, dword ptr [eax + 0x734] */ r_eax = R32((u32)(r_eax+0x734u));
    /* 004b3725: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b3728: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b372b: jle 0x4b3788 */ if ((fZ||fS!=fO)) goto L_004b3788;
L_004b372d:; BB(0x004b372d);
    /* 004b372d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3730: mov edx, dword ptr [eax + 0x6c8] */ r_edx = R32((u32)(r_eax+0x6c8u));
    /* 004b3736: mov dword ptr [eax + 0x734], 0 */ W32((u32)(r_eax+0x734u), 0x0u);
    /* 004b3740: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3742: mov dword ptr [eax + 0x730], 1 */ W32((u32)(r_eax+0x730u), 0x1u);
    /* 004b374c: jne 0x4b376b */ if (!fZ) goto L_004b376b;
L_004b374e:; BB(0x004b374e);
    /* 004b374e: mov edx, eax */ r_edx = r_eax;
    /* 004b3750: mov dword ptr [edx + 0x74c], 0xbf800000 */ W32((u32)(r_edx+0x74cu), 0xbf800000u);
    /* 004b375a: mov eax, 7 */ r_eax = 0x7u;
    /* 004b375f: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004b3766: jmp 0x4b332b */ goto L_004b332b;
L_004b376b:; BB(0x004b376b);
    /* 004b376b: mov edx, eax */ r_edx = r_eax;
    /* 004b376d: mov dword ptr [edx + 0x74c], 0x3f800000 */ W32((u32)(r_edx+0x74cu), 0x3f800000u);
    /* 004b3777: mov eax, 8 */ r_eax = 0x8u;
    /* 004b377c: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004b3783: jmp 0x4b332b */ goto L_004b332b;
L_004b3788:; BB(0x004b3788);
    /* 004b3788: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b378b: mov dword ptr [edx + 0x734], eax */ W32((u32)(r_edx+0x734u), r_eax);
    /* 004b3791: jmp 0x4b332b */ goto L_004b332b;
L_004b3796:; BB(0x004b3796);
    /* 004b3796: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3799: je 0x4b3812 */ if (fZ) goto L_004b3812;
L_004b379b:; BB(0x004b379b);
    /* 004b379b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b379e: jne 0x4b34b1 */ if (!fZ) goto L_004b34b1;
L_004b37a4:; BB(0x004b37a4);
    /* 004b37a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b37a7: fld dword ptr [0x906ea4] */ FPUSH(R_F32((u32)(0x906ea4u)));
    /* 004b37ad: fld dword ptr [0x906eb8] */ FPUSH(R_F32((u32)(0x906eb8u)));
    /* 004b37b3: fmul dword ptr [edx + 0x75c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x75cu));
    /* 004b37b9: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b37bf: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 004b37c1: fsub dword ptr [0x906e98] */ ST(0) = ST(0) - R_F32((u32)(0x906e98u));
    /* 004b37c7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b37c9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b37cb: fadd dword ptr [edx + 0x764] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x764u));
    /* 004b37d1: fld dword ptr [edx + 0x754] */ FPUSH(R_F32((u32)(r_edx+0x754u)));
    /* 004b37d7: fld dword ptr [edx + 0x768] */ FPUSH(R_F32((u32)(r_edx+0x768u)));
    /* 004b37dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b37df: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004b37e1: fadd dword ptr [edx + 0x750] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x750u));
    /* 004b37e7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b37e9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b37eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b37ed: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 004b37f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b37f2: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 004b37f5: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 004b37f8: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b37fc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b3801: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b3804: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 004b3807: fistp dword ptr [edx + 0x64] */ W32((u32)(r_edx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b380a: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 004b380d: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3812:; BB(0x004b3812);
    /* 004b3812: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3815: fld dword ptr [0x906eb8] */ FPUSH(R_F32((u32)(0x906eb8u)));
    /* 004b381b: fmul dword ptr [edx + 0x75c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x75cu));
    /* 004b3821: fld dword ptr [0xa47a90] */ FPUSH(R_F32((u32)(0xa47a90u)));
    /* 004b3827: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004b382d: fsub dword ptr [0x906e98] */ ST(0) = ST(0) - R_F32((u32)(0x906e98u));
    /* 004b3833: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004b3835: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004b3837: fld dword ptr [0xa47a84] */ FPUSH(R_F32((u32)(0xa47a84u)));
    /* 004b383d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b383f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b3841: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004b3843: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b3845: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b3847: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b3849: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b384b: fadd dword ptr [edx + 0x764] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x764u));
    /* 004b3851: fld dword ptr [edx + 0x754] */ FPUSH(R_F32((u32)(r_edx+0x754u)));
    /* 004b3857: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b3859: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b385b: fadd dword ptr [edx + 0x750] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x750u));
    /* 004b3861: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b3863: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 004b3866: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b3868: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 004b386b: mov edx, dword ptr [0xa47a90] */ r_edx = R32((u32)(0xa47a90u));
    /* 004b3871: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b3872: jbe 0x4b3884 */ if ((fC||fZ)) goto L_004b3884;
L_004b3874:; BB(0x004b3874);
    /* 004b3874: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b3876: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3879: mov dword ptr [eax + 0x6f8], edx */ W32((u32)(r_eax+0x6f8u), r_edx);
    /* 004b387f: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3884:; BB(0x004b3884);
    /* 004b3884: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3887: fstp dword ptr [eax + 0x6f8] */ W_F32((u32)(r_eax+0x6f8u), ST(0)); FPOP();
    /* 004b388d: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3892:; BB(0x004b3892);
    /* 004b3892: mov eax, ecx */ r_eax = r_ecx;
    /* 004b3894: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 004b389b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b389e: je 0x4b38a9 */ if (fZ) goto L_004b38a9;
L_004b38a0:; BB(0x004b38a0);
    /* 004b38a0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b38a3: jne 0x4b34b1 */ if (!fZ) goto L_004b34b1;
L_004b38a9:; BB(0x004b38a9);
    /* 004b38a9: mov eax, ecx */ r_eax = r_ecx;
    /* 004b38ab: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b38b1: mov ebx, dword ptr [eax + 0x6bc] */ r_ebx = R32((u32)(r_eax+0x6bcu));
    /* 004b38b7: mov eax, dword ptr [edx*4 + 0x9abc68] */ r_eax = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b38be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b38c1: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b38c4: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b38ca: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b38ce: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b38d1: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b38d4: ja 0x4b3a02 */ if ((!fC&&!fZ)) goto L_004b3a02;
L_004b38da:; BB(0x004b38da);
    /* 004b38da: mov edx, dword ptr [edx*4 + 0x905160] */ r_edx = R32((u32)(r_edx*4+0x905160u));
    /* 004b38e1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3a10:; BB(0x004b3a10);
    /* 004b3a10: mov eax, ecx */ r_eax = r_ecx;
    /* 004b3a12: mov edx, dword ptr [eax + 0x62c] */ r_edx = R32((u32)(r_eax+0x62cu));
    /* 004b3a18: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004b3a1b: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3a21: je 0x4b3ac5 */ if (fZ) goto L_004b3ac5;
L_004b3a27:; BB(0x004b3a27);
    /* 004b3a27: mov eax, ecx */ r_eax = r_ecx;
    /* 004b3a29: mov edx, dword ptr [eax + 0x6c8] */ r_edx = R32((u32)(r_eax+0x6c8u));
    /* 004b3a2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3a31: jne 0x4b3a7c */ if (!fZ) goto L_004b3a7c;
L_004b3a33:; BB(0x004b3a33);
    /* 004b3a33: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a35: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a37: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b3a39: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b3a3fu); call_ind(t); }
    /* 004b3a3f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a42: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b3a46: mov ebx, dword ptr [esi + 0x6bc] */ r_ebx = R32((u32)(r_esi+0x6bcu));
    /* 004b3a4c: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 004b3a53: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004b3a58: mov byte ptr [ebp - 0x38], 0xaa */ W8((u32)(r_ebp+0xffffffc8u), 0xaau);
    /* 004b3a5c: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 004b3a60: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
    /* 004b3a64: mov byte ptr [ebp - 0x37], 3 */ W8((u32)(r_ebp+0xffffffc9u), 0x3u);
    /* 004b3a68: mov word ptr [ebp - 0x32], bx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ebx);
    /* 004b3a6c: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004b3a6f: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004b3a72: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b3a77u); f_008003e0();
    /* 004b3a77: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3a7c:; BB(0x004b3a7c);
    /* 004b3a7c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a7e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a80: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b3a82: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b3a88u); call_ind(t); }
    /* 004b3a88: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a8b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b3a8f: mov ebx, dword ptr [esi + 0x6bc] */ r_ebx = R32((u32)(r_esi+0x6bcu));
    /* 004b3a95: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 004b3a9c: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004b3aa1: mov byte ptr [ebp - 0x44], 0xaa */ W8((u32)(r_ebp+0xffffffbcu), 0xaau);
    /* 004b3aa5: mov word ptr [ebp - 0x42], ax */ W16((u32)(r_ebp+0xffffffbeu), (u16)r_eax);
    /* 004b3aa9: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
    /* 004b3aad: mov byte ptr [ebp - 0x43], 3 */ W8((u32)(r_ebp+0xffffffbdu), 0x3u);
    /* 004b3ab1: mov word ptr [ebp - 0x3e], bx */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_ebx);
    /* 004b3ab5: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 004b3ab8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 004b3abb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b3ac0u); f_008003e0();
    /* 004b3ac0: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3ac5:; BB(0x004b3ac5);
    /* 004b3ac5: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b3acb: je 0x4b34b1 */ if (fZ) goto L_004b34b1;
L_004b3ad1:; BB(0x004b3ad1);
    /* 004b3ad1: mov eax, ecx */ r_eax = r_ecx;
    /* 004b3ad3: mov edx, dword ptr [eax + 0x6c8] */ r_edx = R32((u32)(r_eax+0x6c8u));
    /* 004b3ad9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3adb: jne 0x4b3b1c */ if (!fZ) goto L_004b3b1c;
L_004b3add:; BB(0x004b3add);
    /* 004b3add: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3adf: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3ae1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b3ae3: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b3ae9u); call_ind(t); }
    /* 004b3ae9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3aec: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b3af0: mov esi, dword ptr [ebx + 0x6bc] */ r_esi = R32((u32)(r_ebx+0x6bcu));
    /* 004b3af6: mov word ptr [ebp - 0x4a], ax */ W16((u32)(r_ebp+0xffffffb6u), (u16)r_eax);
    /* 004b3afa: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b3aff: mov byte ptr [ebp - 0x4c], 0xa9 */ W8((u32)(r_ebp+0xffffffb4u), 0xa9u);
    /* 004b3b03: mov word ptr [ebp - 0x48], dx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_edx);
    /* 004b3b07: mov word ptr [ebp - 0x46], si */ W16((u32)(r_ebp+0xffffffbau), (u16)r_esi);
    /* 004b3b0b: mov byte ptr [ebp - 0x4b], 2 */ W8((u32)(r_ebp+0xffffffb5u), 0x2u);
    /* 004b3b0f: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004b3b12: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b3b17u); f_008003e0();
    /* 004b3b17: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3b1c:; BB(0x004b3b1c);
    /* 004b3b1c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b1e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b20: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b3b22: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b3b28u); call_ind(t); }
    /* 004b3b28: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3b2b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b3b2f: mov esi, dword ptr [ebx + 0x6bc] */ r_esi = R32((u32)(r_ebx+0x6bcu));
    /* 004b3b35: mov word ptr [ebp - 0x52], ax */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_eax);
    /* 004b3b39: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b3b3e: mov byte ptr [ebp - 0x54], 0xa9 */ W8((u32)(r_ebp+0xffffffacu), 0xa9u);
    /* 004b3b42: mov word ptr [ebp - 0x50], dx */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_edx);
    /* 004b3b46: mov word ptr [ebp - 0x4e], si */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_esi);
    /* 004b3b4a: mov byte ptr [ebp - 0x53], 2 */ W8((u32)(r_ebp+0xffffffadu), 0x2u);
    /* 004b3b4e: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 004b3b51: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b3b56u); f_008003e0();
    /* 004b3b56: jmp 0x4b34b1 */ goto L_004b34b1;
L_004b3b5b:; BB(0x004b3b5b);
    /* 004b3b5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b3b5d: mov eax, 1 */ r_eax = 0x1u;
    /* 004b3b62: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004b3b69: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b3b6fu); call_ind(t); }
    /* 004b3b6f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b3b71:; BB(0x004b3b71);
    /* 004b3b71: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3b74: mov ecx, dword ptr [eax + ebx*4 + 0x600] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x600u));
    /* 004b3b7b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b3b7d: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b3b83u); call_ind(t); }
    /* 004b3b83: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b3b86: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3b89: jl 0x4b3b71 */ if ((fS!=fO)) goto L_004b3b71;
L_004b3b8b:; BB(0x004b3b8b);
    /* 004b3b8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3b8e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004b3b91: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 004b3b94: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b3b9a: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b3b9d: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b3ba2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3ba3: mov dword ptr [ecx + 0x630], eax */ W32((u32)(r_ecx+0x630u), r_eax);
    /* 004b3ba9: mov dword ptr [ecx + 0x6c8], edx */ W32((u32)(r_ecx+0x6c8u), r_edx);
    /* 004b3baf: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b3bb4u); f_004b1e58();
    /* 004b3bb4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3bb7: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 004b3bba: mov dword ptr [ecx + 0x74c], 0 */ W32((u32)(r_ecx+0x74cu), 0x0u);
    /* 004b3bc4: mov dword ptr [ecx + 0x764], eax */ W32((u32)(r_ecx+0x764u), r_eax);
    /* 004b3bca: mov dword ptr [ecx + 0x758], 0 */ W32((u32)(r_ecx+0x758u), 0x0u);
    /* 004b3bd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b3bd6: mov dword ptr [ecx + 0x734], edx */ W32((u32)(r_ecx+0x734u), r_edx);
    /* 004b3bdc: mov dword ptr [ecx + 0x730], edx */ W32((u32)(r_ecx+0x730u), r_edx);
    /* 004b3be2: mov dword ptr [ecx + 0x754], 0 */ W32((u32)(r_ecx+0x754u), 0x0u);
    /* 004b3bec: mov dword ptr [ecx + 0x738], edx */ W32((u32)(r_ecx+0x738u), r_edx);
    /* 004b3bf2: mov dword ptr [ecx + 0x78c], edx */ W32((u32)(r_ecx+0x78cu), r_edx);
    /* 004b3bf8: mov dword ptr [ecx + 0x73c], edx */ W32((u32)(r_ecx+0x73cu), r_edx);
    /* 004b3bfe: mov dword ptr [ecx + 0x750], 0 */ W32((u32)(r_ecx+0x750u), 0x0u);
    /* 004b3c08: mov dword ptr [ecx + 0x75c], 0xbe4ccccd */ W32((u32)(r_ecx+0x75cu), 0xbe4ccccdu);
    /* 004b3c12: mov dword ptr [ecx + 0x760], 0 */ W32((u32)(r_ecx+0x760u), 0x0u);
    /* 004b3c1c: mov dword ptr [ecx + 0x768], 0 */ W32((u32)(r_ecx+0x768u), 0x0u);
    /* 004b3c26: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b38e3(void)
{
    FN_ENTER(0x004b38e3);
    goto L_004b38e3;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b38e3); r_esp += 12; return;
L_004b38be:; BB(0x004b38be);
    /* 004b38be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b38c1: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b38c4: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b38ca: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b38ce: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b38d1: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b38d4: ja 0x4b3a02 */ if ((!fC&&!fZ)) goto L_004b3a02;
L_004b38da:; BB(0x004b38da);
    /* 004b38da: mov edx, dword ptr [edx*4 + 0x905160] */ r_edx = R32((u32)(r_edx*4+0x905160u));
    /* 004b38e1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b38e3:; BB(0x004b38e3);
    /* 004b38e3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004b38e8: jmp 0x4b38be */ goto L_004b38be;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b38ea(void)
{
    FN_ENTER(0x004b38ea);
    goto L_004b38ea;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b38ea); r_esp += 12; return;
L_004b38ea:; BB(0x004b38ea);
    /* 004b38ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b38ed: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b38f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b38f5: jne 0x4b3901 */ if (!fZ) goto L_004b3901;
L_004b38f7:; BB(0x004b38f7);
    /* 004b38f7: mov ecx, 0x15 */ r_ecx = 0x15u;
    /* 004b38fc: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3901:; BB(0x004b3901);
    /* 004b3901: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 004b3906: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b390b(void)
{
    FN_ENTER(0x004b390b);
    goto L_004b390b;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b390b); r_esp += 12; return;
L_004b390b:; BB(0x004b390b);
    /* 004b390b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b390e: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b3914: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3916: jne 0x4b3922 */ if (!fZ) goto L_004b3922;
L_004b3918:; BB(0x004b3918);
    /* 004b3918: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 004b391d: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3922:; BB(0x004b3922);
    /* 004b3922: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 004b3927: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b392c(void)
{
    FN_ENTER(0x004b392c);
    goto L_004b392c;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b392c); r_esp += 12; return;
L_004b392c:; BB(0x004b392c);
    /* 004b392c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b392f: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b3935: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3937: jne 0x4b3943 */ if (!fZ) goto L_004b3943;
L_004b3939:; BB(0x004b3939);
    /* 004b3939: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 004b393e: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3943:; BB(0x004b3943);
    /* 004b3943: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 004b3948: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b394d(void)
{
    FN_ENTER(0x004b394d);
    goto L_004b394d;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b394d); r_esp += 12; return;
L_004b394d:; BB(0x004b394d);
    /* 004b394d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3950: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b3956: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3958: jne 0x4b3964 */ if (!fZ) goto L_004b3964;
L_004b395a:; BB(0x004b395a);
    /* 004b395a: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 004b395f: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3964:; BB(0x004b3964);
    /* 004b3964: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 004b3969: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b396e(void)
{
    FN_ENTER(0x004b396e);
    goto L_004b396e;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b396e); r_esp += 12; return;
L_004b396e:; BB(0x004b396e);
    /* 004b396e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3971: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b3977: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3979: jne 0x4b3985 */ if (!fZ) goto L_004b3985;
L_004b397b:; BB(0x004b397b);
    /* 004b397b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004b3980: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3985:; BB(0x004b3985);
    /* 004b3985: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004b398a: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b398c(void)
{
    FN_ENTER(0x004b398c);
    goto L_004b398c;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b398c); r_esp += 12; return;
L_004b398c:; BB(0x004b398c);
    /* 004b398c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b398f: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b3995: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3997: jne 0x4b39a0 */ if (!fZ) goto L_004b39a0;
L_004b3999:; BB(0x004b3999);
    /* 004b3999: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004b399e: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b39a0:; BB(0x004b39a0);
    /* 004b39a0: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 004b39a5: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b39a7(void)
{
    FN_ENTER(0x004b39a7);
    goto L_004b39a7;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b39a7); r_esp += 12; return;
L_004b39a7:; BB(0x004b39a7);
    /* 004b39a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b39aa: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b39afu); f_00520bf4();
    /* 004b39af: fcomp dword ptr [0x906ed4] */ fx_compare(ST(0), R_F32((u32)(0x906ed4u))); FPOP();
    /* 004b39b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b39b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b39b8: jbe 0x4b39c1 */ if ((fC||fZ)) goto L_004b39c1;
L_004b39ba:; BB(0x004b39ba);
    /* 004b39ba: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 004b39bf: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b39c1:; BB(0x004b39c1);
    /* 004b39c1: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 004b39c6: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b39c8(void)
{
    FN_ENTER(0x004b39c8);
    goto L_004b39c8;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b39c8); r_esp += 12; return;
L_004b39c8:; BB(0x004b39c8);
    /* 004b39c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b39cb: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b39d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b39d3: jne 0x4b39dc */ if (!fZ) goto L_004b39dc;
L_004b39d5:; BB(0x004b39d5);
    /* 004b39d5: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004b39da: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b39dc:; BB(0x004b39dc);
    /* 004b39dc: mov ecx, 9 */ r_ecx = 0x9u;
    /* 004b39e1: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b39e3(void)
{
    FN_ENTER(0x004b39e3);
    goto L_004b39e3;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b39e3); r_esp += 12; return;
L_004b39e3:; BB(0x004b39e3);
    /* 004b39e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b39e6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b39ebu); f_00520bf4();
    /* 004b39eb: fcomp dword ptr [0x906ed4] */ fx_compare(ST(0), R_F32((u32)(0x906ed4u))); FPOP();
    /* 004b39f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b39f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b39f4: jbe 0x4b39fd */ if ((fC||fZ)) goto L_004b39fd;
L_004b39f6:; BB(0x004b39f6);
    /* 004b39f6: mov ecx, 8 */ r_ecx = 0x8u;
    /* 004b39fb: jmp 0x4b3a02 */ goto L_004b3a02;
L_004b39fd:; BB(0x004b39fd);
    /* 004b39fd: mov ecx, 6 */ r_ecx = 0x6u;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b3a02(void)
{
    FN_ENTER(0x004b3a02);
    goto L_004b3a02;
L_004b34b1:; BB(0x004b34b1);
    /* 004b34b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b34b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b34b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b34ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b34bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b34c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34c7: ret 8 */ FN_RET(0x004b3a02); r_esp += 12; return;
L_004b3a02:; BB(0x004b3a02);
    /* 004b3a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3a06: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b3a0bu); f_004b5150();
    /* 004b3a0b: jmp 0x4b34b1 */ goto L_004b34b1;
}

void f_004b3c2c(void) /* sub_4B3C2C */
{
    FN_ENTER(0x004b3c2c);
    /* 004b3c2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3c2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3c2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3c2f: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3c32: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004b3c34: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 004b3c38: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c3b: je 0x4b40d0 */ if (fZ) goto L_004b40d0;
L_004b3c41:; BB(0x004b3c41);
    /* 004b3c41: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c44: je 0x4b402d */ if (fZ) goto L_004b402d;
L_004b3c4a:; BB(0x004b3c4a);
    /* 004b3c4a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c4d: je 0x4b3edc */ if (fZ) goto L_004b3edc;
L_004b3c53:; BB(0x004b3c53);
    /* 004b3c53: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c56: je 0x4b3ea3 */ if (fZ) goto L_004b3ea3;
L_004b3c5c:; BB(0x004b3c5c);
    /* 004b3c5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c5e: je 0x4b3d3a */ if (fZ) goto L_004b3d3a;
L_004b3c64:; BB(0x004b3c64);
    /* 004b3c64: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c67: jne 0x4b3d16 */ if (!fZ) goto L_004b3d16;
L_004b3c6d:; BB(0x004b3c6d);
    /* 004b3c6d: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 004b3c73: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c75: je 0x4b3d0a */ if (fZ) goto L_004b3d0a;
L_004b3c7b:; BB(0x004b3c7b);
    /* 004b3c7b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c7e: je 0x4b3ecd */ if (fZ) goto L_004b3ecd;
L_004b3c84:; BB(0x004b3c84);
    /* 004b3c84: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3c86: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b3c8bu); f_007751b0();
    /* 004b3c8b: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004b3c8f: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004b3c93: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b3c95: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 004b3c99: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 004b3c9e: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b3ca3: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b3ca8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004b3cac: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004b3cb0: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b3cb4: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004b3cb8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3cba: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004b3cbe: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b3cc3u); f_00520f68();
    /* 004b3cc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b3cc5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b3cc7: jle 0x4b3ea3 */ if ((fZ||fS!=fO)) goto L_004b3ea3;
L_004b3ccd:; BB(0x004b3ccd);
    /* 004b3ccd: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 004b3cd1: mov ebp, edi */ r_ebp = r_edi;
    /* 004b3cd3: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 004b3cd7: mov edi, eax */ r_edi = r_eax;
    /* 004b3cd9: mov ebx, esi */ r_ebx = r_esi;
L_004b3cdb:; BB(0x004b3cdb);
    /* 004b3cdb: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 004b3ce2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3ce3: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4b3ce8u); f_00520f3c();
    /* 004b3ce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b3ce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3ceb: jne 0x4b3eac */ if (!fZ) goto L_004b3eac;
L_004b3cf1:; BB(0x004b3cf1);
    /* 004b3cf1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b3cf4: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3cf6: jl 0x4b3cfa */ if ((fS!=fO)) goto L_004b3cfa;
L_004b3cf8:; BB(0x004b3cf8);
    /* 004b3cf8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b3cfa:; BB(0x004b3cfa);
    /* 004b3cfa: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b3cfd: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3cff: jl 0x4b3cdb */ if ((fS!=fO)) goto L_004b3cdb;
L_004b3d01:; BB(0x004b3d01);
    /* 004b3d01: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004b3d05: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3d0a:; BB(0x004b3d0a);
    /* 004b3d0a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3d0c: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b3d11u); f_00520f68();
    /* 004b3d11: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3d16:; BB(0x004b3d16);
    /* 004b3d16: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3d19: jne 0x4b3ea3 */ if (!fZ) goto L_004b3ea3;
L_004b3d1f:; BB(0x004b3d1f);
    /* 004b3d1f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b3d21:; BB(0x004b3d21);
    /* 004b3d21: mov ecx, dword ptr [ebp + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x6e4u));
    /* 004b3d28: call 0x4bd1e8 */ r_esp -= 4; W32(r_esp, 0x4b3d2du); f_004bd1e8();
    /* 004b3d2d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b3d30: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d33: jl 0x4b3d21 */ if ((fS!=fO)) goto L_004b3d21;
L_004b3d35:; BB(0x004b3d35);
    /* 004b3d35: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3d3a:; BB(0x004b3d3a);
    /* 004b3d3a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3d3c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b3d41u); f_007aa094();
    /* 004b3d41: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 004b3d47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3d49: je 0x4b3e75 */ if (fZ) goto L_004b3e75;
L_004b3d4f:; BB(0x004b3d4f);
    /* 004b3d4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3d52: jne 0x4b3e43 */ if (!fZ) goto L_004b3e43;
L_004b3d58:; BB(0x004b3d58);
    /* 004b3d58: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b3d5e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b3d61: cmp eax, dword ptr [ebp + 0x73c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x73cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d67: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b3d6d: jl 0x4b3ea3 */ if ((fS!=fO)) goto L_004b3ea3;
L_004b3d73:; BB(0x004b3d73);
    /* 004b3d73: mov dword ptr [ebp + 0x734], 0 */ W32((u32)(r_ebp+0x734u), 0x0u);
    /* 004b3d7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3d7f: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x4b3d84u); f_00520f04();
    /* 004b3d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3d86: je 0x4b3da4 */ if (fZ) goto L_004b3da4;
L_004b3d88:; BB(0x004b3d88);
    /* 004b3d88: mov esi, dword ptr [ebp + 0x398] */ r_esi = R32((u32)(r_ebp+0x398u));
    /* 004b3d8e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004b3d91: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004b3d94: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 004b3d97: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b3d9a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b3d9e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004b3da2: jmp 0x4b3dfd */ goto L_004b3dfd;
L_004b3da4:; BB(0x004b3da4);
    /* 004b3da4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3da6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b3dabu); f_007751b0();
    /* 004b3dab: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004b3daf: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004b3db3: fmul dword ptr [0x906e70] */ ST(0) = ST(0) * R_F32((u32)(0x906e70u));
    /* 004b3db9: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004b3dbd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3dbf: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x4b3dc4u); f_00520c20();
    /* 004b3dc4: mov esi, eax */ r_esi = r_eax;
    /* 004b3dc6: mov ecx, esi */ r_ecx = r_esi;
    /* 004b3dc8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4b3dcdu); f_0082dcbc();
    /* 004b3dcd: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004b3dd1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b3dd4: mov ecx, esi */ r_ecx = r_esi;
    /* 004b3dd6: mov dword ptr [esp + 4], 0xbfeccccd */ W32((u32)(r_esp+0x4u), 0xbfeccccdu);
    /* 004b3dde: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4b3de3u); f_0082ddd8();
    /* 004b3de3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004b3de7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b3de9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b3ded: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004b3df0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b3df3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3df4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3df5: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x4b3dfau); f_00782bb0();
    /* 004b3dfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b3dfd:; BB(0x004b3dfd);
    /* 004b3dfd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b3e00: push dword ptr [ebp + 0x740] */ { u32 v = R32((u32)(r_ebp+0x740u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b3e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3e07: mov edx, dword ptr [ebp + 0x738] */ r_edx = R32((u32)(r_ebp+0x738u));
    /* 004b3e0d: mov ecx, dword ptr [ebp + edx*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x6e4u));
    /* 004b3e14: call 0x4bd190 */ r_esp -= 4; W32(r_esp, 0x4b3e19u); f_004bd190();
    /* 004b3e19: mov eax, dword ptr [ebp + 0x738] */ r_eax = R32((u32)(r_ebp+0x738u));
    /* 004b3e1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b3e22: mov dword ptr [ebp + 0x738], eax */ W32((u32)(r_ebp+0x738u), r_eax);
    /* 004b3e28: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3e2b: jl 0x4b3ea3 */ if ((fS!=fO)) goto L_004b3ea3;
L_004b3e2d:; BB(0x004b3e2d);
    /* 004b3e2d: mov dword ptr [ebp + 0x734], 0 */ W32((u32)(r_ebp+0x734u), 0x0u);
    /* 004b3e37: mov dword ptr [ebp + 0x730], 2 */ W32((u32)(r_ebp+0x730u), 0x2u);
    /* 004b3e41: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3e43:; BB(0x004b3e43);
    /* 004b3e43: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3e46: jne 0x4b3ea3 */ if (!fZ) goto L_004b3ea3;
L_004b3e48:; BB(0x004b3e48);
    /* 004b3e48: add dword ptr [ebp + 0x734], 1 */ { u32 ad = (u32)(r_ebp+0x734u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004b3e4f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b3e51:; BB(0x004b3e51);
    /* 004b3e51: mov ecx, dword ptr [ebp + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x6e4u));
    /* 004b3e58: call 0x4bd220 */ r_esp -= 4; W32(r_esp, 0x4b3e5du); f_004bd220();
    /* 004b3e5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3e5f: je 0x4b3ebe */ if (fZ) goto L_004b3ebe;
L_004b3e61:; BB(0x004b3e61);
    /* 004b3e61: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b3e64: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3e67: jl 0x4b3e51 */ if ((fS!=fO)) goto L_004b3e51;
L_004b3e69:; BB(0x004b3e69);
    /* 004b3e69: mov dword ptr [ebp + 0x730], 3 */ W32((u32)(r_ebp+0x730u), 0x3u);
    /* 004b3e73: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3e75:; BB(0x004b3e75);
    /* 004b3e75: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b3e7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b3e7e: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3e81: jg 0x4b3e8b */ if ((!fZ&&fS==fO)) goto L_004b3e8b;
L_004b3e83:; BB(0x004b3e83);
    /* 004b3e83: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b3e89: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3e8b:; BB(0x004b3e8b);
    /* 004b3e8b: mov dword ptr [ebp + 0x730], 1 */ W32((u32)(r_ebp+0x730u), 0x1u);
    /* 004b3e95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b3e97: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b3e9d: mov dword ptr [ebp + 0x738], eax */ W32((u32)(r_ebp+0x738u), r_eax);
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3c2c); r_esp += 12; return;
L_004b3eac:; BB(0x004b3eac);
    /* 004b3eac: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 004b3eb0: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004b3eb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3eb5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3eb7: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b3ebcu); f_00521388();
    /* 004b3ebc: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3ebe:; BB(0x004b3ebe);
    /* 004b3ebe: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b3ec4: cmp eax, 0x258 */ {  u32 a = r_eax; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3ec9: jle 0x4b3ea3 */ if ((fZ||fS!=fO)) goto L_004b3ea3;
L_004b3ecb:; BB(0x004b3ecb);
    /* 004b3ecb: jmp 0x4b3e69 */ goto L_004b3e69;
L_004b3ecd:; BB(0x004b3ecd);
    /* 004b3ecd: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b3ed3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3ed5: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b3edau); f_00521388();
    /* 004b3eda: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b3edc:; BB(0x004b3edc);
    /* 004b3edc: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 004b3ee2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3ee5: jne 0x4b3ea3 */ if (!fZ) goto L_004b3ea3;
L_004b3ee7:; BB(0x004b3ee7);
    /* 004b3ee7: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004b3eec: mov eax, dword ptr [eax*4 + 0x9abc68] */ r_eax = R32((u32)(r_eax*4+0x9abc68u));
    /* 004b3ef3: mov edx, dword ptr [ebp + 0x6bc] */ r_edx = R32((u32)(r_ebp+0x6bcu));
    /* 004b3ef9: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 004b3efc: mov dword ptr [ebp + 0x6bc], esi */ W32((u32)(r_ebp+0x6bcu), r_esi);
    /* 004b3f02: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b3f06: lea esi, [edx - 0x1e] */ r_esi = (u32)(r_edx+0xffffffe2u);
    /* 004b3f09: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b3f0c: ja 0x4b4020 */ if ((!fC&&!fZ)) goto L_004b4020;
L_004b3f12:; BB(0x004b3f12);
    /* 004b3f12: mov esi, dword ptr [esi*4 + 0x905200] */ r_esi = R32((u32)(r_esi*4+0x905200u));
    /* 004b3f19: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b402d:; BB(0x004b402d);
    /* 004b402d: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 004b4033: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4036: jne 0x4b3ea3 */ if (!fZ) goto L_004b3ea3;
L_004b403c:; BB(0x004b403c);
    /* 004b403c: mov eax, dword ptr [ebp + 0x6c8] */ r_eax = R32((u32)(r_ebp+0x6c8u));
    /* 004b4042: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4044: jne 0x4b408b */ if (!fZ) goto L_004b408b;
L_004b4046:; BB(0x004b4046);
    /* 004b4046: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4048: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b404a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b404d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b404f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b4055u); call_ind(t); }
    /* 004b4055: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004b4059: mov ebp, dword ptr [ebp + 0x6bc] */ r_ebp = R32((u32)(r_ebp+0x6bcu));
    /* 004b405f: mov byte ptr [esp + 0x14], 0xa9 */ W8((u32)(r_esp+0x14u), 0xa9u);
    /* 004b4064: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b4069: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 004b406e: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004b4073: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004b4078: mov word ptr [esp + 0x1a], bp */ W16((u32)(r_esp+0x1au), (u16)r_ebp);
    /* 004b407d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004b4081: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b4086u); f_008003e0();
    /* 004b4086: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b408b:; BB(0x004b408b);
    /* 004b408b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b408d: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004b408f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b4092: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4094: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b409au); call_ind(t); }
    /* 004b409a: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004b409e: mov ebp, dword ptr [ebp + 0x6bc] */ r_ebp = R32((u32)(r_ebp+0x6bcu));
    /* 004b40a4: mov byte ptr [esp + 0xc], 0xa9 */ W8((u32)(r_esp+0xcu), 0xa9u);
    /* 004b40a9: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b40ae: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 004b40b3: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004b40b8: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004b40bd: mov word ptr [esp + 0x12], bp */ W16((u32)(r_esp+0x12u), (u16)r_ebp);
    /* 004b40c2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004b40c6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b40cbu); f_008003e0();
    /* 004b40cb: jmp 0x4b3ea3 */ goto L_004b3ea3;
L_004b40d0:; BB(0x004b40d0);
    /* 004b40d0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b40d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b40d5: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b40dbu); call_ind(t); }
    /* 004b40db: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b40dd:; BB(0x004b40dd);
    /* 004b40dd: mov ecx, dword ptr [ebp + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x600u));
    /* 004b40e4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b40e6: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b40ecu); call_ind(t); }
    /* 004b40ec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b40ef: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b40f2: jl 0x4b40dd */ if ((fS!=fO)) goto L_004b40dd;
L_004b40f4:; BB(0x004b40f4);
    /* 004b40f4: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 004b40f8: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 004b40fc: mov eax, dword ptr [ebp + 0x630] */ r_eax = R32((u32)(r_ebp+0x630u));
    /* 004b4102: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b4103: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4108: mov dword ptr [ebp + 0x630], eax */ W32((u32)(r_ebp+0x630u), r_eax);
    /* 004b410e: mov dword ptr [ebp + 0x6c8], edx */ W32((u32)(r_ebp+0x6c8u), r_edx);
    /* 004b4114: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4116: call 0x4b416c */ r_esp -= 4; W32(r_esp, 0x4b411bu); f_004b416c();
    /* 004b411b: mov eax, dword ptr [ebp + 0x6c8] */ r_eax = R32((u32)(r_ebp+0x6c8u));
    /* 004b4121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4123: jne 0x4b4133 */ if (!fZ) goto L_004b4133;
L_004b4125:; BB(0x004b4125);
    /* 004b4125: mov eax, 9 */ r_eax = 0x9u;
    /* 004b412a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004b4131: jmp 0x4b413f */ goto L_004b413f;
L_004b4133:; BB(0x004b4133);
    /* 004b4133: mov eax, 0xa */ r_eax = 0xau;
    /* 004b4138: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_004b413f:; BB(0x004b413f);
    /* 004b413f: mov dword ptr [ebp + 0x73c], 0xb4 */ W32((u32)(r_ebp+0x73cu), 0xb4u);
    /* 004b4149: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b414b: mov dword ptr [ebp + 0x730], eax */ W32((u32)(r_ebp+0x730u), r_eax);
    /* 004b4151: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b4157: mov dword ptr [ebp + 0x740], 0x78 */ W32((u32)(r_ebp+0x740u), 0x78u);
    /* 004b4161: mov dword ptr [ebp + 0x738], eax */ W32((u32)(r_ebp+0x738u), r_eax);
    /* 004b4167: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3f1b(void)
{
    FN_ENTER(0x004b3f1b);
    goto L_004b3f1b;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3f1b); r_esp += 12; return;
L_004b3ef9:; BB(0x004b3ef9);
    /* 004b3ef9: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 004b3efc: mov dword ptr [ebp + 0x6bc], esi */ W32((u32)(r_ebp+0x6bcu), r_esi);
    /* 004b3f02: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b3f06: lea esi, [edx - 0x1e] */ r_esi = (u32)(r_edx+0xffffffe2u);
    /* 004b3f09: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b3f0c: ja 0x4b4020 */ if ((!fC&&!fZ)) goto L_004b4020;
L_004b3f12:; BB(0x004b3f12);
    /* 004b3f12: mov esi, dword ptr [esi*4 + 0x905200] */ r_esi = R32((u32)(r_esi*4+0x905200u));
    /* 004b3f19: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b3f1b:; BB(0x004b3f1b);
    /* 004b3f1b: mov edx, 1 */ r_edx = 0x1u;
    /* 004b3f20: jmp 0x4b3ef9 */ goto L_004b3ef9;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3f22(void)
{
    FN_ENTER(0x004b3f22);
    goto L_004b3f22;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3f22); r_esp += 12; return;
L_004b3f22:; BB(0x004b3f22);
    /* 004b3f22: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3f28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3f2a: jne 0x4b3f36 */ if (!fZ) goto L_004b3f36;
L_004b3f2c:; BB(0x004b3f2c);
    /* 004b3f2c: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b3f31: jmp 0x4b4020 */ goto L_004b4020;
L_004b3f36:; BB(0x004b3f36);
    /* 004b3f36: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b3f3b: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3f40(void)
{
    FN_ENTER(0x004b3f40);
    goto L_004b3f40;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3f40); r_esp += 12; return;
L_004b3f40:; BB(0x004b3f40);
    /* 004b3f40: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3f48: jne 0x4b3f54 */ if (!fZ) goto L_004b3f54;
L_004b3f4a:; BB(0x004b3f4a);
    /* 004b3f4a: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004b3f4f: jmp 0x4b4020 */ goto L_004b4020;
L_004b3f54:; BB(0x004b3f54);
    /* 004b3f54: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004b3f59: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3f5e(void)
{
    FN_ENTER(0x004b3f5e);
    goto L_004b3f5e;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3f5e); r_esp += 12; return;
L_004b3f5e:; BB(0x004b3f5e);
    /* 004b3f5e: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3f66: jne 0x4b3f72 */ if (!fZ) goto L_004b3f72;
L_004b3f68:; BB(0x004b3f68);
    /* 004b3f68: mov edx, 0x11 */ r_edx = 0x11u;
    /* 004b3f6d: jmp 0x4b4020 */ goto L_004b4020;
L_004b3f72:; BB(0x004b3f72);
    /* 004b3f72: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004b3f77: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3f7c(void)
{
    FN_ENTER(0x004b3f7c);
    goto L_004b3f7c;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3f7c); r_esp += 12; return;
L_004b3f7c:; BB(0x004b3f7c);
    /* 004b3f7c: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3f82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3f84: jne 0x4b3f90 */ if (!fZ) goto L_004b3f90;
L_004b3f86:; BB(0x004b3f86);
    /* 004b3f86: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b3f8b: jmp 0x4b4020 */ goto L_004b4020;
L_004b3f90:; BB(0x004b3f90);
    /* 004b3f90: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b3f95: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3f9a(void)
{
    FN_ENTER(0x004b3f9a);
    goto L_004b3f9a;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3f9a); r_esp += 12; return;
L_004b3f9a:; BB(0x004b3f9a);
    /* 004b3f9a: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3fa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3fa2: jne 0x4b3fab */ if (!fZ) goto L_004b3fab;
L_004b3fa4:; BB(0x004b3fa4);
    /* 004b3fa4: mov edx, 4 */ r_edx = 0x4u;
    /* 004b3fa9: jmp 0x4b4020 */ goto L_004b4020;
L_004b3fab:; BB(0x004b3fab);
    /* 004b3fab: mov edx, 0xa */ r_edx = 0xau;
    /* 004b3fb0: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3fb2(void)
{
    FN_ENTER(0x004b3fb2);
    goto L_004b3fb2;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3fb2); r_esp += 12; return;
L_004b3fb2:; BB(0x004b3fb2);
    /* 004b3fb2: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3fb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3fba: jne 0x4b3fc3 */ if (!fZ) goto L_004b3fc3;
L_004b3fbc:; BB(0x004b3fbc);
    /* 004b3fbc: mov edx, 3 */ r_edx = 0x3u;
    /* 004b3fc1: jmp 0x4b4020 */ goto L_004b4020;
L_004b3fc3:; BB(0x004b3fc3);
    /* 004b3fc3: mov edx, 0xb */ r_edx = 0xbu;
    /* 004b3fc8: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3fca(void)
{
    FN_ENTER(0x004b3fca);
    goto L_004b3fca;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3fca); r_esp += 12; return;
L_004b3fca:; BB(0x004b3fca);
    /* 004b3fca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b3fcc: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b3fd1u); f_00520bf4();
    /* 004b3fd1: fcomp dword ptr [0x906e68] */ fx_compare(ST(0), R_F32((u32)(0x906e68u))); FPOP();
    /* 004b3fd7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b3fd9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b3fda: jbe 0x4b3fe3 */ if ((fC||fZ)) goto L_004b3fe3;
L_004b3fdc:; BB(0x004b3fdc);
    /* 004b3fdc: mov edx, 0xc */ r_edx = 0xcu;
    /* 004b3fe1: jmp 0x4b4020 */ goto L_004b4020;
L_004b3fe3:; BB(0x004b3fe3);
    /* 004b3fe3: mov edx, 0xe */ r_edx = 0xeu;
    /* 004b3fe8: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b3fea(void)
{
    FN_ENTER(0x004b3fea);
    goto L_004b3fea;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b3fea); r_esp += 12; return;
L_004b3fea:; BB(0x004b3fea);
    /* 004b3fea: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b3ff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3ff2: jne 0x4b3ffb */ if (!fZ) goto L_004b3ffb;
L_004b3ff4:; BB(0x004b3ff4);
    /* 004b3ff4: mov edx, 5 */ r_edx = 0x5u;
    /* 004b3ff9: jmp 0x4b4020 */ goto L_004b4020;
L_004b3ffb:; BB(0x004b3ffb);
    /* 004b3ffb: mov edx, 9 */ r_edx = 0x9u;
    /* 004b4000: jmp 0x4b4020 */ goto L_004b4020;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

