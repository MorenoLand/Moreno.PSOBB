#include "protos.h"

void f_008b70fc(void) /* sub_8B70FC */
{
    FN_ENTER(0x008b70fc);
    /* 008b70fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b70fd: mov ebp, esp */ r_ebp = r_esp;
    /* 008b70ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7100: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7101: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b7104: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b7107: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7109: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b710b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b710c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b710eu); call_ind(t); }
    /* 008b710e: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7112: mov dword ptr [esi + 0x198], eax */ W32((u32)(r_esi+0x198u), r_eax);
    /* 008b7118: mov dword ptr [eax], 0x8b6f45 */ W32((u32)(r_eax), 0x8b6f45u);
    /* 008b711e: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
    /* 008b7124: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7127: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b712b: jle 0x8b716d */ if ((fZ||fS!=fO)) goto L_008b716d;
L_008b712d:; BB(0x008b712d);
    /* 008b712d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b712e: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7131: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7132: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b7135: lea ebx, [eax + 0x2c] */ r_ebx = (u32)(r_eax+0x2cu);
L_008b7138:; BB(0x008b7138);
    /* 008b7138: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b713b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7140: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7142: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7143: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b7145u); call_ind(t); }
    /* 008b7145: mov edi, eax */ r_edi = r_eax;
    /* 008b7147: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b714a: add dword ptr [ebp + 8], 0x54 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b714e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7151: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 008b7153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b7155: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b7158: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b715a: or dword ptr [ebx], 0xffffffff */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008b715d: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7160: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7163: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b7166: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7169: jl 0x8b7138 */ if ((fS!=fO)) goto L_008b7138;
L_008b716b:; BB(0x008b716b);
    /* 008b716b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b716c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b716d:; BB(0x008b716d);
    /* 008b716d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b716e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b716f: ret  */ FN_RET(0x008b70fc); r_esp += 4; return;
}

void f_008b7170(void) /* sub_8B7170 */
{
    FN_ENTER(0x008b7170);
    /* 008b7170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7171: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7173: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008b7176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7177: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b717a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b717b: mov esi, dword ptr [ebx + 0x188] */ r_esi = R32((u32)(r_ebx+0x188u));
    /* 008b7181: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008b7184: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7185: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 008b7188: sub eax, dword ptr [edi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b718a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b718c: jbe 0x8b7190 */ if ((fC||fZ)) goto L_008b7190;
L_008b718e:; BB(0x008b718e);
    /* 008b718e: mov eax, ecx */ r_eax = r_ecx;
L_008b7190:; BB(0x008b7190);
    /* 008b7190: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7194: mov ecx, dword ptr [ebx + 0x19c] */ r_ecx = R32((u32)(r_ebx+0x19cu));
    /* 008b719a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b719b: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008b719e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b719f: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71a2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71a5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71a8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b71ac: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b71afu); call_ind(t); }
    /* 008b71af: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71b2: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008b71b4: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b71b7: mov eax, dword ptr [ebx + 0x1a4] */ r_eax = R32((u32)(r_ebx+0x1a4u));
    /* 008b71bd: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b71c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b71c1: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b71c5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b71c8u); call_ind(t); }
    /* 008b71c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b71cb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b71ce: add dword ptr [edi], eax */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b71d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b71d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b71d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b71d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b71d4: ret  */ FN_RET(0x008b7170); r_esp += 4; return;
}

void f_008b71d5(void) /* sub_8B71D5 */
{
    FN_ENTER(0x008b71d5);
    /* 008b71d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b71d6: mov ebp, esp */ r_ebp = r_esp;
    /* 008b71d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b71d9: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b71dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b71dd: mov esi, dword ptr [ebx + 0x188] */ r_esi = R32((u32)(r_ebx+0x188u));
    /* 008b71e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b71e4: lea edi, [esi + 0x18] */ r_edi = (u32)(r_esi+0x18u);
    /* 008b71e7: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b71ea: jne 0x8b7204 */ if (!fZ) goto L_008b7204;
L_008b71ec:; BB(0x008b71ec);
    /* 008b71ec: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008b71ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b71f1: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71f4: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71f7: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b71fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b71fb: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x8b71feu); call_ind(t); }
    /* 008b71fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7201: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_008b7204:; BB(0x008b7204);
    /* 008b7204: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7207: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b7209: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b720a: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b720d: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b7210: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7213: mov eax, dword ptr [ebx + 0x19c] */ r_eax = R32((u32)(r_ebx+0x19cu));
    /* 008b7219: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b721c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b721f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7220: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b7223u); call_ind(t); }
    /* 008b7223: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b7225: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b7228: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b722b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b722d: jbe 0x8b7253 */ if ((fC||fZ)) goto L_008b7253;
L_008b722f:; BB(0x008b722f);
    /* 008b722f: mov edx, dword ptr [ebx + 0x1a4] */ r_edx = R32((u32)(r_ebx+0x1a4u));
    /* 008b7235: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b7237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b7238: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b723b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008b723e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7240: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 008b7243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b7244: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7245: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b7248u); call_ind(t); }
    /* 008b7248: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b724b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b724e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7251: add dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b7253:; BB(0x008b7253);
    /* 008b7253: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b7256: cmp dword ptr [edi], eax */ {  u32 a = R32((u32)(r_edi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7258: jb 0x8b7260 */ if (fC) goto L_008b7260;
L_008b725a:; BB(0x008b725a);
    /* 008b725a: add dword ptr [esi + 0x14], eax */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b725d: and dword ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008b7260:; BB(0x008b7260);
    /* 008b7260: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7261: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7262: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b7264: ret  */ FN_RET(0x008b71d5); r_esp += 4; return;
}

void f_008b7265(void) /* sub_8B7265 */
{
    FN_ENTER(0x008b7265);
    /* 008b7265: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7266: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7268: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7269: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b726c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b726d: mov esi, dword ptr [ebx + 0x188] */ r_esi = R32((u32)(r_ebx+0x188u));
    /* 008b7273: cmp dword ptr [esi + 0x18], 0 */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7277: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7278: jne 0x8b7292 */ if (!fZ) goto L_008b7292;
L_008b727a:; BB(0x008b727a);
    /* 008b727a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008b727d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b727f: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7282: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7285: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7288: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7289: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x8b728cu); call_ind(t); }
    /* 008b728c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b728f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_008b7292:; BB(0x008b7292);
    /* 008b7292: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b7295: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b7297: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 008b729a: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008b729d: sub edi, dword ptr [esi + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b72a0: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b72a2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b72a4: jbe 0x8b72a8 */ if ((fC||fZ)) goto L_008b72a8;
L_008b72a6:; BB(0x008b72a6);
    /* 008b72a6: mov edi, eax */ r_edi = r_eax;
L_008b72a8:; BB(0x008b72a8);
    /* 008b72a8: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 008b72ab: sub eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b72ae: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b72b0: jbe 0x8b72b4 */ if ((fC||fZ)) goto L_008b72b4;
L_008b72b2:; BB(0x008b72b2);
    /* 008b72b2: mov edi, eax */ r_edi = r_eax;
L_008b72b4:; BB(0x008b72b4);
    /* 008b72b4: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b72b7: mov eax, dword ptr [ebx + 0x1a4] */ r_eax = R32((u32)(r_ebx+0x1a4u));
    /* 008b72bd: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b72c0: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008b72c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b72c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b72c5: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 008b72c8: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b72cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b72cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b72cd: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b72d0u); call_ind(t); }
    /* 008b72d0: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b72d3: add dword ptr [eax], edi */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b72d5: add dword ptr [esi + 0x18], edi */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b72d8: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 008b72db: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b72de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b72e1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b72e3: jb 0x8b72ec */ if (fC) goto L_008b72ec;
L_008b72e5:; BB(0x008b72e5);
    /* 008b72e5: add dword ptr [esi + 0x14], eax */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b72e8: and dword ptr [esi + 0x18], 0 */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008b72ec:; BB(0x008b72ec);
    /* 008b72ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b72ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b72ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b72ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b72f0: ret  */ FN_RET(0x008b7265); r_esp += 4; return;
}

void f_008b72f1(void) /* sub_8B72F1 */
{
    FN_ENTER(0x008b72f1);
    /* 008b72f1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b72f5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b72f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b72fa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b72fc: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b72fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b72ff: mov esi, dword ptr [eax + 0x188] */ r_esi = R32((u32)(r_eax+0x188u));
    /* 008b7305: je 0x8b7359 */ if (fZ) goto L_008b7359;
L_008b7307:; BB(0x008b7307);
    /* 008b7307: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7308: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b7309: je 0x8b733c */ if (fZ) goto L_008b733c;
L_008b730b:; BB(0x008b730b);
    /* 008b730b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b730c: je 0x8b731f */ if (fZ) goto L_008b731f;
L_008b730e:; BB(0x008b730e);
    /* 008b730e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b7310: mov dword ptr [ecx + 0x14], 4 */ W32((u32)(r_ecx+0x14u), 0x4u);
    /* 008b7317: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b7319: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b731a: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b731cu); call_ind(t); }
    /* 008b731c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b731d: jmp 0x8b738e */ goto L_008b738e;
L_008b731f:; BB(0x008b731f);
    /* 008b731f: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7322: jne 0x8b7333 */ if (!fZ) goto L_008b7333;
L_008b7324:; BB(0x008b7324);
    /* 008b7324: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b7326: mov dword ptr [ecx + 0x14], 4 */ W32((u32)(r_ecx+0x14u), 0x4u);
    /* 008b732d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b732f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b7330: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b7332u); call_ind(t); }
    /* 008b7332: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b7333:; BB(0x008b7333);
    /* 008b7333: mov dword ptr [esi + 4], 0x8b71d5 */ W32((u32)(r_esi+0x4u), 0x8b71d5u);
    /* 008b733a: jmp 0x8b738e */ goto L_008b738e;
L_008b733c:; BB(0x008b733c);
    /* 008b733c: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b733f: jne 0x8b7350 */ if (!fZ) goto L_008b7350;
L_008b7341:; BB(0x008b7341);
    /* 008b7341: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b7343: mov dword ptr [ecx + 0x14], 4 */ W32((u32)(r_ecx+0x14u), 0x4u);
    /* 008b734a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b734c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b734d: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b734fu); call_ind(t); }
    /* 008b734f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b7350:; BB(0x008b7350);
    /* 008b7350: mov dword ptr [esi + 4], 0x8b7265 */ W32((u32)(r_esi+0x4u), 0x8b7265u);
    /* 008b7357: jmp 0x8b738e */ goto L_008b738e;
L_008b7359:; BB(0x008b7359);
    /* 008b7359: cmp byte ptr [eax + 0x4a], bl */ {  u32 a = R8((u32)(r_eax+0x4au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b735c: je 0x8b7382 */ if (fZ) goto L_008b7382;
L_008b735e:; BB(0x008b735e);
    /* 008b735e: cmp dword ptr [esi + 0xc], ebx */ {  u32 a = R32((u32)(r_esi+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7361: mov dword ptr [esi + 4], 0x8b7170 */ W32((u32)(r_esi+0x4u), 0x8b7170u);
    /* 008b7368: jne 0x8b738e */ if (!fZ) goto L_008b738e;
L_008b736a:; BB(0x008b736a);
    /* 008b736a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008b736d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b736f: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7372: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7373: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b7377: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x8b737au); call_ind(t); }
    /* 008b737a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b737d: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008b7380: jmp 0x8b738e */ goto L_008b738e;
L_008b7382:; BB(0x008b7382);
    /* 008b7382: mov eax, dword ptr [eax + 0x19c] */ r_eax = R32((u32)(r_eax+0x19cu));
    /* 008b7388: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b738b: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008b738e:; BB(0x008b738e);
    /* 008b738e: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 008b7391: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008b7394: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7396: ret  */ FN_RET(0x008b72f1); r_esp += 4; return;
}

void f_008b7397(void) /* sub_8B7397 */
{
    FN_ENTER(0x008b7397);
    /* 008b7397: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7398: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7399: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008b739d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b73a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b73a1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008b73a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b73a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b73a6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b73a8u); call_ind(t); }
    /* 008b73a8: mov edi, eax */ r_edi = r_eax;
    /* 008b73aa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b73ac: mov dword ptr [esi + 0x188], edi */ W32((u32)(r_esi+0x188u), r_edi);
    /* 008b73b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b73b5: mov dword ptr [edi], 0x8b72f1 */ W32((u32)(r_edi), 0x8b72f1u);
    /* 008b73bb: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 008b73be: mov dword ptr [edi + 0xc], ebx */ W32((u32)(r_edi+0xcu), r_ebx);
    /* 008b73c1: cmp byte ptr [esi + 0x4a], bl */ {  u32 a = R8((u32)(r_esi+0x4au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b73c4: je 0x8b7416 */ if (fZ) goto L_008b7416;
L_008b73c6:; BB(0x008b73c6);
    /* 008b73c6: cmp byte ptr [esp + 0x14], bl */ {  u32 a = R8((u32)(r_esp+0x14u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b73ca: mov eax, dword ptr [esi + 0x110] */ r_eax = R32((u32)(r_esi+0x110u));
    /* 008b73d0: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 008b73d3: je 0x8b73fe */ if (fZ) goto L_008b73fe;
L_008b73d5:; BB(0x008b73d5);
    /* 008b73d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b73d6: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 008b73d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b73da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b73db: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b73de: call 0x8a8cf1 */ r_esp -= 4; W32(r_esp, 0x8b73e3u); f_008a8cf1();
    /* 008b73e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b73e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b73e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b73e6: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 008b73e9: imul eax, dword ptr [esi + 0x5c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esi+0x5cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b73ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b73ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b73ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b73f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b73f2: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x8b73f5u); call_ind(t); }
    /* 008b73f5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b73f8: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008b73fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b73fc: jmp 0x8b7416 */ goto L_008b7416;
L_008b73fe:; BB(0x008b73fe);
    /* 008b73fe: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008b7401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b7402: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 008b7405: imul eax, dword ptr [esi + 0x5c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esi+0x5cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b7409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b740a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b740c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b740d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8b7410u); call_ind(t); }
    /* 008b7410: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b7413: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
L_008b7416:; BB(0x008b7416);
    /* 008b7416: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7417: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7418: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7419: ret  */ FN_RET(0x008b7397); r_esp += 4; return;
}

void f_008b741a(void) /* sub_8B741A */
{
    FN_ENTER(0x008b741a);
    /* 008b741a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b741e: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 008b7424: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 008b742a: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 008b742d: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008b7430: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 008b7433: ret  */ FN_RET(0x008b741a); r_esp += 4; return;
}

void f_008b7434(void) /* sub_8B7434 */
{
    FN_ENTER(0x008b7434);
    /* 008b7434: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7435: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7437: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7438: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7439: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b743c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b743d: mov esi, dword ptr [ebx + 0x19c] */ r_esi = R32((u32)(r_ebx+0x19cu));
    /* 008b7443: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 008b7446: cmp eax, dword ptr [ebx + 0x110] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b744c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b744d: jl 0x8b749c */ if ((fS!=fO)) goto L_008b749c;
L_008b744f:; BB(0x008b744f);
    /* 008b744f: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7453: cmp dword ptr [ebx + 0x20], 0 */ {  u32 a = R32((u32)(r_ebx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7457: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 008b745d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b7460: jle 0x8b7498 */ if ((fZ||fS!=fO)) goto L_008b7498;
L_008b7462:; BB(0x008b7462);
    /* 008b7462: lea edi, [esi + 0xc] */ r_edi = (u32)(r_esi+0xcu);
L_008b7465:; BB(0x008b7465);
    /* 008b7465: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 008b7468: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b746b: imul eax, dword ptr [ecx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b746e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b7471: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b7474: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 008b7477: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7478: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008b747b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b747c: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b747f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7480: call dword ptr [edi + 0x28] */ { u32 t = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, 0x8b7483u); call_ind(t); }
    /* 008b7483: add dword ptr [ebp - 4], 0x54 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7487: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b748a: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b748d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b7490: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b7493: cmp eax, dword ptr [ebx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7496: jl 0x8b7465 */ if ((fS!=fO)) goto L_008b7465;
L_008b7498:; BB(0x008b7498);
    /* 008b7498: and dword ptr [esi + 0x5c], 0 */ { u32 ad = (u32)(r_esi+0x5cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008b749c:; BB(0x008b749c);
    /* 008b749c: mov edi, dword ptr [ebx + 0x110] */ r_edi = R32((u32)(r_ebx+0x110u));
    /* 008b74a2: sub edi, dword ptr [esi + 0x5c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b74a5: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 008b74a8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b74aa: jbe 0x8b74ae */ if ((fC||fZ)) goto L_008b74ae;
L_008b74ac:; BB(0x008b74ac);
    /* 008b74ac: mov edi, eax */ r_edi = r_eax;
L_008b74ae:; BB(0x008b74ae);
    /* 008b74ae: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b74b1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b74b3: sub dword ptr [ebp + 0x20], eax */ { u32 ad = (u32)(r_ebp+0x20u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b74b6: cmp edi, dword ptr [ebp + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b74b9: jbe 0x8b74be */ if ((fC||fZ)) goto L_008b74be;
L_008b74bb:; BB(0x008b74bb);
    /* 008b74bb: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
L_008b74be:; BB(0x008b74be);
    /* 008b74be: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b74c1: mov ecx, dword ptr [ebx + 0x1a0] */ r_ecx = R32((u32)(r_ebx+0x1a0u));
    /* 008b74c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b74c8: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 008b74cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b74cc: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b74cf: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 008b74d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b74d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b74d4: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b74d7u); call_ind(t); }
    /* 008b74d7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b74da: add dword ptr [eax], edi */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b74dc: sub dword ptr [esi + 0x60], edi */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b74df: add dword ptr [esi + 0x5c], edi */ { u32 ad = (u32)(r_esi+0x5cu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b74e2: mov esi, dword ptr [esi + 0x5c] */ r_esi = R32((u32)(r_esi+0x5cu));
    /* 008b74e5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b74e8: cmp esi, dword ptr [ebx + 0x110] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b74ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b74ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b74f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b74f1: jl 0x8b74f8 */ if ((fS!=fO)) goto L_008b74f8;
L_008b74f3:; BB(0x008b74f3);
    /* 008b74f3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b74f6: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008b74f8:; BB(0x008b74f8);
    /* 008b74f8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b74f9: ret  */ FN_RET(0x008b7434); r_esp += 4; return;
}

void f_008b74fa(void) /* sub_8B74FA */
{
    FN_ENTER(0x008b74fa);
    /* 008b74fa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008b74fe: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008b7502: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008b7504: ret  */ FN_RET(0x008b74fa); r_esp += 4; return;
}

void f_008b7505(void) /* sub_8B7505 */
{
    FN_ENTER(0x008b7505);
    /* 008b7505: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008b7509: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b750c: ret  */ FN_RET(0x008b7505); r_esp += 4; return;
}

void f_008b750d(void) /* sub_8B750D */
{
    FN_ENTER(0x008b750d);
    /* 008b750d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b750e: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7510: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b7513: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b7516: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7517: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008b7519: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b751c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 008b751f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7520: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b7523: mov eax, dword ptr [esi + 0x19c] */ r_eax = R32((u32)(r_esi+0x19cu));
    /* 008b7529: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b752b: movzx ecx, byte ptr [eax + 0x8c] */ r_ecx = (u32)R8((u32)(r_eax+0x8cu));
    /* 008b7532: movzx eax, byte ptr [eax + 0x96] */ r_eax = (u32)R8((u32)(r_eax+0x96u));
    /* 008b7539: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b753a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b753c: cmp dword ptr [esi + 0x110], edi */ {  u32 a = R32((u32)(r_esi+0x110u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7542: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 008b7545: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 008b7548: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b754b: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b754e: jle 0x8b75e5 */ if ((fZ||fS!=fO)) goto L_008b75e5;
L_008b7554:; BB(0x008b7554);
    /* 008b7554: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b7557: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_008b755a:; BB(0x008b755a);
    /* 008b755a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b755d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b755f: mov eax, dword ptr [ebx + edi*4] */ r_eax = R32((u32)(r_ebx+r_edi*4));
    /* 008b7562: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 008b7565: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7567: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b7569: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b756c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008b756f: jae 0x8b75b3 */ if (!fC) goto L_008b75b3;
L_008b7571:; BB(0x008b7571);
    /* 008b7571: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008b7573: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7574: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7578: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b757b: jle 0x8b75ae */ if ((fZ||fS!=fO)) goto L_008b75ae;
L_008b757d:; BB(0x008b757d);
    /* 008b757d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b7580: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b7583: mov bl, al */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008b7585: mov bh, bl */ r_ebx = (r_ebx & 0xffff00ffu) | ((((u8)r_ebx) & 0xffu) << 8);
    /* 008b7587: mov edx, ecx */ r_edx = r_ecx;
    /* 008b7589: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008b758c: mov eax, ebx */ r_eax = r_ebx;
    /* 008b758e: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b7591: mov ax, bx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 008b7594: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7597: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b7599: mov ecx, edx */ r_ecx = r_edx;
    /* 008b759b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008b759e: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008b75a0: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b75a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b75a6: mov eax, edx */ r_eax = r_edx;
    /* 008b75a8: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b75ab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
L_008b75ae:; BB(0x008b75ae);
    /* 008b75ae: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b75b1: jb 0x8b7571 */ if (fC) goto L_008b7571;
L_008b75b3:; BB(0x008b75b3);
    /* 008b75b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b75b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b75b9: jle 0x8b75cf */ if ((fZ||fS!=fO)) goto L_008b75cf;
L_008b75bb:; BB(0x008b75bb);
    /* 008b75bb: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b75be: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b75bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b75c0: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 008b75c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b75c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b75c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b75c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b75c7: call 0x8a8d09 */ r_esp -= 4; W32(r_esp, 0x8b75ccu); f_008a8d09();
    /* 008b75cc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008b75cf:; BB(0x008b75cf);
    /* 008b75cf: add edi, dword ptr [ebp - 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b75d2: add dword ptr [ebp + 0xc], 4 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b75d6: cmp edi, dword ptr [esi + 0x110] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b75dc: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b75df: jl 0x8b755a */ if ((fS!=fO)) goto L_008b755a;
L_008b75e5:; BB(0x008b75e5);
    /* 008b75e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b75e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b75e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b75e8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b75e9: ret  */ FN_RET(0x008b750d); r_esp += 4; return;
}

void f_008b75ea(void) /* sub_8B75EA */
{
    FN_ENTER(0x008b75ea);
    /* 008b75ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b75eb: mov ebp, esp */ r_ebp = r_esp;
    /* 008b75ed: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b75f0: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b75f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b75f5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b75f8: cmp dword ptr [ebx + 0x110], 0 */ {  u32 a = R32((u32)(r_ebx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b75ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7600: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008b7602: jle 0x8b763d */ if ((fZ||fS!=fO)) goto L_008b763d;
L_008b7604:; BB(0x008b7604);
    /* 008b7604: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b7607: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7609: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008b760c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008b760d:; BB(0x008b760d);
    /* 008b760d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b760f: mov ecx, dword ptr [ebx + 0x5c] */ r_ecx = R32((u32)(r_ebx+0x5cu));
    /* 008b7612: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 008b7615: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7617: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b7619: jae 0x8b762b */ if (!fC) goto L_008b762b;
L_008b761b:; BB(0x008b761b);
    /* 008b761b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008b761d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b761e: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008b7620: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7621: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008b7623: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7624: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b7626: jb 0x8b761b */ if (fC) goto L_008b761b;
L_008b7628:; BB(0x008b7628);
    /* 008b7628: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_008b762b:; BB(0x008b762b);
    /* 008b762b: inc dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b762e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7631: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b7634: cmp eax, dword ptr [ebx + 0x110] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b763a: jl 0x8b760d */ if ((fS!=fO)) goto L_008b760d;
L_008b763c:; BB(0x008b763c);
    /* 008b763c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008b763d:; BB(0x008b763d);
    /* 008b763d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b763e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b763f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b7640: ret  */ FN_RET(0x008b75ea); r_esp += 4; return;
}

void f_008b7641(void) /* sub_8B7641 */
{
    FN_ENTER(0x008b7641);
    /* 008b7641: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7642: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7645: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7649: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 008b764b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b764c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b764d: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b7650: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b7652: cmp dword ptr [edi + 0x110], esi */ {  u32 a = R32((u32)(r_edi+0x110u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7658: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008b765b: jle 0x8b76a6 */ if ((fZ||fS!=fO)) goto L_008b76a6;
L_008b765d:; BB(0x008b765d);
    /* 008b765d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b7660: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
L_008b7663:; BB(0x008b7663);
    /* 008b7663: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7666: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b7668: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 008b766b: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 008b766e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7670: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b7672: jae 0x8b7684 */ if (!fC) goto L_008b7684;
L_008b7674:; BB(0x008b7674);
    /* 008b7674: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008b7676: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7677: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008b7679: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b767a: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008b767c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b767d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b767f: jb 0x8b7674 */ if (fC) goto L_008b7674;
L_008b7681:; BB(0x008b7681);
    /* 008b7681: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
L_008b7684:; BB(0x008b7684);
    /* 008b7684: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7687: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 008b768a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b768c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b768d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b768e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b768f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7690: call 0x8a8d09 */ r_esp -= 4; W32(r_esp, 0x8b7695u); f_008a8d09();
    /* 008b7695: add dword ptr [ebp + 0x14], 4 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7699: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b769c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b769d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b769e: cmp esi, dword ptr [edi + 0x110] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b76a4: jl 0x8b7663 */ if ((fS!=fO)) goto L_008b7663;
L_008b76a6:; BB(0x008b76a6);
    /* 008b76a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b76a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b76a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b76a9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b76aa: ret  */ FN_RET(0x008b7641); r_esp += 4; return;
}

void f_008b76ab(void) /* sub_8B76AB */
{
    FN_ENTER(0x008b76ab);
    /* 008b76ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b76ac: mov ebp, esp */ r_ebp = r_esp;
    /* 008b76ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b76af: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b76b2: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b76b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b76b7: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008b76b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b76bc: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b76c3: jle 0x8b774c */ if ((fZ||fS!=fO)) goto L_008b774c;
L_008b76c9:; BB(0x008b76c9);
    /* 008b76c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b76ca: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008b76cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b76ce: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_008b76d0:; BB(0x008b76d0);
    /* 008b76d0: mov eax, dword ptr [ebx + esi] */ r_eax = R32((u32)(r_ebx+r_esi));
    /* 008b76d3: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 008b76d6: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b76d8: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008b76da: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b76db: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 008b76de: lea edx, [edx + edx*2] */ r_edx = (u32)(r_edx+r_edx*2);
    /* 008b76e1: lea edx, [edx + edi + 2] */ r_edx = (u32)(r_edx+r_edi+0x2u);
    /* 008b76e5: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b76e8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b76e9: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008b76eb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b76ee: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 008b76f1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b76f2: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b76f3: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008b76f4: je 0x8b7720 */ if (fZ) goto L_008b7720;
L_008b76f6:; BB(0x008b76f6);
    /* 008b76f6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_008b76f9:; BB(0x008b76f9);
    /* 008b76f9: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 008b76fc: movzx edx, byte ptr [eax - 1] */ r_edx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 008b7700: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7701: lea edi, [edi + edi*2] */ r_edi = (u32)(r_edi+r_edi*2);
    /* 008b7704: lea edx, [edx + edi + 1] */ r_edx = (u32)(r_edx+r_edi+0x1u);
    /* 008b7708: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b770b: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008b770d: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 008b7710: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7711: lea edx, [edx + edi + 2] */ r_edx = (u32)(r_edx+r_edi+0x2u);
    /* 008b7715: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b7718: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008b771a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b771b: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b771e: jne 0x8b76f9 */ if (!fZ) goto L_008b76f9;
L_008b7720:; BB(0x008b7720);
    /* 008b7720: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 008b7723: movzx eax, byte ptr [eax - 1] */ r_eax = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 008b7727: lea edi, [edx + edx*2] */ r_edi = (u32)(r_edx+r_edx*2);
    /* 008b772a: lea eax, [eax + edi + 1] */ r_eax = (u32)(r_eax+r_edi+0x1u);
    /* 008b772e: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b7731: inc dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7734: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 008b7736: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b7739: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 008b773c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b773f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b7742: cmp ecx, dword ptr [eax + 0x110] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7748: jl 0x8b76d0 */ if ((fS!=fO)) goto L_008b76d0;
L_008b774a:; BB(0x008b774a);
    /* 008b774a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b774b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b774c:; BB(0x008b774c);
    /* 008b774c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b774d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b774e: ret  */ FN_RET(0x008b76ab); r_esp += 4; return;
}

void f_008b774f(void) /* sub_8B774F */
{
    FN_ENTER(0x008b774f);
    /* 008b774f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7750: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7752: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b7755: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7758: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b775a: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b775e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b7761: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b7764: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b776b: jle 0x8b7854 */ if ((fZ||fS!=fO)) goto L_008b7854;
L_008b7771:; BB(0x008b7771);
    /* 008b7771: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b7774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7775: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7776: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7777: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008b777a:; BB(0x008b777a);
    /* 008b777a: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008b777e:; BB(0x008b777e);
    /* 008b777e: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7782: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b7784: jne 0x8b778b */ if (!fZ) goto L_008b778b;
L_008b7786:; BB(0x008b7786);
    /* 008b7786: mov edi, dword ptr [eax - 4] */ r_edi = R32((u32)(r_eax+0xfffffffcu));
    /* 008b7789: jmp 0x8b778e */ goto L_008b778e;
L_008b778b:; BB(0x008b778b);
    /* 008b778b: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
L_008b778e:; BB(0x008b778e);
    /* 008b778e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7791: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b7794: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 008b7797: movzx ecx, byte ptr [edx] */ r_ecx = (u32)R8((u32)(r_edx));
    /* 008b779a: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008b779d: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b77a0: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008b77a3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b77a5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b77a6: movzx ebx, byte ptr [edi] */ r_ebx = (u32)R8((u32)(r_edi));
    /* 008b77a9: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b77aa: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008b77ad: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008b77b0: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b77b2: lea ebx, [ecx*4 + 8] */ r_ebx = (u32)(r_ecx*4+0x8u);
    /* 008b77b9: sar ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008b77bc: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008b77be: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b77bf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b77c0: lea ebx, [eax + ecx*2] */ r_ebx = (u32)(r_eax+r_ecx*2);
    /* 008b77c3: lea ebx, [ecx + ebx + 7] */ r_ebx = (u32)(r_ecx+r_ebx+0x7u);
    /* 008b77c7: sar ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008b77ca: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b77cb: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008b77cd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b77d0: mov ebx, dword ptr [ebx + 0x28] */ r_ebx = R32((u32)(r_ebx+0x28u));
    /* 008b77d3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b77d4: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b77d5: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008b77d6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b77d9: je 0x8b7810 */ if (fZ) goto L_008b7810;
L_008b77db:; BB(0x008b77db);
    /* 008b77db: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
L_008b77de:; BB(0x008b77de);
    /* 008b77de: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008b77e1: movzx ebx, byte ptr [edi] */ r_ebx = (u32)R8((u32)(r_edi));
    /* 008b77e4: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008b77e7: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b77e9: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b77ec: lea ebx, [ebx + ebx*2] */ r_ebx = (u32)(r_ebx+r_ebx*2);
    /* 008b77ef: lea ecx, [ebx + ecx + 8] */ r_ecx = (u32)(r_ebx+r_ecx+0x8u);
    /* 008b77f3: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b77f6: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 008b77f8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b77f9: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b77fa: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b77fb: lea ecx, [ebx + eax + 7] */ r_ecx = (u32)(r_ebx+r_eax+0x7u);
    /* 008b77ff: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b7802: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 008b7804: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b7807: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b7808: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b780b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b780e: jne 0x8b77de */ if (!fZ) goto L_008b77de;
L_008b7810:; BB(0x008b7810);
    /* 008b7810: lea ecx, [ecx + eax*2] */ r_ecx = (u32)(r_ecx+r_eax*2);
    /* 008b7813: lea ecx, [eax + ecx + 8] */ r_ecx = (u32)(r_eax+r_ecx+0x8u);
    /* 008b7817: lea eax, [eax*4 + 7] */ r_eax = (u32)(r_eax*4+0x7u);
    /* 008b781e: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b7821: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b7824: inc dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7827: cmp dword ptr [ebp + 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b782b: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 008b782d: mov byte ptr [esi + 1], al */ W8((u32)(r_esi+0x1u), (u8)r_eax);
    /* 008b7830: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7833: jl 0x8b777e */ if ((fS!=fO)) goto L_008b777e;
L_008b7839:; BB(0x008b7839);
    /* 008b7839: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b783c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b783f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7842: cmp edx, dword ptr [ecx + 0x110] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7848: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b784b: jl 0x8b777a */ if ((fS!=fO)) goto L_008b777a;
L_008b7851:; BB(0x008b7851);
    /* 008b7851: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7852: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7853: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b7854:; BB(0x008b7854);
    /* 008b7854: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b7855: ret  */ FN_RET(0x008b774f); r_esp += 4; return;
}

void f_008b7856(void) /* sub_8B7856 */
{
    FN_ENTER(0x008b7856);
    /* 008b7856: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7857: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7859: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b785c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b785d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b785e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b7861: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b7864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7865: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b786a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b786c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b786d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b786fu); call_ind(t); }
    /* 008b786f: mov ebx, eax */ r_ebx = r_eax;
    /* 008b7871: mov dword ptr [esi + 0x19c], ebx */ W32((u32)(r_esi+0x19cu), r_ebx);
    /* 008b7877: and byte ptr [ebx + 8], 0 */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b787b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b787e: mov dword ptr [ebx], 0x8b741a */ W32((u32)(r_ebx), 0x8b741au);
    /* 008b7884: mov dword ptr [ebx + 4], 0x8b7434 */ W32((u32)(r_ebx+0x4u), 0x8b7434u);
    /* 008b788b: cmp byte ptr [esi + 0x108], 0 */ {  u32 a = R8((u32)(r_esi+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b7892: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b7895: je 0x8b78a6 */ if (fZ) goto L_008b78a6;
L_008b7897:; BB(0x008b7897);
    /* 008b7897: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b7899: mov dword ptr [eax + 0x14], 0x17 */ W32((u32)(r_eax+0x14u), 0x17u);
    /* 008b78a0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b78a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b78a3: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b78a5u); call_ind(t); }
    /* 008b78a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b78a6:; BB(0x008b78a6);
    /* 008b78a6: cmp byte ptr [esi + 0x48], 0 */ {  u32 a = R8((u32)(r_esi+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b78aa: je 0x8b78bb */ if (fZ) goto L_008b78bb;
L_008b78ac:; BB(0x008b78ac);
    /* 008b78ac: cmp dword ptr [esi + 0x114], 1 */ {  u32 a = R32((u32)(r_esi+0x114u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b78b3: jle 0x8b78bb */ if ((fZ||fS!=fO)) goto L_008b78bb;
L_008b78b5:; BB(0x008b78b5);
    /* 008b78b5: mov byte ptr [ebp + 0xb], 1 */ W8((u32)(r_ebp+0xbu), 0x1u);
    /* 008b78b9: jmp 0x8b78bf */ goto L_008b78bf;
L_008b78bb:; BB(0x008b78bb);
    /* 008b78bb: and byte ptr [ebp + 0xb], 0 */ { u32 ad = (u32)(r_ebp+0xbu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
L_008b78bf:; BB(0x008b78bf);
    /* 008b78bf: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b78c3: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b78c7: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 008b78cd: jle 0x8b7a12 */ if ((fZ||fS!=fO)) goto L_008b7a12;
L_008b78d3:; BB(0x008b78d3);
    /* 008b78d3: lea ecx, [ebx + 0x34] */ r_ecx = (u32)(r_ebx+0x34u);
    /* 008b78d6: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b78d9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_008b78dc:; BB(0x008b78dc);
    /* 008b78dc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008b78de: mov eax, dword ptr [edi - 0x1c] */ r_eax = R32((u32)(r_edi+0xffffffe4u));
    /* 008b78e1: mov ebx, dword ptr [esi + 0x114] */ r_ebx = R32((u32)(r_esi+0x114u));
    /* 008b78e7: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b78ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b78eb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b78eb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b78eb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b78ed: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b78f0: mov eax, dword ptr [edi - 0x18] */ r_eax = R32((u32)(r_edi+0xffffffe8u));
    /* 008b78f3: imul eax, dword ptr [edi] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edi)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b78f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b78f7: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b78f7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b78f7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b78f9: mov ebx, dword ptr [esi + 0x110] */ r_ebx = R32((u32)(r_esi+0x110u));
    /* 008b78ff: mov edx, dword ptr [esi + 0x10c] */ r_edx = R32((u32)(r_esi+0x10cu));
    /* 008b7905: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008b7908: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 008b790b: cmp byte ptr [edi + 0xc], 0 */ {  u32 a = R8((u32)(r_edi+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b790f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b7912: jne 0x8b791f */ if (!fZ) goto L_008b791f;
L_008b7914:; BB(0x008b7914);
    /* 008b7914: mov dword ptr [ecx], 0x8b7505 */ W32((u32)(r_ecx), 0x8b7505u);
    /* 008b791a: jmp 0x8b79fa */ goto L_008b79fa;
L_008b791f:; BB(0x008b791f);
    /* 008b791f: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7922: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7924: jne 0x8b7936 */ if (!fZ) goto L_008b7936;
L_008b7926:; BB(0x008b7926);
    /* 008b7926: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7929: jne 0x8b7936 */ if (!fZ) goto L_008b7936;
L_008b792b:; BB(0x008b792b);
    /* 008b792b: mov dword ptr [ecx], 0x8b74fa */ W32((u32)(r_ecx), 0x8b74fau);
    /* 008b7931: jmp 0x8b79fa */ goto L_008b79fa;
L_008b7936:; BB(0x008b7936);
    /* 008b7936: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b7938: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b793a: jne 0x8b798b */ if (!fZ) goto L_008b798b;
L_008b793c:; BB(0x008b793c);
    /* 008b793c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b793f: jne 0x8b795d */ if (!fZ) goto L_008b795d;
L_008b7941:; BB(0x008b7941);
    /* 008b7941: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b7945: je 0x8b7955 */ if (fZ) goto L_008b7955;
L_008b7947:; BB(0x008b7947);
    /* 008b7947: cmp dword ptr [edi + 4], 2 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b794b: jbe 0x8b7955 */ if ((fC||fZ)) goto L_008b7955;
L_008b794d:; BB(0x008b794d);
    /* 008b794d: mov dword ptr [ecx], 0x8b76ab */ W32((u32)(r_ecx), 0x8b76abu);
    /* 008b7953: jmp 0x8b79d1 */ goto L_008b79d1;
L_008b7955:; BB(0x008b7955);
    /* 008b7955: mov dword ptr [ecx], 0x8b75ea */ W32((u32)(r_ecx), 0x8b75eau);
    /* 008b795b: jmp 0x8b79d1 */ goto L_008b79d1;
L_008b795d:; BB(0x008b795d);
    /* 008b795d: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b795f: jne 0x8b798b */ if (!fZ) goto L_008b798b;
L_008b7961:; BB(0x008b7961);
    /* 008b7961: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7963: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7966: jne 0x8b798b */ if (!fZ) goto L_008b798b;
L_008b7968:; BB(0x008b7968);
    /* 008b7968: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b796c: je 0x8b7983 */ if (fZ) goto L_008b7983;
L_008b796e:; BB(0x008b796e);
    /* 008b796e: cmp dword ptr [edi + 4], 2 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b7972: jbe 0x8b7983 */ if ((fC||fZ)) goto L_008b7983;
L_008b7974:; BB(0x008b7974);
    /* 008b7974: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b7977: mov dword ptr [ecx], 0x8b774f */ W32((u32)(r_ecx), 0x8b774fu);
    /* 008b797d: mov byte ptr [eax + 8], 1 */ W8((u32)(r_eax+0x8u), 0x1u);
    /* 008b7981: jmp 0x8b79d1 */ goto L_008b79d1;
L_008b7983:; BB(0x008b7983);
    /* 008b7983: mov dword ptr [ecx], 0x8b7641 */ W32((u32)(r_ecx), 0x8b7641u);
    /* 008b7989: jmp 0x8b79d1 */ goto L_008b79d1;
L_008b798b:; BB(0x008b798b);
    /* 008b798b: mov eax, edx */ r_eax = r_edx;
    /* 008b798d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b798e: idiv dword ptr [ebp - 0xc] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff4u)); if (!d) UNSUP(0x008b798e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b798e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b7991: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7993: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b7996: jne 0x8b79c2 */ if (!fZ) goto L_008b79c2;
L_008b7998:; BB(0x008b7998);
    /* 008b7998: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b799b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b799c: idiv dword ptr [ebp - 0x18] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffe8u)); if (!d) UNSUP(0x008b799c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b799c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b799f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b79a1: jne 0x8b79c2 */ if (!fZ) goto L_008b79c2;
L_008b79a3:; BB(0x008b79a3);
    /* 008b79a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b79a6: mov bl, byte ptr [ebp - 0xc] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 008b79a9: mov dword ptr [ecx], 0x8b750d */ W32((u32)(r_ecx), 0x8b750du);
    /* 008b79af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b79b2: mov byte ptr [ecx + edx + 0x8c], bl */ W8((u32)(r_ecx+r_edx+0x8cu), (u8)r_ebx);
    /* 008b79b9: mov byte ptr [ecx + edx + 0x96], al */ W8((u32)(r_ecx+r_edx+0x96u), (u8)r_eax);
    /* 008b79c0: jmp 0x8b79d1 */ goto L_008b79d1;
L_008b79c2:; BB(0x008b79c2);
    /* 008b79c2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b79c4: mov dword ptr [eax + 0x14], 0x25 */ W32((u32)(r_eax+0x14u), 0x25u);
    /* 008b79cb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b79cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b79ce: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b79d0u); call_ind(t); }
    /* 008b79d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b79d1:; BB(0x008b79d1);
    /* 008b79d1: push dword ptr [esi + 0x110] */ { u32 v = R32((u32)(r_esi+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b79d7: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008b79da: push dword ptr [esi + 0x10c] */ { u32 v = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b79e0: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b79e3: call 0x8a8cf1 */ r_esp -= 4; W32(r_esp, 0x8b79e8u); f_008a8cf1();
    /* 008b79e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b79e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b79ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b79eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b79ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b79ee: call dword ptr [ebx + 8] */ { u32 t = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, 0x8b79f1u); call_ind(t); }
    /* 008b79f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b79f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b79f7: mov dword ptr [ecx - 0x28], eax */ W32((u32)(r_ecx+0xffffffd8u), r_eax);
L_008b79fa:; BB(0x008b79fa);
    /* 008b79fa: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b79fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b7a00: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7a03: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b7a06: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7a09: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008b7a0c: jl 0x8b78dc */ if ((fS!=fO)) goto L_008b78dc;
L_008b7a12:; BB(0x008b7a12);
    /* 008b7a12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7a13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7a14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7a15: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b7a16: ret  */ FN_RET(0x008b7856); r_esp += 4; return;
}

void f_008b7a17(void) /* sub_8B7A17 */
{
    FN_ENTER(0x008b7a17);
    /* 008b7a17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a18: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7a1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a1f: mov ebx, 0x400 */ r_ebx = 0x400u;
    /* 008b7a24: mov edi, eax */ r_edi = r_eax;
    /* 008b7a26: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b7a29: mov esi, dword ptr [edi + 0x1a0] */ r_esi = R32((u32)(r_edi+0x1a0u));
    /* 008b7a2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a33: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b7a35u); call_ind(t); }
    /* 008b7a35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a36: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008b7a39: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b7a3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a3f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b7a41u); call_ind(t); }
    /* 008b7a41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a42: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008b7a45: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b7a48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a4a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a4b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b7a4du); call_ind(t); }
    /* 008b7a4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a4e: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008b7a51: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b7a54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7a57: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b7a59u); call_ind(t); }
    /* 008b7a59: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7a5c: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 008b7a5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b7a61: mov edx, 0x5b6900 */ r_edx = 0x5b6900u;
    /* 008b7a66: mov dword ptr [ebp - 8], 0xff1daf00 */ W32((u32)(r_ebp+0xfffffff8u), 0xff1daf00u);
    /* 008b7a6d: mov dword ptr [ebp - 4], 0xff4d0b80 */ W32((u32)(r_ebp+0xfffffffcu), 0xff4d0b80u);
    /* 008b7a74: mov ecx, 0x2c8d00 */ r_ecx = 0x2c8d00u;
L_008b7a79:; BB(0x008b7a79);
    /* 008b7a79: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 008b7a7c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7a7f: add dword ptr [ebp - 4], 0x166e9 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x166e9u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7a86: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b7a89: mov dword ptr [eax + ebx], edi */ W32((u32)(r_eax+r_ebx), r_edi);
    /* 008b7a8c: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b7a8f: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 008b7a92: add dword ptr [ebp - 8], 0x1c5a2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x1c5a2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7a99: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b7a9c: mov dword ptr [eax + ebx], edi */ W32((u32)(r_eax+r_ebx), r_edi);
    /* 008b7a9f: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 008b7aa2: mov dword ptr [eax + edi], edx */ W32((u32)(r_eax+r_edi), r_edx);
    /* 008b7aa5: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 008b7aa8: mov dword ptr [eax + edi], ecx */ W32((u32)(r_eax+r_edi), r_ecx);
    /* 008b7aab: sub ecx, 0x581a */ {  u32 a = r_ecx; u32 b = 0x581au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7ab1: sub edx, 0xb6d2 */ {  u32 a = r_edx; u32 b = 0xb6d2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7ab7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7aba: cmp ecx, 0xffd4cb1a */ {  u32 a = r_ecx; u32 b = 0xffd4cb1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b7ac0: jge 0x8b7a79 */ if ((fS==fO)) goto L_008b7a79;
L_008b7ac2:; BB(0x008b7ac2);
    /* 008b7ac2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7ac3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7ac4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7ac5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b7ac6: ret  */ FN_RET(0x008b7a17); r_esp += 4; return;
}

void f_008b7ac7(void) /* sub_8B7AC7 */
{
    FN_ENTER(0x008b7ac7);
    /* 008b7ac7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7ac8: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7aca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7acb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7acc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b7acf: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 008b7ad2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7ad3: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 008b7ad6: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008b7ad9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7ada: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b7add: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008b7ae0: js 0x8b7b2f */ if (fS) goto L_008b7b2f;
L_008b7ae2:; BB(0x008b7ae2);
    /* 008b7ae2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b7ae5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7ae6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7ae7: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008b7aea: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b7aed: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7aee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b7af1:; BB(0x008b7af1);
    /* 008b7af1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b7af3: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7af6: jle 0x8b7b22 */ if ((fZ||fS!=fO)) goto L_008b7b22;
L_008b7af8:; BB(0x008b7af8);
    /* 008b7af8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b7afb: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 008b7afe: mov ecx, dword ptr [edi + eax] */ r_ecx = R32((u32)(r_edi+r_eax));
    /* 008b7b01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008b7b03: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7b05: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b7b07: jbe 0x8b7b1c */ if ((fC||fZ)) goto L_008b7b1c;
L_008b7b09:; BB(0x008b7b09);
    /* 008b7b09: mov dword ptr [ebp + 0x18], ebx */ W32((u32)(r_ebp+0x18u), r_ebx);
L_008b7b0c:; BB(0x008b7b0c);
    /* 008b7b0c: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008b7b0e: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 008b7b10: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7b13: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7b14: dec dword ptr [ebp + 0x18] */ { u32 ad = (u32)(r_ebp+0x18u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b7b17: jne 0x8b7b0c */ if (!fZ) goto L_008b7b0c;
L_008b7b19:; BB(0x008b7b19);
    /* 008b7b19: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_008b7b1c:; BB(0x008b7b1c);
    /* 008b7b1c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b7b1d: cmp esi, dword ptr [ebp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7b20: jl 0x8b7af8 */ if ((fS!=fO)) goto L_008b7af8;
L_008b7b22:; BB(0x008b7b22);
    /* 008b7b22: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b7b25: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 008b7b28: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7b2b: jne 0x8b7af1 */ if (!fZ) goto L_008b7af1;
L_008b7b2d:; BB(0x008b7b2d);
    /* 008b7b2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7b2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b7b2f:; BB(0x008b7b2f);
    /* 008b7b2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7b30: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b7b31: ret  */ FN_RET(0x008b7ac7); r_esp += 4; return;
}

void f_008b7b32(void) /* sub_8B7B32 */
{
    FN_ENTER(0x008b7b32);
    /* 008b7b32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7b33: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7b35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b7b38: push dword ptr [eax + 0x5c] */ { u32 v = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7b3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b7b3e: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7b41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7b43: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7b46: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7b49: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7b4b: call 0x8a8d09 */ r_esp -= 4; W32(r_esp, 0x8b7b50u); f_008a8d09();
    /* 008b7b50: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b7b53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b7b54: ret  */ FN_RET(0x008b7b32); r_esp += 4; return;
}

void f_008b7b55(void) /* sub_8B7B55 */
{
    FN_ENTER(0x008b7b55);
    /* 008b7b55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7b56: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7b58: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fC = (a < b); }
    /* 008b7b5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b7b5e: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 008b7b64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7b65: mov edi, dword ptr [ecx + 0x5c] */ r_edi = R32((u32)(r_ecx+0x5cu));
    /* 008b7b68: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 008b7b6e: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b7b71: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008b7b74: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b7b77: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008b7b7a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008b7b7d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 008b7b80: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008b7b83: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b7b86: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008b7b89: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7b8a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008b7b8d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b7b90: js 0x8b7c84 */ if (fS) goto L_008b7c84;
L_008b7b96:; BB(0x008b7b96);
    /* 008b7b96: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b7b99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7b9a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b7b9d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7b9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7b9f: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b7ba2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008b7ba5:; BB(0x008b7ba5);
    /* 008b7ba5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b7ba7: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 008b7baa: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 008b7bad: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b7bb0: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 008b7bb3: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008b7bb6: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 008b7bb9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b7bbc: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008b7bbf: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 008b7bc2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b7bc5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7bc8: add dword ptr [ebp + 0x14], 4 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7bcc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b7bce: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7bd1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b7bd3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008b7bd6: jbe 0x8b7c79 */ if ((fC||fZ)) goto L_008b7c79;
L_008b7bdc:; BB(0x008b7bdc);
    /* 008b7bdc: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7bdf: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 008b7be2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7be5: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b7be7: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b7be9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7beb: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b7bee: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008b7bf1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b7bf4: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b7bf7: jmp 0x8b7bff */ goto L_008b7bff;
L_008b7bf9:; BB(0x008b7bf9);
    /* 008b7bf9: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b7bfc: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_008b7bff:; BB(0x008b7bff);
    /* 008b7bff: movzx edx, byte ptr [ebx + ecx] */ r_edx = (u32)R8((u32)(r_ebx+r_ecx));
    /* 008b7c03: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b7c06: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 008b7c09: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 008b7c0c: movzx edx, byte ptr [esi + ecx] */ r_edx = (u32)R8((u32)(r_esi+r_ecx));
    /* 008b7c10: mov esi, edx */ r_esi = r_edx;
    /* 008b7c12: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b7c15: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b7c18: sub edx, dword ptr [esi + ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7c1b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b7c1e: sub edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7c21: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b7c24: mov dl, byte ptr [edx + 0xff] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0xffu))) & 0xffu);
    /* 008b7c2a: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008b7c2c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b7c2f: mov edx, dword ptr [edi + edx] */ r_edx = R32((u32)(r_edi+r_edx));
    /* 008b7c32: add edx, dword ptr [esi + ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7c35: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b7c38: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b7c3b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b7c3d: sub esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b7c40: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7c43: mov dl, byte ptr [esi + 0xff] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0xffu))) & 0xffu);
    /* 008b7c49: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b7c4c: mov byte ptr [eax - 3], dl */ W8((u32)(r_eax+0xfffffffdu), (u8)r_edx);
    /* 008b7c4f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b7c52: sub edx, dword ptr [edi + esi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+r_esi)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7c55: sub edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 008b7c58: mov dl, byte ptr [edx + 0xff] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0xffu))) & 0xffu);
    /* 008b7c5e: mov byte ptr [eax - 2], dl */ W8((u32)(r_eax+0xfffffffeu), (u8)r_edx);
    /* 008b7c61: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7c64: mov dl, byte ptr [edx + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx))) & 0xffu);
    /* 008b7c67: mov byte ptr [eax - 1], dl */ W8((u32)(r_eax+0xffffffffu), (u8)r_edx);
    /* 008b7c6a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7c6b: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b7c6e: jne 0x8b7bf9 */ if (!fZ) goto L_008b7bf9;
L_008b7c70:; BB(0x008b7c70);
    /* 008b7c70: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b7c73: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b7c76: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
L_008b7c79:; BB(0x008b7c79);
    /* 008b7c79: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7c7c: jne 0x8b7ba5 */ if (!fZ) goto L_008b7ba5;
L_008b7c82:; BB(0x008b7c82);
    /* 008b7c82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7c83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b7c84:; BB(0x008b7c84);
    /* 008b7c84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7c85: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b7c86: ret  */ FN_RET(0x008b7b55); r_esp += 4; return;
}

void f_008b7c87(void) /* sub_8B7C87 */
{
    FN_ENTER(0x008b7c87);
    /* 008b7c87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7c88: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7c8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7c8b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7c8c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b7c8f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b7c92: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b7c95: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008b7c98: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008b7c9b: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
L_008b7c9e:; BB(0x008b7c9e);
    /* 008b7c9e: movd mm0, dword ptr [eax] */ { u64 v = R32((u32)(r_eax)); fpr[0] = (long double)(i64)v; }
    /* 008b7ca1: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b7ca4: movd mm2, dword ptr [ebx] */ { u64 v = R32((u32)(r_ebx)); fpr[2] = (long double)(i64)v; }
    /* 008b7ca7: punpcklbw mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b7caa: movd mm3, dword ptr [ecx] */ { u64 v = R32((u32)(r_ecx)); fpr[3] = (long double)(i64)v; }
    /* 008b7cad: punpcklbw mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7cb0: psubsw mm2, qword ptr [0xa36320] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0xa36320u)); MM64 r; r.w[0] = (u16)(i16)rt_sat16((i32)(i16)a.w[0] - (i32)(i16)b.w[0]); r.w[1] = (u16)(i16)rt_sat16((i32)(i16)a.w[1] - (i32)(i16)b.w[1]); r.w[2] = (u16)(i16)rt_sat16((i32)(i16)a.w[2] - (i32)(i16)b.w[2]); r.w[3] = (u16)(i16)rt_sat16((i32)(i16)a.w[3] - (i32)(i16)b.w[3]); fpr[2] = (long double)(i64)(r.q); }
    /* 008b7cb7: punpcklbw mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b7cba: psubsw mm3, qword ptr [0xa36320] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0xa36320u)); MM64 r; r.w[0] = (u16)(i16)rt_sat16((i32)(i16)a.w[0] - (i32)(i16)b.w[0]); r.w[1] = (u16)(i16)rt_sat16((i32)(i16)a.w[1] - (i32)(i16)b.w[1]); r.w[2] = (u16)(i16)rt_sat16((i32)(i16)a.w[2] - (i32)(i16)b.w[2]); r.w[3] = (u16)(i16)rt_sat16((i32)(i16)a.w[3] - (i32)(i16)b.w[3]); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7cc1: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b7cc4: punpcklwd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7cc7: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b7cca: pmaddwd mm2, qword ptr [0xa36328] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0xa36328u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7cd1: psllw mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.w[0] = c >= 16 ? 0 : (a.w[0] << c); r.w[1] = c >= 16 ? 0 : (a.w[1] << c); r.w[2] = c >= 16 ? 0 : (a.w[2] << c); r.w[3] = c >= 16 ? 0 : (a.w[3] << c); fpr[1] = (long double)(i64)(r.q); }
    /* 008b7cd5: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b7cd8: punpcklwd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b7cdb: punpckhwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b7cde: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b7ce1: punpckhwd mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b7ce4: paddd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7ce7: pmaddwd mm5, qword ptr [0xa36328] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0xa36328u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b7cee: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b7cf1: punpcklwd mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b7cf4: movq mm7, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b7cf7: pmaddwd mm3, qword ptr [0xa36330] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0xa36330u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b7cfe: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008b7d02: paddd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b7d05: punpcklwd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b7d08: pmaddwd mm4, qword ptr [0xa36338] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0xa36338u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b7d0f: psrad mm5, 8 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008b7d13: psrad mm3, 8 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d17: punpckhwd mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b7d1a: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008b7d1e: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b7d21: pmaddwd mm7, qword ptr [0xa36338] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0xa36338u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b7d28: punpckhwd mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b7d2b: pmaddwd mm1, qword ptr [0xa36330] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0xa36330u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b7d32: punpckldq mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d35: punpckhdq mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b7d38: movq mm0, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b7d3b: psrad mm7, 8 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008b7d3f: punpckldq mm4, dword ptr [0xaea380] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0xaea380u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b7d46: punpckhdq mm0, qword ptr [0xaea380] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0xaea380u)); MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b7d4d: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008b7d51: packssdw mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d54: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7d57: packssdw mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[6] = (long double)(i64)(r.q); }
    /* 008b7d5a: packuswb mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.b[0] = (u8)rt_satu8((i32)(i16)a.w[0]); r.b[4] = (u8)rt_satu8((i32)(i16)b.w[0]); r.b[1] = (u8)rt_satu8((i32)(i16)a.w[1]); r.b[5] = (u8)rt_satu8((i32)(i16)b.w[1]); r.b[2] = (u8)rt_satu8((i32)(i16)a.w[2]); r.b[6] = (u8)rt_satu8((i32)(i16)b.w[2]); r.b[3] = (u8)rt_satu8((i32)(i16)a.w[3]); r.b[7] = (u8)rt_satu8((i32)(i16)b.w[3]); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d5d: punpckldq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7d60: movq mm4, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b7d63: punpckhdq mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b7d66: punpckldq mm7, dword ptr [0xaea380] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0xaea380u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b7d6d: punpckhdq mm4, qword ptr [0xaea380] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0xaea380u)); MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b7d74: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b7d77: packssdw mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[2] = (long double)(i64)(r.q); }
    /* 008b7d7a: pand mm3, qword ptr [0xa36340] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0xa36340u)); MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d81: packssdw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008b7d84: psrlq mm3, 8 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d88: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7d8b: por mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b7d8e: packuswb mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.b[0] = (u8)rt_satu8((i32)(i16)a.w[0]); r.b[4] = (u8)rt_satu8((i32)(i16)b.w[0]); r.b[1] = (u8)rt_satu8((i32)(i16)a.w[1]); r.b[5] = (u8)rt_satu8((i32)(i16)b.w[1]); r.b[2] = (u8)rt_satu8((i32)(i16)a.w[2]); r.b[6] = (u8)rt_satu8((i32)(i16)b.w[2]); r.b[3] = (u8)rt_satu8((i32)(i16)a.w[3]); r.b[7] = (u8)rt_satu8((i32)(i16)b.w[3]); fpr[2] = (long double)(i64)(r.q); }
    /* 008b7d91: psrlq mm3, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d95: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7d98: movd dword ptr [edx - 0xc], mm0 */ W32((u32)(r_edx+0xfffffff4u), (u32)(u64)(i64)fpr[0]);
    /* 008b7d9c: punpcklwd mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b7d9f: psrlq mm2, 0x18 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x18u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008b7da3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7da6: movd dword ptr [edx - 8], mm3 */ W32((u32)(r_edx+0xfffffff8u), (u32)(u64)(i64)fpr[3]);
    /* 008b7daa: psrlq mm3, 0x30 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x30u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008b7dae: por mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q | b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008b7db1: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 008b7db4: movd dword ptr [edx - 4], mm2 */ W32((u32)(r_edx+0xfffffffcu), (u32)(u64)(i64)fpr[2]);
    /* 008b7db8: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7db9: jne 0x8b7c9e */ if (!fZ) goto L_008b7c9e;
L_008b7dbf:; BB(0x008b7dbf);
    /* 008b7dbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7dc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7dc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b7dc2: ret  */ FN_RET(0x008b7c87); r_esp += 4; return;
}

void f_008b7dc3(void) /* sub_8B7DC3 */
{
    FN_ENTER(0x008b7dc3);
    /* 008b7dc3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b7dc4: mov ebp, esp */ r_ebp = r_esp;
    /* 008b7dc6: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b7dc9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b7dcc: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 008b7dd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7dd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7dd4: mov esi, dword ptr [ecx + 0x11c] */ r_esi = R32((u32)(r_ecx+0x11cu));
    /* 008b7dda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7ddb: mov edi, dword ptr [ecx + 0x5c] */ r_edi = R32((u32)(r_ecx+0x5cu));
    /* 008b7dde: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008b7de1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b7de4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008b7de7: mov ebx, edi */ r_ebx = r_edi;
    /* 008b7de9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008b7dec: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 008b7def: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008b7df2: and ebx, 0xfffffff8 */ {  u32 a = r_ebx; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008b7df5: cmp byte ptr [0xa35fc8], 0 */ {  u32 a = R8((u32)(0xa35fc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b7dfc: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008b7dff: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 008b7e02: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008b7e05: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008b7e08: je 0x8b7f05 */ if (fZ) goto L_008b7f05;
L_008b7e0e:; BB(0x008b7e0e);
    /* 008b7e0e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008b7e11: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7e12: js 0x8b7efe */ if (fS) goto L_008b7efe;
L_008b7e18:; BB(0x008b7e18);
    /* 008b7e18: lea eax, [ebx + ebx*2] */ r_eax = (u32)(r_ebx+r_ebx*2);
    /* 008b7e1b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008b7e1e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b7e21: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b7e24: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7e25: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b7e28: jmp 0x8b7e2d */ goto L_008b7e2d;
L_008b7e2a:; BB(0x008b7e2a);
    /* 008b7e2a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_008b7e2d:; BB(0x008b7e2d);
    /* 008b7e2d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b7e30: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008b7e32: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 008b7e35: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 008b7e38: mov edi, dword ptr [eax + edi] */ r_edi = R32((u32)(r_eax+r_edi));
    /* 008b7e3b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 008b7e3e: mov ecx, dword ptr [eax + ecx] */ r_ecx = R32((u32)(r_eax+r_ecx));
    /* 008b7e41: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7e44: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008b7e47: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7e4a: add dword ptr [ebp + 0x14], 4 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7e4e: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008b7e51: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008b7e53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7e54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7e55: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b7e58: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b7e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7e5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7e5d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b7e60: call 0x8b7c87 */ r_esp -= 4; W32(r_esp, 0x8b7e65u); f_008b7c87();
    /* 008b7e65: add edi, dword ptr [ebp - 0x30] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b7e68: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7e6b: cmp ebx, dword ptr [ebp - 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b7e6e: jae 0x8b7ef5 */ if (!fC) goto L_008b7ef5;
L_008b7e74:; BB(0x008b7e74);
    /* 008b7e74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b7e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7e7a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7e7c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b7e7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b7e82: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7e84: lea eax, [edx + ebx] */ r_eax = (u32)(r_edx+r_ebx);
    /* 008b7e87: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b7e8a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7e8c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b7e8f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b7e92: jmp 0x8b7e97 */ goto L_008b7e97;
L_008b7e94:; BB(0x008b7e94);
    /* 008b7e94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
L_008b7e97:; BB(0x008b7e97);
    /* 008b7e97: movzx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)R8((u32)(r_ecx+r_eax));
    /* 008b7e9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7e9e: movzx edx, byte ptr [edx + eax] */ r_edx = (u32)R8((u32)(r_edx+r_eax));
    /* 008b7ea2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b7ea5: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b7ea8: mov ebx, dword ptr [ecx + ebx] */ r_ebx = R32((u32)(r_ecx+r_ebx));
    /* 008b7eab: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008b7eae: add ebx, dword ptr [ebp + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b7eb1: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 008b7eb4: mov bl, byte ptr [ebx + esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_esi))) & 0xffu);
    /* 008b7eb7: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008b7eb9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b7ebc: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b7ebf: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b7ec2: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b7ec5: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b7ec8: add edx, dword ptr [ecx + ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_ebx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7ecb: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b7ece: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b7ed1: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7ed4: mov cl, byte ptr [edx + esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi))) & 0xffu);
    /* 008b7ed7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b7eda: mov byte ptr [edi - 2], cl */ W8((u32)(r_edi+0xfffffffeu), (u8)r_ecx);
    /* 008b7edd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7ee0: mov ecx, dword ptr [ecx + edx] */ r_ecx = R32((u32)(r_ecx+r_edx));
    /* 008b7ee3: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008b7ee6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7ee7: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b7eea: mov cl, byte ptr [ecx + esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_esi))) & 0xffu);
    /* 008b7eed: mov byte ptr [edi - 1], cl */ W8((u32)(r_edi+0xffffffffu), (u8)r_ecx);
    /* 008b7ef0: jne 0x8b7e94 */ if (!fZ) goto L_008b7e94;
L_008b7ef2:; BB(0x008b7ef2);
    /* 008b7ef2: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
L_008b7ef5:; BB(0x008b7ef5);
    /* 008b7ef5: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7ef8: jne 0x8b7e2a */ if (!fZ) goto L_008b7e2a;
L_008b7efe:; BB(0x008b7efe);
    /* 008b7efe: emms  */ ; /* the MMX tag state is not modelled */
    /* 008b7f00: jmp 0x8b7fdc */ goto L_008b7fdc;
L_008b7f05:; BB(0x008b7f05);
    /* 008b7f05: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008b7f08: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7f09: js 0x8b7fdc */ if (fS) goto L_008b7fdc;
L_008b7f0f:; BB(0x008b7f0f);
    /* 008b7f0f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b7f12: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b7f15: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b7f18: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7f19: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008b7f1c:; BB(0x008b7f1c);
    /* 008b7f1c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008b7f1e: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 008b7f21: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b7f24: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008b7f27: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 008b7f2a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b7f2d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008b7f30: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 008b7f33: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b7f36: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b7f39: add dword ptr [ebp + 0x14], 4 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b7f3d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b7f3f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7f42: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b7f44: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 008b7f47: jbe 0x8b7fd3 */ if ((fC||fZ)) goto L_008b7fd3;
L_008b7f4d:; BB(0x008b7f4d);
    /* 008b7f4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b7f50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7f53: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7f55: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b7f58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b7f5b: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b7f5d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008b7f60: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 008b7f63: jmp 0x8b7f68 */ goto L_008b7f68;
L_008b7f65:; BB(0x008b7f65);
    /* 008b7f65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
L_008b7f68:; BB(0x008b7f68);
    /* 008b7f68: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 008b7f6c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7f6f: movzx ebx, byte ptr [ecx + edi] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi));
    /* 008b7f73: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 008b7f76: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 008b7f79: mov edi, edx */ r_edi = r_edx;
    /* 008b7f7b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b7f7e: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b7f81: mov edx, dword ptr [edi + edx] */ r_edx = R32((u32)(r_edi+r_edx));
    /* 008b7f84: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7f86: mov dl, byte ptr [edx + esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi))) & 0xffu);
    /* 008b7f89: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008b7f8b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 008b7f8e: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b7f91: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b7f94: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008b7f97: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b7f9a: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b7f9d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b7fa0: add edx, dword ptr [edi + ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+r_ebx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7fa3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b7fa6: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b7fa9: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b7fac: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7faf: mov dl, byte ptr [edx + esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi))) & 0xffu);
    /* 008b7fb2: mov byte ptr [eax - 2], dl */ W8((u32)(r_eax+0xfffffffeu), (u8)r_edx);
    /* 008b7fb5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b7fb8: mov edx, dword ptr [edx + edi] */ r_edx = R32((u32)(r_edx+r_edi));
    /* 008b7fbb: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 008b7fbe: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7fbf: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b7fc2: mov dl, byte ptr [edx + esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi))) & 0xffu);
    /* 008b7fc5: mov byte ptr [eax - 1], dl */ W8((u32)(r_eax+0xffffffffu), (u8)r_edx);
    /* 008b7fc8: jne 0x8b7f65 */ if (!fZ) goto L_008b7f65;
L_008b7fca:; BB(0x008b7fca);
    /* 008b7fca: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b7fcd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b7fd0: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
L_008b7fd3:; BB(0x008b7fd3);
    /* 008b7fd3: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7fd6: jne 0x8b7f1c */ if (!fZ) goto L_008b7f1c;
L_008b7fdc:; BB(0x008b7fdc);
    /* 008b7fdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b7fdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b7fde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b7fdf: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b7fe0: ret  */ FN_RET(0x008b7dc3); r_esp += 4; return;
}

void f_008b7fe1(void) /* sub_8B7FE1 */
{
    FN_ENTER(0x008b7fe1);
    /* 008b7fe1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b7fe2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7fe3: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008b7fe7: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b7fea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7feb: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7fed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b7fef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7ff0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b7ff2u); call_ind(t); }
    /* 008b7ff2: mov edi, eax */ r_edi = r_eax;
    /* 008b7ff4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b7ff7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7ff9: mov dword ptr [esi + 0x1a0], edi */ W32((u32)(r_esi+0x1a0u), r_edi);
    /* 008b7fff: mov dword ptr [edi], 0x857d95 */ W32((u32)(r_edi), 0x857d95u);
    /* 008b8005: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b8008: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8009: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b800b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008b800d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b800e: je 0x8b802d */ if (fZ) goto L_008b802d;
L_008b8010:; BB(0x008b8010);
    /* 008b8010: jle 0x8b8026 */ if ((fZ||fS!=fO)) goto L_008b8026;
L_008b8012:; BB(0x008b8012);
    /* 008b8012: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8014: jle 0x8b8021 */ if ((fZ||fS!=fO)) goto L_008b8021;
L_008b8016:; BB(0x008b8016);
    /* 008b8016: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8019: jg 0x8b8026 */ if ((!fZ&&fS==fO)) goto L_008b8026;
L_008b801b:; BB(0x008b801b);
    /* 008b801b: cmp dword ptr [esi + 0x20], 4 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b801f: jmp 0x8b8030 */ goto L_008b8030;
L_008b8021:; BB(0x008b8021);
    /* 008b8021: cmp dword ptr [esi + 0x20], ebx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8024: jmp 0x8b8030 */ goto L_008b8030;
L_008b8026:; BB(0x008b8026);
    /* 008b8026: cmp dword ptr [esi + 0x20], ecx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8029: jge 0x8b8041 */ if ((fS==fO)) goto L_008b8041;
L_008b802b:; BB(0x008b802b);
    /* 008b802b: jmp 0x8b8032 */ goto L_008b8032;
L_008b802d:; BB(0x008b802d);
    /* 008b802d: cmp dword ptr [esi + 0x20], ecx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_008b8030:; BB(0x008b8030);
    /* 008b8030: je 0x8b8041 */ if (fZ) goto L_008b8041;
L_008b8032:; BB(0x008b8032);
    /* 008b8032: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b8034: mov dword ptr [eax + 0x14], 8 */ W32((u32)(r_eax+0x14u), 0x8u);
    /* 008b803b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b803d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b803e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b8040u); call_ind(t); }
    /* 008b8040: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b8041:; BB(0x008b8041);
    /* 008b8041: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 008b8044: mov ecx, eax */ r_ecx = r_eax;
    /* 008b8046: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b8047: je 0x8b80b3 */ if (fZ) goto L_008b80b3;
L_008b8049:; BB(0x008b8049);
    /* 008b8049: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b804a: je 0x8b808b */ if (fZ) goto L_008b808b;
L_008b804c:; BB(0x008b804c);
    /* 008b804c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b804d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b804e: je 0x8b806e */ if (fZ) goto L_008b806e;
L_008b8050:; BB(0x008b8050);
    /* 008b8050: cmp eax, dword ptr [esi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8053: jne 0x8b805d */ if (!fZ) goto L_008b805d;
L_008b8055:; BB(0x008b8055);
    /* 008b8055: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b8058: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 008b805b: jmp 0x8b80aa */ goto L_008b80aa;
L_008b805d:; BB(0x008b805d);
    /* 008b805d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b805f: mov dword ptr [eax + 0x14], 0x19 */ W32((u32)(r_eax+0x14u), 0x19u);
    /* 008b8066: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b8068: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8069: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b806bu); call_ind(t); }
    /* 008b806b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b806c: jmp 0x8b80e9 */ goto L_008b80e9;
L_008b806e:; BB(0x008b806e);
    /* 008b806e: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b8071: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8074: mov dword ptr [esi + 0x64], 4 */ W32((u32)(r_esi+0x64u), 0x4u);
    /* 008b807b: jne 0x8b8086 */ if (!fZ) goto L_008b8086;
L_008b807d:; BB(0x008b807d);
    /* 008b807d: mov dword ptr [edi + 4], 0x8b7b55 */ W32((u32)(r_edi+0x4u), 0x8b7b55u);
    /* 008b8084: jmp 0x8b809c */ goto L_008b809c;
L_008b8086:; BB(0x008b8086);
    /* 008b8086: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8089: jmp 0x8b80a8 */ goto L_008b80a8;
L_008b808b:; BB(0x008b808b);
    /* 008b808b: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b808e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8090: mov dword ptr [esi + 0x64], ebx */ W32((u32)(r_esi+0x64u), r_ebx);
    /* 008b8093: jne 0x8b80a5 */ if (!fZ) goto L_008b80a5;
L_008b8095:; BB(0x008b8095);
    /* 008b8095: mov dword ptr [edi + 4], 0x8b7dc3 */ W32((u32)(r_edi+0x4u), 0x8b7dc3u);
L_008b809c:; BB(0x008b809c);
    /* 008b809c: mov eax, esi */ r_eax = r_esi;
    /* 008b809e: call 0x8b7a17 */ r_esp -= 4; W32(r_esp, 0x8b80a3u); f_008b7a17();
    /* 008b80a3: jmp 0x8b80e9 */ goto L_008b80e9;
L_008b80a5:; BB(0x008b80a5);
    /* 008b80a5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_008b80a8:; BB(0x008b80a8);
    /* 008b80a8: jne 0x8b805d */ if (!fZ) goto L_008b805d;
L_008b80aa:; BB(0x008b80aa);
    /* 008b80aa: mov dword ptr [edi + 4], 0x8b7ac7 */ W32((u32)(r_edi+0x4u), 0x8b7ac7u);
    /* 008b80b1: jmp 0x8b80e9 */ goto L_008b80e9;
L_008b80b3:; BB(0x008b80b3);
    /* 008b80b3: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b80b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b80b8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b80b9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b80bb: mov dword ptr [esi + 0x64], ecx */ W32((u32)(r_esi+0x64u), r_ecx);
    /* 008b80be: je 0x8b80c4 */ if (fZ) goto L_008b80c4;
L_008b80c0:; BB(0x008b80c0);
    /* 008b80c0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b80c2: jne 0x8b805d */ if (!fZ) goto L_008b805d;
L_008b80c4:; BB(0x008b80c4);
    /* 008b80c4: mov dword ptr [edi + 4], 0x8b7b32 */ W32((u32)(r_edi+0x4u), 0x8b7b32u);
    /* 008b80cb: cmp dword ptr [esi + 0x20], ecx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b80ce: mov eax, ecx */ r_eax = r_ecx;
    /* 008b80d0: jle 0x8b80e9 */ if ((fZ||fS!=fO)) goto L_008b80e9;
L_008b80d2:; BB(0x008b80d2);
    /* 008b80d2: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 008b80d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b80d5:; BB(0x008b80d5);
    /* 008b80d5: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 008b80db: and byte ptr [edx + ecx + 0x30], 0 */ { u32 ad = (u32)(r_edx+r_ecx+0x30u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b80e0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b80e1: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b80e4: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b80e7: jl 0x8b80d5 */ if ((fS!=fO)) goto L_008b80d5;
L_008b80e9:; BB(0x008b80e9);
    /* 008b80e9: cmp byte ptr [esi + 0x4a], 0 */ {  u32 a = R8((u32)(r_esi+0x4au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b80ed: je 0x8b80f8 */ if (fZ) goto L_008b80f8;
L_008b80ef:; BB(0x008b80ef);
    /* 008b80ef: mov dword ptr [esi + 0x68], 1 */ W32((u32)(r_esi+0x68u), 0x1u);
    /* 008b80f6: jmp 0x8b80fe */ goto L_008b80fe;
L_008b80f8:; BB(0x008b80f8);
    /* 008b80f8: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 008b80fb: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
L_008b80fe:; BB(0x008b80fe);
    /* 008b80fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b80ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b8100: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b8101: ret  */ FN_RET(0x008b7fe1); r_esp += 4; return;
}

