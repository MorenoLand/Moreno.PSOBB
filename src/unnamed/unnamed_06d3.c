#include "protos.h"

void f_006d30c0(void) /* sub_6D30C0 */
{
    FN_ENTER(0x006d30c0);
    /* 006d30c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d30c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d30c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d30c5: call 0x6d30e4 */ r_esp -= 4; W32(r_esp, 0x6d30cau); f_006d30e4();
    /* 006d30ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d30ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d30d0: jne 0x6d30d6 */ if (!fZ) goto L_006d30d6;
L_006d30d2:; BB(0x006d30d2);
    /* 006d30d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d30d3: ret 4 */ FN_RET(0x006d30c0); r_esp += 8; return;
L_006d30d6:; BB(0x006d30d6);
    /* 006d30d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d30d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d30dcu); f_005c2f74();
    /* 006d30dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d30dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d30de: ret 4 */ FN_RET(0x006d30c0); r_esp += 8; return;
}

void f_006d30e0(void)
{
    FN_ENTER(0x006d30e0);
    /* 006d30e0: add byte ptr [eax - 0x74aa6f70], dl */ { u32 ad = (u32)(r_eax+0x8b559090u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006d30e6: in al, dx */ UNSUP(0x006d30e6, "in al, dx");
    /* 006d30e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d30e9: push 0x8edda0 */ { u32 v = 0x8edda0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d30ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d30f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d30f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d30fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d30ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d3102: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d3105: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d3108: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d310b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d310e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d3115: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3118: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d311b: mov dword ptr [eax], 0xb3c220 */ W32((u32)(r_eax), 0xb3c220u);
    /* 006d3121: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3123: je 0x6d3134 */ if (fZ) goto L_006d3134;
L_006d3125:; BB(0x006d3125);
    /* 006d3125: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d312au); f_007127b0();
    /* 006d312a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d312d: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d3134:; BB(0x006d3134);
    /* 006d3134: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d3137: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3139: je 0x6d314a */ if (fZ) goto L_006d314a;
L_006d313b:; BB(0x006d313b);
    /* 006d313b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3140u); f_007127b0();
    /* 006d3140: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3143: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d314a:; BB(0x006d314a);
    /* 006d314a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d314d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d314f: je 0x6d3160 */ if (fZ) goto L_006d3160;
L_006d3151:; BB(0x006d3151);
    /* 006d3151: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3156u); f_007127b0();
    /* 006d3156: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3159: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d3160:; BB(0x006d3160);
    /* 006d3160: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d3163: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3165: je 0x6d3176 */ if (fZ) goto L_006d3176;
L_006d3167:; BB(0x006d3167);
    /* 006d3167: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d316cu); f_007127b0();
    /* 006d316c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d316f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006d3176:; BB(0x006d3176);
    /* 006d3176: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d3179: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d317b: je 0x6d318c */ if (fZ) goto L_006d318c;
L_006d317d:; BB(0x006d317d);
    /* 006d317d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3182u); f_007127b0();
    /* 006d3182: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3185: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006d318c:; BB(0x006d318c);
    /* 006d318c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d3193: mov ecx, eax */ r_ecx = r_eax;
    /* 006d3195: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d319au); f_006dc848();
    /* 006d319a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d319d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d31a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006d31a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d31a7: ret  */ FN_RET(0x006d30e0); r_esp += 4; return;
}

void f_006d30e4(void) /* sub_6D30E4 */
{
    FN_ENTER(0x006d30e4);
    /* 006d30e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d30e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006d30e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d30e9: push 0x8edda0 */ { u32 v = 0x8edda0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d30ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d30f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d30f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d30fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d30ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d3102: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d3105: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d3108: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d310b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d310e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d3115: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3118: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d311b: mov dword ptr [eax], 0xb3c220 */ W32((u32)(r_eax), 0xb3c220u);
    /* 006d3121: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3123: je 0x6d3134 */ if (fZ) goto L_006d3134;
L_006d3125:; BB(0x006d3125);
    /* 006d3125: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d312au); f_007127b0();
    /* 006d312a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d312d: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d3134:; BB(0x006d3134);
    /* 006d3134: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d3137: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3139: je 0x6d314a */ if (fZ) goto L_006d314a;
L_006d313b:; BB(0x006d313b);
    /* 006d313b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3140u); f_007127b0();
    /* 006d3140: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3143: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d314a:; BB(0x006d314a);
    /* 006d314a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d314d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d314f: je 0x6d3160 */ if (fZ) goto L_006d3160;
L_006d3151:; BB(0x006d3151);
    /* 006d3151: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3156u); f_007127b0();
    /* 006d3156: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3159: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d3160:; BB(0x006d3160);
    /* 006d3160: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d3163: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3165: je 0x6d3176 */ if (fZ) goto L_006d3176;
L_006d3167:; BB(0x006d3167);
    /* 006d3167: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d316cu); f_007127b0();
    /* 006d316c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d316f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006d3176:; BB(0x006d3176);
    /* 006d3176: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d3179: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d317b: je 0x6d318c */ if (fZ) goto L_006d318c;
L_006d317d:; BB(0x006d317d);
    /* 006d317d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3182u); f_007127b0();
    /* 006d3182: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3185: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006d318c:; BB(0x006d318c);
    /* 006d318c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d3193: mov ecx, eax */ r_ecx = r_eax;
    /* 006d3195: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d319au); f_006dc848();
    /* 006d319a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d319d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d31a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006d31a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d31a7: ret  */ FN_RET(0x006d30e4); r_esp += 4; return;
}

void f_006d31a8(void) /* sub_6D31A8 */
{
    FN_ENTER(0x006d31a8);
    /* 006d31a8: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006d31ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d31ad: je 0x6d31bc */ if (fZ) goto L_006d31bc;
L_006d31af:; BB(0x006d31af);
    /* 006d31af: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d31b3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d31b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d31b9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d31bcu); call_ind(t); }
L_006d31bc:; BB(0x006d31bc);
    /* 006d31bc: ret 8 */ FN_RET(0x006d31a8); r_esp += 12; return;
}

void f_006d31c0(void) /* sub_6D31C0 */
{
    FN_ENTER(0x006d31c0);
    /* 006d31c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d31c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006d31c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d31c5: push 0x8eddbc */ { u32 v = 0x8eddbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d31ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d31d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d31d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d31d8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d31db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d31de: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d31e1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d31e4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d31e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d31ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d31ed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d31f0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006d31f3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d31f6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006d31f9: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d31feu); f_006dc898();
    /* 006d31fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d3205: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d3208: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d320b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d320e: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 006d3211: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 006d3214: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 006d3217: mov dword ptr [ebx], 0xb3c220 */ W32((u32)(r_ebx), 0xb3c220u);
    /* 006d321d: mov eax, dword ptr [0x9cf0d4] */ r_eax = R32((u32)(0x9cf0d4u));
    /* 006d3222: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006d3225: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d3227: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3229: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 006d322c: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 006d322f: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 006d3232: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 006d3235: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 006d3238: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 006d323b: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 006d323e: mov dword ptr [ebx + 0x48], ecx */ W32((u32)(r_ebx+0x48u), r_ecx);
    /* 006d3241: mov dword ptr [ebx + 0x1f4], ecx */ W32((u32)(r_ebx+0x1f4u), r_ecx);
    /* 006d3247: mov dword ptr [ebx + 0x1f0], ecx */ W32((u32)(r_ebx+0x1f0u), r_ecx);
    /* 006d324d: call 0x6d7ef8 */ r_esp -= 4; W32(r_esp, 0x6d3252u); f_006d7ef8();
    /* 006d3252: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3255: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6d325au); f_0061cdb0();
    /* 006d325a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d325d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d3260: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d3263: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3266: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d3269: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d326c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d3273: mov esp, ebp */ r_esp = r_ebp;
    /* 006d3275: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3276: ret 0xc */ FN_RET(0x006d31c0); r_esp += 16; return;
}

void f_006d327c(void) /* sub_6D327C */
{
    FN_ENTER(0x006d327c);
    /* 006d327c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d327d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d327f: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006d3282: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d3285: ja 0x6d32fc */ if ((!fC&&!fZ)) goto L_006d32fc;
L_006d3287:; BB(0x006d3287);
    /* 006d3287: mov eax, dword ptr [eax*4 + 0x96c140] */ r_eax = R32((u32)(r_eax*4+0x96c140u));
    /* 006d328e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d327c); r_esp += 4; return;
}

void f_006d3290(void)
{
    FN_ENTER(0x006d3290);
    /* 006d3290: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d3292: call 0x6d3300 */ r_esp -= 4; W32(r_esp, 0x6d3297u); f_006d3300();
    /* 006d3297: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d3290); r_esp += 4; return;
}

void f_006d3299(void)
{
    FN_ENTER(0x006d3299);
    /* 006d3299: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d329b: call 0x6d3904 */ r_esp -= 4; W32(r_esp, 0x6d32a0u); f_006d3904();
    /* 006d32a0: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d3299); r_esp += 4; return;
}

void f_006d32a2(void)
{
    FN_ENTER(0x006d32a2);
    /* 006d32a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d32a4: call 0x6d39b4 */ r_esp -= 4; W32(r_esp, 0x6d32a9u); f_006d39b4();
    /* 006d32a9: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32a2); r_esp += 4; return;
}

void f_006d32ab(void)
{
    FN_ENTER(0x006d32ab);
    /* 006d32ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d32ad: call 0x6d39bc */ r_esp -= 4; W32(r_esp, 0x6d32b2u); f_006d39bc();
    /* 006d32b2: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32ab); r_esp += 4; return;
}

void f_006d32b4(void)
{
    FN_ENTER(0x006d32b4);
    /* 006d32b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d32b6: call 0x6d39bc */ r_esp -= 4; W32(r_esp, 0x6d32bbu); f_006d39bc();
    /* 006d32bb: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32b4); r_esp += 4; return;
}

void f_006d32bd(void)
{
    FN_ENTER(0x006d32bd);
    /* 006d32bd: mov eax, dword ptr [ebx + 0x1f4] */ r_eax = R32((u32)(r_ebx+0x1f4u));
    /* 006d32c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d32c5: je 0x6d32cd */ if (fZ) goto L_006d32cd;
L_006d32c7:; BB(0x006d32c7);
    /* 006d32c7: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d32ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d32ccu); call_ind(t); }
    /* 006d32cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d32cd:; BB(0x006d32cd);
    /* 006d32cd: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d32d1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d32d6: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006d32da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32db: ret  */ FN_RET(0x006d32bd); r_esp += 4; return;
}

void f_006d32dc(void)
{
    FN_ENTER(0x006d32dc);
    /* 006d32dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d32de: call 0x6d3598 */ r_esp -= 4; W32(r_esp, 0x6d32e3u); f_006d3598();
    /* 006d32e3: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32dc); r_esp += 4; return;
}

void f_006d32e5(void)
{
    FN_ENTER(0x006d32e5);
    /* 006d32e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d32e7: call 0x6d3710 */ r_esp -= 4; W32(r_esp, 0x6d32ecu); f_006d3710();
    /* 006d32ec: jmp 0x6d32fc */ goto L_006d32fc;
L_006d32fc:; BB(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32e5); r_esp += 4; return;
}

void f_006d32ee(void)
{
    FN_ENTER(0x006d32ee);
    /* 006d32ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d32f0: call 0x6d3a10 */ r_esp -= 4; W32(r_esp, 0x6d32f5u); f_006d3a10();
    /* 006d32f5: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32ee); r_esp += 4; return;
}

void f_006d32fc(void)
{
    FN_ENTER(0x006d32fc);
    /* 006d32fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d32fd: ret  */ FN_RET(0x006d32fc); r_esp += 4; return;
}

void f_006d3300(void) /* sub_6D3300 */
{
    FN_ENTER(0x006d3300);
    /* 006d3300: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3301: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3302: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3303: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3304: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d3307: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d3309: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d330b: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d3310u); f_006dc9fc();
    /* 006d3310: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006d3313: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3315: je 0x6d3433 */ if (fZ) goto L_006d3433;
L_006d331b:; BB(0x006d331b);
    /* 006d331b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d3322: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d3324: je 0x6d3433 */ if (fZ) goto L_006d3433;
L_006d332a:; BB(0x006d332a);
    /* 006d332a: mov ecx, edx */ r_ecx = r_edx;
    /* 006d332c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d3331u); f_007365f4();
    /* 006d3331: mov esi, eax */ r_esi = r_eax;
    /* 006d3333: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3335: jne 0x6d3427 */ if (!fZ) goto L_006d3427;
L_006d333b:; BB(0x006d333b);
    /* 006d333b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d333e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3340: je 0x6d3417 */ if (fZ) goto L_006d3417;
L_006d3346:; BB(0x006d3346);
    /* 006d3346: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d334bu); f_00737d90();
    /* 006d334b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006d334f: mov ebp, eax */ r_ebp = r_eax;
    /* 006d3351: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 006d3355: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d3357: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d3359: lea ebp, [ebx + edx + 0x4c] */ r_ebp = (u32)(r_ebx+r_edx+0x4cu);
    /* 006d335d: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 006d3360: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006d3363: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006d3366: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006d336a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d336d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006d3371: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d3374: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006d3378: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d337b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006d337f: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d3386: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3387: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d338cu); f_005e3aac();
    /* 006d338c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d338d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006d3391: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d3394: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006d3398: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 006d339b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d339c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d339e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d339f: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d33a4u); f_0068f1d0();
    /* 006d33a4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d33a8: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6d33adu); f_005c5528();
    /* 006d33ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d33ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d33b0: je 0x6d33e3 */ if (fZ) goto L_006d33e3;
L_006d33b2:; BB(0x006d33b2);
    /* 006d33b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006d33b4: mov ecx, eax */ r_ecx = r_eax;
    /* 006d33b6: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6d33b9u); call_ind(t); }
    /* 006d33b9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006d33bd: mov edx, eax */ r_edx = r_eax;
    /* 006d33bf: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d33c2: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 006d33c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d33c6: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d33cc: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6d33d1u); f_0069792c();
    /* 006d33d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d33d3: je 0x6d33e3 */ if (fZ) goto L_006d33e3;
L_006d33d5:; BB(0x006d33d5);
    /* 006d33d5: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d33db: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d33de: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x6d33e3u); f_0068dfd8();
L_006d33e3:; BB(0x006d33e3);
    /* 006d33e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d33e5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d33e9: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d33ec: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x6d33f1u); f_0068de54();
    /* 006d33f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d33f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d33f4: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d33f9u); f_006d357c();
    /* 006d33f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d33fa: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d33ffu); f_006dc1f8();
    /* 006d33ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3402: je 0x6d340f */ if (fZ) goto L_006d340f;
L_006d3404:; BB(0x006d3404);
    /* 006d3404: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006d3408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3409: call 0x6c86c4 */ r_esp -= 4; W32(r_esp, 0x6d340eu); f_006c86c4();
    /* 006d340e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d340f:; BB(0x006d340f);
    /* 006d340f: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d3412: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d3417u); f_00737d70();
L_006d3417:; BB(0x006d3417);
    /* 006d3417: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d341a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d341fu); f_007127b0();
    /* 006d341f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d3421: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 006d3424: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
L_006d3427:; BB(0x006d3427);
    /* 006d3427: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d342a: je 0x6d34e4 */ if (fZ) goto L_006d34e4;
L_006d3430:; BB(0x006d3430);
    /* 006d3430: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
L_006d3433:; BB(0x006d3433);
    /* 006d3433: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3435: je 0x6d34dc */ if (fZ) goto L_006d34dc;
L_006d343b:; BB(0x006d343b);
    /* 006d343b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d3442: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d3444: je 0x6d34dc */ if (fZ) goto L_006d34dc;
L_006d344a:; BB(0x006d344a);
    /* 006d344a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d344d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d344f: je 0x6d34cd */ if (fZ) goto L_006d34cd;
L_006d3451:; BB(0x006d3451);
    /* 006d3451: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d3456u); f_00737d90();
    /* 006d3456: mov esi, eax */ r_esi = r_eax;
    /* 006d3458: lea ebp, [esi + esi*4] */ r_ebp = (u32)(r_esi+r_esi*4);
    /* 006d345b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d345d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d345f: lea ebp, [ebx + ebp + 0x4c] */ r_ebp = (u32)(r_ebx+r_ebp+0x4cu);
    /* 006d3463: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d3466: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006d346a: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 006d346d: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 006d3471: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d3474: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006d3478: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d347b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006d347f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d3482: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006d3486: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d348d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d348e: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d3493u); f_005e3aac();
    /* 006d3493: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3494: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d3497: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006d349b: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006d349f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d34a0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d34a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d34a3: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d34a8u); f_0068f1d0();
    /* 006d34a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d34a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d34ab: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d34b0u); f_006d357c();
    /* 006d34b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d34b1: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d34b6u); f_006dc1f8();
    /* 006d34b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d34b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d34b9: je 0x6d34c2 */ if (fZ) goto L_006d34c2;
L_006d34bb:; BB(0x006d34bb);
    /* 006d34bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d34bc: call 0x6c86c4 */ r_esp -= 4; W32(r_esp, 0x6d34c1u); f_006c86c4();
    /* 006d34c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d34c2:; BB(0x006d34c2);
    /* 006d34c2: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d34c5: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d34cau); f_00737d70();
    /* 006d34ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
L_006d34cd:; BB(0x006d34cd);
    /* 006d34cd: mov ecx, edx */ r_ecx = r_edx;
    /* 006d34cf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d34d4u); f_007127b0();
    /* 006d34d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d34d6: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006d34d9: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006d34dc:; BB(0x006d34dc);
    /* 006d34dc: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d34df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d34e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d34e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d34e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d34e3: ret  */ FN_RET(0x006d3300); r_esp += 4; return;
L_006d34e4:; BB(0x006d34e4);
    /* 006d34e4: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d34e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d34e9: je 0x6d3564 */ if (fZ) goto L_006d3564;
L_006d34eb:; BB(0x006d34eb);
    /* 006d34eb: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d34f0u); f_00737d90();
    /* 006d34f0: mov esi, eax */ r_esi = r_eax;
    /* 006d34f2: lea ebp, [esi + esi*4] */ r_ebp = (u32)(r_esi+r_esi*4);
    /* 006d34f5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d34f7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d34f9: lea ebp, [ebx + ebp + 0x4c] */ r_ebp = (u32)(r_ebx+r_ebp+0x4cu);
    /* 006d34fd: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d3500: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006d3504: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 006d3507: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006d350b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d350e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006d3512: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d3515: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006d3519: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d351c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006d3520: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d3527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3528: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d352du); f_005e3aac();
    /* 006d352d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d352e: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006d3531: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006d3535: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 006d3539: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d353a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d353c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d353d: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d3542u); f_0068f1d0();
    /* 006d3542: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d3545: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d354au); f_006d357c();
    /* 006d354a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d354b: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d3550u); f_006dc1f8();
    /* 006d3550: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3553: je 0x6d355c */ if (fZ) goto L_006d355c;
L_006d3555:; BB(0x006d3555);
    /* 006d3555: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3556: call 0x6c86c4 */ r_esp -= 4; W32(r_esp, 0x6d355bu); f_006c86c4();
    /* 006d355b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d355c:; BB(0x006d355c);
    /* 006d355c: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006d355f: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d3564u); f_00737d70();
L_006d3564:; BB(0x006d3564);
    /* 006d3564: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006d3567: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d356cu); f_007127b0();
    /* 006d356c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d356e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d3570: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006d3573: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006d3576: jmp 0x6d3433 */ goto L_006d3433;
}

void f_006d357c(void) /* sub_6D357C */
{
    FN_ENTER(0x006d357c);
    /* 006d357c: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 006d357f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3581: je 0x6d3594 */ if (fZ) goto L_006d3594;
L_006d3583:; BB(0x006d3583);
    /* 006d3583: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006d3587: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006d358a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d358c: jle 0x6d3594 */ if ((fZ||fS!=fO)) goto L_006d3594;
L_006d358e:; BB(0x006d358e);
    /* 006d358e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d358f: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d3594u); f_00715c74();
L_006d3594:; BB(0x006d3594);
    /* 006d3594: ret 4 */ FN_RET(0x006d357c); r_esp += 8; return;
}

void f_006d3598(void) /* sub_6D3598 */
{
    FN_ENTER(0x006d3598);
    /* 006d3598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3599: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d359a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d359b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d359e: mov edi, ecx */ r_edi = r_ecx;
    /* 006d35a0: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d35a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d35a5: je 0x6d36d4 */ if (fZ) goto L_006d36d4;
L_006d35ab:; BB(0x006d35ab);
    /* 006d35ab: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d35b2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d35b4: je 0x6d36d4 */ if (fZ) goto L_006d36d4;
L_006d35ba:; BB(0x006d35ba);
    /* 006d35ba: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d35bfu); f_007365f4();
    /* 006d35bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d35c1: jne 0x6d36cc */ if (!fZ) goto L_006d36cc;
L_006d35c7:; BB(0x006d35c7);
    /* 006d35c7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d35ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d35cc: je 0x6d36f7 */ if (fZ) goto L_006d36f7;
L_006d35d2:; BB(0x006d35d2);
    /* 006d35d2: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 006d35d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d35da: je 0x6d3641 */ if (fZ) goto L_006d3641;
L_006d35dc:; BB(0x006d35dc);
    /* 006d35dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d35de: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006d35e0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d35e2: mov ecx, edi */ r_ecx = r_edi;
    /* 006d35e4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d35e7u); call_ind(t); }
    /* 006d35e7: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d35ea: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d35efu); f_007127b0();
    /* 006d35ef: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d35f1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d35f6u); f_0073ec50();
    /* 006d35f6: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d35f9: movzx ebp, word ptr [edx + 0x1c] */ r_ebp = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d35fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d35fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d35ff: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d3604u); f_00735884();
    /* 006d3604: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3607: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d360a: mov ecx, edi */ r_ecx = r_edi;
    /* 006d360c: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d3611u); f_006dc8d8();
    /* 006d3611: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006d3615: mov ecx, edi */ r_ecx = r_edi;
    /* 006d3617: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d361cu); f_006dc8d8();
    /* 006d361c: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d361f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3622: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006d3626: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d3629: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d362d: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d3632u); f_0070f5a4();
    /* 006d3632: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d3635: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d363c: jmp 0x6d36d4 */ goto L_006d36d4;
L_006d3641:; BB(0x006d3641);
    /* 006d3641: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d3646u); f_00737d90();
    /* 006d3646: mov esi, eax */ r_esi = r_eax;
    /* 006d3648: lea ebp, [esi + esi*4] */ r_ebp = (u32)(r_esi+r_esi*4);
    /* 006d364b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d364d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d364f: lea ebp, [edi + ebp + 0x4c] */ r_ebp = (u32)(r_edi+r_ebp+0x4cu);
    /* 006d3653: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d3656: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006d3659: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006d365c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006d3660: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d3663: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006d3667: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d366a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006d366e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d3671: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006d3675: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d367c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d367d: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d3682u); f_005e3aac();
    /* 006d3682: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3683: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006d3686: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006d368a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d368d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d368e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3690: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3691: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d3696u); f_0068f1d0();
    /* 006d3696: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3697: mov ecx, edi */ r_ecx = r_edi;
    /* 006d3699: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d369eu); f_006d357c();
    /* 006d369e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d369f: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d36a4u); f_006dc1f8();
    /* 006d36a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d36a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d36a7: je 0x6d36b0 */ if (fZ) goto L_006d36b0;
L_006d36a9:; BB(0x006d36a9);
    /* 006d36a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d36aa: call 0x6c86c4 */ r_esp -= 4; W32(r_esp, 0x6d36afu); f_006c86c4();
    /* 006d36af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d36b0:; BB(0x006d36b0);
    /* 006d36b0: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d36b3: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d36b8u); f_00737d70();
    /* 006d36b8: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d36bb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d36c0u); f_007127b0();
    /* 006d36c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d36c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d36c4: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d36c7: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006d36ca: jmp 0x6d36d4 */ goto L_006d36d4;
L_006d36cc:; BB(0x006d36cc);
    /* 006d36cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d36cf: je 0x6d36fc */ if (fZ) goto L_006d36fc;
L_006d36d1:; BB(0x006d36d1);
    /* 006d36d1: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
L_006d36d4:; BB(0x006d36d4);
    /* 006d36d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d36d6: je 0x6d36f0 */ if (fZ) goto L_006d36f0;
L_006d36d8:; BB(0x006d36d8);
    /* 006d36d8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d36df: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d36e1: je 0x6d36f0 */ if (fZ) goto L_006d36f0;
L_006d36e3:; BB(0x006d36e3);
    /* 006d36e3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d36e8u); f_007127b0();
    /* 006d36e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d36ea: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d36ed: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_006d36f0:; BB(0x006d36f0);
    /* 006d36f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d36f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d36f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d36f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d36f6: ret  */ FN_RET(0x006d3598); r_esp += 4; return;
L_006d36f7:; BB(0x006d36f7);
    /* 006d36f7: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d36fa: jmp 0x6d36d4 */ goto L_006d36d4;
L_006d36fc:; BB(0x006d36fc);
    /* 006d36fc: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d36ff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3704u); f_007127b0();
    /* 006d3704: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d3706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d3708: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d370b: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006d370e: jmp 0x6d36d4 */ goto L_006d36d4;
}

void f_006d3710(void) /* sub_6D3710 */
{
    FN_ENTER(0x006d3710);
    /* 006d3710: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3711: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3712: mov esi, ecx */ r_esi = r_ecx;
    /* 006d3714: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006d3717: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3719: je 0x6d3765 */ if (fZ) goto L_006d3765;
L_006d371b:; BB(0x006d371b);
    /* 006d371b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d3720u); f_00737d90();
    /* 006d3720: mov ebx, eax */ r_ebx = r_eax;
    /* 006d3722: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006d3725: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3727: je 0x6d37f5 */ if (fZ) goto L_006d37f5;
L_006d372d:; BB(0x006d372d);
    /* 006d372d: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 006d3730: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3732: je 0x6d3748 */ if (fZ) goto L_006d3748;
L_006d3734:; BB(0x006d3734);
    /* 006d3734: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 006d3737: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d3739: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d373b: lea edx, [esi + edx + 0x4c] */ r_edx = (u32)(r_esi+r_edx+0x4cu);
    /* 006d373f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3740: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d3745u); f_00725fa8();
    /* 006d3745: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
L_006d3748:; BB(0x006d3748);
    /* 006d3748: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d374a: je 0x6d375f */ if (fZ) goto L_006d375f;
L_006d374c:; BB(0x006d374c);
    /* 006d374c: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 006d374f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d3751: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d3753: lea edx, [esi + edx + 0x4c] */ r_edx = (u32)(r_esi+r_edx+0x4cu);
    /* 006d3757: mov ecx, esi */ r_ecx = r_esi;
    /* 006d3759: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d375a: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d375fu); f_006d357c();
L_006d375f:; BB(0x006d375f);
    /* 006d375f: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006d3762: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
L_006d3765:; BB(0x006d3765);
    /* 006d3765: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d376c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d376e: je 0x6d378c */ if (fZ) goto L_006d378c;
L_006d3770:; BB(0x006d3770);
    /* 006d3770: mov dword ptr [esi + 0x20], 3 */ W32((u32)(r_esi+0x20u), 0x3u);
    /* 006d3777: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d3779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d377a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d377b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d377c: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3781: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d3786u); f_00814298();
    /* 006d3786: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d3789: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d378a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d378b: ret  */ FN_RET(0x006d3710); r_esp += 4; return;
L_006d378c:; BB(0x006d378c);
    /* 006d378c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d378e: je 0x6d37f2 */ if (fZ) goto L_006d37f2;
L_006d3790:; BB(0x006d3790);
    /* 006d3790: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d3792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3795: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d379a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d379fu); f_00814298();
    /* 006d379f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d37a2: mov ecx, esi */ r_ecx = r_esi;
    /* 006d37a4: call 0x6d3828 */ r_esp -= 4; W32(r_esp, 0x6d37a9u); f_006d3828();
    /* 006d37a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d37ab: je 0x6d3812 */ if (fZ) goto L_006d3812;
L_006d37ad:; BB(0x006d37ad);
    /* 006d37ad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d37b0: je 0x6d37fd */ if (fZ) goto L_006d37fd;
L_006d37b2:; BB(0x006d37b2);
    /* 006d37b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d37b5: je 0x6d37e0 */ if (fZ) goto L_006d37e0;
L_006d37b7:; BB(0x006d37b7);
    /* 006d37b7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d37ba: jne 0x6d37d1 */ if (!fZ) goto L_006d37d1;
L_006d37bc:; BB(0x006d37bc);
    /* 006d37bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d37be: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006d37c0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d37c2: mov ecx, esi */ r_ecx = r_esi;
    /* 006d37c4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d37c7u); call_ind(t); }
    /* 006d37c7: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
    /* 006d37ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d37cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d37d0: ret  */ FN_RET(0x006d3710); r_esp += 4; return;
L_006d37d1:; BB(0x006d37d1);
    /* 006d37d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d37d4: jne 0x6d37f2 */ if (!fZ) goto L_006d37f2;
L_006d37d6:; BB(0x006d37d6);
    /* 006d37d6: mov dword ptr [esi + 0x20], 8 */ W32((u32)(r_esi+0x20u), 0x8u);
    /* 006d37dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d37de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d37df: ret  */ FN_RET(0x006d3710); r_esp += 4; return;
L_006d37e0:; BB(0x006d37e0);
    /* 006d37e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d37e2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006d37e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d37e6: mov ecx, esi */ r_ecx = r_esi;
    /* 006d37e8: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d37ebu); call_ind(t); }
    /* 006d37eb: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
L_006d37f2:; BB(0x006d37f2);
    /* 006d37f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d37f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d37f4: ret  */ FN_RET(0x006d3710); r_esp += 4; return;
L_006d37f5:; BB(0x006d37f5);
    /* 006d37f5: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 006d37f8: jmp 0x6d3748 */ goto L_006d3748;
L_006d37fd:; BB(0x006d37fd);
    /* 006d37fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d37ff: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3801: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d3803: mov ecx, esi */ r_ecx = r_esi;
    /* 006d3805: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d3808u); call_ind(t); }
    /* 006d3808: mov dword ptr [esi + 0x20], 6 */ W32((u32)(r_esi+0x20u), 0x6u);
    /* 006d380f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3810: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d3811: ret  */ FN_RET(0x006d3710); r_esp += 4; return;
L_006d3812:; BB(0x006d3812);
    /* 006d3812: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3814: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3816: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d3818: mov ecx, esi */ r_ecx = r_esi;
    /* 006d381a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d381du); call_ind(t); }
    /* 006d381d: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
    /* 006d3824: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3825: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d3826: ret  */ FN_RET(0x006d3710); r_esp += 4; return;
}

void f_006d3828(void) /* sub_6D3828 */
{
    FN_ENTER(0x006d3828);
    /* 006d3828: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3829: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d382a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d382b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d382c: mov edi, ecx */ r_edi = r_ecx;
    /* 006d382e: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d3831: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3833: mov dword ptr [edi + 0x1f0], 0 */ W32((u32)(r_edi+0x1f0u), 0x0u);
    /* 006d383d: je 0x6d3861 */ if (fZ) goto L_006d3861;
L_006d383f:; BB(0x006d383f);
    /* 006d383f: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d3844u); f_00737d90();
    /* 006d3844: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006d3847: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 006d384d: lea ebp, [eax + eax*4] */ r_ebp = (u32)(r_eax+r_eax*4);
    /* 006d3850: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 006d3854: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d3856: lea ebx, [edi + eax] */ r_ebx = (u32)(r_edi+r_eax);
    /* 006d3859: mov ebx, dword ptr [ebx + 0x5c] */ r_ebx = R32((u32)(r_ebx+0x5cu));
    /* 006d385c: cmp ebx, dword ptr [edx + 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d385f: jle 0x6d3868 */ if ((fZ||fS!=fO)) goto L_006d3868;
L_006d3861:; BB(0x006d3861);
    /* 006d3861: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3863: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3864: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3866: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3867: ret  */ FN_RET(0x006d3828); r_esp += 4; return;
L_006d3868:; BB(0x006d3868);
    /* 006d3868: lea ebx, [edi + eax + 0x4c] */ r_ebx = (u32)(r_edi+r_eax+0x4cu);
    /* 006d386c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d386d: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6d3872u); f_0068ec44();
    /* 006d3872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3874: jne 0x6d3880 */ if (!fZ) goto L_006d3880;
L_006d3876:; BB(0x006d3876);
    /* 006d3876: mov eax, 1 */ r_eax = 0x1u;
    /* 006d387b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d387c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d387d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d387e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d387f: ret  */ FN_RET(0x006d3828); r_esp += 4; return;
L_006d3880:; BB(0x006d3880);
    /* 006d3880: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d3883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3884: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3885: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3888: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x6d388du); f_005c9e40();
    /* 006d388d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3890: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3892: jne 0x6d38af */ if (!fZ) goto L_006d38af;
L_006d3894:; BB(0x006d3894);
    /* 006d3894: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006d3897: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3899: je 0x6d38a5 */ if (fZ) goto L_006d38a5;
L_006d389b:; BB(0x006d389b);
    /* 006d389b: mov eax, 2 */ r_eax = 0x2u;
    /* 006d38a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d38a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d38a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d38a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d38a4: ret  */ FN_RET(0x006d3828); r_esp += 4; return;
L_006d38a5:; BB(0x006d38a5);
    /* 006d38a5: mov eax, 3 */ r_eax = 0x3u;
    /* 006d38aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d38ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d38ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d38ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d38ae: ret  */ FN_RET(0x006d3828); r_esp += 4; return;
L_006d38af:; BB(0x006d38af);
    /* 006d38af: movzx eax, byte ptr [edi + ebp*4 + 0x4c] */ r_eax = (u32)R8((u32)(r_edi+r_ebp*4+0x4cu));
    /* 006d38b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d38b7: je 0x6d38cd */ if (fZ) goto L_006d38cd;
L_006d38b9:; BB(0x006d38b9);
    /* 006d38b9: mov dword ptr [edi + 0x1f0], 1 */ W32((u32)(r_edi+0x1f0u), 0x1u);
L_006d38c3:; BB(0x006d38c3);
    /* 006d38c3: mov eax, 4 */ r_eax = 0x4u;
    /* 006d38c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d38c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d38ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d38cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d38cc: ret  */ FN_RET(0x006d3828); r_esp += 4; return;
L_006d38cd:; BB(0x006d38cd);
    /* 006d38cd: movzx eax, byte ptr [edi + ebp*4 + 0x4d] */ r_eax = (u32)R8((u32)(r_edi+r_ebp*4+0x4du));
    /* 006d38d2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d38d5: jne 0x6d38b9 */ if (!fZ) goto L_006d38b9;
L_006d38d7:; BB(0x006d38d7);
    /* 006d38d7: mov dword ptr [edi + 0x1f0], 0 */ W32((u32)(r_edi+0x1f0u), 0x0u);
    /* 006d38e1: jmp 0x6d38c3 */ goto L_006d38c3;
}

void f_006d38e4(void) /* sub_6D38E4 */
{
    FN_ENTER(0x006d38e4);
    /* 006d38e4: mov dword ptr [0xa961cc], 0x3f800000 */ W32((u32)(0xa961ccu), 0x3f800000u);
    /* 006d38ee: mov dword ptr [0xa961d0], 0x41000000 */ W32((u32)(0xa961d0u), 0x41000000u);
    /* 006d38f8: mov dword ptr [0xa961d4], 0x3fc00000 */ W32((u32)(0xa961d4u), 0x3fc00000u);
    /* 006d3902: ret  */ FN_RET(0x006d38e4); r_esp += 4; return;
}

void f_006d3904(void) /* sub_6D3904 */
{
    FN_ENTER(0x006d3904);
    /* 006d3904: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3906: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d3908: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006d390b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d390d: je 0x6d3919 */ if (fZ) goto L_006d3919;
L_006d390f:; BB(0x006d390f);
    /* 006d390f: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d3916: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3918: ret  */ FN_RET(0x006d3904); r_esp += 4; return;
L_006d3919:; BB(0x006d3919);
    /* 006d3919: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d391b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d3920u); f_0073ec50();
    /* 006d3920: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d3923: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d3927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3928: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d392a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d392b: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d3930u); f_007354fc();
    /* 006d3930: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3932: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006d3935: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d393au); f_006dbdb8();
    /* 006d393a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d393d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d393f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3941: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006d3944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3945: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d394au); f_00735c90();
    /* 006d394a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d394c: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d3951u); f_006dbdb8();
    /* 006d3951: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3952: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3954: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3956: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006d3959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d395a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d395fu); f_00735c90();
    /* 006d395f: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006d3962: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d3967u); f_0073608c();
    /* 006d3967: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006d396a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d396fu); f_00736458();
    /* 006d396f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006d3972: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d3979: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d397e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d3985: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3987: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d398cu); f_006dc8d8();
    /* 006d398c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d398f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3991: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d3996u); f_006dc8d8();
    /* 006d3996: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006d3999: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d399c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d39a0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d39a3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d39a7: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d39acu); f_0070f5a4();
    /* 006d39ac: jmp 0x6d390f */ goto L_006d390f;
}

void f_006d39b4(void) /* sub_6D39B4 */
{
    FN_ENTER(0x006d39b4);
    /* 006d39b4: mov dword ptr [ecx + 0x20], 8 */ W32((u32)(r_ecx+0x20u), 0x8u);
    /* 006d39bb: ret  */ FN_RET(0x006d39b4); r_esp += 4; return;
}

void f_006d39bc(void) /* sub_6D39BC */
{
    FN_ENTER(0x006d39bc);
    /* 006d39bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d39bd: mov edi, ecx */ r_edi = r_ecx;
    /* 006d39bf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d39c1: mov ecx, edi */ r_ecx = r_edi;
    /* 006d39c3: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d39c6u); call_ind(t); }
    /* 006d39c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d39c8: jne 0x6d39cc */ if (!fZ) goto L_006d39cc;
L_006d39ca:; BB(0x006d39ca);
    /* 006d39ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d39cb: ret  */ FN_RET(0x006d39bc); r_esp += 4; return;
L_006d39cc:; BB(0x006d39cc);
    /* 006d39cc: mov ecx, edi */ r_ecx = r_edi;
    /* 006d39ce: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d39d3u); f_006dc988();
    /* 006d39d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d39d5: je 0x6d3a0d */ if (fZ) goto L_006d3a0d;
L_006d39d7:; BB(0x006d39d7);
    /* 006d39d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d39d9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d39db: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d39dd: mov ecx, edi */ r_ecx = r_edi;
    /* 006d39df: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d39e2u); call_ind(t); }
    /* 006d39e2: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006d39e5: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d39ec: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d39f1: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d39f4: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d39fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d39fd: je 0x6d3a06 */ if (fZ) goto L_006d3a06;
L_006d39ff:; BB(0x006d39ff);
    /* 006d39ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a01: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d3a06u); f_00760acc();
L_006d3a06:; BB(0x006d3a06);
    /* 006d3a06: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
L_006d3a0d:; BB(0x006d3a0d);
    /* 006d3a0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3a0e: ret  */ FN_RET(0x006d39bc); r_esp += 4; return;
}

void f_006d3a10(void) /* sub_6D3A10 */
{
    FN_ENTER(0x006d3a10);
    /* 006d3a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a11: mov ebp, esp */ r_ebp = r_esp;
    /* 006d3a13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a15: push 0x8edde4 */ { u32 v = 0x8edde4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d3a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d3a28: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d3a2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d3a2e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006d3a31: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006d3a34: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006d3a37: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d3a3a: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d3a3fu); f_006dc9fc();
    /* 006d3a3f: mov eax, dword ptr [0xa95ea0] */ r_eax = R32((u32)(0xa95ea0u));
    /* 006d3a44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3a47: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006d3a4a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d3a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d3a4e: jle 0x6d3a90 */ if ((fZ||fS!=fO)) goto L_006d3a90;
L_006d3a50:; BB(0x006d3a50);
    /* 006d3a50: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 006d3a53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3a55: call 0x6c8690 */ r_esp -= 4; W32(r_esp, 0x6d3a5au); f_006c8690();
    /* 006d3a5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3a5d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006d3a60: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3a63: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 006d3a66: mov dword ptr [edx + eax*4 + 0x4c], ecx */ W32((u32)(r_edx+r_eax*4+0x4cu), r_ecx);
    /* 006d3a6a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d3a6d: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 006d3a70: mov dword ptr [edx + eax*4 + 0x50], esi */ W32((u32)(r_edx+r_eax*4+0x50u), r_esi);
    /* 006d3a74: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 006d3a77: mov dword ptr [edx + eax*4 + 0x54], edi */ W32((u32)(r_edx+r_eax*4+0x54u), r_edi);
    /* 006d3a7b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006d3a7e: mov dword ptr [edx + eax*4 + 0x58], ecx */ W32((u32)(r_edx+r_eax*4+0x58u), r_ecx);
    /* 006d3a82: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006d3a85: mov dword ptr [edx + eax*4 + 0x5c], ecx */ W32((u32)(r_edx+r_eax*4+0x5cu), r_ecx);
    /* 006d3a89: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006d3a8c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d3a8e: jl 0x6d3a50 */ if ((fS!=fO)) goto L_006d3a50;
L_006d3a90:; BB(0x006d3a90);
    /* 006d3a90: lea esi, [edx + 0x4c] */ r_esi = (u32)(r_edx+0x4cu);
    /* 006d3a93: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d3a96: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d3a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d3a9a: jle 0x6d3abe */ if ((fZ||fS!=fO)) goto L_006d3abe;
L_006d3a9c:; BB(0x006d3a9c);
    /* 006d3a9c: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006d3a9f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3aa2: je 0x6d3ab4 */ if (fZ) goto L_006d3ab4;
L_006d3aa4:; BB(0x006d3aa4);
    /* 006d3aa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3aa5: call 0x5c9b80 */ r_esp -= 4; W32(r_esp, 0x6d3aaau); f_005c9b80();
    /* 006d3aaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3aab: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 006d3aae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3ab1: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
L_006d3ab4:; BB(0x006d3ab4);
    /* 006d3ab4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d3ab7: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d3aba: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d3abc: jl 0x6d3a9c */ if ((fS!=fO)) goto L_006d3a9c;
L_006d3abe:; BB(0x006d3abe);
    /* 006d3abe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3ac1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d3ac4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3ac6: je 0x6d3c71 */ if (fZ) goto L_006d3c71;
L_006d3acc:; BB(0x006d3acc);
    /* 006d3acc: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d3ad1u); f_00737d70();
    /* 006d3ad1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3ad4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d3ad7: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d3adcu); f_00737d1c();
    /* 006d3adc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3adf: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
L_006d3ae2:; BB(0x006d3ae2);
    /* 006d3ae2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3ae4: je 0x6d3b5d */ if (fZ) goto L_006d3b5d;
L_006d3ae6:; BB(0x006d3ae6);
    /* 006d3ae6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3ae9: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006d3aec: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d3aee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d3af0: jle 0x6d3b25 */ if ((fZ||fS!=fO)) goto L_006d3b25;
L_006d3af2:; BB(0x006d3af2);
    /* 006d3af2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3af5: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 006d3af8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d3afa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d3afc: lea edi, [esi + eax] */ r_edi = (u32)(r_esi+r_eax);
    /* 006d3aff: mov esi, dword ptr [edi + 0x5c] */ r_esi = R32((u32)(r_edi+0x5cu));
    /* 006d3b02: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3b05: je 0x6d3b1e */ if (fZ) goto L_006d3b1e;
L_006d3b07:; BB(0x006d3b07);
    /* 006d3b07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3b0b: lea eax, [edx + eax + 0x4c] */ r_eax = (u32)(r_edx+r_eax+0x4cu);
    /* 006d3b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3b10: call 0x7375a4 */ r_esp -= 4; W32(r_esp, 0x6d3b15u); f_007375a4();
    /* 006d3b15: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b18: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006d3b1b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
L_006d3b1e:; BB(0x006d3b1e);
    /* 006d3b1e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d3b21: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d3b23: jl 0x6d3af2 */ if ((fS!=fO)) goto L_006d3af2;
L_006d3b25:; BB(0x006d3b25);
    /* 006d3b25: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d3b2au); f_00737cdc();
    /* 006d3b2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b2d: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d3b30: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d3b37: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d3b3d: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006d3b44: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006d3b47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3b49: je 0x6d3b52 */ if (fZ) goto L_006d3b52;
L_006d3b4b:; BB(0x006d3b4b);
    /* 006d3b4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3b4d: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d3b52u); f_00760acc();
L_006d3b52:; BB(0x006d3b52);
    /* 006d3b52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b55: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d3b58: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x6d3b5du); f_00737da4();
L_006d3b5d:; BB(0x006d3b5d);
    /* 006d3b5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b60: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d3b63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3b65: je 0x6d3bbd */ if (fZ) goto L_006d3bbd;
L_006d3b67:; BB(0x006d3b67);
    /* 006d3b67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b6a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006d3b6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3b6f: je 0x6d3b94 */ if (fZ) goto L_006d3b94;
L_006d3b71:; BB(0x006d3b71);
    /* 006d3b71: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3b74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3b76: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3b78: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d3b7a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d3b7du); call_ind(t); }
    /* 006d3b7d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d3b80: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d3b83: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3b86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d3b89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d3b90: mov esp, ebp */ r_esp = r_ebp;
    /* 006d3b92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3b93: ret  */ FN_RET(0x006d3a10); r_esp += 4; return;
L_006d3b94:; BB(0x006d3b94);
    /* 006d3b94: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006d3b97: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d3b9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3b9c: call 0x715b58 */ r_esp -= 4; W32(r_esp, 0x6d3ba1u); f_00715b58();
    /* 006d3ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3ba2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3ba5: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006d3ba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3baa: je 0x6d3b71 */ if (fZ) goto L_006d3b71;
L_006d3bac:; BB(0x006d3bac);
    /* 006d3bac: mov edx, dword ptr [edx + 0x5c] */ r_edx = R32((u32)(r_edx+0x5cu));
    /* 006d3baf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d3bb1: jle 0x6d3b71 */ if ((fZ||fS!=fO)) goto L_006d3b71;
L_006d3bb3:; BB(0x006d3bb3);
    /* 006d3bb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3bb4: mov ecx, eax */ r_ecx = r_eax;
    /* 006d3bb6: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d3bbbu); f_00715c74();
    /* 006d3bbb: jmp 0x6d3b71 */ goto L_006d3b71;
L_006d3bbd:; BB(0x006d3bbd);
    /* 006d3bbd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006d3bc4: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3bc9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d3bceu); f_005caba4();
    /* 006d3bce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d3bd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3bd4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006d3bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3bd9: je 0x6d3c6a */ if (fZ) goto L_006d3c6a;
L_006d3bdf:; BB(0x006d3bdf);
    /* 006d3bdf: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006d3be6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d3bed: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3bef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d3bf4u); f_0073ec50();
    /* 006d3bf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3bf5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3bf8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d3bfb: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d3bfe: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d3c02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c04: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d3c09u); f_00725d18();
    /* 006d3c09: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006d3c10:; BB(0x006d3c10);
    /* 006d3c10: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d3c13: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3c16: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006d3c19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d3c20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3c22: je 0x6d3c59 */ if (fZ) goto L_006d3c59;
L_006d3c24:; BB(0x006d3c24);
    /* 006d3c24: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d3c29u); f_0078b208();
    /* 006d3c29: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d3c2c: jg 0x6d3c39 */ if ((!fZ&&fS==fO)) goto L_006d3c39;
L_006d3c2e:; BB(0x006d3c2e);
    /* 006d3c2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3c31: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d3c34: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006d3c37: jmp 0x6d3c59 */ goto L_006d3c59;
L_006d3c39:; BB(0x006d3c39);
    /* 006d3c39: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3c3c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006d3c3f: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d3c49: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d3c53: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006d3c56: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_006d3c59:; BB(0x006d3c59);
    /* 006d3c59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d3c5c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d3c5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c60: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d3c65u); f_00725fa8();
    /* 006d3c65: jmp 0x6d3b67 */ goto L_006d3b67;
L_006d3c6a:; BB(0x006d3c6a);
    /* 006d3c6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d3c6c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d3c6f: jmp 0x6d3c10 */ goto L_006d3c10;
L_006d3c71:; BB(0x006d3c71);
    /* 006d3c71: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c73: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d3c78u); f_006dbdb8();
    /* 006d3c78: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3c7b: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d3c7e: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d3c82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c83: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c87: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d3c8cu); f_0073ff34();
    /* 006d3c8c: mov ecx, eax */ r_ecx = r_eax;
    /* 006d3c8e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3c91: mov edx, ebx */ r_edx = r_ebx;
    /* 006d3c93: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006d3c96: jmp 0x6d3ae2 */ goto L_006d3ae2;
}

void f_006d3c9c(void) /* sub_6D3C9C */
{
    FN_ENTER(0x006d3c9c);
    /* 006d3c9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3c9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d3c9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d3ca1: call 0x6d3cc0 */ r_esp -= 4; W32(r_esp, 0x6d3ca6u); f_006d3cc0();
    /* 006d3ca6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d3caa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3cac: jne 0x6d3cb2 */ if (!fZ) goto L_006d3cb2;
L_006d3cae:; BB(0x006d3cae);
    /* 006d3cae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3caf: ret 4 */ FN_RET(0x006d3c9c); r_esp += 8; return;
L_006d3cb2:; BB(0x006d3cb2);
    /* 006d3cb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3cb3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d3cb8u); f_005c2f74();
    /* 006d3cb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3cb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3cba: ret 4 */ FN_RET(0x006d3c9c); r_esp += 8; return;
}

void f_006d3cc0(void) /* sub_6D3CC0 */
{
    FN_ENTER(0x006d3cc0);
    /* 006d3cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 006d3cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3cc5: push 0x8ede00 */ { u32 v = 0x8ede00u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d3cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3cd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d3cd8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d3cdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d3cde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d3ce1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d3ce4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d3ce7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d3cea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d3cf1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3cf4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d3cf7: mov dword ptr [eax], 0xb3c2e8 */ W32((u32)(r_eax), 0xb3c2e8u);
    /* 006d3cfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3cff: je 0x6d3d10 */ if (fZ) goto L_006d3d10;
L_006d3d01:; BB(0x006d3d01);
    /* 006d3d01: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3d06u); f_007127b0();
    /* 006d3d06: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3d09: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d3d10:; BB(0x006d3d10);
    /* 006d3d10: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d3d13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3d15: je 0x6d3d26 */ if (fZ) goto L_006d3d26;
L_006d3d17:; BB(0x006d3d17);
    /* 006d3d17: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3d1cu); f_007127b0();
    /* 006d3d1c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3d1f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d3d26:; BB(0x006d3d26);
    /* 006d3d26: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d3d29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3d2b: je 0x6d3d3c */ if (fZ) goto L_006d3d3c;
L_006d3d2d:; BB(0x006d3d2d);
    /* 006d3d2d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3d32u); f_007127b0();
    /* 006d3d32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3d35: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006d3d3c:; BB(0x006d3d3c);
    /* 006d3d3c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d3d3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3d41: je 0x6d3d52 */ if (fZ) goto L_006d3d52;
L_006d3d43:; BB(0x006d3d43);
    /* 006d3d43: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3d48u); f_007127b0();
    /* 006d3d48: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3d4b: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006d3d52:; BB(0x006d3d52);
    /* 006d3d52: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d3d59: mov ecx, eax */ r_ecx = r_eax;
    /* 006d3d5b: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d3d60u); f_006dc848();
    /* 006d3d60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d3d63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d3d6a: mov esp, ebp */ r_esp = r_ebp;
    /* 006d3d6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3d6d: ret  */ FN_RET(0x006d3cc0); r_esp += 4; return;
}

void f_006d3d70(void) /* sub_6D3D70 */
{
    FN_ENTER(0x006d3d70);
    /* 006d3d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3d71: mov ebp, esp */ r_ebp = r_esp;
    /* 006d3d73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3d75: push 0x8ede1c */ { u32 v = 0x8ede1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3d7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d3d80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3d81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d3d88: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d3d8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d3d8e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d3d91: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d3d94: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d3d97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d3d9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3d9d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d3da0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006d3da3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d3da6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006d3da9: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d3daeu); f_006dc898();
    /* 006d3dae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d3db5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d3db8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d3dbb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d3dbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d3dc0: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006d3dc3: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 006d3dc6: mov dword ptr [ecx], 0xb3c2e8 */ W32((u32)(r_ecx), 0xb3c2e8u);
    /* 006d3dcc: mov esi, dword ptr [0x9cf0d8] */ r_esi = R32((u32)(0x9cf0d8u));
    /* 006d3dd2: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 006d3dd5: mov byte ptr [ecx + 0x54], al */ W8((u32)(r_ecx+0x54u), (u8)r_eax);
    /* 006d3dd8: mov dword ptr [ecx + 0x5c], 1 */ W32((u32)(r_ecx+0x5cu), 0x1u);
    /* 006d3ddf: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 006d3de2: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006d3de5: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006d3de8: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006d3deb: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006d3dee: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006d3df1: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 006d3df4: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 006d3df7: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d3dfa: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6d3dffu); f_005d6a3c();
    /* 006d3dff: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d3e02: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d3e05: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d3e08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d3e0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d3e12: mov esp, ebp */ r_esp = r_ebp;
    /* 006d3e14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e15: ret 0xc */ FN_RET(0x006d3d70); r_esp += 16; return;
}

void f_006d3e18(void) /* sub_6D3E18 */
{
    FN_ENTER(0x006d3e18);
    /* 006d3e18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d3e19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d3e1b: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006d3e1e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d3e21: ja 0x6d3e8f */ if ((!fC&&!fZ)) goto L_006d3e8f;
L_006d3e23:; BB(0x006d3e23);
    /* 006d3e23: mov eax, dword ptr [eax*4 + 0x96c17c] */ r_eax = R32((u32)(r_eax*4+0x96c17cu));
    /* 006d3e2a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d3e8f:; BB(0x006d3e8f);
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e18); r_esp += 4; return;
}

void f_006d3e2c(void)
{
    FN_ENTER(0x006d3e2c);
    /* 006d3e2c: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 006d3e2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3e31: je 0x6d3e39 */ if (fZ) goto L_006d3e39;
L_006d3e33:; BB(0x006d3e33);
    /* 006d3e33: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d3e38u); call_ind(t); }
    /* 006d3e38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d3e39:; BB(0x006d3e39);
    /* 006d3e39: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d3e3d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3e42: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d3e46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e47: ret  */ FN_RET(0x006d3e2c); r_esp += 4; return;
}

void f_006d3e48(void)
{
    FN_ENTER(0x006d3e48);
    /* 006d3e48: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006d3e4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3e4d: je 0x6d3e55 */ if (fZ) goto L_006d3e55;
L_006d3e4f:; BB(0x006d3e4f);
    /* 006d3e4f: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3e52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d3e54u); call_ind(t); }
    /* 006d3e54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d3e55:; BB(0x006d3e55);
    /* 006d3e55: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d3e59: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3e5e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d3e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e63: ret  */ FN_RET(0x006d3e48); r_esp += 4; return;
}

void f_006d3e64(void)
{
    FN_ENTER(0x006d3e64);
    /* 006d3e64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3e66: call 0x6d3e94 */ r_esp -= 4; W32(r_esp, 0x6d3e6bu); f_006d3e94();
    /* 006d3e6b: jmp 0x6d3e8f */ goto L_006d3e8f;
L_006d3e8f:; BB(0x006d3e8f);
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e64); r_esp += 4; return;
}

void f_006d3e6d(void)
{
    FN_ENTER(0x006d3e6d);
    /* 006d3e6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3e6f: call 0x6d3ed4 */ r_esp -= 4; W32(r_esp, 0x6d3e74u); f_006d3ed4();
    /* 006d3e74: jmp 0x6d3e8f */ goto L_006d3e8f;
L_006d3e8f:; BB(0x006d3e8f);
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e6d); r_esp += 4; return;
}

void f_006d3e76(void)
{
    FN_ENTER(0x006d3e76);
    /* 006d3e76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3e78: call 0x6d3f9c */ r_esp -= 4; W32(r_esp, 0x6d3e7du); f_006d3f9c();
    /* 006d3e7d: jmp 0x6d3e8f */ goto L_006d3e8f;
L_006d3e8f:; BB(0x006d3e8f);
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e76); r_esp += 4; return;
}

void f_006d3e7f(void)
{
    FN_ENTER(0x006d3e7f);
    /* 006d3e7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3e81: call 0x6d4068 */ r_esp -= 4; W32(r_esp, 0x6d3e86u); f_006d4068();
    /* 006d3e86: jmp 0x6d3e8f */ goto L_006d3e8f;
L_006d3e8f:; BB(0x006d3e8f);
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e7f); r_esp += 4; return;
}

void f_006d3e88(void)
{
    FN_ENTER(0x006d3e88);
    /* 006d3e88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d3e8a: call 0x6d42dc */ r_esp -= 4; W32(r_esp, 0x6d3e8fu); f_006d42dc();
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e88); r_esp += 4; return;
}

void f_006d3e8f(void)
{
    FN_ENTER(0x006d3e8f);
    /* 006d3e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d3e90: ret  */ FN_RET(0x006d3e8f); r_esp += 4; return;
}

void f_006d3e94(void) /* sub_6D3E94 */
{
    FN_ENTER(0x006d3e94);
    /* 006d3e94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3e95: mov edi, ecx */ r_edi = r_ecx;
    /* 006d3e97: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006d3e9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3e9c: je 0x6d3ebf */ if (fZ) goto L_006d3ebf;
L_006d3e9e:; BB(0x006d3e9e);
    /* 006d3e9e: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d3ea5: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d3eaa: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d3ead: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d3eb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3eb6: je 0x6d3ebf */ if (fZ) goto L_006d3ebf;
L_006d3eb8:; BB(0x006d3eb8);
    /* 006d3eb8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3eba: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d3ebfu); f_00760acc();
L_006d3ebf:; BB(0x006d3ebf);
    /* 006d3ebf: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006d3ec1: mov eax, 1 */ r_eax = 0x1u;
    /* 006d3ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d3ec7: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006d3eca: mov ecx, edi */ r_ecx = r_edi;
    /* 006d3ecc: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3ece: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6d3ed1u); call_ind(t); }
    /* 006d3ed1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3ed2: ret  */ FN_RET(0x006d3e94); r_esp += 4; return;
}

void f_006d3ed4(void) /* sub_6D3ED4 */
{
    FN_ENTER(0x006d3ed4);
    /* 006d3ed4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3ed5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3ed6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d3ed9: mov edi, ecx */ r_edi = r_ecx;
    /* 006d3edb: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006d3ede: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3ee0: je 0x6d3f51 */ if (fZ) goto L_006d3f51;
L_006d3ee2:; BB(0x006d3ee2);
    /* 006d3ee2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d3ee9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d3eeb: je 0x6d3f51 */ if (fZ) goto L_006d3f51;
L_006d3eed:; BB(0x006d3eed);
    /* 006d3eed: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d3ef2u); f_007365f4();
    /* 006d3ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3ef4: je 0x6d3f04 */ if (fZ) goto L_006d3f04;
L_006d3ef6:; BB(0x006d3ef6);
    /* 006d3ef6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3ef9: je 0x6d3f7f */ if (fZ) goto L_006d3f7f;
L_006d3eff:; BB(0x006d3eff);
    /* 006d3eff: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006d3f02: jmp 0x6d3f51 */ goto L_006d3f51;
L_006d3f04:; BB(0x006d3f04);
    /* 006d3f04: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d3f07: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d3f0cu); f_00737d90();
    /* 006d3f0c: mov esi, eax */ r_esi = r_eax;
    /* 006d3f0e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d3f11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3f12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3f13: call 0x6c8e50 */ r_esp -= 4; W32(r_esp, 0x6d3f18u); f_006c8e50();
    /* 006d3f18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3f1d: je 0x6d3f3c */ if (fZ) goto L_006d3f3c;
L_006d3f1f:; BB(0x006d3f1f);
    /* 006d3f1f: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d3f22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3f23: call 0x6c8d08 */ r_esp -= 4; W32(r_esp, 0x6d3f28u); f_006c8d08();
    /* 006d3f28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d3f2b: call 0x6c9100 */ r_esp -= 4; W32(r_esp, 0x6d3f30u); f_006c9100();
    /* 006d3f30: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6d3f35u); f_006c8db4();
    /* 006d3f35: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
L_006d3f3c:; BB(0x006d3f3c);
    /* 006d3f3c: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006d3f3f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3f44u); f_007127b0();
    /* 006d3f44: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006d3f4b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d3f4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d3f4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3f50: ret  */ FN_RET(0x006d3ed4); r_esp += 4; return;
L_006d3f51:; BB(0x006d3f51);
    /* 006d3f51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3f53: je 0x6d3f79 */ if (fZ) goto L_006d3f79;
L_006d3f55:; BB(0x006d3f55);
    /* 006d3f55: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d3f5c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d3f5e: je 0x6d3f79 */ if (fZ) goto L_006d3f79;
L_006d3f60:; BB(0x006d3f60);
    /* 006d3f60: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3f65u); f_007127b0();
    /* 006d3f65: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006d3f6c: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d3f73: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d3f76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d3f77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3f78: ret  */ FN_RET(0x006d3ed4); r_esp += 4; return;
L_006d3f79:; BB(0x006d3f79);
    /* 006d3f79: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d3f7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d3f7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3f7e: ret  */ FN_RET(0x006d3ed4); r_esp += 4; return;
L_006d3f7f:; BB(0x006d3f7f);
    /* 006d3f7f: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006d3f82: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3f87u); f_007127b0();
    /* 006d3f87: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006d3f8e: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d3f95: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d3f98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d3f99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d3f9a: ret  */ FN_RET(0x006d3ed4); r_esp += 4; return;
}

void f_006d3f9c(void) /* sub_6D3F9C */
{
    FN_ENTER(0x006d3f9c);
    /* 006d3f9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d3f9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d3f9e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d3fa0: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d3fa3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3fa5: je 0x6d3fdd */ if (fZ) goto L_006d3fdd;
L_006d3fa7:; BB(0x006d3fa7);
    /* 006d3fa7: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d3fab: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d3fad: je 0x6d3fdd */ if (fZ) goto L_006d3fdd;
L_006d3faf:; BB(0x006d3faf);
    /* 006d3faf: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 006d3fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3fb4: je 0x6d3fff */ if (fZ) goto L_006d3fff;
L_006d3fb6:; BB(0x006d3fb6);
    /* 006d3fb6: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 006d3fb9: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 006d3fbc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3fc1u); f_007127b0();
    /* 006d3fc1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d3fc3: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 006d3fca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d3fcc: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d3fd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3fd5: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 006d3fd7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d3fdau); call_ind(t); }
L_006d3fda:; BB(0x006d3fda);
    /* 006d3fda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3fdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3fdc: ret  */ FN_RET(0x006d3f9c); r_esp += 4; return;
L_006d3fdd:; BB(0x006d3fdd);
    /* 006d3fdd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3fdf: je 0x6d3fda */ if (fZ) goto L_006d3fda;
L_006d3fe1:; BB(0x006d3fe1);
    /* 006d3fe1: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d3fe5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3fe7: je 0x6d3fda */ if (fZ) goto L_006d3fda;
L_006d3fe9:; BB(0x006d3fe9);
    /* 006d3fe9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d3feeu); f_007127b0();
    /* 006d3fee: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 006d3ff5: mov dword ptr [ebx + 0x20], 4 */ W32((u32)(r_ebx+0x20u), 0x4u);
    /* 006d3ffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3ffd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d3ffe: ret  */ FN_RET(0x006d3f9c); r_esp += 4; return;
L_006d3fff:; BB(0x006d3fff);
    /* 006d3fff: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d4001: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d4006u); f_0073ec50();
    /* 006d4006: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d4009: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d400d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d400e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d400f: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d4014u); f_00735884();
    /* 006d4014: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d4017: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d4019: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006d401c: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006d4023: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006d4029: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006d4030: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006d4033: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6d4038u); f_00736510();
    /* 006d4038: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d403a: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d403fu); f_006dc8d8();
    /* 006d403f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d4042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d4044: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d4049u); f_006dc8d8();
    /* 006d4049: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006d404c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d404f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d4053: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d4056: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d405a: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d405fu); f_0070f5a4();
    /* 006d405f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 006d4062: jmp 0x6d3fb6 */ goto L_006d3fb6;
}

