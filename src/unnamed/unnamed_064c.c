#include "protos.h"

void f_0064c304(void) /* sub_64C304 */
{
    FN_ENTER(0x0064c304);
    /* 0064c304: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c305: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c306: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c309: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064c30b: mov eax, dword ptr [ebx + 0x1c0] */ r_eax = R32((u32)(r_ebx+0x1c0u));
    /* 0064c311: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c314: je 0x64cb30 */ if (fZ) goto L_0064cb30;
L_0064c31a:; BB(0x0064c31a);
    /* 0064c31a: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0064c321: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c323: je 0x64caed */ if (fZ) goto L_0064caed;
L_0064c329:; BB(0x0064c329);
    /* 0064c329: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c32c: je 0x64c823 */ if (fZ) goto L_0064c823;
L_0064c332:; BB(0x0064c332);
    /* 0064c332: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c335: je 0x64c446 */ if (fZ) goto L_0064c446;
L_0064c33b:; BB(0x0064c33b);
    /* 0064c33b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c33e: je 0x64c428 */ if (fZ) goto L_0064c428;
L_0064c344:; BB(0x0064c344);
    /* 0064c344: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c347: je 0x64c35c */ if (fZ) goto L_0064c35c;
L_0064c349:; BB(0x0064c349);
    /* 0064c349: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c34c: je 0x64c38e */ if (fZ) goto L_0064c38e;
L_0064c34e:; BB(0x0064c34e);
    /* 0064c34e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c351: jne 0x64c38e */ if (!fZ) goto L_0064c38e;
L_0064c353:; BB(0x0064c353);
    /* 0064c353: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c355: call 0x64cb44 */ r_esp -= 4; W32(r_esp, 0x64c35au); f_0064cb44();
    /* 0064c35a: jmp 0x64c38e */ goto L_0064c38e;
L_0064c35c:; BB(0x0064c35c);
    /* 0064c35c: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c362: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c364: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x64c369u); f_0064cbb4();
    /* 0064c369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c36b: jne 0x64c37b */ if (!fZ) goto L_0064c37b;
L_0064c36d:; BB(0x0064c36d);
    /* 0064c36d: mov eax, 1 */ r_eax = 0x1u;
    /* 0064c372: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c379: jmp 0x64c38e */ goto L_0064c38e;
L_0064c37b:; BB(0x0064c37b);
    /* 0064c37b: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0064c380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c382: je 0x64c38e */ if (fZ) goto L_0064c38e;
L_0064c384:; BB(0x0064c384);
    /* 0064c384: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x64c389u); f_007a61a4();
    /* 0064c389: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c38c: je 0x64c394 */ if (fZ) goto L_0064c394;
L_0064c38e:; BB(0x0064c38e);
    /* 0064c38e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064c391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064c392: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064c393: ret  */ FN_RET(0x0064c304); r_esp += 4; return;
L_0064c394:; BB(0x0064c394);
    /* 0064c394: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x64c399u); f_0052cf54();
    /* 0064c399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c39b: je 0x64c38e */ if (fZ) goto L_0064c38e;
L_0064c39d:; BB(0x0064c39d);
    /* 0064c39d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c3a0: mov esi, 1 */ r_esi = 0x1u;
    /* 0064c3a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c3a7: mov edi, eax */ r_edi = r_eax;
L_0064c3a9:; BB(0x0064c3a9);
    /* 0064c3a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3aa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c3afu); f_0068d5a8();
    /* 0064c3af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c3b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c3b2: je 0x64c3e3 */ if (fZ) goto L_0064c3e3;
L_0064c3b4:; BB(0x0064c3b4);
    /* 0064c3b4: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0064c3ba: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c3c0: jne 0x64c3e1 */ if (!fZ) goto L_0064c3e1;
L_0064c3c2:; BB(0x0064c3c2);
    /* 0064c3c2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064c3c5: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0064c3c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3ca: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64c3cfu); f_0078ea50();
    /* 0064c3cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c3d2: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0064c3d8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064c3da: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064c3dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c3de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064c3df: jae 0x64c3e3 */ if (!fC) goto L_0064c3e3;
L_0064c3e1:; BB(0x0064c3e1);
    /* 0064c3e1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0064c3e3:; BB(0x0064c3e3);
    /* 0064c3e3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064c3e6: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c3e9: jl 0x64c3a9 */ if ((fS!=fO)) goto L_0064c3a9;
L_0064c3eb:; BB(0x0064c3eb);
    /* 0064c3eb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064c3ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c3f0: je 0x64c38e */ if (fZ) goto L_0064c38e;
L_0064c3f2:; BB(0x0064c3f2);
    /* 0064c3f2: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0064c3f6: mov byte ptr [esp + 4], 0x6a */ W8((u32)(r_esp+0x4u), 0x6au);
    /* 0064c3fb: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c400: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 0064c404: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 0064c409: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0064c40e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0064c412: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64c417u); f_008003e0();
    /* 0064c417: mov eax, 5 */ r_eax = 0x5u;
    /* 0064c41c: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c423: jmp 0x64c38e */ goto L_0064c38e;
L_0064c428:; BB(0x0064c428);
    /* 0064c428: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c42e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c430: call 0x64bef4 */ r_esp -= 4; W32(r_esp, 0x64c435u); f_0064bef4();
    /* 0064c435: mov eax, 4 */ r_eax = 0x4u;
    /* 0064c43a: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c441: jmp 0x64c38e */ goto L_0064c38e;
L_0064c446:; BB(0x0064c446);
    /* 0064c446: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064c44d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c44f: jne 0x64c461 */ if (!fZ) goto L_0064c461;
L_0064c451:; BB(0x0064c451);
    /* 0064c451: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0064c457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c459: je 0x64c4ef */ if (fZ) goto L_0064c4ef;
L_0064c45f:; BB(0x0064c45f);
    /* 0064c45f: jmp 0x64c474 */ goto L_0064c474;
L_0064c461:; BB(0x0064c461);
    /* 0064c461: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c464: jne 0x64c474 */ if (!fZ) goto L_0064c474;
L_0064c466:; BB(0x0064c466);
    /* 0064c466: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0064c46c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c46e: je 0x64c56b */ if (fZ) goto L_0064c56b;
L_0064c474:; BB(0x0064c474);
    /* 0064c474: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c47a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c47c: je 0x64c772 */ if (fZ) goto L_0064c772;
L_0064c482:; BB(0x0064c482);
    /* 0064c482: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c484: je 0x64c5b5 */ if (fZ) goto L_0064c5b5;
L_0064c48a:; BB(0x0064c48a);
    /* 0064c48a: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0064c490: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0064c492: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c494: jle 0x64c5b5 */ if ((fZ||fS!=fO)) goto L_0064c5b5;
L_0064c49a:; BB(0x0064c49a);
    /* 0064c49a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c49d: jmp 0x64c4a5 */ goto L_0064c4a5;
L_0064c49f:; BB(0x0064c49f);
    /* 0064c49f: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0064c4a5:; BB(0x0064c4a5);
    /* 0064c4a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c4a6: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0064c4ad: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c4af: mov eax, 0 */ r_eax = 0x0u;
    /* 0064c4b4: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064c4b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c4b8: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x64c4bdu); f_00714d7c();
    /* 0064c4bd: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064c4c4: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0064c4c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c4cc: je 0x64c73e */ if (fZ) goto L_0064c73e;
L_0064c4d2:; BB(0x0064c4d2);
    /* 0064c4d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c4d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c4d4: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c4da: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x64c4dfu); f_00714df8();
    /* 0064c4df: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c4e2: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c4e8: jl 0x64c49f */ if ((fS!=fO)) goto L_0064c49f;
L_0064c4ea:; BB(0x0064c4ea);
    /* 0064c4ea: jmp 0x64c5b2 */ goto L_0064c5b2;
L_0064c4ef:; BB(0x0064c4ef);
    /* 0064c4ef: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c4f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c4f6: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x64c4fbu); f_0073cd8c();
    /* 0064c4fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c4fe: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0064c504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c506: je 0x64c474 */ if (fZ) goto L_0064c474;
L_0064c50c:; BB(0x0064c50c);
    /* 0064c50c: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c50e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64c513u); f_0079317c();
    /* 0064c513: mov esi, eax */ r_esi = r_eax;
    /* 0064c515: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c517: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c51cu); f_0073ec50();
    /* 0064c51c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c51f: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c525: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c52b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c52c: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x64c531u); f_0073ce70();
    /* 0064c531: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c533: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c539: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x64c53eu); f_0073d148();
    /* 0064c53e: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c544: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x64c549u); f_0073d170();
    /* 0064c549: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c54f: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x64c554u); f_00718078();
    /* 0064c554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c555: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64c55au); f_00717d68();
    /* 0064c55a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c560: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x64c565u); f_00717f08();
    /* 0064c565: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c566: jmp 0x64c474 */ goto L_0064c474;
L_0064c56b:; BB(0x0064c56b);
    /* 0064c56b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c571: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c572: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x64c577u); f_0073cd8c();
    /* 0064c577: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c57a: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0064c580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c582: je 0x64c474 */ if (fZ) goto L_0064c474;
L_0064c588:; BB(0x0064c588);
    /* 0064c588: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c58a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64c58fu); f_0079317c();
    /* 0064c58f: mov esi, eax */ r_esi = r_eax;
    /* 0064c591: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c593: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c598u); f_0073ec50();
    /* 0064c598: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c59b: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5a1: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c5a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5a8: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x64c5adu); f_0073d0b0();
    /* 0064c5ad: jmp 0x64c474 */ goto L_0064c474;
L_0064c5b2:; BB(0x0064c5b2);
    /* 0064c5b2: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064c5b5:; BB(0x0064c5b5);
    /* 0064c5b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5b7: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64c5bcu); f_00791748();
    /* 0064c5bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c5bd: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c5c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c5c5: je 0x64c658 */ if (fZ) goto L_0064c658;
L_0064c5cb:; BB(0x0064c5cb);
    /* 0064c5cb: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x64c5d0u); f_0073d114();
    /* 0064c5d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c5d2: je 0x64c5e2 */ if (fZ) goto L_0064c5e2;
L_0064c5d4:; BB(0x0064c5d4);
    /* 0064c5d4: mov eax, 3 */ r_eax = 0x3u;
    /* 0064c5d9: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c5e0: jmp 0x64c658 */ goto L_0064c658;
L_0064c5e2:; BB(0x0064c5e2);
    /* 0064c5e2: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c5e8: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x64c5edu); f_0073ce50();
    /* 0064c5ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c5ef: je 0x64c658 */ if (fZ) goto L_0064c658;
L_0064c5f1:; BB(0x0064c5f1);
    /* 0064c5f1: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c5f7: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x64c5fcu); f_0073d134();
    /* 0064c5fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c5fe: je 0x64c613 */ if (fZ) goto L_0064c613;
L_0064c600:; BB(0x0064c600);
    /* 0064c600: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c603: jne 0x64c658 */ if (!fZ) goto L_0064c658;
L_0064c605:; BB(0x0064c605);
    /* 0064c605: mov eax, 3 */ r_eax = 0x3u;
    /* 0064c60a: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c611: jmp 0x64c658 */ goto L_0064c658;
L_0064c613:; BB(0x0064c613);
    /* 0064c613: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c619: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c61b: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x64c620u); f_0064cc10();
    /* 0064c620: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0064c624: mov byte ptr [esp + 0x14], 0x6a */ W8((u32)(r_esp+0x14u), 0x6au);
    /* 0064c629: mov edx, 1 */ r_edx = 0x1u;
    /* 0064c62e: mov dword ptr [ebx + 0x1d4], edx */ W32((u32)(r_ebx+0x1d4u), r_edx);
    /* 0064c634: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 0064c639: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0064c63e: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0064c643: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0064c647: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64c64cu); f_008003e0();
    /* 0064c64c: mov eax, 5 */ r_eax = 0x5u;
    /* 0064c651: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
L_0064c658:; BB(0x0064c658);
    /* 0064c658: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0064c65d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c65f: jne 0x64c66a */ if (!fZ) goto L_0064c66a;
L_0064c661:; BB(0x0064c661);
    /* 0064c661: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0064c668: jmp 0x64c67b */ goto L_0064c67b;
L_0064c66a:; BB(0x0064c66a);
    /* 0064c66a: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x64c66fu); f_007a61a4();
    /* 0064c66f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c672: je 0x64c690 */ if (fZ) goto L_0064c690;
L_0064c674:; BB(0x0064c674);
    /* 0064c674: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
L_0064c67b:; BB(0x0064c67b);
    /* 0064c67b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c67e: je 0x64c38e */ if (fZ) goto L_0064c38e;
L_0064c684:; BB(0x0064c684);
    /* 0064c684: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c686: call 0x64cb44 */ r_esp -= 4; W32(r_esp, 0x64c68bu); f_0064cb44();
    /* 0064c68b: jmp 0x64c38e */ goto L_0064c38e;
L_0064c690:; BB(0x0064c690);
    /* 0064c690: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x64c695u); f_0052cf54();
    /* 0064c695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c697: jne 0x64c6a2 */ if (!fZ) goto L_0064c6a2;
L_0064c699:; BB(0x0064c699);
    /* 0064c699: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0064c6a0: jmp 0x64c67b */ goto L_0064c67b;
L_0064c6a2:; BB(0x0064c6a2);
    /* 0064c6a2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c6a5: mov esi, 1 */ r_esi = 0x1u;
    /* 0064c6aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c6ac: mov edi, eax */ r_edi = r_eax;
L_0064c6ae:; BB(0x0064c6ae);
    /* 0064c6ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6af: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c6b4u); f_0068d5a8();
    /* 0064c6b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c6b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c6b7: je 0x64c6e8 */ if (fZ) goto L_0064c6e8;
L_0064c6b9:; BB(0x0064c6b9);
    /* 0064c6b9: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0064c6bf: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c6c5: jne 0x64c6e6 */ if (!fZ) goto L_0064c6e6;
L_0064c6c7:; BB(0x0064c6c7);
    /* 0064c6c7: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064c6ca: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0064c6cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6cf: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64c6d4u); f_0078ea50();
    /* 0064c6d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c6d7: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0064c6dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064c6df: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064c6e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c6e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064c6e4: jae 0x64c6e8 */ if (!fC) goto L_0064c6e8;
L_0064c6e6:; BB(0x0064c6e6);
    /* 0064c6e6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0064c6e8:; BB(0x0064c6e8);
    /* 0064c6e8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064c6eb: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c6ee: jl 0x64c6ae */ if ((fS!=fO)) goto L_0064c6ae;
L_0064c6f0:; BB(0x0064c6f0);
    /* 0064c6f0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064c6f3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c6f5: jne 0x64c703 */ if (!fZ) goto L_0064c703;
L_0064c6f7:; BB(0x0064c6f7);
    /* 0064c6f7: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0064c6fe: jmp 0x64c67b */ goto L_0064c67b;
L_0064c703:; BB(0x0064c703);
    /* 0064c703: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0064c707: mov byte ptr [esp + 0x1c], 0x6a */ W8((u32)(r_esp+0x1cu), 0x6au);
    /* 0064c70c: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c711: mov byte ptr [esp + 0x1d], al */ W8((u32)(r_esp+0x1du), (u8)r_eax);
    /* 0064c715: mov word ptr [esp + 0x1e], si */ W16((u32)(r_esp+0x1eu), (u16)r_esi);
    /* 0064c71a: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 0064c71f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0064c723: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64c728u); f_008003e0();
    /* 0064c728: mov eax, 5 */ r_eax = 0x5u;
    /* 0064c72d: mov edx, 5 */ r_edx = 0x5u;
    /* 0064c732: mov word ptr [ebx + 0xe4], dx */ W16((u32)(r_ebx+0xe4u), (u16)r_edx);
    /* 0064c739: jmp 0x64c67b */ goto L_0064c67b;
L_0064c73e:; BB(0x0064c73e);
    /* 0064c73e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c73f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c744u); f_0068d5a8();
    /* 0064c744: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c745: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c747: je 0x64c4d2 */ if (fZ) goto L_0064c4d2;
L_0064c74d:; BB(0x0064c74d);
    /* 0064c74d: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0064c753: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064c755: je 0x64c75e */ if (fZ) goto L_0064c75e;
L_0064c757:; BB(0x0064c757);
    /* 0064c757: mov eax, 1 */ r_eax = 0x1u;
    /* 0064c75c: jmp 0x64c760 */ goto L_0064c760;
L_0064c75e:; BB(0x0064c75e);
    /* 0064c75e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064c760:; BB(0x0064c760);
    /* 0064c760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c762: je 0x64c4d2 */ if (fZ) goto L_0064c4d2;
L_0064c768:; BB(0x0064c768);
    /* 0064c768: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0064c76d: jmp 0x64c4d2 */ goto L_0064c4d2;
L_0064c772:; BB(0x0064c772);
    /* 0064c772: mov dword ptr [esp + 0xc], 0x43650000 */ W32((u32)(r_esp+0xcu), 0x43650000u);
    /* 0064c77a: mov dword ptr [esp + 0x10], 0x42d00000 */ W32((u32)(r_esp+0x10u), 0x42d00000u);
    /* 0064c782: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c784: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c789u); f_0073ec50();
    /* 0064c789: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0064c78d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c78e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c78f: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x64c794u); f_00714ab0();
    /* 0064c794: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c797: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0064c79d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c79f: je 0x64c813 */ if (fZ) goto L_0064c813;
L_0064c7a1:; BB(0x0064c7a1);
    /* 0064c7a1: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0064c7a8: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0064c7ae: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0064c7b5: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0064c7bb: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0064c7c2: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064c7c7: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0064c7ce: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0064c7d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c7d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c7d8: jle 0x64c813 */ if ((fZ||fS!=fO)) goto L_0064c813;
L_0064c7da:; BB(0x0064c7da);
    /* 0064c7da: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c7dd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0064c7e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c7e2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0064c7e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c7e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c7e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c7ea: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0064c7f1: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c7f3: mov edi, eax */ r_edi = r_eax;
L_0064c7f5:; BB(0x0064c7f5);
    /* 0064c7f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7f7: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c7fd: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x64c802u); f_00714d34();
    /* 0064c802: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c805: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064c808: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c80e: jl 0x64c7f5 */ if ((fS!=fO)) goto L_0064c7f5;
L_0064c810:; BB(0x0064c810);
    /* 0064c810: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064c813:; BB(0x0064c813);
    /* 0064c813: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64c818u); f_00717d68();
    /* 0064c818: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c81e: jmp 0x64c482 */ goto L_0064c482;
L_0064c823:; BB(0x0064c823);
    /* 0064c823: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c829: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c82b: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x64c830u); f_0064cbb4();
    /* 0064c830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c832: je 0x64c8e1 */ if (fZ) goto L_0064c8e1;
L_0064c838:; BB(0x0064c838);
    /* 0064c838: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064c83f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c841: jne 0x64c853 */ if (!fZ) goto L_0064c853;
L_0064c843:; BB(0x0064c843);
    /* 0064c843: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0064c849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c84b: je 0x64c91c */ if (fZ) goto L_0064c91c;
L_0064c851:; BB(0x0064c851);
    /* 0064c851: jmp 0x64c866 */ goto L_0064c866;
L_0064c853:; BB(0x0064c853);
    /* 0064c853: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c856: jne 0x64c866 */ if (!fZ) goto L_0064c866;
L_0064c858:; BB(0x0064c858);
    /* 0064c858: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0064c85e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c860: je 0x64c998 */ if (fZ) goto L_0064c998;
L_0064c866:; BB(0x0064c866);
    /* 0064c866: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c86c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c86e: je 0x64ca3c */ if (fZ) goto L_0064ca3c;
L_0064c874:; BB(0x0064c874);
    /* 0064c874: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c876: je 0x64c9e2 */ if (fZ) goto L_0064c9e2;
L_0064c87c:; BB(0x0064c87c);
    /* 0064c87c: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0064c882: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0064c884: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c886: jle 0x64c9e2 */ if ((fZ||fS!=fO)) goto L_0064c9e2;
L_0064c88c:; BB(0x0064c88c);
    /* 0064c88c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c88f: jmp 0x64c897 */ goto L_0064c897;
L_0064c891:; BB(0x0064c891);
    /* 0064c891: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0064c897:; BB(0x0064c897);
    /* 0064c897: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c898: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0064c89f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c8a1: mov eax, 0 */ r_eax = 0x0u;
    /* 0064c8a6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064c8a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8aa: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x64c8afu); f_00714d7c();
    /* 0064c8af: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064c8b6: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0064c8bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c8be: je 0x64ca08 */ if (fZ) goto L_0064ca08;
L_0064c8c4:; BB(0x0064c8c4);
    /* 0064c8c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8c6: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c8cc: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x64c8d1u); f_00714df8();
    /* 0064c8d1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c8d4: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c8da: jl 0x64c891 */ if ((fS!=fO)) goto L_0064c891;
L_0064c8dc:; BB(0x0064c8dc);
    /* 0064c8dc: jmp 0x64c9df */ goto L_0064c9df;
L_0064c8e1:; BB(0x0064c8e1);
    /* 0064c8e1: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064c8e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c8e9: je 0x64c8fa */ if (fZ) goto L_0064c8fa;
L_0064c8eb:; BB(0x0064c8eb);
    /* 0064c8eb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64c8f0u); f_007127b0();
    /* 0064c8f0: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
L_0064c8fa:; BB(0x0064c8fa);
    /* 0064c8fa: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c900: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c902: je 0x64c38e */ if (fZ) goto L_0064c38e;
L_0064c908:; BB(0x0064c908);
    /* 0064c908: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64c90du); f_007127b0();
    /* 0064c90d: mov dword ptr [ebx + 0x1c8], 0 */ W32((u32)(r_ebx+0x1c8u), 0x0u);
    /* 0064c917: jmp 0x64c38e */ goto L_0064c38e;
L_0064c91c:; BB(0x0064c91c);
    /* 0064c91c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c922: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c923: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x64c928u); f_0073cd8c();
    /* 0064c928: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c92b: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0064c931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c933: je 0x64c866 */ if (fZ) goto L_0064c866;
L_0064c939:; BB(0x0064c939);
    /* 0064c939: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c93b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64c940u); f_0079317c();
    /* 0064c940: mov esi, eax */ r_esi = r_eax;
    /* 0064c942: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c944: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c949u); f_0073ec50();
    /* 0064c949: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c94c: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c952: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c958: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c959: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x64c95eu); f_0073ce70();
    /* 0064c95e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c960: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c966: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x64c96bu); f_0073d148();
    /* 0064c96b: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c971: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x64c976u); f_0073d170();
    /* 0064c976: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c97c: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x64c981u); f_00718078();
    /* 0064c981: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c982: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64c987u); f_00717d68();
    /* 0064c987: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c98d: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x64c992u); f_00717f08();
    /* 0064c992: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c993: jmp 0x64c866 */ goto L_0064c866;
L_0064c998:; BB(0x0064c998);
    /* 0064c998: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c99e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c99f: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x64c9a4u); f_0073cd8c();
    /* 0064c9a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c9a7: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0064c9ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c9af: je 0x64c866 */ if (fZ) goto L_0064c866;
L_0064c9b5:; BB(0x0064c9b5);
    /* 0064c9b5: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9b7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64c9bcu); f_0079317c();
    /* 0064c9bc: mov esi, eax */ r_esi = r_eax;
    /* 0064c9be: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9c0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c9c5u); f_0073ec50();
    /* 0064c9c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c9c8: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9ce: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c9d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9d5: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x64c9dau); f_0073d0b0();
    /* 0064c9da: jmp 0x64c866 */ goto L_0064c866;
L_0064c9df:; BB(0x0064c9df);
    /* 0064c9df: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064c9e2:; BB(0x0064c9e2);
    /* 0064c9e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9e4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64c9e9u); f_00791748();
    /* 0064c9e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c9ea: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c9f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c9f2: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x64c9f7u); f_0064cc10();
    /* 0064c9f7: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c9fc: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064ca03: jmp 0x64c38e */ goto L_0064c38e;
L_0064ca08:; BB(0x0064ca08);
    /* 0064ca08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca09: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64ca0eu); f_0068d5a8();
    /* 0064ca0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ca0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca11: je 0x64c8c4 */ if (fZ) goto L_0064c8c4;
L_0064ca17:; BB(0x0064ca17);
    /* 0064ca17: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0064ca1d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064ca1f: je 0x64ca28 */ if (fZ) goto L_0064ca28;
L_0064ca21:; BB(0x0064ca21);
    /* 0064ca21: mov eax, 1 */ r_eax = 0x1u;
    /* 0064ca26: jmp 0x64ca2a */ goto L_0064ca2a;
L_0064ca28:; BB(0x0064ca28);
    /* 0064ca28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064ca2a:; BB(0x0064ca2a);
    /* 0064ca2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca2c: je 0x64c8c4 */ if (fZ) goto L_0064c8c4;
L_0064ca32:; BB(0x0064ca32);
    /* 0064ca32: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0064ca37: jmp 0x64c8c4 */ goto L_0064c8c4;
L_0064ca3c:; BB(0x0064ca3c);
    /* 0064ca3c: mov dword ptr [esp + 0x24], 0x43650000 */ W32((u32)(r_esp+0x24u), 0x43650000u);
    /* 0064ca44: mov dword ptr [esp + 0x28], 0x42d00000 */ W32((u32)(r_esp+0x28u), 0x42d00000u);
    /* 0064ca4c: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca4e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64ca53u); f_0073ec50();
    /* 0064ca53: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0064ca57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca59: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x64ca5eu); f_00714ab0();
    /* 0064ca5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ca61: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0064ca67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca69: je 0x64cadd */ if (fZ) goto L_0064cadd;
L_0064ca6b:; BB(0x0064ca6b);
    /* 0064ca6b: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0064ca72: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0064ca78: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0064ca7f: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0064ca85: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0064ca8c: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064ca91: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0064ca98: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0064ca9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064caa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064caa2: jle 0x64cadd */ if ((fZ||fS!=fO)) goto L_0064cadd;
L_0064caa4:; BB(0x0064caa4);
    /* 0064caa4: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064caa7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0064caaa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064caac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0064caae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cab0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cab2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cab4: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0064cabb: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064cabd: mov edi, eax */ r_edi = r_eax;
L_0064cabf:; BB(0x0064cabf);
    /* 0064cabf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cac0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cac1: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064cac7: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x64caccu); f_00714d34();
    /* 0064cacc: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064cacf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064cad2: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cad8: jl 0x64cabf */ if ((fS!=fO)) goto L_0064cabf;
L_0064cada:; BB(0x0064cada);
    /* 0064cada: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064cadd:; BB(0x0064cadd);
    /* 0064cadd: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64cae2u); f_00717d68();
    /* 0064cae2: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064cae8: jmp 0x64c874 */ goto L_0064c874;
L_0064caed:; BB(0x0064caed);
    /* 0064caed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064caef: mov dword ptr [ebx + 0x1d4], eax */ W32((u32)(r_ebx+0x1d4u), r_eax);
    /* 0064caf5: mov dword ptr [ebx + 0x1d8], eax */ W32((u32)(r_ebx+0x1d8u), r_eax);
    /* 0064cafb: mov edx, 1 */ r_edx = 0x1u;
    /* 0064cb00: mov word ptr [ebx + 0xe4], dx */ W16((u32)(r_ebx+0xe4u), (u16)r_edx);
    /* 0064cb07: mov edx, dword ptr [0xa8f434] */ r_edx = R32((u32)(0xa8f434u));
    /* 0064cb0d: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 0064cb13: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0064cb16: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0064cb1c: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0064cb22: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0064cb25: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0064cb2b: jmp 0x64c38e */ goto L_0064c38e;
L_0064cb30:; BB(0x0064cb30);
    /* 0064cb30: mov eax, 3 */ r_eax = 0x3u;
    /* 0064cb35: mov word ptr [ebx + 0xe0], ax */ W16((u32)(r_ebx+0xe0u), (u16)r_eax);
    /* 0064cb3c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064cb3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064cb40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cb41: ret  */ FN_RET(0x0064c304); r_esp += 4; return;
}

void f_0064c960(void)
{
    FN_ENTER(0x0064c960);
    goto L_0064c960;
L_0064c38e:; BB(0x0064c38e);
    /* 0064c38e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064c391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064c392: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064c393: ret  */ FN_RET(0x0064c960); r_esp += 4; return;
L_0064c866:; BB(0x0064c866);
    /* 0064c866: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c86c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c86e: je 0x64ca3c */ if (fZ) goto L_0064ca3c;
L_0064c874:; BB(0x0064c874);
    /* 0064c874: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c876: je 0x64c9e2 */ if (fZ) goto L_0064c9e2;
L_0064c87c:; BB(0x0064c87c);
    /* 0064c87c: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0064c882: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0064c884: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c886: jle 0x64c9e2 */ if ((fZ||fS!=fO)) goto L_0064c9e2;
L_0064c88c:; BB(0x0064c88c);
    /* 0064c88c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c88f: jmp 0x64c897 */ goto L_0064c897;
L_0064c891:; BB(0x0064c891);
    /* 0064c891: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0064c897:; BB(0x0064c897);
    /* 0064c897: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c898: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0064c89f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c8a1: mov eax, 0 */ r_eax = 0x0u;
    /* 0064c8a6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064c8a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8aa: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x64c8afu); f_00714d7c();
    /* 0064c8af: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064c8b6: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0064c8bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c8be: je 0x64ca08 */ if (fZ) goto L_0064ca08;
L_0064c8c4:; BB(0x0064c8c4);
    /* 0064c8c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8c6: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c8cc: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x64c8d1u); f_00714df8();
    /* 0064c8d1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c8d4: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c8da: jl 0x64c891 */ if ((fS!=fO)) goto L_0064c891;
L_0064c8dc:; BB(0x0064c8dc);
    /* 0064c8dc: jmp 0x64c9df */ goto L_0064c9df;
L_0064c960:; BB(0x0064c960);
    /* 0064c960: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c966: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x64c96bu); f_0073d148();
    /* 0064c96b: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c971: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x64c976u); f_0073d170();
    /* 0064c976: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c97c: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x64c981u); f_00718078();
    /* 0064c981: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c982: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64c987u); f_00717d68();
    /* 0064c987: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c98d: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x64c992u); f_00717f08();
    /* 0064c992: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c993: jmp 0x64c866 */ goto L_0064c866;
L_0064c9df:; BB(0x0064c9df);
    /* 0064c9df: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064c9e2:; BB(0x0064c9e2);
    /* 0064c9e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9e4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64c9e9u); f_00791748();
    /* 0064c9e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c9ea: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c9f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c9f2: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x64c9f7u); f_0064cc10();
    /* 0064c9f7: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c9fc: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064ca03: jmp 0x64c38e */ goto L_0064c38e;
L_0064ca08:; BB(0x0064ca08);
    /* 0064ca08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca09: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64ca0eu); f_0068d5a8();
    /* 0064ca0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ca0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca11: je 0x64c8c4 */ if (fZ) goto L_0064c8c4;
L_0064ca17:; BB(0x0064ca17);
    /* 0064ca17: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0064ca1d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064ca1f: je 0x64ca28 */ if (fZ) goto L_0064ca28;
L_0064ca21:; BB(0x0064ca21);
    /* 0064ca21: mov eax, 1 */ r_eax = 0x1u;
    /* 0064ca26: jmp 0x64ca2a */ goto L_0064ca2a;
L_0064ca28:; BB(0x0064ca28);
    /* 0064ca28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064ca2a:; BB(0x0064ca2a);
    /* 0064ca2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca2c: je 0x64c8c4 */ if (fZ) goto L_0064c8c4;
L_0064ca32:; BB(0x0064ca32);
    /* 0064ca32: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0064ca37: jmp 0x64c8c4 */ goto L_0064c8c4;
L_0064ca3c:; BB(0x0064ca3c);
    /* 0064ca3c: mov dword ptr [esp + 0x24], 0x43650000 */ W32((u32)(r_esp+0x24u), 0x43650000u);
    /* 0064ca44: mov dword ptr [esp + 0x28], 0x42d00000 */ W32((u32)(r_esp+0x28u), 0x42d00000u);
    /* 0064ca4c: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca4e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64ca53u); f_0073ec50();
    /* 0064ca53: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0064ca57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca59: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x64ca5eu); f_00714ab0();
    /* 0064ca5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ca61: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0064ca67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca69: je 0x64cadd */ if (fZ) goto L_0064cadd;
L_0064ca6b:; BB(0x0064ca6b);
    /* 0064ca6b: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0064ca72: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0064ca78: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0064ca7f: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0064ca85: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0064ca8c: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064ca91: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0064ca98: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0064ca9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064caa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064caa2: jle 0x64cadd */ if ((fZ||fS!=fO)) goto L_0064cadd;
L_0064caa4:; BB(0x0064caa4);
    /* 0064caa4: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064caa7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0064caaa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064caac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0064caae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cab0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cab2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cab4: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0064cabb: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064cabd: mov edi, eax */ r_edi = r_eax;
L_0064cabf:; BB(0x0064cabf);
    /* 0064cabf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cac0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cac1: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064cac7: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x64caccu); f_00714d34();
    /* 0064cacc: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064cacf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064cad2: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cad8: jl 0x64cabf */ if ((fS!=fO)) goto L_0064cabf;
L_0064cada:; BB(0x0064cada);
    /* 0064cada: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064cadd:; BB(0x0064cadd);
    /* 0064cadd: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64cae2u); f_00717d68();
    /* 0064cae2: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064cae8: jmp 0x64c874 */ goto L_0064c874;
}

void f_0064cb44(void) /* sub_64CB44 */
{
    FN_ENTER(0x0064cb44);
    /* 0064cb44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cb45: mov edi, ecx */ r_edi = r_ecx;
    /* 0064cb47: mov ecx, dword ptr [edi + 0x1cc] */ r_ecx = R32((u32)(r_edi+0x1ccu));
    /* 0064cb4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cb4f: je 0x64cb60 */ if (fZ) goto L_0064cb60;
L_0064cb51:; BB(0x0064cb51);
    /* 0064cb51: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x64cb56u); f_0073d160();
    /* 0064cb56: mov dword ptr [edi + 0x1cc], 0 */ W32((u32)(r_edi+0x1ccu), 0x0u);
L_0064cb60:; BB(0x0064cb60);
    /* 0064cb60: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064cb66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cb68: je 0x64cb79 */ if (fZ) goto L_0064cb79;
L_0064cb6a:; BB(0x0064cb6a);
    /* 0064cb6a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64cb6fu); f_007127b0();
    /* 0064cb6f: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
L_0064cb79:; BB(0x0064cb79);
    /* 0064cb79: mov ecx, dword ptr [edi + 0x1c8] */ r_ecx = R32((u32)(r_edi+0x1c8u));
    /* 0064cb7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cb81: je 0x64cb92 */ if (fZ) goto L_0064cb92;
L_0064cb83:; BB(0x0064cb83);
    /* 0064cb83: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64cb88u); f_007127b0();
    /* 0064cb88: mov dword ptr [edi + 0x1c8], 0 */ W32((u32)(r_edi+0x1c8u), 0x0u);
L_0064cb92:; BB(0x0064cb92);
    /* 0064cb92: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064cb98: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x64cb9du); f_00718048();
    /* 0064cb9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cb9e: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x64cba3u); f_00717d48();
    /* 0064cba3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064cba9: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x64cbaeu); f_00717ed8();
    /* 0064cbae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cbaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064cbb0: ret  */ FN_RET(0x0064cb44); r_esp += 4; return;
}

void f_0064cbb4(void) /* sub_64CBB4 */
{
    FN_ENTER(0x0064cbb4);
    /* 0064cbb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbb7: mov edi, ecx */ r_edi = r_ecx;
    /* 0064cbb9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0064cbbd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064cbc0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064cbc6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64cbcbu); f_0068d5a8();
    /* 0064cbcb: mov esi, eax */ r_esi = r_eax;
    /* 0064cbcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cbd0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cbd2: je 0x64cc06 */ if (fZ) goto L_0064cc06;
L_0064cbd4:; BB(0x0064cbd4);
    /* 0064cbd4: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 0064cbda: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cbe0: jne 0x64cc06 */ if (!fZ) goto L_0064cc06;
L_0064cbe2:; BB(0x0064cbe2);
    /* 0064cbe2: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064cbe5: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0064cbe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbe9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbea: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64cbefu); f_0078ea50();
    /* 0064cbef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0064cbf2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0064cbf5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064cbf7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064cbf9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064cbfb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064cbfc: jbe 0x64cc06 */ if ((fC||fZ)) goto L_0064cc06;
L_0064cbfe:; BB(0x0064cbfe);
    /* 0064cbfe: mov eax, esi */ r_eax = r_esi;
    /* 0064cc00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cc01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cc02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064cc03: ret 4 */ FN_RET(0x0064cbb4); r_esp += 8; return;
L_0064cc06:; BB(0x0064cc06);
    /* 0064cc06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064cc08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cc09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cc0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064cc0b: ret 4 */ FN_RET(0x0064cbb4); r_esp += 8; return;
}

void f_0064cc10(void) /* sub_64CC10 */
{
    FN_ENTER(0x0064cc10);
    /* 0064cc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc12: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064cc14: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064cc18: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64cc1du); f_0068d5a8();
    /* 0064cc1d: mov ebx, eax */ r_ebx = r_eax;
    /* 0064cc1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cc22: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064cc24: je 0x64cc45 */ if (fZ) goto L_0064cc45;
L_0064cc26:; BB(0x0064cc26);
    /* 0064cc26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064cc2a: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x64cc2fu); f_006854a8();
    /* 0064cc2f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0064cc32: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064cc38: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0064cc3b: mov dword ptr [ebp + 0x1d8], 0x12c */ W32((u32)(r_ebp+0x1d8u), 0x12cu);
L_0064cc45:; BB(0x0064cc45);
    /* 0064cc45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064cc46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064cc47: ret 4 */ FN_RET(0x0064cc10); r_esp += 8; return;
}

void f_0064cc4c(void) /* sub_64CC4C */
{
    FN_ENTER(0x0064cc4c);
    /* 0064cc4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc4e: mov edi, ecx */ r_edi = r_ecx;
    /* 0064cc50: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 0064cc56: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cc59: je 0x64cce5 */ if (fZ) goto L_0064cce5;
L_0064cc5f:; BB(0x0064cc5f);
    /* 0064cc5f: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc64: mov ecx, edi */ r_ecx = r_edi;
    /* 0064cc66: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0064cc68: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc6d: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64cc70u); call_ind(t); }
    /* 0064cc70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064cc72: jne 0x64cc77 */ if (!fZ) goto L_0064cc77;
L_0064cc74:; BB(0x0064cc74);
    /* 0064cc74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cc75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064cc76: ret  */ FN_RET(0x0064cc4c); r_esp += 4; return;
L_0064cc77:; BB(0x0064cc77);
    /* 0064cc77: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_0064cc7a:; BB(0x0064cc7a);
    /* 0064cc7a: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 0064cc80: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64cc85u); f_00829cc8();
    /* 0064cc85: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64cc8au); f_0082d7b0();
    /* 0064cc8a: mov ecx, esi */ r_ecx = r_esi;
    /* 0064cc8c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64cc91u); f_0082d838();
    /* 0064cc91: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0064cc94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cc96: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64cc9bu); f_0082d8bc();
    /* 0064cc9b: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064cca0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064cca6: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0064ccac: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64ccb1u); f_00831758();
    /* 0064ccb1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64ccb6u); f_0082dbac();
    /* 0064ccb6: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064ccbb: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ccc1: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 0064ccc7: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0064cccd: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0064ccd0: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0064ccd3: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64ccd8u); f_0083bd00();
    /* 0064ccd8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64ccddu); f_0082dab0();
    /* 0064ccdd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64cce2u); f_0082da80();
    /* 0064cce2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cce3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064cce4: ret  */ FN_RET(0x0064cc4c); r_esp += 4; return;
L_0064cce5:; BB(0x0064cce5);
    /* 0064cce5: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0064ccea: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0064cced: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ccee: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ccf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ccf4: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64ccf9u); f_0078ea50();
    /* 0064ccf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0064ccfc: fcomp dword ptr [0x936584] */ fx_compare(ST(0), R_F32((u32)(0x936584u))); FPOP();
    /* 0064cd02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064cd04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064cd05: jbe 0x64cc7a */ if ((fC||fZ)) goto L_0064cc7a;
L_0064cd0b:; BB(0x0064cd0b);
    /* 0064cd0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cd0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064cd0d: ret  */ FN_RET(0x0064cc4c); r_esp += 4; return;
}

void f_0064cd10(void) /* sub_64CD10 */
{
    FN_ENTER(0x0064cd10);
    /* 0064cd10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064cd13: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0064cd19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064cd1b: jl 0x64cd2c */ if ((fS!=fO)) goto L_0064cd2c;
L_0064cd1d:; BB(0x0064cd1d);
    /* 0064cd1d: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cd22: jg 0x64cd2c */ if ((!fZ&&fS==fO)) goto L_0064cd2c;
L_0064cd24:; BB(0x0064cd24);
    /* 0064cd24: mov dword ptr [ebx + 0x1d0], eax */ W32((u32)(r_ebx+0x1d0u), r_eax);
    /* 0064cd2a: jmp 0x64cd36 */ goto L_0064cd36;
L_0064cd2c:; BB(0x0064cd2c);
    /* 0064cd2c: mov dword ptr [ebx + 0x1d0], 0xffffffff */ W32((u32)(r_ebx+0x1d0u), 0xffffffffu);
L_0064cd36:; BB(0x0064cd36);
    /* 0064cd36: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64cd3bu); f_00807ac0();
    /* 0064cd3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cd3d: jne 0x64cd57 */ if (!fZ) goto L_0064cd57;
L_0064cd3f:; BB(0x0064cd3f);
    /* 0064cd3f: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064cd45: push 0x9365b8 */ { u32 v = 0x9365b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd4a: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd4f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64cd54u); f_0061cdb0();
    /* 0064cd54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064cd57:; BB(0x0064cd57);
    /* 0064cd57: push dword ptr [ebx + 0x1d0] */ { u32 v = R32((u32)(r_ebx+0x1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064cd5d: push 0x931930 */ { u32 v = 0x931930u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd62: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd67: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64cd6cu); f_0061cdb0();
    /* 0064cd6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064cd6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064cd70: ret  */ FN_RET(0x0064cd10); r_esp += 4; return;
}

void f_0064cd74(void) /* sub_64CD74 */
{
    FN_ENTER(0x0064cd74);
    /* 0064cd74: mov dword ptr [0xa8f528], 0x3f800000 */ W32((u32)(0xa8f528u), 0x3f800000u);
    /* 0064cd7e: mov dword ptr [0xa8f52c], 0x41000000 */ W32((u32)(0xa8f52cu), 0x41000000u);
    /* 0064cd88: mov dword ptr [0xa8f530], 0x3fc00000 */ W32((u32)(0xa8f530u), 0x3fc00000u);
    /* 0064cd92: ret  */ FN_RET(0x0064cd74); r_esp += 4; return;
}

void f_0064cd94(void) /* sub_64CD94 */
{
    FN_ENTER(0x0064cd94);
    /* 0064cd94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064cd97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064cd99: call 0x64cdb8 */ r_esp -= 4; W32(r_esp, 0x64cd9eu); f_0064cdb8();
    /* 0064cd9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064cda2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064cda4: jne 0x64cdaa */ if (!fZ) goto L_0064cdaa;
L_0064cda6:; BB(0x0064cda6);
    /* 0064cda6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064cda7: ret 4 */ FN_RET(0x0064cd94); r_esp += 8; return;
L_0064cdaa:; BB(0x0064cdaa);
    /* 0064cdaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64cdb0u); f_005c2f74();
    /* 0064cdb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cdb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064cdb2: ret 4 */ FN_RET(0x0064cd94); r_esp += 8; return;
}

void f_0064cdb8(void) /* sub_64CDB8 */
{
    FN_ENTER(0x0064cdb8);
    /* 0064cdb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0064cdbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdbd: push 0x8e62a8 */ { u32 v = 0x8e62a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064cdc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064cdd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064cdd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064cdd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064cdd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064cddc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064cddf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064cde2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064cde9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064cdec: mov dword ptr [eax], 0xb304c8 */ W32((u32)(r_eax), 0xb304c8u);
    /* 0064cdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdf3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64cdf8u); f_007b4e84();
    /* 0064cdf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cdf9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064cdfc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64ce01u); f_007b9c8c();
    /* 0064ce01: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ce08: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ce0b: call 0x65fda0 */ r_esp -= 4; W32(r_esp, 0x64ce10u); f_0065fda0();
    /* 0064ce10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ce13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ce1a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ce1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ce1d: ret  */ FN_RET(0x0064cdb8); r_esp += 4; return;
}

void f_0064ce20(void) /* sub_64CE20 */
{
    FN_ENTER(0x0064ce20);
    /* 0064ce20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce21: mov edi, ecx */ r_edi = r_ecx;
    /* 0064ce23: mov ecx, edi */ r_ecx = r_edi;
    /* 0064ce25: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64ce2au); f_0061cdb0();
    /* 0064ce2a: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0064ce30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ce32: je 0x64ce3f */ if (fZ) goto L_0064ce3f;
L_0064ce34:; BB(0x0064ce34);
    /* 0064ce34: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce37: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x64ce3cu); f_006946a8();
    /* 0064ce3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064ce3f:; BB(0x0064ce3f);
    /* 0064ce3f: fld dword ptr [0x93661c] */ FPUSH(R_F32((u32)(0x93661cu)));
    /* 0064ce45: fadd dword ptr [edi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc0u));
    /* 0064ce4b: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 0064ce51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064ce52: ret  */ FN_RET(0x0064ce20); r_esp += 4; return;
}

void f_0064ce54(void) /* sub_64CE54 */
{
    FN_ENTER(0x0064ce54);
    /* 0064ce54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064ce57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064ce59: call 0x65fdf0 */ r_esp -= 4; W32(r_esp, 0x64ce5eu); f_0065fdf0();
    /* 0064ce5e: fld dword ptr [0x93661c] */ FPUSH(R_F32((u32)(0x93661cu)));
    /* 0064ce64: fadd dword ptr [ebx + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc0u));
    /* 0064ce6a: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 0064ce70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064ce71: ret  */ FN_RET(0x0064ce54); r_esp += 4; return;
}

void f_0064ce74(void) /* sub_64CE74 */
{
    FN_ENTER(0x0064ce74);
    /* 0064ce74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce75: mov esi, ecx */ r_esi = r_ecx;
    /* 0064ce77: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0064ce79: mov ecx, esi */ r_ecx = r_esi;
    /* 0064ce7b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce80: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce85: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64ce88u); call_ind(t); }
    /* 0064ce88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ce8a: je 0x64ce93 */ if (fZ) goto L_0064ce93;
L_0064ce8c:; BB(0x0064ce8c);
    /* 0064ce8c: mov ecx, esi */ r_ecx = r_esi;
    /* 0064ce8e: call 0x64ce98 */ r_esp -= 4; W32(r_esp, 0x64ce93u); f_0064ce98();
L_0064ce93:; BB(0x0064ce93);
    /* 0064ce93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064ce94: ret  */ FN_RET(0x0064ce74); r_esp += 4; return;
}

void f_0064ce98(void) /* sub_64CE98 */
{
    FN_ENTER(0x0064ce98);
    /* 0064ce98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce99: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ce9c: mov esi, ecx */ r_esi = r_ecx;
    /* 0064ce9e: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0064cea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cea6: je 0x64cfb8 */ if (fZ) goto L_0064cfb8;
L_0064ceac:; BB(0x0064ceac);
    /* 0064ceac: mov ecx, dword ptr [0xa8f578] */ r_ecx = R32((u32)(0xa8f578u));
    /* 0064ceb2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64ceb7u); f_00829cc8();
    /* 0064ceb7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64cebcu); f_0082d7b0();
    /* 0064cebc: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0064cebf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64cec4u); f_0082d838();
    /* 0064cec4: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0064cec7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cec9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64ceceu); f_0082d8bc();
    /* 0064cece: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0064ced4: movsx edx, word ptr [eax*2 + 0x936610] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x936610u));
    /* 0064cedc: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cedf: jne 0x64cfa8 */ if (!fZ) goto L_0064cfa8;
L_0064cee5:; BB(0x0064cee5);
    /* 0064cee5: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
    /* 0064ceeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ceed: je 0x64cf23 */ if (fZ) goto L_0064cf23;
L_0064ceef:; BB(0x0064ceef);
    /* 0064ceef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cef1: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0064cef7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0064cefa: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0064cefe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064cf03: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0064cf07: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0064cf0b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064cf0f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0064cf12: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0064cf17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cf18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cf1a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x64cf1du); call_ind(t); }
    /* 0064cf1d: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
L_0064cf23:; BB(0x0064cf23);
    /* 0064cf23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cf25: je 0x64cf41 */ if (fZ) goto L_0064cf41;
L_0064cf27:; BB(0x0064cf27);
    /* 0064cf27: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cf29: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x64cf2eu); f_00835f78();
    /* 0064cf2e: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064cf35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cf36: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
    /* 0064cf3c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064cf3e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x64cf41u); call_ind(t); }
L_0064cf41:; BB(0x0064cf41);
    /* 0064cf41: mov ecx, dword ptr [esi + 0xbc] */ r_ecx = R32((u32)(r_esi+0xbcu));
    /* 0064cf47: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cf4a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64cf4fu); f_0082d838();
    /* 0064cf4f: mov ecx, dword ptr [esi + 0xbc] */ r_ecx = R32((u32)(r_esi+0xbcu));
    /* 0064cf55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cf57: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0064cf5a: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cf5d: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x64cf62u); f_00830df8();
    /* 0064cf62: mov ecx, dword ptr [esi + 0xbc] */ r_ecx = R32((u32)(r_esi+0xbcu));
    /* 0064cf68: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64cf6du); f_00831758();
    /* 0064cf6d: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0064cf73: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064cf76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cf78: je 0x64cf92 */ if (fZ) goto L_0064cf92;
L_0064cf7a:; BB(0x0064cf7a);
    /* 0064cf7a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64cf7fu); f_0082dbac();
    /* 0064cf7f: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0064cf85: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0064cf88: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64cf8du); f_00831758();
    /* 0064cf8d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64cf92u); f_0082dab0();
L_0064cf92:; BB(0x0064cf92);
    /* 0064cf92: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
    /* 0064cf98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cf9a: je 0x64cfb3 */ if (fZ) goto L_0064cfb3;
L_0064cf9c:; BB(0x0064cf9c);
    /* 0064cf9c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064cf9e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x64cfa1u); call_ind(t); }
    /* 0064cfa1: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x64cfa6u); f_0083603c();
    /* 0064cfa6: jmp 0x64cfb3 */ goto L_0064cfb3;
L_0064cfa8:; BB(0x0064cfa8);
    /* 0064cfa8: mov ecx, dword ptr [esi + 0xbc] */ r_ecx = R32((u32)(r_esi+0xbcu));
    /* 0064cfae: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64cfb3u); f_00831758();
L_0064cfb3:; BB(0x0064cfb3);
    /* 0064cfb3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64cfb8u); f_0082da80();
L_0064cfb8:; BB(0x0064cfb8);
    /* 0064cfb8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064cfbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064cfbc: ret  */ FN_RET(0x0064ce98); r_esp += 4; return;
}

void f_0064cfc0(void) /* sub_64CFC0 */
{
    FN_ENTER(0x0064cfc0);
    /* 0064cfc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064cfc1: mov esi, ecx */ r_esi = r_ecx;
    /* 0064cfc3: mov ecx, esi */ r_ecx = r_esi;
    /* 0064cfc5: call 0x65feec */ r_esp -= 4; W32(r_esp, 0x64cfcau); f_0065feec();
    /* 0064cfca: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0064cfd0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064cfd1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064cfd3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064cfd5: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0064cfd8: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064cfda: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064cfdc: mov dword ptr [esi + 0x88], eax */ W32((u32)(r_esi+0x88u), r_eax);
    /* 0064cfe2: movsx eax, word ptr [eax*2 + 0x936610] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax*2+0x936610u));
    /* 0064cfea: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064cff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cff1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64cff6u); f_005b8610();
    /* 0064cff6: push 0x9314c8 */ { u32 v = 0x9314c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cffb: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d000: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 0064d006: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64d00bu); f_0061cdb0();
    /* 0064d00b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064d00e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064d00f: ret  */ FN_RET(0x0064cfc0); r_esp += 4; return;
}

