#include "protos.h"

void f_00663000(void) /* sub_663000 */
{
    FN_ENTER(0x00663000);
    /* 00663000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663001: mov ebp, esp */ r_ebp = r_esp;
    /* 00663003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663005: push 0x8e8238 */ { u32 v = 0x8e8238u; r_esp -= 4; W32(r_esp, v); }
    /* 0066300a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663011: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663018: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066301b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066301e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00663021: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00663024: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00663027: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066302a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066302d: mov eax, ecx */ r_eax = r_ecx;
    /* 0066302f: mov dword ptr [eax], 0xb341e0 */ W32((u32)(r_eax), 0xb341e0u);
    /* 00663035: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066303c: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x663041u); f_007ba1f0();
    /* 00663041: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663044: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663046: jne 0x663058 */ if (!fZ) goto L_00663058;
L_00663048:; BB(0x00663048);
    /* 00663048: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066304b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663052: mov esp, ebp */ r_esp = r_ebp;
    /* 00663054: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663055: ret 4 */ FN_RET(0x00663000); r_esp += 8; return;
L_00663058:; BB(0x00663058);
    /* 00663058: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066305b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066305c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663061u); f_005c2f74();
    /* 00663061: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663062: jmp 0x663048 */ goto L_00663048;
}

void f_00663064(void) /* sub_663064 */
{
    FN_ENTER(0x00663064);
    /* 00663064: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663065: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00663069: call 0x663088 */ r_esp -= 4; W32(r_esp, 0x66306eu); f_00663088();
    /* 0066306e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663074: jne 0x66307a */ if (!fZ) goto L_0066307a;
L_00663076:; BB(0x00663076);
    /* 00663076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663077: ret 4 */ FN_RET(0x00663064); r_esp += 8; return;
L_0066307a:; BB(0x0066307a);
    /* 0066307a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066307b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663080u); f_005c2f74();
    /* 00663080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663082: ret 4 */ FN_RET(0x00663064); r_esp += 8; return;
}

void f_0066306a(void)
{
    FN_ENTER(0x0066306a);
    /* 0066306a: sbb al, byte ptr [eax] */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0066306c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0066306e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663074: jne 0x66307a */ if (!fZ) goto L_0066307a;
L_00663076:; BB(0x00663076);
    /* 00663076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663077: ret 4 */ FN_RET(0x0066306a); r_esp += 8; return;
L_0066307a:; BB(0x0066307a);
    /* 0066307a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066307b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663080u); f_005c2f74();
    /* 00663080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663082: ret 4 */ FN_RET(0x0066306a); r_esp += 8; return;
}

void f_00663079(void)
{
    FN_ENTER(0x00663079);
    /* 00663079: add byte ptr [ebx - 0x18], dl */ { u32 ad = (u32)(r_ebx+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0066307c: hlt  */ UNSUP(0x0066307c, "hlt");
}

void f_00663088(void) /* sub_663088 */
{
    FN_ENTER(0x00663088);
    /* 00663088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663089: mov ebp, esp */ r_ebp = r_esp;
    /* 0066308b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066308d: push 0x8e8254 */ { u32 v = 0x8e8254u; r_esp -= 4; W32(r_esp, v); }
    /* 00663092: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663099: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006630a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006630a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006630a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006630a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006630ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006630af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006630b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006630b5: mov dword ptr [ecx], 0xb3420c */ W32((u32)(r_ecx), 0xb3420cu);
    /* 006630bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006630c2: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6630c7u); f_007ba1f0();
    /* 006630c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006630ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006630d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006630d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006630d4: ret  */ FN_RET(0x00663088); r_esp += 4; return;
}

void f_006630d8(void) /* sub_6630D8 */
{
    FN_ENTER(0x006630d8);
    /* 006630d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006630d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006630db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006630dd: call 0x6630fc */ r_esp -= 4; W32(r_esp, 0x6630e2u); f_006630fc();
    /* 006630e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006630e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006630e8: jne 0x6630ee */ if (!fZ) goto L_006630ee;
L_006630ea:; BB(0x006630ea);
    /* 006630ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006630eb: ret 4 */ FN_RET(0x006630d8); r_esp += 8; return;
L_006630ee:; BB(0x006630ee);
    /* 006630ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006630ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6630f4u); f_005c2f74();
    /* 006630f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006630f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006630f6: ret 4 */ FN_RET(0x006630d8); r_esp += 8; return;
}

void f_006630fc(void) /* sub_6630FC */
{
    FN_ENTER(0x006630fc);
    /* 006630fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006630fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006630ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663101: push 0x8e8270 */ { u32 v = 0x8e8270u; r_esp -= 4; W32(r_esp, v); }
    /* 00663106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066310c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066310d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663114: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066311a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066311d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663123: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00663126: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663129: mov dword ptr [ecx], 0xb34238 */ W32((u32)(r_ecx), 0xb34238u);
    /* 0066312f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663136: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x66313bu); f_007ba1f0();
    /* 0066313b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066313e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663145: mov esp, ebp */ r_esp = r_ebp;
    /* 00663147: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663148: ret  */ FN_RET(0x006630fc); r_esp += 4; return;
}

void f_0066314c(void) /* sub_66314C */
{
    FN_ENTER(0x0066314c);
    /* 0066314c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066314d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663150: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00663152: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 00663158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066315a: jne 0x663176 */ if (!fZ) goto L_00663176;
L_0066315c:; BB(0x0066315c);
    /* 0066315c: movsx eax, word ptr [ebp + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x94u));
    /* 00663163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663164: call 0x805400 */ r_esp -= 4; W32(r_esp, 0x663169u); f_00805400();
    /* 00663169: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066316a: mov dword ptr [ebp + 0x98], 1 */ W32((u32)(r_ebp+0x98u), 0x1u);
    /* 00663174: jmp 0x66318c */ goto L_0066318c;
L_00663176:; BB(0x00663176);
    /* 00663176: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663179: jne 0x66318c */ if (!fZ) goto L_0066318c;
L_0066317b:; BB(0x0066317b);
    /* 0066317b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x663180u); f_006dc358();
    /* 00663180: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663183: je 0x663191 */ if (fZ) goto L_00663191;
L_00663185:; BB(0x00663185);
    /* 00663185: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00663187: call 0x663250 */ r_esp -= 4; W32(r_esp, 0x66318cu); f_00663250();
L_0066318c:; BB(0x0066318c);
    /* 0066318c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066318f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663190: ret  */ FN_RET(0x0066314c); r_esp += 4; return;
L_00663191:; BB(0x00663191);
    /* 00663191: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00663194: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00663198: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066319a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066319c: mov edi, ebp */ r_edi = r_ebp;
    /* 0066319e: mov ebp, eax */ r_ebp = r_eax;
    /* 006631a0: mov esi, edx */ r_esi = r_edx;
L_006631a2:; BB(0x006631a2);
    /* 006631a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006631a3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6631a8u); f_0068d5a8();
    /* 006631a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006631a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631ab: je 0x6631bd */ if (fZ) goto L_006631bd;
L_006631ad:; BB(0x006631ad);
    /* 006631ad: mov ecx, eax */ r_ecx = r_eax;
    /* 006631af: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x6631b4u); f_00689b44();
    /* 006631b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631b6: je 0x6631bd */ if (fZ) goto L_006631bd;
L_006631b8:; BB(0x006631b8);
    /* 006631b8: mov esi, 1 */ r_esi = 0x1u;
L_006631bd:; BB(0x006631bd);
    /* 006631bd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006631c0: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006631c3: jl 0x6631a2 */ if ((fS!=fO)) goto L_006631a2;
L_006631c5:; BB(0x006631c5);
    /* 006631c5: mov edx, esi */ r_edx = r_esi;
    /* 006631c7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006631ca: mov ebp, edi */ r_ebp = r_edi;
    /* 006631cc: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006631d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631d2: jne 0x66318c */ if (!fZ) goto L_0066318c;
L_006631d4:; BB(0x006631d4);
    /* 006631d4: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 006631da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006631dc: jle 0x6631e9 */ if ((fZ||fS!=fO)) goto L_006631e9;
L_006631de:; BB(0x006631de);
    /* 006631de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006631e1: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 006631e7: jmp 0x66318c */ goto L_0066318c;
L_006631e9:; BB(0x006631e9);
    /* 006631e9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006631ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006631ef: mov edi, eax */ r_edi = r_eax;
L_006631f1:; BB(0x006631f1);
    /* 006631f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006631f2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6631f7u); f_0068d5a8();
    /* 006631f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006631f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631fa: je 0x66321b */ if (fZ) goto L_0066321b;
L_006631fc:; BB(0x006631fc);
    /* 006631fc: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006631ff: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00663202: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663204: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x663209u); f_0078ea50();
    /* 00663209: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066320c: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00663212: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00663214: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00663216: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00663218: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00663219: ja 0x66322c */ if ((!fC&&!fZ)) goto L_0066322c;
L_0066321b:; BB(0x0066321b);
    /* 0066321b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066321e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00663221: jl 0x6631f1 */ if ((fS!=fO)) goto L_006631f1;
L_00663223:; BB(0x00663223);
    /* 00663223: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00663227: jmp 0x66318c */ goto L_0066318c;
L_0066322c:; BB(0x0066322c);
    /* 0066322c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00663230: movsx eax, word ptr [ebp + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x94u));
    /* 00663237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663238: call 0x80539c */ r_esp -= 4; W32(r_esp, 0x66323du); f_0080539c();
    /* 0066323d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066323e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00663242: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00663247: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0066324b: jmp 0x66318c */ goto L_0066318c;
}

void f_0066316a(void)
{
    FN_ENTER(0x0066316a);
    /* 0066316a: mov dword ptr [ebp + 0x98], 1 */ W32((u32)(r_ebp+0x98u), 0x1u);
    /* 00663174: jmp 0x66318c */ goto L_0066318c;
L_0066318c:; BB(0x0066318c);
    /* 0066318c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066318f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663190: ret  */ FN_RET(0x0066316a); r_esp += 4; return;
}

void f_00663179(void)
{
    FN_ENTER(0x00663179);
    /* 00663179: jne 0x66318c */ if (!fZ) goto L_0066318c;
L_0066317b:; BB(0x0066317b);
    /* 0066317b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x663180u); f_006dc358();
    /* 00663180: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663183: je 0x663191 */ if (fZ) goto L_00663191;
L_00663185:; BB(0x00663185);
    /* 00663185: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00663187: call 0x663250 */ r_esp -= 4; W32(r_esp, 0x66318cu); f_00663250();
L_0066318c:; BB(0x0066318c);
    /* 0066318c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066318f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663190: ret  */ FN_RET(0x00663179); r_esp += 4; return;
L_00663191:; BB(0x00663191);
    /* 00663191: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00663194: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00663198: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066319a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066319c: mov edi, ebp */ r_edi = r_ebp;
    /* 0066319e: mov ebp, eax */ r_ebp = r_eax;
    /* 006631a0: mov esi, edx */ r_esi = r_edx;
L_006631a2:; BB(0x006631a2);
    /* 006631a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006631a3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6631a8u); f_0068d5a8();
    /* 006631a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006631a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631ab: je 0x6631bd */ if (fZ) goto L_006631bd;
L_006631ad:; BB(0x006631ad);
    /* 006631ad: mov ecx, eax */ r_ecx = r_eax;
    /* 006631af: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x6631b4u); f_00689b44();
    /* 006631b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631b6: je 0x6631bd */ if (fZ) goto L_006631bd;
L_006631b8:; BB(0x006631b8);
    /* 006631b8: mov esi, 1 */ r_esi = 0x1u;
L_006631bd:; BB(0x006631bd);
    /* 006631bd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006631c0: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006631c3: jl 0x6631a2 */ if ((fS!=fO)) goto L_006631a2;
L_006631c5:; BB(0x006631c5);
    /* 006631c5: mov edx, esi */ r_edx = r_esi;
    /* 006631c7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006631ca: mov ebp, edi */ r_ebp = r_edi;
    /* 006631cc: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006631d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631d2: jne 0x66318c */ if (!fZ) goto L_0066318c;
L_006631d4:; BB(0x006631d4);
    /* 006631d4: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 006631da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006631dc: jle 0x6631e9 */ if ((fZ||fS!=fO)) goto L_006631e9;
L_006631de:; BB(0x006631de);
    /* 006631de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006631e1: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 006631e7: jmp 0x66318c */ goto L_0066318c;
L_006631e9:; BB(0x006631e9);
    /* 006631e9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006631ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006631ef: mov edi, eax */ r_edi = r_eax;
L_006631f1:; BB(0x006631f1);
    /* 006631f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006631f2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6631f7u); f_0068d5a8();
    /* 006631f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006631f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631fa: je 0x66321b */ if (fZ) goto L_0066321b;
L_006631fc:; BB(0x006631fc);
    /* 006631fc: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006631ff: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00663202: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663204: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x663209u); f_0078ea50();
    /* 00663209: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066320c: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00663212: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00663214: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00663216: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00663218: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00663219: ja 0x66322c */ if ((!fC&&!fZ)) goto L_0066322c;
L_0066321b:; BB(0x0066321b);
    /* 0066321b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066321e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00663221: jl 0x6631f1 */ if ((fS!=fO)) goto L_006631f1;
L_00663223:; BB(0x00663223);
    /* 00663223: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00663227: jmp 0x66318c */ goto L_0066318c;
L_0066322c:; BB(0x0066322c);
    /* 0066322c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00663230: movsx eax, word ptr [ebp + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x94u));
    /* 00663237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663238: call 0x80539c */ r_esp -= 4; W32(r_esp, 0x66323du); f_0080539c();
    /* 0066323d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066323e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00663242: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00663247: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0066324b: jmp 0x66318c */ goto L_0066318c;
}

void f_0066322e(void)
{
    FN_ENTER(0x0066322e);
    goto L_0066322e;
L_0066318c:; BB(0x0066318c);
    /* 0066318c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066318f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663190: ret  */ FN_RET(0x0066322e); r_esp += 4; return;
L_0066322e:; BB(0x0066322e);
    /* 0066322e: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00663230: movsx eax, word ptr [ebp + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x94u));
    /* 00663237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663238: call 0x80539c */ r_esp -= 4; W32(r_esp, 0x66323du); f_0080539c();
    /* 0066323d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066323e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00663242: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00663247: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0066324b: jmp 0x66318c */ goto L_0066318c;
}

void f_00663250(void) /* sub_663250 */
{
    FN_ENTER(0x00663250);
    /* 00663250: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00663251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00663252: mov edi, ecx */ r_edi = r_ecx;
    /* 00663254: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066325a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66325fu); f_0068d5a8();
    /* 0066325f: mov esi, eax */ r_esi = r_eax;
    /* 00663261: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663264: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663266: je 0x6632c3 */ if (fZ) goto L_006632c3;
L_00663268:; BB(0x00663268);
    /* 00663268: mov ecx, esi */ r_ecx = r_esi;
    /* 0066326a: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x66326fu); f_00689b44();
    /* 0066326f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663271: jne 0x6632c3 */ if (!fZ) goto L_006632c3;
L_00663273:; BB(0x00663273);
    /* 00663273: mov edx, dword ptr [edi + 0x9c] */ r_edx = R32((u32)(r_edi+0x9cu));
    /* 00663279: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066327b: jle 0x663289 */ if ((fZ||fS!=fO)) goto L_00663289;
L_0066327d:; BB(0x0066327d);
    /* 0066327d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00663280: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 00663286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00663287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00663288: ret  */ FN_RET(0x00663250); r_esp += 4; return;
L_00663289:; BB(0x00663289);
    /* 00663289: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066328c: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0066328f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663290: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00663291: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x663296u); f_0078ea50();
    /* 00663296: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00663299: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 0066329f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006632a1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006632a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006632a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006632a6: jbe 0x6632c3 */ if ((fC||fZ)) goto L_006632c3;
L_006632a8:; BB(0x006632a8);
    /* 006632a8: movsx eax, word ptr [edi + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x94u));
    /* 006632af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006632b0: call 0x80539c */ r_esp -= 4; W32(r_esp, 0x6632b5u); f_0080539c();
    /* 006632b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006632b6: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006632ba: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006632bf: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006632c3:; BB(0x006632c3);
    /* 006632c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006632c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006632c5: ret  */ FN_RET(0x00663250); r_esp += 4; return;
}

void f_006632c8(void) /* sub_6632C8 */
{
    FN_ENTER(0x006632c8);
    /* 006632c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006632c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006632cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006632cd: push 0x8e828c */ { u32 v = 0x8e828cu; r_esp -= 4; W32(r_esp, v); }
    /* 006632d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006632d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006632d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006632e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006632e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006632e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006632e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006632ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006632ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006632f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006632f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006632f8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006632fb: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x663300u); f_007ba278();
    /* 00663300: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663307: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066330a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066330d: mov dword ptr [ecx], 0xb341e0 */ W32((u32)(r_ecx), 0xb341e0u);
    /* 00663313: mov eax, dword ptr [0x9c886c] */ r_eax = R32((u32)(0x9c886cu));
    /* 00663318: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663319: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0066331c: call dword ptr [0xb341f4] */ { u32 t = R32((u32)(0xb341f4u)); r_esp -= 4; W32(r_esp, 0x663322u); call_ind(t); }
    /* 00663322: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00663325: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 00663328: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 0066332e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00663332: mov dword ptr [ebx + 0x98], 0 */ W32((u32)(r_ebx+0x98u), 0x0u);
    /* 0066333c: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 00663342: mov dword ptr [ebx + 0x94], ecx */ W32((u32)(r_ebx+0x94u), r_ecx);
    /* 00663348: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066334d: mov dword ptr [ebx + 0x9c], 3 */ W32((u32)(r_ebx+0x9cu), 0x3u);
    /* 00663357: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0066335b: mov eax, ebx */ r_eax = r_ebx;
    /* 0066335d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00663360: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663363: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066336a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066336c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066336d: ret 8 */ FN_RET(0x006632c8); r_esp += 12; return;
}

void f_00663370(void) /* sub_663370 */
{
    FN_ENTER(0x00663370);
    /* 00663370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663371: mov ebp, esp */ r_ebp = r_esp;
    /* 00663373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663375: push 0x8e82a8 */ { u32 v = 0x8e82a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066337a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663381: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663388: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066338b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066338e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00663391: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00663394: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00663397: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066339a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066339d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006633a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006633a3: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6633a8u); f_007ba278();
    /* 006633a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006633af: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006633b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006633b5: mov dword ptr [ecx], 0xb3420c */ W32((u32)(r_ecx), 0xb3420cu);
    /* 006633bb: mov eax, dword ptr [0x9c8870] */ r_eax = R32((u32)(0x9c8870u));
    /* 006633c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006633c1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006633c4: call dword ptr [0xb34220] */ { u32 t = R32((u32)(0xb34220u)); r_esp -= 4; W32(r_esp, 0x6633cau); call_ind(t); }
    /* 006633ca: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006633cd: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 006633d0: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 006633d4: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 006633de: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 006633e4: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006633ea: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 006633ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006633f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006633f8: mov esp, ebp */ r_esp = r_ebp;
    /* 006633fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006633fb: ret 8 */ FN_RET(0x00663370); r_esp += 12; return;
}

void f_00663400(void) /* sub_663400 */
{
    FN_ENTER(0x00663400);
    /* 00663400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663401: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00663403: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663409: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66340eu); f_0068d5a8();
    /* 0066340e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066340f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663411: je 0x663466 */ if (fZ) goto L_00663466;
L_00663413:; BB(0x00663413);
    /* 00663413: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00663416: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066341a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066341b: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x663420u); f_0078ea2c();
    /* 00663420: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663423: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00663429: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066342b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066342d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066342f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00663430: jbe 0x66344d */ if ((fC||fZ)) goto L_0066344d;
L_00663432:; BB(0x00663432);
    /* 00663432: mov eax, dword ptr [ebp + 0x94] */ r_eax = R32((u32)(r_ebp+0x94u));
    /* 00663438: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066343a: jne 0x663466 */ if (!fZ) goto L_00663466;
L_0066343c:; BB(0x0066343c);
    /* 0066343c: call 0x8055e4 */ r_esp -= 4; W32(r_esp, 0x663441u); f_008055e4();
    /* 00663441: mov dword ptr [ebp + 0x94], 1 */ W32((u32)(r_ebp+0x94u), 0x1u);
    /* 0066344b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066344c: ret  */ FN_RET(0x00663400); r_esp += 4; return;
L_0066344d:; BB(0x0066344d);
    /* 0066344d: mov eax, dword ptr [ebp + 0x94] */ r_eax = R32((u32)(r_ebp+0x94u));
    /* 00663453: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663455: je 0x663466 */ if (fZ) goto L_00663466;
L_00663457:; BB(0x00663457);
    /* 00663457: call 0x8055c0 */ r_esp -= 4; W32(r_esp, 0x66345cu); f_008055c0();
    /* 0066345c: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
L_00663466:; BB(0x00663466);
    /* 00663466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663467: ret  */ FN_RET(0x00663400); r_esp += 4; return;
}

void f_00663468(void) /* sub_663468 */
{
    FN_ENTER(0x00663468);
    /* 00663468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663469: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066346c: mov eax, ecx */ r_eax = r_ecx;
    /* 0066346e: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00663474: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663476: jne 0x6634f0 */ if (!fZ) goto L_006634f0;
L_00663478:; BB(0x00663478);
    /* 00663478: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0066347e: mov edx, 1 */ r_edx = 0x1u;
    /* 00663483: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00663485: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00663487: jle 0x66351b */ if ((fZ||fS!=fO)) goto L_0066351b;
L_0066348d:; BB(0x0066348d);
    /* 0066348d: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00663491: mov esi, edx */ r_esi = r_edx;
    /* 00663493: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00663496: mov edi, eax */ r_edi = r_eax;
L_00663498:; BB(0x00663498);
    /* 00663498: mov eax, ebx */ r_eax = r_ebx;
    /* 0066349a: add eax, dword ptr [edi + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x98u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006634a0: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006634a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006634a4: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x6634a9u); f_00816eec();
    /* 006634a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006634aa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006634ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006634af: jne 0x6634b3 */ if (!fZ) goto L_006634b3;
L_006634b1:; BB(0x006634b1);
    /* 006634b1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006634b3:; BB(0x006634b3);
    /* 006634b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006634b6: cmp ebx, dword ptr [edi + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006634bc: jl 0x663498 */ if ((fS!=fO)) goto L_00663498;
L_006634be:; BB(0x006634be);
    /* 006634be: mov edx, esi */ r_edx = r_esi;
    /* 006634c0: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006634c4: mov eax, edi */ r_eax = r_edi;
    /* 006634c6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006634c9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006634cc: je 0x66351b */ if (fZ) goto L_0066351b;
L_006634ce:; BB(0x006634ce);
    /* 006634ce: movzx ebx, word ptr [eax + 0x60] */ r_ebx = (u32)R16((u32)(r_eax+0x60u));
    /* 006634d2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006634d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006634d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006634d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006634d9: push dword ptr [eax + 0x9c] */ { u32 v = R32((u32)(r_eax+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006634df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006634e0: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 006634e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006634e6: call 0x805804 */ r_esp -= 4; W32(r_esp, 0x6634ebu); f_00805804();
    /* 006634eb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006634ee: jmp 0x663516 */ goto L_00663516;
L_006634f0:; BB(0x006634f0);
    /* 006634f0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006634f3: jne 0x663516 */ if (!fZ) goto L_00663516;
L_006634f5:; BB(0x006634f5);
    /* 006634f5: movzx ebx, word ptr [eax + 0x60] */ r_ebx = (u32)R16((u32)(r_eax+0x60u));
    /* 006634f9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006634fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006634fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006634ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663500: push dword ptr [eax + 0x9c] */ { u32 v = R32((u32)(r_eax+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00663506: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663507: push dword ptr [eax + 0xa0] */ { u32 v = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066350d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066350e: call 0x805804 */ r_esp -= 4; W32(r_esp, 0x663513u); f_00805804();
    /* 00663513: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00663516:; BB(0x00663516);
    /* 00663516: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00663519: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066351a: ret  */ FN_RET(0x00663468); r_esp += 4; return;
L_0066351b:; BB(0x0066351b);
    /* 0066351b: movzx ebx, word ptr [eax + 0x60] */ r_ebx = (u32)R16((u32)(r_eax+0x60u));
    /* 0066351f: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00663522: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00663524: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663526: push dword ptr [eax + 0x9c] */ { u32 v = R32((u32)(r_eax+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066352c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066352d: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00663532: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663533: call 0x805804 */ r_esp -= 4; W32(r_esp, 0x663538u); f_00805804();
    /* 00663538: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066353b: jmp 0x663516 */ goto L_00663516;
}

void f_00663540(void) /* sub_663540 */
{
    FN_ENTER(0x00663540);
    /* 00663540: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00663541: mov edi, ecx */ r_edi = r_ecx;
    /* 00663543: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 00663549: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0066354c: fld dword ptr [0x939070] */ FPUSH(R_F32((u32)(0x939070u)));
    /* 00663552: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663554: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00663556: jg 0x66355a */ if ((!fZ&&fS==fO)) goto L_0066355a;
L_00663558:; BB(0x00663558);
    /* 00663558: mov edx, eax */ r_edx = r_eax;
L_0066355a:; BB(0x0066355a);
    /* 0066355a: mov eax, 1 */ r_eax = 0x1u;
    /* 0066355f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00663562: jl 0x663566 */ if ((fS!=fO)) goto L_00663566;
L_00663564:; BB(0x00663564);
    /* 00663564: mov edx, eax */ r_edx = r_eax;
L_00663566:; BB(0x00663566);
    /* 00663566: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00663568: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066356a: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 00663570: mov edx, dword ptr [edi + 0x88] */ r_edx = R32((u32)(r_edi+0x88u));
    /* 00663576: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00663577: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0066357d: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 00663583: mov eax, edx */ r_eax = r_edx;
    /* 00663585: jb 0x663589 */ if (fC) goto L_00663589;
L_00663587:; BB(0x00663587);
    /* 00663587: fst st(1) */ ST(1) = ST(0);
L_00663589:; BB(0x00663589);
    /* 00663589: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066358b: fstp dword ptr [edi + 0x9c] */ W_F32((u32)(r_edi+0x9cu), ST(0)); FPOP();
    /* 00663591: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00663594: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00663597: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066359a: mov eax, 0 */ r_eax = 0x0u;
    /* 0066359f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006635a1: jg 0x6635a5 */ if ((!fZ&&fS==fO)) goto L_006635a5;
L_006635a3:; BB(0x006635a3);
    /* 006635a3: mov ecx, eax */ r_ecx = r_eax;
L_006635a5:; BB(0x006635a5);
    /* 006635a5: mov eax, 0xc */ r_eax = 0xcu;
    /* 006635aa: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006635ad: jl 0x6635b1 */ if ((fS!=fO)) goto L_006635b1;
L_006635af:; BB(0x006635af);
    /* 006635af: mov ecx, eax */ r_ecx = r_eax;
L_006635b1:; BB(0x006635b1);
    /* 006635b1: mov dword ptr [edi + 0x94], ecx */ W32((u32)(r_edi+0x94u), r_ecx);
    /* 006635b7: mov eax, 0 */ r_eax = 0x0u;
    /* 006635bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006635be: jg 0x6635c2 */ if ((!fZ&&fS==fO)) goto L_006635c2;
L_006635c0:; BB(0x006635c0);
    /* 006635c0: mov edx, eax */ r_edx = r_eax;
L_006635c2:; BB(0x006635c2);
    /* 006635c2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006635c4: add ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006635ca: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006635cc: jl 0x6635d0 */ if ((fS!=fO)) goto L_006635d0;
L_006635ce:; BB(0x006635ce);
    /* 006635ce: mov ecx, edx */ r_ecx = r_edx;
L_006635d0:; BB(0x006635d0);
    /* 006635d0: mov dword ptr [edi + 0x98], ecx */ W32((u32)(r_edi+0x98u), r_ecx);
    /* 006635d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006635d7: ret  */ FN_RET(0x00663540); r_esp += 4; return;
}

void f_006635d8(void)
{
    FN_ENTER(0x006635d8);
    /* 006635d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006635d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006635db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006635dd: push 0x8e82d0 */ { u32 v = 0x8e82d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006635e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006635e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006635e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006635f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006635f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006635f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006635f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006635fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006635ff: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00663604: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066360b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x663610u); f_005caba4();
    /* 00663610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663611: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00663614: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663616: je 0x66364f */ if (fZ) goto L_0066364f;
L_00663618:; BB(0x00663618);
    /* 00663618: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066361f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663626: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663629: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066362f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663632: call 0x663654 */ r_esp -= 4; W32(r_esp, 0x663637u); f_00663654();
    /* 00663637: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066363a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00663641:; BB(0x00663641);
    /* 00663641: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663644: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066364b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066364d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066364e: ret  */ FN_RET(0x006635d8); r_esp += 4; return;
L_0066364f:; BB(0x0066364f);
    /* 0066364f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663651: jmp 0x663641 */ goto L_00663641;
}

void f_00663654(void) /* sub_663654 */
{
    FN_ENTER(0x00663654);
    /* 00663654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663655: mov ebp, esp */ r_ebp = r_esp;
    /* 00663657: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663659: push 0x8e82ec */ { u32 v = 0x8e82ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0066365e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663665: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066366c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066366f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663672: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00663675: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00663678: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066367b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066367e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663681: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00663684: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00663687: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x66368cu); f_007ba278();
    /* 0066368c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663693: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00663696: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663699: mov dword ptr [ecx], 0xb34238 */ W32((u32)(r_ecx), 0xb34238u);
    /* 0066369f: mov eax, dword ptr [0x9c8874] */ r_eax = R32((u32)(0x9c8874u));
    /* 006636a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006636a5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006636a8: call dword ptr [0xb3424c] */ { u32 t = R32((u32)(0xb3424cu)); r_esp -= 4; W32(r_esp, 0x6636aeu); call_ind(t); }
    /* 006636ae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006636b1: call 0x663540 */ r_esp -= 4; W32(r_esp, 0x6636b6u); f_00663540();
    /* 006636b6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006636b9: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006636bd: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006636c3: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006636c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006636ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006636d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006636d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006636d4: ret 8 */ FN_RET(0x00663654); r_esp += 12; return;
}

void f_006636d8(void) /* sub_6636D8 */
{
    FN_ENTER(0x006636d8);
    /* 006636d8: mov dword ptr [0xa8fac0], 0x3f800000 */ W32((u32)(0xa8fac0u), 0x3f800000u);
    /* 006636e2: mov dword ptr [0xa8fac4], 0x41000000 */ W32((u32)(0xa8fac4u), 0x41000000u);
    /* 006636ec: mov dword ptr [0xa8fac8], 0x3fc00000 */ W32((u32)(0xa8fac8u), 0x3fc00000u);
    /* 006636f6: ret  */ FN_RET(0x006636d8); r_esp += 4; return;
}

void f_006636f8(void) /* sub_6636F8 */
{
    FN_ENTER(0x006636f8);
    /* 006636f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006636f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006636fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006636fd: call 0x66371c */ r_esp -= 4; W32(r_esp, 0x663702u); f_0066371c();
    /* 00663702: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663706: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663708: jne 0x66370e */ if (!fZ) goto L_0066370e;
L_0066370a:; BB(0x0066370a);
    /* 0066370a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066370b: ret 4 */ FN_RET(0x006636f8); r_esp += 8; return;
L_0066370e:; BB(0x0066370e);
    /* 0066370e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066370f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663714u); f_005c2f74();
    /* 00663714: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663715: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663716: ret 4 */ FN_RET(0x006636f8); r_esp += 8; return;
}

void f_0066371c(void) /* sub_66371C */
{
    FN_ENTER(0x0066371c);
    /* 0066371c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066371d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066371f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663721: push 0x8e8308 */ { u32 v = 0x8e8308u; r_esp -= 4; W32(r_esp, v); }
    /* 00663726: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066372c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066372d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663734: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663737: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066373a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066373d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663740: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663743: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00663746: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663749: mov dword ptr [ecx], 0xb34290 */ W32((u32)(r_ecx), 0xb34290u);
    /* 0066374f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663756: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x66375bu); f_008171e8();
    /* 0066375b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066375e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663765: mov esp, ebp */ r_esp = r_ebp;
    /* 00663767: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663768: ret  */ FN_RET(0x0066371c); r_esp += 4; return;
}

void f_0066376c(void) /* sub_66376C */
{
    FN_ENTER(0x0066376c);
    /* 0066376c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066376d: mov esi, ecx */ r_esi = r_ecx;
    /* 0066376f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663773: mov ecx, esi */ r_ecx = r_esi;
    /* 00663775: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x66377au); f_008193cc();
    /* 0066377a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0066377e: mov dword ptr [esi], 0xb34290 */ W32((u32)(r_esi), 0xb34290u);
    /* 00663784: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00663787: mov ecx, esi */ r_ecx = r_esi;
    /* 00663789: mov eax, dword ptr [0x9c8878] */ r_eax = R32((u32)(0x9c8878u));
    /* 0066378e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00663791: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00663796: ja 0x66379a */ if ((!fC&&!fZ)) goto L_0066379a;
L_00663798:; BB(0x00663798);
    /* 00663798: mov eax, edx */ r_eax = r_edx;
L_0066379a:; BB(0x0066379a);
    /* 0066379a: mov dword ptr [esi + 0x21c], eax */ W32((u32)(r_esi+0x21cu), r_eax);
    /* 006637a0: call 0x663964 */ r_esp -= 4; W32(r_esp, 0x6637a5u); f_00663964();
    /* 006637a5: mov eax, esi */ r_eax = r_esi;
    /* 006637a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006637a8: ret 8 */ FN_RET(0x0066376c); r_esp += 12; return;
}

void f_006637ac(void) /* sub_6637AC */
{
    FN_ENTER(0x006637ac);
    /* 006637ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006637ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006637ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006637af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006637b0: mov edx, ecx */ r_edx = r_ecx;
    /* 006637b2: mov eax, dword ptr [edx + 0x21c] */ r_eax = R32((u32)(r_edx+0x21cu));
    /* 006637b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006637ba: lea ebx, [edx + 0x1c] */ r_ebx = (u32)(r_edx+0x1cu);
    /* 006637bd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006637bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006637c1: jbe 0x66380c */ if ((fC||fZ)) goto L_0066380c;
L_006637c3:; BB(0x006637c3);
    /* 006637c3: mov edi, edx */ r_edi = r_edx;
    /* 006637c5: mov ebp, ecx */ r_ebp = r_ecx;
L_006637c7:; BB(0x006637c7);
    /* 006637c7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006637c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006637cb: je 0x6637fa */ if (fZ) goto L_006637fa;
L_006637cd:; BB(0x006637cd);
    /* 006637cd: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 006637d0: lea edx, [ebx + 0x10] */ r_edx = (u32)(r_ebx+0x10u);
    /* 006637d3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6637d8u); f_0082ebac();
    /* 006637d8: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 006637db: fcomp dword ptr [ebx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x1cu))); FPOP();
    /* 006637de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006637e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006637e1: jae 0x6637f1 */ if (!fC) goto L_006637f1;
L_006637e3:; BB(0x006637e3);
    /* 006637e3: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 006637e9: mov eax, dword ptr [edi + 0x21c] */ r_eax = R32((u32)(r_edi+0x21cu));
    /* 006637ef: jmp 0x6637fa */ goto L_006637fa;
L_006637f1:; BB(0x006637f1);
    /* 006637f1: mov eax, dword ptr [edi + 0x21c] */ r_eax = R32((u32)(r_edi+0x21cu));
    /* 006637f7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006637fa:; BB(0x006637fa);
    /* 006637fa: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006637fd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00663800: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00663802: jb 0x6637c7 */ if (fC) goto L_006637c7;
L_00663804:; BB(0x00663804);
    /* 00663804: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00663806: mov edx, edi */ r_edx = r_edi;
    /* 00663808: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066380a: jne 0x663819 */ if (!fZ) goto L_00663819;
L_0066380c:; BB(0x0066380c);
    /* 0066380c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00663810: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663815: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00663819:; BB(0x00663819);
    /* 00663819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066381a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066381b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066381c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066381d: ret  */ FN_RET(0x006637ac); r_esp += 4; return;
}

void f_00663820(void) /* sub_663820 */
{
    FN_ENTER(0x00663820);
    /* 00663820: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663821: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663824: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663826: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x66382bu); f_007a902c();
    /* 0066382b: mov eax, dword ptr [ebx + 0x21c] */ r_eax = R32((u32)(r_ebx+0x21cu));
    /* 00663831: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 00663834: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00663836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00663838: jbe 0x663955 */ if ((fC||fZ)) goto L_00663955;
L_0066383e:; BB(0x0066383e);
    /* 0066383e: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00663842: mov esi, ecx */ r_esi = r_ecx;
    /* 00663844: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00663848: mov edi, ebx */ r_edi = r_ebx;
    /* 0066384a: mov ebx, edx */ r_ebx = r_edx;
L_0066384c:; BB(0x0066384c);
    /* 0066384c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0066384e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663850: je 0x66393f */ if (fZ) goto L_0066393f;
L_00663856:; BB(0x00663856);
    /* 00663856: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00663858: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66385du); f_0061cdb0();
    /* 0066385d: mov eax, dword ptr [0x9c889c] */ r_eax = R32((u32)(0x9c889cu));
    /* 00663862: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00663865: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00663867: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0066386a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0066386d: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00663870: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00663873: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00663879: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0066387c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00663880: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00663883: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00663887: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0066388a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0066388e: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00663894: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00663898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663899: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066389a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66389fu); f_0078ea50();
    /* 0066389f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006638a2: fcomp dword ptr [0x9390c4] */ fx_compare(ST(0), R_F32((u32)(0x9390c4u))); FPOP();
    /* 006638a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006638aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006638ab: jb 0x6638b8 */ if (fC) goto L_006638b8;
L_006638ad:; BB(0x006638ad);
    /* 006638ad: mov eax, dword ptr [edi + 0x21c] */ r_eax = R32((u32)(r_edi+0x21cu));
    /* 006638b3: jmp 0x66393f */ goto L_0066393f;
L_006638b8:; BB(0x006638b8);
    /* 006638b8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006638bc: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006638bf: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006638c3: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006638c6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006638ca: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006638cd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006638d1: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6638d6u); f_0082df08();
    /* 006638d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006638d8: fld dword ptr [0x9390c0] */ FPUSH(R_F32((u32)(0x9390c0u)));
    /* 006638de: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006638e2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006638e4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006638e8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006638ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006638ee: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006638f0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006638f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006638f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006638f6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006638fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006638fc: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00663900: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00663904: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00663907: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 0066390a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x66390fu); f_0082f9c4();
    /* 0066390f: mov eax, dword ptr [0x9c889c] */ r_eax = R32((u32)(0x9c889cu));
    /* 00663914: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00663917: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0066391a: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0066391e: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00663921: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00663925: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00663927: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663929: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0066392c: push 0x9c889c */ { u32 v = 0x9c889cu; r_esp -= 4; W32(r_esp, v); }
    /* 00663931: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x663936u); f_0082c07c();
    /* 00663936: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663939: mov eax, dword ptr [edi + 0x21c] */ r_eax = R32((u32)(r_edi+0x21cu));
L_0066393f:; BB(0x0066393f);
    /* 0066393f: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00663942: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00663945: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00663947: jb 0x66384c */ if (fC) goto L_0066384c;
L_0066394d:; BB(0x0066394d);
    /* 0066394d: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00663951: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_00663955:; BB(0x00663955);
    /* 00663955: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66395au); f_0061cdb0();
    /* 0066395a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x66395fu); f_007a9044();
    /* 0066395f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00663962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663963: ret  */ FN_RET(0x00663820); r_esp += 4; return;
}

void f_00663964(void) /* sub_663964 */
{
    FN_ENTER(0x00663964);
    /* 00663964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663965: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663968: mov edx, ecx */ r_edx = r_ecx;
    /* 0066396a: mov ecx, dword ptr [edx + 0x21c] */ r_ecx = R32((u32)(r_edx+0x21cu));
    /* 00663970: lea eax, [edx + 0x1c] */ r_eax = (u32)(r_edx+0x1cu);
    /* 00663973: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00663975: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00663977: jbe 0x663ad7 */ if ((fC||fZ)) goto L_00663ad7;
L_0066397d:; BB(0x0066397d);
    /* 0066397d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00663981: mov esi, edx */ r_esi = r_edx;
    /* 00663983: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00663987: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0066398b: mov ebp, eax */ r_ebp = r_eax;
L_0066398d:; BB(0x0066398d);
    /* 0066398d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x663992u); f_008587a5();
    /* 00663992: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00663995: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00663998: fdiv dword ptr [0x9390bc] */ ST(0) = ST(0) / R_F32((u32)(0x9390bcu));
    /* 0066399e: fmul dword ptr [0x9390a8] */ ST(0) = ST(0) * R_F32((u32)(0x9390a8u));
    /* 006639a4: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 006639a8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6639adu); f_008587a5();
    /* 006639ad: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006639b1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006639b5: fdiv dword ptr [0x9390bc] */ ST(0) = ST(0) / R_F32((u32)(0x9390bcu));
    /* 006639bb: fmul dword ptr [0x9390b4] */ ST(0) = ST(0) * R_F32((u32)(0x9390b4u));
    /* 006639c1: fadd dword ptr [0x9390b8] */ ST(0) = ST(0) + R_F32((u32)(0x9390b8u));
    /* 006639c7: fmul dword ptr [0x9390b0] */ ST(0) = ST(0) * R_F32((u32)(0x9390b0u));
    /* 006639cd: fdiv dword ptr [0x9390ac] */ ST(0) = ST(0) / R_F32((u32)(0x9390acu));
    /* 006639d3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006639d7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006639dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006639e1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006639e5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006639e9: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006639ed: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006639f1: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006639f6: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006639fa: sub edi, dword ptr [eax + 0x194] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x194u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00663a00: mov ecx, edi */ r_ecx = r_edi;
    /* 00663a02: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x663a07u); f_0082ddd8();
    /* 00663a07: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00663a0b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00663a0f: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00663a13: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00663a17: mov ecx, edi */ r_ecx = r_edi;
    /* 00663a19: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x663a1eu); f_0082dcbc();
    /* 00663a1e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00663a22: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00663a24: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00663a2a: fld dword ptr [ecx + 0x178] */ FPUSH(R_F32((u32)(r_ecx+0x178u)));
    /* 00663a30: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 00663a34: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 00663a37: fld dword ptr [ecx + 0x17c] */ FPUSH(R_F32((u32)(r_ecx+0x17cu)));
    /* 00663a3d: fadd dword ptr [0x9390a4] */ ST(0) = ST(0) + R_F32((u32)(0x9390a4u));
    /* 00663a43: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00663a46: fadd dword ptr [ecx + 0x180] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x180u));
    /* 00663a4c: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00663a4f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x663a54u); f_008587a5();
    /* 00663a54: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00663a58: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00663a5c: fdiv dword ptr [0x9390bc] */ ST(0) = ST(0) / R_F32((u32)(0x9390bcu));
    /* 00663a62: fmul dword ptr [0x9390a0] */ ST(0) = ST(0) * R_F32((u32)(0x9390a0u));
    /* 00663a68: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00663a6b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x663a70u); f_008587a5();
    /* 00663a70: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00663a74: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00663a78: fdiv dword ptr [0x9390bc] */ ST(0) = ST(0) / R_F32((u32)(0x9390bcu));
    /* 00663a7e: fmul dword ptr [0x939098] */ ST(0) = ST(0) * R_F32((u32)(0x939098u));
    /* 00663a84: fadd dword ptr [0x93909c] */ ST(0) = ST(0) + R_F32((u32)(0x93909cu));
    /* 00663a8a: fchs  */ ST(0) = -ST(0);
    /* 00663a8c: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00663a8f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x663a94u); f_008587a5();
    /* 00663a94: mov dword ptr [ebp + 0x1c], 0xc1a00000 */ W32((u32)(r_ebp+0x1cu), 0xc1a00000u);
    /* 00663a9b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00663a9f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00663aa3: fdiv dword ptr [0x9390bc] */ ST(0) = ST(0) / R_F32((u32)(0x9390bcu));
    /* 00663aa9: fmul dword ptr [0x9390a0] */ ST(0) = ST(0) * R_F32((u32)(0x9390a0u));
    /* 00663aaf: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
    /* 00663ab6: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00663ab9: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00663abc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00663abf: cmp ebx, dword ptr [esi + 0x21c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x21cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00663ac5: jb 0x66398d */ if (fC) goto L_0066398d;
L_00663acb:; BB(0x00663acb);
    /* 00663acb: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00663acf: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00663ad3: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00663ad7:; BB(0x00663ad7);
    /* 00663ad7: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00663ada: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663adb: ret  */ FN_RET(0x00663964); r_esp += 4; return;
}

void f_00663adc(void) /* sub_663ADC */
{
    FN_ENTER(0x00663adc);
    /* 00663adc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663add: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663adf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00663ae1: call 0x663b00 */ r_esp -= 4; W32(r_esp, 0x663ae6u); f_00663b00();
    /* 00663ae6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663aea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663aec: jne 0x663af2 */ if (!fZ) goto L_00663af2;
L_00663aee:; BB(0x00663aee);
    /* 00663aee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663aef: ret 4 */ FN_RET(0x00663adc); r_esp += 8; return;
L_00663af2:; BB(0x00663af2);
    /* 00663af2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663af3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663af8u); f_005c2f74();
    /* 00663af8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663af9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663afa: ret 4 */ FN_RET(0x00663adc); r_esp += 8; return;
}

void f_00663b00(void) /* sub_663B00 */
{
    FN_ENTER(0x00663b00);
    /* 00663b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00663b03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663b05: push 0x8e8324 */ { u32 v = 0x8e8324u; r_esp -= 4; W32(r_esp, v); }
    /* 00663b0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663b11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663b18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663b1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663b1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00663b21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663b24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663b27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00663b2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663b2d: mov dword ptr [ecx], 0xb34320 */ W32((u32)(r_ecx), 0xb34320u);
    /* 00663b33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663b3a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x663b3fu); f_008171e8();
    /* 00663b3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663b42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663b49: mov esp, ebp */ r_esp = r_ebp;
    /* 00663b4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663b4c: ret  */ FN_RET(0x00663b00); r_esp += 4; return;
}

void f_00663b50(void) /* sub_663B50 */
{
    FN_ENTER(0x00663b50);
    /* 00663b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00663b53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663b55: push 0x8e8366 */ { u32 v = 0x8e8366u; r_esp -= 4; W32(r_esp, v); }
    /* 00663b5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663b61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663b68: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663b6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663b6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00663b71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00663b74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00663b77: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00663b7a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00663b7d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663b80: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00663b83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663b85: jl 0x663b95 */ if ((fS!=fO)) goto L_00663b95;
L_00663b87:; BB(0x00663b87);
    /* 00663b87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663b8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663b91: mov esp, ebp */ r_esp = r_ebp;
    /* 00663b93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663b94: ret  */ FN_RET(0x00663b50); r_esp += 4; return;
L_00663b95:; BB(0x00663b95);
    /* 00663b95: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x663b9au); f_00807ac0();
    /* 00663b9a: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663b9d: je 0x663be9 */ if (fZ) goto L_00663be9;
L_00663b9f:; BB(0x00663b9f);
    /* 00663b9f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00663ba6: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00663bab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x663bb0u); f_005caba4();
    /* 00663bb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663bb1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00663bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663bb6: je 0x663bdd */ if (fZ) goto L_00663bdd;
L_00663bb8:; BB(0x00663bb8);
    /* 00663bb8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00663bbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663bc6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00663bc9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00663bcb: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663bd1: call 0x66376c */ r_esp -= 4; W32(r_esp, 0x663bd6u); f_0066376c();
    /* 00663bd6: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00663bdd:; BB(0x00663bdd);
    /* 00663bdd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00663be0: mov dword ptr [eax + 0x1c], 2 */ W32((u32)(r_eax+0x1cu), 0x2u);
    /* 00663be7: jmp 0x663b87 */ goto L_00663b87;
L_00663be9:; BB(0x00663be9);
    /* 00663be9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00663bf0: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00663bf5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x663bfau); f_005caba4();
    /* 00663bfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663bfb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00663bfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663c00: je 0x663bdd */ if (fZ) goto L_00663bdd;
L_00663c02:; BB(0x00663c02);
    /* 00663c02: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00663c09: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00663c10: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00663c13: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00663c15: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663c1b: call 0x66376c */ r_esp -= 4; W32(r_esp, 0x663c20u); f_0066376c();
    /* 00663c20: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00663c27: jmp 0x663bdd */ goto L_00663bdd;
}

void f_00663c2c(void) /* sub_663C2C */
{
    FN_ENTER(0x00663c2c);
    /* 00663c2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663c2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00663c2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663c31: push 0x8e838c */ { u32 v = 0x8e838cu; r_esp -= 4; W32(r_esp, v); }
    /* 00663c36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663c3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663c3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663c44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663c47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663c4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00663c4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663c50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663c53: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x663c58u); f_006dc358();
    /* 00663c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663c5a: jne 0x663c95 */ if (!fZ) goto L_00663c95;
L_00663c5c:; BB(0x00663c5c);
    /* 00663c5c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00663c63: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00663c65: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x663c6au); f_005caba4();
    /* 00663c6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663c6b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00663c6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663c70: je 0x663c95 */ if (fZ) goto L_00663c95;
L_00663c72:; BB(0x00663c72);
    /* 00663c72: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00663c79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663c80: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663c86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663c89: call 0x663ca4 */ r_esp -= 4; W32(r_esp, 0x663c8eu); f_00663ca4();
    /* 00663c8e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00663c95:; BB(0x00663c95);
    /* 00663c95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663c98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663c9f: mov esp, ebp */ r_esp = r_ebp;
    /* 00663ca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663ca2: ret  */ FN_RET(0x00663c2c); r_esp += 4; return;
}

void f_00663ca4(void) /* sub_663CA4 */
{
    FN_ENTER(0x00663ca4);
    /* 00663ca4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ca5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663ca7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663cab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00663cad: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x663cb2u); f_008193cc();
    /* 00663cb2: mov dword ptr [ebx], 0xb34320 */ W32((u32)(r_ebx), 0xb34320u);
    /* 00663cb8: mov edx, dword ptr [0x9c88ac] */ r_edx = R32((u32)(0x9c88acu));
    /* 00663cbe: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00663cc1: mov eax, ebx */ r_eax = r_ebx;
    /* 00663cc3: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 00663cca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663ccb: ret 4 */ FN_RET(0x00663ca4); r_esp += 8; return;
}

void f_00663cd0(void) /* sub_663CD0 */
{
    FN_ENTER(0x00663cd0);
    /* 00663cd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663cd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663cd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00663cd5: call 0x663cf4 */ r_esp -= 4; W32(r_esp, 0x663cdau); f_00663cf4();
    /* 00663cda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663cde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663ce0: jne 0x663ce6 */ if (!fZ) goto L_00663ce6;
L_00663ce2:; BB(0x00663ce2);
    /* 00663ce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663ce3: ret 4 */ FN_RET(0x00663cd0); r_esp += 8; return;
L_00663ce6:; BB(0x00663ce6);
    /* 00663ce6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ce7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663cecu); f_005c2f74();
    /* 00663cec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663ced: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663cee: ret 4 */ FN_RET(0x00663cd0); r_esp += 8; return;
}

void f_00663cf4(void) /* sub_663CF4 */
{
    FN_ENTER(0x00663cf4);
    /* 00663cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663cf5: mov ebp, esp */ r_ebp = r_esp;
    /* 00663cf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663cf9: push 0x8e83a8 */ { u32 v = 0x8e83a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00663cfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663d05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663d0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663d0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663d12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00663d15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663d18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663d1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00663d1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663d25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663d28: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00663d2e: mov dword ptr [eax], 0xb34500 */ W32((u32)(r_eax), 0xb34500u);
    /* 00663d34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663d36: je 0x663d52 */ if (fZ) goto L_00663d52;
L_00663d38:; BB(0x00663d38);
    /* 00663d38: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00663d3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00663d41: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00663d45: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663d48: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
L_00663d52:; BB(0x00663d52);
    /* 00663d52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663d53: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x663d58u); f_007b4e84();
    /* 00663d58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663d59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663d5c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x663d61u); f_007b9c8c();
    /* 00663d61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663d68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663d6b: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x663d70u); f_006131f4();
    /* 00663d70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663d73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663d7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00663d7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663d7d: ret  */ FN_RET(0x00663cf4); r_esp += 4; return;
}

void f_00663d80(void) /* sub_663D80 */
{
    FN_ENTER(0x00663d80);
    /* 00663d80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663d81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663d83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00663d85: call 0x663da4 */ r_esp -= 4; W32(r_esp, 0x663d8au); f_00663da4();
    /* 00663d8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663d8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663d90: jne 0x663d96 */ if (!fZ) goto L_00663d96;
L_00663d92:; BB(0x00663d92);
    /* 00663d92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663d93: ret 4 */ FN_RET(0x00663d80); r_esp += 8; return;
L_00663d96:; BB(0x00663d96);
    /* 00663d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663d97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663d9cu); f_005c2f74();
    /* 00663d9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663d9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663d9e: ret 4 */ FN_RET(0x00663d80); r_esp += 8; return;
}

void f_00663da4(void) /* sub_663DA4 */
{
    FN_ENTER(0x00663da4);
    /* 00663da4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663da5: mov ebp, esp */ r_ebp = r_esp;
    /* 00663da7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663da9: push 0x8e83c4 */ { u32 v = 0x8e83c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00663dae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663db5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663dbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663dbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663dc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00663dc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663dc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663dcb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00663dce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663dd5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663dd8: mov dword ptr [eax], 0xb344a0 */ W32((u32)(r_eax), 0xb344a0u);
    /* 00663dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663ddf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x663de4u); f_007b4e84();
    /* 00663de4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663de5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663de8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x663dedu); f_007b9c8c();
    /* 00663ded: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663df4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663df7: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x663dfcu); f_0063323c();
    /* 00663dfc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663dff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663e06: mov esp, ebp */ r_esp = r_ebp;
    /* 00663e08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663e09: ret  */ FN_RET(0x00663da4); r_esp += 4; return;
}

void f_00663e0c(void) /* sub_663E0C */
{
    FN_ENTER(0x00663e0c);
    /* 00663e0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663e0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00663e0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00663e11: call 0x663e30 */ r_esp -= 4; W32(r_esp, 0x663e16u); f_00663e30();
    /* 00663e16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00663e1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663e1c: jne 0x663e22 */ if (!fZ) goto L_00663e22;
L_00663e1e:; BB(0x00663e1e);
    /* 00663e1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663e1f: ret 4 */ FN_RET(0x00663e0c); r_esp += 8; return;
L_00663e22:; BB(0x00663e22);
    /* 00663e22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663e23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x663e28u); f_005c2f74();
    /* 00663e28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663e29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663e2a: ret 4 */ FN_RET(0x00663e0c); r_esp += 8; return;
}

void f_00663e30(void) /* sub_663E30 */
{
    FN_ENTER(0x00663e30);
    /* 00663e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00663e33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663e35: push 0x8e83e0 */ { u32 v = 0x8e83e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663e3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663e41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00663e48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663e4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00663e4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00663e51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00663e54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00663e57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00663e5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00663e5d: mov dword ptr [ecx], 0xb34530 */ W32((u32)(r_ecx), 0xb34530u);
    /* 00663e63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663e6a: call 0x644120 */ r_esp -= 4; W32(r_esp, 0x663e6fu); f_00644120();
    /* 00663e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00663e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663e7c: ret  */ FN_RET(0x00663e30); r_esp += 4; return;
}

void f_00663e80(void) /* sub_663E80 */
{
    FN_ENTER(0x00663e80);
    /* 00663e80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663e81: mov eax, 4 */ r_eax = 0x4u;
    /* 00663e86: mov ebx, eax */ r_ebx = r_eax;
L_00663e88:; BB(0x00663e88);
    /* 00663e88: mov ecx, dword ptr [ebx + 0xa8fae0] */ r_ecx = R32((u32)(r_ebx+0xa8fae0u));
    /* 00663e8e: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00663e91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663e93: je 0x663ea7 */ if (fZ) goto L_00663ea7;
L_00663e95:; BB(0x00663e95);
    /* 00663e95: je 0x663e9d */ if (fZ) goto L_00663e9d;
L_00663e97:; BB(0x00663e97);
    /* 00663e97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663e99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00663e9b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x663e9du); call_ind(t); }
L_00663e9d:; BB(0x00663e9d);
    /* 00663e9d: mov dword ptr [ebx + 0xa8fae4], 0 */ W32((u32)(r_ebx+0xa8fae4u), 0x0u);
L_00663ea7:; BB(0x00663ea7);
    /* 00663ea7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00663ea9: jge 0x663e88 */ if ((fS==fO)) goto L_00663e88;
L_00663eab:; BB(0x00663eab);
    /* 00663eab: mov eax, 8 */ r_eax = 0x8u;
    /* 00663eb0: mov ebx, eax */ r_ebx = r_eax;
L_00663eb2:; BB(0x00663eb2);
    /* 00663eb2: mov ecx, dword ptr [ebx + 0xa8faec] */ r_ecx = R32((u32)(r_ebx+0xa8faecu));
    /* 00663eb8: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00663ebb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663ebd: je 0x663ed1 */ if (fZ) goto L_00663ed1;
L_00663ebf:; BB(0x00663ebf);
    /* 00663ebf: je 0x663ec7 */ if (fZ) goto L_00663ec7;
L_00663ec1:; BB(0x00663ec1);
    /* 00663ec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663ec3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00663ec5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x663ec7u); call_ind(t); }
L_00663ec7:; BB(0x00663ec7);
    /* 00663ec7: mov dword ptr [ebx + 0xa8faf0], 0 */ W32((u32)(r_ebx+0xa8faf0u), 0x0u);
L_00663ed1:; BB(0x00663ed1);
    /* 00663ed1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00663ed3: jge 0x663eb2 */ if ((fS==fO)) goto L_00663eb2;
L_00663ed5:; BB(0x00663ed5);
    /* 00663ed5: mov ecx, dword ptr [0xa8fb28] */ r_ecx = R32((u32)(0xa8fb28u));
    /* 00663edb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663edd: je 0x663efa */ if (fZ) goto L_00663efa;
L_00663edf:; BB(0x00663edf);
    /* 00663edf: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x663ee4u); f_00829de0();
    /* 00663ee4: push dword ptr [0xa8fb28] */ { u32 v = R32((u32)(0xa8fb28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663eea: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x663eefu); f_0082e960();
    /* 00663eef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663ef0: mov dword ptr [0xa8fb28], 0 */ W32((u32)(0xa8fb28u), 0x0u);
L_00663efa:; BB(0x00663efa);
    /* 00663efa: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00663f00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663f02: je 0x663f17 */ if (fZ) goto L_00663f17;
L_00663f04:; BB(0x00663f04);
    /* 00663f04: je 0x663f0d */ if (fZ) goto L_00663f0d;
L_00663f06:; BB(0x00663f06);
    /* 00663f06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663f08: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x663f0du); f_004066a8();
L_00663f0d:; BB(0x00663f0d);
    /* 00663f0d: mov dword ptr [0xa8fb2c], 0 */ W32((u32)(0xa8fb2cu), 0x0u);
L_00663f17:; BB(0x00663f17);
    /* 00663f17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00663f18: ret  */ FN_RET(0x00663e80); r_esp += 4; return;
}

void f_00663f1c(void) /* sub_663F1C */
{
    FN_ENTER(0x00663f1c);
    /* 00663f1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00663f1d: mov edi, ecx */ r_edi = r_ecx;
    /* 00663f1f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00663f21: mov ecx, edi */ r_ecx = r_edi;
    /* 00663f23: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663f29: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663f2f: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x663f32u); call_ind(t); }
    /* 00663f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663f34: je 0x663f93 */ if (fZ) goto L_00663f93;
L_00663f36:; BB(0x00663f36);
    /* 00663f36: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x663f3bu); f_0082dab0();
    /* 00663f3b: mov ecx, edi */ r_ecx = r_edi;
    /* 00663f3d: call 0x663fa4 */ r_esp -= 4; W32(r_esp, 0x663f42u); f_00663fa4();
    /* 00663f42: mov ecx, dword ptr [0xa8fb28] */ r_ecx = R32((u32)(0xa8fb28u));
    /* 00663f48: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x663f4du); f_00829cc8();
    /* 00663f4d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x663f52u); f_0082d7b0();
    /* 00663f52: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00663f55: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x663f5au); f_0082d838();
    /* 00663f5a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00663f5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00663f5f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x663f64u); f_0082d8bc();
    /* 00663f64: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 00663f6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663f6c: je 0x663f95 */ if (fZ) goto L_00663f95;
L_00663f6e:; BB(0x00663f6e);
    /* 00663f6e: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663f74: mov ecx, dword ptr [edi + 0xd4] */ r_ecx = R32((u32)(r_edi+0xd4u));
    /* 00663f7a: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x663f7fu); f_0083bd00();
L_00663f7f:; BB(0x00663f7f);
    /* 00663f7f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x663f84u); f_0082da80();
    /* 00663f84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663f86: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x663f8bu); f_0083a308();
    /* 00663f8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663f8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00663f8e: call 0x664124 */ r_esp -= 4; W32(r_esp, 0x663f93u); f_00664124();
L_00663f93:; BB(0x00663f93);
    /* 00663f93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00663f94: ret  */ FN_RET(0x00663f1c); r_esp += 4; return;
L_00663f95:; BB(0x00663f95);
    /* 00663f95: push dword ptr [edi + 0xd4] */ { u32 v = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00663f9b: call 0x805cc4 */ r_esp -= 4; W32(r_esp, 0x663fa0u); f_00805cc4();
    /* 00663fa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663fa1: jmp 0x663f7f */ goto L_00663f7f;
}

void f_00663fa4(void) /* sub_663FA4 */
{
    FN_ENTER(0x00663fa4);
    /* 00663fa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00663fa5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00663fa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00663fa7: mov eax, ecx */ r_eax = r_ecx;
    /* 00663fa9: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00663faf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00663fb1: je 0x6640bf */ if (fZ) goto L_006640bf;
L_00663fb7:; BB(0x00663fb7);
    /* 00663fb7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663fba: jne 0x663fc8 */ if (!fZ) goto L_00663fc8;
L_00663fbc:; BB(0x00663fbc);
    /* 00663fbc: mov ecx, eax */ r_ecx = r_eax;
    /* 00663fbe: call 0x6640c4 */ r_esp -= 4; W32(r_esp, 0x663fc3u); f_006640c4();
    /* 00663fc3: jmp 0x6640bf */ goto L_006640bf;
L_00663fc8:; BB(0x00663fc8);
    /* 00663fc8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00663fcb: jne 0x6640bf */ if (!fZ) goto L_006640bf;
L_00663fd1:; BB(0x00663fd1);
    /* 00663fd1: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00663fd7: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00663fdc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00663fde: jle 0x664019 */ if ((fZ||fS!=fO)) goto L_00664019;
L_00663fe0:; BB(0x00663fe0);
    /* 00663fe0: mov esi, 0 */ r_esi = 0x0u;
    /* 00663fe5: jle 0x664019 */ if ((fZ||fS!=fO)) goto L_00664019;
L_00663fe7:; BB(0x00663fe7);
    /* 00663fe7: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00663fea: mov edi, eax */ r_edi = r_eax;
L_00663fec:; BB(0x00663fec);
    /* 00663fec: mov edx, esi */ r_edx = r_esi;
    /* 00663fee: add edx, dword ptr [edi + 0xd0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00663ff4: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00663ff7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ff8: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x663ffdu); f_00816eec();
    /* 00663ffd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663ffe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00664001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664003: jne 0x664007 */ if (!fZ) goto L_00664007;
L_00664005:; BB(0x00664005);
    /* 00664005: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00664007:; BB(0x00664007);
    /* 00664007: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066400a: cmp esi, dword ptr [edi + 0xcc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664010: jl 0x663fec */ if ((fS!=fO)) goto L_00663fec;
L_00664012:; BB(0x00664012);
    /* 00664012: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00664015: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664017: je 0x664033 */ if (fZ) goto L_00664033;
L_00664019:; BB(0x00664019);
    /* 00664019: mov eax, dword ptr [0xa8fb00] */ r_eax = R32((u32)(0xa8fb00u));
    /* 0066401e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664020: je 0x664025 */ if (fZ) goto L_00664025;
L_00664022:; BB(0x00664022);
    /* 00664022: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00664025:; BB(0x00664025);
    /* 00664025: mov eax, dword ptr [0xa8fb04] */ r_eax = R32((u32)(0xa8fb04u));
    /* 0066402a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066402c: je 0x66404b */ if (fZ) goto L_0066404b;
L_0066402e:; BB(0x0066402e);
    /* 0066402e: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00664031: jmp 0x66404b */ goto L_0066404b;
L_00664033:; BB(0x00664033);
    /* 00664033: mov eax, dword ptr [0xa8fb00] */ r_eax = R32((u32)(0xa8fb00u));
    /* 00664038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066403a: je 0x66403f */ if (fZ) goto L_0066403f;
L_0066403c:; BB(0x0066403c);
    /* 0066403c: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0066403f:; BB(0x0066403f);
    /* 0066403f: mov eax, dword ptr [0xa8fb04] */ r_eax = R32((u32)(0xa8fb04u));
    /* 00664044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664046: je 0x66404b */ if (fZ) goto L_0066404b;
L_00664048:; BB(0x00664048);
    /* 00664048: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0066404b:; BB(0x0066404b);
    /* 0066404b: mov eax, dword ptr [0xa8faf8] */ r_eax = R32((u32)(0xa8faf8u));
    /* 00664050: cmp eax, dword ptr [0xa9c4ec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664056: je 0x66408c */ if (fZ) goto L_0066408c;
L_00664058:; BB(0x00664058);
    /* 00664058: mov esi, 0xa8faf0 */ r_esi = 0xa8faf0u;
    /* 0066405d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0066405f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664061: je 0x66406c */ if (fZ) goto L_0066406c;
L_00664063:; BB(0x00664063);
    /* 00664063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664067: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664069: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x66406cu); call_ind(t); }
L_0066406c:; BB(0x0066406c);
    /* 0066406c: mov ebx, 0xa8faf4 */ r_ebx = 0xa8faf4u;
    /* 00664071: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00664073: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664075: je 0x664080 */ if (fZ) goto L_00664080;
L_00664077:; BB(0x00664077);
    /* 00664077: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00664079: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066407b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066407d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x664080u); call_ind(t); }
L_00664080:; BB(0x00664080);
    /* 00664080: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00664085: mov dword ptr [0xa8faf8], eax */ W32((u32)(0xa8faf8u), r_eax);
    /* 0066408a: jmp 0x664096 */ goto L_00664096;
L_0066408c:; BB(0x0066408c);
    /* 0066408c: mov esi, 0xa8faf0 */ r_esi = 0xa8faf0u;
    /* 00664091: mov ebx, 0xa8faf4 */ r_ebx = 0xa8faf4u;
L_00664096:; BB(0x00664096);
    /* 00664096: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00664098: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x66409du); f_00835f78();
    /* 0066409d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0066409f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006640a1: je 0x6640ae */ if (fZ) goto L_006640ae;
L_006640a3:; BB(0x006640a3);
    /* 006640a3: push dword ptr [0xa8fb24] */ { u32 v = R32((u32)(0xa8fb24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006640a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006640ab: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6640aeu); call_ind(t); }
L_006640ae:; BB(0x006640ae);
    /* 006640ae: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006640b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006640b2: je 0x6640bf */ if (fZ) goto L_006640bf;
L_006640b4:; BB(0x006640b4);
    /* 006640b4: push dword ptr [0xa8fb20] */ { u32 v = R32((u32)(0xa8fb20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006640ba: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006640bc: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6640bfu); call_ind(t); }
L_006640bf:; BB(0x006640bf);
    /* 006640bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006640c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006640c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006640c2: ret  */ FN_RET(0x00663fa4); r_esp += 4; return;
}

