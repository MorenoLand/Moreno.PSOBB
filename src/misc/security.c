#include "protos.h"

void f_008688d0(void) /* ___security_init_cookie */
{
    FN_ENTER(0x008688d0);
    /* 008688d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008688d1: mov ebp, esp */ r_ebp = r_esp;
    /* 008688d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008688d6: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008688db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008688dd: je 0x8688e6 */ if (fZ) goto L_008688e6;
L_008688df:; BB(0x008688df);
    /* 008688df: cmp eax, 0xbb40e64e */ {  u32 a = r_eax; u32 b = 0xbb40e64eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008688e4: jne 0x868934 */ if (!fZ) goto L_00868934;
L_008688e6:; BB(0x008688e6);
    /* 008688e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008688e7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008688ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008688eb: call dword ptr [0x8f81e8] */ { u32 t = R32((u32)(0x8f81e8u)); r_esp -= 4; W32(r_esp, 0x8688f1u); call_ind(t); }
    /* 008688f1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008688f4: xor esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008688f7: call dword ptr [0x8f82cc] */ { u32 t = R32((u32)(0x8f82ccu)); r_esp -= 4; W32(r_esp, 0x8688fdu); call_ind(t); }
    /* 008688fd: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008688ff: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x868905u); call_ind(t); }
    /* 00868905: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00868907: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x86890du); call_ind(t); }
    /* 0086890d: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086890f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00868912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868913: call dword ptr [0x8f8170] */ { u32 t = R32((u32)(0x8f8170u)); r_esp -= 4; W32(r_esp, 0x868919u); call_ind(t); }
    /* 00868919: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086891c: xor eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086891f: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868921: mov dword ptr [0xa23c64], esi */ W32((u32)(0xa23c64u), r_esi);
    /* 00868927: jne 0x868933 */ if (!fZ) goto L_00868933;
L_00868929:; BB(0x00868929);
    /* 00868929: mov dword ptr [0xa23c64], 0xbb40e64e */ W32((u32)(0xa23c64u), 0xbb40e64eu);
L_00868933:; BB(0x00868933);
    /* 00868933: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00868934:; BB(0x00868934);
    /* 00868934: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00868935: ret  */ FN_RET(0x008688d0); r_esp += 4; return;
}

void f_00868936(void) /* ___security_error_handler */
{
    FN_ENTER(0x00868936);
    /* 00868936: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0086893b: push 0x99a3d0 */ { u32 v = 0x99a3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00868940: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x868945u); f_0085e5ac();
    /* 00868945: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0086894a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086894d: mov eax, dword ptr [0xae7edc] */ r_eax = R32((u32)(0xae7edcu));
    /* 00868952: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00868954: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868956: je 0x868977 */ if (fZ) goto L_00868977;
L_00868958:; BB(0x00868958);
    /* 00868958: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0086895b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086895e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868961: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x868963u); call_ind(t); }
    /* 00868963: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868965: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00868969: jmp 0x868a76 */ goto L_00868a76;
L_00868977:; BB(0x00868977);
    /* 00868977: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086897a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086897b: je 0x868993 */ if (fZ) goto L_00868993;
L_0086897d:; BB(0x0086897d);
    /* 0086897d: mov edi, 0x99a3ac */ r_edi = 0x99a3acu;
    /* 00868982: mov dword ptr [ebp - 0x128], 0x99a2f8 */ W32((u32)(r_ebp+0xfffffed8u), 0x99a2f8u);
    /* 0086898c: mov esi, 0xd4 */ r_esi = 0xd4u;
    /* 00868991: jmp 0x8689a7 */ goto L_008689a7;
L_00868993:; BB(0x00868993);
    /* 00868993: mov edi, 0x99a2d8 */ r_edi = 0x99a2d8u;
    /* 00868998: mov dword ptr [ebp - 0x128], 0x99a238 */ W32((u32)(r_ebp+0xfffffed8u), 0x99a238u);
    /* 008689a2: mov esi, 0xb9 */ r_esi = 0xb9u;
L_008689a7:; BB(0x008689a7);
    /* 008689a7: mov byte ptr [ebp - 0x20], cl */ W8((u32)(r_ebp+0xffffffe0u), (u8)r_ecx);
    /* 008689aa: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008689af: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 008689b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008689b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008689b7: call dword ptr [0x8f81ec] */ { u32 t = R32((u32)(0x8f81ecu)); r_esp -= 4; W32(r_esp, 0x8689bdu); call_ind(t); }
    /* 008689bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008689bf: jne 0x8689d4 */ if (!fZ) goto L_008689d4;
L_008689c1:; BB(0x008689c1);
    /* 008689c1: push 0x997f38 */ { u32 v = 0x997f38u; r_esp -= 4; W32(r_esp, v); }
    /* 008689c6: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 008689cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008689cd: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x8689d2u); f_0085e2f0();
    /* 008689d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008689d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008689d4:; BB(0x008689d4);
    /* 008689d4: lea ebx, [ebp - 0x124] */ r_ebx = (u32)(r_ebp+0xfffffedcu);
    /* 008689da: mov eax, ebx */ r_eax = r_ebx;
    /* 008689dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008689dd: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x8689e2u); f_0085d760();
    /* 008689e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008689e3: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008689e6: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008689e9: jbe 0x868a10 */ if ((fC||fZ)) goto L_00868a10;
L_008689eb:; BB(0x008689eb);
    /* 008689eb: mov eax, ebx */ r_eax = r_ebx;
    /* 008689ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008689ee: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x8689f3u); f_0085d760();
    /* 008689f3: mov ebx, eax */ r_ebx = r_eax;
    /* 008689f5: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 008689fb: sub eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008689fe: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00868a00: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a02: push 0x997f0c */ { u32 v = 0x997f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00868a07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868a08: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x868a0du); f_00858900();
    /* 00868a0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00868a10:; BB(0x00868a10);
    /* 00868a10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868a11: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x868a16u); f_0085d760();
    /* 00868a16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868a17: lea eax, [eax + esi + 0xc] */ r_eax = (u32)(r_eax+r_esi+0xcu);
    /* 00868a1b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868a1e: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868a21: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x868a26u); f_00858020();
    /* 00868a26: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00868a29: mov esi, esp */ r_esi = r_esp;
    /* 00868a2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a2d: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x868a32u); f_0085e2f0();
    /* 00868a32: mov edi, 0x997f04 */ r_edi = 0x997f04u;
    /* 00868a37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a39: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x868a3eu); f_0085e300();
    /* 00868a3e: push 0x997f50 */ { u32 v = 0x997f50u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a44: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x868a49u); f_0085e300();
    /* 00868a49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868a4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a4b: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x868a50u); f_0085e300();
    /* 00868a50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a52: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x868a57u); f_0085e300();
    /* 00868a57: push dword ptr [ebp - 0x128] */ { u32 v = R32((u32)(r_ebp+0xfffffed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868a5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a5e: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x868a63u); f_0085e300();
    /* 00868a63: push 0x12010 */ { u32 v = 0x12010u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a68: push 0x997f10 */ { u32 v = 0x997f10u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868a6e: call 0x863737 */ r_esp -= 4; W32(r_esp, 0x868a73u); f_00863737();
    /* 00868a73: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00868a76:; BB(0x00868a76);
    /* 00868a76: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a78: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x868a7du); f_0085a043();
    /* 00868a7d: int3  */ UNSUP(0x00868a7d, "int3");
}

