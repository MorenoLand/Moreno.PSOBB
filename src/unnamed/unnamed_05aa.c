#include "protos.h"

void f_005aa074(void) /* sub_5AA074 */
{
    FN_ENTER(0x005aa074);
    /* 005aa074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa075: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa079: push 0x8d8cb4 */ { u32 v = 0x8d8cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa07e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa085: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005aa08c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa08f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005aa092: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005aa095: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005aa098: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005aa09b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005aa09e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005aa0a1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005aa0a8: mov eax, ecx */ r_eax = r_ecx;
    /* 005aa0aa: mov edx, dword ptr [eax + 0x484] */ r_edx = R32((u32)(r_eax+0x484u));
    /* 005aa0b0: mov dword ptr [eax], 0xb0aca0 */ W32((u32)(r_eax), 0xb0aca0u);
    /* 005aa0b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa0b8: je 0x5aa0d3 */ if (fZ) goto L_005aa0d3;
L_005aa0ba:; BB(0x005aa0ba);
    /* 005aa0ba: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005aa0be: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aa0c3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005aa0c7: mov edx, ecx */ r_edx = r_ecx;
    /* 005aa0c9: mov dword ptr [edx + 0x484], 0 */ W32((u32)(r_edx+0x484u), 0x0u);
L_005aa0d3:; BB(0x005aa0d3);
    /* 005aa0d3: mov eax, ecx */ r_eax = r_ecx;
    /* 005aa0d5: mov edx, dword ptr [eax + 0x488] */ r_edx = R32((u32)(r_eax+0x488u));
    /* 005aa0db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa0dd: je 0x5aa0f8 */ if (fZ) goto L_005aa0f8;
L_005aa0df:; BB(0x005aa0df);
    /* 005aa0df: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005aa0e3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aa0e8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005aa0ec: mov edx, ecx */ r_edx = r_ecx;
    /* 005aa0ee: mov dword ptr [edx + 0x488], 0 */ W32((u32)(r_edx+0x488u), 0x0u);
L_005aa0f8:; BB(0x005aa0f8);
    /* 005aa0f8: mov eax, ecx */ r_eax = r_ecx;
    /* 005aa0fa: mov edx, dword ptr [eax + 0x47c] */ r_edx = R32((u32)(r_eax+0x47cu));
    /* 005aa100: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa102: je 0x5aa11d */ if (fZ) goto L_005aa11d;
L_005aa104:; BB(0x005aa104);
    /* 005aa104: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005aa108: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aa10d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005aa111: mov edx, ecx */ r_edx = r_ecx;
    /* 005aa113: mov dword ptr [edx + 0x47c], 0 */ W32((u32)(r_edx+0x47cu), 0x0u);
L_005aa11d:; BB(0x005aa11d);
    /* 005aa11d: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5aa122u); f_007b9c8c();
    /* 005aa122: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005aa129: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa12c: lea ecx, [eax + 0x490] */ r_ecx = (u32)(r_eax+0x490u);
    /* 005aa132: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5aa137u); f_005769f8();
    /* 005aa137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa13e: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa143: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa146: lea edx, [eax + 0x3dc] */ r_edx = (u32)(r_eax+0x3dcu);
    /* 005aa14c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa14e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa151: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5aa156u); f_008586d6();
    /* 005aa156: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa159: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x5aa15eu); f_0051f4fc();
    /* 005aa15e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aa161: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa163: jne 0x5aa175 */ if (!fZ) goto L_005aa175;
L_005aa165:; BB(0x005aa165);
    /* 005aa165: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa168: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa16f: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa172: ret 4 */ FN_RET(0x005aa074); r_esp += 8; return;
L_005aa175:; BB(0x005aa175);
    /* 005aa175: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa179: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5aa17eu); f_005c2f74();
    /* 005aa17e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa17f: jmp 0x5aa165 */ goto L_005aa165;
}

void f_005aa184(void) /* sub_5AA184 */
{
    FN_ENTER(0x005aa184);
    /* 005aa184: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa18a: jne 0x5aa1f1 */ if (!fZ) goto L_005aa1f1;
L_005aa18c:; BB(0x005aa18c);
    /* 005aa18c: mov eax, dword ptr [0xa74884] */ r_eax = R32((u32)(0xa74884u));
    /* 005aa191: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa194: jl 0x5aa244 */ if ((fS!=fO)) goto L_005aa244;
L_005aa19a:; BB(0x005aa19a);
    /* 005aa19a: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa19d: jg 0x5aa244 */ if ((!fZ&&fS==fO)) goto L_005aa244;
L_005aa1a3:; BB(0x005aa1a3);
    /* 005aa1a3: push 0xa74874 */ { u32 v = 0xa74874u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1a8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005aa1ad: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005aa1b3: mov ecx, dword ptr [0xaf0374] */ r_ecx = R32((u32)(0xaf0374u));
    /* 005aa1b9: mov dword ptr [0xa7483c], eax */ W32((u32)(0xa7483cu), r_eax);
    /* 005aa1be: mov dword ptr [0xa7482c], edx */ W32((u32)(0xa7482cu), r_edx);
    /* 005aa1c4: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 005aa1ca: mov dword ptr [0xa74830], ecx */ W32((u32)(0xa74830u), r_ecx);
    /* 005aa1d0: mov dword ptr [0xa74834], edx */ W32((u32)(0xa74834u), r_edx);
    /* 005aa1d6: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aa1d9: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 005aa1df: mov dword ptr [0xa74838], edx */ W32((u32)(0xa74838u), r_edx);
    /* 005aa1e5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005aa1ea: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5aa1efu); f_0082d710();
    /* 005aa1ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa1f0: ret  */ FN_RET(0x005aa184); r_esp += 4; return;
L_005aa1f1:; BB(0x005aa1f1);
    /* 005aa1f1: mov eax, dword ptr [0xa74884] */ r_eax = R32((u32)(0xa74884u));
    /* 005aa1f6: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa1f9: jl 0x5aa23c */ if ((fS!=fO)) goto L_005aa23c;
L_005aa1fb:; BB(0x005aa1fb);
    /* 005aa1fb: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa1fe: jg 0x5aa23c */ if ((!fZ&&fS==fO)) goto L_005aa23c;
L_005aa200:; BB(0x005aa200);
    /* 005aa200: mov edx, dword ptr [0xa7482c] */ r_edx = R32((u32)(0xa7482cu));
    /* 005aa206: mov ecx, dword ptr [0xa74830] */ r_ecx = R32((u32)(0xa74830u));
    /* 005aa20c: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 005aa212: mov edx, dword ptr [0xa74834] */ r_edx = R32((u32)(0xa74834u));
    /* 005aa218: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 005aa21e: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 005aa224: mov edx, dword ptr [0xa74838] */ r_edx = R32((u32)(0xa74838u));
    /* 005aa22a: mov dword ptr [0xaf037c], edx */ W32((u32)(0xaf037cu), r_edx);
    /* 005aa230: mov edx, dword ptr [0xa7483c] */ r_edx = R32((u32)(0xa7483cu));
    /* 005aa236: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
L_005aa23c:; BB(0x005aa23c);
    /* 005aa23c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa23f: mov dword ptr [0xa74884], eax */ W32((u32)(0xa74884u), r_eax);
L_005aa244:; BB(0x005aa244);
    /* 005aa244: ret  */ FN_RET(0x005aa184); r_esp += 4; return;
}

void f_005aa248(void) /* sub_5AA248 */
{
    FN_ENTER(0x005aa248);
    /* 005aa248: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005aa24c: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa24f: ja 0x5aa2d4 */ if ((!fC&&!fZ)) goto L_005aa2d4;
L_005aa255:; BB(0x005aa255);
    /* 005aa255: mov eax, dword ptr [eax*4 + 0x92a480] */ r_eax = R32((u32)(r_eax*4+0x92a480u));
    /* 005aa25c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa248); r_esp += 12; return;
}

void f_005aa25e(void)
{
    FN_ENTER(0x005aa25e);
    /* 005aa25e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa262: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa263: call 0x571174 */ r_esp -= 4; W32(r_esp, 0x5aa268u); f_00571174();
    /* 005aa268: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa25e); r_esp += 12; return;
}

void f_005aa26a(void)
{
    FN_ENTER(0x005aa26a);
    /* 005aa26a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa26e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa26f: call 0x5aa2d8 */ r_esp -= 4; W32(r_esp, 0x5aa274u); f_005aa2d8();
    /* 005aa274: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa26a); r_esp += 12; return;
}

void f_005aa276(void)
{
    FN_ENTER(0x005aa276);
    /* 005aa276: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa27b: call 0x5aa400 */ r_esp -= 4; W32(r_esp, 0x5aa280u); f_005aa400();
    /* 005aa280: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa276); r_esp += 12; return;
}

void f_005aa282(void)
{
    FN_ENTER(0x005aa282);
    /* 005aa282: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa286: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa287: call 0x5aa4fc */ r_esp -= 4; W32(r_esp, 0x5aa28cu); f_005aa4fc();
    /* 005aa28c: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa282); r_esp += 12; return;
}

void f_005aa28e(void)
{
    FN_ENTER(0x005aa28e);
    /* 005aa28e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa293: call 0x5aa60c */ r_esp -= 4; W32(r_esp, 0x5aa298u); f_005aa60c();
    /* 005aa298: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa28e); r_esp += 12; return;
}

void f_005aa29a(void)
{
    FN_ENTER(0x005aa29a);
    /* 005aa29a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa29f: call 0x5aaebc */ r_esp -= 4; W32(r_esp, 0x5aa2a4u); f_005aaebc();
    /* 005aa2a4: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa29a); r_esp += 12; return;
}

void f_005aa2a6(void)
{
    FN_ENTER(0x005aa2a6);
    /* 005aa2a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2ab: call 0x5ab20c */ r_esp -= 4; W32(r_esp, 0x5aa2b0u); f_005ab20c();
    /* 005aa2b0: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa2a6); r_esp += 12; return;
}

void f_005aa2b2(void)
{
    FN_ENTER(0x005aa2b2);
    /* 005aa2b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa2b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2b7: call 0x5ab780 */ r_esp -= 4; W32(r_esp, 0x5aa2bcu); f_005ab780();
    /* 005aa2bc: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa2b2); r_esp += 12; return;
}

void f_005aa2be(void)
{
    FN_ENTER(0x005aa2be);
    /* 005aa2be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa2c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2c3: call 0x5ab87c */ r_esp -= 4; W32(r_esp, 0x5aa2c8u); f_005ab87c();
    /* 005aa2c8: jmp 0x5aa2d4 */ goto L_005aa2d4;
L_005aa2d4:; BB(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa2be); r_esp += 12; return;
}

void f_005aa2ca(void)
{
    FN_ENTER(0x005aa2ca);
    /* 005aa2ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa2ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2cf: call 0x5738b0 */ r_esp -= 4; W32(r_esp, 0x5aa2d4u); f_005738b0();
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa2ca); r_esp += 12; return;
}

void f_005aa2d4(void)
{
    FN_ENTER(0x005aa2d4);
    /* 005aa2d4: ret 8 */ FN_RET(0x005aa2d4); r_esp += 12; return;
}

void f_005aa2d8(void) /* sub_5AA2D8 */
{
    FN_ENTER(0x005aa2d8);
    /* 005aa2d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2d9: mov edi, ecx */ r_edi = r_ecx;
    /* 005aa2db: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa2df: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa2e2: je 0x5aa3a2 */ if (fZ) goto L_005aa3a2;
L_005aa2e8:; BB(0x005aa2e8);
    /* 005aa2e8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa2eb: je 0x5aa38a */ if (fZ) goto L_005aa38a;
L_005aa2f1:; BB(0x005aa2f1);
    /* 005aa2f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa2f3: jne 0x5aa39e */ if (!fZ) goto L_005aa39e;
L_005aa2f9:; BB(0x005aa2f9);
    /* 005aa2f9: mov eax, dword ptr [edi + 0x4b0] */ r_eax = R32((u32)(r_edi+0x4b0u));
    /* 005aa2ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa301: jne 0x5aa348 */ if (!fZ) goto L_005aa348;
L_005aa303:; BB(0x005aa303);
    /* 005aa303: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa305: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aa30au); f_007aa094();
    /* 005aa30a: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005aa310: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005aa312: je 0x5aa33a */ if (fZ) goto L_005aa33a;
L_005aa314:; BB(0x005aa314);
    /* 005aa314: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005aa31a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa31b: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x5aa320u); f_005787fc();
    /* 005aa320: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa321: mov eax, dword ptr [edi + 0x490] */ r_eax = R32((u32)(r_edi+0x490u));
    /* 005aa327: lea ecx, [edi + 0x490] */ r_ecx = (u32)(r_edi+0x490u);
    /* 005aa32d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5aa330u); call_ind(t); }
    /* 005aa330: mov dword ptr [edi + 0x4b0], 1 */ W32((u32)(r_edi+0x4b0u), 0x1u);
L_005aa33a:; BB(0x005aa33a);
    /* 005aa33a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005aa33c: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa33e: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5aa344u); call_ind(t); }
    /* 005aa344: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa345: ret 4 */ FN_RET(0x005aa2d8); r_esp += 8; return;
L_005aa348:; BB(0x005aa348);
    /* 005aa348: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa34b: jne 0x5aa37c */ if (!fZ) goto L_005aa37c;
L_005aa34d:; BB(0x005aa34d);
    /* 005aa34d: mov eax, dword ptr [edi + 0x490] */ r_eax = R32((u32)(r_edi+0x490u));
    /* 005aa353: lea ecx, [edi + 0x490] */ r_ecx = (u32)(r_edi+0x490u);
    /* 005aa359: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5aa35cu); call_ind(t); }
    /* 005aa35c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa35e: je 0x5aa39e */ if (fZ) goto L_005aa39e;
L_005aa360:; BB(0x005aa360);
    /* 005aa360: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa362: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005aa365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa366: call 0x5785c8 */ r_esp -= 4; W32(r_esp, 0x5aa36bu); f_005785c8();
    /* 005aa36b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa36e: mov dword ptr [edi + 0x4b0], 2 */ W32((u32)(r_edi+0x4b0u), 0x2u);
    /* 005aa378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa379: ret 4 */ FN_RET(0x005aa2d8); r_esp += 8; return;
L_005aa37c:; BB(0x005aa37c);
    /* 005aa37c: mov dword ptr [edi + 0x4b0], 2 */ W32((u32)(r_edi+0x4b0u), 0x2u);
    /* 005aa386: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa387: ret 4 */ FN_RET(0x005aa2d8); r_esp += 8; return;
L_005aa38a:; BB(0x005aa38a);
    /* 005aa38a: mov eax, dword ptr [edi + 0x4b0] */ r_eax = R32((u32)(r_edi+0x4b0u));
    /* 005aa390: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa393: jne 0x5aa39e */ if (!fZ) goto L_005aa39e;
L_005aa395:; BB(0x005aa395);
    /* 005aa395: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa397: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa399: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5aa39eu); f_0051f62c();
L_005aa39e:; BB(0x005aa39e);
    /* 005aa39e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa39f: ret 4 */ FN_RET(0x005aa2d8); r_esp += 8; return;
L_005aa3a2:; BB(0x005aa3a2);
    /* 005aa3a2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005aa3a4: mov eax, 9 */ r_eax = 0x9u;
    /* 005aa3a9: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005aa3b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa3b2: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5aa3b8u); call_ind(t); }
    /* 005aa3b8: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa3be: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa3c1: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 005aa3c7: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa3c9: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5aa3ceu); f_0051f894();
    /* 005aa3ce: mov dword ptr [edi + 0x4b0], 0 */ W32((u32)(r_edi+0x4b0u), 0x0u);
    /* 005aa3d8: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aa3ddu); f_00807ac0();
    /* 005aa3dd: push dword ptr [eax*4 + 0x9c0dd8] */ { u32 v = R32((u32)(r_eax*4+0x9c0dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa3e4: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa3e6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aa3ebu); f_007879b8();
    /* 005aa3eb: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005aa3ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa3f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aa3f9u); f_00814298();
    /* 005aa3f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa3fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa3fd: ret 4 */ FN_RET(0x005aa2d8); r_esp += 8; return;
}

void f_005aa400(void) /* sub_5AA400 */
{
    FN_ENTER(0x005aa400);
    /* 005aa400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa401: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005aa403: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa407: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa40a: je 0x5aa473 */ if (fZ) goto L_005aa473;
L_005aa40c:; BB(0x005aa40c);
    /* 005aa40c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa40f: je 0x5aa458 */ if (fZ) goto L_005aa458;
L_005aa411:; BB(0x005aa411);
    /* 005aa411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa413: jne 0x5aa43d */ if (!fZ) goto L_005aa43d;
L_005aa415:; BB(0x005aa415);
    /* 005aa415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa417: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aa41cu); f_007aa094();
    /* 005aa41c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005aa41f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa421: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5aa427u); call_ind(t); }
    /* 005aa427: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005aa42a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa42c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5aa432u); call_ind(t); }
    /* 005aa432: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa434: call 0x5aa4d0 */ r_esp -= 4; W32(r_esp, 0x5aa439u); f_005aa4d0();
    /* 005aa439: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa43a: ret 4 */ FN_RET(0x005aa400); r_esp += 8; return;
L_005aa43d:; BB(0x005aa43d);
    /* 005aa43d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa440: jne 0x5aa46f */ if (!fZ) goto L_005aa46f;
L_005aa442:; BB(0x005aa442);
    /* 005aa442: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005aa445: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa44a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005aa44d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa44f: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5aa454u); f_0051f81c();
    /* 005aa454: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa455: ret 4 */ FN_RET(0x005aa400); r_esp += 8; return;
L_005aa458:; BB(0x005aa458);
    /* 005aa458: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005aa45e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa460: je 0x5aa46f */ if (fZ) goto L_005aa46f;
L_005aa462:; BB(0x005aa462);
    /* 005aa462: push dword ptr [ebp + 0x380] */ { u32 v = R32((u32)(r_ebp+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa468: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa46a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5aa46fu); f_0051f62c();
L_005aa46f:; BB(0x005aa46f);
    /* 005aa46f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa470: ret 4 */ FN_RET(0x005aa400); r_esp += 8; return;
L_005aa473:; BB(0x005aa473);
    /* 005aa473: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005aa476: mov eax, 7 */ r_eax = 0x7u;
    /* 005aa47b: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005aa482: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa484: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5aa48au); call_ind(t); }
    /* 005aa48a: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa48f: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 005aa495: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa498: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 005aa49e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa4a0: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5aa4a5u); f_00779df0();
    /* 005aa4a5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aa4aau); f_00807ac0();
    /* 005aa4aa: push dword ptr [eax*4 + 0x9c0dfc] */ { u32 v = R32((u32)(r_eax*4+0x9c0dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa4b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa4b3: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aa4b8u); f_007879b8();
    /* 005aa4b8: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005aa4bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa4bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4c1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aa4c6u); f_00814298();
    /* 005aa4c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa4c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa4ca: ret 4 */ FN_RET(0x005aa400); r_esp += 8; return;
}

void f_005aa4d0(void) /* sub_5AA4D0 */
{
    FN_ENTER(0x005aa4d0);
    /* 005aa4d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005aa4d3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aa4d8u); f_00807ac0();
    /* 005aa4d8: push dword ptr [eax*4 + 0x9c0e68] */ { u32 v = R32((u32)(r_eax*4+0x9c0e68u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa4df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aa4e1: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aa4e6u); f_007879b8();
    /* 005aa4e6: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa4e8: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005aa4eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa4ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4f2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5aa4f7u); f_008144b0();
    /* 005aa4f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa4fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005aa4fb: ret  */ FN_RET(0x005aa4d0); r_esp += 4; return;
}

void f_005aa4fc(void) /* sub_5AA4FC */
{
    FN_ENTER(0x005aa4fc);
    /* 005aa4fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005aa4ff: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa503: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa506: je 0x5aa5a0 */ if (fZ) goto L_005aa5a0;
L_005aa50c:; BB(0x005aa50c);
    /* 005aa50c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa50f: je 0x5aa585 */ if (fZ) goto L_005aa585;
L_005aa511:; BB(0x005aa511);
    /* 005aa511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa513: jne 0x5aa56a */ if (!fZ) goto L_005aa56a;
L_005aa515:; BB(0x005aa515);
    /* 005aa515: mov eax, dword ptr [ebp + 0x4b0] */ r_eax = R32((u32)(r_ebp+0x4b0u));
    /* 005aa51b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aa51e: mov dword ptr [ebp + 0x4b0], eax */ W32((u32)(r_ebp+0x4b0u), r_eax);
    /* 005aa524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005aa526: jl 0x5aa542 */ if ((fS!=fO)) goto L_005aa542;
L_005aa528:; BB(0x005aa528);
    /* 005aa528: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa52d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa52f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aa534u); f_007aaa30();
    /* 005aa534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa536: je 0x5aa542 */ if (fZ) goto L_005aa542;
L_005aa538:; BB(0x005aa538);
    /* 005aa538: mov dword ptr [ebp + 0xc0], 0x41000000 */ W32((u32)(r_ebp+0xc0u), 0x41000000u);
L_005aa542:; BB(0x005aa542);
    /* 005aa542: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa544: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aa549u); f_007aa094();
    /* 005aa549: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005aa54c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa54e: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5aa554u); call_ind(t); }
    /* 005aa554: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005aa557: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa559: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5aa55fu); call_ind(t); }
    /* 005aa55f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa561: call 0x5aa4d0 */ r_esp -= 4; W32(r_esp, 0x5aa566u); f_005aa4d0();
    /* 005aa566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa567: ret 4 */ FN_RET(0x005aa4fc); r_esp += 8; return;
L_005aa56a:; BB(0x005aa56a);
    /* 005aa56a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa56d: jne 0x5aa59c */ if (!fZ) goto L_005aa59c;
L_005aa56f:; BB(0x005aa56f);
    /* 005aa56f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005aa572: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa577: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005aa57a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa57c: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5aa581u); f_0051f81c();
    /* 005aa581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa582: ret 4 */ FN_RET(0x005aa4fc); r_esp += 8; return;
L_005aa585:; BB(0x005aa585);
    /* 005aa585: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005aa58b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa58d: je 0x5aa59c */ if (fZ) goto L_005aa59c;
L_005aa58f:; BB(0x005aa58f);
    /* 005aa58f: push dword ptr [ebp + 0x380] */ { u32 v = R32((u32)(r_ebp+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa595: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa597: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5aa59cu); f_0051f62c();
L_005aa59c:; BB(0x005aa59c);
    /* 005aa59c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa59d: ret 4 */ FN_RET(0x005aa4fc); r_esp += 8; return;
L_005aa5a0:; BB(0x005aa5a0);
    /* 005aa5a0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005aa5a3: mov eax, 8 */ r_eax = 0x8u;
    /* 005aa5a8: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005aa5af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa5b1: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5aa5b7u); call_ind(t); }
    /* 005aa5b7: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5bc: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 005aa5c2: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa5c5: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 005aa5cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa5cd: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5aa5d2u); f_00779df0();
    /* 005aa5d2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aa5d7u); f_00807ac0();
    /* 005aa5d7: push dword ptr [eax*4 + 0x9c0dfc] */ { u32 v = R32((u32)(r_eax*4+0x9c0dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa5de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005aa5e0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aa5e5u); f_007879b8();
    /* 005aa5e5: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa5e7: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005aa5ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa5ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5f0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aa5f5u); f_00814298();
    /* 005aa5f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa5f8: mov eax, dword ptr [0xa7485c] */ r_eax = R32((u32)(0xa7485cu));
    /* 005aa5fd: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005aa600: mov dword ptr [ebp + 0x4b0], edx */ W32((u32)(r_ebp+0x4b0u), r_edx);
    /* 005aa606: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa607: ret 4 */ FN_RET(0x005aa4fc); r_esp += 8; return;
}

void f_005aa60c(void) /* sub_5AA60C */
{
    FN_ENTER(0x005aa60c);
    /* 005aa60c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005aa60d: mov edi, ecx */ r_edi = r_ecx;
    /* 005aa60f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aa613: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa616: je 0x5aa800 */ if (fZ) goto L_005aa800;
L_005aa61c:; BB(0x005aa61c);
    /* 005aa61c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa61f: je 0x5aa7a0 */ if (fZ) goto L_005aa7a0;
L_005aa625:; BB(0x005aa625);
    /* 005aa625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa627: jne 0x5aa7b4 */ if (!fZ) goto L_005aa7b4;
L_005aa62d:; BB(0x005aa62d);
    /* 005aa62d: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa62f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aa634u); f_007aa094();
    /* 005aa634: mov eax, dword ptr [edi + 0x4b0] */ r_eax = R32((u32)(r_edi+0x4b0u));
    /* 005aa63a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa63c: jne 0x5aa6f4 */ if (!fZ) goto L_005aa6f4;
L_005aa642:; BB(0x005aa642);
    /* 005aa642: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa644: call 0x5aa8f0 */ r_esp -= 4; W32(r_esp, 0x5aa649u); f_005aa8f0();
    /* 005aa649: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 005aa64f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aa652: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 005aa658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005aa65a: jle 0x5aa7b8 */ if ((fZ||fS!=fO)) goto L_005aa7b8;
L_005aa660:; BB(0x005aa660);
    /* 005aa660: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa662: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5aa667u); f_0052126c();
    /* 005aa667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa669: je 0x5aa679 */ if (fZ) goto L_005aa679;
L_005aa66b:; BB(0x005aa66b);
    /* 005aa66b: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa66d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5aa672u); f_005213d8();
    /* 005aa672: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa674: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5aa679u); f_00521410();
L_005aa679:; BB(0x005aa679);
    /* 005aa679: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005aa67b: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa67d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5aa683u); call_ind(t); }
    /* 005aa683: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa689: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005aa68b: je 0x5aa694 */ if (fZ) goto L_005aa694;
L_005aa68d:; BB(0x005aa68d);
    /* 005aa68d: mov eax, 1 */ r_eax = 0x1u;
    /* 005aa692: jmp 0x5aa696 */ goto L_005aa696;
L_005aa694:; BB(0x005aa694);
    /* 005aa694: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005aa696:; BB(0x005aa696);
    /* 005aa696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa698: je 0x5aa76d */ if (fZ) goto L_005aa76d;
L_005aa69e:; BB(0x005aa69e);
    /* 005aa69e: mov ecx, dword ptr [edi + 0x4b4] */ r_ecx = R32((u32)(r_edi+0x4b4u));
    /* 005aa6a4: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 005aa6a9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005aa6ab: mov eax, ecx */ r_eax = r_ecx;
    /* 005aa6ad: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005aa6b0: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aa6b2: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005aa6b5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005aa6b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aa6b9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005aa6bc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aa6be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aa6c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aa6c2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005aa6c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa6c6: jne 0x5aa76d */ if (!fZ) goto L_005aa76d;
L_005aa6cc:; BB(0x005aa6cc);
    /* 005aa6cc: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aa6d1u); f_00807ac0();
    /* 005aa6d1: push dword ptr [eax*4 + 0x9c0d90] */ { u32 v = R32((u32)(r_eax*4+0x9c0d90u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa6d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa6da: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aa6dfu); f_007879b8();
    /* 005aa6df: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa6e1: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005aa6e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa6e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6ea: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aa6efu); f_00814298();
    /* 005aa6ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa6f2: jmp 0x5aa76d */ goto L_005aa76d;
L_005aa6f4:; BB(0x005aa6f4);
    /* 005aa6f4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa6f7: jne 0x5aa76d */ if (!fZ) goto L_005aa76d;
L_005aa6f9:; BB(0x005aa6f9);
    /* 005aa6f9: push dword ptr [edi + 0x4c4] */ { u32 v = R32((u32)(r_edi+0x4c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa6ff: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa701: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aa706u); f_007aaa30();
    /* 005aa706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa708: jne 0x5aa712 */ if (!fZ) goto L_005aa712;
L_005aa70a:; BB(0x005aa70a);
    /* 005aa70a: mov eax, dword ptr [edi + 0x4bc] */ r_eax = R32((u32)(r_edi+0x4bcu));
    /* 005aa710: jmp 0x5aa74e */ goto L_005aa74e;
L_005aa712:; BB(0x005aa712);
    /* 005aa712: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa714: call 0x5aa998 */ r_esp -= 4; W32(r_esp, 0x5aa719u); f_005aa998();
    /* 005aa719: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aa71eu); f_00807ac0();
    /* 005aa71e: push dword ptr [eax*4 + 0x9c0db4] */ { u32 v = R32((u32)(r_eax*4+0x9c0db4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa725: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa727: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aa72cu); f_007879b8();
    /* 005aa72c: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa72e: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005aa731: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aa733: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa734: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa736: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa737: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aa73cu); f_00814298();
    /* 005aa73c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa73f: mov dword ptr [edi + 0x4bc], 1 */ W32((u32)(r_edi+0x4bcu), 0x1u);
    /* 005aa749: mov eax, 1 */ r_eax = 0x1u;
L_005aa74e:; BB(0x005aa74e);
    /* 005aa74e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa750: jne 0x5aa759 */ if (!fZ) goto L_005aa759;
L_005aa752:; BB(0x005aa752);
    /* 005aa752: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa754: call 0x5aa8f0 */ r_esp -= 4; W32(r_esp, 0x5aa759u); f_005aa8f0();
L_005aa759:; BB(0x005aa759);
    /* 005aa759: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005aa75f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005aa761: je 0x5aa76d */ if (fZ) goto L_005aa76d;
L_005aa763:; BB(0x005aa763);
    /* 005aa763: mov dword ptr [edi + 0x4b0], 3 */ W32((u32)(r_edi+0x4b0u), 0x3u);
L_005aa76d:; BB(0x005aa76d);
    /* 005aa76d: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa76f: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5aa774u); f_005213d8();
    /* 005aa774: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa776: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5aa77bu); f_00521410();
    /* 005aa77b: push dword ptr [edi + 0x48c] */ { u32 v = R32((u32)(r_edi+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa781: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa783: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5aa788u); f_00772358();
    /* 005aa788: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005aa78a: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa78c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5aa792u); call_ind(t); }
    /* 005aa792: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005aa794: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa796: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5aa79cu); call_ind(t); }
    /* 005aa79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa79d: ret 4 */ FN_RET(0x005aa60c); r_esp += 8; return;
L_005aa7a0:; BB(0x005aa7a0);
    /* 005aa7a0: mov eax, dword ptr [edi + 0x4b0] */ r_eax = R32((u32)(r_edi+0x4b0u));
    /* 005aa7a6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aa7a9: jne 0x5aa7b4 */ if (!fZ) goto L_005aa7b4;
L_005aa7ab:; BB(0x005aa7ab);
    /* 005aa7ab: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa7ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa7af: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5aa7b4u); f_0051f62c();
L_005aa7b4:; BB(0x005aa7b4);
    /* 005aa7b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa7b5: ret 4 */ FN_RET(0x005aa60c); r_esp += 8; return;
L_005aa7b8:; BB(0x005aa7b8);
    /* 005aa7b8: mov eax, dword ptr [edi + 0x4b8] */ r_eax = R32((u32)(r_edi+0x4b8u));
    /* 005aa7be: mov edx, dword ptr [edi + 0x450] */ r_edx = R32((u32)(r_edi+0x450u));
    /* 005aa7c4: mov dword ptr [edi + 0x4b0], 1 */ W32((u32)(r_edi+0x4b0u), 0x1u);
    /* 005aa7ce: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005aa7d5: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005aa7db: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 005aa7e1: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aa7e6: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 005aa7ec: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa7f2: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa7f5: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 005aa7fb: jmp 0x5aa660 */ goto L_005aa660;
L_005aa800:; BB(0x005aa800);
    /* 005aa800: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa806: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005aa808: je 0x5aa811 */ if (fZ) goto L_005aa811;
L_005aa80a:; BB(0x005aa80a);
    /* 005aa80a: mov eax, 1 */ r_eax = 0x1u;
    /* 005aa80f: jmp 0x5aa813 */ goto L_005aa813;
L_005aa811:; BB(0x005aa811);
    /* 005aa811: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005aa813:; BB(0x005aa813);
    /* 005aa813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa815: je 0x5aa856 */ if (fZ) goto L_005aa856;
L_005aa817:; BB(0x005aa817);
    /* 005aa817: mov eax, dword ptr [0xa7485c] */ r_eax = R32((u32)(0xa7485cu));
    /* 005aa81c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005aa81f: mov dword ptr [edi + 0x4c4], 0x41000000 */ W32((u32)(r_edi+0x4c4u), 0x41000000u);
    /* 005aa829: mov dword ptr [edi + 0x4b4], edx */ W32((u32)(r_edi+0x4b4u), r_edx);
    /* 005aa82f: mov dword ptr [edi + 0x4b8], 0 */ W32((u32)(r_edi+0x4b8u), 0x0u);
    /* 005aa839: mov eax, 3 */ r_eax = 0x3u;
    /* 005aa83e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005aa845: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa84b: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aa84e: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 005aa854: jmp 0x5aa893 */ goto L_005aa893;
L_005aa856:; BB(0x005aa856);
    /* 005aa856: mov eax, dword ptr [0xa7485c] */ r_eax = R32((u32)(0xa7485cu));
    /* 005aa85b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005aa85e: mov dword ptr [edi + 0x4c4], 0x41500000 */ W32((u32)(r_edi+0x4c4u), 0x41500000u);
    /* 005aa868: mov dword ptr [edi + 0x4b4], edx */ W32((u32)(r_edi+0x4b4u), r_edx);
    /* 005aa86e: mov dword ptr [edi + 0x4b8], 4 */ W32((u32)(r_edi+0x4b8u), 0x4u);
    /* 005aa878: mov eax, 2 */ r_eax = 0x2u;
    /* 005aa87d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005aa884: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa88a: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aa88d: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
L_005aa893:; BB(0x005aa893);
    /* 005aa893: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 005aa899: mov dword ptr [edi + 0x4bc], 0 */ W32((u32)(r_edi+0x4bcu), 0x0u);
    /* 005aa8a3: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005aa8a9: mov dword ptr [edi + 0x454], eax */ W32((u32)(r_edi+0x454u), r_eax);
    /* 005aa8af: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa8b1: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005aa8b7: mov dword ptr [edi + 0x458], edx */ W32((u32)(r_edi+0x458u), r_edx);
    /* 005aa8bd: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 005aa8c3: mov dword ptr [edi + 0x45c], eax */ W32((u32)(r_edi+0x45cu), r_eax);
    /* 005aa8c9: mov ecx, edi */ r_ecx = r_edi;
    /* 005aa8cb: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5aa8d0u); f_0051f664();
    /* 005aa8d0: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005aa8d6: mov dword ptr [edi + 0x4b0], 0 */ W32((u32)(r_edi+0x4b0u), 0x0u);
    /* 005aa8e0: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa8e3: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 005aa8e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aa8ea: ret 4 */ FN_RET(0x005aa60c); r_esp += 8; return;
}

void f_005aa8f0(void) /* sub_5AA8F0 */
{
    FN_ENTER(0x005aa8f0);
    /* 005aa8f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005aa8f1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa8f4: mov esi, ecx */ r_esi = r_ecx;
    /* 005aa8f6: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005aa8fc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005aa8fe: je 0x5aa907 */ if (fZ) goto L_005aa907;
L_005aa900:; BB(0x005aa900);
    /* 005aa900: mov eax, 1 */ r_eax = 0x1u;
    /* 005aa905: jmp 0x5aa909 */ goto L_005aa909;
L_005aa907:; BB(0x005aa907);
    /* 005aa907: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005aa909:; BB(0x005aa909);
    /* 005aa909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa90b: je 0x5aa93d */ if (fZ) goto L_005aa93d;
L_005aa90d:; BB(0x005aa90d);
    /* 005aa90d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005aa911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa912: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa914: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005aa916: mov ecx, esi */ r_ecx = r_esi;
    /* 005aa918: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5aa91eu); call_ind(t); }
    /* 005aa91e: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005aa922: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005aa928: push dword ptr [eax*4 + 0x92a664] */ { u32 v = R32((u32)(r_eax*4+0x92a664u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa92f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa930: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5aa935u); f_0050b510();
    /* 005aa935: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa938: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa93b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005aa93c: ret  */ FN_RET(0x005aa8f0); r_esp += 4; return;
L_005aa93d:; BB(0x005aa93d);
    /* 005aa93d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005aa940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa941: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa943: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005aa945: mov ecx, esi */ r_ecx = r_esi;
    /* 005aa947: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5aa94du); call_ind(t); }
    /* 005aa94d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005aa950: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005aa956: push dword ptr [eax*4 + 0x92a664] */ { u32 v = R32((u32)(r_eax*4+0x92a664u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa95d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa95e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5aa963u); f_0050b510();
    /* 005aa963: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa966: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005aa96a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa96b: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa96d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005aa96f: mov ecx, esi */ r_ecx = r_esi;
    /* 005aa971: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5aa977u); call_ind(t); }
    /* 005aa977: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005aa97b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005aa981: push dword ptr [eax*4 + 0x92a664] */ { u32 v = R32((u32)(r_eax*4+0x92a664u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aa988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa989: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5aa98eu); f_0050b510();
    /* 005aa98e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa991: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aa994: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005aa995: ret  */ FN_RET(0x005aa8f0); r_esp += 4; return;
}

void f_005aa998(void) /* sub_5AA998 */
{
    FN_ENTER(0x005aa998);
    /* 005aa998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa999: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa99b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa99d: push 0x8d8d1a */ { u32 v = 0x8d8d1au; r_esp -= 4; W32(r_esp, v); }
    /* 005aa9a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa9a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005aa9b0: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa9b6: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005aa9b9: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005aa9bc: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005aa9bf: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005aa9c2: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 005aa9c8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005aa9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aa9cd: je 0x5aaea3 */ if (fZ) goto L_005aaea3;
L_005aa9d3:; BB(0x005aa9d3);
    /* 005aa9d3: mov eax, ecx */ r_eax = r_ecx;
    /* 005aa9d5: mov edx, dword ptr [eax + 0x44c] */ r_edx = R32((u32)(r_eax+0x44cu));
    /* 005aa9db: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005aa9de: je 0x5aa9e7 */ if (fZ) goto L_005aa9e7;
L_005aa9e0:; BB(0x005aa9e0);
    /* 005aa9e0: mov eax, 1 */ r_eax = 0x1u;
    /* 005aa9e5: jmp 0x5aa9e9 */ goto L_005aa9e9;
L_005aa9e7:; BB(0x005aa9e7);
    /* 005aa9e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005aa9e9:; BB(0x005aa9e9);
    /* 005aa9e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa9eb: je 0x5aab5a */ if (fZ) goto L_005aab5a;
L_005aa9f1:; BB(0x005aa9f1);
    /* 005aa9f1: mov eax, dword ptr [0xa7485c] */ r_eax = R32((u32)(0xa7485cu));
    /* 005aa9f6: lea ebx, [ebp - 0x68] */ r_ebx = (u32)(r_ebp+0xffffff98u);
    /* 005aa9f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa9fa: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005aa9fd: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005aa9ff: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aaa02: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa04: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5aaa0au); call_ind(t); }
    /* 005aaa0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aaa0d: mov eax, dword ptr [eax + 0x3c8] */ r_eax = R32((u32)(r_eax+0x3c8u));
    /* 005aaa13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaa15: je 0x5aab37 */ if (fZ) goto L_005aab37;
L_005aaa1b:; BB(0x005aaa1b);
    /* 005aaa1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaa1e: jne 0x5aaa43 */ if (!fZ) goto L_005aaa43;
L_005aaa20:; BB(0x005aaa20);
    /* 005aaa20: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aaa23: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aaa26: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 005aaa29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa2a: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005aaa30: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aaa33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa36: call 0x6e4058 */ r_esp -= 4; W32(r_esp, 0x5aaa3bu); f_006e4058();
    /* 005aaa3b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aaa3e: jmp 0x5aaea3 */ goto L_005aaea3;
L_005aaa43:; BB(0x005aaa43);
    /* 005aaa43: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aaa46: jne 0x5aaea3 */ if (!fZ) goto L_005aaea3;
L_005aaa4c:; BB(0x005aaa4c);
    /* 005aaa4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aaa4f: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005aaa52: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 005aaa55: mov ebx, dword ptr [eax + 0x454] */ r_ebx = R32((u32)(r_eax+0x454u));
    /* 005aaa5b: mov dword ptr [ebp - 0x5c], ebx */ W32((u32)(r_ebp+0xffffffa4u), r_ebx);
    /* 005aaa5e: mov esi, dword ptr [eax + 0x458] */ r_esi = R32((u32)(r_eax+0x458u));
    /* 005aaa64: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 005aaa67: mov edi, dword ptr [eax + 0x45c] */ r_edi = R32((u32)(r_eax+0x45cu));
    /* 005aaa6d: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 005aaa70: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 005aaa73: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005aaa76: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 005aaa79: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5aaa7eu); f_0082f9c4();
    /* 005aaa7e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005aaa81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa82: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x5aaa87u); f_00782868();
    /* 005aaa87: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 005aaa8a: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005aaa91: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa96: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5aaa9bu); f_005caba4();
    /* 005aaa9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aaa9e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005aaaa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaaa3: je 0x5aaae2 */ if (fZ) goto L_005aaae2;
L_005aaaa5:; BB(0x005aaaa5);
    /* 005aaaa5: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 005aaaac: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005aaab3: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 005aaab9: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 005aaabc: lea ebx, [ebp - 0x68] */ r_ebx = (u32)(r_ebp+0xffffff98u);
    /* 005aaabf: lea esi, [ebp - 0x50] */ r_esi = (u32)(r_ebp+0xffffffb0u);
    /* 005aaac2: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aaac5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005aaac9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005aaacc: mov ecx, eax */ r_ecx = r_eax;
    /* 005aaace: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005aaad2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005aaad6: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x5aaadbu); f_006f37c0();
    /* 005aaadb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005aaae2:; BB(0x005aaae2);
    /* 005aaae2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aaae9: mov eax, dword ptr [0x92a650] */ r_eax = R32((u32)(0x92a650u));
    /* 005aaaee: mov edx, dword ptr [0x92a660] */ r_edx = R32((u32)(0x92a660u));
    /* 005aaaf4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aaaf7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005aaafa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaafb: mov dword ptr [ebp - 0x38], 0x40a00000 */ W32((u32)(r_ebp+0xffffffc8u), 0x40a00000u);
    /* 005aab02: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005aab05: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005aab07: mov dword ptr [ebp - 0x34], 0x40400000 */ W32((u32)(r_ebp+0xffffffccu), 0x40400000u);
    /* 005aab0e: mov dword ptr [ebp - 0x30], 0x40400000 */ W32((u32)(r_ebp+0xffffffd0u), 0x40400000u);
    /* 005aab15: call 0x6dec5c */ r_esp -= 4; W32(r_esp, 0x5aab1au); f_006dec5c();
    /* 005aab1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aab1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aab20: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 005aab23: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005aab26: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 005aab29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aab2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aab2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab2d: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x5aab32u); f_0051fc9c();
    /* 005aab32: jmp 0x5aaea3 */ goto L_005aaea3;
L_005aab37:; BB(0x005aab37);
    /* 005aab37: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aab3a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aab3d: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 005aab40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aab41: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005aab47: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aab4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab4d: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x5aab52u); f_006e3408();
    /* 005aab52: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aab55: jmp 0x5aaea3 */ goto L_005aaea3;
L_005aab5a:; BB(0x005aab5a);
    /* 005aab5a: mov eax, dword ptr [0xa7485c] */ r_eax = R32((u32)(0xa7485cu));
    /* 005aab5f: lea ebx, [ebp - 0xe8] */ r_ebx = (u32)(r_ebp+0xffffff18u);
    /* 005aab65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab66: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005aab69: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005aab6b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aab6e: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005aab70: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5aab76u); call_ind(t); }
    /* 005aab76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aab79: mov eax, dword ptr [eax + 0x3c8] */ r_eax = R32((u32)(r_eax+0x3c8u));
    /* 005aab7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aab81: je 0x5aace8 */ if (fZ) goto L_005aace8;
L_005aab87:; BB(0x005aab87);
    /* 005aab87: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aab8a: jne 0x5aabb2 */ if (!fZ) goto L_005aabb2;
L_005aab8c:; BB(0x005aab8c);
    /* 005aab8c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aab8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aab92: lea ecx, [ebp - 0xe8] */ r_ecx = (u32)(r_ebp+0xffffff18u);
    /* 005aab98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aab99: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005aab9f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aaba2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaba4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaba5: call 0x6e4058 */ r_esp -= 4; W32(r_esp, 0x5aabaau); f_006e4058();
    /* 005aabaa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aabad: jmp 0x5aad09 */ goto L_005aad09;
L_005aabb2:; BB(0x005aabb2);
    /* 005aabb2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aabb5: jne 0x5aad09 */ if (!fZ) goto L_005aad09;
L_005aabbb:; BB(0x005aabbb);
    /* 005aabbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aabbe: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 005aabc4: lea edx, [ebp - 0xe8] */ r_edx = (u32)(r_ebp+0xffffff18u);
    /* 005aabca: mov ebx, dword ptr [eax + 0x454] */ r_ebx = R32((u32)(r_eax+0x454u));
    /* 005aabd0: mov dword ptr [ebp - 0xdc], ebx */ W32((u32)(r_ebp+0xffffff24u), r_ebx);
    /* 005aabd6: mov esi, dword ptr [eax + 0x458] */ r_esi = R32((u32)(r_eax+0x458u));
    /* 005aabdc: mov dword ptr [ebp - 0xd8], esi */ W32((u32)(r_ebp+0xffffff28u), r_esi);
    /* 005aabe2: mov edi, dword ptr [eax + 0x45c] */ r_edi = R32((u32)(r_eax+0x45cu));
    /* 005aabe8: mov dword ptr [ebp - 0xd4], edi */ W32((u32)(r_ebp+0xffffff2cu), r_edi);
    /* 005aabee: mov dword ptr [ebp - 0xd0], ebx */ W32((u32)(r_ebp+0xffffff30u), r_ebx);
    /* 005aabf4: mov dword ptr [ebp - 0xcc], esi */ W32((u32)(r_ebp+0xffffff34u), r_esi);
    /* 005aabfa: mov dword ptr [ebp - 0xc8], edi */ W32((u32)(r_ebp+0xffffff38u), r_edi);
    /* 005aac00: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5aac05u); f_0082f9c4();
    /* 005aac05: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 005aac0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aac0c: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x5aac11u); f_00782868();
    /* 005aac11: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 005aac14: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 005aac1e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005aac23: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5aac28u); f_005caba4();
    /* 005aac28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aac2b: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005aac31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aac33: je 0x5aac7e */ if (fZ) goto L_005aac7e;
L_005aac35:; BB(0x005aac35);
    /* 005aac35: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
    /* 005aac3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aac46: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 005aac4c: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 005aac4f: lea ebx, [ebp - 0xe8] */ r_ebx = (u32)(r_ebp+0xffffff18u);
    /* 005aac55: lea esi, [ebp - 0xd0] */ r_esi = (u32)(r_ebp+0xffffff30u);
    /* 005aac5b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aac5e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005aac62: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005aac65: mov ecx, eax */ r_ecx = r_eax;
    /* 005aac67: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005aac6b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005aac6f: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x5aac74u); f_006f37c0();
    /* 005aac74: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005aac7e:; BB(0x005aac7e);
    /* 005aac7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aac85: mov eax, dword ptr [0x92a650] */ r_eax = R32((u32)(0x92a650u));
    /* 005aac8a: mov edx, dword ptr [0x92a660] */ r_edx = R32((u32)(0x92a660u));
    /* 005aac90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aac93: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005aac99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aac9a: mov dword ptr [ebp - 0xb8], 0x40a00000 */ W32((u32)(r_ebp+0xffffff48u), 0x40a00000u);
    /* 005aaca4: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005aacaa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005aacac: mov dword ptr [ebp - 0xb4], 0x40400000 */ W32((u32)(r_ebp+0xffffff4cu), 0x40400000u);
    /* 005aacb6: mov dword ptr [ebp - 0xb0], 0x40400000 */ W32((u32)(r_ebp+0xffffff50u), 0x40400000u);
    /* 005aacc0: call 0x6dec5c */ r_esp -= 4; W32(r_esp, 0x5aacc5u); f_006dec5c();
    /* 005aacc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aacc8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aaccb: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 005aacd1: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 005aacd7: lea eax, [ebp - 0xbc] */ r_eax = (u32)(r_ebp+0xffffff44u);
    /* 005aacdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aacdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aace0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aace1: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x5aace6u); f_0051fc9c();
    /* 005aace6: jmp 0x5aad09 */ goto L_005aad09;
L_005aace8:; BB(0x005aace8);
    /* 005aace8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aaceb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aacee: lea ecx, [ebp - 0xe8] */ r_ecx = (u32)(r_ebp+0xffffff18u);
    /* 005aacf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aacf5: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005aacfb: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aacfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aacff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aad00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aad01: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x5aad06u); f_006e3408();
    /* 005aad06: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aad09:; BB(0x005aad09);
    /* 005aad09: mov eax, dword ptr [0xa7485c] */ r_eax = R32((u32)(0xa7485cu));
    /* 005aad0e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aad11: lea ebx, [ebp - 0xa8] */ r_ebx = (u32)(r_ebp+0xffffff58u);
    /* 005aad17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aad18: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005aad1b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005aad1d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aad20: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005aad22: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5aad28u); call_ind(t); }
    /* 005aad28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aad2b: mov eax, dword ptr [eax + 0x3c8] */ r_eax = R32((u32)(r_eax+0x3c8u));
    /* 005aad31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aad33: je 0x5aae82 */ if (fZ) goto L_005aae82;
L_005aad39:; BB(0x005aad39);
    /* 005aad39: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aad3c: jne 0x5aad64 */ if (!fZ) goto L_005aad64;
L_005aad3e:; BB(0x005aad3e);
    /* 005aad3e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aad41: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aad44: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 005aad4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aad4b: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005aad51: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aad54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aad55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aad56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aad57: call 0x6e4058 */ r_esp -= 4; W32(r_esp, 0x5aad5cu); f_006e4058();
    /* 005aad5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aad5f: jmp 0x5aaea3 */ goto L_005aaea3;
L_005aad64:; BB(0x005aad64);
    /* 005aad64: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aad67: jne 0x5aaea3 */ if (!fZ) goto L_005aaea3;
L_005aad6d:; BB(0x005aad6d);
    /* 005aad6d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aad70: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 005aad76: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 005aad7c: mov ebx, dword ptr [eax + 0x454] */ r_ebx = R32((u32)(r_eax+0x454u));
    /* 005aad82: mov dword ptr [ebp - 0x9c], ebx */ W32((u32)(r_ebp+0xffffff64u), r_ebx);
    /* 005aad88: mov esi, dword ptr [eax + 0x458] */ r_esi = R32((u32)(r_eax+0x458u));
    /* 005aad8e: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 005aad94: mov edi, dword ptr [eax + 0x45c] */ r_edi = R32((u32)(r_eax+0x45cu));
    /* 005aad9a: mov dword ptr [ebp - 0x94], edi */ W32((u32)(r_ebp+0xffffff6cu), r_edi);
    /* 005aada0: mov dword ptr [ebp - 0x90], ebx */ W32((u32)(r_ebp+0xffffff70u), r_ebx);
    /* 005aada6: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 005aadac: mov dword ptr [ebp - 0x88], edi */ W32((u32)(r_ebp+0xffffff78u), r_edi);
    /* 005aadb2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5aadb7u); f_0082f9c4();
    /* 005aadb7: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 005aadbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aadbe: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x5aadc3u); f_00782868();
    /* 005aadc3: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 005aadc6: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 005aadd0: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005aadd5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5aaddau); f_005caba4();
    /* 005aadda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aaddd: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005aade0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aade2: je 0x5aae2d */ if (fZ) goto L_005aae2d;
L_005aade4:; BB(0x005aade4);
    /* 005aade4: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 005aadee: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aadf5: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 005aadfb: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 005aadfe: lea ebx, [ebp - 0xa8] */ r_ebx = (u32)(r_ebp+0xffffff58u);
    /* 005aae04: lea esi, [ebp - 0x90] */ r_esi = (u32)(r_ebp+0xffffff70u);
    /* 005aae0a: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aae0d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005aae11: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005aae14: mov ecx, eax */ r_ecx = r_eax;
    /* 005aae16: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005aae1a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005aae1e: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x5aae23u); f_006f37c0();
    /* 005aae23: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005aae2d:; BB(0x005aae2d);
    /* 005aae2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aae34: mov eax, dword ptr [0x92a650] */ r_eax = R32((u32)(0x92a650u));
    /* 005aae39: mov edx, dword ptr [0x92a660] */ r_edx = R32((u32)(0x92a660u));
    /* 005aae3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aae42: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005aae45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae46: mov dword ptr [ebp - 0x78], 0x40a00000 */ W32((u32)(r_ebp+0xffffff88u), 0x40a00000u);
    /* 005aae4d: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005aae50: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae52: mov dword ptr [ebp - 0x74], 0x40400000 */ W32((u32)(r_ebp+0xffffff8cu), 0x40400000u);
    /* 005aae59: mov dword ptr [ebp - 0x70], 0x40400000 */ W32((u32)(r_ebp+0xffffff90u), 0x40400000u);
    /* 005aae60: call 0x6dec5c */ r_esp -= 4; W32(r_esp, 0x5aae65u); f_006dec5c();
    /* 005aae65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aae68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aae6b: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 005aae6e: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005aae74: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 005aae77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aae7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae7b: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x5aae80u); f_0051fc9c();
    /* 005aae80: jmp 0x5aaea3 */ goto L_005aaea3;
L_005aae82:; BB(0x005aae82);
    /* 005aae82: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aae85: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aae88: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 005aae8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aae8f: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005aae95: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aae98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae9b: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x5aaea0u); f_006e3408();
    /* 005aaea0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005aaea3:; BB(0x005aaea3);
    /* 005aaea3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaea6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aaea9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aaeac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aaeaf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aaeb6: mov esp, ebp */ r_esp = r_ebp;
    /* 005aaeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aaeb9: ret  */ FN_RET(0x005aa998); r_esp += 4; return;
}

void f_005aade0(void)
{
    FN_ENTER(0x005aade0);
    /* 005aade0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aade2: je 0x5aae2d */ if (fZ) goto L_005aae2d;
L_005aade4:; BB(0x005aade4);
    /* 005aade4: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 005aadee: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aadf5: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 005aadfb: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 005aadfe: lea ebx, [ebp - 0xa8] */ r_ebx = (u32)(r_ebp+0xffffff58u);
    /* 005aae04: lea esi, [ebp - 0x90] */ r_esi = (u32)(r_ebp+0xffffff70u);
    /* 005aae0a: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aae0d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005aae11: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005aae14: mov ecx, eax */ r_ecx = r_eax;
    /* 005aae16: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005aae1a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005aae1e: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x5aae23u); f_006f37c0();
    /* 005aae23: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005aae2d:; BB(0x005aae2d);
    /* 005aae2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aae34: mov eax, dword ptr [0x92a650] */ r_eax = R32((u32)(0x92a650u));
    /* 005aae39: mov edx, dword ptr [0x92a660] */ r_edx = R32((u32)(0x92a660u));
    /* 005aae3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aae42: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005aae45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae46: mov dword ptr [ebp - 0x78], 0x40a00000 */ W32((u32)(r_ebp+0xffffff88u), 0x40a00000u);
    /* 005aae4d: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005aae50: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae52: mov dword ptr [ebp - 0x74], 0x40400000 */ W32((u32)(r_ebp+0xffffff8cu), 0x40400000u);
    /* 005aae59: mov dword ptr [ebp - 0x70], 0x40400000 */ W32((u32)(r_ebp+0xffffff90u), 0x40400000u);
    /* 005aae60: call 0x6dec5c */ r_esp -= 4; W32(r_esp, 0x5aae65u); f_006dec5c();
    /* 005aae65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aae68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aae6b: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 005aae6e: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005aae74: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 005aae77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aae7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aae7b: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x5aae80u); f_0051fc9c();
    /* 005aae80: jmp 0x5aaea3 */ goto L_005aaea3;
L_005aaea3:; BB(0x005aaea3);
    /* 005aaea3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaea6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aaea9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aaeac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aaeaf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aaeb6: mov esp, ebp */ r_esp = r_ebp;
    /* 005aaeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aaeb9: ret  */ FN_RET(0x005aade0); r_esp += 4; return;
}

void f_005aaebc(void) /* sub_5AAEBC */
{
    FN_ENTER(0x005aaebc);
    /* 005aaebc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aaebd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaebe: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aaec1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005aaec3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005aaec7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaeca: je 0x5ab0b1 */ if (fZ) goto L_005ab0b1;
L_005aaed0:; BB(0x005aaed0);
    /* 005aaed0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaed3: je 0x5ab0a9 */ if (fZ) goto L_005ab0a9;
L_005aaed9:; BB(0x005aaed9);
    /* 005aaed9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaedc: je 0x5ab095 */ if (fZ) goto L_005ab095;
L_005aaee2:; BB(0x005aaee2);
    /* 005aaee2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaee4: jne 0x5ab0a9 */ if (!fZ) goto L_005ab0a9;
L_005aaeea:; BB(0x005aaeea);
    /* 005aaeea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aaeec: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5aaef1u); f_0052126c();
    /* 005aaef1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aaef3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aaef8u); f_007aa094();
    /* 005aaef8: mov eax, dword ptr [ebx + 0x4b0] */ r_eax = R32((u32)(r_ebx+0x4b0u));
    /* 005aaefe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaf00: je 0x5aaf38 */ if (fZ) goto L_005aaf38;
L_005aaf02:; BB(0x005aaf02);
    /* 005aaf02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaf05: jne 0x5ab057 */ if (!fZ) goto L_005ab057;
L_005aaf0b:; BB(0x005aaf0b);
    /* 005aaf0b: mov eax, dword ptr [ebx + 0x4b4] */ r_eax = R32((u32)(r_ebx+0x4b4u));
    /* 005aaf11: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aaf14: mov dword ptr [ebx + 0x4b4], eax */ W32((u32)(r_ebx+0x4b4u), r_eax);
    /* 005aaf1a: mov edx, dword ptr [0xa7485c] */ r_edx = R32((u32)(0xa7485cu));
    /* 005aaf20: cmp eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aaf23: jl 0x5ab057 */ if ((fS!=fO)) goto L_005ab057;
L_005aaf29:; BB(0x005aaf29);
    /* 005aaf29: mov dword ptr [ebx + 0x4b0], 2 */ W32((u32)(r_ebx+0x4b0u), 0x2u);
    /* 005aaf33: jmp 0x5ab057 */ goto L_005ab057;
L_005aaf38:; BB(0x005aaf38);
    /* 005aaf38: fld dword ptr [0x92a63c] */ FPUSH(R_F32((u32)(0x92a63cu)));
    /* 005aaf3e: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 005aaf44: fsub dword ptr [ebx + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xc8u));
    /* 005aaf4a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005aaf4b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005aaf4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aaf50: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aaf55u); f_007aaa30();
    /* 005aaf55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaf57: je 0x5aaf93 */ if (fZ) goto L_005aaf93;
L_005aaf59:; BB(0x005aaf59);
    /* 005aaf59: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 005aaf5f: mov dword ptr [ebx + 0x4b4], 0 */ W32((u32)(r_ebx+0x4b4u), 0x0u);
    /* 005aaf69: mov edx, 1 */ r_edx = 0x1u;
    /* 005aaf6e: mov dword ptr [ebx + 0x4b0], edx */ W32((u32)(r_ebx+0x4b0u), r_edx);
    /* 005aaf74: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 005aaf7e: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aaf81: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 005aaf87: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005aaf8e: jmp 0x5ab057 */ goto L_005ab057;
L_005aaf93:; BB(0x005aaf93);
    /* 005aaf93: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaf98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aaf9a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aaf9fu); f_007aaa30();
    /* 005aaf9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aafa1: je 0x5ab00b */ if (fZ) goto L_005ab00b;
L_005aafa3:; BB(0x005aafa3);
    /* 005aafa3: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 005aafa9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aafab: je 0x5ab00b */ if (fZ) goto L_005ab00b;
L_005aafad:; BB(0x005aafad);
    /* 005aafad: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aafb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aafb3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005aafb5: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5aafb8u); call_ind(t); }
    /* 005aafb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aafba: je 0x5ab00b */ if (fZ) goto L_005ab00b;
L_005aafbc:; BB(0x005aafbc);
    /* 005aafbc: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005aafc2: mov edx, dword ptr [eax*4 + 0x92a614] */ r_edx = R32((u32)(r_eax*4+0x92a614u));
    /* 005aafc9: movsx eax, word ptr [ebx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c4u));
    /* 005aafd0: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 005aafd6: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 005aafd8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005aafdc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005aafdf: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005aafe2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005aafe6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005aafeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aafec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aafed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aafef: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aaff3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaff4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaff5: call dword ptr [ebp + 0x60] */ { u32 t = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, 0x5aaff8u); call_ind(t); }
    /* 005aaff8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005aaffa: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aafff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab000: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 005ab006: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ab008: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5ab00bu); call_ind(t); }
L_005ab00b:; BB(0x005ab00b);
    /* 005ab00b: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab010: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab012: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5ab017u); f_007aaa30();
    /* 005ab017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab019: je 0x5ab03f */ if (fZ) goto L_005ab03f;
L_005ab01b:; BB(0x005ab01b);
    /* 005ab01b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ab020u); f_00807ac0();
    /* 005ab020: push dword ptr [eax*4 + 0x9c0e20] */ { u32 v = R32((u32)(r_eax*4+0x9c0e20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab027: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab029: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ab02eu); f_007879b8();
    /* 005ab02e: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 005ab031: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ab033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab035: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab037: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ab03cu); f_00814298();
    /* 005ab03c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ab03f:; BB(0x005ab03f);
    /* 005ab03f: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005ab045: fcomp dword ptr [0x92a610] */ fx_compare(ST(0), R_F32((u32)(0x92a610u))); FPOP();
    /* 005ab04b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab04d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab04e: jae 0x5ab057 */ if (!fC) goto L_005ab057;
L_005ab050:; BB(0x005ab050);
    /* 005ab050: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab052: call 0x5ab164 */ r_esp -= 4; W32(r_esp, 0x5ab057u); f_005ab164();
L_005ab057:; BB(0x005ab057);
    /* 005ab057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab059: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5ab05eu); f_005213d8();
    /* 005ab05e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab060: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5ab065u); f_00521410();
    /* 005ab065: push dword ptr [ebx + 0x48c] */ { u32 v = R32((u32)(r_ebx+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab06b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab06d: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5ab072u); f_00772358();
    /* 005ab072: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ab074: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab076: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5ab07cu); call_ind(t); }
    /* 005ab07c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ab07e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab080: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5ab086u); call_ind(t); }
    /* 005ab086: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab088: call 0x5aa4d0 */ r_esp -= 4; W32(r_esp, 0x5ab08du); f_005aa4d0();
    /* 005ab08d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab090: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab092: ret 4 */ FN_RET(0x005aaebc); r_esp += 8; return;
L_005ab095:; BB(0x005ab095);
    /* 005ab095: mov eax, dword ptr [ebx + 0x4b0] */ r_eax = R32((u32)(r_ebx+0x4b0u));
    /* 005ab09b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab09e: jne 0x5ab0a9 */ if (!fZ) goto L_005ab0a9;
L_005ab0a0:; BB(0x005ab0a0);
    /* 005ab0a0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab0a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab0a4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab0a9u); f_0051f62c();
L_005ab0a9:; BB(0x005ab0a9);
    /* 005ab0a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab0ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab0ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab0ae: ret 4 */ FN_RET(0x005aaebc); r_esp += 8; return;
L_005ab0b1:; BB(0x005ab0b1);
    /* 005ab0b1: mov edx, dword ptr [ebx + 0x480] */ r_edx = R32((u32)(r_ebx+0x480u));
    /* 005ab0b7: mov ebp, dword ptr [ebx + 0xb0] */ r_ebp = R32((u32)(r_ebx+0xb0u));
    /* 005ab0bd: mov eax, 6 */ r_eax = 0x6u;
    /* 005ab0c2: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005ab0c9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ab0cb: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 005ab0d1: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 005ab0d7: mov dword ptr [ebx + 0xb0], ebp */ W32((u32)(r_ebx+0xb0u), r_ebp);
    /* 005ab0dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab0df: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5ab0e5u); call_ind(t); }
    /* 005ab0e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab0e7: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 005ab0ed: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ab0f0: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 005ab0f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab0f8: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5ab0fdu); f_0051f664();
    /* 005ab0fd: mov ecx, dword ptr [ebx + 0x484] */ r_ecx = R32((u32)(r_ebx+0x484u));
    /* 005ab103: mov dword ptr [ebx + 0x4b0], 0 */ W32((u32)(r_ebx+0x4b0u), 0x0u);
    /* 005ab10d: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x5ab112u); f_007a7d3c();
    /* 005ab112: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005ab118: mov edx, dword ptr [eax*4 + 0x92a5fc] */ r_edx = R32((u32)(r_eax*4+0x92a5fcu));
    /* 005ab11f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab120: mov ecx, dword ptr [ebx + 0x484] */ r_ecx = R32((u32)(r_ebx+0x484u));
    /* 005ab126: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab127: call 0x576d90 */ r_esp -= 4; W32(r_esp, 0x5ab12cu); f_00576d90();
    /* 005ab12c: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 005ab132: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x5ab137u); f_007a7d3c();
    /* 005ab137: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005ab13d: mov edx, dword ptr [eax*4 + 0x92a5fc] */ r_edx = R32((u32)(r_eax*4+0x92a5fcu));
    /* 005ab144: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab145: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 005ab14b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab14c: call 0x576d90 */ r_esp -= 4; W32(r_esp, 0x5ab151u); f_00576d90();
    /* 005ab151: mov dword ptr [ebx + 0x4b4], 0 */ W32((u32)(r_ebx+0x4b4u), 0x0u);
    /* 005ab15b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab15e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab15f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab160: ret 4 */ FN_RET(0x005aaebc); r_esp += 8; return;
}

