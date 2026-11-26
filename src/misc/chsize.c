#include "protos.h"

void f_0086a2a4(void) /* __chsize_lk */
{
    FN_ENTER(0x0086a2a4);
    /* 0086a2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0086a2a7: mov eax, 0x100c */ r_eax = 0x100cu;
    /* 0086a2ac: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86a2b1u); f_00858020();
    /* 0086a2b1: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0086a2b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2ba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086a2bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2bd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a2c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086a2c3: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x86a2c8u); f_0086485b();
    /* 0086a2c8: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a2cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a2ce: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a2d0: mov dword ptr [ebp - 0x1008], eax */ W32((u32)(r_ebp+0xffffeff8u), r_eax);
    /* 0086a2d6: je 0x86a3d7 */ if (fZ) goto L_0086a3d7;
L_0086a2dc:; BB(0x0086a2dc);
    /* 0086a2dc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2df: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a2e2: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x86a2e7u); f_0086485b();
    /* 0086a2e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a2ea: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a2ec: je 0x86a3d7 */ if (fZ) goto L_0086a3d7;
L_0086a2f2:; BB(0x0086a2f2);
    /* 0086a2f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a2f3: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0086a2f6: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086a2f8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a2fa: jle 0x86a377 */ if ((fZ||fS!=fO)) goto L_0086a377;
L_0086a2fc:; BB(0x0086a2fc);
    /* 0086a2fc: mov ebx, 0x1000 */ r_ebx = 0x1000u;
    /* 0086a301: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a302: lea eax, [ebp - 0x1004] */ r_eax = (u32)(r_ebp+0xffffeffcu);
    /* 0086a308: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a30a: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x86a30fu); f_0085f580();
    /* 0086a30f: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a314: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a317: call 0x86a9eb */ r_esp -= 4; W32(r_esp, 0x86a31cu); f_0086a9eb();
    /* 0086a31c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a31f: mov dword ptr [ebp - 0x100c], eax */ W32((u32)(r_ebp+0xffffeff4u), r_eax);
L_0086a325:; BB(0x0086a325);
    /* 0086a325: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086a327: mov eax, ebx */ r_eax = r_ebx;
    /* 0086a329: jge 0x86a32d */ if ((fS==fO)) goto L_0086a32d;
L_0086a32b:; BB(0x0086a32b);
    /* 0086a32b: mov eax, edi */ r_eax = r_edi;
L_0086a32d:; BB(0x0086a32d);
    /* 0086a32d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a32e: lea eax, [ebp - 0x1004] */ r_eax = (u32)(r_ebp+0xffffeffcu);
    /* 0086a334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a335: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a338: call 0x862186 */ r_esp -= 4; W32(r_esp, 0x86a33du); f_00862186();
    /* 0086a33d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a340: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a343: je 0x86a34d */ if (fZ) goto L_0086a34d;
L_0086a345:; BB(0x0086a345);
    /* 0086a345: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086a347: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a349: jg 0x86a325 */ if ((!fZ&&fS==fO)) goto L_0086a325;
L_0086a34b:; BB(0x0086a34b);
    /* 0086a34b: jmp 0x86a365 */ goto L_0086a365;
L_0086a34d:; BB(0x0086a34d);
    /* 0086a34d: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x86a352u); f_00859ddf();
    /* 0086a352: cmp dword ptr [eax], 5 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a355: jne 0x86a362 */ if (!fZ) goto L_0086a362;
L_0086a357:; BB(0x0086a357);
    /* 0086a357: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x86a35cu); f_00859dd6();
    /* 0086a35c: mov dword ptr [eax], 0xd */ W32((u32)(r_eax), 0xdu);
L_0086a362:; BB(0x0086a362);
    /* 0086a362: or esi, 0xffffffff */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0086a365:; BB(0x0086a365);
    /* 0086a365: push dword ptr [ebp - 0x100c] */ { u32 v = R32((u32)(r_ebp+0xffffeff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a36b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a36e: call 0x86a9eb */ r_esp -= 4; W32(r_esp, 0x86a373u); f_0086a9eb();
    /* 0086a373: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a374: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a375: jmp 0x86a3bf */ goto L_0086a3bf;
L_0086a377:; BB(0x0086a377);
    /* 0086a377: jge 0x86a3bf */ if ((fS==fO)) goto L_0086a3bf;
L_0086a379:; BB(0x0086a379);
    /* 0086a379: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a37b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a37e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a381: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x86a386u); f_0086485b();
    /* 0086a386: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a389: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x86a38eu); f_00863ad0();
    /* 0086a38e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a392: call dword ptr [0x8f82d4] */ { u32 t = R32((u32)(0x8f82d4u)); r_esp -= 4; W32(r_esp, 0x86a398u); call_ind(t); }
    /* 0086a398: mov esi, eax */ r_esi = r_eax;
    /* 0086a39a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); fC = (b != 0); }
    /* 0086a39c: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 0086a39e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086a3a0: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086a3a1: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a3a3: jne 0x86a3bf */ if (!fZ) goto L_0086a3bf;
L_0086a3a5:; BB(0x0086a3a5);
    /* 0086a3a5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x86a3aau); f_00859dd6();
    /* 0086a3aa: mov dword ptr [eax], 0xd */ W32((u32)(r_eax), 0xdu);
    /* 0086a3b0: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x86a3b5u); f_00859ddf();
    /* 0086a3b5: mov edi, eax */ r_edi = r_eax;
    /* 0086a3b7: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86a3bdu); call_ind(t); }
    /* 0086a3bd: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
L_0086a3bf:; BB(0x0086a3bf);
    /* 0086a3bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a3c1: push dword ptr [ebp - 0x1008] */ { u32 v = R32((u32)(r_ebp+0xffffeff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a3c7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a3ca: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x86a3cfu); f_0086485b();
    /* 0086a3cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a3d2: mov eax, esi */ r_eax = r_esi;
    /* 0086a3d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086a3d5: jmp 0x86a3d9 */ goto L_0086a3d9;
L_0086a3d7:; BB(0x0086a3d7);
    /* 0086a3d7: mov eax, ebx */ r_eax = r_ebx;
L_0086a3d9:; BB(0x0086a3d9);
    /* 0086a3d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086a3dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086a3dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086a3de: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86a3e3u); f_0085e419();
    /* 0086a3e3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086a3e4: ret  */ FN_RET(0x0086a2a4); r_esp += 4; return;
}

