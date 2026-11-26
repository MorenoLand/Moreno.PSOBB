#include "protos.h"

void f_0082d050(void) /* sub_82D050 */
{
    FN_ENTER(0x0082d050);
    /* 0082d050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d052: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d053: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d054: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082d057: mov ebx, edx */ r_ebx = r_edx;
    /* 0082d059: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d05b: mov dword ptr [esp + 4], 0x82c49c */ W32((u32)(r_esp+0x4u), 0x82c49cu);
    /* 0082d063: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0082d066: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0082d06a: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0082d06e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0082d072: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d075: call dword ptr [0x8f8380] */ { u32 t = R32((u32)(0x8f8380u)); r_esp -= 4; W32(r_esp, 0x82d07bu); call_ind(t); }
    /* 0082d07b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0082d07f: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d084: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d086: call dword ptr [0x8f837c] */ { u32 t = R32((u32)(0x8f837cu)); r_esp -= 4; W32(r_esp, 0x82d08cu); call_ind(t); }
    /* 0082d08c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0082d090: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d092: call dword ptr [0x8f8070] */ { u32 t = R32((u32)(0x8f8070u)); r_esp -= 4; W32(r_esp, 0x82d098u); call_ind(t); }
    /* 0082d098: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0082d0a0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0082d0a4: mov eax, dword ptr [0xacbe70] */ r_eax = R32((u32)(0xacbe70u));
    /* 0082d0a9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0082d0ad: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0082d0b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d0b1: call dword ptr [0x8f8394] */ { u32 t = R32((u32)(0x8f8394u)); r_esp -= 4; W32(r_esp, 0x82d0b7u); call_ind(t); }
    /* 0082d0b7: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0082d0ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d0bc: je 0x82d201 */ if (fZ) goto L_0082d201;
L_0082d0c2:; BB(0x0082d0c2);
    /* 0082d0c2: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0082d0c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d0c9: jne 0x82d0df */ if (!fZ) goto L_0082d0df;
L_0082d0cb:; BB(0x0082d0cb);
    /* 0082d0cb: mov eax, 8 */ r_eax = 0x8u;
    /* 0082d0d0: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0082d0d4: mov ecx, 0x80000000 */ r_ecx = 0x80000000u;
    /* 0082d0d9: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0082d0dd: jmp 0x82d0ee */ goto L_0082d0ee;
L_0082d0df:; BB(0x0082d0df);
    /* 0082d0df: mov ecx, 0xc40000 */ r_ecx = 0xc40000u;
    /* 0082d0e4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0082d0e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082d0ea: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
L_0082d0ee:; BB(0x0082d0ee);
    /* 0082d0ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d0f0: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82d0f6u); call_ind(t); }
    /* 0082d0f6: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0082d0fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d0fc: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82d102u); call_ind(t); }
    /* 0082d102: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0082d106: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d108: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82d10eu); call_ind(t); }
    /* 0082d10e: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0082d112: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d114: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82d11au); call_ind(t); }
    /* 0082d11a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0082d11e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d120: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82d126u); call_ind(t); }
    /* 0082d126: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 0082d12c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0082d12e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082d130: mov ebp, 0x280 */ r_ebp = 0x280u;
    /* 0082d135: mov ecx, 0x1e0 */ r_ecx = 0x1e0u;
    /* 0082d13a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d13c: je 0x82d1b6 */ if (fZ) goto L_0082d1b6;
L_0082d13e:; BB(0x0082d13e);
    /* 0082d13e: mov ebp, dword ptr [0xacbe7c] */ r_ebp = R32((u32)(0xacbe7cu));
    /* 0082d144: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0082d148: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0082d14c: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0082d150: mov ecx, edx */ r_ecx = r_edx;
    /* 0082d152: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082d155: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0082d159: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082d15b: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0082d15d: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082d15f: mov esi, ebp */ r_esi = r_ebp;
    /* 0082d161: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0082d164: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d166: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0082d168: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082d16a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0082d16e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082d170: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082d172: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0082d176: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0082d17a: mov ecx, edx */ r_ecx = r_edx;
    /* 0082d17c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082d17f: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082d181: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0082d183: lea ecx, [edi + eax] */ r_ecx = (u32)(r_edi+r_eax);
    /* 0082d186: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082d188: mov ecx, dword ptr [0xacbe80] */ r_ecx = R32((u32)(0xacbe80u));
    /* 0082d18e: mov esi, ecx */ r_esi = r_ecx;
    /* 0082d190: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0082d193: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d195: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0082d197: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082d199: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d19b: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d19d: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d19f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0082d1a1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0082d1a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0082d1a7: mov esi, 0 */ r_esi = 0x0u;
    /* 0082d1ac: jl 0x82d1b0 */ if ((fS!=fO)) goto L_0082d1b0;
L_0082d1ae:; BB(0x0082d1ae);
    /* 0082d1ae: mov edi, eax */ r_edi = r_eax;
L_0082d1b0:; BB(0x0082d1b0);
    /* 0082d1b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0082d1b2: jl 0x82d1b6 */ if ((fS!=fO)) goto L_0082d1b6;
L_0082d1b4:; BB(0x0082d1b4);
    /* 0082d1b4: mov esi, edx */ r_esi = r_edx;
L_0082d1b6:; BB(0x0082d1b6);
    /* 0082d1b6: mov eax, dword ptr [0xacbe70] */ r_eax = R32((u32)(0xacbe70u));
    /* 0082d1bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082d1bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1be: push dword ptr [0xacbedc] */ { u32 v = R32((u32)(0xacbedcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d1c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1ca: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0082d1ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1d1: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 0082d1d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1d6: call dword ptr [0x8f8390] */ { u32 t = R32((u32)(0x8f8390u)); r_esp -= 4; W32(r_esp, 0x82d1dcu); call_ind(t); }
    /* 0082d1dc: mov dword ptr [0xacbed8], eax */ W32((u32)(0xacbed8u), r_eax);
    /* 0082d1e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d1e3: call dword ptr [0x8f838c] */ { u32 t = R32((u32)(0x8f838cu)); r_esp -= 4; W32(r_esp, 0x82d1e9u); call_ind(t); }
    /* 0082d1e9: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d1ef: call dword ptr [0x8f8388] */ { u32 t = R32((u32)(0x8f8388u)); r_esp -= 4; W32(r_esp, 0x82d1f5u); call_ind(t); }
    /* 0082d1f5: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d1fb: call dword ptr [0x8f8384] */ { u32 t = R32((u32)(0x8f8384u)); r_esp -= 4; W32(r_esp, 0x82d201u); call_ind(t); }
L_0082d201:; BB(0x0082d201);
    /* 0082d201: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d204: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082d205: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082d206: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082d207: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082d208: ret  */ FN_RET(0x0082d050); r_esp += 4; return;
}

void f_0082d20c(void) /* sub_82D20C */
{
    FN_ENTER(0x0082d20c);
    /* 0082d20c: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082d211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d213: je 0x82d225 */ if (fZ) goto L_0082d225;
L_0082d215:; BB(0x0082d215);
    /* 0082d215: mov ecx, 0xa21690 */ r_ecx = 0xa21690u;
    /* 0082d21a: mov edx, 2 */ r_edx = 0x2u;
    /* 0082d21f: call 0x84518c */ r_esp -= 4; W32(r_esp, 0x82d224u); f_0084518c();
    /* 0082d224: ret  */ FN_RET(0x0082d20c); r_esp += 4; return;
L_0082d225:; BB(0x0082d225);
    /* 0082d225: mov ecx, 0xa216a0 */ r_ecx = 0xa216a0u;
    /* 0082d22a: mov edx, 3 */ r_edx = 0x3u;
    /* 0082d22f: call 0x84518c */ r_esp -= 4; W32(r_esp, 0x82d234u); f_0084518c();
    /* 0082d234: ret  */ FN_RET(0x0082d20c); r_esp += 4; return;
}

void f_0082d238(void) /* sub_82D238 */
{
    FN_ENTER(0x0082d238);
    /* 0082d238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d239: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0082d23d: cmp ebp, 0x3f8 */ {  u32 a = r_ebp; u32 b = 0x3f8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082d243: jb 0x82d270 */ if (fC) goto L_0082d270;
L_0082d245:; BB(0x0082d245);
    /* 0082d245: cmp ebp, 0x3f9 */ {  u32 a = r_ebp; u32 b = 0x3f9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082d24b: ja 0x82d270 */ if ((!fC&&!fZ)) goto L_0082d270;
L_0082d24d:; BB(0x0082d24d);
    /* 0082d24d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d251: movzx edx, word ptr [0xacbeb0] */ r_edx = (u32)R16((u32)(0xacbeb0u));
    /* 0082d258: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0082d25b: movzx eax, word ptr [0xacbeb8] */ r_eax = (u32)R16((u32)(0xacbeb8u));
    /* 0082d262: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082d264: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x82d266u); call_ind(t); }
    /* 0082d266: mov eax, 1 */ r_eax = 0x1u;
    /* 0082d26b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082d26c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082d26d: ret 8 */ FN_RET(0x0082d238); r_esp += 12; return;
L_0082d270:; BB(0x0082d270);
    /* 0082d270: mov eax, dword ptr [0xacbee0] */ r_eax = R32((u32)(0xacbee0u));
    /* 0082d275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d277: je 0x82d27d */ if (fZ) goto L_0082d27d;
L_0082d279:; BB(0x0082d279);
    /* 0082d279: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d27a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x82d27cu); call_ind(t); }
    /* 0082d27c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082d27d:; BB(0x0082d27d);
    /* 0082d27d: call 0x845060 */ r_esp -= 4; W32(r_esp, 0x82d282u); f_00845060();
    /* 0082d282: push dword ptr [0xacbef0] */ { u32 v = R32((u32)(0xacbef0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d289: mov ecx, eax */ r_ecx = r_eax;
    /* 0082d28b: call 0x844ff4 */ r_esp -= 4; W32(r_esp, 0x82d290u); f_00844ff4();
    /* 0082d290: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082d292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082d293: ret 8 */ FN_RET(0x0082d238); r_esp += 12; return;
}

void f_0082d298(void) /* sub_82D298 */
{
    FN_ENTER(0x0082d298);
    /* 0082d298: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d29c: call 0x8c0d50 */ r_esp -= 4; W32(r_esp, 0x82d2a1u); f_008c0d50();
    /* 0082d2a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082d2a2: ret  */ FN_RET(0x0082d298); r_esp += 4; return;
}

void f_0082d2a4(void) /* sub_82D2A4 */
{
    FN_ENTER(0x0082d2a4);
    /* 0082d2a4: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082d2a9: ret  */ FN_RET(0x0082d2a4); r_esp += 4; return;
}

void f_0082d2ac(void) /* sub_82D2AC */
{
    FN_ENTER(0x0082d2ac);
    /* 0082d2ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d2ae: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d2b4: call dword ptr [0x8f8398] */ { u32 t = R32((u32)(0x8f8398u)); r_esp -= 4; W32(r_esp, 0x82d2bau); call_ind(t); }
    /* 0082d2ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d2bd: push dword ptr [0xacbe88] */ { u32 v = R32((u32)(0xacbe88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d2c3: call dword ptr [0x8f839c] */ { u32 t = R32((u32)(0x8f839cu)); r_esp -= 4; W32(r_esp, 0x82d2c9u); call_ind(t); }
    /* 0082d2c9: ret  */ FN_RET(0x0082d2ac); r_esp += 4; return;
}

void f_0082d2cc(void)
{
    FN_ENTER(0x0082d2cc);
    /* 0082d2cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d2ce: call 0x8c0b06 */ r_esp -= 4; W32(r_esp, 0x82d2d3u); f_008c0b06();
    /* 0082d2d3: call 0x82d384 */ r_esp -= 4; W32(r_esp, 0x82d2d8u); f_0082d384();
    /* 0082d2d8: call 0x7a5e84 */ r_esp -= 4; W32(r_esp, 0x82d2ddu); f_007a5e84();
    /* 0082d2dd: call 0x82d20c */ r_esp -= 4; W32(r_esp, 0x82d2e2u); f_0082d20c();
    /* 0082d2e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082d2e4: mov dword ptr [0xacbe8c], eax */ W32((u32)(0xacbe8cu), r_eax);
    /* 0082d2e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d2ea: call 0x85ae8a */ r_esp -= 4; W32(r_esp, 0x82d2efu); f_0085ae8a();
    /* 0082d2ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082d2f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082d2f2: ret 4 */ FN_RET(0x0082d2cc); r_esp += 8; return;
}

void f_0082d2f8(void) /* sub_82D2F8 */
{
    FN_ENTER(0x0082d2f8);
    /* 0082d2f8: mov eax, dword ptr [0xacbe90] */ r_eax = R32((u32)(0xacbe90u));
    /* 0082d2fd: ret  */ FN_RET(0x0082d2f8); r_esp += 4; return;
}

void f_0082d300(void) /* sub_82D300 */
{
    FN_ENTER(0x0082d300);
    /* 0082d300: mov eax, 0xacbe94 */ r_eax = 0xacbe94u;
    /* 0082d305: ret  */ FN_RET(0x0082d300); r_esp += 4; return;
}

void f_0082d308(void) /* sub_82D308 */
{
    FN_ENTER(0x0082d308);
    /* 0082d308: mov eax, 0xacbea4 */ r_eax = 0xacbea4u;
    /* 0082d30d: ret  */ FN_RET(0x0082d308); r_esp += 4; return;
}

void f_0082d310(void)
{
    FN_ENTER(0x0082d310);
    /* 0082d310: push 0x98a3a4 */ { u32 v = 0x98a3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d315: call 0x8c0bf0 */ r_esp -= 4; W32(r_esp, 0x82d31au); f_008c0bf0();
    /* 0082d31a: push 0x82d328 */ { u32 v = 0x82d328u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d31f: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x82d324u); f_0085909d();
    /* 0082d324: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d327: ret  */ FN_RET(0x0082d310); r_esp += 4; return;
}

void f_0082d328(void) /* sub_82D328 */
{
    FN_ENTER(0x0082d328);
    /* 0082d328: call 0x8c0d70 */ r_esp -= 4; W32(r_esp, 0x82d32du); f_008c0d70();
    /* 0082d32d: ret  */ FN_RET(0x0082d328); r_esp += 4; return;
}

void f_0082d330(void) /* sub_82D330 */
{
    FN_ENTER(0x0082d330);
    /* 0082d330: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082d334: mov dword ptr [0xacbee0], eax */ W32((u32)(0xacbee0u), r_eax);
    /* 0082d339: ret  */ FN_RET(0x0082d330); r_esp += 4; return;
}

void f_0082d33c(void) /* sub_82D33C */
{
    FN_ENTER(0x0082d33c);
    /* 0082d33c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082d340: mov dword ptr [0xacbebc], eax */ W32((u32)(0xacbebcu), r_eax);
    /* 0082d345: ret  */ FN_RET(0x0082d33c); r_esp += 4; return;
}

void f_0082d348(void) /* sub_82D348 */
{
    FN_ENTER(0x0082d348);
    /* 0082d348: push 0xacbe40 */ { u32 v = 0xacbe40u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d34d: call dword ptr [0x8f8180] */ { u32 t = R32((u32)(0x8f8180u)); r_esp -= 4; W32(r_esp, 0x82d353u); call_ind(t); }
    /* 0082d353: push 0xacbe48 */ { u32 v = 0xacbe48u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d358: call dword ptr [0x8f8170] */ { u32 t = R32((u32)(0x8f8170u)); r_esp -= 4; W32(r_esp, 0x82d35eu); call_ind(t); }
    /* 0082d35e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d360: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d365: push dword ptr [0xacbe44] */ { u32 v = R32((u32)(0xacbe44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d36b: push dword ptr [0xacbe40] */ { u32 v = R32((u32)(0xacbe40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d371: call 0x85ade0 */ r_esp -= 4; W32(r_esp, 0x82d376u); f_0085ade0();
    /* 0082d376: mov dword ptr [0xacbe5c], edx */ W32((u32)(0xacbe5cu), r_edx);
    /* 0082d37c: mov dword ptr [0xacbe58], eax */ W32((u32)(0xacbe58u), r_eax);
    /* 0082d381: ret  */ FN_RET(0x0082d348); r_esp += 4; return;
}

void f_0082d384(void) /* sub_82D384 */
{
    FN_ENTER(0x0082d384);
    /* 0082d384: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082d389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d38b: jne 0x82d39d */ if (!fZ) goto L_0082d39d;
L_0082d38d:; BB(0x0082d38d);
    /* 0082d38d: mov ecx, 0xa216a0 */ r_ecx = 0xa216a0u;
    /* 0082d392: mov edx, 3 */ r_edx = 0x3u;
    /* 0082d397: call 0x8451c8 */ r_esp -= 4; W32(r_esp, 0x82d39cu); f_008451c8();
    /* 0082d39c: ret  */ FN_RET(0x0082d384); r_esp += 4; return;
L_0082d39d:; BB(0x0082d39d);
    /* 0082d39d: mov ecx, 0xa21690 */ r_ecx = 0xa21690u;
    /* 0082d3a2: mov edx, 2 */ r_edx = 0x2u;
    /* 0082d3a7: call 0x8451c8 */ r_esp -= 4; W32(r_esp, 0x82d3acu); f_008451c8();
    /* 0082d3ac: ret  */ FN_RET(0x0082d384); r_esp += 4; return;
}

void f_0082d3b0(void) /* sub_82D3B0 */
{
    FN_ENTER(0x0082d3b0);
    /* 0082d3b0: mov eax, 0xaf0700 */ r_eax = 0xaf0700u;
    /* 0082d3b5: ret  */ FN_RET(0x0082d3b0); r_esp += 4; return;
}

void f_0082d3b8(void) /* sub_82D3B8 */
{
    FN_ENTER(0x0082d3b8);
    /* 0082d3b8: mov eax, 0xaf04c0 */ r_eax = 0xaf04c0u;
    /* 0082d3bd: ret  */ FN_RET(0x0082d3b8); r_esp += 4; return;
}

void f_0082d3c0(void) /* sub_82D3C0 */
{
    FN_ENTER(0x0082d3c0);
    /* 0082d3c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082d3c3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082d3c7: call 0x82d410 */ r_esp -= 4; W32(r_esp, 0x82d3ccu); f_0082d410();
    /* 0082d3cc: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0082d3d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d3d2: jne 0x82d3df */ if (!fZ) goto L_0082d3df;
L_0082d3d4:; BB(0x0082d3d4);
    /* 0082d3d4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0082d3d8: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0082d3db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d3de: ret  */ FN_RET(0x0082d3c0); r_esp += 4; return;
L_0082d3df:; BB(0x0082d3df);
    /* 0082d3df: call 0x82d444 */ r_esp -= 4; W32(r_esp, 0x82d3e4u); f_0082d444();
    /* 0082d3e4: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0082d3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d3e9: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0082d3ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d3ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d3f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d3f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d3f2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082d3f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d3f7: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d3fd: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x82d403u); call_ind(t); }
    /* 0082d403: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d408u); f_0082d49c();
    /* 0082d408: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d40b: ret  */ FN_RET(0x0082d3c0); r_esp += 4; return;
}

void f_0082d40c(void) /* sub_82D40C */
{
    FN_ENTER(0x0082d40c);
    /* 0082d40c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082d410: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d411: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d412: mov ebx, eax */ r_ebx = r_eax;
    /* 0082d414: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0082d41b: call 0x82d444 */ r_esp -= 4; W32(r_esp, 0x82d420u); f_0082d444();
    /* 0082d420: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0082d423: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d424: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d427: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d429: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d42a: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d430: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x82d436u); call_ind(t); }
    /* 0082d436: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d43bu); f_0082d49c();
    /* 0082d43b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0082d43e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082d43f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082d440: ret  */ FN_RET(0x0082d40c); r_esp += 4; return;
}

void f_0082d410(void) /* sub_82D410 */
{
    FN_ENTER(0x0082d410);
    /* 0082d410: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d411: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d412: mov ebx, eax */ r_ebx = r_eax;
    /* 0082d414: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0082d41b: call 0x82d444 */ r_esp -= 4; W32(r_esp, 0x82d420u); f_0082d444();
    /* 0082d420: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0082d423: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d424: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d427: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d429: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d42a: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d430: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x82d436u); call_ind(t); }
    /* 0082d436: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d43bu); f_0082d49c();
    /* 0082d43b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0082d43e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082d43f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082d440: ret  */ FN_RET(0x0082d410); r_esp += 4; return;
}

void f_0082d444(void) /* sub_82D444 */
{
    FN_ENTER(0x0082d444);
    /* 0082d444: push 0xacbf04 */ { u32 v = 0xacbf04u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d449: push 0x20019 */ { u32 v = 0x20019u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d44e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d450: push 0x98a3c4 */ { u32 v = 0x98a3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d455: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d45a: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x82d460u); call_ind(t); }
    /* 0082d460: push 0xacbf08 */ { u32 v = 0xacbf08u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d465: push 0x20019 */ { u32 v = 0x20019u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d46a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d46c: push 0xa216c0 */ { u32 v = 0xa216c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d471: push dword ptr [0xacbf04] */ { u32 v = R32((u32)(0xacbf04u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d477: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x82d47du); call_ind(t); }
    /* 0082d47d: push 0xacbf00 */ { u32 v = 0xacbf00u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d482: push 0x20019 */ { u32 v = 0x20019u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d487: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d489: push 0xa21700 */ { u32 v = 0xa21700u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d48e: push dword ptr [0xacbf08] */ { u32 v = R32((u32)(0xacbf08u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d494: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x82d49au); call_ind(t); }
    /* 0082d49a: ret  */ FN_RET(0x0082d444); r_esp += 4; return;
}

void f_0082d49c(void) /* sub_82D49C */
{
    FN_ENTER(0x0082d49c);
    /* 0082d49c: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d4a2: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x82d4a8u); call_ind(t); }
    /* 0082d4a8: push dword ptr [0xacbf08] */ { u32 v = R32((u32)(0xacbf08u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d4ae: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x82d4b4u); call_ind(t); }
    /* 0082d4b4: push dword ptr [0xacbf04] */ { u32 v = R32((u32)(0xacbf04u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d4ba: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x82d4c0u); call_ind(t); }
    /* 0082d4c0: ret  */ FN_RET(0x0082d49c); r_esp += 4; return;
}

void f_0082d4c4(void) /* sub_82D4C4 */
{
    FN_ENTER(0x0082d4c4);
    /* 0082d4c4: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082d4ca: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0082d4ce: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d4d3: push dword ptr [esp + 0x218] */ { u32 v = R32((u32)(r_esp+0x218u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d4da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d4db: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x82d4e0u); f_00858618();
    /* 0082d4e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082d4e3: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0082d4e7: call 0x82d410 */ r_esp -= 4; W32(r_esp, 0x82d4ecu); f_0082d410();
    /* 0082d4ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d4ee: je 0x82d54e */ if (fZ) goto L_0082d54e;
L_0082d4f0:; BB(0x0082d4f0);
    /* 0082d4f0: cmp eax, 0x104 */ {  u32 a = r_eax; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082d4f5: jae 0x82d54e */ if (!fC) goto L_0082d54e;
L_0082d4f7:; BB(0x0082d4f7);
    /* 0082d4f7: mov dword ptr [esp + 0x108], eax */ W32((u32)(r_esp+0x108u), r_eax);
    /* 0082d4fe: call 0x82d444 */ r_esp -= 4; W32(r_esp, 0x82d503u); f_0082d444();
    /* 0082d503: lea edx, [esp + 0x10c] */ r_edx = (u32)(r_esp+0x10cu);
    /* 0082d50a: lea eax, [esp + 0x108] */ r_eax = (u32)(r_esp+0x108u);
    /* 0082d511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d512: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d514: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d515: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d516: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d517: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0082d51b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d51c: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d522: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x82d528u); call_ind(t); }
    /* 0082d528: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d52du); f_0082d49c();
    /* 0082d52d: lea eax, [esp + 0x10c] */ r_eax = (u32)(r_esp+0x10cu);
    /* 0082d534: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d53a: mov edx, dword ptr [esp + 0x220] */ r_edx = R32((u32)(r_esp+0x220u));
    /* 0082d541: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d542: call 0x857f98 */ r_esp -= 4; W32(r_esp, 0x82d547u); f_00857f98();
    /* 0082d547: add esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d54d: ret  */ FN_RET(0x0082d4c4); r_esp += 4; return;
L_0082d54e:; BB(0x0082d54e);
    /* 0082d54e: mov edx, dword ptr [esp + 0x218] */ r_edx = R32((u32)(r_esp+0x218u));
    /* 0082d555: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082d557: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0082d55a: add esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d560: ret  */ FN_RET(0x0082d4c4); r_esp += 4; return;
}

void f_0082d564(void) /* sub_82D564 */
{
    FN_ENTER(0x0082d564);
    /* 0082d564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d565: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0082d569: call 0x82d5a4 */ r_esp -= 4; W32(r_esp, 0x82d56eu); f_0082d5a4();
    /* 0082d56e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082d570: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0082d572: mov ecx, edi */ r_ecx = r_edi;
    /* 0082d574: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d576: je 0x82d584 */ if (fZ) goto L_0082d584;
L_0082d578:; BB(0x0082d578);
    /* 0082d578: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082d57b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082d57e: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0082d580: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d582: jne 0x82d578 */ if (!fZ) goto L_0082d578;
L_0082d584:; BB(0x0082d584);
    /* 0082d584: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082d587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d588: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d589: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d58b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d58d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d591: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d597: call dword ptr [0x8f8010] */ { u32 t = R32((u32)(0x8f8010u)); r_esp -= 4; W32(r_esp, 0x82d59du); call_ind(t); }
    /* 0082d59d: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d5a2u); f_0082d49c();
    /* 0082d5a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082d5a3: ret  */ FN_RET(0x0082d564); r_esp += 4; return;
}

void f_0082d5a4(void) /* sub_82D5A4 */
{
    FN_ENTER(0x0082d5a4);
    /* 0082d5a4: push 0xacbf04 */ { u32 v = 0xacbf04u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5a9: push 0x20006 */ { u32 v = 0x20006u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5b0: push 0x98a3c4 */ { u32 v = 0x98a3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5b5: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5ba: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x82d5c0u); call_ind(t); }
    /* 0082d5c0: push 0xacbf08 */ { u32 v = 0xacbf08u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5c5: push 0x20006 */ { u32 v = 0x20006u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5cc: push 0xa216c0 */ { u32 v = 0xa216c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5d1: push dword ptr [0xacbf04] */ { u32 v = R32((u32)(0xacbf04u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d5d7: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x82d5ddu); call_ind(t); }
    /* 0082d5dd: push 0xacbf00 */ { u32 v = 0xacbf00u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5e2: push 0x20006 */ { u32 v = 0x20006u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5e9: push 0xa21700 */ { u32 v = 0xa21700u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5ee: push dword ptr [0xacbf08] */ { u32 v = R32((u32)(0xacbf08u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d5f4: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x82d5fau); call_ind(t); }
    /* 0082d5fa: ret  */ FN_RET(0x0082d5a4); r_esp += 4; return;
}

void f_0082d5fc(void) /* sub_82D5FC */
{
    FN_ENTER(0x0082d5fc);
    /* 0082d5fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d5fd: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0082d601: call 0x82d5a4 */ r_esp -= 4; W32(r_esp, 0x82d606u); f_0082d5a4();
    /* 0082d606: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0082d60a: mov edx, 4 */ r_edx = 0x4u;
    /* 0082d60f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d612: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082d615: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d61b: call dword ptr [0x8f8010] */ { u32 t = R32((u32)(0x8f8010u)); r_esp -= 4; W32(r_esp, 0x82d621u); call_ind(t); }
    /* 0082d621: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d626u); f_0082d49c();
    /* 0082d626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082d627: ret  */ FN_RET(0x0082d5fc); r_esp += 4; return;
}

void f_0082d628(void) /* sub_82D628 */
{
    FN_ENTER(0x0082d628);
    /* 0082d628: call 0x82d5a4 */ r_esp -= 4; W32(r_esp, 0x82d62du); f_0082d5a4();
    /* 0082d62d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d631: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d635: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d637: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d639: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d63d: push dword ptr [0xacbf00] */ { u32 v = R32((u32)(0xacbf00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d643: call dword ptr [0x8f8010] */ { u32 t = R32((u32)(0x8f8010u)); r_esp -= 4; W32(r_esp, 0x82d649u); call_ind(t); }
    /* 0082d649: call 0x82d49c */ r_esp -= 4; W32(r_esp, 0x82d64eu); f_0082d49c();
    /* 0082d64e: ret  */ FN_RET(0x0082d628); r_esp += 4; return;
}

void f_0082d650(void) /* sub_82D650 */
{
    FN_ENTER(0x0082d650);
    /* 0082d650: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d651: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d652: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0082d656: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0082d65a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d65c: je 0x82d671 */ if (fZ) goto L_0082d671;
L_0082d65e:; BB(0x0082d65e);
    /* 0082d65e: mov esi, 0xa216c0 */ r_esi = 0xa216c0u;
L_0082d663:; BB(0x0082d663);
    /* 0082d663: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082d665: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d668: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082d66a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d66d: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d66f: jne 0x82d663 */ if (!fZ) goto L_0082d663;
L_0082d671:; BB(0x0082d671);
    /* 0082d671: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d673: je 0x82d68a */ if (fZ) goto L_0082d68a;
L_0082d675:; BB(0x0082d675);
    /* 0082d675: mov esi, 0xa21700 */ r_esi = 0xa21700u;
    /* 0082d67a: mov edi, ecx */ r_edi = r_ecx;
L_0082d67c:; BB(0x0082d67c);
    /* 0082d67c: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082d67e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d681: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082d683: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d686: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d688: jne 0x82d67c */ if (!fZ) goto L_0082d67c;
L_0082d68a:; BB(0x0082d68a);
    /* 0082d68a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d68e: push 0x98a3a8 */ { u32 v = 0x98a3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d693: push 0xaf0700 */ { u32 v = 0xaf0700u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d698: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x82d69du); f_00858bf5();
    /* 0082d69d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082d6a0: mov esi, 0xaf05e0 */ r_esi = 0xaf05e0u;
    /* 0082d6a5: mov edi, 0x98a3ac */ r_edi = 0x98a3acu;
L_0082d6aa:; BB(0x0082d6aa);
    /* 0082d6aa: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082d6ac: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d6af: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082d6b1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d6b4: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d6b6: jne 0x82d6aa */ if (!fZ) goto L_0082d6aa;
L_0082d6b8:; BB(0x0082d6b8);
    /* 0082d6b8: mov esi, 0xaf03a0 */ r_esi = 0xaf03a0u;
    /* 0082d6bd: mov edi, 0x98a3b4 */ r_edi = 0x98a3b4u;
L_0082d6c2:; BB(0x0082d6c2);
    /* 0082d6c2: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082d6c4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d6c7: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082d6c9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d6cc: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d6ce: jne 0x82d6c2 */ if (!fZ) goto L_0082d6c2;
L_0082d6d0:; BB(0x0082d6d0);
    /* 0082d6d0: mov esi, 0xaf04c0 */ r_esi = 0xaf04c0u;
    /* 0082d6d5: mov edi, 0x98a3bc */ r_edi = 0x98a3bcu;
L_0082d6da:; BB(0x0082d6da);
    /* 0082d6da: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082d6dc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082d6df: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082d6e1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082d6e4: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082d6e6: jne 0x82d6da */ if (!fZ) goto L_0082d6da;
L_0082d6e8:; BB(0x0082d6e8);
    /* 0082d6e8: call 0x83c014 */ r_esp -= 4; W32(r_esp, 0x82d6edu); f_0083c014();
    /* 0082d6ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082d6ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082d6ef: ret  */ FN_RET(0x0082d650); r_esp += 4; return;
}

void f_0082d6f0(void) /* sub_82D6F0 */
{
    FN_ENTER(0x0082d6f0);
    /* 0082d6f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082d6f4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0082d6f9: ret  */ FN_RET(0x0082d6f0); r_esp += 4; return;
}

void f_0082d6fc(void) /* sub_82D6FC */
{
    FN_ENTER(0x0082d6fc);
    /* 0082d6fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082d700: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082d704: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0082d709: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0082d70f: ret  */ FN_RET(0x0082d6fc); r_esp += 4; return;
}

void f_0082d710(void) /* sub_82D710 */
{
    FN_ENTER(0x0082d710);
    /* 0082d710: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082d714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082d716: je 0x82d73a */ if (fZ) goto L_0082d73a;
L_0082d718:; BB(0x0082d718);
    /* 0082d718: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082d71a: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 0082d720: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0082d723: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 0082d729: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082d72c: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 0082d732: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0082d735: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
L_0082d73a:; BB(0x0082d73a);
    /* 0082d73a: ret  */ FN_RET(0x0082d710); r_esp += 4; return;
}

void f_0082d73c(void) /* sub_82D73C */
{
    FN_ENTER(0x0082d73c);
    /* 0082d73c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082d740: mov ecx, dword ptr [0xacbf0c] */ r_ecx = R32((u32)(0xacbf0cu));
    /* 0082d746: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0082d749: mov dword ptr [0xacbf0c], eax */ W32((u32)(0xacbf0cu), r_eax);
    /* 0082d74e: mov dword ptr [ecx*4 + 0xaf0240], edx */ W32((u32)(r_ecx*4+0xaf0240u), r_edx);
    /* 0082d755: ret  */ FN_RET(0x0082d73c); r_esp += 4; return;
}

void f_0082d758(void) /* sub_82D758 */
{
    FN_ENTER(0x0082d758);
    /* 0082d758: mov edx, dword ptr [0xacbf0c] */ r_edx = R32((u32)(0xacbf0cu));
    /* 0082d75e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082d760: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082d762: je 0x82d778 */ if (fZ) goto L_0082d778;
L_0082d764:; BB(0x0082d764);
    /* 0082d764: mov ecx, dword ptr [eax*4 + 0xaf0240] */ r_ecx = R32((u32)(r_eax*4+0xaf0240u));
    /* 0082d76b: cmp ecx, dword ptr [esp + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d76f: je 0x82d779 */ if (fZ) goto L_0082d779;
L_0082d771:; BB(0x0082d771);
    /* 0082d771: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082d774: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082d776: jne 0x82d764 */ if (!fZ) goto L_0082d764;
L_0082d778:; BB(0x0082d778);
    /* 0082d778: ret  */ FN_RET(0x0082d758); r_esp += 4; return;
L_0082d779:; BB(0x0082d779);
    /* 0082d779: mov dword ptr [eax*4 + 0xaf0240], 0 */ W32((u32)(r_eax*4+0xaf0240u), 0x0u);
    /* 0082d784: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d787: je 0x82d771 */ if (fZ) goto L_0082d771;
L_0082d789:; BB(0x0082d789);
    /* 0082d789: mov ecx, dword ptr [edx*4 + 0xaf023c] */ r_ecx = R32((u32)(r_edx*4+0xaf023cu));
    /* 0082d790: mov dword ptr [eax*4 + 0xaf0240], ecx */ W32((u32)(r_eax*4+0xaf0240u), r_ecx);
    /* 0082d797: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d79a: mov dword ptr [0xacbf0c], edx */ W32((u32)(0xacbf0cu), r_edx);
    /* 0082d7a0: ret  */ FN_RET(0x0082d758); r_esp += 4; return;
}

void f_0082d7a4(void) /* sub_82D7A4 */
{
    FN_ENTER(0x0082d7a4);
    /* 0082d7a4: mov dword ptr [0xacbf0c], 0 */ W32((u32)(0xacbf0cu), 0x0u);
    /* 0082d7ae: ret  */ FN_RET(0x0082d7a4); r_esp += 4; return;
}

void f_0082d7b0(void) /* sub_82D7B0 */
{
    FN_ENTER(0x0082d7b0);
    /* 0082d7b0: mov eax, dword ptr [0xaf0384] */ r_eax = R32((u32)(0xaf0384u));
    /* 0082d7b5: cmp eax, dword ptr [0xaf0380] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0380u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082d7bb: jge 0x82d835 */ if ((fS==fO)) goto L_0082d835;
L_0082d7bd:; BB(0x0082d7bd);
    /* 0082d7bd: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082d7c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082d7c4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0082d7c7: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0082d7ca: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082d7cd: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0082d7d0: add dword ptr [0xaf0384], 1 */ { u32 ad = (u32)(0xaf0384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082d7d7: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0082d7da: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0082d7dd: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0082d7e0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0082d7e3: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0082d7e6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0082d7e9: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0082d7ec: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0082d7ef: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0082d7f2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0082d7f5: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0082d7f8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0082d7fb: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0082d7fe: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0082d801: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0082d804: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0082d807: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0082d80a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0082d80d: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 0082d810: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0082d813: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 0082d816: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0082d819: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 0082d81c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0082d81f: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 0082d822: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0082d825: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 0082d828: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082d82d: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d830: mov dword ptr [0xaf0328], eax */ W32((u32)(0xaf0328u), r_eax);
L_0082d835:; BB(0x0082d835);
    /* 0082d835: ret  */ FN_RET(0x0082d7b0); r_esp += 4; return;
}

void f_0082d838(void) /* sub_82D838 */
{
    FN_ENTER(0x0082d838);
    /* 0082d838: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082d83d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082d83f: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082d842: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082d845: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0082d847: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082d849: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 0082d84c: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0082d84f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082d851: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d853: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0082d856: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082d858: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d85a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0082d85d: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0082d860: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0082d863: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0082d866: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d868: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0082d86a: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 0082d86d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082d86f: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082d871: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082d873: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0082d875: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d877: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0082d879: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 0082d87c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082d87e: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 0082d881: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d883: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d885: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 0082d888: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0082d88b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082d88d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d88f: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0082d892: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082d894: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d896: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0082d899: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0082d89b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d89d: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0082d8a0: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0082d8a3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082d8a5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d8a7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0082d8aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082d8ac: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082d8ae: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 0082d8b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082d8b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d8b5: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 0082d8b8: ret  */ FN_RET(0x0082d838); r_esp += 4; return;
}

void f_0082d8bc(void) /* sub_82D8BC */
{
    FN_ENTER(0x0082d8bc);
    /* 0082d8bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082d8bd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082d8c0: mov edi, ecx */ r_edi = r_ecx;
    /* 0082d8c2: mov ecx, edx */ r_ecx = r_edx;
    /* 0082d8c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082d8c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082d8c8: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0082d8cc: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x82d8d1u); f_008451f8();
    /* 0082d8d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d8d3: je 0x82d982 */ if (fZ) goto L_0082d982;
L_0082d8d9:; BB(0x0082d8d9);
    /* 0082d8d9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082d8dd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082d8e0: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0082d8e2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0082d8e4: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0082d8e7: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0082d8ea: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0082d8ed: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 0082d8f0: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 0082d8f3: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0082d8f5: fchs  */ ST(0) = -ST(0);
    /* 0082d8f7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082d8f9: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0082d8fb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082d8fd: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0082d8ff: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082d903: fchs  */ ST(0) = -ST(0);
    /* 0082d905: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082d907: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082d90a: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0082d90c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d90e: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 0082d911: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082d915: fchs  */ ST(0) = -ST(0);
    /* 0082d917: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 0082d91a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082d91d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082d91f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d921: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0082d924: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082d928: fchs  */ ST(0) = -ST(0);
    /* 0082d92a: fmul dword ptr [edi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x2cu));
    /* 0082d92d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082d930: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082d932: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d934: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0082d937: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082d939: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082d93c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d93e: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082d942: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0082d944: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082d946: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0082d949: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d94b: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082d94e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082d950: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082d954: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0082d956: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082d958: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 0082d95b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082d95d: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082d961: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0082d964: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082d967: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d969: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 0082d96c: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0082d96f: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082d972: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082d974: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082d978: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082d97a: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 0082d97d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d980: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082d981: ret  */ FN_RET(0x0082d8bc); r_esp += 4; return;
L_0082d982:; BB(0x0082d982);
    /* 0082d982: mov edi, dword ptr [0xaf0328] */ r_edi = R32((u32)(0xaf0328u));
    /* 0082d988: jmp 0x82d8d9 */ goto L_0082d8d9;
}

void f_0082d990(void) /* sub_82D990 */
{
    FN_ENTER(0x0082d990);
    /* 0082d990: mov eax, dword ptr [0xaf0384] */ r_eax = R32((u32)(0xaf0384u));
    /* 0082d995: cmp eax, dword ptr [0xaf0380] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0380u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082d99b: jge 0x82da19 */ if ((fS==fO)) goto L_0082da19;
L_0082d99d:; BB(0x0082d99d);
    /* 0082d99d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d99f: je 0x82da1a */ if (fZ) goto L_0082da1a;
L_0082d9a1:; BB(0x0082d9a1);
    /* 0082d9a1: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082d9a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0082d9a8: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0082d9ab: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0082d9ae: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0082d9b1: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0082d9b4: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0082d9b7: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0082d9ba: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0082d9bd: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0082d9c0: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0082d9c3: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0082d9c6: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0082d9c9: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0082d9cc: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0082d9cf: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0082d9d2: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0082d9d5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0082d9d8: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0082d9db: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0082d9de: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0082d9e1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0082d9e4: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0082d9e7: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0082d9ea: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 0082d9ed: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0082d9f0: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 0082d9f3: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0082d9f6: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 0082d9f9: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0082d9fc: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 0082d9ff: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0082da02: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
L_0082da05:; BB(0x0082da05);
    /* 0082da05: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082da0a: add dword ptr [0xaf0384], 1 */ { u32 ad = (u32)(0xaf0384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082da11: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082da14: mov dword ptr [0xaf0328], eax */ W32((u32)(0xaf0328u), r_eax);
L_0082da19:; BB(0x0082da19);
    /* 0082da19: ret  */ FN_RET(0x0082d990); r_esp += 4; return;
L_0082da1a:; BB(0x0082da1a);
    /* 0082da1a: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082da1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082da21: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0082da24: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0082da27: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082da2a: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0082da2d: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0082da30: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0082da33: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0082da36: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0082da39: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0082da3c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0082da3f: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0082da42: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0082da45: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0082da48: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0082da4b: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0082da4e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0082da51: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0082da54: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0082da57: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0082da5a: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0082da5d: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0082da60: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0082da63: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 0082da66: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0082da69: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 0082da6c: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0082da6f: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 0082da72: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0082da75: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 0082da78: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0082da7b: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 0082da7e: jmp 0x82da05 */ goto L_0082da05;
}

void f_0082da80(void) /* sub_82DA80 */
{
    FN_ENTER(0x0082da80);
    /* 0082da80: mov edx, dword ptr [0xaf0384] */ r_edx = R32((u32)(0xaf0384u));
    /* 0082da86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082da88: jle 0x82daa0 */ if ((fZ||fS!=fO)) goto L_0082daa0;
L_0082da8a:; BB(0x0082da8a);
    /* 0082da8a: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0082da8f: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082da92: mov dword ptr [0xaf0328], eax */ W32((u32)(0xaf0328u), r_eax);
    /* 0082da97: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082da9a: mov dword ptr [0xaf0384], edx */ W32((u32)(0xaf0384u), r_edx);
L_0082daa0:; BB(0x0082daa0);
    /* 0082daa0: ret  */ FN_RET(0x0082da80); r_esp += 4; return;
}

void f_0082daa4(void) /* sub_82DAA4 */
{
    FN_ENTER(0x0082daa4);
    /* 0082daa4: mov dword ptr [0xacbf10], 1 */ W32((u32)(0xacbf10u), 0x1u);
    /* 0082daae: ret  */ FN_RET(0x0082daa4); r_esp += 4; return;
}

void f_0082dab0(void) /* sub_82DAB0 */
{
    FN_ENTER(0x0082dab0);
    /* 0082dab0: mov eax, dword ptr [0xacbf14] */ r_eax = R32((u32)(0xacbf14u));
    /* 0082dab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082dab7: jne 0x82dacb */ if (!fZ) goto L_0082dacb;
L_0082dab9:; BB(0x0082dab9);
    /* 0082dab9: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dabe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dac0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082dac2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dac5: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dacbu); call_ind(t); }
L_0082dacb:; BB(0x0082dacb);
    /* 0082dacb: ret  */ FN_RET(0x0082dab0); r_esp += 4; return;
}

void f_0082dacc(void) /* sub_82DACC */
{
    FN_ENTER(0x0082dacc);
    /* 0082dacc: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dad1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082dad2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dad4: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dad7: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82daddu); call_ind(t); }
    /* 0082dadd: ret  */ FN_RET(0x0082dacc); r_esp += 4; return;
}

void f_0082dae0(void) /* sub_82DAE0 */
{
    FN_ENTER(0x0082dae0);
    /* 0082dae0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dae4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0082dae8: fld dword ptr [0x98a3f4] */ FPUSH(R_F32((u32)(0x98a3f4u)));
    /* 0082daee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082daf0: fchs  */ ST(0) = -ST(0);
    /* 0082daf2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082daf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082daf6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082daf8: fchs  */ ST(0) = -ST(0);
    /* 0082dafa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082dafb: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082dafd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082daff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082db01: jae 0x82db05 */ if (!fC) goto L_0082db05;
L_0082db03:; BB(0x0082db03);
    /* 0082db03: fst st(1) */ ST(1) = ST(0);
L_0082db05:; BB(0x0082db05);
    /* 0082db05: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082db0b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082db0d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0082db11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082db12: jae 0x82db16 */ if (!fC) goto L_0082db16;
L_0082db14:; BB(0x0082db14);
    /* 0082db14: fst st(1) */ ST(1) = ST(0);
L_0082db16:; BB(0x0082db16);
    /* 0082db16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082db18: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0082db1c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082db20: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0082db22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082db23: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082db25: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82db2bu); call_ind(t); }
    /* 0082db2b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082db2f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082db34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082db36: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0082db38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082db39: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82db3fu); call_ind(t); }
    /* 0082db3f: ret 8 */ FN_RET(0x0082dae0); r_esp += 12; return;
}

void f_0082db44(void) /* sub_82DB44 */
{
    FN_ENTER(0x0082db44);
    /* 0082db44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082db45: mov esi, ecx */ r_esi = r_ecx;
    /* 0082db47: mov eax, dword ptr [0xacbf10] */ r_eax = R32((u32)(0xacbf10u));
    /* 0082db4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082db4e: je 0x82db7e */ if (fZ) goto L_0082db7e;
L_0082db50:; BB(0x0082db50);
    /* 0082db50: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082db55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082db57: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0082db59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082db5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082db5c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82db62u); call_ind(t); }
    /* 0082db62: push dword ptr [esi*4 + 0x98a3e4] */ { u32 v = R32((u32)(r_esi*4+0x98a3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082db69: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082db6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082db70: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082db75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082db76: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82db7cu); call_ind(t); }
    /* 0082db7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082db7d: ret  */ FN_RET(0x0082db44); r_esp += 4; return;
L_0082db7e:; BB(0x0082db7e);
    /* 0082db7e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082db83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082db85: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082db8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082db8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082db8d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82db93u); call_ind(t); }
    /* 0082db93: push dword ptr [esi*4 + 0x98a3e4] */ { u32 v = R32((u32)(r_esi*4+0x98a3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082db9a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082db9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dba1: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dba4: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dbaau); call_ind(t); }
    /* 0082dbaa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082dbab: ret  */ FN_RET(0x0082db44); r_esp += 4; return;
}

void f_0082dbac(void) /* sub_82DBAC */
{
    FN_ENTER(0x0082dbac);
    /* 0082dbac: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dbb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbb3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dbb5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbb8: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dbbeu); call_ind(t); }
    /* 0082dbbe: ret  */ FN_RET(0x0082dbac); r_esp += 4; return;
}

void f_0082dbc0(void) /* sub_82DBC0 */
{
    FN_ENTER(0x0082dbc0);
    /* 0082dbc0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082dbc3: mov dword ptr [0xacbf14], 0 */ W32((u32)(0xacbf14u), 0x0u);
    /* 0082dbcd: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x82dbd2u); f_0082dbac();
    /* 0082dbd2: push 0xffffff */ { u32 v = 0xffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbd7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dbdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dbde: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbe1: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dbe7u); call_ind(t); }
    /* 0082dbe7: mov eax, dword ptr [0xacbf10] */ r_eax = R32((u32)(0xacbf10u));
    /* 0082dbec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dbee: je 0x82dc19 */ if (fZ) goto L_0082dc19;
L_0082dbf0:; BB(0x0082dbf0);
    /* 0082dbf0: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dbf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbf7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbf9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dbfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dbfc: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dc02u); call_ind(t); }
    /* 0082dc02: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dc07: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc09: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dc10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc11: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dc17u); call_ind(t); }
    /* 0082dc17: jmp 0x82dc40 */ goto L_0082dc40;
L_0082dc19:; BB(0x0082dc19);
    /* 0082dc19: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dc1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc20: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc28: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dc2eu); call_ind(t); }
    /* 0082dc2e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dc33: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc35: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dc39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc3a: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dc40u); call_ind(t); }
L_0082dc40:; BB(0x0082dc40);
    /* 0082dc40: fld dword ptr [0x98a3d4] */ FPUSH(R_F32((u32)(0x98a3d4u)));
    /* 0082dc46: fld dword ptr [0x98a3d0] */ FPUSH(R_F32((u32)(0x98a3d0u)));
    /* 0082dc4c: fld dword ptr [0x98a3d8] */ FPUSH(R_F32((u32)(0x98a3d8u)));
    /* 0082dc52: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082dc54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082dc56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082dc57: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0082dc59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082dc5b: jbe 0x82dc5f */ if ((fC||fZ)) goto L_0082dc5f;
L_0082dc5d:; BB(0x0082dc5d);
    /* 0082dc5d: fst st(2) */ ST(2) = ST(0);
L_0082dc5f:; BB(0x0082dc5f);
    /* 0082dc5f: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082dc65: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082dc67: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0082dc6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082dc6b: ja 0x82dc6f */ if ((!fC&&!fZ)) goto L_0082dc6f;
L_0082dc6d:; BB(0x0082dc6d);
    /* 0082dc6d: fst st(1) */ ST(1) = ST(0);
L_0082dc6f:; BB(0x0082dc6f);
    /* 0082dc6f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082dc71: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0082dc75: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082dc78: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc7b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082dc7d: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dc83u); call_ind(t); }
    /* 0082dc83: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082dc87: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082dc8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082dc8e: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082dc91: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82dc97u); call_ind(t); }
    /* 0082dc97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082dc9a: ret  */ FN_RET(0x0082dbc0); r_esp += 4; return;
}

void f_0082dc9c(void) /* sub_82DC9C */
{
    FN_ENTER(0x0082dc9c);
    /* 0082dc9c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dca0: fcom qword ptr [0x98a3f8] */ fx_compare(ST(0), R_F64((u32)(0x98a3f8u))); 
    /* 0082dca6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082dca8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082dca9: jae 0x82dcb4 */ if (!fC) goto L_0082dcb4;
L_0082dcab:; BB(0x0082dcab);
    /* 0082dcab: fchs  */ ST(0) = -ST(0);
    /* 0082dcad: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0082dcaf: fchs  */ ST(0) = -ST(0);
    /* 0082dcb1: ret 4 */ FN_RET(0x0082dc9c); r_esp += 8; return;
L_0082dcb4:; BB(0x0082dcb4);
    /* 0082dcb4: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0082dcb6: ret 4 */ FN_RET(0x0082dc9c); r_esp += 8; return;
}

void f_0082dcbc(void) /* sub_82DCBC */
{
    FN_ENTER(0x0082dcbc);
    /* 0082dcbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082dcbd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082dcc0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0082dcc2: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0082dcc5: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0082dcc8: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082dcce: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dcd0: jne 0x82dd28 */ if (!fZ) goto L_0082dd28;
L_0082dcd2:; BB(0x0082dcd2);
    /* 0082dcd2: mov eax, ecx */ r_eax = r_ecx;
    /* 0082dcd4: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082dcd9: je 0x82ddba */ if (fZ) goto L_0082ddba;
L_0082dcdf:; BB(0x0082dcdf);
    /* 0082dcdf: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dce4: je 0x82dd1a */ if (fZ) goto L_0082dd1a;
L_0082dce6:; BB(0x0082dce6);
    /* 0082dce6: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dceb: jne 0x82dcfb */ if (!fZ) goto L_0082dcfb;
L_0082dced:; BB(0x0082dced);
    /* 0082dced: fld dword ptr [ecx*4 + 0x989560] */ FPUSH(R_F32((u32)(r_ecx*4+0x989560u)));
    /* 0082dcf4: fchs  */ ST(0) = -ST(0);
    /* 0082dcf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082dcf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082dcfa: ret  */ FN_RET(0x0082dcbc); r_esp += 4; return;
L_0082dcfb:; BB(0x0082dcfb);
    /* 0082dcfb: fldz  */ FPUSH(0.0);
    /* 0082dcfd: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dd02: jne 0x82ddb5 */ if (!fZ) goto L_0082ddb5;
L_0082dd08:; BB(0x0082dd08);
    /* 0082dd08: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082dd0a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082dd0c: fld dword ptr [ecx*4 + 0x98f560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98f560u)));
    /* 0082dd13: fchs  */ ST(0) = -ST(0);
    /* 0082dd15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082dd18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082dd19: ret  */ FN_RET(0x0082dcbc); r_esp += 4; return;
L_0082dd1a:; BB(0x0082dd1a);
    /* 0082dd1a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082dd1c: fld dword ptr [ecx*4 + 0x98d560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98d560u)));
    /* 0082dd23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082dd26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082dd27: ret  */ FN_RET(0x0082dcbc); r_esp += 4; return;
L_0082dd28:; BB(0x0082dd28);
    /* 0082dd28: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0082dd2b: mov eax, ecx */ r_eax = r_ecx;
    /* 0082dd2d: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082dd32: je 0x82ddc6 */ if (fZ) goto L_0082ddc6;
L_0082dd38:; BB(0x0082dd38);
    /* 0082dd38: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dd3d: je 0x82dd87 */ if (fZ) goto L_0082dd87;
L_0082dd3f:; BB(0x0082dd3f);
    /* 0082dd3f: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dd44: jne 0x82dd5e */ if (!fZ) goto L_0082dd5e;
L_0082dd46:; BB(0x0082dd46);
    /* 0082dd46: fld dword ptr [ecx*4 + 0x989560] */ FPUSH(R_F32((u32)(r_ecx*4+0x989560u)));
    /* 0082dd4d: fld dword ptr [ecx*4 + 0x989564] */ FPUSH(R_F32((u32)(r_ecx*4+0x989564u)));
    /* 0082dd54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082dd56: fchs  */ ST(0) = -ST(0);
    /* 0082dd58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082dd5a: fchs  */ ST(0) = -ST(0);
    /* 0082dd5c: jmp 0x82dd99 */ goto L_0082dd99;
L_0082dd5e:; BB(0x0082dd5e);
    /* 0082dd5e: fldz  */ FPUSH(0.0);
    /* 0082dd60: fldz  */ FPUSH(0.0);
    /* 0082dd62: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082dd67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082dd69: jne 0x82dd99 */ if (!fZ) goto L_0082dd99;
L_0082dd6b:; BB(0x0082dd6b);
    /* 0082dd6b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0082dd6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082dd6f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082dd71: fld dword ptr [ecx*4 + 0x98f560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98f560u)));
    /* 0082dd78: fchs  */ ST(0) = -ST(0);
    /* 0082dd7a: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082dd7c: fld dword ptr [edx*4 + 0x98f560] */ FPUSH(R_F32((u32)(r_edx*4+0x98f560u)));
    /* 0082dd83: fchs  */ ST(0) = -ST(0);
    /* 0082dd85: jmp 0x82dd99 */ goto L_0082dd99;
L_0082dd87:; BB(0x0082dd87);
    /* 0082dd87: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082dd89: fld dword ptr [ecx*4 + 0x98d560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98d560u)));
    /* 0082dd90: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082dd92: fld dword ptr [edx*4 + 0x98d560] */ FPUSH(R_F32((u32)(r_edx*4+0x98d560u)));
L_0082dd99:; BB(0x0082dd99);
    /* 0082dd99: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0082dd9b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0082dd9e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0082dda1: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0082dda4: fadd dword ptr [ebp*4 + 0x98a400] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98a400u));
    /* 0082ddab: fmul dword ptr [0x98a408] */ ST(0) = ST(0) * R_F32((u32)(0x98a408u));
    /* 0082ddb1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082ddb3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0082ddb5:; BB(0x0082ddb5);
    /* 0082ddb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082ddb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082ddb9: ret  */ FN_RET(0x0082dcbc); r_esp += 4; return;
L_0082ddba:; BB(0x0082ddba);
    /* 0082ddba: fld dword ptr [ecx*4 + 0x98b560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98b560u)));
    /* 0082ddc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082ddc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082ddc5: ret  */ FN_RET(0x0082dcbc); r_esp += 4; return;
L_0082ddc6:; BB(0x0082ddc6);
    /* 0082ddc6: fld dword ptr [ecx*4 + 0x98b560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98b560u)));
    /* 0082ddcd: fld dword ptr [ecx*4 + 0x98b564] */ FPUSH(R_F32((u32)(r_ecx*4+0x98b564u)));
    /* 0082ddd4: jmp 0x82dd99 */ goto L_0082dd99;
}

void f_0082ddd8(void) /* sub_82DDD8 */
{
    FN_ENTER(0x0082ddd8);
    /* 0082ddd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ddd9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082dddc: mov edx, ecx */ r_edx = r_ecx;
    /* 0082ddde: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082dde1: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0082dde4: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ddea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ddec: jne 0x82de42 */ if (!fZ) goto L_0082de42;
L_0082ddee:; BB(0x0082ddee);
    /* 0082ddee: mov eax, ecx */ r_eax = r_ecx;
    /* 0082ddf0: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082ddf5: je 0x82ded0 */ if (fZ) goto L_0082ded0;
L_0082ddfb:; BB(0x0082ddfb);
    /* 0082ddfb: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082de00: je 0x82de34 */ if (fZ) goto L_0082de34;
L_0082de02:; BB(0x0082de02);
    /* 0082de02: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082de07: jne 0x82de19 */ if (!fZ) goto L_0082de19;
L_0082de09:; BB(0x0082de09);
    /* 0082de09: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082de0b: fld dword ptr [ecx*4 + 0x98e560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98e560u)));
    /* 0082de12: fchs  */ ST(0) = -ST(0);
    /* 0082de14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082de17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082de18: ret  */ FN_RET(0x0082ddd8); r_esp += 4; return;
L_0082de19:; BB(0x0082de19);
    /* 0082de19: fldz  */ FPUSH(0.0);
    /* 0082de1b: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082de20: jne 0x82decb */ if (!fZ) goto L_0082decb;
L_0082de26:; BB(0x0082de26);
    /* 0082de26: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082de28: fld dword ptr [ecx*4 + 0x988560] */ FPUSH(R_F32((u32)(r_ecx*4+0x988560u)));
    /* 0082de2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082de32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082de33: ret  */ FN_RET(0x0082ddd8); r_esp += 4; return;
L_0082de34:; BB(0x0082de34);
    /* 0082de34: fld dword ptr [ecx*4 + 0x98a560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98a560u)));
    /* 0082de3b: fchs  */ ST(0) = -ST(0);
    /* 0082de3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082de40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082de41: ret  */ FN_RET(0x0082ddd8); r_esp += 4; return;
L_0082de42:; BB(0x0082de42);
    /* 0082de42: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 0082de45: mov eax, ecx */ r_eax = r_ecx;
    /* 0082de47: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082de4c: je 0x82dede */ if (fZ) goto L_0082dede;
L_0082de52:; BB(0x0082de52);
    /* 0082de52: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082de57: je 0x82de99 */ if (fZ) goto L_0082de99;
L_0082de59:; BB(0x0082de59);
    /* 0082de59: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082de5e: jne 0x82de78 */ if (!fZ) goto L_0082de78;
L_0082de60:; BB(0x0082de60);
    /* 0082de60: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082de62: fld dword ptr [ecx*4 + 0x98e560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98e560u)));
    /* 0082de69: fchs  */ ST(0) = -ST(0);
    /* 0082de6b: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0082de6d: fld dword ptr [ebx*4 + 0x98e560] */ FPUSH(R_F32((u32)(r_ebx*4+0x98e560u)));
    /* 0082de74: fchs  */ ST(0) = -ST(0);
    /* 0082de76: jmp 0x82deaf */ goto L_0082deaf;
L_0082de78:; BB(0x0082de78);
    /* 0082de78: fldz  */ FPUSH(0.0);
    /* 0082de7a: fldz  */ FPUSH(0.0);
    /* 0082de7c: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082de81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082de83: jne 0x82deaf */ if (!fZ) goto L_0082deaf;
L_0082de85:; BB(0x0082de85);
    /* 0082de85: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0082de87: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082de89: fld dword ptr [ecx*4 + 0x988560] */ FPUSH(R_F32((u32)(r_ecx*4+0x988560u)));
    /* 0082de90: fld dword ptr [ecx*4 + 0x988564] */ FPUSH(R_F32((u32)(r_ecx*4+0x988564u)));
    /* 0082de97: jmp 0x82deaf */ goto L_0082deaf;
L_0082de99:; BB(0x0082de99);
    /* 0082de99: fld dword ptr [ecx*4 + 0x98a560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98a560u)));
    /* 0082dea0: fld dword ptr [ecx*4 + 0x98a564] */ FPUSH(R_F32((u32)(r_ecx*4+0x98a564u)));
    /* 0082dea7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082dea9: fchs  */ ST(0) = -ST(0);
    /* 0082deab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082dead: fchs  */ ST(0) = -ST(0);
L_0082deaf:; BB(0x0082deaf);
    /* 0082deaf: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0082deb1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0082deb4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0082deb7: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082deba: fadd dword ptr [edx*4 + 0x98a410] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a410u));
    /* 0082dec1: fmul dword ptr [0x98a418] */ ST(0) = ST(0) * R_F32((u32)(0x98a418u));
    /* 0082dec7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082dec9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0082decb:; BB(0x0082decb);
    /* 0082decb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082dece: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082decf: ret  */ FN_RET(0x0082ddd8); r_esp += 4; return;
L_0082ded0:; BB(0x0082ded0);
    /* 0082ded0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ded2: fld dword ptr [ecx*4 + 0x98c560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98c560u)));
    /* 0082ded9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082dedc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082dedd: ret  */ FN_RET(0x0082ddd8); r_esp += 4; return;
L_0082dede:; BB(0x0082dede);
    /* 0082dede: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082dee0: fld dword ptr [ecx*4 + 0x98c560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98c560u)));
    /* 0082dee7: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0082dee9: fld dword ptr [ebx*4 + 0x98c560] */ FPUSH(R_F32((u32)(r_ebx*4+0x98c560u)));
    /* 0082def0: jmp 0x82deaf */ goto L_0082deaf;
}

void f_0082def4(void) /* sub_82DEF4 */
{
    FN_ENTER(0x0082def4);
    /* 0082def4: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082def6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082def8: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082defb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082defd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082deff: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082df02: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082df04: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082df06: ret  */ FN_RET(0x0082def4); r_esp += 4; return;
}

void f_0082df08(void) /* sub_82DF08 */
{
    FN_ENTER(0x0082df08);
    /* 0082df08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082df09: mov edi, ecx */ r_edi = r_ecx;
    /* 0082df0b: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0082df0d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082df0f: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0082df12: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082df14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082df16: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0082df19: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082df1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082df1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082df1e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0082df21: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x82df26u); f_0082dc9c();
    /* 0082df26: fcom dword ptr [0x98a424] */ fx_compare(ST(0), R_F32((u32)(0x98a424u))); 
    /* 0082df2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082df2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082df2f: jbe 0x82df57 */ if ((fC||fZ)) goto L_0082df57;
L_0082df31:; BB(0x0082df31);
    /* 0082df31: fld dword ptr [0x98a420] */ FPUSH(R_F32((u32)(0x98a420u)));
    /* 0082df37: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0082df39: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0082df3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082df3d: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0082df40: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0082df43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082df45: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082df47: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082df49: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082df4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082df4d: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0082df4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082df51: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 0082df54: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
L_0082df57:; BB(0x0082df57);
    /* 0082df57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082df58: ret  */ FN_RET(0x0082df08); r_esp += 4; return;
}

void f_0082df5c(void) /* sub_82DF5C */
{
    FN_ENTER(0x0082df5c);
    /* 0082df5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082df5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082df5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082df5f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082df62: mov esi, edx */ r_esi = r_edx;
    /* 0082df64: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0082df66: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0082df6a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082df6c: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0082df70: je 0x82e1b6 */ if (fZ) goto L_0082e1b6;
L_0082df76:; BB(0x0082df76);
    /* 0082df76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082df78: je 0x82e032 */ if (fZ) goto L_0082e032;
L_0082df7e:; BB(0x0082df7e);
    /* 0082df7e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082df81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082df82: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0082df86: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x82df8bu); f_008451f8();
    /* 0082df8b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082df8f: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0082df92: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082df95: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0082df98: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0082df9a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082df9c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082df9e: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0082dfa1: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0082dfa4: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0082dfa7: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0082dfaa: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0082dfad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0082dfaf: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0082dfb2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dfb6: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082dfb8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082dfbb: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0082dfbd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082dfbf: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0082dfc2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dfc6: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0082dfc9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082dfcc: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0082dfce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082dfd0: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0082dfd3: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dfd7: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0082dfda: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082dfdd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082dfdf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082dfe1: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0082dfe4: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082dfe7: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dfeb: fchs  */ ST(0) = -ST(0);
    /* 0082dfed: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0082dfef: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0082dff1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082dff3: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0082dff6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082dff8: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082dffb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082dfff: fchs  */ ST(0) = -ST(0);
    /* 0082e001: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082e003: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e005: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0082e008: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e00a: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0082e00d: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e010: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e014: fchs  */ ST(0) = -ST(0);
    /* 0082e016: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082e018: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082e01a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e01c: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0082e01f: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0082e022: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e025: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e029: fchs  */ ST(0) = -ST(0);
    /* 0082e02b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082e02d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e02f: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
L_0082e032:; BB(0x0082e032);
    /* 0082e032: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e034: je 0x82e0ef */ if (fZ) goto L_0082e0ef;
L_0082e03a:; BB(0x0082e03a);
    /* 0082e03a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082e03d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e03e: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0082e042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0082e044: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x82e049u); f_008451f8();
    /* 0082e049: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e04d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e050: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0082e053: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0082e055: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0082e058: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0082e05b: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0082e05e: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0082e061: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 0082e064: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0082e066: fchs  */ ST(0) = -ST(0);
    /* 0082e068: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082e06a: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0082e06c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082e06e: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0082e071: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e075: fchs  */ ST(0) = -ST(0);
    /* 0082e077: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082e079: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e07c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0082e07e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e080: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0082e083: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e087: fchs  */ ST(0) = -ST(0);
    /* 0082e089: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0082e08c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e08f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082e091: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e093: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0082e096: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e09a: fchs  */ ST(0) = -ST(0);
    /* 0082e09c: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0082e09f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e0a2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082e0a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e0a6: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0082e0a9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082e0ab: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e0ae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082e0b0: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082e0b4: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0082e0b6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082e0b8: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0082e0bb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082e0bd: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e0c0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082e0c2: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082e0c6: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0082e0c8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082e0ca: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0082e0cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e0cf: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082e0d3: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0082e0d6: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e0d9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e0db: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0082e0de: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0082e0e1: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e0e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e0e6: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0082e0ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e0ec: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_0082e0ef:; BB(0x0082e0ef);
    /* 0082e0ef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e0f1: je 0x82e1ad */ if (fZ) goto L_0082e1ad;
L_0082e0f7:; BB(0x0082e0f7);
    /* 0082e0f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082e0fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e0fb: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0082e0ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0082e101: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x82e106u); f_008451f8();
    /* 0082e106: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e10a: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 0082e10d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e110: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0082e113: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0082e115: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e117: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082e119: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0082e11c: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0082e11f: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0082e122: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0082e125: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 0082e128: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0082e12a: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0082e12d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e131: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082e133: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e136: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0082e138: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e13a: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0082e13d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e141: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0082e144: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e147: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0082e149: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e14b: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0082e14e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e152: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0082e155: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082e158: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082e15a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e15c: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0082e15f: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e162: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e166: fchs  */ ST(0) = -ST(0);
    /* 0082e168: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0082e16a: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0082e16c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082e16e: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0082e171: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082e173: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e176: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e17a: fchs  */ ST(0) = -ST(0);
    /* 0082e17c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082e17e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e180: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0082e183: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e185: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0082e188: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e18b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e18f: fchs  */ ST(0) = -ST(0);
    /* 0082e191: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082e193: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082e195: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082e197: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0082e19a: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0082e19d: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082e1a0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e1a4: fchs  */ ST(0) = -ST(0);
    /* 0082e1a6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082e1a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082e1aa: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_0082e1ad:; BB(0x0082e1ad);
    /* 0082e1ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082e1b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e1b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082e1b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082e1b3: ret 8 */ FN_RET(0x0082df5c); r_esp += 12; return;
L_0082e1b6:; BB(0x0082e1b6);
    /* 0082e1b6: mov ebp, dword ptr [0xaf0328] */ r_ebp = R32((u32)(0xaf0328u));
    /* 0082e1bc: jmp 0x82df76 */ goto L_0082df76;
}

