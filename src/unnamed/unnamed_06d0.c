#include "protos.h"

void f_006d0015(void)
{
    FN_ENTER(0x006d0015);
    /* 006d0015: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 006d001c: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d001f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0021: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d0023:; BB(0x006d0023);
    /* 006d0023: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d002a: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d002f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d0032: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d0039: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d003b: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d003d:; BB(0x006d003d);
    /* 006d003d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d003f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d0044u); f_00760acc();
L_006d0044:; BB(0x006d0044);
    /* 006d0044: add dword ptr [ebp + 0x78], -1 */ { u32 ad = (u32)(r_ebp+0x78u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d0048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d004a: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6d004fu); f_006d0104();
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d0015); r_esp += 4; return;
}

void f_006d0020(void)
{
    FN_ENTER(0x006d0020);
    /* 006d0020: sal byte ptr [ecx + 0xf], cl */ { u32 ad = (u32)(r_ecx+0xfu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 006d0024: mov bh, 0x82 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x82u) & 0xffu) << 8);
    /* 006d0026: test byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 006d0028: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d002a: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d002f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d0032: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d0039: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d003b: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d003d:; BB(0x006d003d);
    /* 006d003d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d003f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d0044u); f_00760acc();
L_006d0044:; BB(0x006d0044);
    /* 006d0044: add dword ptr [ebp + 0x78], -1 */ { u32 ad = (u32)(r_ebp+0x78u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d0048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d004a: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6d004fu); f_006d0104();
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d0020); r_esp += 4; return;
}

void f_006d0029(void)
{
    FN_ENTER(0x006d0029);
    /* 006d0029: add byte ptr [0xfffd], ah */ { u32 ad = (u32)(0xfffdu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d002f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d0032: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d0039: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d003b: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d003d:; BB(0x006d003d);
    /* 006d003d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d003f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d0044u); f_00760acc();
L_006d0044:; BB(0x006d0044);
    /* 006d0044: add dword ptr [ebp + 0x78], -1 */ { u32 ad = (u32)(r_ebp+0x78u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d0048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d004a: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6d004fu); f_006d0104();
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d0029); r_esp += 4; return;
}

void f_006d002d(void)
{
    FN_ENTER(0x006d002d);
    /* 006d002d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d002f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d0032: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d0039: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d003b: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d003d:; BB(0x006d003d);
    /* 006d003d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d003f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d0044u); f_00760acc();
L_006d0044:; BB(0x006d0044);
    /* 006d0044: add dword ptr [ebp + 0x78], -1 */ { u32 ad = (u32)(r_ebp+0x78u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d0048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d004a: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6d004fu); f_006d0104();
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d002d); r_esp += 4; return;
}

void f_006d0045(void)
{
    FN_ENTER(0x006d0045);
    /* 006d0045: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fS = ((r >> 31) & 1); }
    /* 006d0046: js 0x6d0047 */ if (fS) goto L_006d0047;
L_006d0047:; BB(0x006d0047);
    /* 006d0047: dec dword ptr [ebx + 0xb5e8cd] */ { u32 ad = (u32)(r_ebx+0xb5e8cdu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_006d0048:; BB(0x006d0048);
    /* 006d0048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d004a: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6d004fu); f_006d0104();
    /* 006d004d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d0045); r_esp += 4; return;
}

void f_006d0049(void)
{
    FN_ENTER(0x006d0049);
    /* 006d0049: int 0xe8 */ UNSUP(0x006d0049, "int 0xe8");
    /* 006d004b: mov ch, 0 */ r_ecx = (r_ecx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 006d004d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d0049); r_esp += 4; return;
}

void f_006d0061(void)
{
    FN_ENTER(0x006d0061);
    /* 006d0061: and byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 006d0063: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d0065: add byte ptr [ebp - 0x3d], bl */ { u32 ad = (u32)(r_ebp+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d0068: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d006b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d006d: je 0x6d0078 */ if (fZ) goto L_006d0078;
L_006d006f:; BB(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
L_006d0078:; BB(0x006d0078);
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d0061); r_esp += 4; return;
}

void f_006d0062(void)
{
    FN_ENTER(0x006d0062);
    /* 006d0062: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d0064: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006d0062); r_esp += 4; return;
}

void f_006d0065(void)
{
    FN_ENTER(0x006d0065);
    /* 006d0065: add byte ptr [ebp - 0x3d], bl */ { u32 ad = (u32)(r_ebp+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d0068: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d006b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d006d: je 0x6d0078 */ if (fZ) goto L_006d0078;
L_006d006f:; BB(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
L_006d0078:; BB(0x006d0078);
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d0065); r_esp += 4; return;
}

void f_006d0067(void)
{
    FN_ENTER(0x006d0067);
    /* 006d0067: ret  */ FN_RET(0x006d0067); r_esp += 4; return;
}

void f_006d0069(void)
{
    FN_ENTER(0x006d0069);
    goto L_006d0069;
L_006cfff1:; BB(0x006cfff1);
    /* 006cfff1: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006cfff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cfff9: ret  */ FN_RET(0x006d0069); r_esp += 4; return;
L_006d0069:; BB(0x006d0069);
    /* 006d0069: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d006a: jl 0x6cfff1 */ if ((fS!=fO)) goto L_006cfff1;
L_006d006c:; BB(0x006d006c);
    /* 006d006c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006d006d: je 0x6d0078 */ if (fZ) goto L_006d0078;
L_006d006f:; BB(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
L_006d0078:; BB(0x006d0078);
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d0069); r_esp += 4; return;
}

void f_006d006c(void)
{
    FN_ENTER(0x006d006c);
    /* 006d006c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006d006d: je 0x6d0078 */ if (fZ) goto L_006d0078;
L_006d006f:; BB(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
L_006d0078:; BB(0x006d0078);
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d006c); r_esp += 4; return;
}

void f_006d006d(void)
{
    FN_ENTER(0x006d006d);
    /* 006d006d: je 0x6d0078 */ if (fZ) goto L_006d0078;
L_006d006f:; BB(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
L_006d0078:; BB(0x006d0078);
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d006d); r_esp += 4; return;
}

void f_006d006f(void)
{
    FN_ENTER(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d006f); r_esp += 4; return;
}

void f_006d0072(void)
{
    FN_ENTER(0x006d0072);
    /* 006d0072: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006d0074: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 006d0076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0077: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006d0079: or eax, 0xaab284 */ {  u32 a = r_eax; u32 b = 0xaab284u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006d0072); r_esp += 4; return;
}

void f_006d0104(void) /* sub_6D0104 */
{
    FN_ENTER(0x006d0104);
    /* 006d0104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0105: mov edi, ecx */ r_edi = r_ecx;
    /* 006d0107: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 006d010a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d010c: je 0x6d011a */ if (fZ) goto L_006d011a;
L_006d010e:; BB(0x006d010e);
    /* 006d010e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0113u); f_007127b0();
    /* 006d0113: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
L_006d011a:; BB(0x006d011a);
    /* 006d011a: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006d011d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d011f: je 0x6d012d */ if (fZ) goto L_006d012d;
L_006d0121:; BB(0x006d0121);
    /* 006d0121: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0126u); f_007127b0();
    /* 006d0126: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_006d012d:; BB(0x006d012d);
    /* 006d012d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006d0130: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0132: je 0x6d0140 */ if (fZ) goto L_006d0140;
L_006d0134:; BB(0x006d0134);
    /* 006d0134: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0139u); f_007127b0();
    /* 006d0139: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_006d0140:; BB(0x006d0140);
    /* 006d0140: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006d0143: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0145: je 0x6d0153 */ if (fZ) goto L_006d0153;
L_006d0147:; BB(0x006d0147);
    /* 006d0147: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d014cu); f_007127b0();
    /* 006d014c: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_006d0153:; BB(0x006d0153);
    /* 006d0153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0154: ret  */ FN_RET(0x006d0104); r_esp += 4; return;
}

void f_006d0158(void) /* sub_6D0158 */
{
    FN_ENTER(0x006d0158);
    /* 006d0158: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0159: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d015b: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006d015e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0160: je 0x6d0164 */ if (fZ) goto L_006d0164;
L_006d0162:; BB(0x006d0162);
    /* 006d0162: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d0164u); call_ind(t); }
L_006d0164:; BB(0x006d0164);
    /* 006d0164: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d0168: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d016d: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006d0171: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0172: ret  */ FN_RET(0x006d0158); r_esp += 4; return;
}

void f_006d0174(void) /* sub_6D0174 */
{
    FN_ENTER(0x006d0174);
    /* 006d0174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0175: mov edi, ecx */ r_edi = r_ecx;
    /* 006d0177: push dword ptr [0xa9617c] */ { u32 v = R32((u32)(0xa9617cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d017d: push dword ptr [0xa95fc8] */ { u32 v = R32((u32)(0xa95fc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0183: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x6d0188u); f_00788154();
    /* 006d0188: mov edx, dword ptr [0xa9617c] */ r_edx = R32((u32)(0xa9617cu));
    /* 006d018e: mov dword ptr [0xa96178], edx */ W32((u32)(0xa96178u), r_edx);
    /* 006d0194: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0196: mov dword ptr [0xa96170], eax */ W32((u32)(0xa96170u), r_eax);
    /* 006d019b: mov dword ptr [0xa9617c], edx */ W32((u32)(0xa9617cu), r_edx);
    /* 006d01a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d01a2: push dword ptr [0xa96028] */ { u32 v = R32((u32)(0xa96028u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d01a8: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x6d01adu); f_00788154();
    /* 006d01ad: mov edx, dword ptr [0xa9617c] */ r_edx = R32((u32)(0xa9617cu));
    /* 006d01b3: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 006d01ba: mov dword ptr [0xa96174], edx */ W32((u32)(0xa96174u), r_edx);
    /* 006d01c0: mov dword ptr [0xa9616c], eax */ W32((u32)(0xa9616cu), r_eax);
    /* 006d01c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d01c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d01c9: ret  */ FN_RET(0x006d0174); r_esp += 4; return;
}

void f_006d01cc(void) /* sub_6D01CC */
{
    FN_ENTER(0x006d01cc);
    /* 006d01cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d01cd: mov edi, ecx */ r_edi = r_ecx;
    /* 006d01cf: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d01d4u); f_005b7a28();
    /* 006d01d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d01d6: jne 0x6d01da */ if (!fZ) goto L_006d01da;
L_006d01d8:; BB(0x006d01d8);
    /* 006d01d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d01d9: ret  */ FN_RET(0x006d01cc); r_esp += 4; return;
L_006d01da:; BB(0x006d01da);
    /* 006d01da: push 0x96bef8 */ { u32 v = 0x96bef8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d01df: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x6d01e4u); f_005b7a44();
    /* 006d01e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d01e5: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
    /* 006d01ec: mov dword ptr [0xa9617c], eax */ W32((u32)(0xa9617cu), r_eax);
    /* 006d01f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d01f2: ret  */ FN_RET(0x006d01cc); r_esp += 4; return;
}

void f_006d01f4(void) /* sub_6D01F4 */
{
    FN_ENTER(0x006d01f4);
    /* 006d01f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d01f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d01f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d01f7: mov edi, ecx */ r_edi = r_ecx;
    /* 006d01f9: mov ecx, dword ptr [edi + 0x7c] */ r_ecx = R32((u32)(r_edi+0x7cu));
    /* 006d01fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d01fe: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d0201u); call_ind(t); }
    /* 006d0201: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0203: je 0x6d035c */ if (fZ) goto L_006d035c;
L_006d0209:; BB(0x006d0209);
    /* 006d0209: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006d020c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d020e: je 0x6d0267 */ if (fZ) goto L_006d0267;
L_006d0210:; BB(0x006d0210);
    /* 006d0210: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d0215u); f_00737d90();
    /* 006d0215: mov esi, eax */ r_esi = r_eax;
    /* 006d0217: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006d021a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d021c: je 0x6d0249 */ if (fZ) goto L_006d0249;
L_006d021e:; BB(0x006d021e);
    /* 006d021e: cmp esi, dword ptr [edi + 0x48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0221: je 0x6d0249 */ if (fZ) goto L_006d0249;
L_006d0223:; BB(0x006d0223);
    /* 006d0223: mov edx, dword ptr [0xa96084] */ r_edx = R32((u32)(0xa96084u));
    /* 006d0229: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d022e: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 006d0231: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0233: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0235: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0237: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0239: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d023b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d023d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d023f: lea edx, [edx + eax + 0x50] */ r_edx = (u32)(r_edx+r_eax+0x50u);
    /* 006d0243: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0244: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d0249u); f_0073ae38();
L_006d0249:; BB(0x006d0249);
    /* 006d0249: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006d024c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d024e: je 0x6d0261 */ if (fZ) goto L_006d0261;
L_006d0250:; BB(0x006d0250);
    /* 006d0250: cmp esi, dword ptr [edi + 0x48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0253: je 0x6d0261 */ if (fZ) goto L_006d0261;
L_006d0255:; BB(0x006d0255);
    /* 006d0255: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d025au); f_007127b0();
    /* 006d025a: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_006d0261:; BB(0x006d0261);
    /* 006d0261: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006d0264: mov dword ptr [edi + 0x48], esi */ W32((u32)(r_edi+0x48u), r_esi);
L_006d0267:; BB(0x006d0267);
    /* 006d0267: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0269: je 0x6d0342 */ if (fZ) goto L_006d0342;
L_006d026f:; BB(0x006d026f);
    /* 006d026f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d0276: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d0278: je 0x6d0342 */ if (fZ) goto L_006d0342;
L_006d027e:; BB(0x006d027e);
    /* 006d027e: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 006d0281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0283: je 0x6d029c */ if (fZ) goto L_006d029c;
L_006d0285:; BB(0x006d0285);
    /* 006d0285: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0288: je 0x6d03c8 */ if (fZ) goto L_006d03c8;
L_006d028e:; BB(0x006d028e);
    /* 006d028e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0291: je 0x6d0360 */ if (fZ) goto L_006d0360;
L_006d0297:; BB(0x006d0297);
    /* 006d0297: jmp 0x6d0342 */ goto L_006d0342;
L_006d029c:; BB(0x006d029c);
    /* 006d029c: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d02a1u); f_00737d90();
    /* 006d02a1: mov edx, dword ptr [0xa96084] */ r_edx = R32((u32)(0xa96084u));
    /* 006d02a7: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 006d02aa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d02ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d02ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d02b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d02b2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d02b4: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 006d02b8: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006d02bb: mov esi, dword ptr [edx + ecx*4 + 0xc] */ r_esi = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 006d02bf: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006d02c2: movzx eax, byte ptr [edx + ecx*4 + 8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*4+0x8u));
    /* 006d02c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d02ca: jne 0x6d02d8 */ if (!fZ) goto L_006d02d8;
L_006d02cc:; BB(0x006d02cc);
    /* 006d02cc: mov dword ptr [0xa96168], 0 */ W32((u32)(0xa96168u), 0x0u);
    /* 006d02d6: jmp 0x6d02f3 */ goto L_006d02f3;
L_006d02d8:; BB(0x006d02d8);
    /* 006d02d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d02db: jne 0x6d02e9 */ if (!fZ) goto L_006d02e9;
L_006d02dd:; BB(0x006d02dd);
    /* 006d02dd: mov dword ptr [0xa96168], 1 */ W32((u32)(0xa96168u), 0x1u);
    /* 006d02e7: jmp 0x6d02f3 */ goto L_006d02f3;
L_006d02e9:; BB(0x006d02e9);
    /* 006d02e9: mov dword ptr [0xa96168], 0 */ W32((u32)(0xa96168u), 0x0u);
L_006d02f3:; BB(0x006d02f3);
    /* 006d02f3: mov ecx, edi */ r_ecx = r_edi;
    /* 006d02f5: call 0x6d040c */ r_esp -= 4; W32(r_esp, 0x6d02fau); f_006d040c();
    /* 006d02fa: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d0300: lea esi, [edi + 0x4c] */ r_esi = (u32)(r_edi+0x4cu);
    /* 006d0303: mov edx, 0x8f8818 */ r_edx = 0x8f8818u;
    /* 006d0308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0309: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d030a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d030b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d030c: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0311u); f_007d3d08();
    /* 006d0311: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006d0314: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0316: je 0x6d0324 */ if (fZ) goto L_006d0324;
L_006d0318:; BB(0x006d0318);
    /* 006d0318: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d031du); f_007127b0();
    /* 006d031d: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_006d0324:; BB(0x006d0324);
    /* 006d0324: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006d0327: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d032cu); f_007127b0();
    /* 006d032c: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006d0333: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006d033a: add dword ptr [edi + 0x78], 1 */ { u32 ad = (u32)(r_edi+0x78u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d033e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d033f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0340: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0341: ret  */ FN_RET(0x006d01f4); r_esp += 4; return;
L_006d0342:; BB(0x006d0342);
    /* 006d0342: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0344: je 0x6d035c */ if (fZ) goto L_006d035c;
L_006d0346:; BB(0x006d0346);
    /* 006d0346: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d034d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d034f: je 0x6d035c */ if (fZ) goto L_006d035c;
L_006d0351:; BB(0x006d0351);
    /* 006d0351: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d0358: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0359: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d035a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d035b: ret  */ FN_RET(0x006d01f4); r_esp += 4; return;
L_006d035c:; BB(0x006d035c);
    /* 006d035c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d035d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d035e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d035f: ret  */ FN_RET(0x006d01f4); r_esp += 4; return;
L_006d0360:; BB(0x006d0360);
    /* 006d0360: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 006d0363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0365: jne 0x6d0342 */ if (!fZ) goto L_006d0342;
L_006d0367:; BB(0x006d0367);
    /* 006d0367: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d0369: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d036eu); f_0073ec50();
    /* 006d036e: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d0371: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d0375: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0377: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d037cu); f_00735884();
    /* 006d037c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d037f: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 006d0382: mov ecx, edi */ r_ecx = r_edi;
    /* 006d0384: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d0389u); f_006dc8d8();
    /* 006d0389: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d038c: mov ecx, edi */ r_ecx = r_edi;
    /* 006d038e: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d0393u); f_006dc8d8();
    /* 006d0393: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 006d0396: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d0399: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d039d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d03a0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d03a4: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d03a9u); f_0070f5a4();
    /* 006d03a9: mov ecx, dword ptr [edi + 0x7c] */ r_ecx = R32((u32)(r_edi+0x7cu));
    /* 006d03ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d03ae: je 0x6d03b9 */ if (fZ) goto L_006d03b9;
L_006d03b0:; BB(0x006d03b0);
    /* 006d03b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d03b2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d03b4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d03b6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d03b9u); call_ind(t); }
L_006d03b9:; BB(0x006d03b9);
    /* 006d03b9: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006d03bc: mov dword ptr [edi + 0x20], 8 */ W32((u32)(r_edi+0x20u), 0x8u);
    /* 006d03c3: jmp 0x6d0342 */ goto L_006d0342;
L_006d03c8:; BB(0x006d03c8);
    /* 006d03c8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d03cdu); f_00737d90();
    /* 006d03cd: mov edx, dword ptr [0xa96084] */ r_edx = R32((u32)(0xa96084u));
    /* 006d03d3: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d03d9: lea esi, [eax + eax*4] */ r_esi = (u32)(r_eax+r_eax*4);
    /* 006d03dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d03de: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d03e0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d03e2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d03e4: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006d03e6: mov eax, dword ptr [edx + esi*4 + 8] */ r_eax = R32((u32)(r_edx+r_esi*4+0x8u));
    /* 006d03ea: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006d03ed: mov eax, dword ptr [edx + esi*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_esi*4+0xcu));
    /* 006d03f1: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006d03f4: lea eax, [edi + 0x4c] */ r_eax = (u32)(r_edi+0x4cu);
    /* 006d03f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d03f8: call 0x7d3eec */ r_esp -= 4; W32(r_esp, 0x6d03fdu); f_007d3eec();
    /* 006d03fd: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006d0404: add dword ptr [edi + 0x78], 1 */ { u32 ad = (u32)(r_edi+0x78u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0408: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0409: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d040a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d040b: ret  */ FN_RET(0x006d01f4); r_esp += 4; return;
}

void f_006d040c(void) /* sub_6D040C */
{
    FN_ENTER(0x006d040c);
    /* 006d040c: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 006d0411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0413: je 0x6d043e */ if (fZ) goto L_006d043e;
L_006d0415:; BB(0x006d0415);
    /* 006d0415: mov eax, dword ptr [0xa96168] */ r_eax = R32((u32)(0xa96168u));
    /* 006d041a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d041c: jne 0x6d042a */ if (!fZ) goto L_006d042a;
L_006d041e:; BB(0x006d041e);
    /* 006d041e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0420: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x6d0425u); f_004da300();
    /* 006d0425: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006d0428: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0429: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
L_006d042a:; BB(0x006d042a);
    /* 006d042a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d042d: jne 0x6d043b */ if (!fZ) goto L_006d043b;
L_006d042f:; BB(0x006d042f);
    /* 006d042f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0431: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x6d0436u); f_004da300();
    /* 006d0436: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006d0439: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d043a: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
L_006d043b:; BB(0x006d043b);
    /* 006d043b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d043d: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
L_006d043e:; BB(0x006d043e);
    /* 006d043e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0440: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d0445u); f_006bb254();
    /* 006d0445: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0448: je 0x6d0450 */ if (fZ) goto L_006d0450;
L_006d044a:; BB(0x006d044a);
    /* 006d044a: mov eax, 4 */ r_eax = 0x4u;
    /* 006d044f: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
L_006d0450:; BB(0x006d0450);
    /* 006d0450: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006d0452: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d0457u); f_006bb254();
    /* 006d0457: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d045a: je 0x6d0462 */ if (fZ) goto L_006d0462;
L_006d045c:; BB(0x006d045c);
    /* 006d045c: mov eax, 3 */ r_eax = 0x3u;
    /* 006d0461: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
L_006d0462:; BB(0x006d0462);
    /* 006d0462: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0464: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d0469u); f_006bb254();
    /* 006d0469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d046a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d046c: je 0x6d0474 */ if (fZ) goto L_006d0474;
L_006d046e:; BB(0x006d046e);
    /* 006d046e: mov eax, 2 */ r_eax = 0x2u;
    /* 006d0473: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
L_006d0474:; BB(0x006d0474);
    /* 006d0474: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0476: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d047bu); f_006bb254();
    /* 006d047b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d047c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d047e: je 0x6d043b */ if (fZ) goto L_006d043b;
L_006d0480:; BB(0x006d0480);
    /* 006d0480: mov eax, 1 */ r_eax = 0x1u;
    /* 006d0485: ret  */ FN_RET(0x006d040c); r_esp += 4; return;
}

void f_006d0488(void) /* sub_6D0488 */
{
    FN_ENTER(0x006d0488);
    /* 006d0488: mov eax, dword ptr [0xa9617c] */ r_eax = R32((u32)(0xa9617cu));
    /* 006d048d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d048f: je 0x6d04b7 */ if (fZ) goto L_006d04b7;
L_006d0491:; BB(0x006d0491);
    /* 006d0491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0492: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0496: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x6d049bu); f_00788154();
    /* 006d049b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d049e: mov edx, dword ptr [0xa9617c] */ r_edx = R32((u32)(0xa9617cu));
    /* 006d04a4: mov dword ptr [0xa96178], edx */ W32((u32)(0xa96178u), r_edx);
    /* 006d04aa: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d04ac: mov dword ptr [0xa96170], eax */ W32((u32)(0xa96170u), r_eax);
    /* 006d04b1: mov dword ptr [0xa9617c], edx */ W32((u32)(0xa9617cu), r_edx);
L_006d04b7:; BB(0x006d04b7);
    /* 006d04b7: ret  */ FN_RET(0x006d0488); r_esp += 4; return;
}

void f_006d04b8(void) /* sub_6D04B8 */
{
    FN_ENTER(0x006d04b8);
    /* 006d04b8: mov eax, dword ptr [0xa9617c] */ r_eax = R32((u32)(0xa9617cu));
    /* 006d04bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d04bf: je 0x6d04df */ if (fZ) goto L_006d04df;
L_006d04c1:; BB(0x006d04c1);
    /* 006d04c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d04c2: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d04c6: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x6d04cbu); f_00788154();
    /* 006d04cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d04ce: mov edx, dword ptr [0xa9617c] */ r_edx = R32((u32)(0xa9617cu));
    /* 006d04d4: mov dword ptr [0xa96174], edx */ W32((u32)(0xa96174u), r_edx);
    /* 006d04da: mov dword ptr [0xa9616c], eax */ W32((u32)(0xa9616cu), r_eax);
L_006d04df:; BB(0x006d04df);
    /* 006d04df: ret  */ FN_RET(0x006d04b8); r_esp += 4; return;
}

void f_006d04e0(void) /* sub_6D04E0 */
{
    FN_ENTER(0x006d04e0);
    /* 006d04e0: mov dword ptr [0xa9617c], 0 */ W32((u32)(0xa9617cu), 0x0u);
    /* 006d04ea: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d04efu); f_005b7a28();
    /* 006d04ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d04f1: jne 0x6d04f6 */ if (!fZ) goto L_006d04f6;
L_006d04f3:; BB(0x006d04f3);
    /* 006d04f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d04f5: ret  */ FN_RET(0x006d04e0); r_esp += 4; return;
L_006d04f6:; BB(0x006d04f6);
    /* 006d04f6: push 0x96bef8 */ { u32 v = 0x96bef8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d04fb: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x6d0500u); f_005b7a44();
    /* 006d0500: mov dword ptr [0xa9617c], eax */ W32((u32)(0xa9617cu), r_eax);
    /* 006d0505: mov eax, 1 */ r_eax = 0x1u;
    /* 006d050a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d050b: ret  */ FN_RET(0x006d04e0); r_esp += 4; return;
}

void f_006d050c(void) /* sub_6D050C */
{
    FN_ENTER(0x006d050c);
    /* 006d050c: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d0511u); f_005b7a28();
    /* 006d0511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0513: je 0x6d0516 */ if (fZ) goto L_006d0516;
L_006d0515:; BB(0x006d0515);
    /* 006d0515: ret  */ FN_RET(0x006d050c); r_esp += 4; return;
L_006d0516:; BB(0x006d0516);
    /* 006d0516: push 0x96bef8 */ { u32 v = 0x96bef8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d051b: call 0x5b85bc */ r_esp -= 4; W32(r_esp, 0x6d0520u); f_005b85bc();
    /* 006d0520: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0521: ret  */ FN_RET(0x006d050c); r_esp += 4; return;
}

void f_006d0524(void) /* sub_6D0524 */
{
    FN_ENTER(0x006d0524);
    /* 006d0524: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 006d0529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d052b: je 0x6d053e */ if (fZ) goto L_006d053e;
L_006d052d:; BB(0x006d052d);
    /* 006d052d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006d0530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0532: je 0x6d053e */ if (fZ) goto L_006d053e;
L_006d0534:; BB(0x006d0534);
    /* 006d0534: mov edx, dword ptr [0xa96080] */ r_edx = R32((u32)(0xa96080u));
    /* 006d053a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006d053d: ret  */ FN_RET(0x006d0524); r_esp += 4; return;
L_006d053e:; BB(0x006d053e);
    /* 006d053e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006d0543: ret  */ FN_RET(0x006d0524); r_esp += 4; return;
}

void f_006d0544(void) /* sub_6D0544 */
{
    FN_ENTER(0x006d0544);
    /* 006d0544: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 006d0549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d054b: je 0x6d057e */ if (fZ) goto L_006d057e;
L_006d054d:; BB(0x006d054d);
    /* 006d054d: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d0550: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0552: je 0x6d057e */ if (fZ) goto L_006d057e;
L_006d0554:; BB(0x006d0554);
    /* 006d0554: mov eax, dword ptr [0xa96084] */ r_eax = R32((u32)(0xa96084u));
    /* 006d0559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d055b: je 0x6d057e */ if (fZ) goto L_006d057e;
L_006d055d:; BB(0x006d055d);
    /* 006d055d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d0562u); f_00737d90();
    /* 006d0562: mov edx, dword ptr [0xa96084] */ r_edx = R32((u32)(0xa96084u));
    /* 006d0568: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 006d056b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d056d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d056f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0571: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0573: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0575: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0577: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0579: lea eax, [edx + ecx + 0x10] */ r_eax = (u32)(r_edx+r_ecx+0x10u);
    /* 006d057d: ret  */ FN_RET(0x006d0544); r_esp += 4; return;
L_006d057e:; BB(0x006d057e);
    /* 006d057e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0580: ret  */ FN_RET(0x006d0544); r_esp += 4; return;
}

void f_006d0584(void) /* sub_6D0584 */
{
    FN_ENTER(0x006d0584);
    /* 006d0584: mov edx, dword ptr [0xa96180] */ r_edx = R32((u32)(0xa96180u));
    /* 006d058a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d058c: je 0x6d05c3 */ if (fZ) goto L_006d05c3;
L_006d058e:; BB(0x006d058e);
    /* 006d058e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006d0591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0593: je 0x6d05c3 */ if (fZ) goto L_006d05c3;
L_006d0595:; BB(0x006d0595);
    /* 006d0595: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 006d0598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d059a: jne 0x6d05a2 */ if (!fZ) goto L_006d05a2;
L_006d059c:; BB(0x006d059c);
    /* 006d059c: mov eax, 1 */ r_eax = 0x1u;
    /* 006d05a1: ret  */ FN_RET(0x006d0584); r_esp += 4; return;
L_006d05a2:; BB(0x006d05a2);
    /* 006d05a2: jle 0x6d05c3 */ if ((fZ||fS!=fO)) goto L_006d05c3;
L_006d05a4:; BB(0x006d05a4);
    /* 006d05a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d05a7: jg 0x6d05c3 */ if ((!fZ&&fS==fO)) goto L_006d05c3;
L_006d05a9:; BB(0x006d05a9);
    /* 006d05a9: mov eax, dword ptr [0xa96168] */ r_eax = R32((u32)(0xa96168u));
    /* 006d05ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d05b0: jne 0x6d05b8 */ if (!fZ) goto L_006d05b8;
L_006d05b2:; BB(0x006d05b2);
    /* 006d05b2: mov eax, 2 */ r_eax = 0x2u;
    /* 006d05b7: ret  */ FN_RET(0x006d0584); r_esp += 4; return;
L_006d05b8:; BB(0x006d05b8);
    /* 006d05b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d05bb: jne 0x6d05b2 */ if (!fZ) goto L_006d05b2;
L_006d05bd:; BB(0x006d05bd);
    /* 006d05bd: mov eax, 3 */ r_eax = 0x3u;
    /* 006d05c2: ret  */ FN_RET(0x006d0584); r_esp += 4; return;
L_006d05c3:; BB(0x006d05c3);
    /* 006d05c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d05c5: ret  */ FN_RET(0x006d0584); r_esp += 4; return;
}

void f_006d05c8(void) /* sub_6D05C8 */
{
    FN_ENTER(0x006d05c8);
    /* 006d05c8: mov dword ptr [0xa9615c], 0x3f800000 */ W32((u32)(0xa9615cu), 0x3f800000u);
    /* 006d05d2: mov dword ptr [0xa96160], 0x41000000 */ W32((u32)(0xa96160u), 0x41000000u);
    /* 006d05dc: mov dword ptr [0xa96164], 0x3fc00000 */ W32((u32)(0xa96164u), 0x3fc00000u);
    /* 006d05e6: ret  */ FN_RET(0x006d05c8); r_esp += 4; return;
}

void f_006d05e8(void) /* sub_6D05E8 */
{
    FN_ENTER(0x006d05e8);
    /* 006d05e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d05e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d05eb: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 006d05ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d05f0: je 0x6d05f4 */ if (fZ) goto L_006d05f4;
L_006d05f2:; BB(0x006d05f2);
    /* 006d05f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d05f4u); call_ind(t); }
L_006d05f4:; BB(0x006d05f4);
    /* 006d05f4: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d05f8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d05fd: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006d0601: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0602: ret  */ FN_RET(0x006d05e8); r_esp += 4; return;
}

void f_006d0604(void) /* sub_6D0604 */
{
    FN_ENTER(0x006d0604);
    /* 006d0604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d0605: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d0608: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d060a: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 006d060d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d060f: je 0x6d0637 */ if (fZ) goto L_006d0637;
L_006d0611:; BB(0x006d0611);
    /* 006d0611: mov eax, dword ptr [0xa96080] */ r_eax = R32((u32)(0xa96080u));
    /* 006d0616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0618: je 0x6d062b */ if (fZ) goto L_006d062b;
L_006d061a:; BB(0x006d061a);
    /* 006d061a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d061f: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 006d0622: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0626: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d062bu); f_0073ae38();
L_006d062b:; BB(0x006d062b);
    /* 006d062b: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 006d0632: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0635: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0636: ret  */ FN_RET(0x006d0604); r_esp += 4; return;
L_006d0637:; BB(0x006d0637);
    /* 006d0637: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006d063e: mov dword ptr [esp + 4], 0x43520000 */ W32((u32)(r_esp+0x4u), 0x43520000u);
    /* 006d0646: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0648: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d064du); f_0073ec50();
    /* 006d064d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d0651: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d0654: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d0658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0659: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d065b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d065c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d065d: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6d0662u); f_0073aa40();
    /* 006d0662: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d0665: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 006d066a: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 006d066d: mov ecx, eax */ r_ecx = r_eax;
    /* 006d066f: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6d0674u); f_00712624();
    /* 006d0674: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 006d0679: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d067c: jl 0x6d0611 */ if ((fS!=fO)) goto L_006d0611;
L_006d067e:; BB(0x006d067e);
    /* 006d067e: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0683: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0688: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 006d068b: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d0690u); f_0070f5a4();
    /* 006d0690: jmp 0x6d0611 */ goto L_006d0611;
}

void f_006d0698(void) /* sub_6D0698 */
{
    FN_ENTER(0x006d0698);
    /* 006d0698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0699: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d069a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d069b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d069e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d06a0: mov ecx, dword ptr [ebx + 0x7c] */ r_ecx = R32((u32)(r_ebx+0x7cu));
    /* 006d06a3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d06a5: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d06a8u); call_ind(t); }
    /* 006d06a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d06aa: je 0x6d07be */ if (fZ) goto L_006d07be;
L_006d06b0:; BB(0x006d06b0);
    /* 006d06b0: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d06b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d06b5: jne 0x6d06fd */ if (!fZ) goto L_006d06fd;
L_006d06b7:; BB(0x006d06b7);
    /* 006d06b7: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 006d06bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d06bf: jne 0x6d06cb */ if (!fZ) goto L_006d06cb;
L_006d06c1:; BB(0x006d06c1);
    /* 006d06c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d06c3: call 0x6dbe50 */ r_esp -= 4; W32(r_esp, 0x6d06c8u); f_006dbe50();
    /* 006d06c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d06c9: jmp 0x6d06e5 */ goto L_006d06e5;
L_006d06cb:; BB(0x006d06cb);
    /* 006d06cb: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006d06d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d06d3: je 0x6d07c5 */ if (fZ) goto L_006d07c5;
L_006d06d9:; BB(0x006d06d9);
    /* 006d06d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d06db: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006d06dd: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6d06e2u); f_006dbde4();
    /* 006d06e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006d06e5:; BB(0x006d06e5);
    /* 006d06e5: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d06e8: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d06ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d06ed: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006d06ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d06f0: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d06f5u); f_0073ff34();
    /* 006d06f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d06f8: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 006d06fb: jmp 0x6d0702 */ goto L_006d0702;
L_006d06fd:; BB(0x006d06fd);
    /* 006d06fd: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d0702u); f_00737d1c();
L_006d0702:; BB(0x006d0702);
    /* 006d0702: mov eax, dword ptr [0xa96084] */ r_eax = R32((u32)(0xa96084u));
    /* 006d0707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0709: je 0x6d0720 */ if (fZ) goto L_006d0720;
L_006d070b:; BB(0x006d070b);
    /* 006d070b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006d070e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d0710: ja 0x6d0720 */ if ((!fC&&!fZ)) goto L_006d0720;
L_006d0712:; BB(0x006d0712);
    /* 006d0712: mov dword ptr [ebx + 0x20], 0xb */ W32((u32)(r_ebx+0x20u), 0xbu);
    /* 006d0719: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d071c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d071d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d071e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d071f: ret  */ FN_RET(0x006d0698); r_esp += 4; return;
L_006d0720:; BB(0x006d0720);
    /* 006d0720: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0722: je 0x6d07fa */ if (fZ) goto L_006d07fa;
L_006d0728:; BB(0x006d0728);
    /* 006d0728: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d072a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d072c: mov esi, edx */ r_esi = r_edx;
    /* 006d072e: mov edi, ecx */ r_edi = r_ecx;
L_006d0730:; BB(0x006d0730);
    /* 006d0730: cmp edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006d0733: jae 0x6d07f2 */ if (!fC) goto L_006d07f2;
L_006d0739:; BB(0x006d0739);
    /* 006d0739: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d073b: movzx edx, byte ptr [eax + 9] */ r_edx = (u32)R8((u32)(r_eax+0x9u));
    /* 006d073f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0741: je 0x6d079c */ if (fZ) goto L_006d079c;
L_006d0743:; BB(0x006d0743);
    /* 006d0743: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0746: jne 0x6d0769 */ if (!fZ) goto L_006d0769;
L_006d0748:; BB(0x006d0748);
    /* 006d0748: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 006d074b: movzx eax, byte ptr [eax + 0x140] */ r_eax = (u32)R8((u32)(r_eax+0x140u));
    /* 006d0752: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0755: je 0x6d07d6 */ if (fZ) goto L_006d07d6;
L_006d075b:; BB(0x006d075b);
    /* 006d075b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d075c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d075d: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d0760: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0762: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d0767u); f_00740084();
    /* 006d0767: jmp 0x6d07ab */ goto L_006d07ab;
L_006d0769:; BB(0x006d0769);
    /* 006d0769: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d076c: jne 0x6d078b */ if (!fZ) goto L_006d078b;
L_006d076e:; BB(0x006d076e);
    /* 006d076e: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 006d0771: movzx eax, byte ptr [eax + 0x140] */ r_eax = (u32)R8((u32)(r_eax+0x140u));
    /* 006d0778: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d077b: je 0x6d07e4 */ if (fZ) goto L_006d07e4;
L_006d077d:; BB(0x006d077d);
    /* 006d077d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d077e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d077f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d0782: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d0784: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d0789u); f_00740084();
    /* 006d0789: jmp 0x6d07ab */ goto L_006d07ab;
L_006d078b:; BB(0x006d078b);
    /* 006d078b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d078c: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d078f: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0793: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0795: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d079au); f_00740084();
    /* 006d079a: jmp 0x6d07ab */ goto L_006d07ab;
L_006d079c:; BB(0x006d079c);
    /* 006d079c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d079d: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d07a0: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d07a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d07a4: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006d07a6: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d07abu); f_00740084();
L_006d07ab:; BB(0x006d07ab);
    /* 006d07ab: mov eax, dword ptr [0xa96084] */ r_eax = R32((u32)(0xa96084u));
    /* 006d07b0: add esi, 0x13c */ {  u32 a = r_esi; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d07b6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d07b9: jmp 0x6d0730 */ goto L_006d0730;
L_006d07be:; BB(0x006d07be);
    /* 006d07be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d07c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d07c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d07c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d07c4: ret  */ FN_RET(0x006d0698); r_esp += 4; return;
L_006d07c5:; BB(0x006d07c5);
    /* 006d07c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d07c7: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006d07c9: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6d07ceu); f_006dbde4();
    /* 006d07ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d07d1: jmp 0x6d06e5 */ goto L_006d06e5;
L_006d07d6:; BB(0x006d07d6);
    /* 006d07d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d07d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d07d8: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d07db: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006d07dd: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d07e2u); f_00740084();
    /* 006d07e2: jmp 0x6d07ab */ goto L_006d07ab;
L_006d07e4:; BB(0x006d07e4);
    /* 006d07e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d07e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d07e6: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d07e9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006d07eb: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d07f0u); f_00740084();
    /* 006d07f0: jmp 0x6d07ab */ goto L_006d07ab;
L_006d07f2:; BB(0x006d07f2);
    /* 006d07f2: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d07f5: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d07fau); f_00737cdc();
L_006d07fa:; BB(0x006d07fa);
    /* 006d07fa: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006d07fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d07ff: je 0x6d0829 */ if (fZ) goto L_006d0829;
L_006d0801:; BB(0x006d0801);
    /* 006d0801: mov eax, dword ptr [0xa96084] */ r_eax = R32((u32)(0xa96084u));
    /* 006d0806: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d080b: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d080e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d080f: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d0814u); f_0073ae38();
L_006d0814:; BB(0x006d0814);
    /* 006d0814: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 006d081b: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d0822: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0825: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0826: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0827: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0828: ret  */ FN_RET(0x006d0698); r_esp += 4; return;
L_006d0829:; BB(0x006d0829);
    /* 006d0829: mov dword ptr [esp], 0x43640000 */ W32((u32)(r_esp), 0x43640000u);
    /* 006d0830: mov dword ptr [esp + 4], 0x43380000 */ W32((u32)(r_esp+0x4u), 0x43380000u);
    /* 006d0838: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d083a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d083fu); f_0073ec50();
    /* 006d083f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006d0843: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0845: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0847: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6d084cu); f_0073a8dc();
    /* 006d084c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d084f: mov edx, dword ptr [0xa96084] */ r_edx = R32((u32)(0xa96084u));
    /* 006d0855: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d085a: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 006d085d: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0860: mov ecx, eax */ r_ecx = r_eax;
    /* 006d0862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0863: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d0868u); f_0073ae38();
    /* 006d0868: jmp 0x6d0814 */ goto L_006d0814;
}

void f_006d086c(void) /* sub_6D086C */
{
    FN_ENTER(0x006d086c);
    /* 006d086c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d086d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d086f: push dword ptr [ebp + 0x80] */ { u32 v = R32((u32)(r_ebp+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0875: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d087b: call 0x7d76f4 */ r_esp -= 4; W32(r_esp, 0x6d0880u); f_007d76f4();
    /* 006d0880: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d0887: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0889: mov dword ptr [0xa96178], eax */ W32((u32)(0xa96178u), r_eax);
    /* 006d088e: mov dword ptr [0xa96170], eax */ W32((u32)(0xa96170u), r_eax);
    /* 006d0893: mov dword ptr [0xa96174], eax */ W32((u32)(0xa96174u), r_eax);
    /* 006d0898: mov dword ptr [0xa9616c], eax */ W32((u32)(0xa9616cu), r_eax);
    /* 006d089d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d089e: ret  */ FN_RET(0x006d086c); r_esp += 4; return;
}

void f_006d08a0(void) /* sub_6D08A0 */
{
    FN_ENTER(0x006d08a0);
    /* 006d08a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d08a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006d08a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d08a5: push 0x8edd24 */ { u32 v = 0x8edd24u; r_esp -= 4; W32(r_esp, v); }
    /* 006d08aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d08b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d08b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d08b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d08bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d08be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006d08c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006d08c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006d08c7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d08ca: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006d08cd: mov eax, ecx */ r_eax = r_ecx;
    /* 006d08cf: mov dword ptr [eax], 0xb3c150 */ W32((u32)(r_eax), 0xb3c150u);
    /* 006d08d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d08dc: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d08e1u); f_006dc848();
    /* 006d08e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006d08e4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d08e6: jne 0x6d08f8 */ if (!fZ) goto L_006d08f8;
L_006d08e8:; BB(0x006d08e8);
    /* 006d08e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d08eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d08f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006d08f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d08f5: ret 4 */ FN_RET(0x006d08a0); r_esp += 8; return;
L_006d08f8:; BB(0x006d08f8);
    /* 006d08f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d08fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d08fc: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d0901u); f_005c2f74();
    /* 006d0901: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0902: jmp 0x6d08e8 */ goto L_006d08e8;
}

void f_006d0954(void) /* sub_6D0954 */
{
    FN_ENTER(0x006d0954);
    /* 006d0954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0955: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d0957: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0959: call 0x6d0978 */ r_esp -= 4; W32(r_esp, 0x6d095eu); f_006d0978();
    /* 006d095e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d0962: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0964: jne 0x6d096a */ if (!fZ) goto L_006d096a;
L_006d0966:; BB(0x006d0966);
    /* 006d0966: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0967: ret 4 */ FN_RET(0x006d0954); r_esp += 8; return;
L_006d096a:; BB(0x006d096a);
    /* 006d096a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d096b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d0970u); f_005c2f74();
    /* 006d0970: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0972: ret 4 */ FN_RET(0x006d0954); r_esp += 8; return;
}

void f_006d0978(void) /* sub_6D0978 */
{
    FN_ENTER(0x006d0978);
    /* 006d0978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d0979: mov ebp, esp */ r_ebp = r_esp;
    /* 006d097b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d097d: push 0x8edd6a */ { u32 v = 0x8edd6au; r_esp -= 4; W32(r_esp, v); }
    /* 006d0982: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d0988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0989: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d0990: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d0993: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d0996: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d0999: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d099c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d099f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d09a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d09a9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d09ac: mov eax, dword ptr [edx + 0x6040] */ r_eax = R32((u32)(r_edx+0x6040u));
    /* 006d09b2: mov dword ptr [edx], 0xb3c17c */ W32((u32)(r_edx), 0xb3c17cu);
    /* 006d09b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d09ba: je 0x6d09d0 */ if (fZ) goto L_006d09d0;
L_006d09bc:; BB(0x006d09bc);
    /* 006d09bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d09bd: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6d09c2u); f_0082e960();
    /* 006d09c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d09c3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d09c6: mov dword ptr [edx + 0x6040], 0 */ W32((u32)(r_edx+0x6040u), 0x0u);
L_006d09d0:; BB(0x006d09d0);
    /* 006d09d0: mov ecx, dword ptr [edx + 0x14764] */ r_ecx = R32((u32)(r_edx+0x14764u));
    /* 006d09d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d09d8: je 0x6d09ec */ if (fZ) goto L_006d09ec;
L_006d09da:; BB(0x006d09da);
    /* 006d09da: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d09dfu); f_007127b0();
    /* 006d09df: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d09e2: mov dword ptr [edx + 0x14764], 0 */ W32((u32)(r_edx+0x14764u), 0x0u);
L_006d09ec:; BB(0x006d09ec);
    /* 006d09ec: mov ecx, dword ptr [edx + 0x14760] */ r_ecx = R32((u32)(r_edx+0x14760u));
    /* 006d09f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d09f4: je 0x6d0a08 */ if (fZ) goto L_006d0a08;
L_006d09f6:; BB(0x006d09f6);
    /* 006d09f6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d09fbu); f_007127b0();
    /* 006d09fb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d09fe: mov dword ptr [edx + 0x14760], 0 */ W32((u32)(r_edx+0x14760u), 0x0u);
L_006d0a08:; BB(0x006d0a08);
    /* 006d0a08: mov ecx, dword ptr [edx + 0x1475c] */ r_ecx = R32((u32)(r_edx+0x1475cu));
    /* 006d0a0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0a10: je 0x6d0a24 */ if (fZ) goto L_006d0a24;
L_006d0a12:; BB(0x006d0a12);
    /* 006d0a12: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0a17u); f_007127b0();
    /* 006d0a17: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d0a1a: mov dword ptr [edx + 0x1475c], 0 */ W32((u32)(r_edx+0x1475cu), 0x0u);
L_006d0a24:; BB(0x006d0a24);
    /* 006d0a24: mov ecx, dword ptr [edx + 0x14758] */ r_ecx = R32((u32)(r_edx+0x14758u));
    /* 006d0a2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0a2c: je 0x6d0a40 */ if (fZ) goto L_006d0a40;
L_006d0a2e:; BB(0x006d0a2e);
    /* 006d0a2e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0a33u); f_007127b0();
    /* 006d0a33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d0a36: mov dword ptr [eax + 0x14758], 0 */ W32((u32)(r_eax+0x14758u), 0x0u);
L_006d0a40:; BB(0x006d0a40);
    /* 006d0a40: push dword ptr [0x9cf0d0] */ { u32 v = R32((u32)(0x9cf0d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0a46: call 0x5b85bc */ r_esp -= 4; W32(r_esp, 0x6d0a4bu); f_005b85bc();
    /* 006d0a4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0a4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d0a4f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006d0a52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d0a55: mov dword ptr [ecx], 0xb3c150 */ W32((u32)(r_ecx), 0xb3c150u);
    /* 006d0a5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d0a62: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d0a67u); f_006dc848();
    /* 006d0a67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d0a6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d0a71: mov esp, ebp */ r_esp = r_ebp;
    /* 006d0a73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0a74: ret  */ FN_RET(0x006d0978); r_esp += 4; return;
}

void f_006d0a40(void)
{
    FN_ENTER(0x006d0a40);
    /* 006d0a40: push dword ptr [0x9cf0d0] */ { u32 v = R32((u32)(0x9cf0d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0a46: call 0x5b85bc */ r_esp -= 4; W32(r_esp, 0x6d0a4bu); f_005b85bc();
    /* 006d0a4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0a4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d0a4f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006d0a52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d0a55: mov dword ptr [ecx], 0xb3c150 */ W32((u32)(r_ecx), 0xb3c150u);
    /* 006d0a5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d0a62: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d0a67u); f_006dc848();
    /* 006d0a67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d0a6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d0a71: mov esp, ebp */ r_esp = r_ebp;
    /* 006d0a73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0a74: ret  */ FN_RET(0x006d0a40); r_esp += 4; return;
}

void f_006d0a78(void) /* sub_6D0A78 */
{
    FN_ENTER(0x006d0a78);
    /* 006d0a78: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006d0a7c: movsx edx, byte ptr [ecx + 0x12] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x12u));
    /* 006d0a80: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0a83: je 0x6d0aa3 */ if (fZ) goto L_006d0aa3;
L_006d0a85:; BB(0x006d0a85);
    /* 006d0a85: movsx eax, word ptr [ecx + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x10u));
    /* 006d0a89: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0a8c: je 0x6d0aa3 */ if (fZ) goto L_006d0aa3;
L_006d0a8e:; BB(0x006d0a8e);
    /* 006d0a8e: cmp edx, dword ptr [0xa9cd44] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9cd44u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0a94: jne 0x6d0aa3 */ if (!fZ) goto L_006d0aa3;
L_006d0a96:; BB(0x006d0a96);
    /* 006d0a96: movsx eax, byte ptr [ecx + 0x13] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x13u));
    /* 006d0a9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0a9c: je 0x6d0aa8 */ if (fZ) goto L_006d0aa8;
L_006d0a9e:; BB(0x006d0a9e);
    /* 006d0a9e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d0aa1: je 0x6d0aa8 */ if (fZ) goto L_006d0aa8;
L_006d0aa3:; BB(0x006d0aa3);
    /* 006d0aa3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0aa5: ret 4 */ FN_RET(0x006d0a78); r_esp += 8; return;
L_006d0aa8:; BB(0x006d0aa8);
    /* 006d0aa8: mov eax, 1 */ r_eax = 0x1u;
    /* 006d0aad: ret 4 */ FN_RET(0x006d0a78); r_esp += 8; return;
}

void f_006d0ab0(void) /* sub_6D0AB0 */
{
    FN_ENTER(0x006d0ab0);
    /* 006d0ab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ab1: mov edi, ecx */ r_edi = r_ecx;
    /* 006d0ab3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0ab7: mov ecx, edi */ r_ecx = r_edi;
    /* 006d0ab9: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d0abeu); f_006dc898();
    /* 006d0abe: mov dword ptr [edi], 0xb3c150 */ W32((u32)(r_edi), 0xb3c150u);
    /* 006d0ac4: mov edx, dword ptr [0x9cf0b0] */ r_edx = R32((u32)(0x9cf0b0u));
    /* 006d0aca: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006d0acd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0acf: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006d0ad2: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d0ad5: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d0ad8: mov eax, edi */ r_eax = r_edi;
    /* 006d0ada: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0adb: ret 4 */ FN_RET(0x006d0ab0); r_esp += 8; return;
}

void f_006d0ae0(void) /* sub_6D0AE0 */
{
    FN_ENTER(0x006d0ae0);
    /* 006d0ae0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ae1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ae2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d0ae5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d0ae7: mov dword ptr [ebx + 0xe770], 0 */ W32((u32)(r_ebx+0xe770u), 0x0u);
    /* 006d0af1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0af3: mov esi, ecx */ r_esi = r_ecx;
L_006d0af5:; BB(0x006d0af5);
    /* 006d0af5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0af6: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6d0afbu); f_0082c204();
    /* 006d0afb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006d0afe: je 0x6d0b0f */ if (fZ) goto L_006d0b0f;
L_006d0b00:; BB(0x006d0b00);
    /* 006d0b00: mov ecx, esi */ r_ecx = r_esi;
    /* 006d0b02: mov eax, 1 */ r_eax = 0x1u;
    /* 006d0b07: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006d0b09: or dword ptr [ebx + 0xe770], eax */ { u32 ad = (u32)(r_ebx+0xe770u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006d0b0f:; BB(0x006d0b0f);
    /* 006d0b0f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d0b12: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d0b15: jl 0x6d0af5 */ if ((fS!=fO)) goto L_006d0af5;
L_006d0b17:; BB(0x006d0b17);
    /* 006d0b17: mov eax, dword ptr [ebx + 0xe770] */ r_eax = R32((u32)(r_ebx+0xe770u));
    /* 006d0b1d: cmp eax, dword ptr [ebx + 0xe774] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xe774u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0b23: je 0x6d0b4b */ if (fZ) goto L_006d0b4b;
L_006d0b25:; BB(0x006d0b25);
    /* 006d0b25: mov dword ptr [ebx + 0xe774], eax */ W32((u32)(r_ebx+0xe774u), r_eax);
    /* 006d0b2b: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0b2d: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d0b32u); f_007930dc();
    /* 006d0b32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0b33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0b35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0b36: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d0b38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b3a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d0b3du); call_ind(t); }
    /* 006d0b3d: mov dword ptr [ebx + 0x20], 0x12 */ W32((u32)(r_ebx+0x20u), 0x12u);
    /* 006d0b44: mov eax, 0x12 */ r_eax = 0x12u;
    /* 006d0b49: jmp 0x6d0b4e */ goto L_006d0b4e;
L_006d0b4b:; BB(0x006d0b4b);
    /* 006d0b4b: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
L_006d0b4e:; BB(0x006d0b4e);
    /* 006d0b4e: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006d0b51: ja 0x6d0e0a */ if ((!fC&&!fZ)) goto L_006d0e0a;
L_006d0b57:; BB(0x006d0b57);
    /* 006d0b57: mov eax, dword ptr [eax*4 + 0x96bf20] */ r_eax = R32((u32)(r_eax*4+0x96bf20u));
    /* 006d0b5e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0ae0); r_esp += 4; return;
}

void f_006d0b60(void)
{
    FN_ENTER(0x006d0b60);
    /* 006d0b60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b62: call 0x6d0ed0 */ r_esp -= 4; W32(r_esp, 0x6d0b67u); f_006d0ed0();
    /* 006d0b67: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0b60); r_esp += 4; return;
}

void f_006d0b6c(void)
{
    FN_ENTER(0x006d0b6c);
    /* 006d0b6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b6e: call 0x6d2acc */ r_esp -= 4; W32(r_esp, 0x6d0b73u); f_006d2acc();
    /* 006d0b73: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0b6c); r_esp += 4; return;
}

void f_006d0b78(void)
{
    FN_ENTER(0x006d0b78);
    /* 006d0b78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b7a: call 0x6d0158 */ r_esp -= 4; W32(r_esp, 0x6d0b7fu); f_006d0158();
    /* 006d0b7f: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0b78); r_esp += 4; return;
}

void f_006d0b84(void)
{
    FN_ENTER(0x006d0b84);
    /* 006d0b84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b86: call 0x6d0ef8 */ r_esp -= 4; W32(r_esp, 0x6d0b8bu); f_006d0ef8();
    /* 006d0b8b: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0b84); r_esp += 4; return;
}

void f_006d0b90(void)
{
    FN_ENTER(0x006d0b90);
    /* 006d0b90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b92: call 0x6d2b00 */ r_esp -= 4; W32(r_esp, 0x6d0b97u); f_006d2b00();
    /* 006d0b97: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0b90); r_esp += 4; return;
}

void f_006d0b9c(void)
{
    FN_ENTER(0x006d0b9c);
    /* 006d0b9c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0b9e: call 0x6d0f2c */ r_esp -= 4; W32(r_esp, 0x6d0ba3u); f_006d0f2c();
    /* 006d0ba3: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0b9c); r_esp += 4; return;
}

void f_006d0ba8(void)
{
    FN_ENTER(0x006d0ba8);
    /* 006d0ba8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0baa: call 0x6d0fdc */ r_esp -= 4; W32(r_esp, 0x6d0bafu); f_006d0fdc();
    /* 006d0baf: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0ba8); r_esp += 4; return;
}

void f_006d0bb4(void)
{
    FN_ENTER(0x006d0bb4);
    /* 006d0bb4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0bb6: call 0x6d11c0 */ r_esp -= 4; W32(r_esp, 0x6d0bbbu); f_006d11c0();
    /* 006d0bbb: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0bb4); r_esp += 4; return;
}

void f_006d0bc0(void)
{
    FN_ENTER(0x006d0bc0);
    /* 006d0bc0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0bc2: call 0x6d128c */ r_esp -= 4; W32(r_esp, 0x6d0bc7u); f_006d128c();
    /* 006d0bc7: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0bc0); r_esp += 4; return;
}

void f_006d0bcc(void)
{
    FN_ENTER(0x006d0bcc);
    /* 006d0bcc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0bce: call 0x6d1400 */ r_esp -= 4; W32(r_esp, 0x6d0bd3u); f_006d1400();
    /* 006d0bd3: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0bcc); r_esp += 4; return;
}

void f_006d0bd8(void)
{
    FN_ENTER(0x006d0bd8);
    /* 006d0bd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0bda: call 0x6d1580 */ r_esp -= 4; W32(r_esp, 0x6d0bdfu); f_006d1580();
    /* 006d0bdf: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0bd8); r_esp += 4; return;
}

void f_006d0be4(void)
{
    FN_ENTER(0x006d0be4);
    /* 006d0be4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0be6: call 0x6d1610 */ r_esp -= 4; W32(r_esp, 0x6d0bebu); f_006d1610();
    /* 006d0beb: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0be4); r_esp += 4; return;
}

void f_006d0bf0(void)
{
    FN_ENTER(0x006d0bf0);
    /* 006d0bf0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0bf2: call 0x6d163c */ r_esp -= 4; W32(r_esp, 0x6d0bf7u); f_006d163c();
    /* 006d0bf7: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0bf0); r_esp += 4; return;
}

void f_006d0bfc(void)
{
    FN_ENTER(0x006d0bfc);
    /* 006d0bfc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0bfe: call 0x6d2c1c */ r_esp -= 4; W32(r_esp, 0x6d0c03u); f_006d2c1c();
    /* 006d0c03: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0bfc); r_esp += 4; return;
}

void f_006d0c08(void)
{
    FN_ENTER(0x006d0c08);
    /* 006d0c08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0c0a: call 0x6d16f4 */ r_esp -= 4; W32(r_esp, 0x6d0c0fu); f_006d16f4();
    /* 006d0c0f: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0c08); r_esp += 4; return;
}

void f_006d0c14(void)
{
    FN_ENTER(0x006d0c14);
    /* 006d0c14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0c16: call 0x6d1a00 */ r_esp -= 4; W32(r_esp, 0x6d0c1bu); f_006d1a00();
    /* 006d0c1b: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0c14); r_esp += 4; return;
}

void f_006d0c20(void)
{
    FN_ENTER(0x006d0c20);
    /* 006d0c20: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
L_006d0c26:; BB(0x006d0c26);
    /* 006d0c26: cmp eax, 0x5f */ {  u32 a = r_eax; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d0c29: jge 0x6d0d1f */ if ((fS==fO)) goto L_006d0d1f;
L_006d0c2f:; BB(0x006d0c2f);
    /* 006d0c2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d0c31: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006d0c34: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006d0c38: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006d0c3c: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 006d0c40: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
    /* 006d0c46: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d0c49: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0c4d: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0c52: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0c57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0c58: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6d0c5du); f_00858bf5();
    /* 006d0c5d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006d0c61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0c62: push dword ptr [ebx + 0xe768] */ { u32 v = R32((u32)(r_ebx+0xe768u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0c68: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6d0c6du); f_0082c198();
    /* 006d0c6d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d0c70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0c72: jne 0x6d0c7b */ if (!fZ) goto L_006d0c7b;
L_006d0c74:; BB(0x006d0c74);
    /* 006d0c74: mov esi, 1 */ r_esi = 0x1u;
    /* 006d0c79: jmp 0x6d0c8e */ goto L_006d0c8e;
L_006d0c7b:; BB(0x006d0c7b);
    /* 006d0c7b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006d0c7d: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0c82: jne 0x6d0c8e */ if (!fZ) goto L_006d0c8e;
L_006d0c84:; BB(0x006d0c84);
    /* 006d0c84: mov dword ptr [ebx + 0xe778], 1 */ W32((u32)(r_ebx+0xe778u), 0x1u);
L_006d0c8e:; BB(0x006d0c8e);
    /* 006d0c8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d0c90: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006d0c93: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006d0c97: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006d0c9b: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 006d0c9f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d0ca2: push dword ptr [ebx + 0xe764] */ { u32 v = R32((u32)(r_ebx+0xe764u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0ca8: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0cad: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0cb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0cb3: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6d0cb8u); f_00858bf5();
    /* 006d0cb8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006d0cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0cbd: push dword ptr [ebx + 0xe768] */ { u32 v = R32((u32)(r_ebx+0xe768u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d0cc3: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6d0cc8u); f_0082c198();
    /* 006d0cc8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d0ccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0ccd: je 0x6d0cf9 */ if (fZ) goto L_006d0cf9;
L_006d0ccf:; BB(0x006d0ccf);
    /* 006d0ccf: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0cd4: jne 0x6d0ce2 */ if (!fZ) goto L_006d0ce2;
L_006d0cd6:; BB(0x006d0cd6);
    /* 006d0cd6: mov dword ptr [ebx + 0xe778], 1 */ W32((u32)(r_ebx+0xe778u), 0x1u);
    /* 006d0ce0: jmp 0x6d0d0b */ goto L_006d0d0b;
L_006d0ce2:; BB(0x006d0ce2);
    /* 006d0ce2: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0ce7: jne 0x6d0d0b */ if (!fZ) goto L_006d0d0b;
L_006d0ce9:; BB(0x006d0ce9);
    /* 006d0ce9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0ceb: je 0x6d0d0b */ if (fZ) goto L_006d0d0b;
L_006d0ced:; BB(0x006d0ced);
    /* 006d0ced: mov dword ptr [ebx + 0xe778], 1 */ W32((u32)(r_ebx+0xe778u), 0x1u);
    /* 006d0cf7: jmp 0x6d0d0b */ goto L_006d0d0b;
L_006d0cf9:; BB(0x006d0cf9);
    /* 006d0cf9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0cfb: jne 0x6d0e10 */ if (!fZ) goto L_006d0e10;
L_006d0d01:; BB(0x006d0d01);
    /* 006d0d01: mov dword ptr [ebx + 0xe778], 1 */ W32((u32)(r_ebx+0xe778u), 0x1u);
L_006d0d0b:; BB(0x006d0d0b);
    /* 006d0d0b: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
    /* 006d0d11: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0d14: mov dword ptr [ebx + 0xe764], eax */ W32((u32)(r_ebx+0xe764u), r_eax);
    /* 006d0d1a: jmp 0x6d0c26 */ goto L_006d0c26;
L_006d0d1f:; BB(0x006d0d1f);
    /* 006d0d1f: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d0d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0d27: je 0x6d0d90 */ if (fZ) goto L_006d0d90;
L_006d0d29:; BB(0x006d0d29);
    /* 006d0d29: mov eax, dword ptr [ebx + 0xe77c] */ r_eax = R32((u32)(r_ebx+0xe77cu));
    /* 006d0d2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0d31: jne 0x6d0d76 */ if (!fZ) goto L_006d0d76;
L_006d0d33:; BB(0x006d0d33);
    /* 006d0d33: mov eax, dword ptr [ebx + 0xe778] */ r_eax = R32((u32)(r_ebx+0xe778u));
    /* 006d0d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0d3b: je 0x6d0d5e */ if (fZ) goto L_006d0d5e;
L_006d0d3d:; BB(0x006d0d3d);
    /* 006d0d3d: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d3f: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d0d44u); f_007930dc();
    /* 006d0d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0d45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d48: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d0d4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0d4c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d0d4fu); call_ind(t); }
    /* 006d0d4f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0d53: call 0x6d2dac */ r_esp -= 4; W32(r_esp, 0x6d0d58u); f_006d2dac();
    /* 006d0d58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0d5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0d5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0d5d: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
L_006d0d5e:; BB(0x006d0d5e);
    /* 006d0d5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d60: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d62: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d0d64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0d66: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0d69u); call_ind(t); }
    /* 006d0d69: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d0d70: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0d73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0d74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0d75: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
L_006d0d76:; BB(0x006d0d76);
    /* 006d0d76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d78: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d7a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d0d7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0d7e: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0d81u); call_ind(t); }
    /* 006d0d81: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0d83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0d85: call 0x6d2dac */ r_esp -= 4; W32(r_esp, 0x6d0d8au); f_006d2dac();
    /* 006d0d8a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0d8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0d8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0d8f: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
L_006d0d90:; BB(0x006d0d90);
    /* 006d0d90: mov eax, dword ptr [ebx + 0xe77c] */ r_eax = R32((u32)(r_ebx+0xe77cu));
    /* 006d0d96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0d98: jne 0x6d0de2 */ if (!fZ) goto L_006d0de2;
L_006d0d9a:; BB(0x006d0d9a);
    /* 006d0d9a: mov eax, dword ptr [ebx + 0xe778] */ r_eax = R32((u32)(r_ebx+0xe778u));
    /* 006d0da0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0da2: je 0x6d0dc3 */ if (fZ) goto L_006d0dc3;
L_006d0da4:; BB(0x006d0da4);
    /* 006d0da4: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0da6: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d0dabu); f_007930dc();
    /* 006d0dab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0dac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0daf: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d0db1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0db3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d0db6u); call_ind(t); }
    /* 006d0db6: mov dword ptr [ebx + 0x20], 0x12 */ W32((u32)(r_ebx+0x20u), 0x12u);
    /* 006d0dbd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0dc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0dc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0dc2: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
L_006d0dc3:; BB(0x006d0dc3);
    /* 006d0dc3: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0dc5: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d0dcau); f_007930dc();
    /* 006d0dca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0dcb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0dce: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d0dd0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0dd2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d0dd5u); call_ind(t); }
    /* 006d0dd5: mov dword ptr [ebx + 0x20], 0x12 */ W32((u32)(r_ebx+0x20u), 0x12u);
    /* 006d0ddc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0ddf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0de0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0de1: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
L_006d0de2:; BB(0x006d0de2);
    /* 006d0de2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0de4: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d0de6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d0de8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0dea: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0dedu); call_ind(t); }
    /* 006d0ded: mov dword ptr [ebx + 0x20], 0x12 */ W32((u32)(r_ebx+0x20u), 0x12u);
    /* 006d0df4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0df7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0df8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0df9: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
L_006d0e10:; BB(0x006d0e10);
    /* 006d0e10: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d0e16: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e1a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d0e1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e1f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e21: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e23: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d0e26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e28: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e2a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e2e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e30: lea edx, [ebx + eax + 0x34] */ r_edx = (u32)(r_ebx+r_eax+0x34u);
    /* 006d0e34: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d0e37: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0e39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0e3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0e3b: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6d0e40u); f_00858900();
    /* 006d0e40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d0e43: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d0e49: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e4b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e4d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d0e50: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e52: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e54: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e56: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d0e59: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e5f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e61: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e63: mov byte ptr [eax + ebx + 0x43], 0 */ W8((u32)(r_eax+r_ebx+0x43u), 0x0u);
    /* 006d0e68: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d0e6e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e70: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e72: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d0e75: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e77: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e79: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d0e7b: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
    /* 006d0e81: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006d0e84: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0e86: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0e88: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0e8a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0e8c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0e8e: mov dword ptr [ecx + ebx + 0x3c4], eax */ W32((u32)(r_ecx+r_ebx+0x3c4u), r_eax);
    /* 006d0e95: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d0e9b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e9d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0e9f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d0ea2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0ea4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0ea6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d0ea8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006d0eab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0ead: mov eax, dword ptr [ebx + 0xe768] */ r_eax = R32((u32)(r_ebx+0xe768u));
    /* 006d0eb3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0eb5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0eb7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0eb9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d0ebb: mov dword ptr [ecx + ebx + 0x3c8], eax */ W32((u32)(r_ecx+r_ebx+0x3c8u), r_eax);
    /* 006d0ec2: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d0ec9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0ecc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0ecd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0ece: ret  */ FN_RET(0x006d0c20); r_esp += 4; return;
}

void f_006d0dfa(void)
{
    FN_ENTER(0x006d0dfa);
    /* 006d0dfa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0dfc: call 0x6d1aac */ r_esp -= 4; W32(r_esp, 0x6d0e01u); f_006d1aac();
    /* 006d0e01: jmp 0x6d0e0a */ goto L_006d0e0a;
L_006d0e0a:; BB(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0dfa); r_esp += 4; return;
}

void f_006d0e03(void)
{
    FN_ENTER(0x006d0e03);
    /* 006d0e03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d0e05: call 0x6d2d60 */ r_esp -= 4; W32(r_esp, 0x6d0e0au); f_006d2d60();
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0e03); r_esp += 4; return;
}

void f_006d0e0a(void)
{
    FN_ENTER(0x006d0e0a);
    /* 006d0e0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d0e0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d0e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0e0f: ret  */ FN_RET(0x006d0e0a); r_esp += 4; return;
}

void f_006d0ed0(void) /* sub_6D0ED0 */
{
    FN_ENTER(0x006d0ed0);
    /* 006d0ed0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ed1: mov esi, ecx */ r_esi = r_ecx;
    /* 006d0ed3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d0ed5: mov ecx, esi */ r_ecx = r_esi;
    /* 006d0ed7: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d0edau); call_ind(t); }
    /* 006d0eda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0edc: jne 0x6d0ee0 */ if (!fZ) goto L_006d0ee0;
L_006d0ede:; BB(0x006d0ede);
    /* 006d0ede: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0edf: ret  */ FN_RET(0x006d0ed0); r_esp += 4; return;
L_006d0ee0:; BB(0x006d0ee0);
    /* 006d0ee0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ee2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ee4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d0ee6: mov ecx, esi */ r_ecx = r_esi;
    /* 006d0ee8: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0eebu); call_ind(t); }
    /* 006d0eeb: mov eax, dword ptr [esi + 0xe780] */ r_eax = R32((u32)(r_esi+0xe780u));
    /* 006d0ef1: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006d0ef4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d0ef5: ret  */ FN_RET(0x006d0ed0); r_esp += 4; return;
}

void f_006d0ef8(void) /* sub_6D0EF8 */
{
    FN_ENTER(0x006d0ef8);
    /* 006d0ef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d0ef9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d0efb: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 006d0efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0f00: je 0x6d0f04 */ if (fZ) goto L_006d0f04;
L_006d0f02:; BB(0x006d0f02);
    /* 006d0f02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d0f04u); call_ind(t); }
L_006d0f04:; BB(0x006d0f04);
    /* 006d0f04: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d0f09u); f_005b7a28();
    /* 006d0f09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0f0b: je 0x6d0f1c */ if (fZ) goto L_006d0f1c;
L_006d0f0d:; BB(0x006d0f0d);
    /* 006d0f0d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d0f11: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0f16: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d0f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0f1b: ret  */ FN_RET(0x006d0ef8); r_esp += 4; return;
L_006d0f1c:; BB(0x006d0f1c);
    /* 006d0f1c: push 0x96bffc */ { u32 v = 0x96bffcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d0f21: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x6d0f26u); f_005b9008();
    /* 006d0f26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d0f27: jmp 0x6d0f0d */ goto L_006d0f0d;
}

void f_006d0f2c(void) /* sub_6D0F2C */
{
    FN_ENTER(0x006d0f2c);
    /* 006d0f2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d0f2d: mov edi, ecx */ r_edi = r_ecx;
    /* 006d0f2f: mov eax, dword ptr [edi + 0xe740] */ r_eax = R32((u32)(r_edi+0xe740u));
    /* 006d0f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0f37: je 0x6d0fc2 */ if (fZ) goto L_006d0fc2;
L_006d0f3d:; BB(0x006d0f3d);
    /* 006d0f3d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006d0f44: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d0f47: je 0x6d0fc2 */ if (fZ) goto L_006d0fc2;
L_006d0f49:; BB(0x006d0f49);
    /* 006d0f49: mov ecx, dword ptr [edi + 0xe74c] */ r_ecx = R32((u32)(r_edi+0xe74cu));
    /* 006d0f4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0f51: je 0x6d0f68 */ if (fZ) goto L_006d0f68;
L_006d0f53:; BB(0x006d0f53);
    /* 006d0f53: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0f58u); f_007127b0();
    /* 006d0f58: mov eax, dword ptr [edi + 0xe740] */ r_eax = R32((u32)(r_edi+0xe740u));
    /* 006d0f5e: mov dword ptr [edi + 0xe74c], 0 */ W32((u32)(r_edi+0xe74cu), 0x0u);
L_006d0f68:; BB(0x006d0f68);
    /* 006d0f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0f6a: je 0x6d0fa7 */ if (fZ) goto L_006d0fa7;
L_006d0f6c:; BB(0x006d0f6c);
    /* 006d0f6c: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006d0f73: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d0f79: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006d0f7c: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006d0f83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0f85: je 0x6d0f8e */ if (fZ) goto L_006d0f8e;
L_006d0f87:; BB(0x006d0f87);
    /* 006d0f87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0f89: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d0f8eu); f_00760acc();
L_006d0f8e:; BB(0x006d0f8e);
    /* 006d0f8e: mov edx, dword ptr [edi + 0xe740] */ r_edx = R32((u32)(r_edi+0xe740u));
    /* 006d0f94: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d0f9b: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d0fa0: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_006d0fa7:; BB(0x006d0fa7);
    /* 006d0fa7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0fa9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0fab: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d0fad: mov ecx, edi */ r_ecx = r_edi;
    /* 006d0faf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0fb2u); call_ind(t); }
    /* 006d0fb2: mov ecx, edi */ r_ecx = r_edi;
    /* 006d0fb4: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d0fb9u); f_006d1154();
    /* 006d0fb9: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 006d0fc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0fc1: ret  */ FN_RET(0x006d0f2c); r_esp += 4; return;
L_006d0fc2:; BB(0x006d0fc2);
    /* 006d0fc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0fc4: je 0x6d0fda */ if (fZ) goto L_006d0fda;
L_006d0fc6:; BB(0x006d0fc6);
    /* 006d0fc6: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 006d0fcd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0fcf: je 0x6d0fda */ if (fZ) goto L_006d0fda;
L_006d0fd1:; BB(0x006d0fd1);
    /* 006d0fd1: mov dword ptr [edi + 0x20], 0x11 */ W32((u32)(r_edi+0x20u), 0x11u);
    /* 006d0fd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0fd9: ret  */ FN_RET(0x006d0f2c); r_esp += 4; return;
L_006d0fda:; BB(0x006d0fda);
    /* 006d0fda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d0fdb: ret  */ FN_RET(0x006d0f2c); r_esp += 4; return;
}

void f_006d0fdc(void) /* sub_6D0FDC */
{
    FN_ENTER(0x006d0fdc);
    /* 006d0fdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d0fdd: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d0fe0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d0fe2: mov ecx, dword ptr [ebx + 0xe740] */ r_ecx = R32((u32)(r_ebx+0xe740u));
    /* 006d0fe8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0fea: je 0x6d113d */ if (fZ) goto L_006d113d;
L_006d0ff0:; BB(0x006d0ff0);
    /* 006d0ff0: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d0ff5u); f_00737d90();
    /* 006d0ff5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0ff7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d0ff9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d0ffc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d0ffe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1000: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1002: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1005: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1007: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1009: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d100b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d100d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d100f: push dword ptr [eax + ebx + 0x3c8] */ { u32 v = R32((u32)(r_eax+r_ebx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1016: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d101bu); f_006dc358();
    /* 006d101b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d101c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d101e: jne 0x6d113d */ if (!fZ) goto L_006d113d;
L_006d1024:; BB(0x006d1024);
    /* 006d1024: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d1027: push dword ptr [ebx + 0xe754] */ { u32 v = R32((u32)(r_ebx+0xe754u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d102d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d102e: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d1033u); f_0082c21c();
    /* 006d1033: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1036: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1038: je 0x6d1088 */ if (fZ) goto L_006d1088;
L_006d103a:; BB(0x006d103a);
    /* 006d103a: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d103f: jne 0x6d105f */ if (!fZ) goto L_006d105f;
L_006d1041:; BB(0x006d1041);
    /* 006d1041: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1043: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d1045: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d1047: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1049: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d104cu); call_ind(t); }
    /* 006d104c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d104e: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d1053u); f_006d1154();
    /* 006d1053: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d105a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d105d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d105e: ret  */ FN_RET(0x006d0fdc); r_esp += 4; return;
L_006d105f:; BB(0x006d105f);
    /* 006d105f: cmp eax, 0xffffff20 */ {  u32 a = r_eax; u32 b = 0xffffff20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1064: jne 0x6d113d */ if (!fZ) goto L_006d113d;
L_006d106a:; BB(0x006d106a);
    /* 006d106a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d106c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d106e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d1070: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1072: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d1075u); call_ind(t); }
    /* 006d1075: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1077: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d107cu); f_006d1154();
    /* 006d107c: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d1083: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1086: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1087: ret  */ FN_RET(0x006d0fdc); r_esp += 4; return;
L_006d1088:; BB(0x006d1088);
    /* 006d1088: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d108a: call 0x6d1144 */ r_esp -= 4; W32(r_esp, 0x6d108fu); f_006d1144();
    /* 006d108f: push dword ptr [esp + 0x5c] */ { u32 v = R32((u32)(r_esp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1093: push dword ptr [esp + 0x5c] */ { u32 v = R32((u32)(r_esp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1097: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006d109c: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006d10a1: call 0x6be204 */ r_esp -= 4; W32(r_esp, 0x6d10a6u); f_006be204();
    /* 006d10a6: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d10aa: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d10ae: call 0x6be2bc */ r_esp -= 4; W32(r_esp, 0x6d10b3u); f_006be2bc();
    /* 006d10b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d10b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d10b8: jne 0x6d10e9 */ if (!fZ) goto L_006d10e9;
L_006d10ba:; BB(0x006d10ba);
    /* 006d10ba: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
    /* 006d10c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d10c2: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d10c4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d10c6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d10c9: mov dword ptr [ebx + 0xe764], eax */ W32((u32)(r_ebx+0xe764u), r_eax);
    /* 006d10cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d10d1: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d10d4u); call_ind(t); }
    /* 006d10d4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d10d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d10d8: call 0x6d2dac */ r_esp -= 4; W32(r_esp, 0x6d10ddu); f_006d2dac();
    /* 006d10dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d10df: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d10e4u); f_006d1154();
    /* 006d10e4: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d10e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d10e8: ret  */ FN_RET(0x006d0fdc); r_esp += 4; return;
L_006d10e9:; BB(0x006d10e9);
    /* 006d10e9: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 006d10ed: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006d10f1: push dword ptr [0xa961b0] */ { u32 v = R32((u32)(0xa961b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d10f7: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d10fa: push dword ptr [0xa961b8] */ { u32 v = R32((u32)(0xa961b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1100: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1104: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1105: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d110au); f_005b9b3c();
    /* 006d110a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d110d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d110f: jbe 0x6d1122 */ if ((fC||fZ)) goto L_006d1122;
L_006d1111:; BB(0x006d1111);
    /* 006d1111: mov dword ptr [ebx + 0x20], 0xd */ W32((u32)(r_ebx+0x20u), 0xdu);
    /* 006d1118: mov dword ptr [0xa961b0], eax */ W32((u32)(0xa961b0u), r_eax);
    /* 006d111d: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1120: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1121: ret  */ FN_RET(0x006d0fdc); r_esp += 4; return;
L_006d1122:; BB(0x006d1122);
    /* 006d1122: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1124: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d1126: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d1128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d112a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d112du); call_ind(t); }
    /* 006d112d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d112f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1131: call 0x6d2dac */ r_esp -= 4; W32(r_esp, 0x6d1136u); f_006d2dac();
    /* 006d1136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1138: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d113du); f_006d1154();
L_006d113d:; BB(0x006d113d);
    /* 006d113d: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1140: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1141: ret  */ FN_RET(0x006d0fdc); r_esp += 4; return;
}

