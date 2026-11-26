#include "protos.h"

void f_008c4110(void) /* sub_8C4110 */
{
    FN_ENTER(0x008c4110);
    /* 008c4110: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4111: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008c4115: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4116: mov edi, dword ptr [0x8f8128] */ r_edi = R32((u32)(0x8f8128u));
L_008c411c:; BB(0x008c411c);
    /* 008c411c: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008c411f: push 0xde3 */ { u32 v = 0xde3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4125: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c4127u); call_ind(t); }
    /* 008c4127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4129: jne 0x8c414b */ if (!fZ) goto L_008c414b;
L_008c412b:; BB(0x008c412b);
    /* 008c412b: mov al, byte ptr [esi + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x20u))) & 0xffu);
    /* 008c412e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c4130: je 0x8c41f0 */ if (fZ) goto L_008c41f0;
L_008c4136:; BB(0x008c4136);
    /* 008c4136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4138: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c413e: push 0x62d */ { u32 v = 0x62du; r_esp -= 4; W32(r_esp, v); }
    /* 008c4143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4144: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c4149u); f_008c4490();
    /* 008c4149: jmp 0x8c411c */ goto L_008c411c;
L_008c414b:; BB(0x008c414b);
    /* 008c414b: call 0x8c5540 */ r_esp -= 4; W32(r_esp, 0x8c4150u); f_008c5540();
    /* 008c4150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4152: jne 0x8c4169 */ if (!fZ) goto L_008c4169;
L_008c4154:; BB(0x008c4154);
    /* 008c4154: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008c4156: lea edx, [esi + 0x1468] */ r_edx = (u32)(r_esi+0x1468u);
    /* 008c415c: push 0x62d */ { u32 v = 0x62du; r_esp -= 4; W32(r_esp, v); }
    /* 008c4161: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4162: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c4167u); f_008c4490();
    /* 008c4167: jmp 0x8c411c */ goto L_008c411c;
L_008c4169:; BB(0x008c4169);
    /* 008c4169: call 0x8c5770 */ r_esp -= 4; W32(r_esp, 0x8c416eu); f_008c5770();
    /* 008c416e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4170: jne 0x8c418b */ if (!fZ) goto L_008c418b;
L_008c4172:; BB(0x008c4172);
    /* 008c4172: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4174: push 0x630 */ { u32 v = 0x630u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4179: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c417e: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c4184: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c4189u); f_008c8550();
    /* 008c4189: jmp 0x8c411c */ goto L_008c411c;
L_008c418b:; BB(0x008c418b);
    /* 008c418b: mov ecx, esi */ r_ecx = r_esi;
    /* 008c418d: call 0x8c4440 */ r_esp -= 4; W32(r_esp, 0x8c4192u); f_008c4440();
    /* 008c4192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4194: jne 0x8c41a1 */ if (!fZ) goto L_008c41a1;
L_008c4196:; BB(0x008c4196);
    /* 008c4196: mov al, byte ptr [esi + 0x21] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x21u))) & 0xffu);
    /* 008c4199: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c419b: je 0x8c411c */ if (fZ) goto L_008c411c;
L_008c41a1:; BB(0x008c41a1);
    /* 008c41a1: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c41a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c41a8: je 0x8c41d8 */ if (fZ) goto L_008c41d8;
L_008c41aa:; BB(0x008c41aa);
    /* 008c41aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c41ac: mov ecx, esi */ r_ecx = r_esi;
    /* 008c41ae: mov al, byte ptr [esi + 0x21] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x21u))) & 0xffu);
    /* 008c41b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c41b2: call 0x8c4440 */ r_esp -= 4; W32(r_esp, 0x8c41b7u); f_008c4440();
    /* 008c41b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c41b8: push 0xa387ac */ { u32 v = 0xa387acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c41bd: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c41c2u); f_008c94e0();
    /* 008c41c2: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c41c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c41cb: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c41ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c41cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c41d0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c41d5u); f_008c3720();
    /* 008c41d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c41d8:; BB(0x008c41d8);
    /* 008c41d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c41da: lea edx, [esi + 0x1468] */ r_edx = (u32)(r_esi+0x1468u);
    /* 008c41e0: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c41e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c41e6: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c41ebu); f_008c4490();
    /* 008c41eb: jmp 0x8c411c */ goto L_008c411c;
L_008c41f0:; BB(0x008c41f0);
    /* 008c41f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c41f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c41f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c41f4: ret 4 */ FN_RET(0x008c4110); r_esp += 8; return;
}

void f_008c4200(void) /* sub_8C4200 */
{
    FN_ENTER(0x008c4200);
    /* 008c4200: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c4203: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4204: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4205: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c4207: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4209: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c420d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008c4211: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4214: mov dword ptr [esp + 0x18], 0xc */ W32((u32)(r_esp+0x18u), 0xcu);
    /* 008c421c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 008c4220: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 008c4228: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c422a: call dword ptr [0x8f801c] */ { u32 t = R32((u32)(0x8f801cu)); r_esp -= 4; W32(r_esp, 0x8c4230u); call_ind(t); }
    /* 008c4230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4232: je 0x8c424b */ if (fZ) goto L_008c424b;
L_008c4234:; BB(0x008c4234);
    /* 008c4234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4235: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4236: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 008c423a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c423c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c423d: call dword ptr [0x8f8018] */ { u32 t = R32((u32)(0x8f8018u)); r_esp -= 4; W32(r_esp, 0x8c4243u); call_ind(t); }
    /* 008c4243: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4245: je 0x8c424b */ if (fZ) goto L_008c424b;
L_008c4247:; BB(0x008c4247);
    /* 008c4247: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
L_008c424b:; BB(0x008c424b);
    /* 008c424b: push 0xa38304 */ { u32 v = 0xa38304u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4250: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4255u); f_008c94e0();
    /* 008c4255: mov ebx, dword ptr [0x8f8178] */ r_ebx = R32((u32)(0x8f8178u));
    /* 008c425b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c425e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c425f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4261: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4262: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c4264u); call_ind(t); }
    /* 008c4264: mov esi, eax */ r_esi = r_eax;
    /* 008c4266: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4268: jne 0x8c42b3 */ if (!fZ) goto L_008c42b3;
L_008c426a:; BB(0x008c426a);
    /* 008c426a: push 0xa382f8 */ { u32 v = 0xa382f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c426f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4274u); f_008c94e0();
    /* 008c4274: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4278: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4279: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c427a: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c427cu); call_ind(t); }
    /* 008c427c: mov esi, eax */ r_esi = r_eax;
    /* 008c427e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4280: jne 0x8c42b3 */ if (!fZ) goto L_008c42b3;
L_008c4282:; BB(0x008c4282);
    /* 008c4282: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c4288: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c428au); call_ind(t); }
    /* 008c428a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c428cu); call_ind(t); }
    /* 008c428c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c428d: push 0xa387c0 */ { u32 v = 0xa387c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4292: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4297u); f_008c94e0();
    /* 008c4297: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c429a: add ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c429d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c429e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c429f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c42a4u); f_008c3720();
    /* 008c42a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c42a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c42a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c42aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c42ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c42ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c42ad: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c42b0: ret 8 */ FN_RET(0x008c4200); r_esp += 12; return;
L_008c42b3:; BB(0x008c42b3);
    /* 008c42b3: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c42b9u); call_ind(t); }
    /* 008c42b9: cmp eax, 0xb7 */ {  u32 a = r_eax; u32 b = 0xb7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c42be: jne 0x8c42d3 */ if (!fZ) goto L_008c42d3;
L_008c42c0:; BB(0x008c42c0);
    /* 008c42c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c42c1: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c42c7u); call_ind(t); }
    /* 008c42c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c42c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c42c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c42ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c42cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c42cd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c42d0: ret 8 */ FN_RET(0x008c4200); r_esp += 12; return;
L_008c42d3:; BB(0x008c42d3);
    /* 008c42d3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008c42d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c42d9: je 0x8c4301 */ if (fZ) goto L_008c4301;
L_008c42db:; BB(0x008c42db);
    /* 008c42db: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008c42df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c42e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c42e1: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c42e7u); call_ind(t); }
    /* 008c42e7: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c42ec: jne 0x8c4308 */ if (!fZ) goto L_008c4308;
L_008c42ee:; BB(0x008c42ee);
    /* 008c42ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c42ef: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c42f5u); call_ind(t); }
    /* 008c42f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c42f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c42f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c42f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c42fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c42fb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c42fe: ret 8 */ FN_RET(0x008c4200); r_esp += 12; return;
L_008c4301:; BB(0x008c4301);
    /* 008c4301: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4302: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c4308u); call_ind(t); }
L_008c4308:; BB(0x008c4308);
    /* 008c4308: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c4309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c430a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c430b: mov eax, 1 */ r_eax = 0x1u;
    /* 008c4310: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4311: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4314: ret 8 */ FN_RET(0x008c4200); r_esp += 12; return;
}

void f_008c4320(void) /* sub_8C4320 */
{
    FN_ENTER(0x008c4320);
    /* 008c4320: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c4323: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4325: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c4327: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4329: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c432d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008c4331: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4334: mov dword ptr [esp + 0x18], 0xc */ W32((u32)(r_esp+0x18u), 0xcu);
    /* 008c433c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 008c4340: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 008c4348: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c434a: call dword ptr [0x8f801c] */ { u32 t = R32((u32)(0x8f801cu)); r_esp -= 4; W32(r_esp, 0x8c4350u); call_ind(t); }
    /* 008c4350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4352: je 0x8c436b */ if (fZ) goto L_008c436b;
L_008c4354:; BB(0x008c4354);
    /* 008c4354: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4355: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4356: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 008c435a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c435c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c435d: call dword ptr [0x8f8018] */ { u32 t = R32((u32)(0x8f8018u)); r_esp -= 4; W32(r_esp, 0x8c4363u); call_ind(t); }
    /* 008c4363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4365: je 0x8c436b */ if (fZ) goto L_008c436b;
L_008c4367:; BB(0x008c4367);
    /* 008c4367: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
L_008c436b:; BB(0x008c436b);
    /* 008c436b: push 0xa38324 */ { u32 v = 0xa38324u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4370: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4375u); f_008c94e0();
    /* 008c4375: mov ebx, dword ptr [0x8f8178] */ r_ebx = R32((u32)(0x8f8178u));
    /* 008c437b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c437e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c437f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4381: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4382: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c4384u); call_ind(t); }
    /* 008c4384: mov esi, eax */ r_esi = r_eax;
    /* 008c4386: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4388: jne 0x8c43d3 */ if (!fZ) goto L_008c43d3;
L_008c438a:; BB(0x008c438a);
    /* 008c438a: push 0xa38318 */ { u32 v = 0xa38318u; r_esp -= 4; W32(r_esp, v); }
    /* 008c438f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4394u); f_008c94e0();
    /* 008c4394: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4398: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4399: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c439a: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c439cu); call_ind(t); }
    /* 008c439c: mov esi, eax */ r_esi = r_eax;
    /* 008c439e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c43a0: jne 0x8c43d3 */ if (!fZ) goto L_008c43d3;
L_008c43a2:; BB(0x008c43a2);
    /* 008c43a2: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c43a8: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c43aau); call_ind(t); }
    /* 008c43aa: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c43acu); call_ind(t); }
    /* 008c43ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c43ad: push 0xa38800 */ { u32 v = 0xa38800u; r_esp -= 4; W32(r_esp, v); }
    /* 008c43b2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c43b7u); f_008c94e0();
    /* 008c43b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c43ba: add ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c43bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c43be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c43bf: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c43c4u); f_008c3720();
    /* 008c43c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c43c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c43c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c43ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c43cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c43cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c43cd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c43d0: ret 4 */ FN_RET(0x008c4320); r_esp += 8; return;
L_008c43d3:; BB(0x008c43d3);
    /* 008c43d3: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c43d9u); call_ind(t); }
    /* 008c43d9: cmp eax, 0xb7 */ {  u32 a = r_eax; u32 b = 0xb7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c43de: jne 0x8c4420 */ if (!fZ) goto L_008c4420;
L_008c43e0:; BB(0x008c43e0);
    /* 008c43e0: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008c43e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c43e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c43e6: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c43ecu); call_ind(t); }
    /* 008c43ec: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c43f1: jne 0x8c4420 */ if (!fZ) goto L_008c4420;
L_008c43f3:; BB(0x008c43f3);
    /* 008c43f3: push 0xa387e4 */ { u32 v = 0xa387e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c43f8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c43fdu); f_008c94e0();
    /* 008c43fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4400: add ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c4403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4405: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c440au); f_008c3720();
    /* 008c440a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c440d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c440e: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c4414u); call_ind(t); }
    /* 008c4414: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c4415: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4416: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c4417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c4419: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c441a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c441d: ret 4 */ FN_RET(0x008c4320); r_esp += 8; return;
L_008c4420:; BB(0x008c4420);
    /* 008c4420: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4421: call dword ptr [0x8f8158] */ { u32 t = R32((u32)(0x8f8158u)); r_esp -= 4; W32(r_esp, 0x8c4427u); call_ind(t); }
    /* 008c4427: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4428: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c442eu); call_ind(t); }
    /* 008c442e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c442f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c4431: mov eax, 1 */ r_eax = 0x1u;
    /* 008c4436: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4437: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c443a: ret 4 */ FN_RET(0x008c4320); r_esp += 8; return;
}

void f_008c4440(void) /* sub_8C4440 */
{
    FN_ENTER(0x008c4440);
    /* 008c4440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4441: mov ebp, esp */ r_ebp = r_esp;
    /* 008c4443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4444: mov al, byte ptr [0xaea815] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaea815u))) & 0xffu);
    /* 008c4449: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c444b: je 0x8c4453 */ if (fZ) goto L_008c4453;
L_008c444d:; BB(0x008c444d);
    /* 008c444d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c444f: mov esp, ebp */ r_esp = r_ebp;
    /* 008c4451: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c4452: ret  */ FN_RET(0x008c4440); r_esp += 4; return;
L_008c4453:; BB(0x008c4453);
    /* 008c4453: mov al, byte ptr [ecx + 0x2b7d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x2b7du))) & 0xffu);
    /* 008c4459: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 008c4460: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4462: je 0x8c447b */ if (fZ) goto L_008c447b;
L_008c4464:; BB(0x008c4464);
    /* 008c4464: mov eax, dword ptr fs:[0x18] */ r_eax = R32((u32)(TEB+0x18u));
    /* 008c446a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 008c446d: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 008c4471: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008c4474: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c4477: mov esp, ebp */ r_esp = r_ebp;
    /* 008c4479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c447a: ret  */ FN_RET(0x008c4440); r_esp += 4; return;
L_008c447b:; BB(0x008c447b);
    /* 008c447b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c447d: mov al, byte ptr fs:[0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(TEB+0x20u))) & 0xffu);
    /* 008c4483: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008c4486: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c4489: mov esp, ebp */ r_esp = r_ebp;
    /* 008c448b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c448c: ret  */ FN_RET(0x008c4440); r_esp += 4; return;
}

void f_008c4490(void) /* sub_8C4490 */
{
    FN_ENTER(0x008c4490);
    /* 008c4490: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c4495: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4496: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008c449a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c449b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008c449f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c44a1: je 0x8c44c9 */ if (fZ) goto L_008c44c9;
L_008c44a3:; BB(0x008c44a3);
    /* 008c44a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c44a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c44a5: push 0xa388e8 */ { u32 v = 0xa388e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c44aa: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c44afu); f_008c94e0();
    /* 008c44af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c44b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c44b3: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c44b8: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c44bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c44bc: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c44c1u); f_008c3720();
    /* 008c44c1: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c44c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c44c9:; BB(0x008c44c9);
    /* 008c44c9: lea ecx, [edi - 0x60f] */ r_ecx = (u32)(r_edi+0xfffff9f1u);
    /* 008c44cf: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c44d2: ja 0x8c47e7 */ if ((!fC&&!fZ)) goto L_008c47e7;
L_008c44d8:; BB(0x008c44d8);
    /* 008c44d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c44da: mov dl, byte ptr [ecx + 0x8c4850] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x8c4850u))) & 0xffu);
    /* 008c44e0: jmp dword ptr [edx*4 + 0x8c4814] */ { u32 t = R32((u32)(r_edx*4+0x8c4814u)); switch (t) { case 0x8c44e7u: goto L_008c44e7; case 0x8c4504u: goto L_008c4504; case 0x8c4723u: goto L_008c4723; case 0x8c4522u: goto L_008c4522; case 0x8c468eu: goto L_008c468e; case 0x8c45e2u: goto L_008c45e2; case 0x8c4601u: goto L_008c4601; case 0x8c4610u: goto L_008c4610; case 0x8c465cu: goto L_008c465c; case 0x8c466bu: goto L_008c466b; case 0x8c467fu: goto L_008c467f; case 0x8c4787u: goto L_008c4787; case 0x8c45b6u: goto L_008c45b6; case 0x8c461fu: goto L_008c461f; case 0x8c47e7u: goto L_008c47e7; default: UNSUP(0x008c44e0, "jump table entry is not a known target"); } }
L_008c44e7:; BB(0x008c44e7);
    /* 008c44e7: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c44e9: mov edi, 0x3e9 */ r_edi = 0x3e9u;
    /* 008c44ee: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008c44f0:; BB(0x008c44f0);
    /* 008c44f0: jne 0x8c4570 */ if (!fZ) goto L_008c4570;
L_008c44f2:; BB(0x008c44f2);
    /* 008c44f2: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 008c44f5: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c44fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c44fb: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 008c44fe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c4500: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4501: ret 0xc */ FN_RET(0x008c4490); r_esp += 16; return;
L_008c4504:; BB(0x008c4504);
    /* 008c4504: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c4506: mov edi, 0x3ea */ r_edi = 0x3eau;
    /* 008c450b: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008c450d:; BB(0x008c450d);
    /* 008c450d: jne 0x8c4570 */ if (!fZ) goto L_008c4570;
L_008c450f:; BB(0x008c450f);
    /* 008c450f: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 008c4512: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c4518: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c4519: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c451b: mov dword ptr [ecx + 0xc], esi */ W32((u32)(r_ecx+0xcu), r_esi);
    /* 008c451e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c451f: ret 0xc */ FN_RET(0x008c4490); r_esp += 16; return;
L_008c4522:; BB(0x008c4522);
    /* 008c4522: mov eax, dword ptr [0xa37b2c] */ r_eax = R32((u32)(0xa37b2cu));
    /* 008c4527: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008c452a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008c452d: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008c4530: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c4532: jb 0x8c45fa */ if (fC) goto L_008c45fa;
L_008c4538:; BB(0x008c4538);
    /* 008c4538: call 0x8c5000 */ r_esp -= 4; W32(r_esp, 0x8c453du); f_008c5000();
    /* 008c453d: call 0x8c50e0 */ r_esp -= 4; W32(r_esp, 0x8c4542u); f_008c50e0();
    /* 008c4542: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c4547: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4549: je 0x8c456b */ if (fZ) goto L_008c456b;
L_008c454b:; BB(0x008c454b);
    /* 008c454b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c454c: push 0xa388d0 */ { u32 v = 0xa388d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4551: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4556u); f_008c94e0();
    /* 008c4556: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4559: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c455a: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c455f: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c4562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4563: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c4568u); f_008c3720();
    /* 008c4568: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c456b:; BB(0x008c456b);
    /* 008c456b: mov edi, 0x3e9 */ r_edi = 0x3e9u;
L_008c4570:; BB(0x008c4570);
    /* 008c4570: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4571: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4572: call 0x82d238 */ r_esp -= 4; W32(r_esp, 0x8c4577u); f_0082d238();
    /* 008c4577: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4579: jne 0x8c45fa */ if (!fZ) goto L_008c45fa;
L_008c457b:; BB(0x008c457b);
    /* 008c457b: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c4580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4582: je 0x8c45a6 */ if (fZ) goto L_008c45a6;
L_008c4584:; BB(0x008c4584);
    /* 008c4584: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4585: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4586: push 0xa388b0 */ { u32 v = 0xa388b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c458b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4590u); f_008c94e0();
    /* 008c4590: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c4596: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4599: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c459c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c459d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c459e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c45a3u); f_008c3720();
    /* 008c45a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c45a6:; BB(0x008c45a6);
    /* 008c45a6: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c45ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c45ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c45ad: mov byte ptr [eax + 0x23], 1 */ W8((u32)(r_eax+0x23u), 0x1u);
    /* 008c45b1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c45b3: ret 0xc */ FN_RET(0x008c4490); r_esp += 16; return;
L_008c45b6:; BB(0x008c45b6);
    /* 008c45b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c45b8: je 0x8c45db */ if (fZ) goto L_008c45db;
L_008c45ba:; BB(0x008c45ba);
    /* 008c45ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c45bb: push 0xa3889c */ { u32 v = 0xa3889cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c45c0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c45c5u); f_008c94e0();
    /* 008c45c5: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c45cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c45ce: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c45d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c45d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c45d3: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c45d8u); f_008c3720();
    /* 008c45d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c45db:; BB(0x008c45db);
    /* 008c45db: mov edi, 0x3f8 */ r_edi = 0x3f8u;
    /* 008c45e0: jmp 0x8c4570 */ goto L_008c4570;
L_008c45e2:; BB(0x008c45e2);
    /* 008c45e2: mov edi, 0x3f3 */ r_edi = 0x3f3u;
L_008c45e7:; BB(0x008c45e7);
    /* 008c45e7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c45ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c45ec: jne 0x8c4570 */ if (!fZ) goto L_008c4570;
L_008c45ee:; BB(0x008c45ee);
    /* 008c45ee: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 008c45f1: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c45f7: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
L_008c45fa:; BB(0x008c45fa);
    /* 008c45fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c45fb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c45fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c45fe: ret 0xc */ FN_RET(0x008c4490); r_esp += 16; return;
L_008c4601:; BB(0x008c4601);
    /* 008c4601: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c4604: mov edi, 0x3f4 */ r_edi = 0x3f4u;
    /* 008c4609: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c460b: jmp 0x8c44f0 */ goto L_008c44f0;
L_008c4610:; BB(0x008c4610);
    /* 008c4610: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c4613: mov edi, 0x3f5 */ r_edi = 0x3f5u;
    /* 008c4618: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c461a: jmp 0x8c450d */ goto L_008c450d;
L_008c461f:; BB(0x008c461f);
    /* 008c461f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c4622: mov edi, 0x3fa */ r_edi = 0x3fau;
    /* 008c4627: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4629: je 0x8c45ee */ if (fZ) goto L_008c45ee;
L_008c462b:; BB(0x008c462b);
    /* 008c462b: mov cl, byte ptr [0xaea818] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0xaea818u))) & 0xffu);
    /* 008c4631: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c4633: je 0x8c4570 */ if (fZ) goto L_008c4570;
L_008c4639:; BB(0x008c4639);
    /* 008c4639: lea ecx, [eax + 0x1468] */ r_ecx = (u32)(r_eax+0x1468u);
    /* 008c463f: call 0x8c82d0 */ r_esp -= 4; W32(r_esp, 0x8c4644u); f_008c82d0();
    /* 008c4644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4646: je 0x8c4570 */ if (fZ) goto L_008c4570;
L_008c464c:; BB(0x008c464c);
    /* 008c464c: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c4652: call 0x8c3fe0 */ r_esp -= 4; W32(r_esp, 0x8c4657u); f_008c3fe0();
    /* 008c4657: jmp 0x8c4570 */ goto L_008c4570;
L_008c465c:; BB(0x008c465c);
    /* 008c465c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c465f: mov edi, 0x3f7 */ r_edi = 0x3f7u;
    /* 008c4664: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4666: jmp 0x8c44f0 */ goto L_008c44f0;
L_008c466b:; BB(0x008c466b);
    /* 008c466b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c466e: mov edi, 0x3f6 */ r_edi = 0x3f6u;
    /* 008c4673: mov esi, 0xd2 */ r_esi = 0xd2u;
    /* 008c4678: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c467a: jmp 0x8c450d */ goto L_008c450d;
L_008c467f:; BB(0x008c467f);
    /* 008c467f: mov edi, 0x3f6 */ r_edi = 0x3f6u;
    /* 008c4684: mov esi, 0xdc */ r_esi = 0xdcu;
    /* 008c4689: jmp 0x8c45e7 */ goto L_008c45e7;
L_008c468e:; BB(0x008c468e);
    /* 008c468e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c4692: call 0x8c82e0 */ r_esp -= 4; W32(r_esp, 0x8c4697u); f_008c82e0();
    /* 008c4697: mov esi, eax */ r_esi = r_eax;
    /* 008c4699: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c469e: cmp edi, 0x61a */ {  u32 a = r_edi; u32 b = 0x61au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c46a4: jne 0x8c46e6 */ if (!fZ) goto L_008c46e6;
L_008c46a6:; BB(0x008c46a6);
    /* 008c46a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c46a8: je 0x8c4719 */ if (fZ) goto L_008c4719;
L_008c46aa:; BB(0x008c46aa);
    /* 008c46aa: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008c46ad: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008c46b0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c46b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46b4: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008c46b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46b8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c46ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c46bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46bd: push 0xa3887c */ { u32 v = 0xa3887cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c46c2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c46c7u); f_008c94e0();
    /* 008c46c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c46ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c46cb: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c46d0: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c46d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c46d4: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c46d9u); f_008c3720();
    /* 008c46d9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c46dc: mov edi, 0x3f9 */ r_edi = 0x3f9u;
    /* 008c46e1: jmp 0x8c4570 */ goto L_008c4570;
L_008c46e6:; BB(0x008c46e6);
    /* 008c46e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c46e8: je 0x8c4719 */ if (fZ) goto L_008c4719;
L_008c46ea:; BB(0x008c46ea);
    /* 008c46ea: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008c46ed: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008c46f0: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008c46f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46f4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008c46f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c46f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c46f9: push 0xa38860 */ { u32 v = 0xa38860u; r_esp -= 4; W32(r_esp, v); }
    /* 008c46fe: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4703u); f_008c94e0();
    /* 008c4703: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c4709: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c470c: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c470f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4710: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4711: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c4716u); f_008c3720();
    /* 008c4716: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c4719:; BB(0x008c4719);
    /* 008c4719: mov edi, 0x3f9 */ r_edi = 0x3f9u;
    /* 008c471e: jmp 0x8c4570 */ goto L_008c4570;
L_008c4723:; BB(0x008c4723);
    /* 008c4723: mov ecx, dword ptr [0xaea80c] */ r_ecx = R32((u32)(0xaea80cu));
    /* 008c4729: mov dword ptr [0xaea6f4], esi */ W32((u32)(0xaea6f4u), r_esi);
    /* 008c472f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4731: jne 0x8c479b */ if (!fZ) goto L_008c479b;
L_008c4733:; BB(0x008c4733);
    /* 008c4733: mov dword ptr [0xaea80c], esi */ W32((u32)(0xaea80cu), r_esi);
L_008c4739:; BB(0x008c4739);
    /* 008c4739: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c473b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008c473d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008c473f: push 0x7d6 */ { u32 v = 0x7d6u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4744: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4749: call 0x8c5ac0 */ r_esp -= 4; W32(r_esp, 0x8c474eu); f_008c5ac0();
    /* 008c474e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4751: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4753: jne 0x8c45fa */ if (!fZ) goto L_008c45fa;
L_008c4759:; BB(0x008c4759);
    /* 008c4759: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c475e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4760: je 0x8c4787 */ if (fZ) goto L_008c4787;
L_008c4762:; BB(0x008c4762);
    /* 008c4762: push 0xa3884c */ { u32 v = 0xa3884cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4767: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c476cu); f_008c94e0();
    /* 008c476c: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c4772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4775: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c4778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4779: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c477a: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c477fu); f_008c3720();
    /* 008c477f: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c4784: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c4787:; BB(0x008c4787);
    /* 008c4787: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c478a: mov edi, 0x3f6 */ r_edi = 0x3f6u;
    /* 008c478f: mov esi, 0xe6 */ r_esi = 0xe6u;
    /* 008c4794: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4796: jmp 0x8c44f0 */ goto L_008c44f0;
L_008c479b:; BB(0x008c479b);
    /* 008c479b: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c479d: je 0x8c4739 */ if (fZ) goto L_008c4739;
L_008c479f:; BB(0x008c479f);
    /* 008c479f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c47a1: je 0x8c47c9 */ if (fZ) goto L_008c47c9;
L_008c47a3:; BB(0x008c47a3);
    /* 008c47a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c47a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c47a5: push 0xa38824 */ { u32 v = 0xa38824u; r_esp -= 4; W32(r_esp, v); }
    /* 008c47aa: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c47afu); f_008c94e0();
    /* 008c47af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c47b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c47b3: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c47b8: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c47bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c47bc: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c47c1u); f_008c3720();
    /* 008c47c1: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c47c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c47c9:; BB(0x008c47c9);
    /* 008c47c9: mov dword ptr [0xaea6cc], 2 */ W32((u32)(0xaea6ccu), 0x2u);
    /* 008c47d3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c47d6: mov edi, 0x3f6 */ r_edi = 0x3f6u;
    /* 008c47db: mov esi, 0xe6 */ r_esi = 0xe6u;
    /* 008c47e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c47e2: jmp 0x8c450d */ goto L_008c450d;
L_008c47e7:; BB(0x008c47e7);
    /* 008c47e7: cmp edi, 0x1f4 */ {  u32 a = r_edi; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c47ed: jne 0x8c4803 */ if (!fZ) goto L_008c4803;
L_008c47ef:; BB(0x008c47ef);
    /* 008c47ef: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c47f2: mov edi, 0x3f6 */ r_edi = 0x3f6u;
    /* 008c47f7: mov esi, 0x1f4 */ r_esi = 0x1f4u;
    /* 008c47fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c47fe: jmp 0x8c450d */ goto L_008c450d;
L_008c4803:; BB(0x008c4803);
    /* 008c4803: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c4806: mov edi, 0x3e8 */ r_edi = 0x3e8u;
    /* 008c480b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c480d: jmp 0x8c450d */ goto L_008c450d;
}

void f_008c4880(void) /* sub_8C4880 */
{
    FN_ENTER(0x008c4880);
    /* 008c4880: sub esp, 0x2b4 */ {  u32 a = r_esp; u32 b = 0x2b4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c4886: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4887: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4888: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4889: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c488a: push 0xa38b1c */ { u32 v = 0xa38b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c488f: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 008c4893: lea esi, [ecx + 0x24] */ r_esi = (u32)(r_ecx+0x24u);
    /* 008c4896: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c489bu); f_008c94e0();
    /* 008c489b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c489e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c489f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c48a0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c48a5u); f_008c3720();
    /* 008c48a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c48a8: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 008c48ac: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 008c48b0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 008c48b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c48b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c48ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c48bc: push 0xf003f */ { u32 v = 0xf003fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c48c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c48c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c48c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c48c7: push 0xa38ae4 */ { u32 v = 0xa38ae4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c48cc: xor bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c48ce: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c48d3u); f_008c94e0();
    /* 008c48d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c48d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c48d7: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c48dc: call dword ptr [0x8f8044] */ { u32 t = R32((u32)(0x8f8044u)); r_esp -= 4; W32(r_esp, 0x8c48e2u); call_ind(t); }
    /* 008c48e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c48e4: jne 0x8c4a1f */ if (!fZ) goto L_008c4a1f;
L_008c48ea:; BB(0x008c48ea);
    /* 008c48ea: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008c48ee: mov edi, dword ptr [0x8f834c] */ r_edi = R32((u32)(0x8f834cu));
    /* 008c48f4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c48f7: jne 0x8c4991 */ if (!fZ) goto L_008c4991;
L_008c48fd:; BB(0x008c48fd);
    /* 008c48fd: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c4901: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008c4905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4907: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4909: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c490b: push 0xa38ad0 */ { u32 v = 0xa38ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4910: mov dword ptr [esp + 0x28], 0x40 */ W32((u32)(r_esp+0x28u), 0x40u);
    /* 008c4918: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c491du); f_008c94e0();
    /* 008c491d: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008c4921: mov ebp, dword ptr [0x8f8008] */ r_ebp = R32((u32)(0x8f8008u));
    /* 008c4927: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c492a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c492b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c492c: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c492eu); call_ind(t); }
    /* 008c492e: push 0xa3843c */ { u32 v = 0xa3843cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4933: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 008c493a: push 0xa38acc */ { u32 v = 0xa38accu; r_esp -= 4; W32(r_esp, v); }
    /* 008c493f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4940: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c4942u); call_ind(t); }
    /* 008c4942: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008c4946: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c494b: je 0x8c4966 */ if (fZ) goto L_008c4966;
L_008c494d:; BB(0x008c494d);
    /* 008c494d: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 008c4954: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 008c4958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4959: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c495a: call dword ptr [0x8f8118] */ { u32 t = R32((u32)(0x8f8118u)); r_esp -= 4; W32(r_esp, 0x8c4960u); call_ind(t); }
    /* 008c4960: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4962: jne 0x8c4966 */ if (!fZ) goto L_008c4966;
L_008c4964:; BB(0x008c4964);
    /* 008c4964: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008c4966:; BB(0x008c4966);
    /* 008c4966: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c496a: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c496e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c496f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4970: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4974: push 0xa38abc */ { u32 v = 0xa38abcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4979: mov dword ptr [esp + 0x28], 4 */ W32((u32)(r_esp+0x28u), 0x4u);
    /* 008c4981: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4986u); f_008c94e0();
    /* 008c4986: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008c498a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c498d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c498e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c498f: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c4991u); call_ind(t); }
L_008c4991:; BB(0x008c4991);
    /* 008c4991: push 0xa3843c */ { u32 v = 0xa3843cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4996: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 008c499a: push 0xa38acc */ { u32 v = 0xa38accu; r_esp -= 4; W32(r_esp, v); }
    /* 008c499f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c49a0: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c49a2u); call_ind(t); }
    /* 008c49a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c49a5: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008c49a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c49aa: call dword ptr [0x8f811c] */ { u32 t = R32((u32)(0x8f811cu)); r_esp -= 4; W32(r_esp, 0x8c49b0u); call_ind(t); }
    /* 008c49b0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c49b1: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 008c49b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c49b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c49b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c49b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c49bb: push 0xa38aa8 */ { u32 v = 0xa38aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c49c0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 008c49c4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c49c9u); f_008c94e0();
    /* 008c49c9: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008c49cd: mov edi, dword ptr [0x8f8010] */ r_edi = R32((u32)(0x8f8010u));
    /* 008c49d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c49d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c49d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c49d8: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c49dau); call_ind(t); }
    /* 008c49da: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c49dc: mov dword ptr [esp + 0x14], 4 */ W32((u32)(r_esp+0x14u), 0x4u);
    /* 008c49e4: je 0x8c49ec */ if (fZ) goto L_008c49ec;
L_008c49e6:; BB(0x008c49e6);
    /* 008c49e6: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c49ea: jmp 0x8c49f4 */ goto L_008c49f4;
L_008c49ec:; BB(0x008c49ec);
    /* 008c49ec: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_008c49f4:; BB(0x008c49f4);
    /* 008c49f4: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c49f8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c49fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c49fb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c49fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c49ff: push 0xa38abc */ { u32 v = 0xa38abcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a04: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4a09u); f_008c94e0();
    /* 008c4a09: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008c4a0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a12: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c4a14u); call_ind(t); }
    /* 008c4a14: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008c4a18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a19: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c4a1fu); call_ind(t); }
L_008c4a1f:; BB(0x008c4a1f);
    /* 008c4a1f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008c4a23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4a26: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4a2c:; BB(0x008c4a2c);
    /* 008c4a2c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c4a2f: ja 0x8c4e50 */ if ((!fC&&!fZ)) goto L_008c4e50;
L_008c4a35:; BB(0x008c4a35);
    /* 008c4a35: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c4a37: je 0x8c4a46 */ if (fZ) goto L_008c4a46;
L_008c4a39:; BB(0x008c4a39);
    /* 008c4a39: cmp dword ptr [0xaea6cc], 9 */ {  u32 a = R32((u32)(0xaea6ccu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c4a40: jge 0x8c4e50 */ if ((fS==fO)) goto L_008c4e50;
L_008c4a46:; BB(0x008c4a46);
    /* 008c4a46: push 0xa38a98 */ { u32 v = 0xa38a98u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a4b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4a50u); f_008c94e0();
    /* 008c4a50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4a53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a55: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c4a5au); f_008c3720();
    /* 008c4a5a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c4a5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4a5f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4a62: je 0x8c4b7f */ if (fZ) goto L_008c4b7f;
L_008c4a68:; BB(0x008c4a68);
    /* 008c4a68: lea edi, [esi + 0x101c] */ r_edi = (u32)(r_esi+0x101cu);
    /* 008c4a6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a6f: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c4a75u); call_ind(t); }
    /* 008c4a75: mov eax, dword ptr [esi + 0x143c] */ r_eax = R32((u32)(r_esi+0x143cu));
    /* 008c4a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4a7d: je 0x8c4a8e */ if (fZ) goto L_008c4a8e;
L_008c4a7f:; BB(0x008c4a7f);
    /* 008c4a7f: mov ecx, dword ptr [esi + 0x1440] */ r_ecx = R32((u32)(r_esi+0x1440u));
    /* 008c4a85: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c4a87: mov eax, 0xa37ba0 */ r_eax = 0xa37ba0u;
    /* 008c4a8c: ja 0x8c4a93 */ if ((!fC&&!fZ)) goto L_008c4a93;
L_008c4a8e:; BB(0x008c4a8e);
    /* 008c4a8e: mov eax, 0x8f8814 */ r_eax = 0x8f8814u;
L_008c4a93:; BB(0x008c4a93);
    /* 008c4a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4a94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c4a96: mov ax, word ptr [esi + 0x102a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x102au))) & 0xffffu);
    /* 008c4a9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4a9f: mov cx, word ptr [esi + 0x1028] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1028u))) & 0xffffu);
    /* 008c4aa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4aa7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c4aa9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c4aab: mov dx, word ptr [esi + 0x1026] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x1026u))) & 0xffffu);
    /* 008c4ab2: mov ax, word ptr [esi + 0x1024] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x1024u))) & 0xffffu);
    /* 008c4ab9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4aba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4abb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4abd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4abe: mov cx, word ptr [esi + 0x1022] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1022u))) & 0xffffu);
    /* 008c4ac5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c4ac7: mov dx, word ptr [esi + 0x101e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x101eu))) & 0xffffu);
    /* 008c4ace: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c4ad0: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 008c4ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ad4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ad6: push 0xa37b48 */ { u32 v = 0xa37b48u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4adb: lea ebp, [esi + 0x1c] */ r_ebp = (u32)(r_esi+0x1cu);
    /* 008c4ade: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c4ae3u); f_008c9470();
    /* 008c4ae3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ae7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ae8: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c4aedu); f_00858bf5();
    /* 008c4aed: mov edi, ebp */ r_edi = r_ebp;
    /* 008c4aef: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4af2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c4af4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4af7: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c4af9: mov eax, dword ptr [esi + 0x1438] */ r_eax = R32((u32)(r_esi+0x1438u));
    /* 008c4aff: not ecx */ r_ecx = ~r_ecx;
    /* 008c4b01: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4b04: mov edi, ecx */ r_edi = r_ecx;
    /* 008c4b06: je 0x8c4b37 */ if (fZ) goto L_008c4b37;
L_008c4b08:; BB(0x008c4b08);
    /* 008c4b08: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c4b0a: jle 0x8c4b49 */ if ((fZ||fS!=fO)) goto L_008c4b49;
L_008c4b0c:; BB(0x008c4b0c);
    /* 008c4b0c: mov ecx, 0xffffffe4 */ r_ecx = 0xffffffe4u;
    /* 008c4b11: mov eax, ebp */ r_eax = r_ebp;
    /* 008c4b13: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008c4b15:; BB(0x008c4b15);
    /* 008c4b15: mov edx, dword ptr [esi + 0x1438] */ r_edx = R32((u32)(r_esi+0x1438u));
    /* 008c4b1b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c4b1e: mov dword ptr [esi + 0x1438], edx */ W32((u32)(r_esi+0x1438u), r_edx);
    /* 008c4b24: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c4b26: add dl, 0x43 */ {  u32 a = (u8)r_edx; u32 b = 0x43u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c4b29: xor bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c4b2b: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 008c4b2d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c4b2e: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 008c4b31: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c4b33: jl 0x8c4b15 */ if ((fS!=fO)) goto L_008c4b15;
L_008c4b35:; BB(0x008c4b35);
    /* 008c4b35: jmp 0x8c4b49 */ goto L_008c4b49;
L_008c4b37:; BB(0x008c4b37);
    /* 008c4b37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b39: lea eax, [esi + 0x1030] */ r_eax = (u32)(r_esi+0x1030u);
    /* 008c4b3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b41: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c4b46u); f_008c8e20();
    /* 008c4b46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c4b49:; BB(0x008c4b49);
    /* 008c4b49: cmp dword ptr [esi + 0x143c], 0x3e7 */ {  u32 a = R32((u32)(r_esi+0x143cu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4b53: je 0x8c4b67 */ if (fZ) goto L_008c4b67;
L_008c4b55:; BB(0x008c4b55);
    /* 008c4b55: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c4b57: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 008c4b5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b61: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c4b67u); call_ind(t); }
L_008c4b67:; BB(0x008c4b67);
    /* 008c4b67: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c4b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b6a: call dword ptr [0x8f82d4] */ { u32 t = R32((u32)(0x8f82d4u)); r_esp -= 4; W32(r_esp, 0x8c4b70u); call_ind(t); }
    /* 008c4b70: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008c4b72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b73: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c4b79u); call_ind(t); }
    /* 008c4b79: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
L_008c4b7f:; BB(0x008c4b7f);
    /* 008c4b7f: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c4b84: call 0x8c78d0 */ r_esp -= 4; W32(r_esp, 0x8c4b89u); f_008c78d0();
    /* 008c4b89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4b8b: jne 0x8c4bad */ if (!fZ) goto L_008c4bad;
L_008c4b8d:; BB(0x008c4b8d);
    /* 008c4b8d: push 0xa38a88 */ { u32 v = 0xa38a88u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4b92: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4b97u); f_008c94e0();
    /* 008c4b97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4b9a: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c4b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ba0: call 0x8c76c0 */ r_esp -= 4; W32(r_esp, 0x8c4ba5u); f_008c76c0();
    /* 008c4ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4ba7: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4bad:; BB(0x008c4bad);
    /* 008c4bad: push 0xa38a74 */ { u32 v = 0xa38a74u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4bb2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4bb7u); f_008c94e0();
    /* 008c4bb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4bba: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c4bbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4bc0: call 0x8c78d0 */ r_esp -= 4; W32(r_esp, 0x8c4bc5u); f_008c78d0();
    /* 008c4bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4bc6: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4bcbu); f_008c5c80();
    /* 008c4bcb: push 0xa38a5c */ { u32 v = 0xa38a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4bd0: mov esi, eax */ r_esi = r_eax;
    /* 008c4bd2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4bd7u); f_008c94e0();
    /* 008c4bd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4bda: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c4bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4be0: call 0x8c78d0 */ r_esp -= 4; W32(r_esp, 0x8c4be5u); f_008c78d0();
    /* 008c4be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4be6: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4bebu); f_008c5c80();
    /* 008c4beb: push 0xa38a44 */ { u32 v = 0xa38a44u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4bf0: mov edi, eax */ r_edi = r_eax;
    /* 008c4bf2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4bf7u); f_008c94e0();
    /* 008c4bf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4bfa: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c4bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c00: call 0x8c78d0 */ r_esp -= 4; W32(r_esp, 0x8c4c05u); f_008c78d0();
    /* 008c4c05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c06: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4c0bu); f_008c5c80();
    /* 008c4c0b: push 0xa38a34 */ { u32 v = 0xa38a34u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c10: mov ebp, eax */ r_ebp = r_eax;
    /* 008c4c12: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4c17u); f_008c94e0();
    /* 008c4c17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4c1a: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c4c1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c20: call 0x8c78d0 */ r_esp -= 4; W32(r_esp, 0x8c4c25u); f_008c78d0();
    /* 008c4c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c26: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4c2bu); f_008c5c80();
    /* 008c4c2b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4c2d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008c4c31: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4c37:; BB(0x008c4c37);
    /* 008c4c37: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4c39: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4c3f:; BB(0x008c4c3f);
    /* 008c4c3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4c41: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4c47:; BB(0x008c4c47);
    /* 008c4c47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4c49: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4c4f:; BB(0x008c4c4f);
    /* 008c4c4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c57: push 0xa38a28 */ { u32 v = 0xa38a28u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c5c: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c4c61u); f_008c9470();
    /* 008c4c61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4c64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c65: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c4c67u); call_ind(t); }
    /* 008c4c67: mov ebx, eax */ r_ebx = r_eax;
    /* 008c4c69: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4c6b: je 0x8c4e50 */ if (fZ) goto L_008c4e50;
L_008c4c71:; BB(0x008c4c71);
    /* 008c4c71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c73: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c7a: push 0xa389f4 */ { u32 v = 0xa389f4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c7f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4c84u); f_008c94e0();
    /* 008c4c84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c88: push 0xa389e8 */ { u32 v = 0xa389e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c8d: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c4c92u); f_008c9470();
    /* 008c4c92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c96: push 0x17ac */ { u32 v = 0x17acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4c9b: push 0xa389d8 */ { u32 v = 0xa389d8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ca0: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c4ca5u); f_008c9470();
    /* 008c4ca5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ca9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4caa: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c4cacu); call_ind(t); }
    /* 008c4cac: mov esi, eax */ r_esi = r_eax;
    /* 008c4cae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4cb0: jne 0x8c4cc0 */ if (!fZ) goto L_008c4cc0;
L_008c4cb2:; BB(0x008c4cb2);
    /* 008c4cb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4cb3: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c4cb5u); call_ind(t); }
    /* 008c4cb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c4cb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4cb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c4cb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4cb9: add esp, 0x2b4 */ {  u32 a = r_esp; u32 b = 0x2b4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4cbf: ret  */ FN_RET(0x008c4880); r_esp += 4; return;
L_008c4cc0:; BB(0x008c4cc0);
    /* 008c4cc0: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c4cc4: lea eax, [esp + 0x140] */ r_eax = (u32)(r_esp+0x140u);
    /* 008c4ccb: mov edi, 0x80 */ r_edi = 0x80u;
    /* 008c4cd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4cd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4cd2: mov byte ptr [esp + 0x148], 0 */ W8((u32)(r_esp+0x148u), 0x0u);
    /* 008c4cda: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008c4cde: call dword ptr [0x8f8154] */ { u32 t = R32((u32)(0x8f8154u)); r_esp -= 4; W32(r_esp, 0x8c4ce4u); call_ind(t); }
    /* 008c4ce4: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c4ce8: lea edx, [esp + 0xc0] */ r_edx = (u32)(r_esp+0xc0u);
    /* 008c4cef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4cf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4cf1: mov byte ptr [esp + 0xc8], 0 */ W8((u32)(r_esp+0xc8u), 0x0u);
    /* 008c4cf9: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008c4cfd: call dword ptr [0x8f8040] */ { u32 t = R32((u32)(0x8f8040u)); r_esp -= 4; W32(r_esp, 0x8c4d03u); call_ind(t); }
    /* 008c4d03: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 008c4d07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d08: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c4d0eu); call_ind(t); }
    /* 008c4d0e: mov eax, dword ptr [0xaea6cc] */ r_eax = R32((u32)(0xaea6ccu));
    /* 008c4d13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d16: jne 0x8c4d1f */ if (!fZ) goto L_008c4d1f;
L_008c4d18:; BB(0x008c4d18);
    /* 008c4d18: push 0xa389cc */ { u32 v = 0xa389ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d1d: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d1f:; BB(0x008c4d1f);
    /* 008c4d1f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d22: jne 0x8c4d2b */ if (!fZ) goto L_008c4d2b;
L_008c4d24:; BB(0x008c4d24);
    /* 008c4d24: push 0xa389c0 */ { u32 v = 0xa389c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d29: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d2b:; BB(0x008c4d2b);
    /* 008c4d2b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d2e: jne 0x8c4d37 */ if (!fZ) goto L_008c4d37;
L_008c4d30:; BB(0x008c4d30);
    /* 008c4d30: push 0xa389b8 */ { u32 v = 0xa389b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d35: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d37:; BB(0x008c4d37);
    /* 008c4d37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d3a: jne 0x8c4d43 */ if (!fZ) goto L_008c4d43;
L_008c4d3c:; BB(0x008c4d3c);
    /* 008c4d3c: push 0xa389ac */ { u32 v = 0xa389acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d41: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d43:; BB(0x008c4d43);
    /* 008c4d43: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d46: jne 0x8c4d4f */ if (!fZ) goto L_008c4d4f;
L_008c4d48:; BB(0x008c4d48);
    /* 008c4d48: push 0xa389a0 */ { u32 v = 0xa389a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d4d: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d4f:; BB(0x008c4d4f);
    /* 008c4d4f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d52: jne 0x8c4d5b */ if (!fZ) goto L_008c4d5b;
L_008c4d54:; BB(0x008c4d54);
    /* 008c4d54: push 0xa38990 */ { u32 v = 0xa38990u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d59: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d5b:; BB(0x008c4d5b);
    /* 008c4d5b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d5e: jne 0x8c4d67 */ if (!fZ) goto L_008c4d67;
L_008c4d60:; BB(0x008c4d60);
    /* 008c4d60: push 0xa38984 */ { u32 v = 0xa38984u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d65: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d67:; BB(0x008c4d67);
    /* 008c4d67: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d6a: jne 0x8c4d73 */ if (!fZ) goto L_008c4d73;
L_008c4d6c:; BB(0x008c4d6c);
    /* 008c4d6c: push 0xa38978 */ { u32 v = 0xa38978u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d71: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d73:; BB(0x008c4d73);
    /* 008c4d73: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4d76: jne 0x8c4d7f */ if (!fZ) goto L_008c4d7f;
L_008c4d78:; BB(0x008c4d78);
    /* 008c4d78: push 0xa3896c */ { u32 v = 0xa3896cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4d7d: jmp 0x8c4d84 */ goto L_008c4d84;
L_008c4d7f:; BB(0x008c4d7f);
    /* 008c4d7f: push 0xa38964 */ { u32 v = 0xa38964u; r_esp -= 4; W32(r_esp, v); }
L_008c4d84:; BB(0x008c4d84);
    /* 008c4d84: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c4d89u); f_008c9470();
    /* 008c4d89: mov ecx, dword ptr [esp + 0x3e] */ r_ecx = R32((u32)(r_esp+0x3eu));
    /* 008c4d8d: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 008c4d91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4d94: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4d9a: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c4da0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4da1: mov ecx, dword ptr [esp + 0x3a] */ r_ecx = R32((u32)(r_esp+0x3au));
    /* 008c4da5: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4dab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dac: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 008c4db0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4db1: mov ecx, dword ptr [esp + 0x3e] */ r_ecx = R32((u32)(r_esp+0x3eu));
    /* 008c4db5: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c4dbb: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4dc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dc2: mov edx, dword ptr [esp + 0x3e] */ r_edx = R32((u32)(r_esp+0x3eu));
    /* 008c4dc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dc7: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 008c4dcb: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c4dd1: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4dd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dd9: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 008c4ddd: lea edx, [ecx + 0x2b3c] */ r_edx = (u32)(r_ecx+0x2b3cu);
    /* 008c4de3: add ecx, 0x2b14 */ {  u32 a = r_ecx; u32 b = 0x2b14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c4de9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dea: lea edx, [esp + 0xe0] */ r_edx = (u32)(r_esp+0xe0u);
    /* 008c4df1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4df2: lea edx, [esp + 0x164] */ r_edx = (u32)(r_esp+0x164u);
    /* 008c4df9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4dfa: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c4e00: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 008c4e03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e05: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e08: push 0xa38908 */ { u32 v = 0xa38908u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e0d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4e12u); f_008c94e0();
    /* 008c4e12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e16: lea eax, [esp + 0x1fc] */ r_eax = (u32)(r_esp+0x1fcu);
    /* 008c4e1d: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e23: call 0x8cb098 */ r_esp -= 4; W32(r_esp, 0x8c4e28u); f_008cb098();
    /* 008c4e28: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4e2b: lea ecx, [esp + 0x1c0] */ r_ecx = (u32)(r_esp+0x1c0u);
    /* 008c4e32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e34: push 0x4000002 */ { u32 v = 0x4000002u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e3a: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e40: call dword ptr [esp + 0x34] */ { u32 t = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, 0x8c4e44u); call_ind(t); }
    /* 008c4e44: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c4e4au); call_ind(t); }
    /* 008c4e4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e4b: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c4e4du); call_ind(t); }
    /* 008c4e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e4e: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c4e50u); call_ind(t); }
L_008c4e50:; BB(0x008c4e50);
    /* 008c4e50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c4e51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c4e53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4e54: add esp, 0x2b4 */ {  u32 a = r_esp; u32 b = 0x2b4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4e5a: ret  */ FN_RET(0x008c4880); r_esp += 4; return;
}

void f_008c4e60(void) /* sub_8C4E60 */
{
    FN_ENTER(0x008c4e60);
    /* 008c4e60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e61: mov esi, ecx */ r_esi = r_ecx;
    /* 008c4e63: push 0xa38b34 */ { u32 v = 0xa38b34u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e68: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4e6du); f_008c94e0();
    /* 008c4e6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e75: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e7b: call dword ptr [0x8f82f0] */ { u32 t = R32((u32)(0x8f82f0u)); r_esp -= 4; W32(r_esp, 0x8c4e81u); call_ind(t); }
    /* 008c4e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4e83: mov dword ptr [esi + 0x2b9c], eax */ W32((u32)(r_esi+0x2b9cu), r_eax);
    /* 008c4e89: jne 0x8c4e8f */ if (!fZ) goto L_008c4e8f;
L_008c4e8b:; BB(0x008c4e8b);
    /* 008c4e8b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4e8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4e8e: ret  */ FN_RET(0x008c4e60); r_esp += 4; return;
L_008c4e8f:; BB(0x008c4e8f);
    /* 008c4e8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4e98: call dword ptr [0x8f82ec] */ { u32 t = R32((u32)(0x8f82ecu)); r_esp -= 4; W32(r_esp, 0x8c4e9eu); call_ind(t); }
    /* 008c4e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4ea0: mov dword ptr [esi + 0x2ba0], eax */ W32((u32)(r_esi+0x2ba0u), r_eax);
    /* 008c4ea6: jne 0x8c4eb9 */ if (!fZ) goto L_008c4eb9;
L_008c4ea8:; BB(0x008c4ea8);
    /* 008c4ea8: mov eax, dword ptr [esi + 0x2b9c] */ r_eax = R32((u32)(r_esi+0x2b9cu));
    /* 008c4eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4eaf: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c4eb5u); call_ind(t); }
    /* 008c4eb5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4eb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4eb8: ret  */ FN_RET(0x008c4e60); r_esp += 4; return;
L_008c4eb9:; BB(0x008c4eb9);
    /* 008c4eb9: push 0xa38b2c */ { u32 v = 0xa38b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ebe: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4ec3u); f_008c94e0();
    /* 008c4ec3: mov ecx, dword ptr [esi + 0x2ba0] */ r_ecx = R32((u32)(r_esi+0x2ba0u));
    /* 008c4ec9: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c4ecb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4ece: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c4ed0: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c4ed2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4ed3: ret  */ FN_RET(0x008c4e60); r_esp += 4; return;
}

void f_008c4ee0(void) /* sub_8C4EE0 */
{
    FN_ENTER(0x008c4ee0);
    /* 008c4ee0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ee1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ee2: mov esi, ecx */ r_esi = r_ecx;
    /* 008c4ee4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c4ee6: mov eax, dword ptr [esi + 0x2ba0] */ r_eax = R32((u32)(r_esi+0x2ba0u));
    /* 008c4eec: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4eee: je 0x8c4efd */ if (fZ) goto L_008c4efd;
L_008c4ef0:; BB(0x008c4ef0);
    /* 008c4ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4ef1: call dword ptr [0x8f82f4] */ { u32 t = R32((u32)(0x8f82f4u)); r_esp -= 4; W32(r_esp, 0x8c4ef7u); call_ind(t); }
    /* 008c4ef7: mov dword ptr [esi + 0x2ba0], ebx */ W32((u32)(r_esi+0x2ba0u), r_ebx);
L_008c4efd:; BB(0x008c4efd);
    /* 008c4efd: mov eax, dword ptr [esi + 0x2b9c] */ r_eax = R32((u32)(r_esi+0x2b9cu));
    /* 008c4f03: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c4f05: je 0x8c4f14 */ if (fZ) goto L_008c4f14;
L_008c4f07:; BB(0x008c4f07);
    /* 008c4f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f08: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c4f0eu); call_ind(t); }
    /* 008c4f0e: mov dword ptr [esi + 0x2b9c], ebx */ W32((u32)(r_esi+0x2b9cu), r_ebx);
L_008c4f14:; BB(0x008c4f14);
    /* 008c4f14: mov byte ptr [esi + 0x2ba4], bl */ W8((u32)(r_esi+0x2ba4u), (u8)r_ebx);
    /* 008c4f1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4f1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4f1c: ret  */ FN_RET(0x008c4ee0); r_esp += 4; return;
}

void f_008c4f20(void) /* sub_8C4F20 */
{
    FN_ENTER(0x008c4f20);
    /* 008c4f20: mov al, byte ptr [0xaeaa30] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaeaa30u))) & 0xffu);
    /* 008c4f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f26: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4f28: je 0x8c4f2e */ if (fZ) goto L_008c4f2e;
L_008c4f2a:; BB(0x008c4f2a);
    /* 008c4f2a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c4f2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4f2d: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4f2e:; BB(0x008c4f2e);
    /* 008c4f2e: push 0xa38bc4 */ { u32 v = 0xa38bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f33: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4f38u); f_008c94e0();
    /* 008c4f38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f3c: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8c4f42u); call_ind(t); }
    /* 008c4f42: mov esi, eax */ r_esi = r_eax;
    /* 008c4f44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4f46: jne 0x8c4f4c */ if (!fZ) goto L_008c4f4c;
L_008c4f48:; BB(0x008c4f48);
    /* 008c4f48: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4f4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4f4b: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4f4c:; BB(0x008c4f4c);
    /* 008c4f4c: push 0xa38ba4 */ { u32 v = 0xa38ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f51: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4f56u); f_008c94e0();
    /* 008c4f56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4f59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f5b: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4f60u); f_008c5c80();
    /* 008c4f60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4f62: mov dword ptr [0xaea4b0], eax */ W32((u32)(0xaea4b0u), r_eax);
    /* 008c4f67: jne 0x8c4f6d */ if (!fZ) goto L_008c4f6d;
L_008c4f69:; BB(0x008c4f69);
    /* 008c4f69: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4f6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4f6c: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4f6d:; BB(0x008c4f6d);
    /* 008c4f6d: push 0xa38b90 */ { u32 v = 0xa38b90u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f72: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4f77u); f_008c94e0();
    /* 008c4f77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4f7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f7b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f7c: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4f81u); f_008c5c80();
    /* 008c4f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4f83: mov dword ptr [0xaea3a0], eax */ W32((u32)(0xaea3a0u), r_eax);
    /* 008c4f88: jne 0x8c4f8e */ if (!fZ) goto L_008c4f8e;
L_008c4f8a:; BB(0x008c4f8a);
    /* 008c4f8a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4f8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4f8d: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4f8e:; BB(0x008c4f8e);
    /* 008c4f8e: push 0xa38b7c */ { u32 v = 0xa38b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f93: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4f98u); f_008c94e0();
    /* 008c4f98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4f9d: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4fa2u); f_008c5c80();
    /* 008c4fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4fa4: mov dword ptr [0xaea6c8], eax */ W32((u32)(0xaea6c8u), r_eax);
    /* 008c4fa9: jne 0x8c4faf */ if (!fZ) goto L_008c4faf;
L_008c4fab:; BB(0x008c4fab);
    /* 008c4fab: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4fad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4fae: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4faf:; BB(0x008c4faf);
    /* 008c4faf: push 0xa38b68 */ { u32 v = 0xa38b68u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4fb4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4fb9u); f_008c94e0();
    /* 008c4fb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4fbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4fbe: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4fc3u); f_008c5c80();
    /* 008c4fc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c4fc5: mov dword ptr [0xaea6c4], eax */ W32((u32)(0xaea6c4u), r_eax);
    /* 008c4fca: jne 0x8c4fd0 */ if (!fZ) goto L_008c4fd0;
L_008c4fcc:; BB(0x008c4fcc);
    /* 008c4fcc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4fce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4fcf: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4fd0:; BB(0x008c4fd0);
    /* 008c4fd0: push 0xa38b54 */ { u32 v = 0xa38b54u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4fd5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c4fdau); f_008c94e0();
    /* 008c4fda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c4fdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c4fde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c4fdf: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c4fe4u); f_008c5c80();
    /* 008c4fe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4fe6: mov dword ptr [0xaea3a4], eax */ W32((u32)(0xaea3a4u), r_eax);
    /* 008c4feb: jne 0x8c4ff1 */ if (!fZ) goto L_008c4ff1;
L_008c4fed:; BB(0x008c4fed);
    /* 008c4fed: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c4fef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4ff0: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
L_008c4ff1:; BB(0x008c4ff1);
    /* 008c4ff1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c4ff3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c4ff4: mov byte ptr [0xaeaa30], al */ W8((u32)(0xaeaa30u), (u8)r_eax);
    /* 008c4ff9: ret  */ FN_RET(0x008c4f20); r_esp += 4; return;
}

